// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_WeaponItem_INCLUDED
#define _EntitiesV_WeaponItem_INCLUDED 1
#include <EntitiesV/Item.h>
extern DECL_DLL CEntityPropertyEnumType WeaponItemType_enum;
enum WeaponItemType {
  WIT_COLT = 1,
  WIT_SINGLESHOTGUN = 2,
  WIT_DOUBLESHOTGUN = 3,
  WIT_TOMMYGUN = 4,
  WIT_MINIGUN = 5,
  WIT_ROCKETLAUNCHER = 6,
  WIT_GRENADELAUNCHER = 7,
  WIT_SNIPER = 8,
  WIT_FLAMER = 9,
  WIT_LASER = 10,
  WIT_CHAINSAW = 11,
  WIT_CANNON = 12,
  WIT_GHOSTBUSTER = 13,
  WIT_PLASMATHROWER = 14,
  WIT_MINELAYER = 15,
};
DECL_DLL inline void ClearToDefault(WeaponItemType &e) { e = (WeaponItemType)0; } ;
#define EVENTCODE_EWeaponItem 0x03220000
class DECL_DLL EWeaponItem : public CEntityEvent {
public:
EWeaponItem();
CEntityEvent *MakeCopy(void);
INDEX iWeapon;
INDEX iAmmo;
BOOL bDropped;
};
DECL_DLL inline void ClearToDefault(EWeaponItem &e) { e = EWeaponItem(); } ;
extern "C" DECL_DLL CDLLEntityClass CWeaponItem_DLLClass;
class CWeaponItem : public CItem {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum WeaponItemType m_EwitType;
  INDEX m_iAmmoAmount;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void RenderParticles(void);
   void SetProperties(void);
#define  STATE_CWeaponItem_ItemCollected 0x03220001
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CWeaponItem_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x03220002_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x03220003_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x03220004_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x03220005_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x03220006_Main_05(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_WeaponItem_INCLUDED
