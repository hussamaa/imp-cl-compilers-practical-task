// --atomics 95 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 47,81,1 -l 1,1,1
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

// Seed: 2284028048

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
};

struct S1 {
   int32_t  f0;
   uint16_t  f1;
   struct S0  f2;
   int32_t  f3;
   int32_t  f4;
   volatile int64_t  f5;
   uint32_t  f6;
   volatile int8_t  f7;
   volatile int32_t  f8;
   int16_t  f9;
};

struct S2 {
   int32_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
   struct S1  f3;
   uint32_t  f4;
   uint8_t  f5;
   int16_t  f6;
   int64_t  f7;
};

struct S5 {
   int8_t  f0;
};

struct S4 {
   volatile uint8_t  f0;
   volatile int8_t  f1;
};

union U6 {
   struct S4  f0;
   struct S2  f1;
   struct S5  f2;
};

struct S7 {
    volatile VECTOR(int16_t, 16) g_5;
    int8_t g_7;
    volatile int8_t g_14;
    volatile int8_t *g_13;
    int8_t g_16;
    int8_t *g_15;
    VECTOR(uint32_t, 4) g_26;
    VECTOR(uint32_t, 2) g_48;
    int32_t g_58;
    int32_t g_86;
    VECTOR(uint32_t, 8) g_87;
    struct S0 g_90;
    struct S2 g_125;
    volatile uint32_t g_127;
    volatile uint32_t *g_126;
    int32_t *g_132;
    VECTOR(int16_t, 4) g_196;
    struct S2 g_213;
    struct S2 *g_212;
    uint32_t g_242;
    struct S2 g_250[10];
    struct S5 g_262;
    struct S2 g_267;
    struct S2 g_270;
    VECTOR(int32_t, 2) g_275;
    VECTOR(int8_t, 8) g_284;
    VECTOR(int8_t, 8) g_285;
    VECTOR(int8_t, 16) g_287;
    VECTOR(int8_t, 8) g_290;
    VECTOR(int8_t, 2) g_292;
    VECTOR(int8_t, 16) g_293;
    VECTOR(int8_t, 8) g_295;
    VECTOR(int16_t, 16) g_312;
    VECTOR(int16_t, 2) g_320;
    VECTOR(int16_t, 2) g_321;
    VECTOR(int8_t, 4) g_339;
    volatile struct S5 g_369;
    volatile struct S5 *g_368;
    VECTOR(int32_t, 2) g_413;
    uint16_t *g_422;
    uint16_t *g_424;
    int64_t *g_427;
    VECTOR(uint8_t, 16) g_437;
    VECTOR(int8_t, 2) g_439;
    VECTOR(int8_t, 4) g_450;
    VECTOR(uint64_t, 16) g_451;
    uint8_t *g_480;
    VECTOR(int32_t, 2) g_482;
    volatile int32_t g_495;
    volatile int32_t *g_494;
    uint64_t g_501;
    int8_t g_547;
    union U6 g_555;
    union U6 g_566;
    union U6 g_567;
    int32_t *g_569;
    VECTOR(uint16_t, 16) g_575;
    VECTOR(int16_t, 4) g_576;
    VECTOR(uint64_t, 4) g_614;
    union U6 g_626;
    union U6 g_629;
    union U6 g_632;
    union U6 *g_631;
    union U6 g_634[9];
    VECTOR(int32_t, 16) g_637;
    VECTOR(uint32_t, 4) g_640;
    VECTOR(int32_t, 8) g_641;
    struct S2 g_683;
    struct S2 g_688;
    struct S2 *g_687;
    volatile struct S0 g_697;
    volatile struct S0 *g_696;
    volatile struct S0 * volatile *g_695;
    uint64_t g_708;
    struct S5 *g_746;
    struct S5 **g_745;
    int64_t g_757[4];
    volatile VECTOR(int32_t, 2) g_760;
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
uint64_t  func_1(struct S7 * p_761);
uint64_t  func_8(int16_t  p_9, int8_t  p_10, int32_t  p_11, int8_t * p_12, struct S7 * p_761);
struct S2 * func_19(struct S5  p_20, int32_t  p_21, struct S7 * p_761);
uint64_t  func_28(int8_t * p_29, int32_t  p_30, uint32_t  p_31, struct S7 * p_761);
int64_t  func_35(int16_t  p_36, int16_t  p_37, struct S0  p_38, struct S0  p_39, struct S7 * p_761);
struct S0  func_42(uint8_t  p_43, int8_t * p_44, struct S2 * p_45, struct S7 * p_761);
int32_t * func_92(int8_t * p_93, struct S2 * p_94, uint32_t * p_95, struct S2 * p_96, struct S7 * p_761);
int8_t * func_97(int64_t  p_98, int32_t  p_99, int64_t * p_100, uint32_t * p_101, struct S2 * p_102, struct S7 * p_761);
int32_t  func_103(uint64_t  p_104, struct S2 * p_105, int64_t * p_106, int64_t * p_107, uint32_t  p_108, struct S7 * p_761);
struct S2 * func_109(uint16_t  p_110, int32_t * p_111, struct S7 * p_761);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_761->g_5 p_761->g_13 p_761->l_comm_values p_761->g_15 p_761->g_16 p_761->g_comm_values p_761->g_132 p_761->g_250.f2 p_761->g_125.f2 p_761->g_267.f3.f6 p_761->g_569 p_761->g_267.f2 p_761->g_284 p_761->g_695 p_761->g_125.f3.f0 p_761->g_708 p_761->g_501 p_761->g_213.f0 p_761->g_242 p_761->g_212 p_761->g_87 p_761->g_90 p_761->g_48 p_761->g_26 p_761->g_267.f0 p_761->g_688.f4 p_761->g_745 p_761->g_576 p_761->g_637 p_761->g_125.f0 p_761->g_760 p_761->g_285
 * writes: p_761->g_7 p_761->g_16 p_761->g_250.f2 p_761->g_125.f2 p_761->g_267.f2 p_761->g_212 p_761->g_687 p_761->g_708 p_761->g_501 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_86 p_761->g_213.f6 p_761->g_242 p_761->g_213.f3.f2.f0 p_761->g_58 p_761->g_132 p_761->g_87 p_761->l_comm_values p_761->g_26 p_761->g_629.f1.f5 p_761->g_745 p_761->g_451 p_761->g_757 p_761->g_125.f0
 */
uint64_t  func_1(struct S7 * p_761)
{ /* block id: 4 */
    VECTOR(int32_t, 4) l_2 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x69934B0BL), 0x69934B0BL);
    int8_t *l_6[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_758 = &p_761->g_626.f1.f3.f3;
    int32_t *l_759 = &p_761->g_125.f0;
    int i;
    (*l_759) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_2.xz)), (int32_t)0x317B722BL))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((*p_761->g_569) = ((p_761->g_757[2] = ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(0x3857L, 0L)).yyxxxyyyxxyxxyxy, (int16_t)l_2.w))).lo)).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_761->g_5.sf8e3)).wwyyxxxxwwwxwyyz)), ((VECTOR(int16_t, 8))(0x79D4L, (-2L), 1L, 5L, ((VECTOR(int16_t, 2))(0x1534L, 0x637BL)), 1L, 0x6271L)).s0316206276002746))).s55b6))))).y, ((p_761->g_7 = l_2.y) && 0x01L))) | func_8(l_2.w, (l_2.w , (l_6[1] != p_761->g_13)), p_761->l_comm_values[(safe_mod_func_uint32_t_u_u(p_761->tid, 1))], p_761->g_15, p_761))) && l_2.x)), ((VECTOR(int32_t, 2))(0L)), (*p_761->g_132), ((VECTOR(int32_t, 2))(0x2682CBF5L)), (-2L), (-1L))).s65)).xyxyyyxyyxxxxyyx))).s59ad)), 0x042CA121L, 0x300D9C74L)).s5;
    (*l_759) = ((VECTOR(int32_t, 8))(p_761->g_760.xxyxxyyy)).s0;
    return p_761->g_285.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_16 p_761->g_comm_values p_761->g_132 p_761->g_250.f2 p_761->g_125.f2 p_761->g_267.f3.f6 p_761->g_569 p_761->g_267.f2 p_761->g_284 p_761->g_695 p_761->g_125.f3.f0 p_761->g_708 p_761->g_501 p_761->g_213.f0 p_761->g_242 p_761->g_212 p_761->g_87 p_761->g_90 p_761->g_48 p_761->g_26 p_761->g_267.f0 p_761->g_688.f4 p_761->g_745 p_761->g_15 p_761->g_576 p_761->g_637
 * writes: p_761->g_16 p_761->g_250.f2 p_761->g_125.f2 p_761->g_267.f2 p_761->g_212 p_761->g_687 p_761->g_708 p_761->g_501 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_86 p_761->g_213.f6 p_761->g_242 p_761->g_213.f3.f2.f0 p_761->g_58 p_761->g_132 p_761->g_87 p_761->l_comm_values p_761->g_26 p_761->g_629.f1.f5 p_761->g_745 p_761->g_451
 */
uint64_t  func_8(int16_t  p_9, int8_t  p_10, int32_t  p_11, int8_t * p_12, struct S7 * p_761)
{ /* block id: 6 */
    int16_t l_689 = 0x2985L;
    struct S0 *l_693 = &p_761->g_213.f3.f2;
    struct S0 **l_692 = &l_693;
    struct S5 l_694 = {0x59L};
    int32_t l_705 = 0x3286FFCBL;
    int32_t l_723 = 0L;
    uint64_t *l_729[4] = {&p_761->g_708,&p_761->g_708,&p_761->g_708,&p_761->g_708};
    struct S5 *l_737 = &l_694;
    int i;
    for (p_761->g_16 = (-3); (p_761->g_16 > 8); p_761->g_16++)
    { /* block id: 9 */
        struct S5 l_22 = {7L};
        int32_t l_23 = 0L;
        int64_t *l_24[1];
        int32_t l_25 = 0L;
        struct S2 **l_684 = &p_761->g_212;
        struct S2 *l_686 = (void*)0;
        struct S2 **l_685[7];
        VECTOR(uint64_t, 4) l_700 = (VECTOR(uint64_t, 4))(0x57AC1306DAF0CD7DL, (VECTOR(uint64_t, 2))(0x57AC1306DAF0CD7DL, 0UL), 0UL);
        int32_t l_706 = 1L;
        uint64_t *l_707 = &p_761->g_708;
        VECTOR(uint32_t, 2) l_726 = (VECTOR(uint32_t, 2))(0x9222DBF2L, 4294967295UL);
        VECTOR(int64_t, 4) l_742 = (VECTOR(int64_t, 4))(0x4ECBE1774441C33DL, (VECTOR(int64_t, 2))(0x4ECBE1774441C33DL, 0x62C32EF080CA36AFL), 0x62C32EF080CA36AFL);
        struct S5 ***l_747 = (void*)0;
        struct S5 ***l_748 = &p_761->g_745;
        int32_t l_755 = 0x6DC5C463L;
        uint64_t *l_756[4];
        int i;
        for (i = 0; i < 1; i++)
            l_24[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_685[i] = &l_686;
        for (i = 0; i < 4; i++)
            l_756[i] = &p_761->g_501;
        p_761->g_687 = ((*l_684) = func_19(l_22, ((l_25 |= (((l_23 ^= 0x40C8E82B3F54C3DCL) ^ p_761->g_16) < p_761->g_comm_values[p_761->tid])) , ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(3L, 0x761CA727L)), 0x63A47399L)).y), p_761));
        if (((p_761->g_284.s0 > (l_689 & (safe_add_func_int64_t_s_s(((l_692 == (l_694 , p_761->g_695)) >= (safe_lshift_func_uint8_t_u_u(p_761->g_125.f3.f0, 2))), (((*l_707) ^= ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(l_700.yz)).yyyyyxyyyyyyxyyx, (uint64_t)(safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((l_705 = (0L < (((l_694.f0 <= (p_761->g_437.sf ^ 251UL)) == p_10) <= p_11))) || 0x00C92247129D38D6L) < p_11), (-1L))), l_706))))).s6) , FAKE_DIVERGE(p_761->group_2_offset, get_group_id(2), 10)))))) && p_9))
        { /* block id: 342 */
            uint64_t *l_721 = (void*)0;
            uint64_t *l_722[1];
            uint64_t **l_730 = &l_729[3];
            struct S2 **l_733 = &l_686;
            uint8_t *l_734 = (void*)0;
            uint8_t *l_735 = &p_761->g_629.f1.f5;
            int32_t l_736 = 9L;
            int i;
            for (i = 0; i < 1; i++)
                l_722[i] = &p_761->g_501;
            (*p_761->g_569) ^= (safe_sub_func_uint64_t_u_u(p_11, (l_22 , l_706)));
            (*p_761->g_569) ^= (((void*)0 == &p_761->g_696) , (safe_lshift_func_uint16_t_u_s(l_700.x, p_10)));
            l_736 = (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_10, ((((*l_735) = (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x899AL, ((-9L) | (--p_761->g_501)))) >= (l_705 = (((VECTOR(uint32_t, 4))(l_726.xxxx)).w , l_706))), ((safe_div_func_int16_t_s_s((l_23 = (((*l_730) = l_729[2]) != (void*)0)), (safe_sub_func_int32_t_s_s((l_723 ^= ((func_42(p_9, &p_761->g_547, func_109(p_10, &p_761->g_58, p_761), p_761) , &l_686) != l_733)), l_689)))) & l_25)))) || 3UL) || 7L))), GROUP_DIVERGE(2, 1)));
            (*p_761->g_569) |= 0x016266C6L;
        }
        else
        { /* block id: 353 */
            return p_761->g_267.f0;
        }
        if (l_694.f0)
            break;
        (*p_761->g_569) = ((((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xD5D90B2727A14F7CL, 18446744073709551614UL)).yyxxyyyx)).s2127404273144044, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0UL, (p_761->g_451.s4 = (l_705 = ((l_737 == (p_761->g_688.f4 , &l_22)) , ((safe_sub_func_int16_t_s_s(((p_10 = ((safe_lshift_func_int16_t_s_s(((l_723 = (((((VECTOR(int64_t, 2))(l_742.yw)).odd < (safe_rshift_func_uint8_t_u_u((((*l_748) = p_761->g_745) != (void*)0), l_706))) || (-6L)) >= (((((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((0xEAL | (l_694.f0 != (*p_761->g_15))) ^ p_9), l_23)) & l_742.y) < (-6L)), 4)), FAKE_DIVERGE(p_761->global_1_offset, get_global_id(1), 10))) | 0x24L) , p_10) , l_755) | p_761->g_576.x))) & 3UL), 6)) && 0x0B4CL)) != l_726.y), p_761->g_637.s7)) && 0x5BF91D5BD28ED578L)))), 0xEA6F8402CFB068A0L, 0x847A873A7F6CFF56L)).yxzwzzzyzzwzxzzx))))).s2 && 0x733CD1ABE4DF9C38L) || l_22.f0);
    }
    (*p_761->g_569) &= (-4L);
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_26 p_761->g_637 p_761->g_640 p_761->g_132 p_761->g_125.f2 p_761->g_641 p_761->g_614 p_761->g_422 p_761->g_125.f3.f1 p_761->g_16 p_761->g_267.f3.f6 p_761->g_569 p_761->g_267.f2 p_761->g_250.f2
 * writes: p_761->g_267.f3.f1 p_761->g_125.f2 p_761->g_267.f2 p_761->g_250.f2
 */
