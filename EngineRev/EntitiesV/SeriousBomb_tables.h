// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSeriousBomb

CEntityProperty CSeriousBomb_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x162<<8)+1, 0x110, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x162<<8)+20, 0x114, "", 0, "m_soBlow", 0x0UL, 0),
};
#define CSeriousBomb_propertiesct ARRAYCOUNT(CSeriousBomb_properties)

CEntityComponent CSeriousBomb_components[] = {
#define SOUND_BLOW ((0x00000162<<8)+100)
 CEntityComponent(ECT_SOUND, SOUND_BLOW, "EFNM" "SoundsMP\\Weapons\\SeriousBombBlow.wav"),
};
#define CSeriousBomb_componentsct ARRAYCOUNT(CSeriousBomb_components)

CEventHandlerEntry CSeriousBomb_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSeriousBomb::Main),DEBUGSTRING("CSeriousBomb::Main")},
 {0x01620001, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620001_Main_01), DEBUGSTRING("CSeriousBomb::H0x01620001_Main_01")},
 {0x01620002, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620002_Main_02), DEBUGSTRING("CSeriousBomb::H0x01620002_Main_02")},
 {0x01620003, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620003_Main_03), DEBUGSTRING("CSeriousBomb::H0x01620003_Main_03")},
 {0x01620004, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620004_Main_04), DEBUGSTRING("CSeriousBomb::H0x01620004_Main_04")},
 {0x01620005, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620005_Main_05), DEBUGSTRING("CSeriousBomb::H0x01620005_Main_05")},
 {0x01620006, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620006_Main_06), DEBUGSTRING("CSeriousBomb::H0x01620006_Main_06")},
 {0x01620007, -1, CEntity::pEventHandler(&CSeriousBomb::H0x01620007_Main_07), DEBUGSTRING("CSeriousBomb::H0x01620007_Main_07")},
};
#define CSeriousBomb_handlersct ARRAYCOUNT(CSeriousBomb_handlers)

CEntity *CSeriousBomb_New(void) { return new CSeriousBomb; };
void CSeriousBomb_OnInitClass(void) {};
void CSeriousBomb_OnEndClass(void) {};
void CSeriousBomb_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CSeriousBomb_OnWorldEnd(CWorld *pwo) {};
void CSeriousBomb_OnWorldInit(CWorld *pwo) {};
void CSeriousBomb_OnWorldTick(CWorld *pwo) {};
void CSeriousBomb_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSeriousBomb, CRationalEntity, "Serious Bomb", "", 354);
DECLARE_CTFILENAME(_fnmCSeriousBomb_tbn, "");
