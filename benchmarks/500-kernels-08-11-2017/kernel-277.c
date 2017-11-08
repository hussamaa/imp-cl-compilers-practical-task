// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 78,55,1 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{1,2,5,4,0,3}, // permutation 0
{5,0,2,4,3,1}, // permutation 1
{1,0,4,2,3,5}, // permutation 2
{3,0,5,1,2,4}, // permutation 3
{3,2,0,5,4,1}, // permutation 4
{4,5,1,3,2,0}, // permutation 5
{2,0,5,4,1,3}, // permutation 6
{2,1,5,3,0,4}, // permutation 7
{2,3,1,5,0,4}, // permutation 8
{1,5,4,3,0,2} // permutation 9
};

// Seed: 1190305083

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint8_t  f1;
   volatile uint32_t  f2;
};

struct S1 {
   int16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int64_t  f3;
   uint8_t  f4;
   volatile uint8_t  f5;
   volatile uint32_t  f6;
   volatile uint64_t  f7;
   int32_t  f8;
   int32_t  f9;
};

struct S2 {
   uint64_t  f0;
   volatile int64_t  f1;
   volatile int32_t  f2;
   int16_t  f3;
   struct S0  f4;
   volatile int32_t  f5;
};

struct S3 {
   volatile uint64_t  f0;
   int32_t  f1;
   uint64_t  f2;
};

struct S4 {
   uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   volatile int32_t  f3;
};

union U5 {
   int32_t  f0;
   int64_t  f1;
};

union U6 {
   struct S2  f0;
};

struct S8 {
    int32_t g_5;
    int32_t * volatile g_4[2][4][9];
    int32_t * volatile g_7;
    int32_t * volatile g_8[2][4];
    int32_t * volatile g_9;
    uint32_t g_22;
    VECTOR(uint8_t, 16) g_38;
    volatile union U6 g_59[1];
    struct S4 g_64;
    int8_t g_66;
    volatile VECTOR(int8_t, 2) g_74;
    int16_t g_96;
    int8_t *g_101[2];
    int32_t *g_111;
    int32_t **g_110[7];
    struct S3 g_133;
    union U5 g_135;
    volatile VECTOR(int32_t, 16) g_146;
    struct S1 g_170;
    volatile uint64_t * volatile g_194[6][8][5];
    struct S0 g_195[3];
    VECTOR(int64_t, 4) g_211;
    VECTOR(int64_t, 4) g_212;
    VECTOR(int64_t, 16) g_213;
    VECTOR(uint16_t, 4) g_222;
    struct S0 g_224;
    struct S0 g_226[4];
    struct S3 * volatile g_233;
    struct S4 g_257;
    volatile struct S0 g_258;
    union U6 g_260;
    union U5 *g_262;
    union U5 ** volatile g_261;
    int32_t ** volatile g_268;
    volatile VECTOR(int64_t, 2) g_308;
    volatile int64_t g_312;
    volatile int64_t *g_311;
    VECTOR(uint16_t, 2) g_325;
    volatile VECTOR(int32_t, 4) g_330;
    volatile VECTOR(int32_t, 16) g_331;
    int16_t ***g_332;
    int32_t **g_344;
    uint32_t *g_345;
    uint8_t g_351;
    struct S3 g_356;
    volatile struct S4 g_384;
    VECTOR(uint16_t, 8) g_396;
    volatile struct S1 g_405;
    volatile struct S1 *g_404;
    volatile struct S1 **g_403[10][7][3];
    uint8_t g_419;
    volatile struct S2 g_420;
    volatile int32_t g_447[9][1][5];
    VECTOR(int32_t, 2) g_478;
    VECTOR(int32_t, 8) g_479;
    VECTOR(int16_t, 16) g_480;
    VECTOR(int8_t, 16) g_481;
    VECTOR(int8_t, 2) g_498;
    volatile struct S3 g_512;
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
int64_t  func_1(struct S8 * p_527);
int32_t ** func_13(int32_t ** p_14, int32_t  p_15, uint64_t  p_16, struct S8 * p_527);
int32_t ** func_17(int32_t  p_18, struct S8 * p_527);
uint64_t  func_25(uint32_t  p_26, int32_t ** p_27, int32_t ** p_28, int32_t * p_29, uint32_t  p_30, struct S8 * p_527);
uint8_t  func_33(int8_t  p_34, int32_t ** p_35, uint64_t  p_36, struct S8 * p_527);
union U6  func_39(int32_t  p_40, struct S8 * p_527);
uint16_t  func_43(int32_t * p_44, uint64_t  p_45, struct S8 * p_527);
uint8_t  func_46(int32_t  p_47, struct S8 * p_527);
int32_t * func_48(int32_t * p_49, union U5  p_50, struct S8 * p_527);
int32_t * func_51(int32_t ** p_52, int32_t ** p_53, uint32_t * p_54, uint32_t  p_55, uint32_t * p_56, struct S8 * p_527);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_527->l_comm_values p_527->g_9 p_527->g_5 p_527->g_344 p_527->g_111
 * writes: p_527->g_5
 */
int64_t  func_1(struct S8 * p_527)
{ /* block id: 4 */
    int32_t *l_6 = (void*)0;
    int32_t l_10 = 0x0C105A83L;
    int32_t *l_134 = &p_527->g_133.f1;
    uint32_t l_526 = 0UL;
    (*p_527->g_9) &= (safe_lshift_func_int8_t_s_s(p_527->l_comm_values[(safe_mod_func_uint32_t_u_u(p_527->tid, 6))], 4));
    l_10 = 0x7B57A67DL;
    for (l_10 = 13; (l_10 == (-15)); l_10 = safe_sub_func_uint8_t_u_u(l_10, 4))
    { /* block id: 9 */
        uint32_t *l_21 = &p_527->g_22;
        VECTOR(uint8_t, 8) l_37 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL);
        uint8_t *l_376 = &p_527->g_224.f1;
        int32_t **l_518 = &l_134;
        int32_t ***l_521 = &p_527->g_110[3];
        uint16_t l_522 = 65535UL;
        int i;
        (1 + 1);
    }
    l_6 = (*p_527->g_344);
    return l_526;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_260.f0.f3
 * writes: p_527->g_260.f0.f3
 */
int32_t ** func_13(int32_t ** p_14, int32_t  p_15, uint64_t  p_16, struct S8 * p_527)
{ /* block id: 236 */
    for (p_527->g_260.f0.f3 = 0; (p_527->g_260.f0.f3 < (-16)); --p_527->g_260.f0.f3)
    { /* block id: 239 */
        int32_t **l_525 = &p_527->g_111;
        return l_525;
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_17(int32_t  p_18, struct S8 * p_527)
{ /* block id: 233 */
    int32_t **l_520 = &p_527->g_111;
    return l_520;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_25(uint32_t  p_26, int32_t ** p_27, int32_t ** p_28, int32_t * p_29, uint32_t  p_30, struct S8 * p_527)
{ /* block id: 231 */
    int16_t l_519 = 0x3AAFL;
    return l_519;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_96 p_527->g_384 p_527->g_258.f2 p_527->g_224.f1 p_527->g_403 p_527->g_325 p_527->g_170.f9 p_527->g_133.f2 p_527->g_260.f0 p_527->g_38 p_527->g_345 p_527->g_22 p_527->g_260 p_527->g_512 p_527->g_311 p_527->g_312
 * writes: p_527->g_96 p_527->g_5 p_527->g_222 p_527->g_170.f9 p_527->g_133.f2 p_527->g_38 p_527->g_512
 */
uint8_t  func_33(int8_t  p_34, int32_t ** p_35, uint64_t  p_36, struct S8 * p_527)
{ /* block id: 166 */
    uint32_t l_377 = 0UL;
    uint64_t *l_386 = (void*)0;
    uint64_t *l_389 = &p_527->g_257.f0;
    struct S1 *l_425 = &p_527->g_170;
    struct S1 **l_424 = &l_425;
    int32_t l_428 = 0x3E59220AL;
    int32_t l_439 = 0x1E59E154L;
    int32_t l_442[8] = {0x258956D0L,0x258956D0L,0x258956D0L,0x258956D0L,0x258956D0L,0x258956D0L,0x258956D0L,0x258956D0L};
    uint8_t l_448[4][4];
    VECTOR(uint64_t, 8) l_453 = (VECTOR(uint64_t, 8))(0x5AF964579260DD0AL, (VECTOR(uint64_t, 4))(0x5AF964579260DD0AL, (VECTOR(uint64_t, 2))(0x5AF964579260DD0AL, 0x2E99AC58CBC5F1E1L), 0x2E99AC58CBC5F1E1L), 0x2E99AC58CBC5F1E1L, 0x5AF964579260DD0AL, 0x2E99AC58CBC5F1E1L);
    union U5 *l_456 = &p_527->g_135;
    int32_t *l_468 = (void*)0;
    int16_t l_487 = 0x5268L;
    int32_t l_488 = 0x4341144AL;
    uint64_t l_489 = 0xF6A80C446676C953L;
    int32_t l_502 = (-1L);
    int16_t l_508 = 0x7980L;
    int32_t *l_516[4];
    VECTOR(uint16_t, 4) l_517 = (VECTOR(uint16_t, 4))(0x15BAL, (VECTOR(uint16_t, 2))(0x15BAL, 8UL), 8UL);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_448[i][j] = 251UL;
    }
    for (i = 0; i < 4; i++)
        l_516[i] = &l_488;
    l_377++;
    for (p_527->g_96 = 10; (p_527->g_96 <= (-9)); p_527->g_96 = safe_sub_func_int32_t_s_s(p_527->g_96, 8))
    { /* block id: 170 */
        uint32_t l_397[1];
        int64_t l_402 = (-3L);
        uint32_t l_406 = 0x9854AE6EL;
        int32_t l_434 = (-2L);
        int32_t l_437 = 0x086F929AL;
        int32_t l_440[2];
        VECTOR(int8_t, 16) l_477 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3AL), 0x3AL), 0x3AL, 0L, 0x3AL, (VECTOR(int8_t, 2))(0L, 0x3AL), (VECTOR(int8_t, 2))(0L, 0x3AL), 0L, 0x3AL, 0L, 0x3AL);
        int64_t l_486 = 0x055A89708E79A07BL;
        int i;
        for (i = 0; i < 1; i++)
            l_397[i] = 0UL;
        for (i = 0; i < 2; i++)
            l_440[i] = 0x2828A7EDL;
        if (l_377)
            break;
        for (p_527->g_5 = 0; (p_527->g_5 <= 24); p_527->g_5 = safe_add_func_uint32_t_u_u(p_527->g_5, 8))
        { /* block id: 174 */
            int16_t l_385[9];
            uint64_t *l_388 = &p_527->g_257.f0;
            uint64_t **l_387[1];
            uint16_t *l_407 = (void*)0;
            uint16_t *l_408 = (void*)0;
            uint16_t *l_409 = (void*)0;
            uint16_t *l_410 = (void*)0;
            int32_t *l_411 = &p_527->g_170.f9;
            int32_t l_435 = 0L;
            int32_t l_438 = (-1L);
            int32_t l_441 = 0x231BB34EL;
            int32_t l_443[2][2][3] = {{{0x24F9C9BBL,0x3F94C7C0L,4L},{0x24F9C9BBL,0x3F94C7C0L,4L}},{{0x24F9C9BBL,0x3F94C7C0L,4L},{0x24F9C9BBL,0x3F94C7C0L,4L}}};
            int8_t **l_461 = (void*)0;
            uint8_t *l_499 = &l_448[3][0];
            uint32_t **l_503 = (void*)0;
            uint32_t **l_504 = &p_527->g_345;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_385[i] = 0x5DEAL;
            for (i = 0; i < 1; i++)
                l_387[i] = &l_388;
            (*l_411) &= (((p_527->g_384 , (l_385[4] < (p_527->g_222.x = ((l_386 != (l_389 = l_386)) > ((p_36 || ((((p_527->g_258.f2 == (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_527->g_396.s0577304610443002)).s7, (l_397[0] != (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_527->g_224.f1, 1)) , ((l_402 , (void*)0) != p_527->g_403[1][2][1])) <= (-9L)) || l_406), 4))))), l_397[0])) > l_402), 1))) > 0x47L) , p_36) != p_527->g_325.x)) ^ l_406))))) && p_34) & p_36);
        }
    }
    for (p_527->g_133.f2 = (-12); (p_527->g_133.f2 <= 55); ++p_527->g_133.f2)
    { /* block id: 225 */
        int32_t *l_507[10][4][5] = {{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}},{{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]},{&p_527->g_170.f9,&p_527->g_170.f9,&p_527->g_133.f1,(void*)0,&l_442[4]}}};
        uint32_t l_509 = 4294967289UL;
        volatile struct S3 *l_513 = &p_527->g_512;
        int i, j, k;
        --l_509;
        (*l_513) = (func_39(p_34, p_527) , p_527->g_512);
    }
    l_517.z = (safe_div_func_uint64_t_u_u(0UL, (*p_527->g_311)));
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_260.f0 p_527->g_38 p_527->g_345 p_527->g_22 p_527->g_260
 * writes: p_527->g_38
 */
