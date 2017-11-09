// --atomics 24 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 27,41,5 -l 27,1,1
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

__constant uint32_t permutations[10][27] = {
{18,4,9,21,20,26,17,16,22,3,7,15,13,23,19,25,14,24,5,11,12,1,0,6,8,10,2}, // permutation 0
{19,10,6,13,9,25,11,20,12,5,18,14,22,17,0,26,1,23,21,24,3,15,2,7,16,4,8}, // permutation 1
{16,13,20,10,15,14,11,9,8,21,7,1,26,23,5,25,2,4,6,18,19,0,22,12,17,3,24}, // permutation 2
{14,16,10,1,17,12,20,26,22,9,24,8,21,5,13,25,7,15,19,0,2,3,4,23,11,18,6}, // permutation 3
{15,18,3,16,21,9,19,2,12,17,23,5,6,14,20,10,11,25,22,1,7,0,4,13,24,8,26}, // permutation 4
{23,24,0,18,5,19,1,21,20,26,8,16,17,2,12,22,4,10,3,15,13,25,7,9,14,11,6}, // permutation 5
{5,11,2,13,16,14,22,19,25,10,0,3,26,4,21,1,12,7,8,9,24,6,18,15,17,23,20}, // permutation 6
{12,18,3,4,5,0,23,7,16,1,10,22,25,20,15,21,19,17,24,13,9,26,14,2,6,8,11}, // permutation 7
{7,10,26,3,2,5,8,6,15,11,20,0,4,16,17,23,13,19,21,14,22,25,24,12,18,9,1}, // permutation 8
{21,9,4,16,23,5,17,20,1,25,2,22,14,0,19,18,8,26,13,15,11,6,12,3,10,7,24} // permutation 9
};

// Seed: 266767016

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
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
uint32_t  func_1(struct S3 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_1(struct S3 * p_3)
{ /* block id: 4 */
    int64_t l_2[8][4][8] = {{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}},{{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL},{1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL,0x13281D21F1EB32A8L,1L,1L,0x13281D21F1EB32A8L,0x3E56890C5440874BL}}};
    int i, j, k;
    return l_2[2][3][5];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_comm_values[i] = 1;
    struct S3 c_4;
    struct S3* p_3 = &c_4;
    struct S3 c_5 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 27)), permutations[0][get_linear_local_id()])), // p_3->tid
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
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
