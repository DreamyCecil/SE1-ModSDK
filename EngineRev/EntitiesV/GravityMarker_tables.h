// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(GravityType)
  EP_ENUMVALUE(LT_PARALLEL, "Parallel"),
  EP_ENUMVALUE(LT_CENTRAL, "Central"),
  EP_ENUMVALUE(LT_CYLINDRICAL, "Cylindirical"),
  EP_ENUMVALUE(LT_TORUS, "Torus"),
EP_ENUMEND(GravityType);

#define ENTITYCLASS CGravityMarker

CEntityProperty CGravityMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &GravityType_enum, (0xd4<<8)+1, 0xF4, "Type", 'Y', "m_gtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+2, 0xF8, "Strength", 'S', "m_fStrength", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xd4<<8)+3, 0xFC, "FallOff", 'F', "m_rFallOff", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xd4<<8)+4, 0x100, "HotSpot", 'H', "m_rHotSpot", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xd4<<8)+5, 0x104, "Torus Radius", 'R', "m_rTorusR", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+10, 0x108, "", 0, "m_fAcc", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+11, 0x10C, "", 0, "m_fSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+12, 0x110, "", 0, "m_fStep", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xd4<<8)+20, 0x114, "Forcefield Direction", 'F', "m_aForceDir", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+21, 0x120, "Forcefield Acceleration", 0, "m_fForceA", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd4<<8)+22, 0x124, "Forcefield Velocity", 0, "m_fForceV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xd4<<8)+23, 0x128, "", 0, "m_vForceDir", 0x0UL, 0),
};
#define CGravityMarker_propertiesct ARRAYCOUNT(CGravityMarker_properties)

CEntityComponent CGravityMarker_components[] = {
#define MODEL_MARKER ((0x000000d4<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\GravityMarker.mdl"),
#define TEXTURE_MARKER ((0x000000d4<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\GravityMarker.tex"),
};
#define CGravityMarker_componentsct ARRAYCOUNT(CGravityMarker_components)

CEventHandlerEntry CGravityMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGravityMarker::Main),DEBUGSTRING("CGravityMarker::Main")},
};
#define CGravityMarker_handlersct ARRAYCOUNT(CGravityMarker_handlers)

CEntity *CGravityMarker_New(void) { return new CGravityMarker; };
void CGravityMarker_OnInitClass(void) {};
void CGravityMarker_OnEndClass(void) {};
void CGravityMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGravityMarker_OnWorldEnd(CWorld *pwo) {};
void CGravityMarker_OnWorldInit(CWorld *pwo) {};
void CGravityMarker_OnWorldTick(CWorld *pwo) {};
void CGravityMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGravityMarker, CMarker, "Gravity Marker", "Thumbnails\\GravityMarker.tbn", 212);
DECLARE_CTFILENAME(_fnmCGravityMarker_tbn, "Thumbnails\\GravityMarker.tbn");
