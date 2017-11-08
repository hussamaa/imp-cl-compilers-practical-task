// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 70,44,1 -l 1,44,1
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

__constant uint32_t permutations[10][44] = {
{27,13,16,14,18,41,21,42,9,32,20,29,28,0,12,3,30,40,2,38,17,5,10,4,35,6,19,15,39,43,23,1,24,36,22,33,26,34,7,31,11,37,8,25}, // permutation 0
{14,22,34,39,41,7,40,8,38,30,18,9,5,36,17,13,28,35,37,15,6,11,33,1,16,20,43,26,23,10,25,32,27,0,42,4,24,31,19,12,3,21,2,29}, // permutation 1
{28,12,16,29,8,15,6,37,17,30,3,9,19,21,27,18,41,20,39,35,38,0,43,5,34,7,40,25,1,14,31,4,36,24,2,23,42,33,22,32,10,26,13,11}, // permutation 2
{19,5,7,29,6,22,16,32,8,30,42,20,41,25,39,31,14,4,33,21,18,3,34,27,23,13,36,10,38,11,2,0,28,24,17,1,12,9,35,43,37,15,40,26}, // permutation 3
{30,5,14,25,31,4,17,11,13,12,32,10,0,26,27,1,2,6,39,8,42,29,28,23,35,21,36,24,41,33,38,40,7,18,34,19,9,16,43,37,3,15,20,22}, // permutation 4
{24,17,28,43,32,23,14,33,18,42,40,8,6,3,4,19,36,10,37,38,22,9,13,16,1,11,35,7,27,31,15,0,12,25,2,5,39,26,29,34,41,30,20,21}, // permutation 5
{21,6,1,28,19,40,17,30,16,26,42,27,25,32,38,34,0,23,4,12,2,41,11,8,35,7,5,20,14,10,9,3,37,18,24,43,13,31,36,39,33,29,22,15}, // permutation 6
{10,37,21,36,33,18,4,15,12,3,31,26,17,1,13,30,41,6,5,2,34,19,0,9,24,22,43,8,16,28,29,32,40,25,38,23,14,27,20,39,11,35,42,7}, // permutation 7
{2,36,38,22,1,19,20,40,8,31,29,43,17,18,15,13,32,0,26,42,37,12,3,33,10,35,30,28,14,21,11,6,41,5,34,27,24,25,39,9,7,23,4,16}, // permutation 8
{4,29,19,14,6,26,30,2,7,35,3,25,37,22,34,39,5,1,23,33,36,32,38,10,21,31,40,18,20,13,17,28,41,16,24,0,43,9,42,15,12,8,27,11} // permutation 9
};

// Seed: 2386742574

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   volatile uint32_t  f1;
   uint16_t  f2;
   uint16_t  f3;
   volatile int16_t  f4;
   volatile uint32_t  f5;
   int8_t  f6;
   int32_t  f7;
};

struct S2 {
   volatile uint64_t  f0;
   int16_t  f1;
   struct S0  f2;
   int32_t  f3;
   volatile uint64_t  f4;
   int64_t  f5;
};

