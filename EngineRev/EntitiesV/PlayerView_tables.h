// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(ViewType)
  EP_ENUMVALUE(VT_PLAYERDEATH, ""),
  EP_ENUMVALUE(VT_PLAYERREBIRTH, ""),
  EP_ENUMVALUE(VT_CAMERA, ""),
  EP_ENUMVALUE(VT_3RDPERSONVIEW, ""),
EP_ENUMEND(ViewType);

#define ENTITYCLASS CPlayerView

CEntityProperty CPlayerView_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x193<<8)+1, 0x338, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x193<<8)+2, 0x33C, "", 0, "m_iViewType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x193<<8)+3, 0x340, "", 0, "m_fDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x193<<8)+4, 0x344, "", 0, "m_vZLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x193<<8)+5, 0x350, "", 0, "m_vTargetLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x193<<8)+6, 0x35C, "", 0, "m_bFixed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x193<<8)+255, 0x360, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CPlayerView_propertiesct ARRAYCOUNT(CPlayerView_properties)

CEntityComponent CPlayerView_components[] = {
#define MODEL_MARKER ((0x00000193<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000193<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CPlayerView_componentsct ARRAYCOUNT(CPlayerView_components)

CEventHandlerEntry CPlayerView_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPlayerView::Main),DEBUGSTRING("CPlayerView::Main")},
 {0x01930001, -1, CEntity::pEventHandler(&CPlayerView::H0x01930001_Main_01), DEBUGSTRING("CPlayerView::H0x01930001_Main_01")},
 {0x01930002, -1, CEntity::pEventHandler(&CPlayerView::H0x01930002_Main_02), DEBUGSTRING("CPlayerView::H0x01930002_Main_02")},
};
#define CPlayerView_handlersct ARRAYCOUNT(CPlayerView_handlers)

CEntity *CPlayerView_New(void) { return new CPlayerView; };
void CPlayerView_OnInitClass(void) {};
void CPlayerView_OnEndClass(void) {};
void CPlayerView_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerView_OnWorldEnd(CWorld *pwo) {};
void CPlayerView_OnWorldInit(CWorld *pwo) {};
void CPlayerView_OnWorldTick(CWorld *pwo) {};
void CPlayerView_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerView, CMovableEntity, "Player View", "", 403);
DECLARE_CTFILENAME(_fnmCPlayerView_tbn, "");
