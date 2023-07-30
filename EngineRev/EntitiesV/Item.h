// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Item_INCLUDED
#define _EntitiesV_Item_INCLUDED 1
#define CItem_ClassID 800
extern "C" DECL_DLL CDLLEntityClass CItem_DLLClass;
class DECL_DLL  CItem : public CMovableModelEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  FLOAT m_fValue;
  FLOAT m_fRespawnTime;
  FLOAT m_fCustomRespawnTime;
  BOOL m_bRespawn;
  CEntityPointer m_penTarget;
  BOOL m_bPickupOnce;
  CSoundObject m_soPick;
  FLOAT m_fPickSoundLen;
  BOOL m_bDropped;
  ULONG m_ulPickedMask;
  BOOL m_bFloating;
  CTFileName m_fnmCustomModel;
  CTFileName m_fnmCustomTexture;
  FLOAT m_fCustomScale;
  CTFileName m_fnmCustomPickupSound;
  BOOL m_bOnlyCoop;
  CEntityPointer m_penPrediction;

// [Cecil] Rev: Unknown fields (could be a flat item sprite texture, i.e. CTFileName)
ULONG m_ulItemField1;
ULONG m_ulItemField2;

  virtual void AdjustDifficulty(void);
   void AdjustMipFactor(FLOAT & fMipFactor);
   BOOL ShowItemParticles(void);
   BOOL MarkPickedBy(CEntity * pen);
   FLOAT GetPredictionRange(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void Initialize(void);
   void AddItem(ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void AddItemSpecial(INDEX iAttachmentPos,ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void AddItemAttachment(INDEX iAttachment,ULONG ulIDModel,ULONG ulIDTexture,ULONG ulIDReflectionTexture,ULONG ulIDSpecularTexture,ULONG ulIDBumpTexture);
   void SetItemAttachmentAnim(INDEX iAttachment,INDEX iAnim);
   void AddFlare(ULONG ulIDModel,ULONG ulIDTexture,const FLOAT3D & vPos,const FLOAT3D & vStretch);
   void StretchItem(const FLOAT3D & vStretch);
   SLONG GetUsedMemory(void);
#define  STATE_CItem_ItemCollected 0x03200000
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CItem_ItemLoop 0x03200001
  BOOL ItemLoop(const CEntityEvent &__eeInput);
  BOOL H0x03200002_ItemLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x03200003_ItemLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x03200004_ItemLoop_03(const CEntityEvent &__eeInput);
  BOOL H0x03200005_ItemLoop_04(const CEntityEvent &__eeInput);
  BOOL H0x03200006_ItemLoop_05(const CEntityEvent &__eeInput);
  BOOL H0x03200007_ItemLoop_06(const CEntityEvent &__eeInput);
#define  STATE_CItem_ItemReceived 0x03200008
  BOOL ItemReceived(const CEntityEvent &__eeInput);
  BOOL H0x03200009_ItemReceived_01(const CEntityEvent &__eeInput);
  BOOL H0x0320000a_ItemReceived_02(const CEntityEvent &__eeInput);
  BOOL H0x0320000b_ItemReceived_03(const CEntityEvent &__eeInput);
  BOOL H0x0320000c_ItemReceived_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Item_INCLUDED
