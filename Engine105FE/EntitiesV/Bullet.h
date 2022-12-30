// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Bullet_INCLUDED
#define _EntitiesV_Bullet_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#include <Engine/Classes/MovableEntity.h>
#define EVENTCODE_EBulletInit 0x01f60000
class DECL_DLL EBulletInit : public CEntityEvent {
public:
EBulletInit();
CEntityEvent *MakeCopy(void);
CEntityPointer penOwner;
FLOAT fDamage;
};
DECL_DLL inline void ClearToDefault(EBulletInit &e) { e = EBulletInit(); } ;
extern DECL_DLL CEntityPropertyEnumType BulletHitType_enum;
enum BulletHitType {
  BHT_NONE = 0,
  BHT_FLESH = 1,
  BHT_BRUSH_STONE = 2,
  BHT_BRUSH_SAND = 3,
  BHT_BRUSH_WATER = 4,
  BHT_BRUSH_UNDER_WATER = 5,
  BHT_ACID = 6,
  BHT_BRUSH_RED_SAND = 7,
};
DECL_DLL inline void ClearToDefault(BulletHitType &e) { e = (BulletHitType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CBullet_DLLClass;
class DECL_DLL  CBullet : public CEntity {
public:
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penOwner;
  FLOAT m_fDamage;
  FLOAT3D m_vTarget;
  FLOAT3D m_vTargetCopy;
  FLOAT3D m_vHitPoint;
  INDEX m_iBullet;
  enum DamageType m_EdtDamage;
  FLOAT m_fBulletSize;
   void SetDamage(FLOAT fDamage);
   void CalcTarget(FLOAT fRange);
   void CalcTarget(CEntity * pen,FLOAT fRange);
   void CalcJitterTarget(FLOAT fR);
   void CalcJitterTargetFixed(FLOAT fX,FLOAT fY,FLOAT fJitter);
   void LaunchBullet(BOOL bSound,BOOL bTrail,BOOL bHitFX);
   void DestroyBullet(void);
   void SpawnHitTypeEffect(enum BulletHitType bhtType,BOOL bSound,FLOAT3D vHitNormal,FLOAT3D vHitPoint,FLOAT3D vDirection,FLOAT3D vDistance);
   void SpawnTrail(void);
   void SpawnEffect(const FLOAT3D & vHit,const ESpawnEffect & eSpawnEffect);
#define  STATE_CBullet_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Bullet_INCLUDED
