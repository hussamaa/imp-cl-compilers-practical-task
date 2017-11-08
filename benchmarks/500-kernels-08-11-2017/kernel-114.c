// --atomics 32 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 18,7,2 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 2110339939

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int16_t g_16;
    int32_t *g_20;
    int16_t g_22;
    int16_t *g_21[10];
    volatile int64_t g_26;
    uint16_t g_27;
    volatile int64_t g_30;
    volatile uint16_t g_32;
    VECTOR(uint8_t, 2) g_44;
    int32_t g_56[9][1];
    int16_t g_58;
    uint32_t g_78;
    uint8_t g_83;
    VECTOR(int8_t, 8) g_86;
    uint32_t g_97;
    uint64_t g_100;
    VECTOR(uint32_t, 4) g_129;
    VECTOR(uint32_t, 2) g_130;
    int32_t *g_169;
    int16_t g_206;
    VECTOR(int32_t, 16) g_216;
    int64_t g_248[10][6][4];
    int32_t g_253[4][10];
    int32_t * volatile g_252;
    uint64_t g_257;
    VECTOR(int32_t, 8) g_264;
    VECTOR(int8_t, 4) g_319;
    VECTOR(int8_t, 16) g_320;
    VECTOR(int8_t, 2) g_321;
    VECTOR(int8_t, 16) g_322;
    volatile VECTOR(int8_t, 2) g_323;
    VECTOR(int8_t, 16) g_324;
    uint64_t g_330;
    int32_t *g_355;
    VECTOR(int16_t, 16) g_378;
    int32_t ** volatile g_390;
    VECTOR(int32_t, 4) g_397;
    int32_t **g_400;
    int16_t g_411;
    VECTOR(uint8_t, 8) g_414;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_417);
int32_t * func_2(int32_t  p_3, int16_t  p_4, int32_t * p_5, struct S0 * p_417);
int16_t  func_7(uint8_t  p_8, int32_t * p_9, struct S0 * p_417);
int32_t * func_11(int16_t  p_12, uint32_t  p_13, int32_t * p_14, struct S0 * p_417);
int32_t * func_17(int32_t * p_18, int16_t * p_19, struct S0 * p_417);
int8_t  func_36(uint32_t  p_37, uint64_t  p_38, int16_t * p_39, uint16_t  p_40, struct S0 * p_417);
int16_t * func_45(int16_t * p_46, uint32_t  p_47, uint64_t  p_48, struct S0 * p_417);
int16_t * func_49(uint32_t  p_50, int32_t  p_51, int32_t * p_52, uint32_t  p_53, struct S0 * p_417);
uint8_t  func_67(int64_t  p_68, int16_t * p_69, int16_t * p_70, int32_t  p_71, struct S0 * p_417);
int16_t  func_76(int8_t  p_77, struct S0 * p_417);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_417->l_comm_values p_417->g_20 p_417->g_21 p_417->g_22 p_417->g_27 p_417->g_32 p_417->g_44 p_417->g_56 p_417->g_58 p_417->g_comm_values p_417->g_86 p_417->g_97 p_417->g_83 p_417->g_78 p_417->g_130 p_417->g_129 p_417->g_169 p_417->g_216 p_417->g_248 p_417->g_100 p_417->g_252 p_417->g_253 p_417->g_264 p_417->g_16 p_417->g_319 p_417->g_320 p_417->g_321 p_417->g_322 p_417->g_323 p_417->g_324 p_417->g_330 p_417->g_257 p_417->g_355 p_417->g_378 p_417->g_390
 * writes: p_417->g_16 p_417->g_22 p_417->g_27 p_417->g_32 p_417->g_20 p_417->g_56 p_417->g_78 p_417->g_97 p_417->g_83 p_417->g_169 p_417->g_248 p_417->g_253 p_417->g_257 p_417->g_330 p_417->g_86 p_417->g_324 p_417->g_206 p_417->g_321
 */
int32_t  func_1(struct S0 * p_417)
{ /* block id: 4 */
    uint32_t l_6 = 0xD4351CDCL;
    int32_t l_10 = 0x128FBC78L;
    int16_t *l_15 = &p_417->g_16;
    int32_t **l_35 = &p_417->g_20;
    uint32_t l_43 = 0xA55A4118L;
    int32_t l_54 = (-6L);
    VECTOR(int32_t, 16) l_396 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x60000BFBL), 0x60000BFBL), 0x60000BFBL, 0L, 0x60000BFBL, (VECTOR(int32_t, 2))(0L, 0x60000BFBL), (VECTOR(int32_t, 2))(0L, 0x60000BFBL), 0L, 0x60000BFBL, 0L, 0x60000BFBL);
    int i;
    (*l_35) = func_2(l_6, func_7(l_10, func_11(((*l_15) = p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 1))]), (((((*l_35) = func_17(p_417->g_20, p_417->g_21[2], p_417)) == (func_36((safe_sub_func_uint8_t_u_u((l_43 = 0xBCL), ((VECTOR(uint8_t, 4))(p_417->g_44.xyxx)).z)), l_6, func_45(func_49(l_54, p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 1))], &l_54, l_6, p_417), p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 1))], p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 1))], p_417), p_417->g_44.y, p_417) , &p_417->g_56[7][0])) || l_54) , 0x8E15B23FL), &l_10, p_417), p_417), p_417->g_355, p_417);
    for (p_417->g_257 = (-6); (p_417->g_257 != 3); p_417->g_257 = safe_add_func_int16_t_s_s(p_417->g_257, 8))
    { /* block id: 181 */
        int32_t **l_398 = &p_417->g_355;
        int32_t ***l_399[8][5][6] = {{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}},{{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398},{&l_35,&l_398,&l_398,&l_35,(void*)0,&l_398}}};
        int32_t *l_403 = (void*)0;
        int32_t *l_404 = (void*)0;
        int32_t *l_405 = (void*)0;
        int32_t *l_406 = (void*)0;
        int32_t *l_407 = (void*)0;
        int32_t *l_408 = (void*)0;
        int32_t *l_409 = (void*)0;
        int32_t *l_410[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        (*p_417->g_169) = ((safe_sub_func_int16_t_s_s((((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_396.s7dd05b12)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(p_417->g_397.zwzxxzyx)).s7215664671724725))))).even)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2D2131C4L, (-4L))).yyxx)).xxzyzwyzywzyxzyz)).s09, ((VECTOR(int32_t, 16))(((l_35 = (p_417->g_400 = l_398)) == (void*)0), (*p_417->g_169), 0x4AE0304CL, (-1L), (&p_417->g_330 == &p_417->g_330), ((*p_417->g_252) = ((p_417->g_411 = (p_417->g_264.s0 = (safe_lshift_func_uint16_t_u_u(0x3C15L, 11)))) , (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_417->g_414.s31240675)))).s5, p_417->g_248[2][1][3])))), (safe_add_func_int16_t_s_s(0x622CL, l_6)), (*p_417->g_20), (*p_417->g_20), (*p_417->g_20), l_396.s8, 0x5E6942A2L, 0L, (-9L), 0x5C196541L, 4L)).s83))).yxyx, (int32_t)0x6CBC3899L))).wyxwwzyw))).even, ((VECTOR(int32_t, 4))(0x690034A3L))))).x < l_10), GROUP_DIVERGE(1, 1))) & 0x774FL);
        (*p_417->g_390) = (void*)0;
    }
    return l_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_16 p_417->g_322 p_417->g_22 p_417->g_378 p_417->g_129 p_417->g_86 p_417->g_324 p_417->g_56 p_417->g_320 p_417->g_169 p_417->g_390
 * writes: p_417->g_86 p_417->g_324 p_417->g_206 p_417->g_321 p_417->g_20
 */
