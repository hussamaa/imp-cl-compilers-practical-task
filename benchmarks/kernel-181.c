// --atomics 52 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 25,7,42 -l 5,1,3
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

__constant uint32_t permutations[10][15] = {
{14,0,6,12,8,10,4,9,11,3,7,5,1,2,13}, // permutation 0
{12,8,9,5,10,11,7,13,14,4,1,2,3,0,6}, // permutation 1
{6,8,4,12,3,10,9,5,2,1,7,11,13,0,14}, // permutation 2
{12,3,4,11,1,2,7,14,0,8,6,9,13,10,5}, // permutation 3
{7,5,11,6,8,13,4,9,10,1,12,2,0,3,14}, // permutation 4
{11,2,0,9,13,6,10,12,1,14,4,5,7,3,8}, // permutation 5
{1,2,9,3,4,8,0,14,11,7,10,12,6,13,5}, // permutation 6
{10,0,1,14,2,3,7,4,12,9,5,13,8,6,11}, // permutation 7
{2,0,3,6,11,13,12,9,14,1,7,8,4,10,5}, // permutation 8
{3,12,7,14,11,10,0,6,2,13,5,9,8,4,1} // permutation 9
};

// Seed: 1892659156

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

struct S1 {
   uint8_t  f0;
   volatile uint64_t  f1;
   int32_t  f2;
   struct S0  f3;
   int8_t  f4;
   volatile int16_t  f5;
   int64_t  f6;
   int64_t  f7;
};

union U2 {
   volatile int16_t  f0;
   volatile uint32_t  f1;
   volatile int8_t * f2;
   volatile int64_t  f3;
   volatile struct S1  f4;
};

union U3 {
   volatile uint64_t  f0;
   int64_t  f1;
};

struct S4 {
    uint8_t g_6;
    struct S1 g_9[1][2][8];
    int32_t * volatile g_13;
    int32_t g_15;
    int32_t * volatile g_14;
    int32_t * volatile g_18;
    volatile int8_t g_53;
    volatile int8_t *g_52;
    struct S0 g_78;
    struct S0 * volatile g_79;
    struct S0 g_80;
    volatile int64_t g_134;
    int64_t g_135;
    VECTOR(int32_t, 4) g_136;
    struct S0 g_151;
    struct S0 * volatile g_152[10][5][2];
    struct S0 g_153[3];
    volatile VECTOR(int64_t, 16) g_176;
    VECTOR(uint16_t, 8) g_184;
    int32_t g_192;
    int32_t *g_198;
    int16_t g_208;
    VECTOR(int16_t, 16) g_214;
    uint32_t g_216[8];
    struct S1 g_220;
    struct S1 * volatile g_219;
    VECTOR(int64_t, 16) g_238;
    volatile uint32_t g_246;
    volatile uint32_t *g_245;
    int32_t g_249;
    volatile struct S0 g_261;
    volatile struct S0 g_263;
    VECTOR(uint64_t, 8) g_293;
    VECTOR(int32_t, 4) g_302;
    int8_t ** volatile *g_311[4];
    uint64_t g_313;
    union U2 g_315;
    int32_t ** volatile g_332;
    VECTOR(int16_t, 8) g_339;
    uint32_t g_342;
    int8_t g_356;
    uint8_t g_372[2][9][3];
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
uint8_t  func_1(struct S4 * p_373);
int8_t  func_2(uint16_t  p_3, int8_t  p_4, struct S4 * p_373);
int32_t * func_20(uint64_t  p_21, struct S4 * p_373);
union U2  func_22(uint64_t  p_23, struct S1 * p_24, struct S4 * p_373);
uint64_t  func_25(uint8_t * p_26, int32_t * p_27, struct S4 * p_373);
int32_t * func_29(uint64_t  p_30, int64_t  p_31, struct S4 * p_373);
uint64_t  func_32(int8_t  p_33, struct S4 * p_373);
uint16_t  func_41(int32_t * p_42, struct S1 * p_43, struct S1 * p_44, uint8_t * p_45, struct S4 * p_373);
struct S1 * func_47(int32_t  p_48, int64_t  p_49, int8_t  p_50, int32_t * p_51, struct S4 * p_373);
struct S0  func_62(struct S1 * p_63, int32_t  p_64, struct S1 * p_65, int16_t  p_66, int32_t  p_67, struct S4 * p_373);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_373->g_6 p_373->l_comm_values p_373->g_9 p_373->g_14 p_373->g_52 p_373->g_53 p_373->g_15 p_373->g_78 p_373->g_79 p_373->g_80 p_373->g_151 p_373->g_136 p_373->g_135 p_373->g_176 p_373->g_184 p_373->g_153.f2 p_373->g_134 p_373->g_219 p_373->g_238 p_373->g_245 p_373->g_220.f4 p_373->g_198 p_373->g_192 p_373->g_220.f3.f1 p_373->g_261 p_373->g_293 p_373->g_302 p_373->g_311 p_373->g_315 p_373->g_332 p_373->g_339 p_373->g_342 p_373->g_comm_values p_373->g_372 p_373->g_263.f1
 * writes: p_373->g_6 p_373->g_9 p_373->g_15 p_373->g_78 p_373->g_153 p_373->g_198 p_373->g_208 p_373->g_216 p_373->g_220 p_373->g_249 p_373->g_192 p_373->g_151.f1 p_373->g_80.f2 p_373->g_263 p_373->g_313 p_373->g_342 p_373->g_comm_values p_373->g_372
 */
uint8_t  func_1(struct S4 * p_373)
{ /* block id: 4 */
    uint8_t *l_5[6];
    int32_t l_340[2][1][10] = {{{0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL}},{{0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL,0x5DC9FEEBL}}};
    uint32_t *l_341[1];
    int8_t *l_355[4][9][5] = {{{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356}},{{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356}},{{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356}},{{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356},{(void*)0,&p_373->g_356,&p_373->g_356,&p_373->g_356,&p_373->g_356}}};
    int32_t l_357[7][2] = {{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL},{(-6L),0x6D22ED3DL}};
    uint32_t l_362 = 0xF20D8B62L;
    uint64_t l_363[6];
    uint32_t l_364 = 0x8AC79D43L;
    int32_t *l_365 = (void*)0;
    int32_t *l_366 = &l_340[0][0][1];
    int64_t *l_367 = (void*)0;
    int64_t *l_368 = (void*)0;
    int32_t l_369 = 0x07FD3616L;
    uint16_t l_370 = 0xF24AL;
    int32_t *l_371[2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_5[i] = &p_373->g_6;
    for (i = 0; i < 1; i++)
        l_341[i] = &p_373->g_342;
    for (i = 0; i < 6; i++)
        l_363[i] = 18446744073709551610UL;
    for (i = 0; i < 2; i++)
        l_371[i] = (void*)0;
    p_373->g_372[0][8][0] |= (l_370 = (func_2(((++p_373->g_6) , GROUP_DIVERGE(0, 1)), p_373->l_comm_values[(safe_mod_func_uint32_t_u_u(p_373->tid, 15))], p_373) == ((0x6F646720L || (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_373->g_339.s3756226035755265)))).odd)).s65)).xxxyyxyx)).s2 , (p_373->g_342++))) || (safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_373->global_2_offset, get_global_id(2), 10), ((l_369 = (p_373->g_comm_values[p_373->tid] ^= (0x2AF6E6AEL != ((*l_366) = (0x019AL || (((VECTOR(uint8_t, 4))(0xB7L, 0xE3L, 0xBBL, 0x96L)).w | (l_364 = ((((-1L) <= ((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_373->global_2_offset, get_global_id(2), 10), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_340[1][0][4], (l_357[1][1] = ((VECTOR(int8_t, 4))((-2L), 5L, 0x74L, 0x46L)).w))), (safe_sub_func_uint16_t_u_u(((4294967292UL >= (safe_div_func_int64_t_s_s(0x4A60314E77A451F7L, l_362))) | l_362), p_373->g_302.w)))))), p_373->g_293.s0)) == l_363[0])) ^ p_373->g_135) == 0xDBL)))))))) && 0x552E01D37402DE39L))))));
    return p_373->g_263.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_9 p_373->g_6 p_373->g_14 p_373->g_52 p_373->g_53 p_373->g_15 p_373->l_comm_values p_373->g_78 p_373->g_79 p_373->g_80 p_373->g_151 p_373->g_136 p_373->g_135 p_373->g_176 p_373->g_184 p_373->g_153.f2 p_373->g_134 p_373->g_219 p_373->g_238 p_373->g_245 p_373->g_220.f4 p_373->g_198 p_373->g_192 p_373->g_220.f3.f1 p_373->g_261 p_373->g_293 p_373->g_302 p_373->g_311 p_373->g_315 p_373->g_332
 * writes: p_373->g_9 p_373->g_6 p_373->g_15 p_373->g_78 p_373->g_153 p_373->g_198 p_373->g_208 p_373->g_216 p_373->g_220 p_373->g_249 p_373->g_192 p_373->g_151.f1 p_373->g_80.f2 p_373->g_263 p_373->g_313
 */
