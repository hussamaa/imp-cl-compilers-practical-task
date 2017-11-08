// --atomics 31 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,85,5 -l 19,1,1
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

__constant uint32_t permutations[10][19] = {
{12,14,3,1,0,16,7,2,5,18,8,11,6,9,17,10,13,4,15}, // permutation 0
{16,9,15,18,5,8,17,1,13,0,3,12,7,14,11,2,10,6,4}, // permutation 1
{6,5,4,14,16,10,17,13,1,9,7,18,0,2,15,8,12,3,11}, // permutation 2
{15,12,18,4,8,2,5,13,6,11,17,0,10,16,7,1,9,14,3}, // permutation 3
{2,18,5,10,15,14,0,6,8,4,9,12,1,11,3,17,16,13,7}, // permutation 4
{18,11,5,3,8,10,0,7,2,9,12,17,16,13,1,14,4,6,15}, // permutation 5
{12,13,16,3,9,11,10,2,5,14,15,0,1,6,17,7,18,8,4}, // permutation 6
{15,0,9,8,2,3,14,5,6,10,12,16,18,13,17,4,1,11,7}, // permutation 7
{16,8,12,5,13,10,1,14,18,7,17,11,2,3,0,6,9,4,15}, // permutation 8
{5,16,12,4,15,1,2,7,18,0,8,13,14,6,17,10,11,9,3} // permutation 9
};

// Seed: 2719298504

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint32_t  f1;
   volatile uint64_t  f2;
   uint32_t  f3;
   uint16_t  f4;
};

struct S1 {
   int32_t  f0;
};

union U2 {
   int32_t  f0;
   int32_t  f1;
   int8_t * volatile  f2;
   uint32_t  f3;
   int32_t  f4;
};

union U3 {
   int32_t  f0;
};

struct S4 {
    VECTOR(int64_t, 8) g_18;
    union U3 g_26;
    VECTOR(int32_t, 2) g_30;
    union U3 *g_65;
    union U3 **g_64;
    int32_t * volatile g_72;
    struct S1 g_77;
    struct S1 * volatile g_76;
    struct S1 g_79;
    int32_t *g_302;
    int8_t g_305;
    int32_t ** volatile g_388;
    VECTOR(int32_t, 16) g_403;
    volatile VECTOR(int32_t, 16) g_404;
    volatile VECTOR(uint16_t, 16) g_405;
    uint32_t g_407;
    int16_t g_414;
    VECTOR(uint32_t, 2) g_418;
    uint8_t g_420;
    int32_t ** volatile g_444;
    VECTOR(uint16_t, 2) g_470;
    struct S0 g_473[5];
    volatile uint8_t g_481;
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
int8_t  func_1(struct S4 * p_484);
int32_t  func_8(int8_t  p_9, int32_t  p_10, uint32_t  p_11, int8_t * p_12, int8_t * p_13, struct S4 * p_484);
int8_t  func_19(uint64_t  p_20, int16_t  p_21, uint32_t  p_22, struct S4 * p_484);
union U3 * func_23(union U3 * p_24, struct S4 * p_484);
int32_t * func_35(int16_t  p_36, int8_t * p_37, struct S4 * p_484);
int64_t  func_38(union U3 ** p_39, int8_t * p_40, uint64_t  p_41, union U3  p_42, struct S1  p_43, struct S4 * p_484);
union U3 ** func_44(int64_t  p_45, union U3 * p_46, uint16_t  p_47, int32_t * p_48, struct S4 * p_484);
union U3 * func_51(union U3 ** p_52, struct S1  p_53, struct S4 * p_484);
union U3 ** func_54(union U3 * p_55, union U3 * p_56, uint32_t  p_57, uint32_t  p_58, struct S4 * p_484);
struct S1  func_66(int16_t  p_67, struct S1  p_68, struct S4 * p_484);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_484->g_18 p_484->g_26.f0 p_484->g_30 p_484->g_64 p_484->g_72 p_484->g_76 p_484->g_79 p_484->g_77.f0 p_484->g_65 p_484->g_302 p_484->g_26 p_484->g_305 p_484->g_388 p_484->g_403 p_484->g_404 p_484->g_405 p_484->g_407 p_484->g_418 p_484->g_420 p_484->g_414 p_484->g_444 p_484->g_comm_values p_484->g_470 p_484->g_473 p_484->g_481
 * writes: p_484->g_26.f0 p_484->g_72 p_484->g_77 p_484->g_64 p_484->g_79.f0 p_484->g_30 p_484->g_302 p_484->g_305 p_484->g_407 p_484->g_414 p_484->g_420 p_484->g_65 p_484->g_473.f4 p_484->g_481
 */
int8_t  func_1(struct S4 * p_484)
{ /* block id: 4 */
    int32_t l_14[6];
    VECTOR(int8_t, 8) l_17 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 4L), 4L), 4L, (-5L), 4L);
    union U3 **l_391 = &p_484->g_65;
    int32_t *l_392 = &p_484->g_77.f0;
    struct S1 *l_395 = (void*)0;
    int32_t l_398 = 1L;
    uint32_t l_399 = 2UL;
    int8_t *l_415 = (void*)0;
    VECTOR(uint8_t, 2) l_423 = (VECTOR(uint8_t, 2))(0UL, 0xCEL);
    uint32_t l_434 = 0UL;
    int32_t l_437 = (-9L);
    int32_t l_438 = (-6L);
    int32_t *l_454 = &l_438;
    int i;
    for (i = 0; i < 6; i++)
        l_14[i] = (-1L);
    if ((FAKE_DIVERGE(p_484->group_2_offset, get_group_id(2), 10) , ((*l_392) = (safe_sub_func_uint16_t_u_u(((GROUP_DIVERGE(2, 1) ^ (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((func_8(l_14[4], l_14[4], (((VECTOR(uint64_t, 4))(((safe_div_func_uint8_t_u_u((l_17.s3 && ((VECTOR(int64_t, 4))(p_484->g_18.s3310)).y), func_19(l_17.s6, l_17.s4, p_484->g_18.s5, p_484))) , (65535UL < ((safe_mul_func_uint8_t_u_u((l_391 == l_391), 0x64L)) < 0x3F9147FAL))), l_14[0], 1UL, 0xCBCCFBAA4664BDADL)).w | l_14[4]), &p_484->g_305, &p_484->g_305, p_484) > p_484->g_18.s3), p_484->g_18.s0)), 11))) , p_484->g_30.x), p_484->g_18.s1)))))
    { /* block id: 225 */
        int32_t *l_396 = &p_484->g_77.f0;
        int32_t *l_397[3][4] = {{&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0},{&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0},{&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0}};
        struct S1 **l_402 = &l_395;
        uint32_t *l_406 = &p_484->g_407;
        union U3 ***l_410 = &p_484->g_64;
        VECTOR(int32_t, 8) l_411 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int16_t *l_412 = (void*)0;
        int16_t *l_413 = &p_484->g_414;
        uint8_t *l_419 = &p_484->g_420;
        int32_t **l_427 = &l_392;
        int32_t ***l_426 = &l_427;
        int i, j;
        for (p_484->g_305 = (-15); (p_484->g_305 < 12); p_484->g_305 = safe_add_func_int64_t_s_s(p_484->g_305, 9))
        { /* block id: 228 */
            (*p_484->g_302) = (((void*)0 != l_395) | p_484->g_305);
        }
        l_399--;
        (*l_392) = ((((((*l_402) = &p_484->g_77) == &p_484->g_77) , ((*l_413) = ((*l_392) , (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((*p_484->g_302), 0x4C93C5DAL, 0x605681FBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(0x02E7FEB9L, 0x26641562L)).yyyy, ((VECTOR(int32_t, 4))((*l_392), 0x76ACC0AEL, 9L, 0x502DC4C7L))))).lo, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_484->g_403.s4cf22e3a02c0e177)).lo, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))((-6L), (-8L))).xyxxyyyxyxyxxxxy, ((VECTOR(int32_t, 8))(p_484->g_404.sa8f2cda6)).s0171260360260023))), (int32_t)((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_484->g_405.sbf3fc8e6)).s63)).xxyyxyyxyyyxyxxy)).sb > 0xFB36L) | ((*l_406)++)), (int32_t)(l_410 != (void*)0)))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(l_411.s2435013145520001)).even, (int32_t)((p_484->g_64 = &p_484->g_65) != (void*)0), (int32_t)(*p_484->g_302)))).s05)).xyyyyyyy))), ((VECTOR(int32_t, 8))(0x1BB26386L))))).s42))).xyyyyyyyyyxyyxxy, (int32_t)0x0C33A769L))).sd4, ((VECTOR(int32_t, 2))(0x1CE284FCL))))), 0x658A8E54L, 0L)), 0L)).s04)).even || (*l_392))))) , &p_484->g_305) != l_415);
        l_398 &= (safe_sub_func_uint64_t_u_u(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_484->g_418.xy)).xxyy)).x , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xDAL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((*l_419)--), ((*l_391) != (void*)0), 0UL, ((VECTOR(uint8_t, 4))(l_423.yxyx)), 1UL)).s40)), 0x12L)))).w) > (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-7L), (-2L))).yyyyxyyx)).s1 , (safe_sub_func_int8_t_s_s(((*l_392) | (**p_484->g_388)), ((((*l_426) = &p_484->g_302) != &p_484->g_302) && (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_484->g_18.s7, p_484->g_414)), 0)), ((((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(0x30L, 1L, 5L, ((VECTOR(int8_t, 2))(0x7BL, (-4L))), 0x5AL, ((*l_392) | l_434), ((VECTOR(int8_t, 8))(0L)), 0x01L)).s94e6, (int8_t)(-1L)))).w >= (*l_392)) != GROUP_DIVERGE(2, 1))))))))), p_484->g_18.s2));
    }
    else
    { /* block id: 240 */
        int32_t *l_435[5] = {&l_398,&l_398,&l_398,&l_398,&l_398};
        int16_t l_436 = 1L;
        uint64_t l_439[4];
        int i;
        for (i = 0; i < 4; i++)
            l_439[i] = 0x94EC478514BFBBA0L;
        (*l_391) = (*p_484->g_64);
        --l_439[2];
    }
    for (p_484->g_79.f0 = (-23); (p_484->g_79.f0 > (-18)); p_484->g_79.f0++)
    { /* block id: 246 */
        (*p_484->g_444) = ((*l_392) , (*p_484->g_388));
        for (l_434 = 0; (l_434 > 48); l_434++)
        { /* block id: 250 */
            if ((*l_392))
                break;
        }
    }
    for (l_399 = 29; (l_399 == 31); l_399 = safe_add_func_int64_t_s_s(l_399, 3))
    { /* block id: 256 */
        int32_t *l_455 = &l_438;
        VECTOR(uint64_t, 16) l_465 = (VECTOR(uint64_t, 16))(0xB1B95DD95DD5046CL, (VECTOR(uint64_t, 4))(0xB1B95DD95DD5046CL, (VECTOR(uint64_t, 2))(0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL), 0x8B55888D8BED2A8AL), 0x8B55888D8BED2A8AL, 0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL, (VECTOR(uint64_t, 2))(0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL), (VECTOR(uint64_t, 2))(0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL), 0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL, 0xB1B95DD95DD5046CL, 0x8B55888D8BED2A8AL);
        int32_t l_479[3];
        int i;
        for (i = 0; i < 3; i++)
            l_479[i] = 0x4F93FCC6L;
        for (l_398 = 0; (l_398 <= 16); l_398 = safe_add_func_int32_t_s_s(l_398, 6))
        { /* block id: 259 */
            int32_t l_476[3];
            int32_t *l_480[9];
            int i;
            for (i = 0; i < 3; i++)
                l_476[i] = 0x633EE555L;
            for (i = 0; i < 9; i++)
                l_480[i] = &p_484->g_79.f0;
            for (p_484->g_407 = 0; (p_484->g_407 != 47); ++p_484->g_407)
            { /* block id: 262 */
                int32_t **l_453[1][1][9] = {{{&l_392,&l_392,&l_392,&l_392,&l_392,&l_392,&l_392,&l_392,&l_392}}};
                VECTOR(int64_t, 4) l_460 = (VECTOR(int64_t, 4))(0x343972BEEA884BEBL, (VECTOR(int64_t, 2))(0x343972BEEA884BEBL, 0x1200287C63273EB8L), 0x1200287C63273EB8L);
                struct S1 **l_461[7][8][4] = {{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}},{{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395},{&l_395,&l_395,&l_395,&l_395}}};
                uint16_t *l_474 = (void*)0;
                uint16_t *l_475 = &p_484->g_473[4].f4;
                int8_t *l_477 = (void*)0;
                int8_t *l_478 = &p_484->g_305;
                int i, j, k;
                l_454 = (l_392 = (void*)0);
                (*p_484->g_444) = l_455;
                l_437 &= (l_479[0] ^= (safe_mul_func_uint8_t_u_u((((*l_478) = (((p_484->g_414 = ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(252UL, ((((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))(1L, 9L, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(l_460.wzxx)).odd, (int64_t)(l_461[2][1][0] == (((safe_add_func_uint64_t_u_u(((p_484->g_418.x != (safe_unary_minus_func_uint8_t_u(p_484->g_comm_values[p_484->tid]))) | ((VECTOR(uint64_t, 16))(l_465.sdf9228929b55c349)).sd), 0x364F09B6E65D76E7L)) <= ((safe_div_func_uint8_t_u_u(252UL, (safe_sub_func_int8_t_s_s(((((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(p_484->g_470.yy)).xyyxyyxxxyxxyxyy, (uint16_t)((*l_475) = ((GROUP_DIVERGE(1, 1) && ((VECTOR(uint16_t, 8))(0UL, ((safe_mul_func_uint8_t_u_u((*l_455), (0L || ((VECTOR(uint32_t, 4))(((p_484->g_473[4] , p_484->g_30.y) , 1UL), 0xE8A45D9FL, 0x50707BEBL, 1UL)).y))) & (*p_484->g_302)), FAKE_DIVERGE(p_484->local_2_offset, get_local_id(2), 10), 1UL, 0xA907L, 0xCAC0L, 65532UL, 1UL)).s0) == p_484->g_77.f0))))).s77, ((VECTOR(uint16_t, 2))(4UL))))).lo <= 65532UL) || l_476[2]), p_484->g_comm_values[p_484->tid])))) && p_484->g_18.s2)) , &p_484->g_76))))), (-1L), 0x6418CE9AA004C330L)).zyxxxxxyzzwxzxwx)).s7, 0x4924870A34D20ECBL, ((VECTOR(int64_t, 4))(0x4C59CD811DB24D3CL)))).even, (int64_t)l_476[0], (int64_t)4L))), 0x029FE28174EE4E32L, ((VECTOR(int64_t, 8))(0x1681F8693797A36CL)), 0x458CA349E4057D9DL, (-1L), 0x077C50E8E82AA7C7L)).s9f, ((VECTOR(int64_t, 2))(1L))))).lo != 0UL) , p_484->g_comm_values[p_484->tid]), 0xBEL, p_484->g_77.f0, 0x28L, ((VECTOR(uint8_t, 8))(0UL)), FAKE_DIVERGE(p_484->local_0_offset, get_local_id(0), 10), 0x44L, 1UL)).sa, 2)) | p_484->g_470.x)) <= (*l_455)) <= p_484->g_420)) & (-1L)), p_484->g_470.x)));
                (*p_484->g_444) = (*p_484->g_444);
            }
            p_484->g_481++;
        }
    }
    return p_484->g_18.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_302 p_484->g_79.f0
 * writes:
 */
