// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_EnemySpawner_INCLUDED
#define _EntitiesV_EnemySpawner_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType EnemySpawnerType_enum;
enum EnemySpawnerType {
  EST_SIMPLE = 0,
  EST_RESPAWNER = 1,
  EST_DESTROYABLE = 2,
  EST_TRIGGERED = 3,
  EST_TELEPORTER = 4,
  EST_RESPAWNERBYONE = 5,
};
DECL_DLL inline void ClearToDefault(EnemySpawnerType &e) { e = (EnemySpawnerType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CEnemySpawner_DLLClass;
class CEnemySpawner : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penTarget;
  CTString m_strDescription;
  CTString m_strName;
  RANGE m_fInnerCircle;
  RANGE m_fOuterCircle;
  FLOAT m_tmDelay;
  FLOAT m_tmSingleWait;
  FLOAT m_tmGroupWait;
  INDEX m_ctGroupSize;
  INDEX m_ctTotal;
  CEntityPointer m_penPatrol;
  enum EnemySpawnerType m_estType;
  BOOL m_bTelefrag;
  BOOL m_bSpawnEffect;
  BOOL m_bDoubleInSerious;
  CEntityPointer m_penSeriousTarget;
  CSoundObject m_soSpawn;
  INDEX m_iInGroup;
   void Precache(void);
   const CTString & GetDescription(void)const;
   BOOL CheckTemplateValid(CEntity * pen);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   BOOL FillEntityStatistics(EntityStats * pes);
   void SpawnEntity(BOOL bCopy);
#define  STATE_CEnemySpawner_SpawnGroup 0x01300000
  BOOL SpawnGroup(const CEntityEvent &__eeInput);
  BOOL H0x01300001_SpawnGroup_01(const CEntityEvent &__eeInput);
  BOOL H0x01300002_SpawnGroup_02(const CEntityEvent &__eeInput);
  BOOL H0x01300003_SpawnGroup_03(const CEntityEvent &__eeInput);
  BOOL H0x01300004_SpawnGroup_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Simple 0x01300005
  BOOL Simple(const CEntityEvent &__eeInput);
  BOOL H0x01300006_Simple_01(const CEntityEvent &__eeInput);
  BOOL H0x01300007_Simple_02(const CEntityEvent &__eeInput);
  BOOL H0x01300008_Simple_03(const CEntityEvent &__eeInput);
  BOOL H0x01300009_Simple_04(const CEntityEvent &__eeInput);
  BOOL H0x0130000a_Simple_05(const CEntityEvent &__eeInput);
  BOOL H0x0130000b_Simple_06(const CEntityEvent &__eeInput);
  BOOL H0x0130000c_Simple_07(const CEntityEvent &__eeInput);
  BOOL H0x0130000d_Simple_08(const CEntityEvent &__eeInput);
  BOOL H0x0130000e_Simple_09(const CEntityEvent &__eeInput);
  BOOL H0x0130000f_Simple_10(const CEntityEvent &__eeInput);
  BOOL H0x01300010_Simple_11(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Teleporter 0x01300011
  BOOL Teleporter(const CEntityEvent &__eeInput);
  BOOL H0x01300012_Teleporter_01(const CEntityEvent &__eeInput);
  BOOL H0x01300013_Teleporter_02(const CEntityEvent &__eeInput);
  BOOL H0x01300014_Teleporter_03(const CEntityEvent &__eeInput);
  BOOL H0x01300015_Teleporter_04(const CEntityEvent &__eeInput);
  BOOL H0x01300016_Teleporter_05(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Respawner 0x01300017
  BOOL Respawner(const CEntityEvent &__eeInput);
  BOOL H0x01300018_Respawner_01(const CEntityEvent &__eeInput);
  BOOL H0x01300019_Respawner_02(const CEntityEvent &__eeInput);
  BOOL H0x0130001a_Respawner_03(const CEntityEvent &__eeInput);
  BOOL H0x0130001b_Respawner_04(const CEntityEvent &__eeInput);
  BOOL H0x0130001c_Respawner_05(const CEntityEvent &__eeInput);
  BOOL H0x0130001d_Respawner_06(const CEntityEvent &__eeInput);
  BOOL H0x0130001e_Respawner_07(const CEntityEvent &__eeInput);
  BOOL H0x0130001f_Respawner_08(const CEntityEvent &__eeInput);
  BOOL H0x01300020_Respawner_09(const CEntityEvent &__eeInput);
  BOOL H0x01300021_Respawner_10(const CEntityEvent &__eeInput);
  BOOL H0x01300022_Respawner_11(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableInactive 0x01300023
  BOOL DestroyableInactive(const CEntityEvent &__eeInput);
  BOOL H0x01300024_DestroyableInactive_01(const CEntityEvent &__eeInput);
  BOOL H0x01300025_DestroyableInactive_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableActiveSpawning 0x01300026
  BOOL DestroyableActiveSpawning(const CEntityEvent &__eeInput);
  BOOL H0x01300027_DestroyableActiveSpawning_01(const CEntityEvent &__eeInput);
  BOOL H0x01300028_DestroyableActiveSpawning_02(const CEntityEvent &__eeInput);
  BOOL H0x01300029_DestroyableActiveSpawning_03(const CEntityEvent &__eeInput);
  BOOL H0x0130002a_DestroyableActiveSpawning_04(const CEntityEvent &__eeInput);
  BOOL H0x0130002b_DestroyableActiveSpawning_05(const CEntityEvent &__eeInput);
  BOOL H0x0130002c_DestroyableActiveSpawning_06(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableActive 0x0130002d
  BOOL DestroyableActive(const CEntityEvent &__eeInput);
  BOOL H0x0130002e_DestroyableActive_01(const CEntityEvent &__eeInput);
  BOOL H0x0130002f_DestroyableActive_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Destroyable 0x01300030
  BOOL Destroyable(const CEntityEvent &__eeInput);
  BOOL H0x01300031_Destroyable_01(const CEntityEvent &__eeInput);
  BOOL H0x01300032_Destroyable_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01300033_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01300034_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x01300035_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x01300036_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnemySpawner_INCLUDED
