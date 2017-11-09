// --atomics 37 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,48,2 -l 1,12,2
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

__constant uint32_t permutations[10][24] = {
{16,0,8,13,6,20,10,23,7,1,5,3,2,11,12,15,17,22,14,9,4,19,18,21}, // permutation 0
{3,0,15,17,6,21,18,4,13,16,10,12,20,7,5,11,2,14,19,1,22,8,9,23}, // permutation 1
{15,5,17,23,12,14,21,8,19,9,11,22,0,10,2,16,1,3,6,7,4,13,18,20}, // permutation 2
{1,7,12,22,8,5,19,20,2,23,10,6,17,14,3,15,18,11,9,4,16,21,0,13}, // permutation 3
{8,2,12,11,19,23,4,14,1,16,22,9,21,7,3,6,18,17,20,13,10,15,0,5}, // permutation 4
{5,16,14,23,13,4,10,2,0,18,19,1,22,9,3,17,11,6,8,12,20,7,15,21}, // permutation 5
{20,2,15,12,1,9,7,16,13,22,6,0,5,8,23,18,21,10,3,4,14,19,11,17}, // permutation 6
{8,16,19,1,21,7,2,20,6,9,4,17,22,0,3,10,11,5,23,18,13,12,14,15}, // permutation 7
{4,0,14,19,3,2,5,17,16,12,22,20,18,21,9,6,23,15,7,11,1,13,10,8}, // permutation 8
{4,23,17,14,11,22,21,9,5,18,6,12,19,20,3,1,15,10,8,16,7,13,2,0} // permutation 9
};

// Seed: 1869454069

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    int32_t g_3;
    int8_t g_12;
    int32_t g_13;
    uint8_t g_14;
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
uint64_t  func_1(struct S4 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->g_14 p_19->g_3 p_19->g_13
 * writes: p_19->g_14 p_19->g_3 p_19->g_13
 */
uint64_t  func_1(struct S4 * p_19)
{ /* block id: 4 */
    int32_t *l_2 = &p_19->g_3;
    int32_t *l_4 = &p_19->g_3;
    int32_t *l_5 = &p_19->g_3;
    int32_t *l_6 = &p_19->g_3;
    int32_t *l_7 = &p_19->g_3;
    int32_t *l_8 = &p_19->g_3;
    int32_t *l_9 = &p_19->g_3;
    int32_t *l_10[7] = {&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3};
    int64_t l_11 = 0x382BDB979CD329B3L;
    int i;
    ++p_19->g_14;
    p_19->g_13 &= (p_19->g_3 = (safe_add_func_int8_t_s_s((*l_9), (-1L))));
    return (*l_2);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S4 c_20;
    struct S4* p_19 = &c_20;
    struct S4 c_21 = {
        1L, // p_19->g_3
        0x1AL, // p_19->g_12
        2L, // p_19->g_13
        3UL, // p_19->g_14
        0, // p_19->v_collective
        sequence_input[get_global_id(0)], // p_19->global_0_offset
        sequence_input[get_global_id(1)], // p_19->global_1_offset
        sequence_input[get_global_id(2)], // p_19->global_2_offset
        sequence_input[get_local_id(0)], // p_19->local_0_offset
        sequence_input[get_local_id(1)], // p_19->local_1_offset
        sequence_input[get_local_id(2)], // p_19->local_2_offset
        sequence_input[get_group_id(0)], // p_19->group_0_offset
        sequence_input[get_group_id(1)], // p_19->group_1_offset
        sequence_input[get_group_id(2)], // p_19->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_19->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_20 = c_21;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_19);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_19->g_3, "p_19->g_3", print_hash_value);
    transparent_crc(p_19->g_12, "p_19->g_12", print_hash_value);
    transparent_crc(p_19->g_13, "p_19->g_13", print_hash_value);
    transparent_crc(p_19->g_14, "p_19->g_14", print_hash_value);
    transparent_crc(p_19->v_collective, "p_19->v_collective", print_hash_value);
    transparent_crc(p_19->l_comm_values[get_linear_local_id()], "p_19->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_19->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_19->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
