#include <Engine/Engine.h>
#include <Game/Game.h>
#include <Game/SEColors.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include <Entities/Global.h>
#include <Entities/Common/Common.h>
#include <Entities/Common/GameInterface.h>
#include <Entities/Player.h>
#undef DECL_DLL
