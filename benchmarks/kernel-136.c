// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,73,5 -l 23,1,1
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

__constant uint32_t permutations[10][23] = {
{16,4,14,8,17,13,6,0,7,21,11,10,12,15,19,20,1,18,3,5,2,9,22}, // permutation 0
{3,22,14,1,10,11,15,9,5,13,20,0,4,7,21,6,2,12,17,19,8,16,18}, // permutation 1
{10,20,16,13,9,2,22,18,14,15,11,6,12,19,3,17,8,7,4,0,21,5,1}, // permutation 2
{20,4,22,19,2,17,10,16,3,12,14,0,8,15,6,9,5,13,11,7,1,18,21}, // permutation 3
{3,2,7,1,20,10,16,9,19,0,17,4,18,11,5,6,22,13,21,15,8,14,12}, // permutation 4
{10,18,7,21,15,6,17,5,16,11,22,4,12,14,9,1,2,19,3,0,13,8,20}, // permutation 5
{1,15,19,17,16,11,7,18,12,0,9,3,5,10,4,13,2,6,14,22,8,21,20}, // permutation 6
{9,10,14,1,13,0,17,16,2,20,12,19,4,18,5,6,11,8,7,22,3,15,21}, // permutation 7
{7,18,12,11,16,17,1,9,10,13,4,3,14,6,8,0,15,22,5,19,2,20,21}, // permutation 8
{15,18,9,11,3,0,19,14,12,5,7,8,21,2,6,10,22,16,13,4,1,17,20} // permutation 9
};

// Seed: 2840041664

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

union U1 {
   volatile int32_t  f0;
};

struct S2 {
    VECTOR(int16_t, 16) g_5;
    uint8_t g_23;
    int8_t g_36;
    uint8_t g_38[10];
    int32_t *g_39;
    int32_t g_42;
    int32_t *g_41;
    VECTOR(int32_t, 16) g_65;
    uint64_t g_74;
    uint64_t g_105;
    uint64_t g_107;
    int16_t g_118;
    uint8_t g_131[4];
    VECTOR(uint64_t, 4) g_159;
    volatile VECTOR(uint32_t, 8) g_164;
    volatile VECTOR(uint32_t, 4) g_166;
    union U1 g_175;
    struct S0 g_198;
    uint32_t g_219;
    int16_t g_222;
    uint32_t g_223;
    VECTOR(int32_t, 2) g_233;
    uint16_t g_249;
    uint8_t *g_265;
    uint8_t **g_264;
    int32_t * volatile g_278;
    VECTOR(uint64_t, 4) g_300;
    union U1 g_301;
    int32_t g_305;
    union U1 *g_307;
    union U1 * volatile * volatile g_306;
    int16_t g_323;
    volatile int64_t g_335;
    volatile int64_t *g_334;
    int64_t *g_336;
    uint32_t g_345;
    uint32_t * volatile g_347;
    int64_t g_363;
    int32_t * volatile g_373;
    volatile VECTOR(uint64_t, 2) g_399;
    uint64_t g_488;
    struct S0 * volatile *g_529;
    struct S0 g_538;
    struct S0 *g_537;
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
uint64_t  func_1(struct S2 * p_567);
int16_t  func_9(uint64_t  p_10, uint16_t  p_11, uint32_t  p_12, int64_t  p_13, struct S2 * p_567);
uint64_t  func_14(int32_t  p_15, struct S2 * p_567);
int16_t  func_18(uint8_t  p_19, uint64_t  p_20, uint64_t  p_21, struct S2 * p_567);
uint8_t * func_25(uint8_t * p_26, uint32_t  p_27, struct S2 * p_567);
uint8_t * func_28(uint8_t  p_29, struct S2 * p_567);
int8_t  func_67(uint8_t ** p_68, int32_t ** p_69, struct S2 * p_567);
uint64_t  func_78(int64_t  p_79, int32_t * p_80, struct S2 * p_567);
uint64_t  func_87(int32_t  p_88, struct S2 * p_567);
uint32_t  func_92(int32_t * p_93, uint64_t * p_94, int64_t  p_95, int64_t  p_96, struct S2 * p_567);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_567->g_5 p_567->l_comm_values p_567->g_36 p_567->g_39 p_567->g_38 p_567->g_65 p_567->g_74 p_567->g_23 p_567->g_105 p_567->g_118 p_567->g_131 p_567->g_comm_values p_567->g_159 p_567->g_164 p_567->g_107 p_567->g_166 p_567->g_42 p_567->g_175 p_567->g_219 p_567->g_223 p_567->g_233 p_567->g_198.f2 p_567->g_264 p_567->g_300 p_567->g_301 p_567->g_41 p_567->g_306 p_567->g_198 p_567->g_265 p_567->g_323 p_567->g_334 p_567->g_336 p_567->g_305 p_567->g_345 p_567->g_347 p_567->g_363 p_567->g_399 p_567->g_175.f0 p_567->g_488 p_567->g_301.f0 p_567->g_529
 * writes: p_567->g_23 p_567->g_36 p_567->g_38 p_567->g_41 p_567->g_74 p_567->g_105 p_567->g_107 p_567->g_118 p_567->g_131 p_567->g_42 p_567->g_219 p_567->g_223 p_567->g_222 p_567->g_249 p_567->g_39 p_567->g_198.f1 p_567->g_233 p_567->g_305 p_567->g_198.f0 p_567->g_323 p_567->g_278 p_567->g_265 p_567->g_373 p_567->g_198.f2 p_567->g_488 p_567->g_537
 */
uint64_t  func_1(struct S2 * p_567)
{ /* block id: 4 */
    int8_t l_4 = 1L;
    VECTOR(int16_t, 2) l_6 = (VECTOR(int16_t, 2))((-1L), 0x3A18L);
    uint8_t *l_22 = &p_567->g_23;
    uint8_t **l_24 = &l_22;
    VECTOR(int8_t, 8) l_30 = (VECTOR(int8_t, 8))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 0x10L), 0x10L), 0x10L, 0x26L, 0x10L);
    uint8_t *l_33 = &p_567->g_23;
    uint8_t *l_37 = &p_567->g_38[1];
    int32_t l_486 = 0L;
    uint64_t *l_487 = &p_567->g_488;
    int8_t l_489[5];
    int32_t l_508 = 0L;
    int32_t **l_511 = &p_567->g_39;
    int32_t *l_512 = &l_508;
    int32_t *l_513[3][9] = {{&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42},{&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42},{&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42,&p_567->g_42}};
    uint32_t l_514 = 0x41B7FAB4L;
    int8_t l_531 = 0x4CL;
    uint32_t l_543 = 0x165E5A92L;
    VECTOR(int16_t, 8) l_544 = (VECTOR(int16_t, 8))(0x294BL, (VECTOR(int16_t, 4))(0x294BL, (VECTOR(int16_t, 2))(0x294BL, (-1L)), (-1L)), (-1L), 0x294BL, (-1L));
    int8_t l_562 = (-1L);
    int8_t l_565 = (-1L);
    uint8_t l_566 = 0x8CL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_489[i] = 1L;
    l_508 ^= ((VECTOR(int32_t, 8))((safe_mul_func_uint8_t_u_u(l_4, (((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_567->g_5.s9e)))).yyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_6.xxyxxyxy)).s3350270043414350)).se17c))).y | (safe_sub_func_int16_t_s_s(func_9((func_14(((safe_sub_func_int8_t_s_s((((*l_487) ^= ((func_18(p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))], p_567->g_5.s7, (((*l_22) = 0xA8L) || (((*l_24) = (void*)0) != ((*p_567->g_264) = func_25(((*p_567->g_264) = func_28((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_30.s3162062760027465)).hi)).s3 > (safe_div_func_uint8_t_u_u(((*l_33) = 0x0BL), (~(safe_lshift_func_uint8_t_u_s(((*l_37) = (p_567->g_36 |= 248UL)), l_6.y)))))), p_567)), p_567->g_5.sa, p_567)))), p_567) != l_486) , l_6.y)) ^ l_489[0]), l_30.s3)) | 0x784AL), p_567) & GROUP_DIVERGE(2, 1)), l_6.x, p_567->g_300.z, p_567->g_65.s1, p_567), FAKE_DIVERGE(p_567->group_0_offset, get_group_id(0), 10)))))), ((VECTOR(int32_t, 2))(0x1693F968L)), 0L, 0x55C47C55L, 0x002CB84AL, (-1L), 0x52BEBB7DL)).s4;
    l_512 = ((*l_511) = ((safe_rshift_func_int8_t_s_u(l_486, 1)) , &p_567->g_42));
    ++l_514;
    for (p_567->g_107 = 0; (p_567->g_107 == 30); p_567->g_107++)
    { /* block id: 249 */
        uint8_t l_523 = 0UL;
        int8_t *l_524[6][9] = {{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4},{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4},{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4},{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4},{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4},{(void*)0,&p_567->g_36,&p_567->g_36,(void*)0,&p_567->g_36,&l_489[0],&l_489[4],&l_489[0],&l_4}};
        int32_t l_525 = (-10L);
        struct S0 *l_526 = &p_567->g_198;
        struct S0 **l_527[7][1][3] = {{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}},{{(void*)0,&l_526,&l_526}}};
        struct S0 *l_528 = &p_567->g_198;
        int32_t l_530 = 0x76F7FA70L;
        int32_t **l_555 = (void*)0;
        int i, j, k;
        (**l_511) |= ((safe_sub_func_int16_t_s_s(p_567->g_301.f0, ((safe_rshift_func_int8_t_s_u((l_525 = (l_523 |= p_567->g_363)), 6)) , (p_567->g_5.s7 >= ((*l_487) = ((l_528 = l_526) != &p_567->g_198)))))) & ((0x1FCDL != (((((p_567->g_529 != p_567->g_529) && ((void*)0 != &p_567->g_305)) > l_530) && 0UL) == l_531)) == 0x087F0568L));
        for (p_567->g_198.f1 = (-10); (p_567->g_198.f1 < 59); p_567->g_198.f1++)
        { /* block id: 257 */
            for (p_567->g_42 = 0; (p_567->g_42 != (-11)); p_567->g_42 = safe_sub_func_uint16_t_u_u(p_567->g_42, 8))
            { /* block id: 260 */
                struct S0 *l_536 = &p_567->g_198;
                p_567->g_537 = l_536;
            }
            return p_567->g_198.f1;
        }
        for (l_4 = 0; (l_4 == (-18)); l_4 = safe_sub_func_uint16_t_u_u(l_4, 9))
        { /* block id: 267 */
            int32_t ***l_556 = &l_511;
            int32_t l_559 = 1L;
            uint16_t *l_563 = &p_567->g_249;
            int16_t *l_564 = (void*)0;
            (1 + 1);
        }
        (*p_567->g_39) &= l_566;
    }
    return p_567->g_159.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_42
 * writes:
 */
