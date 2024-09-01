To use this on Lua 5.4 modules, symlink `pluto-compat.h` to `lua.h`, `lauxlib.h`, `lualib.h`. And then add the directory where `pluto-compat.h` and other resides.
Make sure it's the first directory to search before Pluto headers.
```
-I/path/to/pluto-compat -I/path/to/pluto-headers
```
