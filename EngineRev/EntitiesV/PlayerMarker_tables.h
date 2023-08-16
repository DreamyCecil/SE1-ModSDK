// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CPlayerMarker

CEntityProperty CPlayerMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x194<<8)+1, 0xF4, "Health", 'H', "m_fHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x194<<8)+2, 0xF8, "Shield", 'S', "m_fShield", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x194<<8)+3, 0xFC, "Give Weapons", 'W', "m_iGiveWeapons", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x194<<8)+4, 0x100, "Take Weapons", 0, "m_iTakeWeapons", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x194<<8)+5, 0x104, "Group", 'G', "m_strGroup", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x194<<8)+6, 0x108, "Quick start", 'Q', "m_bQuickStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x194<<8)+7, 0x10C, "Start in computer", 'C', "m_bStartInComputer", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x194<<8)+8, 0x110, "Message", 'M', "m_penMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x194<<8)+9, 0x114, "Max ammo ratio", 'A', "m_fMaxAmmoRatio", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x194<<8)+10, 0x118, "", 0, "m_tmLastSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x194<<8)+11, 0x11C, "Take Ammo", 0, "m_iTakeAmmo", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x194<<8)+12, 0x120, "No Respawn In Place", 'R', "m_bNoRespawnInPlace", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x194<<8)+13, 0x124, "Team", 'T', "m_iTeam", 0x7F0000FFUL, 0),
};
#define CPlayerMarker_propertiesct ARRAYCOUNT(CPlayerMarker_properties)

CEntityComponent CPlayerMarker_components[] = {
#define MODEL_MARKER ((0x00000194<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\PlayerStart.mdl"),
#define TEXTURE_MARKER ((0x00000194<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\PlayerStart.tex"),
};
#define CPlayerMarker_componentsct ARRAYCOUNT(CPlayerMarker_components)

CEventHandlerEntry CPlayerMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPlayerMarker::Main),DEBUGSTRING("CPlayerMarker::Main")},
};
#define CPlayerMarker_handlersct ARRAYCOUNT(CPlayerMarker_handlers)

CEntity *CPlayerMarker_New(void) { return new CPlayerMarker; };
void CPlayerMarker_OnInitClass(void) {};
void CPlayerMarker_OnEndClass(void) {};
void CPlayerMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerMarker_OnWorldEnd(CWorld *pwo) {};
void CPlayerMarker_OnWorldInit(CWorld *pwo) {};
void CPlayerMarker_OnWorldTick(CWorld *pwo) {};
void CPlayerMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerMarker, CMarker, "Player Marker", "Thumbnails\\PlayerMarker.tbn", 404);
DECLARE_CTFILENAME(_fnmCPlayerMarker_tbn, "Thumbnails\\PlayerMarker.tbn");
