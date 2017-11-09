// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,58,1 -l 1,29,1
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

__constant uint32_t permutations[10][29] = {
{20,16,15,1,11,10,28,4,22,26,6,2,5,23,18,3,8,27,12,7,13,21,0,24,25,19,17,14,9}, // permutation 0
{7,11,24,22,2,4,23,13,5,9,1,21,6,12,16,8,25,20,14,27,10,3,0,26,15,17,18,19,28}, // permutation 1
{23,17,16,22,0,15,4,10,6,21,9,19,2,28,14,26,1,27,25,8,24,11,5,13,18,12,7,3,20}, // permutation 2
{7,16,22,19,10,9,13,1,11,28,5,24,0,12,21,6,3,25,4,23,20,17,15,27,14,26,8,18,2}, // permutation 3
{4,8,21,12,3,16,19,28,0,27,24,22,14,17,9,11,7,23,20,15,6,13,1,18,25,10,2,26,5}, // permutation 4
{25,16,11,4,24,3,23,7,2,19,0,18,6,26,9,22,5,21,8,17,28,15,14,13,10,1,20,12,27}, // permutation 5
{3,13,6,12,28,18,15,9,24,14,11,19,21,10,22,16,2,25,7,26,1,23,4,5,0,27,17,8,20}, // permutation 6
{21,14,25,7,3,4,20,1,5,15,22,8,27,28,6,13,19,23,11,9,16,17,26,24,2,10,12,18,0}, // permutation 7
{27,4,12,6,0,9,28,25,19,22,7,11,21,8,5,15,13,2,17,16,3,1,18,20,26,14,24,23,10}, // permutation 8
{17,16,10,19,8,4,26,25,11,20,18,9,27,21,15,7,5,6,3,28,2,22,12,13,1,24,14,0,23} // permutation 9
};

// Seed: 3309629602

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6;
    int32_t g_9[5][2][7];
    int32_t g_15;
    uint16_t g_19;
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
uint8_t  func_1(struct S1 * p_23);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_23->g_6 p_23->g_9 p_23->g_15 p_23->g_19 p_23->g_comm_values
 * writes: p_23->g_6 p_23->g_9 p_23->g_15 p_23->g_19
 */
uint8_t  func_1(struct S1 * p_23)
{ /* block id: 4 */
    int32_t l_16 = (-6L);
    for (p_23->g_6 = 16; (p_23->g_6 != (-4)); p_23->g_6 = safe_sub_func_int32_t_s_s(p_23->g_6, 3))
    { /* block id: 7 */
        int32_t *l_22 = &p_23->g_9[2][1][2];
        for (p_23->g_9[0][1][0] = 0; (p_23->g_9[0][1][0] >= (-25)); --p_23->g_9[0][1][0])
        { /* block id: 10 */
            int32_t *l_14 = &p_23->g_15;
            (*l_14) ^= (safe_add_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), p_23->g_9[0][1][0]));
        }
        (*l_22) |= (l_16 , (safe_rshift_func_int16_t_s_u(0x14A5L, (--p_23->g_19))));
        if (p_23->g_comm_values[p_23->tid])
            break;
    }
    return l_16;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[29];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 29; i++)
            l_comm_values[i] = 1;
    struct S1 c_24;
    struct S1* p_23 = &c_24;
    struct S1 c_25 = {
        0L, // p_23->g_2
        1L, // p_23->g_3
        1L, // p_23->g_4
        (-1L), // p_23->g_5
        (-1L), // p_23->g_6
        {{{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L},{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L}},{{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L},{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L}},{{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L},{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L}},{{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L},{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L}},{{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L},{0x17E780CAL,5L,0x5E0369BDL,5L,0x17E780CAL,0x17E780CAL,5L}}}, // p_23->g_9
        0L, // p_23->g_15
        0UL, // p_23->g_19
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 29)), permutations[0][get_linear_local_id()])), // p_23->tid
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
    transparent_crc(p_23->g_3, "p_23->g_3", print_hash_value);
    transparent_crc(p_23->g_4, "p_23->g_4", print_hash_value);
    transparent_crc(p_23->g_5, "p_23->g_5", print_hash_value);
    transparent_crc(p_23->g_6, "p_23->g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_23->g_9[i][j][k], "p_23->g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_23->g_15, "p_23->g_15", print_hash_value);
    transparent_crc(p_23->g_19, "p_23->g_19", print_hash_value);
    transparent_crc(p_23->v_collective, "p_23->v_collective", print_hash_value);
    transparent_crc(p_23->l_comm_values[get_linear_local_id()], "p_23->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_23->g_comm_values[get_linear_group_id() * 29 + get_linear_local_id()], "p_23->g_comm_values[get_linear_group_id() * 29 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