int16_t  func_9(uint64_t  p_10, uint16_t  p_11, uint32_t  p_12, int64_t  p_13, struct S2 * p_567)
{ /* block id: 239 */
    int32_t *l_490 = &p_567->g_42;
    int32_t l_491 = (-10L);
    int32_t *l_492 = (void*)0;
    int32_t *l_493 = &p_567->g_42;
    int32_t *l_494 = &p_567->g_42;
    int32_t *l_495 = (void*)0;
    int32_t *l_496 = (void*)0;
    int32_t *l_497 = &l_491;
    int32_t *l_498 = &p_567->g_42;
    int32_t *l_499 = &p_567->g_42;
    int32_t *l_500 = &l_491;
    int32_t *l_501 = (void*)0;
    int32_t *l_502[8][1] = {{&p_567->g_42},{&p_567->g_42},{&p_567->g_42},{&p_567->g_42},{&p_567->g_42},{&p_567->g_42},{&p_567->g_42},{&p_567->g_42}};
    int32_t l_503 = 0x5E46BE63L;
    uint8_t l_504 = 255UL;
    int32_t **l_507 = &l_496;
    int i, j;
    --l_504;
    (*l_507) = &l_491;
    return (*l_499);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_14(int32_t  p_15, struct S2 * p_567)
{ /* block id: 237 */
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_74 p_567->g_107 p_567->g_363 p_567->g_399 p_567->g_166 p_567->g_233 p_567->g_219 p_567->g_198.f2 p_567->g_175.f0 p_567->g_159 p_567->g_264 p_567->g_265 p_567->g_131 p_567->g_323 p_567->g_38 p_567->g_198 p_567->g_300
 * writes: p_567->g_74 p_567->g_107 p_567->g_373 p_567->g_219 p_567->g_198.f2 p_567->g_222
 */
int16_t  func_18(uint8_t  p_19, uint64_t  p_20, uint64_t  p_21, struct S2 * p_567)
{ /* block id: 166 */
    uint32_t l_379[6];
    struct S0 l_456 = {1L,2UL,0x7C87F6EFL};
    struct S0 *l_457 = (void*)0;
    struct S0 **l_458 = &l_457;
    struct S0 **l_459 = (void*)0;
    struct S0 *l_461 = (void*)0;
    struct S0 **l_460 = &l_461;
    int32_t l_485 = 8L;
    int i;
    for (i = 0; i < 6; i++)
        l_379[i] = 3UL;
    for (p_567->g_74 = (-22); (p_567->g_74 != 53); ++p_567->g_74)
    { /* block id: 169 */
        VECTOR(uint64_t, 2) l_398 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x7043FED120D47AE4L);
        int i;
        for (p_567->g_107 = (-21); (p_567->g_107 < 43); p_567->g_107 = safe_add_func_int32_t_s_s(p_567->g_107, 6))
        { /* block id: 172 */
            uint16_t l_382 = 0xF82FL;
            int32_t l_395 = 6L;
            l_379[0] = p_19;
            p_567->g_373 = ((safe_rshift_func_int16_t_s_u((l_382 ^= 0x284AL), (((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) ^ (!(&p_567->g_249 != (((0xC560375822D8EBADL & (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x66D7L, 1UL)), (safe_sub_func_int16_t_s_s(l_395, (l_379[0] && (((VECTOR(uint64_t, 16))(18446744073709551608UL, 0x8788B76602207969L, ((VECTOR(uint64_t, 2))(l_398.yy)), p_567->g_363, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_567->g_399.xxyyyxxyxyxxyyxx)))).s8e31, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(2L, ((safe_mul_func_int8_t_s_s(p_567->g_166.x, (safe_div_func_int32_t_s_s(0x328A6DB0L, p_20)))) == FAKE_DIVERGE(p_567->global_0_offset, get_global_id(0), 10)), (-1L), 0x00521973L)).wyzyxxwzzywyxzwx))).s89ed, ((VECTOR(int32_t, 4))(0x1596CE94L))))).hi, ((VECTOR(uint32_t, 2))(7UL))))), ((VECTOR(uint32_t, 2))(0x0FDC9D4DL))))).xyxx))).xxzwxzxzwxwyyxwx)).hi, ((VECTOR(uint64_t, 8))(0x4EAA836820222B3BL))))), l_379[1], 1UL, 18446744073709551612UL)).se > p_567->g_233.y)))), 65530UL, l_398.x, 0UL, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(1UL)))).s0, 3L))) > p_21) , (void*)0)))), p_567->g_233.y)), 5)), l_379[0])) , p_20) <= p_20))) , (void*)0);
            if (l_379[4])
                break;
            if ((atomic_inc(&p_567->l_atomic_input[38]) == 2))
            { /* block id: 178 */
                VECTOR(int32_t, 8) l_404 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L));
                int16_t l_405 = 0x04B6L;
                int32_t l_406 = (-1L);
                int i;
                l_406 &= (l_405 ^= ((VECTOR(int32_t, 2))(l_404.s74)).odd);
                for (l_406 = (-22); (l_406 <= (-26)); l_406 = safe_sub_func_int32_t_s_s(l_406, 6))
                { /* block id: 183 */
                    struct S0 l_409 = {0x375C96C76C8D7D62L,1UL,-1L};
                    struct S0 l_410 = {0x56A169BB6885F819L,0x45AC124DL,0x7E52BF2BL};
                    int32_t l_422 = (-1L);
                    l_410 = l_409;
                    for (l_410.f0 = 0; (l_410.f0 > 12); l_410.f0 = safe_add_func_uint32_t_u_u(l_410.f0, 3))
                    { /* block id: 187 */
                        int8_t l_413[7];
                        union U1 l_414 = {0x47A7EC0EL};/* VOLATILE GLOBAL l_414 */
                        struct S0 l_415 = {0x281AFFFFF64BE896L,4294967295UL,4L};
                        int32_t **l_416 = (void*)0;
                        uint16_t l_417 = 0x0E16L;
                        union U1 *l_420[9] = {&l_414,(void*)0,&l_414,&l_414,(void*)0,&l_414,&l_414,(void*)0,&l_414};
                        union U1 *l_421 = &l_414;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_413[i] = 0x6EL;
                        l_415 = (l_409 = ((l_413[5] , l_414) , l_415));
                        l_416 = (void*)0;
                        --l_417;
                        l_421 = l_420[2];
                    }
                    if (l_422)
                    { /* block id: 194 */
                        int8_t l_423 = 0L;
                        int32_t l_424 = 0x37B80AF9L;
                        uint16_t l_425 = 3UL;
                        int32_t *l_426 = (void*)0;
                        int32_t *l_427[2][4] = {{&l_424,&l_424,&l_424,&l_424},{&l_424,&l_424,&l_424,&l_424}};
                        int i, j;
                        l_404.s5 = (l_422 = l_423);
                        l_404.s4 = l_424;
                        l_404.s1 = l_425;
                        l_427[1][3] = l_426;
                    }
                    else
                    { /* block id: 200 */
                        uint16_t l_428[1][4][2];
                        uint8_t l_431 = 0x0CL;
                        struct S0 l_432 = {0x06F4C1F10B0D003DL,7UL,0x7A95B488L};
                        uint32_t l_433 = 1UL;
                        VECTOR(int32_t, 4) l_434 = (VECTOR(int32_t, 4))(0x4F5BEF00L, (VECTOR(int32_t, 2))(0x4F5BEF00L, 0L), 0L);
                        uint64_t l_435 = 0x6816F8B90A3C6F81L;
                        uint32_t l_436 = 4294967293UL;
                        uint64_t l_437 = 18446744073709551606UL;
                        uint8_t l_438 = 0x12L;
                        uint8_t l_439 = 0x28L;
                        int16_t l_440[4] = {(-4L),(-4L),(-4L),(-4L)};
                        VECTOR(int32_t, 16) l_441 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x24E84A9DL), 0x24E84A9DL), 0x24E84A9DL, 1L, 0x24E84A9DL, (VECTOR(int32_t, 2))(1L, 0x24E84A9DL), (VECTOR(int32_t, 2))(1L, 0x24E84A9DL), 1L, 0x24E84A9DL, 1L, 0x24E84A9DL);
                        VECTOR(int32_t, 8) l_442 = (VECTOR(int32_t, 8))(0x7FE90495L, (VECTOR(int32_t, 4))(0x7FE90495L, (VECTOR(int32_t, 2))(0x7FE90495L, 0x639AD78DL), 0x639AD78DL), 0x639AD78DL, 0x7FE90495L, 0x639AD78DL);
                        VECTOR(int32_t, 8) l_443 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
                        VECTOR(int32_t, 2) l_444 = (VECTOR(int32_t, 2))((-5L), 0x350CA455L);
                        int8_t l_445 = 0x20L;
                        uint64_t l_446 = 18446744073709551610UL;
                        int32_t l_447 = 0x28CE9FACL;
                        int32_t l_448 = (-7L);
                        uint16_t l_449 = 0xF25EL;
                        int32_t l_450 = 0x531CFC80L;
                        int64_t l_451 = (-1L);
                        int32_t l_452 = 0x0EDC37A5L;
                        uint16_t l_453 = 65534UL;
                        uint16_t l_454 = 0xF3FAL;
                        int64_t l_455[9][8][3] = {{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}},{{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL},{0x336BB670520B6069L,0x2CA325603862943BL,0x2CA325603862943BL}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_428[i][j][k] = 0UL;
                            }
                        }
                        ++l_428[0][2][0];
                        l_455[6][1][2] |= (l_434.w = ((l_404.s2 ^= l_431) , (l_432 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x4978B0F9L, l_433, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_434.xy)).even, (l_435 , (l_422 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_436, l_437, 0x6FD96E6DL, 0L, ((VECTOR(int32_t, 2))(0x28D5DF42L, 0x7E4015C7L)), 0L, 1L, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x512640D9L, (-1L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(5L, (l_439 ^= l_438), l_440[2], (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_441.sfd)).xyxxxyyx)).s64, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_442.s32202277)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_443.s7226505563250016)).s0ad2, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_444.xy)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(0x08327329L, 0L)).yyxxyxxx))).s74))).yxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(1L, (l_448 ^= (l_404.s0 = ((l_446 |= l_445) , l_447))), ((VECTOR(int32_t, 4))(0L)), 7L, 4L)).lo, ((VECTOR(int32_t, 4))(0x3AD8E361L))))).xxywyxyy)).odd))), 0x4C5A29ECL, ((VECTOR(int32_t, 2))(4L)), 0x70D5DF9CL)).s0565732727243373, ((VECTOR(int32_t, 16))(0x294C3E1FL)), ((VECTOR(int32_t, 16))(0x645B62A2L))))).s87)).yxyx, ((VECTOR(int32_t, 4))(0x143739BEL))))).odd))).xxyy)))), ((VECTOR(int32_t, 8))((-8L))), ((VECTOR(int32_t, 8))(0x73292DC9L))))).s5321775704202232)).s8d, ((VECTOR(int32_t, 2))(8L))))), l_449, l_450, 9L, 1L, 0L, 0L)).s1fe5)).w)), (-1L), 0x00341D07L)).wwwzxzzw)), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x70763C43L))))).odd, (int32_t)l_451, (int32_t)l_452))))).even))), (-1L), 2L)).lo, ((VECTOR(int32_t, 2))(0L))))).yyxyxxyyxxyxxxyx, ((VECTOR(int32_t, 16))((-10L))), ((VECTOR(int32_t, 16))((-1L)))))).sc8, ((VECTOR(int32_t, 2))(0x70269617L))))), l_453, l_454, (-1L), (-1L))).s1131500573462721)))).s42)).even)));
                    }
                }
                unsigned int result = 0;
                result += l_404.s7;
                result += l_404.s6;
                result += l_404.s5;
                result += l_404.s4;
                result += l_404.s3;
                result += l_404.s2;
                result += l_404.s1;
                result += l_404.s0;
                result += l_405;
                result += l_406;
                atomic_add(&p_567->l_special_values[38], result);
            }
            else
            { /* block id: 212 */
                (1 + 1);
            }
        }
    }
    l_456 = l_456;
    (*l_460) = ((*l_458) = &l_456);
    for (p_567->g_219 = 23; (p_567->g_219 != 48); ++p_567->g_219)
    { /* block id: 222 */
        int32_t *l_467[5][1][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint64_t *l_472 = &p_567->g_74;
        uint8_t *l_475 = &p_567->g_38[8];
        int16_t *l_476 = &p_567->g_222;
        int16_t l_479 = 0x0838L;
        uint16_t *l_484[6] = {&p_567->g_249,&p_567->g_249,&p_567->g_249,&p_567->g_249,&p_567->g_249,&p_567->g_249};
        int i, j, k;
        for (p_567->g_198.f2 = 0; (p_567->g_198.f2 != (-10)); p_567->g_198.f2 = safe_sub_func_uint32_t_u_u(p_567->g_198.f2, 9))
        { /* block id: 225 */
            int32_t *l_466 = (void*)0;
            l_467[2][0][3] = l_466;
            return p_567->g_233.x;
        }
        (**l_460) = ((0xD4FAA9C2L ^ (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((p_567->g_175.f0 ^ ((((*l_472) = (~0x19951991C028FA47L)) < ((p_567->g_159.w || ((safe_lshift_func_int16_t_s_s(((*l_476) = ((void*)0 == l_475)), 12)) >= ((safe_mul_func_uint16_t_u_u((l_485 = (((l_479 ^ (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((**p_567->g_264), ((l_456.f1 & 0x7CL) , 0x76L))), l_456.f2))) | p_567->g_323) | l_456.f1)), p_20)) & p_567->g_38[4]))) & p_19)) && 1L)), p_21)), 4))) , p_567->g_198);
        return l_379[1];
    }
    return p_567->g_300.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_42
 * writes: p_567->g_42
 */