int8_t  func_2(uint16_t  p_3, int8_t  p_4, struct S4 * p_373)
{ /* block id: 6 */
    struct S1 *l_10 = &p_373->g_9[0][0][1];
    int32_t l_38 = (-4L);
    int32_t **l_333 = &p_373->g_198;
    (*l_10) = p_373->g_9[0][0][1];
    for (p_373->g_6 = 0; (p_373->g_6 <= 59); p_373->g_6++)
    { /* block id: 10 */
        uint16_t l_19 = 0xB76FL;
        uint8_t *l_28 = &p_373->g_9[0][0][1].f3.f2;
        struct S1 *l_46 = (void*)0;
        int32_t *l_54[1];
        int32_t l_55 = 0L;
        int32_t **l_335 = &p_373->g_198;
        int32_t ***l_334[10] = {&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335};
        int32_t **l_336[3];
        int i;
        for (i = 0; i < 1; i++)
            l_54[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_336[i] = &p_373->g_198;
        (*p_373->g_14) = p_4;
        l_19 &= ((safe_lshift_func_int8_t_s_s(p_3, 6)) < 9UL);
        (*p_373->g_332) = func_20(((func_22(func_25(l_28, func_29(func_32((4294967295UL & ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_38, p_373->g_9[0][0][1].f0)), (p_373->g_6 | 0x0E45104FL))) ^ (safe_mod_func_uint16_t_u_u(func_41(&l_38, l_46, func_47((l_55 = ((((void*)0 == p_373->g_52) <= p_373->g_9[0][0][1].f7) & 1L)), p_373->g_9[0][0][1].f0, (*p_373->g_52), &l_38, p_373), l_28, p_373), p_373->g_135)))), p_373), p_4, p_373), p_373), l_10, p_373) , 0L) == p_3), p_373);
        (**l_333) ^= (l_333 != (l_336[2] = &p_373->g_198));
    }
    for (p_3 = 0; (p_3 > 16); ++p_3)
    { /* block id: 157 */
        return p_3;
    }
    return (**l_333);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_20(uint64_t  p_21, struct S4 * p_373)
{ /* block id: 142 */
    int32_t *l_317 = (void*)0;
    int32_t *l_318 = (void*)0;
    int32_t *l_319 = (void*)0;
    int32_t l_320 = 0x6DD32B81L;
    int32_t *l_321 = &p_373->g_15;
    int32_t *l_322 = &l_320;
    int32_t *l_323 = &p_373->g_15;
    int32_t *l_324 = &l_320;
    int32_t l_325 = 1L;
    int32_t *l_326 = &p_373->g_15;
    int32_t *l_327[5][8][6] = {{{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325}},{{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325}},{{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325}},{{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325}},{{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325},{(void*)0,&l_320,&p_373->g_15,&l_325,(void*)0,&l_325}}};
    int16_t l_328 = 4L;
    uint8_t l_329[5][2][10] = {{{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL},{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL}},{{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL},{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL}},{{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL},{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL}},{{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL},{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL}},{{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL},{8UL,0x97L,8UL,8UL,0x97L,8UL,8UL,0x97L,8UL,8UL}}};
    int i, j, k;
    if ((atomic_inc(&p_373->g_atomic_input[52 * get_linear_group_id() + 14]) == 3))
    { /* block id: 144 */
        int64_t l_316[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_316[i][j] = 0L;
        }
        l_316[0][1] ^= (-8L);
        unsigned int result = 0;
        int l_316_i0, l_316_i1;
        for (l_316_i0 = 0; l_316_i0 < 1; l_316_i0++) {
            for (l_316_i1 = 0; l_316_i1 < 2; l_316_i1++) {
                result += l_316[l_316_i0][l_316_i1];
            }
        }
        atomic_add(&p_373->g_special_values[52 * get_linear_group_id() + 14], result);
    }
    else
    { /* block id: 146 */
        (1 + 1);
    }
    l_329[0][1][9]++;
    return &p_373->g_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_80.f2 p_373->g_52 p_373->g_53 p_373->g_198 p_373->g_293 p_373->g_184 p_373->g_9.f0 p_373->g_302 p_373->g_311 p_373->g_192 p_373->g_315
 * writes: p_373->g_192 p_373->g_9.f0 p_373->g_313 p_373->g_151.f1
 */
union U2  func_22(uint64_t  p_23, struct S1 * p_24, struct S4 * p_373)
{ /* block id: 133 */
    uint32_t l_289[2];
    VECTOR(uint64_t, 4) l_292 = (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 7UL), 7UL);
    VECTOR(uint64_t, 8) l_294 = (VECTOR(uint64_t, 8))(0x2821DB6B22B6AAF1L, (VECTOR(uint64_t, 4))(0x2821DB6B22B6AAF1L, (VECTOR(uint64_t, 2))(0x2821DB6B22B6AAF1L, 0xEC62A99C4CE3A270L), 0xEC62A99C4CE3A270L), 0xEC62A99C4CE3A270L, 0x2821DB6B22B6AAF1L, 0xEC62A99C4CE3A270L);
    VECTOR(uint64_t, 8) l_295 = (VECTOR(uint64_t, 8))(0x4D94ACE549A20B9EL, (VECTOR(uint64_t, 4))(0x4D94ACE549A20B9EL, (VECTOR(uint64_t, 2))(0x4D94ACE549A20B9EL, 0UL), 0UL), 0UL, 0x4D94ACE549A20B9EL, 0UL);
    uint8_t *l_298 = &p_373->g_9[0][0][1].f0;
    VECTOR(int8_t, 16) l_299 = (VECTOR(int8_t, 16))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x79L), 0x79L), 0x79L, 0x76L, 0x79L, (VECTOR(int8_t, 2))(0x76L, 0x79L), (VECTOR(int8_t, 2))(0x76L, 0x79L), 0x76L, 0x79L, 0x76L, 0x79L);
    int8_t l_305 = (-1L);
    uint32_t *l_307[5] = {&p_373->g_216[1],&p_373->g_216[1],&p_373->g_216[1],&p_373->g_216[1],&p_373->g_216[1]};
    uint32_t **l_306 = &l_307[3];
    int8_t *l_310 = &p_373->g_220.f4;
    int8_t **l_309[4][10][5] = {{{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310}},{{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310}},{{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310}},{{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310}}};
    int8_t ***l_308 = &l_309[3][6][0];
    uint64_t *l_312 = &p_373->g_313;
    int32_t *l_314[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_289[i] = 4294967288UL;
    (*p_373->g_198) = (p_23 || ((p_373->g_80.f2 , (*p_373->g_52)) ^ 0x8BL));
    ++l_289[0];
    l_314[0] = func_29(((*l_312) = ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(l_292.yxyxzyzx)).lo, ((VECTOR(uint64_t, 8))(0xD3171E36E5A27F58L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(p_373->g_293.s1507213571033277)), ((VECTOR(uint64_t, 16))(l_294.s4571456423111730))))).sa149, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 16))(l_295.s4200637064431302)), (uint64_t)(p_23 , (safe_add_func_uint8_t_u_u(((*l_298) |= p_373->g_184.s4), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(l_299.sc2)), (int8_t)(safe_mod_func_int8_t_s_s(((!((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_373->g_302.yyzzwxxyyzwzzyzx)))).hi)).s35, (int32_t)((p_23 != (safe_lshift_func_uint8_t_u_s((((l_305 || 1L) , ((*l_306) = &l_289[0])) != (void*)0), (~((l_308 != p_373->g_311[3]) | GROUP_DIVERGE(1, 1)))))) & p_23), (int32_t)l_299.sb))).hi) == p_23), 0x76L)), (int8_t)0x41L))), (-6L))))).zxwxwwwy, ((VECTOR(int8_t, 8))(3L))))).lo, ((VECTOR(int8_t, 4))(0x6FL)), ((VECTOR(int8_t, 4))((-1L)))))).yywzyyzzzxzyzzwx))).odd, ((VECTOR(int8_t, 8))(0x58L))))).odd, ((VECTOR(int8_t, 4))(0x1AL))))).w))), (uint64_t)GROUP_DIVERGE(1, 1)))).odd)).odd))).even)), 0x11AE61D451BF6886L, ((VECTOR(uint64_t, 2))(0xDF0D1874AA712A8BL)), 18446744073709551615UL, 0x8B1FF474044F614CL)).lo, ((VECTOR(uint64_t, 4))(18446744073709551607UL))))).w), l_289[1], p_373);
    (*p_373->g_198) ^= p_23;
    return p_373->g_315;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_198 p_373->g_192 p_373->g_78.f2 p_373->g_220.f3.f1 p_373->g_80.f2 p_373->g_261 p_373->g_9.f3.f2
 * writes: p_373->g_192 p_373->g_78.f2 p_373->g_220.f3.f1 p_373->g_80.f2 p_373->g_263 p_373->g_9.f3.f2
 */
