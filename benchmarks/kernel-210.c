// --atomics 25 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,23,7 -l 17,1,1
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

__constant uint32_t permutations[10][17] = {
{10,12,6,8,2,5,16,1,14,0,15,4,9,13,7,11,3}, // permutation 0
{10,7,0,15,13,5,2,14,16,4,1,9,6,11,3,8,12}, // permutation 1
{13,15,16,4,9,10,7,8,5,6,14,11,2,12,1,0,3}, // permutation 2
{8,10,6,11,7,15,4,0,3,5,13,16,1,2,14,12,9}, // permutation 3
{15,0,7,3,16,4,1,12,14,11,13,10,9,5,8,6,2}, // permutation 4
{1,7,14,3,16,2,10,13,9,5,8,0,12,4,11,6,15}, // permutation 5
{5,11,3,16,4,8,15,1,12,0,9,7,10,6,13,2,14}, // permutation 6
{10,13,3,15,5,6,12,0,8,16,4,7,2,11,14,1,9}, // permutation 7
{1,13,11,16,9,15,8,3,6,12,2,0,7,10,14,5,4}, // permutation 8
{14,0,11,8,7,12,3,4,5,9,6,13,16,15,1,2,10} // permutation 9
};

// Seed: 1601377604

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
};

struct S1 {
   int64_t  f0;
   uint64_t  f1;
};

union U2 {
   int8_t * f0;
   int8_t * f1;
};

union U3 {
   struct S0  f0;
   uint16_t  f1;
   volatile uint32_t  f2;
   int8_t * volatile  f3;
};

union U4 {
   volatile uint64_t  f0;
   int8_t * f1;
   volatile struct S1  f2;
   volatile uint8_t  f3;
   volatile int16_t  f4;
};

