// --atomics 31 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 2,83,27 -l 1,1,1
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

// Seed: 2131036499

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   int16_t  f2;
   uint32_t  f3;
   int32_t  f4;
};

struct S1 {
   int32_t  f0;
   volatile uint32_t  f1;
   volatile uint32_t  f2;
};

struct S2 {
   int8_t  f0;
   int32_t  f1;
   volatile int64_t  f2;
   struct S1  f3;
   uint32_t  f4;
};

struct S3 {
   int8_t  f0;
   int32_t  f1;
   volatile int64_t  f2;
   uint16_t  f3;
   struct S2  f4;
   uint64_t  f5;
   uint64_t  f6;
};

union U4 {
   uint32_t  f0;
   volatile int64_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
   int8_t * volatile  f4;
};

union U5 {
   volatile uint64_t  f0;
   volatile uint64_t  f1;
   volatile struct S1  f2;
   uint8_t  f3;
   int8_t  f4;
};

union U6 {
   int8_t  f0;
   int8_t * f1;
   volatile uint32_t  f2;
};

struct S7 {
    int8_t g_7;
    struct S0 g_39;
    uint8_t g_41;
    volatile uint64_t g_42;
    uint8_t g_55;
    uint8_t g_56[3][8][2];
    struct S2 g_59[10];
    VECTOR(uint16_t, 4) g_68;
    VECTOR(uint16_t, 16) g_77;
    int32_t g_82;
    int64_t g_83;
    uint8_t g_84;
    int32_t g_86;
    volatile uint64_t g_112;
    int64_t g_130;
    struct S3 g_131;
    volatile uint8_t *g_145;
    volatile uint8_t ** volatile g_144[4][9][7];
    VECTOR(int32_t, 16) g_151;
    struct S2 *g_160;
    VECTOR(uint32_t, 8) g_165;
    VECTOR(int64_t, 8) g_166;
    VECTOR(int64_t, 16) g_167;
    VECTOR(int64_t, 4) g_170;
    struct S0 g_171;
    union U5 g_191[8];
    int32_t g_205;
    VECTOR(uint16_t, 4) g_228;
    struct S2 g_230;
    volatile struct S2 g_232;
    VECTOR(uint32_t, 2) g_247;
    VECTOR(int16_t, 8) g_258;
    uint32_t * volatile g_260;
    uint32_t g_268[3];
    int64_t ** volatile g_269;
    int32_t *g_275[4][10];
    union U4 g_339[7];
    union U6 g_340;
    volatile VECTOR(int16_t, 8) g_357;
    union U5 *g_364;
    union U5 ** volatile g_363[8][8];
    union U5 ** volatile g_365[5];
    union U5 ** volatile g_366;
    VECTOR(int16_t, 8) g_369;
    VECTOR(int32_t, 16) g_371;
    volatile VECTOR(int32_t, 2) g_372;
    union U4 *g_375;
    union U4 ** volatile g_374;
    union U6 g_391;
    volatile struct S1 g_412;
    struct S2 * volatile g_414;
    int32_t ** volatile g_427;
    volatile int32_t g_442;
    VECTOR(uint64_t, 2) g_451;
    int32_t **g_459;
    VECTOR(int16_t, 4) g_465;
    struct S2 g_484[9];
    VECTOR(int32_t, 16) g_502;
    VECTOR(int32_t, 8) g_504;
    volatile int64_t **g_517[2];
    int32_t * volatile g_526;
    int32_t * volatile g_534;
    int32_t * volatile g_535;
    volatile VECTOR(uint64_t, 8) g_544;
    uint16_t *g_546;
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
struct S2  func_1(struct S7 * p_637);
int64_t  func_2(int8_t * p_3, int32_t  p_4, int16_t  p_5, struct S7 * p_637);
uint16_t  func_10(uint32_t  p_11, int8_t * p_12, int8_t * p_13, struct S7 * p_637);
int8_t * func_15(uint32_t  p_16, int32_t  p_17, int8_t * p_18, uint64_t  p_19, int8_t * p_20, struct S7 * p_637);
union U6  func_21(int32_t  p_22, int8_t * p_23, int8_t * p_24, int16_t  p_25, struct S7 * p_637);
uint32_t  func_28(int32_t  p_29, int8_t  p_30, int8_t * p_31, int8_t * p_32, struct S7 * p_637);
int16_t  func_33(struct S0  p_34, uint8_t  p_35, struct S0  p_36, uint32_t  p_37, uint64_t  p_38, struct S7 * p_637);
int32_t  func_45(struct S0  p_46, int8_t  p_47, struct S7 * p_637);
struct S0  func_48(uint8_t * p_49, uint32_t  p_50, struct S7 * p_637);
struct S2  func_51(uint64_t  p_52, struct S7 * p_637);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_637->l_comm_values p_637->g_comm_values p_637->g_39 p_637->g_7 p_637->g_42 p_637->g_55 p_637->g_56 p_637->g_59 p_637->g_41 p_637->g_68 p_637->g_77 p_637->g_83 p_637->g_84 p_637->g_112 p_637->g_131 p_637->g_144 p_637->g_151 p_637->g_130 p_637->g_86 p_637->g_165 p_637->g_166 p_637->g_167 p_637->g_170 p_637->g_171 p_637->g_191 p_637->g_205 p_637->g_160 p_637->g_228 p_637->g_232 p_637->g_247 p_637->g_258 p_637->g_260 p_637->g_230.f1 p_637->g_269 p_637->g_230.f0 p_637->g_339 p_637->g_340 p_637->g_357 p_637->g_366 p_637->g_369 p_637->g_371 p_637->g_372 p_637->g_374 p_637->g_391 p_637->g_412 p_637->g_414 p_637->g_427 p_637->g_442 p_637->g_451 p_637->g_230.f4 p_637->g_465 p_637->g_230.f3.f1 p_637->g_375 p_637->g_484 p_637->g_230.f3.f2 p_637->g_502 p_637->g_504 p_637->g_517 p_637->g_526 p_637->g_544 p_637->g_546
 * writes: p_637->g_41 p_637->g_42 p_637->g_55 p_637->g_56 p_637->g_39.f2 p_637->g_59 p_637->g_82 p_637->g_112 p_637->g_130 p_637->g_86 p_637->g_160 p_637->g_171 p_637->g_83 p_637->g_151 p_637->g_205 p_637->g_131.f5 p_637->g_230 p_637->g_39.f3 p_637->g_84 p_637->g_268 p_637->g_131.f0 p_637->g_269 p_637->g_275 p_637->g_131.f3 p_637->g_39.f4 p_637->g_364 p_637->g_375 p_637->g_39.f0 p_637->g_131.f4 p_637->g_459 p_637->g_258 p_637->g_369 p_637->g_546
 */
struct S2  func_1(struct S7 * p_637)
{ /* block id: 4 */
    int8_t *l_6 = &p_637->g_7;
    int32_t l_14 = 0x3F2F34E4L;
    uint8_t *l_40[4] = {&p_637->g_41,&p_637->g_41,&p_637->g_41,&p_637->g_41};
    int8_t *l_208 = &p_637->g_131.f0;
    uint64_t l_392 = 1UL;
    int16_t *l_428[1];
    int32_t l_429 = 0x5EF5A08EL;
    VECTOR(int32_t, 2) l_434 = (VECTOR(int32_t, 2))(0x0341EE10L, (-3L));
    uint16_t l_435 = 65534UL;
    VECTOR(uint64_t, 8) l_452 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 9UL, 18446744073709551613UL);
    int32_t l_460 = 0x53D473D9L;
    uint32_t l_501[9][8][2] = {{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}},{{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL},{4294967292UL,9UL}}};
    VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    struct S3 *l_532[2];
    struct S3 **l_531[2][10][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_428[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_532[i] = &p_637->g_131;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
                l_531[i][j][k] = &l_532[1];
        }
    }
    if (((func_2(l_6, p_637->l_comm_values[(safe_mod_func_uint32_t_u_u(p_637->tid, 1))], (l_429 |= (!(safe_lshift_func_uint16_t_u_s(func_10(l_14, &p_637->g_7, func_15(l_14, (func_21(((safe_div_func_uint32_t_u_u(func_28(l_14, (((~p_637->g_comm_values[p_637->tid]) < func_33(p_637->g_39, (p_637->g_41 = l_14), p_637->g_39, p_637->g_7, l_14, p_637)) | p_637->g_166.s7), &p_637->g_7, l_6, p_637), 3UL)) , 0x0F6770F6L), l_208, l_40[2], l_14, p_637) , l_14), l_6, l_392, l_208, p_637), p_637), 8)))), p_637) , p_637->g_130) < l_14))
    { /* block id: 149 */
        int32_t *l_430 = &p_637->g_86;
        VECTOR(int32_t, 8) l_433 = (VECTOR(int32_t, 8))(0x116453C4L, (VECTOR(int32_t, 4))(0x116453C4L, (VECTOR(int32_t, 2))(0x116453C4L, (-1L)), (-1L)), (-1L), 0x116453C4L, (-1L));
        struct S0 l_443 = {3L,1UL,1L,1UL,0L};
        VECTOR(int8_t, 8) l_446 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
        uint32_t *l_449[9];
        int32_t l_450 = 0L;
        int32_t *l_453[10][10] = {{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429,(void*)0,(void*)0,&l_14,&l_429,(void*)0,&l_429}};
        uint8_t **l_456 = (void*)0;
        uint16_t *l_466 = (void*)0;
        struct S2 *l_469 = (void*)0;
        struct S2 **l_470 = (void*)0;
        struct S2 *l_471[2];
        union U5 **l_472[7][6][1] = {{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}},{{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364},{&p_637->g_364}}};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_449[i] = &p_637->g_268[2];
        for (i = 0; i < 2; i++)
            l_471[i] = &p_637->g_131.f4;
        (*l_430) |= l_429;
        l_460 ^= (safe_rshift_func_int16_t_s_s((((*l_430) = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_433.s4376)).zywxxywywxzyyyww, ((VECTOR(int32_t, 2))(l_434.yy)).xxxxyyyxyxyxyyxy))).s8) & l_435), (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((p_637->g_442 != (l_443 , (safe_sub_func_uint8_t_u_u((0x41L | ((VECTOR(int8_t, 4))(l_446.s5653)).y), (((((safe_mul_func_int16_t_s_s(((((l_450 |= 4294967295UL) == (l_14 = ((-6L) & ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(p_637->g_451.xxxx)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_452.s41457217)).odd))))).hi)).hi))) == (p_637->g_41 = (l_429 &= (p_637->g_56[2][3][1]++)))) && ((l_456 == l_456) || ((p_637->g_39.f2 = ((safe_rshift_func_int8_t_s_s(((((p_637->g_459 = &p_637->g_275[1][0]) != &p_637->g_275[2][3]) > (-7L)) , 0x1DL), 6)) && l_452.s6)) >= p_637->g_167.s8))), l_452.s2)) > 0UL) , 1L) ^ p_637->g_39.f0) == p_637->g_166.s0))))) < p_637->g_77.s3), p_637->g_230.f4)), l_435)), 6))));
        (*p_637->g_414) = func_51((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x5299L, 0x458AL)).yyxxxxyy)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))((-1L), 0x3ACBL)), ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(p_637->g_465.wywzyxxx)).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x36BBL, (-10L), 0L, (-1L)))))))))).lo, ((VECTOR(int16_t, 2))(0x34B8L, (-10L))), ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(p_637->g_230.f3.f1, 0L, 0x1471L, 0x0044L)).xywyxzywzwyzxwzy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x3AC9L, (&l_435 != l_466), (-1L), 0x61D7L)).hi)).xxyx)).ywxyxyxzyzxyyywz))).s3c))), 0x27D6L, 0x6CDFL)).lo)).yyxxxxyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(7L, ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))((p_637->g_258.s3 = (safe_add_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (l_469 == (l_471[1] = l_469))))), 1L, 1L, (-5L), (l_472[6][5][0] != &p_637->g_364), l_434.x, 0x4B9DL, 9L)), ((VECTOR(int16_t, 8))(0x30E9L))))), (-1L), ((VECTOR(int16_t, 2))(1L)), l_434.x, l_435, 0x4B19L, 0x4A46L, 0x6A23L)).s0150, ((VECTOR(int16_t, 4))(0x5855L)), ((VECTOR(int16_t, 4))(0x598FL))))), 1L, 0x3014L, 6L)).s3513021305160041)).hi))).s71))), 1L, (-1L), 3L, ((VECTOR(int16_t, 2))(6L)), 0L))))).s4046103232627634)).s8, p_637->g_77.s6)), p_637->g_131.f4.f3.f0)), p_637);
    }
    else
    { /* block id: 163 */
        int8_t l_499 = 0x5CL;
        int16_t l_514 = 2L;
        uint16_t l_525 = 0xCC5CL;
        VECTOR(int32_t, 4) l_533 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0D3C87C7L), 0x0D3C87C7L);
        uint16_t *l_549 = (void*)0;
        uint16_t **l_548 = &l_549;
        VECTOR(int8_t, 8) l_557 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        int32_t l_575 = 1L;
        int32_t l_577[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_577[i][j] = (-1L);
        }
        for (p_637->g_39.f2 = 29; (p_637->g_39.f2 >= 13); --p_637->g_39.f2)
        { /* block id: 166 */
            uint16_t *l_479 = &l_435;
            int32_t l_487 = 5L;
            int8_t l_498 = (-4L);
            VECTOR(int32_t, 8) l_503 = (VECTOR(int32_t, 8))(0x323C4313L, (VECTOR(int32_t, 4))(0x323C4313L, (VECTOR(int32_t, 2))(0x323C4313L, 0x593F641EL), 0x593F641EL), 0x593F641EL, 0x323C4313L, 0x593F641EL);
            int64_t *l_516[2];
            int64_t **l_515 = &l_516[0];
            int64_t l_538 = (-8L);
            uint8_t l_556[9] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
            int32_t *l_576[2];
            int i;
            for (i = 0; i < 2; i++)
                l_516[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_576[i] = &l_14;
            if ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1FL, 0x1EL)), 0x37L, 0x30L)).w, (safe_add_func_uint16_t_u_u(((*l_479)--), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((safe_lshift_func_uint16_t_u_u(((**p_637->g_374) , ((p_637->g_484[4] , p_637->g_230.f3.f2) > (((safe_rshift_func_uint16_t_u_s(l_487, (p_637->g_369.s5 = p_637->g_86))) && (((((VECTOR(uint64_t, 2))(0x75F4244D2C4ED39CL, 0UL)).even , (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_487, (safe_div_func_uint64_t_u_u(((0x26BC965CL ^ (~(safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_460 <= (!(l_498 > 0L))), 0xE548L)), l_487)))) , l_487), p_637->g_77.sd)))), p_637->g_205))) , p_637->g_369.s7) , p_637->g_comm_values[p_637->tid])) > l_499))), l_392)) , 0x1A47L), 0x3DD2L, l_392, p_637->g_166.s0, GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(65535UL)), 8UL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 4))(65535UL)))).even)).s2)))))
            { /* block id: 169 */
                VECTOR(int32_t, 16) l_500 = (VECTOR(int32_t, 16))(0x1423E822L, (VECTOR(int32_t, 4))(0x1423E822L, (VECTOR(int32_t, 2))(0x1423E822L, 8L), 8L), 8L, 0x1423E822L, 8L, (VECTOR(int32_t, 2))(0x1423E822L, 8L), (VECTOR(int32_t, 2))(0x1423E822L, 8L), 0x1423E822L, 8L, 0x1423E822L, 8L);
                int32_t l_518 = 0x23219000L;
                int i;
                l_518 ^= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))((-7L), 0L, 0x7A22300AL, (-1L))), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_500.sc98b6677)).s4401743257524121, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x00F509B1L, (l_501[3][3][1] <= 0x242B2703L), 0x727EA8DEL, 0x59955ECBL)).odd)).xyyx)).yzyzyxzxxwwwzwzw, ((VECTOR(int32_t, 2))(p_637->g_502.s36)).xxxxxyxxxyyyyyxx))).s8669))).wywyyzxz, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_503.s1663663034005161)).s61)).xyxx)).wxwzxwxx, ((VECTOR(int32_t, 4))(p_637->g_504.s0067)).zyxxyxwx))).even, ((VECTOR(int32_t, 16))(l_452.s6, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))((-9L), 0x6FB6DE56L)).xyxy, (int32_t)l_500.s3))).zwxzzzxwyxywxwzz)).s752f, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_505.s3463)).hi, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(l_499, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((0x5030L != (((safe_add_func_int8_t_s_s(((0x657CE90B5A2F2165L >= (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s(p_637->g_232.f4, l_499)), p_637->g_451.y)), l_514))) == l_500.sd), p_637->g_131.f6)) , l_515) != p_637->g_517[0])), 0L, 1L, 1L)))).odd, ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 2))((-7L)))))), 0x61AA38D0L)).xyzwxyzzyxyzyyxy, ((VECTOR(int32_t, 16))(0x6E0FCD5AL))))).odd, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x1E8469EBL))))).odd)).lo, ((VECTOR(int32_t, 2))(0x1CB24DFAL))))).yxxyxyyy, ((VECTOR(int32_t, 8))(0x5C205E7FL))))).s76, ((VECTOR(int32_t, 2))(1L))))).xyxyxxxx, ((VECTOR(int32_t, 8))((-5L)))))).even, ((VECTOR(int32_t, 4))(1L))))).yzyyzwxzzzyzzzyx)).even)).s42)), 1L, ((VECTOR(int32_t, 4))(0x3AD997F1L)), (-6L), ((VECTOR(int32_t, 4))(0L)), 0x58C8214FL, 0L, 0x4F942568L)).s9777))).odd, ((VECTOR(int32_t, 2))((-1L)))))).xxyxxyyxyyyxyxxy)), ((VECTOR(int32_t, 16))(9L))))).lo))).s0;
                if (l_429)
                    continue;
            }
            else
            { /* block id: 172 */
                struct S3 *l_530 = &p_637->g_131;
                struct S3 **l_529 = &l_530;
                if (l_505.s1)
                    break;
                (*p_637->g_526) = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(l_503.s3, 7)), (0x32L <= (GROUP_DIVERGE(0, 1) == l_525))));
                (*p_637->g_526) &= (~((safe_add_func_int32_t_s_s((l_460 <= GROUP_DIVERGE(1, 1)), (l_529 == l_531[0][5][0]))) , ((VECTOR(int32_t, 2))(l_533.zz)).hi));
                for (p_637->g_39.f3 = 0; (p_637->g_39.f3 >= 56); p_637->g_39.f3 = safe_add_func_uint8_t_u_u(p_637->g_39.f3, 8))
                { /* block id: 178 */
                    uint64_t l_539[5] = {0xF3458DAC97AF0D13L,0xF3458DAC97AF0D13L,0xF3458DAC97AF0D13L,0xF3458DAC97AF0D13L,0xF3458DAC97AF0D13L};
                    int8_t *l_542 = &l_498;
                    uint16_t *l_545 = (void*)0;
                    uint16_t **l_547 = &p_637->g_546;
                    int i;
                    l_539[2]--;
                    l_429 ^= ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))((l_434.y < p_637->g_230.f4), (l_542 == (void*)0), 18446744073709551614UL, ((safe_unary_minus_func_uint64_t_u(l_538)) , GROUP_DIVERGE(0, 1)), ((VECTOR(uint64_t, 4))(5UL, ((VECTOR(uint64_t, 2))(p_637->g_544.s60)), 1UL)))))).s1 > (l_545 == ((*l_547) = p_637->g_546))) ^ (((1UL ^ ((void*)0 == l_548)) > 0x5B94L) < p_637->g_451.y));
                    return (*p_637->g_414);
                }
            }
            l_577[0][0] &= (((safe_lshift_func_uint16_t_u_s((l_505.s2 | (safe_add_func_uint8_t_u_u((((l_503.s5 , ((*l_208) = (safe_lshift_func_uint16_t_u_s(l_556[7], 8)))) == (255UL >= ((VECTOR(int8_t, 2))((-1L), 5L)).even)) | (l_501[3][3][1] && ((VECTOR(int8_t, 2))(l_557.s44)).lo)), (safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((FAKE_DIVERGE(p_637->local_2_offset, get_local_id(2), 10) > (l_575 = (((+(safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(l_557.s0, 0x15L)), ((((VECTOR(int64_t, 8))(0x4792B282056313FBL, ((safe_div_func_int32_t_s_s((l_556[7] == (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((~((p_637->g_82 = ((l_533.x & 0x78F98FF2L) > 18446744073709551613UL)) , l_533.w)) < 18446744073709551612UL))), p_637->g_131.f4.f0)) > l_452.s7) <= l_557.s4)), 0xFE91FF18L)) <= l_452.s0), 0x5A924DA301A73A45L, l_514, 0x378AE8D7D9003AB3L, (-1L), 0x2ED1D1FF9775DACBL, 1L)).s5 ^ l_392) >= 9L))) <= l_498), 5)) >= p_637->g_484[4].f2), l_575))) <= p_637->g_77.s3) ^ l_556[6]))) ^ l_533.w) && 0L), p_637->g_171.f1)), 0UL))))), 0)) == p_637->g_68.y) , 0x09A2D4E3L);
            if ((atomic_inc(&p_637->g_atomic_input[31 * get_linear_group_id() + 21]) == 3))
            { /* block id: 190 */
                int8_t l_578 = (-1L);
                uint8_t l_579 = 0x83L;
                uint64_t l_580 = 0xFB090C828878C02EL;
                VECTOR(int32_t, 8) l_581 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x51C50243L), 0x51C50243L), 0x51C50243L, 5L, 0x51C50243L);
                int8_t l_582 = 0x61L;
                int32_t l_583 = 0L;
                int64_t l_584[6][7][1] = {{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}},{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}},{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}},{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}},{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}},{{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L},{0x55C4B186F979FBF1L}}};
                VECTOR(int32_t, 16) l_585 = (VECTOR(int32_t, 16))(0x44775042L, (VECTOR(int32_t, 4))(0x44775042L, (VECTOR(int32_t, 2))(0x44775042L, 0x47C935B1L), 0x47C935B1L), 0x47C935B1L, 0x44775042L, 0x47C935B1L, (VECTOR(int32_t, 2))(0x44775042L, 0x47C935B1L), (VECTOR(int32_t, 2))(0x44775042L, 0x47C935B1L), 0x44775042L, 0x47C935B1L, 0x44775042L, 0x47C935B1L);
                uint64_t l_586 = 1UL;
                VECTOR(int32_t, 4) l_587 = (VECTOR(int32_t, 4))(0x6D677A20L, (VECTOR(int32_t, 2))(0x6D677A20L, 0L), 0L);
                VECTOR(int32_t, 2) l_588 = (VECTOR(int32_t, 2))(1L, 0x65A381F9L);
                int32_t l_589 = 0L;
                int64_t l_590 = (-8L);
                VECTOR(int32_t, 2) l_591 = (VECTOR(int32_t, 2))(0x2EA03B98L, 7L);
                VECTOR(int32_t, 4) l_592 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x34287627L), 0x34287627L);
                union U4 l_593 = {0xED36D179L};/* VOLATILE GLOBAL l_593 */
                uint32_t l_594 = 0x9D37C4EFL;
                VECTOR(int32_t, 16) l_595 = (VECTOR(int32_t, 16))(0x50067310L, (VECTOR(int32_t, 4))(0x50067310L, (VECTOR(int32_t, 2))(0x50067310L, 0x17644254L), 0x17644254L), 0x17644254L, 0x50067310L, 0x17644254L, (VECTOR(int32_t, 2))(0x50067310L, 0x17644254L), (VECTOR(int32_t, 2))(0x50067310L, 0x17644254L), 0x50067310L, 0x17644254L, 0x50067310L, 0x17644254L);
                VECTOR(int32_t, 8) l_596 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 3L), 3L), 3L, 2L, 3L);
                int32_t l_597 = (-4L);
                int16_t l_598 = (-6L);
                int8_t l_599 = 0x00L;
                VECTOR(int32_t, 8) l_600 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                uint16_t l_601 = 0x3F61L;
                int64_t l_602 = 5L;
                uint32_t l_603[6][10][4] = {{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}},{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}},{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}},{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}},{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}},{{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL},{1UL,0xB73D35E5L,0x53878779L,1UL}}};
                int64_t l_604 = (-5L);
                uint64_t l_605[1][5][2] = {{{0xA5226492285698DBL,0x2DAD3B5B6D577D48L},{0xA5226492285698DBL,0x2DAD3B5B6D577D48L},{0xA5226492285698DBL,0x2DAD3B5B6D577D48L},{0xA5226492285698DBL,0x2DAD3B5B6D577D48L},{0xA5226492285698DBL,0x2DAD3B5B6D577D48L}}};
                uint16_t l_606 = 0x1472L;
                int32_t l_607 = 0x596A0549L;
                int16_t l_608 = 0x3020L;
                VECTOR(int32_t, 2) l_631 = (VECTOR(int32_t, 2))((-1L), 0L);
                uint32_t l_632 = 4294967289UL;
                VECTOR(int32_t, 4) l_633 = (VECTOR(int32_t, 4))(0x7E5D1C05L, (VECTOR(int32_t, 2))(0x7E5D1C05L, 0x7D17C232L), 0x7D17C232L);
                uint32_t l_634 = 0x9E1729ADL;
                int i, j, k;
                if (((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(0x554EE156L, (l_580 ^= (l_579 ^= l_578)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_581.s46)))), 1L, 0x112B275CL)).even)).xxxxyyyxyyxyyxyy, ((VECTOR(int32_t, 2))((-9L), 0x506E38FAL)).xxxyyyyyxxyyyxyy))).s05ea))).yxyzwyzx)), ((VECTOR(int32_t, 2))(5L, 0x6FE80E90L)), 1L, 1L, 1L, 0x393EC130L)).sc3, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x1FBC72B6L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((l_583 = l_582) , l_584[1][2][0]), (l_607 = ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x3A6CAE9BL, ((VECTOR(int32_t, 4))((-2L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_585.sd8)), (-2L), ((VECTOR(int32_t, 4))(l_586, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 4))(l_587.xxyy)), ((l_589 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_588.yxyy)))).wyywyxzwywyywwzy)).sa) , l_590), 0x17D6B428L, 0x12BADCDEL)).s25, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_591.xx)).xxxy, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_592.xyxwwwxy)).s30)).yyyyyyxyxyxxyyxx, (int32_t)(l_593 , l_594)))).s2045))).odd))), 0x207A53C2L)), 0x689FBB43L)).s00)), 0x02FC67FFL)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_595.s19)).yxyyxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_596.s21)).xxyx, ((VECTOR(int32_t, 4))((l_599 = (l_598 ^= l_597)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x66F3CF25L, 1L, 0L, 0x75751472L)).hi)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x6CA1E921L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(l_600.s37)), l_601, ((VECTOR(int32_t, 2))(1L)), 1L, 0x28B666F2L)).s7574226057442066, ((VECTOR(int32_t, 16))((-1L)))))).lo)), l_602, l_603[0][2][0], l_604, 0x7D0CA8D2L, l_605[0][3][0], 0x24F22F47L, 0L)))).sf136, ((VECTOR(int32_t, 4))(0x340401FFL)), ((VECTOR(int32_t, 4))(0x5B114C55L))))).odd))), (-7L)))))))).wxxxxxyz))).s32, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(1L))))), 0x492899F8L)), (-1L), ((VECTOR(int32_t, 2))((-3L))), 9L, ((VECTOR(int32_t, 4))(0x3A440025L)))).s87, ((VECTOR(int32_t, 2))(0x5F9BB770L))))))), 1L, 0x315A3BCDL, 4L, 0L, 0L, l_606, 0L, ((VECTOR(int32_t, 4))((-1L))), 0x0FCB008AL, 0x386B622EL)).sa), (-1L), l_608, (-5L), ((VECTOR(int32_t, 2))(0x4F2201A7L)), 0x2DE5C88BL)).s40, ((VECTOR(int32_t, 2))((-1L)))))))), 0x03A96D3DL)).lo, ((VECTOR(int32_t, 2))((-2L))), ((VECTOR(int32_t, 2))((-6L)))))).yxyyyyyxxxxyxxxy)).sa8))).hi)
                { /* block id: 198 */
                    struct S2 *l_609 = (void*)0;
                    struct S2 l_611 = {0x20L,0x2404A564L,9L,{0x6A06AB29L,2UL,0xF5C4757DL},0xCF36AABAL};/* VOLATILE GLOBAL l_611 */
                    struct S2 *l_610 = &l_611;
                    struct S0 l_612[10][6][4] = {{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}},{{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}},{{6L,0UL,0L,0x120412AEL,0x65E3EF65L},{-5L,0x6A672CDB2D9D21EEL,0x2D7EL,4294967292UL,0x78576484L},{0x036D5B73L,18446744073709551615UL,0x4656L,0x5E1A15FEL,0x601F9F3FL},{0x242467AEL,0x78C525EEB0139B54L,0L,0xFA06A2C9L,0x0A39AC10L}}}};
                    struct S0 l_613 = {0x60D8E169L,0x04BE6827AE741409L,0x5216L,4294967295UL,0x361D72A5L};
                    uint32_t l_614 = 0x9EE6DE03L;
                    uint32_t l_615 = 4294967295UL;
                    uint32_t l_625 = 4294967295UL;
                    int i, j, k;
                    l_583 ^= 5L;
                    l_610 = (l_609 = (void*)0);
                    if (((l_613 = l_612[0][2][3]) , (l_587.w |= (l_615 = l_614))))
                    { /* block id: 205 */
                        uint32_t l_616 = 1UL;
                        uint8_t l_617 = 4UL;
                        union U6 l_618 = {-4L};/* VOLATILE GLOBAL l_618 */
                        struct S3 l_619 = {0x41L,-8L,-5L,65535UL,{0x0AL,0x2B8A6F55L,0L,{0x08A8BA95L,3UL,0UL},1UL},0UL,18446744073709551615UL};/* VOLATILE GLOBAL l_619 */
                        struct S3 l_620 = {1L,0x2F52A036L,0L,1UL,{0L,0x3A88CD3DL,0x28CBCDB7287927DEL,{2L,0xEB8AC324L,0x2276AF66L},3UL},0UL,18446744073709551615UL};/* VOLATILE GLOBAL l_620 */
                        l_589 ^= l_616;
                        l_600.s3 = l_617;
                        l_620 = (l_618 , l_619);
                    }
                    else
                    { /* block id: 209 */
                        int64_t l_621 = 0L;
                        uint32_t l_622 = 0UL;
                        --l_622;
                    }
                    l_591.y &= l_625;
                }
                else
                { /* block id: 213 */
                    int32_t l_626 = (-2L);
                    int32_t **l_627 = (void*)0;
                    int32_t *l_629 = &l_626;
                    int32_t **l_628 = &l_629;
                    int32_t **l_630[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_630[i] = &l_629;
                    l_630[2] = (l_628 = (l_626 , l_627));
                    l_596.s6 ^= 0x30D80403L;
                }
                l_632 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_631.xyxyxxxx)).odd)).odd)).hi;
                --l_634;
                unsigned int result = 0;
                result += l_578;
                result += l_579;
                result += l_580;
                result += l_581.s7;
                result += l_581.s6;
                result += l_581.s5;
                result += l_581.s4;
                result += l_581.s3;
                result += l_581.s2;
                result += l_581.s1;
                result += l_581.s0;
                result += l_582;
                result += l_583;
                int l_584_i0, l_584_i1, l_584_i2;
                for (l_584_i0 = 0; l_584_i0 < 6; l_584_i0++) {
                    for (l_584_i1 = 0; l_584_i1 < 7; l_584_i1++) {
                        for (l_584_i2 = 0; l_584_i2 < 1; l_584_i2++) {
                            result += l_584[l_584_i0][l_584_i1][l_584_i2];
                        }
                    }
                }
                result += l_585.sf;
                result += l_585.se;
                result += l_585.sd;
                result += l_585.sc;
                result += l_585.sb;
                result += l_585.sa;
                result += l_585.s9;
                result += l_585.s8;
                result += l_585.s7;
                result += l_585.s6;
                result += l_585.s5;
                result += l_585.s4;
                result += l_585.s3;
                result += l_585.s2;
                result += l_585.s1;
                result += l_585.s0;
                result += l_586;
                result += l_587.w;
                result += l_587.z;
                result += l_587.y;
                result += l_587.x;
                result += l_588.y;
                result += l_588.x;
                result += l_589;
                result += l_590;
                result += l_591.y;
                result += l_591.x;
                result += l_592.w;
                result += l_592.z;
                result += l_592.y;
                result += l_592.x;
                result += l_593.f0;
                result += l_593.f1;
                result += l_593.f2;
                result += l_593.f3;
                result += l_593.f4;
                result += l_594;
                result += l_595.sf;
                result += l_595.se;
                result += l_595.sd;
                result += l_595.sc;
                result += l_595.sb;
                result += l_595.sa;
                result += l_595.s9;
                result += l_595.s8;
                result += l_595.s7;
                result += l_595.s6;
                result += l_595.s5;
                result += l_595.s4;
                result += l_595.s3;
                result += l_595.s2;
                result += l_595.s1;
                result += l_595.s0;
                result += l_596.s7;
                result += l_596.s6;
                result += l_596.s5;
                result += l_596.s4;
                result += l_596.s3;
                result += l_596.s2;
                result += l_596.s1;
                result += l_596.s0;
                result += l_597;
                result += l_598;
                result += l_599;
                result += l_600.s7;
                result += l_600.s6;
                result += l_600.s5;
                result += l_600.s4;
                result += l_600.s3;
                result += l_600.s2;
                result += l_600.s1;
                result += l_600.s0;
                result += l_601;
                result += l_602;
                int l_603_i0, l_603_i1, l_603_i2;
                for (l_603_i0 = 0; l_603_i0 < 6; l_603_i0++) {
                    for (l_603_i1 = 0; l_603_i1 < 10; l_603_i1++) {
                        for (l_603_i2 = 0; l_603_i2 < 4; l_603_i2++) {
                            result += l_603[l_603_i0][l_603_i1][l_603_i2];
                        }
                    }
                }
                result += l_604;
                int l_605_i0, l_605_i1, l_605_i2;
                for (l_605_i0 = 0; l_605_i0 < 1; l_605_i0++) {
                    for (l_605_i1 = 0; l_605_i1 < 5; l_605_i1++) {
                        for (l_605_i2 = 0; l_605_i2 < 2; l_605_i2++) {
                            result += l_605[l_605_i0][l_605_i1][l_605_i2];
                        }
                    }
                }
                result += l_606;
                result += l_607;
                result += l_608;
                result += l_631.y;
                result += l_631.x;
                result += l_632;
                result += l_633.w;
                result += l_633.z;
                result += l_633.y;
                result += l_633.x;
                result += l_634;
                atomic_add(&p_637->g_special_values[31 * get_linear_group_id() + 21], result);
            }
            else
            { /* block id: 220 */
                (1 + 1);
            }
        }
    }
    return (*p_637->g_414);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_2(int8_t * p_3, int32_t  p_4, int16_t  p_5, struct S7 * p_637)
{ /* block id: 147 */
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_86 p_637->g_39.f0 p_637->g_412 p_637->g_55 p_637->g_56 p_637->g_59 p_637->g_414 p_637->g_427
 * writes: p_637->g_56 p_637->g_86 p_637->g_39.f0 p_637->g_55 p_637->g_39.f2 p_637->g_131.f4 p_637->g_275
 */
uint16_t  func_10(uint32_t  p_11, int8_t * p_12, int8_t * p_13, struct S7 * p_637)
{ /* block id: 133 */
    uint8_t *l_402 = &p_637->g_56[0][5][1];
    int32_t *l_403 = &p_637->g_86;
    int32_t *l_404 = (void*)0;
    int32_t *l_405[8][8][3] = {{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}},{{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205},{&p_637->g_86,&p_637->g_86,&p_637->g_205}}};
    int64_t l_406 = 0x309CED3241674AD9L;
    uint32_t l_407 = 0UL;
    int64_t l_415 = (-8L);
    int i, j, k;
    (*l_403) &= (safe_add_func_uint8_t_u_u(((*l_402) = p_11), 0x37L));
    --l_407;
    (*l_403) |= (-3L);
    for (p_637->g_39.f0 = 19; (p_637->g_39.f0 > 6); p_637->g_39.f0 = safe_sub_func_uint8_t_u_u(p_637->g_39.f0, 1))
    { /* block id: 140 */
        struct S2 *l_413 = (void*)0;
        int32_t l_416 = (-5L);
        int32_t l_417 = 8L;
        int32_t l_418 = 1L;
        int32_t l_419 = 0x04C8EFE7L;
        int32_t l_420 = 2L;
        int32_t l_421 = (-1L);
        int32_t l_422 = 0x42A15CD7L;
        int32_t l_423[10][1] = {{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L},{0x305B5837L}};
        uint32_t l_424 = 0xFDCF51D0L;
        int i, j;
        (*p_637->g_414) = (p_637->g_412 , func_51(p_11, p_637));
        l_424++;
        (*p_637->g_427) = l_403;
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_15(uint32_t  p_16, int32_t  p_17, int8_t * p_18, uint64_t  p_19, int8_t * p_20, struct S7 * p_637)
{ /* block id: 130 */
    int32_t *l_393 = &p_637->g_86;
    int32_t *l_394[10] = {(void*)0,(void*)0,&p_637->g_205,(void*)0,(void*)0,(void*)0,(void*)0,&p_637->g_205,(void*)0,(void*)0};
    int8_t l_395 = 0x4CL;
    int64_t l_396 = 0x550F4AFA2BAD8131L;
    uint8_t l_397 = 7UL;
    int i;
    l_397++;
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_131.f5 p_637->g_59.f0 p_637->g_131.f4.f3.f1 p_637->g_160 p_637->g_228 p_637->g_166 p_637->g_205 p_637->g_41 p_637->g_232 p_637->g_39.f3 p_637->g_84 p_637->g_77 p_637->g_247 p_637->g_59.f4 p_637->g_171.f2 p_637->g_55 p_637->g_258 p_637->g_260 p_637->g_131.f0 p_637->g_167 p_637->g_39.f0 p_637->g_230.f1 p_637->g_269 p_637->g_171.f1 p_637->g_comm_values p_637->g_230.f0 p_637->g_131.f4.f2 p_637->l_comm_values p_637->g_171.f3 p_637->g_39.f4 p_637->g_131.f4.f3.f2 p_637->g_339 p_637->g_59.f2 p_637->g_340 p_637->g_357 p_637->g_366 p_637->g_86 p_637->g_369 p_637->g_371 p_637->g_372 p_637->g_374 p_637->g_391
 * writes: p_637->g_131.f5 p_637->g_230 p_637->g_39.f3 p_637->g_84 p_637->g_205 p_637->g_86 p_637->g_130 p_637->g_171.f2 p_637->g_268 p_637->g_131.f0 p_637->g_269 p_637->g_171.f1 p_637->g_275 p_637->g_131.f3 p_637->g_39.f4 p_637->g_364 p_637->g_375
 */
union U6  func_21(int32_t  p_22, int8_t * p_23, int8_t * p_24, int16_t  p_25, struct S7 * p_637)
{ /* block id: 62 */
    uint64_t l_214 = 0UL;
    struct S2 *l_229 = &p_637->g_230;
    int8_t *l_231 = &p_637->g_131.f4.f0;
    int32_t l_251 = 0x5C90A007L;
    int64_t l_257[2];
    int32_t l_277 = 4L;
    int32_t l_278 = 0x6B775F87L;
    int32_t l_280 = 1L;
    int32_t l_282 = 0x16478658L;
    int64_t l_283 = 8L;
    int32_t l_287 = 0x07F0B478L;
    int32_t l_288 = 6L;
    int32_t l_289 = 0x306EDCEEL;
    int32_t l_290[10] = {1L,0x51B97761L,1L,1L,0x51B97761L,1L,1L,0x51B97761L,1L,1L};
    int64_t l_293 = (-6L);
    uint32_t l_299 = 0UL;
    union U5 *l_362 = &p_637->g_191[7];
    uint32_t l_381 = 4294967288UL;
    int32_t *l_384 = &p_637->g_205;
    int32_t *l_385 = (void*)0;
    int32_t *l_386 = &l_251;
    int32_t *l_387[6][6] = {{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289},{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289},{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289},{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289},{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289},{&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289}};
    uint8_t l_388 = 7UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_257[i] = 0x0C2FD8B836DEE6B6L;
    for (p_637->g_131.f5 = 26; (p_637->g_131.f5 < 12); p_637->g_131.f5 = safe_sub_func_uint8_t_u_u(p_637->g_131.f5, 8))
    { /* block id: 65 */
        int32_t *l_211 = &p_637->g_205;
        int32_t *l_212 = &p_637->g_86;
        int32_t *l_213[3][2];
        VECTOR(int16_t, 16) l_259 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4CD2L), 0x4CD2L), 0x4CD2L, (-1L), 0x4CD2L, (VECTOR(int16_t, 2))((-1L), 0x4CD2L), (VECTOR(int16_t, 2))((-1L), 0x4CD2L), (-1L), 0x4CD2L, (-1L), 0x4CD2L);
        uint32_t l_306 = 0xE5FF6E27L;
        int32_t *l_309 = &l_289;
        VECTOR(uint64_t, 2) l_326 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x0E678FCACFFDFA22L);
        uint32_t l_349 = 0x01FA590DL;
        union U4 *l_373 = &p_637->g_339[1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_213[i][j] = (void*)0;
        }
        ++l_214;
        if ((safe_sub_func_uint16_t_u_u(p_637->g_59[9].f0, (((safe_div_func_int32_t_s_s(l_214, ((p_22 < ((safe_add_func_int16_t_s_s(((~(safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((((((p_637->g_131.f4.f3.f1 >= (p_637->g_160 != ((((VECTOR(uint16_t, 16))(p_637->g_228.xzxxwxzywxywyxxy)).s4 || 0x4175L) , l_229))) , p_23) != l_231) > l_214) & (-1L)))), 5)), p_637->g_166.s5))) && (*l_211)), 0x4CA6L)) && GROUP_DIVERGE(2, 1))) & p_637->g_41))) , (void*)0) != &l_213[2][1]))))
        { /* block id: 67 */
            (*l_229) = p_637->g_232;
            for (p_637->g_39.f3 = 0; (p_637->g_39.f3 >= 30); p_637->g_39.f3 = safe_add_func_uint8_t_u_u(p_637->g_39.f3, 9))
            { /* block id: 71 */
                for (p_637->g_84 = 5; (p_637->g_84 <= 43); p_637->g_84 = safe_add_func_uint32_t_u_u(p_637->g_84, 1))
                { /* block id: 74 */
                    (*l_211) = l_214;
                }
            }
            if (p_637->g_77.s8)
                continue;
        }
        else
        { /* block id: 79 */
            uint32_t *l_248 = (void*)0;
            uint32_t *l_249 = (void*)0;
            uint32_t *l_250 = (void*)0;
            int64_t *l_254 = &p_637->g_130;
            int32_t l_255 = 0x6F4076C5L;
            int16_t *l_256 = &p_637->g_171.f2;
            uint32_t *l_265 = (void*)0;
            uint32_t *l_266 = (void*)0;
            uint32_t *l_267 = &p_637->g_268[1];
            int64_t ** volatile *l_270 = (void*)0;
            int64_t ** volatile *l_271 = &p_637->g_269;
            (*l_212) = 1L;
            (*l_212) = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*p_23) = (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(4294967287UL, (+((safe_mul_func_int16_t_s_s(((*l_256) &= ((l_251 = ((VECTOR(uint32_t, 4))(p_637->g_247.yyxx)).w) && (safe_rshift_func_int16_t_s_u((~(((*l_254) = p_637->g_59[9].f4) , l_255)), 3)))), p_637->g_55)) <= (((*l_267) = ((((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x572BL, (-9L))), l_257[0], 0x36ECL, ((VECTOR(int16_t, 4))(p_637->g_258.s1702)))).s53, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_259.s6569836b)))).s15))).xxyyyxyx)).s6735545046502426, (int16_t)(p_637->g_260 == l_249)))).s9 >= (safe_rshift_func_uint16_t_u_s((p_637->g_55 && ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((-1L), (*p_23), 0x53L, (-9L))).lo)), 1L, 0x39L)).odd, ((VECTOR(int8_t, 2))((-1L)))))).even, l_214)) | p_22)), 1))) == 1L)) < p_637->g_167.s3))))), p_25))) & p_637->g_39.f0), 0x63E3L)), p_637->g_230.f1));
            (*l_211) = l_255;
            (*l_271) = p_637->g_269;
        }
        for (p_637->g_171.f1 = (-7); (p_637->g_171.f1 <= 39); p_637->g_171.f1++)
        { /* block id: 92 */
            int32_t **l_274[2][9] = {{(void*)0,(void*)0,&l_212,&l_212,&l_213[1][0],&l_212,&l_212,(void*)0,(void*)0},{(void*)0,(void*)0,&l_212,&l_212,&l_213[1][0],&l_212,&l_212,(void*)0,(void*)0}};
            int64_t l_286 = 0L;
            int32_t *l_335 = &p_637->g_131.f1;
            int i, j;
            p_637->g_275[1][0] = &p_637->g_86;
            if (p_25)
            { /* block id: 94 */
                int16_t l_276 = 2L;
                int8_t l_279 = 9L;
                int32_t l_281 = 0x6ADF31E9L;
                int32_t l_284 = 0x79A677B1L;
                int32_t l_285 = 0x34FF4E73L;
                int16_t l_291 = 0x1655L;
                int32_t l_292 = 0x0A7BB1CDL;
                int32_t l_294 = (-1L);
                int16_t l_295 = 0L;
                int32_t l_296 = 1L;
                int32_t l_297 = 1L;
                int32_t l_298 = 2L;
                uint64_t l_302[1];
                int64_t l_305 = 0L;
                int32_t *l_310 = &l_290[8];
                int i;
                for (i = 0; i < 1; i++)
                    l_302[i] = 0x25B4395AB6A6ED4EL;
                ++l_299;
                l_302[0]--;
                l_306--;
                l_310 = l_309;
            }
            else
            { /* block id: 99 */
                VECTOR(int16_t, 16) l_311 = (VECTOR(int16_t, 16))(0x007CL, (VECTOR(int16_t, 4))(0x007CL, (VECTOR(int16_t, 2))(0x007CL, 0L), 0L), 0L, 0x007CL, 0L, (VECTOR(int16_t, 2))(0x007CL, 0L), (VECTOR(int16_t, 2))(0x007CL, 0L), 0x007CL, 0L, 0x007CL, 0L);
                uint8_t *l_316 = &p_637->g_84;
                uint16_t *l_321 = &p_637->g_131.f3;
                int32_t l_338[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_338[i] = (-2L);
                (*l_211) = (((VECTOR(int16_t, 8))(p_25, (p_637->g_comm_values[p_637->tid] , ((VECTOR(int16_t, 2))(l_311.s08)).lo), (safe_add_func_uint16_t_u_u(p_637->g_230.f0, ((*l_321) = (safe_lshift_func_int8_t_s_u(((((~((+((((*p_24) != ((*l_316)++)) || (safe_mul_func_int16_t_s_s(p_637->g_131.f4.f2, (*l_211)))) && p_637->l_comm_values[(safe_mod_func_uint32_t_u_u(p_637->tid, 1))])) || p_25)) ^ ((p_637->g_171.f3 <= p_637->g_230.f1) , 0x7AD7AA86D087B2B1L)) , 1UL) , (*p_23)), 6))))), ((VECTOR(int16_t, 2))(0x598CL)), 0x0BBCL, 0x5FB7L, (-5L))).s0 || p_25);
                for (p_637->g_39.f4 = (-20); (p_637->g_39.f4 == 3); ++p_637->g_39.f4)
                { /* block id: 105 */
                    if (p_22)
                        break;
                }
                p_637->g_275[1][9] = ((safe_rshift_func_int16_t_s_s((((((VECTOR(uint64_t, 16))(18446744073709551615UL, ((VECTOR(uint64_t, 2))(0x23E11DB51FF06D1CL, 5UL)), 0x0E0975954106A2A4L, ((VECTOR(uint64_t, 2))(l_326.xy)), 6UL, ((VECTOR(uint64_t, 4))(0xA03E6316F0A1C2A1L, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))((((*l_321) = 65535UL) <= (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((((*l_309) = ((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_335 == ((65535UL == ((p_25 && (0x6FL <= ((VECTOR(uint8_t, 2))(9UL, 252UL)).even)) | 0x6D684E17L)) , &p_637->g_82)), (safe_lshift_func_uint8_t_u_u(p_22, FAKE_DIVERGE(p_637->global_0_offset, get_global_id(0), 10))))), p_637->g_131.f4.f3.f2)) < 2UL)) <= 0xD002F809L), 1L)) > 0xC3L), 10))), p_637->g_131.f4.f3.f2, 8UL, 0x9744809C91C8CC96L)).xxyxxyxy, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), ((VECTOR(uint64_t, 8))(1UL))))), ((VECTOR(uint64_t, 2))(1UL)), 18446744073709551609UL, 18446744073709551608UL, GROUP_DIVERGE(2, 1), l_338[0], 18446744073709551615UL, 0UL)).sfd, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0UL))))), 0x4C55E2CD10E99EB9L)), 18446744073709551615UL, 0x5F51EED6B70A2F4FL, 0UL, 0x88373F558D39A2D7L, 0xC12DAD22D29A1CD2L)).s1 , p_637->g_339[1]) , p_637->g_59[9].f2) < 0L), p_22)) , &p_637->g_205);
                return p_637->g_340;
            }
            for (p_637->g_84 = 0; (p_637->g_84 >= 23); p_637->g_84 = safe_add_func_int16_t_s_s(p_637->g_84, 9))
            { /* block id: 115 */
                uint32_t l_352[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                int32_t l_378 = 0x3A603E10L;
                int32_t l_379 = (-5L);
                int32_t l_380 = 0x2F7F4F2EL;
                int i;
                (*l_211) = ((safe_add_func_uint64_t_u_u(((((((safe_mod_func_int16_t_s_s(l_349, (safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(0x9DL, 0xA7L)).hi == l_352[4]), ((-3L) <= p_637->g_230.f0))))) || (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65535UL, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_637->g_357.s34257511)).s4663241605177104)).s6)), 0x52L))) == (l_352[6] <= 0x8E335A1D78AECE4AL)) == (((safe_mod_func_int8_t_s_s((-8L), 1UL)) < p_25) == 0L)) , (void*)0) == (void*)0), 0UL)) & l_352[4]);
                (*p_637->g_366) = l_362;
                for (p_637->g_86 = (-25); (p_637->g_86 > 13); ++p_637->g_86)
                { /* block id: 120 */
                    VECTOR(uint16_t, 8) l_370 = (VECTOR(uint16_t, 8))(0xEE1CL, (VECTOR(uint16_t, 4))(0xEE1CL, (VECTOR(uint16_t, 2))(0xEE1CL, 0xC006L), 0xC006L), 0xC006L, 0xEE1CL, 0xC006L);
                    int32_t l_376 = 0x08BC2B45L;
                    int32_t l_377 = (-6L);
                    int i;
                    (*l_211) |= p_25;
                    (*p_637->g_374) = (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_637->g_369.s01)), 0x2879L, 0L)).hi, ((VECTOR(uint16_t, 4))(l_370.s2422)).lo))).xyxy, ((VECTOR(int32_t, 8))(p_637->g_371.s43366844)).lo))).wyzyzzyzxwwwzywy)).s3e))).xxxyyyyxxyyxyxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_637->g_372.xxxyxyyyxxyxyyxy)).lo)).s1315203105655760))).s5 , l_373);
                    l_381++;
                }
            }
        }
    }
    l_388++;
    return p_637->g_391;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_86
 * writes:
 */
