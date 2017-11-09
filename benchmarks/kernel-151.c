// --atomics 87 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 65,26,4 -l 1,13,2
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

__constant uint32_t permutations[10][26] = {
{14,12,0,10,2,6,1,5,20,25,9,13,23,16,11,18,7,4,22,19,3,8,15,21,17,24}, // permutation 0
{9,11,19,13,15,3,1,12,18,6,16,5,10,22,7,23,4,24,17,25,2,8,14,20,21,0}, // permutation 1
{25,11,10,24,3,0,12,13,23,5,21,9,4,14,22,8,20,19,15,17,2,7,6,1,16,18}, // permutation 2
{23,0,20,5,13,16,14,12,7,22,21,24,4,18,3,10,17,11,2,15,8,1,6,19,9,25}, // permutation 3
{25,13,5,1,21,12,17,18,4,24,6,9,0,15,20,19,3,8,16,2,23,7,22,11,10,14}, // permutation 4
{8,18,4,0,14,25,21,12,19,9,7,17,10,1,15,11,23,2,5,16,3,24,22,6,13,20}, // permutation 5
{12,17,10,15,25,2,18,24,5,1,16,21,7,23,20,19,13,8,6,9,14,3,4,0,22,11}, // permutation 6
{23,14,2,8,1,4,6,21,9,10,18,16,13,15,19,3,5,12,0,22,11,20,17,24,7,25}, // permutation 7
{10,0,16,8,9,22,24,25,18,7,17,21,3,19,11,15,12,4,1,23,14,5,6,2,20,13}, // permutation 8
{13,5,0,18,25,22,8,2,3,21,10,11,16,1,6,7,15,19,9,24,4,17,20,23,12,14} // permutation 9
};

// Seed: 761573857

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
   volatile int32_t  f0;
   uint16_t  f1;
   int64_t  f2;
   volatile uint32_t  f3;
   int64_t  f4;
   uint8_t  f5;
};

union U4 {
   int64_t  f0;
   uint64_t  f1;
   struct S2  f2;
   uint32_t  f3;
   int8_t * volatile  f4;
};

struct S5 {
    int32_t g_3;
    volatile int32_t g_5;
    volatile uint16_t g_6[1][8];
    union U4 g_9;
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
union U4  func_1(struct S5 * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_10->g_6 p_10->g_9
 * writes: p_10->g_6
 */
union U4  func_1(struct S5 * p_10)
{ /* block id: 4 */
    int32_t *l_2 = &p_10->g_3;
    int32_t *l_4[8][3][2] = {{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}},{{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3},{&p_10->g_3,&p_10->g_3}}};
    int i, j, k;
    p_10->g_6[0][6]--;
    return p_10->g_9;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_comm_values[i] = 1;
    struct S5 c_11;
    struct S5* p_10 = &c_11;
    struct S5 c_12 = {
        5L, // p_10->g_3
        0x4AA8E55AL, // p_10->g_5
        {{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL}}, // p_10->g_6
        {0x5478254981C5860BL}, // p_10->g_9
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 26)), permutations[0][get_linear_local_id()])), // p_10->tid
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
    transparent_crc(p_10->g_5, "p_10->g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_10->g_6[i][j], "p_10->g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_10->g_9.f0, "p_10->g_9.f0", print_hash_value);
    transparent_crc(p_10->v_collective, "p_10->v_collective", print_hash_value);
    transparent_crc(p_10->l_comm_values[get_linear_local_id()], "p_10->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_10->g_comm_values[get_linear_group_id() * 26 + get_linear_local_id()], "p_10->g_comm_values[get_linear_group_id() * 26 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
