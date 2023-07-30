// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_BloodSpray_INCLUDED
#define _EntitiesV_BloodSpray_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType SprayParticlesType_enum;
enum SprayParticlesType {
  SPT_NONE = 0,
  SPT_BLOOD = 1,
  SPT_BONES = 2,
  SPT_FEATHER = 3,
  SPT_STONES = 4,
  SPT_WOOD = 5,
  SPT_SLIME = 6,
  SPT_LAVA_STONES = 7,
  SPT_ELECTRICITY_SPARKS = 8,
  SPT_BEAST_PROJECTILE_SPRAY = 9,
  SPT_SMALL_LAVA_STONES = 10,
};
DECL_DLL inline void ClearToDefault(SprayParticlesType &e) { e = (SprayParticlesType)0; } ;
#define EVENTCODE_ESpawnSpray 0x025b0000
class DECL_DLL ESpawnSpray : public CEntityEvent {
public:
ESpawnSpray();
CEntityEvent *MakeCopy(void);
enum SprayParticlesType sptType;
FLOAT fDamagePower;
FLOAT fSizeMultiplier;
FLOAT3D vDirection;
CEntityPointer penOwner;
};
DECL_DLL inline void ClearToDefault(ESpawnSpray &e) { e = ESpawnSpray(); } ;
#define CBloodSpray_ClassID 603
extern "C" DECL_DLL CDLLEntityClass CBloodSpray_DLLClass;
class CBloodSpray : public CRationalEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum SprayParticlesType m_sptType;
  FLOAT m_tmStarted;
  FLOAT3D m_vDirection;
  CEntityPointer m_penOwner;
  FLOAT m_fDamagePower;
  FLOATaabbox3D m_boxOwner;
  FLOAT3D m_vGDir;
  FLOAT m_fGA;
  CEntityPointer m_penPrediction;
   void RenderParticles(void);
#define  STATE_CBloodSpray_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x025b0001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x025b0002_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_BloodSpray_INCLUDED
