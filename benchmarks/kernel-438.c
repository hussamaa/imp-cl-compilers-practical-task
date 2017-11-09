// --atomics 10 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 65,18,2 -l 1,18,2
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

__constant uint32_t permutations[10][36] = {
{9,24,1,5,0,17,14,34,19,35,10,4,18,29,33,23,21,28,8,12,15,27,16,31,25,3,20,6,32,7,22,30,11,2,26,13}, // permutation 0
{18,26,23,4,12,35,33,0,11,6,1,19,28,10,21,27,34,30,25,31,2,14,15,32,22,13,16,17,29,5,9,8,3,24,20,7}, // permutation 1
{19,11,4,21,27,8,30,16,0,10,15,25,17,6,29,14,5,28,18,31,7,24,23,22,1,9,35,32,12,33,3,13,2,20,34,26}, // permutation 2
{13,0,27,3,2,9,32,7,33,34,31,12,20,19,29,28,30,18,6,15,23,24,5,1,8,26,17,16,22,25,11,10,14,35,21,4}, // permutation 3
{16,13,7,28,5,29,10,0,4,6,15,27,22,26,25,11,34,30,2,24,18,35,21,33,3,12,9,8,23,31,14,20,19,32,17,1}, // permutation 4
{5,23,33,32,0,2,6,8,4,12,16,9,29,31,14,24,20,7,3,35,21,19,30,18,1,25,10,26,28,34,11,13,22,15,17,27}, // permutation 5
{4,30,12,1,7,27,25,10,35,2,14,3,28,15,26,16,29,9,23,11,31,5,0,22,33,18,21,32,8,20,17,13,24,19,34,6}, // permutation 6
{20,19,32,7,6,5,29,22,10,24,27,25,14,35,28,34,23,4,0,9,3,13,15,11,18,31,1,26,33,16,21,2,12,17,8,30}, // permutation 7
{15,13,6,2,14,34,12,0,5,3,21,19,35,8,28,18,27,20,32,1,31,24,4,26,7,25,17,9,29,30,33,11,16,10,22,23}, // permutation 8
{28,0,24,3,18,30,31,34,22,15,29,20,23,13,19,21,35,7,1,12,8,5,33,10,17,2,32,27,6,9,4,16,26,14,25,11} // permutation 9
};

// Seed: 3718882281

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
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
uint32_t  func_1(struct S2 * p_2);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2->g_comm_values
 * writes:
 */
uint32_t  func_1(struct S2 * p_2)
{ /* block id: 4 */
    return p_2->g_comm_values[p_2->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_comm_values[i] = 1;
    struct S2 c_3;
    struct S2* p_2 = &c_3;
    struct S2 c_4 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 36)), permutations[0][get_linear_local_id()])), // p_2->tid
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
    transparent_crc(p_2->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()], "p_2->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
