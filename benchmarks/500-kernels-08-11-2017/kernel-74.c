// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 85,42,2 -l 1,7,2
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

__constant uint32_t permutations[10][14] = {
{9,11,5,6,2,4,13,0,3,10,7,8,1,12}, // permutation 0
{11,4,5,2,0,3,10,7,9,1,13,6,12,8}, // permutation 1
{6,3,7,0,4,9,11,1,8,5,10,13,2,12}, // permutation 2
{7,5,11,3,6,2,1,8,13,10,12,0,9,4}, // permutation 3
{5,2,0,3,1,6,4,7,8,9,12,13,10,11}, // permutation 4
{5,11,9,6,7,3,1,4,0,8,2,13,10,12}, // permutation 5
{9,7,5,2,6,10,3,0,13,12,11,4,1,8}, // permutation 6
{12,10,8,0,5,7,2,4,6,3,13,9,1,11}, // permutation 7
{1,4,2,6,5,10,11,0,3,12,7,8,9,13}, // permutation 8
{7,6,10,1,2,5,9,12,8,0,11,4,3,13} // permutation 9
};

// Seed: 424603105

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int8_t  f0;
   int64_t  f1;
   int16_t  f2;
   volatile uint64_t  f3;
   int64_t  f4;
   volatile int32_t  f5;
   int32_t  f6;
};

struct S1 {
   volatile uint16_t  f0;
   volatile uint16_t  f1;
   int32_t  f2;
   volatile uint8_t  f3;
   uint32_t  f4;
   uint64_t  f5;
};

union U2 {
   volatile uint8_t  f0;
   uint64_t  f1;
};

struct S3 {
    int32_t g_42;
    int32_t *g_41;
    int32_t *g_46[10];
    int32_t *g_48[6][7][5];
    int8_t g_81;
    volatile int8_t g_100[2];
    volatile int8_t *g_99[10][7];
    volatile int8_t **g_98;
    volatile int8_t *** volatile g_101[10];
    volatile int8_t *** volatile g_102;
    VECTOR(uint8_t, 16) g_103;
    union U2 g_107;
    int16_t g_159;
    uint8_t *g_165;
    uint8_t **g_164[3][3];
    uint8_t *** volatile g_163;
    VECTOR(uint64_t, 16) g_168;
    volatile struct S1 g_177;
    volatile VECTOR(int64_t, 8) g_180;
    uint32_t g_183;
    uint32_t *g_205;
    uint32_t **g_204[5][10][5];
    uint32_t *** volatile g_206;
    VECTOR(int32_t, 8) g_208;
    VECTOR(int32_t, 16) g_209;
    VECTOR(uint32_t, 4) g_211;
    int32_t * volatile g_260;
    VECTOR(int32_t, 8) g_269;
    union U2 *g_276;
    union U2 ** volatile g_275;
    int64_t g_297;
    int32_t **g_298;
    int32_t * volatile g_367;
    int32_t * volatile g_368;
    volatile struct S1 g_374;
    volatile struct S0 g_377;
    volatile struct S0 *g_376[10];
    union U2 g_378;
    struct S1 g_383;
    struct S1 * volatile g_384;
    VECTOR(int64_t, 4) g_390;
    int32_t *g_399[5];
    volatile VECTOR(uint64_t, 16) g_411;
    volatile uint64_t * volatile g_410;
    struct S1 g_421;
    struct S1 *g_420;
    struct S1 g_424;
    int32_t * volatile g_433;
    int32_t * volatile g_434;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S3 * p_435);
int32_t  func_2(int16_t  p_3, struct S3 * p_435);
int32_t * func_6(int32_t * p_7, struct S3 * p_435);
int32_t * func_8(int64_t  p_9, uint16_t  p_10, struct S3 * p_435);
int8_t  func_13(int8_t  p_14, int8_t  p_15, int32_t * p_16, uint8_t  p_17, struct S3 * p_435);
union U2  func_19(int32_t * p_20, struct S3 * p_435);
int32_t  func_21(int32_t * p_22, int16_t  p_23, int32_t * p_24, struct S3 * p_435);
uint32_t  func_25(int32_t  p_26, struct S3 * p_435);
uint8_t  func_29(int32_t  p_30, int64_t  p_31, int32_t  p_32, int32_t * p_33, struct S3 * p_435);
int64_t  func_36(uint32_t  p_37, int32_t * p_38, int32_t  p_39, uint32_t  p_40, struct S3 * p_435);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_435->g_comm_values p_435->l_comm_values p_435->g_41 p_435->g_269 p_435->g_42 p_435->g_298 p_435->g_46 p_435->g_208 p_435->g_177.f4 p_435->g_209 p_435->g_103 p_435->g_177 p_435->g_211 p_435->g_376 p_435->g_378 p_435->g_383 p_435->g_384 p_435->g_390 p_435->g_180 p_435->g_399 p_435->g_297 p_435->g_410 p_435->g_159 p_435->g_420 p_435->g_163 p_435->g_164 p_435->g_165 p_435->g_434 p_435->g_100
 * writes: p_435->g_41 p_435->g_46 p_435->g_48 p_435->g_208 p_435->g_81 p_435->g_42 p_435->g_374 p_435->g_376 p_435->g_383 p_435->g_297 p_435->g_420
 */
