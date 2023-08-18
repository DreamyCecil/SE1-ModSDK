#include <GameV/SessionProperties.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include "../Global.h"
#include "../Common/Flags.h"
#include "../Common/Common.h"
#include "../Common/Particles.h"
#include "../Common/EmanatingParticles.h"
#include "../Common/GameInterface.h"
