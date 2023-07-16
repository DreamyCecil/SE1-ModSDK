// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Walker_INCLUDED
#define _EntitiesV_Walker_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Projectile.h>
extern DECL_DLL CEntityPropertyEnumType WalkerChar_enum;
enum WalkerChar {
  WLC_SOLDIER = 0,
  WLC_SERGEANT = 1,
  WLC_ARTILLERY = 2,
  WLC_SPAWNER = 3,
};
DECL_DLL inline void ClearToDefault(WalkerChar &e) { e = (WalkerChar)0; } ;
extern "C" DECL_DLL CDLLEntityClass CWalker_DLLClass;
class CWalker : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum WalkerChar m_EwcChar;
  INDEX m_iLoopCounter;
  FLOAT m_fSize;
  BOOL m_bWalkSoundPlaying;
  FLOAT m_fThreatDistance;
  INDEX m_iCustomFireCounter;
  INDEX m_ctMaxGizmos;
  INDEX m_ctLiveGizmos;
  CSoundObject m_soFeet;
  CSoundObject m_soFire1;
  CSoundObject m_soFire2;
  CSoundObject m_soFire3;
  CSoundObject m_soFire4;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   FLOAT GetThreatDistance(void);
   BOOL ForcesCannonballToExplode(void);
   void Precache(void);
   void * GetEntityInfo(void);
   FLOAT GetCrushHealth(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void StandingAnim(void);
   void StandingAnimFight(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void DeathSound(void);
   void ActivateWalkingSound(void);
   void DeactivateWalkingSound(void);
   void FireDeathRocket(FLOAT3D & vPos);
   void FireDeathLaser(FLOAT3D & vPos);
   void EnemyPostInit(void);
#define  STATE_CWalker_Fire 0x01440000
  BOOL Fire(const CEntityEvent &__eeInput);

  // [Cecil] Rev: Unknown procedures due to different walker types
  BOOL H0x1440001_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x1440002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x1440003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x1440004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x1440005_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x1440006_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x1440007_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x1440008_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x1440009_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x144000A_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x144000B_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x144000C_Procedure_12(const CEntityEvent &__eeInput);
  BOOL H0x144000D_Procedure_13(const CEntityEvent &__eeInput);
  BOOL H0x144000E_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x144000F_Procedure_15(const CEntityEvent &__eeInput);
  BOOL H0x1440010_Procedure_16(const CEntityEvent &__eeInput);
  BOOL H0x1440011_Procedure_17(const CEntityEvent &__eeInput);
  BOOL H0x1440012_Procedure_18(const CEntityEvent &__eeInput);
  BOOL H0x1440013_Procedure_19(const CEntityEvent &__eeInput);
  BOOL H0x1440014_Procedure_20(const CEntityEvent &__eeInput);
  BOOL H0x1440015_Procedure_21(const CEntityEvent &__eeInput);
  BOOL H0x1440016_Procedure_22(const CEntityEvent &__eeInput);
  BOOL H0x1440017_Procedure_23(const CEntityEvent &__eeInput);
  BOOL H0x1440018_Procedure_24(const CEntityEvent &__eeInput);
  BOOL H0x1440019_Procedure_25(const CEntityEvent &__eeInput);
  BOOL H0x144001A_Procedure_26(const CEntityEvent &__eeInput);
  BOOL H0x144001B_Procedure_27(const CEntityEvent &__eeInput);
  BOOL H0x144001C_Procedure_28(const CEntityEvent &__eeInput);
  BOOL H0x144001D_Procedure_29(const CEntityEvent &__eeInput);
  BOOL H0x144001E_Procedure_30(const CEntityEvent &__eeInput);
  BOOL H0x144001F_Procedure_31(const CEntityEvent &__eeInput);
  BOOL H0x1440020_Procedure_32(const CEntityEvent &__eeInput);
  BOOL H0x1440021_Procedure_33(const CEntityEvent &__eeInput);
  BOOL H0x1440022_Procedure_34(const CEntityEvent &__eeInput);
  BOOL H0x1440023_Procedure_35(const CEntityEvent &__eeInput);

#define  STATE_CWalker_Death 0x01440024
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x01440025_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x01440026_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x01440027_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x01440028_Death_04(const CEntityEvent &__eeInput);
  BOOL H0x01440029_Death_05(const CEntityEvent &__eeInput);
  BOOL H0x0144002a_Death_06(const CEntityEvent &__eeInput);
#define  STATE_CWalker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Walker_INCLUDED
