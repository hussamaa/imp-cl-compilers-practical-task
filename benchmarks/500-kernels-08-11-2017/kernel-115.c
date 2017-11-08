// --atomics 14 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 39,9,7 -l 39,1,1
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

__constant uint32_t permutations[10][39] = {
{12,28,21,5,27,1,17,25,29,6,19,2,16,26,3,24,14,37,18,15,20,34,31,13,38,33,11,23,32,4,7,0,36,30,8,9,22,10,35}, // permutation 0
{13,2,11,27,29,19,9,24,8,5,26,35,36,18,0,32,16,22,20,37,12,10,34,33,4,21,14,6,31,15,7,25,23,3,30,17,1,28,38}, // permutation 1
{12,14,0,13,15,8,37,24,1,20,38,32,16,23,18,30,17,21,33,11,5,26,19,22,9,35,29,2,6,10,3,25,7,27,34,36,28,31,4}, // permutation 2
{25,2,37,33,32,17,4,10,15,1,23,7,35,0,29,38,26,8,30,24,11,16,3,21,36,9,22,31,27,19,28,18,20,12,6,13,34,5,14}, // permutation 3
{37,20,11,38,5,24,18,35,26,22,3,23,17,7,25,28,12,2,10,16,36,31,15,19,27,34,9,32,8,21,33,14,4,1,13,0,6,30,29}, // permutation 4
{31,5,4,32,8,15,29,24,30,14,36,38,16,3,19,18,21,6,27,10,12,1,13,7,23,28,0,26,35,17,20,11,2,33,25,37,22,9,34}, // permutation 5
{32,5,27,6,28,35,1,9,20,19,29,2,37,8,33,38,18,25,0,23,15,36,24,11,16,34,7,21,30,31,22,12,10,4,17,14,26,13,3}, // permutation 6
{10,0,23,30,18,29,8,15,12,36,19,22,24,1,3,11,4,28,2,33,13,16,27,5,35,7,6,20,31,34,21,26,32,37,38,25,9,14,17}, // permutation 7
{28,22,25,32,10,23,35,20,16,4,17,1,12,33,0,5,21,26,27,3,34,6,9,37,2,18,24,29,8,38,30,14,36,15,13,11,31,7,19}, // permutation 8
{23,11,2,9,22,17,30,20,28,5,18,7,12,21,37,27,6,34,38,14,35,16,1,31,4,33,36,3,8,25,32,24,13,26,19,0,29,10,15} // permutation 9
};

// Seed: 2190243840

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint8_t  f0;
};

union U1 {
   int64_t  f0;
};

struct S2 {
    int32_t g_13;
    int32_t g_15;
    struct S0 g_30;
    uint32_t g_52;
    VECTOR(int64_t, 4) g_54;
    uint32_t g_67;
    int32_t g_77;
    volatile VECTOR(uint32_t, 4) g_97;
    union U1 g_111;
    volatile VECTOR(int16_t, 4) g_116;
    int32_t g_126;
    int32_t g_128;
    int8_t g_129;
    uint32_t g_130;
    uint32_t *g_177;
    VECTOR(int32_t, 2) g_186;
    struct S0 g_197;
    uint16_t g_216;
    struct S0 g_240;
    int32_t * volatile g_241;
    int32_t * volatile * volatile g_242;
    VECTOR(uint64_t, 8) g_247;
    int64_t g_271;
    volatile VECTOR(uint8_t, 8) g_287;
    uint64_t *g_288;
    VECTOR(int16_t, 2) g_299;
    volatile uint8_t *g_304;
    VECTOR(uint32_t, 2) g_330;
    volatile struct S0 g_331[10];
    int32_t *g_341;
    int32_t ** volatile g_340[7][6];
    int32_t * volatile * volatile g_353;
    int8_t g_359;
    struct S0 *g_371;
    struct S0 **g_370;
    struct S0 *** volatile g_369[1];
    struct S0 *** volatile g_372;
    volatile struct S0 g_373;
    volatile struct S0 g_374;
    VECTOR(int32_t, 8) g_388;
    volatile struct S0 g_399;
    int32_t g_404;
    VECTOR(int8_t, 8) g_407;
    VECTOR(uint8_t, 2) g_416;
    volatile uint64_t g_472;
    int32_t ** volatile g_475[2];
    int32_t ** volatile g_480[8][8];
    int32_t ** volatile g_481;
    volatile struct S0 g_483;
    struct S0 ***g_489;
    volatile VECTOR(int64_t, 4) g_498;
    struct S0 g_543;
    volatile VECTOR(int32_t, 2) g_611;
    uint64_t g_613;
    union U1 *g_626[8];
    union U1 ** volatile g_625;
    int32_t ** volatile g_628;
    VECTOR(uint16_t, 2) g_642;
    int32_t ** volatile g_652;
    int32_t ** volatile g_655[10][9][2];
    int32_t ** volatile g_656;
    union U1 *g_705;
    volatile VECTOR(int32_t, 4) g_721;
    volatile VECTOR(uint16_t, 2) g_742;
    VECTOR(int32_t, 4) g_743;
    int32_t g_759;
    volatile struct S0 g_765;
    volatile int32_t g_786;
    int32_t **g_832[4][7][2];
    int32_t *** volatile g_831[4];
    int32_t *** volatile g_833;
    int8_t *g_904;
    int8_t ** volatile g_903[10];
    VECTOR(uint64_t, 4) g_905;
    uint64_t g_1016;
    uint64_t *g_1015;
    uint32_t * volatile *g_1024;
    uint32_t * volatile **g_1023[5];
    volatile struct S0 g_1031[7][2][6];
    int32_t ** volatile g_1033;
    union U1 ** volatile g_1060;
    uint32_t * volatile g_1063[8];
    uint32_t * volatile *g_1062;
    int32_t ** volatile g_1084;
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
struct S0  func_1(struct S2 * p_1085);
int16_t  func_9(int64_t  p_10, struct S2 * p_1085);
int32_t  func_18(int32_t * p_19, uint64_t  p_20, int32_t  p_21, struct S2 * p_1085);
uint16_t  func_23(int32_t  p_24, struct S0 * p_25, uint64_t  p_26, uint32_t  p_27, int32_t * p_28, struct S2 * p_1085);
union U1 * func_32(union U1 * p_33, uint8_t  p_34, uint64_t  p_35, struct S2 * p_1085);
union U1 * func_36(struct S0 * p_37, struct S2 * p_1085);
struct S0 * func_38(int32_t * p_39, uint32_t  p_40, union U1 * p_41, int32_t * p_42, struct S2 * p_1085);
uint64_t  func_43(struct S0 * p_44, union U1  p_45, int64_t  p_46, struct S0 * p_47, struct S0 * p_48, struct S2 * p_1085);
struct S0 * func_68(int64_t * p_69, int64_t  p_70, uint32_t  p_71, struct S2 * p_1085);
int16_t  func_74(uint32_t * p_75, struct S2 * p_1085);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1085->g_comm_values p_1085->g_13 p_1085->l_comm_values p_1085->g_15 p_1085->g_52 p_1085->g_97 p_1085->g_54 p_1085->g_77 p_1085->g_116 p_1085->g_126 p_1085->g_67 p_1085->g_111.f0 p_1085->g_128 p_1085->g_129 p_1085->g_130 p_1085->g_111 p_1085->g_197 p_1085->g_216 p_1085->g_186 p_1085->g_240 p_1085->g_241 p_1085->g_242 p_1085->g_177 p_1085->g_330 p_1085->g_331 p_1085->g_353 p_1085->g_372 p_1085->g_373 p_1085->g_371 p_1085->g_341 p_1085->g_247 p_1085->g_299 p_1085->g_388 p_1085->g_399 p_1085->g_374.f0 p_1085->g_407 p_1085->g_404 p_1085->g_416 p_1085->g_304 p_1085->g_472 p_1085->g_483 p_1085->g_498 p_1085->g_543.f0 p_1085->g_611 p_1085->g_271 p_1085->g_625 p_1085->g_628 p_1085->g_642 p_1085->g_652 p_1085->g_30 p_1085->g_705 p_1085->g_721 p_1085->g_742 p_1085->g_743 p_1085->g_765 p_1085->g_613 p_1085->g_786 p_1085->g_543 p_1085->g_904 p_1085->g_759 p_1085->g_626 p_1085->g_1023 p_1085->g_1031 p_1085->g_1033 p_1085->g_1060 p_1085->g_1062 p_1085->g_1084
 * writes: p_1085->g_13 p_1085->g_52 p_1085->g_67 p_1085->g_97 p_1085->g_77 p_1085->g_54 p_1085->g_128 p_1085->g_130 p_1085->g_177 p_1085->g_126 p_1085->g_216 p_1085->g_30 p_1085->g_241 p_1085->g_129 p_1085->g_271 p_1085->g_330 p_1085->g_240 p_1085->g_341 p_1085->g_370 p_1085->g_374 p_1085->g_404 p_1085->g_299 p_1085->g_197 p_1085->g_489 p_1085->g_186 p_1085->g_543 p_1085->g_416 p_1085->g_613 p_1085->g_626 p_1085->g_111.f0 p_1085->g_759 p_1085->g_832 p_1085->g_642 p_1085->g_705 p_1085->g_1015 p_1085->g_359 p_1085->g_1062 p_1085->g_371
 */
struct S0  func_1(struct S2 * p_1085)
{ /* block id: 4 */
    int64_t l_6 = (-1L);
    int32_t *l_14[10] = {&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15,&p_1085->g_15};
    VECTOR(uint16_t, 4) l_22 = (VECTOR(uint16_t, 4))(0x13BFL, (VECTOR(uint16_t, 2))(0x13BFL, 0xAAE0L), 0xAAE0L);
    struct S0 *l_29 = &p_1085->g_30;
    uint32_t l_31 = 0xD0BD2F23L;
    uint64_t l_1080 = 18446744073709551606UL;
    uint32_t *l_1081 = &p_1085->g_52;
    int8_t l_1082 = 5L;
    struct S0 **l_1083 = &p_1085->g_371;
    int i;
    (*l_1083) = ((((*l_1081) = (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_1085->g_comm_values[p_1085->tid], (l_6 ^ ((func_9(l_6, p_1085) && (l_14[4] != (void*)0)) || p_1085->g_15)))) ^ ((safe_div_func_int32_t_s_s(func_18(&p_1085->g_15, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_22.wzzx)).xywxzwww)), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(0xF30BL, 1UL)).xxyy, ((VECTOR(uint16_t, 4))(func_23(p_1085->g_15, l_29, p_1085->g_comm_values[p_1085->tid], l_31, l_14[2], p_1085), ((VECTOR(uint16_t, 2))(65534UL)), 0xB188L))))).zwwzzwyz, ((VECTOR(uint16_t, 8))(0xAD7BL))))), p_1085->g_97.x, 0x1B23L, 0xB3D7L, p_1085->g_240.f0, p_1085->g_416.y, 0x8621L, 0xE1BBL, 0xF1D2L)).s5 && p_1085->g_130), p_1085->g_743.y, p_1085), 0x004FDA3DL)) < l_1080)), 1L))) && l_1082) , l_29);
    (*p_1085->g_1084) = l_14[6];
    return (*l_29);
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_13 p_1085->l_comm_values
 * writes: p_1085->g_13
 */
int16_t  func_9(int64_t  p_10, struct S2 * p_1085)
{ /* block id: 5 */
    uint64_t l_11 = 0x7A1245C8100C4307L;
    int32_t *l_12 = &p_1085->g_13;
    (*l_12) ^= l_11;
    return p_1085->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))];
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_15 p_1085->g_904 p_1085->g_129 p_1085->g_1060 p_1085->g_626
 * writes: p_1085->g_705
 */
int32_t  func_18(int32_t * p_19, uint64_t  p_20, int32_t  p_21, struct S2 * p_1085)
{ /* block id: 526 */
    VECTOR(int32_t, 2) l_1065 = (VECTOR(int32_t, 2))(0x7D26304DL, 0x731B55F6L);
    VECTOR(int32_t, 8) l_1066 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    union U1 *l_1077 = &p_1085->g_111;
    union U1 **l_1078 = &p_1085->g_705;
    int32_t *l_1079 = (void*)0;
    int i;
    l_1066.s1 = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x74B752A6L, ((VECTOR(int32_t, 2))(1L, 0L)), 0L)).lo, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x5AA5E6B0L, 0x0882393CL)).yyyxyyyx, ((VECTOR(int32_t, 2))(0L, 0x6DC2E3A5L)).xyyxxxxx))).s01)).xyxyyxxyyyyxyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1065.xxxxxyyx)).s01)).yxxxxyyxxxxyxxxy))).sc6, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x6B9142C9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1066.s0764)).yzzxxzwwwzzywzzy)).s3e)))))), (*p_19), (((safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((*p_19), 0x5701BBEDL)) , ((!((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))((-8L), (((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s(0x79AB1809136C11C5L)) < (safe_unary_minus_func_uint64_t_u(p_21))), (!(GROUP_DIVERGE(0, 1) , FAKE_DIVERGE(p_1085->global_0_offset, get_global_id(0), 10))))) && (((safe_sub_func_int8_t_s_s((*p_1085->g_904), 0x1DL)) , (*p_1085->g_1060)) != (l_1077 = ((*l_1078) = l_1077)))) >= 0x09BFL), ((VECTOR(int32_t, 2))((-1L))), (*p_19), 0x53B68A60L, 0x31A9DA46L, 0x0134CA1EL)).even, ((VECTOR(int32_t, 4))((-1L)))))).even, ((VECTOR(int32_t, 2))(1L))))).odd) < (-5L))), p_21)) ^ 0x2621B26D56EDC8B4L) > l_1065.y), 0x68641D4AL, 1L, 0L)).s32, ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))(1L))))).xyxy)).lo))).lo;
    return (*p_19);
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_15 p_1085->g_comm_values p_1085->g_52 p_1085->g_97 p_1085->g_54 p_1085->g_77 p_1085->g_116 p_1085->g_126 p_1085->g_67 p_1085->g_111.f0 p_1085->g_128 p_1085->g_129 p_1085->g_130 p_1085->g_111 p_1085->g_197 p_1085->g_216 p_1085->g_186 p_1085->g_240 p_1085->g_241 p_1085->g_242 p_1085->g_177 p_1085->g_330 p_1085->g_331 p_1085->g_353 p_1085->g_372 p_1085->g_373 p_1085->g_371 p_1085->g_341 p_1085->g_247 p_1085->g_299 p_1085->g_388 p_1085->g_399 p_1085->g_374.f0 p_1085->g_407 p_1085->g_404 p_1085->g_416 p_1085->g_304 p_1085->g_472 p_1085->g_483 p_1085->g_498 p_1085->g_543.f0 p_1085->g_611 p_1085->g_271 p_1085->g_625 p_1085->g_628 p_1085->l_comm_values p_1085->g_642 p_1085->g_652 p_1085->g_30 p_1085->g_705 p_1085->g_721 p_1085->g_742 p_1085->g_743 p_1085->g_765 p_1085->g_613 p_1085->g_786 p_1085->g_543 p_1085->g_904 p_1085->g_759 p_1085->g_626 p_1085->g_1023 p_1085->g_1031 p_1085->g_1033 p_1085->g_1060 p_1085->g_1062
 * writes: p_1085->g_52 p_1085->g_67 p_1085->g_97 p_1085->g_77 p_1085->g_54 p_1085->g_128 p_1085->g_130 p_1085->g_177 p_1085->g_126 p_1085->g_216 p_1085->g_30 p_1085->g_241 p_1085->g_129 p_1085->g_271 p_1085->g_330 p_1085->g_240 p_1085->g_341 p_1085->g_370 p_1085->g_374 p_1085->g_404 p_1085->g_299 p_1085->g_197 p_1085->g_489 p_1085->g_186 p_1085->g_543 p_1085->g_416 p_1085->g_613 p_1085->g_626 p_1085->g_111.f0 p_1085->g_759 p_1085->g_832 p_1085->g_642 p_1085->g_705 p_1085->g_1015 p_1085->g_359 p_1085->g_1062
 */
