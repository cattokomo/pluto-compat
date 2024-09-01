#ifndef PLUTO_COMPAT_H
#define PLUTO_COMPAT_H
#define PLUTO_API
#include <stdio.h>
#include "luaconf.h"

typedef struct lua_State lua_State;

typedef LUA_NUMBER lua_Number;

typedef LUA_INTEGER lua_Integer;

typedef LUA_UNSIGNED lua_Unsigned;

typedef LUA_KCONTEXT lua_KContext;

typedef int (*lua_CFunction) (lua_State *L);

typedef int (*lua_KFunction) (lua_State *L, int status, lua_KContext ctx);

typedef const char * (*lua_Reader) (lua_State *L, void *ud, size_t *sz);

typedef int (*lua_Writer) (lua_State *L, const void *p, size_t sz, void *ud);

typedef void * (*lua_Alloc) (void *ud, void *ptr, size_t osize, size_t nsize);

typedef void (*lua_WarnFunction) (void *ud, const char *msg, int tocont);

typedef struct lua_Debug lua_Debug;

typedef void (*lua_Hook) (lua_State *L, lua_Debug *ar);

typedef struct luaL_Buffer luaL_Buffer;

typedef struct luaL_Reg {
  const char *name;
  lua_CFunction func;
} luaL_Reg;

