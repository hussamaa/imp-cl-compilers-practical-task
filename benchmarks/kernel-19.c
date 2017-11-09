// --atomics 60 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 61,11,5 -l 61,1,1
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

__constant uint32_t permutations[10][61] = {
{15,24,18,43,4,55,22,37,27,52,6,51,35,9,30,46,1,40,59,11,26,7,20,54,10,53,50,45,16,21,39,28,36,2,38,23,0,44,17,48,13,33,57,47,42,3,34,56,31,14,29,58,12,49,41,32,60,19,8,25,5}, // permutation 0
{51,49,27,58,37,50,2,60,3,13,26,55,29,11,28,16,7,14,59,46,48,10,0,42,1,22,54,18,35,38,21,44,32,41,31,23,19,57,30,6,40,25,53,43,24,12,52,45,5,9,34,17,56,20,39,47,36,4,15,8,33}, // permutation 1
{40,17,34,16,51,20,19,58,39,48,0,7,44,10,1,26,4,32,53,25,55,41,12,35,43,30,14,50,5,37,2,21,45,52,3,33,57,28,13,24,46,11,60,42,6,27,23,8,47,29,9,36,18,56,15,54,49,22,38,31,59}, // permutation 2
{45,51,57,1,37,5,26,20,48,0,3,55,6,46,28,50,35,13,41,33,56,15,23,53,52,49,31,43,7,16,32,4,40,18,36,39,30,8,29,60,34,2,11,12,44,22,59,24,17,47,21,54,27,19,42,9,58,25,14,38,10}, // permutation 3
{25,58,0,42,37,60,43,15,13,11,39,55,52,33,3,18,28,10,48,12,38,51,49,29,46,47,32,59,26,1,54,8,16,57,56,44,23,45,41,34,17,5,27,35,31,4,6,36,53,30,21,14,20,2,9,24,22,19,40,7,50}, // permutation 4
{7,42,29,15,2,27,23,34,4,54,35,6,25,50,36,55,26,17,57,52,47,13,21,46,43,11,53,22,51,45,31,20,60,38,49,48,59,18,16,12,19,9,44,33,41,39,24,1,40,8,30,0,28,58,32,3,37,5,14,56,10}, // permutation 5
{22,13,48,8,46,18,5,57,21,20,17,10,41,0,3,30,35,51,58,45,44,55,47,53,2,7,39,54,15,24,1,43,16,11,9,38,33,42,36,14,60,26,29,12,56,32,34,50,40,19,52,37,49,25,59,31,23,4,6,27,28}, // permutation 6
{10,20,29,3,2,58,7,21,13,23,54,0,11,46,35,59,9,16,27,52,45,43,12,38,33,4,56,60,30,42,5,57,39,44,53,50,24,47,55,22,41,15,32,8,51,26,18,28,1,40,17,49,25,34,48,6,14,37,31,19,36}, // permutation 7
{17,42,41,59,31,7,55,24,1,54,0,18,49,11,26,29,21,27,14,12,48,13,40,50,6,57,5,9,46,39,22,43,47,20,28,4,51,45,38,34,53,33,37,25,52,32,15,30,10,36,19,23,60,35,3,58,16,56,2,8,44}, // permutation 8
{58,60,11,44,56,39,40,32,53,25,37,59,8,26,2,16,28,6,48,57,55,1,23,45,54,52,21,3,10,7,27,24,47,43,41,15,0,9,34,19,30,38,42,50,12,17,35,33,49,36,31,51,14,20,18,4,29,5,13,22,46} // permutation 9
};

// Seed: 4133689820

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint64_t g_3;
    int32_t g_7[8];
    int32_t g_9;
    int32_t * volatile g_8;
    int32_t g_37[9][2];
    volatile VECTOR(uint16_t, 16) g_48;
    uint64_t *g_83[7];
    uint64_t **g_82;
    VECTOR(uint8_t, 8) g_86;
    volatile VECTOR(int32_t, 8) g_87;
    int32_t g_99;
    uint32_t g_101;
    volatile VECTOR(int16_t, 16) g_179;
    uint16_t g_204;
    int32_t g_205;
    uint16_t g_211;
    VECTOR(int16_t, 8) g_241;
    int16_t g_258;
    uint16_t g_282;
    volatile uint32_t * volatile * volatile g_295;
    volatile VECTOR(uint64_t, 16) g_310;
    VECTOR(int8_t, 8) g_342;
    volatile VECTOR(int8_t, 8) g_363;
    volatile uint32_t g_374;
    volatile uint32_t *g_373;
    int32_t g_377;
    VECTOR(int16_t, 8) g_430;
    VECTOR(int16_t, 4) g_431;
    int16_t g_440[9];
    VECTOR(int8_t, 8) g_449;
    uint64_t ***g_464;
    uint64_t ****g_463;
    uint64_t ****g_467[7];
    volatile VECTOR(uint32_t, 4) g_505;
    int16_t g_518;
    int32_t * volatile g_520[6][10];
    VECTOR(uint16_t, 16) g_533;
    VECTOR(uint16_t, 4) g_536;
    VECTOR(uint16_t, 2) g_538;
    int32_t g_560;
    int8_t g_564[8];
    int32_t * volatile g_568[4];
    int32_t * volatile g_569;
    volatile VECTOR(int32_t, 8) g_573;
    VECTOR(int32_t, 2) g_574;
    uint32_t *g_595;
    uint32_t **g_594;
    VECTOR(uint16_t, 16) g_630;
    volatile uint64_t g_651;
    int32_t * volatile g_700;
    int16_t *g_707;
    int16_t **g_706;
    int16_t *** volatile g_705;
    uint64_t g_720;
    int32_t g_727;
    int32_t *g_783;
    int32_t ** volatile g_782;
    volatile uint16_t g_806[3];
    VECTOR(uint32_t, 2) g_807;
    int32_t g_816;
    uint8_t *g_822;
    VECTOR(uint32_t, 8) g_869;
    int32_t ** volatile g_875;
    volatile VECTOR(int32_t, 2) g_884;
    int32_t ** volatile g_886;
    volatile VECTOR(uint32_t, 2) g_905;
    uint32_t * volatile *g_913;
    uint32_t * volatile **g_912;
    uint32_t * volatile ** volatile *g_911;
    VECTOR(int64_t, 8) g_919;
    VECTOR(int64_t, 2) g_920;
    VECTOR(uint64_t, 2) g_931;
    int32_t ** volatile g_932;
    VECTOR(int64_t, 16) g_933;
    int32_t ** volatile g_966;
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
int16_t  func_1(struct S0 * p_967);
int8_t  func_14(int64_t  p_15, struct S0 * p_967);
uint8_t  func_26(int32_t * p_27, uint32_t  p_28, int64_t  p_29, int32_t  p_30, struct S0 * p_967);
uint32_t  func_31(int16_t  p_32, int64_t  p_33, uint64_t  p_34, int32_t * p_35, int32_t * p_36, struct S0 * p_967);
int32_t  func_38(int16_t  p_39, int32_t * p_40, uint8_t  p_41, int32_t * p_42, struct S0 * p_967);
int32_t * func_43(uint64_t * p_44, uint64_t * p_45, struct S0 * p_967);
int32_t * func_50(int8_t  p_51, struct S0 * p_967);
uint16_t  func_60(uint8_t  p_61, uint64_t * p_62, uint64_t * p_63, int64_t  p_64, uint8_t  p_65, struct S0 * p_967);
uint64_t * func_66(uint32_t  p_67, uint16_t  p_68, uint64_t ** p_69, uint8_t  p_70, uint64_t * p_71, struct S0 * p_967);
uint32_t  func_72(uint64_t * p_73, uint64_t * p_74, int8_t  p_75, uint16_t  p_76, struct S0 * p_967);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_967->g_3 p_967->g_8 p_967->g_9 p_967->g_7 p_967->g_37 p_967->g_48 p_967->g_comm_values p_967->g_82 p_967->g_86 p_967->g_87 p_967->g_83 p_967->g_99 p_967->g_179 p_967->g_205 p_967->l_comm_values p_967->g_241 p_967->g_282 p_967->g_295 p_967->g_211 p_967->g_310 p_967->g_342 p_967->g_363 p_967->g_373 p_967->g_430 p_967->g_431 p_967->g_440 p_967->g_449 p_967->g_463 p_967->g_374 p_967->g_464 p_967->g_505 p_967->g_518 p_967->g_533 p_967->g_536 p_967->g_538 p_967->g_258 p_967->g_101 p_967->g_569 p_967->g_594 p_967->g_574 p_967->g_595 p_967->g_630 p_967->g_651 p_967->g_700 p_967->g_705 p_967->g_720 p_967->g_727 p_967->g_707 p_967->g_377 p_967->g_564 p_967->g_560 p_967->g_782 p_967->g_783 p_967->g_806 p_967->g_807 p_967->g_816 p_967->g_822 p_967->g_869 p_967->g_204 p_967->g_875 p_967->g_886 p_967->g_905 p_967->g_911 p_967->g_919 p_967->g_920 p_967->g_931 p_967->g_932 p_967->g_933 p_967->g_966
 * writes: p_967->g_3 p_967->g_7 p_967->g_9 p_967->g_99 p_967->g_101 p_967->g_204 p_967->g_211 p_967->g_258 p_967->g_282 p_967->g_241 p_967->g_342 p_967->g_377 p_967->g_440 p_967->g_467 p_967->g_518 p_967->g_560 p_967->g_564 p_967->g_594 p_967->g_430 p_967->g_651 p_967->g_83 p_967->g_706 p_967->g_720 p_967->g_727 p_967->g_205 p_967->g_783 p_967->g_807 p_967->g_816 p_967->g_comm_values p_967->g_574 p_967->g_869 p_967->g_37 p_967->g_86
 */
int16_t  func_1(struct S0 * p_967)
{ /* block id: 4 */
    uint64_t *l_2 = &p_967->g_3;
    int32_t *l_6 = &p_967->g_7[5];
    uint64_t **l_49 = &l_2;
    VECTOR(uint32_t, 8) l_934 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0x977BAF44L), 0x977BAF44L), 0x977BAF44L, 3UL, 0x977BAF44L);
    int32_t l_935 = 0x1B760E17L;
    int32_t l_936 = 0x7AA38F52L;
    int32_t *l_937[6];
    uint16_t l_954[8][6] = {{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL},{65535UL,65535UL,65535UL,0UL,0x5B8AL,0UL}};
    uint16_t l_963 = 0x7479L;
    int32_t l_965 = (-1L);
    int i, j;
    for (i = 0; i < 6; i++)
        l_937[i] = &p_967->g_377;
    (*p_967->g_8) |= ((*l_6) = (((*l_2)--) < ((void*)0 != l_2)));
    (*p_967->g_700) = (l_936 = ((*l_6) = (l_935 = (safe_sub_func_uint16_t_u_u((((*p_967->g_8) || (safe_lshift_func_uint8_t_u_u((func_14(((safe_lshift_func_uint16_t_u_s(((-9L) == (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(((p_967->g_3 == (safe_mod_func_int64_t_s_s((*l_6), (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_26(l_6, (((*l_6) <= func_31(p_967->g_37[2][0], ((func_38(p_967->g_37[4][0], func_43(((*l_49) = ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_967->g_48.sb398)).z, ((*l_6) | p_967->g_7[7]))) , l_2)), &p_967->g_3, p_967), p_967->g_37[0][1], l_6, p_967) > 0x6C6064E4L) > GROUP_DIVERGE(0, 1)), p_967->g_449.s6, &p_967->g_7[6], l_6, p_967)) , 4294967295UL), p_967->g_536.z, p_967->g_538.y, p_967), 0L)), p_967->g_536.x))))) | p_967->g_86.s2), ((VECTOR(int64_t, 2))(0x75F86C1855CF1A2EL)), 0x5F1CC913AF8AC22CL, ((VECTOR(int64_t, 4))(0x2C37C2376E956004L)), 1L, ((VECTOR(int64_t, 4))(0L)), 0x49BB9E98D27D410EL, (-2L), 0x239893F95E0FD8DCL)).sb, p_967->g_533.sa))), 10)) ^ p_967->g_933.s5), p_967) | 0x3FL), l_934.s0))) && p_967->g_258), 0x9C8BL)))));
    for (p_967->g_560 = 0; (p_967->g_560 <= (-28)); p_967->g_560 = safe_sub_func_uint16_t_u_u(p_967->g_560, 5))
    { /* block id: 399 */
        uint32_t l_942 = 1UL;
        uint8_t *l_943 = (void*)0;
        uint8_t *l_944 = (void*)0;
        uint8_t *l_945 = (void*)0;
        uint8_t *l_946 = (void*)0;
        int32_t l_947 = 0x1DED342FL;
        uint8_t *l_948 = (void*)0;
        uint8_t *l_949 = (void*)0;
        uint8_t *l_950 = (void*)0;
        uint8_t *l_951 = (void*)0;
        uint32_t l_964 = 0x55DFA675L;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_967->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 61)), permutations[(safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((*p_967->g_700), ((((l_954[1][0] = (~(l_942 | (((--p_967->g_86.s1) <= p_967->g_430.s4) & (*l_6))))) || (safe_mod_func_int16_t_s_s((l_947 <= (safe_rshift_func_uint8_t_u_u((l_947 == (~((((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((-8L), ((safe_mod_func_uint8_t_u_u(l_942, 0xDBL)) | (safe_rshift_func_uint16_t_u_s((p_967->g_3 ^ p_967->g_7[5]), (*p_967->g_707)))), l_947, 0x2689L, 0x44A8L, ((VECTOR(int16_t, 2))(0x7DE0L)), 0x3D98L, 0L, 0L, 0x091CL, 6L, 6L, 0x0004L, 1L, 0x17CFL)).s50d7)).xwzzxzyzxwxyxxxy, (int16_t)(*p_967->g_707), (int16_t)0x5FD6L))), ((VECTOR(int16_t, 16))(0x7A47L))))).s4c, ((VECTOR(uint16_t, 2))(0xB5E2L))))).lo , (*l_6)) >= l_963))), p_967->g_727))), l_947))) != l_964) && (*p_967->g_707)))) >= (*l_6)) != 4294967295UL), 10))][(safe_mod_func_uint32_t_u_u(p_967->tid, 61))]));
        (*l_6) ^= ((VECTOR(int32_t, 2))(0x31A3ACFFL, (-1L))).hi;
        return l_965;
    }
    (*p_967->g_966) = &l_936;
    return (*p_967->g_707);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_14(int64_t  p_15, struct S0 * p_967)
{ /* block id: 391 */
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_564 p_967->g_505 p_967->g_440 p_967->g_205 p_967->g_707 p_967->g_258 p_967->g_449 p_967->g_101 p_967->g_630 p_967->g_9 p_967->g_377 p_967->g_464 p_967->g_82 p_967->g_83 p_967->g_3 p_967->g_282 p_967->g_533 p_967->g_99 p_967->g_374 p_967->g_560 p_967->g_905 p_967->g_911 p_967->g_919 p_967->g_920 p_967->g_869 p_967->g_931 p_967->g_463 p_967->g_37 p_967->g_932
 * writes: p_967->g_205 p_967->g_211 p_967->g_9 p_967->g_377 p_967->g_282 p_967->g_258 p_967->g_560 p_967->g_869 p_967->g_37 p_967->g_783
 */
uint8_t  func_26(int32_t * p_27, uint32_t  p_28, int64_t  p_29, int32_t  p_30, struct S0 * p_967)
{ /* block id: 382 */
    int32_t *l_903 = &p_967->g_99;
    VECTOR(uint32_t, 16) l_904 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 4294967295UL), 4294967295UL), 4294967295UL, 8UL, 4294967295UL, (VECTOR(uint32_t, 2))(8UL, 4294967295UL), (VECTOR(uint32_t, 2))(8UL, 4294967295UL), 8UL, 4294967295UL, 8UL, 4294967295UL);
    VECTOR(uint32_t, 16) l_906 = (VECTOR(uint32_t, 16))(0x88D07106L, (VECTOR(uint32_t, 4))(0x88D07106L, (VECTOR(uint32_t, 2))(0x88D07106L, 0x2888CBA5L), 0x2888CBA5L), 0x2888CBA5L, 0x88D07106L, 0x2888CBA5L, (VECTOR(uint32_t, 2))(0x88D07106L, 0x2888CBA5L), (VECTOR(uint32_t, 2))(0x88D07106L, 0x2888CBA5L), 0x88D07106L, 0x2888CBA5L, 0x88D07106L, 0x2888CBA5L);
    uint32_t ***l_910 = &p_967->g_594;
    uint32_t ****l_909 = &l_910;
    int64_t *l_914 = (void*)0;
    int64_t *l_915 = (void*)0;
    int64_t *l_916 = (void*)0;
    int64_t *l_917[1];
    int32_t l_918 = 0L;
    VECTOR(uint64_t, 8) l_921 = (VECTOR(uint64_t, 8))(0xF30EA7DE6B171000L, (VECTOR(uint64_t, 4))(0xF30EA7DE6B171000L, (VECTOR(uint64_t, 2))(0xF30EA7DE6B171000L, 0UL), 0UL), 0UL, 0xF30EA7DE6B171000L, 0UL);
    uint32_t *l_924 = (void*)0;
    uint32_t *l_925 = (void*)0;
    uint32_t *l_926[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_917[i] = (void*)0;
    l_903 = func_50(p_967->g_564[2], p_967);
    p_967->g_37[8][0] &= ((p_29 && ((*l_903) && ((((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_904.s68)).xxxxxxxyyyxyyxxx)).sc7)).xyxyxyyyxyyxxxxy, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(p_967->g_905.xy)).yxxy, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(l_906.s48be03e6)).s2413427427376416, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967289UL, 0xBE52FE6BL)).xyyyxxxyyyxyxxxx)).even)).s4247643762034240))))).s31cb))).yxwwwyzywxwzyzxz))).s2 < ((VECTOR(uint32_t, 16))(0xE1472F43L, (0x801F04ABL >= (((*p_967->g_707) = ((safe_mod_func_int64_t_s_s(((l_918 &= ((*l_903) || (l_909 == p_967->g_911))) ^ (((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 8))(p_967->g_919.s53500640)).s0511053073433366, ((VECTOR(int64_t, 4))((-8L), ((VECTOR(int64_t, 2))(p_967->g_920.yx)), 0x5CED5502A877E548L)).zyxwxywzxxxwyxwy))).s7 > ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 8))(6UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_921.s5341)).lo)).xxxx)))).odd)), ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 9L)).yxxxyxyx)).even)).w, ((p_967->g_869.s2++) < (p_28++)))) , 1UL), 0x983F381482E388CDL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_967->g_931.xyxx)).even)), 0xF28736C8520A39D3L)).lo, ((VECTOR(uint64_t, 2))(3UL, 0xA17373F48548BD40L)).yxyy))), ((0x13L < 255UL) > 18446744073709551615UL), ((VECTOR(uint64_t, 2))(0xCC8C0D49ABEDF9CDL)), 0xA96DA603CAA18422L)).s05)).yxyy)), 0x483D9B3B7BABB578L, (****p_967->g_463), 0xB343AE426A8F82CDL, 9UL, 0x8B8A199815D5A8C6L, 0xD81F1DF5C468441EL, 1UL, 1UL, p_28, 18446744073709551615UL, 0x593668E4C62B2AEFL)).s8540)).y)), (*l_903))) == 0x0BC3L)) >= p_30)), ((VECTOR(uint32_t, 2))(4294967294UL)), ((VECTOR(uint32_t, 2))(0x7D724207L)), ((VECTOR(uint32_t, 2))(0x12C439A3L)), 0UL, ((VECTOR(uint32_t, 2))(0UL)), 4294967291UL, ((VECTOR(uint32_t, 2))(0xE0383968L)), 2UL, 0x1E4A8C50L)).s3) , p_29))) | 0x57F7L);
    (*p_967->g_932) = &l_918;
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_700 p_967->g_886 p_967->g_7 p_967->g_205 p_967->g_241
 * writes: p_967->g_282 p_967->g_816 p_967->g_9 p_967->g_205 p_967->g_783
 */