uint16_t  func_23(int32_t  p_24, struct S0 * p_25, uint64_t  p_26, uint32_t  p_27, int32_t * p_28, struct S2 * p_1085)
{ /* block id: 8 */
    uint32_t *l_51 = &p_1085->g_52;
    int64_t *l_53 = (void*)0;
    int64_t *l_55 = (void*)0;
    int64_t *l_56 = (void*)0;
    int64_t *l_57 = (void*)0;
    int64_t *l_58 = (void*)0;
    int64_t *l_59 = (void*)0;
    int64_t *l_60 = (void*)0;
    int64_t *l_61 = (void*)0;
    int64_t *l_62 = (void*)0;
    int64_t *l_63 = (void*)0;
    int64_t *l_64 = (void*)0;
    int32_t l_65 = 0x7D9CC132L;
    uint32_t *l_66 = &p_1085->g_67;
    int32_t l_1058 = 0x7BD6CF10L;
    union U1 **l_1059 = (void*)0;
    VECTOR(int8_t, 2) l_1061 = (VECTOR(int8_t, 2))(0x32L, 0L);
    uint64_t l_1064 = 18446744073709551615UL;
    int i;
    (*p_1085->g_1060) = func_32(func_36(func_38(&p_1085->g_15, (func_43((((*l_66) = ((l_65 = (0x1E7FF518L == ((*l_51) ^= ((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), p_1085->g_15)) || p_1085->g_comm_values[p_1085->tid])))) ^ 18446744073709551615UL)) , func_68(l_63, (safe_mul_func_int16_t_s_s(func_74(l_66, p_1085), p_1085->g_247.s5)), l_65, p_1085)), p_1085->g_111, p_1085->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))], p_25, p_25, p_1085) != p_1085->g_642.x), p_1085->g_705, p_28, p_1085), p_1085), l_1058, p_1085->g_407.s1, p_1085);
    p_1085->g_1062 = ((p_1085->g_721.y != (+p_27)) , (((VECTOR(int8_t, 4))(l_1061.xyyx)).z , p_1085->g_1062));
    return l_1064;
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_625 p_1085->g_626
 * writes:
 */
union U1 * func_32(union U1 * p_33, uint8_t  p_34, uint64_t  p_35, struct S2 * p_1085)
{ /* block id: 521 */
    return (*p_1085->g_625);
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_67 p_1085->g_613 p_1085->g_743 p_1085->g_177 p_1085->g_130 p_1085->g_52 p_1085->g_472 p_1085->g_304 p_1085->g_240.f0 p_1085->g_216 p_1085->g_197 p_1085->g_543 p_1085->g_30 p_1085->g_904 p_1085->g_129 p_1085->g_759 p_1085->g_54 p_1085->g_373.f0 p_1085->g_765.f0 p_1085->g_625 p_1085->g_626 p_1085->g_111 p_1085->g_1023 p_1085->g_611 p_1085->g_1031 p_1085->g_1033 p_1085->g_404 p_1085->g_116
 * writes: p_1085->g_67 p_1085->g_832 p_1085->g_613 p_1085->g_341 p_1085->g_271 p_1085->g_642 p_1085->g_54 p_1085->g_705 p_1085->g_1015 p_1085->g_359 p_1085->g_197 p_1085->g_543 p_1085->g_30 p_1085->g_404
 */
union U1 * func_36(struct S0 * p_37, struct S2 * p_1085)
{ /* block id: 360 */
    int16_t l_889 = 0x1AACL;
    uint64_t **l_974[5] = {&p_1085->g_288,&p_1085->g_288,&p_1085->g_288,&p_1085->g_288,&p_1085->g_288};
    uint16_t l_978 = 0x0800L;
    int32_t l_980 = 0L;
    union U1 *l_1007 = &p_1085->g_111;
    uint32_t l_1038 = 0x495DF0F8L;
    int32_t *l_1043 = (void*)0;
    uint64_t l_1055 = 0x10AA217935E883E5L;
    int i;
    for (p_1085->g_67 = (-16); (p_1085->g_67 == 40); p_1085->g_67++)
    { /* block id: 363 */
        int32_t **l_830 = &p_1085->g_341;
        int32_t ***l_834 = &p_1085->g_832[3][3][0];
        int32_t l_835[5];
        int i;
        for (i = 0; i < 5; i++)
            l_835[i] = (-1L);
        (*l_834) = l_830;
        if (l_835[2])
            break;
    }
    if ((atomic_inc(&p_1085->l_atomic_input[12]) == 3))
    { /* block id: 368 */
        int32_t l_836 = 1L;
        struct S0 l_850 = {0UL};/* VOLATILE GLOBAL l_850 */
        int32_t l_851 = 0x07FEF19BL;
        VECTOR(uint64_t, 4) l_852 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL);
        int32_t *l_853 = &l_836;
        int i;
        for (l_836 = 11; (l_836 < (-5)); --l_836)
        { /* block id: 371 */
            union U1 *l_839 = (void*)0;
            union U1 l_841 = {-4L};
            union U1 *l_840 = &l_841;
            uint16_t l_842 = 2UL;
            union U1 *l_845[5][2] = {{&l_841,&l_841},{&l_841,&l_841},{&l_841,&l_841},{&l_841,&l_841},{&l_841,&l_841}};
            union U1 *l_846 = (void*)0;
            int32_t *l_847[2];
            int32_t l_849 = 0x7772AE24L;
            int32_t *l_848 = &l_849;
            int i, j;
            for (i = 0; i < 2; i++)
                l_847[i] = (void*)0;
            l_840 = l_839;
            l_842++;
            l_846 = l_845[4][1];
            l_848 = l_847[1];
        }
        l_850 = l_850;
        l_853 = (l_851 , (((VECTOR(uint64_t, 8))(l_852.xzxzwxyw)).s5 , (void*)0));
        for (l_852.x = (-18); (l_852.x == 10); l_852.x = safe_add_func_uint64_t_u_u(l_852.x, 8))
        { /* block id: 381 */
            int64_t l_856 = 9L;
            int16_t l_857 = 0L;
            uint8_t l_858 = 1UL;
            int32_t *l_861 = (void*)0;
            l_858++;
            l_853 = l_861;
            for (l_856 = 0; (l_856 >= 0); l_856 = safe_add_func_uint64_t_u_u(l_856, 2))
            { /* block id: 386 */
                int16_t l_864 = 1L;
                uint32_t l_865 = 0x17532E63L;
                l_865--;
                for (l_864 = 0; (l_864 != 27); l_864 = safe_add_func_uint8_t_u_u(l_864, 9))
                { /* block id: 390 */
                    uint32_t l_870 = 0x0CCD379EL;
                    uint32_t l_873 = 7UL;
                    uint8_t l_876 = 0xE5L;
                    l_870++;
                    l_873++;
                    l_876--;
                }
            }
            for (l_858 = 25; (l_858 >= 47); ++l_858)
            { /* block id: 398 */
                int16_t l_881 = 5L;
                uint64_t l_882 = 0x06E0CA7B30223379L;
                struct S0 l_884 = {1UL};/* VOLATILE GLOBAL l_884 */
                struct S0 *l_883[2];
                uint64_t l_885[8] = {0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL,0xEF96AF8782CD3B4FL};
                int64_t l_886[4];
                int i;
                for (i = 0; i < 2; i++)
                    l_883[i] = &l_884;
                for (i = 0; i < 4; i++)
                    l_886[i] = 1L;
                l_882 |= l_881;
                l_883[1] = (void*)0;
                l_886[1] |= l_885[6];
            }
        }
        unsigned int result = 0;
        result += l_836;
        result += l_850.f0;
        result += l_851;
        result += l_852.w;
        result += l_852.z;
        result += l_852.y;
        result += l_852.x;
        atomic_add(&p_1085->l_special_values[12], result);
    }
    else
    { /* block id: 404 */
        (1 + 1);
    }
    if ((safe_div_func_uint64_t_u_u(l_889, l_889)))
    { /* block id: 407 */
        union U1 *l_890 = &p_1085->g_111;
        return l_890;
    }
    else
    { /* block id: 409 */
        int8_t l_891 = 0x73L;
        int32_t l_892 = 0x325FA5BCL;
        int32_t l_893 = 0x62640804L;
        VECTOR(int32_t, 4) l_995 = (VECTOR(int32_t, 4))(0x66DF3A12L, (VECTOR(int32_t, 2))(0x66DF3A12L, 0x21C25BD1L), 0x21C25BD1L);
        uint8_t l_1010 = 1UL;
        uint32_t *l_1028 = &p_1085->g_67;
        int i;
        l_893 = (l_892 = l_891);
        for (p_1085->g_613 = 0; (p_1085->g_613 < 48); ++p_1085->g_613)
        { /* block id: 414 */
            int16_t *l_900 = &l_889;
            int32_t *l_910 = (void*)0;
            int32_t *l_911[9][4] = {{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893},{&p_1085->g_126,&p_1085->g_126,&l_892,&l_893}};
            VECTOR(int32_t, 4) l_964 = (VECTOR(int32_t, 4))(0x6D7C45DFL, (VECTOR(int32_t, 2))(0x6D7C45DFL, 0x736AFC22L), 0x736AFC22L);
            int32_t l_984[10];
            union U1 **l_999 = &p_1085->g_705;
            uint32_t **l_1022 = &p_1085->g_177;
            uint32_t ***l_1021 = &l_1022;
            int i, j;
            for (i = 0; i < 10; i++)
                l_984[i] = 0x0E498115L;
            if ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((*l_900) = (-1L)), ((*l_900) = (safe_add_func_int8_t_s_s(p_1085->g_498.w, l_889))), (((void*)0 == p_1085->g_903[2]) & ((p_1085->g_247.s5 = ((VECTOR(uint64_t, 16))(p_1085->g_905.xyyzxwwxywwwzxyy)).sd) , (((safe_sub_func_int64_t_s_s((p_1085->g_54.y = ((--p_1085->g_416.x) >= 1L)), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_891 != l_889), (l_892 = (p_1085->g_299.x > 3L)), 1L, ((VECTOR(int32_t, 2))((-2L))), 0x1790830AL, (-5L), 0L)).s0055170326626125)).s2 || l_889))) , p_1085->g_613) ^ l_889))), ((VECTOR(int16_t, 2))(0x7F2FL)), 0x6C14L, 0x148CL, 0x76E6L)).s14)).odd, p_1085->g_743.w)), (*p_1085->g_177))))
            { /* block id: 421 */
                int32_t **l_963 = &p_1085->g_341;
                uint64_t **l_973 = &p_1085->g_288;
                uint64_t ***l_975 = &l_974[3];
                uint32_t *l_976 = &p_1085->g_67;
                int64_t *l_977[10][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                uint16_t *l_979[8];
                int32_t l_996[5] = {0x3922A68DL,0x3922A68DL,0x3922A68DL,0x3922A68DL,0x3922A68DL};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_979[i] = &l_978;
                if ((atomic_inc(&p_1085->l_atomic_input[3]) == 5))
                { /* block id: 423 */
                    uint8_t l_912 = 255UL;
                    if (l_912)
                    { /* block id: 424 */
                        int32_t l_913 = 0x371DCB9CL;
                        int16_t l_914 = 0x0CA8L;
                        VECTOR(uint64_t, 4) l_915 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xB391B87C31253D3FL), 0xB391B87C31253D3FL);
                        uint16_t l_916[1];
                        VECTOR(int32_t, 2) l_917 = (VECTOR(int32_t, 2))(0x2CB30E06L, 5L);
                        struct S0 l_918[3][8] = {{{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}},{{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}},{{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}}};
                        int32_t l_919[10] = {0x054D99D7L,0x6F99160CL,0x054D99D7L,0x054D99D7L,0x6F99160CL,0x054D99D7L,0x054D99D7L,0x6F99160CL,0x054D99D7L,0x054D99D7L};
                        VECTOR(int8_t, 8) l_920 = (VECTOR(int8_t, 8))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-1L)), (-1L)), (-1L), 0x2CL, (-1L));
                        VECTOR(int8_t, 2) l_921 = (VECTOR(int8_t, 2))(0x75L, 0x45L);
                        VECTOR(int8_t, 4) l_922 = (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x48L), 0x48L);
                        uint64_t l_923 = 18446744073709551610UL;
                        uint32_t l_924 = 1UL;
                        int32_t l_925 = 0x2A4A9AE1L;
                        int32_t l_926 = 0x3459236CL;
                        VECTOR(int8_t, 4) l_927 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 1L), 1L);
                        VECTOR(int8_t, 2) l_928 = (VECTOR(int8_t, 2))(0x57L, (-7L));
                        VECTOR(int8_t, 4) l_929 = (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x29L), 0x29L);
                        int8_t l_930[9] = {0x37L,7L,0x37L,0x37L,7L,0x37L,0x37L,7L,0x37L};
                        uint16_t l_931 = 0x5CF6L;
                        int8_t l_932 = 0x0CL;
                        int8_t l_933 = 0x65L;
                        int16_t l_934 = 7L;
                        int64_t l_935[5][5][10] = {{{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L}},{{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L}},{{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L}},{{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L}},{{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L},{(-1L),(-3L),0x7DFA206AA73B2752L,0x6F057B7AD150ADC4L,0L,(-1L),(-1L),1L,(-4L),1L}}};
                        uint32_t l_936 = 0xDA6C0E58L;
                        uint16_t l_937 = 0x2E1DL;
                        uint8_t l_938[10][6] = {{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL},{255UL,0x2CL,0x2CL,255UL,8UL,0x3AL}};
                        VECTOR(uint64_t, 8) l_939 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x33F2D83EFA042CD2L), 0x33F2D83EFA042CD2L), 0x33F2D83EFA042CD2L, 9UL, 0x33F2D83EFA042CD2L);
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_916[i] = 0xAA43L;
                        l_914 ^= l_913;
                        l_917.y = ((l_937 |= (((VECTOR(uint64_t, 16))(l_915.zywzyzzzxxxxxyzy)).s1 , ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_916[0], ((VECTOR(int32_t, 2))(0x1FFCCC94L, (-5L))), (-10L), ((VECTOR(int32_t, 2))(0x3E279BFAL, 0x1238601AL)).lo, ((VECTOR(int32_t, 2))(l_917.xy)), 0x4F6252B3L)).lo, ((VECTOR(int32_t, 16))(0x22D2D61EL, 0x633EF3CEL, 3L, (((l_918[0][3] , (l_919[2] , ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(l_920.s6422364672157265)).odd, ((VECTOR(int8_t, 2))((-2L), 0L)).yyxyxxxx))).s25, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x60L, 0x6AL)), 1L, 1L)).even, (int8_t)((VECTOR(int8_t, 2))(l_921.yy)).odd))).yyyyyxxxyyyxxxyx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_922.xwzxwyyzwxyxxzzy)).s18)), l_923, 1L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-10L), l_924, (l_926 = l_925), ((VECTOR(int8_t, 4))(l_927.wyxw)), 0x2DL)).s7052213774575402)).sb2, ((VECTOR(int8_t, 16))(l_928.xyyyxyyyxxyxyyxy)).scd, ((VECTOR(int8_t, 4))(l_929.zzwx)).hi))))), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))((l_930[4] , 0x6FL), ((VECTOR(int8_t, 4))(0x1FL)), ((VECTOR(int8_t, 2))(7L)), 0x51L)).s25, ((VECTOR(int8_t, 2))(0x78L)))))))), 4L, 0x1AL)))).s1300514745540152, ((VECTOR(int8_t, 16))(1L))))))).s9, l_931, (-4L), 0x0CL)).zwyzxyzxyyyxzwxy, ((VECTOR(int8_t, 16))(0x0FL))))), ((VECTOR(int8_t, 16))(4L))))), ((VECTOR(int8_t, 16))(0x5AL)), ((VECTOR(int8_t, 16))(0L))))).s4d, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(6L)))))))).yxyyyxxx, ((VECTOR(int8_t, 8))(0x7DL))))).even, ((VECTOR(uint8_t, 4))(252UL))))).x)) , l_932) , l_933), l_934, ((VECTOR(int32_t, 4))((-2L))), l_935[0][0][2], (-6L), l_936, 0x6C8CE9C5L, (-1L), 0x41A4C229L, (-9L))).s7a0a))).yzyxxyxy, ((VECTOR(int32_t, 8))(0x46EB88B0L))))).even, ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 4))(0x5E985E99L)), 0x657215B7L, ((VECTOR(int32_t, 4))(0x71D52524L)), ((VECTOR(int32_t, 2))(8L)), 0x6E3CC092L)).s24, ((VECTOR(int32_t, 2))((-3L)))))).yyxy)), ((VECTOR(int32_t, 4))(1L))))).wwyzzwzwzwywyywx)).lo)), ((VECTOR(int32_t, 8))((-2L)))))).s42)).xxyx, ((VECTOR(int32_t, 4))(0x6942AB41L)), ((VECTOR(int32_t, 4))((-2L)))))).y)) , l_938[4][5]);
                        --l_939.s2;
                    }
                    else
                    { /* block id: 430 */
                        int16_t l_942 = 0x6A83L;
                        int8_t l_943 = 3L;
                        int32_t l_945 = 0x0AD6C503L;
                        int32_t *l_944 = &l_945;
                        int32_t *l_946 = &l_945;
                        int32_t *l_947[10][9] = {{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945},{&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945}};
                        int32_t *l_948 = &l_945;
                        int32_t l_949 = 1L;
                        uint32_t l_950 = 0x758EA182L;
                        int16_t l_951 = 0x1D9DL;
                        int64_t l_952 = 0x62D76A74D9D0C611L;
                        int8_t l_953 = 0x2BL;
                        uint16_t l_954[9][5];
                        int8_t l_955 = 0L;
                        int32_t l_956 = 0x0B0BEE6AL;
                        int32_t l_957 = 0L;
                        uint32_t l_958[3];
                        struct S0 l_959 = {8UL};/* VOLATILE GLOBAL l_959 */
                        struct S0 l_960[9][9] = {{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}},{{0x01L},{0x01L},{0xFFL},{0x59L},{0xDDL},{0x59L},{0xFFL},{0x01L},{0x01L}}};
                        int32_t l_961 = 1L;
                        uint32_t l_962 = 0x5769F4DCL;
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_954[i][j] = 0UL;
                        }
                        for (i = 0; i < 3; i++)
                            l_958[i] = 4UL;
                        l_946 = (l_944 = ((l_943 = l_942) , (void*)0));
                        l_948 = l_947[5][3];
                        l_960[2][8] = ((l_949 , (l_958[2] = (l_957 &= (l_956 |= (l_955 ^= ((l_952 &= (l_950 , l_951)) , (l_952 = (l_954[6][4] &= l_953)))))))) , l_959);
                        l_962 ^= l_961;
                    }
                    unsigned int result = 0;
                    result += l_912;
                    atomic_add(&p_1085->l_special_values[3], result);
                }
                else
                { /* block id: 445 */
                    (1 + 1);
                }
                (*l_963) = (void*)0;
                l_892 &= (l_893 |= ((VECTOR(int32_t, 8))(l_964.xzzyxyzy)).s6);
                if ((((safe_mod_func_int8_t_s_s((&p_1085->g_613 == (((safe_sub_func_uint32_t_u_u(l_892, l_892)) , ((p_1085->g_642.x = (l_892 = ((p_1085->g_271 = (((safe_sub_func_int16_t_s_s(0x3B54L, (safe_add_func_uint16_t_u_u((l_973 != ((*l_975) = l_974[3])), (p_1085->g_472 <= p_1085->g_743.x))))) , ((l_976 != (void*)0) > (*p_1085->g_304))) <= 0UL)) && l_978))) || (-1L))) , (void*)0)), p_1085->g_216)) , 0x3887368795E631E4L) , l_978))
                { /* block id: 455 */
                    int32_t l_981[3];
                    union U1 ***l_1000 = &l_999;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_981[i] = 0x260D31D9L;
                    l_980 = l_889;
                    l_980 = l_889;
                    if (l_981[0])
                        break;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1085->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[(safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((l_984[0] , (safe_div_func_int16_t_s_s(0x5544L, (safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_981[0], (-4L), 0x05543784L, (-4L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x069934F3L, 0L)), 6L, (safe_sub_func_int16_t_s_s(((*l_900) |= (((l_996[4] = (p_1085->g_54.y ^= (safe_div_func_int16_t_s_s((((VECTOR(int32_t, 8))(l_995.wzyyxwww)).s3 && ((l_996[4] , ((*p_37) , (safe_sub_func_uint16_t_u_u(5UL, 65529UL)))) , ((((*l_1000) = l_999) == (((VECTOR(int64_t, 2))(0x63DFD4B024C6161BL, 0x02BBAD159CA28022L)).lo , &p_1085->g_705)) < (*p_1085->g_904)))), p_1085->g_759)))) && (-1L)) ^ 0x6B25L)), p_1085->g_129)), 2L, l_981[0], 0x4F7861F6L, 0x1253278DL)).lo, ((VECTOR(int32_t, 4))((-1L)))))).xyxzyyww, ((VECTOR(int32_t, 8))(0L))))).s4, (*p_1085->g_177))) , l_891), l_892))))), l_981[0])) , p_1085->g_373.f0) && p_1085->g_765.f0), 10))][(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))]));
                }
                else
                { /* block id: 466 */
                    for (l_978 = 19; (l_978 < 8); l_978 = safe_sub_func_int32_t_s_s(l_978, 9))
                    { /* block id: 469 */
                        return (*p_1085->g_625);
                    }
                }
            }
            else
            { /* block id: 473 */
                uint8_t *l_1005 = (void*)0;
                uint8_t **l_1004 = &l_1005;
                uint8_t ***l_1003 = &l_1004;
                union U1 *l_1006 = &p_1085->g_111;
                uint64_t *l_1017 = &p_1085->g_613;
                int32_t l_1037[7] = {0x0B73CF79L,0x0B73CF79L,0x0B73CF79L,0x0B73CF79L,0x0B73CF79L,0x0B73CF79L,0x0B73CF79L};
                int i;
                l_980 = ((*p_1085->g_904) <= ((void*)0 != l_1003));
                if ((l_1006 != ((*l_999) = l_1007)))
                { /* block id: 476 */
                    uint16_t l_1025 = 0UL;
                    for (p_1085->g_67 = (-21); (p_1085->g_67 <= 1); p_1085->g_67++)
                    { /* block id: 479 */
                        uint8_t l_1020 = 1UL;
                        uint32_t *l_1026 = (void*)0;
                        int32_t l_1027 = 0x5146BB23L;
                        if (l_978)
                            break;
                        l_980 = ((l_892 &= (l_1010 ^ (safe_mul_func_int16_t_s_s(((((p_1085->g_1015 = &p_1085->g_613) != l_1017) <= (((safe_sub_func_uint8_t_u_u(l_1020, ((*l_1007) , (((l_1027 = (l_1025 &= ((+(((l_1021 != p_1085->g_1023[0]) , ((p_1085->g_611.x ^ l_1010) | l_889)) <= 0xDAF44BE4EFB183DBL)) , 0xA168F506L))) , l_1028) != (void*)0)))) , (void*)0) == (void*)0)) , l_980), 0x165BL)))) && GROUP_DIVERGE(1, 1));
                    }
                }
                else
                { /* block id: 487 */
                    uint64_t l_1034 = 0x715D362ABBD6C0B2L;
                    for (p_1085->g_359 = 0; (p_1085->g_359 > (-14)); --p_1085->g_359)
                    { /* block id: 490 */
                        int32_t *l_1032[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*p_37) = p_1085->g_1031[2][1][0];
                        (*p_1085->g_1033) = l_1032[3];
                    }
                    l_1034--;
                }
                l_1038++;
                if (l_889)
                    break;
            }
            for (l_892 = 17; (l_892 >= 2); l_892 = safe_sub_func_int32_t_s_s(l_892, 4))
            { /* block id: 501 */
                l_1043 = &l_893;
                for (p_1085->g_404 = 0; (p_1085->g_404 <= 23); ++p_1085->g_404)
                { /* block id: 505 */
                    if ((atomic_inc(&p_1085->l_atomic_input[7]) == 8))
                    { /* block id: 507 */
                        int32_t l_1047 = 0x35ECB3EBL;
                        int32_t *l_1046 = &l_1047;
                        int32_t *l_1048 = &l_1047;
                        VECTOR(uint64_t, 2) l_1049 = (VECTOR(uint64_t, 2))(0x41485CB753C39211L, 0xECC5DDB6392BE452L);
                        int32_t l_1050 = 1L;
                        uint32_t l_1051 = 0x75DA97C6L;
                        uint16_t l_1052 = 0xA132L;
                        int i;
                        l_1048 = l_1046;
                        l_1052 ^= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1049.xy)).yyxy)).z , (l_1050 , l_1051));
                        unsigned int result = 0;
                        result += l_1047;
                        result += l_1049.y;
                        result += l_1049.x;
                        result += l_1050;
                        result += l_1051;
                        result += l_1052;
                        atomic_add(&p_1085->l_special_values[7], result);
                    }
                    else
                    { /* block id: 510 */
                        (1 + 1);
                    }
                    (*l_1043) = (l_1010 ^ (safe_rshift_func_uint16_t_u_u(p_1085->g_116.z, 10)));
                }
            }
            l_1055++;
        }
    }
    l_1043 = &l_980;
    return (*p_1085->g_625);
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_721 p_1085->g_177 p_1085->g_130 p_1085->g_52 p_1085->g_216 p_1085->g_498 p_1085->g_299 p_1085->g_15 p_1085->g_77 p_1085->g_742 p_1085->g_330 p_1085->g_743 p_1085->g_399.f0 p_1085->g_416 p_1085->g_404 p_1085->g_111.f0 p_1085->g_765 p_1085->g_371 p_1085->g_613 p_1085->g_129 p_1085->g_786 p_1085->g_126 p_1085->g_304 p_1085->g_240.f0 p_1085->g_128 p_1085->g_247
 * writes: p_1085->g_126 p_1085->g_130 p_1085->g_52 p_1085->g_67 p_1085->g_77 p_1085->g_759 p_1085->g_111.f0 p_1085->g_197 p_1085->g_613 p_1085->g_129 p_1085->g_626
 */