uint8_t * func_25(uint8_t * p_26, uint32_t  p_27, struct S2 * p_567)
{ /* block id: 161 */
    int32_t l_367 = 1L;
    int32_t l_368[9][5][5] = {{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}},{{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L},{0x54CB2093L,7L,0x54CB2093L,0x54CB2093L,7L}}};
    int32_t *l_369 = (void*)0;
    int32_t *l_370 = (void*)0;
    int32_t *l_371 = (void*)0;
    int32_t *l_372 = (void*)0;
    int32_t *l_374 = &p_567->g_42;
    int i, j, k;
    (*l_374) |= (l_367 && l_368[1][0][2]);
    (*l_374) = 0x6B16D073L;
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_39 p_567->l_comm_values p_567->g_38 p_567->g_65 p_567->g_74 p_567->g_23 p_567->g_105 p_567->g_118 p_567->g_5 p_567->g_36 p_567->g_131 p_567->g_comm_values p_567->g_159 p_567->g_164 p_567->g_107 p_567->g_166 p_567->g_42 p_567->g_175 p_567->g_219 p_567->g_223 p_567->g_233 p_567->g_198.f2 p_567->g_264 p_567->g_300 p_567->g_301 p_567->g_41 p_567->g_306 p_567->g_198 p_567->g_265 p_567->g_323 p_567->g_334 p_567->g_336 p_567->g_305 p_567->g_345 p_567->g_347
 * writes: p_567->g_41 p_567->g_74 p_567->g_23 p_567->g_105 p_567->g_107 p_567->g_118 p_567->g_131 p_567->g_42 p_567->g_219 p_567->g_223 p_567->g_222 p_567->g_249 p_567->g_36 p_567->g_39 p_567->g_198.f1 p_567->g_233 p_567->g_305 p_567->g_198.f0 p_567->g_323 p_567->g_278
 */
