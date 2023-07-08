// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_MirrorMarker_INCLUDED
#define _EntitiesV_MirrorMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
extern DECL_DLL CEntityPropertyEnumType WarpRotation_enum;
enum WarpRotation {
  WR_NONE = 0,
  WR_BANKING = 1,
  WR_TWIRLING = 2,
};
DECL_DLL inline void ClearToDefault(WarpRotation &e) { e = (WarpRotation)0; } ;
extern "C" DECL_DLL CDLLEntityClass CMirrorMarker_DLLClass;
class CMirrorMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum WarpRotation m_wrRotation;
  FLOAT m_fRotationSpeed;
   const CTString & GetMirrorName(void);
   void GetMirror(class CMirrorParameters & mpMirror);
#define  STATE_CMirrorMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_MirrorMarker_INCLUDED