struct S0 * func_38(int32_t * p_39, uint32_t  p_40, union U1 * p_41, int32_t * p_42, struct S2 * p_1085)
{ /* block id: 300 */
    int32_t *l_706 = (void*)0;
    int32_t l_707 = (-1L);
    int32_t *l_708 = &p_1085->g_77;
    int32_t *l_709 = (void*)0;
    int32_t *l_710 = &p_1085->g_126;
    int32_t *l_711 = (void*)0;
    int32_t *l_712 = &p_1085->g_126;
    int32_t *l_713[6];
    int32_t l_714 = (-3L);
    int32_t l_715 = 0x797C3D7CL;
    int8_t l_716[8][6] = {{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L},{0L,0L,(-1L),0x71L,0L,0x71L}};
    uint8_t l_717 = 0x03L;
    union U1 l_720 = {0x29B0E9232915FDE1L};
    uint32_t *l_726 = &p_1085->g_67;
    VECTOR(int32_t, 4) l_727 = (VECTOR(int32_t, 4))(0x49AD2314L, (VECTOR(int32_t, 2))(0x49AD2314L, (-6L)), (-6L));
    VECTOR(int32_t, 16) l_728 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2BE8670AL), 0x2BE8670AL), 0x2BE8670AL, 1L, 0x2BE8670AL, (VECTOR(int32_t, 2))(1L, 0x2BE8670AL), (VECTOR(int32_t, 2))(1L, 0x2BE8670AL), 1L, 0x2BE8670AL, 1L, 0x2BE8670AL);
    VECTOR(int32_t, 16) l_729 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x15A742DEL), 0x15A742DEL), 0x15A742DEL, 1L, 0x15A742DEL, (VECTOR(int32_t, 2))(1L, 0x15A742DEL), (VECTOR(int32_t, 2))(1L, 0x15A742DEL), 1L, 0x15A742DEL, 1L, 0x15A742DEL);
    uint16_t *l_732 = (void*)0;
    uint16_t *l_733 = (void*)0;
    struct S0 ***l_738[7] = {&p_1085->g_370,&p_1085->g_370,&p_1085->g_370,&p_1085->g_370,&p_1085->g_370,&p_1085->g_370,&p_1085->g_370};
    int16_t l_739 = 0x79BFL;
    uint8_t *l_757 = (void*)0;
    uint8_t **l_756 = &l_757;
    int32_t l_806 = 0x5C4F839EL;
    int32_t ***l_815 = (void*)0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_713[i] = &p_1085->g_126;
    l_717++;
    if (((VECTOR(int32_t, 8))(((*l_710) = (l_720 , 0x7EE8D245L)), 0L, ((VECTOR(int32_t, 2))(p_1085->g_721.yx)), 1L, ((((((p_40 ^ 0UL) , ((*p_1085->g_177)++)) & ((((*l_726) = p_1085->g_216) , ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_727.wyxwzwzxxzwwzxyz)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_728.sd774)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_729.s0fa30e9c)).s51, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x5BED4537L, (l_739 = (((((+(safe_mul_func_uint16_t_u_u((((*l_710) = ((((*l_708) = p_40) && (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((((0x40BE447AL <= (l_738[0] == (void*)0)) > p_1085->g_498.w) ^ p_40) >= 0x54F4740FL), (-8L))), p_40))) || 0x33L)) <= p_40), p_40))) , 0x183FD7DB9FF62942L) , (void*)0) != &p_39) > p_1085->g_299.y)), 0x55D36708L, ((VECTOR(int32_t, 4))((-1L))), 0x2284C36BL, ((VECTOR(int32_t, 4))(0x3F465DCEL)), (*p_39), (*l_708), 0x798751D9L, 0x3BB1D3E6L)).s3497)), ((VECTOR(int32_t, 4))((-10L)))))), ((VECTOR(int32_t, 4))(0x48EB3C13L))))).lo))).yxxy))), ((VECTOR(int32_t, 4))(0x01B18672L))))), ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 4))(0x4818409AL))))).xxwwwywy))))).hi, ((VECTOR(int32_t, 4))(0x1AF5A6C6L))))), ((VECTOR(int32_t, 4))(0x1E319B56L)), ((VECTOR(int32_t, 4))((-1L)))))).zxwzywwxxyyyxyzw)).s3f, ((VECTOR(int32_t, 2))(0x31C10049L))))).yyxxyyyx)).hi, ((VECTOR(int32_t, 4))(0x12BBB2E3L))))).y) <= 0UL)) > p_40) & GROUP_DIVERGE(2, 1)) >= 1L), 0x542A5D46L, 1L)).s6)
    { /* block id: 308 */
        uint64_t l_744 = 0UL;
        VECTOR(int16_t, 16) l_745 = (VECTOR(int16_t, 16))(0x4152L, (VECTOR(int16_t, 4))(0x4152L, (VECTOR(int16_t, 2))(0x4152L, (-8L)), (-8L)), (-8L), 0x4152L, (-8L), (VECTOR(int16_t, 2))(0x4152L, (-8L)), (VECTOR(int16_t, 2))(0x4152L, (-8L)), 0x4152L, (-8L), 0x4152L, (-8L));
        uint8_t *l_755 = (void*)0;
        uint8_t **l_754 = &l_755;
        int32_t *l_758 = &p_1085->g_759;
        int32_t l_811[1][2][2] = {{{1L,1L},{1L,1L}}};
        int32_t l_812 = 0x629FFEF7L;
        struct S0 *l_813 = &p_1085->g_543;
        int i, j, k;
        if (((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x2B41L, 0x4BEDL)).yxxxxxyx)).s17, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(p_1085->g_742.yxxyyyxx)).s22, (uint16_t)(~p_1085->g_330.x))))))).xyxy))).odd, ((VECTOR(int32_t, 8))(0x640F3D0CL, (l_720 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1085->g_743.wyzxwywx)).odd)).x), l_744, ((VECTOR(int32_t, 4))((((p_1085->g_399.f0 > ((VECTOR(int16_t, 4))(l_745.s02b5)).z) != ((safe_mul_func_uint16_t_u_u(l_745.s8, p_40)) <= ((safe_lshift_func_int8_t_s_s((((*l_758) = (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((((l_754 == l_756) , 4294967295UL) > 8L), p_1085->g_52)) & l_745.s7), 0xF95D7E642BD51B02L))) , p_1085->g_416.x), 6)) != (*p_1085->g_177)))) ^ (*p_39)), l_744, 0x769B3E3AL, 0x3E9E51BDL)), 0L)).s17, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 2))(0L))))).even, 4294967295UL)) >= p_1085->g_404))
        { /* block id: 310 */
            uint64_t l_762 = 9UL;
            for (p_1085->g_111.f0 = 0; (p_1085->g_111.f0 > 1); p_1085->g_111.f0 = safe_add_func_uint16_t_u_u(p_1085->g_111.f0, 8))
            { /* block id: 313 */
                atomic_and(&p_1085->g_atomic_reduction[get_linear_group_id()], l_745.sf + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1085->v_collective += p_1085->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                --l_762;
                (*p_1085->g_371) = p_1085->g_765;
            }
        }
        else
        { /* block id: 318 */
            int8_t l_779 = 0x53L;
            int64_t *l_805[1];
            int32_t l_807 = 1L;
            uint16_t *l_808[4] = {&p_1085->g_216,&p_1085->g_216,&p_1085->g_216,&p_1085->g_216};
            int32_t l_809 = 0x55CCDEA3L;
            int32_t l_810 = (-1L);
            int i;
            for (i = 0; i < 1; i++)
                l_805[i] = &p_1085->g_271;
            for (p_1085->g_613 = 0; (p_1085->g_613 < 60); p_1085->g_613++)
            { /* block id: 321 */
                uint32_t l_777 = 0UL;
                for (p_1085->g_129 = 0; (p_1085->g_129 > 5); p_1085->g_129 = safe_add_func_uint64_t_u_u(p_1085->g_129, 8))
                { /* block id: 324 */
                    int32_t **l_771 = &l_706;
                    int32_t ***l_770 = &l_771;
                    int32_t **l_773[6] = {(void*)0,&l_711,(void*)0,(void*)0,&l_711,(void*)0};
                    int32_t ***l_772 = &l_773[4];
                    int32_t ***l_774 = (void*)0;
                    int32_t **l_776[5][2][10] = {{{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]},{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]}},{{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]},{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]}},{{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]},{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]}},{{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]},{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]}},{{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]},{(void*)0,&l_706,&l_709,(void*)0,&p_1085->g_341,(void*)0,&l_713[0],&p_1085->g_341,&p_1085->g_341,&l_713[0]}}};
                    int32_t ***l_775 = &l_776[4][0][5];
                    int32_t l_778[4][9] = {{0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L},{0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L},{0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L},{0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L,0x67FE1A45L,0x47E491B8L,0x67FE1A45L}};
                    struct S0 *l_783 = &p_1085->g_30;
                    int i, j, k;
                    l_777 = (((*l_772) = ((*l_770) = &p_42)) != ((*l_775) = &p_1085->g_341));
                    if (l_778[2][3])
                        break;
                    if (l_779)
                        break;
                    for (l_717 = 0; (l_717 != 55); l_717++)
                    { /* block id: 333 */
                        uint32_t l_782 = 4294967289UL;
                        if (l_782)
                            break;
                        return l_783;
                    }
                }
                (*l_708) |= (safe_rshift_func_int8_t_s_u((-7L), l_745.s4));
            }
            (*l_708) |= p_1085->g_786;
            l_812 = (l_811[0][0][1] = (p_40 , ((l_810 &= ((0x5722FD8DL | (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*l_712) ^= l_745.s9), (*p_1085->g_177))), ((p_40 != l_745.sf) && ((*l_708) = (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((l_809 = (((((l_807 = (safe_mod_func_int32_t_s_s((((*p_1085->g_304) > ((p_40 == (l_806 = ((safe_rshift_func_int16_t_s_u((p_40 != 0x113CCE0FADD8D94DL), 8)) & 0x47L))) == p_40)) , (-1L)), FAKE_DIVERGE(p_1085->local_0_offset, get_local_id(0), 10)))) & 0L) || l_745.s7) , 0x10E2L) <= p_1085->g_216)), p_1085->g_404)) == 65535UL), l_744)))))) != (*p_1085->g_177)), 1L)), 2L)), p_40))) | p_1085->g_128)) , l_779)));
            (*l_708) &= (~(*l_712));
        }
        return l_813;
    }
    else
    { /* block id: 352 */
        int32_t **l_814 = &l_709;
        int32_t ****l_816 = &l_815;
        VECTOR(uint64_t, 4) l_817 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL);
        union U1 **l_824 = &p_1085->g_626[6];
        uint32_t ***l_825 = (void*)0;
        uint32_t **l_826 = &p_1085->g_177;
        struct S0 *l_827[3];
        int i;
        for (i = 0; i < 3; i++)
            l_827[i] = &p_1085->g_197;
        (*l_814) = p_42;
        (*l_710) &= (((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xEE284F245924EE33L, 18446744073709551615UL)).odd, 0x968330A709463B27L, (((*l_816) = l_815) != &l_814), 0x5C993AB719506ED7L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xA89F4927791D1302L, 0x25C78D5E0679B276L)))).xyyy, ((VECTOR(uint64_t, 2))(l_817.wz)).xxyy))))), ((VECTOR(uint64_t, 4))((safe_lshift_func_int8_t_s_s(0x47L, 3)), ((VECTOR(uint64_t, 2))(0xB57492600502B8C9L, 0x84612CE04E046345L)), 0UL)), 18446744073709551615UL, 0x5825997E65D50E8CL, 0xC199CDB7474E2223L, 18446744073709551615UL)).sc6, (uint64_t)(safe_lshift_func_int16_t_s_u(p_40, 5))))).even && (((safe_sub_func_int16_t_s_s(((!p_1085->g_247.s4) == ((((*l_824) = p_41) == (p_40 , &p_1085->g_111)) > (p_1085->g_786 | (-1L)))), p_40)) >= p_40) , p_40));
        l_826 = &p_1085->g_177;
        return l_827[1];
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_642 p_1085->g_111.f0 p_1085->g_652 p_1085->g_77 p_1085->g_67 p_1085->g_30
 * writes: p_1085->g_216 p_1085->g_77 p_1085->g_111.f0 p_1085->g_341 p_1085->g_67 p_1085->g_30
 */