uint16_t  func_1(struct S3 * p_435)
{ /* block id: 4 */
    uint32_t l_427 = 4294967294UL;
    uint8_t *l_430[7][3][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t **l_431 = &l_430[6][1][2];
    int32_t *l_432 = (void*)0;
    int i, j, k;
    (*p_435->g_434) = (GROUP_DIVERGE(0, 1) == (((p_435->g_comm_values[p_435->tid] >= func_2((safe_lshift_func_int8_t_s_s(0x2BL, (0x32L == p_435->g_comm_values[p_435->tid]))), p_435)) , l_427) , (safe_mod_func_uint8_t_u_u((((!((**p_435->g_163) != ((*l_431) = l_430[2][0][3]))) , p_435->g_410) == (void*)0), 0x2AL))));
    return p_435->g_100[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_comm_values p_435->l_comm_values p_435->g_41 p_435->g_269 p_435->g_42 p_435->g_298 p_435->g_46 p_435->g_208 p_435->g_177.f4 p_435->g_209 p_435->g_103 p_435->g_177 p_435->g_211 p_435->g_376 p_435->g_378 p_435->g_383 p_435->g_384 p_435->g_390 p_435->g_180 p_435->g_399 p_435->g_297 p_435->g_410 p_435->g_159 p_435->g_420
 * writes: p_435->g_41 p_435->g_46 p_435->g_48 p_435->g_208 p_435->g_81 p_435->g_42 p_435->g_374 p_435->g_376 p_435->g_383 p_435->g_297 p_435->g_420
 */
int32_t  func_2(int16_t  p_3, struct S3 * p_435)
{ /* block id: 5 */
    int32_t l_426[6] = {0x1D9F3983L,(-1L),0x1D9F3983L,0x1D9F3983L,(-1L),0x1D9F3983L};
    int i;
    (*p_435->g_298) = func_6(func_8(p_435->g_comm_values[p_435->tid], (safe_sub_func_uint32_t_u_u(p_435->g_comm_values[p_435->tid], p_435->l_comm_values[(safe_mod_func_uint32_t_u_u(p_435->tid, 14))])), p_435), p_435);
    return l_426[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_297 p_435->g_410 p_435->g_159 p_435->g_420 p_435->g_41 p_435->g_42
 * writes: p_435->g_297 p_435->g_420 p_435->g_42
 */
int32_t * func_6(int32_t * p_7, struct S3 * p_435)
{ /* block id: 231 */
    uint8_t l_409 = 1UL;
    struct S1 *l_423 = &p_435->g_424;
    int32_t *l_425[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (p_435->g_297 = 0; (p_435->g_297 != (-14)); p_435->g_297 = safe_sub_func_uint32_t_u_u(p_435->g_297, 9))
    { /* block id: 234 */
        VECTOR(uint32_t, 2) l_408 = (VECTOR(uint32_t, 2))(0x117A180DL, 9UL);
        uint64_t *l_412 = (void*)0;
        uint64_t **l_413 = &l_412;
        struct S1 **l_422 = &p_435->g_420;
        int i;
        (*p_435->g_41) &= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(l_408.yxxx)).y , (248UL <= l_409)), ((((p_435->g_410 == ((*l_413) = l_412)) > ((safe_sub_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s(p_435->g_159, (0x6B542C48F59A53CDL && ((l_408.y < (safe_sub_func_int32_t_s_s((((*l_422) = p_435->g_420) != l_423), l_409))) != l_408.x)))) && l_408.x) || l_408.x) || 0x26753EB8FE348CBDL), l_408.x)) & l_409)) && l_409) != 0xA1L))), l_408.y)), FAKE_DIVERGE(p_435->local_2_offset, get_local_id(2), 10)));
    }
    return l_425[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_comm_values p_435->l_comm_values p_435->g_41 p_435->g_269 p_435->g_42 p_435->g_298 p_435->g_46 p_435->g_208 p_435->g_177.f4 p_435->g_209 p_435->g_103 p_435->g_177 p_435->g_211 p_435->g_376 p_435->g_378 p_435->g_383 p_435->g_384 p_435->g_390 p_435->g_180 p_435->g_399
 * writes: p_435->g_41 p_435->g_46 p_435->g_48 p_435->g_208 p_435->g_81 p_435->g_42 p_435->g_374 p_435->g_376 p_435->g_383
 */
int32_t * func_8(int64_t  p_9, uint16_t  p_10, struct S3 * p_435)
{ /* block id: 6 */
    int32_t l_18 = (-1L);
    int32_t l_385 = 2L;
    int32_t *l_397 = &l_385;
    int32_t *l_398 = &l_18;
    l_385 &= (func_13(p_10, l_18, (func_19(((p_435->g_comm_values[p_435->tid] >= (func_21(((*p_435->g_298) = (func_25((p_435->l_comm_values[(safe_mod_func_uint32_t_u_u(p_435->tid, 14))] == (l_18 >= p_435->l_comm_values[(safe_mod_func_uint32_t_u_u(p_435->tid, 14))])), p_435) , &l_18)), (safe_mod_func_uint64_t_u_u(((p_435->g_177.f4 > p_435->g_209.s7) < p_435->g_103.se), p_10)), &p_435->g_42, p_435) & p_435->g_211.z)) , &l_18), p_435) , (*p_435->g_298)), p_10, p_435) & 0xB0L);
    (*p_435->g_298) = (*p_435->g_298);
    (*p_435->g_41) = (l_18 == (safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_435->g_390.xyxzzzxz)).odd)).y, ((((safe_div_func_uint32_t_u_u((0x51ADL || ((*p_435->g_384) , (p_435->g_180.s3 , l_385))), (safe_lshift_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((9L < l_18), ((void*)0 != (*p_435->g_298)))), 6)))) <= l_385) <= l_18) ^ p_10))) < 0x04L), l_385)));
    l_397 = &l_385;
    return p_435->g_399[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_383 p_435->g_384 p_435->g_42
 * writes: p_435->g_383
 */
int8_t  func_13(int8_t  p_14, int8_t  p_15, int32_t * p_16, uint8_t  p_17, struct S3 * p_435)
{ /* block id: 222 */
    int32_t *l_379 = &p_435->g_42;
    uint64_t l_380 = 0xCAC50B1114D65301L;
    l_380++;
    (*p_435->g_384) = p_435->g_383;
    return (*l_379);
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_41 p_435->g_376 p_435->g_378
 * writes: p_435->g_42 p_435->g_376
 */
union U2  func_19(int32_t * p_20, struct S3 * p_435)
{ /* block id: 218 */
    uint8_t *l_375 = (void*)0;
    (*p_435->g_41) = (~(l_375 != (void*)0));
    p_435->g_376[2] = p_435->g_376[9];
    return p_435->g_378;
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_comm_values p_435->g_42 p_435->g_41 p_435->g_177
 * writes: p_435->g_81 p_435->g_42 p_435->g_374
 */
int32_t  func_21(int32_t * p_22, int16_t  p_23, int32_t * p_24, struct S3 * p_435)
{ /* block id: 202 */
    uint32_t *l_352 = &p_435->g_183;
    int32_t l_353 = 1L;
    int32_t l_354 = 0x108808EBL;
    VECTOR(int32_t, 4) l_357 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x26E0854CL), 0x26E0854CL);
    VECTOR(int32_t, 2) l_358 = (VECTOR(int32_t, 2))(0x0666125EL, 3L);
    int8_t *l_361 = &p_435->g_81;
    int8_t *l_362 = (void*)0;
    int8_t *l_363 = (void*)0;
    int8_t *l_364 = (void*)0;
    int8_t *l_365 = (void*)0;
    int32_t l_366 = 0x53B51CE8L;
    int32_t *l_369[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_370 = (-1L);
    volatile struct S1 *l_373[2];
    int i;
    for (i = 0; i < 2; i++)
        l_373[i] = &p_435->g_177;
    l_370 &= (l_357.y = ((l_353 = (p_23 < (((*p_24) = (p_23 || (!(((l_352 = l_352) != (void*)0) , (l_353 > ((((l_354 |= p_23) != (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_357.zzyyzwwxwywzxwwz)).s49, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_358.xxxxyxxyxyxyxxyy)).s6f, (int32_t)l_353)))))))).lo, ((l_366 = ((*l_361) = (p_435->g_comm_values[p_435->tid] , ((safe_div_func_uint8_t_u_u(l_357.z, (-2L))) & l_358.y)))) | 0UL)))) > 0xAB76L) < l_358.y)))))) | 1UL))) == (-6L)));
    for (p_435->g_42 = 0; (p_435->g_42 == 19); p_435->g_42++)
    { /* block id: 213 */
        return (*p_435->g_41);
    }
    p_435->g_374 = p_435->g_177;
    return (*p_24);
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_comm_values p_435->g_41 p_435->l_comm_values p_435->g_269 p_435->g_42 p_435->g_298 p_435->g_46 p_435->g_208
 * writes: p_435->g_41 p_435->g_46 p_435->g_48 p_435->g_208
 */
