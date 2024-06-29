//Lua 
#ifdef RELEASE
extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}
#endif

#ifdef DEBUG
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#endif // DEBUG