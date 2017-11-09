// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 30,68,2 -l 1,17,2
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

__constant uint32_t permutations[10][34] = {
{21,4,14,0,18,16,13,29,2,3,7,10,23,27,5,20,17,12,22,11,24,6,32,31,8,28,30,26,33,9,25,1,19,15}, // permutation 0
{3,2,25,24,8,18,21,31,10,12,20,29,23,4,1,26,5,0,6,16,30,19,22,17,13,9,7,28,15,32,11,33,14,27}, // permutation 1
{17,31,12,21,8,27,32,15,30,23,0,18,6,4,24,14,13,16,10,29,3,28,26,19,1,2,25,5,33,20,22,11,9,7}, // permutation 2
{3,0,26,25,27,13,28,12,30,11,32,29,2,33,20,23,16,14,19,17,7,18,10,24,1,15,31,5,21,6,22,9,8,4}, // permutation 3
{2,8,5,27,4,12,10,29,14,31,33,15,17,20,32,7,25,26,11,16,19,1,22,6,0,13,3,23,28,24,9,18,30,21}, // permutation 4
{10,23,11,3,2,6,18,33,20,22,32,8,14,9,31,25,17,26,29,30,28,16,24,0,5,12,19,1,21,27,13,15,7,4}, // permutation 5
{11,2,10,24,23,5,28,17,22,20,14,32,16,12,4,27,9,19,1,0,31,3,30,21,26,33,29,8,13,25,18,15,6,7}, // permutation 6
{17,0,12,33,22,18,31,23,28,13,29,9,19,26,11,7,32,15,4,24,1,8,3,2,25,10,20,30,21,14,27,6,16,5}, // permutation 7
{1,25,24,17,3,26,10,22,16,23,2,13,4,18,12,19,7,5,9,27,33,11,30,20,28,29,0,15,21,8,32,6,14,31}, // permutation 8
{20,7,2,1,9,25,28,21,13,5,22,32,0,14,30,27,26,6,18,33,24,23,12,17,3,15,31,29,8,16,19,10,4,11} // permutation 9
};

// Seed: 3020781446

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
};

struct S1 {
    uint16_t g_3;
    int32_t g_6;
    int32_t g_7;
    int32_t g_8;
    uint32_t g_9;
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
union U0  func_1(struct S1 * p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_13->g_3 p_13->g_9
 * writes: p_13->g_3 p_13->g_9
 */
union U0  func_1(struct S1 * p_13)
{ /* block id: 4 */
    int32_t *l_2[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    union U0 l_12 = {4294967290UL};
    int i;
    --p_13->g_3;
    --p_13->g_9;
    return l_12;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_comm_values[i] = 1;
    struct S1 c_14;
    struct S1* p_13 = &c_14;
    struct S1 c_15 = {
        0x2FA4L, // p_13->g_3
        0x01AAE4B9L, // p_13->g_6
        0x05B0BB8BL, // p_13->g_7
        0x6ED1E12AL, // p_13->g_8
        0x1B0FE2CFL, // p_13->g_9
        0, // p_13->v_collective
        sequence_input[get_global_id(0)], // p_13->global_0_offset
        sequence_input[get_global_id(1)], // p_13->global_1_offset
        sequence_input[get_global_id(2)], // p_13->global_2_offset
        sequence_input[get_local_id(0)], // p_13->local_0_offset
        sequence_input[get_local_id(1)], // p_13->local_1_offset
        sequence_input[get_local_id(2)], // p_13->local_2_offset
        sequence_input[get_group_id(0)], // p_13->group_0_offset
        sequence_input[get_group_id(1)], // p_13->group_1_offset
        sequence_input[get_group_id(2)], // p_13->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 34)), permutations[0][get_linear_local_id()])), // p_13->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_14 = c_15;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_13);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_13->g_3, "p_13->g_3", print_hash_value);
    transparent_crc(p_13->g_6, "p_13->g_6", print_hash_value);
    transparent_crc(p_13->g_7, "p_13->g_7", print_hash_value);
    transparent_crc(p_13->g_8, "p_13->g_8", print_hash_value);
    transparent_crc(p_13->g_9, "p_13->g_9", print_hash_value);
    transparent_crc(p_13->v_collective, "p_13->v_collective", print_hash_value);
    transparent_crc(p_13->l_comm_values[get_linear_local_id()], "p_13->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_13->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()], "p_13->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