int32_t * func_2(int32_t  p_3, int16_t  p_4, int32_t * p_5, struct S0 * p_417)
{ /* block id: 166 */
    uint32_t l_356 = 0x91A189A1L;
    uint8_t *l_361 = (void*)0;
    uint16_t *l_362[1][3];
    int32_t l_363 = 0x1ED9327AL;
    int8_t *l_379 = (void*)0;
    int8_t *l_380 = (void*)0;
    int8_t *l_381 = (void*)0;
    int8_t *l_382 = (void*)0;
    int8_t *l_383 = (void*)0;
    int8_t *l_384 = (void*)0;
    int8_t *l_385 = (void*)0;
    uint32_t l_386 = 4294967295UL;
    int16_t *l_387 = &p_417->g_206;
    int32_t l_388 = 0x40D2A98EL;
    uint32_t l_389 = 4294967287UL;
    int32_t *l_391 = &p_417->g_253[2][0];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_362[i][j] = &p_417->g_27;
    }
    l_356++;
    atomic_and(&p_417->l_atomic_reduction[0], (0x3A80L && ((((safe_lshift_func_uint8_t_u_u(((l_363 = ((void*)0 == l_361)) & ((safe_sub_func_uint8_t_u_u((p_417->g_16 ^ (l_388 &= (p_417->g_321.x = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u(((*l_387) = ((!18446744073709551615UL) & ((safe_lshift_func_int8_t_s_u((l_386 = (p_417->g_322.s8 || (p_417->g_324.s2 |= (p_417->g_86.s4 ^= (safe_mul_func_int8_t_s_s((p_417->g_22 > ((((-6L) == (+(safe_sub_func_int8_t_s_s(((((+((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(p_417->g_378.s98da8689)).s12, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(((p_4 >= p_3) , 0x4859L), ((VECTOR(int16_t, 2))(0x0E6DL)), 0L)).zwyxxxyx, ((VECTOR(int16_t, 8))((-9L)))))))).s44))))).lo) <= l_356) != p_417->g_129.z) <= 0x5C8E9C89L), p_3)))) > l_356) , 1UL)), 1L)))))), 3)) == 0x9FB8DBECCE5C0BD1L))), p_417->g_56[7][0])) <= l_356) != 0UL) > l_356) , l_386), p_417->g_320.sc)), 5))))), l_389)) , l_356)), l_356)) , l_389) , l_356) != (*p_417->g_169))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_417->v_collective += p_417->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_417->g_390) = &p_3;
    return l_391;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_257 p_417->g_169
 * writes: p_417->g_56
 */
