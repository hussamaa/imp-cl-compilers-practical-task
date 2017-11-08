// --atomics 75 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 56,46,1 -l 2,46,1
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

__constant uint32_t permutations[10][92] = {
{11,45,20,18,58,73,10,57,54,71,29,28,19,7,34,74,12,61,48,33,38,80,13,68,46,50,35,2,27,49,24,86,64,82,21,0,17,40,90,30,22,16,4,47,65,77,44,6,91,53,89,52,69,41,76,70,25,42,59,84,5,36,85,55,39,83,79,56,60,87,63,32,8,75,3,14,23,67,78,51,72,43,88,9,1,37,15,26,66,81,31,62}, // permutation 0
{59,81,46,89,60,55,7,73,22,91,34,77,85,42,33,56,5,21,69,78,26,1,29,52,2,32,88,23,17,25,43,84,51,11,39,53,35,49,70,48,28,6,16,20,4,13,47,9,80,63,31,66,30,40,3,75,71,62,83,57,19,86,10,82,41,72,15,44,0,14,76,50,24,87,12,68,45,79,27,18,36,65,64,61,90,74,38,54,8,67,58,37}, // permutation 1
{63,73,69,38,43,83,49,80,68,82,85,16,8,89,31,37,56,2,70,22,60,12,10,51,34,20,32,87,76,40,81,1,65,90,24,30,17,23,79,0,59,4,88,50,27,91,44,47,84,33,78,67,45,19,52,5,72,62,39,35,7,64,28,55,75,71,57,42,21,15,58,77,14,13,86,48,74,66,18,9,11,46,61,53,29,36,6,41,25,3,54,26}, // permutation 2
{47,9,38,72,41,16,59,43,81,39,13,74,8,37,6,91,18,12,1,24,11,66,86,63,62,36,64,56,84,32,73,65,4,55,67,83,20,69,52,82,71,61,53,40,75,44,51,19,80,14,22,15,76,28,87,77,57,17,26,50,45,70,78,29,88,23,34,58,0,85,60,49,68,46,27,79,25,31,5,89,3,21,10,54,7,48,33,90,35,2,30,42}, // permutation 3
{1,27,78,74,36,64,61,4,51,6,45,62,69,88,49,79,22,50,0,2,71,15,29,11,54,58,55,3,37,26,56,21,23,84,17,76,60,72,8,34,28,70,66,20,31,91,30,81,86,41,13,12,75,38,44,52,7,25,47,35,89,10,82,87,39,83,68,40,32,80,77,53,14,19,5,65,63,67,57,85,73,42,90,48,18,59,46,33,43,16,24,9}, // permutation 4
{52,47,29,8,30,49,4,41,79,84,43,13,51,86,1,31,28,67,45,90,55,65,22,54,74,69,18,83,19,11,7,12,23,5,15,81,71,14,39,48,78,91,64,62,58,77,59,53,73,76,25,20,32,0,75,26,2,38,24,60,33,56,89,66,35,70,72,68,57,36,87,3,27,9,16,6,82,17,63,80,21,50,88,85,10,61,34,44,40,37,46,42}, // permutation 5
{82,17,45,68,34,0,88,73,55,37,61,62,32,78,12,46,19,3,15,74,2,39,26,57,86,18,60,66,36,22,44,7,76,72,75,59,4,50,14,5,11,42,40,49,48,58,51,90,85,70,65,89,53,64,9,27,47,79,81,33,16,56,10,63,83,25,38,35,31,6,43,84,30,20,21,77,80,69,54,29,13,28,52,87,41,23,67,1,24,71,8,91}, // permutation 6
{69,57,88,35,76,79,8,78,38,41,77,65,0,3,17,43,28,11,66,19,61,7,4,18,39,58,67,47,54,50,81,6,60,86,9,33,40,25,72,31,1,56,49,44,42,24,2,62,32,36,21,34,84,90,23,48,91,68,85,55,71,73,80,22,82,63,53,64,16,89,13,59,87,45,75,20,37,29,74,26,12,10,46,27,70,52,14,30,15,5,51,83}, // permutation 7
{71,43,87,7,30,27,52,76,68,26,28,38,74,65,59,12,73,90,35,19,75,18,89,81,32,50,46,56,63,34,17,33,62,91,64,16,83,79,85,77,49,21,25,31,14,22,13,20,72,45,78,37,86,5,60,61,0,4,80,24,70,42,82,11,39,41,1,48,67,58,36,2,10,3,9,6,54,44,8,66,15,84,29,69,23,47,53,40,57,88,51,55}, // permutation 8
{75,23,60,25,52,11,10,8,58,40,19,14,51,43,5,78,46,31,86,18,68,70,88,17,77,91,48,30,0,1,32,49,71,42,64,47,83,85,29,41,33,53,69,21,20,63,2,26,16,72,6,66,65,76,67,27,44,84,73,15,82,57,50,13,3,74,81,24,4,28,56,38,22,39,87,37,80,12,45,54,35,89,59,36,9,7,79,55,62,61,90,34} // permutation 9
};

// Seed: 3064672770

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
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
int32_t  func_1(struct S4 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_1(struct S4 * p_3)
{ /* block id: 4 */
    uint16_t l_2 = 0xD058L;
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_comm_values[i] = 1;
    struct S4 c_4;
    struct S4* p_3 = &c_4;
    struct S4 c_5 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 92)), permutations[0][get_linear_local_id()])), // p_3->tid
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
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 92 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 92 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