uint64_t  func_25(uint8_t * p_26, int32_t * p_27, struct S4 * p_373)
{ /* block id: 105 */
    uint32_t l_253 = 4294967295UL;
    int32_t l_277 = (-1L);
    int32_t l_278 = 0x05D79B23L;
    int32_t l_279 = 0x266EE760L;
    int32_t l_280 = (-1L);
    int32_t l_281 = 0x24E525C4L;
    int32_t l_282 = (-1L);
    int32_t l_283 = (-1L);
    int8_t l_284[3];
    int32_t l_285 = 0x42A5252FL;
    int i;
    for (i = 0; i < 3; i++)
        l_284[i] = (-5L);
    (*p_373->g_198) |= ((+FAKE_DIVERGE(p_373->local_0_offset, get_local_id(0), 10)) && l_253);
    if (((*p_373->g_198) = 1L))
    { /* block id: 108 */
        for (p_373->g_78.f2 = 0; (p_373->g_78.f2 >= 45); p_373->g_78.f2++)
        { /* block id: 111 */
            if ((*p_373->g_198))
                break;
            for (p_373->g_220.f3.f1 = 0; (p_373->g_220.f3.f1 != 51); ++p_373->g_220.f3.f1)
            { /* block id: 115 */
                volatile struct S0 *l_262 = (void*)0;
                (*p_373->g_198) ^= (-1L);
                if ((*p_373->g_198))
                    break;
                for (p_373->g_80.f2 = 5; (p_373->g_80.f2 < 8); p_373->g_80.f2++)
                { /* block id: 120 */
                    int32_t l_260 = 8L;
                    return l_260;
                }
                p_373->g_263 = p_373->g_261;
            }
        }
    }
    else
    { /* block id: 126 */
        uint32_t *l_266 = (void*)0;
        int8_t *l_269 = (void*)0;
        int8_t **l_268 = &l_269;
        int8_t ***l_267 = &l_268;
        int32_t l_270[10][6][1] = {{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}},{{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL},{0x0CA8BD4AL}}};
        int32_t *l_271 = (void*)0;
        int32_t *l_272 = &l_270[9][2][0];
        int32_t *l_273 = &p_373->g_15;
        int32_t *l_274 = &p_373->g_15;
        int32_t *l_275 = (void*)0;
        int32_t *l_276[8] = {(void*)0,&l_270[5][2][0],(void*)0,(void*)0,&l_270[5][2][0],(void*)0,(void*)0,&l_270[5][2][0]};
        uint32_t l_286[7];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_286[i] = 6UL;
        (*p_373->g_198) = ((+((*p_26)--)) , ((void*)0 == l_266));
        (*l_267) = (void*)0;
        --l_286[4];
    }
    return l_282;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_151.f1
 * writes: p_373->g_151.f1
 */
