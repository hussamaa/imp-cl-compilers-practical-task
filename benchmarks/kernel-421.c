// --atomics 98 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,82,1 -l 1,41,1
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

__constant uint32_t permutations[10][41] = {
{34,31,40,5,29,16,15,22,3,25,7,6,35,38,4,30,26,13,28,17,33,37,21,32,12,0,2,39,1,27,18,36,10,14,20,23,9,24,19,8,11}, // permutation 0
{14,15,35,8,3,26,37,27,38,28,30,2,13,12,36,20,9,21,10,19,33,39,25,7,11,1,0,17,16,24,4,32,40,18,22,6,23,5,29,34,31}, // permutation 1
{40,21,32,11,37,3,39,1,14,30,0,2,23,13,22,8,31,34,5,7,20,24,16,18,10,9,4,29,35,38,33,19,17,36,28,26,25,15,6,12,27}, // permutation 2
{14,11,24,5,34,21,31,4,26,2,22,7,3,23,15,1,0,8,10,19,17,28,40,13,32,36,27,37,18,25,12,35,20,38,39,9,16,33,29,6,30}, // permutation 3
{18,21,13,16,12,31,27,1,0,10,29,37,25,7,4,22,3,17,30,19,32,20,8,9,34,15,11,14,24,39,40,33,26,35,2,5,6,23,36,38,28}, // permutation 4
{36,2,20,8,39,27,6,10,40,1,0,35,38,11,32,29,5,18,31,4,21,23,13,26,30,25,37,7,16,33,19,34,28,14,17,22,9,15,3,12,24}, // permutation 5
{35,12,11,23,5,13,31,27,15,29,32,3,20,40,25,0,21,28,7,4,17,1,8,24,6,22,10,39,33,14,30,37,16,18,19,34,2,36,9,38,26}, // permutation 6
{7,4,17,13,20,23,11,37,30,38,29,34,10,14,5,33,19,39,35,12,3,24,28,36,15,27,26,2,16,40,8,0,25,22,31,6,9,1,18,21,32}, // permutation 7
{5,40,21,34,6,15,35,19,25,37,26,33,27,17,29,1,31,32,0,4,20,10,11,18,7,38,24,13,23,36,30,8,14,16,3,9,12,39,2,28,22}, // permutation 8
{38,16,39,11,18,6,2,13,15,20,27,19,23,26,12,32,3,24,14,40,5,35,28,37,34,10,31,33,17,4,30,21,22,25,29,7,9,36,8,1,0} // permutation 9
};

// Seed: 33736713

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_3;
    int16_t g_13;
    volatile VECTOR(uint32_t, 16) g_14;
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
uint64_t  func_1(struct S1 * p_17);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_17->l_comm_values p_17->g_3 p_17->g_14
 * writes: p_17->g_3 p_17->g_14
 */
uint64_t  func_1(struct S1 * p_17)
{ /* block id: 4 */
    int32_t *l_2 = &p_17->g_3;
    int32_t *l_4 = &p_17->g_3;
    int32_t *l_5 = &p_17->g_3;
    int32_t *l_6 = &p_17->g_3;
    int32_t *l_7 = &p_17->g_3;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &p_17->g_3;
    int32_t *l_10 = &p_17->g_3;
    int32_t *l_11 = &p_17->g_3;
    int32_t *l_12[4];
    int i;
    for (i = 0; i < 4; i++)
        l_12[i] = &p_17->g_3;
    (*l_2) ^= p_17->l_comm_values[(safe_mod_func_uint32_t_u_u(p_17->tid, 41))];
    ++p_17->g_14.sc;
    return p_17->g_3;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_comm_values[i] = 1;
    struct S1 c_18;
    struct S1* p_17 = &c_18;
    struct S1 c_19 = {
        0x747A6DEEL, // p_17->g_3
        0x6F44L, // p_17->g_13
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_17->g_14
        0, // p_17->v_collective
        sequence_input[get_global_id(0)], // p_17->global_0_offset
        sequence_input[get_global_id(1)], // p_17->global_1_offset
        sequence_input[get_global_id(2)], // p_17->global_2_offset
        sequence_input[get_local_id(0)], // p_17->local_0_offset
        sequence_input[get_local_id(1)], // p_17->local_1_offset
        sequence_input[get_local_id(2)], // p_17->local_2_offset
        sequence_input[get_group_id(0)], // p_17->group_0_offset
        sequence_input[get_group_id(1)], // p_17->group_1_offset
        sequence_input[get_group_id(2)], // p_17->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 41)), permutations[0][get_linear_local_id()])), // p_17->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_18 = c_19;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_17);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_17->g_3, "p_17->g_3", print_hash_value);
    transparent_crc(p_17->g_13, "p_17->g_13", print_hash_value);
    transparent_crc(p_17->g_14.s0, "p_17->g_14.s0", print_hash_value);
    transparent_crc(p_17->g_14.s1, "p_17->g_14.s1", print_hash_value);
    transparent_crc(p_17->g_14.s2, "p_17->g_14.s2", print_hash_value);
    transparent_crc(p_17->g_14.s3, "p_17->g_14.s3", print_hash_value);
    transparent_crc(p_17->g_14.s4, "p_17->g_14.s4", print_hash_value);
    transparent_crc(p_17->g_14.s5, "p_17->g_14.s5", print_hash_value);
    transparent_crc(p_17->g_14.s6, "p_17->g_14.s6", print_hash_value);
    transparent_crc(p_17->g_14.s7, "p_17->g_14.s7", print_hash_value);
    transparent_crc(p_17->g_14.s8, "p_17->g_14.s8", print_hash_value);
    transparent_crc(p_17->g_14.s9, "p_17->g_14.s9", print_hash_value);
    transparent_crc(p_17->g_14.sa, "p_17->g_14.sa", print_hash_value);
    transparent_crc(p_17->g_14.sb, "p_17->g_14.sb", print_hash_value);
    transparent_crc(p_17->g_14.sc, "p_17->g_14.sc", print_hash_value);
    transparent_crc(p_17->g_14.sd, "p_17->g_14.sd", print_hash_value);
    transparent_crc(p_17->g_14.se, "p_17->g_14.se", print_hash_value);
    transparent_crc(p_17->g_14.sf, "p_17->g_14.sf", print_hash_value);
    transparent_crc(p_17->v_collective, "p_17->v_collective", print_hash_value);
    transparent_crc(p_17->l_comm_values[get_linear_local_id()], "p_17->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_17->g_comm_values[get_linear_group_id() * 41 + get_linear_local_id()], "p_17->g_comm_values[get_linear_group_id() * 41 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
