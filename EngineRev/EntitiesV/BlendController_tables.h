// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(BlendControllerType)
  EP_ENUMVALUE(BCT_NONE, "None"),
  EP_ENUMVALUE(BCT_PYRAMID_PLATES, "Appear pyramid plates"),
  EP_ENUMVALUE(BCT_ACTIVATE_PLATE_1, "Activate plate 1"),
  EP_ENUMVALUE(BCT_ACTIVATE_PLATE_2, "Activate plate 2"),
  EP_ENUMVALUE(BCT_ACTIVATE_PLATE_3, "Activate plate 3"),
  EP_ENUMVALUE(BCT_ACTIVATE_PLATE_4, "Activate plate 4"),
  EP_ENUMVALUE(BCT_ACTIVATE_PYRAMID_MORPH_ROOM, "Pyramid morph room"),
EP_ENUMEND(BlendControllerType);

#define ENTITYCLASS CBlendController

CEntityProperty CBlendController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &BlendControllerType_enum, (0x00000264<<8)+1, offsetof(CBlendController, m_bctType), "Blend type", 'Y', 0x7F0000FFUL, 0),
};
#define CBlendController_propertiesct ARRAYCOUNT(CBlendController_properties)

CEntityComponent CBlendController_components[] = {
#define MODEL_CONTROLLER ((0x00000264<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_CONTROLLER, "EFNM" "Models\\Editor\\BlendController.mdl"),
#define TEXTURE_CONTROLLER ((0x00000264<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CONTROLLER, "EFNM" "Models\\Editor\\BlendController.tex"),
};
#define CBlendController_componentsct ARRAYCOUNT(CBlendController_components)

CEventHandlerEntry CBlendController_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBlendController::Main),DEBUGSTRING("CBlendController::Main")},
};
#define CBlendController_handlersct ARRAYCOUNT(CBlendController_handlers)

CEntity *CBlendController_New(void) { return new CBlendController; };
void CBlendController_OnInitClass(void) {};
void CBlendController_OnEndClass(void) {};
void CBlendController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBlendController_OnWorldEnd(CWorld *pwo) {};
void CBlendController_OnWorldInit(CWorld *pwo) {};
void CBlendController_OnWorldTick(CWorld *pwo) {};
void CBlendController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBlendController, CMarker, "Blend controller", "Thumbnails\\BlendController.tbn", 0x00000264);
DECLARE_CTFILENAME(_fnmCBlendController_tbn, "Thumbnails\\BlendController.tbn");
