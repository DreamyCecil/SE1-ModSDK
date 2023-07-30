// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_KeyItem_INCLUDED
#define _EntitiesV_KeyItem_INCLUDED 1
#include <EntitiesV/Item.h>
extern DECL_DLL CEntityPropertyEnumType KeyItemType_enum;
enum KeyItemType {
  KIT_ANKHWOOD = 0,
  KIT_ANKHROCK = 1,
  KIT_ANKHGOLD = 2,
  KIT_AMONGOLD = 3,
  KIT_ANKHGOLDDUMMY = 4,
  KIT_ELEMENTEARTH = 5,
  KIT_ELEMENTWATER = 6,
  KIT_ELEMENTAIR = 7,
  KIT_ELEMENTFIRE = 8,
  KIT_RAKEY = 9,
  KIT_MOONKEY = 10,
  KIT_EYEOFRA = 11,
  KIT_SCARAB = 12,
  KIT_COBRA = 13,
  KIT_SCARABDUMMY = 14,
  KIT_HEART = 15,
  KIT_FEATHER = 16,
  KIT_SPHINX1 = 17,
  KIT_SPHINX2 = 18,
  KIT_BOOKOFWISDOM = 19,
  KIT_CROSSWOODEN = 20,
  KIT_CROSSMETAL = 21,
  KIT_CROSSGOLD = 22,
  KIT_JAGUARGOLDDUMMY = 23,
  KIT_HAWKWINGS01DUMMY = 24,
  KIT_HAWKWINGS02DUMMY = 25,
  KIT_HOLYGRAIL = 26,
  KIT_TABLESDUMMY = 27,
  KIT_WINGEDLION = 28,
  KIT_ELEPHANTGOLD = 29,
  KIT_STATUEHEAD01 = 30,
  KIT_STATUEHEAD02 = 31,
  KIT_STATUEHEAD03 = 32,
  KIT_KINGSTATUE = 33,
  KIT_CRYSTALSKULL = 34,
};
DECL_DLL inline void ClearToDefault(KeyItemType &e) { e = (KeyItemType)0; } ;
#define EVENTCODE_EKey 0x03250000
class DECL_DLL EKey : public CEntityEvent {
public:
EKey();
CEntityEvent *MakeCopy(void);
enum KeyItemType kitType;
};
DECL_DLL inline void ClearToDefault(EKey &e) { e = EKey(); } ;
#define CKeyItem_ClassID 805
extern "C" DECL_DLL CDLLEntityClass CKeyItem_DLLClass;
class CKeyItem : public CItem {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum KeyItemType m_kitType;
  INDEX m_iSoundComponent;
  FLOAT m_fSize;
  CTString m_strCustomText;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void RenderParticles(void);
   void SetProperties(void);
#define  STATE_CKeyItem_ItemCollected 0x03250001
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CKeyItem_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_KeyItem_INCLUDED