struct S5 {
    int8_t g_6;
    int32_t g_86;
    int32_t g_105;
    int32_t *g_104;
    int8_t *g_126;
    int8_t **g_125;
    int16_t g_139;
    uint8_t g_140[3][2];
    VECTOR(int16_t, 16) g_334;
    uint64_t g_338;
    struct S1 g_342;
    struct S1 *g_341;
    int32_t g_349;
    VECTOR(int8_t, 8) g_359;
    int32_t g_373;
    volatile uint32_t g_374;
    volatile union U3 g_384;
    volatile union U3 *g_383;
    VECTOR(uint8_t, 4) g_408;
    int32_t * volatile g_411;
    int32_t ** volatile g_412;
    uint8_t g_420;
    uint32_t g_527;
    uint16_t g_536[9];
    int32_t ** volatile g_538;
    struct S0 g_542;
    struct S0 * volatile g_541[6][7];
    struct S0 g_544;
    union U4 g_555;
    volatile struct S0 g_556;
    uint32_t g_578;
    int32_t ** volatile g_590;
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
struct S1  func_1(struct S5 * p_592);
int32_t * func_3(int8_t * p_4, struct S5 * p_592);
int32_t * func_9(uint32_t  p_10, int8_t * p_11, struct S5 * p_592);
int8_t  func_17(int8_t * p_18, int32_t * p_19, int8_t * p_20, int16_t  p_21, struct S5 * p_592);
int32_t * func_22(int8_t * p_23, struct S5 * p_592);
int8_t * func_93(uint64_t  p_94, uint32_t  p_95, struct S5 * p_592);
uint64_t  func_98(uint64_t  p_99, int16_t  p_100, int8_t ** p_101, uint64_t  p_102, uint64_t  p_103, struct S5 * p_592);
uint16_t  func_112(int8_t ** p_113, struct S5 * p_592);
int8_t ** func_114(int32_t * p_115, int8_t ** p_116, int8_t * p_117, struct S5 * p_592);
int8_t ** func_119(int8_t ** p_120, int64_t  p_121, int64_t  p_122, int8_t * p_123, uint32_t  p_124, struct S5 * p_592);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_592->g_comm_values p_592->g_6 p_592->g_349 p_592->g_125 p_592->g_126 p_592->g_104 p_592->g_105 p_592->g_342.f0 p_592->g_374 p_592->g_359 p_592->g_334 p_592->g_383 p_592->g_140 p_592->g_411 p_592->g_412 p_592->g_420 p_592->g_384 p_592->g_373 p_592->g_536 p_592->g_408 p_592->g_538 p_592->g_541 p_592->g_590
 * writes: p_592->g_6 p_592->g_86 p_592->g_338 p_592->g_349 p_592->g_105 p_592->g_104 p_592->g_374 p_592->g_383 p_592->g_420 p_592->g_527 p_592->g_140 p_592->g_342.f0
 */
struct S1  func_1(struct S5 * p_592)
{ /* block id: 4 */
    uint16_t l_2 = 0UL;
    int8_t *l_5[7] = {&p_592->g_6,&p_592->g_6,&p_592->g_6,&p_592->g_6,&p_592->g_6,&p_592->g_6,&p_592->g_6};
    int32_t **l_589 = (void*)0;
    struct S1 l_591[1] = {{1L,0xC5BA335591EE0BE1L}};
    int i;
    l_2 &= p_592->g_comm_values[p_592->tid];
    (*p_592->g_590) = func_3(l_5[1], p_592);
    return l_591[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_6 p_592->g_349 p_592->g_125 p_592->g_126 p_592->g_104 p_592->g_105 p_592->g_342.f0 p_592->g_374 p_592->g_359 p_592->g_334 p_592->g_383 p_592->g_140 p_592->g_411 p_592->g_412 p_592->g_420 p_592->g_384 p_592->g_373 p_592->g_536 p_592->g_408 p_592->g_538 p_592->g_541
 * writes: p_592->g_6 p_592->g_86 p_592->g_338 p_592->g_349 p_592->g_105 p_592->g_104 p_592->g_374 p_592->g_383 p_592->g_420 p_592->g_527 p_592->g_140 p_592->g_342.f0
 */
int32_t * func_3(int8_t * p_4, struct S5 * p_592)
{ /* block id: 6 */
    VECTOR(uint16_t, 4) l_14 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65531UL), 65531UL);
    int8_t *l_24 = &p_592->g_6;
    int32_t *l_106 = (void*)0;
    struct S1 l_127 = {-6L,0xE42A34357C3C58E2L};
    int32_t l_335[9] = {0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L,0x2BFD04F1L};
    uint64_t *l_417 = (void*)0;
    VECTOR(uint64_t, 8) l_528 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x1F79E3832B3C4D1DL), 0x1F79E3832B3C4D1DL), 0x1F79E3832B3C4D1DL, 1UL, 0x1F79E3832B3C4D1DL);
    uint32_t l_569[8][6][5] = {{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}},{{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL},{0xC53270E2L,1UL,0x0E724027L,0x6F608BDFL,0x8DE6857FL}}};
    int i, j, k;
    for (p_592->g_6 = (-3); (p_592->g_6 == 28); p_592->g_6 = safe_add_func_uint8_t_u_u(p_592->g_6, 7))
    { /* block id: 9 */
        int16_t l_109 = 0x2A98L;
        int32_t *l_118 = &p_592->g_105;
        int8_t ***l_148 = &p_592->g_125;
        int16_t *l_333 = (void*)0;
        uint64_t *l_336 = (void*)0;
        uint64_t *l_337 = &p_592->g_338;
        (*p_592->g_412) = func_9((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_14.yyzywxzywxzwwyxw)).s9, (safe_add_func_uint32_t_u_u((+(func_17(p_4, func_22(l_24, p_592), func_93(((*l_337) = (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))((+(p_592->g_334.s5 |= (func_98((p_592->g_104 == l_106), (p_592->g_139 = ((((~(safe_div_func_uint64_t_u_u(((l_109 || (safe_rshift_func_uint16_t_u_s(func_112(((*l_148) = func_114(l_118, func_119(p_592->g_125, (((((l_127 , (*p_4)) <= (*l_118)) < 0x4F09919FE58D0190L) < (*l_118)) ^ 8L), l_127.f0, l_24, (*l_118), p_592), p_4, p_592)), p_592), 3))) > 7L), FAKE_DIVERGE(p_592->local_0_offset, get_local_id(0), 10)))) > p_592->g_6) , &p_592->g_105) != &p_592->g_105)), &p_592->g_126, p_592->g_comm_values[p_592->tid], p_592->g_comm_values[p_592->tid], p_592) == p_592->g_comm_values[p_592->tid]))), p_592->g_comm_values[p_592->tid], 1L, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x65AFL)), 1L)).s7, l_335[7])) | 0UL) ^ 0x0C3F74C8L)), p_592->g_6, p_592), l_335[6], p_592) , 0x65FE5795L)), l_109)))), &p_592->g_6, p_592);
        if ((atomic_inc(&p_592->g_atomic_input[25 * get_linear_group_id() + 3]) == 4))
        { /* block id: 242 */
            int32_t l_414 = 0x2508C986L;
            int32_t *l_413 = &l_414;
            int32_t *l_415 = &l_414;
            int32_t *l_416[7][7][5] = {{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}},{{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414},{&l_414,&l_414,&l_414,(void*)0,&l_414}}};
            int i, j, k;
            l_416[1][5][2] = (l_415 = l_413);
            unsigned int result = 0;
            result += l_414;
            atomic_add(&p_592->g_special_values[25 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 245 */
            (1 + 1);
        }
    }
    if ((l_417 != (p_592->g_349 , &p_592->g_338)))
    { /* block id: 249 */
        int32_t *l_418 = &p_592->g_86;
        int32_t *l_419[7] = {&p_592->g_349,&p_592->g_105,&p_592->g_349,&p_592->g_349,&p_592->g_105,&p_592->g_349,&p_592->g_349};
        int i;
        ++p_592->g_420;
        if ((atomic_inc(&p_592->l_atomic_input[0]) == 8))
        { /* block id: 252 */
            int32_t l_423 = 1L;
            int32_t *l_481 = (void*)0;
            int32_t *l_482 = &l_423;
            VECTOR(int32_t, 8) l_483 = (VECTOR(int32_t, 8))(0x440D906DL, (VECTOR(int32_t, 4))(0x440D906DL, (VECTOR(int32_t, 2))(0x440D906DL, 0x54914CB3L), 0x54914CB3L), 0x54914CB3L, 0x440D906DL, 0x54914CB3L);
            VECTOR(int32_t, 16) l_484 = (VECTOR(int32_t, 16))(0x100D06D4L, (VECTOR(int32_t, 4))(0x100D06D4L, (VECTOR(int32_t, 2))(0x100D06D4L, 0x5335A427L), 0x5335A427L), 0x5335A427L, 0x100D06D4L, 0x5335A427L, (VECTOR(int32_t, 2))(0x100D06D4L, 0x5335A427L), (VECTOR(int32_t, 2))(0x100D06D4L, 0x5335A427L), 0x100D06D4L, 0x5335A427L, 0x100D06D4L, 0x5335A427L);
            VECTOR(int32_t, 8) l_485 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x642F0A6DL), 0x642F0A6DL), 0x642F0A6DL, 1L, 0x642F0A6DL);
            int i;
            for (l_423 = (-3); (l_423 > (-22)); l_423--)
            { /* block id: 255 */
                int32_t l_426[9][3][6] = {{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}},{{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)},{7L,0x44300B70L,2L,0x44300B70L,7L,(-1L)}}};
                uint64_t l_472 = 1UL;
                uint64_t l_475 = 18446744073709551606UL;
                union U3 l_476 = {{0x57L,0x2B79D1A2L,0UL}};/* VOLATILE GLOBAL l_476 */
                int16_t l_477 = 0L;
                uint32_t l_478[6] = {4294967291UL,0x602BBFD7L,4294967291UL,4294967291UL,0x602BBFD7L,4294967291UL};
                struct S0 l_479 = {252UL,1L,1UL};/* VOLATILE GLOBAL l_479 */
                struct S0 l_480 = {255UL,0x0A6A0F4BL,0xB367487BL};/* VOLATILE GLOBAL l_480 */
                int i, j, k;
                for (l_426[1][0][0] = 0; (l_426[1][0][0] <= 26); ++l_426[1][0][0])
                { /* block id: 258 */
                    struct S1 l_429 = {0x156D67BE5153D8A8L,1UL};
                    struct S1 l_430 = {0x244D42F064A6C492L,0x84B1C78EB67EAEB6L};
                    union U3 l_431 = {{247UL,5L,0UL}};/* VOLATILE GLOBAL l_431 */
                    int16_t l_432[3];
                    VECTOR(int32_t, 8) l_448 = (VECTOR(int32_t, 8))(0x5B5D9E4AL, (VECTOR(int32_t, 4))(0x5B5D9E4AL, (VECTOR(int32_t, 2))(0x5B5D9E4AL, 0x3BAF5DD9L), 0x3BAF5DD9L), 0x3BAF5DD9L, 0x5B5D9E4AL, 0x3BAF5DD9L);
                    int32_t l_449 = 1L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_432[i] = 0x1218L;
                    l_430 = l_429;
                    if ((l_431 , l_432[0]))
                    { /* block id: 260 */
                        uint32_t l_433[2];
                        union U2 l_437[5] = {{0},{0},{0},{0},{0}};
                        union U2 *l_436 = &l_437[4];
                        union U2 *l_438 = &l_437[3];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_433[i] = 1UL;
                        --l_433[0];
                        l_438 = (l_436 = (void*)0);
                    }
                    else
                    { /* block id: 264 */
                        uint32_t l_439 = 0x23ECC9A0L;
                        int32_t l_442 = 0x0978E613L;
                        union U3 l_445 = {{0xA2L,0x15E8C1CBL,0x47781DEDL}};/* VOLATILE GLOBAL l_445 */
                        union U3 *l_444 = &l_445;
                        union U3 **l_443 = &l_444;
                        union U3 **l_446[4][5][10] = {{{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444}},{{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444}},{{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444}},{{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444},{&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444}}};
                        struct S1 l_447 = {0L,2UL};
                        int i, j, k;
                        ++l_439;
                        l_442 = (-2L);
                        l_446[0][0][0] = (l_443 = (void*)0);
                        l_430 = l_447;
                    }
                    if ((l_449 |= ((VECTOR(int32_t, 4))(l_448.s7337)).w))
                    { /* block id: 272 */
                        union U2 l_450[5][1][10] = {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}};
                        union U2 l_451[4] = {{0},{0},{0},{0}};
                        uint8_t l_452[5][3][5] = {{{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL}},{{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL}},{{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL}},{{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL}},{{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL},{0x9EL,0x9EL,0x49L,0xC1L,0x1CL}}};
                        uint16_t l_453 = 1UL;
                        int16_t l_454[1];
                        int32_t l_455 = 0x10C8980CL;
                        uint8_t l_456 = 0x4FL;
                        int32_t l_459 = (-7L);
                        int16_t l_460 = 0x613BL;
                        int8_t l_461 = 0x6FL;
                        uint16_t l_462[4];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_454[i] = 0x50A4L;
                        for (i = 0; i < 4; i++)
                            l_462[i] = 0x0324L;
                        l_448.s3 = (((l_451[3] = l_450[1][0][7]) , l_452[2][0][2]) , (l_454[0] ^= l_453));
                        --l_456;
                        l_462[3]++;
                    }
                    else
                    { /* block id: 278 */
                        int32_t l_465 = 0L;
                        uint16_t l_466 = 65535UL;
                        uint64_t l_469 = 18446744073709551615UL;
                        VECTOR(int32_t, 8) l_470 = (VECTOR(int32_t, 8))(0x161D9CC6L, (VECTOR(int32_t, 4))(0x161D9CC6L, (VECTOR(int32_t, 2))(0x161D9CC6L, (-1L)), (-1L)), (-1L), 0x161D9CC6L, (-1L));
                        int32_t *l_471 = &l_465;
                        int i;
                        l_466++;
                        l_448.s5 ^= l_469;
                        l_471 = (((VECTOR(int32_t, 8))(l_470.s12263456)).s2 , (void*)0);
                    }
                }
                l_472++;
                l_480 = ((((l_475 , l_476) , l_477) , l_478[0]) , l_479);
            }
            l_482 = l_481;
            if (((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_483.s3364366731540461)).s8a, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_484.s62cf80e62219ecf2)).s6662)).lo, ((VECTOR(int32_t, 2))(l_485.s60))))).hi)
            { /* block id: 288 */
                VECTOR(int32_t, 16) l_486 = (VECTOR(int32_t, 16))(0x4A19302AL, (VECTOR(int32_t, 4))(0x4A19302AL, (VECTOR(int32_t, 2))(0x4A19302AL, 1L), 1L), 1L, 0x4A19302AL, 1L, (VECTOR(int32_t, 2))(0x4A19302AL, 1L), (VECTOR(int32_t, 2))(0x4A19302AL, 1L), 0x4A19302AL, 1L, 0x4A19302AL, 1L);
                int32_t *l_500 = (void*)0;
                int8_t l_501 = 0x4CL;
                int i;
                for (l_486.sf = (-11); (l_486.sf == (-9)); l_486.sf = safe_add_func_uint64_t_u_u(l_486.sf, 9))
                { /* block id: 291 */
                    VECTOR(int32_t, 2) l_489 = (VECTOR(int32_t, 2))(0x7D40EFD2L, 0x2C9094E7L);
                    struct S0 l_490 = {1UL,5L,0x3AD9F3A6L};/* VOLATILE GLOBAL l_490 */
                    struct S0 l_491[5] = {{5UL,0x221DC89FL,0x1A9DF629L},{5UL,0x221DC89FL,0x1A9DF629L},{5UL,0x221DC89FL,0x1A9DF629L},{5UL,0x221DC89FL,0x1A9DF629L},{5UL,0x221DC89FL,0x1A9DF629L}};
                    int16_t l_492 = (-4L);
                    int32_t l_498 = 0L;
                    uint32_t l_499 = 4294967295UL;
                    int i;
                    l_491[1] = (((VECTOR(int32_t, 2))(l_489.xx)).hi , l_490);
                    if (l_492)
                    { /* block id: 293 */
                        int32_t l_494[1][3][7];
                        int32_t *l_493 = &l_494[0][0][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_494[i][j][k] = 1L;
                            }
                        }
                        l_482 = (l_481 = l_493);
                    }
                    else
                    { /* block id: 296 */
                        VECTOR(int32_t, 4) l_495 = (VECTOR(int32_t, 4))(0x3BFC4A94L, (VECTOR(int32_t, 2))(0x3BFC4A94L, 0x6208E707L), 0x6208E707L);
                        uint64_t l_496 = 7UL;
                        uint32_t l_497 = 1UL;
                        int i;
                        l_495.y = ((VECTOR(int32_t, 4))(l_495.yzyw)).z;
                        l_497 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x29BAC429L, 0L)))).even , l_496);
                    }
                    l_499 |= l_498;
                }
                l_500 = l_500;
                l_485.s7 ^= l_501;
            }
            else
            { /* block id: 304 */
                uint32_t l_502[5][10] = {{0x8088FC1DL,0xB4D766E8L,4294967292UL,0x85AAEBE2L,4294967292UL,0xB4D766E8L,0x8088FC1DL,5UL,0xA727A69BL,0xA727A69BL},{0x8088FC1DL,0xB4D766E8L,4294967292UL,0x85AAEBE2L,4294967292UL,0xB4D766E8L,0x8088FC1DL,5UL,0xA727A69BL,0xA727A69BL},{0x8088FC1DL,0xB4D766E8L,4294967292UL,0x85AAEBE2L,4294967292UL,0xB4D766E8L,0x8088FC1DL,5UL,0xA727A69BL,0xA727A69BL},{0x8088FC1DL,0xB4D766E8L,4294967292UL,0x85AAEBE2L,4294967292UL,0xB4D766E8L,0x8088FC1DL,5UL,0xA727A69BL,0xA727A69BL},{0x8088FC1DL,0xB4D766E8L,4294967292UL,0x85AAEBE2L,4294967292UL,0xB4D766E8L,0x8088FC1DL,5UL,0xA727A69BL,0xA727A69BL}};
                VECTOR(uint16_t, 4) l_503 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x647EL), 0x647EL);
                union U2 l_504 = {0};
                int64_t l_505 = 0x647A8E12A979A264L;
                int32_t l_506 = 0x225C372FL;
                union U3 l_509[2][7] = {{{{1UL,-1L,0x6E97808CL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}},{{247UL,-10L,0x15F8A04FL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}},{{1UL,-1L,0x6E97808CL}},{{1UL,-1L,0x6E97808CL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}}},{{{1UL,-1L,0x6E97808CL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}},{{247UL,-10L,0x15F8A04FL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}},{{1UL,-1L,0x6E97808CL}},{{1UL,-1L,0x6E97808CL}},{{0x5DL,0x20A87B73L,0x8889BF8CL}}}};
                union U3 *l_508 = &l_509[1][1];
                union U3 **l_507[6] = {&l_508,&l_508,&l_508,&l_508,&l_508,&l_508};
                int i, j;
                l_485.s6 |= l_502[4][1];
                l_484.s9 = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_503.yx)).yyxx)).w , ((l_504 , l_505) , (l_506 , (-1L))));
                l_507[4] = (void*)0;
            }
            unsigned int result = 0;
            result += l_423;
            result += l_483.s7;
            result += l_483.s6;
            result += l_483.s5;
            result += l_483.s4;
            result += l_483.s3;
            result += l_483.s2;
            result += l_483.s1;
            result += l_483.s0;
            result += l_484.sf;
            result += l_484.se;
            result += l_484.sd;
            result += l_484.sc;
            result += l_484.sb;
            result += l_484.sa;
            result += l_484.s9;
            result += l_484.s8;
            result += l_484.s7;
            result += l_484.s6;
            result += l_484.s5;
            result += l_484.s4;
            result += l_484.s3;
            result += l_484.s2;
            result += l_484.s1;
            result += l_484.s0;
            result += l_485.s7;
            result += l_485.s6;
            result += l_485.s5;
            result += l_485.s4;
            result += l_485.s3;
            result += l_485.s2;
            result += l_485.s1;
            result += l_485.s0;
            atomic_add(&p_592->l_special_values[0], result);
        }
        else
        { /* block id: 309 */
            (1 + 1);
        }
    }
    else
    { /* block id: 312 */
        uint64_t l_524 = 0x24DAF0A9914BBE97L;
        uint32_t *l_525 = (void*)0;
        uint32_t *l_526 = &p_592->g_527;
        uint8_t *l_535 = &p_592->g_140[2][0];
        int32_t *l_550 = (void*)0;
        VECTOR(int32_t, 8) l_551 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4B335A1FL), 0x4B335A1FL), 0x4B335A1FL, 1L, 0x4B335A1FL);
        int8_t **l_582[8];
        int i;
        for (i = 0; i < 8; i++)
            l_582[i] = &l_24;
        if ((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((0x0A2A4DAAF7661EF7L < (safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(7UL, ((*l_535) = ((*p_592->g_383) , (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((FAKE_DIVERGE(p_592->local_0_offset, get_local_id(0), 10) <= ((*l_526) = l_524)), (l_524 != ((VECTOR(uint64_t, 8))(l_528.s21015065)).s2))), 3)), (l_524 != ((safe_rshift_func_uint8_t_u_s(255UL, 1)) , ((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((GROUP_DIVERGE(2, 1) ^ (l_417 == (void*)0)), 0UL)), l_524)) , p_592->g_373))))))), ((VECTOR(uint8_t, 2))(255UL)), l_524, FAKE_DIVERGE(p_592->local_2_offset, get_local_id(2), 10), 0x8DL, 255UL)).even)).z && 0x36L), p_592->g_536[3]))) != p_592->g_105) & p_592->g_536[3]), FAKE_DIVERGE(p_592->global_2_offset, get_global_id(2), 10))), l_524)) | p_592->g_408.x), l_524)))
        { /* block id: 315 */
            int32_t *l_537 = (void*)0;
            struct S0 *l_543 = &p_592->g_544;
            int32_t *l_545 = &p_592->g_105;
            (*p_592->g_538) = l_537;
            (*l_545) ^= (safe_rshift_func_uint16_t_u_s((p_592->g_541[1][3] != l_543), 4));
        }
        else
        { /* block id: 318 */
            uint64_t l_548 = 0xA23963D65ACDB39DL;
            int32_t *l_553 = &l_335[7];
            uint32_t l_554 = 4294967295UL;
            struct S1 *l_581 = &p_592->g_342;
            for (p_592->g_342.f0 = (-18); (p_592->g_342.f0 != (-26)); --p_592->g_342.f0)
            { /* block id: 321 */
                int32_t **l_549[7][4][9] = {{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}},{{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0},{&p_592->g_104,&l_106,(void*)0,&p_592->g_104,&l_106,&l_106,&l_106,(void*)0,(void*)0}}};
                int32_t *l_552[4][8] = {{&p_592->g_105,&p_592->g_105,&l_335[8],&l_335[6],&l_335[3],&l_335[6],&l_335[8],&p_592->g_105},{&p_592->g_105,&p_592->g_105,&l_335[8],&l_335[6],&l_335[3],&l_335[6],&l_335[8],&p_592->g_105},{&p_592->g_105,&p_592->g_105,&l_335[8],&l_335[6],&l_335[3],&l_335[6],&l_335[8],&p_592->g_105},{&p_592->g_105,&p_592->g_105,&l_335[8],&l_335[6],&l_335[3],&l_335[6],&l_335[8],&p_592->g_105}};
                int i, j, k;
                if (l_548)
                    break;
                l_550 = (l_106 = (void*)0);
            }
        }
    }
    return (*p_592->g_538);
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_374 p_592->g_359 p_592->g_334 p_592->g_383 p_592->g_408 p_592->g_86 p_592->g_6 p_592->g_349 p_592->g_140 p_592->g_411
 * writes: p_592->g_374 p_592->g_383 p_592->g_139 p_592->g_349
 */
