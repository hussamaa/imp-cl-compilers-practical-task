// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 74,67,1 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 3216744067

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_3;
    int64_t g_4;
    int32_t g_6;
    volatile int64_t g_7[4];
    volatile int64_t g_8;
    volatile int16_t g_15;
    volatile uint32_t g_16;
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
uint64_t  func_1(struct S1 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->g_4 p_19->g_3 p_19->g_16 p_19->g_comm_values
 * writes: p_19->g_4 p_19->g_16
 */
uint64_t  func_1(struct S1 * p_19)
{ /* block id: 4 */
    int32_t *l_2[3][9][4] = {{{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3}},{{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3}},{{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3},{&p_19->g_3,&p_19->g_3,&p_19->g_3,&p_19->g_3}}};
    int32_t l_5 = (-1L);
    uint64_t l_9 = 18446744073709551613UL;
    int64_t l_14 = 0x5CA7DBC8B6976892L;
    int i, j, k;
    ++l_9;
    for (p_19->g_4 = (-6); (p_19->g_4 < 7); p_19->g_4 = safe_add_func_uint8_t_u_u(p_19->g_4, 8))
    { /* block id: 8 */
        if (p_19->g_3)
            break;
    }
    p_19->g_16--;
    return p_19->g_comm_values[p_19->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_20;
    struct S1* p_19 = &c_20;
    struct S1 c_21 = {
        (-10L), // p_19->g_3
        1L, // p_19->g_4
        0L, // p_19->g_6
        {0x02B00025004286A4L,0x02B00025004286A4L,0x02B00025004286A4L,0x02B00025004286A4L}, // p_19->g_7
        2L, // p_19->g_8
        0x56CFL, // p_19->g_15
        0xE6DE11D6L, // p_19->g_16
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_19->tid
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
    transparent_crc(p_19->g_4, "p_19->g_4", print_hash_value);
    transparent_crc(p_19->g_6, "p_19->g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_19->g_7[i], "p_19->g_7[i]", print_hash_value);

    }
    transparent_crc(p_19->g_8, "p_19->g_8", print_hash_value);
    transparent_crc(p_19->g_15, "p_19->g_15", print_hash_value);
    transparent_crc(p_19->g_16, "p_19->g_16", print_hash_value);
    transparent_crc(p_19->v_collective, "p_19->v_collective", print_hash_value);
    transparent_crc(p_19->l_comm_values[get_linear_local_id()], "p_19->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_19->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_19->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
