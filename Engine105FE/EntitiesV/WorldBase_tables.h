// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(ClasificationBits)
  EP_ENUMVALUE(CB_00, "Bit 16"),
  EP_ENUMVALUE(CB_01, "Bit 17"),
  EP_ENUMVALUE(CB_02, "Bit 18"),
  EP_ENUMVALUE(CB_03, "Bit 19"),
  EP_ENUMVALUE(CB_04, "Bit 20"),
  EP_ENUMVALUE(CB_05, "Bit 21"),
  EP_ENUMVALUE(CB_06, "Bit 22"),
  EP_ENUMVALUE(CB_07, "Bit 23"),
  EP_ENUMVALUE(CB_08, "Bit 24"),
  EP_ENUMVALUE(CB_09, "Bit 25"),
  EP_ENUMVALUE(CB_10, "Bit 26"),
  EP_ENUMVALUE(CB_11, "Bit 27"),
  EP_ENUMVALUE(CB_12, "Bit 28"),
  EP_ENUMVALUE(CB_13, "Bit 29"),
  EP_ENUMVALUE(CB_14, "Bit 30"),
  EP_ENUMVALUE(CB_15, "Bit 31"),
EP_ENUMEND(ClasificationBits);

EP_ENUMBEG(VisibilityBits)
  EP_ENUMVALUE(VB_00, "Bit 00"),
  EP_ENUMVALUE(VB_01, "Bit 01"),
  EP_ENUMVALUE(VB_02, "Bit 02"),
  EP_ENUMVALUE(VB_03, "Bit 03"),
  EP_ENUMVALUE(VB_04, "Bit 04"),
  EP_ENUMVALUE(VB_05, "Bit 05"),
  EP_ENUMVALUE(VB_06, "Bit 06"),
  EP_ENUMVALUE(VB_07, "Bit 07"),
  EP_ENUMVALUE(VB_08, "Bit 08"),
  EP_ENUMVALUE(VB_09, "Bit 09"),
  EP_ENUMVALUE(VB_10, "Bit 10"),
  EP_ENUMVALUE(VB_11, "Bit 11"),
  EP_ENUMVALUE(VB_12, "Bit 12"),
  EP_ENUMVALUE(VB_13, "Bit 13"),
  EP_ENUMVALUE(VB_14, "Bit 14"),
  EP_ENUMVALUE(VB_15, "Bit 15"),
EP_ENUMEND(VisibilityBits);

#define ENTITYCLASS CWorldBase

