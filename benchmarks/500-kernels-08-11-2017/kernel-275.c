// --atomics 43 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,13,19 -l 19,1,1
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
{17,8,15,1,14,6,11,3,16,5,7,2,12,13,18,4,0,10,9}, // permutation 0
{13,15,12,18,9,5,0,8,1,10,2,16,6,11,17,14,7,3,4}, // permutation 1
{4,9,11,15,7,17,3,1,12,0,2,16,6,8,10,14,5,18,13}, // permutation 2
{5,9,17,11,16,8,1,18,15,0,3,14,2,10,12,4,13,6,7}, // permutation 3
{3,4,1,14,12,7,0,11,9,8,10,6,5,2,15,17,16,13,18}, // permutation 4
{1,0,18,11,17,15,5,6,14,10,4,8,9,12,2,3,13,7,16}, // permutation 5
{9,10,1,6,16,17,0,4,18,14,11,13,8,12,7,2,15,3,5}, // permutation 6
{1,4,16,14,18,6,9,13,15,2,5,0,11,7,8,17,12,3,10}, // permutation 7
{12,0,7,4,6,13,15,8,18,14,1,2,5,3,17,10,16,11,9}, // permutation 8
{12,4,18,13,15,2,3,9,5,10,16,0,14,11,17,6,1,8,7} // permutation 9
};

// Seed: 1011585200

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U1 {
   volatile uint64_t  f0;
   volatile uint32_t  f1;
};

struct S2 {
    int32_t g_3;
    int32_t * volatile g_2;
    union U1 g_4;
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
union U1  func_1(struct S2 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->l_comm_values p_5->g_2 p_5->g_4
 * writes: p_5->g_3
 */
union U1  func_1(struct S2 * p_5)
{ /* block id: 4 */
    (*p_5->g_2) = p_5->l_comm_values[(safe_mod_func_uint32_t_u_u(p_5->tid, 19))];
    return p_5->g_4;
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
    struct S2 c_6;
    struct S2* p_5 = &c_6;
    struct S2 c_7 = {
        0x44530722L, // p_5->g_3
        &p_5->g_3, // p_5->g_2
        {18446744073709551612UL}, // p_5->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->g_3, "p_5->g_3", print_hash_value);
    transparent_crc(p_5->g_4.f0, "p_5->g_4.f0", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