union U6  func_39(int32_t  p_40, struct S8 * p_527)
{ /* block id: 160 */
    VECTOR(int8_t, 4) l_358 = (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, (-3L)), (-3L));
    struct S0 *l_361 = &p_527->g_226[1];
    struct S0 *l_362[5];
    uint8_t *l_363[3];
    int32_t l_364 = 5L;
    int32_t l_375 = 0L;
    int i;
    for (i = 0; i < 5; i++)
        l_362[i] = &p_527->g_226[3];
    for (i = 0; i < 3; i++)
        l_363[i] = &p_527->g_224.f1;
    l_375 ^= ((((VECTOR(int8_t, 2))(l_358.xx)).hi ^ p_40) == ((safe_add_func_uint64_t_u_u(p_40, ((l_361 != l_362[3]) || (l_358.z >= (l_364 = 0UL))))) == (p_527->g_260.f0 , (((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((p_527->g_38.sc &= (p_40 > ((p_40 >= p_40) > p_40))), 0L)), (-1L))), 2UL)) , (*p_527->g_345)), 4294967295UL)), 255UL)) <= l_358.x) <= p_40))));
    return p_527->g_260;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_146 p_527->g_22 p_527->g_133 p_527->g_64.f0 p_527->g_111 p_527->g_5 p_527->g_38 p_527->g_170 p_527->g_195 p_527->g_213 p_527->g_233 p_527->g_257 p_527->g_258 p_527->g_260 p_527->g_261 p_527->g_268 p_527->g_9 p_527->g_356
 * writes: p_527->g_5 p_527->g_22 p_527->g_64.f0 p_527->g_66 p_527->g_195 p_527->g_133.f1 p_527->g_170.f4 p_527->g_170.f1 p_527->g_133 p_527->g_257 p_527->g_262 p_527->g_111
 */
