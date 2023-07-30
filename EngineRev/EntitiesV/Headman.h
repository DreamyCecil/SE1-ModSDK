// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Headman_INCLUDED
#define _EntitiesV_Headman_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Projectile.h>
extern DECL_DLL CEntityPropertyEnumType HeadmanType_enum;
enum HeadmanType {
  HDT_FIRECRACKER = 0,
  HDT_ROCKETMAN = 1,
  HDT_BOMBERMAN = 2,
  HDT_KAMIKAZE = 3,
  HDT_COMMANDO = 4,
  HDT_VAPORWAVE = 5,
};
DECL_DLL inline void ClearToDefault(HeadmanType &e) { e = (HeadmanType)0; } ;
#define CHeadman_ClassID 303
extern "C" DECL_DLL CDLLEntityClass CHeadman_DLLClass;
class CHeadman : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum HeadmanType m_hdtType;
  BOOL m_bExploded;
  BOOL m_bAttackSound;
  INDEX m_iLoopRand;
  INDEX m_iLoopCounter;
  INDEX m_iLoopAngle;
  enum ProjectileType m_ptLoopProjectile;
  BOOL m_iCustomFireWait;
  INDEX m_iCustomAngle;
  INDEX m_iCustomNumber;
  INDEX m_iCustomFireCounter;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void * GetEntityInfo(void);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   FLOAT WaitForDust(FLOAT3D & vStretch);
   BOOL ShouldBlowUp(void);
   void DeathNotify(void);
   void StandingAnim(void);
   void StandingAnimFight(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void KamikazeSoundOn(void);
   void KamikazeSoundOff(void);
   void BlowUpNotify(void);
   void Explode(void);
   void SetSpeedsToDesiredPosition(const FLOAT3D & vPosDelta,FLOAT fPosDistance,BOOL bGoingToPlayer);
  virtual FLOAT GetAttackMoveFrequency(FLOAT fEnemyDistance);
#define  STATE_CHeadman_InitializeAttack 0x012f0000
  BOOL InitializeAttack(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_StopAttack 0x012f0001
  BOOL StopAttack(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_Fire 0x012f0002
  BOOL Fire(const CEntityEvent &__eeInput);

  // [Cecil] Rev: Unknown procedures due to different headman types
  BOOL H0x12F0003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x12F0004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x12F0005_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x12F0006_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x12F0007_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x12F0008_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x12F0009_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x12F000A_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x12F000B_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x12F000C_Procedure_12(const CEntityEvent &__eeInput);
  BOOL H0x12F000D_Procedure_13(const CEntityEvent &__eeInput);
  BOOL H0x12F000E_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x12F000F_Procedure_15(const CEntityEvent &__eeInput);
  BOOL H0x12F0010_Procedure_16(const CEntityEvent &__eeInput);
  BOOL H0x12F0011_Procedure_17(const CEntityEvent &__eeInput);
  BOOL H0x12F0012_Procedure_18(const CEntityEvent &__eeInput);
  BOOL H0x12F0013_Procedure_19(const CEntityEvent &__eeInput);
  BOOL H0x12F0014_Procedure_20(const CEntityEvent &__eeInput);
  BOOL H0x12F0015_Procedure_21(const CEntityEvent &__eeInput);
  BOOL H0x12F0016_Procedure_22(const CEntityEvent &__eeInput);
  BOOL H0x12F0017_Procedure_23(const CEntityEvent &__eeInput);
  BOOL H0x12F0018_Procedure_24(const CEntityEvent &__eeInput);
  BOOL H0x12F0019_Procedure_25(const CEntityEvent &__eeInput);
  BOOL H0x12F001A_Procedure_26(const CEntityEvent &__eeInput);
  BOOL H0x12F001B_Procedure_27(const CEntityEvent &__eeInput);
  BOOL H0x12F001C_Procedure_28(const CEntityEvent &__eeInput);
  BOOL H0x12F001D_Procedure_29(const CEntityEvent &__eeInput);
  BOOL H0x12F001E_Procedure_30(const CEntityEvent &__eeInput);
  BOOL H0x12F001F_Procedure_31(const CEntityEvent &__eeInput);
  BOOL H0x12F0020_Procedure_32(const CEntityEvent &__eeInput);
  BOOL H0x12F0021_Procedure_33(const CEntityEvent &__eeInput);
  BOOL H0x12F0022_Procedure_34(const CEntityEvent &__eeInput);
  BOOL H0x12F0023_Procedure_35(const CEntityEvent &__eeInput);
  BOOL H0x12F0024_Procedure_36(const CEntityEvent &__eeInput);
  BOOL H0x12F0025_Procedure_37(const CEntityEvent &__eeInput);
  BOOL H0x12F0026_Procedure_38(const CEntityEvent &__eeInput);
  BOOL H0x12F0027_Procedure_39(const CEntityEvent &__eeInput);
  BOOL H0x12F0028_Procedure_40(const CEntityEvent &__eeInput);
  BOOL H0x12F0029_Procedure_41(const CEntityEvent &__eeInput);
  BOOL H0x12F002A_Procedure_42(const CEntityEvent &__eeInput);
  BOOL H0x12F002B_Procedure_43(const CEntityEvent &__eeInput);
  BOOL H0x12F002C_Procedure_44(const CEntityEvent &__eeInput);
  BOOL H0x12F002D_Procedure_45(const CEntityEvent &__eeInput);
  BOOL H0x12F002E_Procedure_46(const CEntityEvent &__eeInput);
  BOOL H0x12F002F_Procedure_47(const CEntityEvent &__eeInput);
  BOOL H0x12F0030_Procedure_48(const CEntityEvent &__eeInput);
  BOOL H0x12F0031_Procedure_49(const CEntityEvent &__eeInput);
  BOOL H0x12F0032_Procedure_50(const CEntityEvent &__eeInput);
  BOOL H0x12F0033_Procedure_51(const CEntityEvent &__eeInput);
  BOOL H0x12F0034_Procedure_52(const CEntityEvent &__eeInput);
  BOOL H0x12F0035_Procedure_53(const CEntityEvent &__eeInput);
  BOOL H0x12F0036_Procedure_54(const CEntityEvent &__eeInput);
  BOOL H0x12F0037_Procedure_55(const CEntityEvent &__eeInput);
  BOOL H0x12F0038_Procedure_56(const CEntityEvent &__eeInput);
  BOOL H0x12F0039_Procedure_57(const CEntityEvent &__eeInput);
  BOOL H0x12F003A_Procedure_58(const CEntityEvent &__eeInput);
  BOOL H0x12F003B_Procedure_59(const CEntityEvent &__eeInput);
  BOOL H0x12F003C_Procedure_60(const CEntityEvent &__eeInput);
  BOOL H0x12F003D_Procedure_61(const CEntityEvent &__eeInput);
  BOOL H0x12F003E_Procedure_62(const CEntityEvent &__eeInput);
  BOOL H0x12F003F_Procedure_63(const CEntityEvent &__eeInput);
  BOOL H0x12F0040_Procedure_64(const CEntityEvent &__eeInput);
  BOOL H0x12F0041_Procedure_65(const CEntityEvent &__eeInput);
  BOOL H0x12F0042_Procedure_66(const CEntityEvent &__eeInput);
  BOOL H0x12F0043_Procedure_67(const CEntityEvent &__eeInput);
  BOOL H0x12F0044_Procedure_68(const CEntityEvent &__eeInput);
  BOOL H0x12F0045_Procedure_69(const CEntityEvent &__eeInput);
  BOOL H0x12F0046_Procedure_70(const CEntityEvent &__eeInput);
  BOOL H0x12F0047_Procedure_71(const CEntityEvent &__eeInput);
  BOOL H0x12F0048_Procedure_72(const CEntityEvent &__eeInput);
  BOOL H0x12F0049_Procedure_73(const CEntityEvent &__eeInput);
  BOOL H0x12F004A_Procedure_74(const CEntityEvent &__eeInput);
  BOOL H0x12F004B_Procedure_75(const CEntityEvent &__eeInput);
  BOOL H0x12F004C_Procedure_76(const CEntityEvent &__eeInput);
  BOOL H0x12F004D_Procedure_77(const CEntityEvent &__eeInput);
  BOOL H0x12F004E_Procedure_78(const CEntityEvent &__eeInput);
  BOOL H0x12F004F_Procedure_79(const CEntityEvent &__eeInput);
  BOOL H0x12F0050_Procedure_80(const CEntityEvent &__eeInput);
  BOOL H0x12F0051_Procedure_81(const CEntityEvent &__eeInput);
  BOOL H0x12F0052_Procedure_82(const CEntityEvent &__eeInput);
  BOOL H0x12F0053_Procedure_83(const CEntityEvent &__eeInput);
  BOOL H0x12F0054_Procedure_84(const CEntityEvent &__eeInput);
  BOOL H0x12F0055_Procedure_85(const CEntityEvent &__eeInput);
  BOOL H0x12F0056_Procedure_86(const CEntityEvent &__eeInput);
  BOOL H0x12F0057_Procedure_87(const CEntityEvent &__eeInput);
  BOOL H0x12F0058_Procedure_88(const CEntityEvent &__eeInput);
  BOOL H0x12F0059_Procedure_89(const CEntityEvent &__eeInput);
  BOOL H0x12F005A_Procedure_90(const CEntityEvent &__eeInput);
  BOOL H0x12F005B_Procedure_91(const CEntityEvent &__eeInput);
  BOOL H0x12F005C_Procedure_92(const CEntityEvent &__eeInput);
  BOOL H0x12F005D_Procedure_93(const CEntityEvent &__eeInput);
  BOOL H0x12F005E_Procedure_94(const CEntityEvent &__eeInput);
  BOOL H0x12F005F_Procedure_95(const CEntityEvent &__eeInput);
  BOOL H0x12F0060_Procedure_96(const CEntityEvent &__eeInput);
  BOOL H0x12F0061_Procedure_97(const CEntityEvent &__eeInput);
  BOOL H0x12F0062_Procedure_98(const CEntityEvent &__eeInput);
  BOOL H0x12F0063_Procedure_99(const CEntityEvent &__eeInput);
  BOOL H0x12F0064_Procedure_100(const CEntityEvent &__eeInput);
  BOOL H0x12F0065_Procedure_101(const CEntityEvent &__eeInput);
  BOOL H0x12F0066_Procedure_102(const CEntityEvent &__eeInput);
  BOOL H0x12F0067_Procedure_103(const CEntityEvent &__eeInput);
  BOOL H0x12F0068_Procedure_104(const CEntityEvent &__eeInput);
  BOOL H0x12F0069_Procedure_105(const CEntityEvent &__eeInput);
  BOOL H0x12F006A_Procedure_106(const CEntityEvent &__eeInput);
  BOOL H0x12F006B_Procedure_107(const CEntityEvent &__eeInput);

#define  STATE_CHeadman_Death 0x012f006c
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x012f006d_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x012f006e_Death_02(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Headman_INCLUDED
