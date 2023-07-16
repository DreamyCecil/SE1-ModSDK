// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Beast_INCLUDED
#define _EntitiesV_Beast_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType BeastType_enum;
enum BeastType {
  BT_NORMAL = 0,
  BT_BIG = 1,
  BT_HUGE = 2,
};
DECL_DLL inline void ClearToDefault(BeastType &e) { e = (BeastType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CBeast_DLLClass;
class CBeast : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum BeastType m_bcType;
  INDEX m_iCounter;
  BOOL m_bBeBoss;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   void * GetEntityInfo(void);
   void ShakeItBaby(FLOAT tmShaketime,FLOAT fPower);
   FLOAT GetCrushHealth(void);
   BOOL ForcesCannonballToExplode(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   FLOAT WaitForDust(FLOAT3D & vStretch);
   void DeathNotify(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void EnemyPostInit(void);
#define  STATE_CBeast_Death 0x01500000
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x01500001_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x01500002_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x01500003_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x01500004_Death_04(const CEntityEvent &__eeInput);
  BOOL H0x01500005_Death_05(const CEntityEvent &__eeInput);
  BOOL H0x01500006_Death_06(const CEntityEvent &__eeInput);
#define  STATE_CBeast_Fire 0x01500007
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01500008_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01500009_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x0150000a_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x0150000b_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x0150000c_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x0150000d_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x0150000e_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x0150000f_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x01500010_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x01500011_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x01500012_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x01500013_Fire_12(const CEntityEvent &__eeInput);
  BOOL H0x01500014_Fire_13(const CEntityEvent &__eeInput);
  BOOL H0x01500015_Fire_14(const CEntityEvent &__eeInput);
  BOOL H0x01500016_Fire_15(const CEntityEvent &__eeInput);
  BOOL H0x01500017_Fire_16(const CEntityEvent &__eeInput);
  BOOL H0x01500018_Fire_17(const CEntityEvent &__eeInput);
  BOOL H0x01500019_Fire_18(const CEntityEvent &__eeInput);
  BOOL H0x0150001a_Fire_19(const CEntityEvent &__eeInput);
  BOOL H0x0150001b_Fire_20(const CEntityEvent &__eeInput);
  BOOL H0x0150001c_Fire_21(const CEntityEvent &__eeInput);
  BOOL H0x0150001d_Fire_22(const CEntityEvent &__eeInput);
  BOOL H0x0150001e_Fire_23(const CEntityEvent &__eeInput);
  BOOL H0x0150001f_Fire_24(const CEntityEvent &__eeInput);
  BOOL H0x01500020_Fire_25(const CEntityEvent &__eeInput);
  BOOL H0x01500021_Fire_26(const CEntityEvent &__eeInput);
  BOOL H0x01500022_Fire_27(const CEntityEvent &__eeInput);
  BOOL H0x01500023_Fire_28(const CEntityEvent &__eeInput);
  BOOL H0x01500024_Fire_29(const CEntityEvent &__eeInput);
  BOOL H0x01500025_Fire_30(const CEntityEvent &__eeInput);
  BOOL H0x01500026_Fire_31(const CEntityEvent &__eeInput);
  BOOL H0x01500027_Fire_32(const CEntityEvent &__eeInput);
  BOOL H0x01500028_Fire_33(const CEntityEvent &__eeInput);
  BOOL H0x01500029_Fire_34(const CEntityEvent &__eeInput);
  BOOL H0x0150002a_Fire_35(const CEntityEvent &__eeInput);
  BOOL H0x0150002b_Fire_36(const CEntityEvent &__eeInput);
  BOOL H0x0150002c_Fire_37(const CEntityEvent &__eeInput);
  BOOL H0x0150002d_Fire_38(const CEntityEvent &__eeInput);
  BOOL H0x0150002e_Fire_39(const CEntityEvent &__eeInput);
  BOOL H0x0150002f_Fire_40(const CEntityEvent &__eeInput);
  BOOL H0x01500030_Fire_41(const CEntityEvent &__eeInput);
  BOOL H0x01500031_Fire_42(const CEntityEvent &__eeInput);
  BOOL H0x01500032_Fire_43(const CEntityEvent &__eeInput);
  BOOL H0x01500033_Fire_44(const CEntityEvent &__eeInput);
  BOOL H0x01500034_Fire_45(const CEntityEvent &__eeInput);
  BOOL H0x01500035_Fire_46(const CEntityEvent &__eeInput);
  BOOL H0x01500036_Fire_47(const CEntityEvent &__eeInput);
#define  STATE_CBeast_Hit 0x01500037
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x01500038_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x01500039_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x0150003a_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x0150003b_Hit_04(const CEntityEvent &__eeInput);
#define  STATE_CBeast_PreMainLoop 0x0150003c
  BOOL PreMainLoop(const CEntityEvent &__eeInput);
#define  STATE_CBeast_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Beast_INCLUDED
