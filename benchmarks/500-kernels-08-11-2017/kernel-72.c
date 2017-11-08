// --atomics 18 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,76,2 -l 2,19,2
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

__constant uint32_t permutations[10][76] = {
{47,57,34,69,33,52,70,5,62,31,63,59,20,15,1,23,14,54,58,50,71,28,29,35,60,61,40,65,53,18,51,3,21,7,48,12,43,6,27,38,67,39,25,11,36,17,56,41,26,30,2,72,16,68,42,22,45,75,24,0,46,10,19,44,4,8,32,9,49,64,73,37,55,13,66,74}, // permutation 0
{11,18,29,22,71,23,67,56,10,26,45,6,69,30,64,37,15,0,48,65,19,16,75,38,24,40,63,51,55,60,3,47,59,62,52,66,68,28,70,53,46,33,8,44,58,14,5,13,35,36,54,31,1,17,21,7,25,49,50,43,61,9,20,73,4,27,42,74,32,72,41,12,57,39,34,2}, // permutation 1
{1,9,75,42,10,54,65,67,57,12,66,18,73,35,51,25,8,46,23,50,32,49,40,14,56,62,4,63,69,0,38,43,20,58,7,22,60,27,19,29,37,47,2,36,41,55,48,64,11,61,44,70,3,68,33,45,30,28,53,13,59,24,72,52,39,6,31,74,26,34,5,17,21,16,15,71}, // permutation 2
{40,71,56,7,70,58,38,69,68,37,5,47,21,9,18,8,49,62,22,39,57,50,20,51,3,52,10,60,0,55,35,66,2,23,34,13,11,31,64,61,45,19,41,26,17,29,27,75,15,25,63,53,4,32,14,73,44,67,16,59,36,65,1,33,24,72,54,6,42,46,12,28,30,43,74,48}, // permutation 3
{37,56,2,36,61,16,41,38,65,49,40,34,53,9,6,32,43,71,20,66,8,62,58,22,50,15,51,1,4,19,21,11,35,60,48,47,33,13,54,44,17,39,29,18,70,25,5,23,46,57,26,3,64,30,27,69,55,42,12,63,75,31,67,52,24,0,10,72,59,28,68,7,73,74,45,14}, // permutation 4
{1,27,41,29,13,16,23,64,36,5,2,8,40,71,54,74,3,69,46,4,31,24,48,26,57,28,49,52,14,75,60,72,55,33,43,56,9,73,6,42,11,58,0,15,37,65,50,19,20,47,68,39,62,45,18,17,7,63,21,66,67,59,32,61,51,10,12,22,35,70,38,25,44,34,30,53}, // permutation 5
{54,17,65,3,58,12,1,6,55,74,45,5,41,9,56,44,70,53,21,29,33,32,49,10,64,63,50,62,43,38,27,26,15,19,28,46,11,69,0,37,18,13,60,2,30,34,67,35,8,16,14,39,57,61,71,25,73,66,42,72,24,4,40,7,22,23,31,47,48,52,20,36,59,68,51,75}, // permutation 6
{10,5,31,52,40,22,74,35,55,64,69,44,51,6,24,3,17,27,9,32,7,25,16,37,8,0,34,19,38,1,23,28,72,29,73,59,26,71,60,61,4,12,42,39,14,13,57,63,54,2,68,75,11,49,65,67,56,48,18,20,46,33,53,43,70,66,41,15,30,47,21,36,58,62,45,50}, // permutation 7
{28,45,37,64,50,68,8,70,6,35,61,63,23,47,20,16,30,75,58,21,11,5,10,18,73,3,14,54,69,60,19,55,27,56,13,24,53,74,34,71,42,39,41,17,40,62,25,26,22,15,51,65,49,0,44,32,1,29,46,66,52,72,38,9,33,31,59,36,57,12,67,43,2,7,4,48}, // permutation 8
{68,21,24,42,26,13,60,39,17,74,57,6,44,73,20,30,14,34,27,38,15,70,48,4,61,8,3,45,69,72,9,35,29,1,0,49,7,67,43,18,55,10,41,32,37,66,28,75,5,63,53,47,12,71,58,50,31,40,33,2,36,19,11,56,54,23,25,46,51,65,16,52,64,22,62,59} // permutation 9
};

// Seed: 4002733670

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_2;
    int32_t g_8;
    int32_t * volatile g_7;
    int64_t g_10;
    volatile uint16_t g_11[2];
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
uint32_t  func_1(struct S2 * p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_15->g_2 p_15->g_7 p_15->g_8 p_15->g_11 p_15->g_10
 * writes: p_15->g_2 p_15->g_8 p_15->g_11
 */
uint32_t  func_1(struct S2 * p_15)
{ /* block id: 4 */
    int32_t *l_9[9][6][4] = {{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}},{{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2},{&p_15->g_2,&p_15->g_2,&p_15->g_2,&p_15->g_2}}};
    int32_t **l_14 = &l_9[1][0][3];
    int i, j, k;
    for (p_15->g_2 = 27; (p_15->g_2 != 26); p_15->g_2 = safe_sub_func_int8_t_s_s(p_15->g_2, 3))
    { /* block id: 7 */
        (*p_15->g_7) &= (safe_rshift_func_uint8_t_u_u(0xA6L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(254UL, 5UL)).yyxyyxyx)).s2));
    }
    p_15->g_11[1]--;
    (*l_14) = l_9[0][4][1];
    return p_15->g_10;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_comm_values[i] = 1;
    struct S2 c_16;
    struct S2* p_15 = &c_16;
    struct S2 c_17 = {
        0L, // p_15->g_2
        1L, // p_15->g_8
        &p_15->g_8, // p_15->g_7
        0x280BFE7374489B46L, // p_15->g_10
        {0x14D2L,0x14D2L}, // p_15->g_11
        0, // p_15->v_collective
        sequence_input[get_global_id(0)], // p_15->global_0_offset
        sequence_input[get_global_id(1)], // p_15->global_1_offset
        sequence_input[get_global_id(2)], // p_15->global_2_offset
        sequence_input[get_local_id(0)], // p_15->local_0_offset
        sequence_input[get_local_id(1)], // p_15->local_1_offset
        sequence_input[get_local_id(2)], // p_15->local_2_offset
        sequence_input[get_group_id(0)], // p_15->group_0_offset
        sequence_input[get_group_id(1)], // p_15->group_1_offset
        sequence_input[get_group_id(2)], // p_15->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[0][get_linear_local_id()])), // p_15->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_16 = c_17;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_15);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_15->g_2, "p_15->g_2", print_hash_value);
    transparent_crc(p_15->g_8, "p_15->g_8", print_hash_value);
    transparent_crc(p_15->g_10, "p_15->g_10", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_15->g_11[i], "p_15->g_11[i]", print_hash_value);

    }
    transparent_crc(p_15->v_collective, "p_15->v_collective", print_hash_value);
    transparent_crc(p_15->l_comm_values[get_linear_local_id()], "p_15->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_15->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()], "p_15->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