uint32_t  func_28(int32_t  p_29, int8_t  p_30, int8_t * p_31, int8_t * p_32, struct S7 * p_637)
{ /* block id: 59 */
    struct S3 *l_206 = (void*)0;
    struct S3 **l_207 = &l_206;
    (*l_207) = l_206;
    return p_637->g_86;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_42 p_637->g_39.f0 p_637->g_55 p_637->g_39.f2 p_637->g_56 p_637->g_59 p_637->g_41 p_637->g_68 p_637->g_77 p_637->g_83 p_637->g_84 p_637->g_39.f4 p_637->g_112 p_637->g_131 p_637->g_144 p_637->g_151 p_637->g_130 p_637->g_86 p_637->g_39 p_637->g_165 p_637->g_166 p_637->g_167 p_637->g_170 p_637->g_171 p_637->g_191 p_637->g_7 p_637->g_205
 * writes: p_637->g_42 p_637->g_55 p_637->g_56 p_637->g_39.f2 p_637->g_59 p_637->g_41 p_637->g_82 p_637->g_112 p_637->g_130 p_637->g_86 p_637->g_160 p_637->g_171 p_637->g_83 p_637->g_151 p_637->g_205
 */
int16_t  func_33(struct S0  p_34, uint8_t  p_35, struct S0  p_36, uint32_t  p_37, uint64_t  p_38, struct S7 * p_637)
{ /* block id: 6 */
    VECTOR(int64_t, 8) l_168 = (VECTOR(int64_t, 8))(0x42CFE6923C3D6B9CL, (VECTOR(int64_t, 4))(0x42CFE6923C3D6B9CL, (VECTOR(int64_t, 2))(0x42CFE6923C3D6B9CL, 6L), 6L), 6L, 0x42CFE6923C3D6B9CL, 6L);
    VECTOR(int64_t, 16) l_169 = (VECTOR(int64_t, 16))(0x45A5E4A86E02FA57L, (VECTOR(int64_t, 4))(0x45A5E4A86E02FA57L, (VECTOR(int64_t, 2))(0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL), 0x402CE18DB7C9ED2DL), 0x402CE18DB7C9ED2DL, 0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL, (VECTOR(int64_t, 2))(0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL), (VECTOR(int64_t, 2))(0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL), 0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL, 0x45A5E4A86E02FA57L, 0x402CE18DB7C9ED2DL);
    struct S0 *l_172[8];
    int32_t *l_175 = &p_637->g_131.f1;
    struct S0 *l_178 = &p_637->g_171;
    int8_t *l_179 = &p_637->g_131.f4.f0;
    int64_t *l_180 = (void*)0;
    int64_t *l_181 = (void*)0;
    int64_t *l_182 = (void*)0;
    int64_t *l_183 = (void*)0;
    int64_t *l_184 = (void*)0;
    int64_t *l_185 = (void*)0;
    int64_t *l_186 = (void*)0;
    int64_t *l_187 = (void*)0;
    int32_t l_188 = 0L;
    int32_t *l_204 = &p_637->g_205;
    int i;
    for (i = 0; i < 8; i++)
        l_172[i] = &p_637->g_171;
    --p_637->g_42;
    (*l_204) ^= func_45(func_48(&p_637->g_41, p_34.f0, p_637), ((safe_sub_func_int64_t_s_s((l_188 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x4F57D4F5L)), (-1L), 1L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(1UL, 4294967287UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_637->g_165.s1437)).x, (((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(0x7C5B69AEF82AFFBDL, 0x73880B83B8E8A177L)).xyxyyyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_637->g_166.s3764)).yywyxxyz))))).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_637->g_167.s2086)).odd)).yxxy, ((VECTOR(int64_t, 2))(l_168.s32)).yyyx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_169.s3d)).yxyy)).zzxyxwxwyxyxyxwz)).s205e))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_637->g_170.wxwwywzx)).lo)))))))))).w > ((p_637->g_171 = p_637->g_171) , (safe_rshift_func_uint8_t_u_s((l_175 == (((l_168.s6 == (safe_rshift_func_int16_t_s_s((&p_36 != l_178), ((void*)0 == l_179)))) != p_637->g_84) , (void*)0)), l_169.s7)))), 0UL, 0xB20D12CEL)).even))))))).yxyx)), 0x5FEBA7B4L, 0xB06B514DL)).lo))))).even)), 0x0DCD9A7503C9241BL, 0x0B08318785BF4E3EL)).x), l_169.s3)) , p_637->g_171.f3), p_637);
    return p_34.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_191 p_637->g_166 p_637->g_7 p_637->g_42 p_637->g_55
 * writes: p_637->g_83 p_637->g_86 p_637->g_151
 */
