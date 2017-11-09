// --atomics 62 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 45,23,2 -l 15,1,1
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

__constant uint32_t permutations[10][15] = {
{14,7,5,0,11,9,10,8,3,2,6,1,13,12,4}, // permutation 0
{1,8,5,11,0,3,9,2,14,4,10,13,7,12,6}, // permutation 1
{1,7,8,13,9,12,3,5,11,2,4,14,10,0,6}, // permutation 2
{3,0,2,7,6,12,4,11,14,5,8,9,1,10,13}, // permutation 3
{13,0,12,10,5,7,3,4,1,6,14,2,9,8,11}, // permutation 4
{7,3,2,12,14,0,9,10,13,6,1,5,11,4,8}, // permutation 5
{2,6,5,1,8,7,12,11,10,9,13,14,4,0,3}, // permutation 6
{9,2,0,10,4,6,11,5,13,3,7,14,8,1,12}, // permutation 7
{9,11,0,2,1,5,12,8,6,4,10,3,13,7,14}, // permutation 8
{13,2,4,14,5,0,9,12,1,10,11,7,8,3,6} // permutation 9
};

// Seed: 3198787836

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int8_t g_5;
    int8_t *g_4;
    int32_t g_8;
    int32_t * volatile g_7;
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
int8_t  func_1(struct S2 * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_10->g_4 p_10->g_5 p_10->g_7 p_10->g_8
 * writes: p_10->g_8
 */
int8_t  func_1(struct S2 * p_10)
{ /* block id: 4 */
    int8_t *l_6 = &p_10->g_5;
    int32_t l_9 = (-1L);
    (*p_10->g_7) ^= (safe_mod_func_int32_t_s_s((p_10->g_4 == l_6), p_10->g_5));
    return l_9;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S2 c_11;
    struct S2* p_10 = &c_11;
    struct S2 c_12 = {
        0L, // p_10->g_5
        &p_10->g_5, // p_10->g_4
        0x5CC25BFCL, // p_10->g_8
        &p_10->g_8, // p_10->g_7
        0, // p_10->v_collective
        sequence_input[get_global_id(0)], // p_10->global_0_offset
        sequence_input[get_global_id(1)], // p_10->global_1_offset
        sequence_input[get_global_id(2)], // p_10->global_2_offset
        sequence_input[get_local_id(0)], // p_10->local_0_offset
        sequence_input[get_local_id(1)], // p_10->local_1_offset
        sequence_input[get_local_id(2)], // p_10->local_2_offset
        sequence_input[get_group_id(0)], // p_10->group_0_offset
        sequence_input[get_group_id(1)], // p_10->group_1_offset
        sequence_input[get_group_id(2)], // p_10->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_10->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_11 = c_12;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_10);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_10->g_5, "p_10->g_5", print_hash_value);
    transparent_crc(p_10->g_8, "p_10->g_8", print_hash_value);
    transparent_crc(p_10->v_collective, "p_10->v_collective", print_hash_value);
    transparent_crc(p_10->l_comm_values[get_linear_local_id()], "p_10->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_10->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_10->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