uint64_t  func_43(struct S0 * p_44, union U1  p_45, int64_t  p_46, struct S0 * p_47, struct S0 * p_48, struct S2 * p_1085)
{ /* block id: 253 */
    int32_t l_636 = 0x0C516609L;
    int64_t *l_641[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t *l_643 = (void*)0;
    uint16_t *l_644 = (void*)0;
    uint16_t *l_645 = &p_1085->g_216;
    uint32_t *l_646 = &p_1085->g_67;
    int32_t *l_647 = &p_1085->g_77;
    uint64_t **l_648 = &p_1085->g_288;
    int32_t l_664 = 1L;
    int32_t l_668 = (-2L);
    int32_t l_669 = 0L;
    int8_t l_673 = 0x50L;
    uint8_t l_685 = 0x67L;
    uint32_t l_688 = 4294967295UL;
    int i;
    (*l_647) = (l_636 < ((0x4284L <= ((*l_645) = ((safe_mod_func_int16_t_s_s((l_641[9] == l_641[9]), ((VECTOR(uint16_t, 8))(0x7245L, 0x859FL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1085->g_642.xy)))), 0xB2D8L, 65528UL, 1UL, 0x3C1BL)).s7)) > (p_45.f0 < (l_643 != l_643))))) || ((((l_646 != l_646) > l_636) , p_45.f0) , 0xDC26CFB2L)));
    if (((void*)0 != l_648))
    { /* block id: 256 */
        int32_t *l_651 = &p_1085->g_128;
        for (p_1085->g_111.f0 = 0; (p_1085->g_111.f0 != (-7)); --p_1085->g_111.f0)
        { /* block id: 259 */
            int32_t l_653 = 0x7C4FF85BL;
            int32_t *l_654 = (void*)0;
            int32_t **l_657 = &l_654;
            (*l_647) = 1L;
            (*p_1085->g_652) = l_651;
            (*l_647) &= l_653;
            (*l_657) = l_654;
        }
    }
    else
    { /* block id: 265 */
        int64_t l_665 = 0x1C8D3F71926B9AACL;
        VECTOR(int32_t, 16) l_666 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        int32_t *l_674 = &p_1085->g_128;
        int32_t *l_675 = &p_1085->g_77;
        int32_t *l_676 = &l_664;
        int32_t *l_677 = &p_1085->g_77;
        int32_t *l_678 = &p_1085->g_126;
        int32_t *l_679 = &p_1085->g_128;
        int32_t *l_680 = &l_668;
        int32_t *l_681 = &l_668;
        int32_t *l_682 = &l_668;
        int32_t *l_683[8];
        VECTOR(int32_t, 2) l_684 = (VECTOR(int32_t, 2))(9L, 0x28C7D890L);
        int i;
        for (i = 0; i < 8; i++)
            l_683[i] = &p_1085->g_128;
        if ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0xAD2592C2L, 0UL)).lo, p_46)))
        { /* block id: 266 */
            int8_t l_667 = 0L;
            uint16_t l_670 = 65535UL;
            for (p_1085->g_67 = 17; (p_1085->g_67 >= 6); --p_1085->g_67)
            { /* block id: 269 */
                int32_t **l_662 = &l_647;
                int32_t *l_663[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*l_662) = (void*)0;
                l_670++;
            }
            return l_673;
        }
        else
        { /* block id: 274 */
            (*p_47) = (*p_47);
        }
        ++l_685;
        ++l_688;
        for (p_1085->g_67 = 0; (p_1085->g_67 > 1); p_1085->g_67 = safe_add_func_uint8_t_u_u(p_1085->g_67, 2))
        { /* block id: 281 */
            uint64_t l_693 = 0xE8B134A9EF14DAE0L;
            return l_693;
        }
    }
    if ((atomic_inc(&p_1085->l_atomic_input[8]) == 0))
    { /* block id: 286 */
        int32_t l_694 = (-1L);
        int32_t *l_700[3][9][9] = {{{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694}},{{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694}},{{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694},{&l_694,(void*)0,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694,&l_694}}};
        int32_t *l_701 = &l_694;
        VECTOR(uint32_t, 4) l_702 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 2UL), 2UL);
        int i, j, k;
        for (l_694 = 0; (l_694 >= (-3)); l_694 = safe_sub_func_uint64_t_u_u(l_694, 1))
        { /* block id: 289 */
            VECTOR(int32_t, 8) l_697 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
            int8_t l_698 = 5L;
            uint16_t l_699[5][6][1] = {{{65534UL},{65534UL},{65534UL},{65534UL},{65534UL},{65534UL}},{{65534UL},{65534UL},{65534UL},{65534UL},{65534UL},{65534UL}},{{65534UL},{65534UL},{65534UL},{65534UL},{65534UL},{65534UL}},{{65534UL},{65534UL},{65534UL},{65534UL},{65534UL},{65534UL}},{{65534UL},{65534UL},{65534UL},{65534UL},{65534UL},{65534UL}}};
            int i, j, k;
            l_698 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_697.s44)).xyxyxyxyyyyxxxxy)).s0;
            l_699[2][4][0] = 0x50D319CDL;
        }
        l_701 = l_700[1][5][8];
        l_702.x++;
        unsigned int result = 0;
        result += l_694;
        result += l_702.w;
        result += l_702.z;
        result += l_702.y;
        result += l_702.x;
        atomic_add(&p_1085->l_special_values[8], result);
    }
    else
    { /* block id: 295 */
        (1 + 1);
    }
    (*l_647) |= (-1L);
    return (*l_647);
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_299 p_1085->g_388 p_1085->g_399 p_1085->g_129 p_1085->g_177 p_1085->g_130 p_1085->g_52 p_1085->g_374.f0 p_1085->g_407 p_1085->g_404 p_1085->g_416 p_1085->g_247 p_1085->g_216 p_1085->g_330 p_1085->g_341 p_1085->g_128 p_1085->g_126 p_1085->g_304 p_1085->g_comm_values p_1085->g_472 p_1085->g_242 p_1085->g_483 p_1085->g_371 p_1085->g_498 p_1085->g_197 p_1085->g_54 p_1085->g_240.f0 p_1085->g_186 p_1085->g_353 p_1085->g_543.f0 p_1085->g_611 p_1085->g_271 p_1085->g_625 p_1085->g_628
 * writes: p_1085->g_129 p_1085->g_404 p_1085->g_299 p_1085->g_216 p_1085->g_126 p_1085->g_128 p_1085->g_77 p_1085->g_241 p_1085->g_197 p_1085->g_489 p_1085->g_186 p_1085->g_543 p_1085->g_416 p_1085->g_613 p_1085->g_330 p_1085->g_626 p_1085->g_341
 */
