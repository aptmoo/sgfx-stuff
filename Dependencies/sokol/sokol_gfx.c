#ifdef  BUILD_LINUX
#define SOKOL_GLCORE33
#elif   BUILD_WINDOWS
#define SOKOL_GLCORE33
#endif

#define SOKOL_GFX_IMPL
#include "sokol_gfx.h"