int32_t * func_9(uint32_t  p_10, int8_t * p_11, struct S5 * p_592)
{ /* block id: 225 */
    int32_t *l_372[10][4] = {{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86},{&p_592->g_86,&p_592->g_86,&p_592->g_86,&p_592->g_86}};
    int32_t l_410 = 5L;
    int i, j;
    p_592->g_374++;
    if ((safe_add_func_uint64_t_u_u(p_592->g_359.s6, (safe_div_func_int8_t_s_s((+(safe_unary_minus_func_uint8_t_u(p_592->g_334.s9))), (-1L))))))
    { /* block id: 227 */
        int32_t *l_382 = &p_592->g_105;
        return l_382;
    }
    else
    { /* block id: 229 */
        volatile union U3 **l_385 = &p_592->g_383;
        int32_t l_386 = (-10L);
        int32_t l_387 = 0x34AFE940L;
        VECTOR(uint16_t, 8) l_390 = (VECTOR(uint16_t, 8))(0x4464L, (VECTOR(uint16_t, 4))(0x4464L, (VECTOR(uint16_t, 2))(0x4464L, 0x04B7L), 0x04B7L), 0x04B7L, 0x4464L, 0x04B7L);
        VECTOR(int16_t, 16) l_391 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int16_t, 2))((-4L), 1L), (VECTOR(int16_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
        int8_t **l_394[8] = {&p_592->g_126,&p_592->g_126,&p_592->g_126,&p_592->g_126,&p_592->g_126,&p_592->g_126,&p_592->g_126,&p_592->g_126};
        struct S1 l_399 = {0x2E86ED72C7CA2206L,0x58930E7A6A168FF8L};
        int32_t **l_407 = &l_372[8][0];
        int16_t *l_409 = &p_592->g_139;
        int i;
        (*l_385) = p_592->g_383;
        l_387 ^= (p_10 && l_386);
        (*p_592->g_411) = (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_390.s7601)).zyzzywxxzxywzzzz)).s7, (((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(l_391.s296d))))).hi))))).lo , (l_410 = (safe_lshift_func_int8_t_s_u((-1L), ((l_386 = (&p_11 != l_394[6])) , ((((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(0L, 1L)), ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*l_409) = (((l_399 , (l_386 = p_592->g_359.s7)) != p_10) && (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((((*l_407) = &l_387) == (void*)0), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_592->g_408.zwwxwxxwzzyywxxy)))))).se)), p_592->g_86)), 6)))))), 0x0134L)), l_410)) >= 6L), 0L, (*p_11), (**l_407), ((VECTOR(int8_t, 2))(3L)), 0L, ((VECTOR(int8_t, 2))(0x7FL)), 0x7EL, ((VECTOR(int8_t, 2))(0x00L)), (-1L))).lo)), ((VECTOR(int8_t, 8))(0x70L))))).s4 | (*p_11)) <= p_592->g_140[2][0])))))) > (*p_11)) & l_391.sf)));
    }
    return &p_592->g_349;
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_104 p_592->g_105 p_592->g_342.f0 p_592->g_349
 * writes: p_592->g_105 p_592->g_86 p_592->g_104 p_592->g_349
 */
int8_t  func_17(int8_t * p_18, int32_t * p_19, int8_t * p_20, int16_t  p_21, struct S5 * p_592)
{ /* block id: 214 */
    VECTOR(int8_t, 8) l_358 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1AL), 0x1AL), 0x1AL, 1L, 0x1AL);
    int32_t *l_362 = &p_592->g_105;
    int32_t l_364 = 0x05F9C43AL;
    int32_t l_370 = 0x0AC11C0FL;
    int32_t l_371[10][2][9] = {{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}},{{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L},{0x6982659EL,(-2L),0L,1L,0x2FDC8AD3L,4L,0x0680B7E3L,0L,1L}}};
    int i, j, k;
    (*p_592->g_104) = (*p_592->g_104);
    for (p_21 = 14; (p_21 >= 21); p_21 = safe_add_func_int16_t_s_s(p_21, 9))
    { /* block id: 218 */
        int32_t **l_352 = &p_592->g_104;
        int32_t l_355 = 0x55149B85L;
        int32_t **l_361[1];
        VECTOR(int8_t, 2) l_363 = (VECTOR(int8_t, 2))(0L, (-1L));
        int64_t *l_365 = (void*)0;
        int64_t *l_366 = (void*)0;
        int64_t *l_367 = (void*)0;
        int64_t *l_368 = (void*)0;
        int64_t *l_369 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_361[i] = (void*)0;
        l_371[9][0][7] ^= ((p_19 != ((*l_352) = func_22(p_20, p_592))) >= (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_592->global_2_offset, get_global_id(2), 10), ((0xCA7C05293A67368AL || (l_370 |= (l_355 < (safe_sub_func_uint8_t_u_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(l_358.s32)).xxxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_592->g_359.s24432245)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(0x67L, (-9L))).yxxyyyyx, ((VECTOR(int8_t, 8))((safe_unary_minus_func_int16_t_s((p_19 == (l_362 = (void*)0)))), ((VECTOR(int8_t, 2))(l_363.yy)), ((*p_592->g_341) , ((((((!p_21) >= 0x562BL) < p_592->g_338) > p_592->g_105) , GROUP_DIVERGE(1, 1)) || p_592->g_6)), l_364, 0x41L, (-8L), 0L)), ((VECTOR(int8_t, 8))((-3L)))))))).s327f))).wxwxyxxzxzyywzwz, ((VECTOR(int8_t, 16))(0x3EL))))).hi, ((VECTOR(int8_t, 8))((-5L)))))).s26)).hi & FAKE_DIVERGE(p_592->global_1_offset, get_global_id(1), 10)), 0x78L))))) || p_592->g_342.f0))));
    }
    return l_358.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_86
 * writes: p_592->g_86
 */