uint32_t  func_31(int16_t  p_32, int64_t  p_33, uint64_t  p_34, int32_t * p_35, int32_t * p_36, struct S0 * p_967)
{ /* block id: 361 */
    int32_t *l_882 = &p_967->g_7[5];
    int32_t l_900 = 0x16FBC367L;
    int32_t l_902 = 0x4FB75912L;
    for (p_32 = (-9); (p_32 >= 4); p_32 = safe_add_func_int16_t_s_s(p_32, 5))
    { /* block id: 364 */
        int16_t ***l_894 = &p_967->g_706;
        int32_t l_895 = (-7L);
        for (p_967->g_282 = 0; (p_967->g_282 < 12); p_967->g_282++)
        { /* block id: 367 */
            int32_t *l_885 = &p_967->g_205;
            int16_t ***l_892 = &p_967->g_706;
            int16_t ****l_891 = &l_892;
            VECTOR(int8_t, 2) l_893 = (VECTOR(int8_t, 2))(0x6AL, 0x12L);
            uint16_t l_901 = 0UL;
            int i;
            for (p_967->g_816 = 9; (p_967->g_816 != (-21)); p_967->g_816 = safe_sub_func_int8_t_s_s(p_967->g_816, 3))
            { /* block id: 370 */
                int32_t **l_883 = &l_882;
                (*p_967->g_700) = 0x64941C05L;
                (*l_883) = l_882;
            }
            (*l_885) = ((VECTOR(int32_t, 4))(p_967->g_884.yxxy)).z;
            (*p_967->g_886) = p_35;
            (*l_885) = (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((((*l_891) = &p_967->g_706) == ((p_34 < ((VECTOR(int8_t, 8))(l_893.yyxyyyyy)).s1) , l_894)) <= l_895), (((((*l_882) >= (-1L)) == (safe_mul_func_uint8_t_u_u(((0L || (~(((((*l_885) >= (&p_967->g_374 != p_35)) , 0x64L) && 0UL) <= p_34))) , 249UL), l_900))) < p_32) > l_901))) , p_967->g_241.s2), p_33));
        }
    }
    l_902 = (*p_35);
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_538 p_967->g_806 p_967->g_807 p_967->g_205 p_967->g_99 p_967->g_86 p_967->g_536 p_967->g_707 p_967->g_258 p_967->g_564 p_967->g_816 p_967->g_822 p_967->g_241 p_967->g_569 p_967->g_9 p_967->g_518 p_967->g_783 p_967->g_7 p_967->g_373 p_967->g_374 p_967->g_869 p_967->g_204 p_967->g_875
 * writes: p_967->g_807 p_967->g_816 p_967->g_comm_values p_967->g_574 p_967->g_258 p_967->g_518 p_967->g_440 p_967->g_205 p_967->g_99 p_967->g_783
 */
int32_t  func_38(int16_t  p_39, int32_t * p_40, uint8_t  p_41, int32_t * p_42, struct S0 * p_967)
{ /* block id: 305 */
    int32_t *l_784 = (void*)0;
    int32_t *l_785[8][1][9] = {{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}},{{&p_967->g_37[2][0],&p_967->g_560,&p_967->g_99,&p_967->g_7[5],&p_967->g_560,&p_967->g_7[5],&p_967->g_99,&p_967->g_560,&p_967->g_37[2][0]}}};
    uint32_t l_786 = 2UL;
    VECTOR(int8_t, 8) l_793 = (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 0x41L), 0x41L), 0x41L, 0x2AL, 0x41L);
    uint8_t *l_804 = (void*)0;
    VECTOR(int32_t, 8) l_805 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L);
    int32_t l_812 = (-1L);
    int32_t l_813 = 0x29E4D017L;
    uint64_t l_814 = 18446744073709551615UL;
    uint32_t *l_815[1];
    int32_t l_817 = 0x18125F95L;
    int64_t *l_818 = (void*)0;
    int64_t *l_819 = (void*)0;
    int64_t *l_820 = (void*)0;
    int64_t *l_821[7][2];
    int32_t l_823 = (-1L);
    int16_t *l_872 = &p_967->g_518;
    int16_t *l_873 = &p_967->g_440[1];
    uint32_t l_874 = 0x5A8F05A6L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_815[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_821[i][j] = (void*)0;
    }
    l_786--;
    if ((safe_div_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(l_793.s0102236600047212)).s13, ((VECTOR(int8_t, 2))(8L, 0x75L))))), (safe_lshift_func_int8_t_s_u((0xB8L <= p_967->g_538.x), (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (((((+(GROUP_DIVERGE(1, 1) >= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((l_804 == ((p_967->g_comm_values[p_967->tid] = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(l_805.s04442313)).s24, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(p_967->g_806[1], 4294967294UL, (p_967->g_816 &= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_967->g_807.xxxy)), (p_967->g_807.x = (safe_lshift_func_uint8_t_u_s((((((safe_add_func_uint64_t_u_u(((-1L) != (*p_40)), (0x2260D46BL >= (((((p_967->g_86.s2 || (l_812 > p_967->g_536.w)) > 0x43L) > 7L) ^ (*p_967->g_707)) <= 0x311BL)))) | p_967->g_564[0]) && p_967->g_99) || l_813) > l_814), p_39))), ((VECTOR(uint32_t, 2))(0xF3A5B3DEL)), 4294967295UL)).even)).xzyywywx)).odd)).y), ((VECTOR(uint32_t, 2))(4294967293UL)), p_39, 0UL, 4294967295UL)).s41, ((VECTOR(uint32_t, 2))(3UL))))).yxyyyxyxyyxxxxyx)).s5be6)).odd))), 0x3965C5F9CE718A31L, 0x4327F109DFF3644BL)), ((VECTOR(int64_t, 4))(0x2D57BA66B68D506FL))))).even)).xyxyyyyy, ((VECTOR(int64_t, 8))(8L))))), p_967->g_564[5], (-1L), 0x719A975B822C337CL, l_817, 0x499B5A7846EBE89EL, 1L, (-9L), 0x54034827833E0B7FL)).s5) , p_967->g_822)) == p_41), p_967->g_241.s2)) >= p_41), p_39)))) && l_823) || (*p_967->g_569)) , 0x5FC238BCDC9D9BB5L) > p_39))) == 0x19F8121DL), (-1L))))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0L)), 0x7DL)))).s7, 255UL)) < p_967->g_518) && FAKE_DIVERGE(p_967->group_1_offset, get_group_id(1), 10)), (*p_967->g_783))))
    { /* block id: 310 */
        return (*p_42);
    }
    else
    { /* block id: 312 */
        if ((atomic_inc(&p_967->l_atomic_input[1]) == 3))
        { /* block id: 314 */
            int32_t l_824[10][6][4] = {{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}},{{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)},{0x5070E4F6L,0x5070E4F6L,(-10L),(-1L)}}};
            int32_t *l_856 = &l_824[1][0][2];
            int32_t *l_857 = &l_824[3][3][0];
            int i, j, k;
            for (l_824[1][0][2] = 29; (l_824[1][0][2] == (-15)); l_824[1][0][2]--)
            { /* block id: 317 */
                int32_t l_827 = 1L;
                VECTOR(int32_t, 4) l_838 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x45942FA1L), 0x45942FA1L);
                int8_t l_839 = 0x1EL;
                VECTOR(uint16_t, 16) l_840 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x18CBL), 0x18CBL), 0x18CBL, 0UL, 0x18CBL, (VECTOR(uint16_t, 2))(0UL, 0x18CBL), (VECTOR(uint16_t, 2))(0UL, 0x18CBL), 0UL, 0x18CBL, 0UL, 0x18CBL);
                uint32_t l_853 = 0xC30D278FL;
                int i;
                for (l_827 = 23; (l_827 < 11); l_827 = safe_sub_func_int8_t_s_s(l_827, 5))
                { /* block id: 320 */
                    VECTOR(int32_t, 2) l_830 = (VECTOR(int32_t, 2))(0x2012EB58L, 0x35B82198L);
                    int64_t l_831 = (-10L);
                    int i;
                    if ((l_831 &= ((VECTOR(int32_t, 16))(l_830.xyxyyyyyyyxxxxxx)).sb))
                    { /* block id: 322 */
                        uint16_t l_832 = 0x8016L;
                        uint32_t l_833 = 1UL;
                        uint32_t l_834 = 0xDBE2C497L;
                        int32_t l_835[1][8][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                        int i, j, k;
                        l_835[0][5][0] = (l_834 = (l_833 = (l_830.y &= l_832)));
                    }
                    else
                    { /* block id: 327 */
                        int32_t l_837[3][8] = {{5L,0x173BA977L,2L,0x5ED840EEL,0x173BA977L,0x5ED840EEL,2L,0x173BA977L},{5L,0x173BA977L,2L,0x5ED840EEL,0x173BA977L,0x5ED840EEL,2L,0x173BA977L},{5L,0x173BA977L,2L,0x5ED840EEL,0x173BA977L,0x5ED840EEL,2L,0x173BA977L}};
                        int32_t *l_836[5][9] = {{&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4]},{&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4]},{&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4]},{&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4]},{&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4],&l_837[1][4]}};
                        int i, j;
                        l_836[0][1] = (void*)0;
                    }
                }
                l_840.sc = ((l_838.y = 2UL) , l_839);
                for (l_840.sf = 0; (l_840.sf == 2); l_840.sf = safe_add_func_int16_t_s_s(l_840.sf, 7))
                { /* block id: 335 */
                    VECTOR(int32_t, 2) l_843 = (VECTOR(int32_t, 2))(0x628D99E8L, 7L);
                    int32_t l_844 = 0x42EF1358L;
                    int i;
                    l_827 = (l_838.z |= ((VECTOR(int32_t, 8))(l_843.yyyyyxxy)).s0);
                    l_827 ^= l_844;
                    for (l_843.x = 0; (l_843.x >= (-8)); --l_843.x)
                    { /* block id: 341 */
                        int32_t l_847 = 0x7F40B4CBL;
                        uint32_t l_848 = 0xEFEF8284L;
                        int8_t l_849[1];
                        uint32_t l_850 = 0UL;
                        int32_t *l_851 = &l_847;
                        int32_t *l_852[3][2] = {{&l_847,&l_847},{&l_847,&l_847},{&l_847,&l_847}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_849[i] = 0x50L;
                        l_852[0][1] = (l_847 , (l_851 = (((l_844 = l_848) , (l_849[0] , l_850)) , (void*)0)));
                    }
                }
                l_853++;
            }
            l_857 = l_856;
            unsigned int result = 0;
            int l_824_i0, l_824_i1, l_824_i2;
            for (l_824_i0 = 0; l_824_i0 < 10; l_824_i0++) {
                for (l_824_i1 = 0; l_824_i1 < 6; l_824_i1++) {
                    for (l_824_i2 = 0; l_824_i2 < 4; l_824_i2++) {
                        result += l_824[l_824_i0][l_824_i1][l_824_i2];
                    }
                }
            }
            atomic_add(&p_967->l_special_values[1], result);
        }
        else
        { /* block id: 350 */
            (1 + 1);
        }
    }
    (*p_967->g_783) = ((safe_sub_func_uint32_t_u_u(p_39, ((((*l_873) = (safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s(((*l_872) &= (safe_add_func_uint32_t_u_u((*p_967->g_373), (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_s(((*p_42) && (*p_40)), (((*p_967->g_707) |= (((VECTOR(uint32_t, 4))(p_967->g_869.s1032)).w == (0L > ((*p_967->g_783) != ((safe_mod_func_uint8_t_u_u(0x9CL, ((*p_40) || (p_967->g_574.y = (p_39 ^ p_967->g_204))))) , GROUP_DIVERGE(2, 1)))))) <= p_41))) > 0UL)))))), 0x082CL)) | (-6L)), 0x7A3EFA6215DCCCF2L))) > 3UL) & 0x76985850L))) , l_874);
    (*p_967->g_875) = &l_817;
    return (*p_42);
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_3 p_967->g_9 p_967->g_comm_values p_967->g_82 p_967->g_86 p_967->g_8 p_967->g_87 p_967->g_83 p_967->g_99 p_967->g_179 p_967->g_48 p_967->g_37 p_967->g_205 p_967->l_comm_values p_967->g_241 p_967->g_282 p_967->g_295 p_967->g_211 p_967->g_7 p_967->g_310 p_967->g_342 p_967->g_363 p_967->g_373 p_967->g_430 p_967->g_431 p_967->g_440 p_967->g_449 p_967->g_463 p_967->g_374 p_967->g_464 p_967->g_505 p_967->g_518 p_967->g_533 p_967->g_536 p_967->g_538 p_967->g_258 p_967->g_101 p_967->g_569 p_967->g_594 p_967->g_574 p_967->g_595 p_967->g_630 p_967->g_651 p_967->g_700 p_967->g_705 p_967->g_720 p_967->g_727 p_967->g_707 p_967->g_377 p_967->g_564 p_967->g_560 p_967->g_782 p_967->g_783
 * writes: p_967->g_9 p_967->g_99 p_967->g_101 p_967->g_204 p_967->g_211 p_967->g_258 p_967->g_282 p_967->g_241 p_967->g_342 p_967->g_377 p_967->g_440 p_967->g_467 p_967->g_518 p_967->g_560 p_967->g_564 p_967->g_594 p_967->g_430 p_967->g_651 p_967->g_83 p_967->g_706 p_967->g_720 p_967->g_727 p_967->g_205 p_967->g_783
 */
