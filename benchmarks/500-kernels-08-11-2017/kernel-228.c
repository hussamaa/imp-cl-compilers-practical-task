// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 98,64,1 -l 2,2,1
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

__constant uint32_t permutations[10][4] = {
{1,2,3,0}, // permutation 0
{2,0,1,3}, // permutation 1
{2,3,1,0}, // permutation 2
{1,0,3,2}, // permutation 3
{1,0,3,2}, // permutation 4
{3,2,0,1}, // permutation 5
{2,0,1,3}, // permutation 6
{2,0,3,1}, // permutation 7
{1,3,0,2}, // permutation 8
{1,3,2,0} // permutation 9
};

// Seed: 2729575702

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    int32_t g_4;
    int16_t g_9[5][7][4];
    volatile int8_t g_12;
    volatile int16_t g_13;
    int64_t g_14;
    int32_t g_16[5][7];
    volatile int64_t g_17;
    int64_t g_18;
    volatile uint32_t g_20;
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
int8_t  func_1(struct S0 * p_23);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_23->g_20 p_23->g_4
 * writes: p_23->g_20
 */
int8_t  func_1(struct S0 * p_23)
{ /* block id: 4 */
    int32_t *l_3 = &p_23->g_4;
    int32_t l_5[4];
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &l_5[2];
    int32_t *l_8 = &p_23->g_4;
    int32_t *l_10 = &l_5[2];
    int32_t *l_11[3];
    int8_t l_15 = (-2L);
    int32_t l_19[3];
    int i;
    for (i = 0; i < 4; i++)
        l_5[i] = (-5L);
    for (i = 0; i < 3; i++)
        l_11[i] = &p_23->g_4;
    for (i = 0; i < 3; i++)
        l_19[i] = (-1L);
    --p_23->g_20;
    return p_23->g_4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S0 c_24;
    struct S0* p_23 = &c_24;
    struct S0 c_25 = {
        1L, // p_23->g_2
        2L, // p_23->g_4
        {{{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L}},{{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L}},{{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L}},{{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L}},{{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L},{2L,0x676DL,0x3303L,2L}}}, // p_23->g_9
        1L, // p_23->g_12
        0x6E62L, // p_23->g_13
        6L, // p_23->g_14
        {{(-7L),0x0BA5FC02L,(-7L),(-7L),0x0BA5FC02L,(-7L),(-7L)},{(-7L),0x0BA5FC02L,(-7L),(-7L),0x0BA5FC02L,(-7L),(-7L)},{(-7L),0x0BA5FC02L,(-7L),(-7L),0x0BA5FC02L,(-7L),(-7L)},{(-7L),0x0BA5FC02L,(-7L),(-7L),0x0BA5FC02L,(-7L),(-7L)},{(-7L),0x0BA5FC02L,(-7L),(-7L),0x0BA5FC02L,(-7L),(-7L)}}, // p_23->g_16
        0L, // p_23->g_17
        0x124C6E12CDFD7F7FL, // p_23->g_18
        4294967286UL, // p_23->g_20
        0, // p_23->v_collective
        sequence_input[get_global_id(0)], // p_23->global_0_offset
        sequence_input[get_global_id(1)], // p_23->global_1_offset
        sequence_input[get_global_id(2)], // p_23->global_2_offset
        sequence_input[get_local_id(0)], // p_23->local_0_offset
        sequence_input[get_local_id(1)], // p_23->local_1_offset
        sequence_input[get_local_id(2)], // p_23->local_2_offset
        sequence_input[get_group_id(0)], // p_23->group_0_offset
        sequence_input[get_group_id(1)], // p_23->group_1_offset
        sequence_input[get_group_id(2)], // p_23->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_23->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_24 = c_25;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_23);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_23->g_2, "p_23->g_2", print_hash_value);
    transparent_crc(p_23->g_4, "p_23->g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_23->g_9[i][j][k], "p_23->g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_23->g_12, "p_23->g_12", print_hash_value);
    transparent_crc(p_23->g_13, "p_23->g_13", print_hash_value);
    transparent_crc(p_23->g_14, "p_23->g_14", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_23->g_16[i][j], "p_23->g_16[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_23->g_17, "p_23->g_17", print_hash_value);
    transparent_crc(p_23->g_18, "p_23->g_18", print_hash_value);
    transparent_crc(p_23->g_20, "p_23->g_20", print_hash_value);
    transparent_crc(p_23->v_collective, "p_23->v_collective", print_hash_value);
    transparent_crc(p_23->l_comm_values[get_linear_local_id()], "p_23->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_23->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_23->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
