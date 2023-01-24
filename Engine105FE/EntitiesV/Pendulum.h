// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Pendulum_INCLUDED
#define _EntitiesV_Pendulum_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CPendulum_DLLClass;
class CPendulum : public CMovableBrushEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  BOOL m_bDynamicShadows;
  FLOAT m_fMaxAngle;
  FLOAT m_fSpeed;
  FLOAT m_fDampFactor;
  FLOAT m_fPendulumFactor;
  FLOAT m_fImpulseFactor;
  FLOAT m_fTriggerImpulse;
  BOOL m_bActive;
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void PostMoving();
#define  STATE_CPendulum_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x006a0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x006a0001_Main_02(const CEntityEvent &__eeInput);
};

static const char *CPendulum_propnames[] = {
  "m_strName",
  "m_bDynamicShadows",
  "m_fMaxAngle",
  "m_fSpeed",
  "m_fDampFactor",
  "m_fPendulumFactor",
  "m_fImpulseFactor",
  "m_fTriggerImpulse",
  "m_bActive",
};
#define CPendulum_propnamesct ARRAYCOUNT(CPendulum_propnames)

#endif // _EntitiesV_Pendulum_INCLUDED
