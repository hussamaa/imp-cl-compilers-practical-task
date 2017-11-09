// --atomics 13 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 65,94,1 -l 1,47,1
#define int64_t long
#define uint64_t ulong
#define int_least64_t long
#define uint_least64_t ulong
#define int_fast64_t long
#define uint_fast64_t ulong
#define intmax_t long
#define uintmax_t ulong
#define int32_t int
#define uint32_t uint
#define int16_t short
#define uint16_t ushort
#define int8_t char
#define uint8_t uchar

#define INT64_MIN LONG_MIN
#define INT64_MAX LONG_MAX
#define INT32_MIN INT_MIN
#define INT32_MAX INT_MAX
#define INT16_MIN SHRT_MIN
#define INT16_MAX SHRT_MAX
#define INT8_MIN CHAR_MIN
#define INT8_MAX CHAR_MAX
#define UINT64_MIN ULONG_MIN
#define UINT64_MAX ULONG_MAX
#define UINT32_MIN UINT_MIN
#define UINT32_MAX UINT_MAX
#define UINT16_MIN USHRT_MIN
#define UINT16_MAX USHRT_MAX
#define UINT8_MIN UCHAR_MIN
#define UINT8_MAX UCHAR_MAX

#define transparent_crc(X, Y, Z) transparent_crc_(&crc64_context, X, Y, Z)

#define VECTOR(X , Y) VECTOR_(X, Y)
#define VECTOR_(X, Y) X##Y

#ifndef NO_GROUP_DIVERGENCE
#define GROUP_DIVERGE(x, y) get_group_id(x)
#else
#define GROUP_DIVERGE(x, y) (y)
#endif

#ifndef NO_FAKE_DIVERGENCE
#define FAKE_DIVERGE(x, y, z) (x - y)
#else
#define FAKE_DIVERGE(x, y, z) (z)
#endif

__constant uint32_t permutations[10][47] = {
{46,2,7,24,25,23,29,27,43,37,11,45,32,44,40,35,38,5,3,33,20,18,34,21,9,28,8,16,12,0,36,13,30,39,14,19,15,31,4,6,41,26,42,1,17,22,10}, // permutation 0
{10,6,45,22,25,0,27,12,2,20,15,31,38,33,26,46,34,8,41,4,43,17,24,14,37,11,40,30,32,28,5,29,18,23,42,36,19,16,9,1,44,3,35,21,13,39,7}, // permutation 1
{20,46,43,27,40,17,24,3,8,32,22,35,5,4,25,9,2,0,21,18,28,1,30,29,41,10,44,13,38,45,34,33,16,26,36,19,39,11,31,37,15,42,12,6,14,7,23}, // permutation 2
{9,38,22,20,21,40,44,10,28,42,35,37,3,1,33,16,32,17,12,14,13,46,39,15,29,11,5,45,4,36,0,2,8,19,43,26,41,23,25,34,30,31,6,7,18,27,24}, // permutation 3
{25,32,17,0,11,19,44,22,23,3,38,21,29,30,12,26,28,27,40,6,5,43,33,10,42,18,34,24,2,13,36,39,31,8,4,35,45,16,37,46,41,15,14,1,7,9,20}, // permutation 4
{44,37,9,35,45,30,39,22,25,21,3,1,10,32,33,20,38,14,13,46,36,29,6,18,11,4,26,34,24,41,12,16,0,23,40,5,28,17,8,27,19,2,42,15,31,43,7}, // permutation 5
{14,0,15,6,30,23,11,18,7,28,26,29,39,38,24,19,2,21,4,10,12,40,20,43,1,41,25,32,5,36,8,16,33,42,34,31,13,45,27,35,9,17,22,46,3,37,44}, // permutation 6
{37,21,0,42,7,4,9,36,18,41,6,33,2,14,46,40,23,39,35,20,12,11,43,24,27,30,45,10,8,34,28,15,19,44,22,17,26,38,1,29,32,5,16,31,25,13,3}, // permutation 7
{37,45,38,25,32,15,16,35,19,28,39,42,20,46,7,5,33,36,13,0,6,41,8,27,40,3,2,17,9,1,30,18,31,43,10,34,22,14,29,44,21,24,11,12,26,4,23}, // permutation 8
{1,20,3,17,29,4,46,35,28,2,33,45,26,30,39,44,37,9,16,23,11,5,13,7,38,24,0,18,32,40,41,31,14,34,22,12,21,36,10,43,8,15,19,42,25,6,27} // permutation 9
};

// Seed: 1566632977

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

union U1 {
   volatile uint64_t  f0;
   uint32_t  f1;
   int8_t * f2;
   uint32_t  f3;
};

union U2 {
   volatile int32_t  f0;
   volatile int8_t  f1;
   struct S0  f2;
};

union U3 {
   volatile int32_t  f0;
   volatile int16_t  f1;
   int64_t  f2;
};

union U4 {
   struct S0  f0;
   uint32_t  f1;
   volatile uint32_t  f2;
   uint32_t  f3;
};

union U5 {
   int16_t  f0;
   volatile uint32_t  f1;
   struct S0  f2;
   struct S0  f3;
};

union U6 {
   volatile int64_t  f0;
   volatile uint16_t  f1;
};

struct S7 {
    VECTOR(int32_t, 8) g_3;
    int8_t g_29;
    union U6 g_65[9][10][2];
    int32_t *g_66;
    int32_t g_68;
    VECTOR(int16_t, 4) g_72;
    uint8_t g_85;
    int32_t g_89;
    int32_t * volatile g_88;
    uint32_t g_123;
    volatile VECTOR(int32_t, 4) g_124;
    int8_t g_141;
    volatile int64_t g_142;
    int16_t g_143;
    int8_t g_144[9];
    volatile VECTOR(int32_t, 8) g_145;
    int16_t g_146;
    int64_t g_147;
    volatile uint32_t g_148;
    VECTOR(uint8_t, 16) g_158;
    union U2 g_173;
    int8_t g_175[9];
    union U5 g_178[5];
    int64_t g_189[4][1];
    volatile int64_t g_190;
    volatile uint8_t g_191[9];
    VECTOR(int8_t, 2) g_196;
    volatile union U3 g_199;
    uint64_t g_212;
    volatile VECTOR(int64_t, 8) g_222;
    volatile struct S0 g_223;
    volatile VECTOR(int32_t, 2) g_226;
    volatile VECTOR(int8_t, 8) g_239;
    volatile union U2 g_257;
    volatile union U1 g_267[4];
    VECTOR(uint32_t, 4) g_270;
    uint64_t g_280[3][7];
    uint64_t *g_279[4][9][7];
    volatile struct S0 * volatile g_283;
    union U6 g_284;
    union U4 g_293;
    volatile union U5 g_311[7];
    struct S0 *g_312;
    struct S0 ** volatile g_371;
    int32_t * volatile g_388;
    uint8_t g_405;
    int32_t g_407[7];
    VECTOR(uint16_t, 16) g_410;
    VECTOR(uint16_t, 4) g_411;
    int64_t * volatile g_423;
    int64_t * volatile *g_422;
    int32_t ** volatile g_436;
    volatile uint64_t g_451;
    volatile uint64_t *g_450;
    volatile uint64_t ** volatile g_449[1];
    volatile int32_t g_487[1];
    uint32_t g_488;
    uint32_t g_497;
    union U1 g_500;
    VECTOR(uint32_t, 16) g_513;
    int32_t * volatile g_529[9];
    int32_t * volatile g_530;
    int32_t ** volatile g_531;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S7 * p_535);
