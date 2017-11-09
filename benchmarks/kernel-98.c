// --atomics 28 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,1,59 -l 23,1,1
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

__constant uint32_t permutations[10][23] = {
{3,6,15,13,14,17,0,4,11,1,9,8,18,21,2,12,22,5,16,20,7,19,10}, // permutation 0
{4,15,9,11,1,16,19,3,2,7,20,14,22,17,21,10,8,0,6,12,13,5,18}, // permutation 1
{17,5,0,4,21,8,22,6,14,16,18,13,2,9,11,12,15,1,3,7,10,19,20}, // permutation 2
{1,6,18,5,13,16,8,10,0,4,2,15,7,12,14,21,3,17,19,11,22,9,20}, // permutation 3
{16,22,9,0,17,4,20,1,12,7,18,10,2,19,13,14,8,5,15,6,3,11,21}, // permutation 4
{2,3,11,8,15,6,13,10,14,4,0,17,7,22,12,5,18,20,21,19,1,9,16}, // permutation 5
{13,4,18,7,17,10,22,14,12,21,3,5,0,20,11,1,8,16,19,6,2,9,15}, // permutation 6
{10,2,13,6,4,12,11,19,8,22,5,20,15,7,0,21,18,14,16,17,1,9,3}, // permutation 7
{4,18,7,16,15,13,14,8,3,22,0,11,19,20,6,9,17,5,10,21,2,1,12}, // permutation 8
{5,14,22,9,12,11,15,7,1,19,18,21,6,2,17,3,8,13,20,16,10,4,0} // permutation 9
};

// Seed: 500911200

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_4[2][7][10];
    int32_t * volatile g_3;
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
uint32_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_3 p_5->g_4
 * writes: p_5->g_4
 */
uint32_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    uint32_t l_2 = 0xDB8FAAAEL;
    (*p_5->g_3) |= l_2;
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        {{{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L}},{{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L},{0x0412894FL,0x733582F8L,4L,(-4L),6L,0x0707DFE4L,(-5L),(-1L),(-5L),0x0707DFE4L}}}, // p_5->g_4
        &p_5->g_4[1][3][7], // p_5->g_3
        0, // p_5->v_collective
        sequence_input[get_global_id(0)], // p_5->global_0_offset
        sequence_input[get_global_id(1)], // p_5->global_1_offset
        sequence_input[get_global_id(2)], // p_5->global_2_offset
        sequence_input[get_local_id(0)], // p_5->local_0_offset
        sequence_input[get_local_id(1)], // p_5->local_1_offset
        sequence_input[get_local_id(2)], // p_5->local_2_offset
        sequence_input[get_group_id(0)], // p_5->group_0_offset
        sequence_input[get_group_id(1)], // p_5->group_1_offset
        sequence_input[get_group_id(2)], // p_5->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[0][get_linear_local_id()])), // p_5->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_6 = c_7;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_5);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_5->g_4[i][j][k], "p_5->g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
