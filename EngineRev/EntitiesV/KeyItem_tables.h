// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(KeyItemType)
  EP_ENUMVALUE(KIT_ANKHWOOD, "Wooden ankh"),
  EP_ENUMVALUE(KIT_ANKHROCK, "Stone ankh"),
  EP_ENUMVALUE(KIT_ANKHGOLD, "Gold ankh"),
  EP_ENUMVALUE(KIT_AMONGOLD, "Gold amon"),
  EP_ENUMVALUE(KIT_ANKHGOLDDUMMY, "Gold ankh dummy key"),
  EP_ENUMVALUE(KIT_ELEMENTEARTH, "Element - Earth"),
  EP_ENUMVALUE(KIT_ELEMENTWATER, "Element - Water"),
  EP_ENUMVALUE(KIT_ELEMENTAIR, "Element - Air"),
  EP_ENUMVALUE(KIT_ELEMENTFIRE, "Element - Fire"),
  EP_ENUMVALUE(KIT_RAKEY, "Ra Key"),
  EP_ENUMVALUE(KIT_MOONKEY, "Moon Key"),
  EP_ENUMVALUE(KIT_EYEOFRA, "Eye of Ra"),
  EP_ENUMVALUE(KIT_SCARAB, "Scarab"),
  EP_ENUMVALUE(KIT_COBRA, "Cobra"),
  EP_ENUMVALUE(KIT_SCARABDUMMY, "Scarab dummy"),
  EP_ENUMVALUE(KIT_HEART, "Gold Heart"),
  EP_ENUMVALUE(KIT_FEATHER, "Feather of Truth"),
  EP_ENUMVALUE(KIT_SPHINX1, "Sphinx 1"),
  EP_ENUMVALUE(KIT_SPHINX2, "Sphinx 2"),
  EP_ENUMVALUE(KIT_BOOKOFWISDOM, "Book of wisdom"),
  EP_ENUMVALUE(KIT_CROSSWOODEN, "Wooden cross"),
  EP_ENUMVALUE(KIT_CROSSMETAL, "Silver cross"),
  EP_ENUMVALUE(KIT_CROSSGOLD, "Gold cross"),
  EP_ENUMVALUE(KIT_JAGUARGOLDDUMMY, "Gold jaguar"),
  EP_ENUMVALUE(KIT_HAWKWINGS01DUMMY, "Hawk wings - part 1"),
  EP_ENUMVALUE(KIT_HAWKWINGS02DUMMY, "Hawk wings - part 2"),
  EP_ENUMVALUE(KIT_HOLYGRAIL, "Holy grail"),
  EP_ENUMVALUE(KIT_TABLESDUMMY, "Tablet of wisdom"),
  EP_ENUMVALUE(KIT_WINGEDLION, "Winged lion"),
  EP_ENUMVALUE(KIT_ELEPHANTGOLD, "Gold elephant"),
  EP_ENUMVALUE(KIT_STATUEHEAD01, "Seriously scary ceremonial mask"),
  EP_ENUMVALUE(KIT_STATUEHEAD02, "Hilariously happy ceremonial mask"),
  EP_ENUMVALUE(KIT_STATUEHEAD03, "Ix Chel mask"),
  EP_ENUMVALUE(KIT_KINGSTATUE, "Statue of King Tilmun"),
  EP_ENUMVALUE(KIT_CRYSTALSKULL, "Crystal Skull"),
EP_ENUMEND(KeyItemType);

#define ENTITYCLASS CKeyItem

CEntityProperty CKeyItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &KeyItemType_enum, (0x325<<8)+1, 0x418, "Type", 'Y', "m_kitType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x325<<8)+3, 0x41C, "", 0, "m_iSoundComponent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x325<<8)+5, 0x420, "Size", 0, "m_fSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x325<<8)+6, 0x424, "Custom text", 0, "m_strCustomText", 0x7F0000FFUL, 0),
};
#define CKeyItem_propertiesct ARRAYCOUNT(CKeyItem_properties)