int32_t * func_22(int8_t * p_23, struct S5 * p_592)
{ /* block id: 10 */
    uint32_t l_89 = 4294967290UL;
    int32_t *l_92 = (void*)0;
    if ((atomic_inc(&p_592->l_atomic_input[12]) == 3))
    { /* block id: 12 */
        int32_t l_25[6][10] = {{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L},{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L},{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L},{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L},{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L},{0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L,0L,0x7C72FA5DL,0x140C9BA5L,0x7C72FA5DL,0L}};
        union U4 l_82 = {1UL};/* VOLATILE GLOBAL l_82 */
        int32_t *l_83 = &l_25[0][9];
        int32_t *l_84 = &l_25[0][9];
        int32_t *l_85[7] = {&l_25[0][9],&l_25[0][9],&l_25[0][9],&l_25[0][9],&l_25[0][9],&l_25[0][9],&l_25[0][9]};
        int i, j;
        for (l_25[0][9] = (-5); (l_25[0][9] != 0); l_25[0][9] = safe_add_func_int32_t_s_s(l_25[0][9], 7))
        { /* block id: 15 */
            uint64_t l_28 = 4UL;
            int32_t l_30 = 0x5423B19DL;
            int32_t *l_29 = &l_30;
            int32_t l_80 = 0x47F7F81CL;
            uint32_t l_81 = 4294967295UL;
            l_29 = (l_28 , (void*)0);
            for (l_28 = 0; (l_28 >= 49); l_28 = safe_add_func_uint8_t_u_u(l_28, 7))
            { /* block id: 19 */
                uint32_t l_33 = 0xDF7DC239L;
                int8_t l_71 = 2L;
                struct S0 l_72 = {1UL,0x7FE84F9EL,0xA75DD027L};/* VOLATILE GLOBAL l_72 */
                struct S0 l_73 = {0x7FL,0L,4294967295UL};/* VOLATILE GLOBAL l_73 */
                int64_t l_74 = 0x74733EF3A8CD9319L;
                int16_t l_75[7];
                VECTOR(int32_t, 4) l_76 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                uint64_t l_77 = 0UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_75[i] = 5L;
                if (l_33)
                { /* block id: 20 */
                    l_29 = (void*)0;
                }
                else
                { /* block id: 22 */
                    uint16_t l_34 = 0x197BL;
                    if (l_34)
                    { /* block id: 23 */
                        VECTOR(int32_t, 4) l_35 = (VECTOR(int32_t, 4))(0x2E26A8ACL, (VECTOR(int32_t, 2))(0x2E26A8ACL, 0x1F6657EEL), 0x1F6657EEL);
                        int16_t l_36 = 0x1A7BL;
                        union U2 l_37 = {0};
                        uint32_t l_38 = 0xB6EB5C50L;
                        VECTOR(int32_t, 8) l_39 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 3L), 3L), 3L, 7L, 3L);
                        VECTOR(int32_t, 4) l_40 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 3L), 3L);
                        uint8_t l_41 = 0x20L;
                        int8_t l_42 = (-3L);
                        VECTOR(int32_t, 16) l_43 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int32_t, 2))(6L, 1L), (VECTOR(int32_t, 2))(6L, 1L), 6L, 1L, 6L, 1L);
                        uint32_t l_44 = 0x76E66819L;
                        int32_t l_45 = 0x6DEBCD59L;
                        uint8_t l_46 = 252UL;
                        VECTOR(int32_t, 2) l_47 = (VECTOR(int32_t, 2))((-10L), 1L);
                        VECTOR(int32_t, 2) l_48 = (VECTOR(int32_t, 2))(0x511E6AC9L, 0x3D7DA5A1L);
                        VECTOR(int32_t, 8) l_49 = (VECTOR(int32_t, 8))(0x6E66DBACL, (VECTOR(int32_t, 4))(0x6E66DBACL, (VECTOR(int32_t, 2))(0x6E66DBACL, 0x1930EDDBL), 0x1930EDDBL), 0x1930EDDBL, 0x6E66DBACL, 0x1930EDDBL);
                        int8_t l_50 = 0x33L;
                        int i;
                        l_30 = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0L, 0x187C837EL, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_35.wy)).hi, (-9L), 0x12A7FAD5L, 0x778D402AL, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x1036C141L, 0x0DCE9DB3L)).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))((-1L), 0L)), (l_35.z &= (l_36 = 0x6767E792L)), ((VECTOR(int32_t, 8))((-1L), (l_37 , l_38), 1L, 0x7DA87815L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_39.s3644425706103016)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_40.yzww)).odd))), 0x0786CB52L, (-8L))).zyxzzxzzxzzzxzxy))))).s98))), 0x3E4440DBL, 1L)), 0x578FD71FL, l_41, 0x75FBD7B9L, 9L)).s7, l_42, ((VECTOR(int32_t, 4))(l_43.s0105)), 0x596AAD9FL, 0x24961F08L)).hi))).hi)).yyxyyxxyyyyyyxxx)).s0e)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_44, l_45, (-1L), 0x093F7740L)).wzwzzwzw)))), 0x535930CBL)).s04, (int32_t)(-1L)))).hi, l_46, ((VECTOR(int32_t, 4))((-8L))))), ((VECTOR(int32_t, 8))(6L)), ((VECTOR(int32_t, 8))((-3L)))))).s6;
                        l_30 = ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_47.yxxx)).wyzwwxxz, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_48.yxyyyyxxyxyxxxyx)), ((VECTOR(int32_t, 2))(l_49.s64)).yyxxyxyyxxyyxxxx))).even))).s2;
                        l_30 = l_50;
                    }
                    else
                    { /* block id: 29 */
                        uint32_t l_51 = 2UL;
                        VECTOR(int16_t, 2) l_52 = (VECTOR(int16_t, 2))((-1L), 0x7B1AL);
                        int8_t *l_54 = (void*)0;
                        int8_t **l_53 = &l_54;
                        int64_t l_55 = 0x7F6575EB91548118L;
                        uint16_t l_56 = 65535UL;
                        uint64_t l_57 = 1UL;
                        int32_t l_58 = 2L;
                        VECTOR(int32_t, 2) l_59 = (VECTOR(int32_t, 2))(0x7F8B30C5L, 1L);
                        VECTOR(int32_t, 16) l_60 = (VECTOR(int32_t, 16))(0x7816D4D4L, (VECTOR(int32_t, 4))(0x7816D4D4L, (VECTOR(int32_t, 2))(0x7816D4D4L, 0L), 0L), 0L, 0x7816D4D4L, 0L, (VECTOR(int32_t, 2))(0x7816D4D4L, 0L), (VECTOR(int32_t, 2))(0x7816D4D4L, 0L), 0x7816D4D4L, 0L, 0x7816D4D4L, 0L);
                        VECTOR(int32_t, 8) l_61 = (VECTOR(int32_t, 8))(0x2B0E7447L, (VECTOR(int32_t, 4))(0x2B0E7447L, (VECTOR(int32_t, 2))(0x2B0E7447L, 1L), 1L), 1L, 0x2B0E7447L, 1L);
                        VECTOR(int32_t, 4) l_62 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7EF71A1FL), 0x7EF71A1FL);
                        VECTOR(int32_t, 4) l_63 = (VECTOR(int32_t, 4))(0x3BA7F7E7L, (VECTOR(int32_t, 2))(0x3BA7F7E7L, 0x2CF152CEL), 0x2CF152CEL);
                        VECTOR(int32_t, 4) l_64 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-4L)), (-4L));
                        int64_t l_65 = 1L;
                        int8_t l_66[9][8][3] = {{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}},{{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L},{0x6DL,7L,0x04L}}};
                        VECTOR(int32_t, 2) l_67 = (VECTOR(int32_t, 2))(3L, 0x1008EF74L);
                        int32_t l_68 = 0x5BCCF1A0L;
                        uint64_t l_69 = 1UL;
                        int32_t l_70 = 1L;
                        int i, j, k;
                        l_52.y &= l_51;
                        l_53 = (void*)0;
                        l_56 = (l_30 = l_55);
                        l_70 = (l_67.x = ((VECTOR(int32_t, 8))(0x12788274L, 0x2F80CEF6L, (l_57 |= (-3L)), l_58, 0x57193A8FL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_59.yx)).xyxyyyyxxyyxxxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_60.sfbf9)))).yxxyxzxyyyzzxxxz))))), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_61.s2311)).wzyyxxyyyxyzxwyx)))).s86)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_62.yywxyxyzyxzyxzxz)).lo))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-4L), 0x5C1765D4L)))), ((VECTOR(int32_t, 8))(l_63.zywzyxxz)).s63))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_64.xx)), (int32_t)1L))), (-4L), 0x46A17DA6L, 1L, 0L, 0x1DE06325L, 9L)), (l_65 , 0x362DC179L), (l_60.s9 = l_66[1][6][0]), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_67.yyyx)).zwyyzxyw)).s31))).yxxx, (int32_t)(l_30 = l_68), (int32_t)l_69))), 0x733B7E8FL, 0x00028DF6L)).s46)).yyxx)).lo)).xyyyxyxy)).s1763070702542545)).sb9)), 0x00498758L)).sd, 0x08C8AB59L, 0x762E77A0L, (-2L))).lo)).yyyxyxxy, ((VECTOR(int32_t, 8))(0L))))).s3531061277236452))).even)).s60, ((VECTOR(int32_t, 2))(0x3E1FD80DL))))), 0x02054360L)).s6);
                    }
                }
                l_30 |= l_71;
                l_73 = l_72;
                ++l_77;
            }
            l_81 ^= l_80;
        }
        l_84 = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-6L), 0x3F8DAC29L)).even, 0x447E747EL, 0x0F5FB703L, 0x6A61A6B3L)).wwzxzzyz)))).s5 , l_82) , l_83);
        l_83 = l_85[6];
        unsigned int result = 0;
        int l_25_i0, l_25_i1;
        for (l_25_i0 = 0; l_25_i0 < 6; l_25_i0++) {
            for (l_25_i1 = 0; l_25_i1 < 10; l_25_i1++) {
                result += l_25[l_25_i0][l_25_i1];
            }
        }
        result += l_82.f0;
        result += l_82.f1;
        result += l_82.f2.f0;
        result += l_82.f2.f1;
        result += l_82.f3;
        result += l_82.f4;
        atomic_add(&p_592->l_special_values[12], result);
    }
    else
    { /* block id: 49 */
        (1 + 1);
    }
    for (p_592->g_86 = 1; (p_592->g_86 >= (-23)); p_592->g_86 = safe_sub_func_uint32_t_u_u(p_592->g_86, 6))
    { /* block id: 54 */
        return &p_592->g_86;
    }
    --l_89;
    return l_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_341 p_592->g_104 p_592->g_105 p_592->g_349 p_592->g_125 p_592->g_126
 * writes: p_592->g_341 p_592->g_349
 */
