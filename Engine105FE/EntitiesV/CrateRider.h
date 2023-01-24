// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_CrateRider_INCLUDED
#define _EntitiesV_CrateRider_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern "C" DECL_DLL CDLLEntityClass CCrateRider_DLLClass;
class CCrateRider : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CTFileName m_fnmHeadTex1;
  CTFileName m_fnmHeadTex2;
  CTFileName m_fnmDriveSnd;
CAutoPrecacheSound m_aps;
CAutoPrecacheTexture m_apt1;
CAutoPrecacheTexture m_apt2;
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
   void AddRider(INDEX i,const CTFileName & fnmHead);
#define  STATE_CCrateRider_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CCrateRider_propnames[] = {
  "m_fnmHeadTex1",
  "m_fnmHeadTex2",
  "m_fnmDriveSnd",
};
#define CCrateRider_propnamesct ARRAYCOUNT(CCrateRider_propnames)

#endif // _EntitiesV_CrateRider_INCLUDED
