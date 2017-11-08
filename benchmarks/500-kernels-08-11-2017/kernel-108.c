// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,49,3 -l 51,1,1
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

__constant uint32_t permutations[10][51] = {
{2,18,34,35,43,19,25,33,50,30,28,5,44,23,47,0,32,8,42,14,13,37,15,12,20,9,24,31,39,10,48,29,26,38,6,7,46,11,3,21,36,1,4,16,40,41,17,45,27,49,22}, // permutation 0
{13,19,48,29,20,47,46,45,6,27,49,24,18,4,3,28,7,41,42,39,30,31,1,16,43,36,5,35,21,23,11,32,14,9,8,22,44,17,37,50,33,12,26,40,34,38,0,10,15,2,25}, // permutation 1
{17,25,1,16,12,27,0,41,30,49,28,50,20,38,47,40,10,3,44,14,2,19,31,8,32,36,24,15,33,37,43,18,4,42,21,5,6,9,23,7,22,45,34,39,11,13,35,26,48,46,29}, // permutation 2
{33,37,40,25,14,42,30,32,27,3,29,36,47,41,10,1,45,31,17,13,5,50,48,28,26,19,39,35,44,4,12,8,6,2,49,34,38,21,0,7,22,16,9,23,46,15,18,43,24,20,11}, // permutation 3
{14,36,5,35,27,3,30,49,20,45,47,26,42,24,44,21,6,12,8,34,1,41,25,39,48,7,17,0,32,16,40,29,4,11,37,46,33,22,28,13,9,43,31,15,10,2,23,19,18,50,38}, // permutation 4
{3,22,43,38,27,28,26,19,42,45,20,32,36,33,21,1,12,5,7,0,2,39,10,47,18,29,30,9,48,37,16,17,41,14,44,50,49,24,23,15,4,40,31,6,11,46,13,34,25,8,35}, // permutation 5
{32,13,30,8,23,27,15,26,33,28,50,34,41,43,48,9,24,39,18,16,38,5,45,40,49,4,3,21,0,36,19,25,29,17,20,12,44,47,35,14,11,2,31,6,7,22,42,1,10,37,46}, // permutation 6
{9,3,13,34,36,7,46,5,6,29,12,47,32,15,37,21,48,22,8,33,31,2,10,30,27,44,45,40,26,18,49,14,4,41,38,39,43,17,28,35,20,0,19,11,50,24,1,23,25,42,16}, // permutation 7
{9,7,0,10,16,6,49,21,34,26,37,13,42,41,36,23,18,4,30,22,35,44,38,32,46,27,19,2,28,39,45,17,29,33,48,43,14,12,11,5,15,40,20,31,25,47,24,8,1,3,50}, // permutation 8
{32,34,9,6,24,30,31,25,35,29,46,38,37,14,39,42,1,13,20,41,8,2,18,5,23,49,10,33,47,11,40,27,17,19,0,22,15,44,4,50,48,43,45,28,36,16,7,21,12,3,26} // permutation 9
};

// Seed: 1421018520

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   uint64_t  f3;
   int32_t  f4;
   volatile uint32_t  f5;
   int64_t  f6;
};

struct S1 {
   volatile int32_t  f0;
   volatile int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
   int64_t  f6;
   volatile uint16_t  f7;
   int64_t  f8;
};

union U2 {
   struct S1  f0;
   volatile uint16_t  f1;
   uint64_t  f2;
   volatile uint32_t  f3;
};

union U3 {
   uint64_t  f0;
   int16_t  f1;
};

struct S4 {
    int32_t g_2;
    struct S1 g_42;
    int32_t g_46;
    volatile union U2 g_73;
    VECTOR(int8_t, 8) g_80;
    int16_t g_84;
    uint64_t g_85;
    int32_t g_88;
    uint8_t g_90;
    VECTOR(int32_t, 8) g_91;
    int32_t g_126[2];
    uint32_t g_131;
    struct S0 g_210;
    struct S0 g_212[10][10][2];
    uint32_t g_213;
    union U3 g_215[6];
    union U3 *g_217[5][8];
    union U3 ** volatile g_216;
    struct S1 g_457;
    VECTOR(int32_t, 16) g_459;
    volatile VECTOR(uint16_t, 4) g_463;
    volatile uint8_t g_466;
    volatile uint8_t *g_465;
    volatile uint8_t ** volatile g_464[1][7][3];
    struct S1 g_488;
    struct S1 * volatile g_489;
    uint16_t g_538;
    uint32_t g_579;
    struct S1 g_580;
    volatile VECTOR(uint64_t, 4) g_598;
    volatile VECTOR(uint64_t, 16) g_599;
    union U3 ** volatile g_601;
    struct S1 g_603[7][7][5];
    int32_t *g_607;
    int32_t ** volatile g_606;
    int32_t ** volatile g_615;
    int32_t ** volatile g_616;
    volatile struct S0 g_618;
    int32_t ***g_636;
    struct S1 g_648[1][5];
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
int16_t  func_1(struct S4 * p_649);
struct S1  func_5(union U3  p_6, union U3  p_7, uint32_t  p_8, uint8_t  p_9, struct S4 * p_649);
union U3  func_11(uint64_t  p_12, uint32_t  p_13, uint64_t  p_14, int16_t  p_15, struct S4 * p_649);
uint32_t  func_17(uint64_t  p_18, int32_t  p_19, struct S4 * p_649);
int32_t  func_20(int64_t  p_21, uint32_t  p_22, int32_t  p_23, uint32_t  p_24, uint8_t  p_25, struct S4 * p_649);
int8_t  func_30(uint32_t  p_31, uint64_t  p_32, struct S4 * p_649);
uint8_t  func_35(uint8_t  p_36, uint8_t  p_37, struct S4 * p_649);
struct S1  func_38(union U3  p_39, int64_t  p_40, struct S4 * p_649);
struct S0  func_49(uint32_t  p_50, int32_t ** p_51, uint32_t  p_52, int32_t  p_53, struct S4 * p_649);
uint8_t  func_62(uint32_t  p_63, struct S4 * p_649);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_649->g_2 p_649->g_comm_values p_649->g_42 p_649->g_213 p_649->g_210.f6 p_649->g_210.f2 p_649->g_216 p_649->g_210.f3 p_649->g_212.f2 p_649->g_457 p_649->g_91 p_649->g_210.f0 p_649->g_463 p_649->g_459 p_649->g_488 p_649->g_80 p_649->g_579 p_649->g_73.f0.f5 p_649->g_88 p_649->g_46 p_649->g_131 p_649->g_210 p_649->g_212 p_649->g_580 p_649->g_73 p_649->g_601 p_649->g_606 p_649->g_618 p_649->g_636 p_649->g_73.f0.f3 p_649->g_538 p_649->g_215.f0 p_649->g_126
 * writes: p_649->g_2 p_649->g_213 p_649->g_217 p_649->g_212.f2 p_649->g_457 p_649->g_91 p_649->g_42.f3 p_649->g_459 p_649->g_73.f0 p_649->g_488.f0 p_649->g_210.f2 p_649->g_80 p_649->g_126 p_649->g_88 p_649->g_46 p_649->g_131 p_649->g_90 p_649->g_42.f8 p_649->g_603 p_649->g_580.f4 p_649->g_607 p_649->g_488 p_649->g_636 p_649->g_210.f6 p_649->g_212.f1 p_649->g_538 p_649->g_648
 */
int16_t  func_1(struct S4 * p_649)
{ /* block id: 4 */
    int32_t l_16 = 1L;
    for (p_649->g_2 = 0; (p_649->g_2 > 28); p_649->g_2 = safe_add_func_int16_t_s_s(p_649->g_2, 3))
    { /* block id: 7 */
        union U3 l_10[9][8][3] = {{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}},{{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}},{{18446744073709551608UL},{1UL},{5UL}}}};
        int i, j, k;
        p_649->g_648[0][2] = func_5(l_10[5][7][2], func_11(l_16, (func_17(p_649->g_2, func_20((((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((func_30(p_649->g_comm_values[p_649->tid], (safe_add_func_int32_t_s_s((func_35((func_38(l_10[8][1][0], l_10[5][7][2].f0, p_649) , (0x00L < l_10[5][7][2].f0)), l_10[5][7][2].f0, p_649) > l_16), p_649->g_210.f2)), p_649) <= 0x1DL))), 3)) >= p_649->g_42.f2))) && l_10[5][7][2].f0) < p_649->g_210.f6), l_16, p_649->g_42.f8, p_649->g_42.f2, p_649->g_212[5][9][1].f2, p_649), p_649) <= (-1L)), l_16, l_10[5][7][2].f0, p_649), p_649->g_210.f4, l_16, p_649);
    }
    return p_649->g_210.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_463 p_649->g_42 p_649->g_606 p_649->g_618 p_649->g_88 p_649->g_457.f6 p_649->g_636 p_649->g_73.f0.f3 p_649->g_91 p_649->g_538 p_649->g_213 p_649->g_457.f5 p_649->g_215.f0 p_649->g_488.f4 p_649->g_580.f4 p_649->g_126 p_649->g_457
 * writes: p_649->g_488 p_649->g_607 p_649->g_88 p_649->g_457.f6 p_649->g_636 p_649->g_210.f6 p_649->g_212.f1 p_649->g_538 p_649->g_126
 */