int16_t  func_7(uint8_t  p_8, int32_t * p_9, struct S0 * p_417)
{ /* block id: 163 */
    (*p_417->g_169) = (FAKE_DIVERGE(p_417->group_2_offset, get_group_id(2), 10) < (p_417->g_257 || (safe_rshift_func_uint8_t_u_u(p_8, 4))));
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_27 p_417->g_216 p_417->g_169 p_417->g_56 p_417->g_130 p_417->g_248 p_417->g_44 p_417->g_22 p_417->g_86 p_417->g_100 p_417->g_252 p_417->g_253 p_417->g_78 p_417->g_264 p_417->g_97 p_417->g_32 p_417->g_16 p_417->g_319 p_417->g_320 p_417->g_321 p_417->g_322 p_417->g_323 p_417->g_324 p_417->g_330 p_417->g_129
 * writes: p_417->g_27 p_417->g_56 p_417->g_248 p_417->g_83 p_417->g_253 p_417->g_257 p_417->g_16 p_417->g_22 p_417->g_330
 */
int32_t * func_11(int16_t  p_12, uint32_t  p_13, int32_t * p_14, struct S0 * p_417)
{ /* block id: 109 */
    int32_t *l_223 = &p_417->g_56[7][0];
    int64_t l_228[6] = {0x196A91D9EB6B44ADL,7L,0x196A91D9EB6B44ADL,0x196A91D9EB6B44ADL,7L,0x196A91D9EB6B44ADL};
    int32_t l_247 = 0L;
    VECTOR(int32_t, 2) l_254 = (VECTOR(int32_t, 2))(6L, 0x5F2F1504L);
    int16_t l_274 = 0x1C08L;
    int i;
    for (p_13 = (-17); (p_13 >= 19); p_13++)
    { /* block id: 112 */
        int16_t l_246 = 1L;
        int32_t l_251 = (-1L);
        uint64_t *l_256[8][6] = {{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257},{&p_417->g_257,&p_417->g_257,&p_417->g_257,&p_417->g_257,(void*)0,&p_417->g_257}};
        uint32_t l_273 = 0x05A03AF1L;
        int32_t l_327 = 1L;
        int32_t l_328 = (-1L);
        int32_t l_329 = (-10L);
        int64_t *l_346 = &l_228[5];
        int64_t **l_345 = &l_346;
        int64_t *l_351 = &p_417->g_248[6][4][1];
        int16_t l_352 = 0x29EAL;
        int i, j;
        if (((void*)0 != l_223))
        { /* block id: 113 */
            uint16_t *l_231[8] = {&p_417->g_27,&p_417->g_27,&p_417->g_27,&p_417->g_27,&p_417->g_27,&p_417->g_27,&p_417->g_27,&p_417->g_27};
            VECTOR(int16_t, 4) l_234 = (VECTOR(int16_t, 4))(0x780EL, (VECTOR(int16_t, 2))(0x780EL, 0x2758L), 0x2758L);
            uint8_t *l_245 = (void*)0;
            uint8_t *l_249 = (void*)0;
            uint8_t *l_250[10][7] = {{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83},{&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83,&p_417->g_83}};
            int32_t l_255[6] = {0L,0L,0L,0L,0L,0L};
            int i, j;
            atomic_or(&p_417->g_atomic_reduction[get_linear_group_id()], 0x562B2E02L);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_417->v_collective += p_417->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_417->g_252) ^= ((~(safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_228[5], ((2L != (((((((safe_mod_func_uint16_t_u_u((p_417->g_27--), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_234.wwxy)).wwwxxyyy)).s7216354032243741)).s7)) , p_12) < (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((!((l_234.x != ((p_417->g_83 = (p_12 & (p_417->g_248[6][4][1] ^= (((safe_mod_func_int32_t_s_s(l_234.x, ((*p_417->g_169) &= (0x49L || (l_246 ^= (((safe_add_func_int64_t_s_s((&p_417->g_32 == (void*)0), p_417->g_216.s6)) , (-1L)) , p_13)))))) < p_417->g_130.x) < l_247)))) <= l_251)) | (-2L))), p_417->g_44.y)), p_417->g_22)) && p_417->g_86.s1), 0L))) >= FAKE_DIVERGE(p_417->local_2_offset, get_local_id(2), 10)) ^ p_12) <= p_417->g_100) ^ 0x7F36DEE7L)) == p_12))), 0))) , (*l_223));
            l_255[0] = ((*p_417->g_169) |= ((VECTOR(int32_t, 16))(l_254.xyxyyyxyyxxyyxyx)).sd);
        }
        else
        { /* block id: 123 */
            return &p_417->g_56[7][0];
        }
        if (((0x9666D4F1AB6FB1E9L || (p_417->g_257 = p_13)) < p_417->g_78))
        { /* block id: 127 */
            int8_t l_265 = 1L;
            uint16_t *l_266 = &p_417->g_27;
            (*l_223) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((FAKE_DIVERGE(p_417->group_0_offset, get_group_id(0), 10) <= (0UL == (~((safe_mod_func_int32_t_s_s(((((*l_266) &= ((((VECTOR(int32_t, 16))(p_417->g_264.s1213065640420765)).sa , &p_417->g_16) != &p_12)) != (safe_div_func_int64_t_s_s(p_417->g_97, ((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_u((1L == l_251), 15)) != 0x603C5B6BL) >= 0x4BL) == l_265), p_12)) | l_273)))) & p_12), l_274)) , p_417->g_32)))), p_417->g_56[7][0])) && p_417->g_130.x), 0x57L));
        }
        else
        { /* block id: 130 */
            uint16_t l_318 = 8UL;
            int32_t *l_325 = (void*)0;
            int32_t *l_326[10][5] = {{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0},{(void*)0,(void*)0,&l_251,(void*)0,(void*)0}};
            int i, j;
            for (p_417->g_16 = (-14); (p_417->g_16 > (-25)); p_417->g_16 = safe_sub_func_uint64_t_u_u(p_417->g_16, 6))
            { /* block id: 133 */
                VECTOR(uint64_t, 8) l_284 = (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x18D38731865FC830L), 0x18D38731865FC830L), 0x18D38731865FC830L, 4UL, 0x18D38731865FC830L);
                int i;
                (*l_223) ^= (*p_14);
                for (p_417->g_22 = 26; (p_417->g_22 != 26); p_417->g_22 = safe_add_func_int16_t_s_s(p_417->g_22, 2))
                { /* block id: 137 */
                    int32_t *l_279 = (void*)0;
                    int32_t *l_280 = &p_417->g_253[0][9];
                    int32_t *l_281 = &p_417->g_56[7][0];
                    int32_t l_282 = 0x21F01A02L;
                    int32_t *l_283[4][3] = {{&l_282,&p_417->g_253[3][3],&l_282},{&l_282,&p_417->g_253[3][3],&l_282},{&l_282,&p_417->g_253[3][3],&l_282},{&l_282,&p_417->g_253[3][3],&l_282}};
                    int i, j;
                    l_284.s1++;
                    if ((atomic_inc(&p_417->g_atomic_input[32 * get_linear_group_id() + 20]) == 9))
                    { /* block id: 140 */
                        int16_t l_287 = 0x5277L;
                        uint64_t l_288 = 1UL;
                        VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))(0x297BF2BFL, (VECTOR(int32_t, 4))(0x297BF2BFL, (VECTOR(int32_t, 2))(0x297BF2BFL, 0x37615488L), 0x37615488L), 0x37615488L, 0x297BF2BFL, 0x37615488L, (VECTOR(int32_t, 2))(0x297BF2BFL, 0x37615488L), (VECTOR(int32_t, 2))(0x297BF2BFL, 0x37615488L), 0x297BF2BFL, 0x37615488L, 0x297BF2BFL, 0x37615488L);
                        uint32_t l_292 = 0xAA485410L;
                        VECTOR(int32_t, 2) l_293 = (VECTOR(int32_t, 2))((-4L), 0x1EB8C3FEL);
                        int32_t l_294 = 0x74D873EAL;
                        int32_t l_295 = 0L;
                        VECTOR(int32_t, 2) l_296 = (VECTOR(int32_t, 2))(0L, 0x2BA4AD7BL);
                        int32_t l_297 = 0x6790EACFL;
                        int32_t l_298 = (-1L);
                        uint16_t l_299 = 0xFB64L;
                        uint32_t l_300 = 0xCBA45FD2L;
                        int32_t l_301[5][8] = {{0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL},{0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL},{0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL},{0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL},{0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL,0x5E04096CL}};
                        VECTOR(uint64_t, 8) l_302 = (VECTOR(uint64_t, 8))(0xD1637CF6A9AAE1C5L, (VECTOR(uint64_t, 4))(0xD1637CF6A9AAE1C5L, (VECTOR(uint64_t, 2))(0xD1637CF6A9AAE1C5L, 0x2BA2F732053EDE2EL), 0x2BA2F732053EDE2EL), 0x2BA2F732053EDE2EL, 0xD1637CF6A9AAE1C5L, 0x2BA2F732053EDE2EL);
                        uint16_t l_303 = 0xD3CDL;
                        uint32_t l_306 = 1UL;
                        int64_t l_307[2];
                        uint16_t l_308 = 2UL;
                        uint32_t l_309[2];
                        int16_t l_310 = 0x017CL;
                        uint16_t l_311 = 0x5246L;
                        int64_t l_312 = 2L;
                        int64_t l_313 = 0x4BCEEDDB57425ED6L;
                        int64_t l_314 = 0x69B700C025073432L;
                        int32_t l_315 = 0x34DA4911L;
                        int8_t l_316 = 0L;
                        uint32_t l_317 = 0x59F4D5C4L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_307[i] = 0L;
                        for (i = 0; i < 2; i++)
                            l_309[i] = 4294967293UL;
                        l_288--;
                        l_317 = (l_316 ^= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_291.sa4e59466)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-4L), 2L)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_292, ((VECTOR(int32_t, 2))(l_293.xx)), l_294, 0x571AC383L, l_295, (-1L), 0x25D15F9FL)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_296.yxxyxxxyxyxyxxxx)).lo))).s2711262644432377, ((VECTOR(int32_t, 8))((l_298 ^= l_297), (l_299 , (l_300 , 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-1L), l_301[4][4], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0x49C4A044L, 0x430EC9AAL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))((((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_302.s6274)).wyyyzywy)).hi)).wzywzzzw, (uint64_t)(--l_303)))).s7 , ((l_308 ^= ((l_307[0] = (l_306 , (-1L))) , 4294967295UL)) , l_309[1])), ((VECTOR(int32_t, 4))(1L)), (-7L), l_310, ((VECTOR(int32_t, 4))((-1L))), 0x2AA150D5L, l_311, l_312, (-3L), 0x498FD519L)).s59, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x0F634048L))))), ((VECTOR(int32_t, 2))(5L))))), ((VECTOR(int32_t, 4))(0x16410EF8L)), 0x16AB7E45L, 3L)).s01))).yxyyxxyy)).s14)))), (-1L), l_313, l_314, l_315, 0x659A8D7AL, 1L, ((VECTOR(int32_t, 4))(0x65A7C2F7L)), 0x492C0CD1L, 0x377EB335L)).s00)).xxxxxyxxyxxyxxxx, ((VECTOR(int32_t, 16))((-3L))), ((VECTOR(int32_t, 16))(0L))))).s2b)), 9L, 0x4A7951CFL)), 0x6CE37125L, 0x3866AFD4L)).s4030201234015230))).s2b66)), ((VECTOR(int32_t, 4))(9L))))).hi, ((VECTOR(int32_t, 2))(0x0B5F51FCL))))))).xxyxxyyx)).s67)).yyyyyyyx)).even, ((VECTOR(int32_t, 4))(0x732E1476L)), ((VECTOR(int32_t, 4))((-1L)))))).zzwyyxwz))).s03, ((VECTOR(int32_t, 2))(0x1C9E4F71L))))).xxxxxyxxxyxxyxyy)).seb)), ((VECTOR(int32_t, 2))(7L))))).even);
                        unsigned int result = 0;
                        result += l_287;
                        result += l_288;
                        result += l_291.sf;
                        result += l_291.se;
                        result += l_291.sd;
                        result += l_291.sc;
                        result += l_291.sb;
                        result += l_291.sa;
                        result += l_291.s9;
                        result += l_291.s8;
                        result += l_291.s7;
                        result += l_291.s6;
                        result += l_291.s5;
                        result += l_291.s4;
                        result += l_291.s3;
                        result += l_291.s2;
                        result += l_291.s1;
                        result += l_291.s0;
                        result += l_292;
                        result += l_293.y;
                        result += l_293.x;
                        result += l_294;
                        result += l_295;
                        result += l_296.y;
                        result += l_296.x;
                        result += l_297;
                        result += l_298;
                        result += l_299;
                        result += l_300;
                        int l_301_i0, l_301_i1;
                        for (l_301_i0 = 0; l_301_i0 < 5; l_301_i0++) {
                            for (l_301_i1 = 0; l_301_i1 < 8; l_301_i1++) {
                                result += l_301[l_301_i0][l_301_i1];
                            }
                        }
                        result += l_302.s7;
                        result += l_302.s6;
                        result += l_302.s5;
                        result += l_302.s4;
                        result += l_302.s3;
                        result += l_302.s2;
                        result += l_302.s1;
                        result += l_302.s0;
                        result += l_303;
                        result += l_306;
                        int l_307_i0;
                        for (l_307_i0 = 0; l_307_i0 < 2; l_307_i0++) {
                            result += l_307[l_307_i0];
                        }
                        result += l_308;
                        int l_309_i0;
                        for (l_309_i0 = 0; l_309_i0 < 2; l_309_i0++) {
                            result += l_309[l_309_i0];
                        }
                        result += l_310;
                        result += l_311;
                        result += l_312;
                        result += l_313;
                        result += l_314;
                        result += l_315;
                        result += l_316;
                        result += l_317;
                        atomic_add(&p_417->g_special_values[32 * get_linear_group_id() + 20], result);
                    }
                    else
                    { /* block id: 148 */
                        (1 + 1);
                    }
                }
            }
            (*p_417->g_169) = (((((p_417->g_44.x != ((l_251 = (~((*l_223) != ((*l_223) , ((p_12 && ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-7L), l_318, 0x12L, 0x33L)).xzyzxzwxywzyzzyw)))).s0687, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 1L)).xyxxxyyxxyxxxyyx)).s35, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(p_417->g_319.zyww)).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(p_417->g_320.sc27bffe73ceeffc3)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(0L, 0x56L)).yxxxxyyxxxxxyxxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))((-1L), 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_417->g_321.xx)).yxxxyxyyyxxyyyyy)).s264e)).lo)), p_12, 1L, (-1L), 1L)).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_417->g_322.s5d77aff9587e2e0d)))).sd547))), 0x3EL, 0L, 0x3CL, 1L)).s0655310357357447))))).lo)), ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(p_417->g_323.yxxxyyyx)).s3005260700044061, ((VECTOR(int8_t, 4))(p_417->g_324.sd4fc)).zyxzwyzwyxyxwxwz))).even))).s3764374257160505)).s56))), p_12, 0L, ((VECTOR(int8_t, 2))(0x63L)), 0x28L, 8L)).hi)).hi))), 0x49L, 0x7AL))))).xxwwxwzyyzywwyxx)).s9) > (-3L)))))) < l_318)) <= 0UL) , l_318) , 0x7FL) | 0x9DL);
            ++p_417->g_330;
        }
        l_327 &= ((safe_mod_func_int16_t_s_s(((*l_223) == (p_417->g_330 > (GROUP_DIVERGE(0, 1) == ((safe_lshift_func_uint16_t_u_s(((((((*l_351) = (l_328 &= ((safe_div_func_int32_t_s_s((-7L), 0x7D88CABCL)) >= ((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(1UL, ((((*l_345) = &p_417->g_248[9][1][2]) != l_256[3][1]) & (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xCAD3L, ((!(*p_14)) | (*l_223)))), GROUP_DIVERGE(2, 1)))))), p_417->g_323.y)) | FAKE_DIVERGE(p_417->group_0_offset, get_group_id(0), 10))))) || 0UL) > FAKE_DIVERGE(p_417->local_2_offset, get_local_id(2), 10)) != p_13) , GROUP_DIVERGE(2, 1)), l_352)) && p_417->g_78)))), p_417->g_129.x)) == p_417->g_330);
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_22 p_417->g_27 p_417->g_32
 * writes: p_417->g_22 p_417->g_27 p_417->g_32
 */
