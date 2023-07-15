// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_TerrainEntity_INCLUDED
#define _EntitiesV_TerrainEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CTerrainEntity_DLLClass;
class CTerrainEntity : public CEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);

  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_TerrainEntity_INCLUDED
