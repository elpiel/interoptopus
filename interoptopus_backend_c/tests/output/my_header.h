// Automatically generated by Interoptopus.

#ifndef interoptopus_generated
#define interoptopus_generated

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>



const uint8_t MY_LIBRARY_U8 = 255;
const float MY_LIBRARY_F32_MIN_POSITIVE = 0.000000000000000000000000000000000000011754944;
const int32_t MY_LIBRARY_COMPUTED_I32 = -2147483647;

typedef enum my_library_enumdocumented
    {
    MY_LIBRARY_A = 0,
    MY_LIBRARY_B = 1,
    MY_LIBRARY_C = 2,
    } my_library_enumdocumented;

typedef struct my_library_generic2u8 my_library_generic2u8;
typedef struct my_library_generic3 my_library_generic3;
typedef struct my_library_generic4 my_library_generic4;
typedef struct my_library_opaque my_library_opaque;
typedef struct my_library_simpleservice my_library_simpleservice;
typedef struct my_library_somecontext my_library_somecontext;
typedef struct my_library_empty my_library_empty;

typedef enum my_library_ffierror
    {
    MY_LIBRARY_OK = 0,
    MY_LIBRARY_NULL = 100,
    MY_LIBRARY_PANIC = 200,
    MY_LIBRARY_FAIL = 300,
    } my_library_ffierror;

typedef struct my_library_extratypef32
    {
    float x;
    } my_library_extratypef32;

typedef struct my_library_inner
    {
    float x;
    } my_library_inner;

typedef struct my_library_phantomu8
    {
    uint32_t x;
    } my_library_phantomu8;

typedef struct my_library_someforeigntype
    {
    uint32_t x;
    } my_library_someforeigntype;

typedef struct my_library_structdocumented
    {
    float x;
    } my_library_structdocumented;

typedef struct my_library_tupled
    {
    uint8_t x0;
    } my_library_tupled;

typedef struct my_library_useasciistringpattern
    {
    uint8_t* ascii_string;
    } my_library_useasciistringpattern;

typedef struct my_library_vec
    {
    double x;
    double z;
    } my_library_vec;

typedef struct my_library_vec1
    {
    float x;
    float y;
    } my_library_vec1;

typedef struct my_library_vec2
    {
    double x;
    double z;
    } my_library_vec2;

typedef struct my_library_vec3f32
    {
    float x;
    float y;
    float z;
    } my_library_vec3f32;

typedef struct my_library_visibility1
    {
    uint8_t pblc;
    uint8_t prvt;
    } my_library_visibility1;

typedef struct my_library_visibility2
    {
    uint8_t pblc1;
    uint8_t pblc2;
    } my_library_visibility2;

typedef struct my_library_weird1u32
    {
    uint32_t x;
    } my_library_weird1u32;

typedef uint8_t (*my_library_fptr_fn_u8_rval_u8)(uint8_t x0);

typedef uint32_t (*my_library_fptr_fn_u32_rval_u32)(uint32_t x0);

typedef struct my_library_array
    {
    uint8_t data[16];
    } my_library_array;

typedef struct my_library_genericu32
    {
    uint32_t* x;
    } my_library_genericu32;

typedef struct my_library_genericu8
    {
    uint8_t* x;
    } my_library_genericu8;

typedef struct my_library_weird2u8
    {
    uint8_t t;
    uint8_t a[5];
    uint8_t* r;
    } my_library_weird2u8;

typedef my_library_tupled (*my_library_fptr_fn_Tupled_rval_Tupled)(my_library_tupled x0);

typedef bool (*my_library_fptr_fn_pmut_i64_rval_bool)(int64_t* x0);

typedef struct my_library_ffisliceu32
    {
    uint32_t* data;
    uint64_t len;
    } my_library_ffisliceu32;

typedef struct my_library_ffisliceu8
    {
    uint8_t* data;
    uint64_t len;
    } my_library_ffisliceu8;

typedef struct my_library_ffislicemutu8
    {
    uint8_t* data;
    uint64_t len;
    } my_library_ffislicemutu8;

typedef struct my_library_ffioptioninner
    {
    my_library_inner t;
    uint8_t is_some;
    } my_library_ffioptioninner;

typedef struct my_library_myapiv1
    {
    my_library_fptr_fn_pmut_i64_rval_bool ref_mut_option;
    my_library_fptr_fn_Tupled_rval_Tupled tupled;
    } my_library_myapiv1;

typedef struct my_library_ffislicevec3f32
    {
    my_library_vec3f32* data;
    uint64_t len;
    } my_library_ffislicevec3f32;

typedef uint8_t (*my_library_fptr_fn_FFISliceu8_rval_u8)(my_library_ffisliceu8 x0);

typedef void (*my_library_fptr_fn_FFISliceMutu8)(my_library_ffislicemutu8 x0);

typedef my_library_vec3f32 (*my_library_fptr_fn_FFISliceVec3f32_rval_Vec3f32)(my_library_ffislicevec3f32 x0);