int32_t * func_29(uint64_t  p_30, int64_t  p_31, struct S4 * p_373)
{ /* block id: 98 */
    for (p_373->g_151.f1 = (-29); (p_373->g_151.f1 >= 18); p_373->g_151.f1 = safe_add_func_int8_t_s_s(p_373->g_151.f1, 8))
    { /* block id: 101 */
        int32_t *l_252 = (void*)0;
        return l_252;
    }
    return &p_373->g_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_176 p_373->g_184 p_373->g_9.f4 p_373->g_153.f2 p_373->g_136 p_373->g_134 p_373->l_comm_values p_373->g_15 p_373->g_9 p_373->g_219 p_373->g_238 p_373->g_245 p_373->g_220.f4 p_373->g_80.f1 p_373->g_135 p_373->g_78.f1 p_373->g_14 p_373->g_198
 * writes: p_373->g_198 p_373->g_208 p_373->g_216 p_373->g_9.f7 p_373->g_220 p_373->g_249 p_373->g_192
 */
uint64_t  func_32(int8_t  p_33, struct S4 * p_373)
{ /* block id: 78 */
    int8_t l_179 = (-1L);
    int32_t *l_191 = &p_373->g_192;
    int32_t l_193 = 1L;
    int32_t l_199 = 0L;
    int16_t *l_213 = (void*)0;
    int32_t *l_217 = &l_193;
    VECTOR(int16_t, 2) l_231 = (VECTOR(int16_t, 2))(0x2D6AL, 0x00E6L);
    uint32_t *l_244 = &p_373->g_216[7];
    int i;
    l_199 &= (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_373->g_176.s6773edee)).lo)).w, (safe_lshift_func_uint16_t_u_u(((((l_179 < 0x5083L) , (p_33 , (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(p_33, 6)) != (~(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_373->g_184.s0721)).zxyyyywxwyzxzyyy)))).s0b)), 0x1297L, 1UL)).z >= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((safe_mod_func_int8_t_s_s((((l_193 = (l_191 == &p_373->g_192)) <= (p_33 == ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((p_373->g_198 = l_191) == (void*)0) > 0x5203FE1B86CFF65FL), 0)), FAKE_DIVERGE(p_373->group_0_offset, get_group_id(0), 10))) > GROUP_DIVERGE(0, 1)))) || p_373->g_9[0][0][1].f4), p_373->g_153[2].f2)) , p_33) && p_33), (-9L))), p_373->g_184.s5))))), l_179)))) >= p_373->g_136.x) ^ p_33), 7))));
    if ((safe_add_func_uint16_t_u_u(0UL, p_373->g_134)))
    { /* block id: 82 */
        return p_373->l_comm_values[(safe_mod_func_uint32_t_u_u(p_373->tid, 15))];
    }
    else
    { /* block id: 84 */
        int32_t *l_204 = &p_373->g_15;
        int16_t *l_207 = &p_373->g_208;
        uint32_t *l_215[2];
        int64_t *l_218 = &p_373->g_9[0][0][1].f7;
        int8_t *l_243 = (void*)0;
        struct S1 *l_247 = &p_373->g_220;
        uint8_t *l_248[3];
        int i;
        for (i = 0; i < 2; i++)
            l_215[i] = &p_373->g_216[5];
        for (i = 0; i < 3; i++)
            l_248[i] = &p_373->g_153[2].f2;
        (*p_373->g_219) = (((safe_add_func_int64_t_s_s(((*l_218) = (l_204 == (l_217 = ((safe_add_func_uint32_t_u_u(0x39425CAEL, (l_199 = (p_373->g_216[4] = (((*l_207) = (*l_204)) != ((*l_204) < ((safe_mod_func_uint32_t_u_u((l_199 && (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x4C27L, ((VECTOR(int16_t, 2))(0x061FL, 0L)), 1L)))).z > p_373->g_176.sb) || (p_33 != l_199)) & ((safe_div_func_uint64_t_u_u(((void*)0 == l_213), p_33)) != p_33))), (*l_204))) == p_33))))))) , &l_193)))), (-7L))) != 0xEAL) , p_373->g_9[0][1][2]);
        (*p_373->g_198) = ((safe_lshift_func_uint8_t_u_u((p_373->g_249 = (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (((((*l_204) == ((((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((p_373->g_9[0][0][1].f5 != ((p_373->g_220.f4 ^= ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(l_231.yyyyxxyyyxyyxyyy)).se76a, (int16_t)((*l_207) = (safe_mul_func_int16_t_s_s(((GROUP_DIVERGE(0, 1) == (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((((VECTOR(int64_t, 4))(p_373->g_238.sfb52)).y , (((p_33 = ((safe_sub_func_int32_t_s_s(3L, p_33)) , (safe_lshift_func_uint16_t_u_s(0xF1D5L, 6)))) , l_244) == p_373->g_245)), ((0UL != (65526UL || (*l_217))) | (*l_217)))) && p_33), 7))) || p_373->l_comm_values[(safe_mod_func_uint32_t_u_u(p_373->tid, 15))]), (*l_204))))))).yyzwxzxxxxwwwyyx)).s8, FAKE_DIVERGE(p_373->local_0_offset, get_local_id(0), 10))) < 248UL)) != p_373->g_80.f1)) , l_247) == (void*)0), (*l_204))) ^ (*l_204)), (*l_217))) | p_373->g_135) < p_373->g_136.x) == 65528UL)) <= 0UL) < p_373->g_78.f1) > 1L)))), (*l_204))) , (*p_373->g_14));
    }
    return p_373->g_136.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_136
 * writes:
 */
