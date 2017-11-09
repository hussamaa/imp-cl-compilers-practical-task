// --atomics 95 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 38,48,1 -l 1,48,1
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

__constant uint32_t permutations[10][48] = {
{16,35,15,13,33,32,8,0,47,18,9,10,38,34,2,39,6,30,26,25,20,1,23,37,41,44,42,27,36,45,28,46,31,22,7,11,14,4,43,3,40,21,5,17,29,12,19,24}, // permutation 0
{13,21,38,33,11,19,3,27,42,32,5,30,40,26,31,37,44,47,43,14,39,18,29,22,23,17,15,0,28,24,35,34,46,7,6,12,45,20,36,4,1,2,16,8,25,10,41,9}, // permutation 1
{4,21,19,38,30,39,10,33,35,22,6,46,43,42,14,11,25,28,32,13,29,0,9,36,37,12,45,1,47,34,41,8,17,7,3,27,23,16,26,2,24,15,20,5,31,40,44,18}, // permutation 2
{29,17,20,1,24,38,15,18,3,32,13,33,4,7,27,16,41,10,0,28,39,30,5,45,2,9,6,12,21,25,26,22,11,14,46,42,36,35,40,34,8,43,37,23,47,31,44,19}, // permutation 3
{34,21,3,5,43,25,29,45,40,1,37,6,14,15,42,36,33,46,16,8,41,24,13,18,10,39,31,26,47,22,28,44,35,4,17,11,0,19,2,32,38,30,27,20,9,12,23,7}, // permutation 4
{37,33,17,45,46,23,28,29,2,30,1,15,47,41,44,18,20,31,3,26,5,16,25,27,42,36,8,39,22,13,14,6,21,12,43,0,24,19,11,32,9,34,10,38,40,35,7,4}, // permutation 5
{23,10,11,2,22,1,20,33,13,34,19,7,3,0,25,14,21,35,45,16,8,15,44,31,42,27,43,32,37,41,6,29,26,5,47,38,24,39,28,30,9,40,4,36,46,18,17,12}, // permutation 6
{45,44,7,29,21,41,34,39,4,31,5,25,37,13,32,2,40,17,15,23,20,46,33,9,24,12,14,6,28,1,35,22,43,30,19,42,8,27,36,3,26,10,47,0,16,18,38,11}, // permutation 7
{14,38,11,39,28,33,1,43,12,8,32,2,17,16,23,4,20,27,37,34,31,15,35,21,40,46,3,19,41,18,6,24,9,45,36,30,10,7,0,29,44,5,25,26,13,42,22,47}, // permutation 8
{1,6,40,0,22,11,9,33,10,38,26,28,30,46,8,41,45,18,43,20,42,31,25,2,16,3,34,15,14,44,19,5,12,36,35,27,37,21,29,13,24,32,17,47,4,7,23,39} // permutation 9
};

// Seed: 3536357558

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
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
int64_t  func_1(struct S0 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_1(struct S0 * p_3)
{ /* block id: 4 */
    int8_t l_2[4];
    int i;
    for (i = 0; i < 4; i++)
        l_2[i] = (-9L);
    l_2[2] ^= 0x2C29A3DFL;
    return l_2[2];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_comm_values[i] = 1;
    struct S0 c_4;
    struct S0* p_3 = &c_4;
    struct S0 c_5 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[0][get_linear_local_id()])), // p_3->tid
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
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
