// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,34,6 -l 1,17,6
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

__constant uint32_t permutations[10][102] = {
{32,96,59,12,51,2,95,21,42,86,0,54,19,75,35,41,18,1,93,29,50,90,97,10,33,7,88,11,47,14,74,37,13,81,3,84,17,24,89,61,52,22,56,43,9,69,99,20,87,16,57,38,73,78,45,94,68,65,70,83,39,77,49,98,91,60,58,82,27,26,40,5,44,31,8,4,25,72,55,28,80,63,53,30,100,64,15,36,79,34,46,67,66,101,85,92,71,23,6,62,48,76}, // permutation 0
{2,100,83,84,14,96,54,23,18,51,62,89,90,94,88,13,71,16,40,77,64,74,3,63,37,49,52,11,9,4,0,79,55,38,39,69,32,8,75,97,65,33,35,29,27,20,87,82,81,22,78,101,34,19,24,58,7,95,6,57,21,36,44,61,73,70,28,76,41,10,68,50,26,31,5,12,59,17,92,91,1,56,67,80,93,72,99,46,98,53,60,45,15,66,30,47,25,86,48,85,42,43}, // permutation 1
{82,85,31,37,48,26,53,24,95,1,96,51,43,98,44,87,89,73,28,70,76,29,21,6,56,16,101,41,78,59,86,94,32,45,9,63,50,12,92,79,54,18,62,33,58,19,61,67,47,36,83,8,52,93,30,40,4,39,13,65,15,57,55,69,42,75,88,20,14,77,7,35,3,71,66,0,84,5,38,68,22,74,81,25,23,27,100,46,17,64,97,60,72,91,10,34,2,80,90,99,11,49}, // permutation 2
{21,55,88,98,43,1,16,52,9,51,13,39,85,32,26,90,45,53,19,0,69,5,48,22,46,33,67,71,64,81,34,76,49,27,29,4,91,59,31,38,92,47,93,68,6,75,14,12,79,62,72,78,61,80,86,17,10,60,23,18,2,84,94,63,83,8,87,77,97,37,74,89,15,30,54,24,58,73,100,95,40,66,28,3,65,44,35,42,96,82,99,57,20,56,25,50,101,70,41,11,36,7}, // permutation 3
{21,2,45,77,5,48,4,64,24,39,52,55,60,59,10,54,91,80,32,22,47,67,9,58,7,50,25,43,85,30,90,35,92,49,26,73,75,17,69,74,100,76,81,27,34,68,28,83,79,87,29,19,40,51,78,82,96,23,61,33,66,84,101,46,65,89,14,88,44,63,86,18,20,57,31,38,3,11,36,0,41,62,56,95,16,71,8,93,98,1,72,37,12,53,15,42,6,13,70,94,99,97}, // permutation 4
{17,44,66,62,14,20,57,80,60,72,11,19,58,88,30,10,70,31,21,51,45,59,96,81,22,56,1,0,68,53,49,55,73,95,43,84,61,79,40,89,67,101,46,38,92,8,25,52,39,35,100,54,69,24,33,9,6,42,12,90,3,93,27,2,85,98,48,13,63,37,16,83,34,29,76,18,47,50,91,97,23,82,86,36,28,41,65,71,74,64,75,94,5,99,15,77,87,32,26,4,78,7}, // permutation 5
{92,90,0,27,18,29,67,48,51,1,43,40,10,91,33,26,5,42,25,14,99,59,15,44,34,76,64,36,32,60,62,89,85,74,95,2,54,88,98,69,21,79,81,20,53,77,46,101,52,94,55,86,61,22,93,80,49,100,68,16,9,11,83,19,13,65,72,41,71,37,63,75,57,12,8,84,97,30,3,23,28,73,66,7,50,24,35,87,17,96,38,45,31,56,78,82,4,47,39,70,6,58}, // permutation 6
{94,90,59,88,27,64,30,78,26,53,1,77,43,70,89,65,13,41,86,28,34,5,9,39,76,63,84,21,14,93,52,12,85,4,83,47,66,48,45,46,36,33,69,29,18,73,7,54,31,42,62,95,22,44,11,74,98,19,35,17,40,96,56,50,92,51,49,25,8,100,55,81,58,71,57,68,20,82,10,38,15,87,97,79,3,23,75,61,32,60,24,6,101,91,72,37,0,99,16,2,80,67}, // permutation 7
{72,40,39,89,75,7,14,49,98,25,22,48,32,11,58,17,21,95,84,44,96,62,12,13,38,94,90,70,28,65,8,56,3,60,81,86,37,42,53,82,0,9,101,67,100,93,57,77,33,46,27,74,80,52,50,88,19,64,79,83,47,15,45,97,24,4,71,1,35,92,41,10,18,73,54,99,31,85,69,59,51,5,6,29,26,20,30,68,2,61,91,78,36,55,23,63,43,66,16,87,34,76}, // permutation 8
{22,30,1,29,97,44,42,79,87,27,94,12,68,0,99,95,96,72,45,11,57,6,92,20,77,23,35,88,91,50,10,28,25,85,80,24,21,70,74,62,81,40,15,49,65,9,51,18,76,5,4,41,69,3,89,63,100,90,71,64,59,38,60,33,61,83,48,98,14,56,46,36,55,19,39,66,34,16,8,73,86,52,17,26,54,37,75,13,101,32,58,84,2,43,93,82,31,53,67,47,78,7} // permutation 9
};

