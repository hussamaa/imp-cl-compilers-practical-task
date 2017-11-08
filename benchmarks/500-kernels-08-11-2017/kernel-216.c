// --atomics 45 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,26,4 -l 1,26,4
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

__constant uint32_t permutations[10][104] = {
{61,100,46,84,69,1,3,14,92,11,57,23,18,75,94,37,45,5,21,42,98,35,55,65,40,72,90,6,77,26,85,7,32,16,82,80,4,54,19,74,97,8,33,15,89,87,78,79,36,88,62,81,51,12,44,76,9,67,34,99,66,28,39,24,31,103,91,64,58,22,25,30,83,73,48,43,13,68,86,2,93,17,96,71,29,63,53,60,41,102,38,10,59,47,70,101,50,56,95,20,0,52,27,49}, // permutation 0
{83,73,4,85,58,96,70,26,63,46,64,35,74,88,47,41,80,16,48,30,89,51,56,79,102,82,39,45,8,25,31,5,59,22,101,33,61,53,75,67,95,97,40,69,68,13,57,84,1,52,2,103,21,77,23,15,14,3,18,36,62,49,76,78,87,72,32,54,7,98,94,19,17,42,9,99,93,44,71,20,81,50,34,43,38,6,27,24,37,90,91,29,0,92,60,11,55,66,100,10,65,28,12,86}, // permutation 1
{44,8,85,41,19,29,70,90,54,58,11,10,73,84,34,86,36,69,21,42,75,13,76,33,66,30,47,23,64,26,35,88,25,59,94,43,46,16,3,67,99,101,51,38,95,103,102,49,0,28,24,18,97,40,81,60,62,57,4,9,52,17,61,63,15,93,72,79,91,27,45,78,12,5,50,7,22,55,96,68,2,98,31,77,87,71,37,83,65,80,92,89,14,53,39,20,6,56,82,48,74,1,100,32}, // permutation 2
{91,41,93,34,57,87,97,40,88,65,15,28,94,50,66,102,85,80,14,43,53,67,59,76,38,73,20,12,84,35,98,13,19,27,48,56,83,95,49,79,8,42,77,33,60,18,81,103,45,78,2,37,21,55,24,62,100,11,99,29,46,69,72,36,58,17,26,6,25,32,92,63,96,82,23,101,1,0,47,5,3,9,30,10,52,90,16,71,68,31,51,74,86,64,61,39,22,70,89,75,54,4,44,7}, // permutation 3
{62,66,0,69,37,47,27,72,78,22,29,38,95,41,88,30,71,64,63,96,11,56,26,74,103,94,51,57,67,55,70,49,92,42,14,9,99,21,84,45,54,102,60,40,17,6,20,59,3,98,90,76,4,80,73,86,82,32,91,81,12,79,52,18,87,24,44,1,89,46,19,34,36,16,100,35,7,31,25,101,53,68,15,8,2,65,10,83,85,58,33,28,97,5,23,50,39,43,75,61,48,13,77,93}, // permutation 4
{43,17,8,63,40,60,15,92,36,81,30,97,27,9,1,64,74,21,47,0,78,13,89,42,31,70,76,3,95,25,85,22,53,24,10,98,71,23,38,18,86,93,51,69,44,59,101,102,19,56,39,99,54,79,57,62,5,55,26,46,58,103,52,77,33,14,91,48,28,45,2,66,82,49,67,37,72,84,7,4,20,12,50,80,88,35,41,100,16,73,29,65,68,94,11,90,83,61,87,75,32,96,6,34}, // permutation 5
{77,14,100,58,92,43,94,46,89,25,81,79,12,62,63,60,19,82,20,2,75,44,22,102,42,23,32,97,55,7,8,93,38,30,26,48,73,96,21,16,39,52,51,74,98,27,54,57,91,76,86,85,31,28,80,6,71,33,15,29,70,4,36,67,17,87,41,0,59,9,11,50,66,101,37,1,103,40,95,78,83,45,5,68,84,13,72,61,34,3,47,35,99,65,64,10,90,56,18,49,53,24,69,88}, // permutation 6
{66,75,17,90,95,27,48,101,2,37,60,97,94,43,40,98,69,39,82,99,100,32,10,78,51,67,29,70,89,15,63,84,58,88,30,8,59,22,85,61,54,72,73,77,50,11,24,33,18,53,91,87,31,1,9,79,21,86,102,71,35,5,38,57,36,0,81,23,45,46,49,62,52,80,3,96,12,41,26,28,76,44,19,56,68,93,6,7,103,13,92,4,55,64,14,16,65,34,83,25,42,47,20,74}, // permutation 7
{52,33,3,57,13,1,69,17,24,37,14,96,53,46,100,49,7,18,92,64,80,59,76,29,8,43,41,40,28,82,75,77,2,78,4,34,39,84,44,27,32,23,98,89,9,99,86,101,88,93,61,5,45,66,12,6,63,90,74,15,62,103,10,22,81,21,65,38,26,67,87,16,58,50,47,83,94,91,35,0,60,36,51,25,79,11,71,102,30,85,42,48,54,20,56,97,95,31,70,73,55,19,68,72}, // permutation 8
{58,92,46,36,57,69,16,12,34,45,23,42,53,31,96,32,13,26,103,94,3,28,38,67,54,71,21,84,63,44,24,8,88,27,10,22,73,68,80,11,62,33,98,66,14,75,0,76,93,82,7,50,9,60,85,5,51,79,37,39,18,56,40,87,29,100,59,97,30,101,1,65,55,89,99,78,52,43,72,17,64,49,48,25,19,6,90,41,70,35,81,20,4,102,83,61,15,77,91,2,74,95,47,86} // permutation 9
};

