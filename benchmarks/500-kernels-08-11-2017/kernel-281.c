// --atomics 84 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,100,1 -l 17,1,1
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
{7,0,4,16,12,3,1,9,14,5,10,13,15,8,6,2,11}, // permutation 0
{7,16,9,5,12,0,4,10,14,3,6,1,13,15,8,11,2}, // permutation 1
{16,6,4,9,2,8,7,3,5,0,13,11,10,15,1,12,14}, // permutation 2
{2,16,13,3,6,7,12,10,11,8,15,14,9,5,1,4,0}, // permutation 3
{3,8,1,10,11,9,4,0,12,16,14,5,7,2,15,13,6}, // permutation 4
{4,8,12,13,14,2,5,10,15,1,16,3,0,11,9,6,7}, // permutation 5
{14,16,13,8,10,15,0,1,11,2,3,5,12,6,7,4,9}, // permutation 6
{5,10,12,4,7,9,14,1,13,6,15,3,8,16,2,0,11}, // permutation 7
{1,11,13,16,4,5,8,6,12,15,9,10,7,3,2,14,0}, // permutation 8
{5,12,6,0,15,2,14,8,4,1,16,7,13,3,9,10,11} // permutation 9
};

// Seed: 1600585917

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S5 {
    int32_t g_3;
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
uint32_t  func_1(struct S5 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_3
 * writes:
 */
uint32_t  func_1(struct S5 * p_7)
{ /* block id: 4 */
    int32_t *l_2 = &p_7->g_3;
    uint32_t l_4 = 0xCFD1F2E9L;
    ++l_4;
    return (*l_2);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S5 c_8;
    struct S5* p_7 = &c_8;
    struct S5 c_9 = {
        0x380BE39EL, // p_7->g_3
        0, // p_7->v_collective
        sequence_input[get_global_id(0)], // p_7->global_0_offset
        sequence_input[get_global_id(1)], // p_7->global_1_offset
        sequence_input[get_global_id(2)], // p_7->global_2_offset
        sequence_input[get_local_id(0)], // p_7->local_0_offset
        sequence_input[get_local_id(1)], // p_7->local_1_offset
        sequence_input[get_local_id(2)], // p_7->local_2_offset
        sequence_input[get_group_id(0)], // p_7->group_0_offset
        sequence_input[get_group_id(1)], // p_7->group_1_offset
        sequence_input[get_group_id(2)], // p_7->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_7->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_8 = c_9;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_7->g_3, "p_7->g_3", print_hash_value);
    transparent_crc(p_7->v_collective, "p_7->v_collective", print_hash_value);
    transparent_crc(p_7->l_comm_values[get_linear_local_id()], "p_7->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_7->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_7->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
