// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CBouncer

CEntityProperty CBouncer_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x69<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x69<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x69<<8)+4, 0x118, "Speed [m/s]", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x69<<8)+5, 0x11C, "Direction", 'D', "m_aDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x69<<8)+6, 0x128, "Control time", 'T', "m_tmControl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x69<<8)+7, 0x12C, "", 0, "m_bEntrySpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x69<<8)+10, 0x130, "Max exit speed", 'M', "m_fMaxExitSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x69<<8)+12, 0x134, "Normal component multiplier", 'O', "m_fNormalComponentMultiplier", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x69<<8)+13, 0x138, "Parallel component multiplier", 'P', "m_fParallelComponentMultiplier", 0x7F0000FFUL, 0),
};
#define CBouncer_propertiesct ARRAYCOUNT(CBouncer_properties)

CEntityComponent CBouncer_components[] = {
  CEntityComponent()
};
#define CBouncer_componentsct 0


CEventHandlerEntry CBouncer_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBouncer::Main),DEBUGSTRING("CBouncer::Main")},
};
#define CBouncer_handlersct ARRAYCOUNT(CBouncer_handlers)

CEntity *CBouncer_New(void) { return new CBouncer; };
void CBouncer_OnInitClass(void) {};
void CBouncer_OnEndClass(void) {};
void CBouncer_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBouncer_OnWorldEnd(CWorld *pwo) {};
void CBouncer_OnWorldInit(CWorld *pwo) {};
void CBouncer_OnWorldTick(CWorld *pwo) {};
void CBouncer_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBouncer, CRationalEntity, "Bouncer", "Thumbnails\\Bouncer.tbn", 105);
DECLARE_CTFILENAME(_fnmCBouncer_tbn, "Thumbnails\\Bouncer.tbn");