struct S2 * func_19(struct S5  p_20, int32_t  p_21, struct S7 * p_761)
{ /* block id: 12 */
    VECTOR(uint32_t, 2) l_27 = (VECTOR(uint32_t, 2))(1UL, 4294967290UL);
    int8_t *l_32 = &p_761->g_16;
    struct S2 *l_682 = &p_761->g_683;
    int i;
    (*p_761->g_569) &= (((((VECTOR(uint32_t, 2))(p_761->g_26.yx)).odd != ((VECTOR(uint32_t, 8))(l_27.xxxyyxxx)).s2) == l_27.x) || (func_28(l_32, p_20.f0, l_27.x, p_761) , p_761->g_267.f3.f6));
    return l_682;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_637 p_761->g_640 p_761->g_132 p_761->g_125.f2 p_761->g_641 p_761->g_614 p_761->g_422 p_761->g_125.f3.f1 p_761->g_16 p_761->g_250.f2
 * writes: p_761->g_267.f3.f1 p_761->g_125.f2 p_761->g_250.f2
 */
uint64_t  func_28(int8_t * p_29, int32_t  p_30, uint32_t  p_31, struct S7 * p_761)
{ /* block id: 13 */
    struct S0 l_41 = {0x05L};
    struct S2 *l_47 = (void*)0;
    int32_t l_604 = 0x191E4ACCL;
    VECTOR(uint64_t, 4) l_613 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF7AE9209390EFAB9L), 0xF7AE9209390EFAB9L);
    union U6 *l_628 = &p_761->g_629;
    int64_t *l_630 = (void*)0;
    VECTOR(int32_t, 2) l_635 = (VECTOR(int32_t, 2))(0L, 1L);
    VECTOR(int32_t, 8) l_636 = (VECTOR(int32_t, 8))(0x7055C401L, (VECTOR(int32_t, 4))(0x7055C401L, (VECTOR(int32_t, 2))(0x7055C401L, 1L), 1L), 1L, 0x7055C401L, 1L);
    uint32_t *l_639 = &p_761->g_267.f3.f6;
    uint32_t **l_638 = &l_639;
    VECTOR(int32_t, 2) l_642 = (VECTOR(int32_t, 2))((-1L), 1L);
    int i;
    for (p_31 = (-9); (p_31 != 2); p_31 = safe_add_func_int8_t_s_s(p_31, 2))
    { /* block id: 16 */
        int32_t l_40[3];
        int8_t *l_46 = &p_761->g_16;
        int32_t *l_601 = (void*)0;
        int32_t *l_602 = (void*)0;
        int32_t *l_603[4];
        VECTOR(uint64_t, 8) l_612 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x588A8F256A55549BL), 0x588A8F256A55549BL), 0x588A8F256A55549BL, 0UL, 0x588A8F256A55549BL);
        VECTOR(uint64_t, 2) l_615 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL);
        struct S2 **l_618[2];
        VECTOR(int16_t, 4) l_621 = (VECTOR(int16_t, 4))(0x0DC3L, (VECTOR(int16_t, 2))(0x0DC3L, (-9L)), (-9L));
        union U6 *l_625 = &p_761->g_626;
        int i;
        for (i = 0; i < 3; i++)
            l_40[i] = 1L;
        for (i = 0; i < 4; i++)
            l_603[i] = &p_761->g_250[3].f0;
        for (i = 0; i < 2; i++)
            l_618[i] = &p_761->g_212;
        (1 + 1);
    }
    (*p_761->g_132) = ((((((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).xxxy)), ((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 2))(l_635.xx)), ((VECTOR(int32_t, 8))(l_636.s24450022)), ((VECTOR(int32_t, 2))(p_761->g_637.s7a)), (l_638 == (void*)0), 0x71403D1EL, 0x1A0DE76BL)).s83df))).z > ((VECTOR(uint32_t, 4))(p_761->g_640.ywxw)).z) , (l_604 <= ((-1L) ^ ((((*p_761->g_132) != (l_635.y | p_30)) && ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(3L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_761->g_641.s71552263)).s31)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_642.yyxx)).odd)).xyyx)), (-3L), 0x4B2F1BD9L)), (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*p_761->g_422) = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x2F1AL, 65528UL)))).xxyyyyyyxxyyyxxx)).s8 && (safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((l_642.x < (safe_unary_minus_func_int8_t_s((((&l_639 != &l_639) & p_30) <= GROUP_DIVERGE(1, 1))))), l_642.x)), p_761->g_614.y)))))), p_30)), l_636.s6)) <= p_30), 14)), p_761->g_125.f3.f1)), (-3L), ((VECTOR(int32_t, 2))(1L)), 0x6B2DB351L, 0x5AA4259AL, 0x1E563F0DL)), ((VECTOR(int32_t, 16))(0x08050FC4L))))).s4) , 0UL)))) > (*p_29)) == p_30);
    if ((atomic_inc(&p_761->g_atomic_input[95 * get_linear_group_id() + 28]) == 4))
    { /* block id: 313 */
        uint32_t l_657 = 0xFBE9C707L;
        int32_t l_676 = 0x2AF29F55L;
        int32_t l_677 = (-7L);
        int32_t l_678 = 0L;
        uint32_t l_679 = 4294967286UL;
        if (l_657)
        { /* block id: 314 */
            int32_t l_658[8] = {0x7E658437L,0x7E658437L,0x7E658437L,0x7E658437L,0x7E658437L,0x7E658437L,0x7E658437L,0x7E658437L};
            int i;
            for (l_658[5] = 0; (l_658[5] > 21); l_658[5]++)
            { /* block id: 317 */
                uint32_t l_661 = 0xDCFDDF8CL;
                --l_661;
            }
        }
        else
        { /* block id: 320 */
            uint16_t l_664 = 65528UL;
            l_664--;
            for (l_664 = 25; (l_664 > 39); l_664++)
            { /* block id: 324 */
                struct S0 l_669 = {248UL};
                int32_t l_671 = 1L;
                int32_t *l_670[7][8][3] = {{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}},{{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671}}};
                int32_t *l_672 = &l_671;
                uint16_t l_673[7][5][4] = {{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}},{{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL},{0x0BB8L,0xA75DL,65535UL,1UL}}};
                VECTOR(int32_t, 2) l_674 = (VECTOR(int32_t, 2))(0x0CE9A468L, 0x0CEBCDF6L);
                int32_t l_675 = 0x111453FCL;
                int i, j, k;
                l_670[2][3][2] = (l_669 , (l_672 = l_670[2][3][2]));
                l_675 = (l_673[1][4][3] , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_674.xy)))), 0x4925D0ADL, 0x76ED5D86L)).x);
            }
        }
        l_677 ^= l_676;
        --l_679;
        unsigned int result = 0;
        result += l_657;
        result += l_676;
        result += l_677;
        result += l_678;
        result += l_679;
        atomic_add(&p_761->g_special_values[95 * get_linear_group_id() + 28], result);
    }
    else
    { /* block id: 332 */
        (1 + 1);
    }
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_comm_values p_761->g_58 p_761->g_48 p_761->g_26 p_761->g_87 p_761->g_90 p_761->g_126 p_761->g_15 p_761->g_16 p_761->g_132 p_761->g_196 p_761->g_212 p_761->g_125.f4 p_761->g_125.f2 p_761->g_125.f3.f9 p_761->g_125.f0 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_250.f2 p_761->g_242 p_761->g_213.f6 p_761->g_275 p_761->g_284 p_761->g_285 p_761->g_287 p_761->g_290 p_761->g_292 p_761->g_293 p_761->g_295 p_761->g_250.f3.f2.f0 p_761->g_125.f6 p_761->g_213.f3.f1 p_761->g_312 p_761->g_320 p_761->g_321 p_761->g_213.f7 p_761->g_250.f5 p_761->g_213.f3.f4 p_761->l_comm_values p_761->g_125.f3.f2.f0 p_761->g_270.f0 p_761->g_339 p_761->g_125.f3.f6 p_761->g_270.f3.f6 p_761->g_267.f3.f9 p_761->g_368 p_761->g_250.f3.f9 p_761->g_213.f2 p_761->g_270.f5 p_761->g_267.f3.f2.f0 p_761->g_422 p_761->g_427 p_761->g_267.f3.f1 p_761->g_250.f6 p_761->g_480 p_761->g_482 p_761->g_267.f3.f0 p_761->g_494 p_761->g_437 p_761->g_501 p_761->g_270.f6 p_761->g_213.f3.f3 p_761->g_555.f1.f7 p_761->g_262 p_761->g_125.f3.f4 p_761->g_439 p_761->g_575 p_761->g_576 p_761->g_270.f3.f1
 * writes: p_761->l_comm_values p_761->g_26 p_761->g_87 p_761->g_125.f3.f1 p_761->g_58 p_761->g_125.f2 p_761->g_125.f3.f0 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_86 p_761->g_213.f6 p_761->g_242 p_761->g_213.f3.f2.f0 p_761->g_132 p_761->g_125.f0 p_761->g_250.f2 p_761->g_267.f3.f2.f0 p_761->g_90.f0 p_761->g_267.f3.f9 p_761->g_262.f0 p_761->g_267.f2 p_761->g_422 p_761->g_424 p_761->g_267.f6 p_761->g_275 p_761->g_262 p_761->g_250.f6 p_761->g_501 p_761->g_270.f5 p_761->g_270.f6 p_761->g_270.f3.f2.f0 p_761->g_213.f3.f3 p_761->g_267.f3.f2 p_761->g_212 p_761->g_270.f0 p_761->g_555.f1.f7 p_761->g_569
 */
int64_t  func_35(int16_t  p_36, int16_t  p_37, struct S0  p_38, struct S0  p_39, struct S7 * p_761)
{ /* block id: 25 */
    int32_t *l_91 = &p_761->g_58;
    VECTOR(uint8_t, 2) l_112 = (VECTOR(uint8_t, 2))(0xF9L, 1UL);
    VECTOR(uint32_t, 2) l_121 = (VECTOR(uint32_t, 2))(0x97AAA56DL, 0x2F441AF3L);
    struct S2 *l_124 = &p_761->g_125;
    uint16_t *l_128 = &p_761->g_125.f3.f1;
    int64_t *l_129[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_130 = 1L;
    int32_t l_131 = 3L;
    struct S2 **l_253 = &l_124;
    int32_t l_254 = 0L;
    struct S2 *l_266 = &p_761->g_267;
    struct S2 *l_269 = &p_761->g_270;
    int32_t **l_568[8][8][4] = {{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}},{{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132},{(void*)0,&p_761->g_132,(void*)0,&p_761->g_132}}};
    VECTOR(uint16_t, 8) l_577 = (VECTOR(uint16_t, 8))(0x4AA2L, (VECTOR(uint16_t, 4))(0x4AA2L, (VECTOR(uint16_t, 2))(0x4AA2L, 0x8B70L), 0x8B70L), 0x8B70L, 0x4AA2L, 0x8B70L);
    VECTOR(uint16_t, 8) l_578 = (VECTOR(uint16_t, 8))(0x9C6BL, (VECTOR(uint16_t, 4))(0x9C6BL, (VECTOR(uint16_t, 2))(0x9C6BL, 65532UL), 65532UL), 65532UL, 0x9C6BL, 65532UL);
    VECTOR(uint16_t, 8) l_579 = (VECTOR(uint16_t, 8))(0x0BF3L, (VECTOR(uint16_t, 4))(0x0BF3L, (VECTOR(uint16_t, 2))(0x0BF3L, 0x69DFL), 0x69DFL), 0x69DFL, 0x0BF3L, 0x69DFL);
    VECTOR(uint16_t, 8) l_580 = (VECTOR(uint16_t, 8))(0x4318L, (VECTOR(uint16_t, 4))(0x4318L, (VECTOR(uint16_t, 2))(0x4318L, 0x37AAL), 0x37AAL), 0x37AAL, 0x4318L, 0x37AAL);
    VECTOR(uint16_t, 2) l_581 = (VECTOR(uint16_t, 2))(0x73AAL, 0x2087L);
    VECTOR(uint16_t, 2) l_582 = (VECTOR(uint16_t, 2))(3UL, 0x7061L);
    VECTOR(uint16_t, 4) l_583 = (VECTOR(uint16_t, 4))(0x5BE1L, (VECTOR(uint16_t, 2))(0x5BE1L, 1UL), 1UL);
    uint8_t l_596 = 0x2CL;
    uint64_t l_598 = 0x43EA027ADD40B811L;
    int i, j, k;
    l_91 = &p_761->g_58;
    p_761->g_569 = func_92(func_97(p_761->g_comm_values[p_761->tid], func_103(p_38.f0, (p_37 , ((*l_253) = func_109((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_112.xxyxyyyyxyxyyxxy)).hi)))).s2 ^ (((safe_mod_func_int16_t_s_s(p_36, (safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((l_131 |= (GROUP_DIVERGE(0, 1) >= ((safe_add_func_int64_t_s_s((l_130 = ((*l_91) = ((-5L) ^ ((((VECTOR(uint32_t, 8))(l_121.xyxyyxyx)).s5 ^ ((((*l_128) = ((func_42((safe_mul_func_uint16_t_u_u((*l_91), p_761->g_48.y)), &p_761->g_16, l_124, p_761) , (void*)0) == p_761->g_126)) < p_37) | p_37)) | p_761->g_48.y)))), FAKE_DIVERGE(p_761->group_1_offset, get_group_id(1), 10))) || 7L))) != 1L), p_36)), (*p_761->g_15))))) && p_761->g_87.s5) <= FAKE_DIVERGE(p_761->global_2_offset, get_global_id(2), 10))), p_761->g_132, p_761))), l_129[3], l_129[0], l_254, p_761), l_129[0], l_91, l_266, p_761), l_266, l_91, l_269, p_761);
    if ((((safe_mod_func_uint8_t_u_u(((((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(0x198AL, 0UL, 65535UL, 65535UL, (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u(p_38.f0, 0xD8L)) ^ (p_761->g_196.z >= (p_761->g_439.y , p_761->g_250[3].f5))))), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x604DL, 0xE814L)).yyxxyyxyyyxxyyyy)).s39, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(p_761->g_575.sca01)).even)))))).odd, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(p_761->g_576.yyzwyyzxxwxwzwww)).hi))))).s2455105170070055, ((VECTOR(uint16_t, 2))(l_577.s32)).yxyyxyxxxxyxxxyx, ((VECTOR(uint16_t, 4))(l_578.s7253)).wxxzxzyzxwyyxzxx))).s05)).xxyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_579.s6104404450422340)).sd5)).yyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(l_580.s65)).yyyxxyxy, ((VECTOR(uint16_t, 8))(l_581.yyxxyyxy))))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_582.xyxxxxyyyxyyyxyy)).lo)), ((VECTOR(uint16_t, 2))(0xDB02L, 2UL)).xxxxyxyy))).even))))))).zwyxzwzx, ((VECTOR(uint16_t, 2))(0xC573L, 65535UL)).yyyxyyyy))), 0UL, 65533UL)).s4c77, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x00B8L, 6UL)).xxyxxyxxyxyxyyyy)), ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_583.wyyz)).wyxxyxzzzxwzywwy)).s7c58)).xwzxywwx, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0x061BL, ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((&l_124 == &p_761->g_212) , ((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))((safe_lshift_func_uint8_t_u_s((9UL | (0x10L | (*l_91))), (*p_761->g_15))), ((VECTOR(int8_t, 2))(0x28L)), 0x12L)).wxzxywywxzwxyxwx, ((VECTOR(int8_t, 16))(0x55L))))).s7 || p_37), (*l_91))) >= 0x1A54B87B46820BB7L), (*l_91))) , p_36), l_596)), (*l_91))), p_36)) , (*p_761->g_422))), 0xB41FL, 1UL, 0xBDDCL, ((VECTOR(uint16_t, 4))(5UL)))).s76)), ((VECTOR(uint16_t, 2))(0x5360L)), ((VECTOR(uint16_t, 2))(0xC36DL)), 0xC020L)), ((VECTOR(uint16_t, 4))(1UL)), 65534UL, 65535UL, 0x067EL)).s4ca4)).ywxwyxzw)).s2363727030237422, ((VECTOR(uint16_t, 16))(0x679DL))))).odd))).s71, ((VECTOR(uint16_t, 2))(0xB9A9L))))).yxyyyxyxyxxyyyxx))))).s15, ((VECTOR(uint16_t, 2))(0x407CL))))).xyyy))).y || 0x0C97L) , 0x8DL), (*l_91))) , p_36) , (-6L)))
    { /* block id: 289 */
        (*l_91) |= 1L;
    }
    else
    { /* block id: 291 */
        struct S0 l_597 = {0x3FL};
        (*l_253) = (void*)0;
        l_597 = l_597;
    }
    --l_598;
    return (*l_91);
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_48 p_761->g_26 p_761->g_87 p_761->g_90
 * writes: p_761->l_comm_values p_761->g_26 p_761->g_87
 */