struct S1  func_5(union U3  p_6, union U3  p_7, uint32_t  p_8, uint8_t  p_9, struct S4 * p_649)
{ /* block id: 345 */
    uint8_t l_611[3];
    union U3 l_612 = {4UL};
    struct S1 *l_613 = &p_649->g_488;
    int32_t *l_614[10][3] = {{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0},{(void*)0,&p_649->g_126[1],(void*)0}};
    int32_t **l_617[7] = {&l_614[1][1],&l_614[9][0],&l_614[1][1],&l_614[1][1],&l_614[9][0],&l_614[1][1],&l_614[1][1]};
    int32_t ***l_619 = &l_617[0];
    int32_t **l_620 = &p_649->g_607;
    VECTOR(int16_t, 8) l_642 = (VECTOR(int16_t, 8))(0x3AB5L, (VECTOR(int16_t, 4))(0x3AB5L, (VECTOR(int16_t, 2))(0x3AB5L, 0x3434L), 0x3434L), 0x3434L, 0x3AB5L, 0x3434L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_611[i] = 0x09L;
    (*l_613) = ((safe_add_func_uint16_t_u_u(p_649->g_463.y, l_611[0])) , func_38(l_612, l_612.f0, p_649));
    (*p_649->g_606) = l_614[1][1];
    p_649->g_88 &= (p_649->g_618 , (((*l_619) = (void*)0) == l_620));
    for (p_649->g_457.f6 = (-3); (p_649->g_457.f6 == (-11)); p_649->g_457.f6 = safe_sub_func_int8_t_s_s(p_649->g_457.f6, 4))
    { /* block id: 352 */
        VECTOR(int8_t, 16) l_627 = (VECTOR(int8_t, 16))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 1L), 1L), 1L, 0x3AL, 1L, (VECTOR(int8_t, 2))(0x3AL, 1L), (VECTOR(int8_t, 2))(0x3AL, 1L), 0x3AL, 1L, 0x3AL, 1L);
        int32_t ****l_637 = &p_649->g_636;
        int64_t *l_643 = (void*)0;
        int64_t *l_644 = &p_649->g_210.f6;
        uint8_t *l_645[10][7] = {{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0},{&p_649->g_210.f1,(void*)0,(void*)0,(void*)0,&p_649->g_210.f2,&p_649->g_210.f2,(void*)0}};
        uint16_t *l_646 = &p_649->g_538;
        int32_t l_647 = 1L;
        int i, j;
        p_649->g_126[0] |= (+(~(safe_add_func_int16_t_s_s(((p_6.f0 && (((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_627.s13642b79)).s0, (((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(3UL, 14)) ^ (~(safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((*l_646) &= ((&l_617[3] == ((*l_637) = p_649->g_636)) != ((safe_div_func_int16_t_s_s(p_649->g_73.f0.f3, (safe_add_func_int8_t_s_s((((p_649->g_212[5][9][1].f1 = (((7L > ((*l_644) = (p_649->g_42.f5 & (((VECTOR(int16_t, 2))(l_642.s60)).lo | p_649->g_91.s4)))) , 4294967295UL) >= p_9)) <= 0UL) < 65535UL), 0x63L)))) && FAKE_DIVERGE(p_649->local_2_offset, get_local_id(2), 10)))) > l_627.s0), p_649->g_213)) <= p_649->g_457.f5), p_649->g_215[0].f0)))), p_649->g_488.f4)) & p_649->g_42.f8) != p_9))) >= p_7.f0) == p_9)) ^ p_649->g_580.f4), p_9))));
        l_647 ^= p_9;
    }
    return p_649->g_457;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U3  func_11(uint64_t  p_12, uint32_t  p_13, uint64_t  p_14, int16_t  p_15, struct S4 * p_649)
{ /* block id: 343 */
    union U3 l_608 = {0xF2B28BA5F8D0A094L};
    return l_608;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_80 p_649->g_538 p_649->g_212.f4 p_649->g_131 p_649->g_465 p_649->g_466 p_649->g_463 p_649->g_84 p_649->g_42.f4 p_649->g_210.f2 p_649->g_457.f8 p_649->g_213 p_649->g_579 p_649->g_42.f5 p_649->g_73.f0.f5 p_649->g_42.f3 p_649->g_88 p_649->g_46 p_649->g_210 p_649->g_212 p_649->g_488.f6 p_649->g_580 p_649->g_488.f5 p_649->g_459 p_649->g_90 p_649->g_73 p_649->g_601 p_649->g_42 p_649->g_606
 * writes: p_649->g_538 p_649->g_131 p_649->g_212.f0 p_649->g_84 p_649->g_488.f0 p_649->g_210.f2 p_649->g_80 p_649->g_126 p_649->g_88 p_649->g_46 p_649->g_459 p_649->g_90 p_649->g_42.f8 p_649->g_73.f0.f0 p_649->g_217 p_649->g_603 p_649->g_580.f4 p_649->g_607
 */
uint32_t  func_17(uint64_t  p_18, int32_t  p_19, struct S4 * p_649)
{ /* block id: 273 */
    VECTOR(int16_t, 16) l_531 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1DDDL), 0x1DDDL), 0x1DDDL, (-1L), 0x1DDDL, (VECTOR(int16_t, 2))((-1L), 0x1DDDL), (VECTOR(int16_t, 2))((-1L), 0x1DDDL), (-1L), 0x1DDDL, (-1L), 0x1DDDL);
    int32_t l_536[6] = {0x0685A00CL,0x2F8D65DBL,0x0685A00CL,0x0685A00CL,0x2F8D65DBL,0x0685A00CL};
    uint16_t *l_537 = &p_649->g_538;
    struct S0 *l_547 = (void*)0;
    VECTOR(int8_t, 8) l_548 = (VECTOR(int8_t, 8))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x57L), 0x57L), 0x57L, 0x1EL, 0x57L);
    uint32_t *l_551 = &p_649->g_131;
    uint32_t *l_552 = &p_649->g_212[5][9][1].f0;
    int16_t *l_553 = &p_649->g_215[0].f1;
    int16_t *l_554[3][7] = {{&p_649->g_84,(void*)0,&p_649->g_84,(void*)0,&p_649->g_84,&p_649->g_84,(void*)0},{&p_649->g_84,(void*)0,&p_649->g_84,(void*)0,&p_649->g_84,&p_649->g_84,(void*)0},{&p_649->g_84,(void*)0,&p_649->g_84,(void*)0,&p_649->g_84,&p_649->g_84,(void*)0}};
    int32_t *l_555[2][2] = {{&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1]}};
    VECTOR(uint64_t, 2) l_572 = (VECTOR(uint64_t, 2))(1UL, 0UL);
    VECTOR(uint8_t, 8) l_575 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    union U3 *l_600[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    if ((atomic_inc(&p_649->l_atomic_input[3]) == 0))
    { /* block id: 275 */
        int16_t l_493 = 3L;
        uint8_t l_494 = 1UL;
        int64_t l_524 = 0x4643BF55B37A684EL;
        uint16_t l_525 = 0UL;
        int32_t l_526 = 1L;
        struct S0 l_528 = {4294967295UL,0xC1L,0x4BL,0x0C3677C1E483945CL,0x7B2A15BFL,4294967295UL,1L};/* VOLATILE GLOBAL l_528 */
        struct S0 *l_527 = &l_528;
        struct S0 *l_529 = &l_528;
        struct S0 *l_530 = &l_528;
        l_494 ^= l_493;
        for (l_493 = 3; (l_493 >= (-10)); l_493 = safe_sub_func_int8_t_s_s(l_493, 4))
        { /* block id: 279 */
            VECTOR(int32_t, 16) l_502 = (VECTOR(int32_t, 16))(0x7EE4F64CL, (VECTOR(int32_t, 4))(0x7EE4F64CL, (VECTOR(int32_t, 2))(0x7EE4F64CL, 0x160D7C3EL), 0x160D7C3EL), 0x160D7C3EL, 0x7EE4F64CL, 0x160D7C3EL, (VECTOR(int32_t, 2))(0x7EE4F64CL, 0x160D7C3EL), (VECTOR(int32_t, 2))(0x7EE4F64CL, 0x160D7C3EL), 0x7EE4F64CL, 0x160D7C3EL, 0x7EE4F64CL, 0x160D7C3EL);
            int8_t l_503[2];
            int i;
            for (i = 0; i < 2; i++)
                l_503[i] = 0x13L;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x012AC6A5L, 8L)).xyyxyyxy)).s0)
            { /* block id: 280 */
                struct S1 l_497 = {0x19A2BF86L,4L,1UL,7L,1UL,0xCE409672L,0x53CE85C71B1C4D0DL,0x91E8L,-1L};/* VOLATILE GLOBAL l_497 */
                struct S1 l_498 = {5L,5L,0xD0E40A53262E574FL,5L,0xD0E45537L,4294967289UL,0x1300B7B3ECE24EBCL,0xFFE8L,0x7F3FD912719EC834L};/* VOLATILE GLOBAL l_498 */
                l_498 = l_497;
            }
            else
            { /* block id: 282 */
                uint32_t l_499 = 0xF37E0AD1L;
                uint64_t l_500 = 0x80C889C06EF04191L;
                VECTOR(uint8_t, 4) l_501 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x22L), 0x22L);
                int i;
                l_501.w = ((VECTOR(int32_t, 8))((-1L), 0x73D78D0AL, 0x6977C4A8L, 0x2CF950E0L, (l_500 ^= l_499), 3L, 4L, 1L)).s7;
            }
            if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_502.sab)), (int32_t)0x3DC2B4A5L, (int32_t)l_503[1])))))).xxxyyyxxxyxxxxxx)).sb)
            { /* block id: 286 */
                uint32_t l_504 = 0UL;
                int32_t l_505 = 0x0792F286L;
                l_505 |= (l_504 = (l_502.s8 = 0x7BF3DC22L));
            }
            else
            { /* block id: 290 */
                int32_t l_506[6] = {0x7E70DBDBL,1L,0x7E70DBDBL,0x7E70DBDBL,1L,0x7E70DBDBL};
                uint32_t l_522 = 0x9C265D86L;
                int32_t *l_523 = &l_506[0];
                int i;
                for (l_506[0] = 2; (l_506[0] >= 27); l_506[0]++)
                { /* block id: 293 */
                    uint32_t l_509 = 0x2B1801CEL;
                    uint16_t l_512 = 0x4D37L;
                    uint32_t l_513 = 4294967294UL;
                    int32_t l_515[10] = {(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L)};
                    int32_t *l_514 = &l_515[9];
                    int32_t *l_516 = &l_515[1];
                    union U3 l_517 = {0UL};
                    int32_t *l_518[10][2] = {{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]},{&l_515[9],&l_515[9]}};
                    int32_t *l_519[7][8][4] = {{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}},{{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]},{&l_515[4],&l_515[9],&l_515[9],&l_515[1]}}};
                    int32_t *l_520 = &l_515[6];
                    int32_t *l_521 = &l_515[9];
                    int i, j, k;
                    ++l_509;
                    l_502.s7 = l_512;
                    l_516 = ((l_513 = 0x69E15E8EL) , l_514);
                    l_521 = (l_517 , (l_520 = (l_519[1][0][0] = l_518[9][0])));
                }
                l_502.s5 &= l_522;
                l_523 = l_523;
            }
        }
        l_525 |= l_524;
        l_530 = (l_529 = (((VECTOR(uint64_t, 2))(1UL, 0x63ABD10B5DFDEDDCL)).lo , (l_526 , l_527)));
        unsigned int result = 0;
        result += l_493;
        result += l_494;
        result += l_524;
        result += l_525;
        result += l_526;
        result += l_528.f0;
        result += l_528.f1;
        result += l_528.f2;
        result += l_528.f3;
        result += l_528.f4;
        result += l_528.f5;
        result += l_528.f6;
        atomic_add(&p_649->l_special_values[3], result);
    }
    else
    { /* block id: 309 */
        (1 + 1);
    }
    p_649->g_488.f0 = ((((p_649->g_80.s6 | ((VECTOR(int16_t, 4))(l_531.s2b1e)).y) < ((safe_sub_func_int64_t_s_s(p_18, (((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-8L), (safe_lshift_func_uint8_t_u_s((((++(*l_537)) == (p_649->g_84 |= ((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_547 != l_547), 0)), (~p_649->g_212[5][9][1].f4))), ((VECTOR(int8_t, 8))(0x68L, 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_548.s66110740)))).s10)), 0x55L, 0x59L, 0x5EL, 0x1AL)).s6)) || ((safe_mul_func_int8_t_s_s((0xF367189DL | ((*l_552) = ((*l_551) |= GROUP_DIVERGE(1, 1)))), ((-1L) || (((*p_649->g_465) , (p_649->g_463.z ^ 0xCCFA7F32L)) & p_19)))) || FAKE_DIVERGE(p_649->local_2_offset, get_local_id(2), 10))))) <= p_19), p_649->g_42.f4)), ((VECTOR(int16_t, 2))(0x6B5CL)), 0x08BDL, 0x0C24L, 0x24ACL, 1L)), ((VECTOR(int16_t, 4))(0x58F8L)), ((VECTOR(int16_t, 4))((-1L))))).s2 & l_531.s8) <= l_536[0]) , p_19))) ^ l_531.se)) ^ p_18) | p_19);
    for (p_649->g_210.f2 = 0; (p_649->g_210.f2 < 29); p_649->g_210.f2 = safe_add_func_uint8_t_u_u(p_649->g_210.f2, 8))
    { /* block id: 319 */
        struct S1 *l_564[5] = {&p_649->g_457,&p_649->g_457,&p_649->g_457,&p_649->g_457,&p_649->g_457};
        VECTOR(int32_t, 4) l_567 = (VECTOR(int32_t, 4))(0x1E6F3824L, (VECTOR(int32_t, 2))(0x1E6F3824L, 0x487F0EE8L), 0x487F0EE8L);
        uint16_t *l_576[2];
        int8_t *l_577[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_578 = &l_555[0][1];
        int i;
        for (i = 0; i < 2; i++)
            l_576[i] = &p_649->g_538;
        p_649->g_459.sa ^= (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((((((((VECTOR(int8_t, 2))(0x11L, 5L)).hi , ((*l_551) = ((l_564[4] != &p_649->g_42) , (p_649->g_457.f8 == ((((+(+((((safe_rshift_func_uint8_t_u_s(1UL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x6AL, 0x26L)))).xyxy)).y)) && l_567.z) , &p_649->g_217[1][5]) != &p_649->g_217[1][5]))) , (func_49((safe_mul_func_int8_t_s_s((p_649->g_80.s5 = (((safe_add_func_uint64_t_u_u(p_649->g_213, ((!(((VECTOR(uint64_t, 8))(l_572.xxyxxxxy)).s5 > (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_649->group_0_offset, get_group_id(0), 10), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(0UL, 7UL)).xxxxyyxyxxxxyyxx, ((VECTOR(uint8_t, 16))(l_575.s0012637113525712))))).s0)))) ^ (l_576[1] != (void*)0)))) , &l_555[1][1]) == (void*)0)), p_18)), l_578, p_19, p_649->g_579, p_649) , 0x13L)) , p_19) , 1L))))) < p_18) , 8L) >= p_649->g_488.f6) , p_649->g_580) , 2L) < p_649->g_488.f5), 0xE679L)), p_19)), 0UL)) | (-1L)) || 0L);
    }
    for (p_649->g_90 = 0; (p_649->g_90 <= 35); p_649->g_90 = safe_add_func_int64_t_s_s(p_649->g_90, 5))
    { /* block id: 326 */
        uint8_t l_595 = 255UL;
        VECTOR(uint64_t, 16) l_597 = (VECTOR(uint64_t, 16))(0xD4B3D3041CE2E20CL, (VECTOR(uint64_t, 4))(0xD4B3D3041CE2E20CL, (VECTOR(uint64_t, 2))(0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L), 0x00363AA82AA52168L), 0x00363AA82AA52168L, 0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L, (VECTOR(uint64_t, 2))(0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L), (VECTOR(uint64_t, 2))(0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L), 0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L, 0xD4B3D3041CE2E20CL, 0x00363AA82AA52168L);
        int i;
        for (p_649->g_42.f8 = (-11); (p_649->g_42.f8 == (-28)); p_649->g_42.f8--)
        { /* block id: 329 */
            uint64_t *l_596 = &p_649->g_457.f2;
            struct S1 *l_602[3];
            int i;
            for (i = 0; i < 3; i++)
                l_602[i] = (void*)0;
            p_649->g_73.f0.f0 = (p_649->g_457.f8 && (p_649->g_73 , (+((VECTOR(int16_t, 16))((-9L), (-9L), 0x66B4L, (safe_add_func_int8_t_s_s((+((p_649->g_538 = 65535UL) && (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((*l_596) = ((safe_lshift_func_int16_t_s_s((-10L), 9)) && (safe_mul_func_uint16_t_u_u(p_18, l_595)))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(0xC1DA48DE59715136L, 0UL)), ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 4))(l_597.s57d0)), ((VECTOR(uint64_t, 2))(p_649->g_598.yw)), 18446744073709551615UL)).s02)).yyxyyyxyyxxxxyyx)).odd)).odd)), ((VECTOR(uint64_t, 16))(p_649->g_599.s8df90b030cbe0295)).s5ee0))).wwwzzywwyzwxxwwx, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 16))(((func_49(l_597.s6, &l_555[0][0], p_19, l_597.sf, p_649) , p_649->g_73.f0.f2) ^ GROUP_DIVERGE(1, 1)), 0x8238506318CAB3DDL, 8UL, ((VECTOR(uint64_t, 2))(18446744073709551608UL)), p_19, 0UL, 0UL, 18446744073709551606UL, ((VECTOR(uint64_t, 4))(0xC6CF1D3208A384D3L)), 0x7369931CB35D7266L, 2UL, 18446744073709551615UL)).sd2d2, ((VECTOR(uint64_t, 4))(0xA18603FB5F1F1B40L))))).wxxzywzzzzyxxyzy, ((VECTOR(uint64_t, 16))(0xBCDE67ADC0F027C3L))))).s75))), ((VECTOR(uint64_t, 2))(18446744073709551609UL))))))).yyyyyyyy)), GROUP_DIVERGE(2, 1), FAKE_DIVERGE(p_649->global_0_offset, get_global_id(0), 10), 0x8F276E0FB02198AEL, ((VECTOR(uint64_t, 4))(18446744073709551613UL)), 18446744073709551615UL)).s2)), 0x4CEC369AE9998DF7L)))), 254UL)), 0L, 0L, 0L, ((VECTOR(int16_t, 8))(1L)), 6L)).s4)));
            (*p_649->g_601) = l_600[5];
            p_649->g_603[4][3][3] = p_649->g_42;
        }
        for (p_649->g_580.f4 = 0; (p_649->g_580.f4 < 16); p_649->g_580.f4++)
        { /* block id: 338 */
            (*p_649->g_606) = &l_536[3];
        }
    }
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_73.f0.f3 p_649->g_42.f4 p_649->g_91 p_649->g_212.f2 p_649->g_85 p_649->g_73.f0.f1 p_649->g_42.f8 p_649->g_210.f3 p_649->g_457 p_649->g_459 p_649->g_463 p_649->g_464 p_649->g_73.f0.f6 p_649->g_42.f3 p_649->g_210.f0 p_649->g_210.f6 p_649->g_488
 * writes: p_649->g_85 p_649->g_212.f2 p_649->g_457 p_649->g_91 p_649->g_42.f3 p_649->g_459 p_649->g_73.f0
 */
