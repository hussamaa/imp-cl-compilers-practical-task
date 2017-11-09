// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,52,1 -l 5,13,1
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

__constant uint32_t permutations[10][65] = {
{25,48,29,16,15,39,54,14,19,46,56,17,57,2,34,3,28,30,7,24,47,0,33,43,8,36,13,45,44,38,52,27,51,31,49,53,37,23,58,20,32,5,10,50,26,21,42,11,35,59,1,40,6,63,4,64,12,41,9,62,61,55,22,18,60}, // permutation 0
{10,61,52,17,5,8,47,51,34,57,58,27,62,15,0,21,29,9,50,19,40,55,59,3,33,11,46,38,7,31,23,1,49,12,56,44,16,24,26,4,18,2,36,35,22,42,28,6,20,64,63,30,13,43,45,53,25,41,54,14,37,32,39,60,48}, // permutation 1
{60,35,7,43,54,36,39,9,59,20,26,5,18,22,0,1,15,4,31,25,62,52,16,34,3,58,19,55,61,32,37,21,64,47,45,41,42,23,10,48,63,2,14,40,24,49,38,46,30,29,27,12,50,56,33,11,8,44,13,6,57,53,28,17,51}, // permutation 2
{22,46,31,29,56,61,27,3,49,19,10,40,38,0,16,18,33,25,6,42,62,58,20,44,14,4,2,7,30,60,57,15,41,39,8,59,37,11,45,21,36,32,26,1,28,53,50,9,48,34,64,55,63,43,13,51,5,12,52,35,24,47,23,54,17}, // permutation 3
{21,50,61,42,54,41,49,63,59,56,57,44,55,9,37,28,25,11,18,12,52,1,29,27,15,13,35,6,16,0,4,22,39,47,5,38,45,24,58,7,30,62,26,19,60,64,46,43,34,20,40,10,51,2,48,8,33,31,32,17,53,23,36,3,14}, // permutation 4
{27,15,5,0,39,16,1,20,62,57,41,48,54,47,22,12,49,8,28,63,9,64,24,25,36,34,45,43,33,7,23,3,4,61,14,31,58,18,17,56,21,50,37,30,29,59,51,2,44,19,6,60,46,10,32,13,42,40,52,53,55,11,26,35,38}, // permutation 5
{56,21,23,13,45,47,10,48,62,17,54,60,63,55,29,1,11,40,16,36,25,19,4,51,32,5,14,20,35,0,53,18,52,39,2,59,37,27,30,3,15,43,49,64,44,46,31,34,38,26,57,7,33,58,24,41,22,50,8,61,9,28,12,6,42}, // permutation 6
{56,31,45,28,38,14,1,49,5,17,64,36,48,39,8,13,24,16,20,18,23,35,2,55,58,26,43,51,30,21,59,22,40,0,57,25,47,32,9,50,10,3,7,33,4,41,46,27,19,62,60,6,52,42,37,63,44,12,53,54,61,15,34,11,29}, // permutation 7
{15,26,8,29,35,20,53,41,49,34,25,33,18,0,17,47,62,1,52,39,61,9,51,27,37,5,58,3,46,55,45,64,24,23,38,12,42,44,59,40,43,10,32,13,2,50,56,21,48,16,28,54,36,31,6,4,19,11,63,7,60,57,14,22,30}, // permutation 8
{53,46,7,8,22,6,35,10,58,17,45,20,37,9,62,24,47,33,56,28,15,3,12,5,36,41,59,38,34,50,54,51,26,29,14,19,25,30,32,63,44,11,18,27,42,64,40,1,0,4,43,55,48,57,61,49,52,39,2,21,13,60,23,31,16} // permutation 9
};

// Seed: 3545164373

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
int8_t  func_1(struct S0 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_1(struct S0 * p_3)
{ /* block id: 4 */
    uint64_t l_2 = 0x1E42A43D9532BB11L;
    atomic_add(&p_3->l_atomic_reduction[0], l_2);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_3->v_collective += p_3->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 65)), permutations[0][get_linear_local_id()])), // p_3->tid
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
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 65 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 65 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