int32_t  func_8(int8_t  p_9, int32_t  p_10, uint32_t  p_11, int8_t * p_12, int8_t * p_13, struct S4 * p_484)
{ /* block id: 222 */
    return (*p_484->g_302);
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_26.f0 p_484->g_30 p_484->g_18 p_484->g_64 p_484->g_72 p_484->g_76 p_484->g_79 p_484->g_77.f0 p_484->g_65 p_484->g_302 p_484->g_26 p_484->g_305 p_484->g_388
 * writes: p_484->g_26.f0 p_484->g_72 p_484->g_77 p_484->g_64 p_484->g_79.f0 p_484->g_30 p_484->g_302
 */
int8_t  func_19(uint64_t  p_20, int16_t  p_21, uint32_t  p_22, struct S4 * p_484)
{ /* block id: 5 */
    union U3 *l_25[4] = {&p_484->g_26,&p_484->g_26,&p_484->g_26,&p_484->g_26};
    union U3 **l_34 = &l_25[3];
    int32_t l_59 = 1L;
    union U3 ***l_303 = &p_484->g_64;
    int8_t *l_304 = &p_484->g_305;
    VECTOR(uint16_t, 4) l_306 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x9CFFL), 0x9CFFL);
    int16_t l_307 = 0x36A7L;
    int64_t l_308 = (-8L);
    int32_t **l_387 = (void*)0;
    int i;
    (*l_34) = func_23(l_25[0], p_484);
    (*p_484->g_388) = func_35(((((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(func_38(((*l_303) = func_44((safe_mul_func_int16_t_s_s(8L, p_484->g_30.x)), func_51(func_54(&p_484->g_26, &p_484->g_26, l_59, p_21, p_484), p_484->g_79, p_484), p_20, p_484->g_302, p_484)), l_304, l_306.z, (*p_484->g_65), p_484->g_79, p_484), p_21, (-6L), 6L, l_307, ((VECTOR(int64_t, 2))(0L)), 0x6C185808407F62ADL)).even, ((VECTOR(int64_t, 4))(0x57F0A6920E2189C1L)), ((VECTOR(int64_t, 4))(0x020056DA063D4E59L))))).y ^ l_308) > p_484->g_305), l_304, p_484);
    return p_484->g_30.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_26.f0
 * writes: p_484->g_26.f0
 */