uint16_t  func_43(int32_t * p_44, uint64_t  p_45, struct S8 * p_527)
{ /* block id: 35 */
    int32_t *l_136 = &p_527->g_133.f1;
    int32_t *l_137[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t l_138 = 0xD155L;
    int8_t *l_145 = &p_527->g_66;
    VECTOR(int32_t, 2) l_153 = (VECTOR(int32_t, 2))(0x42BFDF69L, 0L);
    int16_t *l_166[7][6][2] = {{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}},{{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96},{&p_527->g_96,&p_527->g_96}}};
    int16_t **l_165 = &l_166[5][1][0];
    VECTOR(int32_t, 4) l_215 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x052BFA01L), 0x052BFA01L);
    struct S0 *l_225 = &p_527->g_226[2];
    VECTOR(int32_t, 2) l_263 = (VECTOR(int32_t, 2))(0L, 0x73348115L);
    union U5 l_316 = {0x4F20A68EL};
    struct S3 *l_357[10] = {&p_527->g_356,&p_527->g_133,&p_527->g_356,&p_527->g_356,&p_527->g_133,&p_527->g_356,&p_527->g_356,&p_527->g_133,&p_527->g_356,&p_527->g_356};
    int i, j, k;
    ++l_138;
    if ((safe_add_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_u(0x16DAL, 13)) >= 0x69L) , l_145) == l_145) != p_45), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5A86EBCDL, 0x4973F2DFL)).xxxyyyxyyxxxyxyy)).sf)))
    { /* block id: 37 */
        int32_t l_149 = 3L;
        uint32_t *l_152 = &p_527->g_22;
        VECTOR(int32_t, 2) l_154 = (VECTOR(int32_t, 2))(0L, (-1L));
        struct S1 *l_181 = &p_527->g_170;
        int16_t *l_209 = &p_527->g_170.f0;
        VECTOR(int64_t, 4) l_214 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x6A0B4DBAC17790CCL), 0x6A0B4DBAC17790CCL);
        VECTOR(int16_t, 4) l_218 = (VECTOR(int16_t, 4))(0x2CD9L, (VECTOR(int16_t, 2))(0x2CD9L, 1L), 1L);
        VECTOR(int32_t, 4) l_227 = (VECTOR(int32_t, 4))(0x5413EED1L, (VECTOR(int32_t, 2))(0x5413EED1L, 4L), 4L);
        int i;
        (*p_44) = ((VECTOR(int32_t, 8))(p_527->g_146.s82dda250)).s4;
        for (p_527->g_22 = 22; (p_527->g_22 == 19); --p_527->g_22)
        { /* block id: 41 */
            uint64_t *l_155 = &p_527->g_64.f0;
            uint8_t *l_156 = (void*)0;
            uint8_t *l_157[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_158 = 7L;
            int16_t ***l_161 = (void*)0;
            int16_t *l_164 = &p_527->g_96;
            int16_t **l_163 = &l_164;
            int16_t ***l_162 = &l_163;
            int16_t **l_167 = &l_166[5][1][0];
            int32_t l_168 = (-1L);
            struct S1 *l_169[9][5][5] = {{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}},{{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170},{&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170,&p_527->g_170}}};
            struct S1 **l_171 = &l_169[8][0][2];
            int i, j, k;
            (*p_527->g_111) |= ((p_527->g_133 , ((((l_158 |= (l_149 > ((*l_155) &= (((safe_rshift_func_uint16_t_u_u((((VECTOR(int32_t, 2))(1L, (-1L))).even , ((void*)0 != l_152)), 15)) < ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(l_153.yxxyyxxyxxyyxyxx)).s9182, ((VECTOR(int32_t, 4))(l_154.xyxy))))).y) , p_45)))) == (+((*l_145) = p_45))) <= ((safe_mul_func_int8_t_s_s((((*l_162) = (void*)0) == (l_167 = l_165)), (((l_168 < 0x57D315D3483840BFL) <= (-10L)) < 0xD83EL))) == 0x0DFB425780FFA4CDL)) >= p_45)) <= p_45);
            (*l_171) = l_169[8][0][2];
        }
        if ((atomic_inc(&p_527->g_atomic_input[17 * get_linear_group_id() + 6]) == 0))
        { /* block id: 51 */
            int32_t l_173 = (-10L);
            int32_t *l_172 = &l_173;
            int32_t *l_174 = &l_173;
            int32_t *l_175 = &l_173;
            int32_t *l_176 = (void*)0;
            l_176 = (l_175 = (l_174 = (l_172 = (void*)0)));
            unsigned int result = 0;
            result += l_173;
            atomic_add(&p_527->g_special_values[17 * get_linear_group_id() + 6], result);
        }
        else
        { /* block id: 56 */
            (1 + 1);
        }
        for (p_527->g_64.f0 = 0; (p_527->g_64.f0 == 33); ++p_527->g_64.f0)
        { /* block id: 61 */
            struct S1 *l_183 = &p_527->g_170;
            struct S1 **l_182 = &l_183;
            int32_t l_188 = (-6L);
            VECTOR(uint8_t, 8) l_193 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x47L), 0x47L), 0x47L, 7UL, 0x47L);
            VECTOR(int64_t, 16) l_210 = (VECTOR(int64_t, 16))(0x4A4EC99466FFC8C9L, (VECTOR(int64_t, 4))(0x4A4EC99466FFC8C9L, (VECTOR(int64_t, 2))(0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL), 0x280CDC80C453911BL), 0x280CDC80C453911BL, 0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL, (VECTOR(int64_t, 2))(0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL), (VECTOR(int64_t, 2))(0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL), 0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL, 0x4A4EC99466FFC8C9L, 0x280CDC80C453911BL);
            struct S0 *l_223 = &p_527->g_224;
            int32_t l_235 = (-8L);
            int64_t l_256 = (-1L);
            int i;
            if ((safe_rshift_func_int8_t_s_s((l_181 == ((*l_182) = (void*)0)), 0)))
            { /* block id: 63 */
                struct S0 *l_196 = (void*)0;
                struct S0 *l_197[9][2];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_197[i][j] = &p_527->g_195[2];
                }
                l_188 = (safe_mul_func_uint16_t_u_u(5UL, (((((safe_lshift_func_int8_t_s_u((l_188 <= p_45), ((*l_136) || 4UL))) >= (safe_lshift_func_int8_t_s_s(l_188, 2))) || ((0x1FL != (((safe_rshift_func_uint16_t_u_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_193.s30)), ((void*)0 != p_527->g_194[5][7][4]), 0UL, 1UL, ((VECTOR(uint8_t, 2))(7UL)), 1UL)).s0731321076662616)).sb > p_45), p_527->g_38.s9)) , (*l_181)) , p_45)) != (*p_44))) != 0x7C749252602BC950L) < p_45)));
                p_527->g_195[2] = p_527->g_195[2];
            }
            else
            { /* block id: 66 */
                uint8_t l_198 = 255UL;
                int32_t l_199[10][9] = {{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L},{7L,0x29A37B76L,0x117C768AL,0x29A37B76L,7L,7L,0x29A37B76L,0x117C768AL,0x29A37B76L}};
                uint8_t *l_206[4];
                uint16_t *l_221 = &l_138;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_206[i] = &p_527->g_170.f4;
                if (l_198)
                    break;
                l_199[6][4] |= ((*l_136) ^= (*p_44));
                (*l_136) &= ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((((((*l_145) = (((safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(255UL, 0xDAL)).lo ^ p_527->g_38.sb), (++p_527->g_170.f4))) && (((*l_152) = (((((p_527->g_195[0] , l_209) != (void*)0) & ((((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(0L, 5L, 0x0C518982161C9446L, 7L, ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(l_210.s730c7f6f722b7fbf)).even, ((VECTOR(int64_t, 2))(1L, 5L)).yxxyxyxy, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_527->g_211.zx)))).xxxxyxyx))).s12, ((VECTOR(int64_t, 16))(p_527->g_212.xyyxyxxzxyxwwzwz)).s6c, ((VECTOR(int64_t, 8))(p_527->g_213.sab7bdc03)).s67))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_214.yx)))), 0x19569C656FD3FCBEL, 0x493218F0C7B7B65CL)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_215.wzwxxxxy)).lo, ((VECTOR(int32_t, 4))(p_527->g_96, (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(l_218.yw)).yyyx))).zwyyyzyzwyzxyxxw)).s8, ((safe_lshift_func_int16_t_s_u(p_527->g_38.se, (+((*l_221) = p_45)))) <= ((VECTOR(uint16_t, 8))(p_527->g_222.xxxzxyyy)).s6))) || (l_223 != (p_527->g_135 , l_225))) == 0x0893ACE1D4C389BEL), 5L, (-10L)))))), ((VECTOR(uint32_t, 4))(6UL))))).yzxwwxxwwzywxxyy, ((VECTOR(int64_t, 16))(0x143ADA57ACD3F1DCL))))).s3a)).yyxyxyxxyxxyxxxy)).s90fd)).odd))), l_210.sc, 0L, 1L, 0L, 1L, 0x1031765EC408DC6CL)), ((VECTOR(int64_t, 8))(1L))))), ((VECTOR(int64_t, 4))(0x42DF3639B9190C54L)))))), (int64_t)p_45, (int64_t)p_45))).s3 <= 1UL) | l_193.s0)) ^ p_527->g_170.f1) <= l_227.w)) | 0x3A00DB42L)) > p_45)) & l_199[1][5]) > l_210.sc) , p_45) | 6L), p_45)), p_45)) > p_527->g_213.sb);
                for (p_527->g_5 = 26; (p_527->g_5 >= (-19)); --p_527->g_5)
                { /* block id: 77 */
                    uint16_t l_236 = 3UL;
                    int64_t *l_253[1][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint8_t l_254[10] = {255UL,0xFAL,0xA3L,0xFAL,255UL,255UL,0xFAL,0xA3L,0xFAL,255UL};
                    int64_t *l_255 = &p_527->g_135.f1;
                    int32_t l_264 = 0x62679DC5L;
                    int i, j, k;
                    for (p_527->g_170.f1 = 0; (p_527->g_170.f1 >= 34); p_527->g_170.f1 = safe_add_func_int32_t_s_s(p_527->g_170.f1, 2))
                    { /* block id: 80 */
                        struct S3 *l_232 = (void*)0;
                        int32_t l_234 = 0x315BEF1DL;
                        (*p_527->g_233) = p_527->g_133;
                        ++l_236;
                        (*l_136) |= (((void*)0 != &p_527->g_133) & 0x38F1L);
                    }
                    if (l_235)
                        break;
                    if (((safe_mul_func_int16_t_s_s(l_210.sc, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))((1L <= (safe_rshift_func_uint8_t_u_s((0x2DF67BF6E9D8676EL && (p_527->g_59[0].f0.f4.f0 >= ((((safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((l_199[6][4] == GROUP_DIVERGE(1, 1)), 0x48E825A2L)) < ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(0x10FFL, 0x6E03L)).yxxyxxyx, (int16_t)((*l_209) = (((((*l_255) = ((p_45 >= (safe_lshift_func_uint8_t_u_u(((((l_236 < (((l_154.x &= ((-1L) <= 0L)) ^ p_527->g_195[2].f1) , l_154.x)) >= GROUP_DIVERGE(0, 1)) , p_527->g_212.w) && FAKE_DIVERGE(p_527->group_2_offset, get_group_id(2), 10)), p_527->g_222.x))) == l_254[9])) , l_256) || l_254[8]) > l_199[3][5]))))).s6), 3)), 8UL)) , l_210.sf), 11)) , &p_44) == (void*)0) == 3L))), p_45))), 6L, 0x6136L, 5L)), ((VECTOR(int16_t, 4))(1L))))).xyyxxwwzyzwwxzyy))).s7)) , (*p_44)))
                    { /* block id: 89 */
                        VECTOR(uint8_t, 16) l_259 = (VECTOR(uint8_t, 16))(0x1FL, (VECTOR(uint8_t, 4))(0x1FL, (VECTOR(uint8_t, 2))(0x1FL, 255UL), 255UL), 255UL, 0x1FL, 255UL, (VECTOR(uint8_t, 2))(0x1FL, 255UL), (VECTOR(uint8_t, 2))(0x1FL, 255UL), 0x1FL, 255UL, 0x1FL, 255UL);
                        int i;
                        p_527->g_257 = p_527->g_257;
                        p_527->g_195[2] = p_527->g_258;
                        (*l_136) &= (((VECTOR(uint8_t, 4))(l_259.s84e0)).y == GROUP_DIVERGE(1, 1));
                        (*p_527->g_261) = (p_527->g_260 , &p_527->g_135);
                    }
                    else
                    { /* block id: 94 */
                        uint64_t l_265 = 3UL;
                        (*l_136) = ((VECTOR(int32_t, 8))(l_263.yxyxyyxx)).s7;
                        ++l_265;
                        (*p_527->g_268) = l_137[4][2];
                    }
                    if ((*p_527->g_9))
                        continue;
                }
            }
        }
    }
    else
    { /* block id: 103 */
        int8_t l_269 = 0L;
        return l_269;
    }
    for (p_527->g_64.f0 = 6; (p_527->g_64.f0 == 42); p_527->g_64.f0 = safe_add_func_int8_t_s_s(p_527->g_64.f0, 2))
    { /* block id: 108 */
        uint32_t *l_277[1][5] = {{&p_527->g_22,&p_527->g_22,&p_527->g_22,&p_527->g_22,&p_527->g_22}};
        uint32_t **l_276 = &l_277[0][1];
        int32_t l_280[3][9][2] = {{{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L}},{{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L}},{{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L},{0x53BB9674L,0x53BB9674L}}};
        int32_t l_281 = 0L;
        int32_t l_282 = 0L;
        VECTOR(int32_t, 8) l_288 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x0AA018CEL), 0x0AA018CEL), 0x0AA018CEL, (-4L), 0x0AA018CEL);
        int8_t l_289 = 0x33L;
        int64_t *l_310 = (void*)0;
        int i, j, k;
        (1 + 1);
    }
    (*p_527->g_233) = p_527->g_356;
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_59 p_527->g_64 p_527->g_59.f0.f0 p_527->g_5 p_527->g_74 p_527->g_66 p_527->g_59.f0.f4.f0 p_527->g_110 p_527->g_59.f0.f1 p_527->l_comm_values p_527->g_38 p_527->g_111
 * writes: p_527->g_66 p_527->g_96 p_527->g_5 p_527->g_101 p_527->g_111
 */
