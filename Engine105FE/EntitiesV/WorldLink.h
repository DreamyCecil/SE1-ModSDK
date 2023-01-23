// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_WorldLink_INCLUDED
#define _EntitiesV_WorldLink_INCLUDED 1
#include <EntitiesV/Marker.h>
extern DECL_DLL CEntityPropertyEnumType WorldLinkType_enum;
enum WorldLinkType {
  WLT_FIXED = 1,
  WLT_RELATIVE = 2,
};
DECL_DLL inline void ClearToDefault(WorldLinkType &e) { e = (WorldLinkType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CWorldLink_DLLClass;
class CWorldLink : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strGroup;
  CTFileNameNoDep m_strWorld;
  BOOL m_bStoreWorld;
  enum WorldLinkType m_EwltType;
   BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CWorldLink_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_WorldLink_INCLUDED