union U3 * func_23(union U3 * p_24, struct S4 * p_484)
{ /* block id: 6 */
    int16_t l_33 = 0x1D95L;
    for (p_484->g_26.f0 = 0; (p_484->g_26.f0 <= (-17)); p_484->g_26.f0 = safe_sub_func_uint64_t_u_u(p_484->g_26.f0, 1))
    { /* block id: 9 */
        int32_t *l_29 = (void*)0;
        int32_t *l_31 = (void*)0;
        int32_t *l_32[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        l_33 &= 3L;
    }
    return &p_484->g_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_302 p_484->g_30
 * writes: p_484->g_79.f0 p_484->g_77.f0 p_484->g_30
 */
int32_t * func_35(int16_t  p_36, int8_t * p_37, struct S4 * p_484)
{ /* block id: 170 */
    int32_t l_309 = 7L;
    int32_t *l_310[9] = {&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0,&p_484->g_77.f0};
    int i;
    p_484->g_30.x ^= (p_484->g_77.f0 = ((*p_484->g_302) = (l_309 |= 0x126EB2AEL)));
    if ((atomic_inc(&p_484->g_atomic_input[31 * get_linear_group_id() + 2]) == 5))
    { /* block id: 176 */
        int32_t l_311[4][5] = {{0x7A8646D6L,(-6L),0x7A8646D6L,0x7A8646D6L,(-6L)},{0x7A8646D6L,(-6L),0x7A8646D6L,0x7A8646D6L,(-6L)},{0x7A8646D6L,(-6L),0x7A8646D6L,0x7A8646D6L,(-6L)},{0x7A8646D6L,(-6L),0x7A8646D6L,0x7A8646D6L,(-6L)}};
        int32_t l_382 = (-7L);
        int64_t l_383 = 4L;
        uint32_t l_384 = 0xE1E907EBL;
        int i, j;
        for (l_311[3][4] = (-3); (l_311[3][4] == 21); l_311[3][4] = safe_add_func_uint16_t_u_u(l_311[3][4], 3))
        { /* block id: 179 */
            VECTOR(int16_t, 2) l_314 = (VECTOR(int16_t, 2))(0x1B82L, 0x73ADL);
            VECTOR(int16_t, 16) l_315 = (VECTOR(int16_t, 16))(0x6B82L, (VECTOR(int16_t, 4))(0x6B82L, (VECTOR(int16_t, 2))(0x6B82L, 0x297AL), 0x297AL), 0x297AL, 0x6B82L, 0x297AL, (VECTOR(int16_t, 2))(0x6B82L, 0x297AL), (VECTOR(int16_t, 2))(0x6B82L, 0x297AL), 0x6B82L, 0x297AL, 0x6B82L, 0x297AL);
            VECTOR(int16_t, 2) l_316 = (VECTOR(int16_t, 2))(0x42D0L, (-4L));
            struct S0 l_317[5][10] = {{{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{3UL,0xDA652AF8L,18446744073709551613UL,4294967291UL,65532UL},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L}},{{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{3UL,0xDA652AF8L,18446744073709551613UL,4294967291UL,65532UL},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L}},{{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{3UL,0xDA652AF8L,18446744073709551613UL,4294967291UL,65532UL},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L}},{{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{3UL,0xDA652AF8L,18446744073709551613UL,4294967291UL,65532UL},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L}},{{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{3UL,0xDA652AF8L,18446744073709551613UL,4294967291UL,65532UL},{0xD591B4D0L,2UL,0xDCF13215F6A51E5CL,4294967289UL,0xDAF8L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L},{0x7CB2C078L,4294967289UL,9UL,0UL,65534UL},{0x19EA2F4CL,1UL,0x8904499DD3CF3D95L,0UL,0x3873L},{4294967295UL,0xBC7904C0L,0x534E740CD5797548L,0x90C90DBEL,0xFE40L}}};
            int64_t l_318 = 2L;
            uint64_t l_319 = 0xBC2BDD61A87ECD72L;
            int64_t l_320 = 0x0FE30266327F81C1L;
            VECTOR(int16_t, 4) l_321 = (VECTOR(int16_t, 4))(0x4E9DL, (VECTOR(int16_t, 2))(0x4E9DL, (-4L)), (-4L));
            int64_t l_322[4][7][2] = {{{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L}},{{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L}},{{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L}},{{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L},{0x29B9D1EB9EBAA961L,0x29B9D1EB9EBAA961L}}};
            int32_t l_323 = (-4L);
            uint32_t l_324[2];
            VECTOR(uint16_t, 8) l_325 = (VECTOR(uint16_t, 8))(0xA5F8L, (VECTOR(uint16_t, 4))(0xA5F8L, (VECTOR(uint16_t, 2))(0xA5F8L, 1UL), 1UL), 1UL, 0xA5F8L, 1UL);
            VECTOR(uint16_t, 2) l_326 = (VECTOR(uint16_t, 2))(1UL, 1UL);
            VECTOR(uint16_t, 4) l_327 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
            uint8_t l_348 = 1UL;
            int32_t l_349 = 0x0EE63E62L;
            VECTOR(int32_t, 8) l_350 = (VECTOR(int32_t, 8))(0x172E1B9EL, (VECTOR(int32_t, 4))(0x172E1B9EL, (VECTOR(int32_t, 2))(0x172E1B9EL, (-1L)), (-1L)), (-1L), 0x172E1B9EL, (-1L));
            VECTOR(int16_t, 16) l_351 = (VECTOR(int16_t, 16))(0x59ABL, (VECTOR(int16_t, 4))(0x59ABL, (VECTOR(int16_t, 2))(0x59ABL, 1L), 1L), 1L, 0x59ABL, 1L, (VECTOR(int16_t, 2))(0x59ABL, 1L), (VECTOR(int16_t, 2))(0x59ABL, 1L), 0x59ABL, 1L, 0x59ABL, 1L);
            VECTOR(int16_t, 4) l_352 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x10D6L), 0x10D6L);
            VECTOR(uint16_t, 4) l_353 = (VECTOR(uint16_t, 4))(0x649AL, (VECTOR(uint16_t, 2))(0x649AL, 0x7182L), 0x7182L);
            VECTOR(uint16_t, 16) l_354 = (VECTOR(uint16_t, 16))(0x1C2DL, (VECTOR(uint16_t, 4))(0x1C2DL, (VECTOR(uint16_t, 2))(0x1C2DL, 0xD6D1L), 0xD6D1L), 0xD6D1L, 0x1C2DL, 0xD6D1L, (VECTOR(uint16_t, 2))(0x1C2DL, 0xD6D1L), (VECTOR(uint16_t, 2))(0x1C2DL, 0xD6D1L), 0x1C2DL, 0xD6D1L, 0x1C2DL, 0xD6D1L);
            uint16_t l_355 = 1UL;
            union U2 l_356 = {-1L};/* VOLATILE GLOBAL l_356 */
            VECTOR(uint16_t, 16) l_357 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), 0UL), 0UL, 65530UL, 0UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), (VECTOR(uint16_t, 2))(65530UL, 0UL), 65530UL, 0UL, 65530UL, 0UL);
            uint32_t l_358 = 0x2FE50AA9L;
            int32_t l_359 = 0x53FFDE29L;
            VECTOR(int32_t, 4) l_360 = (VECTOR(int32_t, 4))(0x15AF0C2CL, (VECTOR(int32_t, 2))(0x15AF0C2CL, (-2L)), (-2L));
            int8_t l_361 = 0x1DL;
            VECTOR(int32_t, 16) l_362 = (VECTOR(int32_t, 16))(0x083EA3E7L, (VECTOR(int32_t, 4))(0x083EA3E7L, (VECTOR(int32_t, 2))(0x083EA3E7L, 0L), 0L), 0L, 0x083EA3E7L, 0L, (VECTOR(int32_t, 2))(0x083EA3E7L, 0L), (VECTOR(int32_t, 2))(0x083EA3E7L, 0L), 0x083EA3E7L, 0L, 0x083EA3E7L, 0L);
            uint8_t l_363 = 0xA8L;
            uint16_t l_364 = 65532UL;
            uint32_t l_365 = 0x48142810L;
            uint64_t l_366 = 0x243F397CFA197C6EL;
            int32_t l_367[4][8] = {{5L,5L,(-1L),(-1L),0x264203FDL,0x649FCB02L,(-1L),0L},{5L,5L,(-1L),(-1L),0x264203FDL,0x649FCB02L,(-1L),0L},{5L,5L,(-1L),(-1L),0x264203FDL,0x649FCB02L,(-1L),0L},{5L,5L,(-1L),(-1L),0x264203FDL,0x649FCB02L,(-1L),0L}};
            VECTOR(int32_t, 16) l_368 = (VECTOR(int32_t, 16))(0x63FA1C3DL, (VECTOR(int32_t, 4))(0x63FA1C3DL, (VECTOR(int32_t, 2))(0x63FA1C3DL, 0x3AD5C99DL), 0x3AD5C99DL), 0x3AD5C99DL, 0x63FA1C3DL, 0x3AD5C99DL, (VECTOR(int32_t, 2))(0x63FA1C3DL, 0x3AD5C99DL), (VECTOR(int32_t, 2))(0x63FA1C3DL, 0x3AD5C99DL), 0x63FA1C3DL, 0x3AD5C99DL, 0x63FA1C3DL, 0x3AD5C99DL);
            VECTOR(int32_t, 16) l_369 = (VECTOR(int32_t, 16))(0x60DCC9AEL, (VECTOR(int32_t, 4))(0x60DCC9AEL, (VECTOR(int32_t, 2))(0x60DCC9AEL, 0x3E786453L), 0x3E786453L), 0x3E786453L, 0x60DCC9AEL, 0x3E786453L, (VECTOR(int32_t, 2))(0x60DCC9AEL, 0x3E786453L), (VECTOR(int32_t, 2))(0x60DCC9AEL, 0x3E786453L), 0x60DCC9AEL, 0x3E786453L, 0x60DCC9AEL, 0x3E786453L);
            int16_t l_370 = 0x3629L;
            int32_t l_371[7][10][3] = {{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}},{{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L},{0x4C636CD6L,0x45A2E248L,0x45A2E248L}}};
            VECTOR(int16_t, 4) l_372 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0L), 0L);
            int8_t l_373 = 0x3BL;
            uint64_t l_374 = 0x98B4E3347DF2BA11L;
            int64_t l_375 = 0x1724FF903EC2F4BAL;
            VECTOR(int32_t, 4) l_376 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x511FC3DFL), 0x511FC3DFL);
            VECTOR(int32_t, 8) l_377 = (VECTOR(int32_t, 8))(0x34205D21L, (VECTOR(int32_t, 4))(0x34205D21L, (VECTOR(int32_t, 2))(0x34205D21L, (-10L)), (-10L)), (-10L), 0x34205D21L, (-10L));
            struct S0 l_378[10][2] = {{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}},{{0x4B74000FL,0UL,0x2968CAF494B84DC7L,0xB1160D82L,65531UL},{0x44C90896L,0xF1FCE55AL,0UL,4294967289UL,0x8B7BL}}};
            VECTOR(int32_t, 4) l_379 = (VECTOR(int32_t, 4))(0x67DBCE3DL, (VECTOR(int32_t, 2))(0x67DBCE3DL, 0x47EC8E80L), 0x47EC8E80L);
            VECTOR(int32_t, 4) l_380 = (VECTOR(int32_t, 4))(0x4565E48EL, (VECTOR(int32_t, 2))(0x4565E48EL, 3L), 3L);
            int32_t l_381 = (-2L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_324[i] = 4294967288UL;
            if (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(0x2A14L, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(l_314.xyyxyyxyxyxxxyxy)).s5217))), (-1L), 1L, ((VECTOR(int16_t, 2))(l_315.sa0)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_316.xx)))), ((l_317[2][0] , l_318) , (l_320 = l_319)), ((VECTOR(int16_t, 4))(l_321.wxxw)))).se5f9, ((VECTOR(uint16_t, 16))(l_322[1][2][0], (l_324[1] = l_323), 65526UL, ((VECTOR(uint16_t, 2))(l_325.s24)).lo, 0x3415L, 65534UL, 65535UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_326.yyxy)), ((VECTOR(uint16_t, 4))(l_327.xyxz)))), 0xD0ACL)).s494e))).x)
            { /* block id: 182 */
                struct S0 l_328 = {1UL,0x7D1F2434L,0UL,1UL,2UL};/* VOLATILE GLOBAL l_328 */
                int16_t l_329 = 0x0938L;
                int64_t l_330 = (-5L);
                int32_t l_331 = 0x44AD75C8L;
                int32_t l_332 = 0x06DD34E7L;
                int64_t l_333[10][3][6] = {{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}},{{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L},{(-9L),0x1AB4DA3A7C934FE4L,0x24840EA710935329L,0x1F4D44978F3150E2L,0x1AB4DA3A7C934FE4L,0x1F4D44978F3150E2L}}};
                int32_t l_334 = 0x0C037808L;
                VECTOR(int64_t, 8) l_335 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                VECTOR(int32_t, 16) l_336 = (VECTOR(int32_t, 16))(0x1DBB9EB2L, (VECTOR(int32_t, 4))(0x1DBB9EB2L, (VECTOR(int32_t, 2))(0x1DBB9EB2L, 1L), 1L), 1L, 0x1DBB9EB2L, 1L, (VECTOR(int32_t, 2))(0x1DBB9EB2L, 1L), (VECTOR(int32_t, 2))(0x1DBB9EB2L, 1L), 0x1DBB9EB2L, 1L, 0x1DBB9EB2L, 1L);
                uint16_t l_337 = 0UL;
                int i, j, k;
                l_330 &= (l_323 = (l_328 , l_329));
                l_323 &= (l_331 , (l_332 , l_333[4][2][0]));
                l_323 = (l_336.sd = (((VECTOR(uint32_t, 4))((l_334 &= 4294967295UL), ((VECTOR(uint32_t, 2))(4294967286UL, 0x177BA799L)), 4294967295UL)).y , (((VECTOR(int64_t, 16))(l_335.s1376017066251756)).se , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_336.sfda28336256f05e9)).sfd)).hi)));
                --l_337;
            }
            else
            { /* block id: 190 */
                int32_t l_340 = 0x182638C4L;
                for (l_340 = 0; (l_340 == 24); l_340 = safe_add_func_int64_t_s_s(l_340, 7))
                { /* block id: 193 */
                    VECTOR(uint32_t, 2) l_343 = (VECTOR(uint32_t, 2))(4294967293UL, 0x02638332L);
                    VECTOR(int8_t, 4) l_344 = (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0x56L), 0x56L);
                    uint32_t l_345 = 4294967294UL;
                    int64_t l_346[5];
                    int32_t l_347 = 0x19B38F61L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_346[i] = 0x76C835956C4BF73BL;
                    l_323 = 0x38D5E67BL;
                    l_345 |= (l_323 = (((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_343.xyxy)).wwzzyxzz)).s7472105204212475, ((VECTOR(uint32_t, 2))(0UL, 0xFE9D9399L)).xyyyyxxyxyxxyyyy))).sf , l_344.x));
                    l_323 |= l_346[3];
                    l_323 = l_347;
                }
                l_323 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x1D2B90F4L)).yyyyyxyy)).s3;
                l_323 &= 0L;
            }
            l_348 = (-1L);
            l_367[3][1] = ((l_365 ^= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_349, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_350.s27356551)).s47, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x37958AEDL, 1L))))))))), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x540CL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(7L, 0x1BD1L)), 1L, 0x1E08L)).zzzywwyz)), 0x3970L, 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(0x2C78L, (-4L), 0x0208L, 1L)).xyzxwyzxzwyywyxz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_351.s2a4e8abc02d9eef6)).odd)).s4401406512071620, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_352.zy)).xyxx)).zyzzwywxwzxyzyxw))).s44)), 0L, (-3L), (-1L))).hi)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(65529UL, 65530UL)).yxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_353.xwyzwwyw)).hi)), ((VECTOR(uint16_t, 2))(l_354.s93)).yxyx))), l_355, (l_354.s8 ^= (l_356 , 8UL)), 0UL, 0x8018L, (l_327.z = 65535UL), (l_358 ^= ((VECTOR(uint16_t, 2))(l_357.s9e)).hi), 0UL, 0x6B1EL, l_359, 65535UL, 0x3035L, 0xA934L)).lo))).s31))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_360.wwyyxyyz)), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))((-5L), l_361, ((VECTOR(int32_t, 4))(l_362.s8160)), (-1L), 0x7F4EFB91L)).s4463564212161265, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x49D8796CL, 5L)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(0x2C8770B6L, 0x132B4017L)), (int32_t)0x5270E7C3L, (int32_t)l_363)))))), (-5L), 2L)).y))).sa, l_364, 0x5A642409L, ((VECTOR(int32_t, 2))(0x60C6E544L)), ((VECTOR(int32_t, 2))(9L)), 0L)).se, (-9L), 1L, 0x6F79BACFL, 0L)).lo)).xwxyxxzyyxwzxwwy, ((VECTOR(int32_t, 16))((-9L)))))).hi, ((VECTOR(int32_t, 8))(0x632FFEEBL))))).s4) , l_366);
            l_381 ^= ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_368.sa52f6242)).s4375054450441340)).s068c, ((VECTOR(int32_t, 2))(l_369.sbb)).yyxx))), ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(2L, 0x364E87EBL, 0x2D30C9E9L, (-4L))).hi)))).yyxxxxyy)).s5241333674040036, ((VECTOR(int32_t, 8))(l_370, (-9L), (l_375 = (l_374 = (l_373 ^= (l_372.x = (l_371[1][4][0] , 0x52E68BA3L))))), ((VECTOR(int32_t, 4))((-4L), ((VECTOR(int32_t, 2))(0x298D81E2L, 0L)), 0x23AF846CL)), 0x1C280BE1L)).s4145724176247542))).sdb47))).zxyxyxwxwywzyzyw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-9L), ((VECTOR(int32_t, 4))(l_376.yzxx)), 0x65BA99D9L, 1L, (-1L))).odd)))).yywxxzwzyyzyyzyw))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_377.s64)), 0L, 0x0FE2853FL)).zwwzwyxy))).lo)).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-6L), (-9L), ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0x0B4DAB2DL)).yxxyyyyxxxyyxyyy)).s9 , l_378[4][0]) , 0x55D887FDL), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_379.wyxw)).even)).xxyx))), (-1L))))).s63, ((VECTOR(int32_t, 4))(l_380.zzzw)).hi))).lo;
        }
        l_384--;
        unsigned int result = 0;
        int l_311_i0, l_311_i1;
        for (l_311_i0 = 0; l_311_i0 < 4; l_311_i0++) {
            for (l_311_i1 = 0; l_311_i1 < 5; l_311_i1++) {
                result += l_311[l_311_i0][l_311_i1];
            }
        }
        result += l_382;
        result += l_383;
        result += l_384;
        atomic_add(&p_484->g_special_values[31 * get_linear_group_id() + 2], result);
    }
    else
    { /* block id: 216 */
        (1 + 1);
    }
    return p_484->g_302;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_38(union U3 ** p_39, int8_t * p_40, uint64_t  p_41, union U3  p_42, struct S1  p_43, struct S4 * p_484)
{ /* block id: 168 */
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U3 ** func_44(int64_t  p_45, union U3 * p_46, uint16_t  p_47, int32_t * p_48, struct S4 * p_484)
{ /* block id: 165 */
    return &p_484->g_65;
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_77.f0 p_484->g_65
 * writes: p_484->g_77.f0
 */
union U3 * func_51(union U3 ** p_52, struct S1  p_53, struct S4 * p_484)
{ /* block id: 27 */
    for (p_484->g_77.f0 = (-30); (p_484->g_77.f0 != (-28)); p_484->g_77.f0 = safe_add_func_uint8_t_u_u(p_484->g_77.f0, 6))
    { /* block id: 30 */
        if ((atomic_inc(&p_484->g_atomic_input[31 * get_linear_group_id() + 4]) == 4))
        { /* block id: 32 */
            int8_t l_82 = 0x4CL;
            int8_t l_83 = 0x7FL;
            int8_t l_84 = 0L;
            int64_t l_85 = 0x2D701FB03350090EL;
            int8_t l_86[5];
            uint64_t l_87 = 0x0F657D2A19D8D777L;
            union U2 l_90 = {-1L};/* VOLATILE GLOBAL l_90 */
            int32_t l_91 = 0x665F1F47L;
            int32_t l_92 = 6L;
            uint32_t l_93[7];
            VECTOR(int32_t, 8) l_94 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
            VECTOR(uint32_t, 2) l_95 = (VECTOR(uint32_t, 2))(0x195E1C37L, 0x16A71534L);
            int16_t l_96 = 0x2F93L;
            VECTOR(uint16_t, 16) l_97 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x6D09L), 0x6D09L), 0x6D09L, 0UL, 0x6D09L, (VECTOR(uint16_t, 2))(0UL, 0x6D09L), (VECTOR(uint16_t, 2))(0UL, 0x6D09L), 0UL, 0x6D09L, 0UL, 0x6D09L);
            VECTOR(uint32_t, 2) l_98 = (VECTOR(uint32_t, 2))(0x9556C6C4L, 1UL);
            uint32_t l_99[5] = {0x3354A90BL,0x3354A90BL,0x3354A90BL,0x3354A90BL,0x3354A90BL};
            VECTOR(uint32_t, 4) l_100 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0xE816D3FBL), 0xE816D3FBL);
            VECTOR(uint32_t, 4) l_101 = (VECTOR(uint32_t, 4))(0x46E721FBL, (VECTOR(uint32_t, 2))(0x46E721FBL, 4294967287UL), 4294967287UL);
            int32_t l_102 = 0x7E2F772BL;
            int8_t l_103 = 4L;
            int16_t l_210 = 0L;
            int32_t l_211 = (-1L);
            int i;
            for (i = 0; i < 5; i++)
                l_86[i] = 0x25L;
            for (i = 0; i < 7; i++)
                l_93[i] = 0x84030276L;
            l_93[5] |= (l_92 = ((l_87--) , (l_90.f4 = (l_90 , l_91))));
            if (((l_102 ^= (l_85 = ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(l_94.s20260117)).s5661321055067100, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(l_95.yy)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(l_96, ((VECTOR(uint16_t, 2))(0UL, 65531UL)).odd, 1UL, 9UL)).ywxywwwzzwwzxzwx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_97.s14bd)).hi)).yxyxxxyxxxyxxyxy))).s22, ((VECTOR(uint32_t, 8))(l_98.yyyxyyxx)).s71))).yxyxxyxx, (uint32_t)l_99[3]))).s61, (uint32_t)((VECTOR(uint32_t, 4))(l_100.zxww)).x, (uint32_t)((VECTOR(uint32_t, 4))(0xFF9F6C92L, 0xFEFE548CL, 4294967295UL, 0xA3A0A773L)).x))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_101.wwzywywy)).s73))))).xyxyxyxxyxxyxyxy))).s4)) , l_103))
            { /* block id: 39 */
                int32_t l_104 = (-10L);
                uint32_t l_121 = 0x6476FD32L;
                uint16_t l_122 = 0x3A17L;
                int32_t *l_123 = &l_104;
                int32_t *l_124[3];
                int32_t *l_125 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_124[i] = &l_104;
                for (l_104 = (-27); (l_104 >= 6); ++l_104)
                { /* block id: 42 */
                    VECTOR(uint16_t, 16) l_107 = (VECTOR(uint16_t, 16))(0x1BCEL, (VECTOR(uint16_t, 4))(0x1BCEL, (VECTOR(uint16_t, 2))(0x1BCEL, 0xE83BL), 0xE83BL), 0xE83BL, 0x1BCEL, 0xE83BL, (VECTOR(uint16_t, 2))(0x1BCEL, 0xE83BL), (VECTOR(uint16_t, 2))(0x1BCEL, 0xE83BL), 0x1BCEL, 0xE83BL, 0x1BCEL, 0xE83BL);
                    VECTOR(uint16_t, 2) l_108 = (VECTOR(uint16_t, 2))(0x15ACL, 0xBF82L);
                    int64_t l_109 = 4L;
                    uint32_t l_110 = 0x95366612L;
                    uint16_t l_113 = 65531UL;
                    VECTOR(uint8_t, 4) l_114 = (VECTOR(uint8_t, 4))(0x27L, (VECTOR(uint8_t, 2))(0x27L, 246UL), 246UL);
                    uint16_t l_115 = 0UL;
                    int64_t l_116 = 0x2D3D223BFC9F35A7L;
                    uint16_t l_117 = 0x7D2FL;
                    int8_t l_118 = 0x1EL;
                    int64_t l_119 = 0x68ED7A3FE0775E61L;
                    int8_t l_120 = 1L;
                    int i;
                    l_90.f4 |= (l_91 = 0x479296E5L);
                    l_90.f4 &= (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(0L, (-1L))).xxxy, ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(FAKE_DIVERGE(p_484->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 8))(l_107.sb0deca30)), 0xA6F1L, 1UL, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(5UL, ((VECTOR(uint16_t, 2))(l_108.xy)), 65529UL, (l_109 , 0xC5A2L), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x7553L, ((VECTOR(uint16_t, 2))(65529UL, 65535UL)), l_110, (++l_97.sb), l_113, 1UL, 9UL, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(l_114.yzwywywzxzwxxzyz)).lo, ((VECTOR(uint8_t, 16))(l_115, 0x0FL, 0xA1L, 255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(7UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((l_116 = 6UL), 247UL, 250UL, 1UL)).xzwyzywwxwzyyyzx)).s0d59)), (l_117 , l_118), 254UL, 4UL)).s65))).yxxy)).ywywyywx)).s62)), ((VECTOR(uint8_t, 4))(0x58L)), 1UL, ((VECTOR(uint8_t, 4))(0x64L)), 0xC8L)).odd))))).s37)), 2UL, 0x7AA3L)).wwyxywww)).s43)), 65532UL)))).s4107067313536366, ((VECTOR(uint16_t, 16))(1UL))))).sb, 0xFDC5L, 1UL, 0xA811L, 0x71A0L)).s1f, (uint16_t)l_119))).yxxyxyxyyxxyxxyy))).se9e3))).yxyxzxwy)).s0 , l_120);
                }
                l_125 = (l_124[1] = ((l_122 = l_121) , l_123));
            }
            else
            { /* block id: 52 */
                int32_t l_126 = 0x75B28349L;
                uint64_t l_176 = 0xB7E2CB60F77C65B1L;
                struct S1 l_206 = {0x50F9E0A5L};
                struct S1 l_207 = {0L};
                struct S1 l_208 = {-4L};
                uint16_t l_209 = 0x6B04L;
                l_90.f4 &= 0x5B394F6CL;
                for (l_126 = (-26); (l_126 == 11); l_126 = safe_add_func_uint8_t_u_u(l_126, 5))
                { /* block id: 56 */
                    uint16_t l_129 = 0x2F6DL;
                    VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(0x7B2E3071L, (VECTOR(int32_t, 4))(0x7B2E3071L, (VECTOR(int32_t, 2))(0x7B2E3071L, 0x1696208BL), 0x1696208BL), 0x1696208BL, 0x7B2E3071L, 0x1696208BL);
                    int i;
                    if (l_129)
                    { /* block id: 57 */
                        union U3 l_131 = {0x411142F3L};
                        union U3 *l_130 = &l_131;
                        union U3 *l_132 = (void*)0;
                        l_132 = l_130;
                    }
                    else
                    { /* block id: 59 */
                        int64_t l_133 = 5L;
                        union U2 l_134 = {0x772C9780L};/* VOLATILE GLOBAL l_134 */
                        l_90.f4 = l_133;
                        l_91 = (l_134 , 0x6211E331L);
                    }
                    if (((VECTOR(int32_t, 8))(l_135.s13025161)).s5)
                    { /* block id: 63 */
                        int64_t l_136 = 0x6A4A799C40DF3FCBL;
                        uint8_t l_137 = 0x31L;
                        struct S1 l_139 = {1L};
                        struct S1 *l_138[8] = {&l_139,&l_139,&l_139,&l_139,&l_139,&l_139,&l_139,&l_139};
                        int i;
                        l_137 |= l_136;
                        l_138[4] = l_138[5];
                    }
                    else
                    { /* block id: 66 */
                        int32_t l_141 = (-9L);
                        int32_t *l_140 = &l_141;
                        int32_t *l_142 = &l_141;
                        l_142 = l_140;
                    }
                    for (l_129 = (-26); (l_129 < 23); ++l_129)
                    { /* block id: 71 */
                        VECTOR(int32_t, 4) l_145 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x182BA979L), 0x182BA979L);
                        VECTOR(uint32_t, 16) l_146 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x49C445E4L), 0x49C445E4L), 0x49C445E4L, 0UL, 0x49C445E4L, (VECTOR(uint32_t, 2))(0UL, 0x49C445E4L), (VECTOR(uint32_t, 2))(0UL, 0x49C445E4L), 0UL, 0x49C445E4L, 0UL, 0x49C445E4L);
                        uint32_t l_147 = 0xBE003A25L;
                        union U3 l_148 = {-2L};
                        int32_t l_149 = (-9L);
                        int32_t l_150 = 0x2E58DA50L;
                        VECTOR(int32_t, 2) l_151 = (VECTOR(int32_t, 2))(0x78A6B184L, 0x4C3A41A2L);
                        VECTOR(int32_t, 2) l_152 = (VECTOR(int32_t, 2))(0x59091441L, (-6L));
                        VECTOR(int32_t, 4) l_153 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 8L), 8L);
                        int8_t l_154 = 0x1CL;
                        VECTOR(int32_t, 16) l_155 = (VECTOR(int32_t, 16))(0x2400A850L, (VECTOR(int32_t, 4))(0x2400A850L, (VECTOR(int32_t, 2))(0x2400A850L, 0x30EE1A22L), 0x30EE1A22L), 0x30EE1A22L, 0x2400A850L, 0x30EE1A22L, (VECTOR(int32_t, 2))(0x2400A850L, 0x30EE1A22L), (VECTOR(int32_t, 2))(0x2400A850L, 0x30EE1A22L), 0x2400A850L, 0x30EE1A22L, 0x2400A850L, 0x30EE1A22L);
                        struct S0 l_156 = {0UL,0x6B76923BL,18446744073709551615UL,0xFA72BBADL,6UL};/* VOLATILE GLOBAL l_156 */
                        VECTOR(int32_t, 4) l_157 = (VECTOR(int32_t, 4))(0x50E592CAL, (VECTOR(int32_t, 2))(0x50E592CAL, (-3L)), (-3L));
                        VECTOR(int32_t, 16) l_158 = (VECTOR(int32_t, 16))(0x7D5C82D1L, (VECTOR(int32_t, 4))(0x7D5C82D1L, (VECTOR(int32_t, 2))(0x7D5C82D1L, 0x754AD9C5L), 0x754AD9C5L), 0x754AD9C5L, 0x7D5C82D1L, 0x754AD9C5L, (VECTOR(int32_t, 2))(0x7D5C82D1L, 0x754AD9C5L), (VECTOR(int32_t, 2))(0x7D5C82D1L, 0x754AD9C5L), 0x7D5C82D1L, 0x754AD9C5L, 0x7D5C82D1L, 0x754AD9C5L);
                        VECTOR(int32_t, 2) l_159 = (VECTOR(int32_t, 2))(0x01CC2B1CL, 0L);
                        int32_t l_160 = 0x287A9B70L;
                        VECTOR(int32_t, 8) l_161 = (VECTOR(int32_t, 8))(0x545A47AEL, (VECTOR(int32_t, 4))(0x545A47AEL, (VECTOR(int32_t, 2))(0x545A47AEL, 5L), 5L), 5L, 0x545A47AEL, 5L);
                        uint16_t l_162 = 0x0F72L;
                        VECTOR(uint32_t, 2) l_163 = (VECTOR(uint32_t, 2))(1UL, 0x033E3335L);
                        uint32_t l_164 = 0x6DA58D7DL;
                        VECTOR(uint8_t, 8) l_165 = (VECTOR(uint8_t, 8))(0xA6L, (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 0x0FL), 0x0FL), 0x0FL, 0xA6L, 0x0FL);
                        uint32_t l_166 = 4294967295UL;
                        uint16_t l_167[2][1][3] = {{{65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL}}};
                        int32_t *l_168 = (void*)0;
                        int32_t *l_169 = (void*)0;
                        int i, j, k;
                        l_91 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_145.yy)).xyxyxxxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x54ED04B0L, 0x5E9004F7L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x04DB1C9DL, 0x1E51B7A5L)).xxxx, ((VECTOR(int32_t, 16))((-1L), (l_90.f4 = (((((VECTOR(uint32_t, 2))(l_146.s26)).hi , l_147) , l_148) , l_149)), 5L, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_135.s6 = 1L), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x8B2FF17DL, 4294967295UL)).yxxxyyyx)).s4 , l_150), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(l_151.xxyyyyxy)).s06, ((VECTOR(int32_t, 8))(l_152.yyyyxxyx)).s61))).yxxx)).odd, ((VECTOR(int32_t, 2))(l_153.xy))))), 4L, 0x532626EBL)), (int32_t)l_154))).y, 7L, ((VECTOR(int32_t, 2))(l_155.s11)), 0L, (-4L))).s45)), 0x010864EBL, 0x0E445E5FL)))))).yzyzwzxxwwwzxwzy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))((l_135.s6 |= (l_90.f4 = (l_156 , ((VECTOR(int32_t, 2))(l_157.wx)).lo))), 0L, 0x395E14E4L, 0x785E4FF7L)), ((VECTOR(int32_t, 4))(l_158.s4822))))).yyxxxwxxxywzzwwy))).s25, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_160 ^= ((VECTOR(int32_t, 4))(l_159.xxxy)).w), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_161.s4311260561567753)).sb8)), 0L)))).yyxzzwww)).hi, ((VECTOR(int32_t, 4))(l_162, l_163.y, 1L, 0x67C7D0B8L))))).odd))).yxyxxyxx, ((VECTOR(int32_t, 8))(0x39BFD8F9L))))), ((VECTOR(int32_t, 2))(0x75DAB0FEL)), (-2L), 4L, 0x36EB09B2L)).s83b4))))), (-2L), 7L)).s2167460444043307, ((VECTOR(int32_t, 16))(0x4C87407BL)), ((VECTOR(int32_t, 16))(1L))))).s9c)), ((VECTOR(int32_t, 2))(0x02C0EE4DL)), ((VECTOR(int32_t, 2))(1L))))), 0L, (-3L))).lo)).xxyyyxxx))), ((VECTOR(int32_t, 8))(1L))))).even)).y;
                        l_167[0][0][2] = (l_164 , (l_90.f4 &= ((l_166 |= ((VECTOR(uint8_t, 2))(l_165.s50)).odd) , (l_135.s7 = 0x75E1EA3AL))));
                        l_91 = 0x12986392L;
                        l_169 = l_168;
                    }
                    for (l_135.s6 = 0; (l_135.s6 != (-20)); l_135.s6 = safe_sub_func_uint64_t_u_u(l_135.s6, 2))
                    { /* block id: 87 */
                        int32_t l_173 = 0x3AC2E158L;
                        int32_t *l_172 = &l_173;
                        int32_t *l_174 = &l_173;
                        int32_t *l_175 = (void*)0;
                        l_175 = (l_174 = l_172);
                    }
                }
                if (l_176)
                { /* block id: 92 */
                    int64_t l_177 = (-1L);
                    uint8_t l_178 = 0x77L;
                    --l_178;
                    for (l_178 = 0; (l_178 < 51); l_178 = safe_add_func_int16_t_s_s(l_178, 6))
                    { /* block id: 96 */
                        uint64_t l_183[4] = {1UL,1UL,1UL,1UL};
                        int32_t l_185[10] = {0x52070758L,0x469C4AB7L,0x52070758L,0x52070758L,0x469C4AB7L,0x52070758L,0x52070758L,0x469C4AB7L,0x52070758L,0x52070758L};
                        int32_t *l_184[6][7][4] = {{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}},{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}},{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}},{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}},{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}},{{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]},{&l_185[7],&l_185[5],&l_185[7],&l_185[5]}}};
                        struct S1 l_186 = {1L};
                        struct S1 l_187 = {0x02BA4091L};
                        int i, j, k;
                        l_126 = l_183[1];
                        l_184[3][5][1] = l_184[3][5][1];
                        l_187 = l_186;
                    }
                    l_90.f4 ^= 0x2E4EC8C5L;
                }
                else
                { /* block id: 102 */
                    int32_t l_189 = 0x4436A30DL;
                    int32_t *l_188 = &l_189;
                    struct S1 l_201 = {7L};
                    struct S1 *l_200 = &l_201;
                    struct S1 *l_202 = &l_201;
                    struct S1 *l_203 = &l_201;
                    int32_t **l_204 = &l_188;
                    int32_t **l_205 = &l_188;
                    l_188 = (void*)0;
                    for (l_189 = 9; (l_189 < 17); l_189 = safe_add_func_int64_t_s_s(l_189, 3))
                    { /* block id: 106 */
                        uint32_t l_192 = 0xE5DE65A9L;
                        uint16_t l_195 = 1UL;
                        uint64_t l_198 = 0xB15D496808D468FBL;
                        uint32_t l_199 = 0x17803233L;
                        ++l_192;
                        --l_195;
                        l_188 = (void*)0;
                        l_199 ^= (l_90.f4 = l_198);
                    }
                    l_203 = (l_202 = l_200);
                    l_205 = l_204;
                }
                l_90.f4 = ((l_208 = (l_207 = l_206)) , l_209);
            }
            l_90.f4 = (l_210 , (l_91 |= 0x2973F10CL));
            if (l_211)
            { /* block id: 123 */
                int32_t l_212 = 0L;
                int32_t l_242 = 1L;
                struct S1 l_243 = {0x7C50761EL};
                struct S1 l_244 = {0x0576C494L};
                int64_t l_245 = 0x170FD25321BD9B32L;
                uint16_t l_246 = 8UL;
                uint8_t l_247[1][9][2];
                VECTOR(uint8_t, 16) l_248 = (VECTOR(uint8_t, 16))(0x96L, (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 0x07L), 0x07L), 0x07L, 0x96L, 0x07L, (VECTOR(uint8_t, 2))(0x96L, 0x07L), (VECTOR(uint8_t, 2))(0x96L, 0x07L), 0x96L, 0x07L, 0x96L, 0x07L);
                VECTOR(uint8_t, 2) l_249 = (VECTOR(uint8_t, 2))(0x96L, 7UL);
                int64_t l_250 = 0L;
                VECTOR(uint8_t, 4) l_251 = (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 0UL), 0UL);
                VECTOR(uint8_t, 4) l_252 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x09L), 0x09L);
                VECTOR(uint8_t, 2) l_253 = (VECTOR(uint8_t, 2))(0x48L, 0x00L);
                VECTOR(uint8_t, 2) l_254 = (VECTOR(uint8_t, 2))(1UL, 0x08L);
                VECTOR(uint8_t, 8) l_255 = (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0xEDL), 0xEDL), 0xEDL, 0x5FL, 0xEDL);
                int32_t l_256 = (-5L);
                int64_t l_257 = 8L;
                VECTOR(uint8_t, 4) l_258 = (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 247UL), 247UL);
                uint16_t l_259 = 0xB335L;
                uint32_t l_260 = 0x760C7681L;
                VECTOR(uint8_t, 2) l_261 = (VECTOR(uint8_t, 2))(0x15L, 0x5FL);
                VECTOR(uint8_t, 4) l_262 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL);
                uint32_t l_263[8][2];
                uint32_t l_264 = 2UL;
                uint8_t l_265 = 0UL;
                int64_t l_266 = 0L;
                VECTOR(int16_t, 16) l_267 = (VECTOR(int16_t, 16))(0x249AL, (VECTOR(int16_t, 4))(0x249AL, (VECTOR(int16_t, 2))(0x249AL, 9L), 9L), 9L, 0x249AL, 9L, (VECTOR(int16_t, 2))(0x249AL, 9L), (VECTOR(int16_t, 2))(0x249AL, 9L), 0x249AL, 9L, 0x249AL, 9L);
                union U3 **l_268 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_247[i][j][k] = 249UL;
                    }
                }
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_263[i][j] = 0x7F732D4BL;
                }
                for (l_212 = 29; (l_212 >= 14); l_212--)
                { /* block id: 126 */
                    uint64_t l_215[4];
                    uint16_t l_216 = 0xE8D2L;
                    VECTOR(uint64_t, 4) l_217 = (VECTOR(uint64_t, 4))(0x95513F453613173FL, (VECTOR(uint64_t, 2))(0x95513F453613173FL, 0x198E80C9BE5D540DL), 0x198E80C9BE5D540DL);
                    uint32_t l_218 = 0UL;
                    int8_t l_240 = 1L;
                    uint16_t l_241[6][1] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_215[i] = 0xC2E1771478F816ECL;
                    if ((((l_215[1] , (l_216 , FAKE_DIVERGE(p_484->global_0_offset, get_global_id(0), 10))) , ((VECTOR(uint64_t, 16))(l_217.zzzywwxxywyxxzzx)).s5) , (l_90.f4 = l_218)))
                    { /* block id: 128 */
                        union U2 l_219 = {0x39624B06L};/* VOLATILE GLOBAL l_219 */
                        union U3 l_220 = {4L};
                        uint64_t l_221 = 18446744073709551615UL;
                        int16_t l_222 = 0x459DL;
                        int8_t l_223 = 1L;
                        uint8_t l_224[4];
                        uint8_t l_227 = 0xF3L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_224[i] = 0UL;
                        l_221 ^= (l_219.f4 = (l_90.f4 = (l_219 , (l_220 , 0x1C2EB0A1L))));
                        --l_224[1];
                        l_91 &= l_227;
                    }
                    else
                    { /* block id: 134 */
                        int32_t l_229 = 5L;
                        int32_t *l_228 = &l_229;
                        int32_t *l_230 = &l_229;
                        int16_t l_231 = 0x45F0L;
                        int16_t l_232 = 0x0EFDL;
                        int8_t l_233 = 1L;
                        int32_t l_234 = 0x5D7D14D1L;
                        uint32_t l_235 = 0x533681B2L;
                        VECTOR(int32_t, 2) l_238 = (VECTOR(int32_t, 2))(0x67317A30L, 0x356DCD95L);
                        int32_t l_239 = 3L;
                        int i;
                        l_230 = l_228;
                        l_235--;
                        (*l_230) &= (l_91 ^= ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_238.yy)).yyxx, (int32_t)l_239))).z);
                    }
                    l_90.f4 ^= l_240;
                    l_90.f4 = l_241[5][0];
                }
                l_268 = (((l_96 = (l_210 = (((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0xDDB5L, (l_97.s3 ^= (((l_242 , (l_244 = l_243)) , l_245) , (l_247[0][3][0] = l_246))), 0xDE82L, 1UL)).odd)).xxxyyxxxyxxxyyyx, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_248.sfd)).xxxyxxyy, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_249.yyxx)))).ywzyxwyy, (uint8_t)l_250)))))).s34, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(8UL, 248UL, 1UL, 0xEBL)), ((VECTOR(uint8_t, 2))(l_251.zy)).xyyx))).even))))).yxyy)))).xxzywwxy, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(0xA7L, 1UL)), ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_252.xw)).xyyy)).yzywzywwzwzyyyyw, ((VECTOR(uint8_t, 4))(l_253.xyyx)).wzxxywzxzyzwxzyw))).sd7))).yyyyxxxy))).s1667471717265773)).even, (uint8_t)(l_266 = ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(l_254.xyyyyxxyyyxyxxyy)).s01, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 1UL)).xxyyxyyyyyxxyxyy)).even)).s21, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_255.s60677575)).s5001473023433452)).se2))), (uint8_t)(l_256 = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0xC5L, 255UL, 0xB7L, 0xEAL)).xxyzywwy)).s1), (uint8_t)((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(0x69L, 255UL)).yxxxyyxx, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(0UL, 9UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(1UL, 0xB2L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(0UL, 1UL)).xxyxxxyxyyyyyyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_257, ((VECTOR(uint8_t, 2))(l_258.zx)), l_259, l_260, 0x99L, 8UL, 255UL)).odd)).xwyyyywywyzzzwzy))).s8558)), 0xEFL, 0xF0L)).s41)), ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_261.yy)).yxxxxyxyxyyxyxyx)).s3eaf, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(0x46L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_262.xwyyxwyxxywwwzwy)).sa2)))), l_263[3][0], ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(0x14L)), ((VECTOR(uint8_t, 4))(9UL)))).even, ((VECTOR(uint8_t, 8))(0x44L)), ((VECTOR(uint8_t, 8))(0x13L))))).s76, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0xB4L))))).yxyx))), 0xB2L, ((VECTOR(uint8_t, 2))(1UL)), l_264, 0x59L, l_265, 247UL, 8UL)), ((VECTOR(uint8_t, 16))(249UL))))).odd, (uint8_t)247UL)))))).s7702747132154350, ((VECTOR(uint8_t, 16))(0xB3L))))).s4efd)).hi, ((VECTOR(uint8_t, 2))(0x48L))))), 0x1AL, 255UL)).lo, ((VECTOR(uint8_t, 2))(0xB1L)), ((VECTOR(uint8_t, 2))(255UL))))).even))).even)))).s3226175462156060, ((VECTOR(uint8_t, 16))(1UL))))), ((VECTOR(uint16_t, 16))(0x1627L))))).sd , l_267.sb))) , 0x51DAL) , (void*)0);
            }
            else
            { /* block id: 151 */
                VECTOR(int32_t, 2) l_269 = (VECTOR(int32_t, 2))(0x091E8048L, (-1L));
                VECTOR(int32_t, 2) l_270 = (VECTOR(int32_t, 2))((-4L), 0x21904DDFL);
                VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))(0x7ABD0C99L, (VECTOR(int32_t, 4))(0x7ABD0C99L, (VECTOR(int32_t, 2))(0x7ABD0C99L, 0L), 0L), 0L, 0x7ABD0C99L, 0L, (VECTOR(int32_t, 2))(0x7ABD0C99L, 0L), (VECTOR(int32_t, 2))(0x7ABD0C99L, 0L), 0x7ABD0C99L, 0L, 0x7ABD0C99L, 0L);
                VECTOR(int32_t, 4) l_272 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x08785A1AL), 0x08785A1AL);
                VECTOR(int32_t, 16) l_273 = (VECTOR(int32_t, 16))(0x6F746FDBL, (VECTOR(int32_t, 4))(0x6F746FDBL, (VECTOR(int32_t, 2))(0x6F746FDBL, 0x4F7A4B4DL), 0x4F7A4B4DL), 0x4F7A4B4DL, 0x6F746FDBL, 0x4F7A4B4DL, (VECTOR(int32_t, 2))(0x6F746FDBL, 0x4F7A4B4DL), (VECTOR(int32_t, 2))(0x6F746FDBL, 0x4F7A4B4DL), 0x6F746FDBL, 0x4F7A4B4DL, 0x6F746FDBL, 0x4F7A4B4DL);
                VECTOR(int16_t, 2) l_274 = (VECTOR(int16_t, 2))(0x6DA5L, 0x6999L);
                VECTOR(int16_t, 2) l_275 = (VECTOR(int16_t, 2))(6L, 0x1858L);
                VECTOR(int16_t, 16) l_276 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3245L), 0x3245L), 0x3245L, 1L, 0x3245L, (VECTOR(int16_t, 2))(1L, 0x3245L), (VECTOR(int16_t, 2))(1L, 0x3245L), 1L, 0x3245L, 1L, 0x3245L);
                VECTOR(int16_t, 16) l_277 = (VECTOR(int16_t, 16))(0x2EC3L, (VECTOR(int16_t, 4))(0x2EC3L, (VECTOR(int16_t, 2))(0x2EC3L, 0x606DL), 0x606DL), 0x606DL, 0x2EC3L, 0x606DL, (VECTOR(int16_t, 2))(0x2EC3L, 0x606DL), (VECTOR(int16_t, 2))(0x2EC3L, 0x606DL), 0x2EC3L, 0x606DL, 0x2EC3L, 0x606DL);
                uint32_t l_278 = 1UL;
                uint32_t l_279 = 0xBC9011C2L;
                VECTOR(int16_t, 16) l_280 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                uint32_t l_281[7][5] = {{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL},{4294967295UL,0x31A8F85EL,0xC200120BL,0x31A8F85EL,4294967295UL}};
                VECTOR(int16_t, 8) l_282 = (VECTOR(int16_t, 8))(0x7E26L, (VECTOR(int16_t, 4))(0x7E26L, (VECTOR(int16_t, 2))(0x7E26L, 0x621DL), 0x621DL), 0x621DL, 0x7E26L, 0x621DL);
                VECTOR(int16_t, 16) l_283 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int16_t, 2))((-1L), (-2L)), (VECTOR(int16_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
                VECTOR(int16_t, 8) l_284 = (VECTOR(int16_t, 8))(0x7888L, (VECTOR(int16_t, 4))(0x7888L, (VECTOR(int16_t, 2))(0x7888L, 0x5D6AL), 0x5D6AL), 0x5D6AL, 0x7888L, 0x5D6AL);
                VECTOR(int16_t, 2) l_285 = (VECTOR(int16_t, 2))(1L, 0x386AL);
                VECTOR(int16_t, 16) l_286 = (VECTOR(int16_t, 16))(0x705CL, (VECTOR(int16_t, 4))(0x705CL, (VECTOR(int16_t, 2))(0x705CL, 1L), 1L), 1L, 0x705CL, 1L, (VECTOR(int16_t, 2))(0x705CL, 1L), (VECTOR(int16_t, 2))(0x705CL, 1L), 0x705CL, 1L, 0x705CL, 1L);
                VECTOR(int16_t, 4) l_287 = (VECTOR(int16_t, 4))(0x5357L, (VECTOR(int16_t, 2))(0x5357L, 0x2EA5L), 0x2EA5L);
                VECTOR(int16_t, 8) l_288 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 4L), 4L), 4L, 0L, 4L);
                VECTOR(int16_t, 2) l_289 = (VECTOR(int16_t, 2))(1L, 8L);
                VECTOR(int32_t, 8) l_290 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                union U2 l_291 = {-5L};/* VOLATILE GLOBAL l_291 */
                uint8_t l_292 = 247UL;
                uint64_t l_293 = 18446744073709551606UL;
                uint32_t l_294 = 9UL;
                int16_t l_295 = 0x31B2L;
                int8_t l_296 = (-1L);
                uint32_t l_297 = 0UL;
                int8_t l_298 = 0x17L;
                int i, j;
                if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_269.xyxyyxxx)).s45)).yxyxyxxx)), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(l_270.xxxyxxxy)).s0240051252716535, ((VECTOR(int32_t, 4))(l_271.s2a8f)).yxwxzzwwyzywzzxw))).lo))).s35))).xyyxxyyyyyyyyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_272.zywy)), 5L, ((VECTOR(int32_t, 2))(l_273.s11)), 0x2A5B5B07L)).s1355716452710070, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(l_274.yyyxxyxxxyyxxyyy)).sfd6e, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_275.xxyyxxyxyxxxxyyx))))).s002e, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(l_276.s6af5)), ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(1L, 0x44BCL)))).yxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_277.s169b05e94a68fea3)))).s7f)).xyxy, ((VECTOR(int16_t, 2))(0x299EL, 0x6476L)).xxxy)))))).xwzwwzxywxxyzzxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_278, l_279, 0x155AL, 0x5448L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_280.s875b382d)).s77)), 0x295AL, 0L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(l_281[3][4], ((VECTOR(int16_t, 4))(l_282.s1272)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(l_283.s158a)).odd, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_284.s2651)).lo))))))).lo, 0L, 9L)).s31, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((l_210 = ((VECTOR(int16_t, 2))((-9L), 0x3637L)).odd), ((VECTOR(int16_t, 16))(l_285.xyxyyxyyxxyxxxyy)).s7, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(l_286.s818a9741)).lo))).lo)).yyxxyyyyyxxxyxyy)).s2, 0x4692L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(l_287.xzywyxyzzwyxyywy)).even))).s06, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(l_288.s44)), ((VECTOR(int16_t, 2))(l_289.xx))))), ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((l_83 = 0L) , l_290.s2), (l_291 , (l_292 , (l_293 , l_294))), ((VECTOR(int8_t, 4))(8L)), 9L, 0L)).s7100541767677126, ((VECTOR(uint8_t, 16))(255UL))))).s7f))).xyxxyxyxyyyxyxxy)).sa0, (int16_t)0x5DF6L, (int16_t)0x6073L))), ((VECTOR(int16_t, 2))((-1L)))))), 0x29BCL, 1L)))))))), ((VECTOR(int16_t, 8))((-5L)))))).s35))), (-3L), (-1L))), (-4L), l_295, ((VECTOR(int16_t, 2))(0x0D82L)), ((VECTOR(int16_t, 2))(0x2C9FL)), 0x0F18L, 0x0311L)).sa, l_296, l_297, l_298, ((VECTOR(int16_t, 2))(0x5734L)), (-1L), 0L)).even, ((VECTOR(int16_t, 4))(0x7148L))))).wyzyxxzw, ((VECTOR(int16_t, 8))(0x718DL))))).s74)).yxxx)).xyxxxyxxzxxxzywz))).s6911, ((VECTOR(int16_t, 4))(6L))))), ((VECTOR(int16_t, 4))(1L))))).hi, ((VECTOR(int16_t, 2))(0x4396L))))), ((VECTOR(uint16_t, 2))(0UL))))), 0x21B171C3L, 0x40915881L)).xzxzywww)).s6166173302410467, ((VECTOR(int32_t, 16))(1L))))).s93a6)).zzzzzxwzywzxwxyx))).sb)
                { /* block id: 154 */
                    int64_t l_299[5][9] = {{0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L,0x78BF0036B767B892L,1L,(-1L),1L,0x78BF0036B767B892L,0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L},{0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L,0x78BF0036B767B892L,1L,(-1L),1L,0x78BF0036B767B892L,0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L},{0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L,0x78BF0036B767B892L,1L,(-1L),1L,0x78BF0036B767B892L,0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L},{0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L,0x78BF0036B767B892L,1L,(-1L),1L,0x78BF0036B767B892L,0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L},{0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L,0x78BF0036B767B892L,1L,(-1L),1L,0x78BF0036B767B892L,0x7BE2BC12E71CDC07L,0x7BE2BC12E71CDC07L}};
                    int64_t l_300 = (-1L);
                    int i, j;
                    l_300 = l_299[0][2];
                }
                else
                { /* block id: 156 */
                    int32_t *l_301 = (void*)0;
                    l_301 = (void*)0;
                }
            }
            unsigned int result = 0;
            result += l_82;
            result += l_83;
            result += l_84;
            result += l_85;
            int l_86_i0;
            for (l_86_i0 = 0; l_86_i0 < 5; l_86_i0++) {
                result += l_86[l_86_i0];
            }
            result += l_87;
            result += l_90.f0;
            result += l_90.f1;
            result += l_90.f2;
            result += l_90.f3;
            result += l_90.f4;
            result += l_91;
            result += l_92;
            int l_93_i0;
            for (l_93_i0 = 0; l_93_i0 < 7; l_93_i0++) {
                result += l_93[l_93_i0];
            }
            result += l_94.s7;
            result += l_94.s6;
            result += l_94.s5;
            result += l_94.s4;
            result += l_94.s3;
            result += l_94.s2;
            result += l_94.s1;
            result += l_94.s0;
            result += l_95.y;
            result += l_95.x;
            result += l_96;
            result += l_97.sf;
            result += l_97.se;
            result += l_97.sd;
            result += l_97.sc;
            result += l_97.sb;
            result += l_97.sa;
            result += l_97.s9;
            result += l_97.s8;
            result += l_97.s7;
            result += l_97.s6;
            result += l_97.s5;
            result += l_97.s4;
            result += l_97.s3;
            result += l_97.s2;
            result += l_97.s1;
            result += l_97.s0;
            result += l_98.y;
            result += l_98.x;
            int l_99_i0;
            for (l_99_i0 = 0; l_99_i0 < 5; l_99_i0++) {
                result += l_99[l_99_i0];
            }
            result += l_100.w;
            result += l_100.z;
            result += l_100.y;
            result += l_100.x;
            result += l_101.w;
            result += l_101.z;
            result += l_101.y;
            result += l_101.x;
            result += l_102;
            result += l_103;
            result += l_210;
            result += l_211;
            atomic_add(&p_484->g_special_values[31 * get_linear_group_id() + 4], result);
        }
        else
        { /* block id: 160 */
            (1 + 1);
        }
    }
    return (*p_52);
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_18 p_484->g_64 p_484->g_30 p_484->g_72 p_484->g_76
 * writes: p_484->g_72 p_484->g_77
 */