// Seed: 3109925202

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U5 {
   uint32_t  f0;
   int8_t  f1;
};

struct S6 {
    int16_t g_2;
    int32_t g_4[2];
    union U5 g_25;
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
union U5  func_1(struct S6 * p_26);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_26->g_25
 * writes:
 */
union U5  func_1(struct S6 * p_26)
{ /* block id: 4 */
    int32_t *l_3 = &p_26->g_4[1];
    int32_t *l_5 = &p_26->g_4[1];
    int32_t *l_6 = &p_26->g_4[1];
    int32_t l_7 = 0x0D303F02L;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &l_7;
    int32_t *l_10 = &l_7;
    int32_t *l_11 = &p_26->g_4[1];
    int32_t *l_12 = &p_26->g_4[1];
    int32_t *l_13 = &l_7;
    int32_t *l_14 = &l_7;
    int32_t *l_15 = &l_7;
    int32_t *l_16 = (void*)0;
    int32_t *l_17 = &p_26->g_4[1];
    int32_t *l_18 = &p_26->g_4[1];
    int32_t *l_19 = &p_26->g_4[1];
    int32_t *l_20 = (void*)0;
    int32_t *l_21[2];
    uint16_t l_22 = 9UL;
    int i;
    for (i = 0; i < 2; i++)
        l_21[i] = &p_26->g_4[0];
    l_22--;
    return p_26->g_25;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[104];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 104; i++)
            l_comm_values[i] = 1;
    struct S6 c_27;
    struct S6* p_26 = &c_27;
    struct S6 c_28 = {
        0L, // p_26->g_2
        {0x456160CBL,0x456160CBL}, // p_26->g_4
        {4294967295UL}, // p_26->g_25
        0, // p_26->v_collective
        sequence_input[get_global_id(0)], // p_26->global_0_offset
        sequence_input[get_global_id(1)], // p_26->global_1_offset
        sequence_input[get_global_id(2)], // p_26->global_2_offset
        sequence_input[get_local_id(0)], // p_26->local_0_offset
        sequence_input[get_local_id(1)], // p_26->local_1_offset
        sequence_input[get_local_id(2)], // p_26->local_2_offset
        sequence_input[get_group_id(0)], // p_26->group_0_offset
        sequence_input[get_group_id(1)], // p_26->group_1_offset
        sequence_input[get_group_id(2)], // p_26->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[0][get_linear_local_id()])), // p_26->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_27 = c_28;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_26);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_26->g_2, "p_26->g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_26->g_4[i], "p_26->g_4[i]", print_hash_value);

    }
    transparent_crc(p_26->g_25.f0, "p_26->g_25.f0", print_hash_value);
    transparent_crc(p_26->v_collective, "p_26->v_collective", print_hash_value);
    transparent_crc(p_26->l_comm_values[get_linear_local_id()], "p_26->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_26->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()], "p_26->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
