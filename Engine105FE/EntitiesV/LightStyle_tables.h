// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CLightStyle

CEntityProperty CLightStyle_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x000000c9<<8)+2, offsetof(CLightStyle, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
};
#define CLightStyle_propertiesct ARRAYCOUNT(CLightStyle_properties)

CEntityComponent CLightStyle_components[] = {
#define MODEL_LIGHTSTYLE ((0x000000c9<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_LIGHTSTYLE, "EFNM" "Models\\Editor\\LightSource.mdl"),
#define TEXTURE_LIGHTSTYLE ((0x000000c9<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LIGHTSTYLE, "EFNM" "Models\\Editor\\LightStyle.tex"),
};
#define CLightStyle_componentsct ARRAYCOUNT(CLightStyle_components)

CEventHandlerEntry CLightStyle_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CLightStyle::Main),DEBUGSTRING("CLightStyle::Main")},
};
#define CLightStyle_handlersct ARRAYCOUNT(CLightStyle_handlers)

CEntity *CLightStyle_New(void) { return new CLightStyle; };
void CLightStyle_OnInitClass(void) {};
void CLightStyle_OnEndClass(void) {};
void CLightStyle_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CLightStyle_OnWorldEnd(CWorld *pwo) {};
void CLightStyle_OnWorldInit(CWorld *pwo) {};
void CLightStyle_OnWorldTick(CWorld *pwo) {};
void CLightStyle_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CLightStyle, CEntity, "Light", "Models\\Editor\\LightStyle.tbn", 0x000000c9);
DECLARE_CTFILENAME(_fnmCLightStyle_tbn, "Models\\Editor\\LightStyle.tbn");
