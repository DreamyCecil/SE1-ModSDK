// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_EnvironmentParticlesHolder_INCLUDED
#define _EntitiesV_EnvironmentParticlesHolder_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType EnvironmentParticlesHolderType_enum;
enum EnvironmentParticlesHolderType {
  EPTH_NONE = 0,
  EPTH_GROWTH = 1,
  EPTH_RAIN = 2,
  EPTH_SNOW = 3,
};
DECL_DLL inline void ClearToDefault(EnvironmentParticlesHolderType &e) { e = (EnvironmentParticlesHolderType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CEnvironmentParticlesHolder_DLLClass;
class CEnvironmentParticlesHolder : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CTFileName m_fnHeightMap;
  FLOATaabbox3D m_boxHeightMap;
  enum EnvironmentParticlesHolderType m_eptType;
  CEntityPointer m_penNextHolder;
  FLOAT m_tmRainStart;
  FLOAT m_tmRainEnd;
  FLOAT m_tmSnowStart;
  FLOAT m_tmSnowEnd;
  CModelObject m_moHeightMapHolder;
  CModelObject m_moParticleTextureHolder;
  CTFileName m_fnTexture;
  FLOAT m_fGrowthRenderingStep;
  FLOAT m_fGrowthRenderingRadius;
  FLOAT m_fGrowthRenderingRadiusFade;
  BOOL m_bGrowthHighresMap;
  INDEX m_iGrowthMapX;
  INDEX m_iGrowthMapY;
  FLOAT m_fGrowthMinSize;
  FLOAT m_fGrowthMaxSize;
  FLOAT m_fParticlesSinkFactor;
  FLOAT m_fRainAppearLen;
  FLOAT m_fSnowAppearLen;
CListHead lhCache;
   void Precache(void);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   FLOAT GetRainFactor(void);
   FLOAT GetSnowFactor(void);
   void GetHeightMapData(CTextureData * & ptdHeightMap,FLOATaabbox3D & boxHeightMap);
   void GetParticleTexture();
#define  STATE_CEnvironmentParticlesHolder_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00ed0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00ed0001_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnvironmentParticlesHolder_INCLUDED
