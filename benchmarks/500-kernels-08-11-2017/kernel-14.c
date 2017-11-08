// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 56,94,1 -l 2,47,1
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

__constant uint32_t permutations[10][94] = {
{81,62,21,83,47,84,53,29,60,16,61,19,20,58,68,31,24,93,36,85,92,64,34,5,23,78,32,59,86,25,75,37,4,52,48,69,0,44,3,55,66,28,46,49,54,40,9,45,89,22,13,11,41,63,51,43,80,56,79,27,50,39,90,12,6,7,73,87,42,8,70,88,2,35,67,33,77,18,91,82,1,15,76,30,14,65,38,74,71,26,17,72,57,10}, // permutation 0
{55,9,2,48,86,36,28,16,42,18,49,6,68,82,38,21,24,34,27,32,7,59,8,26,37,78,62,81,88,69,74,54,12,0,10,44,23,91,47,61,60,63,77,72,19,75,31,51,13,43,67,45,89,79,83,50,40,80,30,1,35,53,4,41,11,90,85,57,56,58,84,71,25,46,66,15,5,87,52,3,20,93,33,76,64,65,92,39,73,17,70,14,22,29}, // permutation 1
{18,44,20,51,56,77,71,74,89,26,14,45,40,80,6,16,34,50,75,61,3,81,25,48,84,90,88,32,62,28,17,82,63,0,73,36,78,83,8,30,37,27,53,5,42,93,67,38,91,92,11,21,69,15,85,10,4,41,46,24,33,70,86,43,59,13,58,7,55,57,12,65,79,60,19,31,29,87,2,22,23,64,72,9,47,35,54,66,1,39,49,52,68,76}, // permutation 2
{79,58,44,77,10,7,14,19,39,66,71,84,76,70,20,9,42,56,83,40,22,68,50,29,45,62,13,24,36,21,64,74,60,75,90,78,48,52,54,67,46,32,3,23,69,63,12,91,43,16,59,80,81,82,4,61,15,0,5,27,37,88,92,11,65,49,26,17,38,30,18,87,35,89,25,72,28,93,85,41,6,8,73,47,33,53,1,55,57,34,86,31,51,2}, // permutation 3
{6,89,53,51,9,63,55,19,86,79,48,15,71,28,44,82,11,21,66,34,56,70,37,39,88,27,24,32,49,14,23,52,91,36,4,54,20,3,5,80,92,81,60,12,10,30,7,57,26,41,75,0,43,64,22,38,62,93,40,78,61,87,42,45,18,68,13,84,76,69,85,77,33,47,25,8,31,16,72,46,59,74,58,35,65,90,50,73,67,17,2,83,29,1}, // permutation 4
{63,17,35,38,49,16,19,62,5,87,70,73,71,1,44,30,32,27,50,76,2,55,68,37,75,78,79,52,11,51,84,64,93,92,66,40,72,77,80,59,88,46,31,22,4,10,26,65,58,25,85,12,81,90,60,23,43,21,39,74,56,6,14,8,48,13,54,41,24,82,69,45,9,7,57,86,33,89,28,53,3,36,29,0,42,47,83,20,15,34,18,61,91,67}, // permutation 5
{37,83,2,27,12,17,46,59,31,72,73,44,76,86,93,55,74,8,11,49,57,16,21,78,48,41,71,25,64,26,5,56,39,47,77,62,6,70,90,92,7,10,0,53,19,66,34,75,22,14,88,58,60,45,43,85,9,61,24,32,82,52,54,80,63,51,40,1,4,81,91,87,3,28,65,30,23,84,33,29,35,15,18,69,89,68,79,38,42,67,20,36,13,50}, // permutation 6
{36,80,45,12,17,26,79,66,56,88,43,19,93,85,72,30,5,22,38,75,0,59,4,77,28,81,34,1,20,57,8,87,25,21,69,29,9,37,84,62,50,92,16,60,47,49,41,86,46,91,54,39,15,14,51,65,31,10,11,55,7,6,64,58,68,18,71,52,63,83,70,3,35,76,42,33,27,24,44,2,32,78,13,74,89,61,82,67,48,40,90,23,73,53}, // permutation 7
{63,89,3,9,24,87,40,45,34,19,50,47,22,72,93,41,76,66,75,44,36,61,8,32,48,1,74,84,49,30,71,16,69,81,35,21,11,86,55,91,90,33,17,13,26,18,68,10,53,20,79,54,80,14,12,39,56,67,15,31,6,57,5,51,83,2,78,7,92,27,29,73,65,82,23,25,58,42,38,52,43,70,28,64,59,37,46,4,0,85,77,62,88,60}, // permutation 8
{52,61,57,56,46,83,86,69,49,25,19,42,32,45,4,21,51,53,30,66,91,74,92,37,33,23,26,17,71,41,77,44,10,68,75,20,12,54,24,39,84,8,14,7,1,9,87,13,16,31,81,60,90,18,15,58,3,80,28,79,59,67,0,47,11,62,85,65,70,43,78,36,50,40,48,6,55,88,73,82,76,29,22,64,35,89,27,72,38,63,5,2,93,34} // permutation 9
};

// Seed: 3228523898

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S5 {
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
uint32_t  func_1(struct S5 * p_2);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2->g_comm_values
 * writes:
 */
uint32_t  func_1(struct S5 * p_2)
{ /* block id: 4 */
    return p_2->g_comm_values[p_2->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[94];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 94; i++)
            l_comm_values[i] = 1;
    struct S5 c_3;
    struct S5* p_2 = &c_3;
    struct S5 c_4 = {
        0, // p_2->v_collective
        sequence_input[get_global_id(0)], // p_2->global_0_offset
        sequence_input[get_global_id(1)], // p_2->global_1_offset
        sequence_input[get_global_id(2)], // p_2->global_2_offset
        sequence_input[get_local_id(0)], // p_2->local_0_offset
        sequence_input[get_local_id(1)], // p_2->local_1_offset
        sequence_input[get_local_id(2)], // p_2->local_2_offset
        sequence_input[get_group_id(0)], // p_2->group_0_offset
        sequence_input[get_group_id(1)], // p_2->group_1_offset
        sequence_input[get_group_id(2)], // p_2->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 94)), permutations[0][get_linear_local_id()])), // p_2->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_3 = c_4;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2->v_collective, "p_2->v_collective", print_hash_value);
    transparent_crc(p_2->l_comm_values[get_linear_local_id()], "p_2->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2->g_comm_values[get_linear_group_id() * 94 + get_linear_local_id()], "p_2->g_comm_values[get_linear_group_id() * 94 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
