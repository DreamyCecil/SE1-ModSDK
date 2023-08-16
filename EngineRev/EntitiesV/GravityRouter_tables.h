// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CGravityRouter

CEntityProperty CGravityRouter_properties[] = {
  CEntityProperty()
};
#define CGravityRouter_propertiesct 0


CEntityComponent CGravityRouter_components[] = {
#define MODEL_MARKER ((0x000000e3<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\GravityRouter.mdl"),
#define TEXTURE_MARKER ((0x000000e3<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\GravityRouter.tex"),
};
#define CGravityRouter_componentsct ARRAYCOUNT(CGravityRouter_components)

CEventHandlerEntry CGravityRouter_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGravityRouter::Main),DEBUGSTRING("CGravityRouter::Main")},
};
#define CGravityRouter_handlersct ARRAYCOUNT(CGravityRouter_handlers)

CEntity *CGravityRouter_New(void) { return new CGravityRouter; };
void CGravityRouter_OnInitClass(void) {};
void CGravityRouter_OnEndClass(void) {};
void CGravityRouter_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGravityRouter_OnWorldEnd(CWorld *pwo) {};
void CGravityRouter_OnWorldInit(CWorld *pwo) {};
void CGravityRouter_OnWorldTick(CWorld *pwo) {};
void CGravityRouter_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGravityRouter, CMarker, "Gravity Router", "Thumbnails\\GravityRouter.tbn", 227);
DECLARE_CTFILENAME(_fnmCGravityRouter_tbn, "Thumbnails\\GravityRouter.tbn");
