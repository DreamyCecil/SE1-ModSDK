// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CPhotoAlbum

CEntityProperty CPhotoAlbum_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x266<<8)+1, 0x340, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x266<<8)+2, 0x344, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x266<<8)+3, 0x348, "", 0, "m_iCurrentPage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x266<<8)+4, 0x34C, "Page wait", 'W', "m_tmPageWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x266<<8)+10, 0x350, "", 0, "m_soPage", 0x0UL, 0),
};
#define CPhotoAlbum_propertiesct ARRAYCOUNT(CPhotoAlbum_properties)

CEntityComponent CPhotoAlbum_components[] = {
#define MODEL_ALBUM ((0x00000266<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_ALBUM, "EFNM" "ModelsMP\\CutSequences\\Book\\Book.mdl"),
#define TEXTURE_ALBUM ((0x00000266<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ALBUM, "EFNM" "ModelsMP\\CutSequences\\Book\\Book.tex"),
#define MODEL_PAGE ((0x00000266<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_PAGE, "EFNM" "ModelsMP\\CutSequences\\Book\\CoverPages.mdl"),
#define TEXTURE_PAGE01 ((0x00000266<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE01, "EFNM" "ModelsMP\\CutSequences\\Book\\Page01.tex"),
#define TEXTURE_PAGE02 ((0x00000266<<8)+14)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE02, "EFNM" "ModelsMP\\CutSequences\\Book\\Page02.tex"),
#define TEXTURE_PAGE03 ((0x00000266<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE03, "EFNM" "ModelsMP\\CutSequences\\Book\\Page03.tex"),
#define TEXTURE_PAGE04 ((0x00000266<<8)+16)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE04, "EFNM" "ModelsMP\\CutSequences\\Book\\Page04.tex"),
#define TEXTURE_PAGE_JOKE ((0x00000266<<8)+17)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE_JOKE, "EFNM" "ModelsMP\\CutSequences\\Book\\PageJoke.tex"),
#define TEXTURE_PAGE05 ((0x00000266<<8)+18)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE05, "EFNM" "ModelsMP\\CutSequences\\Book\\Page05.tex"),
#define TEXTURE_PAGE06 ((0x00000266<<8)+19)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE06, "EFNM" "ModelsMP\\CutSequences\\Book\\Page06.tex"),
#define TEXTURE_PAGE07 ((0x00000266<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PAGE07, "EFNM" "ModelsMP\\CutSequences\\Book\\Page07.tex"),
#define TEXTURE_BLANK_PAGE ((0x00000266<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLANK_PAGE, "EFNM" "ModelsMP\\CutSequences\\Book\\Blank_Page.tex"),
#define SOUND_PAGE ((0x00000266<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_PAGE, "EFNM" "ModelsMP\\CutSequences\\Book\\Sounds\\PageFlip.wav"),
};
#define CPhotoAlbum_componentsct ARRAYCOUNT(CPhotoAlbum_components)

CEventHandlerEntry CPhotoAlbum_handlers[] = {
 {0x02660000, -1, CEntity::pEventHandler(&CPhotoAlbum::OpenBook),DEBUGSTRING("CPhotoAlbum::OpenBook")},
 {0x02660001, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660001_OpenBook_01), DEBUGSTRING("CPhotoAlbum::H0x02660001_OpenBook_01")},
 {0x02660002, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660002_OpenBook_02), DEBUGSTRING("CPhotoAlbum::H0x02660002_OpenBook_02")},
 {0x02660003, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660003_OpenBook_03), DEBUGSTRING("CPhotoAlbum::H0x02660003_OpenBook_03")},
 {0x02660004, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660004_OpenBook_04), DEBUGSTRING("CPhotoAlbum::H0x02660004_OpenBook_04")},
 {0x02660005, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660005_OpenBook_05), DEBUGSTRING("CPhotoAlbum::H0x02660005_OpenBook_05")},
 {0x02660006, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660006_OpenBook_06), DEBUGSTRING("CPhotoAlbum::H0x02660006_OpenBook_06")},
 {0x02660007, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660007_OpenBook_07), DEBUGSTRING("CPhotoAlbum::H0x02660007_OpenBook_07")},
 {0x02660008, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660008_OpenBook_08), DEBUGSTRING("CPhotoAlbum::H0x02660008_OpenBook_08")},
 {0x02660009, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x02660009_OpenBook_09), DEBUGSTRING("CPhotoAlbum::H0x02660009_OpenBook_09")},
 {0x0266000a, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x0266000a_OpenBook_10), DEBUGSTRING("CPhotoAlbum::H0x0266000a_OpenBook_10")},
 {0x0266000b, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x0266000b_OpenBook_11), DEBUGSTRING("CPhotoAlbum::H0x0266000b_OpenBook_11")},
 {0x0266000c, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x0266000c_OpenBook_12), DEBUGSTRING("CPhotoAlbum::H0x0266000c_OpenBook_12")},
 {1, -1, CEntity::pEventHandler(&CPhotoAlbum::Main),DEBUGSTRING("CPhotoAlbum::Main")},
 {0x0266000d, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x0266000d_Main_01), DEBUGSTRING("CPhotoAlbum::H0x0266000d_Main_01")},
 {0x0266000e, -1, CEntity::pEventHandler(&CPhotoAlbum::H0x0266000e_Main_02), DEBUGSTRING("CPhotoAlbum::H0x0266000e_Main_02")},
};
#define CPhotoAlbum_handlersct ARRAYCOUNT(CPhotoAlbum_handlers)

CEntity *CPhotoAlbum_New(void) { return new CPhotoAlbum; };
void CPhotoAlbum_OnInitClass(void) {};
void CPhotoAlbum_OnEndClass(void) {};
void CPhotoAlbum_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPhotoAlbum_OnWorldEnd(CWorld *pwo) {};
void CPhotoAlbum_OnWorldInit(CWorld *pwo) {};
void CPhotoAlbum_OnWorldTick(CWorld *pwo) {};
void CPhotoAlbum_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPhotoAlbum, CMovableModelEntity, "PhotoAlbum", "Thumbnails\\PhotoAlbum.tbn", 614);
DECLARE_CTFILENAME(_fnmCPhotoAlbum_tbn, "Thumbnails\\PhotoAlbum.tbn");