uint8_t * func_28(uint8_t  p_29, struct S2 * p_567)
{ /* block id: 10 */
    int32_t **l_40[8] = {&p_567->g_39,&p_567->g_39,&p_567->g_39,&p_567->g_39,&p_567->g_39,&p_567->g_39,&p_567->g_39,&p_567->g_39};
    uint8_t *l_44 = (void*)0;
    uint8_t **l_43 = &l_44;
    VECTOR(int16_t, 8) l_53 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x4BFCL), 0x4BFCL), 0x4BFCL, 9L, 0x4BFCL);
    int64_t l_60 = 0x47E1EFC39FA237FFL;
    VECTOR(uint64_t, 16) l_77 = (VECTOR(uint64_t, 16))(0x42D3F7CC827221BDL, (VECTOR(uint64_t, 4))(0x42D3F7CC827221BDL, (VECTOR(uint64_t, 2))(0x42D3F7CC827221BDL, 0UL), 0UL), 0UL, 0x42D3F7CC827221BDL, 0UL, (VECTOR(uint64_t, 2))(0x42D3F7CC827221BDL, 0UL), (VECTOR(uint64_t, 2))(0x42D3F7CC827221BDL, 0UL), 0x42D3F7CC827221BDL, 0UL, 0x42D3F7CC827221BDL, 0UL);
    int64_t *l_337 = (void*)0;
    int32_t *l_342 = &p_567->g_305;
    int16_t l_354 = 7L;
    uint32_t l_358[7][10] = {{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xDCD7DFA8L,1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    uint32_t *l_362[9] = {&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3],&l_358[3][3]};
    uint8_t l_364[10][9][2] = {{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}},{{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL},{0xE3L,0xFAL}}};
    int i, j, k;
    p_567->g_41 = p_567->g_39;
    if ((((((*l_43) = &p_567->g_38[1]) == (void*)0) , p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]) >= 0x0187L))
    { /* block id: 13 */
        uint8_t l_47 = 0x6BL;
        VECTOR(int16_t, 8) l_52 = (VECTOR(int16_t, 8))(0x2458L, (VECTOR(int16_t, 4))(0x2458L, (VECTOR(int16_t, 2))(0x2458L, 0x0B54L), 0x0B54L), 0x0B54L, 0x2458L, 0x0B54L);
        VECTOR(int32_t, 8) l_61 = (VECTOR(int32_t, 8))(0x3DF5444FL, (VECTOR(int32_t, 4))(0x3DF5444FL, (VECTOR(int32_t, 2))(0x3DF5444FL, 0x780627DBL), 0x780627DBL), 0x780627DBL, 0x3DF5444FL, 0x780627DBL);
        VECTOR(int32_t, 2) l_62 = (VECTOR(int32_t, 2))((-1L), 0x5D6DF81FL);
        VECTOR(uint8_t, 8) l_66 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xEAL), 0xEAL), 0xEAL, 1UL, 0xEAL);
        uint64_t *l_72 = (void*)0;
        uint64_t *l_73 = &p_567->g_74;
        int32_t **l_266 = &p_567->g_41;
        int16_t *l_322[6] = {(void*)0,&p_567->g_323,(void*)0,(void*)0,&p_567->g_323,(void*)0};
        int32_t l_330 = 0x597471B3L;
        int i;
        l_47 = (p_567->g_38[1] | (safe_rshift_func_int8_t_s_s(0x06L, 2)));
        if ((((safe_div_func_int16_t_s_s((p_567->g_38[1] | (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_52.s5435575231557624)).even)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x7B11L, 1L)).yxyyyyxy))))).s5454545702062252))).sf, p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]))), ((VECTOR(int16_t, 16))(l_53.s6134726420704065)).s6)) < ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_60 , p_29), 3UL)), (((VECTOR(int32_t, 2))((-2L), 0x4CEC8E44L)).hi && ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x142A26B1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_61.s51351701)).hi)), ((VECTOR(int32_t, 8))(l_62.yyyyyxyx)), 0x5BE56F63L, 5L, 0x0BFD7802L)).lo)).s4))) & (GROUP_DIVERGE(1, 1) & (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_567->g_65.s43)).xyxyxyyxyxyxyyyx)))).s8, p_29)))), (p_567->g_323 ^= (((VECTOR(uint8_t, 2))(l_66.s56)).even >= func_67(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((*l_73)--), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_77.sf3)), 0x7DF0EBE340CFCE32L, 18446744073709551614UL)).xxwyxzxywwyzxwwy)).s4, 18446744073709551615UL, func_78(p_29, &p_567->g_42, p_567), p_567->g_131[2], 0xFA48EE6909606A0CL, 18446744073709551609UL, 0UL)).s0, 0x52FFEF7812CA2539L)) , p_567->g_264), l_266, p_567))))) && (**p_567->g_264))) >= p_29))
        { /* block id: 135 */
            int32_t l_326[7] = {0x3B217493L,0x1099EA1FL,0x3B217493L,0x3B217493L,0x1099EA1FL,0x3B217493L,0x3B217493L};
            int32_t l_327 = 0x746F688CL;
            int32_t l_328 = 0x408C91F0L;
            int32_t l_329[7][9][2] = {{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}},{{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L},{0x70AF4A5FL,0x4817FD84L}}};
            uint16_t l_331 = 1UL;
            int32_t *l_340[2][7][9] = {{{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305}},{{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305},{&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305,&p_567->g_305}}};
            int32_t **l_341[3][3][10] = {{{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]}},{{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]}},{{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]},{&l_340[1][3][3],&l_340[1][3][5],(void*)0,&l_340[1][5][6],(void*)0,&l_340[1][3][5],&l_340[1][3][3],&l_340[1][3][5],&l_340[1][3][5],&l_340[1][3][5]}}};
            int i, j, k;
            (*p_567->g_39) = (*p_567->g_39);
            if ((atomic_inc(&p_567->l_atomic_input[30]) == 2))
            { /* block id: 138 */
                uint32_t l_324 = 0UL;
                uint64_t l_325 = 0x005599F8BF95130FL;
                l_325 |= l_324;
                unsigned int result = 0;
                result += l_324;
                result += l_325;
                atomic_add(&p_567->l_special_values[30], result);
            }
            else
            { /* block id: 140 */
                (1 + 1);
            }
            l_331--;
            (*p_567->g_39) &= ((((p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))] , p_567->g_334) == (l_337 = p_567->g_336)) > (safe_lshift_func_uint8_t_u_u(((((p_567->g_305 , (p_29 || (+(p_29 > (((l_340[1][3][5] != (l_342 = l_340[0][6][1])) || (safe_div_func_int32_t_s_s((&p_567->g_41 != (void*)0), p_567->g_345))) ^ 0xA9BFBE10L))))) || p_29) , 1UL) , 0xD9L), 1))) || p_29);
        }
        else
        { /* block id: 147 */
            struct S0 l_346 = {0x2CF14F0DF438B3DCL,0x2B964FE7L,0L};
            int32_t l_348 = (-1L);
            int32_t l_349 = 0x125A2E80L;
            int32_t l_350 = (-1L);
            int32_t l_351 = 0x3745A0EEL;
            int32_t l_352[4][4];
            int32_t l_353 = 0x546C5297L;
            VECTOR(int32_t, 2) l_355 = (VECTOR(int32_t, 2))(0x6B18DEDDL, 0L);
            int16_t l_356 = 0x0C53L;
            int16_t l_357[1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_352[i][j] = 0x638FBDD4L;
            }
            for (i = 0; i < 1; i++)
                l_357[i] = 0x3F53L;
            l_62.x &= (l_346 , ((void*)0 == p_567->g_347));
            l_358[3][3]++;
        }
        return (*p_567->g_264);
    }
    else
    { /* block id: 152 */
        int32_t *l_361 = &p_567->g_42;
        p_567->g_278 = l_361;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_567->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u((--l_364[5][0][1]), 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]));
    return (*p_567->g_264);
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_107 p_567->g_39 p_567->g_233 p_567->g_23 p_567->g_300 p_567->g_65 p_567->g_301 p_567->g_41 p_567->g_306 p_567->g_42 p_567->g_219 p_567->g_105 p_567->g_198 p_567->g_265 p_567->g_131 p_567->g_74
 * writes: p_567->g_107 p_567->g_36 p_567->g_198.f1 p_567->g_41 p_567->g_42 p_567->g_233 p_567->g_23 p_567->g_305 p_567->g_198.f0 p_567->g_222 p_567->g_74
 */
