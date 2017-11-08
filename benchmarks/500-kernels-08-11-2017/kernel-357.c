// --atomics 9 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,5,3 -l 75,1,1
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

__constant uint32_t permutations[10][75] = {
{5,16,32,38,73,67,22,1,45,2,8,39,14,29,43,50,24,7,19,10,31,4,48,42,70,61,35,30,74,47,54,9,72,15,46,6,36,12,62,51,57,53,40,59,49,20,55,3,63,33,27,64,11,21,0,58,13,26,34,41,25,18,68,56,71,23,44,52,28,60,69,65,37,66,17}, // permutation 0
{73,34,1,5,53,7,56,10,17,38,19,3,49,70,33,14,67,30,59,32,25,35,43,50,20,57,0,48,4,26,15,23,46,60,41,39,62,40,2,18,63,16,61,74,24,58,6,52,45,12,72,28,13,71,51,22,31,68,11,69,42,27,54,55,65,64,47,21,36,8,44,37,66,9,29}, // permutation 1
{37,73,61,14,2,6,48,53,9,71,50,63,56,38,28,18,46,41,20,8,16,33,15,11,45,66,1,10,5,25,68,51,59,60,17,47,7,19,49,22,35,31,57,67,21,70,4,27,24,40,12,3,34,43,69,26,42,54,29,55,0,72,23,58,36,65,62,74,32,52,13,64,44,39,30}, // permutation 2
{65,16,39,67,72,11,47,59,58,1,56,25,9,28,29,10,63,20,71,51,18,3,52,40,33,57,66,45,34,17,53,60,19,21,55,2,50,54,12,43,24,62,26,30,42,70,48,7,22,14,35,31,41,38,74,36,27,13,49,15,73,68,69,4,44,64,61,0,8,6,46,5,23,37,32}, // permutation 3
{72,27,40,36,52,73,61,57,39,48,6,9,59,66,68,15,13,29,20,44,37,7,28,1,19,21,17,60,43,71,56,47,8,22,41,25,14,38,45,0,51,23,63,69,4,53,12,32,49,42,34,10,74,33,11,24,70,64,46,35,31,2,16,18,3,5,67,62,58,50,55,26,54,65,30}, // permutation 4
{14,55,6,22,61,19,26,2,3,17,8,33,1,60,31,25,15,41,57,42,71,53,48,58,7,29,30,56,40,49,38,21,66,20,27,18,32,12,54,44,37,62,45,64,23,72,11,65,16,50,63,47,69,5,39,73,34,74,51,24,10,13,36,59,9,46,35,70,28,4,68,67,52,0,43}, // permutation 5
{26,57,73,66,59,12,46,15,8,28,34,33,27,50,18,20,68,74,47,7,4,24,60,63,17,41,39,48,70,40,49,21,36,42,61,13,37,31,55,72,32,62,44,43,23,6,69,71,35,64,30,58,54,19,2,52,56,11,0,22,3,10,67,51,65,45,25,53,16,38,14,9,29,5,1}, // permutation 6
{39,42,35,25,47,22,68,11,55,12,72,7,49,69,16,4,54,59,13,51,63,74,31,71,66,17,20,57,60,64,33,58,6,32,24,36,23,46,1,62,28,3,26,18,50,38,2,0,61,21,30,15,14,67,52,73,53,65,19,56,70,45,8,37,10,29,9,5,40,34,48,41,44,43,27}, // permutation 7
{27,24,37,20,70,19,14,35,49,58,42,6,21,71,62,40,56,4,59,57,12,11,39,2,66,51,67,73,60,38,16,48,3,1,8,72,53,10,47,30,55,74,54,18,26,17,68,25,34,52,64,28,41,46,36,69,0,31,45,22,23,29,7,13,9,43,65,15,32,5,61,33,50,63,44}, // permutation 8
{11,23,22,21,35,4,74,45,72,10,12,38,68,65,63,62,26,0,66,37,16,3,41,17,33,64,73,54,18,57,8,27,15,19,20,59,24,34,2,60,49,55,46,52,71,13,67,32,25,28,14,40,5,51,36,43,48,7,6,69,30,42,31,44,70,9,56,58,1,47,39,53,61,50,29} // permutation 9
};

// Seed: 1092502592

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile uint32_t g_4;
    volatile int32_t g_9;
    volatile int32_t *g_8;
    volatile int32_t ** volatile g_7;
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
int16_t  func_1(struct S0 * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_10->g_4 p_10->g_comm_values
 * writes: p_10->g_4 p_10->g_7
 */
int16_t  func_1(struct S0 * p_10)
{ /* block id: 4 */
    int32_t *l_2[4][3][3] = {{{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3}},{{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3}},{{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3}},{{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3},{(void*)0,&p_10->g_3,&p_10->g_3}}};
    int i, j, k;
    p_10->g_4--;
    p_10->g_7 = (void*)0;
    return p_10->g_comm_values[p_10->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_comm_values[i] = 1;
    struct S0 c_11;
    struct S0* p_10 = &c_11;
    struct S0 c_12 = {
        0x647DC4B4L, // p_10->g_3
        0xE64FD9E2L, // p_10->g_4
        (-1L), // p_10->g_9
        &p_10->g_9, // p_10->g_8
        &p_10->g_8, // p_10->g_7
        0, // p_10->v_collective
        sequence_input[get_global_id(0)], // p_10->global_0_offset
        sequence_input[get_global_id(1)], // p_10->global_1_offset
        sequence_input[get_global_id(2)], // p_10->global_2_offset
        sequence_input[get_local_id(0)], // p_10->local_0_offset
        sequence_input[get_local_id(1)], // p_10->local_1_offset
        sequence_input[get_local_id(2)], // p_10->local_2_offset
        sequence_input[get_group_id(0)], // p_10->group_0_offset
        sequence_input[get_group_id(1)], // p_10->group_1_offset
        sequence_input[get_group_id(2)], // p_10->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[0][get_linear_local_id()])), // p_10->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_11 = c_12;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_10);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_10->g_3, "p_10->g_3", print_hash_value);
    transparent_crc(p_10->g_4, "p_10->g_4", print_hash_value);
    transparent_crc(p_10->g_9, "p_10->g_9", print_hash_value);
    transparent_crc(p_10->v_collective, "p_10->v_collective", print_hash_value);
    transparent_crc(p_10->l_comm_values[get_linear_local_id()], "p_10->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_10->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()], "p_10->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
