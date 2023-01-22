#include <GameV/Game.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include <EntitiesV/Global.h>
#include <EntitiesV/Common/Common.h>
#include <EntitiesV/Common/GameInterface.h>
#include <EntitiesV/Player.h>
#undef DECL_DLL