int32_t  func_20(int64_t  p_21, uint32_t  p_22, int32_t  p_23, uint32_t  p_24, uint8_t  p_25, struct S4 * p_649)
{ /* block id: 106 */
    int8_t l_451[3][10][8] = {{{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L}},{{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L}},{{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L},{0x57L,7L,0x7FL,0x71L,(-1L),(-1L),7L,0x59L}}};
    uint64_t l_454 = 0UL;
    uint64_t *l_455 = &p_649->g_85;
    uint8_t *l_456 = &p_649->g_212[5][9][1].f2;
    VECTOR(int16_t, 4) l_461 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x30D4L), 0x30D4L);
    int32_t l_467 = 1L;
    int32_t l_472[6][9][4] = {{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}},{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}},{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}},{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}},{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}},{{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L},{7L,0L,0x0B91005AL,7L}}};
    uint64_t l_475 = 2UL;
    int i, j, k;
    if ((atomic_inc(&p_649->l_atomic_input[63]) == 9))
    { /* block id: 108 */
        uint16_t l_218 = 0x0A54L;
        int8_t l_219 = 0x46L;
        VECTOR(int32_t, 8) l_309 = (VECTOR(int32_t, 8))(0x6E385824L, (VECTOR(int32_t, 4))(0x6E385824L, (VECTOR(int32_t, 2))(0x6E385824L, 3L), 3L), 3L, 0x6E385824L, 3L);
        VECTOR(int32_t, 2) l_310 = (VECTOR(int32_t, 2))(0x1829DB34L, (-1L));
        int8_t l_311 = 0x4DL;
        int16_t l_312 = 0x1371L;
        VECTOR(uint32_t, 2) l_313 = (VECTOR(uint32_t, 2))(0xE179C9CCL, 4294967294UL);
        VECTOR(uint32_t, 4) l_314 = (VECTOR(uint32_t, 4))(0xC3FC8887L, (VECTOR(uint32_t, 2))(0xC3FC8887L, 2UL), 2UL);
        int8_t l_315 = (-6L);
        uint8_t l_316 = 0x27L;
        int32_t l_317 = 0x565D500FL;
        int i;
        if ((l_218 , l_219))
        { /* block id: 109 */
            int32_t l_220[10][9][2] = {{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}},{{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L},{0x1162A7C4L,0x1162A7C4L}}};
            int16_t l_258 = 0x5FD4L;
            int32_t l_259 = 0x783F742DL;
            uint32_t l_260 = 6UL;
            int i, j, k;
            for (l_220[9][7][1] = 0; (l_220[9][7][1] > 21); l_220[9][7][1]++)
            { /* block id: 112 */
                VECTOR(int32_t, 16) l_223 = (VECTOR(int32_t, 16))(0x7304A5D0L, (VECTOR(int32_t, 4))(0x7304A5D0L, (VECTOR(int32_t, 2))(0x7304A5D0L, 1L), 1L), 1L, 0x7304A5D0L, 1L, (VECTOR(int32_t, 2))(0x7304A5D0L, 1L), (VECTOR(int32_t, 2))(0x7304A5D0L, 1L), 0x7304A5D0L, 1L, 0x7304A5D0L, 1L);
                int32_t l_224[6][8] = {{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L},{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L},{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L},{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L},{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L},{0x5FA5C55AL,0x5FA5C55AL,0x3EB43ED5L,1L,1L,0L,0x78029EA5L,0x7D4B7D85L}};
                int32_t *l_225 = &l_224[1][1];
                int32_t *l_226 = &l_224[5][2];
                uint32_t l_227 = 1UL;
                uint8_t l_255 = 0xF4L;
                int64_t l_256 = (-1L);
                int64_t l_257 = 0x59F5E88BC74710C5L;
                int i, j;
                l_224[1][6] &= ((VECTOR(int32_t, 16))(l_223.sa590bd286198f1b2)).sd;
                l_226 = l_225;
                if (l_227)
                { /* block id: 115 */
                    uint64_t l_228 = 1UL;
                    int32_t *l_248 = (void*)0;
                    if (l_228)
                    { /* block id: 116 */
                        int32_t l_229 = (-1L);
                        uint32_t l_230 = 0UL;
                        union U3 l_231 = {0xD5FA84D3B9400A60L};
                        uint64_t l_232 = 0x074DAA309246CAE3L;
                        int32_t l_233[10][1] = {{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}};
                        struct S1 l_234 = {0x3E3FD7ABL,0x3B5579D3L,18446744073709551610UL,-1L,0xC8738472L,0UL,2L,1UL,0x431B24D9D22A20EBL};/* VOLATILE GLOBAL l_234 */
                        uint16_t l_235[1];
                        uint64_t l_236 = 4UL;
                        int32_t *l_237 = &l_229;
                        VECTOR(int32_t, 8) l_238 = (VECTOR(int32_t, 8))(0x1AA2DC8AL, (VECTOR(int32_t, 4))(0x1AA2DC8AL, (VECTOR(int32_t, 2))(0x1AA2DC8AL, 0L), 0L), 0L, 0x1AA2DC8AL, 0L);
                        int32_t l_239 = (-1L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_235[i] = 0x2853L;
                        l_226 = (l_229 , (l_230 , (l_237 = (l_225 = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x38L, (l_231 , l_232), (l_233[5][0] , (l_234 , l_235[0])), 0x34L, l_236, 0x27L, 0x7BL, (-1L))).s56)).even , (void*)0)))));
                        l_239 = ((VECTOR(int32_t, 4))(l_238.s2403)).z;
                    }
                    else
                    { /* block id: 121 */
                        uint8_t l_240 = 0x68L;
                        uint16_t l_241[2];
                        uint8_t l_242 = 0x61L;
                        int32_t *l_243 = (void*)0;
                        uint16_t l_244 = 0UL;
                        int16_t l_247 = 0x6D3FL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_241[i] = 65530UL;
                        l_242 |= ((l_218 = l_240) , l_241[1]);
                        l_225 = l_243;
                        l_244++;
                        (*l_226) ^= l_247;
                    }
                    l_224[1][6] ^= 7L;
                    l_225 = (l_226 = l_248);
                    for (l_228 = 0; (l_228 == 55); l_228 = safe_add_func_uint32_t_u_u(l_228, 1))
                    { /* block id: 133 */
                        struct S0 l_251 = {1UL,5UL,0x9CL,0xD38C6CD710A78536L,0x57B7ADCCL,6UL,0x242D7324796A68E7L};/* VOLATILE GLOBAL l_251 */
                        struct S0 l_252 = {4294967295UL,0x80L,1UL,0x0BC9B0F47F983E75L,0x0BA3940CL,4294967286UL,4L};/* VOLATILE GLOBAL l_252 */
                        l_252 = l_251;
                    }
                }
                else
                { /* block id: 136 */
                    int32_t l_254 = 0x16D39890L;
                    int32_t *l_253 = &l_254;
                    l_253 = l_253;
                }
                l_257 |= (l_256 ^= l_255);
            }
            ++l_260;
        }
        else
        { /* block id: 143 */
            int32_t l_263 = 0L;
            VECTOR(int32_t, 2) l_302 = (VECTOR(int32_t, 2))((-1L), 1L);
            int32_t l_303 = 0x0D0315C2L;
            VECTOR(int32_t, 2) l_304 = (VECTOR(int32_t, 2))(0x254B1F41L, 0x5A6E032BL);
            int8_t l_305 = 1L;
            VECTOR(int16_t, 4) l_306 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x54B0L), 0x54B0L);
            int16_t l_307 = 0x5CDBL;
            uint32_t l_308 = 0UL;
            int i;
            for (l_263 = 0; (l_263 > 10); ++l_263)
            { /* block id: 146 */
                int32_t l_266 = 0x732F1D00L;
                uint32_t l_299 = 4294967295UL;
                for (l_266 = 0; (l_266 >= 4); l_266 = safe_add_func_int32_t_s_s(l_266, 8))
                { /* block id: 149 */
                    int32_t l_269 = (-9L);
                    uint32_t l_276 = 0x0BBA0361L;
                    int16_t l_277[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                    VECTOR(uint64_t, 2) l_278 = (VECTOR(uint64_t, 2))(0x51B116B153C2F0F6L, 3UL);
                    int8_t l_279 = 0L;
                    uint32_t l_280 = 4294967295UL;
                    VECTOR(uint64_t, 16) l_281 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x25628F38741EED29L), 0x25628F38741EED29L), 0x25628F38741EED29L, 18446744073709551609UL, 0x25628F38741EED29L, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x25628F38741EED29L), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x25628F38741EED29L), 18446744073709551609UL, 0x25628F38741EED29L, 18446744073709551609UL, 0x25628F38741EED29L);
                    VECTOR(uint64_t, 16) l_282 = (VECTOR(uint64_t, 16))(0x5C84DC259E94AA81L, (VECTOR(uint64_t, 4))(0x5C84DC259E94AA81L, (VECTOR(uint64_t, 2))(0x5C84DC259E94AA81L, 0UL), 0UL), 0UL, 0x5C84DC259E94AA81L, 0UL, (VECTOR(uint64_t, 2))(0x5C84DC259E94AA81L, 0UL), (VECTOR(uint64_t, 2))(0x5C84DC259E94AA81L, 0UL), 0x5C84DC259E94AA81L, 0UL, 0x5C84DC259E94AA81L, 0UL);
                    uint64_t l_283 = 8UL;
                    VECTOR(uint32_t, 4) l_284 = (VECTOR(uint32_t, 4))(0xA94A4F0EL, (VECTOR(uint32_t, 2))(0xA94A4F0EL, 0x878A801EL), 0x878A801EL);
                    VECTOR(uint64_t, 2) l_285 = (VECTOR(uint64_t, 2))(1UL, 0xEF1ECBDFCB6BE4E0L);
                    uint8_t l_286 = 0xD8L;
                    VECTOR(int64_t, 8) l_287 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x04A4188C3755411AL), 0x04A4188C3755411AL), 0x04A4188C3755411AL, 1L, 0x04A4188C3755411AL);
                    int64_t l_288 = 0x6BD6CA1A1E9AED67L;
                    int16_t l_289 = 0x2F43L;
                    VECTOR(uint64_t, 2) l_290 = (VECTOR(uint64_t, 2))(1UL, 0UL);
                    VECTOR(uint64_t, 4) l_291 = (VECTOR(uint64_t, 4))(0x9E84E6DCCE724BCAL, (VECTOR(uint64_t, 2))(0x9E84E6DCCE724BCAL, 0UL), 0UL);
                    uint64_t l_292 = 1UL;
                    uint64_t l_293 = 1UL;
                    int8_t l_294[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_294[i] = 0L;
                    for (l_269 = (-11); (l_269 == (-1)); l_269 = safe_add_func_uint8_t_u_u(l_269, 1))
                    { /* block id: 152 */
                        VECTOR(int64_t, 2) l_272 = (VECTOR(int64_t, 2))(0x460C0C00E2A946E7L, 8L);
                        struct S1 l_273[4] = {{0x776C2285L,0x077A6F6CL,0x73DC26DD470F29F9L,-10L,4294967295UL,0xF41BC76CL,0x18BF8B18059FE580L,1UL,0L},{0x776C2285L,0x077A6F6CL,0x73DC26DD470F29F9L,-10L,4294967295UL,0xF41BC76CL,0x18BF8B18059FE580L,1UL,0L},{0x776C2285L,0x077A6F6CL,0x73DC26DD470F29F9L,-10L,4294967295UL,0xF41BC76CL,0x18BF8B18059FE580L,1UL,0L},{0x776C2285L,0x077A6F6CL,0x73DC26DD470F29F9L,-10L,4294967295UL,0xF41BC76CL,0x18BF8B18059FE580L,1UL,0L}};
                        struct S1 l_274 = {0x1FDE669CL,0x33D95331L,18446744073709551612UL,0L,0x752A0BBEL,0xDE78D617L,0L,0x4552L,-8L};/* VOLATILE GLOBAL l_274 */
                        int16_t l_275 = 0x63E0L;
                        int i;
                        l_274 = (((VECTOR(int64_t, 16))(l_272.yxyxyxyyxxyxyxxx)).s4 , l_273[0]);
                        l_275 |= (-3L);
                    }
                    l_277[0] = l_276;
                    l_294[0] ^= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_278.yyyyyxxy)), l_279, 18446744073709551610UL, 1UL, 0x6CB67E40BD1DE4C3L, ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(0xA629844047B913B0L, 0x92FE9CAD12B6D85FL)).xxyxxyyx, ((VECTOR(uint64_t, 16))((l_278.x = l_280), 0x04A2A2AF9B539028L, 0UL, 0x93FC86E067EDE7A5L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_281.s48)), 1UL, 0UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(0xA69316ED79273565L, 0xCF85484A3F1D0265L)).yyxxxxxx, ((VECTOR(uint64_t, 4))(l_282.s59e9)).wwzxyzxx, ((VECTOR(uint64_t, 8))((l_283 , l_284.w), ((VECTOR(uint64_t, 2))(7UL, 1UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(0x875343D1233714A2L, 0UL, 0UL, 4UL)))), 18446744073709551606UL))))).s40, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x9AACC893185EA165L, 0xEDAE71FCBE8DE9C3L)), 5UL, 0xCDDFC5413F15AACCL)).xwzxwzyw, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x8703EC1212F90AC3L)).yxyyyyyx))).lo)).even)).yxyx)).odd, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(l_285.xyyx)), ((VECTOR(uint64_t, 2))(7UL, 0x04D68C539D9E66D1L)).yxyy))).even))))).hi, 18446744073709551610UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)).yyxyyyxy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((-5L), l_286, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((-9L), 0x3F463C681DB7756AL, 8L, (-7L))).xwyxyzywxwwyzyww)).s00, ((VECTOR(int64_t, 16))(l_287.s4607476657335620)).s5b))), ((VECTOR(int64_t, 2))(0x565B0B300B62B6FBL, (-2L))).hi, (l_288 , (l_289 ^= 0L)), 3L, 0x240FF83EBA1BA3C8L)))).s1737247736352706))).sf4b8, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_290.yxxyxyxyyxyxyyxx)))).s34dc)).zxzyyyzz, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_291.xx)))).yyxxyyxx))).hi))).odd, ((VECTOR(uint64_t, 4))(9UL, l_292, 0x7287F9EC9A96BA77L, 18446744073709551615UL)).lo))), 0x4C09CA098B23FD4FL, l_293, ((VECTOR(uint64_t, 4))(8UL))))))))).s1725756256060635, ((VECTOR(uint64_t, 16))(0x0D96EB05B6C17438L))))).hi)).even)), 0UL, 6UL)).lo, ((VECTOR(uint64_t, 8))(0x10A75933EB76F203L))))).s4, FAKE_DIVERGE(p_649->global_2_offset, get_global_id(2), 10), 18446744073709551606UL, 3UL)).s1fa7)))).z , 8L);
                    for (l_286 = 0; (l_286 != 34); ++l_286)
                    { /* block id: 162 */
                        struct S1 l_297 = {2L,6L,1UL,0x6EE85441L,0UL,0x36F0ECDBL,-9L,0xA43EL,1L};/* VOLATILE GLOBAL l_297 */
                        struct S1 l_298 = {-8L,-10L,18446744073709551615UL,0x6E860C42L,4294967295UL,0xBEA12715L,-1L,0UL,1L};/* VOLATILE GLOBAL l_298 */
                        l_298 = l_297;
                    }
                }
                --l_299;
            }
            l_308 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_302.xyyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_303 , (-4L)), ((VECTOR(int32_t, 4))(l_304.xxyy)), ((VECTOR(int32_t, 2))((-6L), (-1L))), 9L)).s1752103463347572)).s32)), ((VECTOR(int32_t, 4))(l_305, 0x4A7C3205L, 0x5BA4E57BL, (-9L))), (l_307 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(0x594A0836L, (-1L))).yyxxyyxx, (int32_t)l_306.w, (int32_t)3L))).hi)).y), ((VECTOR(int32_t, 2))(0x59974B57L, (-1L))).even, ((VECTOR(int32_t, 2))(0x11514C04L, 0x49F11B40L)), 1L, 0x51213D1EL)).sc;
        }
        if ((l_317 = ((l_312 = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_309.s1535)))).zwyzxyzy)).s0371077400603445)).sa4af, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_310.xyyy)))), 0x2282EDF9L, (l_311 , (-1L)), 0x698B661AL, 0x16F03CEEL)).even))).ywywywxw)).s4) , (l_316 = (((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967295UL)).yyyy)), ((VECTOR(uint32_t, 2))(l_313.yx)).yyyy))).xzyyzxxwzxwwxwww, ((VECTOR(uint32_t, 4))(0x545B3E25L, (l_315 &= ((VECTOR(uint32_t, 4))(l_314.zyzx)).x), 1UL, 4UL)).xyxzwyyzxyxwxyxw))).sf , 0x71866DFAL)))))
        { /* block id: 175 */
            int32_t l_318[6];
            struct S0 l_414 = {0x66A0F222L,0xDAL,0x8EL,1UL,0x37BC3E05L,0xC240C986L,0x09F07253B93B8C77L};/* VOLATILE GLOBAL l_414 */
            struct S0 l_415 = {0x53BBA955L,250UL,9UL,0x56C9A58368AC0D09L,0x653DDB78L,0x1B461BF9L,0x13E332836FBD1741L};/* VOLATILE GLOBAL l_415 */
            int64_t l_416 = 0x38674DA118CC538DL;
            int i;
            for (i = 0; i < 6; i++)
                l_318[i] = 9L;
            for (l_318[0] = 0; (l_318[0] == 15); l_318[0]++)
            { /* block id: 178 */
                uint64_t l_321 = 18446744073709551613UL;
                if (l_321)
                { /* block id: 179 */
                    int32_t l_322[1];
                    uint32_t l_326[7][7] = {{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL},{0x8812CF31L,0x0069618FL,0x0069618FL,0x8812CF31L,0x8812CF31L,0x0069618FL,0x0069618FL}};
                    int32_t l_329 = 0x3F854D8CL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_322[i] = 0x4E3D2607L;
                    for (l_322[0] = 0; (l_322[0] == 14); l_322[0] = safe_add_func_int64_t_s_s(l_322[0], 3))
                    { /* block id: 182 */
                        int8_t l_325 = 0x78L;
                        l_317 &= l_325;
                    }
                    l_326[5][0]--;
                    if (l_329)
                    { /* block id: 186 */
                        union U3 l_331[9][3][5] = {{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}},{{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}},{{0xDFC59D793312371CL},{0x501F7BDC5F02047EL},{0xB1A2F894A0138B08L},{0xC4EECA38126FFD2FL},{0x63173AEEC9DEA173L}}}};
                        union U3 *l_330 = &l_331[3][2][0];
                        union U3 *l_332 = &l_331[3][2][0];
                        union U3 *l_333 = &l_331[3][2][0];
                        union U3 *l_334[2];
                        int64_t l_335 = (-1L);
                        int32_t l_337 = 0x474DEC47L;
                        int32_t *l_336[9] = {&l_337,&l_337,&l_337,&l_337,&l_337,&l_337,&l_337,&l_337,&l_337};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_334[i] = &l_331[3][2][0];
                        l_322[0] ^= 9L;
                        l_334[0] = (l_333 = (l_332 = l_330));
                        l_322[0] ^= l_335;
                        l_336[1] = (void*)0;
                    }
                    else
                    { /* block id: 193 */
                        int16_t l_338 = 0x2264L;
                        int16_t l_339[7][9][4] = {{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}},{{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L},{3L,0x26ACL,0x26ACL,3L}}};
                        VECTOR(int64_t, 8) l_340 = (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, (-4L)), (-4L)), (-4L), 7L, (-4L));
                        uint32_t l_341 = 0xC898E814L;
                        VECTOR(int32_t, 4) l_342 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L));
                        VECTOR(int32_t, 16) l_343 = (VECTOR(int32_t, 16))(0x4AB10429L, (VECTOR(int32_t, 4))(0x4AB10429L, (VECTOR(int32_t, 2))(0x4AB10429L, 0L), 0L), 0L, 0x4AB10429L, 0L, (VECTOR(int32_t, 2))(0x4AB10429L, 0L), (VECTOR(int32_t, 2))(0x4AB10429L, 0L), 0x4AB10429L, 0L, 0x4AB10429L, 0L);
                        int32_t l_344 = 1L;
                        int32_t l_345 = 0x64C98884L;
                        VECTOR(int8_t, 8) l_346 = (VECTOR(int8_t, 8))(0x39L, (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, 0x29L), 0x29L), 0x29L, 0x39L, 0x29L);
                        uint8_t l_347 = 0x33L;
                        uint32_t l_350 = 0xD1830DB0L;
                        VECTOR(uint32_t, 16) l_351 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x2E8CEB5EL), 0x2E8CEB5EL), 0x2E8CEB5EL, 8UL, 0x2E8CEB5EL, (VECTOR(uint32_t, 2))(8UL, 0x2E8CEB5EL), (VECTOR(uint32_t, 2))(8UL, 0x2E8CEB5EL), 8UL, 0x2E8CEB5EL, 8UL, 0x2E8CEB5EL);
                        VECTOR(uint8_t, 4) l_352 = (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 9UL), 9UL);
                        uint64_t l_353 = 18446744073709551611UL;
                        uint64_t l_354[1];
                        int16_t l_355 = 0x6011L;
                        struct S0 l_356 = {4294967293UL,0x3FL,0x5AL,18446744073709551615UL,0x5E832423L,4294967286UL,1L};/* VOLATILE GLOBAL l_356 */
                        union U3 l_357 = {5UL};
                        int32_t l_358 = 0x311EB4D9L;
                        int32_t l_359[1][2][4] = {{{0x4AF2D04DL,0x4AF2D04DL,0x4AF2D04DL,0x4AF2D04DL},{0x4AF2D04DL,0x4AF2D04DL,0x4AF2D04DL,0x4AF2D04DL}}};
                        int32_t l_360[5][5] = {{0x70950F3FL,(-4L),(-4L),0x70950F3FL,0x70950F3FL},{0x70950F3FL,(-4L),(-4L),0x70950F3FL,0x70950F3FL},{0x70950F3FL,(-4L),(-4L),0x70950F3FL,0x70950F3FL},{0x70950F3FL,(-4L),(-4L),0x70950F3FL,0x70950F3FL},{0x70950F3FL,(-4L),(-4L),0x70950F3FL,0x70950F3FL}};
                        uint32_t l_361[7][2][3];
                        uint32_t l_364 = 7UL;
                        int64_t l_365 = 0x5031299FD8B84C80L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_354[i] = 18446744073709551608UL;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_361[i][j][k] = 4294967295UL;
                            }
                        }
                        l_322[0] ^= ((((l_338 , ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((FAKE_DIVERGE(p_649->group_1_offset, get_group_id(1), 10) , l_339[2][0][0]), ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_340.s0433)), ((VECTOR(int64_t, 4))((-5L), (l_341 &= 0x6DC593E33728CE20L), (-1L), 0x442B08DBDC7C9CCFL)), ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(0x1FFC8FB8L, 0L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_342.wyxx)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_343.s25237769c58ad98e)))))).sb3))).xyyyyxyxxxxxxyxx)).s6f))).xyxyxyyxyyyxyxxy, (int32_t)(l_310.x |= l_344)))).s8d39, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xF5DAF9A1L, 0x5AD44C66L, (--l_347), 4294967295UL, l_350, 1UL, 0UL, 7UL)).s00)).yyxxxxyy, ((VECTOR(uint32_t, 4))(l_351.s5586)).zyzyzyxy))).lo))), ((((VECTOR(uint8_t, 2))(l_352.yz)).even , l_353) , 0x659B9ED660DD4A89L), l_354[0], 0L, (-1L))).s3497)), ((VECTOR(int64_t, 4))((-1L)))))), 9L, (-1L), 0x46DED32739B2E012L)).s74)), ((VECTOR(int64_t, 2))(1L))))), 6L, 0x2769CC52C69E44E8L)).x , l_355) , l_356)) , FAKE_DIVERGE(p_649->local_2_offset, get_local_id(2), 10)) , l_357) , (-1L));
                        l_361[1][0][0]--;
                        l_365 = l_364;
                    }
                }
                else
                { /* block id: 201 */
                    int32_t l_366 = (-1L);
                    struct S0 l_412 = {0x6BB93AB7L,0x1CL,1UL,0xD15EA2A3D9A6E67EL,-2L,4294967287UL,0x42E187876C288B1AL};/* VOLATILE GLOBAL l_412 */
                    struct S0 l_413[5][9] = {{{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL}},{{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL}},{{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL}},{{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL}},{{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL},{0x243C440EL,0x2CL,251UL,0xC43E47A9B4B67477L,2L,4UL,-4L},{4294967289UL,8UL,0x42L,18446744073709551610UL,-1L,0x918475E1L,0x57FD3A707D977C8FL}}};
                    int i, j;
                    if (l_366)
                    { /* block id: 202 */
                        struct S1 l_367 = {0x2D9BC32FL,0L,0UL,0x55D69451L,1UL,0x59DC26F4L,0x1A66444A98F36110L,0UL,0x48422AB5D27EC538L};/* VOLATILE GLOBAL l_367 */
                        struct S1 l_368 = {0x612CF42EL,0x0F7C5490L,0x310D540DF4E50EC0L,0x4C412ACFL,0x27723C1EL,4294967295UL,0x25543857577B8644L,65535UL,0L};/* VOLATILE GLOBAL l_368 */
                        l_368 = l_367;
                    }
                    else
                    { /* block id: 204 */
                        int32_t l_369 = 0L;
                        int16_t l_370 = 0x0C25L;
                        uint8_t l_371[6] = {0xBFL,2UL,0xBFL,0xBFL,2UL,0xBFL};
                        uint32_t l_374 = 0x3599A88AL;
                        int32_t l_375 = 1L;
                        int i;
                        l_371[5]--;
                        l_375 |= l_374;
                    }
                    for (l_366 = 0; (l_366 == (-27)); --l_366)
                    { /* block id: 210 */
                        uint64_t l_378 = 0x036C46F4F2461429L;
                        int16_t l_381 = 0x7576L;
                        VECTOR(int32_t, 4) l_382 = (VECTOR(int32_t, 4))(0x143931D5L, (VECTOR(int32_t, 2))(0x143931D5L, 0x555D8CE4L), 0x555D8CE4L);
                        VECTOR(int8_t, 16) l_383 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6CL), 0x6CL), 0x6CL, (-1L), 0x6CL, (VECTOR(int8_t, 2))((-1L), 0x6CL), (VECTOR(int8_t, 2))((-1L), 0x6CL), (-1L), 0x6CL, (-1L), 0x6CL);
                        VECTOR(int8_t, 8) l_384 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
                        VECTOR(int8_t, 2) l_385 = (VECTOR(int8_t, 2))(0x0FL, (-1L));
                        VECTOR(int8_t, 4) l_386 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x64L), 0x64L);
                        int8_t l_387 = 0x5FL;
                        VECTOR(int8_t, 8) l_388 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x62L), 0x62L), 0x62L, (-1L), 0x62L);
                        uint16_t l_389 = 0UL;
                        VECTOR(int8_t, 2) l_390 = (VECTOR(int8_t, 2))((-8L), 0x44L);
                        VECTOR(int8_t, 16) l_391 = (VECTOR(int8_t, 16))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 7L), 7L), 7L, 0x70L, 7L, (VECTOR(int8_t, 2))(0x70L, 7L), (VECTOR(int8_t, 2))(0x70L, 7L), 0x70L, 7L, 0x70L, 7L);
                        VECTOR(int8_t, 8) l_392 = (VECTOR(int8_t, 8))(0x6FL, (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 0L), 0L), 0L, 0x6FL, 0L);
                        uint32_t l_393 = 0xB1418248L;
                        struct S1 l_394[8] = {{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L},{-8L,-10L,0UL,9L,4294967291UL,0x54248429L,0x5A5509EA1D85B1CAL,65535UL,1L}};
                        struct S1 l_395 = {0x3B8E9408L,0x4DAEF8ACL,0UL,0x6C1AC0F8L,0xBC5A8643L,0UL,0x4D14509953AC5B45L,65529UL,0x0EECB4645ADCE261L};/* VOLATILE GLOBAL l_395 */
                        int i;
                        l_378--;
                        l_395 = (((l_317 = l_381) , (((VECTOR(int32_t, 16))(l_382.wzxwyyxxxyxwzyzz)).s0 , ((VECTOR(int8_t, 16))(0x01L, ((VECTOR(int8_t, 2))(l_383.s78)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_384.s3017055045032254)).even, ((VECTOR(int8_t, 8))(l_385.xyyyxxyx))))).s72)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(1L, 8L, 1L, ((VECTOR(int8_t, 4))(l_386.zwxx)), 0x35L)).s6, l_387, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(l_388.s26030673)), ((VECTOR(int8_t, 4))(0x6AL, 0x4AL, 0x18L, (-7L))).zyxzwwzw))), l_389, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_390.yyxxxyxyxxxxxyyx)).s7930)), (-1L))).s12, ((VECTOR(int8_t, 4))(l_391.sdfe4)).hi, ((VECTOR(int8_t, 2))((-3L), (-1L)))))), 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_392.s7624455152361726)).sfa)), (l_315 = l_393), ((VECTOR(int8_t, 4))(0x5BL, (-1L), (-4L), 1L)), 1L, 1L)).s8)) , l_394[1]);
                    }
                    for (l_366 = (-8); (l_366 != 4); l_366++)
                    { /* block id: 218 */
                        int8_t l_398 = 9L;
                        uint32_t l_399 = 4294967295UL;
                        struct S0 l_402 = {0x027A2F01L,1UL,1UL,0x3F3046D1B9015A14L,8L,4294967286UL,-8L};/* VOLATILE GLOBAL l_402 */
                        int8_t l_403 = 9L;
                        int32_t l_404 = 0x52B7156BL;
                        struct S1 l_405 = {-9L,0x0B08106DL,0xB5DFC049E6E4D090L,-9L,0x8745C04FL,0UL,0x7CA6B39A7DE60322L,0xB47DL,-10L};/* VOLATILE GLOBAL l_405 */
                        union U2 l_406 = {{-6L,1L,7UL,-1L,0x5679088AL,0x7112BCF2L,0x6B38197485CFDEFEL,0x2C87L,-1L}};/* VOLATILE GLOBAL l_406 */
                        VECTOR(int32_t, 8) l_407 = (VECTOR(int32_t, 8))(0x29A8898DL, (VECTOR(int32_t, 4))(0x29A8898DL, (VECTOR(int32_t, 2))(0x29A8898DL, (-10L)), (-10L)), (-10L), 0x29A8898DL, (-10L));
                        int32_t l_408 = 1L;
                        int16_t l_409 = 0x0889L;
                        int32_t *l_410 = (void*)0;
                        int32_t *l_411[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_399++;
                        l_407.s6 = ((l_402 , (((l_403 , l_404) , (l_405 , 0xEAL)) , l_406)) , ((VECTOR(int32_t, 16))(l_407.s5226753451511072)).sc);
                        l_317 &= (l_408 = 0L);
                        l_411[2] = (l_409 , l_410);
                    }
                    l_413[1][8] = l_412;
                }
            }
            l_415 = l_414;
            l_317 = l_416;
            l_317 ^= 0x37F23E0EL;
        }
        else
        { /* block id: 231 */
            struct S0 l_418 = {0x61CEE6C7L,0UL,0x96L,0x0C116BFF4D91D4A0L,0x73F89BC4L,0x738E2D4AL,-1L};/* VOLATILE GLOBAL l_418 */
            struct S0 *l_417 = &l_418;
            struct S0 *l_419 = &l_418;
            struct S0 *l_420 = &l_418;
            l_420 = (l_419 = (l_417 = (void*)0));
        }
        for (l_313.y = (-16); (l_313.y > 8); ++l_313.y)
        { /* block id: 238 */
            int32_t l_424 = 0x73AED9EDL;
            int32_t *l_423 = &l_424;
            int32_t *l_425[1];
            int32_t *l_426 = &l_424;
            uint32_t l_427[1][4][10] = {{{0x204510ADL,0x204510ADL,4294967289UL,0x50B9BE7EL,0xABF9889FL,0x50B9BE7EL,4294967289UL,0x204510ADL,0x204510ADL,4294967289UL},{0x204510ADL,0x204510ADL,4294967289UL,0x50B9BE7EL,0xABF9889FL,0x50B9BE7EL,4294967289UL,0x204510ADL,0x204510ADL,4294967289UL},{0x204510ADL,0x204510ADL,4294967289UL,0x50B9BE7EL,0xABF9889FL,0x50B9BE7EL,4294967289UL,0x204510ADL,0x204510ADL,4294967289UL},{0x204510ADL,0x204510ADL,4294967289UL,0x50B9BE7EL,0xABF9889FL,0x50B9BE7EL,4294967289UL,0x204510ADL,0x204510ADL,4294967289UL}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_425[i] = &l_424;
            l_425[0] = l_423;
            l_426 = (void*)0;
            l_427[0][2][0]--;
            l_317 ^= 0x0F40B349L;
        }
        unsigned int result = 0;
        result += l_218;
        result += l_219;
        result += l_309.s7;
        result += l_309.s6;
        result += l_309.s5;
        result += l_309.s4;
        result += l_309.s3;
        result += l_309.s2;
        result += l_309.s1;
        result += l_309.s0;
        result += l_310.y;
        result += l_310.x;
        result += l_311;
        result += l_312;
        result += l_313.y;
        result += l_313.x;
        result += l_314.w;
        result += l_314.z;
        result += l_314.y;
        result += l_314.x;
        result += l_315;
        result += l_316;
        result += l_317;
        atomic_add(&p_649->l_special_values[63], result);
    }
    else
    { /* block id: 244 */
        (1 + 1);
    }
    if ((((*l_456) = (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(0x40L, (((0UL ^ (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(0x60L, 1UL)).even, 0)), ((((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0UL, 0UL)), (0x5B53D4E68237CBDCL < ((*l_455) ^= (0x93DEBF33L && (safe_add_func_uint16_t_u_u((((GROUP_DIVERGE(0, 1) ^ (!p_649->g_73.f0.f3)) , (safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u(((p_649->g_42.f4 || (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((+(l_451[2][6][2] & (safe_lshift_func_uint16_t_u_s(((&p_24 == &p_649->g_131) <= l_454), l_451[2][6][2])))))), 7))) && 1L), 15)) && l_451[2][6][2]) || 0x033BL) && 0x46L), 5))) <= p_649->g_91.s0), p_649->g_212[5][9][1].f2))))), 0UL, p_649->g_73.f0.f1, ((VECTOR(uint8_t, 8))(0xBEL)), ((VECTOR(uint8_t, 2))(0UL)), 1UL)).s1, p_649->g_42.f8)) , p_24) , (void*)0) == &p_649->g_131))), 5))) | p_23) ^ GROUP_DIVERGE(1, 1)))), 6))) == p_649->g_210.f3))
    { /* block id: 249 */
        struct S1 *l_458 = &p_649->g_457;
        VECTOR(int32_t, 8) l_460 = (VECTOR(int32_t, 8))(0x4C60B88DL, (VECTOR(int32_t, 4))(0x4C60B88DL, (VECTOR(int32_t, 2))(0x4C60B88DL, 0L), 0L), 0L, 0x4C60B88DL, 0L);
        int16_t l_462[3];
        uint32_t l_468 = 0x09C94F78L;
        union U3 l_469 = {1UL};
        int32_t *l_470[2][10][7] = {{{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]}},{{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]},{&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1],&p_649->g_126[1]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_462[i] = 1L;
        (*l_458) = p_649->g_457;
        p_649->g_91.s7 ^= ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_649->g_459.sf339ac66)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_460.s30040304)).hi)).ywyxxxww)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_461.xwzw)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((l_462[1] ^= 0x9C0FL), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_649->g_463.wx)), 0x53AFL, 65530UL)))).odd, ((VECTOR(uint16_t, 4))(6UL, (l_467 = (l_460.s2 ^= ((0xAB5EECE36A8A15CCL & (p_649->g_85 >= 4294967295UL)) != (p_649->g_464[0][3][0] != &l_456)))), 0UL, 65535UL)).even))), ((VECTOR(uint16_t, 16))((p_23 , (l_468 > (l_469 , 0xBD4E466DL))), 1UL, p_649->g_73.f0.f6, ((VECTOR(uint16_t, 8))(0UL)), ((VECTOR(uint16_t, 2))(0x3CD5L)), l_469.f0, 0x2CB1L, 0x9293L)).s41, ((VECTOR(uint16_t, 2))(0x7B22L))))).yxyxxyyy)), 65535UL, ((VECTOR(uint16_t, 2))(5UL)), 65526UL, ((VECTOR(uint16_t, 2))(0xDA05L)), 0x5C2CL)))).s9f47))).odd)).lo, ((VECTOR(int32_t, 2))(0x5E9C25DFL)), (-1L)))))).x;
    }
    else
    { /* block id: 255 */
        int32_t *l_471[8];
        int32_t l_473 = 1L;
        int64_t l_474[3][7][8] = {{{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L}},{{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L}},{{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L},{0x3E51AAE468E6F7B6L,0x2F7C408F1A3540E2L,1L,0x145C0357E8D400A8L,0x1E947873077C1605L,(-10L),(-10L),0x1E947873077C1605L}}};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_471[i] = &p_649->g_46;
        ++l_475;
        for (p_649->g_42.f3 = (-19); (p_649->g_42.f3 == 27); ++p_649->g_42.f3)
        { /* block id: 259 */
            int32_t **l_481[5] = {&l_471[7],&l_471[7],&l_471[7],&l_471[7],&l_471[7]};
            int32_t ***l_480 = &l_481[1];
            uint32_t *l_487[7] = {(void*)0,&p_649->g_210.f0,(void*)0,(void*)0,&p_649->g_210.f0,(void*)0,(void*)0};
            uint32_t **l_486 = &l_487[6];
            uint16_t l_490 = 7UL;
            int i;
            p_649->g_459.s6 |= (((+((&p_649->g_85 != &p_649->g_85) < (FAKE_DIVERGE(p_649->global_1_offset, get_global_id(1), 10) <= (((*l_480) = &l_471[0]) == (void*)0)))) != (((0L | (safe_mod_func_uint32_t_u_u(0x8FD9B42AL, p_649->g_210.f0))) , (safe_rshift_func_uint8_t_u_s((((GROUP_DIVERGE(0, 1) , &p_649->g_131) != ((*l_486) = &p_24)) && 0x29L), 7))) != p_25)) , p_649->g_463.x);
            if (p_649->g_210.f6)
            { /* block id: 263 */
                p_649->g_73.f0 = p_649->g_488;
                (**l_480) = &p_649->g_126[0];
            }
            else
            { /* block id: 266 */
                return p_23;
            }
            l_490++;
        }
    }
    return p_649->g_212[5][9][1].f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_216 p_649->g_210.f3
 * writes: p_649->g_217
 */