void primitive_void();
void primitive_void2();
bool primitive_bool(bool x);
uint8_t primitive_u8(uint8_t x);
uint16_t primitive_u16(uint16_t x);
uint32_t primitive_u32(uint32_t x);
uint64_t primitive_u64(uint64_t x);
int8_t primitive_i8(int8_t x);
int16_t primitive_i16(int16_t x);
int32_t primitive_i32(int32_t x);
int64_t primitive_i64(int64_t x);
int64_t many_args_5(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4);
int64_t many_args_10(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4, int64_t x5, int64_t x6, int64_t x7, int64_t x8, int64_t x9);
int64_t* ptr(int64_t* x);
int64_t* ptr_mut(int64_t* x);
int64_t** ptr_ptr(int64_t** x);
int64_t* ref_simple(int64_t* x);
int64_t* ref_mut_simple(int64_t* x);
bool ref_option(int64_t* x);
bool ref_mut_option(int64_t* x);
my_library_tupled tupled(my_library_tupled x);
my_library_ffierror complex_args_1(my_library_vec3f32 _a, my_library_empty* _b);
my_library_opaque* complex_args_2(my_library_someforeigntype _cmplx);
uint8_t callback(my_library_fptr_fn_u8_rval_u8 callback, uint8_t value);
uint32_t generic_1a(my_library_genericu32 x, my_library_phantomu8 _y);
uint8_t generic_1b(my_library_genericu8 x, my_library_phantomu8 _y);
uint8_t generic_1c(my_library_genericu8* _x, my_library_genericu8* y);
uint8_t generic_2(my_library_generic2u8* x);
uint8_t generic_3(my_library_generic3* x);
uint8_t generic_4(my_library_generic4* x);
uint8_t array_1(my_library_array x);
my_library_enumdocumented documented(my_library_structdocumented _x);
my_library_vec1 ambiguous_1(my_library_vec1 x);
my_library_vec2 ambiguous_2(my_library_vec2 x);
bool ambiguous_3(my_library_vec1 x, my_library_vec2 y);
my_library_vec namespaced_type(my_library_vec x);
my_library_ffierror panics();
void sleep(uint64_t millis);
bool weird_1(my_library_weird1u32 _x, my_library_weird2u8 _y);
void visibility(my_library_visibility1 _x, my_library_visibility2 _y);
uint32_t pattern_ascii_pointer_1(uint8_t* x);
uint32_t pattern_ascii_pointer_len(uint8_t* x, my_library_useasciistringpattern y);
uint32_t pattern_ffi_slice_1(my_library_ffisliceu32 ffi_slice);
my_library_vec3f32 pattern_ffi_slice_2(my_library_ffislicevec3f32 ffi_slice, int32_t i);
void pattern_ffi_slice_3(my_library_ffislicemutu8 slice, my_library_fptr_fn_FFISliceMutu8 callback);
uint8_t pattern_ffi_slice_delegate(my_library_fptr_fn_FFISliceu8_rval_u8 callback);
my_library_vec3f32 pattern_ffi_slice_delegate_huge(my_library_fptr_fn_FFISliceVec3f32_rval_Vec3f32 callback);
my_library_ffioptioninner pattern_ffi_option_1(my_library_ffioptioninner ffi_slice);
my_library_inner pattern_ffi_option_2(my_library_ffioptioninner ffi_slice);
uint8_t pattern_ffi_bool(uint8_t ffi_bool);
void pattern_my_api_init_v1(my_library_myapiv1* api);
uint64_t pattern_api_guard();
void simple_service_ext_util(my_library_simpleservice* _ptr);
uint32_t pattern_callback_1(my_library_fptr_fn_u32_rval_u32 callback, uint32_t x);
my_library_ffierror pattern_service_create(my_library_somecontext** context_ptr, uint32_t value);
my_library_ffierror pattern_service_destroy(my_library_somecontext** context_ptr);
uint32_t pattern_service_method(my_library_somecontext* context);
my_library_ffierror pattern_service_method_success_enum_ok(my_library_somecontext* _context);
my_library_ffierror pattern_service_method_success_enum_fail(my_library_somecontext* _context);
my_library_ffierror simple_service_create(my_library_simpleservice** context_ptr, uint32_t x);
my_library_ffierror simple_service_destroy(my_library_simpleservice** context_ptr);
my_library_ffierror simple_service_result(my_library_simpleservice* context_ptr, uint32_t x);
uint32_t simple_service_value(my_library_simpleservice* context_ptr, uint32_t x);
uint8_t simple_service_mut_self(my_library_simpleservice* context_ptr, my_library_ffisliceu8 slice);
void simple_service_mut_self_void(my_library_simpleservice* context_ptr, my_library_ffisliceu8 slice);
uint8_t simple_service_mut_self_ref(my_library_simpleservice* context_ptr, uint8_t* x, uint8_t* _y);
uint8_t simple_service_mut_self_ref_slice(my_library_simpleservice* context_ptr, uint8_t* x, uint8_t* _y, my_library_ffisliceu8 _slice);
uint8_t simple_service_mut_self_ref_slice_limited(my_library_simpleservice* context_ptr, uint8_t* x, uint8_t* _y, my_library_ffisliceu8 _slice, my_library_ffisliceu8 _slice2);
my_library_ffierror simple_service_mut_self_ffi_error(my_library_simpleservice* context_ptr, my_library_ffislicemutu8 slice);
void simple_service_void(my_library_simpleservice* context_ptr);
uint32_t simple_service_extra_method(my_library_simpleservice* _context);

#ifdef __cplusplus
}
#endif

#endif /* interoptopus_generated */
