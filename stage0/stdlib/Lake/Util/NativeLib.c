// Lean compiler output
// Module: Lake.Util.NativeLib
// Imports: Init.System.IO
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Lake_sharedLibPathEnvVar___closed__2;
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
static lean_object* l_Lake_sharedLibExt___closed__2;
extern uint8_t l_System_Platform_isOSX;
static lean_object* l_Lake_nameToSharedLib___closed__0;
static lean_object* l_Lake_sharedLibExt___closed__0;
lean_object* l_System_SearchPath_parse(lean_object*);
lean_object* lean_io_getenv(lean_object*, lean_object*);
static lean_object* l_Lake_nameToStaticLib___closed__1;
LEAN_EXPORT lean_object* l_Lake_sharedLibExt;
static lean_object* l_Lake_nameToStaticLib___closed__0;
static lean_object* l_Lake_nameToSharedLib___closed__1;
static lean_object* l_Lake_sharedLibExt___closed__1;
LEAN_EXPORT lean_object* l_Lake_getSearchPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getSearchPath___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_sharedLibPathEnvVar___closed__0;
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_sharedLibPathEnvVar;
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lake_sharedLibPathEnvVar___closed__1;
extern uint8_t l_System_Platform_isWindows;
static lean_object* _init_l_Lake_sharedLibExt___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("so", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("dylib", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibExt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("dll", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibExt() {
_start:
{
uint8_t x_1; 
x_1 = l_System_Platform_isWindows;
if (x_1 == 0)
{
uint8_t x_2; 
x_2 = l_System_Platform_isOSX;
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_Lake_sharedLibExt___closed__0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = l_Lake_sharedLibExt___closed__1;
return x_4;
}
}
else
{
lean_object* x_5; 
x_5 = l_Lake_sharedLibExt___closed__2;
return x_5;
}
}
}
static lean_object* _init_l_Lake_nameToStaticLib___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lib", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lake_nameToStaticLib___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".a", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
uint8_t x_8; 
x_8 = l_System_Platform_isWindows;
if (x_8 == 0)
{
goto block_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lake_nameToStaticLib___closed__1;
x_10 = lean_string_append(x_1, x_9);
return x_10;
}
}
else
{
goto block_7;
}
block_7:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lake_nameToStaticLib___closed__0;
x_4 = lean_string_append(x_3, x_1);
lean_dec_ref(x_1);
x_5 = l_Lake_nameToStaticLib___closed__1;
x_6 = lean_string_append(x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
x_4 = l_Lake_nameToStaticLib(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lake_nameToSharedLib___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lake_nameToSharedLib___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; 
if (x_2 == 0)
{
uint8_t x_12; 
x_12 = l_System_Platform_isWindows;
if (x_12 == 0)
{
goto block_11;
}
else
{
lean_object* x_13; 
x_13 = l_Lake_nameToSharedLib___closed__1;
x_3 = x_13;
goto block_9;
}
}
else
{
goto block_11;
}
block_9:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Lake_nameToSharedLib___closed__0;
x_6 = lean_string_append(x_4, x_5);
x_7 = l_Lake_sharedLibExt;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
block_11:
{
lean_object* x_10; 
x_10 = l_Lake_nameToStaticLib___closed__0;
x_3 = x_10;
goto block_9;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
x_4 = l_Lake_nameToSharedLib(x_1, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LD_LIBRARY_PATH", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DYLD_LIBRARY_PATH", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PATH", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar() {
_start:
{
uint8_t x_1; 
x_1 = l_System_Platform_isWindows;
if (x_1 == 0)
{
uint8_t x_2; 
x_2 = l_System_Platform_isOSX;
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_Lake_sharedLibPathEnvVar___closed__0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = l_Lake_sharedLibPathEnvVar___closed__1;
return x_4;
}
}
else
{
lean_object* x_5; 
x_5 = l_Lake_sharedLibPathEnvVar___closed__2;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSearchPath(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_io_getenv(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
x_7 = lean_box(0);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec_ref(x_4);
x_14 = l_System_SearchPath_parse(x_13);
lean_dec(x_13);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
lean_dec_ref(x_4);
x_17 = l_System_SearchPath_parse(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSearchPath___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_getSearchPath(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
lean_object* initialize_Init_System_IO(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_NativeLib(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_sharedLibExt___closed__0 = _init_l_Lake_sharedLibExt___closed__0();
lean_mark_persistent(l_Lake_sharedLibExt___closed__0);
l_Lake_sharedLibExt___closed__1 = _init_l_Lake_sharedLibExt___closed__1();
lean_mark_persistent(l_Lake_sharedLibExt___closed__1);
l_Lake_sharedLibExt___closed__2 = _init_l_Lake_sharedLibExt___closed__2();
lean_mark_persistent(l_Lake_sharedLibExt___closed__2);
l_Lake_sharedLibExt = _init_l_Lake_sharedLibExt();
lean_mark_persistent(l_Lake_sharedLibExt);
l_Lake_nameToStaticLib___closed__0 = _init_l_Lake_nameToStaticLib___closed__0();
lean_mark_persistent(l_Lake_nameToStaticLib___closed__0);
l_Lake_nameToStaticLib___closed__1 = _init_l_Lake_nameToStaticLib___closed__1();
lean_mark_persistent(l_Lake_nameToStaticLib___closed__1);
l_Lake_nameToSharedLib___closed__0 = _init_l_Lake_nameToSharedLib___closed__0();
lean_mark_persistent(l_Lake_nameToSharedLib___closed__0);
l_Lake_nameToSharedLib___closed__1 = _init_l_Lake_nameToSharedLib___closed__1();
lean_mark_persistent(l_Lake_nameToSharedLib___closed__1);
l_Lake_sharedLibPathEnvVar___closed__0 = _init_l_Lake_sharedLibPathEnvVar___closed__0();
lean_mark_persistent(l_Lake_sharedLibPathEnvVar___closed__0);
l_Lake_sharedLibPathEnvVar___closed__1 = _init_l_Lake_sharedLibPathEnvVar___closed__1();
lean_mark_persistent(l_Lake_sharedLibPathEnvVar___closed__1);
l_Lake_sharedLibPathEnvVar___closed__2 = _init_l_Lake_sharedLibPathEnvVar___closed__2();
lean_mark_persistent(l_Lake_sharedLibPathEnvVar___closed__2);
l_Lake_sharedLibPathEnvVar = _init_l_Lake_sharedLibPathEnvVar();
lean_mark_persistent(l_Lake_sharedLibPathEnvVar);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