CEntityComponent CKeyItem_components[] = {
#define CLASS_BASE ((0x00000325<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_BOOKOFWISDOM ((0x00000325<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_BOOKOFWISDOM, "EFNM" "ModelsMP\\Items\\Keys\\BookOfWisdom\\Book.mdl"),
#define TEXTURE_BOOKOFWISDOM ((0x00000325<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BOOKOFWISDOM, "EFNM" "ModelsMP\\Items\\Keys\\BookOfWisdom\\Book.tex"),
#define MODEL_CROSSWOODEN ((0x00000325<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_CROSSWOODEN, "EFNM" "ModelsMP\\Items\\Keys\\Cross\\Cross.mdl"),
#define TEXTURE_CROSSWOODEN ((0x00000325<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CROSSWOODEN, "EFNM" "ModelsMP\\Items\\Keys\\Cross\\CrossWooden.tex"),
#define MODEL_CROSSMETAL ((0x00000325<<8)+7)
 CEntityComponent(ECT_MODEL, MODEL_CROSSMETAL, "EFNM" "ModelsMP\\Items\\Keys\\Cross\\Cross.mdl"),
#define TEXTURE_CROSSMETAL ((0x00000325<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CROSSMETAL, "EFNM" "ModelsMP\\Items\\Keys\\Cross\\CrossMetal.tex"),
#define MODEL_CROSSGOLD ((0x00000325<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_CROSSGOLD, "EFNM" "ModelsMP\\Items\\Keys\\GoldCross\\Cross.mdl"),
#define TEXTURE_CROSSGOLD ((0x00000325<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CROSSGOLD, "EFNM" "ModelsMP\\Items\\Keys\\GoldCross\\Cross.tex"),
#define MODEL_JAGUARGOLD ((0x00000325<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_JAGUARGOLD, "EFNM" "ModelsMP\\Items\\Keys\\GoldJaguar\\Jaguar.mdl"),
#define MODEL_HAWKWINGS01 ((0x00000325<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_HAWKWINGS01, "EFNM" "ModelsMP\\Items\\Keys\\HawkWings\\WingRight.mdl"),
#define MODEL_HAWKWINGS02 ((0x00000325<<8)+21)
 CEntityComponent(ECT_MODEL, MODEL_HAWKWINGS02, "EFNM" "ModelsMP\\Items\\Keys\\HawkWings\\WingLeft.mdl"),
#define TEXTURE_HAWKWINGS ((0x00000325<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HAWKWINGS, "EFNM" "ModelsMP\\Items\\Keys\\HawkWings\\Wings.tex"),
#define MODEL_HOLYGRAIL ((0x00000325<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_HOLYGRAIL, "EFNM" "ModelsMP\\Items\\Keys\\HolyGrail\\Grail.mdl"),
#define TEXTURE_HOLYGRAIL ((0x00000325<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HOLYGRAIL, "EFNM" "ModelsMP\\Items\\Keys\\HolyGrail\\Grail.tex"),
#define MODEL_TABLESOFWISDOM ((0x00000325<<8)+35)
 CEntityComponent(ECT_MODEL, MODEL_TABLESOFWISDOM, "EFNM" "ModelsMP\\Items\\Keys\\TablesOfWisdom\\Tables.mdl"),
#define TEXTURE_TABLESOFWISDOM ((0x00000325<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TABLESOFWISDOM, "EFNM" "ModelsMP\\Items\\Keys\\TablesOfWisdom\\Tables.tex"),
#define MODEL_WINGEDLION ((0x00000325<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_WINGEDLION, "EFNM" "ModelsMP\\Items\\Keys\\WingLion\\WingLion.mdl"),
#define MODEL_ELEPHANTGOLD ((0x00000325<<8)+45)
 CEntityComponent(ECT_MODEL, MODEL_ELEPHANTGOLD, "EFNM" "ModelsMP\\Items\\Keys\\GoldElephant\\Elephant.mdl"),
#define MODEL_STATUEHEAD01 ((0x00000325<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_STATUEHEAD01, "EFNM" "ModelsMP\\Items\\Keys\\Statue01\\Statue.mdl"),
#define TEXTURE_STATUEHEAD01 ((0x00000325<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STATUEHEAD01, "EFNM" "ModelsMP\\Items\\Keys\\Statue01\\Statue.tex"),
#define MODEL_STATUEHEAD02 ((0x00000325<<8)+52)
 CEntityComponent(ECT_MODEL, MODEL_STATUEHEAD02, "EFNM" "ModelsMP\\Items\\Keys\\Statue02\\Statue.mdl"),
#define TEXTURE_STATUEHEAD02 ((0x00000325<<8)+53)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STATUEHEAD02, "EFNM" "ModelsMP\\Items\\Keys\\Statue02\\Statue.tex"),
#define MODEL_STATUEHEAD03 ((0x00000325<<8)+54)
 CEntityComponent(ECT_MODEL, MODEL_STATUEHEAD03, "EFNM" "ModelsMP\\Items\\Keys\\Statue03\\Statue.mdl"),
#define TEXTURE_STATUEHEAD03 ((0x00000325<<8)+55)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STATUEHEAD03, "EFNM" "ModelsMP\\Items\\Keys\\Statue03\\Statue.tex"),
#define MODEL_KINGSTATUE ((0x00000325<<8)+58)
 CEntityComponent(ECT_MODEL, MODEL_KINGSTATUE, "EFNM" "ModelsMP\\Items\\Keys\\ManStatue\\Statue.mdl"),
#define MODEL_CRYSTALSKULL ((0x00000325<<8)+60)
 CEntityComponent(ECT_MODEL, MODEL_CRYSTALSKULL, "EFNM" "ModelsMP\\Items\\Keys\\CrystalSkull\\Skull.mdl"),
#define TEXTURE_CRYSTALSKULL ((0x00000325<<8)+61)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CRYSTALSKULL, "EFNM" "ModelsMP\\Items\\Keys\\CrystalSkull\\Skull.tex"),
#define CKeyItem_MODEL_62 0x3253E // (0x325<<8)+62
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_62, "EFNM" "Models\\Items\\Keys\\AnkhWood\\Ankh.mdl"),
#define CKeyItem_TEXTURE_63 0x3253F // (0x325<<8)+63
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_63, "EFNM" "Models\\Ages\\Egypt\\Vehicles\\BigBoat\\OldWood.tex"),
#define CKeyItem_MODEL_64 0x32540 // (0x325<<8)+64
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_64, "EFNM" "Models\\Items\\Keys\\AnkhStone\\Ankh.mdl"),
#define CKeyItem_TEXTURE_65 0x32541 // (0x325<<8)+65
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_65, "EFNM" "Models\\Items\\Keys\\AnkhStone\\Stone.tex"),
#define CKeyItem_MODEL_66 0x32542 // (0x325<<8)+66
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_66, "EFNM" "Models\\Items\\Keys\\AnkhGold\\Ankh.mdl"),
#define CKeyItem_TEXTURE_67 0x32543 // (0x325<<8)+67
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_67, "EFNM" "Models\\Items\\Keys\\AnkhGold\\Ankh.tex"),
#define CKeyItem_MODEL_68 0x32544 // (0x325<<8)+68
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_68, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.mdl"),
#define CKeyItem_TEXTURE_69 0x32545 // (0x325<<8)+69
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_69, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.tex"),
#define CKeyItem_MODEL_70 0x32546 // (0x325<<8)+70
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_70, "EFNM" "Models\\Items\\Keys\\Elements\\Air.mdl"),
#define CKeyItem_TEXTURE_71 0x32547 // (0x325<<8)+71
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_71, "EFNM" "Models\\Items\\Keys\\Elements\\Air.tex"),
#define CKeyItem_MODEL_72 0x32548 // (0x325<<8)+72
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_72, "EFNM" "Models\\Items\\Keys\\Elements\\Water.mdl"),
#define CKeyItem_TEXTURE_73 0x32549 // (0x325<<8)+73
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_73, "EFNM" "Models\\Items\\Keys\\Elements\\Water.tex"),
#define CKeyItem_MODEL_74 0x3254A // (0x325<<8)+74
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_74, "EFNM" "Models\\Items\\Keys\\Elements\\Fire.mdl"),
#define CKeyItem_TEXTURE_75 0x3254B // (0x325<<8)+75
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_75, "EFNM" "Models\\Items\\Keys\\Elements\\Fire.tex"),
#define CKeyItem_MODEL_76 0x3254C // (0x325<<8)+76
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_76, "EFNM" "Models\\Items\\Keys\\Elements\\Earth.mdl"),
#define CKeyItem_TEXTURE_77 0x3254D // (0x325<<8)+77
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_77, "EFNM" "Models\\Items\\Keys\\Elements\\Texture.tex"),
#define CKeyItem_MODEL_78 0x3254E // (0x325<<8)+78
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_78, "EFNM" "Models\\Items\\Keys\\RaKey\\Key.mdl"),
#define CKeyItem_TEXTURE_79 0x3254F // (0x325<<8)+79
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_79, "EFNM" "Models\\Items\\Keys\\RaKey\\Key.tex"),
#define CKeyItem_MODEL_80 0x32550 // (0x325<<8)+80
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_80, "EFNM" "Models\\Items\\Keys\\RaSign\\Sign.mdl"),
#define CKeyItem_TEXTURE_81 0x32551 // (0x325<<8)+81
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_81, "EFNM" "Models\\Items\\Keys\\RaSign\\Sign.tex"),
#define CKeyItem_MODEL_82 0x32552 // (0x325<<8)+82
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_82, "EFNM" "Models\\Items\\Keys\\EyeOfRa\\EyeOfRa.mdl"),
#define CKeyItem_TEXTURE_83 0x32553 // (0x325<<8)+83
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_83, "EFNM" "Models\\Items\\Keys\\EyeOfRa\\EyeOfRa.tex"),
#define CKeyItem_MODEL_84 0x32554 // (0x325<<8)+84
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_84, "EFNM" "Models\\Items\\Keys\\Scarab\\Scarab.mdl"),
#define CKeyItem_TEXTURE_85 0x32555 // (0x325<<8)+85
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_85, "EFNM" "Models\\Items\\Keys\\Scarab\\Scarab.tex"),
#define CKeyItem_MODEL_86 0x32556 // (0x325<<8)+86
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_86, "EFNM" "Models\\Items\\Keys\\Uaset\\Uaset.mdl"),
#define CKeyItem_TEXTURE_87 0x32557 // (0x325<<8)+87
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_87, "EFNM" "Models\\Items\\Keys\\Uaset\\Uaset.tex"),
#define CKeyItem_MODEL_88 0x32558 // (0x325<<8)+88
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_88, "EFNM" "Models\\Items\\Keys\\Luxor\\FeatherOfTruth.mdl"),
#define CKeyItem_TEXTURE_89 0x32559 // (0x325<<8)+89
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_89, "EFNM" "Models\\Items\\Keys\\Luxor\\FeatherOfTruth.tex"),
#define CKeyItem_MODEL_90 0x3255A // (0x325<<8)+90
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_90, "EFNM" "Models\\Items\\Keys\\Luxor\\GoldHeart.mdl"),
#define CKeyItem_TEXTURE_91 0x3255B // (0x325<<8)+91
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_91, "EFNM" "Models\\Items\\Keys\\Luxor\\GoldHeart.tex"),
#define CKeyItem_MODEL_92 0x3255C // (0x325<<8)+92
 CEntityComponent(ECT_MODEL, CKeyItem_MODEL_92, "EFNM" "Models\\Items\\Keys\\GoldSphinx\\GoldSphinx.mdl"),
