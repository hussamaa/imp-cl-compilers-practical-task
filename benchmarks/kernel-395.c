// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,59,8 -l 17,1,1
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
{6,13,8,10,1,0,4,14,7,2,16,11,12,15,9,3,5}, // permutation 0
{5,3,7,11,1,4,9,14,8,15,0,16,2,6,13,12,10}, // permutation 1
{1,8,0,12,4,2,16,7,14,3,6,11,15,13,10,9,5}, // permutation 2
{6,12,10,13,15,1,5,2,16,0,8,14,4,9,11,7,3}, // permutation 3
{7,0,16,11,15,5,9,10,1,12,4,8,6,13,2,14,3}, // permutation 4
{7,5,9,10,16,3,14,15,1,6,12,8,0,2,4,11,13}, // permutation 5
{4,3,7,13,9,11,2,12,0,10,1,8,16,5,14,6,15}, // permutation 6
{9,2,5,12,11,8,4,10,15,1,16,7,13,0,6,14,3}, // permutation 7
{12,5,4,3,2,0,13,7,8,14,15,9,1,11,10,6,16}, // permutation 8
{12,9,8,6,14,1,13,5,2,15,7,16,3,10,11,4,0} // permutation 9
};

// Seed: 3132433772

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_4;
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
int64_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_4 p_5->l_comm_values
 * writes: p_5->g_4
 */
int64_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    int16_t l_2 = (-10L);
    int32_t *l_3 = &p_5->g_4;
    (*l_3) |= l_2;
    return p_5->l_comm_values[(safe_mod_func_uint32_t_u_u(p_5->tid, 17))];
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
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        (-3L), // p_5->g_4
        0, // p_5->v_collective
        sequence_input[get_global_id(0)], // p_5->global_0_offset
        sequence_input[get_global_id(1)], // p_5->global_1_offset
        sequence_input[get_global_id(2)], // p_5->global_2_offset
        sequence_input[get_local_id(0)], // p_5->local_0_offset
        sequence_input[get_local_id(1)], // p_5->local_1_offset
        sequence_input[get_local_id(2)], // p_5->local_2_offset
        sequence_input[get_group_id(0)], // p_5->group_0_offset
        sequence_input[get_group_id(1)], // p_5->group_1_offset
        sequence_input[get_group_id(2)], // p_5->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_5->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_6 = c_7;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_5);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_5->g_4, "p_5->g_4", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
