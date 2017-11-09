// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,4,31 -l 1,4,31
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

__constant uint32_t permutations[10][124] = {
{10,47,121,112,123,82,39,94,28,70,33,77,85,67,91,68,5,89,18,13,45,58,83,44,27,3,61,48,34,93,40,86,12,19,117,87,23,38,110,14,6,60,1,11,116,104,24,106,42,43,122,115,88,81,80,41,46,20,101,79,90,109,52,4,2,119,98,120,71,31,55,63,30,25,66,100,35,8,53,26,22,76,50,65,113,95,92,54,0,32,21,78,56,105,7,49,118,114,73,62,72,36,64,69,99,29,17,97,9,57,111,84,102,108,103,74,75,51,37,59,15,96,107,16}, // permutation 0
{38,79,63,30,107,11,117,53,121,29,95,108,93,55,16,0,32,44,94,87,46,104,83,99,78,84,21,19,25,1,101,76,74,64,62,97,35,70,59,39,89,112,119,111,65,71,58,102,86,4,118,88,122,14,116,98,80,28,22,72,7,110,13,66,33,81,54,5,20,100,9,115,34,23,90,91,68,52,48,18,92,10,61,113,103,12,105,69,36,41,82,77,42,24,85,56,26,43,67,17,106,114,120,6,49,15,8,31,75,96,57,3,60,27,40,123,109,37,51,73,47,50,2,45}, // permutation 1
{6,90,35,91,13,27,48,110,75,79,84,119,7,80,39,92,1,112,120,20,4,71,72,30,102,54,24,10,115,34,42,29,11,83,114,78,43,97,26,118,113,108,101,82,17,109,16,59,69,65,122,49,88,70,41,103,94,121,77,57,31,2,52,28,22,116,14,51,53,38,33,3,107,123,47,106,60,104,9,67,45,89,55,37,96,81,68,98,18,100,64,85,15,0,19,50,46,44,63,25,73,23,86,56,76,61,105,32,21,40,36,58,8,12,95,111,5,87,62,74,99,93,117,66}, // permutation 2
{1,88,47,20,22,118,101,28,37,119,14,87,113,117,41,35,71,65,10,115,11,45,84,57,33,111,103,107,21,112,43,102,77,32,104,108,120,106,18,63,38,64,29,24,6,48,23,89,79,2,49,90,53,54,70,8,0,93,52,34,44,55,68,110,42,17,86,26,51,91,74,69,75,67,94,58,95,39,31,5,80,50,62,30,27,82,9,3,36,56,78,61,12,83,116,16,13,105,19,40,96,15,109,92,85,25,46,72,7,97,66,4,99,76,81,59,98,73,100,123,114,121,122,60}, // permutation 3
{18,15,76,73,109,60,20,123,92,63,58,48,96,74,45,21,85,42,115,94,91,25,49,112,7,84,117,11,23,102,28,53,2,22,50,100,43,38,24,69,77,19,108,62,55,89,103,3,72,1,97,80,27,29,65,68,57,120,110,0,46,87,52,56,40,64,8,95,106,36,17,12,67,33,61,5,81,79,6,93,26,34,35,14,59,83,37,98,116,111,90,99,70,86,114,16,122,66,113,39,107,118,9,30,32,78,75,82,54,104,41,121,31,13,119,71,105,101,10,88,51,44,47,4}, // permutation 4
{8,115,81,105,5,87,11,92,12,83,63,19,88,1,30,79,89,32,60,123,22,103,110,18,76,33,27,29,72,86,51,95,75,21,90,99,49,120,55,50,108,85,45,73,101,100,48,111,119,47,112,68,65,14,16,102,17,13,36,116,38,121,62,107,4,31,20,64,114,34,39,26,43,25,96,78,106,37,84,113,24,74,98,53,44,3,80,71,46,104,10,56,109,67,2,9,15,7,6,28,58,40,117,41,97,122,94,23,118,91,93,70,42,54,69,0,35,57,52,61,59,66,82,77}, // permutation 5
{89,83,21,118,22,74,14,34,3,4,107,13,7,123,99,64,73,79,119,113,95,103,20,42,63,108,110,1,28,66,102,12,56,59,40,91,120,98,114,115,23,90,69,19,81,58,53,121,117,76,38,18,72,105,8,54,43,26,61,94,50,65,62,36,44,67,75,24,101,6,97,15,109,11,47,0,92,82,78,70,5,27,104,49,30,100,93,57,60,111,33,29,48,37,80,41,87,31,39,88,9,77,25,122,112,46,116,52,68,86,16,55,17,71,106,45,51,35,96,10,2,32,85,84}, // permutation 6
{23,42,16,33,110,67,56,102,49,12,40,104,3,96,117,17,95,24,66,51,0,85,94,103,91,29,55,107,86,112,62,100,37,26,34,81,5,76,73,31,121,97,58,99,80,50,53,101,120,28,87,60,116,54,74,25,38,115,35,123,6,109,61,122,1,9,52,113,77,83,2,119,27,18,47,59,68,39,57,22,70,79,75,19,48,21,78,4,14,71,20,114,15,45,65,36,93,13,11,88,90,30,108,69,89,118,82,32,41,43,44,105,8,111,84,10,64,92,46,98,106,7,72,63}, // permutation 7
{4,117,9,72,26,60,21,38,83,89,71,48,30,13,113,69,108,94,106,22,102,35,20,105,63,65,112,5,46,19,75,93,44,37,109,58,120,103,0,122,18,100,95,115,42,45,68,70,33,107,114,1,11,98,39,50,24,110,25,99,53,88,36,3,43,40,51,67,10,123,74,82,12,27,16,61,29,119,32,121,41,28,101,79,31,49,86,90,97,62,55,2,85,57,73,92,66,78,56,34,84,104,8,6,118,54,81,47,59,64,77,80,17,76,116,91,87,111,7,14,96,15,23,52}, // permutation 8
{118,63,97,83,8,16,119,28,65,58,25,117,41,110,105,114,72,116,95,20,47,82,27,14,52,7,56,92,22,94,49,85,50,37,57,122,112,54,43,18,86,39,10,101,67,71,75,84,23,79,73,19,60,77,90,4,2,44,61,11,98,64,87,88,0,38,102,33,21,109,13,78,45,113,89,5,51,120,103,12,108,6,99,106,66,24,9,91,53,70,121,17,74,15,35,40,81,46,115,68,123,96,32,1,80,26,111,55,107,34,104,76,29,59,69,42,31,30,100,36,62,93,3,48} // permutation 9
};

// Seed: 1665512349

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
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
int16_t  func_1(struct S2 * p_2);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2->g_comm_values
 * writes:
 */
int16_t  func_1(struct S2 * p_2)
{ /* block id: 4 */
    return p_2->g_comm_values[p_2->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[124];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 124; i++)
            l_comm_values[i] = 1;
    struct S2 c_3;
    struct S2* p_2 = &c_3;
    struct S2 c_4 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 124)), permutations[0][get_linear_local_id()])), // p_2->tid
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
    transparent_crc(p_2->g_comm_values[get_linear_group_id() * 124 + get_linear_local_id()], "p_2->g_comm_values[get_linear_group_id() * 124 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