int8_t  func_67(uint8_t ** p_68, int32_t ** p_69, struct S2 * p_567)
{ /* block id: 90 */
    int32_t l_275 = 0x5E397EF2L;
    int32_t l_308 = 1L;
    int16_t *l_315 = &p_567->g_222;
    uint32_t *l_318 = (void*)0;
    int32_t l_319 = 0L;
    for (p_567->g_107 = (-17); (p_567->g_107 != 55); p_567->g_107 = safe_add_func_int8_t_s_s(p_567->g_107, 5))
    { /* block id: 93 */
        uint32_t l_269 = 0UL;
        int32_t l_277[4] = {2L,2L,2L,2L};
        VECTOR(uint8_t, 4) l_294 = (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 0x7EL), 0x7EL);
        VECTOR(int8_t, 8) l_295 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 3L), 3L), 3L, 0L, 3L);
        int32_t *l_304 = &p_567->g_305;
        int64_t *l_309 = &p_567->g_198.f0;
        int32_t *l_310 = (void*)0;
        int32_t *l_311 = (void*)0;
        int32_t *l_312 = (void*)0;
        int i;
        if (l_269)
        { /* block id: 94 */
            uint32_t l_276 = 5UL;
            for (p_567->g_36 = 20; (p_567->g_36 < 17); p_567->g_36 = safe_sub_func_uint8_t_u_u(p_567->g_36, 2))
            { /* block id: 97 */
                int32_t *l_274 = (void*)0;
                for (p_567->g_198.f1 = 0; (p_567->g_198.f1 == 52); p_567->g_198.f1++)
                { /* block id: 100 */
                    (*p_69) = l_274;
                }
                if (l_275)
                    continue;
                return l_276;
            }
        }
        else
        { /* block id: 106 */
            int32_t *l_279 = (void*)0;
            int32_t *l_280[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            p_567->g_233.y &= (l_277[0] = ((*p_567->g_39) = l_275));
            for (l_275 = 0; (l_275 != (-29)); --l_275)
            { /* block id: 112 */
                (*p_69) = &p_567->g_42;
            }
            for (p_567->g_23 = (-11); (p_567->g_23 < 46); ++p_567->g_23)
            { /* block id: 117 */
                int8_t l_285 = 3L;
                return l_285;
            }
        }
        p_567->g_233.y ^= ((((*l_309) = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_275, 0xBFFCL, 0xDC02L, 0xAC5FL)).lo)).lo, ((safe_sub_func_int8_t_s_s(l_275, (!((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xF4L, 3UL)))).odd))) || ((l_277[3] , (!((VECTOR(uint8_t, 4))(l_294.xxwz)).y)) & ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_295.s2700555574550337)))).s3)))), ((safe_div_func_int32_t_s_s((-1L), (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_567->g_300.yxxz)).w, ((l_308 ^= (p_567->g_65.sd , ((p_567->g_301 , (((safe_lshift_func_int16_t_s_s(((((((*l_304) = ((void*)0 == (*p_69))) , p_567->g_306) == &p_567->g_307) | l_275) ^ l_275), 9)) & 9UL) & l_294.x)) == (*p_567->g_39)))) , 0x2A7E6A233A8C0956L))))) && 0x8EFB1D9A2A01E9A5L))), l_295.s6)) < p_567->g_219)) & p_567->g_105) , 0x68A9AF49L);
    }
    l_319 |= (65535UL != (safe_sub_func_int16_t_s_s(((*l_315) = (-1L)), ((((safe_rshift_func_int8_t_s_u((p_567->g_198 , 0x4BL), 2)) != l_308) , (!3UL)) , (((l_318 == l_318) == (**p_68)) , l_275)))));
    for (p_567->g_74 = 0; (p_567->g_74 >= 27); p_567->g_74 = safe_add_func_int16_t_s_s(p_567->g_74, 6))
    { /* block id: 130 */
        (*p_567->g_39) &= 2L;
    }
    return l_319;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_23 p_567->g_38 p_567->g_74 p_567->g_105 p_567->g_118 p_567->g_5 p_567->g_36 p_567->l_comm_values p_567->g_131 p_567->g_comm_values p_567->g_159 p_567->g_164 p_567->g_107 p_567->g_166 p_567->g_65 p_567->g_42 p_567->g_175 p_567->g_219 p_567->g_223 p_567->g_233 p_567->g_198.f2
 * writes: p_567->g_23 p_567->g_74 p_567->g_105 p_567->g_107 p_567->g_118 p_567->g_131 p_567->g_42 p_567->g_219 p_567->g_223 p_567->g_222 p_567->g_249 p_567->g_36 p_567->g_39
 */
uint64_t  func_78(int64_t  p_79, int32_t * p_80, struct S2 * p_567)
{ /* block id: 16 */
    uint32_t l_89 = 0xC3D349FFL;
    int32_t **l_263 = &p_567->g_39;
    for (p_567->g_23 = 0; (p_567->g_23 != 7); p_567->g_23 = safe_add_func_uint64_t_u_u(p_567->g_23, 6))
    { /* block id: 19 */
        uint64_t *l_257 = (void*)0;
        uint64_t *l_258[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_259 = 1L;
        VECTOR(int32_t, 4) l_260 = (VECTOR(int32_t, 4))(0x25F0AE92L, (VECTOR(int32_t, 2))(0x25F0AE92L, (-9L)), (-9L));
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_567->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u((((p_79 && p_79) , p_567->g_38[1]) , ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(p_79, func_87(l_89, p_567))), (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_567->group_1_offset, get_group_id(1), 10), p_79)))) != ((l_259 = (l_89 > l_89)) >= l_260.z))), 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]));
        (*p_80) ^= (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), GROUP_DIVERGE(1, 1)));
    }
    (*l_263) = p_80;
    return p_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_74 p_567->g_105 p_567->g_118 p_567->g_5 p_567->g_36 p_567->l_comm_values p_567->g_38 p_567->g_131 p_567->g_23 p_567->g_comm_values p_567->g_159 p_567->g_164 p_567->g_107 p_567->g_166 p_567->g_65 p_567->g_42 p_567->g_175 p_567->g_219 p_567->g_223 p_567->g_233 p_567->g_198.f2
 * writes: p_567->g_74 p_567->g_105 p_567->g_107 p_567->g_118 p_567->g_131 p_567->g_42 p_567->g_219 p_567->g_223 p_567->g_222 p_567->g_249 p_567->g_36
 */
