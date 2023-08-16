// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CGizmo

CEntityProperty CGizmo_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x14f<<8)+1, 0x5C0, "", 0, "m_bExploded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x14f<<8)+2, 0x5C4, "", 0, "m_bIsSpawnedByWalker", 0x0UL, 0),
};
#define CGizmo_propertiesct ARRAYCOUNT(CGizmo_properties)

CEntityComponent CGizmo_components[] = {
#define CLASS_BASE ((0x0000014f<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000014f<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000014f<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_GIZMO ((0x0000014f<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_GIZMO, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.mdl"),
#define TEXTURE_GIZMO ((0x0000014f<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GIZMO, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.tex"),
#define SOUND_IDLE ((0x0000014f<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Idle.wav"),
#define SOUND_JUMP ((0x0000014f<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_JUMP, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Jump.wav"),
#define SOUND_DEATH_JUMP ((0x0000014f<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_DEATH_JUMP, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\JumpDeath.wav"),
#define SOUND_SIGHT ((0x0000014f<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Sight.wav"),
};
#define CGizmo_componentsct ARRAYCOUNT(CGizmo_components)

CEventHandlerEntry CGizmo_handlers[] = {
 {0x014f0000, STATE_CEnemyBase_PerformAttack, CEntity::pEventHandler(&CGizmo::PerformAttack),DEBUGSTRING("CGizmo::PerformAttack")},
 {0x014f0001, -1, CEntity::pEventHandler(&CGizmo::H0x014f0001_PerformAttack_01), DEBUGSTRING("CGizmo::H0x014f0001_PerformAttack_01")},
 {0x014f0002, -1, CEntity::pEventHandler(&CGizmo::H0x014f0002_PerformAttack_02), DEBUGSTRING("CGizmo::H0x014f0002_PerformAttack_02")},
 {0x014f0003, -1, CEntity::pEventHandler(&CGizmo::H0x014f0003_PerformAttack_03), DEBUGSTRING("CGizmo::H0x014f0003_PerformAttack_03")},
 {0x014f0004, -1, CEntity::pEventHandler(&CGizmo::H0x014f0004_PerformAttack_04), DEBUGSTRING("CGizmo::H0x014f0004_PerformAttack_04")},
 {0x014f0005, -1, CEntity::pEventHandler(&CGizmo::H0x014f0005_PerformAttack_05), DEBUGSTRING("CGizmo::H0x014f0005_PerformAttack_05")},
 {0x014f0006, -1, CEntity::pEventHandler(&CGizmo::H0x014f0006_PerformAttack_06), DEBUGSTRING("CGizmo::H0x014f0006_PerformAttack_06")},
 {0x014f0007, -1, CEntity::pEventHandler(&CGizmo::JumpOnce),DEBUGSTRING("CGizmo::JumpOnce")},
 {0x014f0008, -1, CEntity::pEventHandler(&CGizmo::H0x014f0008_JumpOnce_01), DEBUGSTRING("CGizmo::H0x014f0008_JumpOnce_01")},
 {0x014f0009, -1, CEntity::pEventHandler(&CGizmo::H0x014f0009_JumpOnce_02), DEBUGSTRING("CGizmo::H0x014f0009_JumpOnce_02")},
 {0x014f000a, -1, CEntity::pEventHandler(&CGizmo::H0x014f000a_JumpOnce_03), DEBUGSTRING("CGizmo::H0x014f000a_JumpOnce_03")},
 {0x014f000b, -1, CEntity::pEventHandler(&CGizmo::H0x014f000b_JumpOnce_04), DEBUGSTRING("CGizmo::H0x014f000b_JumpOnce_04")},
 {1, -1, CEntity::pEventHandler(&CGizmo::Main),DEBUGSTRING("CGizmo::Main")},
};
#define CGizmo_handlersct ARRAYCOUNT(CGizmo_handlers)

CEntity *CGizmo_New(void) { return new CGizmo; };
void CGizmo_OnInitClass(void) {};
void CGizmo_OnEndClass(void) {};
void CGizmo_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGizmo_OnWorldEnd(CWorld *pwo) {};
void CGizmo_OnWorldInit(CWorld *pwo) {};
void CGizmo_OnWorldTick(CWorld *pwo) {};
void CGizmo_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGizmo, CEnemyBase, "Gizmo", "Thumbnails\\Gizmo.tbn", 335);
DECLARE_CTFILENAME(_fnmCGizmo_tbn, "Thumbnails\\Gizmo.tbn");