struct S4 {
    int32_t g_8[1];
    int8_t g_11;
    int8_t *g_10;
    uint8_t g_13;
    volatile VECTOR(int32_t, 2) g_19;
    struct S2 g_23;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
struct S2  func_1(struct S4 * p_24);
int32_t  func_4(int32_t  p_5, struct S4 * p_24);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_24->l_comm_values p_24->g_8 p_24->g_10 p_24->g_11 p_24->g_comm_values p_24->g_19 p_24->g_23
 * writes: p_24->g_8 p_24->g_11 p_24->g_13 p_24->g_19
 */
struct S2  func_1(struct S4 * p_24)
{ /* block id: 4 */
    int32_t *l_6 = (void*)0;
    int32_t *l_7[7][5][7] = {{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}},{{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]},{&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0],&p_24->g_8[0]}}};
    uint8_t *l_12 = &p_24->g_13;
    uint32_t l_16 = 0UL;
    uint32_t *l_17 = (void*)0;
    uint32_t *l_18 = &l_16;
    uint16_t l_20 = 0UL;
    int i, j, k;
    l_16 = (((*l_12) = ((safe_lshift_func_int8_t_s_s((func_4((p_24->g_8[0] &= p_24->l_comm_values[(safe_mod_func_uint32_t_u_u(p_24->tid, 44))]), p_24) <= func_4(p_24->l_comm_values[(safe_mod_func_uint32_t_u_u(p_24->tid, 44))], p_24)), ((*p_24->g_10) &= (p_24->g_10 != (void*)0)))) , (func_4(p_24->g_11, p_24) && GROUP_DIVERGE(2, 1)))) && (safe_sub_func_int64_t_s_s(0x3C8F438361CD5CCFL, 4UL)));
    p_24->g_8[0] = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967295UL)).xxxx)).y != ((*l_18) = func_4(p_24->g_comm_values[p_24->tid], p_24)));
    p_24->g_19.y = ((VECTOR(int32_t, 4))(p_24->g_19.yxyx)).w;
    --l_20;
    return p_24->g_23;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_4(int32_t  p_5, struct S4 * p_24)
{ /* block id: 6 */
    int32_t l_9 = 0x0D69B45CL;
    return l_9;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_comm_values[i] = 1;
    struct S4 c_25;
    struct S4* p_24 = &c_25;
    struct S4 c_26 = {
        {1L}, // p_24->g_8
        0x2DL, // p_24->g_11
        &p_24->g_11, // p_24->g_10
        252UL, // p_24->g_13
        (VECTOR(int32_t, 2))(0x7DDA7840L, (-6L)), // p_24->g_19
        {18446744073709551615UL,5L,{0x04B2B3A3L,4294967288UL,65527UL,0x1BA0L,0x7618L,1UL,0x4EL,4L},4L,18446744073709551606UL,0x29EE2B40743585F1L}, // p_24->g_23
        0, // p_24->v_collective
        sequence_input[get_global_id(0)], // p_24->global_0_offset
        sequence_input[get_global_id(1)], // p_24->global_1_offset
        sequence_input[get_global_id(2)], // p_24->global_2_offset
        sequence_input[get_local_id(0)], // p_24->local_0_offset
        sequence_input[get_local_id(1)], // p_24->local_1_offset
        sequence_input[get_local_id(2)], // p_24->local_2_offset
        sequence_input[get_group_id(0)], // p_24->group_0_offset
        sequence_input[get_group_id(1)], // p_24->group_1_offset
        sequence_input[get_group_id(2)], // p_24->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[0][get_linear_local_id()])), // p_24->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_25 = c_26;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_24);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_24->g_8[i], "p_24->g_8[i]", print_hash_value);

    }
    transparent_crc(p_24->g_11, "p_24->g_11", print_hash_value);
    transparent_crc(p_24->g_13, "p_24->g_13", print_hash_value);
    transparent_crc(p_24->g_19.x, "p_24->g_19.x", print_hash_value);
    transparent_crc(p_24->g_19.y, "p_24->g_19.y", print_hash_value);
    transparent_crc(p_24->g_23.f0, "p_24->g_23.f0", print_hash_value);
    transparent_crc(p_24->g_23.f1, "p_24->g_23.f1", print_hash_value);
    transparent_crc(p_24->g_23.f2.f0, "p_24->g_23.f2.f0", print_hash_value);
    transparent_crc(p_24->g_23.f2.f1, "p_24->g_23.f2.f1", print_hash_value);
    transparent_crc(p_24->g_23.f2.f2, "p_24->g_23.f2.f2", print_hash_value);
    transparent_crc(p_24->g_23.f2.f3, "p_24->g_23.f2.f3", print_hash_value);
    transparent_crc(p_24->g_23.f2.f4, "p_24->g_23.f2.f4", print_hash_value);
    transparent_crc(p_24->g_23.f2.f5, "p_24->g_23.f2.f5", print_hash_value);
    transparent_crc(p_24->g_23.f2.f6, "p_24->g_23.f2.f6", print_hash_value);
    transparent_crc(p_24->g_23.f2.f7, "p_24->g_23.f2.f7", print_hash_value);
    transparent_crc(p_24->g_23.f3, "p_24->g_23.f3", print_hash_value);
    transparent_crc(p_24->g_23.f4, "p_24->g_23.f4", print_hash_value);
    transparent_crc(p_24->g_23.f5, "p_24->g_23.f5", print_hash_value);
    transparent_crc(p_24->v_collective, "p_24->v_collective", print_hash_value);
    transparent_crc(p_24->l_comm_values[get_linear_local_id()], "p_24->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_24->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()], "p_24->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