uint64_t  func_87(int32_t  p_88, struct S2 * p_567)
{ /* block id: 20 */
    uint32_t l_129 = 1UL;
    int32_t l_186 = 0x3010FE33L;
    int32_t l_190[6] = {0x1AD261E8L,0L,0x1AD261E8L,0x1AD261E8L,0L,0x1AD261E8L};
    struct S0 *l_199[3][3] = {{&p_567->g_198,&p_567->g_198,&p_567->g_198},{&p_567->g_198,&p_567->g_198,&p_567->g_198},{&p_567->g_198,&p_567->g_198,&p_567->g_198}};
    union U1 *l_202 = &p_567->g_175;
    union U1 **l_201 = &l_202;
    VECTOR(int16_t, 2) l_205 = (VECTOR(int16_t, 2))(8L, 3L);
    uint32_t l_250 = 4294967288UL;
    int i, j;
    for (p_567->g_74 = (-3); (p_567->g_74 > 19); p_567->g_74++)
    { /* block id: 23 */
        int64_t l_99 = 0x5C771C75621C9A83L;
        int32_t *l_102[8][4] = {{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42},{(void*)0,&p_567->g_42,&p_567->g_42,&p_567->g_42}};
        uint64_t *l_103 = (void*)0;
        uint64_t *l_104 = &p_567->g_105;
        uint64_t *l_106[7] = {&p_567->g_74,(void*)0,&p_567->g_74,&p_567->g_74,(void*)0,&p_567->g_74,&p_567->g_74};
        int16_t *l_116 = (void*)0;
        int16_t *l_117 = &p_567->g_118;
        int32_t l_130[6][9] = {{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L},{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L},{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L},{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L},{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L},{0x1EEF7B85L,0x3D6B4620L,(-3L),(-3L),1L,(-3L),(-3L),0x3D6B4620L,0x1EEF7B85L}};
        VECTOR(uint64_t, 16) l_178 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x0C5D1EC6DD82FEA0L), 0x0C5D1EC6DD82FEA0L), 0x0C5D1EC6DD82FEA0L, 1UL, 0x0C5D1EC6DD82FEA0L, (VECTOR(uint64_t, 2))(1UL, 0x0C5D1EC6DD82FEA0L), (VECTOR(uint64_t, 2))(1UL, 0x0C5D1EC6DD82FEA0L), 1UL, 0x0C5D1EC6DD82FEA0L, 1UL, 0x0C5D1EC6DD82FEA0L);
        uint32_t *l_181 = &l_129;
        int16_t l_189 = 0x10CAL;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_567->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u(func_92(&p_88, &p_567->g_74, (((p_567->g_131[2] |= ((safe_sub_func_uint64_t_u_u(l_99, (l_99 < (((safe_mod_func_uint64_t_u_u((p_567->g_107 = ((*l_104) |= (l_102[6][3] != l_102[6][3]))), (safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(((*l_117) ^= 0x45B6L), (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((p_88 != (safe_div_func_uint64_t_u_u(0x47EB49816E0766B1L, p_88))), l_129)) & 246UL) != p_567->g_5.s5), p_88)) , p_567->g_36) != p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]) != 0xFC4CEA799ADA34CBL), 1L)), l_130[1][0])))), p_567->g_74)), l_129)), p_567->g_5.s5)))) > p_88) != p_567->g_38[1])))) == p_567->g_38[2])) & 0L) > p_88), p_567->g_23, p_567), 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]));
        l_190[1] &= ((((p_88 & (0x52C2FFDF52C73AE8L | (((p_88 , 0UL) || ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(0x64D038AAL, 0x569BDC76L, 0x2175B47AL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 3UL)).xxyy)))), 0UL)).s7336465730321714, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))((safe_rshift_func_uint8_t_u_s((((((p_567->g_118 , (((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(l_178.sa8)).xxyxxyyxxyyxxyyx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(18446744073709551614UL, 0x26FC9603B0C7BE27L, (safe_add_func_uint32_t_u_u((++(*l_181)), (safe_mul_func_int16_t_s_s(0x5C51L, ((*l_117) = (l_186 , (safe_mul_func_int8_t_s_s((p_88 ^ p_88), p_567->g_74)))))))), ((VECTOR(uint64_t, 2))(0xEFF8C8359BE378BCL)), 0xA7757BED90661D1CL, 0x0AC7219EB458D056L, 0UL)).even)).xwyxywxwxzxxwzwz, ((VECTOR(uint64_t, 16))(0x201CB5AC61B89C92L))))).s7e87, ((VECTOR(uint64_t, 4))(0xF14CE292E266AF2FL))))).x >= p_88)) == 0L) >= 0xE9D9L) , (-1L)) != 0x24BEL), l_186)), p_88, p_88, 0UL, ((VECTOR(uint32_t, 2))(0xE0309361L)), 0xE07A8E80L, 0x30B072DDL, 7UL, 1UL, ((VECTOR(uint32_t, 2))(4294967295UL)), 0xD2A82656L, ((VECTOR(uint32_t, 2))(1UL)), 0UL)).s5b2d, ((VECTOR(uint32_t, 4))(0x86A49EC6L))))).ywyyywwx, ((VECTOR(uint32_t, 8))(4294967288UL))))).s5115730172575373))))).sd4)).hi) ^ l_189))) && 0L) && p_567->g_65.se) & p_567->g_23);
        for (p_567->g_42 = (-8); (p_567->g_42 <= 11); p_567->g_42 = safe_add_func_int16_t_s_s(p_567->g_42, 3))
        { /* block id: 50 */
            int32_t l_193 = 0x0621BF3EL;
            if (l_193)
                break;
            if (p_88)
                break;
            if (p_88)
                break;
        }
    }
    for (l_186 = 0; (l_186 == (-19)); l_186 = safe_sub_func_int64_t_s_s(l_186, 4))
    { /* block id: 58 */
        struct S0 *l_197 = &p_567->g_198;
        struct S0 **l_196[6][6] = {{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197},{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197},{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197},{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197},{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197},{&l_197,&l_197,(void*)0,&l_197,(void*)0,&l_197}};
        int32_t *l_200 = &l_190[1];
        int i, j;
        l_199[2][2] = (void*)0;
        (*l_200) |= 0L;
    }
    (*l_201) = (void*)0;
    if ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_205.yy)).odd, (p_88 != p_88))))
    { /* block id: 63 */
        int32_t *l_206 = &l_190[3];
        int32_t *l_207 = &l_186;
        int32_t *l_208 = (void*)0;
        int32_t *l_209 = &l_190[1];
        int32_t *l_210 = &p_567->g_42;
        int32_t *l_211 = &l_190[5];
        int32_t *l_212 = &p_567->g_42;
        int32_t *l_213 = (void*)0;
        int32_t *l_214 = (void*)0;
        int32_t l_215 = 0x32805034L;
        int32_t *l_216 = (void*)0;
        int32_t *l_217 = &l_186;
        int32_t *l_218[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_226 = &l_212;
        VECTOR(int32_t, 2) l_234 = (VECTOR(int32_t, 2))(1L, 1L);
        int8_t *l_254[9][10][2] = {{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}},{{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36},{&p_567->g_36,&p_567->g_36}}};
        int i, j, k;
        p_567->g_219++;
        p_567->g_223--;
        (*l_226) = (void*)0;
        for (p_567->g_42 = 0; (p_567->g_42 != 6); p_567->g_42 = safe_add_func_uint64_t_u_u(p_567->g_42, 3))
        { /* block id: 69 */
            int16_t *l_237[4] = {&p_567->g_118,&p_567->g_118,&p_567->g_118,&p_567->g_118};
            int32_t l_247 = 0x46B0B576L;
            uint16_t *l_248 = &p_567->g_249;
            int8_t *l_251 = &p_567->g_36;
            int i;
            (*l_207) = (((FAKE_DIVERGE(p_567->global_2_offset, get_global_id(2), 10) && (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((((*l_251) = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_88, (safe_div_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u(((FAKE_DIVERGE(p_567->local_0_offset, get_local_id(0), 10) <= (!(((*l_211) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_567->g_233.yy)), 0x5826BE53L, ((VECTOR(int32_t, 8))(l_234.xxyxyyyy)), ((safe_add_func_uint32_t_u_u(((8L ^ ((p_567->g_222 = p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))]) ^ ((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((GROUP_DIVERGE(1, 1) , (p_567->g_105 == 0xA70DL)), ((((p_88 >= (((*l_248) = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((p_88 ^ p_88), ((p_567->g_131[3] , p_567->g_38[1]) && p_567->g_198.f2))), 0)) | 3UL), 15)) & l_247)) != p_88)) && 0x3712D7D5L) >= 0x7791FE6ADB902ED9L) ^ p_88))))) == p_88))) <= FAKE_DIVERGE(p_567->group_2_offset, get_group_id(2), 10)), 0x6F4DC4D7L)) != 0x8C05FBDCL), (-5L), ((VECTOR(int32_t, 2))(0x4048E1D8L)), 0x5D864097L)).s0) == GROUP_DIVERGE(2, 1)))) > l_247), l_250)) != p_567->g_65.s7) ^ p_88), p_88)), 0xC18DBF7EL, 0x7BFBD1E1L, (*l_209), p_567->g_164.s3, 4294967293UL, 4294967295UL)), ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 2))(0xB360709DL)), 0UL, 4294967287UL)).s7 || l_247)) ^ l_247), l_247, p_567->g_65.s6, l_129, l_205.x, ((VECTOR(int64_t, 2))(0x699FB92A9F23F4BAL)), 0x56846D4142E3BCCDL)).lo)), ((VECTOR(int64_t, 2))(0L)), 0x4CCEA3E293BD1F37L, 0L)).s7 & p_88)) ^ p_88) , p_88);
            p_88 ^= (((safe_rshift_func_uint8_t_u_s((l_254[5][7][0] != &p_567->g_36), 3)) & ((*l_251) = 1L)) && 0x70DDE07FL);
        }
    }
    else
    { /* block id: 78 */
        p_88 |= 0x6C75F15BL;
    }
    return l_250;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->l_comm_values p_567->g_131 p_567->g_36 p_567->g_comm_values p_567->g_38 p_567->g_74 p_567->g_159 p_567->g_164 p_567->g_107 p_567->g_166 p_567->g_118 p_567->g_65 p_567->g_42 p_567->g_175
 * writes: p_567->g_42
 */
