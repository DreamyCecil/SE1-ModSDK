// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(BlockAction)
  EP_ENUMVALUE(BA_NONE, "None"),
  EP_ENUMVALUE(BA_BOUNCE, "Bounce"),
  EP_ENUMVALUE(BA_SKIPMARKER, "Skip marker"),
EP_ENUMEND(BlockAction);

EP_ENUMBEG(TouchOrDamageEvent)
  EP_ENUMVALUE(TDE_TOUCHONLY, "Touch Only"),
  EP_ENUMVALUE(TDE_DAMAGEONLY, "Damage Only"),
  EP_ENUMVALUE(TDE_BOTH, "Both"),
EP_ENUMEND(TouchOrDamageEvent);

#define ENTITYCLASS CMovingBrush

CEntityProperty CMovingBrush_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x65<<8)+1, 0x338, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x65<<8)+2, 0x33C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+3, 0x340, "Target", 'T', "m_penTarget", 0xFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+4, 0x344, "Auto start", 'A', "m_bAutoStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+5, 0x348, "Speed", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+6, 0x34C, "Wait time", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+7, 0x350, "Move on touch", 'M', "m_bMoveOnTouch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BlockAction_enum, (0x65<<8)+8, 0x354, "Block action", 'B', "m_ebaAction", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+9, 0x358, "Block damage", 'D', "m_fBlockDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+10, 0x35C, "Players Only", 'P', "m_bPlayersOnly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+11, 0x360, "Dynamic shadows", 0, "m_bDynamicShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+12, 0x364, "Very Big Brush", 0, "m_bVeryBigBrush", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x65<<8)+13, 0x368, "Touch Event - Type", 'U', "m_eetTouchEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+14, 0x36C, "Touch Event - Target", 'I', "m_penTouchEvent", 0x7F7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &TouchOrDamageEvent_enum, (0x65<<8)+19, 0x370, "Send touch event on damage", 0, "m_tdeSendEventOnDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+15, 0x374, "Switch", 0, "m_penSwitch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x65<<8)+16, 0x378, "", 0, "m_eetMarkerEvent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+17, 0x37C, "", 0, "m_penMarkerEvent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+18, 0x380, "Banking rotation speed", 0, "m_tmBankingRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+20, 0x384, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+78, 0x388, "", 0, "m_bRotating", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+79, 0x38C, "", 0, "m_bForceStop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+80, 0x390, "", 0, "m_bNoRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x65<<8)+21, 0x394, "", 0, "m_vDesiredTranslation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x65<<8)+22, 0x3A0, "", 0, "m_aDesiredRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+23, 0x3AC, "", 0, "m_bInverseRotate", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+24, 0x3B0, "", 0, "m_bStopMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+25, 0x3B4, "", 0, "m_bMoveToMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+26, 0x3B8, "", 0, "m_bSkipMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+27, 0x3BC, "", 0, "m_bValidMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+30, 0x3C0, "", 0, "m_fXLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+31, 0x3C4, "", 0, "m_fYLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+32, 0x3C8, "", 0, "m_fZLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+33, 0x3CC, "", 0, "m_aHLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+34, 0x3D0, "", 0, "m_aPLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+35, 0x3D4, "", 0, "m_aBLimitSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x65<<8)+40, 0x3D8, "", 0, "m_vStartTranslation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x65<<8)+41, 0x3E4, "", 0, "m_aStartRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+42, 0x3F0, "", 0, "m_fCourseLength", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+43, 0x3F4, "", 0, "m_aHeadLenght", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+44, 0x3F8, "", 0, "m_aPitchLenght", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x65<<8)+45, 0x3FC, "", 0, "m_aBankLenght", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+50, 0x400, "Sound start entity", 'Q', "m_penSoundStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+51, 0x404, "Sound stop entity", 'Z', "m_penSoundStop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+52, 0x408, "Sound follow entity", 'F', "m_penSoundFollow", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x65<<8)+53, 0x40C, "", 0, "m_soStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x65<<8)+54, 0x488, "", 0, "m_soStop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x65<<8)+55, 0x504, "", 0, "m_soFollow", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+60, 0x580, "Mirror 0", 'M', "m_penMirror0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+61, 0x584, "Mirror 1", 0, "m_penMirror1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+62, 0x588, "Mirror 2", 0, "m_penMirror2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+63, 0x58C, "Mirror 3", 0, "m_penMirror3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+64, 0x590, "Mirror 4", 0, "m_penMirror4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+65, 0x594, "Health", 'H', "m_fHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+66, 0x598, "Blowup by Bull", 0, "m_bBlowupByBull", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x65<<8)+67, 0x59C, "Blowup Event - Type", 0, "m_eetBlowupEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x65<<8)+68, 0x5A0, "Blowup Event - Target", 0, "m_penBlowupEvent", 0xFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+69, 0x5A4, "Zoning", 'Z', "m_bZoning", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+70, 0x5A8, "Move on damage", 0, "m_bMoveOnDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+71, 0x5AC, "Touch damage", 0, "m_fTouchDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x65<<8)+72, 0x5B0, "Color of debrises", 0, "m_colDebrises", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x65<<8)+74, 0x5B4, "Debris count", 0, "m_ctDebrises", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+75, 0x5B8, "Debris blow power", 0, "m_fCandyEffect", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x65<<8)+76, 0x5BC, "Cube factor", 0, "m_fCubeFactor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x65<<8)+77, 0x5C0, "Blowup by Damager", 0, "m_bBlowupByDamager", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &ClasificationBits_enum, (0x65<<8)+81, 0x5C4, "Clasification bits", 'C', "m_cbClassificationBits", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &VisibilityBits_enum, (0x65<<8)+82, 0x5C8, "Visibility bits", 'V', "m_vbVisibilityBits", 0x7F0000FFUL, 0),
};
#define CMovingBrush_propertiesct ARRAYCOUNT(CMovingBrush_properties)