typedef struct luaL_Stream {
  FILE *f;
  lua_CFunction closef;
} luaL_Stream;
static void _Z10lua_concatP9lua_Statei(lua_State*, int);
PLUTO_API void lua_concat(lua_State* L, int n) { _Z10lua_concatP9lua_Statei(L, n); }
static int _Z10lua_gettopP9lua_State(lua_State*);
PLUTO_API int lua_gettop(lua_State* L) { _Z10lua_gettopP9lua_State(L); }
static void _Z10lua_insertP9lua_Statei(lua_State*, int);
PLUTO_API void lua_insert(lua_State* L, int idx) { _Z10lua_insertP9lua_Statei(L, idx); }
static int _Z10lua_istrueP9lua_Statei(lua_State*, int);
PLUTO_API int lua_istrue(lua_State* L, int idx) { _Z10lua_istrueP9lua_Statei(L, idx); }
static int _Z10luaL_errorP9lua_StatePKcz(lua_State*, char*);
PLUTO_API int luaL_error(lua_State* L, char* fmt) { _Z10luaL_errorP9lua_StatePKcz(L, fmt); }
static void _Z10luaL_unrefP9lua_Stateii(lua_State*, int, int);
PLUTO_API void luaL_unref(lua_State* L, int t, int ref) { _Z10luaL_unrefP9lua_Stateii(L, t, ref); }
static void _Z10luaL_whereP9lua_Statei(lua_State*, int);
PLUTO_API void luaL_where(lua_State* L, int lvl) { _Z10luaL_whereP9lua_Statei(L, lvl); }
static int _Z10luaopen_ioP9lua_State(lua_State*);
PLUTO_API int luaopen_io(lua_State* L) { _Z10luaopen_ioP9lua_State(L); }
static int _Z10luaopen_osP9lua_State(lua_State*);
PLUTO_API int luaopen_os(lua_State* L) { _Z10luaopen_osP9lua_State(L); }
static int _Z10lua_pcallkP9lua_StateiiilPFiS0_ilE(lua_State*, int, int, int, lua_KContext, lua_KFunction);
PLUTO_API int lua_pcallk(lua_State* L, int nargs, int nresults, int errfunc, lua_KContext ctx, lua_KFunction k) { _Z10lua_pcallkP9lua_StateiiilPFiS0_ilE(L, nargs, nresults, errfunc, ctx, k); }
static int _Z10lua_rawgetP9lua_Statei(lua_State*, int);
PLUTO_API int lua_rawget(lua_State* L, int idx) { _Z10lua_rawgetP9lua_Statei(L, idx); }
static void _Z10lua_rawsetP9lua_Statei(lua_State*, int);
PLUTO_API void lua_rawset(lua_State* L, int idx) { _Z10lua_rawsetP9lua_Statei(L, idx); }
static void _Z10lua_removeP9lua_Statei(lua_State*, int);
PLUTO_API void lua_remove(lua_State* L, int idx) { _Z10lua_removeP9lua_Statei(L, idx); }
static int _Z10lua_resumeP9lua_StateS0_iPi(lua_State*, lua_State*, int, int*);
PLUTO_API int lua_resume(lua_State* L, lua_State* from, int narg, int* nres) { _Z10lua_resumeP9lua_StateS0_iPi(L, from, narg, nres); }
static void _Z10lua_rotateP9lua_Stateii(lua_State*, int, int);
PLUTO_API void lua_rotate(lua_State* L, int idx, int n) { _Z10lua_rotateP9lua_Stateii(L, idx, n); }
static void _Z10lua_settopP9lua_Statei(lua_State*, int);
PLUTO_API void lua_settop(lua_State* L, int idx) { _Z10lua_settopP9lua_Statei(L, idx); }
static int _Z10lua_statusP9lua_State(lua_State*);
PLUTO_API int lua_status(lua_State* L) { _Z10lua_statusP9lua_State(L); }
static int _Z10lua_yieldkP9lua_StateilPFiS0_ilE(lua_State*, int, lua_KContext, lua_KFunction);
PLUTO_API int lua_yieldk(lua_State* L, int nresults, lua_KContext ctx, lua_KFunction k) { _Z10lua_yieldkP9lua_StateilPFiS0_ilE(L, nresults, ctx, k); }
static lua_CFunction _Z11lua_atpanicP9lua_StatePFiS0_E(lua_State*, lua_CFunction);
PLUTO_API lua_CFunction lua_atpanic(lua_State* L, lua_CFunction panicf) { _Z11lua_atpanicP9lua_StatePFiS0_E(L, panicf); }
static int _Z11lua_compareP9lua_Stateiii(lua_State*, int, int, int);
PLUTO_API int lua_compare(lua_State* L, int idx1, int idx2, int op) { _Z11lua_compareP9lua_Stateiii(L, idx1, idx2, op); }
static lua_Hook _Z11lua_gethookP9lua_State(lua_State*);
PLUTO_API lua_Hook lua_gethook(lua_State* L) { _Z11lua_gethookP9lua_State(L); }
static int _Z11lua_getinfoP9lua_StatePKcP9lua_Debug(lua_State*, char*, lua_Debug*);
PLUTO_API int lua_getinfo(lua_State* L, char* what, lua_Debug* ar) { _Z11lua_getinfoP9lua_StatePKcP9lua_Debug(L, what, ar); }
static int _Z11luaopen_catP9lua_State(lua_State*);
PLUTO_API int luaopen_cat(lua_State* L) { _Z11luaopen_catP9lua_State(L); }
static int _Z11luaopen_urlP9lua_State(lua_State*);
PLUTO_API int luaopen_url(lua_State* L) { _Z11luaopen_urlP9lua_State(L); }
static int _Z11luaopen_xmlP9lua_State(lua_State*);
PLUTO_API int luaopen_xml(lua_State* L) { _Z11luaopen_xmlP9lua_State(L); }
static void _Z11lua_pushnilP9lua_State(lua_State*);
PLUTO_API void lua_pushnil(lua_State* L) { _Z11lua_pushnilP9lua_State(L); }
static int _Z11lua_rawgetiP9lua_Stateix(lua_State*, int, lua_Integer);
PLUTO_API int lua_rawgeti(lua_State* L, int idx, lua_Integer n) { _Z11lua_rawgetiP9lua_Stateix(L, idx, n); }
static int _Z11lua_rawgetpP9lua_StateiPKv(lua_State*, int, void*);
PLUTO_API int lua_rawgetp(lua_State* L, int idx, void* p) { _Z11lua_rawgetpP9lua_StateiPKv(L, idx, p); }
static void _Z11lua_rawsetiP9lua_Stateix(lua_State*, int, lua_Integer);
PLUTO_API void lua_rawseti(lua_State* L, int idx, lua_Integer n) { _Z11lua_rawsetiP9lua_Stateix(L, idx, n); }
static void _Z11lua_rawsetpP9lua_StateiPKv(lua_State*, int, void*);
PLUTO_API void lua_rawsetp(lua_State* L, int idx, void* p) { _Z11lua_rawsetpP9lua_StateiPKv(L, idx, p); }
static void _Z11lua_replaceP9lua_Statei(lua_State*, int);
PLUTO_API void lua_replace(lua_State* L, int idx) { _Z11lua_replaceP9lua_Statei(L, idx); }
static void _Z11lua_sethookP9lua_StatePFvS0_P9lua_DebugEii(lua_State*, lua_Hook, int, int);
PLUTO_API void lua_sethook(lua_State* L, lua_Hook func, int mask, int count) { _Z11lua_sethookP9lua_StatePFvS0_P9lua_DebugEii(L, func, mask, count); }
static void _Z11lua_tocloseP9lua_Statei(lua_State*, int);
PLUTO_API void lua_toclose(lua_State* L, int idx) { _Z11lua_tocloseP9lua_Statei(L, idx); }
static lua_Number _Z11lua_versionP9lua_State(lua_State*);
PLUTO_API lua_Number lua_version(lua_State* L) { _Z11lua_versionP9lua_State(L); }
static void _Z11lua_warningP9lua_StatePKci(lua_State*, char*, int);
PLUTO_API void lua_warning(lua_State* L, char* msg, int tocont) { _Z11lua_warningP9lua_StatePKci(L, msg, tocont); }
static int _Z12lua_absindexP9lua_Statei(lua_State*, int);
PLUTO_API int lua_absindex(lua_State* L, int idx) { _Z12lua_absindexP9lua_Statei(L, idx); }
static int _Z12lua_getfieldP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int lua_getfield(lua_State* L, int idx, char* k) { _Z12lua_getfieldP9lua_StateiPKc(L, idx, k); }
static char* _Z12lua_getlocalP9lua_StatePK9lua_Debugi(lua_State*, lua_Debug*, int);
PLUTO_API char* lua_getlocal(lua_State* L, lua_Debug* ar, int n) { _Z12lua_getlocalP9lua_StatePK9lua_Debugi(L, ar, n); }
static int _Z12lua_getstackP9lua_StateiP9lua_Debug(lua_State*, int, lua_Debug*);
PLUTO_API int lua_getstack(lua_State* L, int level, lua_Debug* ar) { _Z12lua_getstackP9lua_StateiP9lua_Debug(L, level, ar); }
static int _Z12lua_gettableP9lua_Statei(lua_State*, int);
PLUTO_API int lua_gettable(lua_State* L, int idx) { _Z12lua_gettableP9lua_Statei(L, idx); }
static int _Z12lua_isnumberP9lua_Statei(lua_State*, int);
PLUTO_API int lua_isnumber(lua_State* L, int idx) { _Z12lua_isnumberP9lua_Statei(L, idx); }
static int _Z12lua_isstringP9lua_Statei(lua_State*, int);
PLUTO_API int lua_isstring(lua_State* L, int idx) { _Z12lua_isstringP9lua_Statei(L, idx); }
static void _Z12luaL_addgsubP11luaL_BufferPKcS2_S2_(luaL_Buffer*, char*, char*, char*);
PLUTO_API void luaL_addgsub(luaL_Buffer* b, char* s, char* p, char* r) { _Z12luaL_addgsubP11luaL_BufferPKcS2_S2_(b, s, p, r); }
static lua_State* _Z12lua_newstatePFPvS_S_mmES_(lua_Alloc, void*);
PLUTO_API lua_State* lua_newstate(lua_Alloc f, void* ud) { _Z12lua_newstatePFPvS_S_mmES_(f, ud); }
static int _Z12luaopen_baseP9lua_State(lua_State*);
PLUTO_API int luaopen_base(lua_State* L) { _Z12luaopen_baseP9lua_State(L); }
static int _Z12luaopen_httpP9lua_State(lua_State*);
PLUTO_API int luaopen_http(lua_State* L) { _Z12luaopen_httpP9lua_State(L); }
static int _Z12luaopen_jsonP9lua_State(lua_State*);
PLUTO_API int luaopen_json(lua_State* L) { _Z12luaopen_jsonP9lua_State(L); }
static int _Z12luaopen_mathP9lua_State(lua_State*);
PLUTO_API int luaopen_math(lua_State* L) { _Z12luaopen_mathP9lua_State(L); }
static int _Z12luaopen_starP9lua_State(lua_State*);
PLUTO_API int luaopen_star(lua_State* L) { _Z12luaopen_starP9lua_State(L); }
static int _Z12luaopen_utf8P9lua_State(lua_State*);
PLUTO_API int luaopen_utf8(lua_State* L) { _Z12luaopen_utf8P9lua_State(L); }
static int _Z12lua_rawequalP9lua_Stateii(lua_State*, int, int);
PLUTO_API int lua_rawequal(lua_State* L, int idx1, int idx2) { _Z12lua_rawequalP9lua_Stateii(L, idx1, idx2); }
static void _Z12lua_setfieldP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API void lua_setfield(lua_State* L, int idx, char* k) { _Z12lua_setfieldP9lua_StateiPKc(L, idx, k); }
static char* _Z12lua_setlocalP9lua_StatePK9lua_Debugi(lua_State*, lua_Debug*, int);
PLUTO_API char* lua_setlocal(lua_State* L, lua_Debug* ar, int n) { _Z12lua_setlocalP9lua_StatePK9lua_Debugi(L, ar, n); }
static void _Z12lua_settableP9lua_Statei(lua_State*, int);
PLUTO_API void lua_settable(lua_State* L, int idx) { _Z12lua_settableP9lua_Statei(L, idx); }
static void _Z12lua_setwarnfP9lua_StatePFvPvPKciES1_(lua_State*, lua_WarnFunction, void*);
PLUTO_API void lua_setwarnf(lua_State* L, lua_WarnFunction f, void* ud) { _Z12lua_setwarnfP9lua_StatePFvPvPKciES1_(L, f, ud); }
static lua_State* _Z12lua_tothreadP9lua_Statei(lua_State*, int);
PLUTO_API lua_State* lua_tothread(lua_State* L, int idx) { _Z12lua_tothreadP9lua_Statei(L, idx); }
static char* _Z12lua_typenameP9lua_Statei(lua_State*, int);
PLUTO_API char* lua_typename(lua_State* L, int tp) { _Z12lua_typenameP9lua_Statei(L, tp); }
static void _Z13lua_closeslotP9lua_Statei(lua_State*, int);
PLUTO_API void lua_closeslot(lua_State* L, int idx) { _Z13lua_closeslotP9lua_Statei(L, idx); }
static lua_Alloc _Z13lua_getallocfP9lua_StatePPv(lua_State*, void**);
PLUTO_API lua_Alloc lua_getallocf(lua_State* L, void** ud) { _Z13lua_getallocfP9lua_StatePPv(L, ud); }
static int _Z13lua_getglobalP9lua_StatePKc(lua_State*, char*);
PLUTO_API int lua_getglobal(lua_State* L, char* name) { _Z13lua_getglobalP9lua_StatePKc(L, name); }
static int _Z13lua_isintegerP9lua_Statei(lua_State*, int);
PLUTO_API int lua_isinteger(lua_State* L, int idx) { _Z13lua_isintegerP9lua_Statei(L, idx); }
static void _Z13luaL_addvalueP11luaL_Buffer(luaL_Buffer*);
PLUTO_API void luaL_addvalue(luaL_Buffer* B) { _Z13luaL_addvalueP11luaL_Buffer(B); }
static int _Z13luaL_argerrorP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_argerror(lua_State* L, int arg, char* extramsg) { _Z13luaL_argerrorP9lua_StateiPKc(L, arg, extramsg); }
static void _Z13luaL_buffinitP9lua_StateP11luaL_Buffer(lua_State*, luaL_Buffer*);
PLUTO_API void luaL_buffinit(lua_State* L, luaL_Buffer* B) { _Z13luaL_buffinitP9lua_StateP11luaL_Buffer(L, B); }
static int _Z13luaL_callmetaP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_callmeta(lua_State* L, int obj, char* e) { _Z13luaL_callmetaP9lua_StateiPKc(L, obj, e); }
static void _Z13luaL_checkanyP9lua_Statei(lua_State*, int);
PLUTO_API void luaL_checkany(lua_State* L, int arg) { _Z13luaL_checkanyP9lua_Statei(L, arg); }
static lua_State* _Z13luaL_newstatev();
PLUTO_API lua_State* luaL_newstate() { _Z13luaL_newstatev(); }
static void _Z13luaL_openlibsP9lua_State(lua_State*);
PLUTO_API void luaL_openlibs(lua_State* L) { _Z13luaL_openlibsP9lua_State(L); }
static void _Z13luaL_requirefP9lua_StatePKcPFiS0_Ei(lua_State*, char*, lua_CFunction, int);
PLUTO_API void luaL_requiref(lua_State* L, char* modname, lua_CFunction openf, int glb) { _Z13luaL_requirefP9lua_StatePKcPFiS0_Ei(L, modname, openf, glb); }
static void _Z13luaL_setfuncsP9lua_StatePK8luaL_Regi(lua_State*, luaL_Reg*, int);
PLUTO_API void luaL_setfuncs(lua_State* L, luaL_Reg* l, int nup) { _Z13luaL_setfuncsP9lua_StatePK8luaL_Regi(L, l, nup); }
static lua_State* _Z13lua_newthreadP9lua_State(lua_State*);
PLUTO_API lua_State* lua_newthread(lua_State* L) { _Z13lua_newthreadP9lua_State(L); }
static int _Z13luaopen_debugP9lua_State(lua_State*);
PLUTO_API int luaopen_debug(lua_State* L) { _Z13luaopen_debugP9lua_State(L); }
static int _Z13luaopen_tableP9lua_State(lua_State*);
PLUTO_API int luaopen_table(lua_State* L) { _Z13luaopen_tableP9lua_State(L); }
static void _Z13lua_pushvalueP9lua_Statei(lua_State*, int);
PLUTO_API void lua_pushvalue(lua_State* L, int idx) { _Z13lua_pushvalueP9lua_Statei(L, idx); }
static void _Z13lua_setallocfP9lua_StatePFPvS1_S1_mmES1_(lua_State*, lua_Alloc, void*);
PLUTO_API void lua_setallocf(lua_State* L, lua_Alloc f, void* ud) { _Z13lua_setallocfP9lua_StatePFPvS1_S1_mmES1_(L, f, ud); }
static void _Z13lua_setglobalP9lua_StatePKc(lua_State*, char*);
PLUTO_API void lua_setglobal(lua_State* L, char* name) { _Z13lua_setglobalP9lua_StatePKc(L, name); }
static int _Z13lua_tobooleanP9lua_Statei(lua_State*, int);
PLUTO_API int lua_toboolean(lua_State* L, int idx) { _Z13lua_tobooleanP9lua_Statei(L, idx); }
static lua_Number _Z13lua_tonumberxP9lua_StateiPi(lua_State*, int, int*);
PLUTO_API lua_Number lua_tonumberx(lua_State* L, int idx, int* isnum) { _Z13lua_tonumberxP9lua_StateiPi(L, idx, isnum); }
static void* _Z13lua_topointerP9lua_Statei(lua_State*, int);
PLUTO_API void* lua_topointer(lua_State* L, int idx) { _Z13lua_topointerP9lua_Statei(L, idx); }
static void* _Z13lua_upvalueidP9lua_Stateii(lua_State*, int, int);
PLUTO_API void* lua_upvalueid(lua_State* L, int fidx, int n) { _Z13lua_upvalueidP9lua_Stateii(L, fidx, n); }
static int _Z14lua_checkstackP9lua_Statei(lua_State*, int);
PLUTO_API int lua_checkstack(lua_State* L, int n) { _Z14lua_checkstackP9lua_Statei(L, n); }
static char* _Z14lua_getupvalueP9lua_Stateii(lua_State*, int, int);
PLUTO_API char* lua_getupvalue(lua_State* L, int funcindex, int n) { _Z14lua_getupvalueP9lua_Stateii(L, funcindex, n); }
static int _Z14lua_isuserdataP9lua_Statei(lua_State*, int);
PLUTO_API int lua_isuserdata(lua_State* L, int idx) { _Z14lua_isuserdataP9lua_Statei(L, idx); }
static void _Z14luaL_addstringP11luaL_BufferPKc(luaL_Buffer*, char*);
PLUTO_API void luaL_addstring(luaL_Buffer* B, char* s) { _Z14luaL_addstringP11luaL_BufferPKc(B, s); }
static void _Z14luaL_checktypeP9lua_Stateii(lua_State*, int, int);
PLUTO_API void luaL_checktype(lua_State* L, int arg, int t) { _Z14luaL_checktypeP9lua_Stateii(L, arg, t); }
static int _Z14luaL_loadfilexP9lua_StatePKcS2_(lua_State*, char*, char*);
PLUTO_API int luaL_loadfilex(lua_State* L, char* filename, char* mode) { _Z14luaL_loadfilexP9lua_StatePKcS2_(L, filename, mode); }
static lua_Number _Z14luaL_optnumberP9lua_Stateid(lua_State*, int, lua_Number);
PLUTO_API lua_Number luaL_optnumber(lua_State* L, int arg, lua_Number def) { _Z14luaL_optnumberP9lua_Stateid(L, arg, def); }
static void* _Z14luaL_testudataP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API void* luaL_testudata(lua_State* L, int ud, char* tname) { _Z14luaL_testudataP9lua_StateiPKc(L, ud, tname); }
static void _Z14luaL_tracebackP9lua_StateS0_PKci(lua_State*, lua_State*, char*, int);
PLUTO_API void luaL_traceback(lua_State* L, lua_State* L1, char* msg, int level) { _Z14luaL_tracebackP9lua_StateS0_PKci(L, L1, msg, level); }
static int _Z14luaL_typeerrorP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_typeerror(lua_State* L, int arg, char* tname) { _Z14luaL_typeerrorP9lua_StateiPKc(L, arg, tname); }
static int _Z14luaopen_assertP9lua_State(lua_State*);
PLUTO_API int luaopen_assert(lua_State* L) { _Z14luaopen_assertP9lua_State(L); }
static int _Z14luaopen_base32P9lua_State(lua_State*);
PLUTO_API int luaopen_base32(lua_State* L) { _Z14luaopen_base32P9lua_State(L); }
static int _Z14luaopen_base64P9lua_State(lua_State*);
PLUTO_API int luaopen_base64(lua_State* L) { _Z14luaopen_base64P9lua_State(L); }
static int _Z14luaopen_bigintP9lua_State(lua_State*);
PLUTO_API int luaopen_bigint(lua_State* L) { _Z14luaopen_bigintP9lua_State(L); }
static int _Z14luaopen_cryptoP9lua_State(lua_State*);
PLUTO_API int luaopen_crypto(lua_State* L) { _Z14luaopen_cryptoP9lua_State(L); }
static int _Z14luaopen_socketP9lua_State(lua_State*);
PLUTO_API int luaopen_socket(lua_State* L) { _Z14luaopen_socketP9lua_State(L); }
static int _Z14luaopen_stringP9lua_State(lua_State*);
PLUTO_API int luaopen_string(lua_State* L) { _Z14luaopen_stringP9lua_State(L); }
static void _Z14lua_pushnumberP9lua_Stated(lua_State*, lua_Number);
PLUTO_API void lua_pushnumber(lua_State* L, lua_Number n) { _Z14lua_pushnumberP9lua_Stated(L, n); }
static char* _Z14lua_pushstringP9lua_StatePKc(lua_State*, char*);
PLUTO_API char* lua_pushstring(lua_State* L, char* s) { _Z14lua_pushstringP9lua_StatePKc(L, s); }
static int _Z14lua_pushthreadP9lua_State(lua_State*);
PLUTO_API int lua_pushthread(lua_State* L) { _Z14lua_pushthreadP9lua_State(L); }
static char* _Z14lua_setupvalueP9lua_Stateii(lua_State*, int, int);
PLUTO_API char* lua_setupvalue(lua_State* L, int funcindex, int n) { _Z14lua_setupvalueP9lua_Stateii(L, funcindex, n); }
static lua_Integer _Z14lua_tointegerxP9lua_StateiPi(lua_State*, int, int*);
PLUTO_API lua_Integer lua_tointegerx(lua_State* L, int idx, int* isnum) { _Z14lua_tointegerxP9lua_StateiPi(L, idx, isnum); }
static void* _Z14lua_touserdataP9lua_Statei(lua_State*, int);
PLUTO_API void* lua_touserdata(lua_State* L, int idx) { _Z14lua_touserdataP9lua_Statei(L, idx); }
static int _Z15lua_closethreadP9lua_StateS0_(lua_State*, lua_State*);
PLUTO_API int lua_closethread(lua_State* L, lua_State* from) { _Z15lua_closethreadP9lua_StateS0_(L, from); }
static void _Z15lua_createtableP9lua_Stateii(lua_State*, int, int);
PLUTO_API void lua_createtable(lua_State* L, int narr, int nrec) { _Z15lua_createtableP9lua_Stateii(L, narr, nrec); }
static void _Z15lua_erriffrozenP9lua_Statei(lua_State*, int);
PLUTO_API void lua_erriffrozen(lua_State* L, int idx) { _Z15lua_erriffrozenP9lua_Statei(L, idx); }
static void _Z15lua_freezetableP9lua_Statei(lua_State*, int);
PLUTO_API void lua_freezetable(lua_State* L, int idx) { _Z15lua_freezetableP9lua_Statei(L, idx); }
static int _Z15lua_gethookmaskP9lua_State(lua_State*);
PLUTO_API int lua_gethookmask(lua_State* L) { _Z15lua_gethookmaskP9lua_State(L); }
static int _Z15lua_iscfunctionP9lua_Statei(lua_State*, int);
PLUTO_API int lua_iscfunction(lua_State* L, int idx) { _Z15lua_iscfunctionP9lua_Statei(L, idx); }
static int _Z15lua_isyieldableP9lua_State(lua_State*);
PLUTO_API int lua_isyieldable(lua_State* L) { _Z15lua_isyieldableP9lua_State(L); }
static void _Z15luaL_checkstackP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API void luaL_checkstack(lua_State* L, int sz, char* msg) { _Z15luaL_checkstackP9lua_StateiPKc(L, sz, msg); }
static void* _Z15luaL_checkudataP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API void* luaL_checkudata(lua_State* L, int ud, char* tname) { _Z15luaL_checkudataP9lua_StateiPKc(L, ud, tname); }
static int _Z15luaL_execresultP9lua_Statei(lua_State*, int);
PLUTO_API int luaL_execresult(lua_State* L, int stat) { _Z15luaL_execresultP9lua_Statei(L, stat); }
static int _Z15luaL_fileresultP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_fileresult(lua_State* L, int stat, char* fname) { _Z15luaL_fileresultP9lua_StateiPKc(L, stat, fname); }
static int _Z15luaL_loadstringP9lua_StatePKc(lua_State*, char*);
PLUTO_API int luaL_loadstring(lua_State* L, char* s) { _Z15luaL_loadstringP9lua_StatePKc(L, s); }
static lua_Integer _Z15luaL_optintegerP9lua_Stateix(lua_State*, int, lua_Integer);
PLUTO_API lua_Integer luaL_optinteger(lua_State* L, int arg, lua_Integer def) { _Z15luaL_optintegerP9lua_Stateix(L, arg, def); }
static void _Z15luaL_pushresultP11luaL_Buffer(luaL_Buffer*);
PLUTO_API void luaL_pushresult(luaL_Buffer* B) { _Z15luaL_pushresultP11luaL_Buffer(B); }
static int _Z15luaopen_packageP9lua_State(lua_State*);
PLUTO_API int luaopen_package(lua_State* L) { _Z15luaopen_packageP9lua_State(L); }
static int _Z15luaopen_vector3P9lua_State(lua_State*);
PLUTO_API int luaopen_vector3(lua_State* L) { _Z15luaopen_vector3P9lua_State(L); }
static void _Z15lua_pushbooleanP9lua_Statei(lua_State*, int);
PLUTO_API void lua_pushboolean(lua_State* L, int b) { _Z15lua_pushbooleanP9lua_Statei(L, b); }
static char* _Z15lua_pushfstringP9lua_StatePKcz(lua_State*, char*);
PLUTO_API char* lua_pushfstring(lua_State* L, char* fmt) { _Z15lua_pushfstringP9lua_StatePKcz(L, fmt); }
static void _Z15lua_pushintegerP9lua_Statex(lua_State*, lua_Integer);
PLUTO_API void lua_pushinteger(lua_State* L, lua_Integer n) { _Z15lua_pushintegerP9lua_Statex(L, n); }
static int _Z15lua_resetthreadP9lua_State(lua_State*);
PLUTO_API int lua_resetthread(lua_State* L) { _Z15lua_resetthreadP9lua_State(L); }
static lua_CFunction _Z15lua_tocfunctionP9lua_Statei(lua_State*, int);
PLUTO_API lua_CFunction lua_tocfunction(lua_State* L, int idx) { _Z15lua_tocfunctionP9lua_Statei(L, idx); }
static void _Z15lua_upvaluejoinP9lua_Stateiiii(lua_State*, int, int, int, int);
PLUTO_API void lua_upvaluejoin(lua_State* L, int fidx1, int n1, int fidx2, int n2) { _Z15lua_upvaluejoinP9lua_Stateiiii(L, fidx1, n1, fidx2, n2); }
static int _Z16lua_gethookcountP9lua_State(lua_State*);
PLUTO_API int lua_gethookcount(lua_State* L) { _Z16lua_gethookcountP9lua_State(L); }
static int _Z16lua_getmetatableP9lua_Statei(lua_State*, int);
PLUTO_API int lua_getmetatable(lua_State* L, int objindex) { _Z16lua_getmetatableP9lua_Statei(L, objindex); }
static lua_Number _Z16luaL_checknumberP9lua_Statei(lua_State*, int);
PLUTO_API lua_Number luaL_checknumber(lua_State* L, int arg) { _Z16luaL_checknumberP9lua_Statei(L, arg); }
static int _Z16luaL_checkoptionP9lua_StateiPKcPKS2_(lua_State*, int, char*, char**);
PLUTO_API int luaL_checkoption(lua_State* L, int arg, char* def, char** lst) { _Z16luaL_checkoptionP9lua_StateiPKcPKS2_(L, arg, def, lst); }
static int _Z16luaL_getsubtableP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_getsubtable(lua_State* L, int idx, char* fname) { _Z16luaL_getsubtableP9lua_StateiPKc(L, idx, fname); }
static void _Z16lua_pushcclosureP9lua_StatePFiS0_Ei(lua_State*, lua_CFunction, int);
PLUTO_API void lua_pushcclosure(lua_State* L, lua_CFunction fn, int n) { _Z16lua_pushcclosureP9lua_StatePFiS0_Ei(L, fn, n); }
static int _Z16lua_setmetatableP9lua_Statei(lua_State*, int);
PLUTO_API int lua_setmetatable(lua_State* L, int objindex) { _Z16lua_setmetatableP9lua_Statei(L, objindex); }
static int _Z17lua_getiuservalueP9lua_Stateii(lua_State*, int, int);
PLUTO_API int lua_getiuservalue(lua_State* L, int idx, int n) { _Z17lua_getiuservalueP9lua_Stateii(L, idx, n); }
static int _Z17lua_istablefrozenP9lua_Statei(lua_State*, int);
PLUTO_API int lua_istablefrozen(lua_State* L, int idx) { _Z17lua_istablefrozenP9lua_Statei(L, idx); }
static lua_Integer _Z17luaL_checkintegerP9lua_Statei(lua_State*, int);
PLUTO_API lua_Integer luaL_checkinteger(lua_State* L, int arg) { _Z17luaL_checkintegerP9lua_Statei(L, arg); }
static int _Z17luaL_getmetafieldP9lua_StateiPKc(lua_State*, int, char*);
PLUTO_API int luaL_getmetafield(lua_State* L, int obj, char* e) { _Z17luaL_getmetafieldP9lua_StateiPKc(L, obj, e); }
static int _Z17luaL_newmetatableP9lua_StatePKc(lua_State*, char*);
PLUTO_API int luaL_newmetatable(lua_State* L, char* tname) { _Z17luaL_newmetatableP9lua_StatePKc(L, tname); }
static void _Z17luaL_setmetatableP9lua_StatePKc(lua_State*, char*);
PLUTO_API void luaL_setmetatable(lua_State* L, char* tname) { _Z17luaL_setmetatableP9lua_StatePKc(L, tname); }
static int _Z17luaopen_coroutineP9lua_State(lua_State*);
PLUTO_API int luaopen_coroutine(lua_State* L) { _Z17luaopen_coroutineP9lua_State(L); }
static int _Z17luaopen_schedulerP9lua_State(lua_State*);
PLUTO_API int luaopen_scheduler(lua_State* L) { _Z17luaopen_schedulerP9lua_State(L); }
static int _Z17lua_setiuservalueP9lua_Stateii(lua_State*, int, int);
PLUTO_API int lua_setiuservalue(lua_State* L, int idx, int n) { _Z17lua_setiuservalueP9lua_Stateii(L, idx, n); }
static int _Z18lua_setcstacklimitP9lua_Statej(lua_State*, unsigned int);
PLUTO_API int lua_setcstacklimit(lua_State* L, unsigned int limit) { _Z18lua_setcstacklimitP9lua_Statej(L, limit); }
static void _Z21lua_pushlightuserdataP9lua_StatePv(lua_State*, void*);
PLUTO_API void lua_pushlightuserdata(lua_State* L, void* p) { _Z21lua_pushlightuserdataP9lua_StatePv(L, p); }
static int _Z6lua_gcP9lua_Stateiz(lua_State*, int);
PLUTO_API int lua_gc(lua_State* L, int what) { _Z6lua_gcP9lua_Stateiz(L, what); }
static void _Z7lua_lenP9lua_Statei(lua_State*, int);
PLUTO_API void lua_len(lua_State* L, int idx) { _Z7lua_lenP9lua_Statei(L, idx); }
static void _Z8lua_copyP9lua_Stateii(lua_State*, int, int);
PLUTO_API void lua_copy(lua_State* L, int fromidx, int toidx) { _Z8lua_copyP9lua_Stateii(L, fromidx, toidx); }
static int _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_i(lua_State*, lua_Writer, void*, int);
PLUTO_API int lua_dump(lua_State* L, lua_Writer writer, void* data, int strip) { _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_i(L, writer, data, strip); }
static int _Z8lua_getiP9lua_Stateix(lua_State*, int, lua_Integer);
PLUTO_API int lua_geti(lua_State* L, int idx, lua_Integer n) { _Z8lua_getiP9lua_Stateix(L, idx, n); }
static lua_Integer _Z8luaL_lenP9lua_Statei(lua_State*, int);
PLUTO_API lua_Integer luaL_len(lua_State* L, int idx) { _Z8luaL_lenP9lua_Statei(L, idx); }
static int _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_S2_(lua_State*, lua_Reader, void*, char*, char*);
PLUTO_API int lua_load(lua_State* L, lua_Reader reader, void* dt, char* chunkname, char* mode) { _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_S2_(L, reader, dt, chunkname, mode); }
static int _Z8luaL_refP9lua_Statei(lua_State*, int);
PLUTO_API int luaL_ref(lua_State* L, int t) { _Z8luaL_refP9lua_Statei(L, t); }
static int _Z8lua_nextP9lua_Statei(lua_State*, int);
PLUTO_API int lua_next(lua_State* L, int idx) { _Z8lua_nextP9lua_Statei(L, idx); }
static void _Z8lua_setiP9lua_Stateix(lua_State*, int, lua_Integer);
PLUTO_API void lua_seti(lua_State* L, int idx, lua_Integer n) { _Z8lua_setiP9lua_Stateix(L, idx, n); }
static int _Z8lua_typeP9lua_Statei(lua_State*, int);
PLUTO_API int lua_type(lua_State* L, int idx) { _Z8lua_typeP9lua_Statei(L, idx); }
static void _Z9lua_arithP9lua_Statei(lua_State*, int);
PLUTO_API void lua_arith(lua_State* L, int op) { _Z9lua_arithP9lua_Statei(L, op); }
static void _Z9lua_callkP9lua_StateiilPFiS0_ilE(lua_State*, int, int, lua_KContext, lua_KFunction);
PLUTO_API void lua_callk(lua_State* L, int nargs, int nresults, lua_KContext ctx, lua_KFunction k) { _Z9lua_callkP9lua_StateiilPFiS0_ilE(L, nargs, nresults, ctx, k); }
static void _Z9lua_closeP9lua_State(lua_State*);
PLUTO_API void lua_close(lua_State* L) { _Z9lua_closeP9lua_State(L); }
static int _Z9lua_errorP9lua_State(lua_State*);
PLUTO_API int lua_error(lua_State* L) { _Z9lua_errorP9lua_State(L); }
static char* _Z9luaL_gsubP9lua_StatePKcS2_S2_(lua_State*, char*, char*, char*);
PLUTO_API char* luaL_gsub(lua_State* L, char* s, char* p, char* r) { _Z9luaL_gsubP9lua_StatePKcS2_S2_(L, s, p, r); }
static void _Z9lua_xmoveP9lua_StateS0_i(lua_State*, lua_State*, int);
PLUTO_API void lua_xmove(lua_State* from, lua_State* to, int n) { _Z9lua_xmoveP9lua_StateS0_i(from, to, n); }
#endif
