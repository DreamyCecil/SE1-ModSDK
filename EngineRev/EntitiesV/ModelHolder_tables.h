// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CModelHolder

CEntityProperty CModelHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xcb<<8)+1, 0xE8, "Model", 'M', "m_fnModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xcb<<8)+2, 0xF0, "Texture", 'T', "m_fnTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcb<<8)+3, 0xF8, "StretchAll", 'S', "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcb<<8)+4, 0xFC, "StretchX", 'X', "m_fStretchX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcb<<8)+5, 0x100, "StretchY", 'Y', "m_fStretchY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcb<<8)+6, 0x104, "StretchZ", 'Z', "m_fStretchZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xcb<<8)+7, 0x108, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xcb<<8)+12, 0x10C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcb<<8)+8, 0x110, "Colliding", 'C', "m_bColliding", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xcb<<8)+9, 0x114, "Model animation", 'A', "m_iModelAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xcb<<8)+10, 0x118, "Texture animation", 0, "m_iTextureAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcb<<8)+11, 0x11C, "Cluster shadows", 0, "m_bClusterShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcb<<8)+13, 0x120, "Background", 0, "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcb<<8)+14, 0x124, "Custom shading", 'H', "m_bCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xcb<<8)+15, 0x128, "Light direction", 0, "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xcb<<8)+16, 0x134, "Light color", 0, "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xcb<<8)+17, 0x138, "Ambient color", 0, "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xcb<<8)+18, 0x13C, "Light animation file", 0, "m_fnmLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xcb<<8)+19, 0x144, "Light animation", 0, "m_iLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0xcb<<8)+20, 0x148, "", 0, "m_aoLightAnimation", 0x0UL, 0),
};
#define CModelHolder_propertiesct ARRAYCOUNT(CModelHolder_properties)

CEntityComponent CModelHolder_components[] = {
  CEntityComponent()
};
#define CModelHolder_componentsct 0


CEventHandlerEntry CModelHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CModelHolder::Main),DEBUGSTRING("CModelHolder::Main")},
};
#define CModelHolder_handlersct ARRAYCOUNT(CModelHolder_handlers)

CEntity *CModelHolder_New(void) { return new CModelHolder; };
void CModelHolder_OnInitClass(void) {};
void CModelHolder_OnEndClass(void) {};
void CModelHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CModelHolder_OnWorldEnd(CWorld *pwo) {};
void CModelHolder_OnWorldInit(CWorld *pwo) {};
void CModelHolder_OnWorldTick(CWorld *pwo) {};
void CModelHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CModelHolder, CEntity, "ModelHolder", "", 203);
DECLARE_CTFILENAME(_fnmCModelHolder_tbn, "");
