// --atomics 94 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,22,6 -l 1,11,3
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
{23,0,27,32,19,14,28,18,12,11,8,6,20,10,24,7,29,15,5,13,3,30,25,17,2,21,4,31,22,16,26,1,9}, // permutation 0
{22,32,2,8,1,4,14,31,17,21,6,15,24,11,25,29,27,10,13,28,7,0,5,12,3,30,26,9,23,18,19,16,20}, // permutation 1
{16,7,3,25,15,11,24,9,17,12,26,19,18,22,32,8,13,0,14,29,28,6,21,4,5,30,23,1,27,2,20,10,31}, // permutation 2
{31,2,32,5,16,0,28,8,25,22,14,1,21,19,7,29,24,12,30,17,6,23,9,26,4,27,18,13,15,3,11,10,20}, // permutation 3
{20,31,1,14,2,12,11,7,25,0,22,13,29,18,21,17,15,3,23,6,4,5,28,9,16,19,30,10,27,32,24,8,26}, // permutation 4
{10,30,18,0,22,16,28,5,12,1,27,19,7,9,2,31,3,13,24,14,20,15,17,11,26,4,32,25,6,21,29,8,23}, // permutation 5
{19,8,27,29,32,23,7,11,10,30,20,15,0,17,13,24,2,5,4,31,25,26,21,1,28,6,22,9,12,3,14,16,18}, // permutation 6
{26,11,5,28,8,31,10,20,27,23,1,29,30,13,21,22,24,3,6,32,4,17,18,15,0,7,25,19,12,16,2,14,9}, // permutation 7
{27,8,7,28,1,12,26,31,19,20,4,22,14,15,0,5,18,2,3,9,32,29,13,16,21,10,11,25,17,23,30,24,6}, // permutation 8
{32,9,26,19,12,29,25,13,23,28,2,20,10,0,8,6,17,7,5,14,30,27,3,24,11,22,31,4,16,21,1,18,15} // permutation 9
};

// Seed: 4124782865

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
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
int32_t  func_1(struct S1 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_1(struct S1 * p_3)
{ /* block id: 4 */
    uint16_t l_2 = 0UL;
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S1 c_4;
    struct S1* p_3 = &c_4;
    struct S1 c_5 = {
        0, // p_3->v_collective
        sequence_input[get_global_id(0)], // p_3->global_0_offset
        sequence_input[get_global_id(1)], // p_3->global_1_offset
        sequence_input[get_global_id(2)], // p_3->global_2_offset
        sequence_input[get_local_id(0)], // p_3->local_0_offset
        sequence_input[get_local_id(1)], // p_3->local_1_offset
        sequence_input[get_local_id(2)], // p_3->local_2_offset
        sequence_input[get_group_id(0)], // p_3->group_0_offset
        sequence_input[get_group_id(1)], // p_3->group_1_offset
        sequence_input[get_group_id(2)], // p_3->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_3->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_4 = c_5;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3->v_collective, "p_3->v_collective", print_hash_value);
    transparent_crc(p_3->l_comm_values[get_linear_local_id()], "p_3->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
