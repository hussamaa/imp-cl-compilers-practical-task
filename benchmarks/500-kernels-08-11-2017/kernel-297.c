// --atomics 94 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,65,3 -l 19,1,1
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
{3,10,18,17,5,6,1,14,8,4,12,2,16,15,11,9,7,13,0}, // permutation 0
{17,9,16,6,11,0,18,7,4,15,1,10,5,8,3,14,2,13,12}, // permutation 1
{1,12,14,16,5,15,8,7,4,2,17,0,6,3,11,9,18,10,13}, // permutation 2
{4,7,12,16,2,5,8,14,13,1,0,11,9,18,15,10,3,17,6}, // permutation 3
{15,12,6,8,7,11,4,0,5,1,13,16,3,2,10,9,17,18,14}, // permutation 4
{10,12,15,0,17,14,11,5,1,6,8,2,3,9,7,4,18,13,16}, // permutation 5
{5,2,11,13,7,9,17,8,18,3,12,10,0,6,15,16,1,14,4}, // permutation 6
{11,12,17,6,9,10,1,7,2,5,14,15,0,13,18,4,8,3,16}, // permutation 7
{3,10,5,9,2,11,16,18,13,1,4,8,0,7,12,15,17,14,6}, // permutation 8
{8,10,2,0,16,6,5,12,17,3,15,9,11,14,13,7,18,4,1} // permutation 9
};

// Seed: 4150880624

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
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
uint32_t  func_1(struct S1 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3->g_comm_values p_3->l_comm_values
 * writes:
 */
uint32_t  func_1(struct S1 * p_3)
{ /* block id: 4 */
    int8_t l_2 = (-1L);
    l_2 |= p_3->g_comm_values[p_3->tid];
    return p_3->l_comm_values[(safe_mod_func_uint32_t_u_u(p_3->tid, 19))];
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
    struct S1 c_4;
    struct S1* p_3 = &c_4;
    struct S1 c_5 = {
        0, // p_3->v_collective
        sequence_input[get_global_id(0)], // p_3->global_0_offset
        sequence_input[get_global_id(1)], // p_3->global_1_offset
        sequence_input[get_global_id(2)], // p_3->global_2_offset
        sequence_input[get_local_id(0)], // p_3->local_0_offset
        sequence_input[get_local_id(1)], // p_3->local_1_offset
        sequence_input[get_local_id(2)], // p_3->local_2_offset
        sequence_input[get_group_id(0)], // p_3->group_0_offset
        sequence_input[get_group_id(1)], // p_3->group_1_offset
        sequence_input[get_group_id(2)], // p_3->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_3->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_4 = c_5;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3->v_collective, "p_3->v_collective", print_hash_value);
    transparent_crc(p_3->l_comm_values[get_linear_local_id()], "p_3->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
