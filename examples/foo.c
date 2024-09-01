#include <stdio.h>
#include "./pluto-compat.h"

LUA_API int luaopen_foo(lua_State* L) {
  lua_pushstring(L, "test");
  return 1;
};