int32_t * func_17(int32_t * p_18, int16_t * p_19, struct S0 * p_417)
{ /* block id: 6 */
    int32_t *l_25[4];
    int16_t l_31 = 3L;
    int i;
    for (i = 0; i < 4; i++)
        l_25[i] = (void*)0;
    for (p_417->g_22 = 18; (p_417->g_22 > (-15)); p_417->g_22 = safe_sub_func_uint8_t_u_u(p_417->g_22, 1))
    { /* block id: 9 */
        return l_25[0];
    }
    ++p_417->g_27;
    --p_417->g_32;
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_169 p_417->g_56 p_417->g_216 p_417->g_78
 * writes: p_417->g_56
 */
int8_t  func_36(uint32_t  p_37, uint64_t  p_38, int16_t * p_39, uint16_t  p_40, struct S0 * p_417)
{ /* block id: 93 */
    int32_t **l_191 = &p_417->g_169;
    int32_t ***l_192 = (void*)0;
    int32_t ***l_193 = (void*)0;
    int32_t ***l_194 = &l_191;
    int32_t l_195 = 0x7117B5E3L;
    int32_t *l_196 = &p_417->g_56[7][0];
    int32_t *l_197 = &p_417->g_56[4][0];
    int32_t *l_198 = &p_417->g_56[7][0];
    int32_t *l_199 = &l_195;
    int32_t l_200 = (-1L);
    int32_t *l_201 = &p_417->g_56[8][0];
    int32_t *l_202 = &p_417->g_56[7][0];
    int32_t *l_203 = &p_417->g_56[2][0];
    int32_t *l_204[2][10][6] = {{{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195}},{{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195}}};
    int32_t l_205 = 0x2BAA0D8AL;
    int32_t l_207 = 0x36B21CC5L;
    int8_t l_208[9] = {0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL};
    uint32_t l_209 = 1UL;
    int i, j, k;
    (*l_194) = l_191;
    ++l_209;
    for (l_205 = 0; (l_205 <= 13); l_205 = safe_add_func_uint8_t_u_u(l_205, 8))
    { /* block id: 98 */
        uint8_t l_218 = 1UL;
        (*p_417->g_169) = (*p_417->g_169);
        for (p_38 = 28; (p_38 != 32); p_38++)
        { /* block id: 102 */
            int64_t l_217 = 0x65FB2DB2D0B937F4L;
            (*l_198) = 0x3B7801C7L;
            (*l_201) |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(p_417->g_216.sbc04)), 0x5FA39C59L, (-7L), 0x3A34304AL)).odd)).y;
            --l_218;
        }
    }
    return p_417->g_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_56 p_417->g_58 p_417->g_comm_values p_417->g_86 p_417->g_44 p_417->g_97 p_417->g_83 p_417->g_78 p_417->g_130 p_417->g_129 p_417->g_169
 * writes: p_417->g_78 p_417->g_56 p_417->g_97 p_417->g_83 p_417->g_169
 */
