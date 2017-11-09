// --atomics 71 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 42,84,2 -l 3,12,2
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

__constant uint32_t permutations[10][72] = {
{45,67,23,8,10,42,62,63,6,33,70,27,59,28,31,52,14,48,22,0,53,19,12,41,51,37,39,26,34,7,9,68,32,20,30,57,55,25,21,71,35,29,16,47,54,2,13,43,49,44,40,36,5,61,50,4,66,11,64,18,46,24,65,58,69,17,15,60,56,1,3,38}, // permutation 0
{7,18,70,62,71,64,53,1,6,46,35,42,51,31,19,5,0,41,33,54,63,40,3,50,25,30,58,12,68,22,67,49,65,37,45,27,29,39,36,28,60,55,38,26,20,23,11,4,34,13,66,57,48,24,16,14,8,52,15,61,44,43,69,9,2,59,21,10,32,17,56,47}, // permutation 1
{16,39,10,50,57,67,43,62,37,22,11,64,26,61,46,36,20,18,48,41,55,58,31,42,8,13,63,21,59,47,51,19,69,68,25,23,56,49,35,14,54,15,27,24,9,6,12,66,3,44,1,40,53,60,2,32,38,7,17,30,45,4,71,0,52,65,5,34,29,28,70,33}, // permutation 2
{28,5,42,23,21,69,16,39,30,37,46,27,31,12,62,61,25,64,67,29,49,17,22,43,10,19,34,0,54,4,7,8,50,32,36,70,71,55,33,15,40,18,48,59,3,9,2,26,60,47,14,51,44,20,52,68,57,11,63,58,35,45,65,13,38,53,56,41,1,66,24,6}, // permutation 3
{49,19,36,44,23,3,60,35,56,51,0,52,46,5,10,40,54,27,28,14,69,12,15,42,17,18,48,21,29,8,53,31,16,37,68,67,25,59,13,22,24,43,61,7,65,6,30,50,20,32,58,33,39,64,45,47,1,34,9,38,63,62,2,70,71,66,11,26,4,57,55,41}, // permutation 4
{27,45,14,51,58,23,34,18,15,60,66,67,49,17,54,38,10,24,8,30,55,41,20,28,69,2,44,70,42,62,43,4,25,33,50,63,32,37,71,26,61,56,22,19,40,29,1,52,16,31,64,57,7,9,3,21,48,11,6,46,39,68,47,35,59,0,65,53,5,36,12,13}, // permutation 5
{38,57,53,41,49,61,50,52,48,59,21,47,34,36,29,24,19,44,0,16,43,64,33,1,7,17,27,22,67,12,6,65,25,23,9,62,2,37,35,11,8,28,32,60,56,58,5,31,45,3,55,69,26,70,30,20,10,40,14,18,39,46,71,42,4,66,54,68,13,51,63,15}, // permutation 6
{20,55,47,31,25,37,11,24,5,27,6,12,54,65,0,22,70,40,16,42,51,48,17,14,49,61,19,58,39,29,9,71,13,2,44,63,69,66,53,45,64,50,30,4,60,34,10,52,57,43,67,35,3,8,15,46,1,59,62,18,23,32,7,68,26,28,21,38,33,56,36,41}, // permutation 7
{3,23,69,59,27,36,55,49,62,18,16,39,25,45,20,71,43,21,57,33,53,15,37,54,64,34,42,30,1,48,47,31,63,12,58,19,7,9,24,29,17,61,65,8,44,4,67,10,66,68,35,6,11,28,26,0,2,51,60,70,14,40,38,5,56,41,46,22,50,13,32,52}, // permutation 8
{9,29,50,14,57,41,22,0,42,49,33,1,18,43,16,6,52,26,44,30,48,54,60,4,8,31,23,32,65,7,59,64,34,15,66,55,20,39,56,47,46,19,13,10,3,45,58,53,24,68,2,71,27,37,5,51,21,70,63,25,28,35,62,69,61,36,11,12,67,40,17,38} // permutation 9
};

// Seed: 3312190950

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
    int32_t g_3[2];
    int32_t *g_11;
    int32_t ** volatile g_10;
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
int32_t  func_1(struct S3 * p_14);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_14->g_10 p_14->g_3 p_14->g_comm_values
 * writes: p_14->g_11
 */
int32_t  func_1(struct S3 * p_14)
{ /* block id: 4 */
    int32_t *l_2 = &p_14->g_3[1];
    int32_t *l_4 = &p_14->g_3[1];
    int32_t *l_5[7];
    int32_t l_6 = 0x70B101AAL;
    uint32_t l_7 = 1UL;
    int i;
    for (i = 0; i < 7; i++)
        l_5[i] = &p_14->g_3[1];
    l_7--;
    (*p_14->g_10) = &p_14->g_3[1];
    for (l_6 = 19; (l_6 < 10); l_6 = safe_sub_func_uint16_t_u_u(l_6, 7))
    { /* block id: 9 */
        return (*l_4);
    }
    return p_14->g_comm_values[p_14->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_comm_values[i] = 1;
    struct S3 c_15;
    struct S3* p_14 = &c_15;
    struct S3 c_16 = {
        {0x162C9CC1L,0x162C9CC1L}, // p_14->g_3
        &p_14->g_3[1], // p_14->g_11
        &p_14->g_11, // p_14->g_10
        0, // p_14->v_collective
        sequence_input[get_global_id(0)], // p_14->global_0_offset
        sequence_input[get_global_id(1)], // p_14->global_1_offset
        sequence_input[get_global_id(2)], // p_14->global_2_offset
        sequence_input[get_local_id(0)], // p_14->local_0_offset
        sequence_input[get_local_id(1)], // p_14->local_1_offset
        sequence_input[get_local_id(2)], // p_14->local_2_offset
        sequence_input[get_group_id(0)], // p_14->group_0_offset
        sequence_input[get_group_id(1)], // p_14->group_1_offset
        sequence_input[get_group_id(2)], // p_14->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[0][get_linear_local_id()])), // p_14->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_15 = c_16;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_14);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_14->g_3[i], "p_14->g_3[i]", print_hash_value);

    }
    transparent_crc(p_14->v_collective, "p_14->v_collective", print_hash_value);
    transparent_crc(p_14->l_comm_values[get_linear_local_id()], "p_14->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_14->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()], "p_14->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
