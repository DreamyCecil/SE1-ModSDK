// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CVehicle

CEntityProperty CVehicle_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf4<<8)+1, 0x468, "V: Stuck to ground", 0, "m_bStuckToGround", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf4<<8)+2, 0x46C, "V: Ground hover height", 0, "m_fGroundHoverHeight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf4<<8)+3, 0x470, "V: Vertical speed multiplier", 0, "m_fVerticalSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf4<<8)+4, 0x474, "V: Movement speed multiplier", 0, "m_fMovementSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf4<<8)+5, 0x478, "V: Camera offset", 0, "m_fCameraOffset", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf4<<8)+6, 0x47C, "V: Camera pitch", 0, "m_fCameraPitch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf4<<8)+10, 0x480, "V: Enter message", 0, "m_strEnterMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf4<<8)+20, 0x484, "", 0, "m_penPlayerInside", 0x0UL, 0),
};
#define CVehicle_propertiesct ARRAYCOUNT(CVehicle_properties)

CEntityComponent CVehicle_components[] = {
 CEntityComponent(),
};
#define CVehicle_componentsct ARRAYCOUNT(CVehicle_components)

CEventHandlerEntry CVehicle_handlers[] = {
 {0xF40001, -1, CEntity::pEventHandler(&CVehicle::H0xF40001_Procedure_0), DEBUGSTRING("CVehicle::H0xF40001_Procedure_0")},
 {0xF40002, -1, CEntity::pEventHandler(&CVehicle::H0xF40002_Procedure_1), DEBUGSTRING("CVehicle::H0xF40002_Procedure_1")},
 {0xF40003, -1, CEntity::pEventHandler(&CVehicle::H0xF40003_Procedure_2), DEBUGSTRING("CVehicle::H0xF40003_Procedure_2")},
 {1, -1, CEntity::pEventHandler(&CVehicle::Main), DEBUGSTRING("CVehicle::Main")},
 {0xF40004, -1, CEntity::pEventHandler(&CVehicle::H0xF40004_Procedure_4), DEBUGSTRING("CVehicle::H0xF40004_Procedure_4")},
 {0xF40005, -1, CEntity::pEventHandler(&CVehicle::H0xF40005_Procedure_5), DEBUGSTRING("CVehicle::H0xF40005_Procedure_5")},
};
#define CVehicle_handlersct ARRAYCOUNT(CVehicle_handlers)

CEntity *CVehicle_New(void) { return new CVehicle; };
void CVehicle_OnInitClass(void) {};
void CVehicle_OnEndClass(void) {};
void CVehicle_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CVehicle_OnWorldEnd(CWorld *pwo) {};
void CVehicle_OnWorldInit(CWorld *pwo) {};
void CVehicle_OnWorldTick(CWorld *pwo) {};
void CVehicle_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CVehicle, CModelHolder2Movable, "Vehicle", "Thumbnails\\Vehicle.tbn", 244);
DECLARE_CTFILENAME(_fnmCVehicle_tbn, "Thumbnails\\Vehicle.tbn");