int16_t * func_45(int16_t * p_46, uint32_t  p_47, uint64_t  p_48, struct S0 * p_417)
{ /* block id: 21 */
    int32_t *l_61 = (void*)0;
    uint8_t *l_92[4][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
    int16_t *l_95[5][8][1] = {{{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58}},{{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58}},{{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58}},{{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58}},{{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58},{&p_417->g_58}}};
    int32_t l_96[10][8][3] = {{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}}};
    int64_t l_101 = 0L;
    VECTOR(int32_t, 16) l_102 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L, (VECTOR(int32_t, 2))((-3L), 0L), (VECTOR(int32_t, 2))((-3L), 0L), (-3L), 0L, (-3L), 0L);
    VECTOR(int64_t, 8) l_157 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L));
    uint64_t *l_162 = &p_417->g_100;
    int i, j, k;
    for (p_48 = (-23); (p_48 > 48); p_48++)
    { /* block id: 24 */
        int32_t **l_62 = &l_61;
        VECTOR(int8_t, 4) l_79 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-3L)), (-3L));
        uint8_t *l_82 = &p_417->g_83;
        int16_t *l_94 = &p_417->g_58;
        int16_t **l_93 = &l_94;
        uint64_t *l_98 = (void*)0;
        uint64_t *l_99 = &p_417->g_100;
        int32_t *l_124 = &p_417->g_56[4][0];
        VECTOR(uint16_t, 2) l_131 = (VECTOR(uint16_t, 2))(0x88F8L, 0x2510L);
        VECTOR(uint8_t, 16) l_160 = (VECTOR(uint8_t, 16))(0x59L, (VECTOR(uint8_t, 4))(0x59L, (VECTOR(uint8_t, 2))(0x59L, 0x6CL), 0x6CL), 0x6CL, 0x59L, 0x6CL, (VECTOR(uint8_t, 2))(0x59L, 0x6CL), (VECTOR(uint8_t, 2))(0x59L, 0x6CL), 0x59L, 0x6CL, 0x59L, 0x6CL);
        int i;
        (*l_62) = l_61;
        (*l_124) = ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(func_67((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_76(((p_417->g_78 = p_47) , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_79.zwwyxyyx)).s2, ((safe_add_func_uint8_t_u_u(((*l_82)--), 0x60L)) < p_47), ((VECTOR(int8_t, 4))(p_417->g_86.s0062)), 0x61L, 0x2AL)).s6), p_417), (FAKE_DIVERGE(p_417->local_1_offset, get_local_id(1), 10) , (*p_46)))), ((((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((((((((((l_102.s0 &= (((((*l_99) = ((p_47 || ((safe_div_func_uint8_t_u_u(((p_417->g_97 = ((safe_sub_func_uint16_t_u_u(((*p_46) ^ (((*l_93) = ((l_92[1][0][0] != l_82) , p_46)) != l_95[4][5][0])), 1UL)) ^ l_96[2][2][2])) < 0x6E1A5D36L), p_417->g_44.x)) == p_417->g_44.y)) | 0x5CL)) , p_417->g_44.y) <= l_101) || (-7L))) & (-1L)) ^ l_96[2][2][2]) && p_47) , p_47) , p_417->g_44.y) | p_417->g_comm_values[p_417->tid]) , p_417->g_comm_values[p_417->tid]) < 0UL), (-1L), 0x72307333L, 0x55F1929AL)), ((VECTOR(int32_t, 4))((-1L))))).s62, ((VECTOR(int32_t, 2))(0x735042E9L))))).odd , p_417->g_comm_values[p_417->tid]) >= p_47))), p_46, p_46, l_96[2][2][2], p_417), p_48)) >= p_48), p_417->g_86.s3)) != (*p_46));
        (*l_124) = (p_417->g_86.s4 != p_417->g_44.y);
        if ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_417->local_2_offset, get_local_id(2), 10), (-4L))))
        { /* block id: 41 */
            VECTOR(uint16_t, 8) l_132 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xDA37L), 0xDA37L), 0xDA37L, 1UL, 0xDA37L);
            uint32_t l_133 = 4294967295UL;
            VECTOR(uint32_t, 16) l_148 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x8D395282L), 0x8D395282L), 0x8D395282L, 7UL, 0x8D395282L, (VECTOR(uint32_t, 2))(7UL, 0x8D395282L), (VECTOR(uint32_t, 2))(7UL, 0x8D395282L), 7UL, 0x8D395282L, 7UL, 0x8D395282L);
            int32_t ***l_156 = &l_62;
            uint64_t *l_161 = &p_417->g_100;
            int64_t *l_163 = &l_101;
            int i;
            for (p_417->g_97 = 17; (p_417->g_97 >= 27); p_417->g_97 = safe_add_func_uint32_t_u_u(p_417->g_97, 1))
            { /* block id: 44 */
                int32_t l_136 = 4L;
                VECTOR(int32_t, 8) l_147 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
                int32_t l_149 = 0x0830B306L;
                int64_t *l_150 = &l_101;
                int64_t *l_151[7][1][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                p_417->g_56[5][0] = (((VECTOR(uint32_t, 16))(0x3918D4D5L, 0xE918CE74L, ((VECTOR(uint32_t, 2))(p_417->g_129.xx)), 1UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_417->g_130.xyyyyyxxyxxyxxxy)).s38)), 0xCB3A65C2L, 0x69FC186FL)), p_417->g_56[6][0], GROUP_DIVERGE(1, 1), 0UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_131.xxxy)).zxyyyxxw)).s01, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_132.s53)), ((VECTOR(uint16_t, 2))(0xC0FFL, 0x8DBAL)), 65535UL, 0xB201L, 0xCDBAL, 65535UL)))).s77))).yyyy)).w, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(1UL, 0xE518A1B9L)), (uint32_t)(l_133 | (safe_add_func_int32_t_s_s(((5UL | (l_136 &= p_47)) > p_417->g_44.y), (((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((((((safe_mod_func_uint32_t_u_u((*l_124), (l_132.s1 , p_417->g_83))) , (p_417->g_comm_values[p_417->tid] &= (((safe_sub_func_uint8_t_u_u((((*l_150) |= (l_149 = ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_147.s1416701017473365)))).s89, ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(l_148.se9a6d486)).s3234030034344107, ((VECTOR(uint32_t, 2))(1UL, 1UL)).xxyxyxxxyxxyyxyy, ((VECTOR(uint32_t, 8))(3UL, (((p_46 == &p_417->g_58) >= 0x7DL) < p_417->g_44.x), 0x7EFDFD44L, FAKE_DIVERGE(p_417->local_0_offset, get_local_id(0), 10), 0x90286014L, ((VECTOR(uint32_t, 2))(0xFDC75F4AL)), 0x59C66F5CL)).s5327453612670227))).s73))).hi)) || p_48), p_48)) && l_147.s2) >= (*p_46)))) | p_47) == 0x3FDFL) == p_47) == p_417->g_129.w) <= p_47), 0x012965F4L)), l_133)), p_48)) , &p_46) != (void*)0)))), (uint32_t)p_48))), ((VECTOR(uint32_t, 4))(1UL)), 0xCCCF155AL, 4294967288UL)).s67, (uint32_t)8UL))), 0x43F8A5E6L)).lo, ((VECTOR(uint32_t, 2))(0xA859A467L))))), 8UL, 0xD7632F3CL)).s2 < p_417->g_56[3][0]);
                (*l_62) = &p_417->g_56[7][0];
            }
            (*l_62) = &p_417->g_56[5][0];
            l_96[2][2][2] &= (((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((((*l_156) = (p_48 , &l_124)) == &l_61) > ((!p_417->g_58) & ((((((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_157.s30)), (safe_add_func_int16_t_s_s((p_417->g_78 , (((*l_163) = (((l_160.sb == (((((*l_61) | ((VECTOR(uint64_t, 2))(0xDF3568317A62B3F2L, 0x53A475F9C8F57945L)).even) , l_161) == l_162) & p_417->g_130.x)) && (*l_124)) <= p_47)) || (*l_124))), (*l_61))), ((VECTOR(int64_t, 2))(4L)), ((VECTOR(int64_t, 2))(0x5E7C2BC51397EB43L)), ((VECTOR(int64_t, 8))(0x1F7C4095CDC65A50L)), (-1L))).s30ad, ((VECTOR(int64_t, 4))(4L))))).y , (*l_61)) > p_47) , p_417->g_129.y) < 4294967287UL))), 2)), p_47)) ^ p_417->g_129.w) ^ p_47);
        }
        else
        { /* block id: 56 */
            return &p_417->g_58;
        }
    }
    for (p_417->g_83 = (-29); (p_417->g_83 != 57); p_417->g_83 = safe_add_func_int64_t_s_s(p_417->g_83, 5))
    { /* block id: 62 */
        int32_t **l_171 = (void*)0;
        int32_t **l_172 = &p_417->g_169;
        for (p_417->g_78 = 25; (p_417->g_78 < 38); p_417->g_78 = safe_add_func_uint8_t_u_u(p_417->g_78, 1))
        { /* block id: 65 */
            int32_t *l_168 = &l_96[6][7][2];
            int32_t **l_170 = &l_61;
            (*l_170) = (p_417->g_169 = l_168);
            (*l_170) = &l_96[3][5][2];
        }
        (*l_172) = &p_417->g_56[1][0];
        (*p_417->g_169) = 1L;
    }
    for (p_417->g_97 = (-14); (p_417->g_97 != 35); p_417->g_97 = safe_add_func_uint16_t_u_u(p_417->g_97, 7))
    { /* block id: 75 */
        uint64_t l_175 = 1UL;
        VECTOR(int32_t, 2) l_189 = (VECTOR(int32_t, 2))((-4L), 1L);
        int32_t **l_190 = &p_417->g_169;
        int i;
        --l_175;
        if ((atomic_inc(&p_417->g_atomic_input[32 * get_linear_group_id() + 14]) == 2))
        { /* block id: 78 */
            uint16_t l_178 = 0x4001L;
            l_178++;
            for (l_178 = 0; (l_178 > 50); l_178 = safe_add_func_int64_t_s_s(l_178, 2))
            { /* block id: 82 */
                int16_t l_183 = 0x765CL;
                int32_t l_184 = 0x7BFA90F9L;
                int32_t l_185 = (-4L);
                uint32_t l_186 = 4294967291UL;
                l_186++;
            }
            unsigned int result = 0;
            result += l_178;
            atomic_add(&p_417->g_special_values[32 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 85 */
            (1 + 1);
        }
        (*l_190) = (((VECTOR(int32_t, 4))(l_189.yxxx)).x , &p_417->g_56[7][0]);
        (*l_190) = (*l_190);
    }
    (*p_417->g_169) = (*p_417->g_169);
    return &p_417->g_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_56
 * writes: p_417->g_56
 */
int16_t * func_49(uint32_t  p_50, int32_t  p_51, int32_t * p_52, uint32_t  p_53, struct S0 * p_417)
{ /* block id: 17 */
    int32_t *l_55 = &p_417->g_56[7][0];
    int16_t *l_57 = &p_417->g_58;
    (*p_52) = 0L;
    (*l_55) &= (*p_52);
    return l_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_86 p_417->g_44 p_417->g_97 p_417->g_comm_values p_417->g_83 p_417->g_56
 * writes: p_417->g_56
 */
uint8_t  func_67(int64_t  p_68, int16_t * p_69, int16_t * p_70, int32_t  p_71, struct S0 * p_417)
{ /* block id: 35 */
    uint64_t l_111 = 0x1AE6350AEA437AC7L;
    VECTOR(int8_t, 16) l_112 = (VECTOR(int8_t, 16))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 0x68L), 0x68L), 0x68L, 0x7CL, 0x68L, (VECTOR(int8_t, 2))(0x7CL, 0x68L), (VECTOR(int8_t, 2))(0x7CL, 0x68L), 0x7CL, 0x68L, 0x7CL, 0x68L);
    int64_t *l_121[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_122 = 0L;
    int32_t *l_123 = &p_417->g_56[6][0];
    int i;
    (*l_123) |= ((((((safe_add_func_int64_t_s_s((l_122 = (((safe_sub_func_int8_t_s_s(p_68, (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-1L), l_111, 0x1FL, 4L)).wxzwzwwzwzwxxzzw)).s63c8))))))), ((VECTOR(int8_t, 4))((-4L), 1L, 0x3EL, 2L))))).zxyywyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_112.scd)).xyyyyyyxxxyxxyxx)).odd))).hi)))).w, (safe_rshift_func_uint8_t_u_s(((&p_71 != &p_71) ^ (p_417->g_86.s6 > 4L)), 3)))))) > ((((l_112.s8 , (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_417->global_1_offset, get_global_id(1), 10), 7UL)), p_417->g_44.x))) == p_71) < p_417->g_86.s6) < FAKE_DIVERGE(p_417->global_0_offset, get_global_id(0), 10))) != (-1L))), p_417->g_97)) | 0UL) , p_417->g_comm_values[p_417->tid]) == p_417->g_83) , 0xF92D8F59L) , l_122);
    return (*l_123);
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_56
 * writes: p_417->g_56
 */
