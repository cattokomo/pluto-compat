generate incdir lib:
    c2ffi -I{{incdir}} {{incdir}}/lua.hpp > ast.json
    pluto -- generate.pluto ast.json {{lib}} > pluto-compat.h