int32_t * func_14(uint32_t  p_15, struct S7 * p_535);
uint32_t  func_17(int8_t  p_18, int8_t  p_19, int16_t  p_20, int8_t  p_21, struct S7 * p_535);
int8_t  func_22(int64_t  p_23, int8_t * p_24, int8_t * p_25, int8_t * p_26, uint64_t  p_27, struct S7 * p_535);
int8_t * func_30(int8_t * p_31, struct S7 * p_535);
int8_t * func_32(int16_t  p_33, int8_t * p_34, int8_t * p_35, struct S7 * p_535);
uint16_t  func_40(int32_t * p_41, int8_t * p_42, uint64_t  p_43, uint8_t  p_44, int8_t  p_45, struct S7 * p_535);
int32_t * func_46(int32_t * p_47, int64_t  p_48, int32_t * p_49, struct S0  p_50, struct S0  p_51, struct S7 * p_535);
int8_t  func_53(int32_t  p_54, int8_t  p_55, int32_t * p_56, int8_t * p_57, int32_t * p_58, struct S7 * p_535);
int32_t * func_59(int32_t * p_60, uint8_t  p_61, uint16_t  p_62, int64_t  p_63, int32_t * p_64, struct S7 * p_535);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_535->l_comm_values p_535->g_3 p_535->g_65 p_535->g_comm_values p_535->g_66 p_535->g_65.f0 p_535->g_72 p_535->g_85 p_535->g_68 p_535->g_88 p_535->g_89 p_535->g_29 p_535->g_257 p_535->g_267 p_535->g_270 p_535->g_144 p_535->g_279 p_535->g_123 p_535->g_223.f0 p_535->g_196 p_535->g_223 p_535->g_283 p_535->g_284 p_535->g_143 p_535->g_293 p_535->g_199.f0 p_535->g_158 p_535->g_311 p_535->g_312 p_535->g_178.f0 p_535->g_371 p_535->g_280 p_535->g_293.f0.f0 p_535->g_388 p_535->g_222 p_535->g_146 p_535->g_436 p_535->g_410 p_535->g_411 p_535->g_405 p_535->g_422 p_535->g_449 p_535->g_488 p_535->g_497 p_535->g_513 p_535->g_530 p_535->g_141 p_535->g_531
 * writes: p_535->g_68 p_535->g_66 p_535->g_85 p_535->g_89 p_535->g_29 p_535->g_257.f2 p_535->g_312 p_535->g_293.f0.f0 p_535->g_178.f0 p_535->g_143 p_535->g_146 p_535->g_178.f2 p_535->g_405 p_535->g_141 p_535->g_488 p_535->g_411
 */
uint32_t  func_1(struct S7 * p_535)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = (void*)0;
    int32_t *l_7[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_8 = 0x3F5CBF79L;
    int32_t l_9 = 0x4964B5ADL;
    int32_t l_10[1];
    uint16_t l_11 = 0x8ECCL;
    int16_t l_16 = 0x0C66L;
    int32_t **l_532[2][5] = {{&l_6,&p_535->g_66,&l_7[0],&p_535->g_66,&l_6},{&l_6,&p_535->g_66,&l_7[0],&p_535->g_66,&l_6}};
    int32_t *l_533 = &p_535->g_68;
    uint16_t l_534[6] = {0UL,65535UL,0UL,0UL,65535UL,0UL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_10[i] = (-1L);
    l_11--;
    l_533 = ((*p_535->g_436) = func_14(l_16, p_535));
    return l_534[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_535->l_comm_values p_535->g_3 p_535->g_65 p_535->g_comm_values p_535->g_66 p_535->g_65.f0 p_535->g_72 p_535->g_85 p_535->g_68 p_535->g_88 p_535->g_89 p_535->g_29 p_535->g_257 p_535->g_267 p_535->g_270 p_535->g_144 p_535->g_279 p_535->g_123 p_535->g_223.f0 p_535->g_196 p_535->g_223 p_535->g_283 p_535->g_284 p_535->g_143 p_535->g_293 p_535->g_199.f0 p_535->g_158 p_535->g_311 p_535->g_312 p_535->g_178.f0 p_535->g_371 p_535->g_280 p_535->g_293.f0.f0 p_535->g_388 p_535->g_222 p_535->g_146 p_535->g_436 p_535->g_410 p_535->g_411 p_535->g_405 p_535->g_422 p_535->g_449 p_535->g_488 p_535->g_497 p_535->g_513 p_535->g_530 p_535->g_141 p_535->g_531
 * writes: p_535->g_68 p_535->g_66 p_535->g_85 p_535->g_89 p_535->g_29 p_535->g_257.f2 p_535->g_312 p_535->g_293.f0.f0 p_535->g_178.f0 p_535->g_143 p_535->g_146 p_535->g_178.f2 p_535->g_405 p_535->g_141 p_535->g_488 p_535->g_411
 */
int32_t * func_14(uint32_t  p_15, struct S7 * p_535)
{ /* block id: 6 */
    int8_t *l_28 = &p_535->g_29;
    int32_t *l_52 = (void*)0;
    struct S0 l_372 = {1UL};
    int8_t *l_495 = &p_535->g_29;
    int8_t **l_494 = &l_495;
    (*p_535->g_531) = (func_17(func_22(p_15, l_28, ((*l_494) = func_30(func_32((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))((safe_rshift_func_uint16_t_u_u(func_40(func_46(l_52, ((((*l_28) = func_53(p_535->l_comm_values[(safe_mod_func_uint32_t_u_u(p_535->tid, 47))], p_535->g_3.s4, func_59((p_535->g_65[3][8][1] , l_52), p_535->g_3.s6, ((void*)0 == l_28), p_535->g_comm_values[p_535->tid], p_535->g_66, p_535), &p_535->g_175[3], l_52, p_535)) ^ p_15) , 0x5616655CD66CD463L), l_52, l_372, l_372, p_535), l_28, p_15, p_535->g_158.s8, p_15, p_535), 0)), 0x59L, 3L, p_15, ((VECTOR(int8_t, 2))(0x70L)), 0x18L, 3L)).s4, 1)), l_28, l_28, p_535), p_535)), &p_535->g_144[6], p_15, p_535), l_372.f0, p_15, l_372.f0, p_535) , l_52);
    return l_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_267 p_535->g_411 p_535->g_513 p_535->g_72 p_535->g_530 p_535->g_141
 * writes: p_535->g_411 p_535->g_68
 */
uint32_t  func_17(int8_t  p_18, int8_t  p_19, int16_t  p_20, int8_t  p_21, struct S7 * p_535)
{ /* block id: 202 */
    union U1 *l_499[2];
    union U1 **l_498 = &l_499[1];
    int32_t l_503 = 0x618AABF0L;
    uint16_t *l_506 = (void*)0;
    uint16_t *l_507 = (void*)0;
    uint16_t *l_508 = (void*)0;
    uint16_t *l_509 = (void*)0;
    uint16_t *l_510[1];
    VECTOR(int16_t, 4) l_520 = (VECTOR(int16_t, 4))(0x7DA2L, (VECTOR(int16_t, 2))(0x7DA2L, 0x76C1L), 0x76C1L);
    uint64_t **l_522 = &p_535->g_279[3][6][1];
    uint64_t ***l_521 = &l_522;
    int32_t l_525[2][2] = {{(-9L),(-9L)},{(-9L),(-9L)}};
    uint32_t *l_526 = (void*)0;
    int32_t l_527[9] = {0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL,0x6E9F69AFL};
    int32_t l_528[9];
    int i, j;
    for (i = 0; i < 2; i++)
        l_499[i] = &p_535->g_500;
    for (i = 0; i < 1; i++)
        l_510[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_528[i] = 0x1206E97CL;
    (*l_498) = (void*)0;
    (*p_535->g_530) = ((p_20 <= (((safe_lshift_func_uint16_t_u_u(((p_535->g_267[3] , l_503) | ((((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), l_503)) , ((l_528[0] = (((p_18 == (((-9L) && (--p_535->g_411.x)) , (l_527[4] = (l_525[1][0] = ((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(p_535->g_513.s5ee3b5c5c6906157)).odd, (uint32_t)(safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((+((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_520.wyxzxxxzxywxwzzx)).se5)).xxyyyxyy)).s0) >= ((void*)0 != l_521)), (safe_div_func_int8_t_s_s(l_520.x, l_503)))) , 0x20F4L), l_520.z)), 0))))).s4)))) <= FAKE_DIVERGE(p_535->group_2_offset, get_group_id(2), 10)) && l_503)) | l_520.x)) <= p_19) & p_535->g_72.x)), 6)) == p_18) | p_20)) == 1UL);
    return p_535->g_141;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_388 p_535->g_89 p_535->g_68 p_535->g_497
 * writes: p_535->g_68
 */