int32_t * func_43(uint64_t * p_44, uint64_t * p_45, struct S0 * p_967)
{ /* block id: 9 */
    uint32_t l_58 = 4294967293UL;
    int32_t l_59 = 0L;
    uint64_t *l_77[8][5][6] = {{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}},{{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3},{&p_967->g_3,&p_967->g_3,(void*)0,&p_967->g_3,&p_967->g_3,&p_967->g_3}}};
    uint32_t *l_100 = &p_967->g_101;
    uint8_t l_685 = 0x2CL;
    int8_t *l_726 = (void*)0;
    int i, j, k;
    (*p_967->g_782) = func_50((p_967->g_727 ^= ((safe_div_func_uint8_t_u_u(p_967->g_3, (1L & ((safe_div_func_int16_t_s_s((l_59 = (safe_rshift_func_uint8_t_u_u(0x53L, l_58))), func_60(l_58, &p_967->g_3, func_66((((*l_100) = func_72(((l_58 || p_967->g_9) , &p_967->g_3), l_77[2][1][5], p_967->g_comm_values[p_967->tid], l_58, p_967)) , 0x1F98D321L), l_58, &p_967->g_83[1], l_58, p_45, p_967), l_685, l_58, p_967))) || l_685)))) <= 0x614995C7B05007E1L)), p_967);
    return (*p_967->g_782);
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_205 p_967->g_505 p_967->g_440 p_967->g_707 p_967->g_258 p_967->g_449 p_967->g_101 p_967->g_630 p_967->g_9 p_967->g_377 p_967->g_464 p_967->g_82 p_967->g_83 p_967->g_3 p_967->g_282 p_967->g_564 p_967->g_574 p_967->g_373 p_967->g_374 p_967->g_533 p_967->g_99 p_967->g_560
 * writes: p_967->g_205 p_967->g_211 p_967->g_9 p_967->g_377 p_967->g_282 p_967->g_258 p_967->g_560
 */
int32_t * func_50(int8_t  p_51, struct S0 * p_967)
{ /* block id: 280 */
    uint64_t l_730 = 1UL;
    int32_t *l_731 = &p_967->g_205;
    VECTOR(uint8_t, 2) l_737 = (VECTOR(uint8_t, 2))(6UL, 255UL);
    int64_t *l_739 = (void*)0;
    VECTOR(int32_t, 4) l_740 = (VECTOR(int32_t, 4))(0x6B9333E4L, (VECTOR(int32_t, 2))(0x6B9333E4L, 0x792C1BB7L), 0x792C1BB7L);
    int16_t l_755 = (-6L);
    int32_t *l_757 = &p_967->g_377;
    int32_t **l_758 = &l_731;
    uint16_t *l_767 = &p_967->g_282;
    int32_t l_776 = 0x2E167F80L;
    VECTOR(uint8_t, 8) l_777 = (VECTOR(uint8_t, 8))(0x5BL, (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0x55L), 0x55L), 0x55L, 0x5BL, 0x55L);
    int32_t *l_778 = &p_967->g_205;
    int32_t *l_779 = &p_967->g_9;
    int32_t *l_780[10][5] = {{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99},{&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99,&p_967->g_99}};
    uint8_t l_781[4] = {0x57L,0x57L,0x57L,0x57L};
    int i, j;
    for (p_967->g_205 = 11; (p_967->g_205 == 7); p_967->g_205 = safe_sub_func_uint32_t_u_u(p_967->g_205, 1))
    { /* block id: 283 */
        int64_t l_732 = 0x4068A8860DFEEEAAL;
        uint16_t *l_735 = (void*)0;
        uint16_t *l_736 = &p_967->g_211;
        VECTOR(uint8_t, 8) l_738 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL);
        uint8_t *l_753 = (void*)0;
        uint8_t *l_754[4][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_756 = &p_967->g_9;
        int i, j, k;
        if (l_730)
        { /* block id: 284 */
            return l_731;
        }
        else
        { /* block id: 286 */
            if (p_51)
                break;
        }
        (*l_756) |= ((l_732 | (safe_rshift_func_uint16_t_u_s((((GROUP_DIVERGE(0, 1) < ((((*l_736) = p_967->g_505.y) >= p_51) | (((-10L) > ((VECTOR(uint8_t, 8))(0xB5L, 0x29L, 0x06L, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_737.yxxy)))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_738.s5556333441267226)).s3c)).yyxy))), 0UL)).s3) , (~(l_739 != ((((VECTOR(int32_t, 8))(l_740.wxwyyxxw)).s0 , ((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(p_967->g_440[6], (safe_mod_func_int32_t_s_s((l_738.s0 && (l_738.s2 | ((~(safe_add_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) , (l_740.w |= (safe_div_func_uint16_t_u_u(((*l_731) && (*p_967->g_707)), (*l_731))))), p_967->g_449.s5))) && l_755))), p_967->g_101)))), 2)) > p_51), 4294967295UL)) && l_738.s2)) , l_739)))))) < p_967->g_630.sd) == 0x64D6L), (*p_967->g_707)))) ^ (*l_731));
    }
    (*l_757) ^= (*l_731);
    (*l_758) = l_757;
    p_967->g_560 ^= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).xyxxxyxx)).s63)).lo | (l_781[3] = ((*l_779) = ((*l_778) |= (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((*p_967->g_707) = ((((p_51 & (safe_div_func_int32_t_s_s(((***p_967->g_464) | (safe_mod_func_int16_t_s_s(((--(*l_767)) & FAKE_DIVERGE(p_967->global_0_offset, get_global_id(0), 10)), (p_967->g_564[5] | ((safe_div_func_uint8_t_u_u((((((*l_757) = ((safe_div_func_int64_t_s_s((((65535UL | (safe_sub_func_int16_t_s_s(p_51, ((void*)0 == &p_967->g_374)))) , (*l_757)) | ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0UL, (((((p_51 && 0x00L) & p_967->g_574.x) & 18446744073709551611UL) , (*l_757)) ^ (*p_967->g_373)), 0x5A21L, ((VECTOR(uint16_t, 4))(0x9B37L)), 0xD4BBL)))).s5 , FAKE_DIVERGE(p_967->global_1_offset, get_global_id(1), 10)) , 0x3AAF1881CF35D2F3L)), p_967->g_533.sa)) | 7L)) != 1UL) , (*l_757)) && l_776), p_967->g_533.s2)) , (***p_967->g_464)))))), p_967->g_99))) | p_51) | l_777.s7) || p_967->g_374)), 0UL)), 5))))));
    return &p_967->g_99;
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_258 p_967->g_700 p_967->g_705 p_967->g_505 p_967->g_569 p_967->g_3 p_967->g_342 p_967->g_720
 * writes: p_967->g_258 p_967->g_9 p_967->g_706 p_967->g_720
 */
uint16_t  func_60(uint8_t  p_61, uint64_t * p_62, uint64_t * p_63, int64_t  p_64, uint8_t  p_65, struct S0 * p_967)
{ /* block id: 253 */
    uint32_t l_710 = 1UL;
    int32_t *l_711 = (void*)0;
    int16_t ***l_712 = &p_967->g_706;
    uint64_t *l_719 = &p_967->g_720;
    uint8_t *l_723[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_724 = 4294967292UL;
    int32_t l_725 = 8L;
    int i;
    if ((atomic_inc(&p_967->l_atomic_input[44]) == 8))
    { /* block id: 255 */
        uint8_t l_686 = 0x13L;
        int16_t l_689 = 6L;
        uint8_t l_690 = 1UL;
        uint64_t l_693 = 0xA59EEF1B209CFBEDL;
        int32_t l_694 = 0x70C9F80AL;
        uint64_t l_695 = 3UL;
        --l_686;
        ++l_690;
        l_695 &= ((l_693 , (l_694 , 0x593B8D4B6416B600L)) , 0x5B1E0167L);
        unsigned int result = 0;
        result += l_686;
        result += l_689;
        result += l_690;
        result += l_693;
        result += l_694;
        result += l_695;
        atomic_add(&p_967->l_special_values[44], result);
    }
    else
    { /* block id: 259 */
        (1 + 1);
    }
    for (p_967->g_258 = 0; (p_967->g_258 != 13); p_967->g_258 = safe_add_func_uint32_t_u_u(p_967->g_258, 3))
    { /* block id: 264 */
        int32_t *l_708[9][5][2] = {{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}},{{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0},{&p_967->g_377,(void*)0}}};
        int i, j, k;
        (*p_967->g_700) = (safe_lshift_func_int8_t_s_u((-1L), 4));
        for (p_967->g_9 = 0; (p_967->g_9 >= (-20)); --p_967->g_9)
        { /* block id: 268 */
            int16_t *l_704 = (void*)0;
            int16_t **l_703 = &l_704;
            int32_t **l_709 = &l_708[3][2][0];
            (*p_967->g_705) = l_703;
            (*l_709) = l_708[0][4][1];
        }
        (*p_967->g_569) = (FAKE_DIVERGE(p_967->group_0_offset, get_group_id(0), 10) > p_967->g_505.z);
        if (l_710)
            continue;
    }
    l_725 = (((void*)0 != l_711) , ((((((void*)0 == l_712) && (p_967->g_3 != (safe_mod_func_uint32_t_u_u(((((((safe_add_func_int32_t_s_s((p_61 == (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x699EL, 0x428DL, 0x5F86L, 0x06FBL)), ((VECTOR(int16_t, 2))(0x0FFAL, 0L)), 0x1A8FL, 0x7AB0L)).s4 != (p_967->g_342.s7 > (p_65 = (18446744073709551615UL < ((*l_719)++)))))), (p_61 < 0x123FL))) | l_710) , p_64) , 0xC8L) < (-1L)) && p_64), 1UL)))) , l_724) > 0x2D098099L) == l_710));
    return p_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_82 p_967->g_83 p_967->g_8 p_967->g_9 p_967->g_3 p_967->g_179 p_967->g_48 p_967->g_37 p_967->g_205 p_967->l_comm_values p_967->g_87 p_967->g_comm_values p_967->g_241 p_967->g_282 p_967->g_295 p_967->g_211 p_967->g_7 p_967->g_86 p_967->g_310 p_967->g_342 p_967->g_363 p_967->g_373 p_967->g_430 p_967->g_431 p_967->g_440 p_967->g_449 p_967->g_463 p_967->g_374 p_967->g_464 p_967->g_505 p_967->g_518 p_967->g_533 p_967->g_536 p_967->g_538 p_967->g_258 p_967->g_101 p_967->g_99 p_967->g_569 p_967->g_594 p_967->g_574 p_967->g_595 p_967->g_630 p_967->g_651
 * writes: p_967->g_204 p_967->g_211 p_967->g_101 p_967->g_258 p_967->g_282 p_967->g_9 p_967->g_241 p_967->g_342 p_967->g_377 p_967->g_440 p_967->g_467 p_967->g_518 p_967->g_560 p_967->g_564 p_967->g_99 p_967->g_594 p_967->g_430 p_967->g_651 p_967->g_83
 */