int8_t * func_93(uint64_t  p_94, uint32_t  p_95, struct S5 * p_592)
{ /* block id: 210 */
    struct S1 **l_343 = (void*)0;
    struct S1 **l_344 = &p_592->g_341;
    uint64_t *l_345 = &p_592->g_338;
    int32_t l_346 = 0x4265CB37L;
    int8_t l_347 = 0x60L;
    int32_t *l_348 = &p_592->g_349;
    (*l_348) &= ((VECTOR(int32_t, 8))(0x710F93FCL, 0x142FC66CL, 0x795F059BL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((p_95 ^ ((((((((~p_95) , p_94) ^ (~(((((*l_344) = p_592->g_341) == &p_592->g_342) ^ ((void*)0 == l_345)) != (0UL > p_94)))) ^ p_95) == l_346) | 0L) > l_346) < p_95)) || l_347) | l_346), 5L, (-7L), 6L)), 0x2C1FF58AL, (*p_592->g_104), 0x4B661F05L, (-8L), ((VECTOR(int32_t, 4))(6L)), l_346, (-5L), 6L, 1L)).sb3)), ((VECTOR(int32_t, 2))(0x1BEF8F1AL)), (-2L))).s3;
    return (*p_592->g_125);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_98(uint64_t  p_99, int16_t  p_100, int8_t ** p_101, uint64_t  p_102, uint64_t  p_103, struct S5 * p_592)
{ /* block id: 206 */
    return p_99;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_112(int8_t ** p_113, struct S5 * p_592)
{ /* block id: 66 */
    VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(2L, 0x29C54269L);
    int i;
    if ((atomic_inc(&p_592->l_atomic_input[9]) == 6))
    { /* block id: 68 */
        int32_t l_149 = 0x2BDBD69BL;
        uint32_t l_253 = 0x1AAEFFB6L;
        int32_t l_254 = (-10L);
        uint16_t l_255 = 0x8C67L;
        uint64_t l_256 = 1UL;
        for (l_149 = 27; (l_149 > (-8)); --l_149)
        { /* block id: 71 */
            VECTOR(int32_t, 2) l_152 = (VECTOR(int32_t, 2))(5L, 5L);
            VECTOR(int32_t, 4) l_153 = (VECTOR(int32_t, 4))(0x4D2A7965L, (VECTOR(int32_t, 2))(0x4D2A7965L, 0x18C778EFL), 0x18C778EFL);
            VECTOR(int32_t, 16) l_154 = (VECTOR(int32_t, 16))(0x5E94E36BL, (VECTOR(int32_t, 4))(0x5E94E36BL, (VECTOR(int32_t, 2))(0x5E94E36BL, 0x2B673122L), 0x2B673122L), 0x2B673122L, 0x5E94E36BL, 0x2B673122L, (VECTOR(int32_t, 2))(0x5E94E36BL, 0x2B673122L), (VECTOR(int32_t, 2))(0x5E94E36BL, 0x2B673122L), 0x5E94E36BL, 0x2B673122L, 0x5E94E36BL, 0x2B673122L);
            int16_t l_155[6][9][4] = {{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}},{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}},{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}},{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}},{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}},{{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L},{0x4666L,0x0C90L,0x7D2BL,0x4601L}}};
            int32_t *l_157 = (void*)0;
            int32_t **l_156 = &l_157;
            uint64_t l_167 = 0xD656744AC8F83BE1L;
            int i, j, k;
            l_155[0][5][0] ^= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(0x469DC8A1L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_152.xxyx)).hi, ((VECTOR(int32_t, 4))(l_153.zyzx)).even))), 0L)).wywzyxzy, ((VECTOR(int32_t, 2))(l_154.s30)).xyyxyxyy))).s5506071525431365))).s7;
            l_156 = l_156;
            for (l_152.y = (-5); (l_152.y < 10); l_152.y++)
            { /* block id: 76 */
                uint8_t l_160[7] = {0xB6L,0xB6L,0xB6L,0xB6L,0xB6L,0xB6L,0xB6L};
                int16_t l_161 = (-1L);
                int32_t l_162 = 0x3F9F1FBDL;
                uint16_t l_163 = 0xD0F5L;
                VECTOR(int32_t, 4) l_166 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x1AD61C51L), 0x1AD61C51L);
                int i;
                l_153.y ^= (l_154.s0 = l_160[1]);
                --l_163;
                l_154.s7 &= (l_153.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_166.zwzyzzwxwwwxxzxz)).sd2)), 1L, 0x021C2022L)).w);
            }
            if (l_167)
            { /* block id: 83 */
                int32_t l_168[3][7][8] = {{{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L}},{{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L}},{{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L},{1L,0L,9L,1L,0x31CF9FD1L,0x31CF9FD1L,1L,9L}}};
                int i, j, k;
                for (l_168[0][1][3] = 17; (l_168[0][1][3] <= (-22)); l_168[0][1][3] = safe_sub_func_uint64_t_u_u(l_168[0][1][3], 9))
                { /* block id: 86 */
                    int64_t l_171[3];
                    int32_t l_172 = 1L;
                    uint16_t l_173[3][9] = {{0UL,0x413EL,0x413EL,0UL,0UL,0x413EL,0x413EL,0UL,0UL},{0UL,0x413EL,0x413EL,0UL,0UL,0x413EL,0x413EL,0UL,0UL},{0UL,0x413EL,0x413EL,0UL,0UL,0x413EL,0x413EL,0UL,0UL}};
                    struct S0 *l_205 = (void*)0;
                    struct S0 l_207 = {0x37L,0x7E7F28E2L,0x9A327664L};/* VOLATILE GLOBAL l_207 */
                    struct S0 *l_206 = &l_207;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_171[i] = 0L;
                    l_173[1][6] &= (l_171[0] , l_172);
                    for (l_171[2] = 0; (l_171[2] == 1); l_171[2]++)
                    { /* block id: 90 */
                        int32_t *l_176 = (void*)0;
                        int32_t l_177 = 0x680386AEL;
                        int8_t l_178[3][2] = {{(-1L),0x53L},{(-1L),0x53L},{(-1L),0x53L}};
                        VECTOR(int64_t, 8) l_179 = (VECTOR(int64_t, 8))(0x1F1495489C1C6687L, (VECTOR(int64_t, 4))(0x1F1495489C1C6687L, (VECTOR(int64_t, 2))(0x1F1495489C1C6687L, (-1L)), (-1L)), (-1L), 0x1F1495489C1C6687L, (-1L));
                        VECTOR(int64_t, 2) l_180 = (VECTOR(int64_t, 2))((-1L), 3L);
                        VECTOR(int64_t, 2) l_181 = (VECTOR(int64_t, 2))((-1L), 7L);
                        VECTOR(int64_t, 4) l_182 = (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x00FFBC523401E5B4L), 0x00FFBC523401E5B4L);
                        VECTOR(int64_t, 16) l_183 = (VECTOR(int64_t, 16))(0x704DB0D09343FE88L, (VECTOR(int64_t, 4))(0x704DB0D09343FE88L, (VECTOR(int64_t, 2))(0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L), 0x2CA7994EB943A5B3L), 0x2CA7994EB943A5B3L, 0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L, (VECTOR(int64_t, 2))(0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L), (VECTOR(int64_t, 2))(0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L), 0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L, 0x704DB0D09343FE88L, 0x2CA7994EB943A5B3L);
                        VECTOR(int64_t, 2) l_184 = (VECTOR(int64_t, 2))(1L, 1L);
                        VECTOR(int64_t, 16) l_185 = (VECTOR(int64_t, 16))(0x364DE6C08DA6C3DDL, (VECTOR(int64_t, 4))(0x364DE6C08DA6C3DDL, (VECTOR(int64_t, 2))(0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L), 0x352EBC1667867E56L), 0x352EBC1667867E56L, 0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L, (VECTOR(int64_t, 2))(0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L), (VECTOR(int64_t, 2))(0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L), 0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L, 0x364DE6C08DA6C3DDL, 0x352EBC1667867E56L);
                        int16_t l_186 = 0L;
                        VECTOR(int64_t, 4) l_187 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3274FA118B2DAAACL), 0x3274FA118B2DAAACL);
                        VECTOR(int64_t, 16) l_188 = (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x4AC34EC5D3D3366FL), 0x4AC34EC5D3D3366FL), 0x4AC34EC5D3D3366FL, 9L, 0x4AC34EC5D3D3366FL, (VECTOR(int64_t, 2))(9L, 0x4AC34EC5D3D3366FL), (VECTOR(int64_t, 2))(9L, 0x4AC34EC5D3D3366FL), 9L, 0x4AC34EC5D3D3366FL, 9L, 0x4AC34EC5D3D3366FL);
                        VECTOR(int64_t, 4) l_189 = (VECTOR(int64_t, 4))(0x3677515FA486A707L, (VECTOR(int64_t, 2))(0x3677515FA486A707L, 1L), 1L);
                        uint32_t l_190 = 4294967289UL;
                        struct S1 l_191 = {0x7CBAB5C4C33CC853L,0x987166874D8D94FFL};
                        struct S1 l_192 = {-1L,0x5124B50EF8E2C787L};
                        struct S1 l_193 = {0L,1UL};
                        struct S1 l_194 = {0x1F7841CAC8D62DBFL,0xB1393004D836B3EBL};
                        struct S1 l_195[6][8][5] = {{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}},{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}},{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}},{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}},{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}},{{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}},{{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L},{0x3BE98369C0D2D930L,0x754E12CC2AE39112L}}}};
                        struct S1 l_196 = {-1L,0x536D2C72399D5E12L};
                        int i, j, k;
                        (*l_156) = l_176;
                        l_196 = (l_177 , (l_195[3][4][0] = (l_194 = (l_193 = ((l_178[0][1] , (l_190 = ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_179.s31347313)).lo)).odd, ((VECTOR(int64_t, 8))(0x2739A248FCCA4DEAL, 0x18B3C7FF32E4EA20L, 0x52365CF4BAEF7A6BL, ((VECTOR(int64_t, 2))((-1L), 0x63C0F9FCF56D30B1L)), ((VECTOR(int64_t, 2))(l_180.xy)), (-1L))).s34))).xyxx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_181.xy)).xxxx, ((VECTOR(int64_t, 2))(l_182.wz)).yyyy, ((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_183.s8ce81f14c923dbf3)).sa560)), (int64_t)((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_184.xyxx)).xwzyzxwzwwzzwzyy)).s6, (int64_t)((VECTOR(int64_t, 16))(l_185.s959303987118907b)).sb))).hi, (int64_t)0x6E9E647D65CAE71CL, (int64_t)l_186))))).yyyyyyyxxxyyxxyx)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_187.yyyxzzzyzxzzzwyy)))).lo, ((VECTOR(int64_t, 2))(0x3238AD5E783D5683L, 0x587E9C43DC7393B2L)).xyxyyyxy))).hi))), ((VECTOR(int64_t, 8))(l_188.sa59681a1)).odd))))).zwxxxzxwyxwxwzwz)).s0ab7))).hi, ((VECTOR(int64_t, 4))(l_189.wywz)).lo))).lo)) , (l_192 = l_191))))));
                    }
                    for (l_171[0] = 0; (l_171[0] > 6); l_171[0] = safe_add_func_uint16_t_u_u(l_171[0], 2))
                    { /* block id: 101 */
                        int16_t l_199 = 9L;
                        int32_t l_200 = (-5L);
                        int64_t l_201[10];
                        uint32_t l_202 = 0x15F6EF4AL;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_201[i] = 3L;
                        (*l_156) = (void*)0;
                        l_152.x ^= ((l_167 = (FAKE_DIVERGE(p_592->local_2_offset, get_local_id(2), 10) , 0xA6D678DD13CF1FF0L)) , 0L);
                        ++l_202;
                    }
                    l_206 = l_205;
                }
                for (l_168[2][2][6] = 3; (l_168[2][2][6] == (-12)); l_168[2][2][6]--)
                { /* block id: 111 */
                    uint8_t l_210 = 1UL;
                    int32_t l_211 = 0L;
                    union U2 l_212 = {0};
                    union U2 l_213 = {0};
                    struct S1 l_214 = {0x3D3D6E95E86104DDL,18446744073709551615UL};
                    struct S1 l_215[7][5] = {{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}},{{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL},{0x6D644B6C62EADB3BL,18446744073709551615UL}}};
                    struct S1 l_216 = {-1L,3UL};
                    struct S1 l_217 = {0x24B766E8CD0CBDD7L,1UL};
                    struct S1 l_218 = {0x40DBB42A023E6417L,0xA21A5E6A23D2193DL};
                    struct S0 **l_228 = (void*)0;
                    struct S0 l_231[5] = {{0x1EL,-4L,4294967286UL},{0x1EL,-4L,4294967286UL},{0x1EL,-4L,4294967286UL},{0x1EL,-4L,4294967286UL},{0x1EL,-4L,4294967286UL}};
                    struct S0 *l_230 = &l_231[3];
                    struct S0 **l_229 = &l_230;
                    int64_t l_232 = 0x1B83A2C7831F2CF1L;
                    union U2 l_233 = {0};
                    uint32_t l_234 = 0x32CB9F6FL;
                    int16_t l_235 = 1L;
                    uint64_t l_236 = 0x06014620883238A8L;
                    VECTOR(int8_t, 2) l_237 = (VECTOR(int8_t, 2))(0L, 0L);
                    uint8_t l_238 = 251UL;
                    uint64_t l_239 = 7UL;
                    int8_t l_240 = (-1L);
                    int i, j;
                    l_218 = ((l_211 &= l_210) , ((l_213 = l_212) , (l_217 = (l_216 = (l_215[3][3] = l_214)))));
                    for (l_214.f1 = 0; (l_214.f1 <= 41); l_214.f1++)
                    { /* block id: 120 */
                        struct S0 l_222[9][3] = {{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}},{{0x95L,-8L,0UL},{0xB3L,0x0FBA2EC1L,0UL},{0x95L,-8L,0UL}}};
                        struct S0 *l_221 = &l_222[6][0];
                        struct S0 *l_223 = (void*)0;
                        struct S1 l_224 = {0x78E1793FD4F5B5C5L,1UL};
                        union U3 l_226 = {{0UL,5L,6UL}};/* VOLATILE GLOBAL l_226 */
                        union U3 *l_225 = &l_226;
                        union U3 *l_227 = (void*)0;
                        int i, j;
                        l_223 = l_221;
                        l_215[3][3] = l_224;
                        l_227 = (l_225 = (void*)0);
                    }
                    l_229 = l_228;
                    l_153.z = (l_240 = (((l_232 , (l_233 , (l_234 , (-8L)))) , l_235) , (l_236 , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))((-4L), 0x60L)).xxyyxyyyxxxyyxyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_237.xxxx)).w, 0x7EL, 0x20L, 0x28L)).wzwyxyzyxzxzyxzx, (int8_t)l_238, (int8_t)l_239))).s523c)).xwxwxywyxyxxwxzz))).se0)))).yxyy, (int8_t)0x5CL))).lo, ((VECTOR(uint8_t, 2))(0x8FL))))), (-9L), 7L)).x, 0x6B57L, (-1L), 0L)).zyyyyzzy, ((VECTOR(uint16_t, 8))(65531UL))))).s2)));
                }
            }
            else
            { /* block id: 130 */
                int32_t l_242 = 1L;
                int32_t *l_241 = &l_242;
                int32_t *l_243 = &l_242;
                l_243 = ((*l_156) = l_241);
                (**l_156) ^= (-10L);
                for (l_242 = 18; (l_242 != 0); l_242 = safe_sub_func_int8_t_s_s(l_242, 6))
                { /* block id: 136 */
                    VECTOR(int32_t, 2) l_246 = (VECTOR(int32_t, 2))(0x27BD05B2L, 1L);
                    int i;
                    l_152.y &= ((VECTOR(int32_t, 4))(l_246.yyyy)).y;
                    for (l_246.y = (-25); (l_246.y > (-9)); l_246.y = safe_add_func_int16_t_s_s(l_246.y, 4))
                    { /* block id: 140 */
                        (*l_156) = (void*)0;
                        (*l_156) = (void*)0;
                    }
                }
            }
        }
        for (l_149 = (-24); (l_149 < 25); l_149++)
        { /* block id: 149 */
            int32_t l_252 = 1L;
            int32_t *l_251 = &l_252;
            l_251 = (void*)0;
        }
        l_254 &= l_253;
        if ((l_256 = l_255))
        { /* block id: 154 */
            int32_t l_257 = 0x61E3A921L;
            for (l_257 = 27; (l_257 >= 10); l_257 = safe_sub_func_int16_t_s_s(l_257, 1))
            { /* block id: 157 */
                VECTOR(int32_t, 16) l_260 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int32_t, 2))(5L, (-1L)), (VECTOR(int32_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
                VECTOR(int32_t, 16) l_261 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int32_t, 2))(8L, (-1L)), (VECTOR(int32_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
                int8_t l_262 = 0x1EL;
                struct S1 l_263 = {0x57C7A18799754386L,0x813A64160D235B5DL};
                uint64_t l_264 = 0x57541A58AE6F7156L;
                VECTOR(int32_t, 8) l_265 = (VECTOR(int32_t, 8))(0x21405790L, (VECTOR(int32_t, 4))(0x21405790L, (VECTOR(int32_t, 2))(0x21405790L, (-1L)), (-1L)), (-1L), 0x21405790L, (-1L));
                VECTOR(int32_t, 4) l_266 = (VECTOR(int32_t, 4))(0x2EF03B19L, (VECTOR(int32_t, 2))(0x2EF03B19L, (-4L)), (-4L));
                VECTOR(int32_t, 4) l_267 = (VECTOR(int32_t, 4))(0x5CA28C20L, (VECTOR(int32_t, 2))(0x5CA28C20L, 0x3F3CCCA3L), 0x3F3CCCA3L);
                VECTOR(int32_t, 2) l_268 = (VECTOR(int32_t, 2))((-1L), (-1L));
                uint32_t l_269 = 0x812FE4CCL;
                VECTOR(int32_t, 16) l_270 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3180F114L), 0x3180F114L), 0x3180F114L, (-1L), 0x3180F114L, (VECTOR(int32_t, 2))((-1L), 0x3180F114L), (VECTOR(int32_t, 2))((-1L), 0x3180F114L), (-1L), 0x3180F114L, (-1L), 0x3180F114L);
                VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x566BB26CL), 0x566BB26CL), 0x566BB26CL, (-7L), 0x566BB26CL, (VECTOR(int32_t, 2))((-7L), 0x566BB26CL), (VECTOR(int32_t, 2))((-7L), 0x566BB26CL), (-7L), 0x566BB26CL, (-7L), 0x566BB26CL);
                VECTOR(int32_t, 8) l_272 = (VECTOR(int32_t, 8))(0x2AED80BCL, (VECTOR(int32_t, 4))(0x2AED80BCL, (VECTOR(int32_t, 2))(0x2AED80BCL, 0x736DDC6FL), 0x736DDC6FL), 0x736DDC6FL, 0x2AED80BCL, 0x736DDC6FL);
                uint32_t l_273 = 7UL;
                VECTOR(uint32_t, 2) l_274 = (VECTOR(uint32_t, 2))(4294967295UL, 0x99978F16L);
                int16_t l_275[6][2][4] = {{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}},{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}},{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}},{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}},{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}},{{1L,0x3250L,0L,0x65C9L},{1L,0x3250L,0L,0x65C9L}}};
                int32_t l_276 = (-7L);
                int8_t l_277 = (-3L);
                int32_t l_278 = 6L;
                uint32_t l_279 = 0xBB4250DDL;
                uint32_t l_300 = 5UL;
                int i, j, k;
                if (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_260.s669c)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_261.saf)).yyyy, ((VECTOR(int32_t, 8))((l_149 = (((FAKE_DIVERGE(p_592->local_1_offset, get_local_id(1), 10) , l_262) , l_263) , 0x4BAC443FL)), 0x180EDB1EL, (-1L), 0x71EF5FA5L, l_264, 1L, (-1L), 0x6F4388EDL)).lo))), ((VECTOR(int32_t, 8))(l_265.s42763666)).odd, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-1L), 0x568C78E4L)).xyxyxyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x1BACB734L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_266.ww)), 0x67074C7DL, 0x49F8FF0CL)), ((VECTOR(int32_t, 2))((-1L), 1L)).xxyy))), ((VECTOR(int32_t, 2))(l_267.xw)), (-7L))).s30)).xxyyxxyy))).lo))))))))).s06))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-5L), 3L, (-1L), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(0x12C701E8L, ((VECTOR(int32_t, 2))(0x6B152DC2L, (-6L))), ((VECTOR(int32_t, 2))(l_268.xx)).odd, ((l_255 &= l_269) , ((VECTOR(int32_t, 2))(l_270.s9a)).even), ((VECTOR(int32_t, 16))(l_271.sbd6c7dc5aab6969b)).s8, 0x79CD1F5EL, 0x67396CACL)).s73, ((VECTOR(int32_t, 16))(l_272.s5735416422577007)).s22))), l_273, 1L, ((VECTOR(int32_t, 8))(5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_274.x, 0x5983639AL, l_275[4][1][0], ((VECTOR(int32_t, 4))((-8L))), l_276, 1L, l_277, ((VECTOR(int32_t, 4))((-1L))), 0x74EC5774L, 0L)).lo)).s7357676227733125, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(0L))))).s9a96)))), 0x510D7859L, 0x0BB6925AL, 0x76930E47L)), 0x5798B919L)).odd)).s12))), 0x6413887BL, (-1L))), 0x031745E1L, l_278, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 2))(1L)), l_279, ((VECTOR(int32_t, 2))(0x6358BAB3L)), 1L)).odd, ((VECTOR(int32_t, 8))(0x42633FF1L))))).s2366323325710735, ((VECTOR(int32_t, 16))((-7L)))))).s7cba, (int32_t)1L))).y)
                { /* block id: 160 */
                    union U3 l_281 = {{0UL,1L,0x9245AE2BL}};/* VOLATILE GLOBAL l_281 */
                    union U3 *l_280 = &l_281;
                    union U3 l_283 = {{0x2EL,-4L,8UL}};/* VOLATILE GLOBAL l_283 */
                    union U3 *l_282 = &l_283;
                    union U3 *l_284 = (void*)0;
                    union U3 *l_285 = (void*)0;
                    union U3 l_287 = {{255UL,-1L,0x31684541L}};/* VOLATILE GLOBAL l_287 */
                    union U3 *l_286 = &l_287;
                    union U2 l_288 = {0};
                    int32_t l_290 = 0x506AB99FL;
                    int32_t *l_289 = &l_290;
                    int32_t *l_291 = (void*)0;
                    int32_t *l_292[5][3] = {{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290}};
                    int i, j;
                    l_286 = (l_285 = (l_284 = (l_282 = l_280)));
                    l_292[4][2] = (l_288 , (l_291 = l_289));
                }
                else
                { /* block id: 167 */
                    int32_t *l_293 = (void*)0;
                    int32_t l_294 = 0x0390739EL;
                    l_293 = (void*)0;
                    for (l_294 = 1; (l_294 != 23); l_294 = safe_add_func_int8_t_s_s(l_294, 2))
                    { /* block id: 171 */
                        int32_t l_298 = 0x530695E0L;
                        int32_t *l_297 = &l_298;
                        int32_t *l_299[5] = {&l_298,&l_298,&l_298,&l_298,&l_298};
                        int i;
                        l_297 = (l_299[2] = l_297);
                    }
                }
                if (l_300)
                { /* block id: 176 */
                    int32_t l_302 = 0x58C0522CL;
                    int32_t *l_301 = &l_302;
                    l_301 = l_301;
                    for (l_302 = 1; (l_302 < (-17)); l_302 = safe_sub_func_int32_t_s_s(l_302, 3))
                    { /* block id: 180 */
                        uint32_t l_305 = 4294967295UL;
                        l_270.s3 |= l_305;
                    }
                }
                else
                { /* block id: 183 */
                    int8_t l_306 = 0x1BL;
                    l_261.s7 = (l_265.s0 = (l_306 = 0x5FAAABA1L));
                }
            }
        }
        else
        { /* block id: 189 */
            VECTOR(int32_t, 4) l_307 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 9L), 9L);
            int i;
            if ((l_149 = ((VECTOR(int32_t, 4))(l_307.xwxx)).w))
            { /* block id: 191 */
                int32_t l_309 = 0x3015F5AFL;
                int32_t *l_308[1];
                int32_t *l_310 = &l_309;
                int32_t *l_311 = &l_309;
                int i;
                for (i = 0; i < 1; i++)
                    l_308[i] = &l_309;
                l_311 = (l_310 = l_308[0]);
            }
            else
            { /* block id: 194 */
                VECTOR(uint32_t, 4) l_312 = (VECTOR(uint32_t, 4))(0x0906C6D4L, (VECTOR(uint32_t, 2))(0x0906C6D4L, 0x0C490DDEL), 0x0C490DDEL);
                union U2 l_313[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
                uint16_t l_314 = 0xE93EL;
                VECTOR(uint32_t, 16) l_315 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x4E1A288EL), 0x4E1A288EL), 0x4E1A288EL, 0UL, 0x4E1A288EL, (VECTOR(uint32_t, 2))(0UL, 0x4E1A288EL), (VECTOR(uint32_t, 2))(0UL, 0x4E1A288EL), 0UL, 0x4E1A288EL, 0UL, 0x4E1A288EL);
                VECTOR(uint32_t, 4) l_316 = (VECTOR(uint32_t, 4))(0x89F4317AL, (VECTOR(uint32_t, 2))(0x89F4317AL, 0x830908DBL), 0x830908DBL);
                int16_t l_317 = (-9L);
                VECTOR(uint32_t, 8) l_318 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL), 0UL, 4294967293UL, 0UL);
                VECTOR(uint64_t, 16) l_319 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL), 3UL), 3UL, 18446744073709551615UL, 3UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL), 18446744073709551615UL, 3UL, 18446744073709551615UL, 3UL);
                VECTOR(uint64_t, 8) l_320 = (VECTOR(uint64_t, 8))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 9UL), 9UL), 9UL, 6UL, 9UL);
                union U2 l_321 = {0};
                uint16_t l_322 = 3UL;
                VECTOR(uint64_t, 4) l_323 = (VECTOR(uint64_t, 4))(0x7448AAEB52A002B2L, (VECTOR(uint64_t, 2))(0x7448AAEB52A002B2L, 1UL), 1UL);
                int32_t l_324 = 0x043BA56DL;
                int32_t l_325 = 0x17663FD4L;
                union U2 l_326 = {0};
                int64_t l_327 = 0L;
                int32_t l_328 = 0x44D2F9F2L;
                struct S1 l_329 = {1L,0xC9739A8D6DC2FBB3L};
                struct S1 *l_330 = &l_329;
                struct S1 *l_331 = &l_329;
                int i;
                l_331 = ((((VECTOR(uint32_t, 16))(1UL, 0x596C879CL, 4UL, 0x893BCF06L, ((VECTOR(uint32_t, 4))(l_312.wzwy)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(1UL, 0x579D2853L, 5UL, 0x23BDBF14L, FAKE_DIVERGE(p_592->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 2))(0x03BBA9A7L, 0x5E74854BL)), ((VECTOR(uint32_t, 4))(0xE3F808ECL, (l_313[0] , (GROUP_DIVERGE(2, 1) , 0UL)), 0UL, 4294967294UL)), 0x1C7FB668L, 1UL, ((VECTOR(uint32_t, 2))(0x242BDF68L, 0xB1C4B515L)), 1UL)))).s8e, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(GROUP_DIVERGE(1, 1), 0x6E4878BDL, (l_314 = 0x3867A1ABL), 0xF96DA557L, 4294967289UL, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(l_315.se3)).xxyyyyyx, ((VECTOR(uint32_t, 4))(l_316.wyxz)).yzzyzzxz))), (uint32_t)l_317))), ((VECTOR(uint32_t, 2))(l_318.s27)), 0x86F1EB17L)).lo, ((VECTOR(uint32_t, 8))(4294967293UL, 4294967289UL, (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 8))(l_319.s207de155)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_320.s7643)), (l_327 = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(18446744073709551608UL, (l_321 , l_322), 0x87F41C3D795D6EF2L, 18446744073709551608UL)), 0xE4007A445A750B49L, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 8))(l_323.yyxzxxzw)).s26, (uint64_t)(l_256 = l_324), (uint64_t)((l_325 , l_326) , 1UL)))), 0x16FCA08C83F35940L)).s5), l_328, 3UL, 0xA61D66600FA4EE61L))))).s75, ((VECTOR(uint64_t, 2))(0x18D7FAB5EF2E33E0L)), ((VECTOR(uint64_t, 2))(0xF83D03F561DA92B6L))))), 6UL, FAKE_DIVERGE(p_592->global_2_offset, get_global_id(2), 10), 0x44C7251137B19FC1L, 0x3485B00E19483CD6L, 7UL, 0x08A3B0C5488CFB32L)).s1 , 0xA6C8538BL), 0UL, ((VECTOR(uint32_t, 4))(0x4FE45244L)))), ((VECTOR(uint32_t, 8))(6UL))))).s1633445100241551, ((VECTOR(uint32_t, 16))(4294967295UL))))).s54, ((VECTOR(uint32_t, 2))(0xC17C14EBL))))), ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(1UL))))).yxyxxxxx, ((VECTOR(uint32_t, 8))(0x691861CFL))))).s55))), ((VECTOR(uint32_t, 2))(0x0B24052DL))))).xyxyxxxx)))).s7 , l_329) , l_330);
            }
        }
        unsigned int result = 0;
        result += l_149;
        result += l_253;
        result += l_254;
        result += l_255;
        result += l_256;
        atomic_add(&p_592->l_special_values[9], result);
    }
    else
    { /* block id: 201 */
        (1 + 1);
    }
    return l_332.y;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t ** func_114(int32_t * p_115, int8_t ** p_116, int8_t * p_117, struct S5 * p_592)
{ /* block id: 62 */
    int64_t l_145 = 0x13CD0DB1F33D140EL;
    struct S1 l_146 = {0x7F3C61942F87E497L,0x1EE394F392A451E7L};
    struct S1 *l_147 = &l_146;
    (*l_147) = ((safe_rshift_func_int16_t_s_u((FAKE_DIVERGE(p_592->group_0_offset, get_group_id(0), 10) , (~0x2BA5L)), (l_145 , l_145))) , (l_146 , l_146));
    return &p_592->g_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_592->g_140
 * writes: p_592->g_140
 */
int8_t ** func_119(int8_t ** p_120, int64_t  p_121, int64_t  p_122, int8_t * p_123, uint32_t  p_124, struct S5 * p_592)
{ /* block id: 59 */
    int32_t l_128 = (-3L);
    int32_t *l_129 = &l_128;
    int32_t *l_130 = &p_592->g_105;
    int32_t *l_131 = &p_592->g_105;
    int32_t *l_132 = &l_128;
    int32_t *l_133 = &l_128;
    int32_t *l_134 = (void*)0;
    int32_t *l_135[9][6] = {{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0},{&p_592->g_105,&p_592->g_105,&l_128,&p_592->g_105,&p_592->g_105,(void*)0}};
    int8_t l_136 = 0x24L;
    int16_t l_137 = 1L;
    int32_t l_138 = 3L;
    int i, j;
    p_592->g_140[2][0]--;
    return &p_592->g_126;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S5 c_593;
    struct S5* p_592 = &c_593;
    struct S5 c_594 = {
        0x32L, // p_592->g_6
        1L, // p_592->g_86
        0x2607CF51L, // p_592->g_105
        &p_592->g_105, // p_592->g_104
        (void*)0, // p_592->g_126
        &p_592->g_126, // p_592->g_125
        4L, // p_592->g_139
        {{255UL,255UL},{255UL,255UL},{255UL,255UL}}, // p_592->g_140
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_592->g_334
        18446744073709551615UL, // p_592->g_338
        {-7L,18446744073709551615UL}, // p_592->g_342
        &p_592->g_342, // p_592->g_341
        1L, // p_592->g_349
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4EL), 0x4EL), 0x4EL, 1L, 0x4EL), // p_592->g_359
        0x264661F2L, // p_592->g_373
        0UL, // p_592->g_374
        {{0x94L,2L,5UL}}, // p_592->g_384
        &p_592->g_384, // p_592->g_383
        (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL), // p_592->g_408
        &p_592->g_349, // p_592->g_411
        &p_592->g_104, // p_592->g_412
        0xAAL, // p_592->g_420
        0x4C8AEFF0L, // p_592->g_527
        {0x4E06L,0x4E06L,0x4E06L,0x4E06L,0x4E06L,0x4E06L,0x4E06L,0x4E06L,0x4E06L}, // p_592->g_536
        &p_592->g_104, // p_592->g_538
        {1UL,0x560694D3L,1UL}, // p_592->g_542
        {{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0},{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0},{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0},{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0},{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0},{(void*)0,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,&p_592->g_542,(void*)0}}, // p_592->g_541
        {0UL,-2L,7UL}, // p_592->g_544
        {1UL}, // p_592->g_555
        {0x9EL,-1L,5UL}, // p_592->g_556
        0xEEDC33F1L, // p_592->g_578
        &p_592->g_104, // p_592->g_590
        0, // p_592->v_collective
        sequence_input[get_global_id(0)], // p_592->global_0_offset
        sequence_input[get_global_id(1)], // p_592->global_1_offset
        sequence_input[get_global_id(2)], // p_592->global_2_offset
        sequence_input[get_local_id(0)], // p_592->local_0_offset
        sequence_input[get_local_id(1)], // p_592->local_1_offset
        sequence_input[get_local_id(2)], // p_592->local_2_offset
        sequence_input[get_group_id(0)], // p_592->group_0_offset
        sequence_input[get_group_id(1)], // p_592->group_1_offset
        sequence_input[get_group_id(2)], // p_592->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_592->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_593 = c_594;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_592);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_592->g_6, "p_592->g_6", print_hash_value);
    transparent_crc(p_592->g_86, "p_592->g_86", print_hash_value);
    transparent_crc(p_592->g_105, "p_592->g_105", print_hash_value);
    transparent_crc(p_592->g_139, "p_592->g_139", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_592->g_140[i][j], "p_592->g_140[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_592->g_334.s0, "p_592->g_334.s0", print_hash_value);
    transparent_crc(p_592->g_334.s1, "p_592->g_334.s1", print_hash_value);
    transparent_crc(p_592->g_334.s2, "p_592->g_334.s2", print_hash_value);
    transparent_crc(p_592->g_334.s3, "p_592->g_334.s3", print_hash_value);
    transparent_crc(p_592->g_334.s4, "p_592->g_334.s4", print_hash_value);
    transparent_crc(p_592->g_334.s5, "p_592->g_334.s5", print_hash_value);
    transparent_crc(p_592->g_334.s6, "p_592->g_334.s6", print_hash_value);
    transparent_crc(p_592->g_334.s7, "p_592->g_334.s7", print_hash_value);
    transparent_crc(p_592->g_334.s8, "p_592->g_334.s8", print_hash_value);
    transparent_crc(p_592->g_334.s9, "p_592->g_334.s9", print_hash_value);
    transparent_crc(p_592->g_334.sa, "p_592->g_334.sa", print_hash_value);
    transparent_crc(p_592->g_334.sb, "p_592->g_334.sb", print_hash_value);
    transparent_crc(p_592->g_334.sc, "p_592->g_334.sc", print_hash_value);
    transparent_crc(p_592->g_334.sd, "p_592->g_334.sd", print_hash_value);
    transparent_crc(p_592->g_334.se, "p_592->g_334.se", print_hash_value);
    transparent_crc(p_592->g_334.sf, "p_592->g_334.sf", print_hash_value);
    transparent_crc(p_592->g_338, "p_592->g_338", print_hash_value);
    transparent_crc(p_592->g_342.f0, "p_592->g_342.f0", print_hash_value);
    transparent_crc(p_592->g_342.f1, "p_592->g_342.f1", print_hash_value);
    transparent_crc(p_592->g_349, "p_592->g_349", print_hash_value);
    transparent_crc(p_592->g_359.s0, "p_592->g_359.s0", print_hash_value);
    transparent_crc(p_592->g_359.s1, "p_592->g_359.s1", print_hash_value);
    transparent_crc(p_592->g_359.s2, "p_592->g_359.s2", print_hash_value);
    transparent_crc(p_592->g_359.s3, "p_592->g_359.s3", print_hash_value);
    transparent_crc(p_592->g_359.s4, "p_592->g_359.s4", print_hash_value);
    transparent_crc(p_592->g_359.s5, "p_592->g_359.s5", print_hash_value);
    transparent_crc(p_592->g_359.s6, "p_592->g_359.s6", print_hash_value);
    transparent_crc(p_592->g_359.s7, "p_592->g_359.s7", print_hash_value);
    transparent_crc(p_592->g_373, "p_592->g_373", print_hash_value);
    transparent_crc(p_592->g_374, "p_592->g_374", print_hash_value);
    transparent_crc(p_592->g_384.f0.f0, "p_592->g_384.f0.f0", print_hash_value);
    transparent_crc(p_592->g_384.f0.f1, "p_592->g_384.f0.f1", print_hash_value);
    transparent_crc(p_592->g_384.f0.f2, "p_592->g_384.f0.f2", print_hash_value);
    transparent_crc(p_592->g_408.x, "p_592->g_408.x", print_hash_value);
    transparent_crc(p_592->g_408.y, "p_592->g_408.y", print_hash_value);
    transparent_crc(p_592->g_408.z, "p_592->g_408.z", print_hash_value);
    transparent_crc(p_592->g_408.w, "p_592->g_408.w", print_hash_value);
    transparent_crc(p_592->g_420, "p_592->g_420", print_hash_value);
    transparent_crc(p_592->g_527, "p_592->g_527", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_592->g_536[i], "p_592->g_536[i]", print_hash_value);

    }
    transparent_crc(p_592->g_542.f0, "p_592->g_542.f0", print_hash_value);
    transparent_crc(p_592->g_542.f1, "p_592->g_542.f1", print_hash_value);
    transparent_crc(p_592->g_542.f2, "p_592->g_542.f2", print_hash_value);
    transparent_crc(p_592->g_544.f0, "p_592->g_544.f0", print_hash_value);
    transparent_crc(p_592->g_544.f1, "p_592->g_544.f1", print_hash_value);
    transparent_crc(p_592->g_544.f2, "p_592->g_544.f2", print_hash_value);
    transparent_crc(p_592->g_555.f0, "p_592->g_555.f0", print_hash_value);
    transparent_crc(p_592->g_556.f0, "p_592->g_556.f0", print_hash_value);
    transparent_crc(p_592->g_556.f1, "p_592->g_556.f1", print_hash_value);
    transparent_crc(p_592->g_556.f2, "p_592->g_556.f2", print_hash_value);
    transparent_crc(p_592->g_578, "p_592->g_578", print_hash_value);
    transparent_crc(p_592->v_collective, "p_592->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 25; i++)
            transparent_crc(p_592->g_special_values[i + 25 * get_linear_group_id()], "p_592->g_special_values[i + 25 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 25; i++)
            transparent_crc(p_592->l_special_values[i], "p_592->l_special_values[i]", print_hash_value);
    transparent_crc(p_592->l_comm_values[get_linear_local_id()], "p_592->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_592->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_592->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
