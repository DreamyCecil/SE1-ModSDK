// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_AmmoItem_INCLUDED
#define _EntitiesV_AmmoItem_INCLUDED 1
#include <EntitiesV/Item.h>
extern DECL_DLL CEntityPropertyEnumType AmmoItemType_enum;
enum AmmoItemType {
  AIT_SHELLS = 1,
  AIT_BULLETS = 2,
  AIT_ROCKETS = 3,
  AIT_GRENADES = 4,
  AIT_ELECTRICITY = 5,
  AIT_NUKEBALL = 6,
  AIT_IRONBALLS = 7,
  AIT_SERIOUSPACK = 8,
  AIT_BACKPACK = 9,
  AIT_NAPALM = 10,
  AIT_SNIPERBULLETS = 11,
  AIT_PLASMAPACKS = 12,
  AIT_MINEPACKS = 13,
};
DECL_DLL inline void ClearToDefault(AmmoItemType &e) { e = (AmmoItemType)0; } ;
#define EVENTCODE_EAmmoItem 0x03230000
class DECL_DLL EAmmoItem : public CEntityEvent {
public:
EAmmoItem();
CEntityEvent *MakeCopy(void);
enum AmmoItemType EaitType;
INDEX iQuantity;
};
DECL_DLL inline void ClearToDefault(EAmmoItem &e) { e = EAmmoItem(); } ;
extern "C" DECL_DLL CDLLEntityClass CAmmoItem_DLLClass;
class CAmmoItem : public CItem {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum AmmoItemType m_EaitType;
   void Precache(void);
   void RenderParticles(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void SetProperties(void);
   void AdjustDifficulty(void);
#define  STATE_CAmmoItem_ItemCollected 0x03230001
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CAmmoItem_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_AmmoItem_INCLUDED
