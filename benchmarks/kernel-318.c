// --atomics 13 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,57,1 -l 91,1,1
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

__constant uint32_t permutations[10][91] = {
{5,47,62,52,34,23,81,58,61,13,82,26,7,69,51,80,76,64,87,55,38,24,36,16,90,70,31,88,22,8,3,20,49,39,54,6,85,12,68,32,59,42,75,1,73,27,53,29,56,63,17,65,89,18,57,9,40,74,67,37,10,45,4,79,2,44,84,41,28,0,30,19,66,83,78,72,21,71,15,50,60,11,77,43,25,14,86,35,33,48,46}, // permutation 0
{34,32,56,35,13,44,62,86,70,74,83,3,76,78,33,75,58,47,48,77,66,81,67,89,18,51,84,65,26,43,0,31,39,23,27,5,40,37,49,80,22,1,85,68,12,45,41,63,59,10,71,57,11,42,21,73,9,17,36,8,79,16,87,69,14,28,50,82,46,90,19,15,6,88,30,53,7,72,2,60,20,52,38,4,29,24,55,25,64,54,61}, // permutation 1
{84,69,79,35,5,33,62,89,72,78,61,1,14,30,40,87,47,10,51,74,88,70,38,46,85,49,66,28,36,41,24,67,54,56,63,45,52,39,50,0,44,55,58,86,73,29,23,81,68,21,17,2,15,9,48,90,57,18,31,16,53,22,20,60,11,25,43,4,32,34,76,13,3,71,42,64,59,12,77,6,8,83,65,80,19,27,82,7,26,37,75}, // permutation 2
{27,45,46,61,29,76,11,1,22,12,41,59,43,40,57,23,66,20,7,75,19,28,89,68,90,4,80,72,31,37,52,77,30,85,51,54,39,16,13,87,36,63,2,21,9,74,70,6,82,78,8,24,79,26,50,56,53,44,55,32,34,48,25,14,67,88,64,73,5,15,83,81,18,35,33,38,69,65,86,10,58,84,71,3,0,42,62,17,47,49,60}, // permutation 3
{72,31,68,44,84,61,45,67,79,82,75,9,55,51,20,30,12,77,21,90,43,87,52,18,46,74,48,29,8,23,10,50,42,78,22,73,28,76,54,63,40,19,86,36,25,33,66,83,69,4,27,62,57,0,56,64,37,14,7,60,35,38,41,59,5,88,39,26,70,17,49,80,47,16,32,85,24,89,2,53,6,13,1,11,71,34,3,15,81,65,58}, // permutation 4
{54,79,47,53,78,37,50,12,35,70,10,27,5,28,36,11,77,1,30,69,67,52,4,22,51,33,59,26,66,63,6,2,43,25,68,41,83,15,31,55,20,56,19,9,62,86,39,88,74,72,38,90,8,65,75,87,60,58,82,84,45,81,17,44,42,73,3,13,16,57,85,21,71,76,48,49,0,32,89,24,80,34,64,40,29,18,46,23,7,61,14}, // permutation 5
{1,57,53,90,77,22,39,13,73,2,51,42,68,12,84,29,71,19,47,82,64,26,21,23,48,55,8,88,10,35,60,49,15,75,43,14,37,11,33,66,9,58,6,30,81,31,79,40,36,46,17,4,5,72,86,27,56,59,16,44,45,18,65,50,63,25,54,74,67,80,0,41,32,70,78,28,24,85,76,20,7,83,34,61,62,89,52,69,87,3,38}, // permutation 6
{25,26,20,87,37,60,22,32,61,43,41,24,40,90,84,82,89,69,86,39,31,45,77,23,67,55,38,29,7,80,4,6,1,88,19,13,44,71,30,28,52,54,18,0,58,83,42,15,64,11,3,72,51,34,10,63,46,16,74,50,56,33,66,47,79,48,36,2,9,75,78,49,62,35,57,21,53,14,68,8,65,70,85,17,73,59,27,76,5,81,12}, // permutation 7
{16,7,75,14,83,15,60,74,5,1,50,41,72,11,66,55,23,49,36,17,18,10,87,8,58,53,64,33,77,2,40,44,22,90,28,30,56,85,37,73,59,32,46,29,26,31,45,47,70,67,82,43,63,68,0,51,42,9,25,89,57,34,24,48,65,13,6,71,3,20,52,19,88,38,39,4,78,69,76,84,80,35,54,86,62,61,81,27,79,12,21}, // permutation 8
{20,37,25,32,10,9,61,18,78,40,76,29,65,13,90,28,22,2,26,51,70,24,15,72,30,54,45,3,1,52,23,64,27,80,56,33,68,0,71,11,17,43,8,66,35,74,57,69,4,60,75,55,6,31,36,89,88,81,48,77,5,87,47,63,14,86,46,21,42,12,59,62,83,19,67,39,38,53,84,79,85,34,58,7,73,41,16,82,44,49,50} // permutation 9
};

// Seed: 338988912

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t * volatile g_4;
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
 * reads : p_5->l_comm_values
 * writes:
 */
int64_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    int32_t l_2 = 0x44530722L;
    int32_t *l_3 = (void*)0;
    l_2 = l_2;
    return p_5->l_comm_values[(safe_mod_func_uint32_t_u_u(p_5->tid, 91))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        (void*)0, // p_5->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
