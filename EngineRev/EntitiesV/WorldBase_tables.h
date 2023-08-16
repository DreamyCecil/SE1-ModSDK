// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWorldBase

CEntityProperty CWorldBase_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x64<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x64<<8)+3, 0xEC, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+2, 0xF0, "Zoning", 'Z', "m_bZoning", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+4, 0xF4, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+5, 0xF8, "Anchored", 'A', "m_bAnchored", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+6, 0xFC, "Barrier", 0, "m_bBarrier", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+7, 0x100, "Collisions", 0, "m_bCollisions", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x64<<8)+8, 0x104, "Only collides with player", 0, "m_bOnlyBlocksPlayer", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+10, 0x108, "Gravity 0", 'G', "m_penGravity0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+11, 0x10C, "Gravity 1", 0, "m_penGravity1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+12, 0x110, "Gravity 2", 0, "m_penGravity2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+13, 0x114, "Gravity 3", 0, "m_penGravity3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+14, 0x118, "Gravity 4", 0, "m_penGravity4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+15, 0x11C, "Gravity 5", 0, "m_penGravity5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+16, 0x120, "Gravity 6", 0, "m_penGravity6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+17, 0x124, "Gravity 7", 0, "m_penGravity7", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+18, 0x128, "Gravity 8", 0, "m_penGravity8", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+19, 0x12C, "Gravity 9", 0, "m_penGravity9", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+20, 0x130, "Fog 0", 'F', "m_penFog0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+21, 0x134, "Fog 1", 0, "m_penFog1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+22, 0x138, "Fog 2", 0, "m_penFog2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+23, 0x13C, "Fog 3", 0, "m_penFog3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+24, 0x140, "Fog 4", 0, "m_penFog4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+25, 0x144, "Fog 5", 0, "m_penFog5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+26, 0x148, "Fog 6", 0, "m_penFog6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+27, 0x14C, "Fog 7", 0, "m_penFog7", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+28, 0x150, "Fog 8", 0, "m_penFog8", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+29, 0x154, "Fog 9", 0, "m_penFog9", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+30, 0x158, "Haze 0", 'H', "m_penHaze0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+31, 0x15C, "Haze 1", 0, "m_penHaze1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+32, 0x160, "Haze 2", 0, "m_penHaze2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+33, 0x164, "Haze 3", 0, "m_penHaze3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+34, 0x168, "Haze 4", 0, "m_penHaze4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+40, 0x16C, "Mirror 0", 'M', "m_penMirror0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+41, 0x170, "Mirror 1", 0, "m_penMirror1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+42, 0x174, "Mirror 2", 0, "m_penMirror2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+43, 0x178, "Mirror 3", 0, "m_penMirror3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+44, 0x17C, "Mirror 4", 0, "m_penMirror4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+50, 0x180, "Gradient 0", 'R', "m_penGradient0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+51, 0x184, "Gradient 1", 0, "m_penGradient1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+52, 0x188, "Gradient 2", 0, "m_penGradient2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+53, 0x18C, "Gradient 3", 0, "m_penGradient3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+54, 0x190, "Gradient 4", 0, "m_penGradient4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+55, 0x194, "Gradient 5", 0, "m_penGradient5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+56, 0x198, "Gradient 6", 0, "m_penGradient6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+57, 0x19C, "Gradient 7", 0, "m_penGradient7", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+58, 0x1A0, "Gradient 8", 0, "m_penGradient8", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+59, 0x1A4, "Gradient 9", 0, "m_penGradient9", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+60, 0x1A8, "Gradient 10", 0, "m_penGradient10", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+61, 0x1AC, "Gradient 11", 0, "m_penGradient11", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+62, 0x1B0, "Gradient 12", 0, "m_penGradient12", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+63, 0x1B4, "Gradient 13", 0, "m_penGradient13", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+64, 0x1B8, "Gradient 14", 0, "m_penGradient14", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+65, 0x1BC, "Gradient 15", 0, "m_penGradient15", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+66, 0x1C0, "Gradient 16", 0, "m_penGradient16", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+67, 0x1C4, "Gradient 17", 0, "m_penGradient17", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+68, 0x1C8, "Gradient 18", 0, "m_penGradient18", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x64<<8)+69, 0x1CC, "Gradient 19", 0, "m_penGradient19", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &ClasificationBits_enum, (0x64<<8)+80, 0x1D0, "Clasification bits", 'C', "m_cbClassificationBits", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &VisibilityBits_enum, (0x64<<8)+81, 0x1D4, "Visibility bits", 'V', "m_vbVisibilityBits", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x64<<8)+99, 0x1D8, "Opacity", 0, "m_fOpacity", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CWorldBase, CEntity, "WorldBase", "Thumbnails\\WorldBase.tbn", 100);
DECLARE_CTFILENAME(_fnmCWorldBase_tbn, "Thumbnails\\WorldBase.tbn");