union U3 ** func_54(union U3 * p_55, union U3 * p_56, uint32_t  p_57, uint32_t  p_58, struct S4 * p_484)
{ /* block id: 14 */
    struct S1 l_71 = {0x21A0E57CL};
    union U3 **l_78 = &p_484->g_65;
    for (p_57 = (-10); (p_57 > 22); p_57++)
    { /* block id: 17 */
        union U3 *l_63[7][2] = {{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26},{&p_484->g_26,&p_484->g_26}};
        union U3 **l_62[8] = {&l_63[4][0],&l_63[4][0],&l_63[4][0],&l_63[4][0],&l_63[4][0],&l_63[4][0],&l_63[4][0],&l_63[4][0]};
        int i, j;
        if (p_484->g_18.s4)
            break;
        return p_484->g_64;
    }
    (*p_484->g_76) = func_66((p_484->g_30.x , (((VECTOR(int8_t, 2))(0x50L, (-1L))).odd == (safe_lshift_func_uint8_t_u_s((p_484->g_18.s2 || p_58), 0)))), l_71, p_484);
    return l_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_484->g_72
 * writes: p_484->g_72
 */
struct S1  func_66(int16_t  p_67, struct S1  p_68, struct S4 * p_484)
{ /* block id: 21 */
    int32_t * volatile *l_73 = &p_484->g_72;
    int32_t *l_74 = (void*)0;
    struct S1 l_75[6][2] = {{{7L},{0L}},{{7L},{0L}},{{7L},{0L}},{{7L},{0L}},{{7L},{0L}},{{7L},{0L}}};
    int i, j;
    (*l_73) = p_484->g_72;
    (*l_73) = l_74;
    return l_75[2][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S4 c_485;
    struct S4* p_484 = &c_485;
    struct S4 c_486 = {
        (VECTOR(int64_t, 8))(0x311E2DB80EBBD485L, (VECTOR(int64_t, 4))(0x311E2DB80EBBD485L, (VECTOR(int64_t, 2))(0x311E2DB80EBBD485L, 0L), 0L), 0L, 0x311E2DB80EBBD485L, 0L), // p_484->g_18
        {1L}, // p_484->g_26
        (VECTOR(int32_t, 2))(1L, 0x30A11721L), // p_484->g_30
        &p_484->g_26, // p_484->g_65
        &p_484->g_65, // p_484->g_64
        (void*)0, // p_484->g_72
        {0x638B1AAEL}, // p_484->g_77
        &p_484->g_77, // p_484->g_76
        {1L}, // p_484->g_79
        &p_484->g_79.f0, // p_484->g_302
        0x53L, // p_484->g_305
        &p_484->g_302, // p_484->g_388
        (VECTOR(int32_t, 16))(0x5477A54CL, (VECTOR(int32_t, 4))(0x5477A54CL, (VECTOR(int32_t, 2))(0x5477A54CL, 8L), 8L), 8L, 0x5477A54CL, 8L, (VECTOR(int32_t, 2))(0x5477A54CL, 8L), (VECTOR(int32_t, 2))(0x5477A54CL, 8L), 0x5477A54CL, 8L, 0x5477A54CL, 8L), // p_484->g_403
        (VECTOR(int32_t, 16))(0x5AAEC5E3L, (VECTOR(int32_t, 4))(0x5AAEC5E3L, (VECTOR(int32_t, 2))(0x5AAEC5E3L, 0L), 0L), 0L, 0x5AAEC5E3L, 0L, (VECTOR(int32_t, 2))(0x5AAEC5E3L, 0L), (VECTOR(int32_t, 2))(0x5AAEC5E3L, 0L), 0x5AAEC5E3L, 0L, 0x5AAEC5E3L, 0L), // p_484->g_404
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_484->g_405
        4294967295UL, // p_484->g_407
        (-1L), // p_484->g_414
        (VECTOR(uint32_t, 2))(0x339FF6B9L, 0xDBCF43DDL), // p_484->g_418
        1UL, // p_484->g_420
        &p_484->g_302, // p_484->g_444
        (VECTOR(uint16_t, 2))(0xA2C4L, 0UL), // p_484->g_470
        {{0UL,4294967293UL,1UL,9UL,6UL},{0UL,4294967293UL,1UL,9UL,6UL},{0UL,4294967293UL,1UL,9UL,6UL},{0UL,4294967293UL,1UL,9UL,6UL},{0UL,4294967293UL,1UL,9UL,6UL}}, // p_484->g_473
        0xB9L, // p_484->g_481
        0, // p_484->v_collective
        sequence_input[get_global_id(0)], // p_484->global_0_offset
        sequence_input[get_global_id(1)], // p_484->global_1_offset
        sequence_input[get_global_id(2)], // p_484->global_2_offset
        sequence_input[get_local_id(0)], // p_484->local_0_offset
        sequence_input[get_local_id(1)], // p_484->local_1_offset
        sequence_input[get_local_id(2)], // p_484->local_2_offset
        sequence_input[get_group_id(0)], // p_484->group_0_offset
        sequence_input[get_group_id(1)], // p_484->group_1_offset
        sequence_input[get_group_id(2)], // p_484->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_484->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_485 = c_486;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_484);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_484->g_18.s0, "p_484->g_18.s0", print_hash_value);
    transparent_crc(p_484->g_18.s1, "p_484->g_18.s1", print_hash_value);
    transparent_crc(p_484->g_18.s2, "p_484->g_18.s2", print_hash_value);
    transparent_crc(p_484->g_18.s3, "p_484->g_18.s3", print_hash_value);
    transparent_crc(p_484->g_18.s4, "p_484->g_18.s4", print_hash_value);
    transparent_crc(p_484->g_18.s5, "p_484->g_18.s5", print_hash_value);
    transparent_crc(p_484->g_18.s6, "p_484->g_18.s6", print_hash_value);
    transparent_crc(p_484->g_18.s7, "p_484->g_18.s7", print_hash_value);
    transparent_crc(p_484->g_26.f0, "p_484->g_26.f0", print_hash_value);
    transparent_crc(p_484->g_30.x, "p_484->g_30.x", print_hash_value);
    transparent_crc(p_484->g_30.y, "p_484->g_30.y", print_hash_value);
    transparent_crc(p_484->g_77.f0, "p_484->g_77.f0", print_hash_value);
    transparent_crc(p_484->g_79.f0, "p_484->g_79.f0", print_hash_value);
    transparent_crc(p_484->g_305, "p_484->g_305", print_hash_value);
    transparent_crc(p_484->g_403.s0, "p_484->g_403.s0", print_hash_value);
    transparent_crc(p_484->g_403.s1, "p_484->g_403.s1", print_hash_value);
    transparent_crc(p_484->g_403.s2, "p_484->g_403.s2", print_hash_value);
    transparent_crc(p_484->g_403.s3, "p_484->g_403.s3", print_hash_value);
    transparent_crc(p_484->g_403.s4, "p_484->g_403.s4", print_hash_value);
    transparent_crc(p_484->g_403.s5, "p_484->g_403.s5", print_hash_value);
    transparent_crc(p_484->g_403.s6, "p_484->g_403.s6", print_hash_value);
    transparent_crc(p_484->g_403.s7, "p_484->g_403.s7", print_hash_value);
    transparent_crc(p_484->g_403.s8, "p_484->g_403.s8", print_hash_value);
    transparent_crc(p_484->g_403.s9, "p_484->g_403.s9", print_hash_value);
    transparent_crc(p_484->g_403.sa, "p_484->g_403.sa", print_hash_value);
    transparent_crc(p_484->g_403.sb, "p_484->g_403.sb", print_hash_value);
    transparent_crc(p_484->g_403.sc, "p_484->g_403.sc", print_hash_value);
    transparent_crc(p_484->g_403.sd, "p_484->g_403.sd", print_hash_value);
    transparent_crc(p_484->g_403.se, "p_484->g_403.se", print_hash_value);
    transparent_crc(p_484->g_403.sf, "p_484->g_403.sf", print_hash_value);
    transparent_crc(p_484->g_404.s0, "p_484->g_404.s0", print_hash_value);
    transparent_crc(p_484->g_404.s1, "p_484->g_404.s1", print_hash_value);
    transparent_crc(p_484->g_404.s2, "p_484->g_404.s2", print_hash_value);
    transparent_crc(p_484->g_404.s3, "p_484->g_404.s3", print_hash_value);
    transparent_crc(p_484->g_404.s4, "p_484->g_404.s4", print_hash_value);
    transparent_crc(p_484->g_404.s5, "p_484->g_404.s5", print_hash_value);
    transparent_crc(p_484->g_404.s6, "p_484->g_404.s6", print_hash_value);
    transparent_crc(p_484->g_404.s7, "p_484->g_404.s7", print_hash_value);
    transparent_crc(p_484->g_404.s8, "p_484->g_404.s8", print_hash_value);
    transparent_crc(p_484->g_404.s9, "p_484->g_404.s9", print_hash_value);
    transparent_crc(p_484->g_404.sa, "p_484->g_404.sa", print_hash_value);
    transparent_crc(p_484->g_404.sb, "p_484->g_404.sb", print_hash_value);
    transparent_crc(p_484->g_404.sc, "p_484->g_404.sc", print_hash_value);
    transparent_crc(p_484->g_404.sd, "p_484->g_404.sd", print_hash_value);
    transparent_crc(p_484->g_404.se, "p_484->g_404.se", print_hash_value);
    transparent_crc(p_484->g_404.sf, "p_484->g_404.sf", print_hash_value);
    transparent_crc(p_484->g_405.s0, "p_484->g_405.s0", print_hash_value);
    transparent_crc(p_484->g_405.s1, "p_484->g_405.s1", print_hash_value);
    transparent_crc(p_484->g_405.s2, "p_484->g_405.s2", print_hash_value);
    transparent_crc(p_484->g_405.s3, "p_484->g_405.s3", print_hash_value);
    transparent_crc(p_484->g_405.s4, "p_484->g_405.s4", print_hash_value);
    transparent_crc(p_484->g_405.s5, "p_484->g_405.s5", print_hash_value);
    transparent_crc(p_484->g_405.s6, "p_484->g_405.s6", print_hash_value);
    transparent_crc(p_484->g_405.s7, "p_484->g_405.s7", print_hash_value);
    transparent_crc(p_484->g_405.s8, "p_484->g_405.s8", print_hash_value);
    transparent_crc(p_484->g_405.s9, "p_484->g_405.s9", print_hash_value);
    transparent_crc(p_484->g_405.sa, "p_484->g_405.sa", print_hash_value);
    transparent_crc(p_484->g_405.sb, "p_484->g_405.sb", print_hash_value);
    transparent_crc(p_484->g_405.sc, "p_484->g_405.sc", print_hash_value);
    transparent_crc(p_484->g_405.sd, "p_484->g_405.sd", print_hash_value);
    transparent_crc(p_484->g_405.se, "p_484->g_405.se", print_hash_value);
    transparent_crc(p_484->g_405.sf, "p_484->g_405.sf", print_hash_value);
    transparent_crc(p_484->g_407, "p_484->g_407", print_hash_value);
    transparent_crc(p_484->g_414, "p_484->g_414", print_hash_value);
    transparent_crc(p_484->g_418.x, "p_484->g_418.x", print_hash_value);
    transparent_crc(p_484->g_418.y, "p_484->g_418.y", print_hash_value);
    transparent_crc(p_484->g_420, "p_484->g_420", print_hash_value);
    transparent_crc(p_484->g_470.x, "p_484->g_470.x", print_hash_value);
    transparent_crc(p_484->g_470.y, "p_484->g_470.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_484->g_473[i].f0, "p_484->g_473[i].f0", print_hash_value);
        transparent_crc(p_484->g_473[i].f1, "p_484->g_473[i].f1", print_hash_value);
        transparent_crc(p_484->g_473[i].f2, "p_484->g_473[i].f2", print_hash_value);
        transparent_crc(p_484->g_473[i].f3, "p_484->g_473[i].f3", print_hash_value);
        transparent_crc(p_484->g_473[i].f4, "p_484->g_473[i].f4", print_hash_value);

    }
    transparent_crc(p_484->g_481, "p_484->g_481", print_hash_value);
    transparent_crc(p_484->v_collective, "p_484->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 31; i++)
            transparent_crc(p_484->g_special_values[i + 31 * get_linear_group_id()], "p_484->g_special_values[i + 31 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_484->l_comm_values[get_linear_local_id()], "p_484->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_484->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_484->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