int16_t  func_76(int8_t  p_77, struct S0 * p_417)
{ /* block id: 28 */
    int32_t *l_87 = &p_417->g_56[7][0];
    (*l_87) |= p_77;
    return (*l_87);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S0 c_418;
    struct S0* p_417 = &c_418;
    struct S0 c_419 = {
        7L, // p_417->g_16
        (void*)0, // p_417->g_20
        8L, // p_417->g_22
        {&p_417->g_22,&p_417->g_22,(void*)0,&p_417->g_22,&p_417->g_22,&p_417->g_22,&p_417->g_22,(void*)0,&p_417->g_22,&p_417->g_22}, // p_417->g_21
        (-8L), // p_417->g_26
        5UL, // p_417->g_27
        0x45C935CB51404FC4L, // p_417->g_30
        0x4EA6L, // p_417->g_32
        (VECTOR(uint8_t, 2))(0xCFL, 1UL), // p_417->g_44
        {{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L},{0x0AFD3265L}}, // p_417->g_56
        0x0A03L, // p_417->g_58
        0xBA2848AAL, // p_417->g_78
        0x62L, // p_417->g_83
        (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 6L), 6L), 6L, (-9L), 6L), // p_417->g_86
        0UL, // p_417->g_97
        0x8AEFE3E8DDC735B2L, // p_417->g_100
        (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0UL), 0UL), // p_417->g_129
        (VECTOR(uint32_t, 2))(0x4F0C4F71L, 0x44FEC2E3L), // p_417->g_130
        &p_417->g_56[7][0], // p_417->g_169
        5L, // p_417->g_206
        (VECTOR(int32_t, 16))(0x64FBA54FL, (VECTOR(int32_t, 4))(0x64FBA54FL, (VECTOR(int32_t, 2))(0x64FBA54FL, 0x61E787EEL), 0x61E787EEL), 0x61E787EEL, 0x64FBA54FL, 0x61E787EEL, (VECTOR(int32_t, 2))(0x64FBA54FL, 0x61E787EEL), (VECTOR(int32_t, 2))(0x64FBA54FL, 0x61E787EEL), 0x64FBA54FL, 0x61E787EEL, 0x64FBA54FL, 0x61E787EEL), // p_417->g_216
        {{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}},{{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L},{0x424F1CAD6BCB5EA1L,(-1L),(-3L),1L}}}, // p_417->g_248
        {{0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L},{0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L},{0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L},{0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L,0x0339AB71L}}, // p_417->g_253
        &p_417->g_253[3][3], // p_417->g_252
        1UL, // p_417->g_257
        (VECTOR(int32_t, 8))(0x244FC275L, (VECTOR(int32_t, 4))(0x244FC275L, (VECTOR(int32_t, 2))(0x244FC275L, (-1L)), (-1L)), (-1L), 0x244FC275L, (-1L)), // p_417->g_264
        (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x6BL), 0x6BL), // p_417->g_319
        (VECTOR(int8_t, 16))(0x53L, (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, 0x0AL), 0x0AL), 0x0AL, 0x53L, 0x0AL, (VECTOR(int8_t, 2))(0x53L, 0x0AL), (VECTOR(int8_t, 2))(0x53L, 0x0AL), 0x53L, 0x0AL, 0x53L, 0x0AL), // p_417->g_320
        (VECTOR(int8_t, 2))(0x11L, 0x20L), // p_417->g_321
        (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x31L), 0x31L), 0x31L, 4L, 0x31L, (VECTOR(int8_t, 2))(4L, 0x31L), (VECTOR(int8_t, 2))(4L, 0x31L), 4L, 0x31L, 4L, 0x31L), // p_417->g_322
        (VECTOR(int8_t, 2))((-9L), 1L), // p_417->g_323
        (VECTOR(int8_t, 16))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x73L), 0x73L), 0x73L, 0x04L, 0x73L, (VECTOR(int8_t, 2))(0x04L, 0x73L), (VECTOR(int8_t, 2))(0x04L, 0x73L), 0x04L, 0x73L, 0x04L, 0x73L), // p_417->g_324
        0x308C2293C4C162A5L, // p_417->g_330
        (void*)0, // p_417->g_355
        (VECTOR(int16_t, 16))(0x6580L, (VECTOR(int16_t, 4))(0x6580L, (VECTOR(int16_t, 2))(0x6580L, 9L), 9L), 9L, 0x6580L, 9L, (VECTOR(int16_t, 2))(0x6580L, 9L), (VECTOR(int16_t, 2))(0x6580L, 9L), 0x6580L, 9L, 0x6580L, 9L), // p_417->g_378
        &p_417->g_20, // p_417->g_390
        (VECTOR(int32_t, 4))(0x5A12945AL, (VECTOR(int32_t, 2))(0x5A12945AL, 0x4AA0F856L), 0x4AA0F856L), // p_417->g_397
        &p_417->g_169, // p_417->g_400
        0x4A44L, // p_417->g_411
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_417->g_414
        0, // p_417->v_collective
        sequence_input[get_global_id(0)], // p_417->global_0_offset
        sequence_input[get_global_id(1)], // p_417->global_1_offset
        sequence_input[get_global_id(2)], // p_417->global_2_offset
        sequence_input[get_local_id(0)], // p_417->local_0_offset
        sequence_input[get_local_id(1)], // p_417->local_1_offset
        sequence_input[get_local_id(2)], // p_417->local_2_offset
        sequence_input[get_group_id(0)], // p_417->group_0_offset
        sequence_input[get_group_id(1)], // p_417->group_1_offset
        sequence_input[get_group_id(2)], // p_417->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_417->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_418 = c_419;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_417);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_417->g_16, "p_417->g_16", print_hash_value);
    transparent_crc(p_417->g_22, "p_417->g_22", print_hash_value);
    transparent_crc(p_417->g_26, "p_417->g_26", print_hash_value);
    transparent_crc(p_417->g_27, "p_417->g_27", print_hash_value);
    transparent_crc(p_417->g_30, "p_417->g_30", print_hash_value);
    transparent_crc(p_417->g_32, "p_417->g_32", print_hash_value);
    transparent_crc(p_417->g_44.x, "p_417->g_44.x", print_hash_value);
    transparent_crc(p_417->g_44.y, "p_417->g_44.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_417->g_56[i][j], "p_417->g_56[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_417->g_58, "p_417->g_58", print_hash_value);
    transparent_crc(p_417->g_78, "p_417->g_78", print_hash_value);
    transparent_crc(p_417->g_83, "p_417->g_83", print_hash_value);
    transparent_crc(p_417->g_86.s0, "p_417->g_86.s0", print_hash_value);
    transparent_crc(p_417->g_86.s1, "p_417->g_86.s1", print_hash_value);
    transparent_crc(p_417->g_86.s2, "p_417->g_86.s2", print_hash_value);
    transparent_crc(p_417->g_86.s3, "p_417->g_86.s3", print_hash_value);
    transparent_crc(p_417->g_86.s4, "p_417->g_86.s4", print_hash_value);
    transparent_crc(p_417->g_86.s5, "p_417->g_86.s5", print_hash_value);
    transparent_crc(p_417->g_86.s6, "p_417->g_86.s6", print_hash_value);
    transparent_crc(p_417->g_86.s7, "p_417->g_86.s7", print_hash_value);
    transparent_crc(p_417->g_97, "p_417->g_97", print_hash_value);
    transparent_crc(p_417->g_100, "p_417->g_100", print_hash_value);
    transparent_crc(p_417->g_129.x, "p_417->g_129.x", print_hash_value);
    transparent_crc(p_417->g_129.y, "p_417->g_129.y", print_hash_value);
    transparent_crc(p_417->g_129.z, "p_417->g_129.z", print_hash_value);
    transparent_crc(p_417->g_129.w, "p_417->g_129.w", print_hash_value);
    transparent_crc(p_417->g_130.x, "p_417->g_130.x", print_hash_value);
    transparent_crc(p_417->g_130.y, "p_417->g_130.y", print_hash_value);
    transparent_crc(p_417->g_206, "p_417->g_206", print_hash_value);
    transparent_crc(p_417->g_216.s0, "p_417->g_216.s0", print_hash_value);
    transparent_crc(p_417->g_216.s1, "p_417->g_216.s1", print_hash_value);
    transparent_crc(p_417->g_216.s2, "p_417->g_216.s2", print_hash_value);
    transparent_crc(p_417->g_216.s3, "p_417->g_216.s3", print_hash_value);
    transparent_crc(p_417->g_216.s4, "p_417->g_216.s4", print_hash_value);
    transparent_crc(p_417->g_216.s5, "p_417->g_216.s5", print_hash_value);
    transparent_crc(p_417->g_216.s6, "p_417->g_216.s6", print_hash_value);
    transparent_crc(p_417->g_216.s7, "p_417->g_216.s7", print_hash_value);
    transparent_crc(p_417->g_216.s8, "p_417->g_216.s8", print_hash_value);
    transparent_crc(p_417->g_216.s9, "p_417->g_216.s9", print_hash_value);
    transparent_crc(p_417->g_216.sa, "p_417->g_216.sa", print_hash_value);
    transparent_crc(p_417->g_216.sb, "p_417->g_216.sb", print_hash_value);
    transparent_crc(p_417->g_216.sc, "p_417->g_216.sc", print_hash_value);
    transparent_crc(p_417->g_216.sd, "p_417->g_216.sd", print_hash_value);
    transparent_crc(p_417->g_216.se, "p_417->g_216.se", print_hash_value);
    transparent_crc(p_417->g_216.sf, "p_417->g_216.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_417->g_248[i][j][k], "p_417->g_248[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_417->g_253[i][j], "p_417->g_253[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_417->g_257, "p_417->g_257", print_hash_value);
    transparent_crc(p_417->g_264.s0, "p_417->g_264.s0", print_hash_value);
    transparent_crc(p_417->g_264.s1, "p_417->g_264.s1", print_hash_value);
    transparent_crc(p_417->g_264.s2, "p_417->g_264.s2", print_hash_value);
    transparent_crc(p_417->g_264.s3, "p_417->g_264.s3", print_hash_value);
    transparent_crc(p_417->g_264.s4, "p_417->g_264.s4", print_hash_value);
    transparent_crc(p_417->g_264.s5, "p_417->g_264.s5", print_hash_value);
    transparent_crc(p_417->g_264.s6, "p_417->g_264.s6", print_hash_value);
    transparent_crc(p_417->g_264.s7, "p_417->g_264.s7", print_hash_value);
    transparent_crc(p_417->g_319.x, "p_417->g_319.x", print_hash_value);
    transparent_crc(p_417->g_319.y, "p_417->g_319.y", print_hash_value);
    transparent_crc(p_417->g_319.z, "p_417->g_319.z", print_hash_value);
    transparent_crc(p_417->g_319.w, "p_417->g_319.w", print_hash_value);
    transparent_crc(p_417->g_320.s0, "p_417->g_320.s0", print_hash_value);
    transparent_crc(p_417->g_320.s1, "p_417->g_320.s1", print_hash_value);
    transparent_crc(p_417->g_320.s2, "p_417->g_320.s2", print_hash_value);
    transparent_crc(p_417->g_320.s3, "p_417->g_320.s3", print_hash_value);
    transparent_crc(p_417->g_320.s4, "p_417->g_320.s4", print_hash_value);
    transparent_crc(p_417->g_320.s5, "p_417->g_320.s5", print_hash_value);
    transparent_crc(p_417->g_320.s6, "p_417->g_320.s6", print_hash_value);
    transparent_crc(p_417->g_320.s7, "p_417->g_320.s7", print_hash_value);
    transparent_crc(p_417->g_320.s8, "p_417->g_320.s8", print_hash_value);
    transparent_crc(p_417->g_320.s9, "p_417->g_320.s9", print_hash_value);
    transparent_crc(p_417->g_320.sa, "p_417->g_320.sa", print_hash_value);
    transparent_crc(p_417->g_320.sb, "p_417->g_320.sb", print_hash_value);
    transparent_crc(p_417->g_320.sc, "p_417->g_320.sc", print_hash_value);
    transparent_crc(p_417->g_320.sd, "p_417->g_320.sd", print_hash_value);
    transparent_crc(p_417->g_320.se, "p_417->g_320.se", print_hash_value);
    transparent_crc(p_417->g_320.sf, "p_417->g_320.sf", print_hash_value);
    transparent_crc(p_417->g_321.x, "p_417->g_321.x", print_hash_value);
    transparent_crc(p_417->g_321.y, "p_417->g_321.y", print_hash_value);
    transparent_crc(p_417->g_322.s0, "p_417->g_322.s0", print_hash_value);
    transparent_crc(p_417->g_322.s1, "p_417->g_322.s1", print_hash_value);
    transparent_crc(p_417->g_322.s2, "p_417->g_322.s2", print_hash_value);
    transparent_crc(p_417->g_322.s3, "p_417->g_322.s3", print_hash_value);
    transparent_crc(p_417->g_322.s4, "p_417->g_322.s4", print_hash_value);
    transparent_crc(p_417->g_322.s5, "p_417->g_322.s5", print_hash_value);
    transparent_crc(p_417->g_322.s6, "p_417->g_322.s6", print_hash_value);
    transparent_crc(p_417->g_322.s7, "p_417->g_322.s7", print_hash_value);
    transparent_crc(p_417->g_322.s8, "p_417->g_322.s8", print_hash_value);
    transparent_crc(p_417->g_322.s9, "p_417->g_322.s9", print_hash_value);
    transparent_crc(p_417->g_322.sa, "p_417->g_322.sa", print_hash_value);
    transparent_crc(p_417->g_322.sb, "p_417->g_322.sb", print_hash_value);
    transparent_crc(p_417->g_322.sc, "p_417->g_322.sc", print_hash_value);
    transparent_crc(p_417->g_322.sd, "p_417->g_322.sd", print_hash_value);
    transparent_crc(p_417->g_322.se, "p_417->g_322.se", print_hash_value);
    transparent_crc(p_417->g_322.sf, "p_417->g_322.sf", print_hash_value);
    transparent_crc(p_417->g_323.x, "p_417->g_323.x", print_hash_value);
    transparent_crc(p_417->g_323.y, "p_417->g_323.y", print_hash_value);
    transparent_crc(p_417->g_324.s0, "p_417->g_324.s0", print_hash_value);
    transparent_crc(p_417->g_324.s1, "p_417->g_324.s1", print_hash_value);
    transparent_crc(p_417->g_324.s2, "p_417->g_324.s2", print_hash_value);
    transparent_crc(p_417->g_324.s3, "p_417->g_324.s3", print_hash_value);
    transparent_crc(p_417->g_324.s4, "p_417->g_324.s4", print_hash_value);
    transparent_crc(p_417->g_324.s5, "p_417->g_324.s5", print_hash_value);
    transparent_crc(p_417->g_324.s6, "p_417->g_324.s6", print_hash_value);
    transparent_crc(p_417->g_324.s7, "p_417->g_324.s7", print_hash_value);
    transparent_crc(p_417->g_324.s8, "p_417->g_324.s8", print_hash_value);
    transparent_crc(p_417->g_324.s9, "p_417->g_324.s9", print_hash_value);
    transparent_crc(p_417->g_324.sa, "p_417->g_324.sa", print_hash_value);
    transparent_crc(p_417->g_324.sb, "p_417->g_324.sb", print_hash_value);
    transparent_crc(p_417->g_324.sc, "p_417->g_324.sc", print_hash_value);
    transparent_crc(p_417->g_324.sd, "p_417->g_324.sd", print_hash_value);
    transparent_crc(p_417->g_324.se, "p_417->g_324.se", print_hash_value);
    transparent_crc(p_417->g_324.sf, "p_417->g_324.sf", print_hash_value);
    transparent_crc(p_417->g_330, "p_417->g_330", print_hash_value);
    transparent_crc(p_417->g_378.s0, "p_417->g_378.s0", print_hash_value);
    transparent_crc(p_417->g_378.s1, "p_417->g_378.s1", print_hash_value);
    transparent_crc(p_417->g_378.s2, "p_417->g_378.s2", print_hash_value);
    transparent_crc(p_417->g_378.s3, "p_417->g_378.s3", print_hash_value);
    transparent_crc(p_417->g_378.s4, "p_417->g_378.s4", print_hash_value);
    transparent_crc(p_417->g_378.s5, "p_417->g_378.s5", print_hash_value);
    transparent_crc(p_417->g_378.s6, "p_417->g_378.s6", print_hash_value);
    transparent_crc(p_417->g_378.s7, "p_417->g_378.s7", print_hash_value);
    transparent_crc(p_417->g_378.s8, "p_417->g_378.s8", print_hash_value);
    transparent_crc(p_417->g_378.s9, "p_417->g_378.s9", print_hash_value);
    transparent_crc(p_417->g_378.sa, "p_417->g_378.sa", print_hash_value);
    transparent_crc(p_417->g_378.sb, "p_417->g_378.sb", print_hash_value);
    transparent_crc(p_417->g_378.sc, "p_417->g_378.sc", print_hash_value);
    transparent_crc(p_417->g_378.sd, "p_417->g_378.sd", print_hash_value);
    transparent_crc(p_417->g_378.se, "p_417->g_378.se", print_hash_value);
    transparent_crc(p_417->g_378.sf, "p_417->g_378.sf", print_hash_value);
    transparent_crc(p_417->g_397.x, "p_417->g_397.x", print_hash_value);
    transparent_crc(p_417->g_397.y, "p_417->g_397.y", print_hash_value);
    transparent_crc(p_417->g_397.z, "p_417->g_397.z", print_hash_value);
    transparent_crc(p_417->g_397.w, "p_417->g_397.w", print_hash_value);
    transparent_crc(p_417->g_411, "p_417->g_411", print_hash_value);
    transparent_crc(p_417->g_414.s0, "p_417->g_414.s0", print_hash_value);
    transparent_crc(p_417->g_414.s1, "p_417->g_414.s1", print_hash_value);
    transparent_crc(p_417->g_414.s2, "p_417->g_414.s2", print_hash_value);
    transparent_crc(p_417->g_414.s3, "p_417->g_414.s3", print_hash_value);
    transparent_crc(p_417->g_414.s4, "p_417->g_414.s4", print_hash_value);
    transparent_crc(p_417->g_414.s5, "p_417->g_414.s5", print_hash_value);
    transparent_crc(p_417->g_414.s6, "p_417->g_414.s6", print_hash_value);
    transparent_crc(p_417->g_414.s7, "p_417->g_414.s7", print_hash_value);
    transparent_crc(p_417->v_collective, "p_417->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 32; i++)
            transparent_crc(p_417->g_special_values[i + 32 * get_linear_group_id()], "p_417->g_special_values[i + 32 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_417->l_comm_values[get_linear_local_id()], "p_417->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_417->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_417->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
