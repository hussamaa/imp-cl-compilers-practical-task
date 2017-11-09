// --atomics 63 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,25,3 -l 1,25,3
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
{59,0,30,63,13,61,28,7,60,74,8,24,31,16,49,2,42,20,5,11,40,66,43,52,19,15,17,12,64,1,39,65,72,21,58,73,34,46,22,10,56,14,69,36,51,9,23,6,33,62,53,54,68,41,38,45,71,57,4,3,44,18,50,25,47,32,29,48,26,70,27,37,67,55,35}, // permutation 0
{8,59,47,61,31,52,15,19,23,28,60,30,24,62,55,3,17,25,22,74,14,65,53,57,35,2,5,18,69,27,32,72,73,48,64,20,63,66,49,4,68,67,13,71,45,58,0,9,11,46,12,36,56,43,34,70,10,37,7,38,42,1,44,40,16,39,21,50,41,26,29,51,33,6,54}, // permutation 1
{51,73,37,72,1,9,74,47,32,55,31,27,54,53,60,56,6,70,68,17,44,7,29,63,21,11,3,34,57,19,20,41,25,71,2,23,35,0,52,5,15,45,36,50,18,65,30,67,64,24,48,22,14,40,49,4,33,39,26,61,58,10,28,62,16,42,8,46,38,69,13,59,66,12,43}, // permutation 2
{47,24,39,8,72,37,22,52,33,35,69,1,40,45,62,15,54,44,53,71,60,0,38,11,18,30,50,4,59,49,42,68,23,43,2,56,19,48,34,64,70,65,14,73,66,6,20,7,32,9,16,57,3,31,46,41,63,74,17,27,29,25,10,13,26,67,58,51,55,61,21,28,12,5,36}, // permutation 3
{25,21,49,2,66,65,7,54,69,46,58,53,73,38,20,64,56,30,55,36,14,23,61,32,52,24,42,41,47,62,1,18,4,8,51,37,6,33,3,35,12,19,9,74,63,71,70,45,43,0,39,13,17,44,59,29,40,10,67,5,26,27,34,15,31,68,72,48,11,60,57,22,28,16,50}, // permutation 4
{61,0,41,2,39,9,17,26,56,5,13,44,55,66,16,73,14,46,37,27,24,25,1,22,63,58,8,36,42,69,29,11,71,65,43,62,35,64,57,4,40,21,18,54,20,70,23,15,28,59,48,34,60,10,19,74,12,50,49,47,30,68,72,53,3,52,51,32,31,6,67,38,7,45,33}, // permutation 5
{52,47,31,1,16,27,11,6,61,60,72,40,7,12,43,0,74,53,22,63,54,71,39,5,45,73,38,20,46,65,70,2,48,35,67,34,42,30,66,58,32,28,10,4,62,9,25,64,8,17,18,23,59,49,26,37,44,57,50,55,14,41,29,13,33,3,51,21,69,36,56,68,15,19,24}, // permutation 6
{43,34,8,59,14,56,37,49,11,50,4,20,40,12,39,18,74,13,73,30,9,69,26,15,46,72,23,17,22,66,55,54,71,64,2,42,45,24,70,19,16,58,44,21,3,0,62,25,67,47,36,28,60,29,7,53,10,27,57,52,51,31,61,1,68,63,65,48,6,33,32,5,35,41,38}, // permutation 7
{63,9,19,18,48,40,30,55,34,59,61,28,31,21,4,32,70,10,45,46,25,20,13,15,44,64,62,3,41,66,36,22,6,71,23,12,33,26,52,49,72,1,35,14,42,24,51,54,50,16,29,56,57,8,38,67,17,2,37,53,74,58,0,73,43,65,68,39,11,47,69,7,60,27,5}, // permutation 8
{62,37,61,42,39,12,57,59,19,20,25,51,49,11,38,40,50,21,71,60,32,74,45,36,43,16,27,8,52,17,69,41,1,31,55,18,6,46,58,29,30,67,44,2,34,22,0,35,70,47,4,72,3,68,9,63,33,13,10,54,26,56,5,48,28,64,65,7,24,23,14,53,15,73,66} // permutation 9
};

// Seed: 3035630200

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
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
int32_t  func_1(struct S0 * p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_8->g_3
 * writes: p_8->g_3
 */
int32_t  func_1(struct S0 * p_8)
{ /* block id: 4 */
    int32_t *l_2[9] = {&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3,&p_8->g_3};
    int64_t l_4[2][1][3] = {{{0x1F6D4A0D461E3FF1L,0x6B4C8F0D0714AD38L,0x1F6D4A0D461E3FF1L}},{{0x1F6D4A0D461E3FF1L,0x6B4C8F0D0714AD38L,0x1F6D4A0D461E3FF1L}}};
    uint32_t l_5 = 0UL;
    int i, j, k;
    l_5++;
    p_8->g_3 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), (-1L), 0x40C8FBFCL, 1L, ((VECTOR(int32_t, 2))(3L, (-10L))), (-1L), 0x05300CE3L)).s5170672737740336)).lo)).s6;
    return p_8->g_3;
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
    struct S0 c_9;
    struct S0* p_8 = &c_9;
    struct S0 c_10 = {
        (-1L), // p_8->g_3
        0, // p_8->v_collective
        sequence_input[get_global_id(0)], // p_8->global_0_offset
        sequence_input[get_global_id(1)], // p_8->global_1_offset
        sequence_input[get_global_id(2)], // p_8->global_2_offset
        sequence_input[get_local_id(0)], // p_8->local_0_offset
        sequence_input[get_local_id(1)], // p_8->local_1_offset
        sequence_input[get_local_id(2)], // p_8->local_2_offset
        sequence_input[get_group_id(0)], // p_8->group_0_offset
        sequence_input[get_group_id(1)], // p_8->group_1_offset
        sequence_input[get_group_id(2)], // p_8->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[0][get_linear_local_id()])), // p_8->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_9 = c_10;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_8);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_8->g_3, "p_8->g_3", print_hash_value);
    transparent_crc(p_8->v_collective, "p_8->v_collective", print_hash_value);
    transparent_crc(p_8->l_comm_values[get_linear_local_id()], "p_8->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_8->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()], "p_8->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
