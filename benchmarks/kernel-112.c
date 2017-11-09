// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 83,61,1 -l 83,1,1
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

__constant uint32_t permutations[10][83] = {
{81,60,25,35,15,40,26,34,42,49,16,33,78,5,79,47,53,74,45,7,6,11,39,41,30,75,31,44,77,29,21,64,76,43,46,72,3,14,58,12,38,51,19,23,62,8,69,52,37,63,67,32,0,22,54,59,57,4,2,36,50,71,65,10,24,68,9,18,80,17,27,70,73,61,55,56,66,13,48,28,20,82,1}, // permutation 0
{77,80,46,38,16,31,67,57,8,15,49,48,21,61,78,55,68,17,82,54,28,66,69,42,47,23,45,52,74,65,12,50,1,72,81,3,60,51,2,7,37,24,53,70,62,32,58,29,5,20,39,27,13,59,26,22,10,40,9,4,25,71,41,63,79,34,64,0,44,30,33,18,14,75,56,11,43,36,73,6,76,19,35}, // permutation 1
{46,19,56,13,57,38,15,53,60,54,72,59,64,69,23,12,81,61,25,40,6,66,32,36,9,14,45,68,35,73,65,31,71,44,74,10,21,63,5,76,17,27,30,42,1,20,41,2,11,0,39,49,55,77,50,67,26,4,78,28,80,18,75,34,3,7,24,48,8,37,79,70,62,52,43,22,51,82,47,33,16,58,29}, // permutation 2
{52,56,17,15,31,47,53,41,46,54,43,19,49,66,51,63,13,70,37,21,1,20,28,50,30,0,45,76,80,14,59,36,33,64,48,65,38,71,16,55,8,34,82,9,3,60,12,42,69,62,81,39,29,61,23,67,68,72,74,58,77,75,6,35,79,57,44,5,2,22,25,78,7,11,18,73,26,4,32,10,27,40,24}, // permutation 3
{75,31,20,16,15,77,56,1,28,76,11,64,23,60,2,39,9,52,45,7,81,49,80,58,79,40,33,8,19,46,4,53,62,10,29,37,65,14,71,50,69,24,74,67,48,12,54,13,25,82,38,70,44,36,57,21,34,72,6,51,41,78,68,66,73,32,0,18,61,47,30,42,63,55,22,26,35,59,43,27,3,5,17}, // permutation 4
{23,59,66,56,34,21,76,24,46,15,64,47,20,42,4,16,9,13,41,31,51,69,60,52,37,35,48,80,78,74,19,72,32,67,0,62,33,6,30,40,71,54,8,2,11,61,36,29,28,68,38,50,53,27,5,77,63,49,65,58,25,70,57,81,18,79,45,1,22,12,82,3,73,55,44,14,43,75,7,10,26,17,39}, // permutation 5
{31,17,44,69,80,82,41,21,39,22,5,55,0,63,58,48,57,73,66,24,2,14,36,19,60,59,67,43,42,4,9,75,79,77,6,26,76,72,18,7,25,46,35,3,64,32,16,23,20,47,28,1,10,12,30,53,65,62,33,45,50,61,78,71,49,54,74,38,8,51,11,34,81,37,40,52,15,13,29,70,56,68,27}, // permutation 6
{31,61,26,50,58,36,18,3,25,24,4,82,81,67,7,37,62,6,54,69,28,51,20,12,0,55,1,42,32,19,63,73,76,14,71,48,16,5,34,60,59,23,68,52,53,30,29,38,65,66,11,79,21,2,39,17,45,40,46,70,35,9,47,33,15,49,64,57,77,75,41,78,56,74,80,10,22,72,44,43,8,13,27}, // permutation 7
{36,47,13,42,26,52,21,18,50,6,35,55,25,14,9,40,27,19,76,34,80,70,72,78,23,41,82,32,44,74,57,61,17,3,71,43,15,59,79,37,65,0,48,20,53,75,1,11,4,46,33,22,16,31,69,81,24,54,51,39,49,56,5,45,28,7,58,66,62,10,60,68,2,77,63,73,67,12,38,29,64,8,30}, // permutation 8
{78,17,44,67,51,19,25,38,31,53,62,54,57,50,23,1,43,45,35,34,18,32,79,2,63,71,74,80,66,59,77,20,9,72,58,21,16,65,4,47,39,73,0,69,81,22,56,42,37,8,3,7,6,13,11,60,82,46,61,55,15,48,40,70,5,41,64,68,52,36,27,12,24,33,26,75,28,14,29,30,10,49,76} // permutation 9
};