int8_t  func_22(int64_t  p_23, int8_t * p_24, int8_t * p_25, int8_t * p_26, uint64_t  p_27, struct S7 * p_535)
{ /* block id: 199 */
    int32_t *l_496 = &p_535->g_68;
    (*l_496) &= (*p_535->g_388);
    return p_535->g_497;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_146 p_535->g_270 p_535->g_410 p_535->g_411 p_535->g_257 p_535->g_65.f0 p_535->g_405 p_535->g_comm_values p_535->g_422 p_535->g_68 p_535->g_436 p_535->g_449 p_535->g_88 p_535->g_89 p_535->g_488
 * writes: p_535->g_146 p_535->g_178.f2 p_535->g_89 p_535->g_68 p_535->g_405 p_535->g_66 p_535->g_143 p_535->g_141 p_535->g_488
 */
int8_t * func_30(int8_t * p_31, struct S7 * p_535)
{ /* block id: 155 */
    uint64_t l_398 = 18446744073709551609UL;
    VECTOR(uint64_t, 4) l_399 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2A32C5AF18D9F2DDL), 0x2A32C5AF18D9F2DDL);
    uint64_t *l_432[8][7] = {{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0},{&p_535->g_212,&p_535->g_212,(void*)0,&p_535->g_212,&p_535->g_212,&p_535->g_212,(void*)0}};
    struct S0 l_448 = {0x20923F44C6D35B93L};
    VECTOR(int32_t, 4) l_462 = (VECTOR(int32_t, 4))(0x79CB8E36L, (VECTOR(int32_t, 2))(0x79CB8E36L, 0x5AD1950EL), 0x5AD1950EL);
    int16_t l_465 = 0x55CEL;
    VECTOR(int32_t, 16) l_469 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 7L), 7L), 7L, 3L, 7L, (VECTOR(int32_t, 2))(3L, 7L), (VECTOR(int32_t, 2))(3L, 7L), 3L, 7L, 3L, 7L);
    uint16_t l_481 = 2UL;
    int i, j;
    for (p_535->g_146 = (-13); (p_535->g_146 >= 26); p_535->g_146 = safe_add_func_int64_t_s_s(p_535->g_146, 1))
    { /* block id: 158 */
        struct S0 l_394 = {0x49949F2AA58A465DL};
        struct S0 *l_395 = &p_535->g_178[0].f2;
        uint64_t l_404 = 0x673DF16D860CF9C2L;
        int32_t *l_406 = &p_535->g_407[4];
        uint64_t *l_412[6];
        VECTOR(uint64_t, 2) l_421 = (VECTOR(uint64_t, 2))(0x9525CB8E06CC97E8L, 18446744073709551609UL);
        uint64_t *l_433 = &p_535->g_212;
        int32_t l_473 = 0x3ECF7445L;
        int32_t l_474 = 0L;
        int32_t l_475 = 0x52119EC0L;
        int32_t l_476 = 0x009D9BF0L;
        int32_t l_478 = 0x68083430L;
        int32_t l_479 = (-10L);
        VECTOR(int32_t, 4) l_480 = (VECTOR(int32_t, 4))(0x6DF1C9F0L, (VECTOR(int32_t, 2))(0x6DF1C9F0L, 0x2C406F51L), 0x2C406F51L);
        int32_t *l_485 = &l_479;
        int32_t *l_486[9][6] = {{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0},{(void*)0,&l_479,(void*)0,(void*)0,&l_479,(void*)0}};
        uint8_t l_491[1];
        int i, j;
        for (i = 0; i < 6; i++)
            l_412[i] = &p_535->g_212;
        for (i = 0; i < 1; i++)
            l_491[i] = 0xFBL;
        (*l_395) = l_394;
        if ((((0xB8C4F50B401478E0L > (safe_add_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(18446744073709551610UL, l_398, 0x52F40B33EBCA1237L, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_399.wzyxwzzz)))).s14, (uint64_t)((((*l_406) = (safe_add_func_int8_t_s_s((((((((((((VECTOR(uint32_t, 2))(1UL, 0x1A72707DL)).lo <= ((*p_31) < (l_404 == ((((0xC1C3L > l_399.w) || l_394.f0) , &p_535->g_89) != &p_535->g_68)))) == 7L) != p_535->g_405) || 0UL) > 0x17C94C22L) == 1L) && (-1L)) <= p_535->g_175[8]) > l_398), l_394.f0))) , l_394.f0) & 0UL), (uint64_t)l_399.w))), 0x43792A235D3C4B83L, 18446744073709551606UL, 0x6BFFAA20B5A90BA6L)).s4 & 0x4B6B789D6C44FBBAL) ^ 0x7EB2L), l_398))) >= 0xBCL) , (-7L)))
        { /* block id: 161 */
            uint64_t l_418 = 0x19C7D26710AEF6A1L;
            int32_t *l_435 = (void*)0;
            atomic_max(&p_535->g_atomic_reduction[get_linear_group_id()], ((safe_div_func_uint16_t_u_u(p_535->g_270.y, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(p_535->g_410.s2d69)).wyywwwwzxyxzyzyx, ((VECTOR(uint16_t, 16))(p_535->g_411.xwxyzwzwywwxzwxy))))).s6)) && ((p_535->g_257 , p_535->g_65[3][8][1].f0) ^ (l_412[4] != ((safe_unary_minus_func_uint16_t_u((((safe_div_func_uint8_t_u_u(p_535->g_405, (p_535->g_comm_values[p_535->tid] ^ (safe_mod_func_uint8_t_u_u(l_418, (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(l_421.yx)).xyxyxxyxyyyyyxyx))).sc, (p_535->g_422 != (void*)0)))))))) > l_398) || l_418))) , &p_535->g_212)))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_535->v_collective += p_535->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_535->g_89 = 28; (p_535->g_89 == (-24)); p_535->g_89--)
            { /* block id: 165 */
                int32_t *l_426 = &p_535->g_68;
                (*l_426) |= 0x53E51C5AL;
                for (p_535->g_405 = 0; (p_535->g_405 < 9); p_535->g_405 = safe_add_func_uint64_t_u_u(p_535->g_405, 4))
                { /* block id: 169 */
                    uint64_t **l_431 = &l_412[3];
                    int32_t *l_434 = &p_535->g_89;
                    if ((*l_426))
                        break;
                    if (l_418)
                        break;
                    (*p_535->g_436) = ((0x6A82D52AL < (((*l_431) = &p_535->g_212) == (l_433 = l_432[6][1]))) , (l_435 = l_434));
                }
            }
        }
        else
        { /* block id: 178 */
            uint64_t **l_452 = &l_412[4];
            int32_t l_456 = 0x50A91C58L;
            int32_t l_470 = 7L;
            int16_t l_471 = 0x5820L;
            int32_t l_472[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t l_477[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            int8_t *l_484 = &p_535->g_175[5];
            int i;
            for (p_535->g_143 = 0; (p_535->g_143 > 7); p_535->g_143 = safe_add_func_int32_t_s_s(p_535->g_143, 5))
            { /* block id: 181 */
                uint16_t l_443[5][8][6] = {{{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L}},{{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L}},{{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L}},{{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L}},{{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L},{0x0A09L,2UL,0x0A09L,0x0A09L,2UL,0x0A09L}}};
                int32_t *l_457 = (void*)0;
                int32_t *l_458 = (void*)0;
                int32_t *l_459 = (void*)0;
                int32_t *l_460 = &p_535->g_68;
                int32_t *l_461 = &l_456;
                int32_t *l_463 = &p_535->g_89;
                int32_t *l_464 = (void*)0;
                int32_t *l_466 = (void*)0;
                int32_t l_467 = 0x37663458L;
                int32_t *l_468[6][9][4] = {{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}},{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}},{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}},{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}},{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}},{{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456},{(void*)0,(void*)0,&l_456,&l_456}}};
                int i, j, k;
                for (p_535->g_141 = (-20); (p_535->g_141 == 27); ++p_535->g_141)
                { /* block id: 184 */
                    uint64_t ***l_453[3][4];
                    int32_t *l_454 = &p_535->g_68;
                    struct S0 l_455[6][2][2] = {{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}},{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}},{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}},{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}},{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}},{{{0UL},{0x636F0699AC1011B4L}},{{0UL},{0x636F0699AC1011B4L}}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_453[i][j] = (void*)0;
                    }
                    (*l_454) ^= ((!(safe_rshift_func_uint8_t_u_u((0x740180F1C2DAAEE8L <= l_443[3][3][4]), (safe_div_func_int32_t_s_s((-1L), ((+0L) & ((-10L) > ((l_448 , p_535->g_449[0]) != (l_452 = l_452))))))))) , l_443[3][3][4]);
                    (*l_395) = l_455[3][0][0];
                }
                --l_481;
                if ((*p_535->g_88))
                    break;
            }
            return l_484;
        }
        --p_535->g_488;
        --l_491[0];
    }
    return &p_535->g_175[8];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_32(int16_t  p_33, int8_t * p_34, int8_t * p_35, struct S7 * p_535)
{ /* block id: 153 */
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_143 p_535->g_222
 * writes: p_535->g_143
 */
uint16_t  func_40(int32_t * p_41, int8_t * p_42, uint64_t  p_43, uint8_t  p_44, int8_t  p_45, struct S7 * p_535)
{ /* block id: 146 */
    for (p_535->g_143 = 0; (p_535->g_143 > (-25)); --p_535->g_143)
    { /* block id: 149 */
        uint64_t l_391 = 18446744073709551615UL;
        return l_391;
    }
    return p_535->g_222.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_88 p_535->g_89 p_535->g_3 p_535->g_293.f0.f0 p_535->g_388
 * writes: p_535->g_293.f0.f0 p_535->g_178.f0 p_535->g_89
 */
int32_t * func_46(int32_t * p_47, int64_t  p_48, int32_t * p_49, struct S0  p_50, struct S0  p_51, struct S7 * p_535)
{ /* block id: 139 */
    int64_t *l_376 = (void*)0;
    int64_t **l_375 = &l_376;
    uint64_t *l_379 = (void*)0;
    uint64_t *l_380 = &p_535->g_293.f0.f0;
    int16_t *l_383[10][10] = {{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146},{&p_535->g_178[0].f0,(void*)0,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146,&p_535->g_146}};
    uint32_t *l_384 = (void*)0;
    uint32_t *l_385 = (void*)0;
    uint32_t *l_386 = (void*)0;
    int32_t l_387 = 0x2672BF1DL;
    int i, j;
    (*p_535->g_388) = ((*p_535->g_88) > (l_387 &= (safe_div_func_int16_t_s_s((0x0E05L < ((&p_48 != ((*l_375) = &p_535->g_189[3][0])) >= p_51.f0)), (safe_lshift_func_int16_t_s_s((p_535->g_178[0].f0 = (p_535->g_3.s6 | ((*l_380)++))), 4))))));
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_371 p_535->g_280
 * writes: p_535->g_312
 */
int8_t  func_53(int32_t  p_54, int8_t  p_55, int32_t * p_56, int8_t * p_57, int32_t * p_58, struct S7 * p_535)
{ /* block id: 96 */
    int32_t *l_315 = &p_535->g_68;
    int32_t *l_316[7][5][3] = {{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}},{{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68},{&p_535->g_68,&p_535->g_68,&p_535->g_68}}};
    uint16_t l_317 = 0xF301L;
    struct S0 *l_370 = (void*)0;
    int i, j, k;
    l_317++;
    if ((atomic_inc(&p_535->l_atomic_input[4]) == 6))
    { /* block id: 99 */
        int32_t l_320 = 0x0BBFA375L;
        VECTOR(int16_t, 8) l_357 = (VECTOR(int16_t, 8))(0x677AL, (VECTOR(int16_t, 4))(0x677AL, (VECTOR(int16_t, 2))(0x677AL, 0x4DEAL), 0x4DEAL), 0x4DEAL, 0x677AL, 0x4DEAL);
        VECTOR(uint32_t, 16) l_358 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA730BA15L), 0xA730BA15L), 0xA730BA15L, 4294967295UL, 0xA730BA15L, (VECTOR(uint32_t, 2))(4294967295UL, 0xA730BA15L), (VECTOR(uint32_t, 2))(4294967295UL, 0xA730BA15L), 4294967295UL, 0xA730BA15L, 4294967295UL, 0xA730BA15L);
        VECTOR(uint16_t, 8) l_359 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
        VECTOR(uint16_t, 16) l_360 = (VECTOR(uint16_t, 16))(0x433BL, (VECTOR(uint16_t, 4))(0x433BL, (VECTOR(uint16_t, 2))(0x433BL, 0UL), 0UL), 0UL, 0x433BL, 0UL, (VECTOR(uint16_t, 2))(0x433BL, 0UL), (VECTOR(uint16_t, 2))(0x433BL, 0UL), 0x433BL, 0UL, 0x433BL, 0UL);
        VECTOR(uint16_t, 2) l_361 = (VECTOR(uint16_t, 2))(65527UL, 65529UL);
        VECTOR(uint32_t, 4) l_362 = (VECTOR(uint32_t, 4))(0x413BBF50L, (VECTOR(uint32_t, 2))(0x413BBF50L, 0x12032ACCL), 0x12032ACCL);
        uint8_t l_363 = 0x70L;
        uint16_t l_364 = 1UL;
        int32_t *l_367 = &l_320;
        int32_t *l_368 = &l_320;
        uint16_t l_369 = 0UL;
        int i;
        for (l_320 = 22; (l_320 > 22); ++l_320)
        { /* block id: 102 */
            int32_t l_323 = 1L;
            int8_t l_349 = 0x58L;
            uint32_t l_350 = 3UL;
            uint8_t l_351 = 0x70L;
            int32_t l_352 = 0x02360D57L;
            int32_t l_353 = 0x6F8A137DL;
            for (l_323 = 4; (l_323 <= (-23)); --l_323)
            { /* block id: 105 */
                int32_t l_326 = 0x42D86919L;
                uint8_t l_338 = 0UL;
                uint32_t l_339 = 0xB1783EBFL;
                int16_t l_340 = 1L;
                uint64_t l_341 = 0xDBE6752B76D165C0L;
                struct S0 l_342 = {0x88BCF91D977C2E0CL};
                struct S0 l_343 = {3UL};
                union U5 l_345 = {-9L};/* VOLATILE GLOBAL l_345 */
                union U5 *l_344 = &l_345;
                union U5 *l_346 = (void*)0;
                union U5 *l_347 = (void*)0;
                int32_t *l_348 = &l_326;
                for (l_326 = (-11); (l_326 <= 25); l_326 = safe_add_func_int8_t_s_s(l_326, 1))
                { /* block id: 108 */
                    uint32_t l_329 = 0x2B1983A9L;
                    int32_t l_333 = 0x3E6FDA1AL;
                    int32_t *l_332[8][9][3] = {{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333}}};
                    int32_t *l_334 = &l_333;
                    int32_t *l_335 = &l_333;
                    int32_t l_336 = 0x4AAA3BC4L;
                    uint32_t l_337 = 4294967292UL;
                    int i, j, k;
                    --l_329;
                    l_335 = (l_334 = l_332[5][8][2]);
                    l_337 &= l_336;
                }
                l_343 = ((l_338 , (l_339 , l_340)) , ((l_341 = GROUP_DIVERGE(2, 1)) , (GROUP_DIVERGE(1, 1) , l_342)));
                l_347 = (l_346 = l_344);
                l_348 = (void*)0;
            }
            l_350 = (l_349 , 1L);
            l_353 ^= (l_352 = l_351);
            for (l_351 = (-28); (l_351 > 1); l_351 = safe_add_func_uint32_t_u_u(l_351, 5))
            { /* block id: 125 */
                uint32_t l_356 = 0UL;
                l_323 = l_356;
            }
        }
        l_367 = (l_368 = ((((VECTOR(int16_t, 16))(l_357.s4226655530324352)).s8 , ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x348B1C6DL)).xxxx))))), ((VECTOR(uint32_t, 2))(0xCA30BF9FL, 4294967286UL)), ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_358.s12)).yxyxyxxx)).s41, ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(l_359.s7505125261530237)), ((VECTOR(uint16_t, 16))(l_360.sbc37c7c50a76803d))))).hi, ((VECTOR(uint16_t, 4))(l_361.yxxy)).zwyxxyyx))).s60))), 0x2B7D5982L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_362.xx)), GROUP_DIVERGE(1, 1), 0x04197C47L, 0xC568DA99L, 4294967292UL, 0x9D0D6631L, 4UL)).s7, 0x537BFE66L, l_363, (++l_364), 4294967286UL, 0UL)).s7, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967287UL, 0xA0A9F654L)), 0x34070260L, 0xF5EEDC58L)), 0xFB35F5CAL, 0x375016C9L, 4294967295UL)).s71)), ((VECTOR(uint32_t, 2))(4294967295UL, 4294967292UL))))).xyyyxyxy)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 2))(0x6C0917CFL, 0x14262664L))))))), 0x1454F374L, 0x7E1C04C9L))))).x) , l_367));
        l_369 |= 0L;
        unsigned int result = 0;
        result += l_320;
        result += l_357.s7;
        result += l_357.s6;
        result += l_357.s5;
        result += l_357.s4;
        result += l_357.s3;
        result += l_357.s2;
        result += l_357.s1;
        result += l_357.s0;
        result += l_358.sf;
        result += l_358.se;
        result += l_358.sd;
        result += l_358.sc;
        result += l_358.sb;
        result += l_358.sa;
        result += l_358.s9;
        result += l_358.s8;
        result += l_358.s7;
        result += l_358.s6;
        result += l_358.s5;
        result += l_358.s4;
        result += l_358.s3;
        result += l_358.s2;
        result += l_358.s1;
        result += l_358.s0;
        result += l_359.s7;
        result += l_359.s6;
        result += l_359.s5;
        result += l_359.s4;
        result += l_359.s3;
        result += l_359.s2;
        result += l_359.s1;
        result += l_359.s0;
        result += l_360.sf;
        result += l_360.se;
        result += l_360.sd;
        result += l_360.sc;
        result += l_360.sb;
        result += l_360.sa;
        result += l_360.s9;
        result += l_360.s8;
        result += l_360.s7;
        result += l_360.s6;
        result += l_360.s5;
        result += l_360.s4;
        result += l_360.s3;
        result += l_360.s2;
        result += l_360.s1;
        result += l_360.s0;
        result += l_361.y;
        result += l_361.x;
        result += l_362.w;
        result += l_362.z;
        result += l_362.y;
        result += l_362.x;
        result += l_363;
        result += l_364;
        result += l_369;
        atomic_add(&p_535->l_special_values[4], result);
    }
    else
    { /* block id: 133 */
        (1 + 1);
    }
    (*p_535->g_371) = l_370;
    return p_535->g_280[2][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_535->g_65.f0 p_535->g_72 p_535->g_66 p_535->g_3 p_535->g_85 p_535->g_68 p_535->g_88 p_535->g_89 p_535->g_29 p_535->g_257 p_535->g_267 p_535->g_270 p_535->g_144 p_535->g_279 p_535->g_123 p_535->g_223.f0 p_535->g_196 p_535->g_223 p_535->g_283 p_535->g_284 p_535->g_143 p_535->g_293 p_535->g_199.f0 p_535->g_158 p_535->g_311 p_535->g_312 p_535->g_178.f0
 * writes: p_535->g_68 p_535->g_66 p_535->g_85 p_535->g_89 p_535->g_29 p_535->g_257.f2
 */
int32_t * func_59(int32_t * p_60, uint8_t  p_61, uint16_t  p_62, int64_t  p_63, int32_t * p_64, struct S7 * p_535)
{ /* block id: 7 */
    int32_t *l_67 = &p_535->g_68;
    VECTOR(int16_t, 4) l_71 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L);
    int32_t **l_74 = &p_535->g_66;
    struct S0 l_75[7] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    int32_t l_78[1];
    int8_t *l_101 = (void*)0;
    VECTOR(int32_t, 16) l_109 = (VECTOR(int32_t, 16))(0x282FB5A3L, (VECTOR(int32_t, 4))(0x282FB5A3L, (VECTOR(int32_t, 2))(0x282FB5A3L, 0x1FB396D2L), 0x1FB396D2L), 0x1FB396D2L, 0x282FB5A3L, 0x1FB396D2L, (VECTOR(int32_t, 2))(0x282FB5A3L, 0x1FB396D2L), (VECTOR(int32_t, 2))(0x282FB5A3L, 0x1FB396D2L), 0x282FB5A3L, 0x1FB396D2L, 0x282FB5A3L, 0x1FB396D2L);
    VECTOR(int32_t, 4) l_122 = (VECTOR(int32_t, 4))(0x08E47B01L, (VECTOR(int32_t, 2))(0x08E47B01L, 1L), 1L);
    VECTOR(int32_t, 2) l_140 = (VECTOR(int32_t, 2))((-1L), 0x2310836FL);
    uint8_t l_174 = 0x5EL;
    union U5 *l_177[6] = {&p_535->g_178[0],&p_535->g_178[3],&p_535->g_178[0],&p_535->g_178[0],&p_535->g_178[3],&p_535->g_178[0]};
    int32_t l_182 = 0x5454A17CL;
    VECTOR(int32_t, 16) l_225 = (VECTOR(int32_t, 16))(0x1814A40CL, (VECTOR(int32_t, 4))(0x1814A40CL, (VECTOR(int32_t, 2))(0x1814A40CL, 0x47F6654DL), 0x47F6654DL), 0x47F6654DL, 0x1814A40CL, 0x47F6654DL, (VECTOR(int32_t, 2))(0x1814A40CL, 0x47F6654DL), (VECTOR(int32_t, 2))(0x1814A40CL, 0x47F6654DL), 0x1814A40CL, 0x47F6654DL, 0x1814A40CL, 0x47F6654DL);
    int32_t *l_304 = (void*)0;
    uint8_t l_306 = 248UL;
    uint8_t l_307 = 8UL;
    uint64_t **l_308[4];
    struct S0 *l_314 = &p_535->g_178[0].f2;
    int i;
    for (i = 0; i < 1; i++)
        l_78[i] = 7L;
    for (i = 0; i < 4; i++)
        l_308[i] = &p_535->g_279[2][4][6];
    if (((((*l_67) = p_535->g_65[3][8][1].f0) > ((safe_rshift_func_int8_t_s_s(((((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_71.ywzy)), ((VECTOR(int16_t, 4))(p_535->g_72.zyzy))))).z == (safe_unary_minus_func_uint16_t_u((((*l_74) = p_535->g_66) == (l_75[2] , (void*)0))))) , (&p_64 != ((safe_mul_func_int16_t_s_s(p_535->g_3.s2, (0x19F8D79D57AA8C2CL & 0x7D8A796D56EF34DDL))) , &p_64))), 2)) != p_61)) <= l_78[0]))
    { /* block id: 10 */
        return &p_535->g_68;
    }
    else
    { /* block id: 12 */
        uint8_t *l_83 = (void*)0;
        uint8_t *l_84 = &p_535->g_85;
        int32_t l_94[2];
        VECTOR(int16_t, 2) l_102 = (VECTOR(int16_t, 2))(0x452AL, 7L);
        uint8_t l_110 = 0x2DL;
        uint32_t l_119 = 0x22890EE7L;
        VECTOR(int8_t, 4) l_244 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 1L), 1L);
        int32_t l_282 = 0x2B84FBE8L;
        int i;
        for (i = 0; i < 2; i++)
            l_94[i] = 0L;
        (*p_535->g_88) &= (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((--(*l_84)), (*l_67))), 5));
        if (p_63)
        { /* block id: 15 */
            VECTOR(uint8_t, 16) l_97 = (VECTOR(uint8_t, 16))(0x50L, (VECTOR(uint8_t, 4))(0x50L, (VECTOR(uint8_t, 2))(0x50L, 7UL), 7UL), 7UL, 0x50L, 7UL, (VECTOR(uint8_t, 2))(0x50L, 7UL), (VECTOR(uint8_t, 2))(0x50L, 7UL), 0x50L, 7UL, 0x50L, 7UL);
            int8_t *l_100 = &p_535->g_29;
            int32_t l_111 = 9L;
            int32_t *l_127 = (void*)0;
            int32_t l_139 = 0x0F1FB96FL;
            int32_t l_187 = (-9L);
            int i;
            l_111 ^= ((+((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(0UL, 1UL)).yxxyxxyxyyyyxyxx, (uint64_t)((2UL || (safe_mul_func_int16_t_s_s(8L, (safe_mod_func_uint32_t_u_u(l_94[0], (safe_mod_func_int8_t_s_s((p_60 != (void*)0), ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(l_97.sef60)).xyxywyxwzzwzwwww, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0UL, 0xB4L, 0x89L, 0xC8L)), 0x1EL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))((((((*p_535->g_88) &= (((safe_sub_func_int64_t_s_s(((((((l_100 != (l_101 = &p_535->g_29)) >= p_61) , ((((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(l_102.yx)), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_102.y, 15)), p_61)), l_102.y)) != (-1L)), (-9L), 0x6B61L, ((VECTOR(int16_t, 4))(9L)), (-1L))))).even, (int16_t)l_109.s1))).hi))).lo , (*l_67)) || 0x0FF1DE66CF567C8CL)) || 18446744073709551614UL) >= p_535->g_85) || p_63), p_62)) | p_535->g_29) , l_110)) && (*p_535->g_88)) , l_110) == (*l_67)), 0xFBL, 0UL, 0x8EL)), ((VECTOR(uint8_t, 4))(1UL))))).hi, ((VECTOR(uint8_t, 2))(0xFCL)), ((VECTOR(uint8_t, 2))(0xBAL))))).xxxx)), p_63, ((VECTOR(uint8_t, 4))(0x8AL)), 1UL, 0x4FL)), ((VECTOR(uint8_t, 16))(255UL))))).odd, ((VECTOR(uint8_t, 8))(251UL))))).s4))))))) & 0L)))).s4) != l_110);
            (*l_74) = &l_111;
            for (p_535->g_29 = 0; (p_535->g_29 <= 18); p_535->g_29 = safe_add_func_int8_t_s_s(p_535->g_29, 4))
            { /* block id: 22 */
                int8_t l_121[6];
                int32_t l_138 = 1L;
                int16_t l_176 = 0x613FL;
                int32_t l_188 = 5L;
                int64_t *l_210[3][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint64_t *l_211 = &p_535->g_212;
                int32_t *l_213 = &l_139;
                VECTOR(int8_t, 8) l_245 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
                uint64_t l_256[7][9][4] = {{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}},{{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL},{8UL,0x965F1F261F9E83C6L,18446744073709551611UL,18446744073709551611UL}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_121[i] = 9L;
                (1 + 1);
            }
        }
        else
        { /* block id: 74 */
            VECTOR(uint16_t, 8) l_264 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 7UL), 7UL), 7UL, 65532UL, 7UL);
            uint32_t *l_271 = (void*)0;
            uint32_t **l_276 = &l_271;
            uint32_t *l_278 = (void*)0;
            uint32_t **l_277 = &l_278;
            int16_t *l_281[6][5][2] = {{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}},{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}},{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}},{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}},{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}},{{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143},{&p_535->g_143,&p_535->g_143}}};
            int i, j, k;
            l_94[0] = (p_535->g_257 , ((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_94[0], ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(l_264.s4115432367537512)), ((VECTOR(uint16_t, 2))(65527UL, 0xB69EL)).xxyxyxxxyxyxxyxy))).even, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65532UL, 65535UL)))).xxyyyyxy))).s4627402354367652)).odd, (uint16_t)(safe_sub_func_int32_t_s_s((((FAKE_DIVERGE(p_535->local_1_offset, get_local_id(1), 10) , (p_535->g_267[3] , &p_535->g_212)) == &p_535->g_212) & ((safe_lshift_func_int16_t_s_s((l_282 &= (~(((((*l_67) = ((VECTOR(uint32_t, 16))(p_535->g_270.zyxwwzwwzwzwwzzx)).sf) , (p_535->g_89 = (p_535->g_144[8] != (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((*l_277) = ((*l_276) = l_271)) == (void*)0), ((p_62 > p_535->g_270.w) , 0x34L))) , p_63) < 1L), 5))))) , p_535->g_279[3][2][3]) != (void*)0))), l_264.s5)) , p_63)), p_535->g_123))))).s46)).yxyyyxyy)).s2)), p_62)), 2)) & p_62) , p_535->g_223.f0) & p_535->g_196.y));
        }
        (*p_535->g_283) = p_535->g_223;
        (*l_67) = (p_535->g_284 , (((+p_62) & ((((*p_535->g_88) < p_62) <= (p_63 == (safe_add_func_uint64_t_u_u((p_60 != &l_94[0]), (&l_110 != &p_61))))) >= p_535->g_143)) <= (*l_67)));
    }
    (*l_67) = 0x52776785L;
    if ((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), 18446744073709551609UL)))
    { /* block id: 86 */
        int32_t *l_305[10][7][3] = {{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}},{{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89},{&l_182,(void*)0,&p_535->g_89}}};
        uint64_t ***l_309[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_309[i] = &l_308[3];
        l_307 &= (((safe_sub_func_int64_t_s_s((p_535->g_293 , (safe_mul_func_uint8_t_u_u(p_535->g_199.f0, (safe_add_func_int8_t_s_s(p_535->g_158.s6, ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((255UL != (l_304 == l_305[1][4][1])), p_63)), 4)), p_61)) ^ (FAKE_DIVERGE(p_535->group_2_offset, get_group_id(2), 10) , 0xA0A95EC7957A547AL))))))), p_61)) == p_61) > l_306);
        l_308[1] = l_308[3];
    }
    else
    { /* block id: 89 */
        uint64_t *l_310 = (void*)0;
        struct S0 **l_313[1];
        int i;
        for (i = 0; i < 1; i++)
            l_313[i] = &p_535->g_312;
        (*p_535->g_88) = ((((l_310 = &p_535->g_280[2][0]) != &p_535->g_280[1][6]) <= ((p_535->g_311[3] , (void*)0) == (l_314 = p_535->g_312))) == p_535->g_178[0].f0);
    }
    (*l_67) &= (*p_535->g_88);
    return &p_535->g_89;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_comm_values[i] = 1;
    struct S7 c_536;
    struct S7* p_535 = &c_536;
    struct S7 c_537 = {
        (VECTOR(int32_t, 8))(0x2E974A52L, (VECTOR(int32_t, 4))(0x2E974A52L, (VECTOR(int32_t, 2))(0x2E974A52L, 1L), 1L), 1L, 0x2E974A52L, 1L), // p_535->g_3
        0x50L, // p_535->g_29
        {{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}},{{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}},{{-2L},{0L}}}}, // p_535->g_65
        (void*)0, // p_535->g_66
        0x3D604849L, // p_535->g_68
        (VECTOR(int16_t, 4))(0x29A7L, (VECTOR(int16_t, 2))(0x29A7L, (-1L)), (-1L)), // p_535->g_72
        1UL, // p_535->g_85
        0x6BF4F606L, // p_535->g_89
        &p_535->g_89, // p_535->g_88
        1UL, // p_535->g_123
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3466F09CL), 0x3466F09CL), // p_535->g_124
        0x7BL, // p_535->g_141
        (-1L), // p_535->g_142
        9L, // p_535->g_143
        {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}, // p_535->g_144
        (VECTOR(int32_t, 8))(0x512BE0C6L, (VECTOR(int32_t, 4))(0x512BE0C6L, (VECTOR(int32_t, 2))(0x512BE0C6L, 0x2B1052B5L), 0x2B1052B5L), 0x2B1052B5L, 0x512BE0C6L, 0x2B1052B5L), // p_535->g_145
        8L, // p_535->g_146
        0x45E8C6F625387034L, // p_535->g_147
        4294967295UL, // p_535->g_148
        (VECTOR(uint8_t, 16))(0xFFL, (VECTOR(uint8_t, 4))(0xFFL, (VECTOR(uint8_t, 2))(0xFFL, 0x32L), 0x32L), 0x32L, 0xFFL, 0x32L, (VECTOR(uint8_t, 2))(0xFFL, 0x32L), (VECTOR(uint8_t, 2))(0xFFL, 0x32L), 0xFFL, 0x32L, 0xFFL, 0x32L), // p_535->g_158
        {0x5240C9C9L}, // p_535->g_173
        {1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_535->g_175
        {{0x7DEFL},{0x7DEFL},{0x7DEFL},{0x7DEFL},{0x7DEFL}}, // p_535->g_178
        {{0x0EE1BF02F135AB7BL},{0x0EE1BF02F135AB7BL},{0x0EE1BF02F135AB7BL},{0x0EE1BF02F135AB7BL}}, // p_535->g_189
        0x5235115D690B895AL, // p_535->g_190
        {0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL}, // p_535->g_191
        (VECTOR(int8_t, 2))(0x3AL, 0x3FL), // p_535->g_196
        {0x677FBA8FL}, // p_535->g_199
        2UL, // p_535->g_212
        (VECTOR(int64_t, 8))(0x7E50595EDE522736L, (VECTOR(int64_t, 4))(0x7E50595EDE522736L, (VECTOR(int64_t, 2))(0x7E50595EDE522736L, 5L), 5L), 5L, 0x7E50595EDE522736L, 5L), // p_535->g_222
        {0xA8CFC339CB1F11E9L}, // p_535->g_223
        (VECTOR(int32_t, 2))((-1L), 0x37AF58A3L), // p_535->g_226
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 3L), 3L), 3L, (-6L), 3L), // p_535->g_239
        {0x14567FAAL}, // p_535->g_257
        {{0xFBAB2FB22B9342A3L},{0xFBAB2FB22B9342A3L},{0xFBAB2FB22B9342A3L},{0xFBAB2FB22B9342A3L}}, // p_535->g_267
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 6UL), 6UL), // p_535->g_270
        {{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}}, // p_535->g_280
        {{{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]}},{{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]}},{{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]}},{{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]},{&p_535->g_280[0][3],&p_535->g_280[0][0],&p_535->g_280[0][0],(void*)0,&p_535->g_280[1][5],(void*)0,&p_535->g_280[0][3]}}}, // p_535->g_279
        &p_535->g_257.f2, // p_535->g_283
        {1L}, // p_535->g_284
        {{0xDFD71C4657902890L}}, // p_535->g_293
        {{0x4CF2L},{0x5148L},{0x4CF2L},{0x4CF2L},{0x5148L},{0x4CF2L},{0x4CF2L}}, // p_535->g_311
        &p_535->g_293.f0, // p_535->g_312
        &p_535->g_312, // p_535->g_371
        &p_535->g_89, // p_535->g_388
        0UL, // p_535->g_405
        {4L,9L,4L,4L,9L,4L,4L}, // p_535->g_407
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65532UL), 65532UL), 65532UL, 1UL, 65532UL, (VECTOR(uint16_t, 2))(1UL, 65532UL), (VECTOR(uint16_t, 2))(1UL, 65532UL), 1UL, 65532UL, 1UL, 65532UL), // p_535->g_410
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x50DFL), 0x50DFL), // p_535->g_411
        (void*)0, // p_535->g_423
        &p_535->g_423, // p_535->g_422
        &p_535->g_66, // p_535->g_436
        0x4B854C065146D28CL, // p_535->g_451
        &p_535->g_451, // p_535->g_450
        {&p_535->g_450}, // p_535->g_449
        {0L}, // p_535->g_487
        0xD489B8CFL, // p_535->g_488
        0x53653B32L, // p_535->g_497
        {0xF758A89E2AA808AEL}, // p_535->g_500
        (VECTOR(uint32_t, 16))(0x4A5ABF21L, (VECTOR(uint32_t, 4))(0x4A5ABF21L, (VECTOR(uint32_t, 2))(0x4A5ABF21L, 1UL), 1UL), 1UL, 0x4A5ABF21L, 1UL, (VECTOR(uint32_t, 2))(0x4A5ABF21L, 1UL), (VECTOR(uint32_t, 2))(0x4A5ABF21L, 1UL), 0x4A5ABF21L, 1UL, 0x4A5ABF21L, 1UL), // p_535->g_513
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_535->g_529
        &p_535->g_68, // p_535->g_530
        &p_535->g_66, // p_535->g_531
        0, // p_535->v_collective
        sequence_input[get_global_id(0)], // p_535->global_0_offset
        sequence_input[get_global_id(1)], // p_535->global_1_offset
        sequence_input[get_global_id(2)], // p_535->global_2_offset
        sequence_input[get_local_id(0)], // p_535->local_0_offset
        sequence_input[get_local_id(1)], // p_535->local_1_offset
        sequence_input[get_local_id(2)], // p_535->local_2_offset
        sequence_input[get_group_id(0)], // p_535->group_0_offset
        sequence_input[get_group_id(1)], // p_535->group_1_offset
        sequence_input[get_group_id(2)], // p_535->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[0][get_linear_local_id()])), // p_535->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_536 = c_537;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_535);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_535->g_3.s0, "p_535->g_3.s0", print_hash_value);
    transparent_crc(p_535->g_3.s1, "p_535->g_3.s1", print_hash_value);
    transparent_crc(p_535->g_3.s2, "p_535->g_3.s2", print_hash_value);
    transparent_crc(p_535->g_3.s3, "p_535->g_3.s3", print_hash_value);
    transparent_crc(p_535->g_3.s4, "p_535->g_3.s4", print_hash_value);
    transparent_crc(p_535->g_3.s5, "p_535->g_3.s5", print_hash_value);
    transparent_crc(p_535->g_3.s6, "p_535->g_3.s6", print_hash_value);
    transparent_crc(p_535->g_3.s7, "p_535->g_3.s7", print_hash_value);
    transparent_crc(p_535->g_29, "p_535->g_29", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_535->g_65[i][j][k].f0, "p_535->g_65[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_535->g_68, "p_535->g_68", print_hash_value);
    transparent_crc(p_535->g_72.x, "p_535->g_72.x", print_hash_value);
    transparent_crc(p_535->g_72.y, "p_535->g_72.y", print_hash_value);
    transparent_crc(p_535->g_72.z, "p_535->g_72.z", print_hash_value);
    transparent_crc(p_535->g_72.w, "p_535->g_72.w", print_hash_value);
    transparent_crc(p_535->g_85, "p_535->g_85", print_hash_value);
    transparent_crc(p_535->g_89, "p_535->g_89", print_hash_value);
    transparent_crc(p_535->g_123, "p_535->g_123", print_hash_value);
    transparent_crc(p_535->g_124.x, "p_535->g_124.x", print_hash_value);
    transparent_crc(p_535->g_124.y, "p_535->g_124.y", print_hash_value);
    transparent_crc(p_535->g_124.z, "p_535->g_124.z", print_hash_value);
    transparent_crc(p_535->g_124.w, "p_535->g_124.w", print_hash_value);
    transparent_crc(p_535->g_141, "p_535->g_141", print_hash_value);
    transparent_crc(p_535->g_142, "p_535->g_142", print_hash_value);
    transparent_crc(p_535->g_143, "p_535->g_143", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_535->g_144[i], "p_535->g_144[i]", print_hash_value);

    }
    transparent_crc(p_535->g_145.s0, "p_535->g_145.s0", print_hash_value);
    transparent_crc(p_535->g_145.s1, "p_535->g_145.s1", print_hash_value);
    transparent_crc(p_535->g_145.s2, "p_535->g_145.s2", print_hash_value);
    transparent_crc(p_535->g_145.s3, "p_535->g_145.s3", print_hash_value);
    transparent_crc(p_535->g_145.s4, "p_535->g_145.s4", print_hash_value);
    transparent_crc(p_535->g_145.s5, "p_535->g_145.s5", print_hash_value);
    transparent_crc(p_535->g_145.s6, "p_535->g_145.s6", print_hash_value);
    transparent_crc(p_535->g_145.s7, "p_535->g_145.s7", print_hash_value);
    transparent_crc(p_535->g_146, "p_535->g_146", print_hash_value);
    transparent_crc(p_535->g_147, "p_535->g_147", print_hash_value);
    transparent_crc(p_535->g_148, "p_535->g_148", print_hash_value);
    transparent_crc(p_535->g_158.s0, "p_535->g_158.s0", print_hash_value);
    transparent_crc(p_535->g_158.s1, "p_535->g_158.s1", print_hash_value);
    transparent_crc(p_535->g_158.s2, "p_535->g_158.s2", print_hash_value);
    transparent_crc(p_535->g_158.s3, "p_535->g_158.s3", print_hash_value);
    transparent_crc(p_535->g_158.s4, "p_535->g_158.s4", print_hash_value);
    transparent_crc(p_535->g_158.s5, "p_535->g_158.s5", print_hash_value);
    transparent_crc(p_535->g_158.s6, "p_535->g_158.s6", print_hash_value);
    transparent_crc(p_535->g_158.s7, "p_535->g_158.s7", print_hash_value);
    transparent_crc(p_535->g_158.s8, "p_535->g_158.s8", print_hash_value);
    transparent_crc(p_535->g_158.s9, "p_535->g_158.s9", print_hash_value);
    transparent_crc(p_535->g_158.sa, "p_535->g_158.sa", print_hash_value);
    transparent_crc(p_535->g_158.sb, "p_535->g_158.sb", print_hash_value);
    transparent_crc(p_535->g_158.sc, "p_535->g_158.sc", print_hash_value);
    transparent_crc(p_535->g_158.sd, "p_535->g_158.sd", print_hash_value);
    transparent_crc(p_535->g_158.se, "p_535->g_158.se", print_hash_value);
    transparent_crc(p_535->g_158.sf, "p_535->g_158.sf", print_hash_value);
    transparent_crc(p_535->g_173.f0, "p_535->g_173.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_535->g_175[i], "p_535->g_175[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_535->g_189[i][j], "p_535->g_189[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_535->g_190, "p_535->g_190", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_535->g_191[i], "p_535->g_191[i]", print_hash_value);

    }
    transparent_crc(p_535->g_196.x, "p_535->g_196.x", print_hash_value);
    transparent_crc(p_535->g_196.y, "p_535->g_196.y", print_hash_value);
    transparent_crc(p_535->g_199.f0, "p_535->g_199.f0", print_hash_value);
    transparent_crc(p_535->g_212, "p_535->g_212", print_hash_value);
    transparent_crc(p_535->g_222.s0, "p_535->g_222.s0", print_hash_value);
    transparent_crc(p_535->g_222.s1, "p_535->g_222.s1", print_hash_value);
    transparent_crc(p_535->g_222.s2, "p_535->g_222.s2", print_hash_value);
    transparent_crc(p_535->g_222.s3, "p_535->g_222.s3", print_hash_value);
    transparent_crc(p_535->g_222.s4, "p_535->g_222.s4", print_hash_value);
    transparent_crc(p_535->g_222.s5, "p_535->g_222.s5", print_hash_value);
    transparent_crc(p_535->g_222.s6, "p_535->g_222.s6", print_hash_value);
    transparent_crc(p_535->g_222.s7, "p_535->g_222.s7", print_hash_value);
    transparent_crc(p_535->g_223.f0, "p_535->g_223.f0", print_hash_value);
    transparent_crc(p_535->g_226.x, "p_535->g_226.x", print_hash_value);
    transparent_crc(p_535->g_226.y, "p_535->g_226.y", print_hash_value);
    transparent_crc(p_535->g_239.s0, "p_535->g_239.s0", print_hash_value);
    transparent_crc(p_535->g_239.s1, "p_535->g_239.s1", print_hash_value);
    transparent_crc(p_535->g_239.s2, "p_535->g_239.s2", print_hash_value);
    transparent_crc(p_535->g_239.s3, "p_535->g_239.s3", print_hash_value);
    transparent_crc(p_535->g_239.s4, "p_535->g_239.s4", print_hash_value);
    transparent_crc(p_535->g_239.s5, "p_535->g_239.s5", print_hash_value);
    transparent_crc(p_535->g_239.s6, "p_535->g_239.s6", print_hash_value);
    transparent_crc(p_535->g_239.s7, "p_535->g_239.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_535->g_267[i].f0, "p_535->g_267[i].f0", print_hash_value);

    }
    transparent_crc(p_535->g_270.x, "p_535->g_270.x", print_hash_value);
    transparent_crc(p_535->g_270.y, "p_535->g_270.y", print_hash_value);
    transparent_crc(p_535->g_270.z, "p_535->g_270.z", print_hash_value);
    transparent_crc(p_535->g_270.w, "p_535->g_270.w", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_535->g_280[i][j], "p_535->g_280[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_535->g_284.f0, "p_535->g_284.f0", print_hash_value);
    transparent_crc(p_535->g_293.f0.f0, "p_535->g_293.f0.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_535->g_311[i].f0, "p_535->g_311[i].f0", print_hash_value);

    }
    transparent_crc(p_535->g_405, "p_535->g_405", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_535->g_407[i], "p_535->g_407[i]", print_hash_value);

    }
    transparent_crc(p_535->g_410.s0, "p_535->g_410.s0", print_hash_value);
    transparent_crc(p_535->g_410.s1, "p_535->g_410.s1", print_hash_value);
    transparent_crc(p_535->g_410.s2, "p_535->g_410.s2", print_hash_value);
    transparent_crc(p_535->g_410.s3, "p_535->g_410.s3", print_hash_value);
    transparent_crc(p_535->g_410.s4, "p_535->g_410.s4", print_hash_value);
    transparent_crc(p_535->g_410.s5, "p_535->g_410.s5", print_hash_value);
    transparent_crc(p_535->g_410.s6, "p_535->g_410.s6", print_hash_value);
    transparent_crc(p_535->g_410.s7, "p_535->g_410.s7", print_hash_value);
    transparent_crc(p_535->g_410.s8, "p_535->g_410.s8", print_hash_value);
    transparent_crc(p_535->g_410.s9, "p_535->g_410.s9", print_hash_value);
    transparent_crc(p_535->g_410.sa, "p_535->g_410.sa", print_hash_value);
    transparent_crc(p_535->g_410.sb, "p_535->g_410.sb", print_hash_value);
    transparent_crc(p_535->g_410.sc, "p_535->g_410.sc", print_hash_value);
    transparent_crc(p_535->g_410.sd, "p_535->g_410.sd", print_hash_value);
    transparent_crc(p_535->g_410.se, "p_535->g_410.se", print_hash_value);
    transparent_crc(p_535->g_410.sf, "p_535->g_410.sf", print_hash_value);
    transparent_crc(p_535->g_411.x, "p_535->g_411.x", print_hash_value);
    transparent_crc(p_535->g_411.y, "p_535->g_411.y", print_hash_value);
    transparent_crc(p_535->g_411.z, "p_535->g_411.z", print_hash_value);
    transparent_crc(p_535->g_411.w, "p_535->g_411.w", print_hash_value);
    transparent_crc(p_535->g_451, "p_535->g_451", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_535->g_487[i], "p_535->g_487[i]", print_hash_value);

    }
    transparent_crc(p_535->g_488, "p_535->g_488", print_hash_value);
    transparent_crc(p_535->g_497, "p_535->g_497", print_hash_value);
    transparent_crc(p_535->g_500.f0, "p_535->g_500.f0", print_hash_value);
    transparent_crc(p_535->g_513.s0, "p_535->g_513.s0", print_hash_value);
    transparent_crc(p_535->g_513.s1, "p_535->g_513.s1", print_hash_value);
    transparent_crc(p_535->g_513.s2, "p_535->g_513.s2", print_hash_value);
    transparent_crc(p_535->g_513.s3, "p_535->g_513.s3", print_hash_value);
    transparent_crc(p_535->g_513.s4, "p_535->g_513.s4", print_hash_value);
    transparent_crc(p_535->g_513.s5, "p_535->g_513.s5", print_hash_value);
    transparent_crc(p_535->g_513.s6, "p_535->g_513.s6", print_hash_value);
    transparent_crc(p_535->g_513.s7, "p_535->g_513.s7", print_hash_value);
    transparent_crc(p_535->g_513.s8, "p_535->g_513.s8", print_hash_value);
    transparent_crc(p_535->g_513.s9, "p_535->g_513.s9", print_hash_value);
    transparent_crc(p_535->g_513.sa, "p_535->g_513.sa", print_hash_value);
    transparent_crc(p_535->g_513.sb, "p_535->g_513.sb", print_hash_value);
    transparent_crc(p_535->g_513.sc, "p_535->g_513.sc", print_hash_value);
    transparent_crc(p_535->g_513.sd, "p_535->g_513.sd", print_hash_value);
    transparent_crc(p_535->g_513.se, "p_535->g_513.se", print_hash_value);
    transparent_crc(p_535->g_513.sf, "p_535->g_513.sf", print_hash_value);
    transparent_crc(p_535->v_collective, "p_535->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 13; i++)
            transparent_crc(p_535->l_special_values[i], "p_535->l_special_values[i]", print_hash_value);
    transparent_crc(p_535->l_comm_values[get_linear_local_id()], "p_535->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_535->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()], "p_535->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
