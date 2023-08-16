// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(PlayerAutoAction)
  EP_ENUMVALUE(PAA_RUN, "Run"),
  EP_ENUMVALUE(PAA_WAIT, "Wait"),
  EP_ENUMVALUE(PAA_USEITEM, "UseItem"),
  EP_ENUMVALUE(PAA_STOREWEAPON, "StoreWeapon"),
  EP_ENUMVALUE(PAA_DRAWWEAPON, "DrawWeapon"),
  EP_ENUMVALUE(PAA_LOOKAROUND, "LookAround"),
  EP_ENUMVALUE(PAA_RUNANDSTOP, "RunAndStop"),
  EP_ENUMVALUE(PAA_RECORDSTATS, "RecordStats"),
  EP_ENUMVALUE(PAA_ENDOFGAME, "EndOfGame"),
  EP_ENUMVALUE(PAA_SHOWSTATS, "ShowStats"),
  EP_ENUMVALUE(PAA_APPEARING, "Appearing"),
  EP_ENUMVALUE(PAA_WAITFOREVER, "WaitForever"),
  EP_ENUMVALUE(PAA_TELEPORT, "Teleport"),
  EP_ENUMVALUE(PAA_PICKITEM, "PickItem"),
  EP_ENUMVALUE(PAA_FALLDOWN, "FallDown"),
  EP_ENUMVALUE(PAA_FALLTOABYSS, "FallToAbyss"),
  EP_ENUMVALUE(PAA_RELEASEPLAYER, "ReleasePlayer"),
  EP_ENUMVALUE(PAA_STARTCOMPUTER, "StartComputer"),
  EP_ENUMVALUE(PAA_TRAVELING_IN_BEAM, "TravelingInBeam"),
  EP_ENUMVALUE(PAA_LOGO_FIRE_MINIGUN, "LogoFireMinigun"),
  EP_ENUMVALUE(PAA_STARTCREDITS, "StartCredits"),
  EP_ENUMVALUE(PAA_STARTINTROSCROLL, "StartIntroScroll"),
  EP_ENUMVALUE(PAA_STOPSCROLLER, "StopScroller"),
  EP_ENUMVALUE(PAA_NOGRAVITY, "NoGravity"),
  EP_ENUMVALUE(PAA_TURNONGRAVITY, "TurnOnGravity"),
  EP_ENUMVALUE(PAA_LOGO_FIRE_INTROSE, "SE Logo Fire"),
  EP_ENUMVALUE(PAA_INTROSE_SELECT_WEAPON, "SE Logo draw weapon"),
  EP_ENUMVALUE(PAA_STOPANDWAIT, "StopAndWait"),
EP_ENUMEND(PlayerAutoAction);

#define ENTITYCLASS CPlayerActionMarker

CEntityProperty CPlayerActionMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &PlayerAutoAction_enum, (0x197<<8)+1, 0xF4, "Action", 'A', "m_paaAction", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x197<<8)+2, 0xF8, "Wait", 'W', "m_tmWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x197<<8)+3, 0xFC, "Door for item", 'D', "m_penDoorController", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x197<<8)+4, 0x100, "Trigger", 'G', "m_penTrigger", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x197<<8)+5, 0x104, "Speed", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x197<<8)+6, 0x108, "Item to pick", 'I', "m_penItem", 0x7F0000FFUL, 0),
};
#define CPlayerActionMarker_propertiesct ARRAYCOUNT(CPlayerActionMarker_properties)

CEntityComponent CPlayerActionMarker_components[] = {
#define MODEL_MARKER ((0x00000197<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\PlayerActionMarker.mdl"),
#define TEXTURE_MARKER ((0x00000197<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\PlayerActionMarker.tex"),
};
#define CPlayerActionMarker_componentsct ARRAYCOUNT(CPlayerActionMarker_components)

CEventHandlerEntry CPlayerActionMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPlayerActionMarker::Main),DEBUGSTRING("CPlayerActionMarker::Main")},
};
#define CPlayerActionMarker_handlersct ARRAYCOUNT(CPlayerActionMarker_handlers)

CEntity *CPlayerActionMarker_New(void) { return new CPlayerActionMarker; };
void CPlayerActionMarker_OnInitClass(void) {};
void CPlayerActionMarker_OnEndClass(void) {};
void CPlayerActionMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerActionMarker_OnWorldEnd(CWorld *pwo) {};
void CPlayerActionMarker_OnWorldInit(CWorld *pwo) {};
void CPlayerActionMarker_OnWorldTick(CWorld *pwo) {};
void CPlayerActionMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerActionMarker, CMarker, "PlayerActionMarker", "Thumbnails\\PlayerActionMarker.tbn", 407);
DECLARE_CTFILENAME(_fnmCPlayerActionMarker_tbn, "Thumbnails\\PlayerActionMarker.tbn");