// Seed: 603504401

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int16_t g_21;
    volatile uint32_t g_22;
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
int64_t  func_1(struct S0 * p_25);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_25->l_comm_values p_25->g_22 p_25->g_21
 * writes: p_25->g_2 p_25->g_22
 */
int64_t  func_1(struct S0 * p_25)
{ /* block id: 4 */
    VECTOR(uint64_t, 16) l_3 = (VECTOR(uint64_t, 16))(0xF390197F0A290BE4L, (VECTOR(uint64_t, 4))(0xF390197F0A290BE4L, (VECTOR(uint64_t, 2))(0xF390197F0A290BE4L, 0UL), 0UL), 0UL, 0xF390197F0A290BE4L, 0UL, (VECTOR(uint64_t, 2))(0xF390197F0A290BE4L, 0UL), (VECTOR(uint64_t, 2))(0xF390197F0A290BE4L, 0UL), 0xF390197F0A290BE4L, 0UL, 0xF390197F0A290BE4L, 0UL);
    int64_t l_8 = 0x695AAD8530DE9BF9L;
    int32_t l_9 = 0x0815898FL;
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = &l_9;
    int32_t *l_12 = &l_9;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = (void*)0;
    int32_t *l_15 = &l_9;
    int32_t *l_16 = &l_9;
    int32_t *l_17 = &l_9;
    int32_t *l_18 = &l_9;
    int32_t *l_19 = &l_9;
    int32_t *l_20[8];
    int i;
    for (i = 0; i < 8; i++)
        l_20[i] = &l_9;
    ++l_3.sa;
    p_25->g_2 = (l_9 = (safe_lshift_func_uint8_t_u_s(l_8, p_25->l_comm_values[(safe_mod_func_uint32_t_u_u(p_25->tid, 102))])));
    ++p_25->g_22;
    return p_25->g_21;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[102];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 102; i++)
            l_comm_values[i] = 1;
    struct S0 c_26;
    struct S0* p_25 = &c_26;
    struct S0 c_27 = {
        (-7L), // p_25->g_2
        (-1L), // p_25->g_21
        0x61A6B719L, // p_25->g_22
        0, // p_25->v_collective
        sequence_input[get_global_id(0)], // p_25->global_0_offset
        sequence_input[get_global_id(1)], // p_25->global_1_offset
        sequence_input[get_global_id(2)], // p_25->global_2_offset
        sequence_input[get_local_id(0)], // p_25->local_0_offset
        sequence_input[get_local_id(1)], // p_25->local_1_offset
        sequence_input[get_local_id(2)], // p_25->local_2_offset
        sequence_input[get_group_id(0)], // p_25->group_0_offset
        sequence_input[get_group_id(1)], // p_25->group_1_offset
        sequence_input[get_group_id(2)], // p_25->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[0][get_linear_local_id()])), // p_25->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_26 = c_27;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_25);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_25->g_2, "p_25->g_2", print_hash_value);
    transparent_crc(p_25->g_21, "p_25->g_21", print_hash_value);
    transparent_crc(p_25->g_22, "p_25->g_22", print_hash_value);
    transparent_crc(p_25->v_collective, "p_25->v_collective", print_hash_value);
    transparent_crc(p_25->l_comm_values[get_linear_local_id()], "p_25->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_25->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()], "p_25->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