int8_t  func_30(uint32_t  p_31, uint64_t  p_32, struct S4 * p_649)
{ /* block id: 103 */
    union U3 *l_214 = &p_649->g_215[0];
    (*p_649->g_216) = l_214;
    return p_649->g_210.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_46 p_649->g_42.f5 p_649->g_73 p_649->g_80 p_649->g_73.f0.f6 p_649->g_85 p_649->g_comm_values p_649->g_42.f8 p_649->g_88 p_649->g_90 p_649->g_91 p_649->g_2 p_649->g_42.f3 p_649->g_73.f0.f5 p_649->g_42.f4 p_649->g_131 p_649->g_210 p_649->g_212 p_649->g_73.f0.f0 p_649->g_213
 * writes: p_649->g_46 p_649->g_84 p_649->g_88 p_649->g_90 p_649->g_126 p_649->g_131 p_649->g_213
 */
uint8_t  func_35(uint8_t  p_36, uint8_t  p_37, struct S4 * p_649)
{ /* block id: 11 */
    int32_t *l_43[6] = {&p_649->g_2,&p_649->g_2,&p_649->g_2,&p_649->g_2,&p_649->g_2,&p_649->g_2};
    int32_t **l_44 = (void*)0;
    int32_t *l_45 = &p_649->g_46;
    int8_t l_64 = 1L;
    uint8_t *l_89[4][3][8] = {{{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90}},{{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90}},{{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90}},{{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90},{&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90,&p_649->g_90}}};
    int32_t **l_100[3][10][6] = {{{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0}},{{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0}},{{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0},{&l_45,&l_45,&l_43[4],(void*)0,&l_45,(void*)0}}};
    int i, j, k;
    l_45 = l_43[4];
    p_649->g_213 &= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((((safe_sub_func_uint8_t_u_u(((func_49((((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_div_func_int8_t_s_s(0x7CL, (p_649->g_90 ^= func_62(l_64, p_649)))) , ((((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(p_649->g_91.s17)), 1L)).w , ((p_649->g_comm_values[p_649->tid] , p_36) && (safe_sub_func_uint64_t_u_u((~(0xA799B5C0F6DB6A2DL || (safe_div_func_uint32_t_u_u((((((safe_add_func_uint8_t_u_u((p_37 , (p_649->g_90 = p_37)), (safe_mul_func_uint16_t_u_u(((p_37 != p_649->g_91.s5) , GROUP_DIVERGE(0, 1)), (*l_45))))) != 0x4FECFE75L) < FAKE_DIVERGE(p_649->group_2_offset, get_group_id(2), 10)) > p_649->g_91.s7) >= 0x24L), 0xEF98C019L)))), p_649->g_80.s4)))) , FAKE_DIVERGE(p_649->group_1_offset, get_group_id(1), 10))) < p_649->g_42.f3), 1UL)), 0)), 0x317AL)) < (-3L)) <= 1L), l_100[1][1][4], p_37, p_649->g_80.s3, p_649) , p_649->g_212[5][9][1].f5) & p_649->g_210.f2), 5UL)) , FAKE_DIVERGE(p_649->group_0_offset, get_group_id(0), 10)) == p_649->g_42.f3) ^ p_36), 0x2E63A26EL, 0x64AB7D95L, 0x2605346FL, 0x28C6D9C0L, 1L, ((VECTOR(int32_t, 4))((-1L))), 4L, p_37, p_649->g_73.f0.f0, (-7L), 0x2D2AF201L, 2L)).sb6, ((VECTOR(int32_t, 2))((-3L)))))).lo;
    return p_649->g_210.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_42
 * writes:
 */
