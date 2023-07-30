// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Elemental_INCLUDED
#define _EntitiesV_Elemental_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
extern DECL_DLL CEntityPropertyEnumType ElementalType_enum;
enum ElementalType {
  ELT_AIR = 0,
  ELT_LAVA = 2,
  ELT_STONE = 3,
  ELT_WATER = 4,
  ELT_OMNI = 5,
};
DECL_DLL inline void ClearToDefault(ElementalType &e) { e = (ElementalType)0; } ;
extern DECL_DLL CEntityPropertyEnumType ElementalCharacter_enum;
enum ElementalCharacter {
  ELC_SMALL = 0,
  ELC_BIG = 1,
  ELC_LARGE = 2,
};
DECL_DLL inline void ClearToDefault(ElementalCharacter &e) { e = (ElementalCharacter)0; } ;
extern DECL_DLL CEntityPropertyEnumType ElementalState_enum;
enum ElementalState {
  ELS_NORMAL = 0,
  ELS_BOX = 1,
  ELS_PLANE = 2,
};
DECL_DLL inline void ClearToDefault(ElementalState &e) { e = (ElementalState)0; } ;
#define CElemental_ClassID 322
extern "C" DECL_DLL CDLLEntityClass CElemental_DLLClass;
class CElemental : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum ElementalType m_EetType;
  enum ElementalCharacter m_EecChar;
  enum ElementalState m_EesStartState;
  BOOL m_bSpawnWhenHarmed;
  BOOL m_bSpawnOnBlowUp;
  enum ElementalState m_EesCurrentState;
  BOOL m_bSpawned;
  BOOL m_bMovable;
  RANGE m_fLookRange;
  INDEX m_iFireCount;
  FLOAT m_fWaitTime;
  INDEX m_iCounter;
  FLOAT m_fDensity;
  CEntityPointer m_penPosition1;
  CEntityPointer m_penPosition2;
  CEntityPointer m_penPosition3;
  CEntityPointer m_penPosition4;
  CEntityPointer m_penPosition5;
  CEntityPointer m_penPosition6;
  CSoundObject m_soBackground;
  INDEX m_ctSpawned;
  FLOAT m_fSpawnDamage;
  BOOL m_bSpawnEnabled;
  CSoundObject m_soFireL;
  CSoundObject m_soFireR;
  INDEX m_bCountAsKill;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void RenderParticles(void);
   void Precache(void);
   void * GetEntityInfo(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void LeaveStain(BOOL bGrow);
   INDEX AnimForDamage(FLOAT fDamage);
   void StandingAnimFight(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   INDEX AnimForDeath(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   BOOL CountAsKill(void);
   void SpawnNewElemental(void);
   void ThrowRocks(ProjectileType EptProjectile);
   void BossFirePredictedLavaRock(FLOAT3D vFireingRel);
   void ShakeItBaby(FLOAT tmShaketime,FLOAT fPower);
   void SpawnShockwave(FLOAT fSize);
   void HitGround(void);
   void AddAttachments(void);
   void RemoveAttachments(void);
   void BlowUp(void);
   void EnemyPostInit(void);

  // [Cecil] Rev: Unknown procedures due to different elemental types
  BOOL H0x1420000_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0x1420001_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x1420002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x1420003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x1420004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x1420005_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x1420006_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x1420007_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x1420008_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x1420009_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x142000A_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x142000B_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x142000C_Procedure_12(const CEntityEvent &__eeInput);
  BOOL H0x142000D_Procedure_13(const CEntityEvent &__eeInput);
  BOOL H0x142000E_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x142000F_Procedure_15(const CEntityEvent &__eeInput);
  BOOL H0x1420010_Procedure_16(const CEntityEvent &__eeInput);
  BOOL H0x1420011_Procedure_17(const CEntityEvent &__eeInput);
  BOOL H0x1420012_Procedure_18(const CEntityEvent &__eeInput);
  BOOL H0x1420013_Procedure_19(const CEntityEvent &__eeInput);
  BOOL H0x1420014_Procedure_20(const CEntityEvent &__eeInput);
  BOOL H0x1420015_Procedure_21(const CEntityEvent &__eeInput);
  BOOL H0x1420016_Procedure_22(const CEntityEvent &__eeInput);
  BOOL H0x1420017_Procedure_23(const CEntityEvent &__eeInput);
  BOOL H0x1420018_Procedure_24(const CEntityEvent &__eeInput);
  BOOL H0x1420019_Procedure_25(const CEntityEvent &__eeInput);
  BOOL H0x142001A_Procedure_26(const CEntityEvent &__eeInput);
  BOOL H0x142001B_Procedure_27(const CEntityEvent &__eeInput);
  BOOL H0x142001C_Procedure_28(const CEntityEvent &__eeInput);
  BOOL H0x142001D_Procedure_29(const CEntityEvent &__eeInput);
  BOOL H0x142001E_Procedure_30(const CEntityEvent &__eeInput);
  BOOL H0x142001F_Procedure_31(const CEntityEvent &__eeInput);
  BOOL H0x1420020_Procedure_32(const CEntityEvent &__eeInput);
  BOOL H0x1420021_Procedure_33(const CEntityEvent &__eeInput);
  BOOL H0x1420022_Procedure_34(const CEntityEvent &__eeInput);
  BOOL H0x1420023_Procedure_35(const CEntityEvent &__eeInput);
  BOOL H0x1420024_Procedure_36(const CEntityEvent &__eeInput);
  BOOL H0x1420025_Procedure_37(const CEntityEvent &__eeInput);
  BOOL H0x1420026_Procedure_38(const CEntityEvent &__eeInput);
  BOOL H0x1420027_Procedure_39(const CEntityEvent &__eeInput);
  BOOL H0x1420028_Procedure_40(const CEntityEvent &__eeInput);
  BOOL H0x1420029_Procedure_41(const CEntityEvent &__eeInput);

#define  STATE_CElemental_BeWounded 0x0142002a
  BOOL BeWounded(const CEntityEvent &__eeInput);
#define  STATE_CElemental_BoxToNormal 0x0142002b
  BOOL BoxToNormal(const CEntityEvent &__eeInput);
  BOOL H0x0142002c_BoxToNormal_01(const CEntityEvent &__eeInput);
  BOOL H0x0142002d_BoxToNormal_02(const CEntityEvent &__eeInput);
#define  STATE_CElemental_PlaneToNormal 0x0142002e
  BOOL PlaneToNormal(const CEntityEvent &__eeInput);
  BOOL H0x0142002f_PlaneToNormal_01(const CEntityEvent &__eeInput);
  BOOL H0x01420030_PlaneToNormal_02(const CEntityEvent &__eeInput);
#define  STATE_CElemental_InitializeAttack 0x01420031
  BOOL InitializeAttack(const CEntityEvent &__eeInput);
  BOOL H0x01420032_InitializeAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x01420033_InitializeAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x01420034_InitializeAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x01420035_InitializeAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x01420036_InitializeAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x01420037_InitializeAttack_06(const CEntityEvent &__eeInput);
  BOOL H0x01420038_InitializeAttack_07(const CEntityEvent &__eeInput);
#define  STATE_CElemental_Fire 0x01420039
  BOOL Fire(const CEntityEvent &__eeInput);
#define  STATE_CElemental_Hit 0x0142003a
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CElemental_Death 0x0142003b
  BOOL Death(const CEntityEvent &__eeInput);

  // [Cecil] Rev: Unknown procedures due to different elemental types
  BOOL H0x142003C_Procedure_60(const CEntityEvent &__eeInput);
  BOOL H0x142003D_Procedure_61(const CEntityEvent &__eeInput);
  BOOL H0x142003E_Procedure_62(const CEntityEvent &__eeInput);
  BOOL H0x142003F_Procedure_63(const CEntityEvent &__eeInput);
  BOOL H0x1420040_Procedure_64(const CEntityEvent &__eeInput);
  BOOL H0x1420041_Procedure_65(const CEntityEvent &__eeInput);
  BOOL H0x1420042_Procedure_66(const CEntityEvent &__eeInput);
  BOOL H0x1420043_Procedure_67(const CEntityEvent &__eeInput);
  BOOL H0x1420044_Procedure_68(const CEntityEvent &__eeInput);
  BOOL H0x1420045_Procedure_69(const CEntityEvent &__eeInput);
  BOOL H0x1420046_Procedure_70(const CEntityEvent &__eeInput);
  BOOL H0x1420047_Procedure_71(const CEntityEvent &__eeInput);
  BOOL H0x1420048_Procedure_72(const CEntityEvent &__eeInput);
  BOOL H0x1420049_Procedure_73(const CEntityEvent &__eeInput);
  BOOL H0x142004A_Procedure_74(const CEntityEvent &__eeInput);

#define  STATE_CElemental_PreMainLoop 0x0142004b
  BOOL PreMainLoop(const CEntityEvent &__eeInput);
  BOOL H0x0142004c_PreMainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x0142004d_PreMainLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x0142004e_PreMainLoop_03(const CEntityEvent &__eeInput);
  BOOL H0x0142004f_PreMainLoop_04(const CEntityEvent &__eeInput);
  BOOL H0x01420050_PreMainLoop_05(const CEntityEvent &__eeInput);
  BOOL H0x01420051_PreMainLoop_06(const CEntityEvent &__eeInput);
#define  STATE_CElemental_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Elemental_INCLUDED