uint64_t * func_66(uint32_t  p_67, uint16_t  p_68, uint64_t ** p_69, uint8_t  p_70, uint64_t * p_71, struct S0 * p_967)
{ /* block id: 17 */
    int32_t l_102 = 0x1625A9B3L;
    VECTOR(uint32_t, 4) l_196 = (VECTOR(uint32_t, 4))(0x67EA1BE2L, (VECTOR(uint32_t, 2))(0x67EA1BE2L, 0x40FF6F94L), 0x40FF6F94L);
    int32_t l_220[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_246 = (-7L);
    uint8_t l_308 = 255UL;
    uint32_t *l_353 = &p_967->g_101;
    VECTOR(int8_t, 16) l_361 = (VECTOR(int8_t, 16))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x32L), 0x32L), 0x32L, 0x4CL, 0x32L, (VECTOR(int8_t, 2))(0x4CL, 0x32L), (VECTOR(int8_t, 2))(0x4CL, 0x32L), 0x4CL, 0x32L, 0x4CL, 0x32L);
    VECTOR(int8_t, 16) l_362 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x51L), 0x51L), 0x51L, (-2L), 0x51L, (VECTOR(int8_t, 2))((-2L), 0x51L), (VECTOR(int8_t, 2))((-2L), 0x51L), (-2L), 0x51L, (-2L), 0x51L);
    uint64_t l_386 = 18446744073709551615UL;
    uint32_t **l_490[3][6] = {{(void*)0,(void*)0,&l_353,&l_353,&l_353,&l_353},{(void*)0,(void*)0,&l_353,&l_353,&l_353,&l_353},{(void*)0,(void*)0,&l_353,&l_353,&l_353,&l_353}};
    uint32_t ***l_489 = &l_490[0][1];
    int32_t l_562 = 0x58E311F2L;
    uint64_t ***l_563 = &p_967->g_82;
    uint32_t **l_597[7];
    uint64_t l_664 = 0x241DEF48C9E01041L;
    uint32_t l_667 = 0xA556E8BBL;
    uint16_t *l_680 = &p_967->g_211;
    int32_t *l_683[10][1];
    uint8_t l_684 = 0x22L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_597[i] = &p_967->g_595;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_683[i][j] = &p_967->g_99;
    }
    if (((*p_967->g_82) != (void*)0))
    { /* block id: 18 */
        VECTOR(int16_t, 2) l_180 = (VECTOR(int16_t, 2))(3L, 3L);
        int32_t l_208 = 0x3795EC82L;
        int32_t l_240 = 0x0A6ECE73L;
        int16_t *l_260[2][1];
        int64_t l_268[2];
        uint64_t *l_275 = &p_967->g_3;
        int32_t l_280 = 0x6D5F9CC0L;
        int32_t l_281 = 0x3EC0A904L;
        uint32_t *l_293[4][6][9] = {{{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0}},{{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0}},{{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0}},{{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0},{&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,(void*)0}}};
        uint32_t **l_292[4][10][6] = {{{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]}},{{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]}},{{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]}},{{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]},{&l_293[1][1][2],&l_293[1][1][2],&l_293[1][1][2],&l_293[0][2][2],&l_293[1][1][2],&l_293[0][4][7]}}};
        VECTOR(uint64_t, 8) l_325 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL);
        VECTOR(int16_t, 8) l_359 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
        int32_t l_383 = (-9L);
        int32_t l_384 = 0x7DB7B880L;
        int32_t l_385 = 0x32613B4BL;
        uint64_t l_389[9][3][4] = {{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}},{{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L},{0xF828A057E27B0052L,0x2DEC06C2D175B527L,4UL,0xD0EB9E52CF93ED21L}}};
        VECTOR(int16_t, 2) l_394 = (VECTOR(int16_t, 2))(0x37CFL, (-2L));
        VECTOR(uint32_t, 2) l_432 = (VECTOR(uint32_t, 2))(6UL, 4294967295UL);
        int32_t l_508 = 0x4A4E442AL;
        int16_t l_513 = 0x6E73L;
        uint8_t l_519 = 0x66L;
        VECTOR(int16_t, 8) l_546 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1152L), 0x1152L), 0x1152L, 1L, 0x1152L);
        uint8_t l_603 = 0x72L;
        int32_t *l_607 = &p_967->g_9;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_260[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_268[i] = 1L;
        if (((0x401BL > 0x5465L) != l_102))
        { /* block id: 19 */
            VECTOR(int16_t, 2) l_181 = (VECTOR(int16_t, 2))(1L, 0L);
            int32_t l_212 = 0x58ECEE31L;
            int32_t l_213 = 1L;
            int32_t l_218 = 7L;
            int32_t l_219[3];
            uint32_t *l_226[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t *l_285 = &l_220[2];
            VECTOR(uint64_t, 4) l_332 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x6C2E0F3EA85F2594L), 0x6C2E0F3EA85F2594L);
            VECTOR(int8_t, 4) l_341 = (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 1L), 1L);
            uint32_t *l_352[8] = {&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101,&p_967->g_101};
            int64_t l_375 = (-1L);
            int8_t l_382 = 0x00L;
            uint32_t l_456[7];
            uint64_t l_496 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_219[i] = 0x7D8B5B9DL;
            for (i = 0; i < 7; i++)
                l_456[i] = 4294967292UL;
            if ((atomic_inc(&p_967->l_atomic_input[5]) == 6))
            { /* block id: 21 */
                int32_t l_103 = (-1L);
                uint64_t l_110[1][1][4] = {{{0x0B01AA1EC4391174L,0x0B01AA1EC4391174L,0x0B01AA1EC4391174L,0x0B01AA1EC4391174L}}};
                uint64_t l_111 = 1UL;
                uint32_t l_112 = 0x4C20F6EBL;
                VECTOR(uint64_t, 16) l_113 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 6UL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(6UL, 18446744073709551614UL), 6UL, 18446744073709551614UL, 6UL, 18446744073709551614UL);
                int16_t l_114 = 0x6339L;
                VECTOR(int32_t, 16) l_115 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                VECTOR(int32_t, 16) l_116 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x63A1A89DL), 0x63A1A89DL), 0x63A1A89DL, (-3L), 0x63A1A89DL, (VECTOR(int32_t, 2))((-3L), 0x63A1A89DL), (VECTOR(int32_t, 2))((-3L), 0x63A1A89DL), (-3L), 0x63A1A89DL, (-3L), 0x63A1A89DL);
                int16_t l_117 = 0L;
                int64_t l_118 = 0L;
                int8_t l_119 = 1L;
                uint16_t l_120 = 0x6715L;
                uint32_t l_121 = 0xEA336C9AL;
                VECTOR(uint16_t, 4) l_122 = (VECTOR(uint16_t, 4))(0x24E5L, (VECTOR(uint16_t, 2))(0x24E5L, 65535UL), 65535UL);
                VECTOR(int32_t, 2) l_123 = (VECTOR(int32_t, 2))(0x71F8345FL, 0x09B1B028L);
                VECTOR(int32_t, 16) l_124 = (VECTOR(int32_t, 16))(0x536818C3L, (VECTOR(int32_t, 4))(0x536818C3L, (VECTOR(int32_t, 2))(0x536818C3L, (-1L)), (-1L)), (-1L), 0x536818C3L, (-1L), (VECTOR(int32_t, 2))(0x536818C3L, (-1L)), (VECTOR(int32_t, 2))(0x536818C3L, (-1L)), 0x536818C3L, (-1L), 0x536818C3L, (-1L));
                VECTOR(int32_t, 2) l_125 = (VECTOR(int32_t, 2))(0x03FFABF6L, 0x15FD5604L);
                int32_t l_126 = 1L;
                uint32_t l_127 = 0x78D77B49L;
                uint64_t l_128 = 0xA303ACD4B1B73CF6L;
                uint32_t l_129 = 0xD627FB32L;
                uint8_t l_173 = 0x3DL;
                uint64_t l_174[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_174[i] = 1UL;
                for (l_103 = (-27); (l_103 == (-21)); l_103++)
                { /* block id: 24 */
                    int8_t l_106 = 0x79L;
                    int32_t l_107 = 6L;
                    int16_t l_108[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
                    int32_t l_109[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_109[i] = (-1L);
                    l_107 = (l_106 = 0x77DC92B2L);
                    l_109[0] = (l_108[3] , 0x7CB90AFEL);
                }
                if (((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_110[0][0][3] , (l_112 = l_111)), 0x29D2F475L, (-5L), 1L, 0L, 0x583CB06CL, 0x1281BCF5L, 0x5C77BC62L)).even)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(0x3C9A48E5L, 2L, (l_114 ^= (l_103 = l_113.s0)), ((VECTOR(int32_t, 4))(l_115.sab60)), (-4L), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x291C4591L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_116.s357d)).lo)), 0x0A72D5F9L)))), (int32_t)((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(l_117, ((VECTOR(int32_t, 4))(0x0A91788BL, (-1L), 5L, 0x2F2EBD03L)).x, 1L, 0L)).wzywyxzxxwwwwwww, (int32_t)(l_119 &= l_118)))).s1))).yxyxwywz)).hi, (int32_t)((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))((l_121 = l_120), (-1L), 0x610EL, 0x0E79L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0L)).yxxxxyyxyyyxxyxx)).scec1))))).even, ((VECTOR(uint16_t, 16))(l_122.ywwxxwxwzyzzwwwz)).sc1))).yxyy, ((VECTOR(int32_t, 16))(l_123.yyxyyxxxyyxyxyyy)).s9ce3, ((VECTOR(int32_t, 4))(l_124.sb00e))))).xxxxzxyyyxxyzywx))).sf))), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_125.xxyy)))).w, 1L, 0x1E53F41FL)).sd33e))).xxxzywywxzzxyyyz)).sffb5))).zxwwwwxyxwxzzwwz, (int32_t)(l_129 = ((l_127 &= l_126) , l_128))))).s0)
                { /* block id: 36 */
                    uint8_t l_130 = 255UL;
                    int32_t l_159 = (-4L);
                    int32_t *l_158 = &l_159;
                    int32_t *l_160 = &l_159;
                    l_115.s6 ^= l_130;
                    for (l_130 = 0; (l_130 >= 6); ++l_130)
                    { /* block id: 40 */
                        uint32_t l_133 = 1UL;
                        uint16_t l_134 = 0x6069L;
                        int16_t l_135 = 0x763EL;
                        int16_t l_136[5] = {0x36DCL,0x36DCL,0x36DCL,0x36DCL,0x36DCL};
                        int64_t l_137 = 0L;
                        uint16_t l_138[10] = {1UL,0x324BL,1UL,1UL,0x324BL,1UL,1UL,0x324BL,1UL,1UL};
                        int32_t l_140[7];
                        int32_t *l_139 = &l_140[5];
                        int32_t *l_141 = &l_140[2];
                        int32_t *l_142[2][2];
                        int32_t *l_143 = &l_140[5];
                        int32_t *l_144 = &l_140[6];
                        int32_t *l_145[4][3][7] = {{{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]}},{{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]}},{{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]}},{{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]},{&l_140[5],&l_140[5],&l_140[6],&l_140[3],&l_140[5],&l_140[3],&l_140[6]}}};
                        int32_t *l_146 = &l_140[5];
                        int32_t *l_147 = &l_140[5];
                        int64_t l_148 = (-1L);
                        VECTOR(int32_t, 8) l_149 = (VECTOR(int32_t, 8))(0x068DC4A0L, (VECTOR(int32_t, 4))(0x068DC4A0L, (VECTOR(int32_t, 2))(0x068DC4A0L, 0x70F138F8L), 0x70F138F8L), 0x70F138F8L, 0x068DC4A0L, 0x70F138F8L);
                        int8_t l_150 = 0x77L;
                        VECTOR(int32_t, 8) l_151 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x200FD19FL), 0x200FD19FL), 0x200FD19FL, (-4L), 0x200FD19FL);
                        VECTOR(int32_t, 4) l_152 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x55C75568L), 0x55C75568L);
                        int64_t l_153 = 0x1C8EEA47A0FBCE4BL;
                        int64_t l_154 = 0x480D3783E0E50127L;
                        VECTOR(int32_t, 8) l_155 = (VECTOR(int32_t, 8))(0x7EAC4BFEL, (VECTOR(int32_t, 4))(0x7EAC4BFEL, (VECTOR(int32_t, 2))(0x7EAC4BFEL, 0x5EE6F90CL), 0x5EE6F90CL), 0x5EE6F90CL, 0x7EAC4BFEL, 0x5EE6F90CL);
                        VECTOR(int32_t, 16) l_156 = (VECTOR(int32_t, 16))(0x4BC0A3B5L, (VECTOR(int32_t, 4))(0x4BC0A3B5L, (VECTOR(int32_t, 2))(0x4BC0A3B5L, 0x1236ECDBL), 0x1236ECDBL), 0x1236ECDBL, 0x4BC0A3B5L, 0x1236ECDBL, (VECTOR(int32_t, 2))(0x4BC0A3B5L, 0x1236ECDBL), (VECTOR(int32_t, 2))(0x4BC0A3B5L, 0x1236ECDBL), 0x4BC0A3B5L, 0x1236ECDBL, 0x4BC0A3B5L, 0x1236ECDBL);
                        VECTOR(int32_t, 4) l_157 = (VECTOR(int32_t, 4))(0x4E94049FL, (VECTOR(int32_t, 2))(0x4E94049FL, (-1L)), (-1L));
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_140[i] = (-1L);
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_142[i][j] = &l_140[5];
                        }
                        l_139 = (l_144 = (((l_133 , ((l_135 &= l_134) , (l_136[0] , (l_137 |= 0x7B1BE5FB79008C5DL)))) , l_138[6]) , (l_143 = (FAKE_DIVERGE(p_967->local_1_offset, get_local_id(1), 10) , (l_142[0][1] = (l_141 = l_139))))));
                        l_147 = (l_146 = l_145[3][1][4]);
                        (*l_144) = 0x32A2B2FAL;
                        l_125.x &= (l_148 , ((VECTOR(int32_t, 8))(0x6358C7ECL, 0x17C6A24AL, 0x5FD280BCL, (-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_149.s14261514)).s25, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_150, ((VECTOR(int32_t, 2))(l_151.s22)), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_152.yyww)).lo)))))), (l_153 , (l_123.y = l_154)), 0x7D6C01FFL, 9L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_155.s55347346)).lo, ((VECTOR(int32_t, 2))(l_156.se2)).xxxx))), ((VECTOR(int32_t, 2))((-4L), (-4L))), 0x3D12EEB9L)).sf0))))), ((VECTOR(int32_t, 4))(l_157.wxxz)).odd))))), (-1L), 0x755A1BD8L)).s7);
                    }
                    l_160 = l_158;
                }
                else
                { /* block id: 55 */
                    int32_t l_161 = 0x78E475CCL;
                    for (l_161 = 16; (l_161 == (-16)); --l_161)
                    { /* block id: 58 */
                        VECTOR(int16_t, 8) l_164 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
                        VECTOR(uint16_t, 2) l_165 = (VECTOR(uint16_t, 2))(0x211DL, 3UL);
                        int8_t l_166 = 1L;
                        int32_t l_167 = 4L;
                        int32_t l_168 = 0x2CF2A4E1L;
                        uint64_t l_169 = 0x1F12EC71B3094663L;
                        uint16_t l_172 = 0x9848L;
                        int i;
                        l_115.s8 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_164.s3517213765177452)), ((VECTOR(uint16_t, 4))(l_165.xxyx)).wyxzyyzyywzwyzwx))).lo)).s0;
                        l_169--;
                        l_125.x = l_172;
                    }
                }
                l_174[0] |= l_173;
                unsigned int result = 0;
                result += l_103;
                int l_110_i0, l_110_i1, l_110_i2;
                for (l_110_i0 = 0; l_110_i0 < 1; l_110_i0++) {
                    for (l_110_i1 = 0; l_110_i1 < 1; l_110_i1++) {
                        for (l_110_i2 = 0; l_110_i2 < 4; l_110_i2++) {
                            result += l_110[l_110_i0][l_110_i1][l_110_i2];
                        }
                    }
                }
                result += l_111;
                result += l_112;
                result += l_113.sf;
                result += l_113.se;
                result += l_113.sd;
                result += l_113.sc;
                result += l_113.sb;
                result += l_113.sa;
                result += l_113.s9;
                result += l_113.s8;
                result += l_113.s7;
                result += l_113.s6;
                result += l_113.s5;
                result += l_113.s4;
                result += l_113.s3;
                result += l_113.s2;
                result += l_113.s1;
                result += l_113.s0;
                result += l_114;
                result += l_115.sf;
                result += l_115.se;
                result += l_115.sd;
                result += l_115.sc;
                result += l_115.sb;
                result += l_115.sa;
                result += l_115.s9;
                result += l_115.s8;
                result += l_115.s7;
                result += l_115.s6;
                result += l_115.s5;
                result += l_115.s4;
                result += l_115.s3;
                result += l_115.s2;
                result += l_115.s1;
                result += l_115.s0;
                result += l_116.sf;
                result += l_116.se;
                result += l_116.sd;
                result += l_116.sc;
                result += l_116.sb;
                result += l_116.sa;
                result += l_116.s9;
                result += l_116.s8;
                result += l_116.s7;
                result += l_116.s6;
                result += l_116.s5;
                result += l_116.s4;
                result += l_116.s3;
                result += l_116.s2;
                result += l_116.s1;
                result += l_116.s0;
                result += l_117;
                result += l_118;
                result += l_119;
                result += l_120;
                result += l_121;
                result += l_122.w;
                result += l_122.z;
                result += l_122.y;
                result += l_122.x;
                result += l_123.y;
                result += l_123.x;
                result += l_124.sf;
                result += l_124.se;
                result += l_124.sd;
                result += l_124.sc;
                result += l_124.sb;
                result += l_124.sa;
                result += l_124.s9;
                result += l_124.s8;
                result += l_124.s7;
                result += l_124.s6;
                result += l_124.s5;
                result += l_124.s4;
                result += l_124.s3;
                result += l_124.s2;
                result += l_124.s1;
                result += l_124.s0;
                result += l_125.y;
                result += l_125.x;
                result += l_126;
                result += l_127;
                result += l_128;
                result += l_129;
                result += l_173;
                int l_174_i0;
                for (l_174_i0 = 0; l_174_i0 < 3; l_174_i0++) {
                    result += l_174[l_174_i0];
                }
                atomic_add(&p_967->l_special_values[5], result);
            }
            else
            { /* block id: 65 */
                (1 + 1);
            }
            if ((atomic_inc(&p_967->g_atomic_input[60 * get_linear_group_id() + 38]) == 1))
            { /* block id: 69 */
                int32_t l_176 = 0x50CA95D4L;
                int32_t *l_175[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_175[i] = &l_176;
                l_175[4] = l_175[9];
                unsigned int result = 0;
                result += l_176;
                atomic_add(&p_967->g_special_values[60 * get_linear_group_id() + 38], result);
            }
            else
            { /* block id: 71 */
                (1 + 1);
            }
            if ((*p_967->g_8))
            { /* block id: 74 */
                uint32_t *l_199 = &p_967->g_101;
                VECTOR(int64_t, 2) l_200 = (VECTOR(int64_t, 2))(0x7E5C911478435563L, 0x69DB77638222FE82L);
                int32_t *l_201 = &l_102;
                uint16_t *l_202 = (void*)0;
                uint16_t *l_203 = &p_967->g_204;
                int16_t *l_206 = (void*)0;
                int16_t *l_207 = (void*)0;
                uint16_t *l_209 = (void*)0;
                uint16_t *l_210 = &p_967->g_211;
                int32_t l_215 = 0x12300684L;
                uint64_t l_221 = 6UL;
                uint16_t l_247 = 65529UL;
                VECTOR(int32_t, 16) l_248 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int32_t, 2))((-3L), 1L), (VECTOR(int32_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
                uint8_t l_270 = 0xFEL;
                uint32_t ***l_294 = &l_292[2][1][5];
                int64_t *l_309 = &l_246;
                VECTOR(uint64_t, 2) l_326 = (VECTOR(uint64_t, 2))(1UL, 0x1879924834A0C32BL);
                VECTOR(uint64_t, 8) l_327 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xF7423C30839E805BL), 0xF7423C30839E805BL), 0xF7423C30839E805BL, 0UL, 0xF7423C30839E805BL);
                VECTOR(int64_t, 16) l_354 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int64_t, 2))((-2L), 0L), (VECTOR(int64_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
                int32_t l_376[8] = {0x27F60783L,6L,0x27F60783L,0x27F60783L,6L,0x27F60783L,0x27F60783L,6L};
                int i;
                if ((!((((*l_210) = ((safe_sub_func_uint16_t_u_u(((+(*p_71)) || (((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(p_967->g_179.s5ac62ac5)).s4640372755673020, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_180.yxxyyyxxxyxxyxyy)))).s7fb8)).yzzwyzyyyyxxwwxz, ((VECTOR(int16_t, 16))(l_181.xyxxyxyyyyxyxxyx))))).s7 , (safe_mul_func_int16_t_s_s((l_208 = (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((*p_71), (l_181.x & ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_967->g_48.sb, ((p_967->g_37[2][1] , (((VECTOR(uint32_t, 2))(l_196.xx)).lo || p_67)) & (((*l_203) = ((((void*)0 != l_199) | ((*l_201) = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_200.yyxxxxxxyxxyyxxy)).lo)).s5 < 0UL))) || p_70)) <= 0x258FL)))) || FAKE_DIVERGE(p_967->group_0_offset, get_group_id(0), 10)), 3)), 0xF12DL)) | p_967->g_205)))), p_967->l_comm_values[(safe_mod_func_uint32_t_u_u(p_967->tid, 61))])), 1L))), FAKE_DIVERGE(p_967->local_2_offset, get_local_id(2), 10))))), l_181.x)) < 0x1D2CL)) != p_967->g_3) && l_196.x)))
                { /* block id: 79 */
                    int32_t *l_214 = &l_213;
                    int32_t *l_216 = &l_213;
                    int32_t *l_217[6];
                    uint32_t **l_227 = &l_226[0][1];
                    VECTOR(int32_t, 8) l_250 = (VECTOR(int32_t, 8))(0x195447FFL, (VECTOR(int32_t, 4))(0x195447FFL, (VECTOR(int32_t, 2))(0x195447FFL, 0x4691A34FL), 0x4691A34FL), 0x4691A34FL, 0x195447FFL, 0x4691A34FL);
                    int i;
                    for (i = 0; i < 6; i++)
                        l_217[i] = (void*)0;
                    l_221--;
                    atomic_add(&p_967->g_atomic_reduction[get_linear_group_id()], ((**p_69) , (&p_967->g_204 != (void*)0)));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_967->v_collective += p_967->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if ((((p_70 & ((((*l_227) = l_226[0][1]) != (void*)0) & ((safe_div_func_uint64_t_u_u(((((safe_sub_func_uint32_t_u_u(p_70, p_967->g_87.s6)) ^ (safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((~(l_180.x & ((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((p_70 & (l_240 = (l_208 = p_967->g_comm_values[p_967->tid]))) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_967->g_241.s6271066361252704)).sb5b8)).w), 2)), (safe_sub_func_int16_t_s_s(((((*l_199) = ((safe_mul_func_int16_t_s_s(l_246, p_70)) , p_67)) , 0x04CFL) != p_70), p_967->g_241.s3)))) == (*l_201)) , 1L) < FAKE_DIVERGE(p_967->local_0_offset, get_local_id(0), 10)))) && p_967->g_205), (**p_967->g_82))), l_247))) ^ (-1L)) ^ p_967->g_241.s6), p_967->g_3)) < p_967->g_37[1][0]))) , p_70) & GROUP_DIVERGE(1, 1)))
                    { /* block id: 86 */
                        VECTOR(int32_t, 2) l_249 = (VECTOR(int32_t, 2))((-5L), 0x430DACF9L);
                        uint32_t *l_253 = (void*)0;
                        uint32_t *l_254 = (void*)0;
                        uint32_t *l_255 = (void*)0;
                        uint32_t *l_256 = (void*)0;
                        uint32_t *l_257[2][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
                        VECTOR(int8_t, 8) l_263 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x51L), 0x51L), 0x51L, (-4L), 0x51L);
                        int32_t *l_269[6][6] = {{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208},{&l_208,&l_208,&l_208,&l_208,&l_208,&l_208}};
                        int i, j, k;
                        (*l_214) = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_248.sf24c)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_249.yyyyyyxxxyyxxyxy)).s31b1, ((VECTOR(int32_t, 2))((-5L), 0x30B6DD47L)).xyxx))).zxyyyxzz)).odd)), ((VECTOR(int32_t, 4))(l_250.s1124))))), ((VECTOR(int32_t, 16))(0x43A580F9L, ((((safe_add_func_int32_t_s_s(((p_967->g_258 = l_208) == (p_68 | p_67)), (p_967->g_9 , ((VECTOR(int32_t, 2))((-2L), 8L)).odd))) , ((safe_unary_minus_func_int64_t_s(((void*)0 != l_260[1][0]))) ^ (((safe_div_func_uint16_t_u_u(((p_967->g_101 = 8UL) , (p_68 > ((l_269[1][0] = (((((VECTOR(int8_t, 16))(l_263.s0375756167447541)).se <= (++p_70)) >= ((*l_201) = (safe_sub_func_uint64_t_u_u(((*l_214) | l_263.s7), l_268[0])))) , (void*)0)) != (void*)0))), l_212)) < 0UL) != p_67))) ^ p_68) ^ 65535UL), 5L, p_68, 0x3D1B2AB0L, l_219[1], 0x7E32209BL, 0x2724ABC3L, ((VECTOR(int32_t, 8))(1L)))).s126a))).yzzzyzxz))).s2;
                    }
                    else
                    { /* block id: 93 */
                        l_270++;
                        return (*p_967->g_82);
                    }
                }
                else
                { /* block id: 97 */
                    int32_t *l_279[8][4] = {{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]},{&p_967->g_7[5],&p_967->g_7[0],&p_967->g_7[5],&p_967->g_7[5]}};
                    int i, j;
                    for (l_208 = 0; (l_208 < (-15)); l_208 = safe_sub_func_uint8_t_u_u(l_208, 9))
                    { /* block id: 100 */
                        return l_275;
                    }
                    if ((atomic_inc(&p_967->l_atomic_input[56]) == 8))
                    { /* block id: 104 */
                        int32_t l_277 = 0L;
                        int32_t *l_276 = &l_277;
                        int32_t *l_278 = &l_277;
                        l_278 = l_276;
                        unsigned int result = 0;
                        result += l_277;
                        atomic_add(&p_967->l_special_values[56], result);
                    }
                    else
                    { /* block id: 106 */
                        (1 + 1);
                    }
                    p_967->g_282--;
                }
                l_285 = &p_967->g_9;
                if (((*l_285) = (p_67 < ((safe_div_func_int64_t_s_s(((*l_309) = (safe_div_func_int64_t_s_s((-1L), (safe_div_func_int32_t_s_s((((*l_294) = l_292[2][1][5]) != p_967->g_295), (safe_mul_func_uint16_t_u_u(((l_180.x <= p_67) != ((((p_68 == (((p_67 , (safe_mul_func_uint16_t_u_u((p_967->g_211++), (((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-1L), p_70)), l_220[6])) , 0x3BF14791L) , 0x13L) , p_70), p_967->g_7[7])) > 0L) | 0x71ED42EEL)))) > p_967->g_86.s6) > p_68)) <= p_67) | (*p_71)) >= l_308)), p_967->g_241.s2))))))), GROUP_DIVERGE(1, 1))) , 0x8CL))))
                { /* block id: 116 */
                    uint64_t *l_346 = &l_221;
                    int32_t l_349 = 1L;
                    uint64_t *l_355 = (void*)0;
                    uint64_t *l_356[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_356[i] = (void*)0;
                    (*l_201) |= ((VECTOR(int32_t, 8))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_967->g_310.s3b)).yxxy)).x & (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((0x67L ^ ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((p_967->g_241.s6 = 0L), 1)) || l_196.x), (safe_mod_func_uint64_t_u_u(0UL, ((*l_285) = (safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((p_68 && ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(l_325.s2233)), ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 2))(1UL, 0xB0F44A99A04B6D0CL)).yyyx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_326.xyyxxxxy)).s0742057607370213)).s69))))).xxyyyyxx)).even, ((VECTOR(uint64_t, 2))(l_327.s43)).yxxx)))))).y), (p_967->g_342.s7 = (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(l_332.yyyywxzzwwwyzxwx)).sd != ((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((l_268[0] , (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_341.ww)).xyxx)).odd)).yxxx)), (-10L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_967->g_342.s01)), 0x1AL, 0x23L)).w, (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((((safe_unary_minus_func_uint8_t_u(((l_349 = ((*l_346)--)) && p_67))) || (safe_sub_func_uint16_t_u_u(((l_352[7] = &p_967->g_101) == (p_67 , l_353)), 0L))) || 2L), ((VECTOR(uint16_t, 4))(0x5F25L)), ((VECTOR(uint16_t, 2))(4UL)), 0xA57FL)).s1, p_68)), 0x74L, (-4L), (-6L), p_68, ((VECTOR(int8_t, 2))(0L)), 0x30L, (-4L), 0x79L)).s3a)), 0x66L)), ((VECTOR(int8_t, 4))(0x7DL)))).s6, p_967->g_37[1][1])), 0x7325FCA033A93547L))) < l_196.z), FAKE_DIVERGE(p_967->group_2_offset, get_group_id(2), 10))), 3)) , 0x64FD301AD19E5C37L)), p_967->g_7[5])), l_354.sc)) , 18446744073709551614UL) & l_240)))) > 0x35L), 0x0CL))))))) < p_967->g_37[8][1])), 5L)), p_70)), l_349, 18446744073709551615UL, (**p_967->g_82), 18446744073709551606UL, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), 0x614948C1EE8A465BL, 0x67B74CCC28DFE8A6L, 1UL)).sde4e)).even)).yxyy)).wwywwzwx, ((VECTOR(uint64_t, 8))(0x170954E7B07FBC51L))))).s0151366676560560, (uint64_t)(**p_69), (uint64_t)(*l_285)))).sfa, ((VECTOR(uint64_t, 2))(1UL))))).yxyxxyyx)).s7, (**p_69), (**p_69), ((VECTOR(uint64_t, 2))(0xADFCFCD1B16B52EBL)), ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 4))(0xE9BC3C447E2CC4A4L)), ((VECTOR(uint64_t, 2))(0x5C44A373C5AB58A1L)), ((VECTOR(uint64_t, 2))(1UL)), 0UL)).s8 | l_325.s3) < p_67) != FAKE_DIVERGE(p_967->local_2_offset, get_local_id(2), 10))), (-10L), ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 2))(0L)), 1L, (-1L))).s5;
                    return (*p_967->g_82);
                }
                else
                { /* block id: 125 */
                    VECTOR(int16_t, 8) l_360 = (VECTOR(int16_t, 8))(0x37A3L, (VECTOR(int16_t, 4))(0x37A3L, (VECTOR(int16_t, 2))(0x37A3L, 0L), 0L), 0L, 0x37A3L, 0L);
                    uint64_t ***l_367 = &p_967->g_82;
                    uint64_t ****l_366 = &l_367;
                    uint64_t ***l_369 = &p_967->g_82;
                    uint64_t ****l_368 = &l_369;
                    int32_t *l_378 = (void*)0;
                    int32_t *l_379 = &l_215;
                    int32_t *l_380 = &l_376[6];
                    int32_t *l_381[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_381[i] = (void*)0;
                    (*l_285) &= (safe_lshift_func_uint16_t_u_s((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_359.s60)).yxyxxyxyyyyxyxyy)).s4c, ((VECTOR(int16_t, 2))(l_360.s13)), ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(l_361.s94ed0ee743ce0f5d)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_362.sc7e64a294e479d4e)).s93, ((VECTOR(int8_t, 2))((-5L), 0x7BL)), ((VECTOR(int8_t, 16))(p_967->g_363.s4712410246267563)).sf4))).xyxyxyxx)).s2025725635216113)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x25L, 0x3EL)).xxxyxxyx)).s7246636025664422, ((VECTOR(int8_t, 16))(((&p_967->g_295 == ((safe_rshift_func_int8_t_s_u(0L, 5)) , l_294)) > ((((*l_366) = &p_967->g_82) == ((*l_368) = &p_69)) , ((p_967->g_377 = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((((-1L) < ((p_967->g_8 != p_967->g_373) | (l_375 > l_376[6]))) == (*l_201)))), p_967->g_86.s1))) != 0xDEF45496BD690EF3L))), 0L, ((VECTOR(int8_t, 2))(0x2FL)), l_360.s2, ((VECTOR(int8_t, 4))(0x7AL)), ((VECTOR(int8_t, 2))(0x09L)), 1L, ((VECTOR(int8_t, 4))(0x49L))))))).sd2, (int8_t)0x71L))).yxxyxyyyyxyyyyxx))).sc5)).yyyyxxyxyyyxyyxy))).lo)).s2625122244360222)).sdb)).yyyxyyyxyyxyxxyy, ((VECTOR(int16_t, 16))(6L))))).sb4))).yyxyyyxyyxyxyxxy)).odd, ((VECTOR(int16_t, 8))(0x3BD3L))))).s5102312004731700)).s8 & p_67), 12));
                    ++l_386;
                    --l_389[5][2][1];
                    if ((*l_201))
                    { /* block id: 132 */
                        l_285 = ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_394.xxxyyyxyxxyxxxyy)).s6, 2)) , &l_208);
                    }
                    else
                    { /* block id: 134 */
                        int32_t **l_395 = &l_285;
                        (*l_294) = (void*)0;
                        (*l_395) = &l_376[6];
                        (*l_395) = &p_967->g_9;
                    }
                }
                if ((atomic_inc(&p_967->g_atomic_input[60 * get_linear_group_id() + 15]) == 4))
                { /* block id: 141 */
                    int32_t l_396 = 2L;
                    int8_t l_421 = 0x26L;
                    uint32_t l_422 = 0x27AC5330L;
                    int32_t *l_423 = &l_396;
                    for (l_396 = 0; (l_396 == (-29)); l_396 = safe_sub_func_uint32_t_u_u(l_396, 3))
                    { /* block id: 144 */
                        uint32_t l_399[9][6] = {{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL},{1UL,1UL,5UL,4294967289UL,0UL,4294967289UL}};
                        uint64_t l_400 = 18446744073709551613UL;
                        uint64_t *l_402 = &l_400;
                        uint64_t **l_401 = &l_402;
                        int32_t l_403 = 1L;
                        uint32_t l_404 = 4294967295UL;
                        VECTOR(int32_t, 16) l_405 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x00A5CD8EL), 0x00A5CD8EL), 0x00A5CD8EL, 1L, 0x00A5CD8EL, (VECTOR(int32_t, 2))(1L, 0x00A5CD8EL), (VECTOR(int32_t, 2))(1L, 0x00A5CD8EL), 1L, 0x00A5CD8EL, 1L, 0x00A5CD8EL);
                        VECTOR(int32_t, 4) l_406 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                        VECTOR(int32_t, 8) l_407 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                        VECTOR(int32_t, 2) l_408 = (VECTOR(int32_t, 2))((-6L), 0x64F36C54L);
                        VECTOR(int32_t, 4) l_409 = (VECTOR(int32_t, 4))(0x6B671C6BL, (VECTOR(int32_t, 2))(0x6B671C6BL, 0x469F6C7DL), 0x469F6C7DL);
                        VECTOR(int32_t, 16) l_410 = (VECTOR(int32_t, 16))(0x0B1B7BE4L, (VECTOR(int32_t, 4))(0x0B1B7BE4L, (VECTOR(int32_t, 2))(0x0B1B7BE4L, (-1L)), (-1L)), (-1L), 0x0B1B7BE4L, (-1L), (VECTOR(int32_t, 2))(0x0B1B7BE4L, (-1L)), (VECTOR(int32_t, 2))(0x0B1B7BE4L, (-1L)), 0x0B1B7BE4L, (-1L), 0x0B1B7BE4L, (-1L));
                        VECTOR(int32_t, 16) l_411 = (VECTOR(int32_t, 16))(0x263075C3L, (VECTOR(int32_t, 4))(0x263075C3L, (VECTOR(int32_t, 2))(0x263075C3L, 0x3662EEB6L), 0x3662EEB6L), 0x3662EEB6L, 0x263075C3L, 0x3662EEB6L, (VECTOR(int32_t, 2))(0x263075C3L, 0x3662EEB6L), (VECTOR(int32_t, 2))(0x263075C3L, 0x3662EEB6L), 0x263075C3L, 0x3662EEB6L, 0x263075C3L, 0x3662EEB6L);
                        int64_t l_412 = 0x3ADEF4DCF3243F55L;
                        int16_t l_413 = 1L;
                        uint32_t l_414 = 0xECF8EF92L;
                        VECTOR(int32_t, 2) l_415 = (VECTOR(int32_t, 2))(7L, 0x3481B01AL);
                        uint16_t l_416[4][6] = {{0UL,65527UL,0UL,0UL,65527UL,0UL},{0UL,65527UL,0UL,0UL,65527UL,0UL},{0UL,65527UL,0UL,0UL,65527UL,0UL},{0UL,65527UL,0UL,0UL,65527UL,0UL}};
                        int32_t l_417 = (-4L);
                        int32_t l_418 = 0L;
                        int32_t l_419[8] = {0x2D1D3954L,0x2D1D3954L,0x2D1D3954L,0x2D1D3954L,0x2D1D3954L,0x2D1D3954L,0x2D1D3954L,0x2D1D3954L};
                        int32_t l_420 = 0x015E9497L;
                        int i, j;
                        l_400 |= l_399[7][2];
                        l_401 = (void*)0;
                        l_416[0][0] |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x4E4668D8L, (-1L), (-4L), (l_404 = l_403), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_405.s73da)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_406.zyzxyyzy)).lo, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_407.s25)), ((VECTOR(int32_t, 2))(3L, (-4L)))))).yyyx)))))), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_408.yx)).xxxx, (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_409.zyxzwzwz)))).s5))), ((VECTOR(int32_t, 2))(l_410.s07)), 8L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_411.s31b356a45cbf47b4)).even)).s5730633521564277))))).odd)).lo)))), 0x3E8EF42FL)).s6d))), 0x181D417EL, 2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x7DF4D302L)), 0x3259BA19L, 6L)).z, l_412, (-1L), l_413, (l_414 , (-10L)), ((VECTOR(int32_t, 2))(l_415.yx)), 0x3F1FDB9EL)).s56)).odd;
                        l_420 = (l_419[2] &= (l_417 , l_418));
                    }
                    l_423 = (l_421 , (l_422 , (void*)0));
                    unsigned int result = 0;
                    result += l_396;
                    result += l_421;
                    result += l_422;
                    atomic_add(&p_967->g_special_values[60 * get_linear_group_id() + 15], result);
                }
                else
                { /* block id: 153 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 156 */
                int32_t *l_439 = &l_385;
                uint64_t *l_441[2][9][9] = {{{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]}},{{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]},{&l_389[5][2][1],&l_386,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_386,&l_389[5][2][1]}}};
                uint32_t *l_448 = &p_967->g_101;
                int32_t l_453[3][10][2] = {{{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL}},{{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL}},{{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL},{0L,0x63A2AE2BL}}};
                uint32_t ***l_486[9][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                int32_t *l_493 = (void*)0;
                int32_t *l_494 = &l_240;
                int32_t *l_495[7];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_495[i] = &l_213;
                if ((p_967->g_48.sf | (((&p_967->g_83[0] != &p_967->g_83[1]) <= (l_220[7] = (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((&l_386 != (*p_967->g_82)), (((VECTOR(int16_t, 4))(0x20F7L, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(p_967->g_430.s10352400)).s10, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_967->g_431.wz)), 0x07C0L, 1L)).yywwxwzy, (int16_t)l_196.z))).s31, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-5L), ((p_967->g_440[1] = ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_432.xyyyxyxy)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(((*l_439) |= (safe_add_func_int64_t_s_s((((((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((p_967->g_3 & l_394.y), 5)), (p_70 < p_67))) || p_68) && (*l_285)) & 1L) , 0xE638FF595BCB2A54L) || (*l_285)) | 0x0F3F42CF27A0BAE5L), (-5L)))), 0x0EC9E13BL, 4L, ((VECTOR(int32_t, 2))(4L)), 0x0111D716L, 1L, ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 4))(0x6BD05526L)), 0x19BBA304L)).sd369, ((VECTOR(int32_t, 4))(0L))))).xzwwxxwz, (uint32_t)0xA93E8386L, (uint32_t)(*l_285)))).s1145742362652433)).hi)), ((VECTOR(uint32_t, 8))(0xE4E02DACL))))).s7) <= 0x7A3995F6L), p_70, 0L, 0L, 0L, 0x3FBBL, 4L)), p_967->g_440[1], 0L, ((VECTOR(int16_t, 4))(0x3F6BL)), (-10L), 0L)).sfc))), 0x2A95L)).w != l_389[2][1][3]))) <= p_967->g_431.x), p_967->g_431.z)), p_967->g_241.s4)))) & 0x10D5L)))
                { /* block id: 160 */
                    VECTOR(int8_t, 8) l_452 = (VECTOR(int8_t, 8))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x52L), 0x52L), 0x52L, 0x71L, 0x52L);
                    int32_t l_454 = 1L;
                    int32_t l_455[2][5] = {{2L,0L,2L,2L,0L},{2L,0L,2L,2L,0L}};
                    uint64_t ****l_465[2];
                    uint64_t *****l_466[3];
                    int8_t *l_472 = (void*)0;
                    int8_t *l_473 = (void*)0;
                    int8_t *l_474 = (void*)0;
                    int8_t *l_475 = &l_382;
                    uint32_t ****l_487 = (void*)0;
                    uint32_t ****l_488[8] = {&l_486[2][2],&l_486[6][2],&l_486[2][2],&l_486[2][2],&l_486[6][2],&l_486[2][2],&l_486[2][2],&l_486[6][2]};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_465[i] = &p_967->g_464;
                    for (i = 0; i < 3; i++)
                        l_466[i] = (void*)0;
                    (*l_439) = (safe_lshift_func_int8_t_s_u(0x54L, 7));
                    l_453[0][1][1] &= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((&p_967->g_101 != (l_448 = l_439)), 4)), (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_967->g_449.s7114)).lo)).hi && ((*l_439) ^ (18446744073709551609UL != ((l_208 = (--l_456[2])) == ((safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))((0x6CL || p_967->l_comm_values[(safe_mod_func_uint32_t_u_u(p_967->tid, 61))]), 6L, (((*l_475) &= ((VECTOR(int8_t, 8))((((l_465[0] = p_967->g_463) == (p_967->g_467[3] = &p_967->g_464)) | (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_220[5], 0x95A06EC7L)), l_246))), p_70, 0L, ((VECTOR(int8_t, 4))(1L)), 0x2CL)).s7) >= p_967->g_363.s2), ((VECTOR(int16_t, 2))(0x4132L)), 0x6E40L, (-1L), ((VECTOR(int16_t, 4))(0x3F38L)), ((VECTOR(int16_t, 4))(0x46D8L)), 0x56DBL)).hi, ((VECTOR(int16_t, 8))(0x508CL))))).s22)).xyxyyyyx, ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(0x1E05L))))).s41, ((VECTOR(int16_t, 2))(0x05ADL))))).xxxyxxxxyyyxyxxx))).s2, l_268[0])), (*l_285))) == 4294967295UL)))))));
                    l_102 = (safe_sub_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s((-1L), ((((p_967->g_440[3] <= ((*l_475) = (safe_mul_func_uint16_t_u_u((((l_220[7] = (l_220[4] && 18446744073709551612UL)) > ((**p_69) > ((VECTOR(int64_t, 2))(0x4EDA14FC925C5DF8L, 0x1B2D544666EBB998L)).odd)) , (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((l_486[3][2] = l_486[6][2]) != l_489), (*p_967->g_373))), (((safe_mod_func_uint16_t_u_u(((*l_285) , p_68), 1L)) & p_967->g_86.s0) , l_246)))), p_67)))) ^ p_68) != p_967->g_430.s0) , p_70))) != (**p_69)) != 246UL) == p_67) | FAKE_DIVERGE(p_967->local_0_offset, get_local_id(0), 10)), l_280));
                }
                else
                { /* block id: 173 */
                    return (*p_69);
                }
                l_496--;
            }
            return (**p_967->g_464);
        }
        else
        { /* block id: 179 */
            uint32_t *l_514 = (void*)0;
            uint32_t *l_515 = (void*)0;
            uint32_t *l_516 = (void*)0;
            uint32_t *l_517[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t *l_521[10][1];
            uint32_t l_528 = 0xBAE9F0B6L;
            VECTOR(uint16_t, 4) l_537 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
            int32_t **l_551 = (void*)0;
            int32_t **l_552 = (void*)0;
            int32_t **l_553 = &l_521[0][0];
            int8_t *l_561 = (void*)0;
            int8_t l_565[2];
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_521[i][j] = &l_220[1];
            }
            for (i = 0; i < 2; i++)
                l_565[i] = 1L;
            l_102 = (!((0xC629ACD6L && ((l_359.s6 | (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_967->g_241.s1 = ((((safe_rshift_func_int16_t_s_s(p_67, 14)) <= 0x72L) != (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_967->g_505.zxzxzxxxyzywyxxw)))).sc == (p_967->g_440[7] , p_967->g_282))) & (safe_rshift_func_uint16_t_u_u((l_508 < (p_967->g_241.s2 | ((p_967->g_518 &= (((((~((safe_mod_func_int16_t_s_s((FAKE_DIVERGE(p_967->group_1_offset, get_group_id(1), 10) , (safe_rshift_func_uint8_t_u_u(((void*)0 == &p_967->g_464), p_68))), l_513)) & p_68)) & p_67) != 0x7162EB88L) && 0x232F6F129E762E19L) == 6L)) | p_70))), 9)))) & p_68), p_67)), l_519))) < 0x2DAB3546E8A16A8BL)) , (-5L)));
            for (l_208 = (-14); (l_208 == (-5)); l_208 = safe_add_func_int64_t_s_s(l_208, 1))
            { /* block id: 185 */
                uint16_t *l_534 = (void*)0;
                uint16_t *l_535 = &p_967->g_204;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_967->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 61)), permutations[(safe_mod_func_uint32_t_u_u(((!(+((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(1UL, (l_528 || (l_515 == (void*)0)))), ((safe_sub_func_uint32_t_u_u((*p_967->g_373), ((safe_mul_func_uint16_t_u_u(p_70, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_967->g_533.sd62d508d)).s41)), ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 8))(1UL, 0x96A2L, ((*l_535) = p_967->g_241.s4), 0xCA1CL, FAKE_DIVERGE(p_967->local_2_offset, get_local_id(2), 10), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(p_967->g_536.wzxz)), ((VECTOR(uint16_t, 8))(l_537.zzyywwyz)).even))).w, 1UL, 65533UL)).s4753556427435231, ((VECTOR(uint16_t, 8))(p_967->g_538.xyyyyyyy)).s4112425017731677, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(p_967->g_37[0][0], ((VECTOR(uint16_t, 2))(65526UL)), 5UL)).odd, ((VECTOR(uint16_t, 2))(65535UL))))).xxxyxyyxyyyyyyxy))).sbd))), ((VECTOR(uint16_t, 2))(1UL)), 1UL, l_281, 0x6BE4L, 1UL)).s1611325663733260)).s3)) , p_70))) || 18446744073709551614UL))) | p_967->g_258))) | p_967->g_241.s6), 10))][(safe_mod_func_uint32_t_u_u(p_967->tid, 61))]));
            }
            l_208 = ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_967->local_0_offset, get_local_id(0), 10), (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_546.s04)).yxxyyyxxyyyxxyyy)))).s6 || ((*p_967->g_373) != 4294967295UL)), ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((~p_967->g_449.s0), ((p_67 , &p_967->g_37[6][0]) == ((*l_553) = &l_220[4])))), 2)) ^ (safe_mul_func_int8_t_s_s(((!(p_967->g_564[5] = (((safe_mod_func_uint8_t_u_u(p_70, ((safe_div_func_uint32_t_u_u((p_967->g_560 = FAKE_DIVERGE(p_967->group_1_offset, get_group_id(1), 10)), (((((p_967->g_342.s3 = p_70) <= ((p_967->g_101 , 1L) == p_967->g_7[5])) >= p_967->g_536.y) || l_562) , 0x4C0E585AL))) & (***p_967->g_464)))) , (void*)0) != l_563))) == l_565[0]), 0L))))), l_180.y)))) <= 0xE0F0L))) != 0x02DAEE834C92B26CL);
        }
        for (p_967->g_99 = 23; (p_967->g_99 < (-28)); --p_967->g_99)
        { /* block id: 199 */
            int32_t *l_570[3][5][5] = {{{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9}},{{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9}},{{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9},{&p_967->g_7[5],&p_967->g_7[5],&l_102,&p_967->g_560,&p_967->g_9}}};
            uint64_t ****l_627 = &p_967->g_464;
            int i, j, k;
            (*p_967->g_569) = (*p_967->g_8);
            l_384 = 0L;
            for (p_967->g_211 = (-12); (p_967->g_211 != 4); p_967->g_211++)
            { /* block id: 204 */
                int32_t *l_580 = (void*)0;
                int32_t **l_606[8][1] = {{&l_580},{&l_580},{&l_580},{&l_580},{&l_580},{&l_580},{&l_580},{&l_580}};
                VECTOR(uint32_t, 2) l_617 = (VECTOR(uint32_t, 2))(0x7646B961L, 4294967287UL);
                uint32_t ****l_634 = &l_489;
                int i, j;
                if (((VECTOR(int32_t, 2))(p_967->g_573.s63)).hi)
                { /* block id: 205 */
                    l_508 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_967->g_574.xxxx)).wxzyzwzw)).s13)).lo;
                }
                else
                { /* block id: 207 */
                    uint32_t ***l_596[2];
                    int32_t l_602 = 0x6F756F43L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_596[i] = &l_292[2][2][0];
                    for (l_386 = 0; (l_386 == 12); ++l_386)
                    { /* block id: 210 */
                        uint8_t l_577 = 246UL;
                        int32_t **l_581 = &l_570[2][3][1];
                        if (p_67)
                            break;
                        ++l_577;
                        (*l_581) = l_580;
                        if (p_68)
                            break;
                    }
                    l_384 ^= (safe_lshift_func_int16_t_s_s(((((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_967->g_310.sf, ((void*)0 == &p_967->g_99))), p_67)) <= ((safe_rshift_func_int8_t_s_s(l_325.s7, 6)) > ((((safe_rshift_func_uint8_t_u_s((p_67 >= ((l_597[2] = (p_967->g_594 = ((*l_489) = p_967->g_594))) != &l_293[1][1][2])), 3)) , (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_967->g_574.y, l_602)), p_68))) || 0x66L) < l_281))) , 5UL) <= l_603), 13));
                    return (*p_69);
                }
                if (l_359.s2)
                    break;
                l_570[0][4][0] = &l_508;
                if ((safe_mod_func_int16_t_s_s((p_967->g_431.y , ((l_607 = &p_967->g_7[5]) != ((safe_sub_func_int32_t_s_s((((void*)0 != (*p_967->g_594)) , ((VECTOR(int32_t, 2))(0x171F0CBAL, (-1L))).odd), ((p_70 | ((-7L) < ((p_967->g_430.s1 = (safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(p_967->g_538.y, (safe_unary_minus_func_int8_t_s((safe_mod_func_int64_t_s_s((-1L), 9UL)))))), l_617.y))) > l_308))) | l_220[0]))) , (void*)0))), (-1L))))
                { /* block id: 226 */
                    uint32_t l_618 = 0UL;
                    int32_t l_642 = 1L;
                    uint16_t *l_644 = (void*)0;
                    uint32_t l_645[3];
                    int32_t l_650[9][2][3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_645[i] = 1UL;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_650[i][j][k] = (-1L);
                        }
                    }
                    if (p_67)
                        break;
                    if (l_618)
                    { /* block id: 228 */
                        VECTOR(uint16_t, 4) l_623 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0822L), 0x0822L);
                        uint64_t ****l_626 = (void*)0;
                        uint32_t ****l_633 = &l_489;
                        int8_t *l_636 = &p_967->g_564[0];
                        int8_t *l_637 = (void*)0;
                        int8_t *l_638 = (void*)0;
                        int8_t *l_639 = (void*)0;
                        int8_t *l_640 = (void*)0;
                        int8_t *l_641[2][6];
                        uint16_t *l_643 = (void*)0;
                        int32_t l_648 = 0x5F5A65C6L;
                        int32_t l_649 = 0x4FB7C6D1L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_641[i][j] = (void*)0;
                        }
                        l_220[2] |= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x2D35L, 0x312DL, ((VECTOR(uint16_t, 4))(l_623.zxyw)), 0UL, 65532UL)).s2, (safe_lshift_func_uint8_t_u_u(((l_626 == l_627) == (((l_643 = ((safe_mul_func_uint16_t_u_u((((VECTOR(uint16_t, 8))(p_967->g_630.s808d53b8)).s6 <= ((l_642 = (p_967->g_7[1] & (!((safe_sub_func_uint32_t_u_u(((l_633 == l_634) > (((*l_636) = ((safe_unary_minus_func_uint64_t_u((((*p_69) != (***l_627)) || 0x0438B25AL))) > 0x16A1L)) < 0xF5L)), 1UL)) ^ p_967->g_574.y)))) , p_967->g_430.s6)), 0x8B40L)) , &p_967->g_282)) == l_644) , (***p_967->g_464))), p_70)))), FAKE_DIVERGE(p_967->global_2_offset, get_global_id(2), 10)));
                        l_645[0]--;
                        ++p_967->g_651;
                    }
                    else
                    { /* block id: 235 */
                        uint64_t *l_654 = (void*)0;
                        return l_654;
                    }
                }
                else
                { /* block id: 238 */
                    uint32_t l_655 = 4294967295UL;
                    l_655++;
                }
            }
        }
    }
    else
    { /* block id: 243 */
        int32_t *l_658 = (void*)0;
        int32_t *l_659 = &p_967->g_99;
        int32_t *l_660 = &l_220[1];
        int32_t *l_661 = &p_967->g_99;
        int32_t *l_662 = &l_102;
        int32_t *l_663[8];
        int i;
        for (i = 0; i < 8; i++)
            l_663[i] = &l_102;
        l_664++;
        l_667--;
    }
    (*l_489) = (*l_489);
    (*p_967->g_8) = (l_362.s6 != ((((**p_967->g_464) = (**l_563)) == ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_684 = (((l_220[2] = (*p_71)) ^ ((safe_lshift_func_int8_t_s_u(l_102, 0)) != (((safe_sub_func_uint16_t_u_u(0x35A2L, (p_70 <= (safe_sub_func_int64_t_s_s(((l_680 == &p_68) , (safe_rshift_func_uint16_t_u_u(p_70, 10))), l_102))))) , (*p_71)) <= (*p_71)))) & 0x5849L)) >= 0x6B90B198L), p_70)), FAKE_DIVERGE(p_967->group_0_offset, get_group_id(0), 10))) , (void*)0)) >= 0x21BC1CA0096E1601L));
    return (*p_69);
}


