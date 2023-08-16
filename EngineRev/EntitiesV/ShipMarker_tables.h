// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CShipMarker

CEntityProperty CShipMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x68<<8)+1, 0xF4, "Harbor", 'H', "m_bHarbor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+2, 0xF8, "Speed [m/s]", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+3, 0xFC, "Rotation [deg/s]", 'R', "m_fRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+4, 0x100, "Acceleration", 'C', "m_fAcceleration", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+5, 0x104, "Rocking V", 'V', "m_fRockingV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+6, 0x108, "Rocking A", 'A', "m_fRockingA", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x68<<8)+7, 0x10C, "Rocking Change Time", 0, "m_tmRockingChange", 0x7F0000FFUL, 0),
};
#define CShipMarker_propertiesct ARRAYCOUNT(CShipMarker_properties)

CEntityComponent CShipMarker_components[] = {
#define MODEL_MARKER ((0x00000068<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\ShipMarker.mdl"),
#define TEXTURE_MARKER ((0x00000068<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\ShipMarker.tex"),
};
#define CShipMarker_componentsct ARRAYCOUNT(CShipMarker_components)

CEventHandlerEntry CShipMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CShipMarker::Main),DEBUGSTRING("CShipMarker::Main")},
};
#define CShipMarker_handlersct ARRAYCOUNT(CShipMarker_handlers)

CEntity *CShipMarker_New(void) { return new CShipMarker; };
void CShipMarker_OnInitClass(void) {};
void CShipMarker_OnEndClass(void) {};
void CShipMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CShipMarker_OnWorldEnd(CWorld *pwo) {};
void CShipMarker_OnWorldInit(CWorld *pwo) {};
void CShipMarker_OnWorldTick(CWorld *pwo) {};
void CShipMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CShipMarker, CMarker, "Ship Marker", "Thumbnails\\ShipMarker.tbn", 104);
DECLARE_CTFILENAME(_fnmCShipMarker_tbn, "Thumbnails\\ShipMarker.tbn");
