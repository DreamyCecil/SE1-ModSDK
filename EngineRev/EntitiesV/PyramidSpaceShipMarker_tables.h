// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CPyramidSpaceShipMarker

CEntityProperty CPyramidSpaceShipMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x262<<8)+1, 0xF4, "Delta time", 'D', "m_fDeltaTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x262<<8)+2, 0xF8, "Bias", 'B', "m_fBias", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x262<<8)+3, 0xFC, "Tension", 'E', "m_fTension", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x262<<8)+4, 0x100, "Continuity", 'C', "m_fContinuity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x262<<8)+5, 0x104, "Stop moving", 'O', "m_bStopMoving", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x262<<8)+6, 0x108, "Trigger", 'G', "m_penTrigger", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x262<<8)+7, 0x10C, "Rotation speed", 'R', "m_fRotSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x262<<8)+8, 0x110, "Space ship", 'S', "m_penSpaceShip", 0x7F0000FFUL, 0),
};
#define CPyramidSpaceShipMarker_propertiesct ARRAYCOUNT(CPyramidSpaceShipMarker_properties)

CEntityComponent CPyramidSpaceShipMarker_components[] = {
#define MODEL_MARKER ((0x00000262<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000262<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CPyramidSpaceShipMarker_componentsct ARRAYCOUNT(CPyramidSpaceShipMarker_components)

CEventHandlerEntry CPyramidSpaceShipMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPyramidSpaceShipMarker::Main),DEBUGSTRING("CPyramidSpaceShipMarker::Main")},
};
#define CPyramidSpaceShipMarker_handlersct ARRAYCOUNT(CPyramidSpaceShipMarker_handlers)

CEntity *CPyramidSpaceShipMarker_New(void) { return new CPyramidSpaceShipMarker; };
void CPyramidSpaceShipMarker_OnInitClass(void) {};
void CPyramidSpaceShipMarker_OnEndClass(void) {};
void CPyramidSpaceShipMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPyramidSpaceShipMarker_OnWorldEnd(CWorld *pwo) {};
void CPyramidSpaceShipMarker_OnWorldInit(CWorld *pwo) {};
void CPyramidSpaceShipMarker_OnWorldTick(CWorld *pwo) {};
void CPyramidSpaceShipMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPyramidSpaceShipMarker, CMarker, "Pyramid Space Ship Marker", "Thumbnails\\PyramidSpaceShipMarker.tbn", 610);
DECLARE_CTFILENAME(_fnmCPyramidSpaceShipMarker_tbn, "Thumbnails\\PyramidSpaceShipMarker.tbn");