CEntityProperty CWorldBase_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000064<<8)+1, offsetof(CWorldBase, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000064<<8)+3, offsetof(CWorldBase, m_strDescription), "", 0, "m_strDescription", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+2, offsetof(CWorldBase, m_bZoning), "Zoning", 'Z', "m_bZoning", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+4, offsetof(CWorldBase, m_bBackground), "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+5, offsetof(CWorldBase, m_bAnchored), "Anchored", 'A', "m_bAnchored", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+10, offsetof(CWorldBase, m_penGravity0), "Gravity 0", 'G', "m_penGravity0", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+11, offsetof(CWorldBase, m_penGravity1), "Gravity 1", 0, "m_penGravity1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+12, offsetof(CWorldBase, m_penGravity2), "Gravity 2", 0, "m_penGravity2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+13, offsetof(CWorldBase, m_penGravity3), "Gravity 3", 0, "m_penGravity3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+14, offsetof(CWorldBase, m_penGravity4), "Gravity 4", 0, "m_penGravity4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+15, offsetof(CWorldBase, m_penGravity5), "Gravity 5", 0, "m_penGravity5", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+16, offsetof(CWorldBase, m_penGravity6), "Gravity 6", 0, "m_penGravity6", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+17, offsetof(CWorldBase, m_penGravity7), "Gravity 7", 0, "m_penGravity7", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+18, offsetof(CWorldBase, m_penGravity8), "Gravity 8", 0, "m_penGravity8", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+19, offsetof(CWorldBase, m_penGravity9), "Gravity 9", 0, "m_penGravity9", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+20, offsetof(CWorldBase, m_penFog0), "Fog 0", 'F', "m_penFog0", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+21, offsetof(CWorldBase, m_penFog1), "Fog 1", 0, "m_penFog1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+22, offsetof(CWorldBase, m_penFog2), "Fog 2", 0, "m_penFog2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+23, offsetof(CWorldBase, m_penFog3), "Fog 3", 0, "m_penFog3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+24, offsetof(CWorldBase, m_penFog4), "Fog 4", 0, "m_penFog4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+30, offsetof(CWorldBase, m_penHaze0), "Haze 0", 'H', "m_penHaze0", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+31, offsetof(CWorldBase, m_penHaze1), "Haze 1", 0, "m_penHaze1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+32, offsetof(CWorldBase, m_penHaze2), "Haze 2", 0, "m_penHaze2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+33, offsetof(CWorldBase, m_penHaze3), "Haze 3", 0, "m_penHaze3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+34, offsetof(CWorldBase, m_penHaze4), "Haze 4", 0, "m_penHaze4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+40, offsetof(CWorldBase, m_penMirror0), "Mirror 0", 'M', "m_penMirror0", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+41, offsetof(CWorldBase, m_penMirror1), "Mirror 1", 0, "m_penMirror1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+42, offsetof(CWorldBase, m_penMirror2), "Mirror 2", 0, "m_penMirror2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+43, offsetof(CWorldBase, m_penMirror3), "Mirror 3", 0, "m_penMirror3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+44, offsetof(CWorldBase, m_penMirror4), "Mirror 4", 0, "m_penMirror4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+50, offsetof(CWorldBase, m_penGradient0), "Gradient 0", 'R', "m_penGradient0", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+51, offsetof(CWorldBase, m_penGradient1), "Gradient 1", 0, "m_penGradient1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+52, offsetof(CWorldBase, m_penGradient2), "Gradient 2", 0, "m_penGradient2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+53, offsetof(CWorldBase, m_penGradient3), "Gradient 3", 0, "m_penGradient3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+54, offsetof(CWorldBase, m_penGradient4), "Gradient 4", 0, "m_penGradient4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+55, offsetof(CWorldBase, m_penGradient5), "Gradient 5", 0, "m_penGradient5", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+56, offsetof(CWorldBase, m_penGradient6), "Gradient 6", 0, "m_penGradient6", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+57, offsetof(CWorldBase, m_penGradient7), "Gradient 7", 0, "m_penGradient7", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+58, offsetof(CWorldBase, m_penGradient8), "Gradient 8", 0, "m_penGradient8", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+59, offsetof(CWorldBase, m_penGradient9), "Gradient 9", 0, "m_penGradient9", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+60, offsetof(CWorldBase, m_penGradient10), "Gradient 10", 0, "m_penGradient10", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+61, offsetof(CWorldBase, m_penGradient11), "Gradient 11", 0, "m_penGradient11", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+62, offsetof(CWorldBase, m_penGradient12), "Gradient 12", 0, "m_penGradient12", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+63, offsetof(CWorldBase, m_penGradient13), "Gradient 13", 0, "m_penGradient13", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+64, offsetof(CWorldBase, m_penGradient14), "Gradient 14", 0, "m_penGradient14", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+65, offsetof(CWorldBase, m_penGradient15), "Gradient 15", 0, "m_penGradient15", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+66, offsetof(CWorldBase, m_penGradient16), "Gradient 16", 0, "m_penGradient16", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+67, offsetof(CWorldBase, m_penGradient17), "Gradient 17", 0, "m_penGradient17", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+68, offsetof(CWorldBase, m_penGradient18), "Gradient 18", 0, "m_penGradient18", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+69, offsetof(CWorldBase, m_penGradient19), "Gradient 19", 0, "m_penGradient19", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLAGS, &ClasificationBits_enum, (0x00000064<<8)+80, offsetof(CWorldBase, m_cbClassificationBits), "Clasification bits", 'C', "m_cbClassificationBits", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLAGS, &VisibilityBits_enum, (0x00000064<<8)+81, offsetof(CWorldBase, m_vbVisibilityBits), "Visibility bits", 'V', "m_vbVisibilityBits", 0x7F0000FFUL, 0),
};
#define CWorldBase_propertiesct ARRAYCOUNT(CWorldBase_properties)

CEntityComponent CWorldBase_components[] = {
  CEntityComponent()
};
#define CWorldBase_componentsct 0


CEventHandlerEntry CWorldBase_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldBase::Main),DEBUGSTRING("CWorldBase::Main")},
};
#define CWorldBase_handlersct ARRAYCOUNT(CWorldBase_handlers)

CEntity *CWorldBase_New(void) { return new CWorldBase; };
void CWorldBase_OnInitClass(void);
void CWorldBase_OnEndClass(void);
void CWorldBase_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldBase_OnWorldEnd(CWorld *pwo) {};
void CWorldBase_OnWorldInit(CWorld *pwo);
void CWorldBase_OnWorldTick(CWorld *pwo) {};
void CWorldBase_OnWorldRender(CWorld *pwo);
ENTITY_CLASSDEFINITION(CWorldBase, CEntity, "WorldBase", "Thumbnails\\WorldBase.tbn", 0x00000064);
DECLARE_CTFILENAME(_fnmCWorldBase_tbn, "Thumbnails\\WorldBase.tbn");