uint32_t  func_25(int32_t  p_26, struct S3 * p_435)
{ /* block id: 7 */
    int32_t **l_43 = &p_435->g_41;
    int32_t *l_45 = &p_435->g_42;
    int32_t **l_44[10] = {&l_45,&l_45,&l_45,&l_45,&l_45,&l_45,&l_45,&l_45,&l_45,&l_45};
    int32_t *l_47[9][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    VECTOR(uint32_t, 16) l_347 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xE2793448L), 0xE2793448L), 0xE2793448L, 1UL, 0xE2793448L, (VECTOR(uint32_t, 2))(1UL, 0xE2793448L), (VECTOR(uint32_t, 2))(1UL, 0xE2793448L), 1UL, 0xE2793448L, 1UL, 0xE2793448L);
    int i, j, k;
    p_435->g_208.s6 |= (safe_mod_func_int32_t_s_s(0L, ((~((0UL >= (func_29((safe_mod_func_int64_t_s_s((+p_435->g_comm_values[p_435->tid]), func_36(p_26, (l_47[4][5][0] = (p_435->g_46[1] = ((*l_43) = p_435->g_41))), (((p_435->g_48[3][3][3] = &p_26) == &p_435->g_42) & (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u((p_435->l_comm_values[(safe_mod_func_uint32_t_u_u(p_435->tid, 14))] != (safe_rshift_func_int16_t_s_u((((((void*)0 == &l_45) || 4L) == 0xE7D512630673EEFDL) , 0x7F6CL), 7))))), p_26)) & 0x54C1B2F0819D5A33L), 0xF0L))), p_26, p_435))), p_435->g_269.s5, (*l_45), &p_435->g_42, p_435) > (*l_45))) & p_26)) | p_26)));
    (*p_435->g_298) = (*p_435->g_298);
    l_347.sd++;
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_435->g_298 p_435->g_46
 * writes: p_435->g_46
 */