uint8_t  func_46(int32_t  p_47, struct S8 * p_527)
{ /* block id: 11 */
    int32_t *l_58 = &p_527->g_5;
    int32_t **l_57 = &l_58;
    int8_t *l_65 = &p_527->g_66;
    uint32_t *l_72 = &p_527->g_22;
    uint32_t **l_71 = &l_72;
    union U5 l_109 = {0x36A621C5L};
    (*l_57) = func_48(func_51(l_57, &l_58, ((*l_71) = (p_527->g_59[0] , ((0x50416CBBL ^ (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((p_527->g_64 , ((*l_65) = p_527->g_59[0].f0.f0)) || (**l_57)) , ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((1L ^ p_47) != (-4L)), 0L)), p_47)) || (*l_58))) , 0L), 2)), (**l_57))) , p_527->g_64.f2) & (*l_58))) , l_58))), (**l_57), &p_527->g_22, p_527), l_109, p_527);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_110 p_527->g_59.f0.f1 p_527->l_comm_values p_527->g_38 p_527->g_111 p_527->g_5 p_527->g_66 p_527->g_74 p_527->g_59.f0.f4.f0
 * writes: p_527->g_5 p_527->g_66 p_527->g_101 p_527->g_96 p_527->g_111
 */
int32_t * func_48(int32_t * p_49, union U5  p_50, struct S8 * p_527)
{ /* block id: 27 */
    uint32_t l_114[1][3];
    int16_t *l_115[4];
    int64_t l_124[4][9][4] = {{{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L}},{{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L}},{{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L}},{{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L},{0x2096ABDE1DBEFC3FL,0x46AC6E2473BC596DL,(-8L),0x641618F1E01A2308L}}};
    uint32_t l_125 = 4294967295UL;
    int32_t **l_126 = &p_527->g_111;
    int32_t **l_127 = (void*)0;
    int32_t *l_129 = &p_527->g_5;
    int32_t **l_128[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_130 = &l_129;
    uint32_t *l_132 = &l_114[0][0];
    uint32_t **l_131 = &l_132;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_114[i][j] = 0x05F98FFFL;
    }
    for (i = 0; i < 4; i++)
        l_115[i] = &p_527->g_96;
    p_49 = ((*l_126) = func_51(p_527->g_110[3], (((safe_mul_func_uint16_t_u_u((&p_527->g_96 == ((p_527->g_59[0].f0.f1 || l_114[0][0]) , l_115[3])), (safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((l_114[0][0] & (&l_114[0][0] == (((safe_mul_func_uint16_t_u_u(1UL, p_50.f0)) , (-9L)) , (void*)0))) >= p_527->l_comm_values[(safe_mod_func_uint32_t_u_u(p_527->tid, 6))]), 0x4DL)) & l_124[3][1][2]), l_125)))) & l_114[0][0]) , &p_527->g_111), &l_114[0][0], p_527->g_38.s7, p_49, p_527));
    (*l_126) = func_51(l_130, &p_49, p_49, (*l_129), ((*l_131) = &l_114[0][0]), p_527);
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_527->g_74 p_527->g_5 p_527->g_66 p_527->g_59.f0.f4.f0 p_527->g_111 l_58
 * writes: p_527->g_96 p_527->g_5 p_527->g_66 p_527->g_101
 */
