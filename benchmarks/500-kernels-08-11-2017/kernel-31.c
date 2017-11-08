// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,16,22 -l 1,2,22
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

__constant uint32_t permutations[10][44] = {
{10,37,2,3,6,22,19,42,30,25,36,8,24,21,20,28,40,1,4,5,29,7,33,26,12,41,9,35,14,34,39,23,0,15,43,38,13,32,27,11,18,31,16,17}, // permutation 0
{40,33,34,37,11,42,31,30,13,21,43,16,1,32,29,35,10,14,36,3,4,28,39,27,12,24,26,23,7,9,0,6,20,22,15,19,18,8,41,25,38,2,17,5}, // permutation 1
{19,18,24,32,42,23,12,43,13,8,20,39,1,37,27,35,2,33,26,9,14,38,4,21,11,0,31,25,30,15,41,36,3,28,16,34,10,5,22,29,40,7,6,17}, // permutation 2
{35,36,24,25,42,9,27,21,17,37,0,41,22,1,33,40,43,3,11,31,16,38,8,32,12,15,18,26,23,5,20,7,39,30,29,13,19,10,14,28,4,6,34,2}, // permutation 3
{7,26,13,35,23,29,2,41,11,0,10,25,18,28,33,24,5,21,27,17,1,38,43,4,34,32,9,12,6,19,22,20,15,40,36,31,37,42,14,30,16,39,3,8}, // permutation 4
{23,11,2,9,22,17,40,20,28,5,18,7,42,21,37,39,6,34,38,14,35,16,1,41,4,33,36,3,8,25,32,24,43,26,19,0,29,10,15,27,30,31,12,13}, // permutation 5
{22,41,1,6,29,24,19,2,10,18,43,28,27,34,26,13,11,40,3,20,36,8,9,12,31,39,35,5,21,25,37,15,23,42,16,14,30,33,32,17,7,0,4,38}, // permutation 6
{33,17,20,23,24,14,12,10,1,3,5,11,34,6,38,43,15,41,2,13,7,8,0,9,22,39,37,27,31,19,16,26,4,36,21,32,29,42,35,25,30,18,28,40}, // permutation 7
{35,4,43,8,3,37,9,6,25,22,29,13,17,32,21,5,20,38,42,40,34,10,36,28,1,7,16,14,0,33,23,41,24,30,19,12,39,11,2,31,15,18,27,26}, // permutation 8
{30,27,0,16,15,13,11,8,31,7,39,32,5,34,3,18,43,20,23,35,21,36,33,29,24,1,14,37,28,10,4,2,40,38,25,19,17,22,26,41,12,42,9,6} // permutation 9
};

// Seed: 2433065670

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile int16_t g_14;
    volatile int32_t g_15;
    int32_t g_16;
    uint32_t g_17;
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
uint32_t  func_1(struct S0 * p_20);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_20->g_17 p_20->l_comm_values
 * writes: p_20->g_17
 */
uint32_t  func_1(struct S0 * p_20)
{ /* block id: 4 */
    int32_t *l_2 = &p_20->g_3;
    int32_t *l_4 = &p_20->g_3;
    int32_t *l_5 = &p_20->g_3;
    int32_t *l_6 = &p_20->g_3;
    int32_t *l_7 = &p_20->g_3;
    int32_t *l_8 = &p_20->g_3;
    int32_t *l_9 = &p_20->g_3;
    int32_t *l_10 = &p_20->g_3;
    int32_t *l_11 = (void*)0;
    int32_t *l_12 = &p_20->g_3;
    int32_t *l_13[5];
    int i;
    for (i = 0; i < 5; i++)
        l_13[i] = &p_20->g_3;
    --p_20->g_17;
    return p_20->l_comm_values[(safe_mod_func_uint32_t_u_u(p_20->tid, 44))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_comm_values[i] = 1;
    struct S0 c_21;
    struct S0* p_20 = &c_21;
    struct S0 c_22 = {
        0x357E8B72L, // p_20->g_3
        1L, // p_20->g_14
        1L, // p_20->g_15
        0x3C1B0FE2L, // p_20->g_16
        1UL, // p_20->g_17
        0, // p_20->v_collective
        sequence_input[get_global_id(0)], // p_20->global_0_offset
        sequence_input[get_global_id(1)], // p_20->global_1_offset
        sequence_input[get_global_id(2)], // p_20->global_2_offset
        sequence_input[get_local_id(0)], // p_20->local_0_offset
        sequence_input[get_local_id(1)], // p_20->local_1_offset
        sequence_input[get_local_id(2)], // p_20->local_2_offset
        sequence_input[get_group_id(0)], // p_20->group_0_offset
        sequence_input[get_group_id(1)], // p_20->group_1_offset
        sequence_input[get_group_id(2)], // p_20->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[0][get_linear_local_id()])), // p_20->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_21 = c_22;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_20);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_20->g_3, "p_20->g_3", print_hash_value);
    transparent_crc(p_20->g_14, "p_20->g_14", print_hash_value);
    transparent_crc(p_20->g_15, "p_20->g_15", print_hash_value);
    transparent_crc(p_20->g_16, "p_20->g_16", print_hash_value);
    transparent_crc(p_20->g_17, "p_20->g_17", print_hash_value);
    transparent_crc(p_20->v_collective, "p_20->v_collective", print_hash_value);
    transparent_crc(p_20->l_comm_values[get_linear_local_id()], "p_20->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_20->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()], "p_20->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
