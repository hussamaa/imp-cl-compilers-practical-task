// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 96,98,1 -l 4,14,1
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

__constant uint32_t permutations[10][56] = {
{37,10,1,0,48,29,33,49,54,41,52,32,15,13,44,16,25,6,38,12,34,3,19,43,8,22,36,26,28,35,31,47,53,5,20,9,21,14,2,11,30,40,4,46,23,39,7,18,50,17,27,42,51,55,24,45}, // permutation 0
{48,31,12,49,55,32,47,51,50,30,17,53,39,9,27,43,38,16,34,21,35,46,54,25,22,8,44,42,6,3,24,5,2,7,0,1,18,45,10,26,23,40,41,4,13,20,19,33,11,52,37,14,28,29,15,36}, // permutation 1
{40,55,48,23,6,30,32,52,13,1,24,11,29,15,42,54,14,34,26,22,49,7,39,8,41,20,4,27,17,33,10,51,18,31,25,28,43,38,44,9,47,0,3,2,16,36,46,53,37,45,21,5,35,19,12,50}, // permutation 2
{30,20,14,18,37,52,33,27,13,24,28,4,36,44,12,41,1,42,5,31,8,48,26,0,16,51,2,47,29,17,7,45,15,25,22,54,34,38,43,35,23,32,40,10,46,9,3,53,50,19,6,21,11,55,39,49}, // permutation 3
{2,48,44,17,12,25,34,5,20,47,50,21,14,52,15,8,11,49,18,40,36,41,22,3,29,53,51,55,31,43,35,6,38,37,26,23,45,42,27,39,10,30,1,4,32,28,16,24,54,0,7,13,9,46,19,33}, // permutation 4
{8,54,25,53,31,9,11,48,19,10,37,17,40,21,28,44,43,49,12,18,22,27,14,35,15,29,38,23,24,33,34,5,13,46,30,2,45,39,1,42,50,16,32,55,7,36,6,0,3,51,41,4,52,26,47,20}, // permutation 5
{31,49,33,46,10,4,45,37,38,13,12,48,5,50,40,26,7,51,28,36,39,6,0,54,2,53,30,19,1,21,3,34,44,24,9,43,8,25,22,11,42,52,55,20,16,15,18,23,29,14,47,17,32,27,35,41}, // permutation 6
{45,12,26,11,35,27,41,38,15,17,55,18,9,37,50,23,32,21,5,39,19,20,44,6,48,7,16,42,30,46,13,0,31,47,14,34,49,25,51,22,33,2,53,1,52,36,10,3,54,29,40,24,8,4,28,43}, // permutation 7
{53,12,39,42,24,52,17,41,1,10,7,48,46,51,4,34,55,23,13,36,6,45,14,40,54,18,31,16,8,38,2,22,44,49,33,5,32,0,47,19,35,30,21,11,9,25,20,43,27,28,26,15,29,3,50,37}, // permutation 8
{48,43,27,11,12,26,40,52,47,15,42,38,10,49,2,30,7,6,4,46,8,41,35,32,54,45,14,0,29,17,37,19,31,21,16,23,3,25,28,24,39,55,18,20,9,53,33,34,36,51,50,5,44,22,1,13} // permutation 9
};

// Seed: 1519900426

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
uint64_t  func_1(struct S1 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_1(struct S1 * p_3)
{ /* block id: 4 */
    int16_t l_2 = 0x33EFL;
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_3->tid
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
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
