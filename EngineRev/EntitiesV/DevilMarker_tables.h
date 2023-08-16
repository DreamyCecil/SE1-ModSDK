// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(DevilActionType)
  EP_ENUMVALUE(DAT_NONE, "None"),
  EP_ENUMVALUE(DAT_WALK, "Walk"),
  EP_ENUMVALUE(DAT_RISE, "Rise"),
  EP_ENUMVALUE(DAT_ROAR, "Roar"),
  EP_ENUMVALUE(DAT_PUNCH_LEFT, "Punch left - obsolete"),
  EP_ENUMVALUE(DAT_PUNCH_RIGHT, "Punch right - obsolete"),
  EP_ENUMVALUE(DAT_HIT_GROUND, "Hit ground"),
  EP_ENUMVALUE(DAT_JUMP, "Jump"),
  EP_ENUMVALUE(DAT_WAIT, "Wait"),
  EP_ENUMVALUE(DAT_STOP_DESTROYING, "Stop destroying"),
  EP_ENUMVALUE(DAT_NEXT_ACTION, "Next action"),
  EP_ENUMVALUE(DAT_GRAB_LOWER_WEAPONS, "Grab lower weapons"),
  EP_ENUMVALUE(DAT_STOP_MOVING, "Stop moving"),
  EP_ENUMVALUE(DAT_JUMP_INTO_PYRAMID, "Jump into pyramid"),
  EP_ENUMVALUE(DAT_SMASH_LEFT, "Smash left - obsolete"),
  EP_ENUMVALUE(DAT_SMASH_RIGHT, "Smash right - obsolete"),
  EP_ENUMVALUE(DAT_PUNCH, "Punch"),
  EP_ENUMVALUE(DAT_SMASH, "Smash"),
  EP_ENUMVALUE(DAT_FORCE_ATTACK_RADIUS, "Force attack radius"),
  EP_ENUMVALUE(DAT_TELEPORT_INTO_PYRAMID, "Teleport into pyramid"),
  EP_ENUMVALUE(DAT_DECREASE_ATTACK_RADIUS, "Decrease attack radius"),
EP_ENUMEND(DevilActionType);

#define ENTITYCLASS CDevilMarker

CEntityProperty CDevilMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &DevilActionType_enum, (0x152<<8)+1, 0xF4, "Action", 'A', "m_datType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x152<<8)+4, 0xF8, "Wait idles", 'W', "m_iWaitIdles", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x152<<8)+5, 0xFC, "Devil", 'D', "m_penDevil", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x152<<8)+6, 0x100, "Trigger", 'G', "m_penTrigger", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x152<<8)+7, 0x104, "Destroy target 1", 'E', "m_penToDestroy1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x152<<8)+8, 0x108, "Destroy target 2", 'R', "m_penToDestroy2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x152<<8)+9, 0x10C, "Attack radius", 'S', "m_fAttackRadius", 0x7F0000FFUL, 0),
};
#define CDevilMarker_propertiesct ARRAYCOUNT(CDevilMarker_properties)

CEntityComponent CDevilMarker_components[] = {
#define MODEL_MARKER ((0x00000152<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\EnemyMarker.mdl"),
#define TEXTURE_MARKER ((0x00000152<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\DevilMarker.tex"),
};
#define CDevilMarker_componentsct ARRAYCOUNT(CDevilMarker_components)

CEventHandlerEntry CDevilMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CDevilMarker::Main),DEBUGSTRING("CDevilMarker::Main")},
};
#define CDevilMarker_handlersct ARRAYCOUNT(CDevilMarker_handlers)

CEntity *CDevilMarker_New(void) { return new CDevilMarker; };
void CDevilMarker_OnInitClass(void) {};
void CDevilMarker_OnEndClass(void) {};
void CDevilMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDevilMarker_OnWorldEnd(CWorld *pwo) {};
void CDevilMarker_OnWorldInit(CWorld *pwo) {};
void CDevilMarker_OnWorldTick(CWorld *pwo) {};
void CDevilMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDevilMarker, CMarker, "Devil Marker", "Thumbnails\\DevilMarker.tbn", 338);
DECLARE_CTFILENAME(_fnmCDevilMarker_tbn, "Thumbnails\\DevilMarker.tbn");