struct S0 * func_68(int64_t * p_69, int64_t  p_70, uint32_t  p_71, struct S2 * p_1085)
{ /* block id: 139 */
    uint32_t **l_387[1][7][7] = {{{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0},{&p_1085->g_177,(void*)0,(void*)0,&p_1085->g_177,&p_1085->g_177,(void*)0,(void*)0}}};
    struct S0 *l_400 = &p_1085->g_197;
    int32_t l_401 = 0L;
    int8_t *l_402 = &p_1085->g_129;
    int32_t *l_403 = &p_1085->g_404;
    VECTOR(uint8_t, 2) l_415 = (VECTOR(uint8_t, 2))(0x0AL, 0UL);
    VECTOR(int16_t, 2) l_422 = (VECTOR(int16_t, 2))((-1L), 0L);
    int32_t l_450 = 0x776559F0L;
    VECTOR(uint16_t, 2) l_460 = (VECTOR(uint16_t, 2))(0x5856L, 0xCF38L);
    int32_t *l_467 = (void*)0;
    uint64_t **l_476 = &p_1085->g_288;
    uint16_t l_497 = 0xE34FL;
    int32_t l_501 = 0L;
    uint8_t l_502[9] = {0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL};
    int32_t l_516 = 0x263C3F42L;
    int32_t l_517 = (-1L);
    int32_t l_518[2][9][5] = {{{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL}},{{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL},{0x1A2B5CAFL,4L,0x25573BDDL,0x05E07FFAL,0x25573BDDL}}};
    uint64_t l_519 = 18446744073709551615UL;
    union U1 l_522[2][9][1] = {{{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}}},{{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}},{{0x2648954E1640A174L}}}};
    VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL);
    int32_t l_588 = 1L;
    int32_t l_600 = 0x316F903DL;
    VECTOR(uint16_t, 4) l_610 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xD260L), 0xD260L);
    uint16_t l_622 = 65527UL;
    uint32_t l_623 = 4294967289UL;
    int32_t *l_629 = &l_401;
    int32_t *l_630[2];
    int32_t l_631 = 0x7F69514CL;
    int32_t l_632 = (-5L);
    uint8_t l_633 = 250UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_630[i] = &l_518[1][4][3];
    if ((p_1085->g_299.y , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((void*)0 != l_387[0][5][3]), ((VECTOR(int32_t, 2))(p_1085->g_388.s01)), (-10L))).wxwzzxywwzwwzwyx, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x49C6825EL, (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(0x5CL, ((VECTOR(int8_t, 2))(0x24L, (-5L))), 0x63L)).z, ((safe_sub_func_int16_t_s_s((+0x3A37L), (((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x88E9A813L, 4294967295UL)).yyyx)).yzzzzyxwzzyzzwyz)).s3470, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))((((*l_403) = (safe_div_func_int8_t_s_s(((*l_402) |= (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((p_71 || ((p_1085->g_399 , (((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x1186064A47F2B78BL, 0x16D0730CCCBD2ECEL)), 0L, (-5L))).x , l_400) != (l_401 , l_400)) < l_401)) , 1UL)), p_70)), l_401))), 0xFFL))) , (*p_1085->g_177)), ((VECTOR(uint32_t, 2))(0xEEA743AFL)), 0UL)), ((VECTOR(uint32_t, 4))(0xA2B867EBL))))).xzxzzyzy)).even, ((VECTOR(uint32_t, 4))(0x44ADA5C3L))))).z < 0x33036B0DL))) , l_401))), 0x0375822DL, l_401, l_401, (-1L), 0L, 0x547B91E9L)).even, ((VECTOR(int32_t, 4))(0x2DE208DBL)), ((VECTOR(int32_t, 4))(3L))))).wwyyxwwzywwxwzxz, ((VECTOR(int32_t, 16))((-1L)))))).se0b8, ((VECTOR(int32_t, 4))(0x08B76602L))))).zxwyzywwzyxwxxyz, ((VECTOR(int32_t, 16))(0x57043FEDL))))).s120d)).x))
    { /* block id: 142 */
        struct S0 **l_414 = &p_1085->g_371;
        int32_t l_421 = 0x3B420156L;
        int16_t *l_423 = (void*)0;
        int16_t *l_424 = (void*)0;
        int16_t *l_425 = (void*)0;
        int16_t *l_426 = (void*)0;
        int16_t *l_427 = (void*)0;
        int16_t *l_428[1][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        uint16_t *l_429 = &p_1085->g_216;
        uint8_t *l_451 = (void*)0;
        int32_t *l_474 = &p_1085->g_128;
        VECTOR(uint16_t, 2) l_486 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
        struct S0 ***l_490 = &l_414;
        int8_t **l_505 = &l_402;
        int32_t l_512[5][4][8] = {{{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L}},{{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L}},{{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L}},{{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L}},{{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L},{9L,0x587393F1L,0L,0x454A1BF9L,(-8L),(-8L),0x454A1BF9L,0L}}};
        int32_t *l_513 = (void*)0;
        int32_t *l_514 = &l_401;
        int32_t *l_515[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_515[i] = (void*)0;
        if ((safe_mul_func_uint16_t_u_u(((*l_429) = (((GROUP_DIVERGE(1, 1) == p_1085->g_374.f0) < ((VECTOR(int8_t, 2))(p_1085->g_407.s16)).odd) == (((safe_mul_func_uint8_t_u_u((l_401 <= p_1085->g_404), ((VECTOR(int8_t, 2))((-1L), 0x2FL)).even)) && (safe_div_func_int16_t_s_s((((((safe_mod_func_uint16_t_u_u((l_414 == ((p_70 != p_70) , l_414)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x567BL, (!(((p_1085->g_299.x = (((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, 6L)).xxyyxyyx)).s45, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(l_415.yxxx)).hi, ((VECTOR(uint8_t, 4))(247UL, 0xCBL, 0xA5L, 2UL)).odd, ((VECTOR(uint8_t, 16))(p_1085->g_416.yyxyyxxxxyxxxyyy)).seb)))))))).hi && ((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(l_421, 6)) , ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(l_422.yxyy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((-1L), (((p_70 && p_1085->g_247.s1) <= p_1085->g_216) , 0x6C78L), 8L, 2L, 0x1375L, (-1L), (-1L), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 2))(0x20E7L)), ((VECTOR(int16_t, 2))((-7L))), 0x635AL)).lo)).s55)).xxyx))).even, (int16_t)0x69BBL))).even), p_71)) ^ 18446744073709551607UL))) != p_1085->g_407.s7) >= p_70)), ((VECTOR(int16_t, 8))(0x4166L)), (-1L), (-4L), ((VECTOR(int16_t, 4))(0x2453L)))).sd6)), 0L, 0x7A1AL, 0x63F1L, ((VECTOR(int16_t, 8))(0x3364L)), 0L, 0x628FL, (-1L))).sb)) < p_1085->g_330.x) < (*p_1085->g_341)) ^ p_71) <= p_71), l_422.x))) || l_422.y))), p_1085->g_128)))
        { /* block id: 145 */
            uint64_t *l_440 = (void*)0;
            struct S0 ***l_488 = (void*)0;
            struct S0 ****l_487[6] = {&l_488,&l_488,&l_488,&l_488,&l_488,&l_488};
            int32_t *l_499 = (void*)0;
            int i;
            for (p_1085->g_126 = 7; (p_1085->g_126 <= (-29)); --p_1085->g_126)
            { /* block id: 148 */
                uint8_t *l_433 = (void*)0;
                uint8_t **l_432 = &l_433;
                uint8_t **l_434 = (void*)0;
                uint8_t *l_436 = (void*)0;
                uint8_t **l_435 = &l_436;
                int32_t l_437 = (-1L);
                VECTOR(uint32_t, 2) l_461 = (VECTOR(uint32_t, 2))(0xACA550A6L, 0x827620FAL);
                VECTOR(uint32_t, 8) l_464 = (VECTOR(uint32_t, 8))(0x2F81D009L, (VECTOR(uint32_t, 4))(0x2F81D009L, (VECTOR(uint32_t, 2))(0x2F81D009L, 2UL), 2UL), 2UL, 0x2F81D009L, 2UL);
                int32_t **l_479 = (void*)0;
                int32_t **l_482[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_482[i] = &l_467;
                (*p_1085->g_341) ^= ((((*l_435) = ((*l_432) = (void*)0)) != p_1085->g_304) > (l_437 && (safe_sub_func_uint16_t_u_u(((void*)0 == l_440), ((safe_mul_func_int8_t_s_s(((((GROUP_DIVERGE(1, 1) ^ (((((safe_unary_minus_func_uint16_t_u((FAKE_DIVERGE(p_1085->global_0_offset, get_global_id(0), 10) , 1UL))) ^ (FAKE_DIVERGE(p_1085->global_1_offset, get_global_id(1), 10) && (safe_mod_func_uint64_t_u_u(p_71, (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(l_450, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xECA3A943A9FCF5BEL, 0x0DBCFCD8A307C3CCL)).xxxyyyxy)).s0)) , (*p_1085->g_177)), p_71)))))) == 0L) | 0x4CL) || 0x6FD96E6DFF3BE770L)) , l_451) != l_451) != p_71), l_422.x)) , (-1L))))));
                if (((*p_1085->g_341) = 0x662C02F9L))
                { /* block id: 153 */
                    struct S0 ***l_459 = &p_1085->g_370;
                    int32_t l_470[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_470[i] = 0x67B95AE8L;
                    for (p_1085->g_77 = 0; (p_1085->g_77 <= 28); p_1085->g_77++)
                    { /* block id: 156 */
                        if (p_71)
                            break;
                    }
                    for (p_70 = (-11); (p_70 < 19); p_70 = safe_add_func_uint64_t_u_u(p_70, 7))
                    { /* block id: 161 */
                        int32_t *l_471 = &l_437;
                        int32_t *l_473 = &p_1085->g_77;
                        (*l_473) = ((safe_add_func_int32_t_s_s((&p_1085->g_370 != ((p_71 ^ ((safe_unary_minus_func_int16_t_s(0x2D78L)) , (0L <= ((VECTOR(uint64_t, 2))(0UL, 0x7DF62456307F2A65L)).odd))) , l_459)), (((VECTOR(uint16_t, 16))(l_460.xxyxyyxyxyxyyyxx)).s7 && ((((VECTOR(int32_t, 2))(0x08C31389L, 0x0DBDDA42L)).hi <= ((VECTOR(uint32_t, 4))(l_461.yxxx)).x) <= ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_464.s5123)).z, (safe_add_func_uint16_t_u_u((l_467 == (void*)0), ((*l_429) = ((p_71 & (safe_div_func_uint32_t_u_u(((((*l_471) = ((*p_1085->g_341) = (((((!((GROUP_DIVERGE(0, 1) ^ 1L) == (*p_1085->g_177))) & l_470[0]) , 0x0A80341D07B776CAL) < p_71) != p_70))) && (*p_1085->g_177)) & p_1085->g_comm_values[p_1085->tid]), l_461.x))) >= 0xE0C866EF916B2097L)))))) != p_1085->g_472))))) , l_421);
                        (*p_1085->g_341) ^= (-3L);
                    }
                }
                else
                { /* block id: 168 */
                    uint64_t ***l_477 = &l_476;
                    int32_t *l_478 = &l_437;
                    (*p_1085->g_242) = l_474;
                    (*l_477) = l_476;
                    l_478 = &l_421;
                }
                l_467 = &l_401;
                (*l_400) = p_1085->g_483;
            }
            (*p_1085->g_341) &= (safe_sub_func_uint32_t_u_u(((((VECTOR(uint16_t, 4))(l_486.xxxx)).y , ((p_1085->g_489 = &l_414) == (l_490 = &p_1085->g_370))) || ((((safe_mul_func_uint8_t_u_u(p_71, (((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_70, ((((void*)0 != (*l_414)) == ((+((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-4L), (-8L))).xyyx)), ((VECTOR(int64_t, 4))(3L, l_497, 1L, (-1L)))))).yxwwzzxxxxyywwzy)).hi, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1085->g_498.zxwxzwwyxwzzzyyw)).odd))))).s7) , (6UL < ((*l_400) , 0xA240L)))) && 4294967289UL))), p_1085->g_54.y)) ^ p_1085->g_330.x) || 0x0978FC63D3A7DFD2L))) >= 0xBA68L) , &p_1085->g_404) == l_499)), p_71));
        }
        else
        { /* block id: 179 */
            int32_t *l_500[4];
            int i;
            for (i = 0; i < 4; i++)
                l_500[i] = &l_421;
            --l_502[0];
            (*l_474) |= (-1L);
        }
        (*p_1085->g_341) = (((&p_1085->g_129 == ((*l_505) = l_451)) != (*p_1085->g_304)) ^ ((safe_rshift_func_uint8_t_u_u(p_70, ((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))((0UL || (safe_mod_func_int64_t_s_s((-7L), ((VECTOR(int64_t, 16))(2L, (-1L), ((*l_474) && (p_70 & (safe_lshift_func_uint16_t_u_s(65528UL, 12)))), 9L, 3L, 9L, (*l_474), ((VECTOR(int64_t, 8))(0x649486CDA0E4686EL)), 0x2D31DCA00ADE46BEL)).s6))), p_1085->g_54.y, p_1085->g_186.y, 1UL, ((VECTOR(uint8_t, 2))(0x1DL)), 255UL, 0xFDL)), ((VECTOR(uint8_t, 8))(0x34L)), ((VECTOR(uint8_t, 8))(0x56L))))).odd)).even)), 8UL)).z)) , l_512[0][0][0]));
        (*l_474) = 0x60B556F0L;
        --l_519;
    }
    else
    { /* block id: 187 */
        struct S0 **l_523 = &l_400;
        VECTOR(int32_t, 2) l_524 = (VECTOR(int32_t, 2))((-1L), 1L);
        VECTOR(uint16_t, 4) l_562 = (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x3C3CL), 0x3C3CL);
        VECTOR(uint8_t, 4) l_564 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0xFCL), 0xFCL);
        VECTOR(int8_t, 4) l_565 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-1L)), (-1L));
        uint16_t l_572 = 0x9B01L;
        int32_t *l_627 = &l_600;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1085->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[(safe_mod_func_uint32_t_u_u(((l_522[0][5][0] , &l_400) != l_523), 10))][(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))]));
        if (((*p_1085->g_341) = ((VECTOR(int32_t, 16))(l_524.xyxxxyxyxyyyyxxy)).s5))
        { /* block id: 192 */
            int32_t *l_525 = (void*)0;
            int32_t *l_526 = (void*)0;
            int32_t *l_527[7] = {&p_1085->g_15,&l_517,&p_1085->g_15,&p_1085->g_15,&l_517,&p_1085->g_15,&p_1085->g_15};
            uint16_t l_528 = 1UL;
            struct S0 *l_542 = &p_1085->g_197;
            VECTOR(int8_t, 4) l_566 = (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0L), 0L);
            int32_t l_569 = 0L;
            int i;
            ++l_528;
            for (p_1085->g_129 = (-25); (p_1085->g_129 != 4); p_1085->g_129 = safe_add_func_uint16_t_u_u(p_1085->g_129, 1))
            { /* block id: 196 */
                int32_t * volatile *l_533 = &l_525;
                uint64_t l_545 = 0UL;
                int16_t *l_554 = (void*)0;
                int16_t *l_555 = (void*)0;
                int16_t *l_556 = (void*)0;
                int16_t *l_557 = (void*)0;
                int16_t *l_558 = (void*)0;
                int16_t *l_559 = (void*)0;
                int16_t *l_560 = (void*)0;
                int16_t *l_561[2][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int32_t *l_576[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t *l_577 = (void*)0;
                uint8_t *l_578 = &l_502[5];
                uint8_t *l_587[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_589 = 0L;
                struct S0 **l_603[1][8][10] = {{{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542},{&l_542,&l_400,&p_1085->g_371,(void*)0,&l_400,(void*)0,&p_1085->g_371,&l_400,&l_542,&l_542}}};
                int i, j, k;
                (*l_533) = (*p_1085->g_353);
                for (l_497 = (-11); (l_497 >= 58); ++l_497)
                { /* block id: 200 */
                    int64_t l_538 = 0x794410AC82297344L;
                    uint8_t *l_541 = &l_502[5];
                    int32_t **l_544 = &l_527[1];
                    if ((((*l_541) = ((p_1085->g_186.y |= (safe_sub_func_int64_t_s_s(((((0x2CF4L < p_1085->g_128) == l_538) <= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x3D8BL)).yxxy)).w) && (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((p_71 || (p_1085->g_15 < 0x15L)) | ((**l_533) = (((*p_1085->g_177) ^= (p_1085->g_97.w && ((&p_1085->g_130 == &permutations[(safe_mod_func_uint32_t_u_u(((l_522[0][5][0] , &l_400) != l_523), 10))][(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))]) < FAKE_DIVERGE(p_1085->local_2_offset, get_local_id(2), 10)))) <= p_70))), 0x3450C180L, ((VECTOR(uint32_t, 2))(0x48DA0301L)), l_538, ((VECTOR(uint32_t, 2))(0x36CC3F02L)), 0x3C29EC31L)).s17, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0x49AEC3C3L))))).odd, 1L))), p_70))) < 0x0B4AC553L)) , p_70))
                    { /* block id: 205 */
                        return l_542;
                    }
                    else
                    { /* block id: 207 */
                        p_1085->g_543 = (*p_1085->g_371);
                    }
                    (*l_400) = (*l_542);
                    (*l_533) = ((*l_544) = &l_518[0][3][2]);
                    if (l_545)
                        break;
                }
                l_589 = (l_588 &= (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_401 = p_71) || ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_562.wyyywyzxyzxywwyx)).hi)).s3), 65535UL)), ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x90L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(l_563.zzyzxyxzyyyyyxyy)).s0dd7, ((VECTOR(uint8_t, 16))(l_564.wzywywzxwyyyyzyw)).s85eb))).wzzwxyxx)), 0x7EL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_565.yy)).yxxy)).hi, ((VECTOR(int8_t, 2))(l_566.wy))))).xyxx)))), ((VECTOR(uint8_t, 4))(((&p_1085->g_111 != ((safe_add_func_int64_t_s_s(l_569, (safe_div_func_int16_t_s_s((l_572 <= GROUP_DIVERGE(0, 1)), (safe_unary_minus_func_uint32_t_u((safe_mod_func_int16_t_s_s((~((l_576[1] = &l_569) == ((((*l_578)--) != (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(65533UL, 0xA319L)).yxxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(FAKE_DIVERGE(p_1085->group_2_offset, get_group_id(2), 10), 65534UL, 0x4B5FL, 0xD594L)), ((0xCE70904C22AAA77DL != p_70) ^ (safe_div_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) | ((**l_533) = (p_1085->g_416.y ^= GROUP_DIVERGE(2, 1)))), p_70))), 0xFC39L, 0UL, 0x01CEL)).even))).xxwyyzxwywzzwyzw, ((VECTOR(uint32_t, 16))(8UL)), ((VECTOR(uint32_t, 16))(4294967286UL))))).sf, (*p_1085->g_177))), p_1085->g_543.f0))) , (void*)0))), 4UL)))))))) , &p_1085->g_111)) < p_70), 0xB7L, 2UL, 0x9EL))))))), 255UL, 0xCEL)).sed)), 0UL, 255UL)))).y , GROUP_DIVERGE(2, 1)) , p_70))) || 0UL), p_70)), p_70)));
                for (l_519 = 0; (l_519 <= 41); l_519++)
                { /* block id: 224 */
                    uint64_t l_595[8][9][3] = {{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}},{{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL},{2UL,18446744073709551609UL,9UL}}};
                    int i, j, k;
                    if (p_71)
                        break;
                    for (l_401 = 0; (l_401 != (-27)); l_401--)
                    { /* block id: 228 */
                        uint32_t l_594 = 0UL;
                        if (l_594)
                            break;
                        l_595[1][1][1] = p_71;
                    }
                    for (l_450 = 2; (l_450 > 25); l_450++)
                    { /* block id: 234 */
                        volatile uint8_t **l_599 = &p_1085->g_304;
                        volatile uint8_t ***l_598 = &l_599;
                        int32_t l_604 = 1L;
                        (*l_598) = &p_1085->g_304;
                        if (l_600)
                            break;
                        l_604 = ((safe_rshift_func_int16_t_s_u((p_1085->g_299.y = (p_70 , (l_603[0][4][0] != (void*)0))), p_71)) ^ (*p_1085->g_177));
                    }
                }
            }
        }
        else
        { /* block id: 242 */
            int16_t l_607 = 1L;
            uint64_t *l_612 = &p_1085->g_613;
            uint64_t l_624 = 0x5355278DEFD6FF9AL;
            (*p_1085->g_341) = (safe_lshift_func_int8_t_s_u((GROUP_DIVERGE(1, 1) < (l_607 > (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_610.ywxy)).z, ((p_71 , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1085->g_611.xxyx)).yxwywwyyzwzwwzww)).s0 , (((((*l_612) = 18446744073709551615UL) , ((((safe_div_func_uint64_t_u_u((((7UL > (!(((*p_1085->g_177) ^ (p_1085->g_330.x ^= (safe_rshift_func_int8_t_s_s(p_1085->g_271, p_1085->g_416.y)))) && (safe_sub_func_uint8_t_u_u((p_70 < (((safe_mul_func_int8_t_s_s(p_71, 0x04L)) == p_1085->g_388.s2) >= l_622)), p_71))))) < l_623) != l_524.y), 0x609A3361F700FCD6L)) ^ 0x7E95L) ^ l_624) | 65535UL)) > (*p_1085->g_304)) ^ 0x2283L))) <= 2L))))), GROUP_DIVERGE(1, 1)));
            (*p_1085->g_625) = &p_1085->g_111;
            (*p_1085->g_628) = l_627;
        }
        atomic_add(&p_1085->l_atomic_reduction[0], p_71);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1085->v_collective += p_1085->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    ++l_633;
    return l_400;
}