int32_t * func_51(int32_t ** p_52, int32_t ** p_53, uint32_t * p_54, uint32_t  p_55, uint32_t * p_56, struct S8 * p_527)
{ /* block id: 14 */
    VECTOR(int8_t, 2) l_73 = (VECTOR(int8_t, 2))(0x50L, 0L);
    uint32_t *l_76 = &p_527->g_22;
    uint32_t **l_75 = &l_76;
    int16_t l_79 = 0L;
    int8_t *l_84 = &p_527->g_66;
    int32_t l_92 = 0L;
    int32_t l_93 = 0x3ED93686L;
    int16_t *l_94 = (void*)0;
    int16_t *l_95 = &p_527->g_96;
    int16_t *l_97 = &p_527->g_96;
    int16_t **l_98 = &l_95;
    int8_t *l_99 = (void*)0;
    int8_t **l_100[1];
    uint8_t l_108 = 0x26L;
    int i;
    for (i = 0; i < 1; i++)
        l_100[i] = &l_99;
    (**p_53) = (~((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_73.xx)).yxxxyxyxyyyxyyxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_527->g_74.xxxxyxyxxxyxyyxx))))))).s8d)).hi || ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(0x4EL, (((*l_75) = p_54) != p_56), ((VECTOR(uint8_t, 2))(0xADL, 0UL)), (safe_rshift_func_uint16_t_u_u(l_79, 15)), ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((void*)0 == l_84), l_79)), (GROUP_DIVERGE(0, 1) <= ((*l_95) = (l_93 ^= ((VECTOR(int16_t, 16))(((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0xA936L, (l_92 ^= ((safe_unary_minus_func_int8_t_s((0x41L || (l_84 != l_84)))) > l_73.y)))), 0UL)) , l_92), (-1L), ((VECTOR(int16_t, 2))(9L)), ((VECTOR(int16_t, 2))(0x6CE1L)), (-1L), 0x68DBL, (-1L), 0x02C9L, 1L, ((VECTOR(int16_t, 2))(0x049DL)), ((VECTOR(int16_t, 2))(6L)), 0x5F55L)).s5))))) ^ 0xE04D8298L) || l_92) > 0x38L), 1UL, 6UL)), ((VECTOR(uint8_t, 2))(0x45L)), ((VECTOR(uint8_t, 4))(1UL)), 0x2AL, 0xC0L)).s4fbf, ((VECTOR(uint8_t, 4))(8UL))))), ((VECTOR(uint8_t, 4))(0UL))))).y) ^ l_79));
    atomic_sub(&p_527->l_atomic_reduction[0], ((0xF627L & ((*l_97) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((((*l_98) = l_97) != (((*l_84) ^= (+((**p_52) != (**p_53)))) , &l_79)), (((l_84 = l_84) == (p_527->g_101[1] = l_99)) && p_527->g_74.x), (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(5UL, 0x88L)).lo, ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), 0x24L)) != l_108), ((VECTOR(uint16_t, 2))(0xD62CL)), 65526UL)))).w, 0UL)) & l_93))), 0x0165F177L, l_92, (**p_52), (**p_53), 1L, 0x005CC3D6L, ((VECTOR(int32_t, 4))(0x606FA126L)), 0x2465745EL, (-1L), 0x687FAFF4L)).sb716)).xzzyxyxyxxzywwyw)).s0 , p_527->g_59[0].f0.f4.f0))) ^ l_93) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_527->v_collective += p_527->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return &p_527->g_5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S8 c_528;
    struct S8* p_527 = &c_528;
    struct S8 c_529 = {
        (-1L), // p_527->g_5
        {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_527->g_5,&p_527->g_5,&p_527->g_5,&p_527->g_5,(void*)0}}}, // p_527->g_4
        (void*)0, // p_527->g_7
        {{(void*)0,&p_527->g_5,(void*)0,(void*)0},{(void*)0,&p_527->g_5,(void*)0,(void*)0}}, // p_527->g_8
        &p_527->g_5, // p_527->g_9
        0x3053BF84L, // p_527->g_22
        (VECTOR(uint8_t, 16))(0xD4L, (VECTOR(uint8_t, 4))(0xD4L, (VECTOR(uint8_t, 2))(0xD4L, 1UL), 1UL), 1UL, 0xD4L, 1UL, (VECTOR(uint8_t, 2))(0xD4L, 1UL), (VECTOR(uint8_t, 2))(0xD4L, 1UL), 0xD4L, 1UL, 0xD4L, 1UL), // p_527->g_38
        {{{0xE627823D12EF6116L,0x5D4F9520128B80BBL,0x10AECF93L,0x29ADL,{0x9258C0F8L,0xF4L,7UL},-6L}}}, // p_527->g_59
        {3UL,0L,0x5F7C0CB0L,-9L}, // p_527->g_64
        0x06L, // p_527->g_66
        (VECTOR(int8_t, 2))(0x6FL, 7L), // p_527->g_74
        0L, // p_527->g_96
        {&p_527->g_66,&p_527->g_66}, // p_527->g_101
        &p_527->g_5, // p_527->g_111
        {&p_527->g_111,&p_527->g_111,&p_527->g_111,&p_527->g_111,&p_527->g_111,&p_527->g_111,&p_527->g_111}, // p_527->g_110
        {18446744073709551611UL,1L,5UL}, // p_527->g_133
        {-9L}, // p_527->g_135
        (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x02DCEE33L), 0x02DCEE33L), 0x02DCEE33L, (-6L), 0x02DCEE33L, (VECTOR(int32_t, 2))((-6L), 0x02DCEE33L), (VECTOR(int32_t, 2))((-6L), 0x02DCEE33L), (-6L), 0x02DCEE33L, (-6L), 0x02DCEE33L), // p_527->g_146
        {0L,0xD2B45C538B7FA945L,9L,-9L,254UL,0xC1L,0x849F51E4L,0xA56290427E704F44L,0x0F885C30L,0x239EF309L}, // p_527->g_170
        {{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}},{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}},{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}},{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}},{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}},{{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7},{(void*)0,&p_527->g_170.f7,(void*)0,&p_527->g_170.f7,&p_527->g_170.f7}}}, // p_527->g_194
        {{4294967287UL,0x7AL,0xB0FB461AL},{4294967287UL,0x7AL,0xB0FB461AL},{4294967287UL,0x7AL,0xB0FB461AL}}, // p_527->g_195
        (VECTOR(int64_t, 4))(0x623F314BEDBEB428L, (VECTOR(int64_t, 2))(0x623F314BEDBEB428L, 0L), 0L), // p_527->g_211
        (VECTOR(int64_t, 4))(0x142D218AE0BF9175L, (VECTOR(int64_t, 2))(0x142D218AE0BF9175L, 1L), 1L), // p_527->g_212
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x25A6DD12310BAFB8L), 0x25A6DD12310BAFB8L), 0x25A6DD12310BAFB8L, 0L, 0x25A6DD12310BAFB8L, (VECTOR(int64_t, 2))(0L, 0x25A6DD12310BAFB8L), (VECTOR(int64_t, 2))(0L, 0x25A6DD12310BAFB8L), 0L, 0x25A6DD12310BAFB8L, 0L, 0x25A6DD12310BAFB8L), // p_527->g_213
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0F3DL), 0x0F3DL), // p_527->g_222
        {4294967291UL,252UL,0x4032FCF9L}, // p_527->g_224
        {{1UL,255UL,0UL},{1UL,255UL,0UL},{1UL,255UL,0UL},{1UL,255UL,0UL}}, // p_527->g_226
        &p_527->g_133, // p_527->g_233
        {6UL,5L,0x18D45862L,1L}, // p_527->g_257
        {4294967295UL,0x18L,0xD271B4D7L}, // p_527->g_258
        {{0x45105DDB93A7BC0BL,1L,0L,8L,{1UL,0xF6L,5UL},0x7B7E5595L}}, // p_527->g_260
        &p_527->g_135, // p_527->g_262
        &p_527->g_262, // p_527->g_261
        &p_527->g_111, // p_527->g_268
        (VECTOR(int64_t, 2))(0x01A3F58CAEB62087L, 1L), // p_527->g_308
        0L, // p_527->g_312
        &p_527->g_312, // p_527->g_311
        (VECTOR(uint16_t, 2))(0xBE77L, 65530UL), // p_527->g_325
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x4E76EB3FL), 0x4E76EB3FL), // p_527->g_330
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x52CF8F0DL), 0x52CF8F0DL), 0x52CF8F0DL, (-4L), 0x52CF8F0DL, (VECTOR(int32_t, 2))((-4L), 0x52CF8F0DL), (VECTOR(int32_t, 2))((-4L), 0x52CF8F0DL), (-4L), 0x52CF8F0DL, (-4L), 0x52CF8F0DL), // p_527->g_331
        (void*)0, // p_527->g_332
        &p_527->g_111, // p_527->g_344
        &p_527->g_22, // p_527->g_345
        1UL, // p_527->g_351
        {0x375B634DC5C390B2L,0x1890CD78L,18446744073709551615UL}, // p_527->g_356
        {0xD456D59D33C8C507L,-5L,0xE8F64C48L,0L}, // p_527->g_384
        (VECTOR(uint16_t, 8))(0x144DL, (VECTOR(uint16_t, 4))(0x144DL, (VECTOR(uint16_t, 2))(0x144DL, 0xCEF8L), 0xCEF8L), 0xCEF8L, 0x144DL, 0xCEF8L), // p_527->g_396
        {2L,18446744073709551615UL,-10L,0x64245560AA8EAA15L,0x87L,0xEFL,0x0C75A16EL,18446744073709551608UL,0x46E1DC02L,1L}, // p_527->g_405
        &p_527->g_405, // p_527->g_404
        {{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}},{{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404},{(void*)0,&p_527->g_404,&p_527->g_404}}}, // p_527->g_403
        0xD4L, // p_527->g_419
        {1UL,0x632332A4DB88C4D0L,-10L,0x00DAL,{0UL,255UL,0x5A170B9DL},0x22E8DF77L}, // p_527->g_420
        {{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}},{{4L,(-7L),8L,0L,8L}}}, // p_527->g_447
        (VECTOR(int32_t, 2))(0x330EED07L, 0x0C07224BL), // p_527->g_478
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L), 9L, 0L, 9L), // p_527->g_479
        (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 3L), 3L), 3L, 2L, 3L, (VECTOR(int16_t, 2))(2L, 3L), (VECTOR(int16_t, 2))(2L, 3L), 2L, 3L, 2L, 3L), // p_527->g_480
        (VECTOR(int8_t, 16))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, (-1L)), (-1L)), (-1L), 0x35L, (-1L), (VECTOR(int8_t, 2))(0x35L, (-1L)), (VECTOR(int8_t, 2))(0x35L, (-1L)), 0x35L, (-1L), 0x35L, (-1L)), // p_527->g_481
        (VECTOR(int8_t, 2))(0L, 0x76L), // p_527->g_498
        {1UL,0x70298C64L,1UL}, // p_527->g_512
        0, // p_527->v_collective
        sequence_input[get_global_id(0)], // p_527->global_0_offset
        sequence_input[get_global_id(1)], // p_527->global_1_offset
        sequence_input[get_global_id(2)], // p_527->global_2_offset
        sequence_input[get_local_id(0)], // p_527->local_0_offset
        sequence_input[get_local_id(1)], // p_527->local_1_offset
        sequence_input[get_local_id(2)], // p_527->local_2_offset
        sequence_input[get_group_id(0)], // p_527->group_0_offset
        sequence_input[get_group_id(1)], // p_527->group_1_offset
        sequence_input[get_group_id(2)], // p_527->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_527->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_528 = c_529;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_527);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_527->g_5, "p_527->g_5", print_hash_value);
    transparent_crc(p_527->g_22, "p_527->g_22", print_hash_value);
    transparent_crc(p_527->g_38.s0, "p_527->g_38.s0", print_hash_value);
    transparent_crc(p_527->g_38.s1, "p_527->g_38.s1", print_hash_value);
    transparent_crc(p_527->g_38.s2, "p_527->g_38.s2", print_hash_value);
    transparent_crc(p_527->g_38.s3, "p_527->g_38.s3", print_hash_value);
    transparent_crc(p_527->g_38.s4, "p_527->g_38.s4", print_hash_value);
    transparent_crc(p_527->g_38.s5, "p_527->g_38.s5", print_hash_value);
    transparent_crc(p_527->g_38.s6, "p_527->g_38.s6", print_hash_value);
    transparent_crc(p_527->g_38.s7, "p_527->g_38.s7", print_hash_value);
    transparent_crc(p_527->g_38.s8, "p_527->g_38.s8", print_hash_value);
    transparent_crc(p_527->g_38.s9, "p_527->g_38.s9", print_hash_value);
    transparent_crc(p_527->g_38.sa, "p_527->g_38.sa", print_hash_value);
    transparent_crc(p_527->g_38.sb, "p_527->g_38.sb", print_hash_value);
    transparent_crc(p_527->g_38.sc, "p_527->g_38.sc", print_hash_value);
    transparent_crc(p_527->g_38.sd, "p_527->g_38.sd", print_hash_value);
    transparent_crc(p_527->g_38.se, "p_527->g_38.se", print_hash_value);
    transparent_crc(p_527->g_38.sf, "p_527->g_38.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_527->g_59[i].f0.f0, "p_527->g_59[i].f0.f0", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f1, "p_527->g_59[i].f0.f1", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f2, "p_527->g_59[i].f0.f2", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f3, "p_527->g_59[i].f0.f3", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f4.f0, "p_527->g_59[i].f0.f4.f0", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f4.f1, "p_527->g_59[i].f0.f4.f1", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f4.f2, "p_527->g_59[i].f0.f4.f2", print_hash_value);
        transparent_crc(p_527->g_59[i].f0.f5, "p_527->g_59[i].f0.f5", print_hash_value);

    }
    transparent_crc(p_527->g_64.f0, "p_527->g_64.f0", print_hash_value);
    transparent_crc(p_527->g_64.f1, "p_527->g_64.f1", print_hash_value);
    transparent_crc(p_527->g_64.f2, "p_527->g_64.f2", print_hash_value);
    transparent_crc(p_527->g_64.f3, "p_527->g_64.f3", print_hash_value);
    transparent_crc(p_527->g_66, "p_527->g_66", print_hash_value);
    transparent_crc(p_527->g_74.x, "p_527->g_74.x", print_hash_value);
    transparent_crc(p_527->g_74.y, "p_527->g_74.y", print_hash_value);
    transparent_crc(p_527->g_96, "p_527->g_96", print_hash_value);
    transparent_crc(p_527->g_133.f0, "p_527->g_133.f0", print_hash_value);
    transparent_crc(p_527->g_133.f1, "p_527->g_133.f1", print_hash_value);
    transparent_crc(p_527->g_133.f2, "p_527->g_133.f2", print_hash_value);
    transparent_crc(p_527->g_135.f0, "p_527->g_135.f0", print_hash_value);
    transparent_crc(p_527->g_146.s0, "p_527->g_146.s0", print_hash_value);
    transparent_crc(p_527->g_146.s1, "p_527->g_146.s1", print_hash_value);
    transparent_crc(p_527->g_146.s2, "p_527->g_146.s2", print_hash_value);
    transparent_crc(p_527->g_146.s3, "p_527->g_146.s3", print_hash_value);
    transparent_crc(p_527->g_146.s4, "p_527->g_146.s4", print_hash_value);
    transparent_crc(p_527->g_146.s5, "p_527->g_146.s5", print_hash_value);
    transparent_crc(p_527->g_146.s6, "p_527->g_146.s6", print_hash_value);
    transparent_crc(p_527->g_146.s7, "p_527->g_146.s7", print_hash_value);
    transparent_crc(p_527->g_146.s8, "p_527->g_146.s8", print_hash_value);
    transparent_crc(p_527->g_146.s9, "p_527->g_146.s9", print_hash_value);
    transparent_crc(p_527->g_146.sa, "p_527->g_146.sa", print_hash_value);
    transparent_crc(p_527->g_146.sb, "p_527->g_146.sb", print_hash_value);
    transparent_crc(p_527->g_146.sc, "p_527->g_146.sc", print_hash_value);
    transparent_crc(p_527->g_146.sd, "p_527->g_146.sd", print_hash_value);
    transparent_crc(p_527->g_146.se, "p_527->g_146.se", print_hash_value);
    transparent_crc(p_527->g_146.sf, "p_527->g_146.sf", print_hash_value);
    transparent_crc(p_527->g_170.f0, "p_527->g_170.f0", print_hash_value);
    transparent_crc(p_527->g_170.f1, "p_527->g_170.f1", print_hash_value);
    transparent_crc(p_527->g_170.f2, "p_527->g_170.f2", print_hash_value);
    transparent_crc(p_527->g_170.f3, "p_527->g_170.f3", print_hash_value);
    transparent_crc(p_527->g_170.f4, "p_527->g_170.f4", print_hash_value);
    transparent_crc(p_527->g_170.f5, "p_527->g_170.f5", print_hash_value);
    transparent_crc(p_527->g_170.f6, "p_527->g_170.f6", print_hash_value);
    transparent_crc(p_527->g_170.f7, "p_527->g_170.f7", print_hash_value);
    transparent_crc(p_527->g_170.f8, "p_527->g_170.f8", print_hash_value);
    transparent_crc(p_527->g_170.f9, "p_527->g_170.f9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_527->g_195[i].f0, "p_527->g_195[i].f0", print_hash_value);
        transparent_crc(p_527->g_195[i].f1, "p_527->g_195[i].f1", print_hash_value);
        transparent_crc(p_527->g_195[i].f2, "p_527->g_195[i].f2", print_hash_value);

    }
    transparent_crc(p_527->g_211.x, "p_527->g_211.x", print_hash_value);
    transparent_crc(p_527->g_211.y, "p_527->g_211.y", print_hash_value);
    transparent_crc(p_527->g_211.z, "p_527->g_211.z", print_hash_value);
    transparent_crc(p_527->g_211.w, "p_527->g_211.w", print_hash_value);
    transparent_crc(p_527->g_212.x, "p_527->g_212.x", print_hash_value);
    transparent_crc(p_527->g_212.y, "p_527->g_212.y", print_hash_value);
    transparent_crc(p_527->g_212.z, "p_527->g_212.z", print_hash_value);
    transparent_crc(p_527->g_212.w, "p_527->g_212.w", print_hash_value);
    transparent_crc(p_527->g_213.s0, "p_527->g_213.s0", print_hash_value);
    transparent_crc(p_527->g_213.s1, "p_527->g_213.s1", print_hash_value);
    transparent_crc(p_527->g_213.s2, "p_527->g_213.s2", print_hash_value);
    transparent_crc(p_527->g_213.s3, "p_527->g_213.s3", print_hash_value);
    transparent_crc(p_527->g_213.s4, "p_527->g_213.s4", print_hash_value);
    transparent_crc(p_527->g_213.s5, "p_527->g_213.s5", print_hash_value);
    transparent_crc(p_527->g_213.s6, "p_527->g_213.s6", print_hash_value);
    transparent_crc(p_527->g_213.s7, "p_527->g_213.s7", print_hash_value);
    transparent_crc(p_527->g_213.s8, "p_527->g_213.s8", print_hash_value);
    transparent_crc(p_527->g_213.s9, "p_527->g_213.s9", print_hash_value);
    transparent_crc(p_527->g_213.sa, "p_527->g_213.sa", print_hash_value);
    transparent_crc(p_527->g_213.sb, "p_527->g_213.sb", print_hash_value);
    transparent_crc(p_527->g_213.sc, "p_527->g_213.sc", print_hash_value);
    transparent_crc(p_527->g_213.sd, "p_527->g_213.sd", print_hash_value);
    transparent_crc(p_527->g_213.se, "p_527->g_213.se", print_hash_value);
    transparent_crc(p_527->g_213.sf, "p_527->g_213.sf", print_hash_value);
    transparent_crc(p_527->g_222.x, "p_527->g_222.x", print_hash_value);
    transparent_crc(p_527->g_222.y, "p_527->g_222.y", print_hash_value);
    transparent_crc(p_527->g_222.z, "p_527->g_222.z", print_hash_value);
    transparent_crc(p_527->g_222.w, "p_527->g_222.w", print_hash_value);
    transparent_crc(p_527->g_224.f0, "p_527->g_224.f0", print_hash_value);
    transparent_crc(p_527->g_224.f1, "p_527->g_224.f1", print_hash_value);
    transparent_crc(p_527->g_224.f2, "p_527->g_224.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_527->g_226[i].f0, "p_527->g_226[i].f0", print_hash_value);
        transparent_crc(p_527->g_226[i].f1, "p_527->g_226[i].f1", print_hash_value);
        transparent_crc(p_527->g_226[i].f2, "p_527->g_226[i].f2", print_hash_value);

    }
    transparent_crc(p_527->g_257.f0, "p_527->g_257.f0", print_hash_value);
    transparent_crc(p_527->g_257.f1, "p_527->g_257.f1", print_hash_value);
    transparent_crc(p_527->g_257.f2, "p_527->g_257.f2", print_hash_value);
    transparent_crc(p_527->g_257.f3, "p_527->g_257.f3", print_hash_value);
    transparent_crc(p_527->g_258.f0, "p_527->g_258.f0", print_hash_value);
    transparent_crc(p_527->g_258.f1, "p_527->g_258.f1", print_hash_value);
    transparent_crc(p_527->g_258.f2, "p_527->g_258.f2", print_hash_value);
    transparent_crc(p_527->g_260.f0.f0, "p_527->g_260.f0.f0", print_hash_value);
    transparent_crc(p_527->g_260.f0.f1, "p_527->g_260.f0.f1", print_hash_value);
    transparent_crc(p_527->g_260.f0.f2, "p_527->g_260.f0.f2", print_hash_value);
    transparent_crc(p_527->g_260.f0.f3, "p_527->g_260.f0.f3", print_hash_value);
    transparent_crc(p_527->g_260.f0.f4.f0, "p_527->g_260.f0.f4.f0", print_hash_value);
    transparent_crc(p_527->g_260.f0.f4.f1, "p_527->g_260.f0.f4.f1", print_hash_value);
    transparent_crc(p_527->g_260.f0.f4.f2, "p_527->g_260.f0.f4.f2", print_hash_value);
    transparent_crc(p_527->g_260.f0.f5, "p_527->g_260.f0.f5", print_hash_value);
    transparent_crc(p_527->g_308.x, "p_527->g_308.x", print_hash_value);
    transparent_crc(p_527->g_308.y, "p_527->g_308.y", print_hash_value);
    transparent_crc(p_527->g_312, "p_527->g_312", print_hash_value);
    transparent_crc(p_527->g_325.x, "p_527->g_325.x", print_hash_value);
    transparent_crc(p_527->g_325.y, "p_527->g_325.y", print_hash_value);
    transparent_crc(p_527->g_330.x, "p_527->g_330.x", print_hash_value);
    transparent_crc(p_527->g_330.y, "p_527->g_330.y", print_hash_value);
    transparent_crc(p_527->g_330.z, "p_527->g_330.z", print_hash_value);
    transparent_crc(p_527->g_330.w, "p_527->g_330.w", print_hash_value);
    transparent_crc(p_527->g_331.s0, "p_527->g_331.s0", print_hash_value);
    transparent_crc(p_527->g_331.s1, "p_527->g_331.s1", print_hash_value);
    transparent_crc(p_527->g_331.s2, "p_527->g_331.s2", print_hash_value);
    transparent_crc(p_527->g_331.s3, "p_527->g_331.s3", print_hash_value);
    transparent_crc(p_527->g_331.s4, "p_527->g_331.s4", print_hash_value);
    transparent_crc(p_527->g_331.s5, "p_527->g_331.s5", print_hash_value);
    transparent_crc(p_527->g_331.s6, "p_527->g_331.s6", print_hash_value);
    transparent_crc(p_527->g_331.s7, "p_527->g_331.s7", print_hash_value);
    transparent_crc(p_527->g_331.s8, "p_527->g_331.s8", print_hash_value);
    transparent_crc(p_527->g_331.s9, "p_527->g_331.s9", print_hash_value);
    transparent_crc(p_527->g_331.sa, "p_527->g_331.sa", print_hash_value);
    transparent_crc(p_527->g_331.sb, "p_527->g_331.sb", print_hash_value);
    transparent_crc(p_527->g_331.sc, "p_527->g_331.sc", print_hash_value);
    transparent_crc(p_527->g_331.sd, "p_527->g_331.sd", print_hash_value);
    transparent_crc(p_527->g_331.se, "p_527->g_331.se", print_hash_value);
    transparent_crc(p_527->g_331.sf, "p_527->g_331.sf", print_hash_value);
    transparent_crc(p_527->g_351, "p_527->g_351", print_hash_value);
    transparent_crc(p_527->g_356.f0, "p_527->g_356.f0", print_hash_value);
    transparent_crc(p_527->g_356.f1, "p_527->g_356.f1", print_hash_value);
    transparent_crc(p_527->g_356.f2, "p_527->g_356.f2", print_hash_value);
    transparent_crc(p_527->g_384.f0, "p_527->g_384.f0", print_hash_value);
    transparent_crc(p_527->g_384.f1, "p_527->g_384.f1", print_hash_value);
    transparent_crc(p_527->g_384.f2, "p_527->g_384.f2", print_hash_value);
    transparent_crc(p_527->g_384.f3, "p_527->g_384.f3", print_hash_value);
    transparent_crc(p_527->g_396.s0, "p_527->g_396.s0", print_hash_value);
    transparent_crc(p_527->g_396.s1, "p_527->g_396.s1", print_hash_value);
    transparent_crc(p_527->g_396.s2, "p_527->g_396.s2", print_hash_value);
    transparent_crc(p_527->g_396.s3, "p_527->g_396.s3", print_hash_value);
    transparent_crc(p_527->g_396.s4, "p_527->g_396.s4", print_hash_value);
    transparent_crc(p_527->g_396.s5, "p_527->g_396.s5", print_hash_value);
    transparent_crc(p_527->g_396.s6, "p_527->g_396.s6", print_hash_value);
    transparent_crc(p_527->g_396.s7, "p_527->g_396.s7", print_hash_value);
    transparent_crc(p_527->g_405.f0, "p_527->g_405.f0", print_hash_value);
    transparent_crc(p_527->g_405.f1, "p_527->g_405.f1", print_hash_value);
    transparent_crc(p_527->g_405.f2, "p_527->g_405.f2", print_hash_value);
    transparent_crc(p_527->g_405.f3, "p_527->g_405.f3", print_hash_value);
    transparent_crc(p_527->g_405.f4, "p_527->g_405.f4", print_hash_value);
    transparent_crc(p_527->g_405.f5, "p_527->g_405.f5", print_hash_value);
    transparent_crc(p_527->g_405.f6, "p_527->g_405.f6", print_hash_value);
    transparent_crc(p_527->g_405.f7, "p_527->g_405.f7", print_hash_value);
    transparent_crc(p_527->g_405.f8, "p_527->g_405.f8", print_hash_value);
    transparent_crc(p_527->g_405.f9, "p_527->g_405.f9", print_hash_value);
    transparent_crc(p_527->g_419, "p_527->g_419", print_hash_value);
    transparent_crc(p_527->g_420.f0, "p_527->g_420.f0", print_hash_value);
    transparent_crc(p_527->g_420.f1, "p_527->g_420.f1", print_hash_value);
    transparent_crc(p_527->g_420.f2, "p_527->g_420.f2", print_hash_value);
    transparent_crc(p_527->g_420.f3, "p_527->g_420.f3", print_hash_value);
    transparent_crc(p_527->g_420.f4.f0, "p_527->g_420.f4.f0", print_hash_value);
    transparent_crc(p_527->g_420.f4.f1, "p_527->g_420.f4.f1", print_hash_value);
    transparent_crc(p_527->g_420.f4.f2, "p_527->g_420.f4.f2", print_hash_value);
    transparent_crc(p_527->g_420.f5, "p_527->g_420.f5", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_527->g_447[i][j][k], "p_527->g_447[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_527->g_478.x, "p_527->g_478.x", print_hash_value);
    transparent_crc(p_527->g_478.y, "p_527->g_478.y", print_hash_value);
    transparent_crc(p_527->g_479.s0, "p_527->g_479.s0", print_hash_value);
    transparent_crc(p_527->g_479.s1, "p_527->g_479.s1", print_hash_value);
    transparent_crc(p_527->g_479.s2, "p_527->g_479.s2", print_hash_value);
    transparent_crc(p_527->g_479.s3, "p_527->g_479.s3", print_hash_value);
    transparent_crc(p_527->g_479.s4, "p_527->g_479.s4", print_hash_value);
    transparent_crc(p_527->g_479.s5, "p_527->g_479.s5", print_hash_value);
    transparent_crc(p_527->g_479.s6, "p_527->g_479.s6", print_hash_value);
    transparent_crc(p_527->g_479.s7, "p_527->g_479.s7", print_hash_value);
    transparent_crc(p_527->g_480.s0, "p_527->g_480.s0", print_hash_value);
    transparent_crc(p_527->g_480.s1, "p_527->g_480.s1", print_hash_value);
    transparent_crc(p_527->g_480.s2, "p_527->g_480.s2", print_hash_value);
    transparent_crc(p_527->g_480.s3, "p_527->g_480.s3", print_hash_value);
    transparent_crc(p_527->g_480.s4, "p_527->g_480.s4", print_hash_value);
    transparent_crc(p_527->g_480.s5, "p_527->g_480.s5", print_hash_value);
    transparent_crc(p_527->g_480.s6, "p_527->g_480.s6", print_hash_value);
    transparent_crc(p_527->g_480.s7, "p_527->g_480.s7", print_hash_value);
    transparent_crc(p_527->g_480.s8, "p_527->g_480.s8", print_hash_value);
    transparent_crc(p_527->g_480.s9, "p_527->g_480.s9", print_hash_value);
    transparent_crc(p_527->g_480.sa, "p_527->g_480.sa", print_hash_value);
    transparent_crc(p_527->g_480.sb, "p_527->g_480.sb", print_hash_value);
    transparent_crc(p_527->g_480.sc, "p_527->g_480.sc", print_hash_value);
    transparent_crc(p_527->g_480.sd, "p_527->g_480.sd", print_hash_value);
    transparent_crc(p_527->g_480.se, "p_527->g_480.se", print_hash_value);
    transparent_crc(p_527->g_480.sf, "p_527->g_480.sf", print_hash_value);
    transparent_crc(p_527->g_481.s0, "p_527->g_481.s0", print_hash_value);
    transparent_crc(p_527->g_481.s1, "p_527->g_481.s1", print_hash_value);
    transparent_crc(p_527->g_481.s2, "p_527->g_481.s2", print_hash_value);
    transparent_crc(p_527->g_481.s3, "p_527->g_481.s3", print_hash_value);
    transparent_crc(p_527->g_481.s4, "p_527->g_481.s4", print_hash_value);
    transparent_crc(p_527->g_481.s5, "p_527->g_481.s5", print_hash_value);
    transparent_crc(p_527->g_481.s6, "p_527->g_481.s6", print_hash_value);
    transparent_crc(p_527->g_481.s7, "p_527->g_481.s7", print_hash_value);
    transparent_crc(p_527->g_481.s8, "p_527->g_481.s8", print_hash_value);
    transparent_crc(p_527->g_481.s9, "p_527->g_481.s9", print_hash_value);
    transparent_crc(p_527->g_481.sa, "p_527->g_481.sa", print_hash_value);
    transparent_crc(p_527->g_481.sb, "p_527->g_481.sb", print_hash_value);
    transparent_crc(p_527->g_481.sc, "p_527->g_481.sc", print_hash_value);
    transparent_crc(p_527->g_481.sd, "p_527->g_481.sd", print_hash_value);
    transparent_crc(p_527->g_481.se, "p_527->g_481.se", print_hash_value);
    transparent_crc(p_527->g_481.sf, "p_527->g_481.sf", print_hash_value);
    transparent_crc(p_527->g_498.x, "p_527->g_498.x", print_hash_value);
    transparent_crc(p_527->g_498.y, "p_527->g_498.y", print_hash_value);
    transparent_crc(p_527->g_512.f0, "p_527->g_512.f0", print_hash_value);
    transparent_crc(p_527->g_512.f1, "p_527->g_512.f1", print_hash_value);
    transparent_crc(p_527->g_512.f2, "p_527->g_512.f2", print_hash_value);
    transparent_crc(p_527->v_collective, "p_527->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 17; i++)
            transparent_crc(p_527->g_special_values[i + 17 * get_linear_group_id()], "p_527->g_special_values[i + 17 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_527->l_comm_values[get_linear_local_id()], "p_527->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_527->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_527->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
