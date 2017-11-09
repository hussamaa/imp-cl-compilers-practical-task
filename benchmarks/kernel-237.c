// --atomics 69 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,96,5 -l 1,24,5
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

__constant uint32_t permutations[10][120] = {
{97,75,34,110,17,42,80,74,11,108,59,35,119,41,25,69,73,89,94,56,3,112,103,23,5,44,101,95,15,52,48,51,72,96,61,66,84,31,99,70,39,20,62,4,64,90,9,76,21,92,26,10,63,100,85,2,71,91,86,58,114,109,117,105,22,46,12,14,45,38,118,82,13,115,43,33,65,30,60,28,98,79,32,87,37,77,47,93,24,106,78,19,16,50,81,116,54,8,111,113,1,40,53,27,0,104,68,49,57,107,29,55,6,18,88,36,67,7,102,83}, // permutation 0
{52,44,24,64,42,103,99,93,89,101,65,6,25,85,30,33,15,86,118,60,114,108,95,77,13,55,97,62,96,58,50,115,83,74,40,88,2,43,46,21,119,38,67,98,84,53,47,36,37,19,45,109,51,48,91,0,76,54,7,35,16,59,17,113,110,72,90,69,79,23,106,100,39,82,3,34,57,81,29,56,116,68,87,1,11,27,20,112,31,14,26,41,63,80,105,28,92,73,61,71,12,75,111,8,102,107,4,9,78,22,10,104,32,94,49,5,117,66,18,70}, // permutation 1
{32,74,53,56,30,2,39,117,41,78,107,109,103,18,86,21,76,118,80,113,20,92,42,57,7,97,0,50,35,63,73,69,51,1,100,28,36,93,23,15,83,27,31,59,94,104,60,114,70,25,101,55,8,79,112,16,45,119,87,14,88,17,72,66,64,54,29,44,61,52,116,91,95,105,19,34,111,106,13,62,85,6,40,33,71,9,3,48,38,84,75,24,81,10,26,22,49,47,5,89,43,4,37,67,108,77,58,65,99,96,102,11,98,115,90,46,110,82,68,12}, // permutation 2
{50,110,7,81,112,45,3,101,117,30,79,90,52,74,94,68,36,0,59,10,118,44,93,89,19,108,106,107,76,20,25,49,13,34,40,57,26,88,77,61,48,87,16,73,86,47,1,32,64,97,62,111,100,2,18,72,60,84,24,28,65,70,4,54,102,29,6,42,67,8,27,46,63,103,82,98,104,51,115,39,69,33,55,15,58,53,116,14,113,66,85,17,75,11,43,92,9,95,99,80,119,5,22,114,71,105,109,37,78,41,83,96,35,56,31,23,21,91,12,38}, // permutation 3
{64,82,56,55,118,46,68,89,47,83,44,41,65,25,78,117,106,45,84,97,39,10,51,0,32,28,113,87,93,52,12,90,119,88,35,95,48,21,103,80,3,107,5,70,53,96,111,54,73,58,20,18,50,27,1,59,34,31,104,77,115,29,11,24,40,105,86,6,63,14,116,67,30,42,100,85,23,92,9,2,75,13,7,19,16,60,4,62,99,101,33,8,26,69,91,49,71,38,57,109,66,108,112,79,74,22,15,94,98,110,17,81,114,37,43,61,76,36,102,72}, // permutation 4
{32,108,86,89,113,56,6,40,112,104,105,8,62,101,82,78,85,94,74,53,81,30,66,65,92,17,34,115,57,99,91,19,23,97,7,31,45,48,114,37,20,11,87,70,26,29,38,0,54,103,64,33,3,83,9,79,25,93,49,41,90,27,36,28,69,84,106,1,77,50,46,16,24,63,51,100,55,102,12,42,14,117,67,61,2,47,35,75,39,76,4,109,107,44,111,21,43,110,13,96,5,116,72,18,119,60,118,52,95,10,15,58,80,68,22,59,71,88,98,73}, // permutation 5
{90,13,94,38,86,45,81,8,42,93,50,57,21,78,48,59,63,82,95,26,98,15,65,44,16,85,107,34,52,30,112,49,92,32,9,67,66,118,91,25,75,109,104,76,77,37,55,1,99,105,101,60,0,20,23,10,97,72,114,19,115,36,64,7,14,102,2,33,79,11,18,61,69,24,106,119,28,58,80,100,73,41,83,54,47,46,70,103,74,3,17,84,27,35,51,5,29,71,31,88,53,43,116,22,96,108,4,40,87,110,62,113,111,39,6,56,12,68,117,89}, // permutation 6
{75,119,96,5,11,115,26,82,88,34,16,24,77,87,53,110,62,94,36,49,31,89,78,70,7,60,9,112,81,17,41,19,35,47,22,118,66,105,109,113,64,83,23,116,106,67,95,102,45,61,59,71,43,1,114,69,99,8,28,97,117,73,108,46,111,85,3,10,56,25,80,104,93,37,100,13,72,27,48,65,38,92,33,0,58,18,74,51,39,12,52,103,40,76,84,63,21,42,14,57,20,4,107,29,98,79,101,44,55,54,32,2,86,90,6,30,68,50,15,91}, // permutation 7
{93,12,3,75,50,51,109,99,92,18,61,8,0,98,91,58,117,6,42,85,33,28,67,20,5,19,2,118,52,68,22,119,79,115,81,43,113,114,29,56,65,96,48,13,27,25,14,102,59,9,94,45,44,41,78,101,10,7,111,73,23,107,105,32,37,49,17,86,88,66,100,69,55,31,63,39,40,112,4,72,80,70,83,34,74,53,108,106,84,1,116,21,35,16,110,11,97,46,95,77,38,103,89,76,71,60,54,57,64,62,82,90,15,47,26,104,36,24,87,30}, // permutation 8
{58,103,61,44,23,83,2,73,70,11,48,1,69,0,93,91,26,86,108,114,85,28,68,17,88,107,49,112,52,115,21,15,95,20,24,10,9,100,60,96,7,6,5,71,90,77,117,98,81,67,3,53,29,105,38,57,14,104,111,42,46,66,31,33,118,8,110,84,102,119,89,101,27,41,94,37,50,76,97,30,39,106,16,51,54,36,45,25,12,35,13,18,47,62,22,56,55,65,113,78,75,92,19,80,79,4,87,34,32,64,74,43,63,109,72,116,59,82,40,99} // permutation 9
};

// Seed: 4034023774

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4;
    int32_t * volatile g_3;
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
int32_t  func_1(struct S0 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_3 p_5->g_4
 * writes: p_5->g_4
 */
int32_t  func_1(struct S0 * p_5)
{ /* block id: 4 */
    int64_t l_2 = (-6L);
    (*p_5->g_3) = l_2;
    return (*p_5->g_3);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[120];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 120; i++)
            l_comm_values[i] = 1;
    struct S0 c_6;
    struct S0* p_5 = &c_6;
    struct S0 c_7 = {
        3L, // p_5->g_4
        &p_5->g_4, // p_5->g_3
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 120)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->g_4, "p_5->g_4", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 120 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 120 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