/* ------------------------------------------ */
/* 
 * reads : p_967->g_82 p_967->g_86 p_967->g_8 p_967->g_87 p_967->g_9 p_967->g_83 p_967->g_3 p_967->g_99
 * writes: p_967->g_9 p_967->g_99
 */
uint32_t  func_72(uint64_t * p_73, uint64_t * p_74, int8_t  p_75, uint16_t  p_76, struct S0 * p_967)
{ /* block id: 11 */
    uint64_t **l_85 = &p_967->g_83[1];
    uint64_t ***l_84 = &l_85;
    VECTOR(int32_t, 2) l_88 = (VECTOR(int32_t, 2))(7L, 0x1FCCBB7AL);
    VECTOR(int32_t, 4) l_93 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x72037C87L), 0x72037C87L);
    VECTOR(uint64_t, 4) l_95 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL);
    int32_t *l_98 = &p_967->g_99;
    int i;
    (*l_98) &= ((VECTOR(int32_t, 8))(((*p_967->g_8) = (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(0xEEC0L, 11)) < (p_967->g_82 == ((*l_84) = &p_74))) || 0L), ((VECTOR(uint8_t, 4))(p_967->g_86.s4021)).w))), ((VECTOR(int32_t, 2))(p_967->g_87.s62)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(0x103ABED3L, 0x278915CEL, (-1L), 0x7B330CFEL)).wzzwzwxy, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(0x03C79A39L, 0x5D7A2328L)).yxyx, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_88.yyyyxxxx)).s40, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))((safe_rshift_func_int8_t_s_s(l_88.y, (safe_rshift_func_uint16_t_u_s(p_76, 13)))), (-5L), (0x18E4AA22L < ((VECTOR(int32_t, 8))(l_93.xyyxxyyz)).s0), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((!((safe_unary_minus_func_uint64_t_u((p_967->g_9 , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_95.zwxz)), (safe_div_func_int64_t_s_s((((**p_967->g_82) & l_93.w) != l_88.y), p_967->g_86.s4)), ((VECTOR(uint64_t, 8))(1UL)), 1UL, 0xF0DE344E30A6D461L, 1UL)).s8))) , l_95.w)) > p_76), 0x0FA0B358L, 3L, 0x55F64BADL)).ywzywxxw, ((VECTOR(int32_t, 8))(6L))))), ((VECTOR(int32_t, 8))((-1L)))))).s0334774014157102)).sb875, ((VECTOR(int32_t, 4))(0x58E95A60L)), ((VECTOR(int32_t, 4))(0x3B6D9131L))))), ((VECTOR(int32_t, 2))(0x4D29090FL)), (*p_967->g_8), ((VECTOR(int32_t, 4))(1L)), 0x49152248L, 0x2EE889C3L)).s9d))), ((VECTOR(int32_t, 2))(0x43F150FDL)), ((VECTOR(int32_t, 2))(5L))))), ((VECTOR(int32_t, 2))((-6L)))))).yxyx))).wxzwxxwz))).s7456755725104111)).s45)).xxyy))), 0x2C8AC772L)).s7;
    return p_75;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[61];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 61; i++)
            l_comm_values[i] = 1;
    struct S0 c_968;
    struct S0* p_967 = &c_968;
    struct S0 c_969 = {
        0x114768C0AA39ED08L, // p_967->g_3
        {0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L,0x2A3B3F36L}, // p_967->g_7
        0x76427603L, // p_967->g_9
        &p_967->g_9, // p_967->g_8
        {{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L},{0x361943ECL,6L}}, // p_967->g_37
        (VECTOR(uint16_t, 16))(0xEBDAL, (VECTOR(uint16_t, 4))(0xEBDAL, (VECTOR(uint16_t, 2))(0xEBDAL, 0xAC39L), 0xAC39L), 0xAC39L, 0xEBDAL, 0xAC39L, (VECTOR(uint16_t, 2))(0xEBDAL, 0xAC39L), (VECTOR(uint16_t, 2))(0xEBDAL, 0xAC39L), 0xEBDAL, 0xAC39L, 0xEBDAL, 0xAC39L), // p_967->g_48
        {&p_967->g_3,&p_967->g_3,&p_967->g_3,&p_967->g_3,&p_967->g_3,&p_967->g_3,&p_967->g_3}, // p_967->g_83
        &p_967->g_83[1], // p_967->g_82
        (VECTOR(uint8_t, 8))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0xBCL), 0xBCL), 0xBCL, 251UL, 0xBCL), // p_967->g_86
        (VECTOR(int32_t, 8))(0x7D024CA9L, (VECTOR(int32_t, 4))(0x7D024CA9L, (VECTOR(int32_t, 2))(0x7D024CA9L, 0x2ED16080L), 0x2ED16080L), 0x2ED16080L, 0x7D024CA9L, 0x2ED16080L), // p_967->g_87
        0x33D6DB51L, // p_967->g_99
        0xA8693438L, // p_967->g_101
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x257AL), 0x257AL), 0x257AL, (-1L), 0x257AL, (VECTOR(int16_t, 2))((-1L), 0x257AL), (VECTOR(int16_t, 2))((-1L), 0x257AL), (-1L), 0x257AL, (-1L), 0x257AL), // p_967->g_179
        0x4FDFL, // p_967->g_204
        (-1L), // p_967->g_205
        0UL, // p_967->g_211
        (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0L), 0L), 0L, 9L, 0L), // p_967->g_241
        0L, // p_967->g_258
        4UL, // p_967->g_282
        (void*)0, // p_967->g_295
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0UL, 18446744073709551609UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL), 0UL, 18446744073709551609UL, 0UL, 18446744073709551609UL), // p_967->g_310
        (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-5L)), (-5L)), (-5L), 2L, (-5L)), // p_967->g_342
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x43L), 0x43L), 0x43L, 1L, 0x43L), // p_967->g_363
        4294967293UL, // p_967->g_374
        &p_967->g_374, // p_967->g_373
        0x5F640F76L, // p_967->g_377
        (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x0364L), 0x0364L), 0x0364L, (-7L), 0x0364L), // p_967->g_430
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), // p_967->g_431
        {0x3B03L,0L,0x3B03L,0x3B03L,0L,0x3B03L,0x3B03L,0L,0x3B03L}, // p_967->g_440
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0BL), 0x0BL), 0x0BL, (-1L), 0x0BL), // p_967->g_449
        &p_967->g_82, // p_967->g_464
        &p_967->g_464, // p_967->g_463
        {&p_967->g_464,&p_967->g_464,&p_967->g_464,&p_967->g_464,&p_967->g_464,&p_967->g_464,&p_967->g_464}, // p_967->g_467
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), // p_967->g_505
        0x1314L, // p_967->g_518
        {{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205},{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205},{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205},{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205},{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205},{&p_967->g_37[2][0],&p_967->g_9,(void*)0,&p_967->g_377,(void*)0,&p_967->g_9,&p_967->g_37[2][0],&p_967->g_7[0],&p_967->g_99,&p_967->g_205}}, // p_967->g_520
        (VECTOR(uint16_t, 16))(0x0B58L, (VECTOR(uint16_t, 4))(0x0B58L, (VECTOR(uint16_t, 2))(0x0B58L, 0x887BL), 0x887BL), 0x887BL, 0x0B58L, 0x887BL, (VECTOR(uint16_t, 2))(0x0B58L, 0x887BL), (VECTOR(uint16_t, 2))(0x0B58L, 0x887BL), 0x0B58L, 0x887BL, 0x0B58L, 0x887BL), // p_967->g_533
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x4E26L), 0x4E26L), // p_967->g_536
        (VECTOR(uint16_t, 2))(0x3DD0L, 0xBB6FL), // p_967->g_538
        0x0AADA7C7L, // p_967->g_560
        {0x15L,0x15L,0x15L,0x15L,0x15L,0x15L,0x15L,0x15L}, // p_967->g_564
        {&p_967->g_9,&p_967->g_9,&p_967->g_9,&p_967->g_9}, // p_967->g_568
        &p_967->g_9, // p_967->g_569
        (VECTOR(int32_t, 8))(0x1138B450L, (VECTOR(int32_t, 4))(0x1138B450L, (VECTOR(int32_t, 2))(0x1138B450L, (-2L)), (-2L)), (-2L), 0x1138B450L, (-2L)), // p_967->g_573
        (VECTOR(int32_t, 2))(1L, 0x2BE2FEE4L), // p_967->g_574
        &p_967->g_101, // p_967->g_595
        &p_967->g_595, // p_967->g_594
        (VECTOR(uint16_t, 16))(0xA456L, (VECTOR(uint16_t, 4))(0xA456L, (VECTOR(uint16_t, 2))(0xA456L, 0x2208L), 0x2208L), 0x2208L, 0xA456L, 0x2208L, (VECTOR(uint16_t, 2))(0xA456L, 0x2208L), (VECTOR(uint16_t, 2))(0xA456L, 0x2208L), 0xA456L, 0x2208L, 0xA456L, 0x2208L), // p_967->g_630
        0xF51338D015C9966AL, // p_967->g_651
        &p_967->g_9, // p_967->g_700
        &p_967->g_258, // p_967->g_707
        &p_967->g_707, // p_967->g_706
        &p_967->g_706, // p_967->g_705
        0xF55E6861E9E8E485L, // p_967->g_720
        0L, // p_967->g_727
        &p_967->g_99, // p_967->g_783
        &p_967->g_783, // p_967->g_782
        {65529UL,65529UL,65529UL}, // p_967->g_806
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), // p_967->g_807
        0x6C74C86AL, // p_967->g_816
        (void*)0, // p_967->g_822
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF2017E75L), 0xF2017E75L), 0xF2017E75L, 4294967295UL, 0xF2017E75L), // p_967->g_869
        &p_967->g_783, // p_967->g_875
        (VECTOR(int32_t, 2))(0x2AF219BFL, 0L), // p_967->g_884
        &p_967->g_783, // p_967->g_886
        (VECTOR(uint32_t, 2))(4294967292UL, 1UL), // p_967->g_905
        &p_967->g_595, // p_967->g_913
        &p_967->g_913, // p_967->g_912
        &p_967->g_912, // p_967->g_911
        (VECTOR(int64_t, 8))(0x46E987D8AE9F236FL, (VECTOR(int64_t, 4))(0x46E987D8AE9F236FL, (VECTOR(int64_t, 2))(0x46E987D8AE9F236FL, 0x19CE090DF21D57DEL), 0x19CE090DF21D57DEL), 0x19CE090DF21D57DEL, 0x46E987D8AE9F236FL, 0x19CE090DF21D57DEL), // p_967->g_919
        (VECTOR(int64_t, 2))((-10L), 3L), // p_967->g_920
        (VECTOR(uint64_t, 2))(0x4722319D2D17DF4BL, 0x6F4CA19D1F04D3FEL), // p_967->g_931
        &p_967->g_783, // p_967->g_932
        (VECTOR(int64_t, 16))(0x186D3912F578048CL, (VECTOR(int64_t, 4))(0x186D3912F578048CL, (VECTOR(int64_t, 2))(0x186D3912F578048CL, 0x28F075D0B99ECB6FL), 0x28F075D0B99ECB6FL), 0x28F075D0B99ECB6FL, 0x186D3912F578048CL, 0x28F075D0B99ECB6FL, (VECTOR(int64_t, 2))(0x186D3912F578048CL, 0x28F075D0B99ECB6FL), (VECTOR(int64_t, 2))(0x186D3912F578048CL, 0x28F075D0B99ECB6FL), 0x186D3912F578048CL, 0x28F075D0B99ECB6FL, 0x186D3912F578048CL, 0x28F075D0B99ECB6FL), // p_967->g_933
        &p_967->g_783, // p_967->g_966
        0, // p_967->v_collective
        sequence_input[get_global_id(0)], // p_967->global_0_offset
        sequence_input[get_global_id(1)], // p_967->global_1_offset
        sequence_input[get_global_id(2)], // p_967->global_2_offset
        sequence_input[get_local_id(0)], // p_967->local_0_offset
        sequence_input[get_local_id(1)], // p_967->local_1_offset
        sequence_input[get_local_id(2)], // p_967->local_2_offset
        sequence_input[get_group_id(0)], // p_967->group_0_offset
        sequence_input[get_group_id(1)], // p_967->group_1_offset
        sequence_input[get_group_id(2)], // p_967->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 61)), permutations[0][get_linear_local_id()])), // p_967->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_968 = c_969;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_967);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_967->g_3, "p_967->g_3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_967->g_7[i], "p_967->g_7[i]", print_hash_value);

    }
    transparent_crc(p_967->g_9, "p_967->g_9", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_967->g_37[i][j], "p_967->g_37[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_967->g_48.s0, "p_967->g_48.s0", print_hash_value);
    transparent_crc(p_967->g_48.s1, "p_967->g_48.s1", print_hash_value);
    transparent_crc(p_967->g_48.s2, "p_967->g_48.s2", print_hash_value);
    transparent_crc(p_967->g_48.s3, "p_967->g_48.s3", print_hash_value);
    transparent_crc(p_967->g_48.s4, "p_967->g_48.s4", print_hash_value);
    transparent_crc(p_967->g_48.s5, "p_967->g_48.s5", print_hash_value);
    transparent_crc(p_967->g_48.s6, "p_967->g_48.s6", print_hash_value);
    transparent_crc(p_967->g_48.s7, "p_967->g_48.s7", print_hash_value);
    transparent_crc(p_967->g_48.s8, "p_967->g_48.s8", print_hash_value);
    transparent_crc(p_967->g_48.s9, "p_967->g_48.s9", print_hash_value);
    transparent_crc(p_967->g_48.sa, "p_967->g_48.sa", print_hash_value);
    transparent_crc(p_967->g_48.sb, "p_967->g_48.sb", print_hash_value);
    transparent_crc(p_967->g_48.sc, "p_967->g_48.sc", print_hash_value);
    transparent_crc(p_967->g_48.sd, "p_967->g_48.sd", print_hash_value);
    transparent_crc(p_967->g_48.se, "p_967->g_48.se", print_hash_value);
    transparent_crc(p_967->g_48.sf, "p_967->g_48.sf", print_hash_value);
    transparent_crc(p_967->g_86.s0, "p_967->g_86.s0", print_hash_value);
    transparent_crc(p_967->g_86.s1, "p_967->g_86.s1", print_hash_value);
    transparent_crc(p_967->g_86.s2, "p_967->g_86.s2", print_hash_value);
    transparent_crc(p_967->g_86.s3, "p_967->g_86.s3", print_hash_value);
    transparent_crc(p_967->g_86.s4, "p_967->g_86.s4", print_hash_value);
    transparent_crc(p_967->g_86.s5, "p_967->g_86.s5", print_hash_value);
    transparent_crc(p_967->g_86.s6, "p_967->g_86.s6", print_hash_value);
    transparent_crc(p_967->g_86.s7, "p_967->g_86.s7", print_hash_value);
    transparent_crc(p_967->g_87.s0, "p_967->g_87.s0", print_hash_value);
    transparent_crc(p_967->g_87.s1, "p_967->g_87.s1", print_hash_value);
    transparent_crc(p_967->g_87.s2, "p_967->g_87.s2", print_hash_value);
    transparent_crc(p_967->g_87.s3, "p_967->g_87.s3", print_hash_value);
    transparent_crc(p_967->g_87.s4, "p_967->g_87.s4", print_hash_value);
    transparent_crc(p_967->g_87.s5, "p_967->g_87.s5", print_hash_value);
    transparent_crc(p_967->g_87.s6, "p_967->g_87.s6", print_hash_value);
    transparent_crc(p_967->g_87.s7, "p_967->g_87.s7", print_hash_value);
    transparent_crc(p_967->g_99, "p_967->g_99", print_hash_value);
    transparent_crc(p_967->g_101, "p_967->g_101", print_hash_value);
    transparent_crc(p_967->g_179.s0, "p_967->g_179.s0", print_hash_value);
    transparent_crc(p_967->g_179.s1, "p_967->g_179.s1", print_hash_value);
    transparent_crc(p_967->g_179.s2, "p_967->g_179.s2", print_hash_value);
    transparent_crc(p_967->g_179.s3, "p_967->g_179.s3", print_hash_value);
    transparent_crc(p_967->g_179.s4, "p_967->g_179.s4", print_hash_value);
    transparent_crc(p_967->g_179.s5, "p_967->g_179.s5", print_hash_value);
    transparent_crc(p_967->g_179.s6, "p_967->g_179.s6", print_hash_value);
    transparent_crc(p_967->g_179.s7, "p_967->g_179.s7", print_hash_value);
    transparent_crc(p_967->g_179.s8, "p_967->g_179.s8", print_hash_value);
    transparent_crc(p_967->g_179.s9, "p_967->g_179.s9", print_hash_value);
    transparent_crc(p_967->g_179.sa, "p_967->g_179.sa", print_hash_value);
    transparent_crc(p_967->g_179.sb, "p_967->g_179.sb", print_hash_value);
    transparent_crc(p_967->g_179.sc, "p_967->g_179.sc", print_hash_value);
    transparent_crc(p_967->g_179.sd, "p_967->g_179.sd", print_hash_value);
    transparent_crc(p_967->g_179.se, "p_967->g_179.se", print_hash_value);
    transparent_crc(p_967->g_179.sf, "p_967->g_179.sf", print_hash_value);
    transparent_crc(p_967->g_204, "p_967->g_204", print_hash_value);
    transparent_crc(p_967->g_205, "p_967->g_205", print_hash_value);
    transparent_crc(p_967->g_211, "p_967->g_211", print_hash_value);
    transparent_crc(p_967->g_241.s0, "p_967->g_241.s0", print_hash_value);
    transparent_crc(p_967->g_241.s1, "p_967->g_241.s1", print_hash_value);
    transparent_crc(p_967->g_241.s2, "p_967->g_241.s2", print_hash_value);
    transparent_crc(p_967->g_241.s3, "p_967->g_241.s3", print_hash_value);
    transparent_crc(p_967->g_241.s4, "p_967->g_241.s4", print_hash_value);
    transparent_crc(p_967->g_241.s5, "p_967->g_241.s5", print_hash_value);
    transparent_crc(p_967->g_241.s6, "p_967->g_241.s6", print_hash_value);
    transparent_crc(p_967->g_241.s7, "p_967->g_241.s7", print_hash_value);
    transparent_crc(p_967->g_258, "p_967->g_258", print_hash_value);
    transparent_crc(p_967->g_282, "p_967->g_282", print_hash_value);
    transparent_crc(p_967->g_310.s0, "p_967->g_310.s0", print_hash_value);
    transparent_crc(p_967->g_310.s1, "p_967->g_310.s1", print_hash_value);
    transparent_crc(p_967->g_310.s2, "p_967->g_310.s2", print_hash_value);
    transparent_crc(p_967->g_310.s3, "p_967->g_310.s3", print_hash_value);
    transparent_crc(p_967->g_310.s4, "p_967->g_310.s4", print_hash_value);
    transparent_crc(p_967->g_310.s5, "p_967->g_310.s5", print_hash_value);
    transparent_crc(p_967->g_310.s6, "p_967->g_310.s6", print_hash_value);
    transparent_crc(p_967->g_310.s7, "p_967->g_310.s7", print_hash_value);
    transparent_crc(p_967->g_310.s8, "p_967->g_310.s8", print_hash_value);
    transparent_crc(p_967->g_310.s9, "p_967->g_310.s9", print_hash_value);
    transparent_crc(p_967->g_310.sa, "p_967->g_310.sa", print_hash_value);
    transparent_crc(p_967->g_310.sb, "p_967->g_310.sb", print_hash_value);
    transparent_crc(p_967->g_310.sc, "p_967->g_310.sc", print_hash_value);
    transparent_crc(p_967->g_310.sd, "p_967->g_310.sd", print_hash_value);
    transparent_crc(p_967->g_310.se, "p_967->g_310.se", print_hash_value);
    transparent_crc(p_967->g_310.sf, "p_967->g_310.sf", print_hash_value);
    transparent_crc(p_967->g_342.s0, "p_967->g_342.s0", print_hash_value);
    transparent_crc(p_967->g_342.s1, "p_967->g_342.s1", print_hash_value);
    transparent_crc(p_967->g_342.s2, "p_967->g_342.s2", print_hash_value);
    transparent_crc(p_967->g_342.s3, "p_967->g_342.s3", print_hash_value);
    transparent_crc(p_967->g_342.s4, "p_967->g_342.s4", print_hash_value);
    transparent_crc(p_967->g_342.s5, "p_967->g_342.s5", print_hash_value);
    transparent_crc(p_967->g_342.s6, "p_967->g_342.s6", print_hash_value);
    transparent_crc(p_967->g_342.s7, "p_967->g_342.s7", print_hash_value);
    transparent_crc(p_967->g_363.s0, "p_967->g_363.s0", print_hash_value);
    transparent_crc(p_967->g_363.s1, "p_967->g_363.s1", print_hash_value);
    transparent_crc(p_967->g_363.s2, "p_967->g_363.s2", print_hash_value);
    transparent_crc(p_967->g_363.s3, "p_967->g_363.s3", print_hash_value);
    transparent_crc(p_967->g_363.s4, "p_967->g_363.s4", print_hash_value);
    transparent_crc(p_967->g_363.s5, "p_967->g_363.s5", print_hash_value);
    transparent_crc(p_967->g_363.s6, "p_967->g_363.s6", print_hash_value);
    transparent_crc(p_967->g_363.s7, "p_967->g_363.s7", print_hash_value);
    transparent_crc(p_967->g_374, "p_967->g_374", print_hash_value);
    transparent_crc(p_967->g_377, "p_967->g_377", print_hash_value);
    transparent_crc(p_967->g_430.s0, "p_967->g_430.s0", print_hash_value);
    transparent_crc(p_967->g_430.s1, "p_967->g_430.s1", print_hash_value);
    transparent_crc(p_967->g_430.s2, "p_967->g_430.s2", print_hash_value);
    transparent_crc(p_967->g_430.s3, "p_967->g_430.s3", print_hash_value);
    transparent_crc(p_967->g_430.s4, "p_967->g_430.s4", print_hash_value);
    transparent_crc(p_967->g_430.s5, "p_967->g_430.s5", print_hash_value);
    transparent_crc(p_967->g_430.s6, "p_967->g_430.s6", print_hash_value);
    transparent_crc(p_967->g_430.s7, "p_967->g_430.s7", print_hash_value);
    transparent_crc(p_967->g_431.x, "p_967->g_431.x", print_hash_value);
    transparent_crc(p_967->g_431.y, "p_967->g_431.y", print_hash_value);
    transparent_crc(p_967->g_431.z, "p_967->g_431.z", print_hash_value);
    transparent_crc(p_967->g_431.w, "p_967->g_431.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_967->g_440[i], "p_967->g_440[i]", print_hash_value);

    }
    transparent_crc(p_967->g_449.s0, "p_967->g_449.s0", print_hash_value);
    transparent_crc(p_967->g_449.s1, "p_967->g_449.s1", print_hash_value);
    transparent_crc(p_967->g_449.s2, "p_967->g_449.s2", print_hash_value);
    transparent_crc(p_967->g_449.s3, "p_967->g_449.s3", print_hash_value);
    transparent_crc(p_967->g_449.s4, "p_967->g_449.s4", print_hash_value);
    transparent_crc(p_967->g_449.s5, "p_967->g_449.s5", print_hash_value);
    transparent_crc(p_967->g_449.s6, "p_967->g_449.s6", print_hash_value);
    transparent_crc(p_967->g_449.s7, "p_967->g_449.s7", print_hash_value);
    transparent_crc(p_967->g_505.x, "p_967->g_505.x", print_hash_value);
    transparent_crc(p_967->g_505.y, "p_967->g_505.y", print_hash_value);
    transparent_crc(p_967->g_505.z, "p_967->g_505.z", print_hash_value);
    transparent_crc(p_967->g_505.w, "p_967->g_505.w", print_hash_value);
    transparent_crc(p_967->g_518, "p_967->g_518", print_hash_value);
    transparent_crc(p_967->g_533.s0, "p_967->g_533.s0", print_hash_value);
    transparent_crc(p_967->g_533.s1, "p_967->g_533.s1", print_hash_value);
    transparent_crc(p_967->g_533.s2, "p_967->g_533.s2", print_hash_value);
    transparent_crc(p_967->g_533.s3, "p_967->g_533.s3", print_hash_value);
    transparent_crc(p_967->g_533.s4, "p_967->g_533.s4", print_hash_value);
    transparent_crc(p_967->g_533.s5, "p_967->g_533.s5", print_hash_value);
    transparent_crc(p_967->g_533.s6, "p_967->g_533.s6", print_hash_value);
    transparent_crc(p_967->g_533.s7, "p_967->g_533.s7", print_hash_value);
    transparent_crc(p_967->g_533.s8, "p_967->g_533.s8", print_hash_value);
    transparent_crc(p_967->g_533.s9, "p_967->g_533.s9", print_hash_value);
    transparent_crc(p_967->g_533.sa, "p_967->g_533.sa", print_hash_value);
    transparent_crc(p_967->g_533.sb, "p_967->g_533.sb", print_hash_value);
    transparent_crc(p_967->g_533.sc, "p_967->g_533.sc", print_hash_value);
    transparent_crc(p_967->g_533.sd, "p_967->g_533.sd", print_hash_value);
    transparent_crc(p_967->g_533.se, "p_967->g_533.se", print_hash_value);
    transparent_crc(p_967->g_533.sf, "p_967->g_533.sf", print_hash_value);
    transparent_crc(p_967->g_536.x, "p_967->g_536.x", print_hash_value);
    transparent_crc(p_967->g_536.y, "p_967->g_536.y", print_hash_value);
    transparent_crc(p_967->g_536.z, "p_967->g_536.z", print_hash_value);
    transparent_crc(p_967->g_536.w, "p_967->g_536.w", print_hash_value);
    transparent_crc(p_967->g_538.x, "p_967->g_538.x", print_hash_value);
    transparent_crc(p_967->g_538.y, "p_967->g_538.y", print_hash_value);
    transparent_crc(p_967->g_560, "p_967->g_560", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_967->g_564[i], "p_967->g_564[i]", print_hash_value);

    }
    transparent_crc(p_967->g_573.s0, "p_967->g_573.s0", print_hash_value);
    transparent_crc(p_967->g_573.s1, "p_967->g_573.s1", print_hash_value);
    transparent_crc(p_967->g_573.s2, "p_967->g_573.s2", print_hash_value);
    transparent_crc(p_967->g_573.s3, "p_967->g_573.s3", print_hash_value);
    transparent_crc(p_967->g_573.s4, "p_967->g_573.s4", print_hash_value);
    transparent_crc(p_967->g_573.s5, "p_967->g_573.s5", print_hash_value);
    transparent_crc(p_967->g_573.s6, "p_967->g_573.s6", print_hash_value);
    transparent_crc(p_967->g_573.s7, "p_967->g_573.s7", print_hash_value);
    transparent_crc(p_967->g_574.x, "p_967->g_574.x", print_hash_value);
    transparent_crc(p_967->g_574.y, "p_967->g_574.y", print_hash_value);
    transparent_crc(p_967->g_630.s0, "p_967->g_630.s0", print_hash_value);
    transparent_crc(p_967->g_630.s1, "p_967->g_630.s1", print_hash_value);
    transparent_crc(p_967->g_630.s2, "p_967->g_630.s2", print_hash_value);
    transparent_crc(p_967->g_630.s3, "p_967->g_630.s3", print_hash_value);
    transparent_crc(p_967->g_630.s4, "p_967->g_630.s4", print_hash_value);
    transparent_crc(p_967->g_630.s5, "p_967->g_630.s5", print_hash_value);
    transparent_crc(p_967->g_630.s6, "p_967->g_630.s6", print_hash_value);
    transparent_crc(p_967->g_630.s7, "p_967->g_630.s7", print_hash_value);
    transparent_crc(p_967->g_630.s8, "p_967->g_630.s8", print_hash_value);
    transparent_crc(p_967->g_630.s9, "p_967->g_630.s9", print_hash_value);
    transparent_crc(p_967->g_630.sa, "p_967->g_630.sa", print_hash_value);
    transparent_crc(p_967->g_630.sb, "p_967->g_630.sb", print_hash_value);
    transparent_crc(p_967->g_630.sc, "p_967->g_630.sc", print_hash_value);
    transparent_crc(p_967->g_630.sd, "p_967->g_630.sd", print_hash_value);
    transparent_crc(p_967->g_630.se, "p_967->g_630.se", print_hash_value);
    transparent_crc(p_967->g_630.sf, "p_967->g_630.sf", print_hash_value);
    transparent_crc(p_967->g_651, "p_967->g_651", print_hash_value);
    transparent_crc(p_967->g_720, "p_967->g_720", print_hash_value);
    transparent_crc(p_967->g_727, "p_967->g_727", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_967->g_806[i], "p_967->g_806[i]", print_hash_value);

    }
    transparent_crc(p_967->g_807.x, "p_967->g_807.x", print_hash_value);
    transparent_crc(p_967->g_807.y, "p_967->g_807.y", print_hash_value);
    transparent_crc(p_967->g_816, "p_967->g_816", print_hash_value);
    transparent_crc(p_967->g_869.s0, "p_967->g_869.s0", print_hash_value);
    transparent_crc(p_967->g_869.s1, "p_967->g_869.s1", print_hash_value);
    transparent_crc(p_967->g_869.s2, "p_967->g_869.s2", print_hash_value);
    transparent_crc(p_967->g_869.s3, "p_967->g_869.s3", print_hash_value);
    transparent_crc(p_967->g_869.s4, "p_967->g_869.s4", print_hash_value);
    transparent_crc(p_967->g_869.s5, "p_967->g_869.s5", print_hash_value);
    transparent_crc(p_967->g_869.s6, "p_967->g_869.s6", print_hash_value);
    transparent_crc(p_967->g_869.s7, "p_967->g_869.s7", print_hash_value);
    transparent_crc(p_967->g_884.x, "p_967->g_884.x", print_hash_value);
    transparent_crc(p_967->g_884.y, "p_967->g_884.y", print_hash_value);
    transparent_crc(p_967->g_905.x, "p_967->g_905.x", print_hash_value);
    transparent_crc(p_967->g_905.y, "p_967->g_905.y", print_hash_value);
    transparent_crc(p_967->g_919.s0, "p_967->g_919.s0", print_hash_value);
    transparent_crc(p_967->g_919.s1, "p_967->g_919.s1", print_hash_value);
    transparent_crc(p_967->g_919.s2, "p_967->g_919.s2", print_hash_value);
    transparent_crc(p_967->g_919.s3, "p_967->g_919.s3", print_hash_value);
    transparent_crc(p_967->g_919.s4, "p_967->g_919.s4", print_hash_value);
    transparent_crc(p_967->g_919.s5, "p_967->g_919.s5", print_hash_value);
    transparent_crc(p_967->g_919.s6, "p_967->g_919.s6", print_hash_value);
    transparent_crc(p_967->g_919.s7, "p_967->g_919.s7", print_hash_value);
    transparent_crc(p_967->g_920.x, "p_967->g_920.x", print_hash_value);
    transparent_crc(p_967->g_920.y, "p_967->g_920.y", print_hash_value);
    transparent_crc(p_967->g_931.x, "p_967->g_931.x", print_hash_value);
    transparent_crc(p_967->g_931.y, "p_967->g_931.y", print_hash_value);
    transparent_crc(p_967->g_933.s0, "p_967->g_933.s0", print_hash_value);
    transparent_crc(p_967->g_933.s1, "p_967->g_933.s1", print_hash_value);
    transparent_crc(p_967->g_933.s2, "p_967->g_933.s2", print_hash_value);
    transparent_crc(p_967->g_933.s3, "p_967->g_933.s3", print_hash_value);
    transparent_crc(p_967->g_933.s4, "p_967->g_933.s4", print_hash_value);
    transparent_crc(p_967->g_933.s5, "p_967->g_933.s5", print_hash_value);
    transparent_crc(p_967->g_933.s6, "p_967->g_933.s6", print_hash_value);
    transparent_crc(p_967->g_933.s7, "p_967->g_933.s7", print_hash_value);
    transparent_crc(p_967->g_933.s8, "p_967->g_933.s8", print_hash_value);
    transparent_crc(p_967->g_933.s9, "p_967->g_933.s9", print_hash_value);
    transparent_crc(p_967->g_933.sa, "p_967->g_933.sa", print_hash_value);
    transparent_crc(p_967->g_933.sb, "p_967->g_933.sb", print_hash_value);
    transparent_crc(p_967->g_933.sc, "p_967->g_933.sc", print_hash_value);
    transparent_crc(p_967->g_933.sd, "p_967->g_933.sd", print_hash_value);
    transparent_crc(p_967->g_933.se, "p_967->g_933.se", print_hash_value);
    transparent_crc(p_967->g_933.sf, "p_967->g_933.sf", print_hash_value);
    transparent_crc(p_967->v_collective, "p_967->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 60; i++)
            transparent_crc(p_967->g_special_values[i + 60 * get_linear_group_id()], "p_967->g_special_values[i + 60 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 60; i++)
            transparent_crc(p_967->l_special_values[i], "p_967->l_special_values[i]", print_hash_value);
    transparent_crc(p_967->l_comm_values[get_linear_local_id()], "p_967->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_967->g_comm_values[get_linear_group_id() * 61 + get_linear_local_id()], "p_967->g_comm_values[get_linear_group_id() * 61 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
