// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_PlayerAnimator_INCLUDED
#define _EntitiesV_PlayerAnimator_INCLUDED 1
#include <EntitiesV/Player.h>
#include <EntitiesV/PlayerWeapons.h>
#define EVENTCODE_EAnimatorInit 0x01960000
class DECL_DLL EAnimatorInit : public CEntityEvent {
public:
EAnimatorInit();
CEntityEvent *MakeCopy(void);
CEntityPointer penPlayer;
};
DECL_DLL inline void ClearToDefault(EAnimatorInit &e) { e = EAnimatorInit(); } ;
#define CPlayerAnimator_ClassID 406
extern "C" DECL_DLL CDLLEntityClass CPlayerAnimator_DLLClass;
class DECL_DLL  CPlayerAnimator : public CRationalEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penPlayer;
  BOOL m_bReference;
  FLOAT m_fLastActionTime;
  INDEX m_iContent;
  BOOL m_bWaitJumpAnim;
  BOOL m_bCrouch;
  BOOL m_iCrouchDownWait;
  BOOL m_iRiseUpWait;
  BOOL m_bChangeWeapon;
  BOOL m_bSwim;
  INDEX m_iFlare;
  INDEX m_iSecondFlare;
  FLOAT m_tmSecondFlareAdded;
  BOOL m_bAttacking;
  FLOAT m_tmAttackingDue;
  FLOAT m_tmFlareAdded;
  BOOL m_bDisableAnimating;
  FLOAT3D m_vLastPlayerPosition;
  FLOAT m_fEyesYLastOffset;
  FLOAT m_fEyesYOffset;
  FLOAT m_fEyesYSpeed;
  FLOAT m_fWeaponYLastOffset;
  FLOAT m_fWeaponYOffset;
  FLOAT m_fWeaponYSpeed;
  BOOL m_bMoving;
  FLOAT m_fMoveLastBanking;
  FLOAT m_fMoveBanking;
  BOOL m_iMovingSide;
  BOOL m_bSidestepBankingLeft;
  BOOL m_bSidestepBankingRight;
  FLOAT m_fSidestepLastBanking;
  FLOAT m_fSidestepBanking;
  INDEX m_iWeaponLast;
  FLOAT m_fBodyAnimTime;
  CEntityPointer m_penPrediction;
CModelObject * pmoModel;
   void Read_t(CTStream * istr);
   void Precache(void);
   CPlayer * GetPlayer(void);
   CModelObject * GetBody(void);
   CModelObject * GetBodyRen(void);
   void SetComponents(CModelObject * mo,ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void AddAttachmentModel(CModelObject * mo,INDEX iAttachment,ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void AddWeaponAttachment(INDEX iAttachment,ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void SetAttachment(INDEX iAttachment);
   void SyncWeapon(void);
   void SetWeapon(void);
   void SetItem(CModelObject * pmo);
   void SetBodyAnimation(INDEX iAnimation,ULONG ulFlags);
   void Initialize(void);
   void StoreLast(void);
   void AnimateBanking(void);
   void AnimateSoftEyes(void);
   void ChangeView(CPlacement3D & pl);
   void BodyAndHeadOrientation(CPlacement3D & plView);
   void AnimatePlayer(void);
   void Crouch(void);
   void Rise(void);
   void Fall(void);
   void Swim(void);
   void Stand(void);
   void FireAnimation(INDEX iAnim,ULONG ulFlags);
   void FireAnimationOff(void);
   void BodyAnimationTemplate(INDEX iNone,INDEX iColt,INDEX iShotgun,INDEX iMinigun,ULONG ulFlags);
   void BodyWalkAnimation();
   void BodyStillAnimation();
   void BodyPushAnimation();
   void RemoveWeapon(void);
   void BodyPullAnimation();
   void BodyPullItemAnimation();
   void BodyPickItemAnimation();
   void BodyRemoveItem();
   void OnPreRender(void);
   void ShowFlare(INDEX iAttachWeapon,INDEX iAttachObject,INDEX iAttachFlare);
   void HideFlare(INDEX iAttachWeapon,INDEX iAttachObject,INDEX iAttachFlare);
   void ControlFlareAttachment(void);
#define  STATE_CPlayerAnimator_ReminderAction 0x01960001
  BOOL ReminderAction(const CEntityEvent &__eeInput);
#define  STATE_CPlayerAnimator_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01960002_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01960003_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_PlayerAnimator_INCLUDED
