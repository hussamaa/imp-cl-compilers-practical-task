// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 77,51,1 -l 11,3,1
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

__constant uint32_t permutations[10][33] = {
{7,32,26,5,0,11,22,19,6,23,16,18,25,29,24,13,1,28,14,31,9,4,30,10,20,8,15,17,27,3,21,2,12}, // permutation 0
{16,30,25,19,3,4,17,31,29,23,12,2,15,6,7,13,5,27,0,20,26,11,14,18,1,22,32,10,28,21,9,24,8}, // permutation 1
{6,4,13,16,25,23,18,15,12,24,17,29,2,26,27,5,10,19,20,7,11,9,32,0,3,14,8,28,22,31,21,1,30}, // permutation 2
{17,30,21,14,12,16,10,24,29,20,5,0,32,4,25,28,8,6,22,15,26,23,2,11,9,13,18,31,3,7,27,1,19}, // permutation 3
{22,31,10,21,14,28,9,26,23,13,16,3,8,24,0,20,18,1,2,19,15,4,29,32,30,17,25,27,11,6,7,12,5}, // permutation 4
{16,25,26,10,2,0,3,1,22,24,28,5,18,21,11,29,15,32,17,12,20,4,27,14,13,8,30,9,31,7,6,23,19}, // permutation 5
{12,11,32,26,30,15,3,23,2,31,14,5,22,27,4,24,16,20,29,13,1,6,9,7,0,28,17,25,8,10,19,18,21}, // permutation 6
{20,3,14,26,28,9,15,31,2,27,17,13,21,32,5,0,22,30,24,11,8,18,6,1,25,16,12,23,19,29,10,4,7}, // permutation 7
{8,9,19,7,18,12,30,22,2,5,4,21,24,17,32,29,6,1,28,25,16,26,0,15,10,31,23,27,3,14,11,13,20}, // permutation 8
{25,8,1,24,26,13,15,20,4,23,17,0,22,18,5,3,11,19,32,2,28,21,29,31,6,9,30,10,16,14,7,12,27} // permutation 9
};

// Seed: 3649373852

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_7;
    volatile int8_t g_8;
    int16_t g_9[10];
    volatile int8_t g_10[9][2][4];
    uint32_t g_11;
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
uint8_t  func_1(struct S2 * p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_15->g_3 p_15->l_comm_values p_15->g_11
 * writes: p_15->g_3 p_15->g_11
 */
uint8_t  func_1(struct S2 * p_15)
{ /* block id: 4 */
    VECTOR(uint16_t, 4) l_14 = (VECTOR(uint16_t, 4))(0x7F4AL, (VECTOR(uint16_t, 2))(0x7F4AL, 0xAE85L), 0xAE85L);
    int i;
    for (p_15->g_3 = (-30); (p_15->g_3 > 4); p_15->g_3 = safe_add_func_int32_t_s_s(p_15->g_3, 6))
    { /* block id: 7 */
        int32_t *l_6[6][6] = {{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7},{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7},{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7},{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7},{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7},{&p_15->g_3,&p_15->g_7,&p_15->g_7,&p_15->g_3,&p_15->g_3,&p_15->g_7}};
        int i, j;
        if (p_15->l_comm_values[(safe_mod_func_uint32_t_u_u(p_15->tid, 33))])
            break;
        p_15->g_11--;
    }
    return l_14.w;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S2 c_16;
    struct S2* p_15 = &c_16;
    struct S2 c_17 = {
        0x70CD5099L, // p_15->g_2
        0L, // p_15->g_3
        0L, // p_15->g_7
        0x4EL, // p_15->g_8
        {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_15->g_9
        {{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}},{{0x0DL,0L,0x6FL,0x72L},{0x0DL,0L,0x6FL,0x72L}}}, // p_15->g_10
        4294967289UL, // p_15->g_11
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_15->tid
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
    transparent_crc(p_15->g_3, "p_15->g_3", print_hash_value);
    transparent_crc(p_15->g_7, "p_15->g_7", print_hash_value);
    transparent_crc(p_15->g_8, "p_15->g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_15->g_9[i], "p_15->g_9[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_15->g_10[i][j][k], "p_15->g_10[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_15->g_11, "p_15->g_11", print_hash_value);
    transparent_crc(p_15->v_collective, "p_15->v_collective", print_hash_value);
    transparent_crc(p_15->l_comm_values[get_linear_local_id()], "p_15->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_15->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_15->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