int32_t  func_45(struct S0  p_46, int8_t  p_47, struct S7 * p_637)
{ /* block id: 51 */
    int32_t *l_190 = &p_637->g_86;
    int32_t **l_189 = &l_190;
    VECTOR(uint32_t, 2) l_196 = (VECTOR(uint32_t, 2))(0x7060A855L, 5UL);
    VECTOR(int32_t, 8) l_197 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    int8_t *l_198 = &p_637->g_7;
    int64_t *l_201 = (void*)0;
    int64_t *l_202 = &p_637->g_83;
    int32_t *l_203[3][6] = {{&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_86,(void*)0,&p_637->g_86},{&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_86,(void*)0,&p_637->g_86},{&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_86,(void*)0,&p_637->g_86}};
    int i, j;
    p_637->g_151.sf = ((VECTOR(int32_t, 8))((((void*)0 != &p_637->g_144[0][4][1]) < ((((((*l_189) = (void*)0) != (void*)0) && (((p_637->g_86 = (((*l_202) = (((VECTOR(uint64_t, 8))(0xCFD71407DF1CD130L, 18446744073709551611UL, 8UL, 0xB967A072E5875BFBL, (p_637->g_191[7] , ((((0xD2L != ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_196.yx)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 2))(0L, 0x73FC83B2L)), ((VECTOR(int32_t, 16))(l_197.s2755303324505410)).s48))).yxyyxxyy)).s7507217270645717)).s2)), (l_198 == l_198))) != ((safe_add_func_int8_t_s_s((p_637->g_166.s7 || (-1L)), p_46.f2)) && (-1L)))) > 0x99BFL) > 4L) || p_46.f3)), 18446744073709551615UL, 18446744073709551614UL, 0UL)).s5 , p_637->g_7)) && 0x75CC1E7B6CD3ABC8L)) == p_46.f3) , p_637->g_42)) >= p_47) > 0x17CFL)), p_637->g_55, p_46.f3, 0x21425B39L, ((VECTOR(int32_t, 2))(1L)), (-1L), (-1L))).s7;
    return p_46.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_39.f0 p_637->g_55 p_637->g_39.f2 p_637->g_56 p_637->g_59 p_637->g_41 p_637->g_68 p_637->g_77 p_637->g_83 p_637->g_84 p_637->g_39.f4 p_637->g_112 p_637->g_131 p_637->g_144 p_637->g_151 p_637->g_130 p_637->g_86 p_637->g_39
 * writes: p_637->g_55 p_637->g_56 p_637->g_39.f2 p_637->g_59 p_637->g_41 p_637->g_82 p_637->g_112 p_637->g_130 p_637->g_86 p_637->g_160
 */