/* ------------------------------------------ */
/* 
 * reads : p_1085->g_97 p_1085->g_54 p_1085->g_77 p_1085->g_116 p_1085->g_126 p_1085->g_52 p_1085->g_67 p_1085->g_111.f0 p_1085->g_128 p_1085->g_129 p_1085->g_130 p_1085->g_comm_values p_1085->g_15 p_1085->g_111 p_1085->g_197 p_1085->g_216 p_1085->g_186 p_1085->g_240 p_1085->g_241 p_1085->g_242 p_1085->g_177 p_1085->g_330 p_1085->g_331 p_1085->g_353 p_1085->g_372 p_1085->g_373 p_1085->g_371 p_1085->g_341
 * writes: p_1085->g_97 p_1085->g_77 p_1085->g_54 p_1085->g_128 p_1085->g_130 p_1085->g_177 p_1085->g_126 p_1085->g_216 p_1085->g_30 p_1085->g_241 p_1085->g_129 p_1085->g_271 p_1085->g_330 p_1085->g_52 p_1085->g_240 p_1085->g_67 p_1085->g_341 p_1085->g_370 p_1085->g_374
 */
int16_t  func_74(uint32_t * p_75, struct S2 * p_1085)
{ /* block id: 12 */
    int32_t *l_76 = &p_1085->g_77;
    int32_t l_78 = 0L;
    int32_t *l_79 = &p_1085->g_77;
    int32_t *l_80 = &l_78;
    int32_t *l_81 = &l_78;
    int32_t *l_82 = &l_78;
    int32_t *l_83 = &l_78;
    int32_t l_84 = 0x3780627DL;
    int32_t *l_85 = &p_1085->g_77;
    int32_t *l_86 = &l_78;
    int32_t *l_87 = (void*)0;
    int32_t *l_88 = &l_78;
    int32_t *l_89 = &l_84;
    int32_t l_90 = 0x3E56F632L;
    int32_t l_91 = 0x3FD7802FL;
    int32_t *l_92 = &p_1085->g_77;
    int32_t l_93 = 1L;
    int32_t *l_94 = &l_91;
    int32_t *l_95 = &p_1085->g_77;
    int32_t *l_96[5];
    uint64_t l_102 = 0x2C7DCB2139E6D594L;
    VECTOR(int8_t, 16) l_105 = (VECTOR(int8_t, 16))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x34L), 0x34L), 0x34L, 0x0EL, 0x34L, (VECTOR(int8_t, 2))(0x0EL, 0x34L), (VECTOR(int8_t, 2))(0x0EL, 0x34L), 0x0EL, 0x34L, 0x0EL, 0x34L);
    union U1 *l_110[3];
    int64_t *l_114 = (void*)0;
    int64_t *l_115[2][5];
    VECTOR(uint8_t, 4) l_123 = (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 0x79L), 0x79L);
    uint32_t *l_127[7] = {&p_1085->g_52,&p_1085->g_52,&p_1085->g_52,&p_1085->g_52,&p_1085->g_52,&p_1085->g_52,&p_1085->g_52};
    VECTOR(int64_t, 16) l_137 = (VECTOR(int64_t, 16))(0x043366FBB5813BB0L, (VECTOR(int64_t, 4))(0x043366FBB5813BB0L, (VECTOR(int64_t, 2))(0x043366FBB5813BB0L, 3L), 3L), 3L, 0x043366FBB5813BB0L, 3L, (VECTOR(int64_t, 2))(0x043366FBB5813BB0L, 3L), (VECTOR(int64_t, 2))(0x043366FBB5813BB0L, 3L), 0x043366FBB5813BB0L, 3L, 0x043366FBB5813BB0L, 3L);
    int32_t l_146 = 0x64A4A936L;
    VECTOR(uint32_t, 16) l_151 = (VECTOR(uint32_t, 16))(0x565E8320L, (VECTOR(uint32_t, 4))(0x565E8320L, (VECTOR(uint32_t, 2))(0x565E8320L, 0xB9FEB662L), 0xB9FEB662L), 0xB9FEB662L, 0x565E8320L, 0xB9FEB662L, (VECTOR(uint32_t, 2))(0x565E8320L, 0xB9FEB662L), (VECTOR(uint32_t, 2))(0x565E8320L, 0xB9FEB662L), 0x565E8320L, 0xB9FEB662L, 0x565E8320L, 0xB9FEB662L);
    VECTOR(uint32_t, 4) l_152 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF23DC045L), 0xF23DC045L);
    int32_t l_153[2][10] = {{0x3DD0B693L,6L,0x5DD0EBFAL,6L,0x3DD0B693L,0x3DD0B693L,6L,0x5DD0EBFAL,6L,0x3DD0B693L},{0x3DD0B693L,6L,0x5DD0EBFAL,6L,0x3DD0B693L,0x3DD0B693L,6L,0x5DD0EBFAL,6L,0x3DD0B693L}};
    uint16_t l_154 = 0x419DL;
    VECTOR(int16_t, 8) l_175 = (VECTOR(int16_t, 8))(0x0465L, (VECTOR(int16_t, 4))(0x0465L, (VECTOR(int16_t, 2))(0x0465L, 0L), 0L), 0L, 0x0465L, 0L);
    uint32_t l_187 = 0x0B106958L;
    int32_t l_212 = 0x5F52C73AL;
    int16_t l_233 = 0L;
    VECTOR(int32_t, 4) l_262 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
    int64_t l_263 = 0x28A9D4CCEA3E293BL;
    uint32_t l_337 = 0x8198BDFEL;
    VECTOR(uint64_t, 16) l_352 = (VECTOR(uint64_t, 16))(0xA595CDAB8CBA1B5FL, (VECTOR(uint64_t, 4))(0xA595CDAB8CBA1B5FL, (VECTOR(uint64_t, 2))(0xA595CDAB8CBA1B5FL, 1UL), 1UL), 1UL, 0xA595CDAB8CBA1B5FL, 1UL, (VECTOR(uint64_t, 2))(0xA595CDAB8CBA1B5FL, 1UL), (VECTOR(uint64_t, 2))(0xA595CDAB8CBA1B5FL, 1UL), 0xA595CDAB8CBA1B5FL, 1UL, 0xA595CDAB8CBA1B5FL, 1UL);
    int8_t l_363 = 0x07L;
    uint16_t l_364 = 7UL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_96[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_110[i] = &p_1085->g_111;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_115[i][j] = (void*)0;
    }
    p_1085->g_97.y--;
    p_1085->g_130 &= ((((safe_mul_func_uint16_t_u_u((((++l_102) != (0x168E5B49L || (p_1085->g_128 &= (((p_1085->g_54.w = (((VECTOR(int8_t, 16))(l_105.s0cfce320ec44cb18)).s2 > ((0x29AFBAE3L >= GROUP_DIVERGE(1, 1)) , (safe_div_func_int32_t_s_s(((*l_76) |= ((*l_81) |= ((safe_add_func_int16_t_s_s((!((void*)0 != l_110[2])), (safe_rshift_func_uint16_t_u_s(0x559FL, 4)))) , p_1085->g_54.w))), FAKE_DIVERGE(p_1085->group_2_offset, get_group_id(2), 10)))))) > 0xE2C5435112828081L) , (((((((((VECTOR(int16_t, 4))(p_1085->g_116.ywww)).z == (safe_mod_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((((+((safe_lshift_func_uint16_t_u_s(((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_123.xwwzzwww)).s67)).odd && (safe_rshift_func_int8_t_s_s((p_1085->g_126 != (p_1085->g_52 & p_1085->g_54.z)), 5))) >= 0x055545B60A5FB02CL), (*l_79))) <= p_1085->g_67)) || (*l_89)) ^ (*l_88)), 0x3D54EFE8L)) == p_1085->g_111.f0), (-3L)))) ^ 0UL) & (*l_92)) > (*l_92)) >= 0x5F93L) , l_114) != l_115[0][4]))))) == (*l_94)), p_1085->g_111.f0)) >= p_1085->g_52) & p_1085->g_129) < (*l_89));
    if ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((-2L), (!((p_1085->g_comm_values[p_1085->tid] , (safe_div_func_int16_t_s_s(0x24A4L, (((VECTOR(int64_t, 2))(l_137.sa8)).odd | (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((*l_92) , (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_146, (safe_div_func_uint32_t_u_u((p_1085->g_15 , (((+p_1085->g_116.w) == ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((safe_rshift_func_int16_t_s_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(l_151.sf6d3)).zwyyyzwy, ((VECTOR(uint32_t, 16))(l_152.yxzwxzzywwyxwzxy)).hi))).s2013176470550142)).s3 ^ 0x6F14F5BEL), l_153[1][0])) | p_1085->g_15), 0xD823L, (*l_80), 0UL, 0xDE15L, 0x2EC4L, 6UL, 0xDA59L)).lo)), ((VECTOR(uint16_t, 4))(65535UL)), 0x6355L, ((VECTOR(uint16_t, 2))(0x9BFBL)), 65527UL, p_1085->g_67, l_154, 1UL, 65528UL)).s7) , (*p_75))), p_1085->g_111.f0)))), p_1085->g_129))), (*l_94))), (*l_86))))))) == (*l_76))))), (*l_86))))
    { /* block id: 20 */
        VECTOR(int16_t, 16) l_174 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int16_t, 2))((-8L), (-1L)), (VECTOR(int16_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L));
        int32_t l_228 = 7L;
        uint8_t l_236 = 0x7EL;
        VECTOR(int32_t, 16) l_239 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x4CFCC2DBL), 0x4CFCC2DBL), 0x4CFCC2DBL, 8L, 0x4CFCC2DBL, (VECTOR(int32_t, 2))(8L, 0x4CFCC2DBL), (VECTOR(int32_t, 2))(8L, 0x4CFCC2DBL), 8L, 0x4CFCC2DBL, 8L, 0x4CFCC2DBL);
        VECTOR(uint64_t, 4) l_248 = (VECTOR(uint64_t, 4))(0x6815FF81F1C5D373L, (VECTOR(uint64_t, 2))(0x6815FF81F1C5D373L, 18446744073709551615UL), 18446744073709551615UL);
        VECTOR(int32_t, 2) l_261 = (VECTOR(int32_t, 2))(0x2442AE9BL, (-9L));
        int32_t *l_342 = &l_84;
        int i;
        (*l_95) |= (*l_88);
        for (l_78 = 0; (l_78 <= 6); l_78 = safe_add_func_int8_t_s_s(l_78, 1))
        { /* block id: 24 */
            int16_t l_163 = (-10L);
            struct S0 *l_183 = (void*)0;
            uint8_t l_218 = 0x74L;
            int32_t l_234 = 0x689D45B8L;
            int32_t l_235 = 0L;
            VECTOR(uint64_t, 4) l_249 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xBEBF25DA6E1C3217L), 0xBEBF25DA6E1C3217L);
            VECTOR(int32_t, 16) l_276 = (VECTOR(int32_t, 16))(0x6BEC8285L, (VECTOR(int32_t, 4))(0x6BEC8285L, (VECTOR(int32_t, 2))(0x6BEC8285L, 1L), 1L), 1L, 0x6BEC8285L, 1L, (VECTOR(int32_t, 2))(0x6BEC8285L, 1L), (VECTOR(int32_t, 2))(0x6BEC8285L, 1L), 0x6BEC8285L, 1L, 0x6BEC8285L, 1L);
            int32_t *l_278 = &p_1085->g_77;
            union U1 l_309[4] = {{0x1BDDDD12492859D2L},{0x1BDDDD12492859D2L},{0x1BDDDD12492859D2L},{0x1BDDDD12492859D2L}};
            int64_t *l_329 = (void*)0;
            VECTOR(int64_t, 16) l_360 = (VECTOR(int64_t, 16))(0x3E0F00340A8E6CCFL, (VECTOR(int64_t, 4))(0x3E0F00340A8E6CCFL, (VECTOR(int64_t, 2))(0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L), 0x4A5B1CB5A17DCD40L), 0x4A5B1CB5A17DCD40L, 0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L, (VECTOR(int64_t, 2))(0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L), (VECTOR(int64_t, 2))(0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L), 0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L, 0x3E0F00340A8E6CCFL, 0x4A5B1CB5A17DCD40L);
            int32_t l_361 = 0x1A649FF2L;
            int16_t l_362 = 0x768BL;
            int i, j;
            for (l_93 = 24; (l_93 == (-19)); l_93--)
            { /* block id: 27 */
                uint16_t *l_166 = (void*)0;
                uint16_t *l_167 = (void*)0;
                uint16_t *l_168 = (void*)0;
                uint16_t *l_169 = &l_154;
                uint32_t **l_176[6][3][9] = {{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}},{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}},{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}},{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}},{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}},{{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]},{&l_127[1],&l_127[3],&l_127[3],&l_127[2],&l_127[4],&l_127[2],&l_127[3],&l_127[3],&l_127[1]}}};
                int32_t l_178 = (-9L);
                int32_t l_219 = 0x10FE33B6L;
                int32_t l_227 = (-6L);
                int32_t l_229 = 0x7568F5A8L;
                VECTOR(int32_t, 8) l_232 = (VECTOR(int32_t, 8))(0x531FF24DL, (VECTOR(int32_t, 4))(0x531FF24DL, (VECTOR(int32_t, 2))(0x531FF24DL, 0x4F4A132BL), 0x4F4A132BL), 0x4F4A132BL, 0x531FF24DL, 0x4F4A132BL);
                int i, j, k;
                (*l_89) ^= ((p_1085->g_111 , &l_93) == &p_1085->g_15);
                if (((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(0xF306L, l_163)) , ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x20E2L, 0x350FL)))).odd, ((*l_169)++))) < (safe_sub_func_uint16_t_u_u((((((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(l_174.sc65eb622)).lo, ((VECTOR(int16_t, 2))(l_175.s36)).yxxx))).x , p_75) != (p_1085->g_177 = &p_1085->g_130)) & l_163), l_178)))), (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((!(l_183 != &p_1085->g_30)), ((safe_lshift_func_int8_t_s_s((((((VECTOR(int32_t, 16))(p_1085->g_186.yyyxxyxxyxyyxxxx)).s4 ^ (l_174.sb && p_1085->g_54.z)) || 65535UL) || l_187), 0)) < (*l_86)))), 0L)))) < (*l_95)))
                { /* block id: 31 */
                    int32_t l_207 = 0x709DC6ADL;
                    for (p_1085->g_126 = (-18); (p_1085->g_126 > 10); p_1085->g_126 = safe_add_func_uint16_t_u_u(p_1085->g_126, 2))
                    { /* block id: 34 */
                        uint32_t l_194 = 4294967290UL;
                        union U1 *l_202 = &p_1085->g_111;
                        uint8_t *l_213 = (void*)0;
                        uint8_t *l_214 = (void*)0;
                        uint8_t *l_215 = (void*)0;
                        int32_t l_217 = 0x02580673L;
                        p_1085->g_128 = ((((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_194--), (((p_1085->g_197 , (*l_79)) ^ (safe_add_func_int64_t_s_s((p_1085->g_111 , (!(safe_mul_func_int16_t_s_s(((((l_202 != (((((safe_div_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(0UL, (-1L))) < (p_1085->g_216 &= (l_207 | ((safe_rshift_func_int16_t_s_s((((((((safe_sub_func_uint64_t_u_u((p_1085->g_128 == ((((l_163 <= l_163) > l_174.s5) & p_1085->g_77) | p_1085->g_comm_values[p_1085->tid])), 0xD788535DF793C261L)) & (*l_89)) , l_174.s8) != GROUP_DIVERGE(0, 1)) <= (*l_79)) && l_212) , (*l_94)), 3)) || 18446744073709551607UL)))), p_1085->g_186.y)) && l_217) & l_163) == l_174.s1) , (void*)0)) , l_163) && l_207) != p_1085->g_126), l_163)))), 1L))) , p_1085->g_97.y))), l_178)) || 0L) >= l_218) , l_217);
                    }
                }
                else
                { /* block id: 39 */
                    uint32_t l_220[7][8][2] = {{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}},{{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L},{0x7219EB45L,0x8D397834L}}};
                    int32_t l_225 = 1L;
                    VECTOR(int32_t, 2) l_230 = (VECTOR(int32_t, 2))((-1L), 1L);
                    int i, j, k;
                    --l_220[6][2][1];
                    for (l_102 = 0; (l_102 > 1); l_102++)
                    { /* block id: 43 */
                        int8_t l_226 = (-10L);
                        int32_t l_231[7][5] = {{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L},{0x2917B7F4L,0x5A62993EL,0L,6L,0L}};
                        int i, j;
                        l_236++;
                    }
                }
                (*l_89) |= ((VECTOR(int32_t, 4))(l_239.sc328)).x;
                p_1085->g_30 = p_1085->g_240;
            }
            (*p_1085->g_242) = p_1085->g_241;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1085->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[(safe_mod_func_uint32_t_u_u((*p_1085->g_177), 10))][(safe_mod_func_uint32_t_u_u(p_1085->tid, 39))]));
            if ((*p_1085->g_241))
            { /* block id: 54 */
                int16_t *l_258[3][4][10] = {{{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233}},{{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233}},{{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233},{&l_233,&l_163,(void*)0,&l_163,&l_233,&l_233,&l_163,(void*)0,&l_163,&l_233}}};
                union U1 *l_259 = &p_1085->g_111;
                VECTOR(int32_t, 4) l_260 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L);
                int8_t *l_264 = (void*)0;
                int8_t *l_265 = &p_1085->g_129;
                int8_t *l_266 = (void*)0;
                int8_t *l_267 = (void*)0;
                int8_t *l_268 = (void*)0;
                int8_t *l_269 = (void*)0;
                int8_t *l_270[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t *l_272 = (void*)0;
                uint64_t *l_273 = &l_102;
                VECTOR(uint8_t, 16) l_310 = (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x46L), 0x46L), 0x46L, 3UL, 0x46L, (VECTOR(uint8_t, 2))(3UL, 0x46L), (VECTOR(uint8_t, 2))(3UL, 0x46L), 3UL, 0x46L, 3UL, 0x46L);
                uint8_t *l_327 = (void*)0;
                uint8_t *l_328 = &l_236;
                int32_t l_336 = 3L;
                int i, j, k;
                (*l_94) ^= (safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(0x9BB4E128B6DCFAA1L, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(p_1085->g_247.s3114450374670770)).s9eae, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(l_248.xxyzywwy)).s51, (uint64_t)GROUP_DIVERGE(0, 1)))).yyyy))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(5UL, 0UL)).xxxxyxxyxyxyyxxx)).s912a, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_249.zwwy)).wxzyxxyz)).hi))).even)).xyxy))).w)), (safe_mod_func_uint32_t_u_u((*p_1085->g_177), (((*l_95) = ((safe_lshift_func_int8_t_s_u((((((*l_273) |= (safe_mod_func_int8_t_s_s((p_1085->g_111 , (p_1085->g_271 = ((*l_265) = ((((safe_rshift_func_uint16_t_u_s(((l_228 = (GROUP_DIVERGE(0, 1) <= l_249.x)) ^ (((((&p_1085->g_111 != l_259) < ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))((-7L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_260.yxxw)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(3L, 0x24354AD2L, 0x1DC23C6EL, 8L)), 0x617FD771L, 0x622DDEA7L, 0x1D96F4DCL, 0x7926888CL)))).s05, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_261.xxxx)).xxzyyxyxyyxzxxyw)).s01))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_262.ywxx)).xwxxxwxzxxxyyzyz, (int32_t)(GROUP_DIVERGE(1, 1) >= 2UL), (int32_t)6L))).se6)).even, ((0UL || 0L) & FAKE_DIVERGE(p_1085->global_0_offset, get_global_id(0), 10)), 0x247BFBD1L, ((VECTOR(int32_t, 4))(0x3443416DL)), ((VECTOR(int32_t, 2))(0x313447BCL)), 0L)).lo)), (-1L), 1L, ((VECTOR(int32_t, 2))(0x360709DDL)), (-1L), 0x17C3DF11L, 0x201EBDC4L)).s34, ((VECTOR(int32_t, 2))(0x214248C0L))))).odd) | l_218) || l_260.y) <= l_239.s8)), 7)) ^ 0xB92AL) & l_263) | p_1085->g_197.f0)))), 5L))) > p_1085->g_186.y) < l_260.z) > 0xD102L), 1)) == l_261.y)) & 0x7530FD64L)))));
                for (p_1085->g_271 = (-22); (p_1085->g_271 != (-22)); p_1085->g_271++)
                { /* block id: 63 */
                    int64_t l_277 = 0x48DCC073444A4992L;
                    int32_t *l_280 = (void*)0;
                    (1 + 1);
                }
                if ((safe_lshift_func_int8_t_s_u((((*p_1085->g_177) = (p_1085->g_330.x |= ((&p_1085->g_271 != ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((-10L) == (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x6C0A1D04L)).xyyxyyxy)).s7371204111702567, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(1L, (safe_rshift_func_int16_t_s_s((&p_1085->g_271 == &p_1085->g_271), ((p_1085->g_216 = (safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((0xD59CL | p_1085->g_271) < ((((*l_328) = (p_1085->g_111.f0 > 0xADL)) && 251UL) && 0L)), l_260.z)) || (*l_82)), (-1L)))) , 0x2773L))), ((VECTOR(int16_t, 2))(0x1D1FL)), (-3L), ((VECTOR(int16_t, 2))((-6L))), 0x78E6L)).s50, ((VECTOR(uint16_t, 2))(4UL))))).yyyyyxyyxxxyyyxy))).hi)).hi, ((VECTOR(int32_t, 4))((-1L)))))).y, (*p_75)))), l_260.z)), p_1085->g_97.y)) , l_329)) || l_260.x))) <= l_261.y), 1)))
                { /* block id: 85 */
                    if ((*p_1085->g_241))
                        break;
                    p_1085->g_240 = p_1085->g_331[6];
                    for (p_1085->g_67 = 19; (p_1085->g_67 >= 6); p_1085->g_67 = safe_sub_func_int64_t_s_s(p_1085->g_67, 9))
                    { /* block id: 90 */
                        int16_t l_334[8][2][2] = {{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}},{{0x03D2L,0x5C35L},{0x03D2L,0x5C35L}}};
                        int32_t l_335 = 0x2B18FB1CL;
                        int i, j, k;
                        ++l_337;
                        l_342 = p_75;
                        if (l_260.x)
                            continue;
                    }
                    if ((atomic_inc(&p_1085->l_atomic_input[9]) == 0))
                    { /* block id: 96 */
                        uint32_t l_343 = 0x53CB6C9FL;
                        struct S0 l_344[2] = {{8UL},{8UL}};
                        struct S0 l_345[8][10][3] = {{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}},{{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}},{{246UL},{255UL},{0x46L}}}};
                        int32_t l_347 = (-2L);
                        int32_t *l_346 = &l_347;
                        int32_t *l_348 = &l_347;
                        union U1 l_349[8][3] = {{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}},{{0L},{0x0CE6646E04766ECDL},{0L}}};
                        uint16_t l_350 = 65526UL;
                        uint32_t l_351 = 4294967294UL;
                        int i, j, k;
                        l_345[1][0][2] = (l_343 , l_344[0]);
                        l_348 = l_346;
                        l_351 ^= (l_349[6][0] , l_350);
                        unsigned int result = 0;
                        result += l_343;
                        int l_344_i0;
                        for (l_344_i0 = 0; l_344_i0 < 2; l_344_i0++) {
                            result += l_344[l_344_i0].f0;
                        }
                        int l_345_i0, l_345_i1, l_345_i2;
                        for (l_345_i0 = 0; l_345_i0 < 8; l_345_i0++) {
                            for (l_345_i1 = 0; l_345_i1 < 10; l_345_i1++) {
                                for (l_345_i2 = 0; l_345_i2 < 3; l_345_i2++) {
                                    result += l_345[l_345_i0][l_345_i1][l_345_i2].f0;
                                }
                            }
                        }
                        result += l_347;
                        int l_349_i0, l_349_i1;
                        for (l_349_i0 = 0; l_349_i0 < 8; l_349_i0++) {
                            for (l_349_i1 = 0; l_349_i1 < 3; l_349_i1++) {
                                result += l_349[l_349_i0][l_349_i1].f0;
                            }
                        }
                        result += l_350;
                        result += l_351;
                        atomic_add(&p_1085->l_special_values[9], result);
                    }
                    else
                    { /* block id: 100 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 103 */
                    (*p_1085->g_353) = (((VECTOR(uint64_t, 16))(l_352.s1f90554811b1d729)).sa , (*p_1085->g_242));
                    for (l_212 = 0; (l_212 <= 26); l_212 = safe_add_func_uint32_t_u_u(l_212, 8))
                    { /* block id: 107 */
                        int32_t **l_356[5] = {&l_278,&l_278,&l_278,&l_278,&l_278};
                        int i;
                        l_342 = p_75;
                        l_278 = p_75;
                    }
                    for (p_1085->g_216 = 0; (p_1085->g_216 != 27); p_1085->g_216 = safe_add_func_int16_t_s_s(p_1085->g_216, 3))
                    { /* block id: 113 */
                        (*l_94) ^= (*l_278);
                    }
                }
                l_364--;
            }
            else
            { /* block id: 118 */
                int32_t **l_367[9][5] = {{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89},{(void*)0,&l_89,&l_89,&l_83,&l_89}};
                struct S0 **l_368 = &l_183;
                int i, j;
                l_278 = &l_228;
                (*p_1085->g_372) = l_368;
            }
        }
        p_1085->g_374 = p_1085->g_373;
    }
    else
    { /* block id: 124 */
        uint64_t l_375 = 0xE4EE1541A47F7494L;
        int8_t *l_385 = &l_363;
        int32_t l_386 = 0L;
        ++l_375;
        for (l_212 = (-7); (l_212 > (-26)); --l_212)
        { /* block id: 128 */
            int32_t **l_380 = &l_85;
            (*l_85) |= 0x25E86082L;
            if (l_375)
                break;
            (*l_380) = &l_90;
            (*l_95) ^= 1L;
        }
        l_386 = (((l_375 < (safe_rshift_func_int8_t_s_u((0xD2CE0D3EL > (++(*p_75))), 3))) != (+p_1085->g_97.w)) || (((*p_1085->g_371) , l_385) != (void*)0));
    }
    (*l_94) &= (*p_1085->g_341);
    return p_1085->g_54.w;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_comm_values[i] = 1;
    struct S2 c_1086;
    struct S2* p_1085 = &c_1086;
    struct S2 c_1087 = {
        5L, // p_1085->g_13
        0x10DD013DL, // p_1085->g_15
        {0UL}, // p_1085->g_30
        0x20A048C8L, // p_1085->g_52
        (VECTOR(int64_t, 4))(0x3B7DC4B54C5F6B4AL, (VECTOR(int64_t, 2))(0x3B7DC4B54C5F6B4AL, 2L), 2L), // p_1085->g_54
        4294967295UL, // p_1085->g_67
        0x6D6CA138L, // p_1085->g_77
        (VECTOR(uint32_t, 4))(0x443A54D8L, (VECTOR(uint32_t, 2))(0x443A54D8L, 4294967294UL), 4294967294UL), // p_1085->g_97
        {1L}, // p_1085->g_111
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x24D2L), 0x24D2L), // p_1085->g_116
        0x73DEF630L, // p_1085->g_126
        (-1L), // p_1085->g_128
        (-1L), // p_1085->g_129
        0xD6B4620FL, // p_1085->g_130
        &p_1085->g_52, // p_1085->g_177
        (VECTOR(int32_t, 2))(0x3E7769F7L, 0x7F555B32L), // p_1085->g_186
        {0xDEL}, // p_1085->g_197
        1UL, // p_1085->g_216
        {0x64L}, // p_1085->g_240
        &p_1085->g_128, // p_1085->g_241
        &p_1085->g_241, // p_1085->g_242
        (VECTOR(uint64_t, 8))(0x5F06EB511B20A924L, (VECTOR(uint64_t, 4))(0x5F06EB511B20A924L, (VECTOR(uint64_t, 2))(0x5F06EB511B20A924L, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x5F06EB511B20A924L, 18446744073709551607UL), // p_1085->g_247
        0x1004A7B01F773235L, // p_1085->g_271
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL), // p_1085->g_287
        (void*)0, // p_1085->g_288
        (VECTOR(int16_t, 2))(0x4604L, 0x5F22L), // p_1085->g_299
        &p_1085->g_240.f0, // p_1085->g_304
        (VECTOR(uint32_t, 2))(9UL, 4294967295UL), // p_1085->g_330
        {{0UL},{0xC0L},{0UL},{0UL},{0xC0L},{0UL},{0UL},{0xC0L},{0UL},{0UL}}, // p_1085->g_331
        &p_1085->g_128, // p_1085->g_341
        {{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341}}, // p_1085->g_340
        &p_1085->g_341, // p_1085->g_353
        (-2L), // p_1085->g_359
        &p_1085->g_197, // p_1085->g_371
        &p_1085->g_371, // p_1085->g_370
        {&p_1085->g_370}, // p_1085->g_369
        &p_1085->g_370, // p_1085->g_372
        {255UL}, // p_1085->g_373
        {0x64L}, // p_1085->g_374
        (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L), // p_1085->g_388
        {250UL}, // p_1085->g_399
        0x1E82716AL, // p_1085->g_404
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x55L), 0x55L), 0x55L, (-4L), 0x55L), // p_1085->g_407
        (VECTOR(uint8_t, 2))(0x39L, 253UL), // p_1085->g_416
        0x02696175EAF6B0E7L, // p_1085->g_472
        {&p_1085->g_341,&p_1085->g_341}, // p_1085->g_475
        {{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341,&p_1085->g_341}}, // p_1085->g_480
        (void*)0, // p_1085->g_481
        {0xDCL}, // p_1085->g_483
        &p_1085->g_370, // p_1085->g_489
        (VECTOR(int64_t, 4))(0x03879A0458D6C72AL, (VECTOR(int64_t, 2))(0x03879A0458D6C72AL, 0x701DE3194642FA6EL), 0x701DE3194642FA6EL), // p_1085->g_498
        {0xAEL}, // p_1085->g_543
        (VECTOR(int32_t, 2))(0L, 0x19448260L), // p_1085->g_611
        0x1701322652D8BCB7L, // p_1085->g_613
        {&p_1085->g_111,&p_1085->g_111,&p_1085->g_111,&p_1085->g_111,&p_1085->g_111,&p_1085->g_111,&p_1085->g_111,&p_1085->g_111}, // p_1085->g_626
        &p_1085->g_626[6], // p_1085->g_625
        &p_1085->g_341, // p_1085->g_628
        (VECTOR(uint16_t, 2))(0xF15AL, 0x2AE1L), // p_1085->g_642
        &p_1085->g_341, // p_1085->g_652
        {{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}}}, // p_1085->g_655
        (void*)0, // p_1085->g_656
        (void*)0, // p_1085->g_705
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0L), 0L), // p_1085->g_721
        (VECTOR(uint16_t, 2))(65531UL, 65532UL), // p_1085->g_742
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), // p_1085->g_743
        1L, // p_1085->g_759
        {3UL}, // p_1085->g_765
        0x6A9BC83DL, // p_1085->g_786
        {{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}},{{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341},{&p_1085->g_341,&p_1085->g_341}}}, // p_1085->g_832
        {&p_1085->g_832[3][3][0],&p_1085->g_832[3][3][0],&p_1085->g_832[3][3][0],&p_1085->g_832[3][3][0]}, // p_1085->g_831
        (void*)0, // p_1085->g_833
        &p_1085->g_129, // p_1085->g_904
        {&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904,&p_1085->g_904}, // p_1085->g_903
        (VECTOR(uint64_t, 4))(0x4BCA4FAB371FFBBCL, (VECTOR(uint64_t, 2))(0x4BCA4FAB371FFBBCL, 0UL), 0UL), // p_1085->g_905
        0UL, // p_1085->g_1016
        &p_1085->g_1016, // p_1085->g_1015
        &p_1085->g_177, // p_1085->g_1024
        {&p_1085->g_1024,&p_1085->g_1024,&p_1085->g_1024,&p_1085->g_1024,&p_1085->g_1024}, // p_1085->g_1023
        {{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}},{{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}},{{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}}}}, // p_1085->g_1031
        &p_1085->g_341, // p_1085->g_1033
        &p_1085->g_626[6], // p_1085->g_1060
        {&p_1085->g_67,&p_1085->g_67,&p_1085->g_67,&p_1085->g_67,&p_1085->g_67,&p_1085->g_67,&p_1085->g_67,&p_1085->g_67}, // p_1085->g_1063
        &p_1085->g_1063[6], // p_1085->g_1062
        &p_1085->g_341, // p_1085->g_1084
        0, // p_1085->v_collective
        sequence_input[get_global_id(0)], // p_1085->global_0_offset
        sequence_input[get_global_id(1)], // p_1085->global_1_offset
        sequence_input[get_global_id(2)], // p_1085->global_2_offset
        sequence_input[get_local_id(0)], // p_1085->local_0_offset
        sequence_input[get_local_id(1)], // p_1085->local_1_offset
        sequence_input[get_local_id(2)], // p_1085->local_2_offset
        sequence_input[get_group_id(0)], // p_1085->group_0_offset
        sequence_input[get_group_id(1)], // p_1085->group_1_offset
        sequence_input[get_group_id(2)], // p_1085->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[0][get_linear_local_id()])), // p_1085->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1086 = c_1087;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1085);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1085->g_13, "p_1085->g_13", print_hash_value);
    transparent_crc(p_1085->g_15, "p_1085->g_15", print_hash_value);
    transparent_crc(p_1085->g_30.f0, "p_1085->g_30.f0", print_hash_value);
    transparent_crc(p_1085->g_52, "p_1085->g_52", print_hash_value);
    transparent_crc(p_1085->g_54.x, "p_1085->g_54.x", print_hash_value);
    transparent_crc(p_1085->g_54.y, "p_1085->g_54.y", print_hash_value);
    transparent_crc(p_1085->g_54.z, "p_1085->g_54.z", print_hash_value);
    transparent_crc(p_1085->g_54.w, "p_1085->g_54.w", print_hash_value);
    transparent_crc(p_1085->g_67, "p_1085->g_67", print_hash_value);
    transparent_crc(p_1085->g_77, "p_1085->g_77", print_hash_value);
    transparent_crc(p_1085->g_97.x, "p_1085->g_97.x", print_hash_value);
    transparent_crc(p_1085->g_97.y, "p_1085->g_97.y", print_hash_value);
    transparent_crc(p_1085->g_97.z, "p_1085->g_97.z", print_hash_value);
    transparent_crc(p_1085->g_97.w, "p_1085->g_97.w", print_hash_value);
    transparent_crc(p_1085->g_111.f0, "p_1085->g_111.f0", print_hash_value);
    transparent_crc(p_1085->g_116.x, "p_1085->g_116.x", print_hash_value);
    transparent_crc(p_1085->g_116.y, "p_1085->g_116.y", print_hash_value);
    transparent_crc(p_1085->g_116.z, "p_1085->g_116.z", print_hash_value);
    transparent_crc(p_1085->g_116.w, "p_1085->g_116.w", print_hash_value);
    transparent_crc(p_1085->g_126, "p_1085->g_126", print_hash_value);
    transparent_crc(p_1085->g_128, "p_1085->g_128", print_hash_value);
    transparent_crc(p_1085->g_129, "p_1085->g_129", print_hash_value);
    transparent_crc(p_1085->g_130, "p_1085->g_130", print_hash_value);
    transparent_crc(p_1085->g_186.x, "p_1085->g_186.x", print_hash_value);
    transparent_crc(p_1085->g_186.y, "p_1085->g_186.y", print_hash_value);
    transparent_crc(p_1085->g_197.f0, "p_1085->g_197.f0", print_hash_value);
    transparent_crc(p_1085->g_216, "p_1085->g_216", print_hash_value);
    transparent_crc(p_1085->g_240.f0, "p_1085->g_240.f0", print_hash_value);
    transparent_crc(p_1085->g_247.s0, "p_1085->g_247.s0", print_hash_value);
    transparent_crc(p_1085->g_247.s1, "p_1085->g_247.s1", print_hash_value);
    transparent_crc(p_1085->g_247.s2, "p_1085->g_247.s2", print_hash_value);
    transparent_crc(p_1085->g_247.s3, "p_1085->g_247.s3", print_hash_value);
    transparent_crc(p_1085->g_247.s4, "p_1085->g_247.s4", print_hash_value);
    transparent_crc(p_1085->g_247.s5, "p_1085->g_247.s5", print_hash_value);
    transparent_crc(p_1085->g_247.s6, "p_1085->g_247.s6", print_hash_value);
    transparent_crc(p_1085->g_247.s7, "p_1085->g_247.s7", print_hash_value);
    transparent_crc(p_1085->g_271, "p_1085->g_271", print_hash_value);
    transparent_crc(p_1085->g_287.s0, "p_1085->g_287.s0", print_hash_value);
    transparent_crc(p_1085->g_287.s1, "p_1085->g_287.s1", print_hash_value);
    transparent_crc(p_1085->g_287.s2, "p_1085->g_287.s2", print_hash_value);
    transparent_crc(p_1085->g_287.s3, "p_1085->g_287.s3", print_hash_value);
    transparent_crc(p_1085->g_287.s4, "p_1085->g_287.s4", print_hash_value);
    transparent_crc(p_1085->g_287.s5, "p_1085->g_287.s5", print_hash_value);
    transparent_crc(p_1085->g_287.s6, "p_1085->g_287.s6", print_hash_value);
    transparent_crc(p_1085->g_287.s7, "p_1085->g_287.s7", print_hash_value);
    transparent_crc(p_1085->g_299.x, "p_1085->g_299.x", print_hash_value);
    transparent_crc(p_1085->g_299.y, "p_1085->g_299.y", print_hash_value);
    transparent_crc(p_1085->g_330.x, "p_1085->g_330.x", print_hash_value);
    transparent_crc(p_1085->g_330.y, "p_1085->g_330.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1085->g_331[i].f0, "p_1085->g_331[i].f0", print_hash_value);

    }
    transparent_crc(p_1085->g_359, "p_1085->g_359", print_hash_value);
    transparent_crc(p_1085->g_373.f0, "p_1085->g_373.f0", print_hash_value);
    transparent_crc(p_1085->g_374.f0, "p_1085->g_374.f0", print_hash_value);
    transparent_crc(p_1085->g_388.s0, "p_1085->g_388.s0", print_hash_value);
    transparent_crc(p_1085->g_388.s1, "p_1085->g_388.s1", print_hash_value);
    transparent_crc(p_1085->g_388.s2, "p_1085->g_388.s2", print_hash_value);
    transparent_crc(p_1085->g_388.s3, "p_1085->g_388.s3", print_hash_value);
    transparent_crc(p_1085->g_388.s4, "p_1085->g_388.s4", print_hash_value);
    transparent_crc(p_1085->g_388.s5, "p_1085->g_388.s5", print_hash_value);
    transparent_crc(p_1085->g_388.s6, "p_1085->g_388.s6", print_hash_value);
    transparent_crc(p_1085->g_388.s7, "p_1085->g_388.s7", print_hash_value);
    transparent_crc(p_1085->g_399.f0, "p_1085->g_399.f0", print_hash_value);
    transparent_crc(p_1085->g_404, "p_1085->g_404", print_hash_value);
    transparent_crc(p_1085->g_407.s0, "p_1085->g_407.s0", print_hash_value);
    transparent_crc(p_1085->g_407.s1, "p_1085->g_407.s1", print_hash_value);
    transparent_crc(p_1085->g_407.s2, "p_1085->g_407.s2", print_hash_value);
    transparent_crc(p_1085->g_407.s3, "p_1085->g_407.s3", print_hash_value);
    transparent_crc(p_1085->g_407.s4, "p_1085->g_407.s4", print_hash_value);
    transparent_crc(p_1085->g_407.s5, "p_1085->g_407.s5", print_hash_value);
    transparent_crc(p_1085->g_407.s6, "p_1085->g_407.s6", print_hash_value);
    transparent_crc(p_1085->g_407.s7, "p_1085->g_407.s7", print_hash_value);
    transparent_crc(p_1085->g_416.x, "p_1085->g_416.x", print_hash_value);
    transparent_crc(p_1085->g_416.y, "p_1085->g_416.y", print_hash_value);
    transparent_crc(p_1085->g_472, "p_1085->g_472", print_hash_value);
    transparent_crc(p_1085->g_483.f0, "p_1085->g_483.f0", print_hash_value);
    transparent_crc(p_1085->g_498.x, "p_1085->g_498.x", print_hash_value);
    transparent_crc(p_1085->g_498.y, "p_1085->g_498.y", print_hash_value);
    transparent_crc(p_1085->g_498.z, "p_1085->g_498.z", print_hash_value);
    transparent_crc(p_1085->g_498.w, "p_1085->g_498.w", print_hash_value);
    transparent_crc(p_1085->g_543.f0, "p_1085->g_543.f0", print_hash_value);
    transparent_crc(p_1085->g_611.x, "p_1085->g_611.x", print_hash_value);
    transparent_crc(p_1085->g_611.y, "p_1085->g_611.y", print_hash_value);
    transparent_crc(p_1085->g_613, "p_1085->g_613", print_hash_value);
    transparent_crc(p_1085->g_642.x, "p_1085->g_642.x", print_hash_value);
    transparent_crc(p_1085->g_642.y, "p_1085->g_642.y", print_hash_value);
    transparent_crc(p_1085->g_721.x, "p_1085->g_721.x", print_hash_value);
    transparent_crc(p_1085->g_721.y, "p_1085->g_721.y", print_hash_value);
    transparent_crc(p_1085->g_721.z, "p_1085->g_721.z", print_hash_value);
    transparent_crc(p_1085->g_721.w, "p_1085->g_721.w", print_hash_value);
    transparent_crc(p_1085->g_742.x, "p_1085->g_742.x", print_hash_value);
    transparent_crc(p_1085->g_742.y, "p_1085->g_742.y", print_hash_value);
    transparent_crc(p_1085->g_743.x, "p_1085->g_743.x", print_hash_value);
    transparent_crc(p_1085->g_743.y, "p_1085->g_743.y", print_hash_value);
    transparent_crc(p_1085->g_743.z, "p_1085->g_743.z", print_hash_value);
    transparent_crc(p_1085->g_743.w, "p_1085->g_743.w", print_hash_value);
    transparent_crc(p_1085->g_759, "p_1085->g_759", print_hash_value);
    transparent_crc(p_1085->g_765.f0, "p_1085->g_765.f0", print_hash_value);
    transparent_crc(p_1085->g_786, "p_1085->g_786", print_hash_value);
    transparent_crc(p_1085->g_905.x, "p_1085->g_905.x", print_hash_value);
    transparent_crc(p_1085->g_905.y, "p_1085->g_905.y", print_hash_value);
    transparent_crc(p_1085->g_905.z, "p_1085->g_905.z", print_hash_value);
    transparent_crc(p_1085->g_905.w, "p_1085->g_905.w", print_hash_value);
    transparent_crc(p_1085->g_1016, "p_1085->g_1016", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1085->g_1031[i][j][k].f0, "p_1085->g_1031[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1085->v_collective, "p_1085->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 14; i++)
            transparent_crc(p_1085->l_special_values[i], "p_1085->l_special_values[i]", print_hash_value);
    transparent_crc(p_1085->l_comm_values[get_linear_local_id()], "p_1085->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1085->g_comm_values[get_linear_group_id() * 39 + get_linear_local_id()], "p_1085->g_comm_values[get_linear_group_id() * 39 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