uint16_t  func_41(int32_t * p_42, struct S1 * p_43, struct S1 * p_44, uint8_t * p_45, struct S4 * p_373)
{ /* block id: 74 */
    int32_t *l_154 = &p_373->g_15;
    int32_t *l_155 = (void*)0;
    int32_t *l_156 = &p_373->g_15;
    int32_t *l_157 = (void*)0;
    int32_t *l_158 = &p_373->g_15;
    int32_t l_159 = 0x3710F9EEL;
    int32_t *l_160 = (void*)0;
    int32_t *l_161 = &p_373->g_15;
    int32_t *l_162 = &l_159;
    int32_t *l_163[9][4][2];
    int8_t l_164 = (-4L);
    int8_t l_165[3][6] = {{0x2EL,0x13L,0x7CL,0x25L,0x13L,0x25L},{0x2EL,0x13L,0x7CL,0x25L,0x13L,0x25L},{0x2EL,0x13L,0x7CL,0x25L,0x13L,0x25L}};
    int8_t l_166 = 6L;
    uint8_t l_167[7][3];
    int64_t l_170 = 1L;
    uint32_t l_171[9][10][2] = {{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}},{{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL},{0xA81537B4L,4294967295UL}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_163[i][j][k] = &p_373->g_15;
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_167[i][j] = 0x08L;
    }
    --l_167[3][0];
    --l_171[6][8][1];
    return p_373->g_136.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_15 p_373->g_14 p_373->g_9.f4 p_373->g_52 p_373->g_53 p_373->l_comm_values p_373->g_78 p_373->g_79 p_373->g_80 p_373->g_151
 * writes: p_373->g_15 p_373->g_78 p_373->g_153
 */
struct S1 * func_47(int32_t  p_48, int64_t  p_49, int8_t  p_50, int32_t * p_51, struct S4 * p_373)
{ /* block id: 14 */
    struct S1 *l_68[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int32_t, 4) l_129 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L));
    int32_t *l_145[5];
    int32_t l_146 = 0x6007C242L;
    int32_t l_147 = 0x648052E4L;
    uint32_t l_148[3];
    int i;
    for (i = 0; i < 5; i++)
        l_145[i] = &p_373->g_15;
    for (i = 0; i < 3; i++)
        l_148[i] = 4294967291UL;
    for (p_373->g_15 = (-7); (p_373->g_15 >= (-7)); ++p_373->g_15)
    { /* block id: 17 */
        int64_t l_77 = 0x1369D4055D0160B5L;
        int32_t l_137[5][1][8] = {{{0x164B7CAAL,0x164B7CAAL,0x3CC30774L,0x2C2623A6L,0x5DAE1D84L,0x2C2623A6L,0x3CC30774L,0x164B7CAAL}},{{0x164B7CAAL,0x164B7CAAL,0x3CC30774L,0x2C2623A6L,0x5DAE1D84L,0x2C2623A6L,0x3CC30774L,0x164B7CAAL}},{{0x164B7CAAL,0x164B7CAAL,0x3CC30774L,0x2C2623A6L,0x5DAE1D84L,0x2C2623A6L,0x3CC30774L,0x164B7CAAL}},{{0x164B7CAAL,0x164B7CAAL,0x3CC30774L,0x2C2623A6L,0x5DAE1D84L,0x2C2623A6L,0x3CC30774L,0x164B7CAAL}},{{0x164B7CAAL,0x164B7CAAL,0x3CC30774L,0x2C2623A6L,0x5DAE1D84L,0x2C2623A6L,0x3CC30774L,0x164B7CAAL}}};
        int8_t *l_142[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t **l_141 = &l_142[6];
        int8_t ***l_143 = &l_141;
        int32_t *l_144[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        for (p_48 = 15; (p_48 != 3); p_48--)
        { /* block id: 20 */
            if ((*p_373->g_14))
                break;
            return &p_373->g_9[0][0][1];
        }
        for (p_49 = 0; (p_49 == (-20)); p_49--)
        { /* block id: 26 */
            struct S1 *l_71 = &p_373->g_9[0][1][3];
            int32_t l_76 = (-1L);
            struct S0 *l_81 = &p_373->g_78;
            int32_t *l_127 = &l_76;
            int32_t *l_128 = (void*)0;
            int32_t *l_130 = &l_76;
            int32_t *l_131 = (void*)0;
            int32_t *l_132[4] = {&l_76,&l_76,&l_76,&l_76};
            int16_t l_133 = 0x1356L;
            uint32_t l_138[10][2][3] = {{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}},{{1UL,0xD41EAB73L,0xD41EAB73L},{1UL,0xD41EAB73L,0xD41EAB73L}}};
            int i, j, k;
            (*l_81) = func_62(l_68[1], ((&p_373->g_9[0][1][4] == (p_48 , l_71)) != ((void*)0 == l_71)), l_68[5], ((0x71499195F91B2076L ^ ((((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0xAF09L, p_373->g_9[0][0][1].f4)) || l_76), (*p_373->g_52))) | p_49) & p_373->l_comm_values[(safe_mod_func_uint32_t_u_u(p_373->tid, 15))]) | 0x7AL)) ^ 5UL), l_77, p_373);
            if ((atomic_inc(&p_373->l_atomic_input[13]) == 4))
            { /* block id: 32 */
                int32_t l_83[3];
                int32_t *l_82[6][4] = {{&l_83[1],&l_83[1],&l_83[1],&l_83[1]},{&l_83[1],&l_83[1],&l_83[1],&l_83[1]},{&l_83[1],&l_83[1],&l_83[1],&l_83[1]},{&l_83[1],&l_83[1],&l_83[1],&l_83[1]},{&l_83[1],&l_83[1],&l_83[1],&l_83[1]},{&l_83[1],&l_83[1],&l_83[1],&l_83[1]}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_83[i] = (-3L);
                l_82[2][2] = (void*)0;
                for (l_83[1] = (-21); (l_83[1] == 8); l_83[1]++)
                { /* block id: 36 */
                    int32_t l_86 = 4L;
                    uint32_t l_94[5][9] = {{4294967294UL,0UL,0UL,4294967294UL,0x8C1B3C7CL,0x6B92DD07L,0x6B92DD07L,0x8C1B3C7CL,4294967294UL},{4294967294UL,0UL,0UL,4294967294UL,0x8C1B3C7CL,0x6B92DD07L,0x6B92DD07L,0x8C1B3C7CL,4294967294UL},{4294967294UL,0UL,0UL,4294967294UL,0x8C1B3C7CL,0x6B92DD07L,0x6B92DD07L,0x8C1B3C7CL,4294967294UL},{4294967294UL,0UL,0UL,4294967294UL,0x8C1B3C7CL,0x6B92DD07L,0x6B92DD07L,0x8C1B3C7CL,4294967294UL},{4294967294UL,0UL,0UL,4294967294UL,0x8C1B3C7CL,0x6B92DD07L,0x6B92DD07L,0x8C1B3C7CL,4294967294UL}};
                    int32_t *l_125 = &l_86;
                    int32_t *l_126 = &l_86;
                    int i, j;
                    for (l_86 = 0; (l_86 != (-16)); l_86--)
                    { /* block id: 39 */
                        int16_t l_89 = 0x3882L;
                        int16_t l_90 = 0x6A54L;
                        VECTOR(int64_t, 8) l_91 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        int32_t l_92 = 0x743875C6L;
                        int32_t l_93 = (-1L);
                        int i;
                        l_90 = l_89;
                        l_93 ^= (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_91.s4044520373144470)).sfe6c)).y , l_92);
                    }
                    if ((l_86 = l_94[4][5]))
                    { /* block id: 44 */
                        VECTOR(int32_t, 2) l_95 = (VECTOR(int32_t, 2))(0x78F4ABBEL, (-2L));
                        int32_t l_96[1];
                        uint32_t l_97[8][5] = {{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL},{1UL,1UL,4294967295UL,4294967291UL,4294967295UL}};
                        VECTOR(int32_t, 4) l_98 = (VECTOR(int32_t, 4))(0x08C10FD0L, (VECTOR(int32_t, 2))(0x08C10FD0L, 0x7741F5D6L), 0x7741F5D6L);
                        VECTOR(int32_t, 16) l_99 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4A35B986L), 0x4A35B986L), 0x4A35B986L, (-1L), 0x4A35B986L, (VECTOR(int32_t, 2))((-1L), 0x4A35B986L), (VECTOR(int32_t, 2))((-1L), 0x4A35B986L), (-1L), 0x4A35B986L, (-1L), 0x4A35B986L);
                        VECTOR(int32_t, 16) l_100 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                        struct S0 l_101 = {18446744073709551612UL,0x9567760CL,252UL};/* VOLATILE GLOBAL l_101 */
                        int32_t l_102 = 0x0444AC55L;
                        VECTOR(uint32_t, 2) l_103 = (VECTOR(uint32_t, 2))(0x697D3C62L, 0xD16BB71AL);
                        union U3 l_104 = {0x73DCF354A0364B39L};/* VOLATILE GLOBAL l_104 */
                        int64_t l_105 = 0x0113493370524A1AL;
                        int64_t l_106 = 0L;
                        uint16_t l_107 = 65535UL;
                        uint8_t l_108[4][10] = {{0x24L,0xE9L,0x0DL,0xE9L,0x24L,0x24L,0xE9L,0x0DL,0xE9L,0x24L},{0x24L,0xE9L,0x0DL,0xE9L,0x24L,0x24L,0xE9L,0x0DL,0xE9L,0x24L},{0x24L,0xE9L,0x0DL,0xE9L,0x24L,0x24L,0xE9L,0x0DL,0xE9L,0x24L},{0x24L,0xE9L,0x0DL,0xE9L,0x24L,0x24L,0xE9L,0x0DL,0xE9L,0x24L}};
                        struct S0 l_109[7] = {{0xD7A1B735CC4819D7L,0x962EC189L,4UL},{0x6FF1804477D5BCDDL,0xFE078D04L,0UL},{0xD7A1B735CC4819D7L,0x962EC189L,4UL},{0xD7A1B735CC4819D7L,0x962EC189L,4UL},{0x6FF1804477D5BCDDL,0xFE078D04L,0UL},{0xD7A1B735CC4819D7L,0x962EC189L,4UL},{0xD7A1B735CC4819D7L,0x962EC189L,4UL}};
                        VECTOR(uint32_t, 16) l_110 = (VECTOR(uint32_t, 16))(0x0B0BE376L, (VECTOR(uint32_t, 4))(0x0B0BE376L, (VECTOR(uint32_t, 2))(0x0B0BE376L, 0UL), 0UL), 0UL, 0x0B0BE376L, 0UL, (VECTOR(uint32_t, 2))(0x0B0BE376L, 0UL), (VECTOR(uint32_t, 2))(0x0B0BE376L, 0UL), 0x0B0BE376L, 0UL, 0x0B0BE376L, 0UL);
                        int32_t l_111 = 0x66E7EB69L;
                        uint32_t l_112 = 0xB4D06AD9L;
                        int8_t l_113 = 0x60L;
                        int8_t l_114[4][10];
                        VECTOR(int32_t, 16) l_115 = (VECTOR(int32_t, 16))(0x5E3425DDL, (VECTOR(int32_t, 4))(0x5E3425DDL, (VECTOR(int32_t, 2))(0x5E3425DDL, 0x28CDBBAEL), 0x28CDBBAEL), 0x28CDBBAEL, 0x5E3425DDL, 0x28CDBBAEL, (VECTOR(int32_t, 2))(0x5E3425DDL, 0x28CDBBAEL), (VECTOR(int32_t, 2))(0x5E3425DDL, 0x28CDBBAEL), 0x5E3425DDL, 0x28CDBBAEL, 0x5E3425DDL, 0x28CDBBAEL);
                        int32_t l_116 = 1L;
                        uint16_t l_117 = 65535UL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_96[i] = (-9L);
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_114[i][j] = 0L;
                        }
                        l_114[2][2] |= (l_113 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_95.xyyx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))((l_95.y = (l_97[3][1] = l_96[0])), (-10L), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_98.xxxx)))).odd)).yyyxyyxx)).s67, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_99.s92f7)).even)), ((VECTOR(int32_t, 16))(0x2E681B69L, ((VECTOR(int32_t, 8))((l_98.x ^= ((((VECTOR(int32_t, 8))(l_100.s0bdb4f01)).s3 , l_101) , l_102)), 0x51B912C0L, 0L, 8L, ((((VECTOR(uint32_t, 16))(l_103.xyyyyxyxyxxxyyxx)).sa , l_104) , l_105), 6L, 1L, 0x0907D73FL)), 0x2FE2E92EL, (l_106 , (l_99.s8 = (((l_108[3][7] = l_107) , l_109[1]) , 0x6E98D5FDL))), ((VECTOR(int32_t, 4))(0x00DF10CBL)), 0x0BEBE6BBL)).s75, ((VECTOR(int32_t, 2))(5L))))).yyxyyxxyxyxxyyxx)).sc9, ((VECTOR(int32_t, 2))(0x6AA72210L))))), l_110.sa, l_111, 0x6B460E39L, 0x02BB1848L)), 0x1B04C19EL, 0x72F1483AL, (-1L), 0x44AB526FL, l_112, 0x6107FD1BL, (-1L))))))).odd)).hi))).zwwwyywz)).s6);
                        l_99.s3 ^= ((VECTOR(int32_t, 8))(l_115.s03f5253a)).s0;
                        l_115.s1 ^= l_116;
                        l_117++;
                    }
                    else
                    { /* block id: 55 */
                        VECTOR(uint16_t, 4) l_120 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE163L), 0xE163L);
                        VECTOR(uint16_t, 8) l_121 = (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65530UL), 65530UL), 65530UL, 3UL, 65530UL);
                        VECTOR(uint16_t, 2) l_122 = (VECTOR(uint16_t, 2))(1UL, 0x24EAL);
                        int8_t l_123 = 0x35L;
                        int32_t l_124 = 5L;
                        int i;
                        l_124 = (l_123 ^= ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))((-3L), 0x1F70L, (-1L), 0x45DBL)).yyzywyxwwzxxyyyy, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xD0C6L, 0x7053L)).yyxx)))))).xwyxxyzzxzyyxyyy, ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(l_120.yx)).yxxyxxxyyyyyxyyy, ((VECTOR(uint16_t, 8))(l_121.s02655142)).s7144167106112157, ((VECTOR(uint16_t, 8))(l_122.xxxxyyxy)).s1226526517137226))))))))).s0);
                    }
                    l_126 = (l_125 = (l_82[1][1] = (void*)0));
                }
                unsigned int result = 0;
                int l_83_i0;
                for (l_83_i0 = 0; l_83_i0 < 3; l_83_i0++) {
                    result += l_83[l_83_i0];
                }
                atomic_add(&p_373->l_special_values[13], result);
            }
            else
            { /* block id: 63 */
                (1 + 1);
            }
            --l_138[6][0][1];
        }
        (*l_143) = l_141;
        l_129.x = ((VECTOR(int32_t, 2))(0x070B3699L, (-7L))).hi;
    }
    ++l_148[1];
    p_373->g_153[2] = p_373->g_151;
    return l_68[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_373->g_78 p_373->g_79 p_373->g_80
 * writes: p_373->g_78
 */
struct S0  func_62(struct S1 * p_63, int32_t  p_64, struct S1 * p_65, int16_t  p_66, int32_t  p_67, struct S4 * p_373)
{ /* block id: 27 */
    (*p_373->g_79) = p_373->g_78;
    return p_373->g_80;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S4 c_374;
    struct S4* p_373 = &c_374;
    struct S4 c_375 = {
        0x6BL, // p_373->g_6
        {{{{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L}},{{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L},{0xBDL,0x52568108531D14CDL,0x1598AAF0L,{0x9B27FA3DFAD5BEFAL,3UL,0x5AL},1L,7L,7L,0x0A9BCA7B5CF1C946L}}}}, // p_373->g_9
        (void*)0, // p_373->g_13
        0x372B46FAL, // p_373->g_15
        &p_373->g_15, // p_373->g_14
        (void*)0, // p_373->g_18
        0x3FL, // p_373->g_53
        &p_373->g_53, // p_373->g_52
        {18446744073709551615UL,0x67F92971L,250UL}, // p_373->g_78
        &p_373->g_78, // p_373->g_79
        {0xC0C33ADB549FED5CL,4294967295UL,0x23L}, // p_373->g_80
        0x2C31F8A238C1CB93L, // p_373->g_134
        0x14F83D7E1829C317L, // p_373->g_135
        (VECTOR(int32_t, 4))(0x633A23EFL, (VECTOR(int32_t, 2))(0x633A23EFL, 9L), 9L), // p_373->g_136
        {0x46EA9A4662F55100L,4294967295UL,0xB0L}, // p_373->g_151
        {{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}},{{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78},{&p_373->g_151,&p_373->g_78}}}, // p_373->g_152
        {{18446744073709551615UL,0x5BBEE72DL,0xE0L},{18446744073709551615UL,0x5BBEE72DL,0xE0L},{18446744073709551615UL,0x5BBEE72DL,0xE0L}}, // p_373->g_153
        (VECTOR(int64_t, 16))(0x4442C3B548336797L, (VECTOR(int64_t, 4))(0x4442C3B548336797L, (VECTOR(int64_t, 2))(0x4442C3B548336797L, 0x108799C12719CB5FL), 0x108799C12719CB5FL), 0x108799C12719CB5FL, 0x4442C3B548336797L, 0x108799C12719CB5FL, (VECTOR(int64_t, 2))(0x4442C3B548336797L, 0x108799C12719CB5FL), (VECTOR(int64_t, 2))(0x4442C3B548336797L, 0x108799C12719CB5FL), 0x4442C3B548336797L, 0x108799C12719CB5FL, 0x4442C3B548336797L, 0x108799C12719CB5FL), // p_373->g_176
        (VECTOR(uint16_t, 8))(0xE8F3L, (VECTOR(uint16_t, 4))(0xE8F3L, (VECTOR(uint16_t, 2))(0xE8F3L, 0xF120L), 0xF120L), 0xF120L, 0xE8F3L, 0xF120L), // p_373->g_184
        1L, // p_373->g_192
        &p_373->g_15, // p_373->g_198
        0x5214L, // p_373->g_208
        (VECTOR(int16_t, 16))(0x4602L, (VECTOR(int16_t, 4))(0x4602L, (VECTOR(int16_t, 2))(0x4602L, 4L), 4L), 4L, 0x4602L, 4L, (VECTOR(int16_t, 2))(0x4602L, 4L), (VECTOR(int16_t, 2))(0x4602L, 4L), 0x4602L, 4L, 0x4602L, 4L), // p_373->g_214
        {0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L,0x0A37C3B7L}, // p_373->g_216
        {0UL,0x84C185567A7518A8L,-10L,{0x376F4D2E5CBDF15AL,0xDB132F7EL,0xB3L},1L,1L,0L,0x5083D18B33212FACL}, // p_373->g_220
        &p_373->g_220, // p_373->g_219
        (VECTOR(int64_t, 16))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x7643B924528D8049L), 0x7643B924528D8049L), 0x7643B924528D8049L, (-5L), 0x7643B924528D8049L, (VECTOR(int64_t, 2))((-5L), 0x7643B924528D8049L), (VECTOR(int64_t, 2))((-5L), 0x7643B924528D8049L), (-5L), 0x7643B924528D8049L, (-5L), 0x7643B924528D8049L), // p_373->g_238
        1UL, // p_373->g_246
        &p_373->g_246, // p_373->g_245
        (-1L), // p_373->g_249
        {0x221DD11894E57A8CL,0xF6A262D9L,0UL}, // p_373->g_261
        {0UL,0x76DA533FL,255UL}, // p_373->g_263
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL), // p_373->g_293
        (VECTOR(int32_t, 4))(0x083F6BCEL, (VECTOR(int32_t, 2))(0x083F6BCEL, 0x1EBE10AEL), 0x1EBE10AEL), // p_373->g_302
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_373->g_311
        0xC47BDB975A12ED76L, // p_373->g_313
        {0x3114L}, // p_373->g_315
        &p_373->g_198, // p_373->g_332
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7C1CL), 0x7C1CL), 0x7C1CL, 1L, 0x7C1CL), // p_373->g_339
        0x81D5C723L, // p_373->g_342
        0x26L, // p_373->g_356
        {{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}}}, // p_373->g_372
        0, // p_373->v_collective
        sequence_input[get_global_id(0)], // p_373->global_0_offset
        sequence_input[get_global_id(1)], // p_373->global_1_offset
        sequence_input[get_global_id(2)], // p_373->global_2_offset
        sequence_input[get_local_id(0)], // p_373->local_0_offset
        sequence_input[get_local_id(1)], // p_373->local_1_offset
        sequence_input[get_local_id(2)], // p_373->local_2_offset
        sequence_input[get_group_id(0)], // p_373->group_0_offset
        sequence_input[get_group_id(1)], // p_373->group_1_offset
        sequence_input[get_group_id(2)], // p_373->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_373->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_374 = c_375;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_373);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_373->g_6, "p_373->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_373->g_9[i][j][k].f0, "p_373->g_9[i][j][k].f0", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f1, "p_373->g_9[i][j][k].f1", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f2, "p_373->g_9[i][j][k].f2", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f3.f0, "p_373->g_9[i][j][k].f3.f0", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f3.f1, "p_373->g_9[i][j][k].f3.f1", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f3.f2, "p_373->g_9[i][j][k].f3.f2", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f4, "p_373->g_9[i][j][k].f4", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f5, "p_373->g_9[i][j][k].f5", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f6, "p_373->g_9[i][j][k].f6", print_hash_value);
                transparent_crc(p_373->g_9[i][j][k].f7, "p_373->g_9[i][j][k].f7", print_hash_value);

            }
        }
    }
    transparent_crc(p_373->g_15, "p_373->g_15", print_hash_value);
    transparent_crc(p_373->g_53, "p_373->g_53", print_hash_value);
    transparent_crc(p_373->g_78.f0, "p_373->g_78.f0", print_hash_value);
    transparent_crc(p_373->g_78.f1, "p_373->g_78.f1", print_hash_value);
    transparent_crc(p_373->g_78.f2, "p_373->g_78.f2", print_hash_value);
    transparent_crc(p_373->g_80.f0, "p_373->g_80.f0", print_hash_value);
    transparent_crc(p_373->g_80.f1, "p_373->g_80.f1", print_hash_value);
    transparent_crc(p_373->g_80.f2, "p_373->g_80.f2", print_hash_value);
    transparent_crc(p_373->g_134, "p_373->g_134", print_hash_value);
    transparent_crc(p_373->g_135, "p_373->g_135", print_hash_value);
    transparent_crc(p_373->g_136.x, "p_373->g_136.x", print_hash_value);
    transparent_crc(p_373->g_136.y, "p_373->g_136.y", print_hash_value);
    transparent_crc(p_373->g_136.z, "p_373->g_136.z", print_hash_value);
    transparent_crc(p_373->g_136.w, "p_373->g_136.w", print_hash_value);
    transparent_crc(p_373->g_151.f0, "p_373->g_151.f0", print_hash_value);
    transparent_crc(p_373->g_151.f1, "p_373->g_151.f1", print_hash_value);
    transparent_crc(p_373->g_151.f2, "p_373->g_151.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_373->g_153[i].f0, "p_373->g_153[i].f0", print_hash_value);
        transparent_crc(p_373->g_153[i].f1, "p_373->g_153[i].f1", print_hash_value);
        transparent_crc(p_373->g_153[i].f2, "p_373->g_153[i].f2", print_hash_value);

    }
    transparent_crc(p_373->g_176.s0, "p_373->g_176.s0", print_hash_value);
    transparent_crc(p_373->g_176.s1, "p_373->g_176.s1", print_hash_value);
    transparent_crc(p_373->g_176.s2, "p_373->g_176.s2", print_hash_value);
    transparent_crc(p_373->g_176.s3, "p_373->g_176.s3", print_hash_value);
    transparent_crc(p_373->g_176.s4, "p_373->g_176.s4", print_hash_value);
    transparent_crc(p_373->g_176.s5, "p_373->g_176.s5", print_hash_value);
    transparent_crc(p_373->g_176.s6, "p_373->g_176.s6", print_hash_value);
    transparent_crc(p_373->g_176.s7, "p_373->g_176.s7", print_hash_value);
    transparent_crc(p_373->g_176.s8, "p_373->g_176.s8", print_hash_value);
    transparent_crc(p_373->g_176.s9, "p_373->g_176.s9", print_hash_value);
    transparent_crc(p_373->g_176.sa, "p_373->g_176.sa", print_hash_value);
    transparent_crc(p_373->g_176.sb, "p_373->g_176.sb", print_hash_value);
    transparent_crc(p_373->g_176.sc, "p_373->g_176.sc", print_hash_value);
    transparent_crc(p_373->g_176.sd, "p_373->g_176.sd", print_hash_value);
    transparent_crc(p_373->g_176.se, "p_373->g_176.se", print_hash_value);
    transparent_crc(p_373->g_176.sf, "p_373->g_176.sf", print_hash_value);
    transparent_crc(p_373->g_184.s0, "p_373->g_184.s0", print_hash_value);
    transparent_crc(p_373->g_184.s1, "p_373->g_184.s1", print_hash_value);
    transparent_crc(p_373->g_184.s2, "p_373->g_184.s2", print_hash_value);
    transparent_crc(p_373->g_184.s3, "p_373->g_184.s3", print_hash_value);
    transparent_crc(p_373->g_184.s4, "p_373->g_184.s4", print_hash_value);
    transparent_crc(p_373->g_184.s5, "p_373->g_184.s5", print_hash_value);
    transparent_crc(p_373->g_184.s6, "p_373->g_184.s6", print_hash_value);
    transparent_crc(p_373->g_184.s7, "p_373->g_184.s7", print_hash_value);
    transparent_crc(p_373->g_192, "p_373->g_192", print_hash_value);
    transparent_crc(p_373->g_208, "p_373->g_208", print_hash_value);
    transparent_crc(p_373->g_214.s0, "p_373->g_214.s0", print_hash_value);
    transparent_crc(p_373->g_214.s1, "p_373->g_214.s1", print_hash_value);
    transparent_crc(p_373->g_214.s2, "p_373->g_214.s2", print_hash_value);
    transparent_crc(p_373->g_214.s3, "p_373->g_214.s3", print_hash_value);
    transparent_crc(p_373->g_214.s4, "p_373->g_214.s4", print_hash_value);
    transparent_crc(p_373->g_214.s5, "p_373->g_214.s5", print_hash_value);
    transparent_crc(p_373->g_214.s6, "p_373->g_214.s6", print_hash_value);
    transparent_crc(p_373->g_214.s7, "p_373->g_214.s7", print_hash_value);
    transparent_crc(p_373->g_214.s8, "p_373->g_214.s8", print_hash_value);
    transparent_crc(p_373->g_214.s9, "p_373->g_214.s9", print_hash_value);
    transparent_crc(p_373->g_214.sa, "p_373->g_214.sa", print_hash_value);
    transparent_crc(p_373->g_214.sb, "p_373->g_214.sb", print_hash_value);
    transparent_crc(p_373->g_214.sc, "p_373->g_214.sc", print_hash_value);
    transparent_crc(p_373->g_214.sd, "p_373->g_214.sd", print_hash_value);
    transparent_crc(p_373->g_214.se, "p_373->g_214.se", print_hash_value);
    transparent_crc(p_373->g_214.sf, "p_373->g_214.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_373->g_216[i], "p_373->g_216[i]", print_hash_value);

    }
    transparent_crc(p_373->g_220.f0, "p_373->g_220.f0", print_hash_value);
    transparent_crc(p_373->g_220.f1, "p_373->g_220.f1", print_hash_value);
    transparent_crc(p_373->g_220.f2, "p_373->g_220.f2", print_hash_value);
    transparent_crc(p_373->g_220.f3.f0, "p_373->g_220.f3.f0", print_hash_value);
    transparent_crc(p_373->g_220.f3.f1, "p_373->g_220.f3.f1", print_hash_value);
    transparent_crc(p_373->g_220.f3.f2, "p_373->g_220.f3.f2", print_hash_value);
    transparent_crc(p_373->g_220.f4, "p_373->g_220.f4", print_hash_value);
    transparent_crc(p_373->g_220.f5, "p_373->g_220.f5", print_hash_value);
    transparent_crc(p_373->g_220.f6, "p_373->g_220.f6", print_hash_value);
    transparent_crc(p_373->g_220.f7, "p_373->g_220.f7", print_hash_value);
    transparent_crc(p_373->g_238.s0, "p_373->g_238.s0", print_hash_value);
    transparent_crc(p_373->g_238.s1, "p_373->g_238.s1", print_hash_value);
    transparent_crc(p_373->g_238.s2, "p_373->g_238.s2", print_hash_value);
    transparent_crc(p_373->g_238.s3, "p_373->g_238.s3", print_hash_value);
    transparent_crc(p_373->g_238.s4, "p_373->g_238.s4", print_hash_value);
    transparent_crc(p_373->g_238.s5, "p_373->g_238.s5", print_hash_value);
    transparent_crc(p_373->g_238.s6, "p_373->g_238.s6", print_hash_value);
    transparent_crc(p_373->g_238.s7, "p_373->g_238.s7", print_hash_value);
    transparent_crc(p_373->g_238.s8, "p_373->g_238.s8", print_hash_value);
    transparent_crc(p_373->g_238.s9, "p_373->g_238.s9", print_hash_value);
    transparent_crc(p_373->g_238.sa, "p_373->g_238.sa", print_hash_value);
    transparent_crc(p_373->g_238.sb, "p_373->g_238.sb", print_hash_value);
    transparent_crc(p_373->g_238.sc, "p_373->g_238.sc", print_hash_value);
    transparent_crc(p_373->g_238.sd, "p_373->g_238.sd", print_hash_value);
    transparent_crc(p_373->g_238.se, "p_373->g_238.se", print_hash_value);
    transparent_crc(p_373->g_238.sf, "p_373->g_238.sf", print_hash_value);
    transparent_crc(p_373->g_246, "p_373->g_246", print_hash_value);
    transparent_crc(p_373->g_249, "p_373->g_249", print_hash_value);
    transparent_crc(p_373->g_261.f0, "p_373->g_261.f0", print_hash_value);
    transparent_crc(p_373->g_261.f1, "p_373->g_261.f1", print_hash_value);
    transparent_crc(p_373->g_261.f2, "p_373->g_261.f2", print_hash_value);
    transparent_crc(p_373->g_263.f0, "p_373->g_263.f0", print_hash_value);
    transparent_crc(p_373->g_263.f1, "p_373->g_263.f1", print_hash_value);
    transparent_crc(p_373->g_263.f2, "p_373->g_263.f2", print_hash_value);
    transparent_crc(p_373->g_293.s0, "p_373->g_293.s0", print_hash_value);
    transparent_crc(p_373->g_293.s1, "p_373->g_293.s1", print_hash_value);
    transparent_crc(p_373->g_293.s2, "p_373->g_293.s2", print_hash_value);
    transparent_crc(p_373->g_293.s3, "p_373->g_293.s3", print_hash_value);
    transparent_crc(p_373->g_293.s4, "p_373->g_293.s4", print_hash_value);
    transparent_crc(p_373->g_293.s5, "p_373->g_293.s5", print_hash_value);
    transparent_crc(p_373->g_293.s6, "p_373->g_293.s6", print_hash_value);
    transparent_crc(p_373->g_293.s7, "p_373->g_293.s7", print_hash_value);
    transparent_crc(p_373->g_302.x, "p_373->g_302.x", print_hash_value);
    transparent_crc(p_373->g_302.y, "p_373->g_302.y", print_hash_value);
    transparent_crc(p_373->g_302.z, "p_373->g_302.z", print_hash_value);
    transparent_crc(p_373->g_302.w, "p_373->g_302.w", print_hash_value);
    transparent_crc(p_373->g_313, "p_373->g_313", print_hash_value);
    transparent_crc(p_373->g_315.f0, "p_373->g_315.f0", print_hash_value);
    transparent_crc(p_373->g_339.s0, "p_373->g_339.s0", print_hash_value);
    transparent_crc(p_373->g_339.s1, "p_373->g_339.s1", print_hash_value);
    transparent_crc(p_373->g_339.s2, "p_373->g_339.s2", print_hash_value);
    transparent_crc(p_373->g_339.s3, "p_373->g_339.s3", print_hash_value);
    transparent_crc(p_373->g_339.s4, "p_373->g_339.s4", print_hash_value);
    transparent_crc(p_373->g_339.s5, "p_373->g_339.s5", print_hash_value);
    transparent_crc(p_373->g_339.s6, "p_373->g_339.s6", print_hash_value);
    transparent_crc(p_373->g_339.s7, "p_373->g_339.s7", print_hash_value);
    transparent_crc(p_373->g_342, "p_373->g_342", print_hash_value);
    transparent_crc(p_373->g_356, "p_373->g_356", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_373->g_372[i][j][k], "p_373->g_372[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_373->v_collective, "p_373->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 52; i++)
            transparent_crc(p_373->g_special_values[i + 52 * get_linear_group_id()], "p_373->g_special_values[i + 52 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 52; i++)
            transparent_crc(p_373->l_special_values[i], "p_373->l_special_values[i]", print_hash_value);
    transparent_crc(p_373->l_comm_values[get_linear_local_id()], "p_373->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_373->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_373->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
