// --atomics 32 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 10,4,10 -l 1,2,10
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

__constant uint32_t permutations[10][20] = {
{16,0,7,12,14,11,6,15,9,19,8,4,2,17,1,10,3,18,5,13}, // permutation 0
{19,18,14,12,5,15,7,4,6,2,17,8,9,16,13,3,1,10,0,11}, // permutation 1
{3,4,5,14,8,6,1,12,13,15,19,11,18,17,10,0,2,7,9,16}, // permutation 2
{3,5,16,10,11,14,2,1,8,19,9,12,18,13,6,17,15,0,7,4}, // permutation 3
{4,11,2,18,9,14,13,19,15,16,0,12,10,1,6,5,8,3,7,17}, // permutation 4
{11,15,3,17,6,14,12,1,8,16,19,18,4,2,9,13,10,7,0,5}, // permutation 5
{3,17,16,8,13,2,15,9,5,4,6,10,7,11,19,1,12,0,18,14}, // permutation 6
{19,3,2,15,18,9,13,4,8,14,6,1,11,12,10,16,0,7,5,17}, // permutation 7
{10,5,8,16,1,9,19,2,4,3,12,11,18,14,7,17,6,0,13,15}, // permutation 8
{15,18,8,17,14,19,5,13,9,1,4,10,7,6,11,16,2,3,0,12} // permutation 9
};

// Seed: 508681942

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
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
int64_t  func_1(struct S0 * p_2);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2->g_comm_values
 * writes:
 */
int64_t  func_1(struct S0 * p_2)
{ /* block id: 4 */
    return p_2->g_comm_values[p_2->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_comm_values[i] = 1;
    struct S0 c_3;
    struct S0* p_2 = &c_3;
    struct S0 c_4 = {
        0, // p_2->v_collective
        sequence_input[get_global_id(0)], // p_2->global_0_offset
        sequence_input[get_global_id(1)], // p_2->global_1_offset
        sequence_input[get_global_id(2)], // p_2->global_2_offset
        sequence_input[get_local_id(0)], // p_2->local_0_offset
        sequence_input[get_local_id(1)], // p_2->local_1_offset
        sequence_input[get_local_id(2)], // p_2->local_2_offset
        sequence_input[get_group_id(0)], // p_2->group_0_offset
        sequence_input[get_group_id(1)], // p_2->group_1_offset
        sequence_input[get_group_id(2)], // p_2->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[0][get_linear_local_id()])), // p_2->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_3 = c_4;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2->v_collective, "p_2->v_collective", print_hash_value);
    transparent_crc(p_2->l_comm_values[get_linear_local_id()], "p_2->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()], "p_2->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
