// --atomics 48 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 65,38,2 -l 1,19,2
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

__constant uint32_t permutations[10][38] = {
{5,33,21,7,23,26,30,15,8,28,3,12,2,25,4,9,27,6,13,36,0,34,10,22,18,24,31,19,14,20,17,37,16,29,32,35,11,1}, // permutation 0
{17,24,18,28,29,34,5,26,4,22,8,16,3,37,25,14,13,21,12,9,20,10,0,23,33,35,1,30,15,2,6,36,11,19,31,32,7,27}, // permutation 1
{13,24,27,2,31,4,37,12,34,0,23,33,10,1,6,36,7,18,30,26,25,19,17,11,16,21,15,20,8,32,29,5,14,28,3,35,9,22}, // permutation 2
{22,26,34,3,19,12,7,17,13,29,23,16,21,10,14,11,30,1,18,31,33,5,32,36,6,27,4,35,0,15,2,20,24,37,28,8,25,9}, // permutation 3
{26,28,19,23,6,8,4,25,21,13,14,31,16,33,30,12,37,15,32,3,24,1,29,35,17,9,34,36,20,11,0,22,7,27,18,2,5,10}, // permutation 4
{20,16,30,19,28,25,21,23,13,3,27,12,7,29,10,22,0,8,31,35,26,37,2,6,5,18,11,33,34,9,32,1,15,24,17,4,36,14}, // permutation 5
{31,34,5,36,35,29,10,16,17,20,15,28,26,11,37,25,27,33,24,13,18,19,0,6,22,14,23,4,30,9,7,1,3,32,21,12,8,2}, // permutation 6
{23,14,29,15,20,12,24,7,28,16,32,19,31,18,26,33,34,1,11,3,37,4,35,2,6,22,21,13,10,27,30,36,9,5,8,0,17,25}, // permutation 7
{20,9,18,19,2,17,12,31,15,7,27,36,37,30,8,29,5,21,3,10,11,4,24,16,0,13,32,22,14,26,6,35,25,1,23,28,33,34}, // permutation 8
{24,22,34,3,25,4,29,15,10,6,12,2,37,32,17,16,7,33,23,11,5,20,26,21,13,28,18,30,0,1,31,27,35,9,19,36,14,8} // permutation 9
};

// Seed: 2392870329

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_3;
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
int32_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_comm_values
 * writes:
 */
int32_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    int32_t *l_2 = &p_5->g_3;
    int32_t **l_4 = &l_2;
    (*l_4) = l_2;
    return p_5->g_comm_values[p_5->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        0x4F2E5664L, // p_5->g_3
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 38)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->g_3, "p_5->g_3", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 38 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
