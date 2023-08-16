// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMovingBrushMarker

CEntityProperty CMovingBrushMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x66<<8)+1, 0xF4, "Inverse Rotate", 'R', "m_bInverseRotate", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x66<<8)+2, 0xF8, "Speed", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x66<<8)+3, 0xFC, "Wait time", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x66<<8)+4, 0x100, "Stop moving", 'O', "m_bStopMoving", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BoolEType_enum, (0x66<<8)+6, 0x104, "Move on touch", 'M', "m_betMoveOnTouch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x66<<8)+7, 0x108, "Block damage", 'D', "m_fBlockDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x66<<8)+8, 0x10C, "Banking rotation speed", 0, "m_tmBankingRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x66<<8)+9, 0x110, "Banking rotation clockwise", 0, "m_bBankingClockwise", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x66<<8)+14, 0x114, "Don't use marker orientation", 0, "m_bNoRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x66<<8)+10, 0x118, "Marker Event - Type", 'J', "m_eetMarkerEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x66<<8)+11, 0x11C, "Marker Event - Target", 'K', "m_penMarkerEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x66<<8)+16, 0x120, "Touch Event - Type", 'U', "m_eetTouchEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x66<<8)+17, 0x124, "Touch Event - Target", 'I', "m_penTouchEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x66<<8)+20, 0x128, "Sound start entity", 'Q', "m_penSoundStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x66<<8)+21, 0x12C, "Sound stop entity", 'Z', "m_penSoundStop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x66<<8)+22, 0x130, "Sound follow entity", 'F', "m_penSoundFollow", 0x7F0000FFUL, 0),
};
#define CMovingBrushMarker_propertiesct ARRAYCOUNT(CMovingBrushMarker_properties)

CEntityComponent CMovingBrushMarker_components[] = {
#define MODEL_MARKER ((0x00000066<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MovingBrushMarker.mdl"),
#define TEXTURE_MARKER ((0x00000066<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\GravityMarker.tex"),
};
#define CMovingBrushMarker_componentsct ARRAYCOUNT(CMovingBrushMarker_components)

CEventHandlerEntry CMovingBrushMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMovingBrushMarker::Main),DEBUGSTRING("CMovingBrushMarker::Main")},
};
#define CMovingBrushMarker_handlersct ARRAYCOUNT(CMovingBrushMarker_handlers)

CEntity *CMovingBrushMarker_New(void) { return new CMovingBrushMarker; };
void CMovingBrushMarker_OnInitClass(void) {};
void CMovingBrushMarker_OnEndClass(void) {};
void CMovingBrushMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMovingBrushMarker_OnWorldEnd(CWorld *pwo) {};
void CMovingBrushMarker_OnWorldInit(CWorld *pwo) {};
void CMovingBrushMarker_OnWorldTick(CWorld *pwo) {};
void CMovingBrushMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMovingBrushMarker, CMarker, "Moving Brush Marker", "Thumbnails\\MovingBrushMarker.tbn", 102);
DECLARE_CTFILENAME(_fnmCMovingBrushMarker_tbn, "Thumbnails\\MovingBrushMarker.tbn");
