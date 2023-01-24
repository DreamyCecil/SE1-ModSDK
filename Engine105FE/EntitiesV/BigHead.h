// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_BigHead_INCLUDED
#define _EntitiesV_BigHead_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern "C" DECL_DLL CDLLEntityClass CBigHead_DLLClass;
class CBigHead : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CTFileName m_fnmHeadTex;
  CTFileName m_fnmNameSnd;
  FLOAT m_tmLastGreetTime;
CAutoPrecacheSound m_aps;
CAutoPrecacheTexture m_apt;
   void * GetEntityInfo(void);
   void Precache(void);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
#define  STATE_CBigHead_Fire 0x01540000
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01540001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01540002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01540003_Fire_03(const CEntityEvent &__eeInput);
#define  STATE_CBigHead_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CBigHead_propnames[] = {
  "m_fnmHeadTex",
  "m_fnmNameSnd",
  "m_tmLastGreetTime",
};
#define CBigHead_propnamesct ARRAYCOUNT(CBigHead_propnames)

#endif // _EntitiesV_BigHead_INCLUDED