struct S0  func_42(uint8_t  p_43, int8_t * p_44, struct S2 * p_45, struct S7 * p_761)
{ /* block id: 17 */
    int64_t *l_51 = (void*)0;
    int64_t *l_52 = (void*)0;
    int64_t *l_53 = (void*)0;
    int64_t *l_54[4];
    uint32_t *l_55[9][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    VECTOR(uint32_t, 8) l_56 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0UL), 0UL), 0UL, 4294967290UL, 0UL);
    int32_t *l_57 = &p_761->g_58;
    int32_t *l_59 = &p_761->g_58;
    int32_t *l_60 = (void*)0;
    int32_t l_61 = 0L;
    int32_t *l_62 = &p_761->g_58;
    int32_t *l_63 = &l_61;
    int32_t *l_64 = &p_761->g_58;
    int32_t *l_65 = &l_61;
    int32_t *l_66 = (void*)0;
    int32_t *l_67 = (void*)0;
    int32_t *l_68 = &l_61;
    int32_t l_69 = 7L;
    int32_t *l_70 = (void*)0;
    int32_t l_71 = 7L;
    int32_t *l_72 = &l_61;
    int32_t *l_73 = &l_71;
    int32_t *l_74 = &p_761->g_58;
    int32_t *l_75 = (void*)0;
    int32_t l_76 = 0x214D58F1L;
    int32_t *l_77 = &p_761->g_58;
    int32_t *l_78 = &l_76;
    int32_t *l_79 = (void*)0;
    int32_t *l_80 = &l_69;
    int32_t *l_81 = &l_61;
    int32_t l_82[8];
    int32_t *l_83 = &l_82[2];
    int32_t *l_84 = &l_76;
    int32_t *l_85[6] = {&l_82[6],&l_82[4],&l_82[6],&l_82[6],&l_82[4],&l_82[6]};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_54[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_82[i] = 1L;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_761->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_761->g_48.yyxx)), (p_761->g_26.z |= (safe_sub_func_int64_t_s_s((p_761->l_comm_values[(safe_mod_func_uint32_t_u_u(p_761->tid, 1))] = (p_43 ^ p_43)), p_761->g_48.x))), ((VECTOR(uint32_t, 2))(l_56.s00)), 4294967288UL)).s2, 10))][(safe_mod_func_uint32_t_u_u(p_761->tid, 1))]));
    --p_761->g_87.s2;
    return p_761->g_90;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_275 p_761->g_58 p_761->g_132 p_761->g_250.f2 p_761->g_125.f2 p_761->g_284 p_761->g_285 p_761->g_287 p_761->g_290 p_761->g_292 p_761->g_293 p_761->g_295 p_761->g_250.f3.f2.f0 p_761->g_125.f6 p_761->g_213.f3.f1 p_761->g_312 p_761->g_15 p_761->g_16 p_761->g_320 p_761->g_321 p_761->g_213.f7 p_761->g_250.f5 p_761->g_213.f3.f4 p_761->l_comm_values p_761->g_125.f3.f2.f0 p_761->g_270.f0 p_761->g_339 p_761->g_125.f3.f6 p_761->g_270.f3.f6 p_761->g_90.f0 p_761->g_267.f3.f9 p_761->g_368 p_761->g_250.f3.f9 p_761->g_213.f2 p_761->g_270.f5 p_761->g_267.f3.f2.f0 p_761->g_422 p_761->g_427 p_761->g_267.f3.f1 p_761->g_250.f6 p_761->g_125.f3.f3 p_761->g_480 p_761->g_482 p_761->g_267.f3.f0 p_761->g_494 p_761->g_437 p_761->g_501 p_761->g_270.f6 p_761->g_213.f3.f3 p_761->g_213.f0 p_761->g_242 p_761->g_212 p_761->g_555.f1.f7 p_761->g_262 p_761->g_87 p_761->g_125.f3.f4
 * writes: p_761->g_250.f2 p_761->g_125.f2 p_761->g_267.f3.f2.f0 p_761->g_58 p_761->g_90.f0 p_761->g_267.f3.f9 p_761->g_132 p_761->g_262.f0 p_761->g_267.f2 p_761->g_422 p_761->g_424 p_761->g_267.f6 p_761->g_275 p_761->g_262 p_761->g_250.f6 p_761->g_501 p_761->g_270.f5 p_761->g_270.f6 p_761->g_270.f3.f2.f0 p_761->g_213.f3.f3 p_761->g_267.f3.f2 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_86 p_761->g_213.f6 p_761->g_242 p_761->g_213.f3.f2.f0 p_761->g_212 p_761->g_270.f0 p_761->g_555.f1.f7
 */
