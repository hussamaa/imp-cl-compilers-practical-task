// --atomics 42 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 25,11,29 -l 25,1,1
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

__constant uint32_t permutations[10][25] = {
{24,7,5,13,21,16,4,14,12,8,3,17,10,22,2,23,0,19,9,1,15,6,18,20,11}, // permutation 0
{20,24,23,12,9,4,3,17,15,6,10,22,16,19,0,1,5,14,18,8,21,13,7,11,2}, // permutation 1
{15,2,11,1,10,6,0,8,3,7,20,12,5,14,19,18,17,13,16,24,22,23,4,21,9}, // permutation 2
{24,0,8,12,6,15,5,3,21,7,20,14,9,4,2,16,17,10,13,18,1,22,19,11,23}, // permutation 3
{10,23,7,15,20,5,9,14,16,12,3,24,17,21,2,6,1,11,4,13,8,22,18,0,19}, // permutation 4
{8,23,10,13,2,3,0,11,17,6,12,20,16,4,21,24,14,22,9,19,5,15,1,7,18}, // permutation 5
{17,3,6,8,20,7,24,0,19,23,12,10,4,2,11,18,5,13,1,21,14,16,15,9,22}, // permutation 6
{24,8,1,17,22,11,5,7,9,20,19,6,3,23,2,4,13,10,21,15,16,18,0,12,14}, // permutation 7
{13,8,10,22,19,3,6,17,5,18,15,1,11,7,0,21,23,12,14,4,24,9,16,20,2}, // permutation 8
{12,14,16,9,5,10,21,3,22,23,15,2,6,17,24,19,20,13,11,7,18,1,8,0,4} // permutation 9
};

// Seed: 3337877764

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5[5];
    volatile int32_t g_6;
    int32_t g_7;
    int32_t g_13;
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
uint64_t  func_1(struct S1 * p_14);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_14->g_7 p_14->g_13
 * writes: p_14->g_7 p_14->g_13
 */
uint64_t  func_1(struct S1 * p_14)
{ /* block id: 4 */
    int32_t l_10[2];
    int i;
    for (i = 0; i < 2; i++)
        l_10[i] = (-2L);
    for (p_14->g_7 = 0; (p_14->g_7 < 22); p_14->g_7 = safe_add_func_uint64_t_u_u(p_14->g_7, 7))
    { /* block id: 7 */
        VECTOR(int32_t, 16) l_11 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x6B2391CBL), 0x6B2391CBL), 0x6B2391CBL, (-6L), 0x6B2391CBL, (VECTOR(int32_t, 2))((-6L), 0x6B2391CBL), (VECTOR(int32_t, 2))((-6L), 0x6B2391CBL), (-6L), 0x6B2391CBL, (-6L), 0x6B2391CBL);
        int32_t *l_12 = &p_14->g_13;
        int i;
        if (l_10[0])
            break;
        (*l_12) |= ((VECTOR(int32_t, 8))(l_11.s4e76ab2a)).s6;
    }
    return p_14->g_7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_comm_values[i] = 1;
    struct S1 c_15;
    struct S1* p_14 = &c_15;
    struct S1 c_16 = {
        0x2C04EE7DL, // p_14->g_2
        0x4405B401L, // p_14->g_3
        1L, // p_14->g_4
        {(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_14->g_5
        0x737A9A97L, // p_14->g_6
        0x7B8F5F49L, // p_14->g_7
        0x28B35EDAL, // p_14->g_13
        0, // p_14->v_collective
        sequence_input[get_global_id(0)], // p_14->global_0_offset
        sequence_input[get_global_id(1)], // p_14->global_1_offset
        sequence_input[get_global_id(2)], // p_14->global_2_offset
        sequence_input[get_local_id(0)], // p_14->local_0_offset
        sequence_input[get_local_id(1)], // p_14->local_1_offset
        sequence_input[get_local_id(2)], // p_14->local_2_offset
        sequence_input[get_group_id(0)], // p_14->group_0_offset
        sequence_input[get_group_id(1)], // p_14->group_1_offset
        sequence_input[get_group_id(2)], // p_14->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[0][get_linear_local_id()])), // p_14->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_15 = c_16;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_14);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_14->g_2, "p_14->g_2", print_hash_value);
    transparent_crc(p_14->g_3, "p_14->g_3", print_hash_value);
    transparent_crc(p_14->g_4, "p_14->g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_14->g_5[i], "p_14->g_5[i]", print_hash_value);

    }
    transparent_crc(p_14->g_6, "p_14->g_6", print_hash_value);
    transparent_crc(p_14->g_7, "p_14->g_7", print_hash_value);
    transparent_crc(p_14->g_13, "p_14->g_13", print_hash_value);
    transparent_crc(p_14->v_collective, "p_14->v_collective", print_hash_value);
    transparent_crc(p_14->l_comm_values[get_linear_local_id()], "p_14->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_14->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()], "p_14->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
