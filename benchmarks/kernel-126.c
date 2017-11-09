// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,71,1 -l 97,1,1
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

__constant uint32_t permutations[10][97] = {
{51,81,74,29,11,9,0,30,20,68,71,36,92,27,64,79,55,28,43,75,33,22,24,32,18,77,65,70,46,89,94,8,58,50,21,80,67,25,85,13,54,84,95,12,73,83,5,16,38,31,4,17,87,91,15,47,37,48,7,90,53,78,45,66,86,35,57,1,69,96,62,52,40,39,2,56,14,26,44,59,88,63,72,42,23,19,41,6,10,60,61,82,93,49,34,76,3}, // permutation 0
{56,60,77,59,40,29,64,87,17,61,73,33,21,51,43,68,89,66,26,78,93,63,92,23,19,94,5,47,34,49,8,95,81,35,96,18,57,54,42,80,74,14,9,4,27,71,45,7,86,70,30,76,31,72,82,88,11,13,38,20,62,16,58,91,22,1,65,69,10,75,32,37,52,48,44,79,55,67,25,6,83,46,50,36,85,0,24,3,2,90,53,28,12,39,41,84,15}, // permutation 1
{56,42,18,36,62,33,80,64,23,96,44,90,76,71,85,89,45,7,29,6,40,5,52,26,65,77,8,67,58,11,24,73,70,81,47,37,22,21,72,32,12,13,59,82,60,95,25,55,69,0,88,10,14,15,74,48,50,17,9,91,83,79,54,53,35,20,94,63,68,41,86,2,51,49,4,3,57,84,66,93,78,16,87,43,28,19,27,75,1,34,39,61,46,92,38,31,30}, // permutation 2
{59,68,75,21,94,65,73,84,81,14,89,46,9,12,13,36,4,50,6,11,1,40,61,35,54,30,3,2,92,43,57,38,63,45,10,60,79,33,34,62,58,74,7,8,22,44,37,70,26,48,82,86,66,18,29,55,77,67,32,42,85,76,16,69,47,78,15,41,0,88,53,80,39,95,93,28,96,23,27,19,5,17,56,51,31,24,87,72,25,20,71,49,52,64,83,90,91}, // permutation 3
{56,37,63,77,12,96,41,24,44,72,13,86,35,81,75,76,7,94,34,22,80,47,54,87,70,6,74,45,43,21,26,30,3,58,4,50,29,2,9,85,53,17,32,33,46,62,5,15,64,79,0,28,84,8,90,38,31,59,49,89,51,69,14,92,66,93,10,83,61,91,40,19,16,52,39,25,1,78,18,42,88,48,71,11,60,27,95,23,55,57,67,20,73,36,68,65,82}, // permutation 4
{44,82,66,67,18,75,63,71,59,68,9,81,0,24,37,49,94,54,91,86,83,4,69,16,34,26,21,70,96,56,23,74,72,84,1,11,58,29,38,93,8,55,92,39,27,33,32,6,64,73,19,12,35,79,45,7,36,65,43,76,17,40,13,15,46,52,3,80,28,5,95,47,53,2,25,50,22,10,85,77,20,30,14,41,87,78,88,31,48,60,90,89,57,51,62,61,42}, // permutation 5
{80,75,87,11,90,18,31,46,85,4,34,29,81,72,7,30,8,66,60,86,52,88,68,26,65,27,39,47,77,0,69,2,91,51,33,36,40,92,78,32,44,25,21,57,20,56,9,95,89,55,15,58,14,48,19,64,13,67,53,96,82,37,23,63,71,93,24,17,5,16,54,83,74,10,50,49,79,45,94,59,76,12,84,22,3,70,73,62,35,42,43,61,28,1,41,38,6}, // permutation 6
{52,32,90,78,39,25,41,7,95,42,86,36,93,18,14,26,53,20,56,70,69,83,12,71,17,62,76,30,16,22,40,55,0,19,49,24,94,28,23,48,1,58,21,89,73,4,57,87,92,46,5,50,31,45,77,91,82,60,10,64,27,51,9,3,66,15,34,2,59,80,43,8,47,65,33,85,6,37,84,54,68,74,72,79,63,88,67,75,38,44,29,96,13,61,11,35,81}, // permutation 7
{62,83,41,94,39,90,3,64,57,35,43,44,7,31,8,49,50,87,46,16,73,15,72,59,86,51,5,42,40,29,91,88,33,11,76,1,17,28,71,22,21,25,80,19,27,48,93,63,56,81,66,70,0,26,65,68,2,36,96,61,23,89,92,6,34,60,4,54,20,45,67,24,14,77,55,84,58,82,85,10,78,18,30,37,32,74,79,75,69,47,95,12,13,38,9,53,52}, // permutation 8
{72,93,52,92,31,23,5,80,50,55,43,57,22,26,64,36,17,29,67,19,61,90,21,47,81,56,65,74,6,0,24,77,20,88,14,70,79,62,58,10,75,66,18,38,16,39,86,76,91,49,34,15,4,1,2,69,60,11,89,78,33,37,12,83,71,44,87,63,94,68,3,30,46,82,84,35,13,42,32,95,7,45,40,73,51,96,59,8,48,85,53,9,54,27,41,25,28} // permutation 9
};

// Seed: 1586238860

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
int32_t  func_1(struct S1 * p_2);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2->g_comm_values
 * writes:
 */
int32_t  func_1(struct S1 * p_2)
{ /* block id: 4 */
    return p_2->g_comm_values[p_2->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_comm_values[i] = 1;
    struct S1 c_3;
    struct S1* p_2 = &c_3;
    struct S1 c_4 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[0][get_linear_local_id()])), // p_2->tid
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
    transparent_crc(p_2->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()], "p_2->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