int32_t * func_92(int8_t * p_93, struct S2 * p_94, uint32_t * p_95, struct S2 * p_96, struct S7 * p_761)
{ /* block id: 139 */
    struct S5 *l_271 = &p_761->g_262;
    struct S5 **l_272 = &l_271;
    VECTOR(int32_t, 4) l_273 = (VECTOR(int32_t, 4))(0x7E0EA120L, (VECTOR(int32_t, 2))(0x7E0EA120L, 0L), 0L);
    VECTOR(int32_t, 8) l_274 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x5CD05746L), 0x5CD05746L), 0x5CD05746L, (-6L), 0x5CD05746L);
    VECTOR(int32_t, 4) l_276 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x22A02113L), 0x22A02113L);
    VECTOR(int8_t, 16) l_281 = (VECTOR(int8_t, 16))(0x7AL, (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, (-1L)), (-1L)), (-1L), 0x7AL, (-1L), (VECTOR(int8_t, 2))(0x7AL, (-1L)), (VECTOR(int8_t, 2))(0x7AL, (-1L)), 0x7AL, (-1L), 0x7AL, (-1L));
    VECTOR(int8_t, 2) l_283 = (VECTOR(int8_t, 2))(0x61L, 1L);
    VECTOR(int8_t, 4) l_286 = (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x4BL), 0x4BL);
    VECTOR(int8_t, 4) l_288 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x07L), 0x07L);
    VECTOR(int8_t, 16) l_289 = (VECTOR(int8_t, 16))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 3L), 3L), 3L, 0x78L, 3L, (VECTOR(int8_t, 2))(0x78L, 3L), (VECTOR(int8_t, 2))(0x78L, 3L), 0x78L, 3L, 0x78L, 3L);
    VECTOR(int8_t, 8) l_291 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    VECTOR(int8_t, 4) l_294 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-9L)), (-9L));
    int64_t l_298 = 0x3F68952115EF3ABFL;
    int64_t *l_299 = &l_298;
    uint8_t *l_306 = &p_761->g_267.f3.f2.f0;
    int32_t l_307 = 0L;
    VECTOR(int16_t, 2) l_315 = (VECTOR(int16_t, 2))(0x782BL, 0x3EEAL);
    VECTOR(int16_t, 2) l_318 = (VECTOR(int16_t, 2))((-7L), 1L);
    VECTOR(int8_t, 16) l_324 = (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0x22L), 0x22L), 0x22L, 0x1DL, 0x22L, (VECTOR(int8_t, 2))(0x1DL, 0x22L), (VECTOR(int8_t, 2))(0x1DL, 0x22L), 0x1DL, 0x22L, 0x1DL, 0x22L);
    VECTOR(int8_t, 4) l_338 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x15L), 0x15L);
    VECTOR(uint32_t, 8) l_386 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), 4294967286UL), 4294967286UL, 4294967295UL, 4294967286UL);
    uint32_t l_399 = 0x6BAD3585L;
    VECTOR(uint8_t, 8) l_438 = (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 251UL), 251UL), 251UL, 254UL, 251UL);
    VECTOR(int8_t, 2) l_440 = (VECTOR(int8_t, 2))((-1L), 0x43L);
    uint16_t l_487 = 0UL;
    uint32_t l_496 = 0x6E8D5083L;
    int16_t l_499 = 0L;
    int32_t l_500 = (-1L);
    int i;
    (*l_272) = l_271;
    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(l_273.xx)).xxyyxxxy, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_274.s4412164271021512)), ((VECTOR(int32_t, 2))(0x3C41B950L, (-1L))).yyyyxxxyyyxxyxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(p_761->g_275.yxxxyxxx)).lo, ((VECTOR(int32_t, 8))(((*p_761->g_132) = ((*p_95) > (((VECTOR(int32_t, 2))(0x2958C279L, 0x3EF7379AL)).lo | 0L))), (*p_761->g_132), 1L, 6L, 0x303A89F3L, 1L, (-1L), (-1L))).odd))).xwzzwwwywzyyzzzy, ((VECTOR(int32_t, 16))(l_276.zzyyxywyyywzzyww))))).lo)).s7057721354551434))).even))), ((VECTOR(int32_t, 4))((((l_276.y , ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(((((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_int8_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_281.sa515)).ywyywwxz)).s5 != (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(l_283.yy)).xyxyxxxy, ((VECTOR(int8_t, 8))(0x5BL, 0x39L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(p_761->g_284.s0506)).yxxxxzzxxzyxwzyz))).sfe43, ((VECTOR(int8_t, 8))(p_761->g_285.s24711361)).odd))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_286.zwzy)), ((VECTOR(int8_t, 4))(p_761->g_287.s8352)))).s42))), 1L, 1L)).x, 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_288.xwxw)))).odd)), (-1L), 9L)), ((VECTOR(int8_t, 2))(l_289.s5c)).yyxxxyyx))).s3576177747070427, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(p_761->g_290.s6766257037634465)).sa61a))).wyxwwyxy, ((VECTOR(int8_t, 4))(l_291.s3321)).wxywzyxy))).s1621752204115570)).s1449)), 0x10L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(0x69L, 0x10L, 0x3EL, 1L)).hi))), (-1L))).hi)).xwxxwwxzwzxxxzxy))).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(p_761->g_292.xxyxxxyyyyyyxxyy)).even, ((VECTOR(int8_t, 2))(p_761->g_293.sec)).yyyxyxxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_294.zzyzywxw)).s2407366065011364)).hi))).s1775044624702742)).sd7bc)), 0x16L, ((VECTOR(int8_t, 8))(p_761->g_295.s66176517)), (-3L), 0x43L)).s8b60)).zzzxywzw))).s2264754363075401)).s2ef3)).y))), (((*p_761->g_132) = 0x41FFAFB9L) ^ ((0x3F403EBEA63802CEL < ((((safe_add_func_int64_t_s_s(((*l_299) = l_298), (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(6L, 0x43L)).yxyx)).y, (safe_lshift_func_uint8_t_u_s(((*l_306) = p_761->g_250[3].f3.f2.f0), l_307)))), l_273.z)))) <= p_761->g_125.f6) || p_761->g_275.x) < 0L)) >= 1UL)))))) > 1L) != l_286.y) ^ (-3L)), l_283.y, (-9L), ((VECTOR(int64_t, 4))(0x0EF02D1D45230432L)), 1L, 0x639718DDC099395FL, l_288.w, p_761->g_213.f3.f1, ((VECTOR(int64_t, 4))(0x63A9FBFA3C9DEEECL)), 3L)).hi, (int64_t)l_289.sa))).s5) & (-7L)) < l_276.y), ((VECTOR(int32_t, 2))(0x1FF2559CL)), 0x1FA5839FL)), ((VECTOR(int32_t, 2))(0x093DC634L)), 0x22137369L, 0x6CCBE0E9L)).lo)).s7)
    { /* block id: 145 */
        VECTOR(int16_t, 8) l_313 = (VECTOR(int16_t, 8))(0x16FDL, (VECTOR(int16_t, 4))(0x16FDL, (VECTOR(int16_t, 2))(0x16FDL, (-1L)), (-1L)), (-1L), 0x16FDL, (-1L));
        VECTOR(int16_t, 4) l_314 = (VECTOR(int16_t, 4))(0x42D3L, (VECTOR(int16_t, 2))(0x42D3L, (-1L)), (-1L));
        VECTOR(int16_t, 8) l_316 = (VECTOR(int16_t, 8))(0x44D8L, (VECTOR(int16_t, 4))(0x44D8L, (VECTOR(int16_t, 2))(0x44D8L, 0x0C8CL), 0x0C8CL), 0x0C8CL, 0x44D8L, 0x0C8CL);
        VECTOR(int16_t, 16) l_317 = (VECTOR(int16_t, 16))(0x3E12L, (VECTOR(int16_t, 4))(0x3E12L, (VECTOR(int16_t, 2))(0x3E12L, 1L), 1L), 1L, 0x3E12L, 1L, (VECTOR(int16_t, 2))(0x3E12L, 1L), (VECTOR(int16_t, 2))(0x3E12L, 1L), 0x3E12L, 1L, 0x3E12L, 1L);
        VECTOR(int16_t, 4) l_322 = (VECTOR(int16_t, 4))(0x528DL, (VECTOR(int16_t, 2))(0x528DL, (-1L)), (-1L));
        VECTOR(int16_t, 16) l_323 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int16_t, 2))((-9L), 0L), (VECTOR(int16_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L);
        uint8_t **l_331 = (void*)0;
        int32_t *l_332[7][3] = {{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2},{&p_761->g_267.f2,&p_761->g_267.f2,&p_761->g_267.f2}};
        uint64_t l_333 = 18446744073709551614UL;
        VECTOR(int8_t, 16) l_342 = (VECTOR(int8_t, 16))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 1L), 1L), 1L, 0x44L, 1L, (VECTOR(int8_t, 2))(0x44L, 1L), (VECTOR(int8_t, 2))(0x44L, 1L), 0x44L, 1L, 0x44L, 1L);
        int16_t *l_362 = &p_761->g_267.f6;
        uint64_t l_390 = 1UL;
        VECTOR(uint16_t, 8) l_393 = (VECTOR(uint16_t, 8))(0x62D0L, (VECTOR(uint16_t, 4))(0x62D0L, (VECTOR(uint16_t, 2))(0x62D0L, 0x96C1L), 0x96C1L), 0x96C1L, 0x62D0L, 0x96C1L);
        VECTOR(uint16_t, 16) l_394 = (VECTOR(uint16_t, 16))(0x5EDCL, (VECTOR(uint16_t, 4))(0x5EDCL, (VECTOR(uint16_t, 2))(0x5EDCL, 0xD433L), 0xD433L), 0xD433L, 0x5EDCL, 0xD433L, (VECTOR(uint16_t, 2))(0x5EDCL, 0xD433L), (VECTOR(uint16_t, 2))(0x5EDCL, 0xD433L), 0x5EDCL, 0xD433L, 0x5EDCL, 0xD433L);
        VECTOR(uint8_t, 8) l_436 = (VECTOR(uint8_t, 8))(0x53L, (VECTOR(uint8_t, 4))(0x53L, (VECTOR(uint8_t, 2))(0x53L, 0x8AL), 0x8AL), 0x8AL, 0x53L, 0x8AL);
        int32_t l_457 = 0L;
        struct S5 l_460 = {0x7BL};
        int i, j;
        l_331 = (((+((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(p_761->g_312.s885ce1e14e08d824)).sf0, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(l_313.s0366)).yzwzzwyywzxwxxwx, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_314.zy)).yyxyxxxx)).s05, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x6B19L, l_313.s3, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0L)).yyxx)).wxzywxwwwxzywzwz, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_315.yyyy)).xwwwzwyyxxyzwzxy)).s0569, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(7L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_316.s4266)).lo, ((VECTOR(int16_t, 2))(l_317.s11))))), 1L)))).even, ((VECTOR(int16_t, 8))(l_318.xyxyyxyy)).s32))), (safe_unary_minus_func_int8_t_s((*p_761->g_15))), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(p_761->g_320.yyxyxyxy)).odd, ((VECTOR(int16_t, 16))(p_761->g_321.xyyxxyyyxyxxyyyx)).s188d))))).s34, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(l_322.xyzxzzzz)).lo, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0735L, 1L)), 0x0C67L, 1L))))), ((VECTOR(int16_t, 8))(l_323.sc047bc4c)), l_281.sc, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))((-2L), 0x1C6EL)).yxyyxyyyxyyxyxyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_324.s2583)).wwyyywwy)).lo, ((VECTOR(uint8_t, 16))(0UL, (safe_sub_func_uint32_t_u_u(p_761->g_287.s9, ((safe_mul_func_int16_t_s_s((-2L), (&p_761->g_262 != (void*)0))) > (((safe_div_func_uint16_t_u_u(((+0x794DL) , p_761->g_293.sf), l_291.s7)) || (*p_93)) < p_761->g_213.f7)))), l_289.s0, l_314.x, 0x0DL, l_313.s6, 0xB2L, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 4))(0x9AL)), l_288.x, 0xE4L, 6UL)).se6c2))).zxwzwzxxwyyyzxxw)).s3b)).yyxyxxyyxxxxyxxx))), (int16_t)p_761->g_250[3].f5, (int16_t)l_323.s7))).s29)), (-2L))).scb))).xxyy, ((VECTOR(int16_t, 4))(0x7D43L)))))))).xwyyywzwwwxxxzww))).s23, ((VECTOR(int16_t, 2))(0x585CL)), ((VECTOR(int16_t, 2))(0x6E6EL))))).xyyyyyyx)), ((VECTOR(int16_t, 2))((-1L))), p_761->g_213.f3.f4, ((VECTOR(int16_t, 2))(0x2AC2L)), 0x1A36L)))), (int16_t)l_315.y, (int16_t)l_298))).s10))).xyxxyxyyyxxyyyxx))).lo)).s35)).xyyyxyyy)).s03))))), ((VECTOR(int16_t, 2))(0x1040L))))).odd, p_761->l_comm_values[(safe_mod_func_uint32_t_u_u(p_761->tid, 1))])), l_322.x)) & 18446744073709551612UL) | FAKE_DIVERGE(p_761->global_0_offset, get_global_id(0), 10)) && (*p_95))) , p_761->g_125.f3.f2.f0) , l_331);
        l_333--;
        if ((safe_rshift_func_int16_t_s_s(((+(p_761->g_270.f0 , ((((*p_95) = (((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_338.ywwxyzwyzxwywxwz)).s7a0a)))).xxyyzxxwzyyyxxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(p_761->g_339.xyyxxwxz)).s47))).yxxxxxxx)).s4454651156551452))).se , l_291.s6)) ^ (*p_761->g_132)) && (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_342.s294e)).z, 4))))) , (safe_add_func_int16_t_s_s(p_761->g_125.f3.f6, p_761->g_270.f3.f6))), ((p_93 == (GROUP_DIVERGE(0, 1) , p_761->g_15)) > 1UL))))
        { /* block id: 149 */
            int32_t *l_358 = &p_761->g_213.f3.f3;
            (*p_761->g_132) |= 9L;
            for (p_761->g_90.f0 = 22; (p_761->g_90.f0 != 2); p_761->g_90.f0 = safe_sub_func_int8_t_s_s(p_761->g_90.f0, 5))
            { /* block id: 153 */
                if ((atomic_inc(&p_761->l_atomic_input[79]) == 1))
                { /* block id: 155 */
                    VECTOR(int32_t, 16) l_347 = (VECTOR(int32_t, 16))(0x23FD580AL, (VECTOR(int32_t, 4))(0x23FD580AL, (VECTOR(int32_t, 2))(0x23FD580AL, 0x286D6DA5L), 0x286D6DA5L), 0x286D6DA5L, 0x23FD580AL, 0x286D6DA5L, (VECTOR(int32_t, 2))(0x23FD580AL, 0x286D6DA5L), (VECTOR(int32_t, 2))(0x23FD580AL, 0x286D6DA5L), 0x23FD580AL, 0x286D6DA5L, 0x23FD580AL, 0x286D6DA5L);
                    VECTOR(int32_t, 16) l_348 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 5L), 5L), 5L, (-4L), 5L, (VECTOR(int32_t, 2))((-4L), 5L), (VECTOR(int32_t, 2))((-4L), 5L), (-4L), 5L, (-4L), 5L);
                    uint8_t l_349 = 0UL;
                    VECTOR(int32_t, 2) l_350 = (VECTOR(int32_t, 2))(0x22988A3EL, 0x06122984L);
                    int8_t l_351 = 6L;
                    VECTOR(uint16_t, 16) l_352 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 9UL), 9UL), 9UL, 65527UL, 9UL, (VECTOR(uint16_t, 2))(65527UL, 9UL), (VECTOR(uint16_t, 2))(65527UL, 9UL), 65527UL, 9UL, 65527UL, 9UL);
                    int32_t l_353 = 0x0C586C54L;
                    int32_t *l_354 = &l_353;
                    int32_t *l_355 = (void*)0;
                    int i;
                    l_349 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_347.s6a923163)).s20, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(0x1CBDA052L, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_348.s6f)).xxyyyyxx)).odd)), 0x2716B42BL, 0L)).s6053303025226440))).s7d))), (-2L), (-1L))).x;
                    l_352.sb |= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(l_350.yyxx)).odd))).yxxyyyyx)).s0 , l_351);
                    l_353 = 0x763322F8L;
                    l_355 = l_354;
                    unsigned int result = 0;
                    result += l_347.sf;
                    result += l_347.se;
                    result += l_347.sd;
                    result += l_347.sc;
                    result += l_347.sb;
                    result += l_347.sa;
                    result += l_347.s9;
                    result += l_347.s8;
                    result += l_347.s7;
                    result += l_347.s6;
                    result += l_347.s5;
                    result += l_347.s4;
                    result += l_347.s3;
                    result += l_347.s2;
                    result += l_347.s1;
                    result += l_347.s0;
                    result += l_348.sf;
                    result += l_348.se;
                    result += l_348.sd;
                    result += l_348.sc;
                    result += l_348.sb;
                    result += l_348.sa;
                    result += l_348.s9;
                    result += l_348.s8;
                    result += l_348.s7;
                    result += l_348.s6;
                    result += l_348.s5;
                    result += l_348.s4;
                    result += l_348.s3;
                    result += l_348.s2;
                    result += l_348.s1;
                    result += l_348.s0;
                    result += l_349;
                    result += l_350.y;
                    result += l_350.x;
                    result += l_351;
                    result += l_352.sf;
                    result += l_352.se;
                    result += l_352.sd;
                    result += l_352.sc;
                    result += l_352.sb;
                    result += l_352.sa;
                    result += l_352.s9;
                    result += l_352.s8;
                    result += l_352.s7;
                    result += l_352.s6;
                    result += l_352.s5;
                    result += l_352.s4;
                    result += l_352.s3;
                    result += l_352.s2;
                    result += l_352.s1;
                    result += l_352.s0;
                    result += l_353;
                    atomic_add(&p_761->l_special_values[79], result);
                }
                else
                { /* block id: 160 */
                    (1 + 1);
                }
            }
            for (p_761->g_267.f3.f9 = 21; (p_761->g_267.f3.f9 < (-26)); p_761->g_267.f3.f9--)
            { /* block id: 166 */
                int32_t **l_359 = &l_332[2][2];
                p_761->g_132 = ((*l_359) = l_358);
                l_332[0][2] = (void*)0;
            }
        }
        else
        { /* block id: 171 */
            int16_t *l_363 = &p_761->g_250[3].f6;
            struct S5 *l_370 = &p_761->g_262;
            int8_t *l_375 = (void*)0;
            int8_t *l_376 = (void*)0;
            int8_t *l_377 = &p_761->g_262.f0;
            int32_t l_389 = 5L;
            uint32_t l_405 = 5UL;
            struct S0 l_432 = {0x03L};
            int32_t l_435[4][2] = {{0x5B6751E6L,0x5B6751E6L},{0x5B6751E6L,0x5B6751E6L},{0x5B6751E6L,0x5B6751E6L},{0x5B6751E6L,0x5B6751E6L}};
            int i, j;
            (*p_761->g_132) = (safe_sub_func_int32_t_s_s((((l_362 == l_363) != (((((((safe_div_func_int32_t_s_s(l_315.y, (safe_sub_func_uint8_t_u_u((p_761->g_368 != l_370), 255UL)))) , ((*l_377) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0xF7F2L, 0L)), 7)))) && ((*l_306) &= (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_386.s1225414751067721)).se, (safe_mod_func_uint64_t_u_u(4UL, p_761->g_250[3].f3.f9)))), p_761->g_213.f2)) && 0x76L) < p_761->g_270.f5) <= l_389) , 0x85B6833DL), (*p_761->g_132))), l_281.s6)))) || l_390) != FAKE_DIVERGE(p_761->group_2_offset, get_group_id(2), 10)) && l_324.s5) == FAKE_DIVERGE(p_761->group_1_offset, get_group_id(1), 10))) , 0L), 0x530713DAL));
            if (l_338.y)
            { /* block id: 175 */
                struct S0 *l_392 = &p_761->g_213.f3.f2;
                struct S0 **l_391 = &l_392;
                (*l_391) = (void*)0;
                l_389 = (((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_393.s07432641)).s7323763105452222, ((VECTOR(uint16_t, 16))(65534UL, 0x6DD9L, ((VECTOR(uint16_t, 8))(l_394.s844acf88)), 0x06B6L, 65526UL, 0UL, p_761->g_292.y, 0x0CCFL, 1UL))))).s1 != 0xE4EAL);
            }
            else
            { /* block id: 178 */
                int64_t *l_397 = &l_298;
                int32_t l_400 = 7L;
                uint64_t l_404 = 0xB0F55A41C67D5A09L;
                VECTOR(int32_t, 2) l_417 = (VECTOR(int32_t, 2))((-2L), 0L);
                VECTOR(int8_t, 4) l_442 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x08L), 0x08L);
                int i;
                for (p_761->g_267.f3.f2.f0 = (-22); (p_761->g_267.f3.f2.f0 == 40); ++p_761->g_267.f3.f2.f0)
                { /* block id: 181 */
                    int64_t *l_398[6];
                    int32_t *l_403 = (void*)0;
                    uint32_t **l_406 = (void*)0;
                    uint32_t *l_408 = &p_761->g_242;
                    uint32_t **l_407 = &l_408;
                    int32_t l_421 = (-8L);
                    uint16_t **l_423 = &p_761->g_422;
                    VECTOR(int8_t, 2) l_441 = (VECTOR(int8_t, 2))(1L, (-1L));
                    VECTOR(int8_t, 16) l_447 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x51L), 0x51L), 0x51L, (-1L), 0x51L, (VECTOR(int8_t, 2))((-1L), 0x51L), (VECTOR(int8_t, 2))((-1L), 0x51L), (-1L), 0x51L, (-1L), 0x51L);
                    VECTOR(uint64_t, 2) l_452 = (VECTOR(uint64_t, 2))(0x719E3A81F4814A27L, 0xFC12740678AE1E9FL);
                    int i;
                    for (i = 0; i < 6; i++)
                        l_398[i] = &l_298;
                    (*p_761->g_132) = (l_397 != l_398[2]);
                    if (l_399)
                    { /* block id: 183 */
                        int32_t l_401 = 0x61017FAEL;
                        (*p_761->g_132) ^= (l_400 , (+l_401));
                    }
                    else
                    { /* block id: 185 */
                        int32_t *l_402 = &p_761->g_267.f2;
                        l_403 = l_402;
                        (*l_402) = l_404;
                        (*p_761->g_132) = l_405;
                    }
                    if ((((*l_407) = p_95) != p_95))
                    { /* block id: 191 */
                        VECTOR(uint32_t, 8) l_409 = (VECTOR(uint32_t, 8))(0xED77D429L, (VECTOR(uint32_t, 4))(0xED77D429L, (VECTOR(uint32_t, 2))(0xED77D429L, 0x5FB41094L), 0x5FB41094L), 0x5FB41094L, 0xED77D429L, 0x5FB41094L);
                        int32_t **l_412 = &l_332[5][0];
                        int i;
                        ++l_409.s0;
                        p_761->g_132 = ((*l_412) = p_95);
                        (*p_761->g_132) = (*p_761->g_132);
                        return l_408;
                    }
                    else
                    { /* block id: 197 */
                        VECTOR(int32_t, 8) l_414 = (VECTOR(int32_t, 8))(0x6D2D8A2CL, (VECTOR(int32_t, 4))(0x6D2D8A2CL, (VECTOR(int32_t, 2))(0x6D2D8A2CL, 0x46215546L), 0x46215546L), 0x46215546L, 0x6D2D8A2CL, 0x46215546L);
                        uint8_t *l_420 = &p_761->g_125.f5;
                        int i;
                        l_421 &= ((*p_761->g_132) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(p_761->g_413.xyyxxyxyxxxyyyxx)).s2567, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_414.s7030)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(0x06275D1EL, 1L)).xxyyxxxy, (int32_t)((safe_add_func_uint32_t_u_u((((VECTOR(uint64_t, 2))(0x50F4389B07A36D73L, 0x2E538EF27D77C0FCL)).odd , p_761->g_270.f3.f2.f0), (l_405 , ((VECTOR(int32_t, 4))(l_417.yyyx)).z))) <= GROUP_DIVERGE(1, 1))))).s65))).xyyy, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, (-4L))), 0x4A3CA8E3L, 0x55C7C47CL)).odd, (int32_t)l_414.s7, (int32_t)l_414.s1))).yyyyyxyy, (int32_t)(safe_lshift_func_uint8_t_u_s(((*l_420) = l_338.z), 0))))).hi)))))).lo)).odd);
                    }
                    if ((p_761->g_339.y , ((l_288.y & 0x604EL) < (((*l_423) = p_761->g_422) != (p_761->g_424 = l_363)))))
                    { /* block id: 204 */
                        int64_t **l_428 = &l_299;
                        int32_t l_431[6][7] = {{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L},{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L},{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L},{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L},{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L},{0L,0x462B32FDL,0L,0L,0x462B32FDL,0L,0L}};
                        VECTOR(int32_t, 2) l_433 = (VECTOR(int32_t, 2))(0x061A6FD0L, 0L);
                        int8_t *l_434[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        l_435[3][1] |= (safe_add_func_int32_t_s_s((((+(p_761->g_427 != ((*l_428) = (void*)0))) , (((l_389 || 1UL) | (safe_rshift_func_int8_t_s_u((-5L), 6))) | ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-8L), 0x680AA86FL)))), 0L, 0x1EBD29D5L)))).xzyxxxxz, ((VECTOR(int32_t, 8))(l_431[0][1], 1L, 0x3AE004E2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x0B7E39FFL, (-1L), (l_432 , (!((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(3L, 0x1B7FC4CAL, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_433.xx)), (int32_t)(((*p_761->g_15) > (((*p_761->g_132) , &p_761->g_16) == l_434[3][4])) > (*p_95))))).yyyyyyxy, ((VECTOR(int32_t, 8))((-8L)))))), l_405, l_389, 1L, ((VECTOR(int32_t, 2))((-10L))), (-10L))).hi, ((VECTOR(int32_t, 8))(0x38454A4DL))))).s0655333006744171)).hi, ((VECTOR(int32_t, 8))(0x0588B505L))))).s5)), (-5L), (*p_761->g_132), l_405, 6L, (-1L))).lo)).ywxwwywwzwyxxywx, ((VECTOR(int32_t, 16))(0x07112506L)), ((VECTOR(int32_t, 16))((-1L)))))).s0e)), 0L, 0x1EF33258L, 0x6954A7FEL))))).even, ((VECTOR(int32_t, 4))((-3L)))))).xyzzxxzxyzxzwzyx, ((VECTOR(int32_t, 16))(0x21747D36L))))).s78, ((VECTOR(int32_t, 2))(0x53474502L))))).lo)) > l_291.s1), l_389));
                        if (l_431[1][4])
                            break;
                        (*p_761->g_132) = (-6L);
                    }
                    else
                    { /* block id: 209 */
                        VECTOR(uint64_t, 2) l_453 = (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x11B9D005FBCEA7A1L);
                        uint8_t *l_456[3];
                        int32_t l_458 = 0x11D91194L;
                        VECTOR(int32_t, 2) l_459 = (VECTOR(int32_t, 2))(0x41CF216EL, 0x13D66CD6L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_456[i] = (void*)0;
                        l_458 &= (l_294.y && ((((*l_362) = (-3L)) < (*p_761->g_422)) , (((VECTOR(int8_t, 8))((0x0C21575A922C9906L >= (l_417.y & ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(l_436.s2772057550212176)).hi, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(p_761->g_437.sd855e325)).s0016025200244556, ((VECTOR(uint8_t, 8))(l_438.s05602473)).s0003273216147512))).odd))).lo)).z)), (-2L), ((VECTOR(int8_t, 2))(p_761->g_439.yx)), ((VECTOR(int8_t, 2))(l_440.xy)), (-1L), 0x1FL)).s3 || ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x2EL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_441.xy)), 0x1DL, 0x02L)), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_442.yz)).yyxy)).yzwzwzyx)).s63, ((VECTOR(int8_t, 8))(((GROUP_DIVERGE(0, 1) , ((safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((*l_397) = (((VECTOR(int8_t, 8))(l_447.scbfb1360)).s6 ^ (safe_mod_func_int64_t_s_s(l_289.s5, 5UL)))) && (l_400 & ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_761->g_450.yxwyzyywyxwxxxxx)).hi)).s3)), (((((((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(p_761->g_451.scf081192)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 2))(0x8E2B06D622000654L, 1UL)), (uint64_t)((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 8))(l_452.yxxyxyxx)).s7564471142334547, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(l_453.xxyyxyyxyyyxxxyx)).sde, ((VECTOR(uint64_t, 2))(0xA1CB38105CBFDC91L, 0UL))))).xxyxxxxxxxxyxxxy))).sb, (uint64_t)((safe_mul_func_uint8_t_u_u((l_417.y = ((p_761->g_285.s1 = 0x3FL) & l_400)), (*p_93))) > (*p_761->g_132))))), 0x24C93EB5C9A086A6L, 4UL)).yywwyywz))).s5 ^ 18446744073709551609UL) , (-6L)) >= (*p_95)) > 65526UL) | (-2L)))), p_761->g_267.f3.f3)) ^ FAKE_DIVERGE(p_761->global_2_offset, get_global_id(2), 10))) <= l_457), ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))(0x2EL)), 1L)).s41))), 7L)).s23)), 1L, 0x32L)).yxywzzyzyyyywxzx)).s5)));
                        (*p_761->g_132) &= ((VECTOR(int32_t, 8))(l_459.yyyyxyxy)).s1;
                    }
                }
                p_761->g_275.x |= (*p_761->g_132);
                (**l_272) = l_460;
            }
            (*p_761->g_132) = (safe_lshift_func_int16_t_s_u(((*l_363) &= l_338.z), (((*l_306) |= (((((FAKE_DIVERGE(p_761->global_2_offset, get_global_id(2), 10) < FAKE_DIVERGE(p_761->local_2_offset, get_local_id(2), 10)) < (l_435[0][1] = (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))((safe_rshift_func_uint16_t_u_s(l_405, (safe_unary_minus_func_int16_t_s((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x54L, (-1L))))).xyxxyxyx)).s5 ^ FAKE_DIVERGE(p_761->global_2_offset, get_global_id(2), 10)) > ((*p_95) = (GROUP_DIVERGE(1, 1) != (-4L)))) == ((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(0x951E72DBL, (((*l_377) = (((VECTOR(int16_t, 2))(0L, (-4L))).odd != FAKE_DIVERGE(p_761->group_2_offset, get_group_id(2), 10))) && (((safe_mod_func_uint64_t_u_u(((&p_95 != &p_761->g_126) & (0x6040E521611C5A6DL == (safe_div_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_rshift_func_uint8_t_u_u((l_276.z == (((safe_lshift_func_int16_t_s_u((&l_298 != (void*)0), l_389)) & 253UL) & (*p_761->g_132))), GROUP_DIVERGE(0, 1))))))), p_761->g_125.f3.f3)) , 18446744073709551614UL) == l_276.w)), ((VECTOR(uint32_t, 8))(0UL)), 8UL, ((VECTOR(uint32_t, 4))(0UL)), 8UL)).s2827, ((VECTOR(uint32_t, 4))(8UL))))).x)) , 0xD7L)))))), FAKE_DIVERGE(p_761->group_1_offset, get_group_id(1), 10), ((VECTOR(uint16_t, 4))(0x9C0EL)), 0UL, 0x9B1DL)).s1, 11)))) , p_761->g_293.se) < l_288.x) < l_281.s3)) || l_281.s8)));
            return p_95;
        }
    }
    else
    { /* block id: 229 */
        VECTOR(int32_t, 4) l_481 = (VECTOR(int32_t, 4))(0x5A48ACD9L, (VECTOR(int32_t, 2))(0x5A48ACD9L, (-8L)), (-8L));
        int32_t *l_497[6][7][1];
        int64_t l_498 = 0x31AD093B9F63C395L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 1; k++)
                    l_497[i][j][k] = &p_761->g_267.f2;
            }
        }
        for (p_761->g_125.f2 = 0; (p_761->g_125.f2 >= (-16)); p_761->g_125.f2 = safe_sub_func_int16_t_s_s(p_761->g_125.f2, 7))
        { /* block id: 232 */
            int32_t **l_479 = &p_761->g_132;
            (*l_479) = p_95;
            (*p_761->g_132) = ((void*)0 == p_761->g_480);
            return p_95;
        }
        (*p_761->g_132) = ((VECTOR(int32_t, 16))(0x67D91D22L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_481.xz)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_761->g_482.xy)).yyyxxxxyxyxyyyyx)).s7b))), ((((*l_306) = GROUP_DIVERGE(1, 1)) ^ (&p_95 == &p_95)) >= (safe_mul_func_int8_t_s_s((!(p_761->g_16 >= (-9L))), (l_289.s3 >= (((((l_487 | (safe_mul_func_uint16_t_u_u((p_761->g_267.f3.f0 , (safe_rshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((p_761->g_494 != (void*)0), l_481.x)) == p_761->g_437.sb) > l_315.y), l_496))), l_276.x))) <= 0x458AL) > 0x57306D5FA7A5AD61L) , &p_761->g_16) == p_93))))), (-9L), 0x0E2775F6L, (-5L))), ((VECTOR(int32_t, 8))((-6L)))))).lo, ((VECTOR(int32_t, 4))(0x1D1A6E6FL)), ((VECTOR(int32_t, 4))(0x562A23A6L))))).odd)).xyyy)).odd, ((VECTOR(int32_t, 2))(0x6AD43432L)), ((VECTOR(int32_t, 2))(0x6447D666L))))), ((VECTOR(int32_t, 2))(3L))))), ((VECTOR(int32_t, 2))(0x75226A5BL))))), 0L, ((VECTOR(int32_t, 4))(0x7B865F2FL)), 0x354F0161L, ((VECTOR(int32_t, 4))((-9L))), (-2L), 0x22FD68A2L, 0x5A4A6A1EL)).s1;
        p_761->g_501--;
    }
    for (l_487 = (-10); (l_487 < 55); ++l_487)
    { /* block id: 243 */
        uint16_t *l_529 = &p_761->g_270.f3.f1;
        int32_t l_548 = 1L;
        uint64_t l_551 = 0x005400F422ACDE03L;
        union U6 *l_554 = &p_761->g_555;
        for (p_761->g_270.f5 = 0; (p_761->g_270.f5 <= 13); p_761->g_270.f5 = safe_add_func_int8_t_s_s(p_761->g_270.f5, 7))
        { /* block id: 246 */
            int32_t l_514 = (-1L);
            uint16_t *l_531 = &p_761->g_270.f3.f1;
            VECTOR(uint64_t, 4) l_532 = (VECTOR(uint64_t, 4))(0x36DBA307122D5BB8L, (VECTOR(uint64_t, 2))(0x36DBA307122D5BB8L, 0x465AE333F7A588D8L), 0x465AE333F7A588D8L);
            struct S5 *l_537 = &p_761->g_262;
            int32_t l_545 = 0x4A3CD3F2L;
            int32_t l_549 = 4L;
            int32_t l_550[1][8];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                    l_550[i][j] = 7L;
            }
            for (p_761->g_270.f6 = (-8); (p_761->g_270.f6 <= (-7)); p_761->g_270.f6 = safe_add_func_int32_t_s_s(p_761->g_270.f6, 6))
            { /* block id: 249 */
                struct S0 l_517 = {0xF2L};
                int32_t l_544 = (-9L);
                int32_t l_546[3];
                union U6 **l_556 = &l_554;
                int i;
                for (i = 0; i < 3; i++)
                    l_546[i] = 0x27DABA83L;
                for (p_761->g_270.f3.f2.f0 = 0; (p_761->g_270.f3.f2.f0 <= 21); p_761->g_270.f3.f2.f0 = safe_add_func_uint32_t_u_u(p_761->g_270.f3.f2.f0, 7))
                { /* block id: 252 */
                    struct S0 *l_518[3];
                    int32_t l_519 = 0x02CABD1FL;
                    struct S2 **l_520 = &p_761->g_212;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_518[i] = (void*)0;
                    (*p_761->g_132) &= (safe_div_func_uint16_t_u_u((l_514 = FAKE_DIVERGE(p_761->local_1_offset, get_local_id(1), 10)), (safe_sub_func_uint32_t_u_u(p_761->g_284.s7, 1UL))));
                    p_761->g_267.f3.f2 = l_517;
                    (*l_520) = func_109(l_514, (l_519 , p_95), p_761);
                    if (l_517.f0)
                        break;
                }
                for (p_761->g_125.f2 = 0; (p_761->g_125.f2 == (-10)); p_761->g_125.f2 = safe_sub_func_uint32_t_u_u(p_761->g_125.f2, 9))
                { /* block id: 261 */
                    uint8_t l_540[9];
                    int32_t *l_543[5][3][3] = {{{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3}},{{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3}},{{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3}},{{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3}},{{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3},{&p_761->g_250[3].f2,&p_761->g_270.f2,&p_761->g_250[3].f3.f3}}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_540[i] = 0x1BL;
                    for (p_761->g_270.f0 = (-2); (p_761->g_270.f0 != 2); ++p_761->g_270.f0)
                    { /* block id: 264 */
                        uint16_t **l_530 = &p_761->g_422;
                        int32_t *l_541 = (void*)0;
                        int32_t *l_542 = &p_761->g_213.f3.f3;
                        (*l_542) = ((safe_mul_func_int8_t_s_s(0x03L, ((safe_mod_func_int64_t_s_s(((((*l_530) = l_529) == l_531) || 0UL), ((VECTOR(uint64_t, 16))(l_532.zywxzyxzwxyyzyzz)).se)) < (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(((void*)0 == l_537), ((safe_mul_func_uint8_t_u_u(0x88L, l_540[0])) | l_517.f0))), l_532.x))))) >= 0xA19E479AL);
                    }
                    l_551++;
                }
                (*l_556) = l_554;
            }
            for (p_761->g_267.f3.f9 = 16; (p_761->g_267.f3.f9 != 12); p_761->g_267.f3.f9 = safe_sub_func_uint64_t_u_u(p_761->g_267.f3.f9, 4))
            { /* block id: 274 */
                struct S2 **l_559[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_559[i] = &p_761->g_212;
                p_761->g_212 = p_96;
                l_548 = (*p_761->g_132);
            }
            return p_95;
        }
    }
    for (p_761->g_555.f1.f7 = 0; (p_761->g_555.f1.f7 == 29); ++p_761->g_555.f1.f7)
    { /* block id: 283 */
        union U6 *l_565[10] = {(void*)0,&p_761->g_567,(void*)0,(void*)0,&p_761->g_567,(void*)0,(void*)0,&p_761->g_567,(void*)0,(void*)0};
        union U6 **l_564 = &l_565[2];
        int i;
        (*l_271) = (**l_272);
        (*p_761->g_132) ^= (safe_mul_func_int16_t_s_s(p_761->g_87.s5, (l_564 == (p_761->g_125.f3.f4 , &l_565[2]))));
    }
    return &p_761->g_58;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_97(int64_t  p_98, int32_t  p_99, int64_t * p_100, uint32_t * p_101, struct S2 * p_102, struct S7 * p_761)
{ /* block id: 137 */
    int8_t *l_268 = &p_761->g_16;
    return l_268;
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_125.f2 p_761->g_15 p_761->g_16 p_761->g_213.f6 p_761->g_132 p_761->g_250.f2 p_761->g_58 p_761->g_213.f3.f3
 * writes: p_761->g_125.f2 p_761->g_125.f0
 */
int32_t  func_103(uint64_t  p_104, struct S2 * p_105, int64_t * p_106, int64_t * p_107, uint32_t  p_108, struct S7 * p_761)
{ /* block id: 129 */
    int32_t l_264 = 0L;
    for (p_761->g_125.f2 = (-24); (p_761->g_125.f2 < 23); p_761->g_125.f2 = safe_add_func_int16_t_s_s(p_761->g_125.f2, 7))
    { /* block id: 132 */
        struct S5 *l_261 = &p_761->g_262;
        int16_t *l_263 = (void*)0;
        int32_t *l_265 = &p_761->g_125.f0;
        (*l_265) = (!(safe_rshift_func_int16_t_s_s(((0x5413L > (safe_add_func_int8_t_s_s((*p_761->g_15), p_761->g_213.f6))) , (l_264 = ((void*)0 != l_261))), 9)));
    }
    return (*p_761->g_132);
}


/* ------------------------------------------ */
/* 
 * reads : p_761->g_132 p_761->g_196 p_761->g_212 p_761->g_125.f4 p_761->g_125.f2 p_761->g_125.f3.f9 p_761->g_26 p_761->g_125.f0 p_761->g_90.f0 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_250.f2 p_761->g_242 p_761->g_213.f3.f3 p_761->g_58
 * writes: p_761->g_125.f2 p_761->g_125.f3.f0 p_761->g_213.f0 p_761->g_125.f3.f3 p_761->g_86 p_761->g_213.f6 p_761->g_242 p_761->g_213.f3.f2.f0 p_761->g_132 p_761->g_213.f3.f3 p_761->g_250.f2 p_761->g_58
 */
struct S2 * func_109(uint16_t  p_110, int32_t * p_111, struct S7 * p_761)
{ /* block id: 31 */
    struct S5 l_135 = {0x4CL};
    VECTOR(int16_t, 4) l_197 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 7L), 7L);
    VECTOR(int16_t, 4) l_198 = (VECTOR(int16_t, 4))(0x1BD7L, (VECTOR(int16_t, 2))(0x1BD7L, 0x6E96L), 0x6E96L);
    struct S0 l_211 = {0x34L};
    uint32_t *l_217 = (void*)0;
    uint32_t **l_216 = &l_217;
    int32_t l_218 = (-7L);
    int32_t *l_219 = &p_761->g_125.f3.f0;
    int32_t *l_220 = &p_761->g_213.f0;
    int32_t *l_251 = &p_761->g_250[3].f2;
    int i;
    for (p_110 = 0; (p_110 == 19); p_110 = safe_add_func_int64_t_s_s(p_110, 2))
    { /* block id: 34 */
        struct S5 *l_136 = (void*)0;
        struct S5 *l_137 = (void*)0;
        struct S5 *l_138[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_139 = (-1L);
        int i;
        l_135 = l_135;
        l_135 = l_135;
        (*p_761->g_132) = l_139;
        if ((atomic_inc(&p_761->g_atomic_input[95 * get_linear_group_id() + 54]) == 3))
        { /* block id: 39 */
            uint8_t l_140[9] = {0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL};
            int i;
            if (l_140[3])
            { /* block id: 40 */
                uint32_t l_141 = 8UL;
                int32_t l_143 = (-1L);
                int32_t *l_142 = &l_143;
                int32_t *l_144 = (void*)0;
                int32_t *l_145 = &l_143;
                l_145 = (l_144 = (l_141 , l_142));
                for (l_141 = 1; (l_141 != 30); l_141 = safe_add_func_int64_t_s_s(l_141, 8))
                { /* block id: 45 */
                    int64_t l_148 = 0x3982148F47512D44L;
                    int64_t l_149 = 0L;
                    l_149 ^= l_148;
                }
                for (l_143 = 6; (l_143 != (-30)); l_143 = safe_sub_func_uint16_t_u_u(l_143, 6))
                { /* block id: 50 */
                    int32_t l_152 = 1L;
                    int8_t l_153 = 0x45L;
                    int32_t l_164[9][3][7] = {{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}},{{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L},{2L,(-2L),0x291C2E77L,1L,(-6L),1L,0x291C2E77L}}};
                    int i, j, k;
                    if ((l_153 = (l_152 = l_152)))
                    { /* block id: 53 */
                        int32_t l_154 = 0x5097A5E0L;
                        uint16_t l_155 = 0x7E6FL;
                        VECTOR(int32_t, 4) l_156 = (VECTOR(int32_t, 4))(0x50E2895DL, (VECTOR(int32_t, 2))(0x50E2895DL, 0L), 0L);
                        uint16_t l_157 = 8UL;
                        struct S0 l_158 = {0UL};
                        struct S0 l_159 = {0x2AL};
                        struct S0 l_160 = {251UL};
                        struct S0 l_161[3] = {{0UL},{0UL},{0UL}};
                        struct S0 l_162 = {250UL};
                        int i;
                        l_154 = 0L;
                        l_162 = ((l_155 , (GROUP_DIVERGE(2, 1) , l_156.x)) , ((GROUP_DIVERGE(2, 1) , (l_157 &= FAKE_DIVERGE(p_761->global_0_offset, get_global_id(0), 10))) , ((l_159 = l_158) , (l_161[0] = l_160))));
                    }
                    else
                    { /* block id: 59 */
                        int32_t l_163[3][8][7] = {{{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L}},{{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L}},{{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L},{0x4DCFD110L,2L,6L,0x089293DAL,0x7E85E602L,0L,0x3CEAF5C8L}}};
                        int i, j, k;
                        l_152 &= l_163[1][0][6];
                    }
                    if (l_164[6][2][6])
                    { /* block id: 62 */
                        uint8_t l_165 = 0x68L;
                        struct S5 l_166 = {0x0DL};
                        struct S5 l_167 = {0x76L};
                        l_167 = (l_165 , l_166);
                    }
                    else
                    { /* block id: 64 */
                        uint64_t l_168 = 2UL;
                        int64_t l_169 = 0x3F00CB84BFDF1D08L;
                        l_169 ^= l_168;
                    }
                }
            }
            else
            { /* block id: 68 */
                VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x3FF400B9L), 0x3FF400B9L), 0x3FF400B9L, (-5L), 0x3FF400B9L);
                uint8_t l_171 = 0UL;
                int i;
                l_171 = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_170.s75)).yyxyxxyxxyxyyxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4683A1E9L, 0L)).yxxx)).ywyyzwzxxyxxzxwz))).s6;
            }
            for (l_140[2] = 0; (l_140[2] != 53); l_140[2]++)
            { /* block id: 73 */
                struct S5 l_174 = {0x25L};
                struct S5 l_175[6][3][6] = {{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}},{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}},{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}},{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}},{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}},{{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}},{{0x00L},{0x44L},{0x24L},{0x76L},{1L},{0x76L}}}};
                struct S5 l_176 = {0x24L};
                int64_t l_194[6][1];
                int64_t *l_193 = &l_194[0][0];
                int64_t **l_192 = &l_193;
                int64_t **l_195 = &l_193;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_194[i][j] = 0x14BD8925AE9609D1L;
                }
                l_176 = (l_175[5][0][0] = l_174);
                for (l_176.f0 = 0; (l_176.f0 > 5); l_176.f0++)
                { /* block id: 78 */
                    int32_t l_179[9][3][8] = {{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}},{{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L},{(-1L),0x7E84D596L,(-1L),7L,(-4L),0x7115A300L,(-1L),0x736AFE77L}}};
                    uint32_t l_185[3][6][4] = {{{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL}},{{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL}},{{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL},{4294967295UL,4294967295UL,0UL,4294967288UL}}};
                    int16_t l_188 = 0L;
                    int32_t l_189[10][3][3] = {{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}},{{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L},{(-1L),0x2AC9BB6FL,0L}}};
                    int16_t l_190 = 4L;
                    uint16_t l_191 = 65535UL;
                    int i, j, k;
                    for (l_179[0][2][5] = (-19); (l_179[0][2][5] < 24); l_179[0][2][5] = safe_add_func_int8_t_s_s(l_179[0][2][5], 1))
                    { /* block id: 81 */
                        int64_t l_182 = (-4L);
                        int64_t l_183 = 0x726200834E5BC476L;
                        uint64_t l_184 = 0xBD136BF034180264L;
                        l_182 = (-1L);
                        l_184 &= l_183;
                    }
                    ++l_185[1][2][3];
                    l_191 ^= (l_190 |= (l_189[6][0][1] = l_188));
                }
                l_192 = (l_195 = l_192);
            }
            unsigned int result = 0;
            int l_140_i0;
            for (l_140_i0 = 0; l_140_i0 < 9; l_140_i0++) {
                result += l_140[l_140_i0];
            }
            atomic_add(&p_761->g_special_values[95 * get_linear_group_id() + 54], result);
        }
        else
        { /* block id: 93 */
            (1 + 1);
        }
    }
    (*l_220) |= ((3UL & ((!((GROUP_DIVERGE(2, 1) , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_761->g_196.yz)).xyyy)).odd)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_197.xw)).xxyy)))))).zwxwyxyzxwywxzww)).s5be7)).even, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_198.xxxx)).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(0x7572L, (((void*)0 == p_111) <= (safe_sub_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x09FFE99ADD518CACL, 0L)).yyxyyxyx)).s3 , (safe_rshift_func_uint16_t_u_s((((*l_219) = ((((l_211 , p_761->g_212) == (void*)0) <= (((l_218 = (safe_sub_func_uint32_t_u_u((((*l_216) = p_111) == p_111), (2L || p_110)))) , 0x1E83345EL) | l_197.y)) == 0x25979984L)) , p_110), l_198.w))), l_198.z)) , 0x72DE9098L), 1UL)), p_761->g_125.f4)) ^ (*p_111)), 6)) & 0xD045B5DBL) > p_761->g_125.f3.f9), p_761->g_26.z))), 1L, p_761->g_125.f0, 0x52E6L, ((VECTOR(int16_t, 2))(0x29F6L)), 0x17CAL)).odd, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(6L))))).zyzwwzzyxzzwzyww, (int16_t)p_761->g_90.f0))))).s6df7, ((VECTOR(int16_t, 4))(5L))))))), ((VECTOR(int16_t, 4))(0x6385L))))).xzyzzyxx)).s16)))))).xxxxxxyx)))).s3) ^ p_110)) <= FAKE_DIVERGE(p_761->group_0_offset, get_group_id(0), 10))) < 0x48B1DD97L);
    for (p_761->g_125.f3.f3 = 0; (p_761->g_125.f3.f3 < 19); p_761->g_125.f3.f3 = safe_add_func_int8_t_s_s(p_761->g_125.f3.f3, 7))
    { /* block id: 103 */
        int16_t l_227 = 0x78A2L;
        int32_t l_241 = 1L;
        struct S2 *l_249 = &p_761->g_250[3];
        int32_t **l_252[9][3][9] = {{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}},{{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220},{&l_220,&l_251,&l_251,&l_220,&p_761->g_132,&l_251,&p_761->g_132,(void*)0,&l_220}}};
        int i, j, k;
        for (p_761->g_86 = 19; (p_761->g_86 == (-3)); p_761->g_86--)
        { /* block id: 106 */
            int8_t l_239 = 1L;
            int32_t l_240 = (-9L);
            for (p_761->g_213.f6 = 3; (p_761->g_213.f6 > 20); p_761->g_213.f6 = safe_add_func_uint8_t_u_u(p_761->g_213.f6, 6))
            { /* block id: 109 */
                int32_t *l_228 = &p_761->g_213.f0;
                int32_t *l_229 = (void*)0;
                int32_t *l_230 = (void*)0;
                int32_t *l_231 = &p_761->g_58;
                int32_t *l_232 = &p_761->g_125.f0;
                int32_t *l_233 = (void*)0;
                int32_t *l_234 = &p_761->g_58;
                int32_t *l_235 = &l_218;
                int32_t *l_236 = &l_218;
                int32_t *l_237 = (void*)0;
                int32_t *l_238[10][4][5] = {{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}},{{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0},{&p_761->g_125.f2,&p_761->g_125.f2,&p_761->g_213.f2,&p_761->g_213.f0,(void*)0}}};
                int i, j, k;
                (*l_220) ^= (*p_761->g_132);
                p_761->g_242--;
                if ((*p_761->g_132))
                    continue;
                for (l_211.f0 = 11; (l_211.f0 != 19); l_211.f0 = safe_add_func_uint32_t_u_u(l_211.f0, 4))
                { /* block id: 115 */
                    for (p_761->g_213.f3.f2.f0 = (-26); (p_761->g_213.f3.f2.f0 >= 2); p_761->g_213.f3.f2.f0 = safe_add_func_int16_t_s_s(p_761->g_213.f3.f2.f0, 9))
                    { /* block id: 118 */
                        (*p_111) = 0x6D722876L;
                    }
                }
            }
            return l_249;
        }
        p_761->g_132 = l_251;
    }
    return p_761->g_212;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S7 c_762;
    struct S7* p_761 = &c_762;
    struct S7 c_763 = {
        (VECTOR(int16_t, 16))(0x2268L, (VECTOR(int16_t, 4))(0x2268L, (VECTOR(int16_t, 2))(0x2268L, 0x2C4DL), 0x2C4DL), 0x2C4DL, 0x2268L, 0x2C4DL, (VECTOR(int16_t, 2))(0x2268L, 0x2C4DL), (VECTOR(int16_t, 2))(0x2268L, 0x2C4DL), 0x2268L, 0x2C4DL, 0x2268L, 0x2C4DL), // p_761->g_5
        0x29L, // p_761->g_7
        0L, // p_761->g_14
        &p_761->g_14, // p_761->g_13
        0x5BL, // p_761->g_16
        &p_761->g_16, // p_761->g_15
        (VECTOR(uint32_t, 4))(0x9980A6F8L, (VECTOR(uint32_t, 2))(0x9980A6F8L, 0x55A9D45CL), 0x55A9D45CL), // p_761->g_26
        (VECTOR(uint32_t, 2))(0x7EBAC3F4L, 4294967293UL), // p_761->g_48
        0x6D4114ABL, // p_761->g_58
        0x14120B1AL, // p_761->g_86
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967289UL), 4294967289UL), 4294967289UL, 1UL, 4294967289UL), // p_761->g_87
        {255UL}, // p_761->g_90
        {0x6E533B9EL,0x2A4178B3L,-9L,{3L,0x10FEL,{255UL},-5L,0x3EB9EEC2L,-2L,0x6DCB7496L,-5L,0x67F30D37L,-3L},0x7ADE520EL,255UL,0x235EL,0x7BC7E195E0419DFFL}, // p_761->g_125
        0UL, // p_761->g_127
        &p_761->g_127, // p_761->g_126
        &p_761->g_125.f2, // p_761->g_132
        (VECTOR(int16_t, 4))(0x3423L, (VECTOR(int16_t, 2))(0x3423L, 0x006BL), 0x006BL), // p_761->g_196
        {-3L,0x212C6343L,0x0CCABFC4L,{4L,0UL,{0x1AL},0L,0L,0x31218535F4C0952EL,1UL,0x3CL,0x5A774B31L,-1L},0x62396B67L,255UL,-8L,-4L}, // p_761->g_213
        &p_761->g_213, // p_761->g_212
        0x84784CF4L, // p_761->g_242
        {{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L},{3L,-3L,0L,{0x4F373596L,0x53CCL,{255UL},0x5EE9B9BCL,1L,-10L,4UL,-6L,-1L,0x7803L},4294967295UL,251UL,0x5B06L,0x1F9F4B579935A896L}}, // p_761->g_250
        {0x25L}, // p_761->g_262
        {0x1BDFFC9AL,0x37BF04F6L,-10L,{0x101F3979L,65533UL,{253UL},0x4F762508L,0x54093352L,8L,4294967295UL,0L,0x41C65E76L,1L},0x6C35C314L,255UL,-7L,0L}, // p_761->g_267
        {-1L,0x7A1AE786L,0L,{0x7CC93555L,65535UL,{0UL},0x515A3745L,0x30A82069L,0x27435C911F6C4FA1L,4294967295UL,2L,-7L,0x6836L},0x81A78855L,255UL,0L,5L}, // p_761->g_270
        (VECTOR(int32_t, 2))(0x62ABB204L, 4L), // p_761->g_275
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L)), // p_761->g_284
        (VECTOR(int8_t, 8))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0x48L), 0x48L), 0x48L, 0x45L, 0x48L), // p_761->g_285
        (VECTOR(int8_t, 16))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, (-5L)), (-5L)), (-5L), 0x5CL, (-5L), (VECTOR(int8_t, 2))(0x5CL, (-5L)), (VECTOR(int8_t, 2))(0x5CL, (-5L)), 0x5CL, (-5L), 0x5CL, (-5L)), // p_761->g_287
        (VECTOR(int8_t, 8))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x1DL), 0x1DL), 0x1DL, 0x07L, 0x1DL), // p_761->g_290
        (VECTOR(int8_t, 2))(1L, 0x17L), // p_761->g_292
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_761->g_293
        (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x79L), 0x79L), 0x79L, 2L, 0x79L), // p_761->g_295
        (VECTOR(int16_t, 16))(0x31ECL, (VECTOR(int16_t, 4))(0x31ECL, (VECTOR(int16_t, 2))(0x31ECL, 0x750CL), 0x750CL), 0x750CL, 0x31ECL, 0x750CL, (VECTOR(int16_t, 2))(0x31ECL, 0x750CL), (VECTOR(int16_t, 2))(0x31ECL, 0x750CL), 0x31ECL, 0x750CL, 0x31ECL, 0x750CL), // p_761->g_312
        (VECTOR(int16_t, 2))(0x6299L, 0x4BE5L), // p_761->g_320
        (VECTOR(int16_t, 2))(4L, 0x547BL), // p_761->g_321
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0L), 0L), // p_761->g_339
        {0L}, // p_761->g_369
        &p_761->g_369, // p_761->g_368
        (VECTOR(int32_t, 2))(0x7401E0DFL, (-1L)), // p_761->g_413
        &p_761->g_267.f3.f1, // p_761->g_422
        (void*)0, // p_761->g_424
        (void*)0, // p_761->g_427
        (VECTOR(uint8_t, 16))(0x8FL, (VECTOR(uint8_t, 4))(0x8FL, (VECTOR(uint8_t, 2))(0x8FL, 252UL), 252UL), 252UL, 0x8FL, 252UL, (VECTOR(uint8_t, 2))(0x8FL, 252UL), (VECTOR(uint8_t, 2))(0x8FL, 252UL), 0x8FL, 252UL, 0x8FL, 252UL), // p_761->g_437
        (VECTOR(int8_t, 2))((-1L), 4L), // p_761->g_439
        (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0x04L), 0x04L), // p_761->g_450
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL), // p_761->g_451
        (void*)0, // p_761->g_480
        (VECTOR(int32_t, 2))(0x638BC9C8L, 0L), // p_761->g_482
        0x45492FE4L, // p_761->g_495
        &p_761->g_495, // p_761->g_494
        0xCEA22B319E10E389L, // p_761->g_501
        0L, // p_761->g_547
        {{0x9CL,0x5EL}}, // p_761->g_555
        {{0UL,0L}}, // p_761->g_566
        {{255UL,0L}}, // p_761->g_567
        &p_761->g_267.f2, // p_761->g_569
        (VECTOR(uint16_t, 16))(0xA130L, (VECTOR(uint16_t, 4))(0xA130L, (VECTOR(uint16_t, 2))(0xA130L, 0x1F19L), 0x1F19L), 0x1F19L, 0xA130L, 0x1F19L, (VECTOR(uint16_t, 2))(0xA130L, 0x1F19L), (VECTOR(uint16_t, 2))(0xA130L, 0x1F19L), 0xA130L, 0x1F19L, 0xA130L, 0x1F19L), // p_761->g_575
        (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x3FB9L), 0x3FB9L), // p_761->g_576
        (VECTOR(uint64_t, 4))(0xBF9759D127D2E4EAL, (VECTOR(uint64_t, 2))(0xBF9759D127D2E4EAL, 0xB913DE539E432DB3L), 0xB913DE539E432DB3L), // p_761->g_614
        {{0x44L,0x68L}}, // p_761->g_626
        {{0x41L,-7L}}, // p_761->g_629
        {{255UL,0x0CL}}, // p_761->g_632
        &p_761->g_632, // p_761->g_631
        {{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}},{{0x93L,0x33L}}}, // p_761->g_634
        (VECTOR(int32_t, 16))(0x3D621340L, (VECTOR(int32_t, 4))(0x3D621340L, (VECTOR(int32_t, 2))(0x3D621340L, (-7L)), (-7L)), (-7L), 0x3D621340L, (-7L), (VECTOR(int32_t, 2))(0x3D621340L, (-7L)), (VECTOR(int32_t, 2))(0x3D621340L, (-7L)), 0x3D621340L, (-7L), 0x3D621340L, (-7L)), // p_761->g_637
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), // p_761->g_640
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_761->g_641
        {5L,-1L,0L,{0x6553004AL,65535UL,{9UL},2L,0x7FFEB4ACL,0x64CFAEBE7E4761B4L,4UL,0L,0x6DCACCC8L,-1L},0x8D7DD3A7L,0x05L,1L,3L}, // p_761->g_683
        {0x523DDFB2L,0x1E3912AFL,0x31DDBE3DL,{0L,3UL,{1UL},0x74269CA9L,-4L,0L,0xE28A26ADL,6L,0x715075DEL,-1L},8UL,255UL,0L,-9L}, // p_761->g_688
        &p_761->g_688, // p_761->g_687
        {247UL}, // p_761->g_697
        &p_761->g_697, // p_761->g_696
        &p_761->g_696, // p_761->g_695
        0xAEC808C739BE6739L, // p_761->g_708
        (void*)0, // p_761->g_746
        &p_761->g_746, // p_761->g_745
        {0x3AF4457DF4717C1FL,0x3AF4457DF4717C1FL,0x3AF4457DF4717C1FL,0x3AF4457DF4717C1FL}, // p_761->g_757
        (VECTOR(int32_t, 2))((-1L), 1L), // p_761->g_760
        0, // p_761->v_collective
        sequence_input[get_global_id(0)], // p_761->global_0_offset
        sequence_input[get_global_id(1)], // p_761->global_1_offset
        sequence_input[get_global_id(2)], // p_761->global_2_offset
        sequence_input[get_local_id(0)], // p_761->local_0_offset
        sequence_input[get_local_id(1)], // p_761->local_1_offset
        sequence_input[get_local_id(2)], // p_761->local_2_offset
        sequence_input[get_group_id(0)], // p_761->group_0_offset
        sequence_input[get_group_id(1)], // p_761->group_1_offset
        sequence_input[get_group_id(2)], // p_761->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_761->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_762 = c_763;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_761);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_761->g_5.s0, "p_761->g_5.s0", print_hash_value);
    transparent_crc(p_761->g_5.s1, "p_761->g_5.s1", print_hash_value);
    transparent_crc(p_761->g_5.s2, "p_761->g_5.s2", print_hash_value);
    transparent_crc(p_761->g_5.s3, "p_761->g_5.s3", print_hash_value);
    transparent_crc(p_761->g_5.s4, "p_761->g_5.s4", print_hash_value);
    transparent_crc(p_761->g_5.s5, "p_761->g_5.s5", print_hash_value);
    transparent_crc(p_761->g_5.s6, "p_761->g_5.s6", print_hash_value);
    transparent_crc(p_761->g_5.s7, "p_761->g_5.s7", print_hash_value);
    transparent_crc(p_761->g_5.s8, "p_761->g_5.s8", print_hash_value);
    transparent_crc(p_761->g_5.s9, "p_761->g_5.s9", print_hash_value);
    transparent_crc(p_761->g_5.sa, "p_761->g_5.sa", print_hash_value);
    transparent_crc(p_761->g_5.sb, "p_761->g_5.sb", print_hash_value);
    transparent_crc(p_761->g_5.sc, "p_761->g_5.sc", print_hash_value);
    transparent_crc(p_761->g_5.sd, "p_761->g_5.sd", print_hash_value);
    transparent_crc(p_761->g_5.se, "p_761->g_5.se", print_hash_value);
    transparent_crc(p_761->g_5.sf, "p_761->g_5.sf", print_hash_value);
    transparent_crc(p_761->g_7, "p_761->g_7", print_hash_value);
    transparent_crc(p_761->g_14, "p_761->g_14", print_hash_value);
    transparent_crc(p_761->g_16, "p_761->g_16", print_hash_value);
    transparent_crc(p_761->g_26.x, "p_761->g_26.x", print_hash_value);
    transparent_crc(p_761->g_26.y, "p_761->g_26.y", print_hash_value);
    transparent_crc(p_761->g_26.z, "p_761->g_26.z", print_hash_value);
    transparent_crc(p_761->g_26.w, "p_761->g_26.w", print_hash_value);
    transparent_crc(p_761->g_48.x, "p_761->g_48.x", print_hash_value);
    transparent_crc(p_761->g_48.y, "p_761->g_48.y", print_hash_value);
    transparent_crc(p_761->g_58, "p_761->g_58", print_hash_value);
    transparent_crc(p_761->g_86, "p_761->g_86", print_hash_value);
    transparent_crc(p_761->g_87.s0, "p_761->g_87.s0", print_hash_value);
    transparent_crc(p_761->g_87.s1, "p_761->g_87.s1", print_hash_value);
    transparent_crc(p_761->g_87.s2, "p_761->g_87.s2", print_hash_value);
    transparent_crc(p_761->g_87.s3, "p_761->g_87.s3", print_hash_value);
    transparent_crc(p_761->g_87.s4, "p_761->g_87.s4", print_hash_value);
    transparent_crc(p_761->g_87.s5, "p_761->g_87.s5", print_hash_value);
    transparent_crc(p_761->g_87.s6, "p_761->g_87.s6", print_hash_value);
    transparent_crc(p_761->g_87.s7, "p_761->g_87.s7", print_hash_value);
    transparent_crc(p_761->g_90.f0, "p_761->g_90.f0", print_hash_value);
    transparent_crc(p_761->g_125.f0, "p_761->g_125.f0", print_hash_value);
    transparent_crc(p_761->g_125.f1, "p_761->g_125.f1", print_hash_value);
    transparent_crc(p_761->g_125.f2, "p_761->g_125.f2", print_hash_value);
    transparent_crc(p_761->g_125.f3.f0, "p_761->g_125.f3.f0", print_hash_value);
    transparent_crc(p_761->g_125.f3.f1, "p_761->g_125.f3.f1", print_hash_value);
    transparent_crc(p_761->g_125.f3.f2.f0, "p_761->g_125.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_125.f3.f3, "p_761->g_125.f3.f3", print_hash_value);
    transparent_crc(p_761->g_125.f3.f4, "p_761->g_125.f3.f4", print_hash_value);
    transparent_crc(p_761->g_125.f3.f5, "p_761->g_125.f3.f5", print_hash_value);
    transparent_crc(p_761->g_125.f3.f6, "p_761->g_125.f3.f6", print_hash_value);
    transparent_crc(p_761->g_125.f3.f7, "p_761->g_125.f3.f7", print_hash_value);
    transparent_crc(p_761->g_125.f3.f8, "p_761->g_125.f3.f8", print_hash_value);
    transparent_crc(p_761->g_125.f3.f9, "p_761->g_125.f3.f9", print_hash_value);
    transparent_crc(p_761->g_125.f4, "p_761->g_125.f4", print_hash_value);
    transparent_crc(p_761->g_125.f5, "p_761->g_125.f5", print_hash_value);
    transparent_crc(p_761->g_125.f6, "p_761->g_125.f6", print_hash_value);
    transparent_crc(p_761->g_125.f7, "p_761->g_125.f7", print_hash_value);
    transparent_crc(p_761->g_127, "p_761->g_127", print_hash_value);
    transparent_crc(p_761->g_196.x, "p_761->g_196.x", print_hash_value);
    transparent_crc(p_761->g_196.y, "p_761->g_196.y", print_hash_value);
    transparent_crc(p_761->g_196.z, "p_761->g_196.z", print_hash_value);
    transparent_crc(p_761->g_196.w, "p_761->g_196.w", print_hash_value);
    transparent_crc(p_761->g_213.f0, "p_761->g_213.f0", print_hash_value);
    transparent_crc(p_761->g_213.f1, "p_761->g_213.f1", print_hash_value);
    transparent_crc(p_761->g_213.f2, "p_761->g_213.f2", print_hash_value);
    transparent_crc(p_761->g_213.f3.f0, "p_761->g_213.f3.f0", print_hash_value);
    transparent_crc(p_761->g_213.f3.f1, "p_761->g_213.f3.f1", print_hash_value);
    transparent_crc(p_761->g_213.f3.f2.f0, "p_761->g_213.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_213.f3.f3, "p_761->g_213.f3.f3", print_hash_value);
    transparent_crc(p_761->g_213.f3.f4, "p_761->g_213.f3.f4", print_hash_value);
    transparent_crc(p_761->g_213.f3.f5, "p_761->g_213.f3.f5", print_hash_value);
    transparent_crc(p_761->g_213.f3.f6, "p_761->g_213.f3.f6", print_hash_value);
    transparent_crc(p_761->g_213.f3.f7, "p_761->g_213.f3.f7", print_hash_value);
    transparent_crc(p_761->g_213.f3.f8, "p_761->g_213.f3.f8", print_hash_value);
    transparent_crc(p_761->g_213.f3.f9, "p_761->g_213.f3.f9", print_hash_value);
    transparent_crc(p_761->g_213.f4, "p_761->g_213.f4", print_hash_value);
    transparent_crc(p_761->g_213.f5, "p_761->g_213.f5", print_hash_value);
    transparent_crc(p_761->g_213.f6, "p_761->g_213.f6", print_hash_value);
    transparent_crc(p_761->g_213.f7, "p_761->g_213.f7", print_hash_value);
    transparent_crc(p_761->g_242, "p_761->g_242", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_761->g_250[i].f0, "p_761->g_250[i].f0", print_hash_value);
        transparent_crc(p_761->g_250[i].f1, "p_761->g_250[i].f1", print_hash_value);
        transparent_crc(p_761->g_250[i].f2, "p_761->g_250[i].f2", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f0, "p_761->g_250[i].f3.f0", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f1, "p_761->g_250[i].f3.f1", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f2.f0, "p_761->g_250[i].f3.f2.f0", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f3, "p_761->g_250[i].f3.f3", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f4, "p_761->g_250[i].f3.f4", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f5, "p_761->g_250[i].f3.f5", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f6, "p_761->g_250[i].f3.f6", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f7, "p_761->g_250[i].f3.f7", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f8, "p_761->g_250[i].f3.f8", print_hash_value);
        transparent_crc(p_761->g_250[i].f3.f9, "p_761->g_250[i].f3.f9", print_hash_value);
        transparent_crc(p_761->g_250[i].f4, "p_761->g_250[i].f4", print_hash_value);
        transparent_crc(p_761->g_250[i].f5, "p_761->g_250[i].f5", print_hash_value);
        transparent_crc(p_761->g_250[i].f6, "p_761->g_250[i].f6", print_hash_value);
        transparent_crc(p_761->g_250[i].f7, "p_761->g_250[i].f7", print_hash_value);

    }
    transparent_crc(p_761->g_262.f0, "p_761->g_262.f0", print_hash_value);
    transparent_crc(p_761->g_267.f0, "p_761->g_267.f0", print_hash_value);
    transparent_crc(p_761->g_267.f1, "p_761->g_267.f1", print_hash_value);
    transparent_crc(p_761->g_267.f2, "p_761->g_267.f2", print_hash_value);
    transparent_crc(p_761->g_267.f3.f0, "p_761->g_267.f3.f0", print_hash_value);
    transparent_crc(p_761->g_267.f3.f1, "p_761->g_267.f3.f1", print_hash_value);
    transparent_crc(p_761->g_267.f3.f2.f0, "p_761->g_267.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_267.f3.f3, "p_761->g_267.f3.f3", print_hash_value);
    transparent_crc(p_761->g_267.f3.f4, "p_761->g_267.f3.f4", print_hash_value);
    transparent_crc(p_761->g_267.f3.f5, "p_761->g_267.f3.f5", print_hash_value);
    transparent_crc(p_761->g_267.f3.f6, "p_761->g_267.f3.f6", print_hash_value);
    transparent_crc(p_761->g_267.f3.f7, "p_761->g_267.f3.f7", print_hash_value);
    transparent_crc(p_761->g_267.f3.f8, "p_761->g_267.f3.f8", print_hash_value);
    transparent_crc(p_761->g_267.f3.f9, "p_761->g_267.f3.f9", print_hash_value);
    transparent_crc(p_761->g_267.f4, "p_761->g_267.f4", print_hash_value);
    transparent_crc(p_761->g_267.f5, "p_761->g_267.f5", print_hash_value);
    transparent_crc(p_761->g_267.f6, "p_761->g_267.f6", print_hash_value);
    transparent_crc(p_761->g_267.f7, "p_761->g_267.f7", print_hash_value);
    transparent_crc(p_761->g_270.f0, "p_761->g_270.f0", print_hash_value);
    transparent_crc(p_761->g_270.f1, "p_761->g_270.f1", print_hash_value);
    transparent_crc(p_761->g_270.f2, "p_761->g_270.f2", print_hash_value);
    transparent_crc(p_761->g_270.f3.f0, "p_761->g_270.f3.f0", print_hash_value);
    transparent_crc(p_761->g_270.f3.f1, "p_761->g_270.f3.f1", print_hash_value);
    transparent_crc(p_761->g_270.f3.f2.f0, "p_761->g_270.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_270.f3.f3, "p_761->g_270.f3.f3", print_hash_value);
    transparent_crc(p_761->g_270.f3.f4, "p_761->g_270.f3.f4", print_hash_value);
    transparent_crc(p_761->g_270.f3.f5, "p_761->g_270.f3.f5", print_hash_value);
    transparent_crc(p_761->g_270.f3.f6, "p_761->g_270.f3.f6", print_hash_value);
    transparent_crc(p_761->g_270.f3.f7, "p_761->g_270.f3.f7", print_hash_value);
    transparent_crc(p_761->g_270.f3.f8, "p_761->g_270.f3.f8", print_hash_value);
    transparent_crc(p_761->g_270.f3.f9, "p_761->g_270.f3.f9", print_hash_value);
    transparent_crc(p_761->g_270.f4, "p_761->g_270.f4", print_hash_value);
    transparent_crc(p_761->g_270.f5, "p_761->g_270.f5", print_hash_value);
    transparent_crc(p_761->g_270.f6, "p_761->g_270.f6", print_hash_value);
    transparent_crc(p_761->g_270.f7, "p_761->g_270.f7", print_hash_value);
    transparent_crc(p_761->g_275.x, "p_761->g_275.x", print_hash_value);
    transparent_crc(p_761->g_275.y, "p_761->g_275.y", print_hash_value);
    transparent_crc(p_761->g_284.s0, "p_761->g_284.s0", print_hash_value);
    transparent_crc(p_761->g_284.s1, "p_761->g_284.s1", print_hash_value);
    transparent_crc(p_761->g_284.s2, "p_761->g_284.s2", print_hash_value);
    transparent_crc(p_761->g_284.s3, "p_761->g_284.s3", print_hash_value);
    transparent_crc(p_761->g_284.s4, "p_761->g_284.s4", print_hash_value);
    transparent_crc(p_761->g_284.s5, "p_761->g_284.s5", print_hash_value);
    transparent_crc(p_761->g_284.s6, "p_761->g_284.s6", print_hash_value);
    transparent_crc(p_761->g_284.s7, "p_761->g_284.s7", print_hash_value);
    transparent_crc(p_761->g_285.s0, "p_761->g_285.s0", print_hash_value);
    transparent_crc(p_761->g_285.s1, "p_761->g_285.s1", print_hash_value);
    transparent_crc(p_761->g_285.s2, "p_761->g_285.s2", print_hash_value);
    transparent_crc(p_761->g_285.s3, "p_761->g_285.s3", print_hash_value);
    transparent_crc(p_761->g_285.s4, "p_761->g_285.s4", print_hash_value);
    transparent_crc(p_761->g_285.s5, "p_761->g_285.s5", print_hash_value);
    transparent_crc(p_761->g_285.s6, "p_761->g_285.s6", print_hash_value);
    transparent_crc(p_761->g_285.s7, "p_761->g_285.s7", print_hash_value);
    transparent_crc(p_761->g_287.s0, "p_761->g_287.s0", print_hash_value);
    transparent_crc(p_761->g_287.s1, "p_761->g_287.s1", print_hash_value);
    transparent_crc(p_761->g_287.s2, "p_761->g_287.s2", print_hash_value);
    transparent_crc(p_761->g_287.s3, "p_761->g_287.s3", print_hash_value);
    transparent_crc(p_761->g_287.s4, "p_761->g_287.s4", print_hash_value);
    transparent_crc(p_761->g_287.s5, "p_761->g_287.s5", print_hash_value);
    transparent_crc(p_761->g_287.s6, "p_761->g_287.s6", print_hash_value);
    transparent_crc(p_761->g_287.s7, "p_761->g_287.s7", print_hash_value);
    transparent_crc(p_761->g_287.s8, "p_761->g_287.s8", print_hash_value);
    transparent_crc(p_761->g_287.s9, "p_761->g_287.s9", print_hash_value);
    transparent_crc(p_761->g_287.sa, "p_761->g_287.sa", print_hash_value);
    transparent_crc(p_761->g_287.sb, "p_761->g_287.sb", print_hash_value);
    transparent_crc(p_761->g_287.sc, "p_761->g_287.sc", print_hash_value);
    transparent_crc(p_761->g_287.sd, "p_761->g_287.sd", print_hash_value);
    transparent_crc(p_761->g_287.se, "p_761->g_287.se", print_hash_value);
    transparent_crc(p_761->g_287.sf, "p_761->g_287.sf", print_hash_value);
    transparent_crc(p_761->g_290.s0, "p_761->g_290.s0", print_hash_value);
    transparent_crc(p_761->g_290.s1, "p_761->g_290.s1", print_hash_value);
    transparent_crc(p_761->g_290.s2, "p_761->g_290.s2", print_hash_value);
    transparent_crc(p_761->g_290.s3, "p_761->g_290.s3", print_hash_value);
    transparent_crc(p_761->g_290.s4, "p_761->g_290.s4", print_hash_value);
    transparent_crc(p_761->g_290.s5, "p_761->g_290.s5", print_hash_value);
    transparent_crc(p_761->g_290.s6, "p_761->g_290.s6", print_hash_value);
    transparent_crc(p_761->g_290.s7, "p_761->g_290.s7", print_hash_value);
    transparent_crc(p_761->g_292.x, "p_761->g_292.x", print_hash_value);
    transparent_crc(p_761->g_292.y, "p_761->g_292.y", print_hash_value);
    transparent_crc(p_761->g_293.s0, "p_761->g_293.s0", print_hash_value);
    transparent_crc(p_761->g_293.s1, "p_761->g_293.s1", print_hash_value);
    transparent_crc(p_761->g_293.s2, "p_761->g_293.s2", print_hash_value);
    transparent_crc(p_761->g_293.s3, "p_761->g_293.s3", print_hash_value);
    transparent_crc(p_761->g_293.s4, "p_761->g_293.s4", print_hash_value);
    transparent_crc(p_761->g_293.s5, "p_761->g_293.s5", print_hash_value);
    transparent_crc(p_761->g_293.s6, "p_761->g_293.s6", print_hash_value);
    transparent_crc(p_761->g_293.s7, "p_761->g_293.s7", print_hash_value);
    transparent_crc(p_761->g_293.s8, "p_761->g_293.s8", print_hash_value);
    transparent_crc(p_761->g_293.s9, "p_761->g_293.s9", print_hash_value);
    transparent_crc(p_761->g_293.sa, "p_761->g_293.sa", print_hash_value);
    transparent_crc(p_761->g_293.sb, "p_761->g_293.sb", print_hash_value);
    transparent_crc(p_761->g_293.sc, "p_761->g_293.sc", print_hash_value);
    transparent_crc(p_761->g_293.sd, "p_761->g_293.sd", print_hash_value);
    transparent_crc(p_761->g_293.se, "p_761->g_293.se", print_hash_value);
    transparent_crc(p_761->g_293.sf, "p_761->g_293.sf", print_hash_value);
    transparent_crc(p_761->g_295.s0, "p_761->g_295.s0", print_hash_value);
    transparent_crc(p_761->g_295.s1, "p_761->g_295.s1", print_hash_value);
    transparent_crc(p_761->g_295.s2, "p_761->g_295.s2", print_hash_value);
    transparent_crc(p_761->g_295.s3, "p_761->g_295.s3", print_hash_value);
    transparent_crc(p_761->g_295.s4, "p_761->g_295.s4", print_hash_value);
    transparent_crc(p_761->g_295.s5, "p_761->g_295.s5", print_hash_value);
    transparent_crc(p_761->g_295.s6, "p_761->g_295.s6", print_hash_value);
    transparent_crc(p_761->g_295.s7, "p_761->g_295.s7", print_hash_value);
    transparent_crc(p_761->g_312.s0, "p_761->g_312.s0", print_hash_value);
    transparent_crc(p_761->g_312.s1, "p_761->g_312.s1", print_hash_value);
    transparent_crc(p_761->g_312.s2, "p_761->g_312.s2", print_hash_value);
    transparent_crc(p_761->g_312.s3, "p_761->g_312.s3", print_hash_value);
    transparent_crc(p_761->g_312.s4, "p_761->g_312.s4", print_hash_value);
    transparent_crc(p_761->g_312.s5, "p_761->g_312.s5", print_hash_value);
    transparent_crc(p_761->g_312.s6, "p_761->g_312.s6", print_hash_value);
    transparent_crc(p_761->g_312.s7, "p_761->g_312.s7", print_hash_value);
    transparent_crc(p_761->g_312.s8, "p_761->g_312.s8", print_hash_value);
    transparent_crc(p_761->g_312.s9, "p_761->g_312.s9", print_hash_value);
    transparent_crc(p_761->g_312.sa, "p_761->g_312.sa", print_hash_value);
    transparent_crc(p_761->g_312.sb, "p_761->g_312.sb", print_hash_value);
    transparent_crc(p_761->g_312.sc, "p_761->g_312.sc", print_hash_value);
    transparent_crc(p_761->g_312.sd, "p_761->g_312.sd", print_hash_value);
    transparent_crc(p_761->g_312.se, "p_761->g_312.se", print_hash_value);
    transparent_crc(p_761->g_312.sf, "p_761->g_312.sf", print_hash_value);
    transparent_crc(p_761->g_320.x, "p_761->g_320.x", print_hash_value);
    transparent_crc(p_761->g_320.y, "p_761->g_320.y", print_hash_value);
    transparent_crc(p_761->g_321.x, "p_761->g_321.x", print_hash_value);
    transparent_crc(p_761->g_321.y, "p_761->g_321.y", print_hash_value);
    transparent_crc(p_761->g_339.x, "p_761->g_339.x", print_hash_value);
    transparent_crc(p_761->g_339.y, "p_761->g_339.y", print_hash_value);
    transparent_crc(p_761->g_339.z, "p_761->g_339.z", print_hash_value);
    transparent_crc(p_761->g_339.w, "p_761->g_339.w", print_hash_value);
    transparent_crc(p_761->g_369.f0, "p_761->g_369.f0", print_hash_value);
    transparent_crc(p_761->g_413.x, "p_761->g_413.x", print_hash_value);
    transparent_crc(p_761->g_413.y, "p_761->g_413.y", print_hash_value);
    transparent_crc(p_761->g_437.s0, "p_761->g_437.s0", print_hash_value);
    transparent_crc(p_761->g_437.s1, "p_761->g_437.s1", print_hash_value);
    transparent_crc(p_761->g_437.s2, "p_761->g_437.s2", print_hash_value);
    transparent_crc(p_761->g_437.s3, "p_761->g_437.s3", print_hash_value);
    transparent_crc(p_761->g_437.s4, "p_761->g_437.s4", print_hash_value);
    transparent_crc(p_761->g_437.s5, "p_761->g_437.s5", print_hash_value);
    transparent_crc(p_761->g_437.s6, "p_761->g_437.s6", print_hash_value);
    transparent_crc(p_761->g_437.s7, "p_761->g_437.s7", print_hash_value);
    transparent_crc(p_761->g_437.s8, "p_761->g_437.s8", print_hash_value);
    transparent_crc(p_761->g_437.s9, "p_761->g_437.s9", print_hash_value);
    transparent_crc(p_761->g_437.sa, "p_761->g_437.sa", print_hash_value);
    transparent_crc(p_761->g_437.sb, "p_761->g_437.sb", print_hash_value);
    transparent_crc(p_761->g_437.sc, "p_761->g_437.sc", print_hash_value);
    transparent_crc(p_761->g_437.sd, "p_761->g_437.sd", print_hash_value);
    transparent_crc(p_761->g_437.se, "p_761->g_437.se", print_hash_value);
    transparent_crc(p_761->g_437.sf, "p_761->g_437.sf", print_hash_value);
    transparent_crc(p_761->g_439.x, "p_761->g_439.x", print_hash_value);
    transparent_crc(p_761->g_439.y, "p_761->g_439.y", print_hash_value);
    transparent_crc(p_761->g_450.x, "p_761->g_450.x", print_hash_value);
    transparent_crc(p_761->g_450.y, "p_761->g_450.y", print_hash_value);
    transparent_crc(p_761->g_450.z, "p_761->g_450.z", print_hash_value);
    transparent_crc(p_761->g_450.w, "p_761->g_450.w", print_hash_value);
    transparent_crc(p_761->g_451.s0, "p_761->g_451.s0", print_hash_value);
    transparent_crc(p_761->g_451.s1, "p_761->g_451.s1", print_hash_value);
    transparent_crc(p_761->g_451.s2, "p_761->g_451.s2", print_hash_value);
    transparent_crc(p_761->g_451.s3, "p_761->g_451.s3", print_hash_value);
    transparent_crc(p_761->g_451.s4, "p_761->g_451.s4", print_hash_value);
    transparent_crc(p_761->g_451.s5, "p_761->g_451.s5", print_hash_value);
    transparent_crc(p_761->g_451.s6, "p_761->g_451.s6", print_hash_value);
    transparent_crc(p_761->g_451.s7, "p_761->g_451.s7", print_hash_value);
    transparent_crc(p_761->g_451.s8, "p_761->g_451.s8", print_hash_value);
    transparent_crc(p_761->g_451.s9, "p_761->g_451.s9", print_hash_value);
    transparent_crc(p_761->g_451.sa, "p_761->g_451.sa", print_hash_value);
    transparent_crc(p_761->g_451.sb, "p_761->g_451.sb", print_hash_value);
    transparent_crc(p_761->g_451.sc, "p_761->g_451.sc", print_hash_value);
    transparent_crc(p_761->g_451.sd, "p_761->g_451.sd", print_hash_value);
    transparent_crc(p_761->g_451.se, "p_761->g_451.se", print_hash_value);
    transparent_crc(p_761->g_451.sf, "p_761->g_451.sf", print_hash_value);
    transparent_crc(p_761->g_482.x, "p_761->g_482.x", print_hash_value);
    transparent_crc(p_761->g_482.y, "p_761->g_482.y", print_hash_value);
    transparent_crc(p_761->g_495, "p_761->g_495", print_hash_value);
    transparent_crc(p_761->g_501, "p_761->g_501", print_hash_value);
    transparent_crc(p_761->g_547, "p_761->g_547", print_hash_value);
    transparent_crc(p_761->g_555.f0.f0, "p_761->g_555.f0.f0", print_hash_value);
    transparent_crc(p_761->g_555.f0.f1, "p_761->g_555.f0.f1", print_hash_value);
    transparent_crc(p_761->g_566.f0.f0, "p_761->g_566.f0.f0", print_hash_value);
    transparent_crc(p_761->g_566.f0.f1, "p_761->g_566.f0.f1", print_hash_value);
    transparent_crc(p_761->g_567.f0.f0, "p_761->g_567.f0.f0", print_hash_value);
    transparent_crc(p_761->g_567.f0.f1, "p_761->g_567.f0.f1", print_hash_value);
    transparent_crc(p_761->g_575.s0, "p_761->g_575.s0", print_hash_value);
    transparent_crc(p_761->g_575.s1, "p_761->g_575.s1", print_hash_value);
    transparent_crc(p_761->g_575.s2, "p_761->g_575.s2", print_hash_value);
    transparent_crc(p_761->g_575.s3, "p_761->g_575.s3", print_hash_value);
    transparent_crc(p_761->g_575.s4, "p_761->g_575.s4", print_hash_value);
    transparent_crc(p_761->g_575.s5, "p_761->g_575.s5", print_hash_value);
    transparent_crc(p_761->g_575.s6, "p_761->g_575.s6", print_hash_value);
    transparent_crc(p_761->g_575.s7, "p_761->g_575.s7", print_hash_value);
    transparent_crc(p_761->g_575.s8, "p_761->g_575.s8", print_hash_value);
    transparent_crc(p_761->g_575.s9, "p_761->g_575.s9", print_hash_value);
    transparent_crc(p_761->g_575.sa, "p_761->g_575.sa", print_hash_value);
    transparent_crc(p_761->g_575.sb, "p_761->g_575.sb", print_hash_value);
    transparent_crc(p_761->g_575.sc, "p_761->g_575.sc", print_hash_value);
    transparent_crc(p_761->g_575.sd, "p_761->g_575.sd", print_hash_value);
    transparent_crc(p_761->g_575.se, "p_761->g_575.se", print_hash_value);
    transparent_crc(p_761->g_575.sf, "p_761->g_575.sf", print_hash_value);
    transparent_crc(p_761->g_576.x, "p_761->g_576.x", print_hash_value);
    transparent_crc(p_761->g_576.y, "p_761->g_576.y", print_hash_value);
    transparent_crc(p_761->g_576.z, "p_761->g_576.z", print_hash_value);
    transparent_crc(p_761->g_576.w, "p_761->g_576.w", print_hash_value);
    transparent_crc(p_761->g_614.x, "p_761->g_614.x", print_hash_value);
    transparent_crc(p_761->g_614.y, "p_761->g_614.y", print_hash_value);
    transparent_crc(p_761->g_614.z, "p_761->g_614.z", print_hash_value);
    transparent_crc(p_761->g_614.w, "p_761->g_614.w", print_hash_value);
    transparent_crc(p_761->g_626.f0.f0, "p_761->g_626.f0.f0", print_hash_value);
    transparent_crc(p_761->g_626.f0.f1, "p_761->g_626.f0.f1", print_hash_value);
    transparent_crc(p_761->g_629.f0.f0, "p_761->g_629.f0.f0", print_hash_value);
    transparent_crc(p_761->g_629.f0.f1, "p_761->g_629.f0.f1", print_hash_value);
    transparent_crc(p_761->g_632.f0.f0, "p_761->g_632.f0.f0", print_hash_value);
    transparent_crc(p_761->g_632.f0.f1, "p_761->g_632.f0.f1", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_761->g_634[i].f0.f0, "p_761->g_634[i].f0.f0", print_hash_value);
        transparent_crc(p_761->g_634[i].f0.f1, "p_761->g_634[i].f0.f1", print_hash_value);

    }
    transparent_crc(p_761->g_637.s0, "p_761->g_637.s0", print_hash_value);
    transparent_crc(p_761->g_637.s1, "p_761->g_637.s1", print_hash_value);
    transparent_crc(p_761->g_637.s2, "p_761->g_637.s2", print_hash_value);
    transparent_crc(p_761->g_637.s3, "p_761->g_637.s3", print_hash_value);
    transparent_crc(p_761->g_637.s4, "p_761->g_637.s4", print_hash_value);
    transparent_crc(p_761->g_637.s5, "p_761->g_637.s5", print_hash_value);
    transparent_crc(p_761->g_637.s6, "p_761->g_637.s6", print_hash_value);
    transparent_crc(p_761->g_637.s7, "p_761->g_637.s7", print_hash_value);
    transparent_crc(p_761->g_637.s8, "p_761->g_637.s8", print_hash_value);
    transparent_crc(p_761->g_637.s9, "p_761->g_637.s9", print_hash_value);
    transparent_crc(p_761->g_637.sa, "p_761->g_637.sa", print_hash_value);
    transparent_crc(p_761->g_637.sb, "p_761->g_637.sb", print_hash_value);
    transparent_crc(p_761->g_637.sc, "p_761->g_637.sc", print_hash_value);
    transparent_crc(p_761->g_637.sd, "p_761->g_637.sd", print_hash_value);
    transparent_crc(p_761->g_637.se, "p_761->g_637.se", print_hash_value);
    transparent_crc(p_761->g_637.sf, "p_761->g_637.sf", print_hash_value);
    transparent_crc(p_761->g_640.x, "p_761->g_640.x", print_hash_value);
    transparent_crc(p_761->g_640.y, "p_761->g_640.y", print_hash_value);
    transparent_crc(p_761->g_640.z, "p_761->g_640.z", print_hash_value);
    transparent_crc(p_761->g_640.w, "p_761->g_640.w", print_hash_value);
    transparent_crc(p_761->g_641.s0, "p_761->g_641.s0", print_hash_value);
    transparent_crc(p_761->g_641.s1, "p_761->g_641.s1", print_hash_value);
    transparent_crc(p_761->g_641.s2, "p_761->g_641.s2", print_hash_value);
    transparent_crc(p_761->g_641.s3, "p_761->g_641.s3", print_hash_value);
    transparent_crc(p_761->g_641.s4, "p_761->g_641.s4", print_hash_value);
    transparent_crc(p_761->g_641.s5, "p_761->g_641.s5", print_hash_value);
    transparent_crc(p_761->g_641.s6, "p_761->g_641.s6", print_hash_value);
    transparent_crc(p_761->g_641.s7, "p_761->g_641.s7", print_hash_value);
    transparent_crc(p_761->g_683.f0, "p_761->g_683.f0", print_hash_value);
    transparent_crc(p_761->g_683.f1, "p_761->g_683.f1", print_hash_value);
    transparent_crc(p_761->g_683.f2, "p_761->g_683.f2", print_hash_value);
    transparent_crc(p_761->g_683.f3.f0, "p_761->g_683.f3.f0", print_hash_value);
    transparent_crc(p_761->g_683.f3.f1, "p_761->g_683.f3.f1", print_hash_value);
    transparent_crc(p_761->g_683.f3.f2.f0, "p_761->g_683.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_683.f3.f3, "p_761->g_683.f3.f3", print_hash_value);
    transparent_crc(p_761->g_683.f3.f4, "p_761->g_683.f3.f4", print_hash_value);
    transparent_crc(p_761->g_683.f3.f5, "p_761->g_683.f3.f5", print_hash_value);
    transparent_crc(p_761->g_683.f3.f6, "p_761->g_683.f3.f6", print_hash_value);
    transparent_crc(p_761->g_683.f3.f7, "p_761->g_683.f3.f7", print_hash_value);
    transparent_crc(p_761->g_683.f3.f8, "p_761->g_683.f3.f8", print_hash_value);
    transparent_crc(p_761->g_683.f3.f9, "p_761->g_683.f3.f9", print_hash_value);
    transparent_crc(p_761->g_683.f4, "p_761->g_683.f4", print_hash_value);
    transparent_crc(p_761->g_683.f5, "p_761->g_683.f5", print_hash_value);
    transparent_crc(p_761->g_683.f6, "p_761->g_683.f6", print_hash_value);
    transparent_crc(p_761->g_683.f7, "p_761->g_683.f7", print_hash_value);
    transparent_crc(p_761->g_688.f0, "p_761->g_688.f0", print_hash_value);
    transparent_crc(p_761->g_688.f1, "p_761->g_688.f1", print_hash_value);
    transparent_crc(p_761->g_688.f2, "p_761->g_688.f2", print_hash_value);
    transparent_crc(p_761->g_688.f3.f0, "p_761->g_688.f3.f0", print_hash_value);
    transparent_crc(p_761->g_688.f3.f1, "p_761->g_688.f3.f1", print_hash_value);
    transparent_crc(p_761->g_688.f3.f2.f0, "p_761->g_688.f3.f2.f0", print_hash_value);
    transparent_crc(p_761->g_688.f3.f3, "p_761->g_688.f3.f3", print_hash_value);
    transparent_crc(p_761->g_688.f3.f4, "p_761->g_688.f3.f4", print_hash_value);
    transparent_crc(p_761->g_688.f3.f5, "p_761->g_688.f3.f5", print_hash_value);
    transparent_crc(p_761->g_688.f3.f6, "p_761->g_688.f3.f6", print_hash_value);
    transparent_crc(p_761->g_688.f3.f7, "p_761->g_688.f3.f7", print_hash_value);
    transparent_crc(p_761->g_688.f3.f8, "p_761->g_688.f3.f8", print_hash_value);
    transparent_crc(p_761->g_688.f3.f9, "p_761->g_688.f3.f9", print_hash_value);
    transparent_crc(p_761->g_688.f4, "p_761->g_688.f4", print_hash_value);
    transparent_crc(p_761->g_688.f5, "p_761->g_688.f5", print_hash_value);
    transparent_crc(p_761->g_688.f6, "p_761->g_688.f6", print_hash_value);
    transparent_crc(p_761->g_688.f7, "p_761->g_688.f7", print_hash_value);
    transparent_crc(p_761->g_697.f0, "p_761->g_697.f0", print_hash_value);
    transparent_crc(p_761->g_708, "p_761->g_708", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_761->g_757[i], "p_761->g_757[i]", print_hash_value);

    }
    transparent_crc(p_761->g_760.x, "p_761->g_760.x", print_hash_value);
    transparent_crc(p_761->g_760.y, "p_761->g_760.y", print_hash_value);
    transparent_crc(p_761->v_collective, "p_761->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 95; i++)
            transparent_crc(p_761->g_special_values[i + 95 * get_linear_group_id()], "p_761->g_special_values[i + 95 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 95; i++)
            transparent_crc(p_761->l_special_values[i], "p_761->l_special_values[i]", print_hash_value);
    transparent_crc(p_761->l_comm_values[get_linear_local_id()], "p_761->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_761->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_761->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
