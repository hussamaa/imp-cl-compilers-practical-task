// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 53,7,23 -l 53,1,1
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

__constant uint32_t permutations[10][53] = {
{20,32,9,42,12,39,34,7,2,14,0,47,13,23,28,10,49,22,5,33,4,6,18,15,41,1,3,51,31,26,21,36,25,17,27,11,46,38,8,30,16,50,52,29,44,19,24,37,45,35,40,43,48}, // permutation 0
{7,13,14,37,6,5,2,40,20,36,3,23,22,43,49,9,18,51,26,16,47,17,25,29,48,27,10,52,19,4,34,42,41,33,12,11,28,15,31,21,50,8,39,45,32,0,30,35,24,44,46,38,1}, // permutation 1
{39,26,49,4,32,16,38,43,25,9,27,18,45,6,51,20,44,14,37,48,33,8,50,15,28,17,11,47,22,3,31,7,0,1,34,29,21,10,46,42,12,52,5,13,41,36,2,40,19,24,35,30,23}, // permutation 2
{15,12,24,50,30,0,5,33,2,32,44,25,27,41,48,47,22,36,3,38,1,26,39,23,10,42,16,6,14,34,49,21,8,19,37,11,7,31,45,18,35,43,9,29,46,51,20,28,13,40,4,52,17}, // permutation 3
{37,7,4,32,36,19,34,40,11,39,17,47,49,26,44,22,48,42,30,52,6,16,29,35,45,10,24,0,33,5,46,14,13,12,15,27,8,20,1,23,25,31,9,3,50,21,51,41,43,18,38,28,2}, // permutation 4
{43,22,49,4,15,6,20,10,13,42,8,33,28,2,26,11,7,39,0,27,30,3,40,5,48,23,18,45,24,32,35,31,44,25,16,46,38,12,17,21,37,41,52,50,34,51,36,14,47,9,29,1,19}, // permutation 5
{24,17,51,19,38,10,22,40,2,16,34,35,33,6,25,41,12,46,44,11,13,29,5,42,9,37,45,1,49,50,43,15,30,52,48,39,26,23,47,20,7,31,36,3,32,18,0,27,4,8,14,28,21}, // permutation 6
{23,32,4,12,33,45,25,47,16,9,6,2,11,43,44,46,21,48,3,49,29,18,30,1,51,50,34,8,19,31,15,22,41,24,36,27,20,37,13,39,42,40,17,7,26,5,38,52,10,35,14,28,0}, // permutation 7
{38,50,20,18,5,51,7,6,17,47,43,22,30,49,19,33,24,34,2,8,10,14,15,44,16,4,36,28,39,32,40,41,29,0,13,48,27,3,23,45,21,46,42,35,25,26,1,12,31,9,11,37,52}, // permutation 8
{6,12,34,4,18,35,48,19,27,29,44,43,45,15,33,14,25,3,52,41,11,50,21,7,49,16,8,22,2,5,42,13,20,31,0,23,46,26,51,28,24,40,38,32,10,39,17,9,1,30,37,47,36} // permutation 9
};

// Seed: 2760571948

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t *g_3;
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
int64_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_5->g_3
 */
int64_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t l_4 = 0x1F07B4BCL;
    p_5->g_3 = l_2;
    return l_4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[53];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 53; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        (void*)0, // p_5->g_3
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 53)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