#define CKeyItem_TEXTURE_93 0x3255D // (0x325<<8)+93
 CEntityComponent(ECT_TEXTURE, CKeyItem_TEXTURE_93, "EFNM" "Models\\Items\\Keys\\GoldSphinx\\Sphinx.tex"),
#define TEXTURE_FLARE ((0x00000325<<8)+250)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "ModelsMP\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000325<<8)+251)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "ModelsMP\\Items\\Flares\\Flare.mdl"),
#define TEX_REFL_GOLD01 ((0x00000325<<8)+252)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_GOLD01, "EFNM" "ModelsMP\\ReflectionTextures\\Gold01.tex"),
#define TEX_REFL_METAL01 ((0x00000325<<8)+253)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_METAL01, "EFNM" "ModelsMP\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_SPEC_MEDIUM ((0x00000325<<8)+254)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "ModelsMP\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x00000325<<8)+255)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "ModelsMP\\SpecularTextures\\Strong.tex"),
#define SOUND_KEY ((0x00000325<<8)+300)
 CEntityComponent(ECT_SOUND, SOUND_KEY, "EFNM" "Sounds\\Items\\Key.wav"),
};
#define CKeyItem_componentsct ARRAYCOUNT(CKeyItem_components)

CEventHandlerEntry CKeyItem_handlers[] = {
 {0x03250001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CKeyItem::ItemCollected),DEBUGSTRING("CKeyItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CKeyItem::Main),DEBUGSTRING("CKeyItem::Main")},
};
#define CKeyItem_handlersct ARRAYCOUNT(CKeyItem_handlers)

CEntity *CKeyItem_New(void) { return new CKeyItem; };
void CKeyItem_OnInitClass(void) {};
void CKeyItem_OnEndClass(void) {};
void CKeyItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CKeyItem_OnWorldEnd(CWorld *pwo) {};
void CKeyItem_OnWorldInit(CWorld *pwo) {};
void CKeyItem_OnWorldTick(CWorld *pwo) {};
void CKeyItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CKeyItem, CItem, "KeyItem", "Thumbnails\\KeyItem.tbn", 805);
DECLARE_CTFILENAME(_fnmCKeyItem_tbn, "Thumbnails\\KeyItem.tbn");