// Seed: 1784183112

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile int16_t g_16;
    volatile uint16_t g_17;
    volatile VECTOR(int8_t, 2) g_23;
    volatile int32_t g_24;
    volatile uint16_t g_25;
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
uint8_t  func_1(struct S0 * p_28);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_28->g_17 p_28->g_25 p_28->g_16
 * writes: p_28->g_17 p_28->g_25
 */
uint8_t  func_1(struct S0 * p_28)
{ /* block id: 4 */
    int32_t *l_2 = &p_28->g_3;
    int32_t *l_4 = &p_28->g_3;
    int32_t l_5 = (-1L);
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = &l_5;
    int32_t *l_9 = (void*)0;
    int32_t *l_10 = &p_28->g_3;
    int32_t *l_11 = &p_28->g_3;
    int32_t *l_12 = &p_28->g_3;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &l_5;
    int32_t *l_15[6][7][5] = {{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}},{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}},{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}},{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}},{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}},{{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3},{&l_5,&l_5,&p_28->g_3,(void*)0,&p_28->g_3}}};
    int i, j, k;
    ++p_28->g_17;
    for (l_5 = 0; (l_5 >= (-5)); l_5 = safe_sub_func_int32_t_s_s(l_5, 1))
    { /* block id: 8 */
        int32_t l_22[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int i;
        p_28->g_25--;
        return p_28->g_17;
    }
    return p_28->g_16;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_comm_values[i] = 1;
    struct S0 c_29;
    struct S0* p_28 = &c_29;
    struct S0 c_30 = {
        1L, // p_28->g_3
        0L, // p_28->g_16
        0xC7D2L, // p_28->g_17
        (VECTOR(int8_t, 2))(0x00L, 0x01L), // p_28->g_23
        0x16709E14L, // p_28->g_24
        8UL, // p_28->g_25
        0, // p_28->v_collective
        sequence_input[get_global_id(0)], // p_28->global_0_offset
        sequence_input[get_global_id(1)], // p_28->global_1_offset
        sequence_input[get_global_id(2)], // p_28->global_2_offset
        sequence_input[get_local_id(0)], // p_28->local_0_offset
        sequence_input[get_local_id(1)], // p_28->local_1_offset
        sequence_input[get_local_id(2)], // p_28->local_2_offset
        sequence_input[get_group_id(0)], // p_28->group_0_offset
        sequence_input[get_group_id(1)], // p_28->group_1_offset
        sequence_input[get_group_id(2)], // p_28->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 83)), permutations[0][get_linear_local_id()])), // p_28->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_29 = c_30;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_28);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_28->g_3, "p_28->g_3", print_hash_value);
    transparent_crc(p_28->g_16, "p_28->g_16", print_hash_value);
    transparent_crc(p_28->g_17, "p_28->g_17", print_hash_value);
    transparent_crc(p_28->g_23.x, "p_28->g_23.x", print_hash_value);
    transparent_crc(p_28->g_23.y, "p_28->g_23.y", print_hash_value);
    transparent_crc(p_28->g_24, "p_28->g_24", print_hash_value);
    transparent_crc(p_28->g_25, "p_28->g_25", print_hash_value);
    transparent_crc(p_28->v_collective, "p_28->v_collective", print_hash_value);
    transparent_crc(p_28->l_comm_values[get_linear_local_id()], "p_28->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_28->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()], "p_28->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