uint32_t  func_92(int32_t * p_93, uint64_t * p_94, int64_t  p_95, int64_t  p_96, struct S2 * p_567)
{ /* block id: 28 */
    int32_t l_146 = 1L;
    int32_t **l_147 = (void*)0;
    int16_t *l_150[2][6][10] = {{{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_567->g_118,&p_567->g_118,&p_567->g_118,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t **l_151 = &l_150[1][4][5];
    uint8_t l_152 = 0x6FL;
    VECTOR(uint32_t, 8) l_165 = (VECTOR(uint32_t, 8))(0x7EBBD39CL, (VECTOR(uint32_t, 4))(0x7EBBD39CL, (VECTOR(uint32_t, 2))(0x7EBBD39CL, 4294967291UL), 4294967291UL), 4294967291UL, 0x7EBBD39CL, 4294967291UL);
    int32_t l_173 = 0x7F7F1617L;
    int32_t l_174 = 8L;
    int i, j, k;
    if ((atomic_inc(&p_567->l_atomic_input[31]) == 4))
    { /* block id: 30 */
        VECTOR(uint8_t, 4) l_132 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xA4L), 0xA4L);
        uint64_t l_133 = 0xEB662F6D3EBDD5AFL;
        uint16_t l_134 = 0x17F5L;
        uint64_t l_135 = 9UL;
        int i;
        l_135 &= (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_132.wwzz)), (l_133 &= ((VECTOR(uint8_t, 2))(255UL, 0x32L)).odd), 0xEAL, 0x13L, 0x3DL)).s4 , l_134);
        unsigned int result = 0;
        result += l_132.w;
        result += l_132.z;
        result += l_132.y;
        result += l_132.x;
        result += l_133;
        result += l_134;
        result += l_135;
        atomic_add(&p_567->l_special_values[31], result);
    }
    else
    { /* block id: 33 */
        (1 + 1);
    }
    (*p_93) = ((p_96 < ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((l_146 < (l_146 , (p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))] <= p_96))) && (((p_95 , l_147) == &p_93) <= (safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (((*l_151) = l_150[1][4][5]) == &p_567->g_118))))) , (*p_93)), l_152)), p_567->g_131[2])) , p_95), 1L)), p_567->g_36)), l_146)) && p_567->g_comm_values[p_567->tid])) || p_96);
    p_567->g_42 &= (safe_div_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u(p_567->g_38[1], (*p_94))) <= (safe_div_func_int32_t_s_s(((((VECTOR(uint64_t, 2))(p_567->g_159.zw)).hi | 0x87ACCF6E19BD86A0L) <= (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(p_567->g_164.s6622)).yywwyzwwxyxzyzwz, ((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(0x0D04652DL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_165.s44051700)).even)), p_567->g_107, 4UL, 0x5F6A1496L)), ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0xC47ABECFL)), 0UL, 0x408D08F6L)).lo, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(p_567->g_166.xyxxyxwyyyxxyzzy)).sdc, ((VECTOR(uint32_t, 2))(0UL, 0x9C12CE41L))))).yxyx, ((VECTOR(uint32_t, 2))(4294967288UL, 0xA71EAA77L)).xyxy))).lo, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((safe_mul_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u((((((*p_93) = (((&p_567->g_42 != ((0x313BC257L < (*p_93)) , p_93)) && 0xD0A0F2B4L) ^ 1UL)) != p_96) > 0x77L) & p_96), p_567->g_118)) <= p_95) >= p_567->g_comm_values[p_567->tid]) || 0UL), p_95)) | l_173) & p_96) != 0L), p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 23))])), ((VECTOR(uint32_t, 2))(5UL)), p_567->g_164.s5, 4294967295UL, 0x6E04B37AL, ((VECTOR(uint32_t, 4))(0x2A7C57E4L)), 0x073549B0L, p_96, p_567->g_164.s0, p_96, 0x4E8CAA09L, 0x6BF440EAL)).s31e4)).wwwxxxwy)).s75)).yyxy, ((VECTOR(uint32_t, 4))(0x0988709DL)), ((VECTOR(uint32_t, 4))(1UL))))).yyxzyxxz, ((VECTOR(uint32_t, 8))(4294967292UL))))).s16, (uint32_t)p_96))), 0x608D486CL, 4294967295UL)).even))).xxxx))).xxyxxwzz))).s2604314677774576, ((VECTOR(uint32_t, 16))(9UL))))).sf, l_174)), p_567->g_38[1]))), FAKE_DIVERGE(p_567->local_2_offset, get_local_id(2), 10)))) > p_567->g_36) >= p_567->g_131[0]), p_567->g_65.sc));
    l_174 = (p_567->g_175 , 0x788535DFL);
    return p_95;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_comm_values[i] = 1;
    struct S2 c_568;
    struct S2* p_567 = &c_568;
    struct S2 c_569 = {
        (VECTOR(int16_t, 16))(0x5070L, (VECTOR(int16_t, 4))(0x5070L, (VECTOR(int16_t, 2))(0x5070L, 0x7E4DL), 0x7E4DL), 0x7E4DL, 0x5070L, 0x7E4DL, (VECTOR(int16_t, 2))(0x5070L, 0x7E4DL), (VECTOR(int16_t, 2))(0x5070L, 0x7E4DL), 0x5070L, 0x7E4DL, 0x5070L, 0x7E4DL), // p_567->g_5
        0xF3L, // p_567->g_23
        0x36L, // p_567->g_36
        {0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L}, // p_567->g_38
        (void*)0, // p_567->g_39
        2L, // p_567->g_42
        &p_567->g_42, // p_567->g_41
        (VECTOR(int32_t, 16))(0x2841158AL, (VECTOR(int32_t, 4))(0x2841158AL, (VECTOR(int32_t, 2))(0x2841158AL, 0x4CC4EFF4L), 0x4CC4EFF4L), 0x4CC4EFF4L, 0x2841158AL, 0x4CC4EFF4L, (VECTOR(int32_t, 2))(0x2841158AL, 0x4CC4EFF4L), (VECTOR(int32_t, 2))(0x2841158AL, 0x4CC4EFF4L), 0x2841158AL, 0x4CC4EFF4L, 0x2841158AL, 0x4CC4EFF4L), // p_567->g_65
        9UL, // p_567->g_74
        2UL, // p_567->g_105
        0UL, // p_567->g_107
        0x6841L, // p_567->g_118
        {0xACL,0xACL,0xACL,0xACL}, // p_567->g_131
        (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x58001A0E296350F6L), 0x58001A0E296350F6L), // p_567->g_159
        (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xC58545D7L), 0xC58545D7L), 0xC58545D7L, 4294967289UL, 0xC58545D7L), // p_567->g_164
        (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x1C95C5D0L), 0x1C95C5D0L), // p_567->g_166
        {0x08A37CDCL}, // p_567->g_175
        {-3L,5UL,1L}, // p_567->g_198
        0xE6520A05L, // p_567->g_219
        0L, // p_567->g_222
        0xCD69BB4EL, // p_567->g_223
        (VECTOR(int32_t, 2))(1L, 0L), // p_567->g_233
        1UL, // p_567->g_249
        &p_567->g_131[3], // p_567->g_265
        &p_567->g_265, // p_567->g_264
        (void*)0, // p_567->g_278
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x50FE5F7D3A1E4A67L), 0x50FE5F7D3A1E4A67L), // p_567->g_300
        {-1L}, // p_567->g_301
        0x263D7686L, // p_567->g_305
        (void*)0, // p_567->g_307
        &p_567->g_307, // p_567->g_306
        (-1L), // p_567->g_323
        (-1L), // p_567->g_335
        &p_567->g_335, // p_567->g_334
        (void*)0, // p_567->g_336
        0x0A01B54EL, // p_567->g_345
        (void*)0, // p_567->g_347
        0L, // p_567->g_363
        (void*)0, // p_567->g_373
        (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL), // p_567->g_399
        0x3EDA9BB5DE261065L, // p_567->g_488
        (void*)0, // p_567->g_529
        {-8L,1UL,0x1797E3E7L}, // p_567->g_538
        &p_567->g_538, // p_567->g_537
        0, // p_567->v_collective
        sequence_input[get_global_id(0)], // p_567->global_0_offset
        sequence_input[get_global_id(1)], // p_567->global_1_offset
        sequence_input[get_global_id(2)], // p_567->global_2_offset
        sequence_input[get_local_id(0)], // p_567->local_0_offset
        sequence_input[get_local_id(1)], // p_567->local_1_offset
        sequence_input[get_local_id(2)], // p_567->local_2_offset
        sequence_input[get_group_id(0)], // p_567->group_0_offset
        sequence_input[get_group_id(1)], // p_567->group_1_offset
        sequence_input[get_group_id(2)], // p_567->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[0][get_linear_local_id()])), // p_567->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_568 = c_569;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_567);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_567->g_5.s0, "p_567->g_5.s0", print_hash_value);
    transparent_crc(p_567->g_5.s1, "p_567->g_5.s1", print_hash_value);
    transparent_crc(p_567->g_5.s2, "p_567->g_5.s2", print_hash_value);
    transparent_crc(p_567->g_5.s3, "p_567->g_5.s3", print_hash_value);
    transparent_crc(p_567->g_5.s4, "p_567->g_5.s4", print_hash_value);
    transparent_crc(p_567->g_5.s5, "p_567->g_5.s5", print_hash_value);
    transparent_crc(p_567->g_5.s6, "p_567->g_5.s6", print_hash_value);
    transparent_crc(p_567->g_5.s7, "p_567->g_5.s7", print_hash_value);
    transparent_crc(p_567->g_5.s8, "p_567->g_5.s8", print_hash_value);
    transparent_crc(p_567->g_5.s9, "p_567->g_5.s9", print_hash_value);
    transparent_crc(p_567->g_5.sa, "p_567->g_5.sa", print_hash_value);
    transparent_crc(p_567->g_5.sb, "p_567->g_5.sb", print_hash_value);
    transparent_crc(p_567->g_5.sc, "p_567->g_5.sc", print_hash_value);
    transparent_crc(p_567->g_5.sd, "p_567->g_5.sd", print_hash_value);
    transparent_crc(p_567->g_5.se, "p_567->g_5.se", print_hash_value);
    transparent_crc(p_567->g_5.sf, "p_567->g_5.sf", print_hash_value);
    transparent_crc(p_567->g_23, "p_567->g_23", print_hash_value);
    transparent_crc(p_567->g_36, "p_567->g_36", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_567->g_38[i], "p_567->g_38[i]", print_hash_value);

    }
    transparent_crc(p_567->g_42, "p_567->g_42", print_hash_value);
    transparent_crc(p_567->g_65.s0, "p_567->g_65.s0", print_hash_value);
    transparent_crc(p_567->g_65.s1, "p_567->g_65.s1", print_hash_value);
    transparent_crc(p_567->g_65.s2, "p_567->g_65.s2", print_hash_value);
    transparent_crc(p_567->g_65.s3, "p_567->g_65.s3", print_hash_value);
    transparent_crc(p_567->g_65.s4, "p_567->g_65.s4", print_hash_value);
    transparent_crc(p_567->g_65.s5, "p_567->g_65.s5", print_hash_value);
    transparent_crc(p_567->g_65.s6, "p_567->g_65.s6", print_hash_value);
    transparent_crc(p_567->g_65.s7, "p_567->g_65.s7", print_hash_value);
    transparent_crc(p_567->g_65.s8, "p_567->g_65.s8", print_hash_value);
    transparent_crc(p_567->g_65.s9, "p_567->g_65.s9", print_hash_value);
    transparent_crc(p_567->g_65.sa, "p_567->g_65.sa", print_hash_value);
    transparent_crc(p_567->g_65.sb, "p_567->g_65.sb", print_hash_value);
    transparent_crc(p_567->g_65.sc, "p_567->g_65.sc", print_hash_value);
    transparent_crc(p_567->g_65.sd, "p_567->g_65.sd", print_hash_value);
    transparent_crc(p_567->g_65.se, "p_567->g_65.se", print_hash_value);
    transparent_crc(p_567->g_65.sf, "p_567->g_65.sf", print_hash_value);
    transparent_crc(p_567->g_74, "p_567->g_74", print_hash_value);
    transparent_crc(p_567->g_105, "p_567->g_105", print_hash_value);
    transparent_crc(p_567->g_107, "p_567->g_107", print_hash_value);
    transparent_crc(p_567->g_118, "p_567->g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_567->g_131[i], "p_567->g_131[i]", print_hash_value);

    }
    transparent_crc(p_567->g_159.x, "p_567->g_159.x", print_hash_value);
    transparent_crc(p_567->g_159.y, "p_567->g_159.y", print_hash_value);
    transparent_crc(p_567->g_159.z, "p_567->g_159.z", print_hash_value);
    transparent_crc(p_567->g_159.w, "p_567->g_159.w", print_hash_value);
    transparent_crc(p_567->g_164.s0, "p_567->g_164.s0", print_hash_value);
    transparent_crc(p_567->g_164.s1, "p_567->g_164.s1", print_hash_value);
    transparent_crc(p_567->g_164.s2, "p_567->g_164.s2", print_hash_value);
    transparent_crc(p_567->g_164.s3, "p_567->g_164.s3", print_hash_value);
    transparent_crc(p_567->g_164.s4, "p_567->g_164.s4", print_hash_value);
    transparent_crc(p_567->g_164.s5, "p_567->g_164.s5", print_hash_value);
    transparent_crc(p_567->g_164.s6, "p_567->g_164.s6", print_hash_value);
    transparent_crc(p_567->g_164.s7, "p_567->g_164.s7", print_hash_value);
    transparent_crc(p_567->g_166.x, "p_567->g_166.x", print_hash_value);
    transparent_crc(p_567->g_166.y, "p_567->g_166.y", print_hash_value);
    transparent_crc(p_567->g_166.z, "p_567->g_166.z", print_hash_value);
    transparent_crc(p_567->g_166.w, "p_567->g_166.w", print_hash_value);
    transparent_crc(p_567->g_175.f0, "p_567->g_175.f0", print_hash_value);
    transparent_crc(p_567->g_198.f0, "p_567->g_198.f0", print_hash_value);
    transparent_crc(p_567->g_198.f1, "p_567->g_198.f1", print_hash_value);
    transparent_crc(p_567->g_198.f2, "p_567->g_198.f2", print_hash_value);
    transparent_crc(p_567->g_219, "p_567->g_219", print_hash_value);
    transparent_crc(p_567->g_222, "p_567->g_222", print_hash_value);
    transparent_crc(p_567->g_223, "p_567->g_223", print_hash_value);
    transparent_crc(p_567->g_233.x, "p_567->g_233.x", print_hash_value);
    transparent_crc(p_567->g_233.y, "p_567->g_233.y", print_hash_value);
    transparent_crc(p_567->g_249, "p_567->g_249", print_hash_value);
    transparent_crc(p_567->g_300.x, "p_567->g_300.x", print_hash_value);
    transparent_crc(p_567->g_300.y, "p_567->g_300.y", print_hash_value);
    transparent_crc(p_567->g_300.z, "p_567->g_300.z", print_hash_value);
    transparent_crc(p_567->g_300.w, "p_567->g_300.w", print_hash_value);
    transparent_crc(p_567->g_301.f0, "p_567->g_301.f0", print_hash_value);
    transparent_crc(p_567->g_305, "p_567->g_305", print_hash_value);
    transparent_crc(p_567->g_323, "p_567->g_323", print_hash_value);
    transparent_crc(p_567->g_335, "p_567->g_335", print_hash_value);
    transparent_crc(p_567->g_345, "p_567->g_345", print_hash_value);
    transparent_crc(p_567->g_363, "p_567->g_363", print_hash_value);
    transparent_crc(p_567->g_399.x, "p_567->g_399.x", print_hash_value);
    transparent_crc(p_567->g_399.y, "p_567->g_399.y", print_hash_value);
    transparent_crc(p_567->g_488, "p_567->g_488", print_hash_value);
    transparent_crc(p_567->g_538.f0, "p_567->g_538.f0", print_hash_value);
    transparent_crc(p_567->g_538.f1, "p_567->g_538.f1", print_hash_value);
    transparent_crc(p_567->g_538.f2, "p_567->g_538.f2", print_hash_value);
    transparent_crc(p_567->v_collective, "p_567->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 88; i++)
            transparent_crc(p_567->l_special_values[i], "p_567->l_special_values[i]", print_hash_value);
    transparent_crc(p_567->l_comm_values[get_linear_local_id()], "p_567->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_567->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()], "p_567->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