uint8_t  func_29(int32_t  p_30, int64_t  p_31, int32_t  p_32, int32_t * p_33, struct S3 * p_435)
{ /* block id: 193 */
    int32_t *l_345 = (void*)0;
    VECTOR(uint32_t, 4) l_346 = (VECTOR(uint32_t, 4))(0x1366F986L, (VECTOR(uint32_t, 2))(0x1366F986L, 4294967295UL), 4294967295UL);
    int i;
    (*p_435->g_298) = l_345;
    (*p_435->g_298) = (*p_435->g_298);
    return l_346.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_36(uint32_t  p_37, int32_t * p_38, int32_t  p_39, uint32_t  p_40, struct S3 * p_435)
{ /* block id: 12 */
    VECTOR(int8_t, 16) l_79 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x2FL), 0x2FL), 0x2FL, (-1L), 0x2FL, (VECTOR(int8_t, 2))((-1L), 0x2FL), (VECTOR(int8_t, 2))((-1L), 0x2FL), (-1L), 0x2FL, (-1L), 0x2FL);
    int32_t l_83 = 0x25CAFD93L;
    int32_t l_123 = 2L;
    int32_t l_130 = 0x24C86C85L;
    int32_t l_133 = 0x4DC7289FL;
    int32_t l_135 = 6L;
    int32_t l_141 = 0x31C2D190L;
    int8_t *l_152[8] = {&p_435->g_81,&p_435->g_81,&p_435->g_81,&p_435->g_81,&p_435->g_81,&p_435->g_81,&p_435->g_81,&p_435->g_81};
    int8_t **l_151 = &l_152[7];
    int8_t ***l_150 = &l_151;
    int32_t l_232 = (-6L);
    uint32_t **l_235 = (void*)0;
    uint8_t l_254 = 255UL;
    VECTOR(int64_t, 8) l_283 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
    int32_t l_295 = 0x741B2F46L;
    int16_t l_299 = 0x1D0DL;
    int i;
    for (p_37 = (-7); (p_37 < 24); ++p_37)
    { /* block id: 15 */
        int32_t **l_58 = &p_435->g_41;
        uint64_t l_136 = 0x8B10249FC326A3C1L;
        VECTOR(uint64_t, 8) l_166 = (VECTOR(uint64_t, 8))(0xC2736A9738C80130L, (VECTOR(uint64_t, 4))(0xC2736A9738C80130L, (VECTOR(uint64_t, 2))(0xC2736A9738C80130L, 0UL), 0UL), 0UL, 0xC2736A9738C80130L, 0UL);
        int32_t l_186 = 0x4FFD04ABL;
        uint64_t l_201[5][6] = {{18446744073709551615UL,18446744073709551615UL,0x82236D5A7869C727L,0xACBDC5839176EC82L,6UL,0xACBDC5839176EC82L},{18446744073709551615UL,18446744073709551615UL,0x82236D5A7869C727L,0xACBDC5839176EC82L,6UL,0xACBDC5839176EC82L},{18446744073709551615UL,18446744073709551615UL,0x82236D5A7869C727L,0xACBDC5839176EC82L,6UL,0xACBDC5839176EC82L},{18446744073709551615UL,18446744073709551615UL,0x82236D5A7869C727L,0xACBDC5839176EC82L,6UL,0xACBDC5839176EC82L},{18446744073709551615UL,18446744073709551615UL,0x82236D5A7869C727L,0xACBDC5839176EC82L,6UL,0xACBDC5839176EC82L}};
        uint8_t ***l_237[9] = {&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1],&p_435->g_164[2][1]};
        int32_t l_247 = (-9L);
        int32_t l_253 = (-1L);
        uint64_t l_294 = 0UL;
        int i, j;
        (1 + 1);
    }
    return l_283.s3;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_comm_values[i] = 1;
    struct S3 c_436;
    struct S3* p_435 = &c_436;
    struct S3 c_437 = {
        0x0C3E5F88L, // p_435->g_42
        &p_435->g_42, // p_435->g_41
        {&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42}, // p_435->g_46
        {{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}},{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}},{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}},{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}},{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}},{{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42},{&p_435->g_42,&p_435->g_42,(void*)0,&p_435->g_42,&p_435->g_42}}}, // p_435->g_48
        (-6L), // p_435->g_81
        {0x22L,0x22L}, // p_435->g_100
        {{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0},{&p_435->g_100[0],&p_435->g_100[0],(void*)0,&p_435->g_100[1],&p_435->g_100[1],&p_435->g_100[1],(void*)0}}, // p_435->g_99
        &p_435->g_99[9][4], // p_435->g_98
        {&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98,&p_435->g_98}, // p_435->g_101
        &p_435->g_98, // p_435->g_102
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_435->g_103
        {0x43L}, // p_435->g_107
        0x3E92L, // p_435->g_159
        (void*)0, // p_435->g_165
        {{&p_435->g_165,&p_435->g_165,&p_435->g_165},{&p_435->g_165,&p_435->g_165,&p_435->g_165},{&p_435->g_165,&p_435->g_165,&p_435->g_165}}, // p_435->g_164
        &p_435->g_164[2][1], // p_435->g_163
        (VECTOR(uint64_t, 16))(0xEFC972B03FFEDB68L, (VECTOR(uint64_t, 4))(0xEFC972B03FFEDB68L, (VECTOR(uint64_t, 2))(0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L), 0x2DD4508A83B6B2B9L), 0x2DD4508A83B6B2B9L, 0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L, (VECTOR(uint64_t, 2))(0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L), (VECTOR(uint64_t, 2))(0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L), 0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L, 0xEFC972B03FFEDB68L, 0x2DD4508A83B6B2B9L), // p_435->g_168
        {0x36EEL,65535UL,0x110F92F1L,0xFBL,0UL,18446744073709551615UL}, // p_435->g_177
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L)), // p_435->g_180
        0UL, // p_435->g_183
        &p_435->g_183, // p_435->g_205
        {{{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205}},{{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205}},{{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205}},{{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205}},{{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205},{&p_435->g_205,&p_435->g_205,&p_435->g_205,(void*)0,&p_435->g_205}}}, // p_435->g_204
        &p_435->g_204[2][8][3], // p_435->g_206
        (VECTOR(int32_t, 8))(0x58889A77L, (VECTOR(int32_t, 4))(0x58889A77L, (VECTOR(int32_t, 2))(0x58889A77L, 0x23A8C507L), 0x23A8C507L), 0x23A8C507L, 0x58889A77L, 0x23A8C507L), // p_435->g_208
        (VECTOR(int32_t, 16))(0x578F439EL, (VECTOR(int32_t, 4))(0x578F439EL, (VECTOR(int32_t, 2))(0x578F439EL, 1L), 1L), 1L, 0x578F439EL, 1L, (VECTOR(int32_t, 2))(0x578F439EL, 1L), (VECTOR(int32_t, 2))(0x578F439EL, 1L), 0x578F439EL, 1L, 0x578F439EL, 1L), // p_435->g_209
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 1UL), 1UL), // p_435->g_211
        (void*)0, // p_435->g_260
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_435->g_269
        &p_435->g_107, // p_435->g_276
        &p_435->g_276, // p_435->g_275
        0x1C036F8FDF51455FL, // p_435->g_297
        &p_435->g_46[1], // p_435->g_298
        (void*)0, // p_435->g_367
        (void*)0, // p_435->g_368
        {0xE752L,8UL,-9L,0x4EL,0x3B35B350L,0UL}, // p_435->g_374
        {-1L,0x53739F0B637EF90EL,-4L,1UL,0x6D0314FF98FF4A70L,0x31EA9536L,1L}, // p_435->g_377
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_435->g_376
        {9UL}, // p_435->g_378
        {0x41F8L,2UL,0x0ABE85DFL,0x9CL,0x67029BF5L,0xB3280A1F1900AE4AL}, // p_435->g_383
        &p_435->g_383, // p_435->g_384
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), // p_435->g_390
        {&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42,&p_435->g_42}, // p_435->g_399
        (VECTOR(uint64_t, 16))(0xB59CDB71C4078F08L, (VECTOR(uint64_t, 4))(0xB59CDB71C4078F08L, (VECTOR(uint64_t, 2))(0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L), 0x04C7E56548ADD8E8L), 0x04C7E56548ADD8E8L, 0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L, (VECTOR(uint64_t, 2))(0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L), (VECTOR(uint64_t, 2))(0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L), 0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L, 0xB59CDB71C4078F08L, 0x04C7E56548ADD8E8L), // p_435->g_411
        (void*)0, // p_435->g_410
        {65526UL,0xA9B7L,1L,0UL,7UL,18446744073709551606UL}, // p_435->g_421
        &p_435->g_421, // p_435->g_420
        {65531UL,0xA9B3L,0x44D6FD4BL,0xB5L,0xAB7FFEDFL,0x2B23C13609233925L}, // p_435->g_424
        (void*)0, // p_435->g_433
        &p_435->g_42, // p_435->g_434
        0, // p_435->v_collective
        sequence_input[get_global_id(0)], // p_435->global_0_offset
        sequence_input[get_global_id(1)], // p_435->global_1_offset
        sequence_input[get_global_id(2)], // p_435->global_2_offset
        sequence_input[get_local_id(0)], // p_435->local_0_offset
        sequence_input[get_local_id(1)], // p_435->local_1_offset
        sequence_input[get_local_id(2)], // p_435->local_2_offset
        sequence_input[get_group_id(0)], // p_435->group_0_offset
        sequence_input[get_group_id(1)], // p_435->group_1_offset
        sequence_input[get_group_id(2)], // p_435->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[0][get_linear_local_id()])), // p_435->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_436 = c_437;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_435);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_435->g_42, "p_435->g_42", print_hash_value);
    transparent_crc(p_435->g_81, "p_435->g_81", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_435->g_100[i], "p_435->g_100[i]", print_hash_value);

    }
    transparent_crc(p_435->g_103.s0, "p_435->g_103.s0", print_hash_value);
    transparent_crc(p_435->g_103.s1, "p_435->g_103.s1", print_hash_value);
    transparent_crc(p_435->g_103.s2, "p_435->g_103.s2", print_hash_value);
    transparent_crc(p_435->g_103.s3, "p_435->g_103.s3", print_hash_value);
    transparent_crc(p_435->g_103.s4, "p_435->g_103.s4", print_hash_value);
    transparent_crc(p_435->g_103.s5, "p_435->g_103.s5", print_hash_value);
    transparent_crc(p_435->g_103.s6, "p_435->g_103.s6", print_hash_value);
    transparent_crc(p_435->g_103.s7, "p_435->g_103.s7", print_hash_value);
    transparent_crc(p_435->g_103.s8, "p_435->g_103.s8", print_hash_value);
    transparent_crc(p_435->g_103.s9, "p_435->g_103.s9", print_hash_value);
    transparent_crc(p_435->g_103.sa, "p_435->g_103.sa", print_hash_value);
    transparent_crc(p_435->g_103.sb, "p_435->g_103.sb", print_hash_value);
    transparent_crc(p_435->g_103.sc, "p_435->g_103.sc", print_hash_value);
    transparent_crc(p_435->g_103.sd, "p_435->g_103.sd", print_hash_value);
    transparent_crc(p_435->g_103.se, "p_435->g_103.se", print_hash_value);
    transparent_crc(p_435->g_103.sf, "p_435->g_103.sf", print_hash_value);
    transparent_crc(p_435->g_107.f0, "p_435->g_107.f0", print_hash_value);
    transparent_crc(p_435->g_159, "p_435->g_159", print_hash_value);
    transparent_crc(p_435->g_168.s0, "p_435->g_168.s0", print_hash_value);
    transparent_crc(p_435->g_168.s1, "p_435->g_168.s1", print_hash_value);
    transparent_crc(p_435->g_168.s2, "p_435->g_168.s2", print_hash_value);
    transparent_crc(p_435->g_168.s3, "p_435->g_168.s3", print_hash_value);
    transparent_crc(p_435->g_168.s4, "p_435->g_168.s4", print_hash_value);
    transparent_crc(p_435->g_168.s5, "p_435->g_168.s5", print_hash_value);
    transparent_crc(p_435->g_168.s6, "p_435->g_168.s6", print_hash_value);
    transparent_crc(p_435->g_168.s7, "p_435->g_168.s7", print_hash_value);
    transparent_crc(p_435->g_168.s8, "p_435->g_168.s8", print_hash_value);
    transparent_crc(p_435->g_168.s9, "p_435->g_168.s9", print_hash_value);
    transparent_crc(p_435->g_168.sa, "p_435->g_168.sa", print_hash_value);
    transparent_crc(p_435->g_168.sb, "p_435->g_168.sb", print_hash_value);
    transparent_crc(p_435->g_168.sc, "p_435->g_168.sc", print_hash_value);
    transparent_crc(p_435->g_168.sd, "p_435->g_168.sd", print_hash_value);
    transparent_crc(p_435->g_168.se, "p_435->g_168.se", print_hash_value);
    transparent_crc(p_435->g_168.sf, "p_435->g_168.sf", print_hash_value);
    transparent_crc(p_435->g_177.f0, "p_435->g_177.f0", print_hash_value);
    transparent_crc(p_435->g_177.f1, "p_435->g_177.f1", print_hash_value);
    transparent_crc(p_435->g_177.f2, "p_435->g_177.f2", print_hash_value);
    transparent_crc(p_435->g_177.f3, "p_435->g_177.f3", print_hash_value);
    transparent_crc(p_435->g_177.f4, "p_435->g_177.f4", print_hash_value);
    transparent_crc(p_435->g_177.f5, "p_435->g_177.f5", print_hash_value);
    transparent_crc(p_435->g_180.s0, "p_435->g_180.s0", print_hash_value);
    transparent_crc(p_435->g_180.s1, "p_435->g_180.s1", print_hash_value);
    transparent_crc(p_435->g_180.s2, "p_435->g_180.s2", print_hash_value);
    transparent_crc(p_435->g_180.s3, "p_435->g_180.s3", print_hash_value);
    transparent_crc(p_435->g_180.s4, "p_435->g_180.s4", print_hash_value);
    transparent_crc(p_435->g_180.s5, "p_435->g_180.s5", print_hash_value);
    transparent_crc(p_435->g_180.s6, "p_435->g_180.s6", print_hash_value);
    transparent_crc(p_435->g_180.s7, "p_435->g_180.s7", print_hash_value);
    transparent_crc(p_435->g_183, "p_435->g_183", print_hash_value);
    transparent_crc(p_435->g_208.s0, "p_435->g_208.s0", print_hash_value);
    transparent_crc(p_435->g_208.s1, "p_435->g_208.s1", print_hash_value);
    transparent_crc(p_435->g_208.s2, "p_435->g_208.s2", print_hash_value);
    transparent_crc(p_435->g_208.s3, "p_435->g_208.s3", print_hash_value);
    transparent_crc(p_435->g_208.s4, "p_435->g_208.s4", print_hash_value);
    transparent_crc(p_435->g_208.s5, "p_435->g_208.s5", print_hash_value);
    transparent_crc(p_435->g_208.s6, "p_435->g_208.s6", print_hash_value);
    transparent_crc(p_435->g_208.s7, "p_435->g_208.s7", print_hash_value);
    transparent_crc(p_435->g_209.s0, "p_435->g_209.s0", print_hash_value);
    transparent_crc(p_435->g_209.s1, "p_435->g_209.s1", print_hash_value);
    transparent_crc(p_435->g_209.s2, "p_435->g_209.s2", print_hash_value);
    transparent_crc(p_435->g_209.s3, "p_435->g_209.s3", print_hash_value);
    transparent_crc(p_435->g_209.s4, "p_435->g_209.s4", print_hash_value);
    transparent_crc(p_435->g_209.s5, "p_435->g_209.s5", print_hash_value);
    transparent_crc(p_435->g_209.s6, "p_435->g_209.s6", print_hash_value);
    transparent_crc(p_435->g_209.s7, "p_435->g_209.s7", print_hash_value);
    transparent_crc(p_435->g_209.s8, "p_435->g_209.s8", print_hash_value);
    transparent_crc(p_435->g_209.s9, "p_435->g_209.s9", print_hash_value);
    transparent_crc(p_435->g_209.sa, "p_435->g_209.sa", print_hash_value);
    transparent_crc(p_435->g_209.sb, "p_435->g_209.sb", print_hash_value);
    transparent_crc(p_435->g_209.sc, "p_435->g_209.sc", print_hash_value);
    transparent_crc(p_435->g_209.sd, "p_435->g_209.sd", print_hash_value);
    transparent_crc(p_435->g_209.se, "p_435->g_209.se", print_hash_value);
    transparent_crc(p_435->g_209.sf, "p_435->g_209.sf", print_hash_value);
    transparent_crc(p_435->g_211.x, "p_435->g_211.x", print_hash_value);
    transparent_crc(p_435->g_211.y, "p_435->g_211.y", print_hash_value);
    transparent_crc(p_435->g_211.z, "p_435->g_211.z", print_hash_value);
    transparent_crc(p_435->g_211.w, "p_435->g_211.w", print_hash_value);
    transparent_crc(p_435->g_269.s0, "p_435->g_269.s0", print_hash_value);
    transparent_crc(p_435->g_269.s1, "p_435->g_269.s1", print_hash_value);
    transparent_crc(p_435->g_269.s2, "p_435->g_269.s2", print_hash_value);
    transparent_crc(p_435->g_269.s3, "p_435->g_269.s3", print_hash_value);
    transparent_crc(p_435->g_269.s4, "p_435->g_269.s4", print_hash_value);
    transparent_crc(p_435->g_269.s5, "p_435->g_269.s5", print_hash_value);
    transparent_crc(p_435->g_269.s6, "p_435->g_269.s6", print_hash_value);
    transparent_crc(p_435->g_269.s7, "p_435->g_269.s7", print_hash_value);
    transparent_crc(p_435->g_297, "p_435->g_297", print_hash_value);
    transparent_crc(p_435->g_374.f0, "p_435->g_374.f0", print_hash_value);
    transparent_crc(p_435->g_374.f1, "p_435->g_374.f1", print_hash_value);
    transparent_crc(p_435->g_374.f2, "p_435->g_374.f2", print_hash_value);
    transparent_crc(p_435->g_374.f3, "p_435->g_374.f3", print_hash_value);
    transparent_crc(p_435->g_374.f4, "p_435->g_374.f4", print_hash_value);
    transparent_crc(p_435->g_374.f5, "p_435->g_374.f5", print_hash_value);
    transparent_crc(p_435->g_377.f0, "p_435->g_377.f0", print_hash_value);
    transparent_crc(p_435->g_377.f1, "p_435->g_377.f1", print_hash_value);
    transparent_crc(p_435->g_377.f2, "p_435->g_377.f2", print_hash_value);
    transparent_crc(p_435->g_377.f3, "p_435->g_377.f3", print_hash_value);
    transparent_crc(p_435->g_377.f4, "p_435->g_377.f4", print_hash_value);
    transparent_crc(p_435->g_377.f5, "p_435->g_377.f5", print_hash_value);
    transparent_crc(p_435->g_377.f6, "p_435->g_377.f6", print_hash_value);
    transparent_crc(p_435->g_378.f0, "p_435->g_378.f0", print_hash_value);
    transparent_crc(p_435->g_383.f0, "p_435->g_383.f0", print_hash_value);
    transparent_crc(p_435->g_383.f1, "p_435->g_383.f1", print_hash_value);
    transparent_crc(p_435->g_383.f2, "p_435->g_383.f2", print_hash_value);
    transparent_crc(p_435->g_383.f3, "p_435->g_383.f3", print_hash_value);
    transparent_crc(p_435->g_383.f4, "p_435->g_383.f4", print_hash_value);
    transparent_crc(p_435->g_383.f5, "p_435->g_383.f5", print_hash_value);
    transparent_crc(p_435->g_390.x, "p_435->g_390.x", print_hash_value);
    transparent_crc(p_435->g_390.y, "p_435->g_390.y", print_hash_value);
    transparent_crc(p_435->g_390.z, "p_435->g_390.z", print_hash_value);
    transparent_crc(p_435->g_390.w, "p_435->g_390.w", print_hash_value);
    transparent_crc(p_435->g_411.s0, "p_435->g_411.s0", print_hash_value);
    transparent_crc(p_435->g_411.s1, "p_435->g_411.s1", print_hash_value);
    transparent_crc(p_435->g_411.s2, "p_435->g_411.s2", print_hash_value);
    transparent_crc(p_435->g_411.s3, "p_435->g_411.s3", print_hash_value);
    transparent_crc(p_435->g_411.s4, "p_435->g_411.s4", print_hash_value);
    transparent_crc(p_435->g_411.s5, "p_435->g_411.s5", print_hash_value);
    transparent_crc(p_435->g_411.s6, "p_435->g_411.s6", print_hash_value);
    transparent_crc(p_435->g_411.s7, "p_435->g_411.s7", print_hash_value);
    transparent_crc(p_435->g_411.s8, "p_435->g_411.s8", print_hash_value);
    transparent_crc(p_435->g_411.s9, "p_435->g_411.s9", print_hash_value);
    transparent_crc(p_435->g_411.sa, "p_435->g_411.sa", print_hash_value);
    transparent_crc(p_435->g_411.sb, "p_435->g_411.sb", print_hash_value);
    transparent_crc(p_435->g_411.sc, "p_435->g_411.sc", print_hash_value);
    transparent_crc(p_435->g_411.sd, "p_435->g_411.sd", print_hash_value);
    transparent_crc(p_435->g_411.se, "p_435->g_411.se", print_hash_value);
    transparent_crc(p_435->g_411.sf, "p_435->g_411.sf", print_hash_value);
    transparent_crc(p_435->g_421.f0, "p_435->g_421.f0", print_hash_value);
    transparent_crc(p_435->g_421.f1, "p_435->g_421.f1", print_hash_value);
    transparent_crc(p_435->g_421.f2, "p_435->g_421.f2", print_hash_value);
    transparent_crc(p_435->g_421.f3, "p_435->g_421.f3", print_hash_value);
    transparent_crc(p_435->g_421.f4, "p_435->g_421.f4", print_hash_value);
    transparent_crc(p_435->g_421.f5, "p_435->g_421.f5", print_hash_value);
    transparent_crc(p_435->g_424.f0, "p_435->g_424.f0", print_hash_value);
    transparent_crc(p_435->g_424.f1, "p_435->g_424.f1", print_hash_value);
    transparent_crc(p_435->g_424.f2, "p_435->g_424.f2", print_hash_value);
    transparent_crc(p_435->g_424.f3, "p_435->g_424.f3", print_hash_value);
    transparent_crc(p_435->g_424.f4, "p_435->g_424.f4", print_hash_value);
    transparent_crc(p_435->g_424.f5, "p_435->g_424.f5", print_hash_value);
    transparent_crc(p_435->v_collective, "p_435->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_435->g_special_values[i + 30 * get_linear_group_id()], "p_435->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_435->l_special_values[i], "p_435->l_special_values[i]", print_hash_value);
    transparent_crc(p_435->l_comm_values[get_linear_local_id()], "p_435->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_435->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()], "p_435->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