CEntityComponent CMovingBrush_components[] = {
#define MODEL_STONE ((0x00000065<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.mdl"),
#define TEXTURE_STONE ((0x00000065<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.tex"),
#define CLASS_DEBRIS ((0x00000065<<8)+16)
 CEntityComponent(ECT_CLASS, CLASS_DEBRIS, "EFNM" "Classes\\Debris.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000065<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CMovingBrush_componentsct ARRAYCOUNT(CMovingBrush_components)

CEventHandlerEntry CMovingBrush_handlers[] = {
 {0x00650002, -1, CEntity::pEventHandler(&CMovingBrush::MoveToMarker),DEBUGSTRING("CMovingBrush::MoveToMarker")},
 {0x00650003, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650003_MoveToMarker_01), DEBUGSTRING("CMovingBrush::H0x00650003_MoveToMarker_01")},
 {0x00650004, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650004_MoveToMarker_02), DEBUGSTRING("CMovingBrush::H0x00650004_MoveToMarker_02")},
 {0x00650005, -1, CEntity::pEventHandler(&CMovingBrush::BounceObstructed),DEBUGSTRING("CMovingBrush::BounceObstructed")},
 {0x00650006, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650006_BounceObstructed_01), DEBUGSTRING("CMovingBrush::H0x00650006_BounceObstructed_01")},
 {0x00650007, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650007_BounceObstructed_02), DEBUGSTRING("CMovingBrush::H0x00650007_BounceObstructed_02")},
 {0x00650008, -1, CEntity::pEventHandler(&CMovingBrush::MoveBrush),DEBUGSTRING("CMovingBrush::MoveBrush")},
 {0x00650009, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650009_MoveBrush_01), DEBUGSTRING("CMovingBrush::H0x00650009_MoveBrush_01")},
 {0x0065000a, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000a_MoveBrush_02), DEBUGSTRING("CMovingBrush::H0x0065000a_MoveBrush_02")},
 {0x0065000b, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000b_MoveBrush_03), DEBUGSTRING("CMovingBrush::H0x0065000b_MoveBrush_03")},
 {0x0065000c, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000c_MoveBrush_04), DEBUGSTRING("CMovingBrush::H0x0065000c_MoveBrush_04")},
 {0x0065000d, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000d_MoveBrush_05), DEBUGSTRING("CMovingBrush::H0x0065000d_MoveBrush_05")},
 {0x0065000e, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000e_MoveBrush_06), DEBUGSTRING("CMovingBrush::H0x0065000e_MoveBrush_06")},
 {0x0065000f, -1, CEntity::pEventHandler(&CMovingBrush::H0x0065000f_MoveBrush_07), DEBUGSTRING("CMovingBrush::H0x0065000f_MoveBrush_07")},
 {0x00650010, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650010_MoveBrush_08), DEBUGSTRING("CMovingBrush::H0x00650010_MoveBrush_08")},
 {0x00650011, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650011_MoveBrush_09), DEBUGSTRING("CMovingBrush::H0x00650011_MoveBrush_09")},
 {0x00650012, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650012_MoveBrush_10), DEBUGSTRING("CMovingBrush::H0x00650012_MoveBrush_10")},
 {0x00650013, -1, CEntity::pEventHandler(&CMovingBrush::TeleportToStopMarker),DEBUGSTRING("CMovingBrush::TeleportToStopMarker")},
 {1, -1, CEntity::pEventHandler(&CMovingBrush::Main),DEBUGSTRING("CMovingBrush::Main")},
 {0x00650014, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650014_Main_01), DEBUGSTRING("CMovingBrush::H0x00650014_Main_01")},
 {0x00650015, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650015_Main_02), DEBUGSTRING("CMovingBrush::H0x00650015_Main_02")},
 {0x00650016, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650016_Main_03), DEBUGSTRING("CMovingBrush::H0x00650016_Main_03")},
 {0x00650017, -1, CEntity::pEventHandler(&CMovingBrush::H0x00650017_Main_04), DEBUGSTRING("CMovingBrush::H0x00650017_Main_04")},
};
#define CMovingBrush_handlersct ARRAYCOUNT(CMovingBrush_handlers)

CEntity *CMovingBrush_New(void) { return new CMovingBrush; };
void CMovingBrush_OnInitClass(void) {};
void CMovingBrush_OnEndClass(void) {};
void CMovingBrush_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMovingBrush_OnWorldEnd(CWorld *pwo) {};
void CMovingBrush_OnWorldInit(CWorld *pwo) {};
void CMovingBrush_OnWorldTick(CWorld *pwo) {};
void CMovingBrush_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMovingBrush, CMovableBrushEntity, "Moving Brush", "Thumbnails\\MovingBrush.tbn", 101);
DECLARE_CTFILENAME(_fnmCMovingBrush_tbn, "Thumbnails\\MovingBrush.tbn");
