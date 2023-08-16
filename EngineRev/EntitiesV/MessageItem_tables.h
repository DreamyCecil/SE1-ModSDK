// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMessageItem

CEntityProperty CMessageItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x327<<8)+1, 0x418, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x327<<8)+2, 0x41C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x327<<8)+3, 0x420, "Message", 'M', "m_fnmMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x327<<8)+4, 0x428, "", 0, "m_iSoundComponent", 0x0UL, 0),
};
#define CMessageItem_propertiesct ARRAYCOUNT(CMessageItem_properties)

CEntityComponent CMessageItem_components[] = {
#define CLASS_BASE ((0x00000327<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_PERGAMENT ((0x00000327<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_PERGAMENT, "EFNM" "Models\\Items\\Pergament\\Pergament.mdl"),
#define TEXTURE_PERGAMENT ((0x00000327<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PERGAMENT, "EFNM" "Models\\Items\\Pergament\\Pergament.tex"),
#define TEXTURE_FLARE ((0x00000327<<8)+255)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000327<<8)+256)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define SOUND_KEY ((0x00000327<<8)+301)
 CEntityComponent(ECT_SOUND, SOUND_KEY, "EFNM" "Sounds\\Items\\Key.wav"),
};
#define CMessageItem_componentsct ARRAYCOUNT(CMessageItem_components)

CEventHandlerEntry CMessageItem_handlers[] = {
 {0x03270001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CMessageItem::ItemCollected),DEBUGSTRING("CMessageItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CMessageItem::Main),DEBUGSTRING("CMessageItem::Main")},
};
#define CMessageItem_handlersct ARRAYCOUNT(CMessageItem_handlers)

CEntity *CMessageItem_New(void) { return new CMessageItem; };
void CMessageItem_OnInitClass(void) {};
void CMessageItem_OnEndClass(void) {};
void CMessageItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMessageItem_OnWorldEnd(CWorld *pwo) {};
void CMessageItem_OnWorldInit(CWorld *pwo) {};
void CMessageItem_OnWorldTick(CWorld *pwo) {};
void CMessageItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMessageItem, CItem, "MessageItem", "Thumbnails\\MessageItem.tbn", 807);
DECLARE_CTFILENAME(_fnmCMessageItem_tbn, "Thumbnails\\MessageItem.tbn");
