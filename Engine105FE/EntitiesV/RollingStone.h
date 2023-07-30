// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_RollingStone_INCLUDED
#define _EntitiesV_RollingStone_INCLUDED 1
#include <EntitiesV/Debris.h>
#define CRollingStone_ClassID 604
extern "C" DECL_DLL CDLLEntityClass CRollingStone_DLLClass;
class CRollingStone : public CMovableModelEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fBounce;
  FLOAT m_fHealth;
  FLOAT m_fDamage;
  BOOL m_bFixedDamage;
  FLOAT m_fStretch;
  FLOAT m_fDeceleration;
  FLOAT m_fStartSpeed;
  ANGLE3D m_vStartDir;
  CSoundObject m_soBounce0;
  CSoundObject m_soBounce1;
  CSoundObject m_soBounce2;
  CSoundObject m_soBounce3;
  CSoundObject m_soBounce4;
  INDEX m_iNextChannel;
  CSoundObject m_soRoll;
  BOOL m_bRollPlaying;
  FLOATquat3D m_qA;
  FLOATquat3D m_qALast;
  FLOAT m_fASpeed;
  FLOAT3D m_vR;
   void Precache(void);
   void PostMoving();
   void AdjustMipFactor(FLOAT & fMipFactor);
   void AdjustSpeedOnOneAxis(FLOAT & fTraNow,FLOAT & aRotNow,BOOL bRolling);
   void AdjustSpeeds(const FLOAT3D & vPlane);
   void BounceSound(FLOAT fSpeed);
   void RollSound(FLOAT fSpeed);
#define  STATE_CRollingStone_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x025c0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x025c0001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x025c0002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x025c0003_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_RollingStone_INCLUDED
