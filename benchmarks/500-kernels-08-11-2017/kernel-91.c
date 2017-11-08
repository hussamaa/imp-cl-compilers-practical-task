// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,33,99 -l 3,1,9
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

__constant uint32_t permutations[10][27] = {
{18,14,20,21,3,16,24,12,0,22,7,26,13,11,8,6,2,5,25,10,19,1,4,15,23,17,9}, // permutation 0
{25,11,21,15,2,10,24,19,0,8,14,5,13,1,20,18,23,22,7,6,26,17,3,12,9,16,4}, // permutation 1
{6,7,2,18,14,26,16,3,4,1,19,11,22,24,23,21,10,8,15,9,17,12,0,20,5,13,25}, // permutation 2
{10,0,2,25,17,15,14,1,6,26,22,20,9,18,5,16,8,13,19,21,12,24,4,3,23,11,7}, // permutation 3
{2,11,24,25,22,3,13,9,16,10,18,15,23,26,6,5,14,12,17,7,4,20,0,19,8,21,1}, // permutation 4
{2,16,5,15,17,18,12,13,25,10,11,6,22,3,24,26,0,23,21,20,9,8,19,4,1,14,7}, // permutation 5
{16,23,6,19,25,18,10,7,12,4,9,24,5,0,14,8,2,20,17,1,11,3,13,26,21,15,22}, // permutation 6
{10,11,15,18,4,25,16,20,24,7,14,0,1,5,22,26,9,17,8,2,23,21,13,6,3,19,12}, // permutation 7
{19,15,16,9,6,10,24,18,23,4,21,22,1,11,13,14,25,12,8,2,17,26,3,20,0,7,5}, // permutation 8
{15,17,8,24,11,9,6,10,18,20,21,26,1,23,19,16,14,13,25,4,5,7,3,22,0,2,12} // permutation 9
};

// Seed: 3467876560

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    int32_t g_3;
    volatile uint8_t g_6;
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
int32_t  func_1(struct S4 * p_9);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_9->g_6 p_9->l_comm_values
 * writes: p_9->g_6
 */
int32_t  func_1(struct S4 * p_9)
{ /* block id: 4 */
    int32_t *l_2 = &p_9->g_3;
    int32_t *l_4 = &p_9->g_3;
    int32_t *l_5[5][4][10] = {{{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0}},{{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0}},{{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0}},{{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0}},{{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0},{&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0,&p_9->g_3,(void*)0,&p_9->g_3,&p_9->g_3,&p_9->g_3,(void*)0}}};
    int i, j, k;
    ++p_9->g_6;
    return p_9->l_comm_values[(safe_mod_func_uint32_t_u_u(p_9->tid, 27))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_comm_values[i] = 1;
    struct S4 c_10;
    struct S4* p_9 = &c_10;
    struct S4 c_11 = {
        0x7576C516L, // p_9->g_3
        0UL, // p_9->g_6
        0, // p_9->v_collective
        sequence_input[get_global_id(0)], // p_9->global_0_offset
        sequence_input[get_global_id(1)], // p_9->global_1_offset
        sequence_input[get_global_id(2)], // p_9->global_2_offset
        sequence_input[get_local_id(0)], // p_9->local_0_offset
        sequence_input[get_local_id(1)], // p_9->local_1_offset
        sequence_input[get_local_id(2)], // p_9->local_2_offset
        sequence_input[get_group_id(0)], // p_9->group_0_offset
        sequence_input[get_group_id(1)], // p_9->group_1_offset
        sequence_input[get_group_id(2)], // p_9->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 27)), permutations[0][get_linear_local_id()])), // p_9->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_10 = c_11;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_9);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_9->g_3, "p_9->g_3", print_hash_value);
    transparent_crc(p_9->g_6, "p_9->g_6", print_hash_value);
    transparent_crc(p_9->v_collective, "p_9->v_collective", print_hash_value);
    transparent_crc(p_9->l_comm_values[get_linear_local_id()], "p_9->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_9->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()], "p_9->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
