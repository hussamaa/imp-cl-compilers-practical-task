// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 80,25,2 -l 4,25,1
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

__constant uint32_t permutations[10][100] = {
{25,10,71,46,59,48,76,55,53,29,84,15,95,70,49,89,6,65,4,41,38,85,36,66,58,98,23,44,96,8,91,24,28,11,97,47,63,12,51,69,77,13,78,45,43,3,19,35,21,74,72,42,52,60,87,94,79,64,26,73,75,92,27,90,32,93,62,61,82,9,37,40,88,57,99,5,18,1,7,81,30,39,22,33,16,0,20,14,50,56,83,80,2,54,67,17,68,86,34,31}, // permutation 0
{54,26,73,58,90,23,95,89,97,7,19,43,28,0,88,29,13,17,18,65,55,35,10,11,67,69,16,99,40,33,80,38,48,63,60,14,92,52,94,96,8,42,56,91,32,98,59,36,4,41,5,81,49,47,1,9,12,37,82,75,22,2,45,53,87,34,84,50,72,83,44,68,39,66,78,71,31,24,25,61,30,20,27,62,79,6,57,3,93,76,85,51,46,64,77,21,86,15,74,70}, // permutation 1
{52,17,41,55,70,4,36,15,44,5,53,32,31,35,40,71,65,0,48,14,88,99,80,27,82,8,56,93,12,97,76,95,77,84,66,33,89,7,58,94,45,79,75,62,83,86,59,25,96,49,50,38,18,46,34,91,43,6,90,23,1,2,98,42,3,63,61,69,64,28,60,57,10,78,67,92,72,47,37,9,73,54,51,30,16,24,81,11,68,39,13,87,22,26,85,29,19,20,74,21}, // permutation 2
{4,37,90,62,40,28,63,16,31,87,67,65,73,38,32,39,0,58,19,71,97,8,93,80,57,46,13,83,94,68,11,98,81,49,74,76,70,48,27,53,47,54,33,77,1,69,18,59,61,78,30,9,85,20,66,72,15,17,41,10,99,26,89,52,24,75,60,25,35,79,51,92,3,7,36,88,2,42,56,96,86,23,44,12,95,50,14,84,22,91,29,43,5,55,34,64,45,82,6,21}, // permutation 3
{49,53,4,39,76,63,50,45,15,12,83,65,10,93,2,41,36,24,43,1,23,48,31,38,54,58,61,32,40,3,17,80,42,29,56,51,99,25,66,55,78,98,62,96,21,68,64,92,52,91,20,13,77,37,60,86,47,35,5,34,88,89,28,22,97,7,46,30,0,8,75,73,14,16,26,19,6,67,33,95,57,94,9,27,71,44,79,81,59,11,74,72,90,82,69,85,84,87,70,18}, // permutation 4
{8,94,87,64,43,20,66,38,48,69,25,83,2,96,63,56,10,85,86,39,59,89,5,52,79,1,41,54,91,92,35,9,36,84,12,80,27,53,34,73,57,44,31,33,40,4,6,28,32,3,90,0,77,7,21,29,16,95,74,37,15,61,93,23,72,18,81,46,78,99,22,17,14,82,51,75,55,24,45,65,71,47,68,97,88,19,67,13,30,98,62,42,60,70,26,50,58,11,49,76}, // permutation 5
{54,86,47,92,44,59,67,33,11,80,57,45,1,9,26,93,43,84,82,99,50,42,65,41,75,96,88,79,7,56,31,76,18,72,46,95,68,64,6,25,61,78,12,48,53,49,27,77,38,52,3,40,24,70,28,35,22,51,13,83,2,81,55,14,90,98,32,34,69,62,30,39,20,16,0,36,87,74,94,89,4,73,8,58,23,19,60,21,29,15,91,17,63,85,97,10,37,71,5,66}, // permutation 6
{47,21,12,34,27,95,17,77,29,71,16,57,25,97,92,13,9,66,14,28,62,44,18,79,85,46,63,24,59,91,42,3,82,19,90,49,51,61,20,72,69,54,8,78,23,40,68,93,30,87,0,96,31,33,73,38,88,22,45,15,81,76,84,60,1,39,56,26,94,55,10,98,74,67,89,64,70,11,83,41,53,6,36,5,80,35,52,43,37,48,2,50,65,4,99,86,58,7,32,75}, // permutation 7
{15,49,77,95,24,42,93,9,91,94,40,13,52,81,83,44,46,18,4,68,36,25,41,3,57,10,99,47,58,20,62,67,27,66,72,53,69,70,89,92,96,14,33,51,35,31,28,5,85,30,23,12,6,45,55,11,75,63,60,37,48,19,38,50,56,8,54,39,16,90,2,74,97,84,21,88,43,98,7,87,34,73,59,0,22,1,61,80,78,65,86,79,71,76,17,32,29,64,82,26}, // permutation 8
{53,98,12,55,41,22,64,42,40,33,48,23,1,17,87,0,38,62,76,77,57,89,39,61,29,56,45,90,69,9,75,71,94,32,24,7,97,73,80,36,44,50,81,85,2,96,99,47,58,92,43,37,15,5,51,30,83,60,59,3,63,26,54,14,67,11,95,93,27,88,74,18,91,70,34,79,19,78,35,84,86,10,4,46,16,66,6,28,49,52,72,20,13,31,82,25,21,68,65,8} // permutation 9
};