struct S0  func_48(uint8_t * p_49, uint32_t  p_50, struct S7 * p_637)
{ /* block id: 8 */
    struct S2 *l_60 = &p_637->g_59[3];
    VECTOR(uint16_t, 4) l_78 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xF739L), 0xF739L);
    int32_t l_98 = 0x7F5D1987L;
    int32_t l_103 = 0x575ED6F0L;
    int32_t l_109[2][6] = {{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}};
    VECTOR(uint64_t, 2) l_124 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBEBD96B05D7DFB7EL);
    int64_t l_138 = 4L;
    uint8_t *l_148 = &p_637->g_56[0][3][0];
    uint8_t **l_147 = &l_148;
    uint8_t ***l_146 = &l_147;
    VECTOR(int32_t, 8) l_149 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    int64_t l_150 = (-1L);
    int64_t *l_154 = &p_637->g_130;
    int64_t *l_155 = &l_150;
    int32_t *l_156 = &p_637->g_86;
    struct S0 l_162 = {0x0B00BCB4L,1UL,0x40EFL,0xABFC5E8FL,0x54C83E8FL};
    int i, j;
    (*l_60) = func_51(p_637->g_39.f0, p_637);
    for (p_637->g_41 = 4; (p_637->g_41 > 46); ++p_637->g_41)
    { /* block id: 22 */
        VECTOR(uint16_t, 2) l_67 = (VECTOR(uint16_t, 2))(0x9F6DL, 0x686FL);
        uint8_t *l_70 = &p_637->g_55;
        uint8_t **l_69 = &l_70;
        VECTOR(uint16_t, 8) l_71 = (VECTOR(uint16_t, 8))(0x965FL, (VECTOR(uint16_t, 4))(0x965FL, (VECTOR(uint16_t, 2))(0x965FL, 65529UL), 65529UL), 65529UL, 0x965FL, 65529UL);
        VECTOR(uint16_t, 2) l_72 = (VECTOR(uint16_t, 2))(0x1DDAL, 0xD4F8L);
        int32_t *l_81 = &p_637->g_82;
        int32_t l_89 = 0x21833FEFL;
        int32_t l_108 = (-7L);
        int32_t l_110 = 0x5286A585L;
        int32_t l_111[6] = {0x11F76D5AL,0x11F76D5AL,0x11F76D5AL,0x11F76D5AL,0x11F76D5AL,0x11F76D5AL};
        VECTOR(uint64_t, 16) l_125 = (VECTOR(uint64_t, 16))(0xB2AF2F4C186D8551L, (VECTOR(uint64_t, 4))(0xB2AF2F4C186D8551L, (VECTOR(uint64_t, 2))(0xB2AF2F4C186D8551L, 0UL), 0UL), 0UL, 0xB2AF2F4C186D8551L, 0UL, (VECTOR(uint64_t, 2))(0xB2AF2F4C186D8551L, 0UL), (VECTOR(uint64_t, 2))(0xB2AF2F4C186D8551L, 0UL), 0xB2AF2F4C186D8551L, 0UL, 0xB2AF2F4C186D8551L, 0UL);
        uint32_t l_141 = 4294967295UL;
        int8_t l_142 = 0x07L;
        struct S0 l_143 = {-9L,18446744073709551613UL,8L,0UL,0x05DC1642L};
        int i;
        if ((safe_mod_func_int8_t_s_s(p_637->g_59[9].f2, ((safe_add_func_int16_t_s_s(p_50, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 0UL)))).yyxyyyyxxxxyyyxx)).s56, ((VECTOR(uint16_t, 8))(l_67.xyyxxyyy)).s52, ((VECTOR(uint16_t, 4))(l_67.x, ((VECTOR(uint16_t, 2))(p_637->g_68.zx)), 0x1C6FL)).odd))))).xyxx, ((VECTOR(uint16_t, 16))((((*l_69) = &p_637->g_56[0][3][0]) == (void*)0), 0xA49EL, ((VECTOR(uint16_t, 8))(l_71.s55645526)), ((VECTOR(uint16_t, 4))(l_72.xxyy)), 65535UL, 0x71D2L)).sf7af))).y)) || ((**l_69) = (safe_div_func_int64_t_s_s((p_50 || ((safe_add_func_uint8_t_u_u(((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(p_637->g_77.s8ad0af0966ab1420))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_78.xxyy)))).wzzyyzwwxzwyxzxy))).s87)).yxxxxxxy)).even)).z >= (safe_add_func_int64_t_s_s(l_67.y, ((((((*l_81) = ((!(((l_78.y , (0x665B8C0BL & p_637->g_68.z)) < 0x31L) | p_50)) <= p_50)) , p_50) ^ l_78.w) < p_637->g_83) > 0x6EBEA24DL)))) , p_637->g_84), l_71.s2)) <= p_637->g_39.f4)), GROUP_DIVERGE(0, 1))))))))
        { /* block id: 26 */
            int32_t *l_85 = &p_637->g_86;
            int32_t *l_87 = (void*)0;
            int32_t *l_88 = &p_637->g_86;
            int32_t *l_90 = &p_637->g_86;
            int32_t *l_91 = &p_637->g_86;
            int32_t *l_92 = (void*)0;
            int32_t *l_93 = &p_637->g_86;
            int32_t *l_94 = &p_637->g_86;
            int32_t l_95 = 4L;
            int32_t *l_96 = (void*)0;
            int32_t *l_97 = &p_637->g_86;
            int32_t *l_99 = &l_95;
            int32_t *l_100 = &p_637->g_86;
            int32_t *l_101 = (void*)0;
            int32_t *l_102 = (void*)0;
            int32_t l_104 = 0x31492E8FL;
            int32_t *l_105 = &l_104;
            int32_t *l_106 = &l_104;
            int32_t *l_107[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            p_637->g_112--;
        }
        else
        { /* block id: 28 */
            VECTOR(uint64_t, 16) l_123 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL), 1UL, 18446744073709551608UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 18446744073709551608UL, 1UL, 18446744073709551608UL, 1UL);
            VECTOR(uint64_t, 16) l_126 = (VECTOR(uint64_t, 16))(0xC52679AD97AB8FBBL, (VECTOR(uint64_t, 4))(0xC52679AD97AB8FBBL, (VECTOR(uint64_t, 2))(0xC52679AD97AB8FBBL, 0x15D791A12690506AL), 0x15D791A12690506AL), 0x15D791A12690506AL, 0xC52679AD97AB8FBBL, 0x15D791A12690506AL, (VECTOR(uint64_t, 2))(0xC52679AD97AB8FBBL, 0x15D791A12690506AL), (VECTOR(uint64_t, 2))(0xC52679AD97AB8FBBL, 0x15D791A12690506AL), 0xC52679AD97AB8FBBL, 0x15D791A12690506AL, 0xC52679AD97AB8FBBL, 0x15D791A12690506AL);
            uint64_t *l_127 = (void*)0;
            uint64_t *l_128 = (void*)0;
            uint64_t *l_129 = (void*)0;
            int32_t *l_139 = (void*)0;
            int32_t *l_140 = &l_108;
            int i;
            l_141 ^= ((0x63100998L && (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_50, (p_637->g_68.x <= 0UL))), (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0xC5977F73882F6EF7L, 18446744073709551606UL, 18446744073709551608UL, 1UL, ((VECTOR(uint64_t, 4))(l_123.s8770)), 0x97E96616590C650DL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_124.xyyyyyyy)).lo)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 2))(0x7B8FE932ECC1E89FL, 18446744073709551615UL)).xxyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_125.sd3)), 0xF21927215479D400L, 18446744073709551615UL)).odd)).xxxy)))))).ywyxzyyyxxzwxzwx)).s5d)), 18446744073709551615UL)).s2a)).xxxx)).zyzzzyzy)).s3, (p_637->g_130 = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_126.s2fbd8ca6)))).s1)))))) && ((p_637->g_131 , (safe_lshift_func_uint8_t_u_u(0x42L, 6))) == ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 8))(0xEF8D76BDL, (safe_sub_func_int32_t_s_s((((*l_140) = (safe_add_func_int16_t_s_s(l_138, p_637->g_59[9].f4))) < 1L), p_637->g_59[9].f1)), ((VECTOR(uint32_t, 4))(0UL)), 0xE46DF66AL, 4294967295UL)).s2746670010313707))).s4));
        }
        if (l_142)
            continue;
        if (l_71.s3)
            break;
        return l_143;
    }
    (*l_156) = ((VECTOR(int32_t, 16))((-3L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x07F47BCEL, 0x2AFF4E99L)), (p_637->g_144[0][4][1] == ((*l_146) = &p_49)), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_149.s15056055)).lo)).zyzyyxxywxxxwxxy)), ((VECTOR(int32_t, 8))(l_150, ((VECTOR(int32_t, 2))(p_637->g_151.s22)), (l_149.s1 ^ (safe_sub_func_uint64_t_u_u(l_78.w, ((l_103 ^ ((*l_155) = ((*l_154) &= ((p_637->g_59[9].f3 , (((p_637->g_131.f2 , p_49) == p_49) ^ 0x0EF45CCAL)) == p_637->g_77.sf)))) == l_124.y)))), ((VECTOR(int32_t, 2))(0x27B798A7L)), (-9L), 0L)).s2333230042110010))).s53)))), 0x6640BCF0L, 0x603BB9EDL)), 0L, 0L, ((VECTOR(int32_t, 4))(0L)), 0x40C7B233L)).s2;
    for (p_637->g_86 = 27; (p_637->g_86 >= 8); --p_637->g_86)
    { /* block id: 43 */
        struct S2 *l_159[2];
        int32_t l_161 = 0x2612E5C0L;
        int i;
        for (i = 0; i < 2; i++)
            l_159[i] = (void*)0;
        p_637->g_160 = l_159[0];
        if (l_161)
            continue;
        return l_162;
    }
    return p_637->g_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_55 p_637->g_39.f2 p_637->g_56 p_637->g_59
 * writes: p_637->g_55 p_637->g_56 p_637->g_39.f2
 */
