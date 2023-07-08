// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Watcher_INCLUDED
#define _EntitiesV_Watcher_INCLUDED 1
#define EVENTCODE_EWatcherInit 0x02bc0000
class DECL_DLL EWatcherInit : public CEntityEvent {
public:
EWatcherInit();
CEntityEvent *MakeCopy(void);
CEntityPointer penOwner;
};
DECL_DLL inline void ClearToDefault(EWatcherInit &e) { e = EWatcherInit(); } ;
#define EVENTCODE_EWatch 0x02bc0001
class DECL_DLL EWatch : public CEntityEvent {
public:
EWatch();
CEntityEvent *MakeCopy(void);
CEntityPointer penSeen;
};
DECL_DLL inline void ClearToDefault(EWatch &e) { e = EWatch(); } ;
extern "C" DECL_DLL CDLLEntityClass CWatcher_DLLClass;
class DECL_DLL  CWatcher : public CRationalEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penOwner;
  FLOAT m_tmDelay;
  FLOAT m_fClosestPlayer;
  INDEX m_iPlayerToCheck;
  CEntityPointer m_penPrediction;
   class CEnemyBase * GetOwner(void);
   INDEX GetRandomPlayer(void);
   CEntity * FindClosestPlayer(void);
   void SendWatchEvent(CEntity * penPlayer);
   void CheckIfPlayerVisible(void);
   void SetWatchDelays(void);
   void Watch(void);
   CEntity * CheckCloserPlayer(CEntity * penCurrentTarget,FLOAT fRange);
   CEntity * CheckAnotherPlayer(CEntity * penCurrentTarget);
#define  STATE_CWatcher_Active 0x02bc0002
  BOOL Active(const CEntityEvent &__eeInput);
  BOOL H0x02bc0003_Active_01(const CEntityEvent &__eeInput);
  BOOL H0x02bc0004_Active_02(const CEntityEvent &__eeInput);
  BOOL H0x02bc0005_Active_03(const CEntityEvent &__eeInput);
  BOOL H0x02bc0006_Active_04(const CEntityEvent &__eeInput);
#define  STATE_CWatcher_Inactive 0x02bc0007
  BOOL Inactive(const CEntityEvent &__eeInput);
  BOOL H0x02bc0008_Inactive_01(const CEntityEvent &__eeInput);
  BOOL H0x02bc0009_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CWatcher_Dummy 0x02bc000a
  BOOL Dummy(const CEntityEvent &__eeInput);
  BOOL H0x02bc000b_Dummy_01(const CEntityEvent &__eeInput);
  BOOL H0x02bc000c_Dummy_02(const CEntityEvent &__eeInput);
#define  STATE_CWatcher_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x02bc000d_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x02bc000e_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Watcher_INCLUDED