// Seed: 1602617247

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int32_t g_6;
    volatile int16_t g_8;
    uint32_t g_9;
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
uint16_t  func_1(struct S0 * p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_13->g_9 p_13->g_3
 * writes: p_13->g_3 p_13->g_9 p_13->g_6
 */
uint16_t  func_1(struct S0 * p_13)
{ /* block id: 4 */
    int32_t *l_2 = &p_13->g_3;
    int32_t *l_4 = &p_13->g_3;
    int32_t *l_5[8] = {&p_13->g_3,&p_13->g_3,&p_13->g_3,&p_13->g_3,&p_13->g_3,&p_13->g_3,&p_13->g_3,&p_13->g_3};
    int64_t l_7[6][7][2] = {{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}},{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}},{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}},{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}},{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}},{{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)},{0x6755073046773196L,(-1L)}}};
    int8_t l_12 = (-1L);
    int i, j, k;
    (*l_2) = 0x58E5CCC9L;
    --p_13->g_9;
    p_13->g_3 &= (-1L);
    p_13->g_6 = ((*l_2) &= l_12);
    return (*l_4);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[100];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 100; i++)
            l_comm_values[i] = 1;
    struct S0 c_14;
    struct S0* p_13 = &c_14;
    struct S0 c_15 = {
        0x22A4F402L, // p_13->g_3
        5L, // p_13->g_6
        0x4ED6L, // p_13->g_8
        4294967295UL, // p_13->g_9
        0, // p_13->v_collective
        sequence_input[get_global_id(0)], // p_13->global_0_offset
        sequence_input[get_global_id(1)], // p_13->global_1_offset
        sequence_input[get_global_id(2)], // p_13->global_2_offset
        sequence_input[get_local_id(0)], // p_13->local_0_offset
        sequence_input[get_local_id(1)], // p_13->local_1_offset
        sequence_input[get_local_id(2)], // p_13->local_2_offset
        sequence_input[get_group_id(0)], // p_13->group_0_offset
        sequence_input[get_group_id(1)], // p_13->group_1_offset
        sequence_input[get_group_id(2)], // p_13->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[0][get_linear_local_id()])), // p_13->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_14 = c_15;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_13);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_13->g_3, "p_13->g_3", print_hash_value);
    transparent_crc(p_13->g_6, "p_13->g_6", print_hash_value);
    transparent_crc(p_13->g_8, "p_13->g_8", print_hash_value);
    transparent_crc(p_13->g_9, "p_13->g_9", print_hash_value);
    transparent_crc(p_13->v_collective, "p_13->v_collective", print_hash_value);
    transparent_crc(p_13->l_comm_values[get_linear_local_id()], "p_13->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_13->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()], "p_13->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
