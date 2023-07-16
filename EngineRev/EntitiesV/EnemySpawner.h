// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

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
  EST_MAINTAINGROUP = 6,
  EST_RESPAWNGROUP = 7,
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
  BOOL m_bFirstPass;
  CSoundObject m_soSpawn;
  INDEX m_iInGroup;
  INDEX m_iEnemiesTriggered;
  CEntityPointer m_penTacticsHolder;
  BOOL m_bTacticsAutostart;
  FLOAT m_tmSingleWaitRandomAdd;
  FLOAT m_tmDelayRandomAdd;
  FLOAT m_tmGroupWaitRandomAdd;
  BOOL m_bCanBeToggled;
  BOOL m_bActivated;
  BOOL m_bInfinite;
   void Precache(void);
   const CTString & GetDescription(void)const;
   BOOL CheckTemplateValid(CEntity * pen);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   BOOL FillEntityStatistics(EntityStats * pes);
   void SpawnEntity(BOOL bCopy);
   BOOL HandleEvent(const CEntityEvent & ee);
   SLONG GetUsedMemory(void);
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
  BOOL H0x01300023_Respawner_12(const CEntityEvent &__eeInput);
  BOOL H0x01300024_Respawner_13(const CEntityEvent &__eeInput);
  BOOL H0x01300025_Respawner_14(const CEntityEvent &__eeInput);
  BOOL H0x01300026_Respawner_15(const CEntityEvent &__eeInput);
  BOOL H0x01300027_Respawner_16(const CEntityEvent &__eeInput);
  BOOL H0x01300028_Respawner_17(const CEntityEvent &__eeInput);
  BOOL H0x01300029_Respawner_18(const CEntityEvent &__eeInput);
  BOOL H0x0130002a_Respawner_19(const CEntityEvent &__eeInput);
  BOOL H0x0130002b_Respawner_20(const CEntityEvent &__eeInput);
  BOOL H0x0130002c_Respawner_21(const CEntityEvent &__eeInput);
  BOOL H0x0130002d_Respawner_22(const CEntityEvent &__eeInput);
  BOOL H0x0130002e_Respawner_23(const CEntityEvent &__eeInput);
  BOOL H0x0130002f_Respawner_24(const CEntityEvent &__eeInput);
  BOOL H0x01300030_Respawner_25(const CEntityEvent &__eeInput);
  BOOL H0x01300031_Respawner_26(const CEntityEvent &__eeInput);
  BOOL H0x01300032_Respawner_27(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableInactive 0x01300033
  BOOL DestroyableInactive(const CEntityEvent &__eeInput);
  BOOL H0x01300034_DestroyableInactive_01(const CEntityEvent &__eeInput);
  BOOL H0x01300035_DestroyableInactive_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableActiveSpawning 0x01300036
  BOOL DestroyableActiveSpawning(const CEntityEvent &__eeInput);
  BOOL H0x01300037_DestroyableActiveSpawning_01(const CEntityEvent &__eeInput);
  BOOL H0x01300038_DestroyableActiveSpawning_02(const CEntityEvent &__eeInput);
  BOOL H0x01300039_DestroyableActiveSpawning_03(const CEntityEvent &__eeInput);
  BOOL H0x0130003a_DestroyableActiveSpawning_04(const CEntityEvent &__eeInput);
  BOOL H0x0130003b_DestroyableActiveSpawning_05(const CEntityEvent &__eeInput);
  BOOL H0x0130003c_DestroyableActiveSpawning_06(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_DestroyableActive 0x0130003d
  BOOL DestroyableActive(const CEntityEvent &__eeInput);
  BOOL H0x0130003e_DestroyableActive_01(const CEntityEvent &__eeInput);
  BOOL H0x0130003f_DestroyableActive_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Destroyable 0x01300040
  BOOL Destroyable(const CEntityEvent &__eeInput);
  BOOL H0x01300041_Destroyable_01(const CEntityEvent &__eeInput);
  BOOL H0x01300042_Destroyable_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemySpawner_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01300043_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01300044_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x01300045_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x01300046_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnemySpawner_INCLUDED