struct S1  func_38(union U3  p_39, int64_t  p_40, struct S4 * p_649)
{ /* block id: 8 */
    int32_t *l_41 = &p_649->g_2;
    l_41 = l_41;
    return p_649->g_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_42.f5 p_649->g_73.f0.f5 p_649->g_42.f3 p_649->g_42.f4 p_649->g_88 p_649->g_46 p_649->g_131 p_649->g_210 p_649->g_212
 * writes: p_649->g_126 p_649->g_88 p_649->g_46 p_649->g_131
 */
struct S0  func_49(uint32_t  p_50, int32_t ** p_51, uint32_t  p_52, int32_t  p_53, struct S4 * p_649)
{ /* block id: 22 */
    uint8_t l_101 = 0x77L;
    VECTOR(int64_t, 2) l_117 = (VECTOR(int64_t, 2))((-1L), (-1L));
    int32_t l_122 = 0x35A271B2L;
    int32_t l_127 = 0x3AA86CCDL;
    int i;
    if (l_101)
    { /* block id: 23 */
        int16_t **l_106 = (void*)0;
        int16_t *l_108[9][10][2] = {{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}},{{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84},{&p_649->g_84,&p_649->g_84}}};
        int16_t **l_107 = &l_108[5][0][1];
        union U3 l_113 = {0x88C7F9DB91B04C5DL};
        uint8_t *l_114 = &p_649->g_90;
        uint8_t *l_121 = &p_649->g_90;
        uint8_t **l_120 = &l_121;
        uint32_t l_123 = 0x0C49C4B2L;
        int16_t *l_124 = &p_649->g_84;
        uint32_t *l_125[1];
        int32_t *l_128 = &p_649->g_88;
        int32_t *l_129 = &p_649->g_46;
        int64_t l_130 = 9L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_125[i] = &l_123;
        (*l_129) ^= ((*l_128) |= ((((l_127 = (p_649->g_126[0] = (((((((safe_rshift_func_int16_t_s_u(1L, (safe_sub_func_uint8_t_u_u((((*l_107) = &p_649->g_84) == ((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_113 , (&l_101 != l_114)), 8)), (~(l_122 = (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_117.yyyxyxxx)).odd)).z, ((p_649->g_42.f5 & 0x579426CD91451F1CL) && ((safe_sub_func_int8_t_s_s((((((*l_120) = &p_649->g_90) == (l_101 , (void*)0)) == l_113.f0) < GROUP_DIVERGE(0, 1)), l_113.f0)) | l_113.f0)))))))) != p_52) && l_123) , l_124)), 254UL)))) ^ p_649->g_73.f0.f5) == GROUP_DIVERGE(2, 1)) , p_649->g_42.f3) >= l_117.x) , GROUP_DIVERGE(0, 1)) >= p_649->g_42.f4))) < p_50) || l_113.f0) , 0x5F75C09CL));
        p_649->g_131 |= l_130;
        if ((atomic_inc(&p_649->g_atomic_input[70 * get_linear_group_id() + 54]) == 0))
        { /* block id: 33 */
            int32_t l_132 = 0x4C02D86DL;
            int32_t *l_146 = &l_132;
            int32_t *l_147 = (void*)0;
            int32_t *l_208 = (void*)0;
            int32_t *l_209 = &l_132;
            for (l_132 = 0; (l_132 < 12); l_132++)
            { /* block id: 36 */
                int8_t l_135 = 0x56L;
                uint16_t l_136[8][7] = {{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L},{0x597CL,0x9AD1L,0xD125L,0x76A3L,0x213FL,0x76A3L,0xD125L}};
                uint32_t l_137 = 4294967295UL;
                uint16_t l_138 = 0xCF26L;
                int32_t l_140 = 0x0F1BED50L;
                int32_t *l_139 = &l_140;
                VECTOR(int32_t, 2) l_141 = (VECTOR(int32_t, 2))(1L, 0x532AF4CEL);
                uint16_t l_142 = 0x305FL;
                VECTOR(int32_t, 8) l_143 = (VECTOR(int32_t, 8))(0x3F1057C5L, (VECTOR(int32_t, 4))(0x3F1057C5L, (VECTOR(int32_t, 2))(0x3F1057C5L, 0x6FC68CCCL), 0x6FC68CCCL), 0x6FC68CCCL, 0x3F1057C5L, 0x6FC68CCCL);
                int64_t l_144 = 1L;
                uint8_t l_145 = 0UL;
                int i, j;
                l_138 ^= (l_137 &= (l_135 , l_136[0][2]));
                l_139 = l_139;
                l_144 = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(l_141.xyyx)).wwwywxwz, (int32_t)l_142, (int32_t)0x23137507L))).odd, (int32_t)0x55238762L))).zxxwwwzxywzzwxyw, ((VECTOR(int32_t, 8))(l_143.s04330734)).s4074073135144024))).s8;
                (*l_139) ^= l_145;
            }
            l_147 = l_146;
            for (l_132 = 0; (l_132 < (-10)); l_132 = safe_sub_func_uint64_t_u_u(l_132, 9))
            { /* block id: 46 */
                uint32_t l_150 = 4294967295UL;
                int8_t l_178 = 5L;
                uint32_t l_179 = 1UL;
                if ((l_150 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 4L)).yyxxxxxxyxxyxxxx)).s4))
                { /* block id: 48 */
                    uint32_t l_151 = 1UL;
                    int64_t l_152 = 0L;
                    l_152 |= l_151;
                    for (l_152 = 0; (l_152 <= 20); l_152 = safe_add_func_uint64_t_u_u(l_152, 9))
                    { /* block id: 52 */
                        uint32_t l_155 = 0x8D99568BL;
                        struct S0 l_156 = {0UL,8UL,0x53L,18446744073709551615UL,-2L,0x892B9344L,-5L};/* VOLATILE GLOBAL l_156 */
                        struct S0 l_157 = {0x8EBB9B1EL,255UL,1UL,0xE87FF4ED39A44DA6L,-1L,0x559E7449L,-1L};/* VOLATILE GLOBAL l_157 */
                        uint32_t l_158[8];
                        int32_t l_162 = 0x7E5BD8F1L;
                        int32_t *l_161 = &l_162;
                        int32_t *l_163 = (void*)0;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_158[i] = 4294967295UL;
                        l_157 = (l_155 , l_156);
                        --l_158[1];
                        l_163 = (l_147 = l_161);
                    }
                }
                else
                { /* block id: 58 */
                    uint32_t l_164 = 0xA82994EBL;
                    int32_t l_165 = 3L;
                    VECTOR(int32_t, 2) l_166 = (VECTOR(int32_t, 2))(0L, 0x62B852CFL);
                    uint32_t l_167[5][8] = {{3UL,3UL,0x0736A644L,4294967291UL,1UL,4294967291UL,0x0736A644L,3UL},{3UL,3UL,0x0736A644L,4294967291UL,1UL,4294967291UL,0x0736A644L,3UL},{3UL,3UL,0x0736A644L,4294967291UL,1UL,4294967291UL,0x0736A644L,3UL},{3UL,3UL,0x0736A644L,4294967291UL,1UL,4294967291UL,0x0736A644L,3UL},{3UL,3UL,0x0736A644L,4294967291UL,1UL,4294967291UL,0x0736A644L,3UL}};
                    VECTOR(int32_t, 4) l_168 = (VECTOR(int32_t, 4))(0x785C46A8L, (VECTOR(int32_t, 2))(0x785C46A8L, 0x5A425B5EL), 0x5A425B5EL);
                    VECTOR(int32_t, 4) l_169 = (VECTOR(int32_t, 4))(0x215010C3L, (VECTOR(int32_t, 2))(0x215010C3L, (-1L)), (-1L));
                    VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))(0x3426B7B2L, (VECTOR(int32_t, 2))(0x3426B7B2L, 0L), 0L);
                    int16_t l_171 = 3L;
                    VECTOR(int32_t, 8) l_172 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x697B8A6DL), 0x697B8A6DL), 0x697B8A6DL, 8L, 0x697B8A6DL);
                    VECTOR(int32_t, 8) l_173 = (VECTOR(int32_t, 8))(0x2CACFC5FL, (VECTOR(int32_t, 4))(0x2CACFC5FL, (VECTOR(int32_t, 2))(0x2CACFC5FL, 0L), 0L), 0L, 0x2CACFC5FL, 0L);
                    VECTOR(int32_t, 4) l_174 = (VECTOR(int32_t, 4))(0x7E9C4260L, (VECTOR(int32_t, 2))(0x7E9C4260L, 8L), 8L);
                    struct S1 l_175 = {0x0B3D7231L,0L,0x641BD3BCB1EAC38EL,1L,4294967287UL,1UL,-5L,0xA422L,0x19962E55FA1EA543L};/* VOLATILE GLOBAL l_175 */
                    uint64_t l_176 = 0xDDE3D06CCA624054L;
                    int8_t l_177 = 1L;
                    int i, j;
                    l_177 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7BCFDD99L, 0L)).xxyy)).z, (-1L), 1L, 1L, l_164, l_165, 0L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_166.yxxyyxxyxyyyxxyy)).s6c))), l_167[0][3], (-2L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_168.zwwywwzyyxzzyyyx)).sabc6)), 3L)).even, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_169.xwxz)).xxwzwzwz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0x4585E3A4L, (-1L))), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_170.xx)), (l_166.x = ((VECTOR(int32_t, 16))(l_171, 0x4AE07AD3L, 0x7A1FB798L, ((VECTOR(int32_t, 4))(l_172.s2041)), 0x34F0367BL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(l_173.s24364244)).s1774743611366515, ((VECTOR(int32_t, 2))(1L, 0L)).yxyxyxxxxxyxyyxy))).s3b)), ((VECTOR(int32_t, 4))(l_174.ywyy)), 0x70F661DDL, 0x7CDBE9B9L)).sf), (l_173.s2 = (l_170.z = (l_166.y = 0x5C86E0DFL))), (l_175 , l_176), 0x5784363FL, (-1L), 0L)))).s75, ((VECTOR(int32_t, 2))(0x6B91CD5FL)))))))))).yyxyyyxx)))))).s17)).yyyxxyyx)).s5;
                }
                if ((l_179 ^= l_178))
                { /* block id: 66 */
                    int32_t l_180 = 0x35A51361L;
                    struct S1 l_181 = {-1L,0L,7UL,0x111529E7L,4294967288UL,0x7BFF7CC2L,0x393EBF62B63680A1L,65535UL,1L};/* VOLATILE GLOBAL l_181 */
                    VECTOR(uint64_t, 4) l_182 = (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551615UL), 18446744073709551615UL);
                    struct S0 l_183 = {0xAF4F0EBAL,4UL,0xDBL,18446744073709551607UL,4L,4294967293UL,0x400EF30843EA2915L};/* VOLATILE GLOBAL l_183 */
                    uint64_t l_184 = 0xC6C1B368D36DCFDDL;
                    uint16_t l_185 = 0xCF8AL;
                    uint16_t l_186 = 8UL;
                    int i;
                    l_146 = (l_147 = (void*)0);
                    l_186 ^= ((l_180 , (l_181 , (((VECTOR(uint64_t, 8))(l_182.wyywwzzy)).s3 , l_183))) , (l_185 = (l_180 = l_184)));
                }
                else
                { /* block id: 72 */
                    struct S0 l_187 = {0x7886D37CL,0x8EL,0x88L,0x22F48657F93D7C05L,6L,4294967292UL,-2L};/* VOLATILE GLOBAL l_187 */
                    struct S0 l_188[5] = {{0x29E382DFL,0xF3L,0x97L,1UL,0x16EFC717L,0UL,0x57F3D4169CB32DCFL},{0x29E382DFL,0xF3L,0x97L,1UL,0x16EFC717L,0UL,0x57F3D4169CB32DCFL},{0x29E382DFL,0xF3L,0x97L,1UL,0x16EFC717L,0UL,0x57F3D4169CB32DCFL},{0x29E382DFL,0xF3L,0x97L,1UL,0x16EFC717L,0UL,0x57F3D4169CB32DCFL},{0x29E382DFL,0xF3L,0x97L,1UL,0x16EFC717L,0UL,0x57F3D4169CB32DCFL}};
                    struct S1 l_195 = {-1L,0x120CE1A1L,0xB96F827C98E5AE54L,0x5AC0EC06L,9UL,1UL,0L,6UL,8L};/* VOLATILE GLOBAL l_195 */
                    struct S1 l_196 = {0x6CDBF49DL,0x3D75D162L,1UL,-6L,0xD8B250B6L,0x747BD279L,0x683CE6440DBB3CFDL,0x1DCDL,0x7550B14C57F72F92L};/* VOLATILE GLOBAL l_196 */
                    int i;
                    l_188[2] = l_187;
                    for (l_187.f0 = (-27); (l_187.f0 != 60); l_187.f0 = safe_add_func_int16_t_s_s(l_187.f0, 1))
                    { /* block id: 76 */
                        int32_t l_192 = 0x4A0AF4E1L;
                        int32_t *l_191 = &l_192;
                        uint64_t l_193 = 0x167A7BE1962AD8FEL;
                        int8_t l_194[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_194[i] = (-9L);
                        l_147 = l_191;
                        l_194[3] = ((*l_147) = l_193);
                    }
                    l_196 = l_195;
                    for (l_195.f5 = 0; (l_195.f5 > 36); l_195.f5 = safe_add_func_uint8_t_u_u(l_195.f5, 2))
                    { /* block id: 84 */
                        int32_t l_199 = 1L;
                        int8_t l_200 = (-3L);
                        int32_t l_201 = 0x659D1DFFL;
                        int64_t l_202[2];
                        uint8_t l_203 = 0x3DL;
                        int32_t l_206 = (-5L);
                        int8_t l_207 = (-10L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_202[i] = 1L;
                        l_199 |= 0x2FDAFAECL;
                        l_201 &= l_200;
                        --l_203;
                        l_207 = l_206;
                    }
                }
            }
            l_209 = l_208;
            unsigned int result = 0;
            result += l_132;
            atomic_add(&p_649->g_special_values[70 * get_linear_group_id() + 54], result);
        }
        else
        { /* block id: 93 */
            (1 + 1);
        }
        return p_649->g_210;
    }
    else
    { /* block id: 97 */
        uint16_t l_211 = 0x8D0AL;
        l_211 |= l_127;
        return p_649->g_212[5][9][1];
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_649->g_46 p_649->g_42.f5 p_649->g_73 p_649->g_80 p_649->g_73.f0.f6 p_649->g_85 p_649->g_comm_values p_649->g_42.f8 p_649->g_88
 * writes: p_649->g_46 p_649->g_84 p_649->g_88
 */
uint8_t  func_62(uint32_t  p_63, struct S4 * p_649)
{ /* block id: 13 */
    int32_t *l_65 = &p_649->g_46;
    uint64_t l_68 = 0xD2826019FDEE1321L;
    int16_t *l_83 = &p_649->g_84;
    int32_t l_86 = 0x5DB27898L;
    int32_t *l_87 = &p_649->g_88;
    (*l_65) &= 0x084E3EEDL;
    (*l_65) |= 0x3CA7AF0CL;
    (*l_87) |= (((safe_lshift_func_uint16_t_u_u((l_68 != p_649->g_42.f5), 15)) | ((safe_sub_func_int16_t_s_s((-5L), (((void*)0 != &p_649->g_2) >= ((l_86 ^= (safe_div_func_int32_t_s_s(((((p_649->g_73 , (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((((((((*l_83) = ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(p_649->g_46, ((VECTOR(int8_t, 2))((-3L), 5L)), ((VECTOR(int8_t, 8))(p_649->g_80.s44667217)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0x1CL, 4L, (safe_mod_func_int64_t_s_s(p_63, p_649->g_73.f0.f6)), ((VECTOR(int8_t, 4))(0x0AL)), ((VECTOR(int8_t, 8))(0x5DL)), 0x30L)).s0741)), ((VECTOR(int8_t, 4))(3L))))).even)), 0x1BL, 0x2BL)))), (-1L))).sa4, ((VECTOR(uint8_t, 2))(0x68L))))).odd) & p_649->g_80.s5) | p_63) && p_649->g_85) < (*l_65)) > (*l_65)) , (*l_65)) < 0xB6EFL), (-1L))), p_63)), p_649->g_comm_values[p_649->tid]))) == 0x19D2484370A8D4FFL) >= 0x4358L) == 65532UL), (*l_65)))) != p_649->g_42.f8)))) < p_63)) != p_649->g_42.f8);
    return p_63;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_comm_values[i] = 1;
    struct S4 c_650;
    struct S4* p_649 = &c_650;
    struct S4 c_651 = {
        7L, // p_649->g_2
        {3L,-8L,0x189098934ECA6696L,3L,0x4824FF24L,0x64A3A207L,0x0A5F036206CBC8CAL,65527UL,0x7CF39588DFEF28EDL}, // p_649->g_42
        0x795BCD59L, // p_649->g_46
        {{-1L,0x0EAC2F6EL,0UL,0x435E3C92L,4294967291UL,0x0432CFC9L,0x2E810F1DDE4E4C4DL,1UL,1L}}, // p_649->g_73
        (VECTOR(int8_t, 8))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 0x00L), 0x00L), 0x00L, 0x02L, 0x00L), // p_649->g_80
        0L, // p_649->g_84
        0x110172C61B7CE843L, // p_649->g_85
        8L, // p_649->g_88
        0x76L, // p_649->g_90
        (VECTOR(int32_t, 8))(0x1A10FB8DL, (VECTOR(int32_t, 4))(0x1A10FB8DL, (VECTOR(int32_t, 2))(0x1A10FB8DL, 0x35AAB374L), 0x35AAB374L), 0x35AAB374L, 0x1A10FB8DL, 0x35AAB374L), // p_649->g_91
        {1L,1L}, // p_649->g_126
        0xBB1117FEL, // p_649->g_131
        {0xD3B933D1L,1UL,0x99L,5UL,0x3D952B09L,4294967295UL,-4L}, // p_649->g_210
        {{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}},{{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}},{{4294967295UL,0x6CL,0xE9L,0xB2AEE43E5D3A11EBL,0x2B34DE86L,0x1F5E1482L,1L},{0x2E03701DL,2UL,3UL,0x50B5D90F70907730L,0x5DAE0484L,4294967295UL,0x67C90FF4218CA985L}}}}, // p_649->g_212
        4294967287UL, // p_649->g_213
        {{0x695DF1CC407AAD60L},{0x695DF1CC407AAD60L},{0x695DF1CC407AAD60L},{0x695DF1CC407AAD60L},{0x695DF1CC407AAD60L},{0x695DF1CC407AAD60L}}, // p_649->g_215
        {{&p_649->g_215[3],&p_649->g_215[3],(void*)0,&p_649->g_215[4],&p_649->g_215[4],&p_649->g_215[4],(void*)0,&p_649->g_215[3]},{&p_649->g_215[3],&p_649->g_215[3],(void*)0,&p_649->g_215[4],&p_649->g_215[4],&p_649->g_215[4],(void*)0,&p_649->g_215[3]},{&p_649->g_215[3],&p_649->g_215[3],(void*)0,&p_649->g_215[4],&p_649->g_215[4],&p_649->g_215[4],(void*)0,&p_649->g_215[3]},{&p_649->g_215[3],&p_649->g_215[3],(void*)0,&p_649->g_215[4],&p_649->g_215[4],&p_649->g_215[4],(void*)0,&p_649->g_215[3]},{&p_649->g_215[3],&p_649->g_215[3],(void*)0,&p_649->g_215[4],&p_649->g_215[4],&p_649->g_215[4],(void*)0,&p_649->g_215[3]}}, // p_649->g_217
        &p_649->g_217[1][5], // p_649->g_216
        {0x4C9BEE12L,-1L,0xAA014E2C970FC52AL,0x3DFC9E29L,7UL,1UL,-1L,0x56E1L,-1L}, // p_649->g_457
        (VECTOR(int32_t, 16))(0x770F32B3L, (VECTOR(int32_t, 4))(0x770F32B3L, (VECTOR(int32_t, 2))(0x770F32B3L, 6L), 6L), 6L, 0x770F32B3L, 6L, (VECTOR(int32_t, 2))(0x770F32B3L, 6L), (VECTOR(int32_t, 2))(0x770F32B3L, 6L), 0x770F32B3L, 6L, 0x770F32B3L, 6L), // p_649->g_459
        (VECTOR(uint16_t, 4))(0xD49DL, (VECTOR(uint16_t, 2))(0xD49DL, 1UL), 1UL), // p_649->g_463
        0xAEL, // p_649->g_466
        &p_649->g_466, // p_649->g_465
        {{{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465},{&p_649->g_465,&p_649->g_465,&p_649->g_465}}}, // p_649->g_464
        {1L,-10L,18446744073709551615UL,0x07A60671L,0x91CDF2CBL,0x49410279L,0x5D04F71744D2CFC1L,0x411AL,0x0C7DEC6CD0AF3C52L}, // p_649->g_488
        (void*)0, // p_649->g_489
        0xCFCEL, // p_649->g_538
        0UL, // p_649->g_579
        {0x2B3DC053L,0x44225CAAL,0xCB9CF4DA667637C6L,0x2C4ABCF6L,4294967295UL,1UL,0x25E2657CA5EFE5D1L,65528UL,0L}, // p_649->g_580
        (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0UL), 0UL), // p_649->g_598
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_649->g_599
        &p_649->g_217[0][6], // p_649->g_601
        {{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}},{{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}},{{1L,8L,0xE75FA1E1DC65680BL,0L,0x8202CEB9L,0x17283209L,-1L,65535UL,0x30719032A9C87BD2L},{0x47EE3B69L,-1L,0xE4E7DC269F9D2A74L,0L,0UL,1UL,8L,0xE7B7L,-1L},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L},{0x3645B05EL,0x35D9DFCEL,8UL,1L,3UL,1UL,0x57E326D7707D3168L,0UL,0x52368EB912C89C4CL},{-7L,0x18932BDEL,0x6AF74BB2F070F635L,-9L,0x086C8E22L,0x89790A7FL,4L,0xDC63L,1L}}}}, // p_649->g_603
        &p_649->g_46, // p_649->g_607
        &p_649->g_607, // p_649->g_606
        (void*)0, // p_649->g_615
        (void*)0, // p_649->g_616
        {4294967288UL,0x52L,0xD5L,0xE357511F271515B0L,0x2570B86AL,4294967292UL,-3L}, // p_649->g_618
        (void*)0, // p_649->g_636
        {{{0x3C411DBCL,0x62A6ADE9L,0UL,8L,0xAC27A7D0L,0x994DBAB5L,0x6D1EE0293C293BEBL,0xC45AL,1L},{0x3C411DBCL,0x62A6ADE9L,0UL,8L,0xAC27A7D0L,0x994DBAB5L,0x6D1EE0293C293BEBL,0xC45AL,1L},{0x3C411DBCL,0x62A6ADE9L,0UL,8L,0xAC27A7D0L,0x994DBAB5L,0x6D1EE0293C293BEBL,0xC45AL,1L},{0x3C411DBCL,0x62A6ADE9L,0UL,8L,0xAC27A7D0L,0x994DBAB5L,0x6D1EE0293C293BEBL,0xC45AL,1L},{0x3C411DBCL,0x62A6ADE9L,0UL,8L,0xAC27A7D0L,0x994DBAB5L,0x6D1EE0293C293BEBL,0xC45AL,1L}}}, // p_649->g_648
        0, // p_649->v_collective
        sequence_input[get_global_id(0)], // p_649->global_0_offset
        sequence_input[get_global_id(1)], // p_649->global_1_offset
        sequence_input[get_global_id(2)], // p_649->global_2_offset
        sequence_input[get_local_id(0)], // p_649->local_0_offset
        sequence_input[get_local_id(1)], // p_649->local_1_offset
        sequence_input[get_local_id(2)], // p_649->local_2_offset
        sequence_input[get_group_id(0)], // p_649->group_0_offset
        sequence_input[get_group_id(1)], // p_649->group_1_offset
        sequence_input[get_group_id(2)], // p_649->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[0][get_linear_local_id()])), // p_649->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_650 = c_651;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_649);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_649->g_2, "p_649->g_2", print_hash_value);
    transparent_crc(p_649->g_42.f0, "p_649->g_42.f0", print_hash_value);
    transparent_crc(p_649->g_42.f1, "p_649->g_42.f1", print_hash_value);
    transparent_crc(p_649->g_42.f2, "p_649->g_42.f2", print_hash_value);
    transparent_crc(p_649->g_42.f3, "p_649->g_42.f3", print_hash_value);
    transparent_crc(p_649->g_42.f4, "p_649->g_42.f4", print_hash_value);
    transparent_crc(p_649->g_42.f5, "p_649->g_42.f5", print_hash_value);
    transparent_crc(p_649->g_42.f6, "p_649->g_42.f6", print_hash_value);
    transparent_crc(p_649->g_42.f7, "p_649->g_42.f7", print_hash_value);
    transparent_crc(p_649->g_42.f8, "p_649->g_42.f8", print_hash_value);
    transparent_crc(p_649->g_46, "p_649->g_46", print_hash_value);
    transparent_crc(p_649->g_73.f0.f0, "p_649->g_73.f0.f0", print_hash_value);
    transparent_crc(p_649->g_73.f0.f1, "p_649->g_73.f0.f1", print_hash_value);
    transparent_crc(p_649->g_73.f0.f2, "p_649->g_73.f0.f2", print_hash_value);
    transparent_crc(p_649->g_73.f0.f3, "p_649->g_73.f0.f3", print_hash_value);
    transparent_crc(p_649->g_73.f0.f4, "p_649->g_73.f0.f4", print_hash_value);
    transparent_crc(p_649->g_73.f0.f5, "p_649->g_73.f0.f5", print_hash_value);
    transparent_crc(p_649->g_73.f0.f6, "p_649->g_73.f0.f6", print_hash_value);
    transparent_crc(p_649->g_73.f0.f7, "p_649->g_73.f0.f7", print_hash_value);
    transparent_crc(p_649->g_73.f0.f8, "p_649->g_73.f0.f8", print_hash_value);
    transparent_crc(p_649->g_80.s0, "p_649->g_80.s0", print_hash_value);
    transparent_crc(p_649->g_80.s1, "p_649->g_80.s1", print_hash_value);
    transparent_crc(p_649->g_80.s2, "p_649->g_80.s2", print_hash_value);
    transparent_crc(p_649->g_80.s3, "p_649->g_80.s3", print_hash_value);
    transparent_crc(p_649->g_80.s4, "p_649->g_80.s4", print_hash_value);
    transparent_crc(p_649->g_80.s5, "p_649->g_80.s5", print_hash_value);
    transparent_crc(p_649->g_80.s6, "p_649->g_80.s6", print_hash_value);
    transparent_crc(p_649->g_80.s7, "p_649->g_80.s7", print_hash_value);
    transparent_crc(p_649->g_84, "p_649->g_84", print_hash_value);
    transparent_crc(p_649->g_85, "p_649->g_85", print_hash_value);
    transparent_crc(p_649->g_88, "p_649->g_88", print_hash_value);
    transparent_crc(p_649->g_90, "p_649->g_90", print_hash_value);
    transparent_crc(p_649->g_91.s0, "p_649->g_91.s0", print_hash_value);
    transparent_crc(p_649->g_91.s1, "p_649->g_91.s1", print_hash_value);
    transparent_crc(p_649->g_91.s2, "p_649->g_91.s2", print_hash_value);
    transparent_crc(p_649->g_91.s3, "p_649->g_91.s3", print_hash_value);
    transparent_crc(p_649->g_91.s4, "p_649->g_91.s4", print_hash_value);
    transparent_crc(p_649->g_91.s5, "p_649->g_91.s5", print_hash_value);
    transparent_crc(p_649->g_91.s6, "p_649->g_91.s6", print_hash_value);
    transparent_crc(p_649->g_91.s7, "p_649->g_91.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_649->g_126[i], "p_649->g_126[i]", print_hash_value);

    }
    transparent_crc(p_649->g_131, "p_649->g_131", print_hash_value);
    transparent_crc(p_649->g_210.f0, "p_649->g_210.f0", print_hash_value);
    transparent_crc(p_649->g_210.f1, "p_649->g_210.f1", print_hash_value);
    transparent_crc(p_649->g_210.f2, "p_649->g_210.f2", print_hash_value);
    transparent_crc(p_649->g_210.f3, "p_649->g_210.f3", print_hash_value);
    transparent_crc(p_649->g_210.f4, "p_649->g_210.f4", print_hash_value);
    transparent_crc(p_649->g_210.f5, "p_649->g_210.f5", print_hash_value);
    transparent_crc(p_649->g_210.f6, "p_649->g_210.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_649->g_212[i][j][k].f0, "p_649->g_212[i][j][k].f0", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f1, "p_649->g_212[i][j][k].f1", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f2, "p_649->g_212[i][j][k].f2", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f3, "p_649->g_212[i][j][k].f3", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f4, "p_649->g_212[i][j][k].f4", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f5, "p_649->g_212[i][j][k].f5", print_hash_value);
                transparent_crc(p_649->g_212[i][j][k].f6, "p_649->g_212[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_649->g_213, "p_649->g_213", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_649->g_215[i].f0, "p_649->g_215[i].f0", print_hash_value);

    }
    transparent_crc(p_649->g_457.f0, "p_649->g_457.f0", print_hash_value);
    transparent_crc(p_649->g_457.f1, "p_649->g_457.f1", print_hash_value);
    transparent_crc(p_649->g_457.f2, "p_649->g_457.f2", print_hash_value);
    transparent_crc(p_649->g_457.f3, "p_649->g_457.f3", print_hash_value);
    transparent_crc(p_649->g_457.f4, "p_649->g_457.f4", print_hash_value);
    transparent_crc(p_649->g_457.f5, "p_649->g_457.f5", print_hash_value);
    transparent_crc(p_649->g_457.f6, "p_649->g_457.f6", print_hash_value);
    transparent_crc(p_649->g_457.f7, "p_649->g_457.f7", print_hash_value);
    transparent_crc(p_649->g_457.f8, "p_649->g_457.f8", print_hash_value);
    transparent_crc(p_649->g_459.s0, "p_649->g_459.s0", print_hash_value);
    transparent_crc(p_649->g_459.s1, "p_649->g_459.s1", print_hash_value);
    transparent_crc(p_649->g_459.s2, "p_649->g_459.s2", print_hash_value);
    transparent_crc(p_649->g_459.s3, "p_649->g_459.s3", print_hash_value);
    transparent_crc(p_649->g_459.s4, "p_649->g_459.s4", print_hash_value);
    transparent_crc(p_649->g_459.s5, "p_649->g_459.s5", print_hash_value);
    transparent_crc(p_649->g_459.s6, "p_649->g_459.s6", print_hash_value);
    transparent_crc(p_649->g_459.s7, "p_649->g_459.s7", print_hash_value);
    transparent_crc(p_649->g_459.s8, "p_649->g_459.s8", print_hash_value);
    transparent_crc(p_649->g_459.s9, "p_649->g_459.s9", print_hash_value);
    transparent_crc(p_649->g_459.sa, "p_649->g_459.sa", print_hash_value);
    transparent_crc(p_649->g_459.sb, "p_649->g_459.sb", print_hash_value);
    transparent_crc(p_649->g_459.sc, "p_649->g_459.sc", print_hash_value);
    transparent_crc(p_649->g_459.sd, "p_649->g_459.sd", print_hash_value);
    transparent_crc(p_649->g_459.se, "p_649->g_459.se", print_hash_value);
    transparent_crc(p_649->g_459.sf, "p_649->g_459.sf", print_hash_value);
    transparent_crc(p_649->g_463.x, "p_649->g_463.x", print_hash_value);
    transparent_crc(p_649->g_463.y, "p_649->g_463.y", print_hash_value);
    transparent_crc(p_649->g_463.z, "p_649->g_463.z", print_hash_value);
    transparent_crc(p_649->g_463.w, "p_649->g_463.w", print_hash_value);
    transparent_crc(p_649->g_466, "p_649->g_466", print_hash_value);
    transparent_crc(p_649->g_488.f0, "p_649->g_488.f0", print_hash_value);
    transparent_crc(p_649->g_488.f1, "p_649->g_488.f1", print_hash_value);
    transparent_crc(p_649->g_488.f2, "p_649->g_488.f2", print_hash_value);
    transparent_crc(p_649->g_488.f3, "p_649->g_488.f3", print_hash_value);
    transparent_crc(p_649->g_488.f4, "p_649->g_488.f4", print_hash_value);
    transparent_crc(p_649->g_488.f5, "p_649->g_488.f5", print_hash_value);
    transparent_crc(p_649->g_488.f6, "p_649->g_488.f6", print_hash_value);
    transparent_crc(p_649->g_488.f7, "p_649->g_488.f7", print_hash_value);
    transparent_crc(p_649->g_488.f8, "p_649->g_488.f8", print_hash_value);
    transparent_crc(p_649->g_538, "p_649->g_538", print_hash_value);
    transparent_crc(p_649->g_579, "p_649->g_579", print_hash_value);
    transparent_crc(p_649->g_580.f0, "p_649->g_580.f0", print_hash_value);
    transparent_crc(p_649->g_580.f1, "p_649->g_580.f1", print_hash_value);
    transparent_crc(p_649->g_580.f2, "p_649->g_580.f2", print_hash_value);
    transparent_crc(p_649->g_580.f3, "p_649->g_580.f3", print_hash_value);
    transparent_crc(p_649->g_580.f4, "p_649->g_580.f4", print_hash_value);
    transparent_crc(p_649->g_580.f5, "p_649->g_580.f5", print_hash_value);
    transparent_crc(p_649->g_580.f6, "p_649->g_580.f6", print_hash_value);
    transparent_crc(p_649->g_580.f7, "p_649->g_580.f7", print_hash_value);
    transparent_crc(p_649->g_580.f8, "p_649->g_580.f8", print_hash_value);
    transparent_crc(p_649->g_598.x, "p_649->g_598.x", print_hash_value);
    transparent_crc(p_649->g_598.y, "p_649->g_598.y", print_hash_value);
    transparent_crc(p_649->g_598.z, "p_649->g_598.z", print_hash_value);
    transparent_crc(p_649->g_598.w, "p_649->g_598.w", print_hash_value);
    transparent_crc(p_649->g_599.s0, "p_649->g_599.s0", print_hash_value);
    transparent_crc(p_649->g_599.s1, "p_649->g_599.s1", print_hash_value);
    transparent_crc(p_649->g_599.s2, "p_649->g_599.s2", print_hash_value);
    transparent_crc(p_649->g_599.s3, "p_649->g_599.s3", print_hash_value);
    transparent_crc(p_649->g_599.s4, "p_649->g_599.s4", print_hash_value);
    transparent_crc(p_649->g_599.s5, "p_649->g_599.s5", print_hash_value);
    transparent_crc(p_649->g_599.s6, "p_649->g_599.s6", print_hash_value);
    transparent_crc(p_649->g_599.s7, "p_649->g_599.s7", print_hash_value);
    transparent_crc(p_649->g_599.s8, "p_649->g_599.s8", print_hash_value);
    transparent_crc(p_649->g_599.s9, "p_649->g_599.s9", print_hash_value);
    transparent_crc(p_649->g_599.sa, "p_649->g_599.sa", print_hash_value);
    transparent_crc(p_649->g_599.sb, "p_649->g_599.sb", print_hash_value);
    transparent_crc(p_649->g_599.sc, "p_649->g_599.sc", print_hash_value);
    transparent_crc(p_649->g_599.sd, "p_649->g_599.sd", print_hash_value);
    transparent_crc(p_649->g_599.se, "p_649->g_599.se", print_hash_value);
    transparent_crc(p_649->g_599.sf, "p_649->g_599.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_649->g_603[i][j][k].f0, "p_649->g_603[i][j][k].f0", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f1, "p_649->g_603[i][j][k].f1", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f2, "p_649->g_603[i][j][k].f2", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f3, "p_649->g_603[i][j][k].f3", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f4, "p_649->g_603[i][j][k].f4", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f5, "p_649->g_603[i][j][k].f5", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f6, "p_649->g_603[i][j][k].f6", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f7, "p_649->g_603[i][j][k].f7", print_hash_value);
                transparent_crc(p_649->g_603[i][j][k].f8, "p_649->g_603[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_649->g_618.f0, "p_649->g_618.f0", print_hash_value);
    transparent_crc(p_649->g_618.f1, "p_649->g_618.f1", print_hash_value);
    transparent_crc(p_649->g_618.f2, "p_649->g_618.f2", print_hash_value);
    transparent_crc(p_649->g_618.f3, "p_649->g_618.f3", print_hash_value);
    transparent_crc(p_649->g_618.f4, "p_649->g_618.f4", print_hash_value);
    transparent_crc(p_649->g_618.f5, "p_649->g_618.f5", print_hash_value);
    transparent_crc(p_649->g_618.f6, "p_649->g_618.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_649->g_648[i][j].f0, "p_649->g_648[i][j].f0", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f1, "p_649->g_648[i][j].f1", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f2, "p_649->g_648[i][j].f2", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f3, "p_649->g_648[i][j].f3", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f4, "p_649->g_648[i][j].f4", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f5, "p_649->g_648[i][j].f5", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f6, "p_649->g_648[i][j].f6", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f7, "p_649->g_648[i][j].f7", print_hash_value);
            transparent_crc(p_649->g_648[i][j].f8, "p_649->g_648[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_649->v_collective, "p_649->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 70; i++)
            transparent_crc(p_649->g_special_values[i + 70 * get_linear_group_id()], "p_649->g_special_values[i + 70 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 70; i++)
            transparent_crc(p_649->l_special_values[i], "p_649->l_special_values[i]", print_hash_value);
    transparent_crc(p_649->l_comm_values[get_linear_local_id()], "p_649->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_649->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()], "p_649->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