struct S2  func_51(uint64_t  p_52, struct S7 * p_637)
{ /* block id: 9 */
    int8_t *l_53 = &p_637->g_7;
    int8_t *l_54[4] = {&p_637->g_7,&p_637->g_7,&p_637->g_7,&p_637->g_7};
    int i;
    p_637->g_55 |= ((l_53 = l_53) != l_54[2]);
    p_637->g_56[0][3][0] = 0L;
    for (p_637->g_39.f2 = 16; (p_637->g_39.f2 == (-20)); p_637->g_39.f2 = safe_sub_func_int32_t_s_s(p_637->g_39.f2, 1))
    { /* block id: 15 */
        if (p_637->g_56[0][1][0])
            break;
    }
    return p_637->g_59[9];
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
    struct S7 c_638;
    struct S7* p_637 = &c_638;
    struct S7 c_639 = {
        0L, // p_637->g_7
        {-1L,18446744073709551608UL,0L,0UL,0x7A2E85C6L}, // p_637->g_39
        247UL, // p_637->g_41
        0xB5C7B12393DFE8E2L, // p_637->g_42
        0UL, // p_637->g_55
        {{{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL}},{{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL}},{{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL},{0x13L,0UL}}}, // p_637->g_56
        {{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL},{0x4FL,0L,-2L,{1L,0xE4C1C17FL,0UL},0xAAEEA3ADL}}, // p_637->g_59
        (VECTOR(uint16_t, 4))(0x1244L, (VECTOR(uint16_t, 2))(0x1244L, 1UL), 1UL), // p_637->g_68
        (VECTOR(uint16_t, 16))(0x60FEL, (VECTOR(uint16_t, 4))(0x60FEL, (VECTOR(uint16_t, 2))(0x60FEL, 0x9702L), 0x9702L), 0x9702L, 0x60FEL, 0x9702L, (VECTOR(uint16_t, 2))(0x60FEL, 0x9702L), (VECTOR(uint16_t, 2))(0x60FEL, 0x9702L), 0x60FEL, 0x9702L, 0x60FEL, 0x9702L), // p_637->g_77
        1L, // p_637->g_82
        0x354EB9293347D044L, // p_637->g_83
        255UL, // p_637->g_84
        0x08A645C9L, // p_637->g_86
        18446744073709551615UL, // p_637->g_112
        0L, // p_637->g_130
        {0x7AL,0x73E46763L,0x1FBB9A9CB853F4F8L,0x9874L,{0x2FL,1L,1L,{0x31F71B9FL,4294967295UL,4294967291UL},0x2D988608L},0x2D9E6926EBD8262CL,0xF24FAA970772F823L}, // p_637->g_131
        (void*)0, // p_637->g_145
        {{{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145}},{{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145}},{{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145}},{{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145},{&p_637->g_145,&p_637->g_145,&p_637->g_145,(void*)0,&p_637->g_145,(void*)0,&p_637->g_145}}}, // p_637->g_144
        (VECTOR(int32_t, 16))(0x30B9A071L, (VECTOR(int32_t, 4))(0x30B9A071L, (VECTOR(int32_t, 2))(0x30B9A071L, 0x252BFD30L), 0x252BFD30L), 0x252BFD30L, 0x30B9A071L, 0x252BFD30L, (VECTOR(int32_t, 2))(0x30B9A071L, 0x252BFD30L), (VECTOR(int32_t, 2))(0x30B9A071L, 0x252BFD30L), 0x30B9A071L, 0x252BFD30L, 0x30B9A071L, 0x252BFD30L), // p_637->g_151
        &p_637->g_59[8], // p_637->g_160
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL), // p_637->g_165
        (VECTOR(int64_t, 8))(0x09C1F5AF660AC8DFL, (VECTOR(int64_t, 4))(0x09C1F5AF660AC8DFL, (VECTOR(int64_t, 2))(0x09C1F5AF660AC8DFL, 0x393D1FB21830AA8DL), 0x393D1FB21830AA8DL), 0x393D1FB21830AA8DL, 0x09C1F5AF660AC8DFL, 0x393D1FB21830AA8DL), // p_637->g_166
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_637->g_167
        (VECTOR(int64_t, 4))(0x52D037CA2DBAE0E4L, (VECTOR(int64_t, 2))(0x52D037CA2DBAE0E4L, 0L), 0L), // p_637->g_170
        {-2L,0x6A2D9FB24213AC70L,1L,1UL,0x3E3A797FL}, // p_637->g_171
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_637->g_191
        0x2DF64CAFL, // p_637->g_205
        (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65535UL), 65535UL), // p_637->g_228
        {0x18L,5L,0x791C839252952947L,{9L,0xD7ADB171L,4294967292UL},0x2646C3E3L}, // p_637->g_230
        {0x5EL,0x071DC711L,0x6E4AD0ADCB19AD6DL,{0L,5UL,0x13E15321L},0xB20811E1L}, // p_637->g_232
        (VECTOR(uint32_t, 2))(4294967293UL, 0x35F71A27L), // p_637->g_247
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0DE2L), 0x0DE2L), 0x0DE2L, (-1L), 0x0DE2L), // p_637->g_258
        (void*)0, // p_637->g_260
        {0x7975D883L,0x7975D883L,0x7975D883L}, // p_637->g_268
        (void*)0, // p_637->g_269
        {{&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205,&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205},{&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205,&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205},{&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205,&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205},{&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205,&p_637->g_205,&p_637->g_86,(void*)0,&p_637->g_86,&p_637->g_205}}, // p_637->g_275
        {{1UL},{0x5EEC679FL},{1UL},{1UL},{0x5EEC679FL},{1UL},{1UL}}, // p_637->g_339
        {0x1EL}, // p_637->g_340
        (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x462EL), 0x462EL), 0x462EL, 8L, 0x462EL), // p_637->g_357
        &p_637->g_191[4], // p_637->g_364
        {{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364},{&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364,&p_637->g_364}}, // p_637->g_363
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_637->g_365
        &p_637->g_364, // p_637->g_366
        (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x1DE2L), 0x1DE2L), 0x1DE2L, 2L, 0x1DE2L), // p_637->g_369
        (VECTOR(int32_t, 16))(0x12A1A136L, (VECTOR(int32_t, 4))(0x12A1A136L, (VECTOR(int32_t, 2))(0x12A1A136L, 0x02088A7EL), 0x02088A7EL), 0x02088A7EL, 0x12A1A136L, 0x02088A7EL, (VECTOR(int32_t, 2))(0x12A1A136L, 0x02088A7EL), (VECTOR(int32_t, 2))(0x12A1A136L, 0x02088A7EL), 0x12A1A136L, 0x02088A7EL, 0x12A1A136L, 0x02088A7EL), // p_637->g_371
        (VECTOR(int32_t, 2))((-1L), 0x56E1CA2AL), // p_637->g_372
        &p_637->g_339[1], // p_637->g_375
        &p_637->g_375, // p_637->g_374
        {0x24L}, // p_637->g_391
        {1L,5UL,0UL}, // p_637->g_412
        &p_637->g_131.f4, // p_637->g_414
        &p_637->g_275[1][0], // p_637->g_427
        (-1L), // p_637->g_442
        (VECTOR(uint64_t, 2))(7UL, 0x92024A39DC0A5370L), // p_637->g_451
        &p_637->g_275[1][0], // p_637->g_459
        (VECTOR(int16_t, 4))(0x7F15L, (VECTOR(int16_t, 2))(0x7F15L, 0L), 0L), // p_637->g_465
        {{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL},{0x69L,0x445B4220L,0x286AB6132AB54C8CL,{0x78316678L,0xDA8FB63AL,0xB2C97A9BL},0xAE721AD1L},{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL},{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL},{0x69L,0x445B4220L,0x286AB6132AB54C8CL,{0x78316678L,0xDA8FB63AL,0xB2C97A9BL},0xAE721AD1L},{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL},{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL},{0x69L,0x445B4220L,0x286AB6132AB54C8CL,{0x78316678L,0xDA8FB63AL,0xB2C97A9BL},0xAE721AD1L},{-1L,0L,1L,{0x7DD01520L,1UL,0x8C3FE490L},0x96F0A60EL}}, // p_637->g_484
        (VECTOR(int32_t, 16))(0x4B14D830L, (VECTOR(int32_t, 4))(0x4B14D830L, (VECTOR(int32_t, 2))(0x4B14D830L, 1L), 1L), 1L, 0x4B14D830L, 1L, (VECTOR(int32_t, 2))(0x4B14D830L, 1L), (VECTOR(int32_t, 2))(0x4B14D830L, 1L), 0x4B14D830L, 1L, 0x4B14D830L, 1L), // p_637->g_502
        (VECTOR(int32_t, 8))(0x256C3591L, (VECTOR(int32_t, 4))(0x256C3591L, (VECTOR(int32_t, 2))(0x256C3591L, 0x3845A937L), 0x3845A937L), 0x3845A937L, 0x256C3591L, 0x3845A937L), // p_637->g_504
        {(void*)0,(void*)0}, // p_637->g_517
        &p_637->g_205, // p_637->g_526
        (void*)0, // p_637->g_534
        (void*)0, // p_637->g_535
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x526D115CC9F20197L), 0x526D115CC9F20197L), 0x526D115CC9F20197L, 18446744073709551615UL, 0x526D115CC9F20197L), // p_637->g_544
        (void*)0, // p_637->g_546
        0, // p_637->v_collective
        sequence_input[get_global_id(0)], // p_637->global_0_offset
        sequence_input[get_global_id(1)], // p_637->global_1_offset
        sequence_input[get_global_id(2)], // p_637->global_2_offset
        sequence_input[get_local_id(0)], // p_637->local_0_offset
        sequence_input[get_local_id(1)], // p_637->local_1_offset
        sequence_input[get_local_id(2)], // p_637->local_2_offset
        sequence_input[get_group_id(0)], // p_637->group_0_offset
        sequence_input[get_group_id(1)], // p_637->group_1_offset
        sequence_input[get_group_id(2)], // p_637->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_637->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_638 = c_639;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_637);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_637->g_7, "p_637->g_7", print_hash_value);
    transparent_crc(p_637->g_39.f0, "p_637->g_39.f0", print_hash_value);
    transparent_crc(p_637->g_39.f1, "p_637->g_39.f1", print_hash_value);
    transparent_crc(p_637->g_39.f2, "p_637->g_39.f2", print_hash_value);
    transparent_crc(p_637->g_39.f3, "p_637->g_39.f3", print_hash_value);
    transparent_crc(p_637->g_39.f4, "p_637->g_39.f4", print_hash_value);
    transparent_crc(p_637->g_41, "p_637->g_41", print_hash_value);
    transparent_crc(p_637->g_42, "p_637->g_42", print_hash_value);
    transparent_crc(p_637->g_55, "p_637->g_55", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_637->g_56[i][j][k], "p_637->g_56[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_637->g_59[i].f0, "p_637->g_59[i].f0", print_hash_value);
        transparent_crc(p_637->g_59[i].f1, "p_637->g_59[i].f1", print_hash_value);
        transparent_crc(p_637->g_59[i].f2, "p_637->g_59[i].f2", print_hash_value);
        transparent_crc(p_637->g_59[i].f3.f0, "p_637->g_59[i].f3.f0", print_hash_value);
        transparent_crc(p_637->g_59[i].f3.f1, "p_637->g_59[i].f3.f1", print_hash_value);
        transparent_crc(p_637->g_59[i].f3.f2, "p_637->g_59[i].f3.f2", print_hash_value);
        transparent_crc(p_637->g_59[i].f4, "p_637->g_59[i].f4", print_hash_value);

    }
    transparent_crc(p_637->g_68.x, "p_637->g_68.x", print_hash_value);
    transparent_crc(p_637->g_68.y, "p_637->g_68.y", print_hash_value);
    transparent_crc(p_637->g_68.z, "p_637->g_68.z", print_hash_value);
    transparent_crc(p_637->g_68.w, "p_637->g_68.w", print_hash_value);
    transparent_crc(p_637->g_77.s0, "p_637->g_77.s0", print_hash_value);
    transparent_crc(p_637->g_77.s1, "p_637->g_77.s1", print_hash_value);
    transparent_crc(p_637->g_77.s2, "p_637->g_77.s2", print_hash_value);
    transparent_crc(p_637->g_77.s3, "p_637->g_77.s3", print_hash_value);
    transparent_crc(p_637->g_77.s4, "p_637->g_77.s4", print_hash_value);
    transparent_crc(p_637->g_77.s5, "p_637->g_77.s5", print_hash_value);
    transparent_crc(p_637->g_77.s6, "p_637->g_77.s6", print_hash_value);
    transparent_crc(p_637->g_77.s7, "p_637->g_77.s7", print_hash_value);
    transparent_crc(p_637->g_77.s8, "p_637->g_77.s8", print_hash_value);
    transparent_crc(p_637->g_77.s9, "p_637->g_77.s9", print_hash_value);
    transparent_crc(p_637->g_77.sa, "p_637->g_77.sa", print_hash_value);
    transparent_crc(p_637->g_77.sb, "p_637->g_77.sb", print_hash_value);
    transparent_crc(p_637->g_77.sc, "p_637->g_77.sc", print_hash_value);
    transparent_crc(p_637->g_77.sd, "p_637->g_77.sd", print_hash_value);
    transparent_crc(p_637->g_77.se, "p_637->g_77.se", print_hash_value);
    transparent_crc(p_637->g_77.sf, "p_637->g_77.sf", print_hash_value);
    transparent_crc(p_637->g_82, "p_637->g_82", print_hash_value);
    transparent_crc(p_637->g_83, "p_637->g_83", print_hash_value);
    transparent_crc(p_637->g_84, "p_637->g_84", print_hash_value);
    transparent_crc(p_637->g_86, "p_637->g_86", print_hash_value);
    transparent_crc(p_637->g_112, "p_637->g_112", print_hash_value);
    transparent_crc(p_637->g_130, "p_637->g_130", print_hash_value);
    transparent_crc(p_637->g_131.f0, "p_637->g_131.f0", print_hash_value);
    transparent_crc(p_637->g_131.f1, "p_637->g_131.f1", print_hash_value);
    transparent_crc(p_637->g_131.f2, "p_637->g_131.f2", print_hash_value);
    transparent_crc(p_637->g_131.f3, "p_637->g_131.f3", print_hash_value);
    transparent_crc(p_637->g_131.f4.f0, "p_637->g_131.f4.f0", print_hash_value);
    transparent_crc(p_637->g_131.f4.f1, "p_637->g_131.f4.f1", print_hash_value);
    transparent_crc(p_637->g_131.f4.f2, "p_637->g_131.f4.f2", print_hash_value);
    transparent_crc(p_637->g_131.f4.f3.f0, "p_637->g_131.f4.f3.f0", print_hash_value);
    transparent_crc(p_637->g_131.f4.f3.f1, "p_637->g_131.f4.f3.f1", print_hash_value);
    transparent_crc(p_637->g_131.f4.f3.f2, "p_637->g_131.f4.f3.f2", print_hash_value);
    transparent_crc(p_637->g_131.f4.f4, "p_637->g_131.f4.f4", print_hash_value);
    transparent_crc(p_637->g_131.f5, "p_637->g_131.f5", print_hash_value);
    transparent_crc(p_637->g_131.f6, "p_637->g_131.f6", print_hash_value);
    transparent_crc(p_637->g_151.s0, "p_637->g_151.s0", print_hash_value);
    transparent_crc(p_637->g_151.s1, "p_637->g_151.s1", print_hash_value);
    transparent_crc(p_637->g_151.s2, "p_637->g_151.s2", print_hash_value);
    transparent_crc(p_637->g_151.s3, "p_637->g_151.s3", print_hash_value);
    transparent_crc(p_637->g_151.s4, "p_637->g_151.s4", print_hash_value);
    transparent_crc(p_637->g_151.s5, "p_637->g_151.s5", print_hash_value);
    transparent_crc(p_637->g_151.s6, "p_637->g_151.s6", print_hash_value);
    transparent_crc(p_637->g_151.s7, "p_637->g_151.s7", print_hash_value);
    transparent_crc(p_637->g_151.s8, "p_637->g_151.s8", print_hash_value);
    transparent_crc(p_637->g_151.s9, "p_637->g_151.s9", print_hash_value);
    transparent_crc(p_637->g_151.sa, "p_637->g_151.sa", print_hash_value);
    transparent_crc(p_637->g_151.sb, "p_637->g_151.sb", print_hash_value);
    transparent_crc(p_637->g_151.sc, "p_637->g_151.sc", print_hash_value);
    transparent_crc(p_637->g_151.sd, "p_637->g_151.sd", print_hash_value);
    transparent_crc(p_637->g_151.se, "p_637->g_151.se", print_hash_value);
    transparent_crc(p_637->g_151.sf, "p_637->g_151.sf", print_hash_value);
    transparent_crc(p_637->g_165.s0, "p_637->g_165.s0", print_hash_value);
    transparent_crc(p_637->g_165.s1, "p_637->g_165.s1", print_hash_value);
    transparent_crc(p_637->g_165.s2, "p_637->g_165.s2", print_hash_value);
    transparent_crc(p_637->g_165.s3, "p_637->g_165.s3", print_hash_value);
    transparent_crc(p_637->g_165.s4, "p_637->g_165.s4", print_hash_value);
    transparent_crc(p_637->g_165.s5, "p_637->g_165.s5", print_hash_value);
    transparent_crc(p_637->g_165.s6, "p_637->g_165.s6", print_hash_value);
    transparent_crc(p_637->g_165.s7, "p_637->g_165.s7", print_hash_value);
    transparent_crc(p_637->g_166.s0, "p_637->g_166.s0", print_hash_value);
    transparent_crc(p_637->g_166.s1, "p_637->g_166.s1", print_hash_value);
    transparent_crc(p_637->g_166.s2, "p_637->g_166.s2", print_hash_value);
    transparent_crc(p_637->g_166.s3, "p_637->g_166.s3", print_hash_value);
    transparent_crc(p_637->g_166.s4, "p_637->g_166.s4", print_hash_value);
    transparent_crc(p_637->g_166.s5, "p_637->g_166.s5", print_hash_value);
    transparent_crc(p_637->g_166.s6, "p_637->g_166.s6", print_hash_value);
    transparent_crc(p_637->g_166.s7, "p_637->g_166.s7", print_hash_value);
    transparent_crc(p_637->g_167.s0, "p_637->g_167.s0", print_hash_value);
    transparent_crc(p_637->g_167.s1, "p_637->g_167.s1", print_hash_value);
    transparent_crc(p_637->g_167.s2, "p_637->g_167.s2", print_hash_value);
    transparent_crc(p_637->g_167.s3, "p_637->g_167.s3", print_hash_value);
    transparent_crc(p_637->g_167.s4, "p_637->g_167.s4", print_hash_value);
    transparent_crc(p_637->g_167.s5, "p_637->g_167.s5", print_hash_value);
    transparent_crc(p_637->g_167.s6, "p_637->g_167.s6", print_hash_value);
    transparent_crc(p_637->g_167.s7, "p_637->g_167.s7", print_hash_value);
    transparent_crc(p_637->g_167.s8, "p_637->g_167.s8", print_hash_value);
    transparent_crc(p_637->g_167.s9, "p_637->g_167.s9", print_hash_value);
    transparent_crc(p_637->g_167.sa, "p_637->g_167.sa", print_hash_value);
    transparent_crc(p_637->g_167.sb, "p_637->g_167.sb", print_hash_value);
    transparent_crc(p_637->g_167.sc, "p_637->g_167.sc", print_hash_value);
    transparent_crc(p_637->g_167.sd, "p_637->g_167.sd", print_hash_value);
    transparent_crc(p_637->g_167.se, "p_637->g_167.se", print_hash_value);
    transparent_crc(p_637->g_167.sf, "p_637->g_167.sf", print_hash_value);
    transparent_crc(p_637->g_170.x, "p_637->g_170.x", print_hash_value);
    transparent_crc(p_637->g_170.y, "p_637->g_170.y", print_hash_value);
    transparent_crc(p_637->g_170.z, "p_637->g_170.z", print_hash_value);
    transparent_crc(p_637->g_170.w, "p_637->g_170.w", print_hash_value);
    transparent_crc(p_637->g_171.f0, "p_637->g_171.f0", print_hash_value);
    transparent_crc(p_637->g_171.f1, "p_637->g_171.f1", print_hash_value);
    transparent_crc(p_637->g_171.f2, "p_637->g_171.f2", print_hash_value);
    transparent_crc(p_637->g_171.f3, "p_637->g_171.f3", print_hash_value);
    transparent_crc(p_637->g_171.f4, "p_637->g_171.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_637->g_191[i].f0, "p_637->g_191[i].f0", print_hash_value);

    }
    transparent_crc(p_637->g_205, "p_637->g_205", print_hash_value);
    transparent_crc(p_637->g_228.x, "p_637->g_228.x", print_hash_value);
    transparent_crc(p_637->g_228.y, "p_637->g_228.y", print_hash_value);
    transparent_crc(p_637->g_228.z, "p_637->g_228.z", print_hash_value);
    transparent_crc(p_637->g_228.w, "p_637->g_228.w", print_hash_value);
    transparent_crc(p_637->g_230.f0, "p_637->g_230.f0", print_hash_value);
    transparent_crc(p_637->g_230.f1, "p_637->g_230.f1", print_hash_value);
    transparent_crc(p_637->g_230.f2, "p_637->g_230.f2", print_hash_value);
    transparent_crc(p_637->g_230.f3.f0, "p_637->g_230.f3.f0", print_hash_value);
    transparent_crc(p_637->g_230.f3.f1, "p_637->g_230.f3.f1", print_hash_value);
    transparent_crc(p_637->g_230.f3.f2, "p_637->g_230.f3.f2", print_hash_value);
    transparent_crc(p_637->g_230.f4, "p_637->g_230.f4", print_hash_value);
    transparent_crc(p_637->g_232.f0, "p_637->g_232.f0", print_hash_value);
    transparent_crc(p_637->g_232.f1, "p_637->g_232.f1", print_hash_value);
    transparent_crc(p_637->g_232.f2, "p_637->g_232.f2", print_hash_value);
    transparent_crc(p_637->g_232.f3.f0, "p_637->g_232.f3.f0", print_hash_value);
    transparent_crc(p_637->g_232.f3.f1, "p_637->g_232.f3.f1", print_hash_value);
    transparent_crc(p_637->g_232.f3.f2, "p_637->g_232.f3.f2", print_hash_value);
    transparent_crc(p_637->g_232.f4, "p_637->g_232.f4", print_hash_value);
    transparent_crc(p_637->g_247.x, "p_637->g_247.x", print_hash_value);
    transparent_crc(p_637->g_247.y, "p_637->g_247.y", print_hash_value);
    transparent_crc(p_637->g_258.s0, "p_637->g_258.s0", print_hash_value);
    transparent_crc(p_637->g_258.s1, "p_637->g_258.s1", print_hash_value);
    transparent_crc(p_637->g_258.s2, "p_637->g_258.s2", print_hash_value);
    transparent_crc(p_637->g_258.s3, "p_637->g_258.s3", print_hash_value);
    transparent_crc(p_637->g_258.s4, "p_637->g_258.s4", print_hash_value);
    transparent_crc(p_637->g_258.s5, "p_637->g_258.s5", print_hash_value);
    transparent_crc(p_637->g_258.s6, "p_637->g_258.s6", print_hash_value);
    transparent_crc(p_637->g_258.s7, "p_637->g_258.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_637->g_268[i], "p_637->g_268[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_637->g_339[i].f0, "p_637->g_339[i].f0", print_hash_value);

    }
    transparent_crc(p_637->g_340.f0, "p_637->g_340.f0", print_hash_value);
    transparent_crc(p_637->g_357.s0, "p_637->g_357.s0", print_hash_value);
    transparent_crc(p_637->g_357.s1, "p_637->g_357.s1", print_hash_value);
    transparent_crc(p_637->g_357.s2, "p_637->g_357.s2", print_hash_value);
    transparent_crc(p_637->g_357.s3, "p_637->g_357.s3", print_hash_value);
    transparent_crc(p_637->g_357.s4, "p_637->g_357.s4", print_hash_value);
    transparent_crc(p_637->g_357.s5, "p_637->g_357.s5", print_hash_value);
    transparent_crc(p_637->g_357.s6, "p_637->g_357.s6", print_hash_value);
    transparent_crc(p_637->g_357.s7, "p_637->g_357.s7", print_hash_value);
    transparent_crc(p_637->g_369.s0, "p_637->g_369.s0", print_hash_value);
    transparent_crc(p_637->g_369.s1, "p_637->g_369.s1", print_hash_value);
    transparent_crc(p_637->g_369.s2, "p_637->g_369.s2", print_hash_value);
    transparent_crc(p_637->g_369.s3, "p_637->g_369.s3", print_hash_value);
    transparent_crc(p_637->g_369.s4, "p_637->g_369.s4", print_hash_value);
    transparent_crc(p_637->g_369.s5, "p_637->g_369.s5", print_hash_value);
    transparent_crc(p_637->g_369.s6, "p_637->g_369.s6", print_hash_value);
    transparent_crc(p_637->g_369.s7, "p_637->g_369.s7", print_hash_value);
    transparent_crc(p_637->g_371.s0, "p_637->g_371.s0", print_hash_value);
    transparent_crc(p_637->g_371.s1, "p_637->g_371.s1", print_hash_value);
    transparent_crc(p_637->g_371.s2, "p_637->g_371.s2", print_hash_value);
    transparent_crc(p_637->g_371.s3, "p_637->g_371.s3", print_hash_value);
    transparent_crc(p_637->g_371.s4, "p_637->g_371.s4", print_hash_value);
    transparent_crc(p_637->g_371.s5, "p_637->g_371.s5", print_hash_value);
    transparent_crc(p_637->g_371.s6, "p_637->g_371.s6", print_hash_value);
    transparent_crc(p_637->g_371.s7, "p_637->g_371.s7", print_hash_value);
    transparent_crc(p_637->g_371.s8, "p_637->g_371.s8", print_hash_value);
    transparent_crc(p_637->g_371.s9, "p_637->g_371.s9", print_hash_value);
    transparent_crc(p_637->g_371.sa, "p_637->g_371.sa", print_hash_value);
    transparent_crc(p_637->g_371.sb, "p_637->g_371.sb", print_hash_value);
    transparent_crc(p_637->g_371.sc, "p_637->g_371.sc", print_hash_value);
    transparent_crc(p_637->g_371.sd, "p_637->g_371.sd", print_hash_value);
    transparent_crc(p_637->g_371.se, "p_637->g_371.se", print_hash_value);
    transparent_crc(p_637->g_371.sf, "p_637->g_371.sf", print_hash_value);
    transparent_crc(p_637->g_372.x, "p_637->g_372.x", print_hash_value);
    transparent_crc(p_637->g_372.y, "p_637->g_372.y", print_hash_value);
    transparent_crc(p_637->g_391.f0, "p_637->g_391.f0", print_hash_value);
    transparent_crc(p_637->g_412.f0, "p_637->g_412.f0", print_hash_value);
    transparent_crc(p_637->g_412.f1, "p_637->g_412.f1", print_hash_value);
    transparent_crc(p_637->g_412.f2, "p_637->g_412.f2", print_hash_value);
    transparent_crc(p_637->g_442, "p_637->g_442", print_hash_value);
    transparent_crc(p_637->g_451.x, "p_637->g_451.x", print_hash_value);
    transparent_crc(p_637->g_451.y, "p_637->g_451.y", print_hash_value);
    transparent_crc(p_637->g_465.x, "p_637->g_465.x", print_hash_value);
    transparent_crc(p_637->g_465.y, "p_637->g_465.y", print_hash_value);
    transparent_crc(p_637->g_465.z, "p_637->g_465.z", print_hash_value);
    transparent_crc(p_637->g_465.w, "p_637->g_465.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_637->g_484[i].f0, "p_637->g_484[i].f0", print_hash_value);
        transparent_crc(p_637->g_484[i].f1, "p_637->g_484[i].f1", print_hash_value);
        transparent_crc(p_637->g_484[i].f2, "p_637->g_484[i].f2", print_hash_value);
        transparent_crc(p_637->g_484[i].f3.f0, "p_637->g_484[i].f3.f0", print_hash_value);
        transparent_crc(p_637->g_484[i].f3.f1, "p_637->g_484[i].f3.f1", print_hash_value);
        transparent_crc(p_637->g_484[i].f3.f2, "p_637->g_484[i].f3.f2", print_hash_value);
        transparent_crc(p_637->g_484[i].f4, "p_637->g_484[i].f4", print_hash_value);

    }
    transparent_crc(p_637->g_502.s0, "p_637->g_502.s0", print_hash_value);
    transparent_crc(p_637->g_502.s1, "p_637->g_502.s1", print_hash_value);
    transparent_crc(p_637->g_502.s2, "p_637->g_502.s2", print_hash_value);
    transparent_crc(p_637->g_502.s3, "p_637->g_502.s3", print_hash_value);
    transparent_crc(p_637->g_502.s4, "p_637->g_502.s4", print_hash_value);
    transparent_crc(p_637->g_502.s5, "p_637->g_502.s5", print_hash_value);
    transparent_crc(p_637->g_502.s6, "p_637->g_502.s6", print_hash_value);
    transparent_crc(p_637->g_502.s7, "p_637->g_502.s7", print_hash_value);
    transparent_crc(p_637->g_502.s8, "p_637->g_502.s8", print_hash_value);
    transparent_crc(p_637->g_502.s9, "p_637->g_502.s9", print_hash_value);
    transparent_crc(p_637->g_502.sa, "p_637->g_502.sa", print_hash_value);
    transparent_crc(p_637->g_502.sb, "p_637->g_502.sb", print_hash_value);
    transparent_crc(p_637->g_502.sc, "p_637->g_502.sc", print_hash_value);
    transparent_crc(p_637->g_502.sd, "p_637->g_502.sd", print_hash_value);
    transparent_crc(p_637->g_502.se, "p_637->g_502.se", print_hash_value);
    transparent_crc(p_637->g_502.sf, "p_637->g_502.sf", print_hash_value);
    transparent_crc(p_637->g_504.s0, "p_637->g_504.s0", print_hash_value);
    transparent_crc(p_637->g_504.s1, "p_637->g_504.s1", print_hash_value);
    transparent_crc(p_637->g_504.s2, "p_637->g_504.s2", print_hash_value);
    transparent_crc(p_637->g_504.s3, "p_637->g_504.s3", print_hash_value);
    transparent_crc(p_637->g_504.s4, "p_637->g_504.s4", print_hash_value);
    transparent_crc(p_637->g_504.s5, "p_637->g_504.s5", print_hash_value);
    transparent_crc(p_637->g_504.s6, "p_637->g_504.s6", print_hash_value);
    transparent_crc(p_637->g_504.s7, "p_637->g_504.s7", print_hash_value);
    transparent_crc(p_637->g_544.s0, "p_637->g_544.s0", print_hash_value);
    transparent_crc(p_637->g_544.s1, "p_637->g_544.s1", print_hash_value);
    transparent_crc(p_637->g_544.s2, "p_637->g_544.s2", print_hash_value);
    transparent_crc(p_637->g_544.s3, "p_637->g_544.s3", print_hash_value);
    transparent_crc(p_637->g_544.s4, "p_637->g_544.s4", print_hash_value);
    transparent_crc(p_637->g_544.s5, "p_637->g_544.s5", print_hash_value);
    transparent_crc(p_637->g_544.s6, "p_637->g_544.s6", print_hash_value);
    transparent_crc(p_637->g_544.s7, "p_637->g_544.s7", print_hash_value);
    transparent_crc(p_637->v_collective, "p_637->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 31; i++)
            transparent_crc(p_637->g_special_values[i + 31 * get_linear_group_id()], "p_637->g_special_values[i + 31 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_637->l_comm_values[get_linear_local_id()], "p_637->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_637->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_637->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
