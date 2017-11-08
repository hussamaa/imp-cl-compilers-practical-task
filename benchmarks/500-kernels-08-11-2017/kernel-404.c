// --atomics 73 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 25,38,4 -l 1,19,2
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

__constant uint32_t permutations[10][38] = {
{9,7,8,14,32,29,19,34,17,36,31,1,26,25,27,2,33,30,4,10,12,22,35,13,18,20,24,23,21,15,11,5,37,0,16,3,28,6}, // permutation 0
{1,22,30,16,9,26,19,32,28,17,37,11,27,24,7,12,8,6,15,18,20,23,34,35,14,4,31,0,36,25,2,10,33,13,5,21,29,3}, // permutation 1
{34,17,24,21,7,6,2,36,19,31,22,13,29,30,15,35,25,9,10,26,16,33,3,1,27,5,23,8,0,4,37,18,11,14,12,28,32,20}, // permutation 2
{22,17,31,18,7,6,4,27,29,3,35,36,0,28,14,19,8,12,10,15,30,37,34,25,32,13,33,11,5,2,21,26,9,24,23,1,16,20}, // permutation 3
{22,36,25,28,32,9,16,19,8,30,20,17,7,21,23,15,2,18,3,0,1,10,6,37,11,33,13,31,4,5,12,29,14,26,35,24,34,27}, // permutation 4
{15,9,12,37,8,29,26,24,6,33,14,7,31,30,34,28,2,10,23,19,36,22,11,1,0,17,20,16,4,27,3,5,18,25,21,35,32,13}, // permutation 5
{32,4,21,20,26,10,16,18,3,7,9,14,5,25,37,0,22,13,17,23,2,31,8,6,28,19,27,29,15,24,11,33,30,34,35,12,1,36}, // permutation 6
{23,28,25,0,6,20,4,10,16,15,29,31,1,26,19,37,12,36,3,32,7,18,21,17,2,35,27,24,14,11,33,22,5,30,34,8,13,9}, // permutation 7
{19,10,21,15,14,36,28,31,6,13,33,16,5,1,12,4,34,27,2,25,20,37,0,30,17,11,3,8,9,26,35,29,7,18,32,24,23,22}, // permutation 8
{25,35,18,28,26,34,20,10,2,37,11,33,27,17,29,6,1,16,13,36,8,22,5,31,3,12,15,24,21,19,30,14,0,7,9,32,4,23} // permutation 9
};

// Seed: 1718038321

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    int32_t g_3;
    int32_t * volatile g_2;
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
uint16_t  func_1(struct S4 * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_4->g_2 p_4->g_3
 * writes: p_4->g_2
 */
uint16_t  func_1(struct S4 * p_4)
{ /* block id: 4 */
    p_4->g_2 = p_4->g_2;
    return p_4->g_3;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_comm_values[i] = 1;
    struct S4 c_5;
    struct S4* p_4 = &c_5;
    struct S4 c_6 = {
        0x2D8530DEL, // p_4->g_3
        &p_4->g_3, // p_4->g_2
        0, // p_4->v_collective
        sequence_input[get_global_id(0)], // p_4->global_0_offset
        sequence_input[get_global_id(1)], // p_4->global_1_offset
        sequence_input[get_global_id(2)], // p_4->global_2_offset
        sequence_input[get_local_id(0)], // p_4->local_0_offset
        sequence_input[get_local_id(1)], // p_4->local_1_offset
        sequence_input[get_local_id(2)], // p_4->local_2_offset
        sequence_input[get_group_id(0)], // p_4->group_0_offset
        sequence_input[get_group_id(1)], // p_4->group_1_offset
        sequence_input[get_group_id(2)], // p_4->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 38)), permutations[0][get_linear_local_id()])), // p_4->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_5 = c_6;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_4);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_4->g_3, "p_4->g_3", print_hash_value);
    transparent_crc(p_4->v_collective, "p_4->v_collective", print_hash_value);
    transparent_crc(p_4->l_comm_values[get_linear_local_id()], "p_4->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_4->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()], "p_4->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
