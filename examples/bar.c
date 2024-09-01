#include "./pluto-compat.h"

int bar_func(lua_State* L)
{
  lua_pushstring(L, "bar");
  return 1;
}

int luaopen_bar(lua_State* L)
{
  lua_pushcfunction(L, bar_func);
  return 1;
}
