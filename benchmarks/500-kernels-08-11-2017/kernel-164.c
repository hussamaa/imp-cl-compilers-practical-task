// --atomics 66 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 38,23,9 -l 2,1,3
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

__constant uint32_t permutations[10][6] = {
{3,4,5,1,0,2}, // permutation 0
{1,2,5,0,4,3}, // permutation 1
{1,2,3,5,0,4}, // permutation 2
{4,5,1,2,3,0}, // permutation 3
{4,3,5,0,2,1}, // permutation 4
{3,0,2,4,5,1}, // permutation 5
{1,3,2,0,5,4}, // permutation 6
{1,5,4,3,0,2}, // permutation 7
{2,0,1,5,4,3}, // permutation 8
{4,5,3,2,1,0} // permutation 9
};

// Seed: 3108861131

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S2 {
   int64_t  f0;
   int16_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
   volatile int32_t  f4;
};

struct S3 {
    int32_t g_8;
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
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S3 * p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_15->g_comm_values
 * writes:
 */
uint32_t  func_1(struct S3 * p_15)
{ /* block id: 4 */
    struct S0 l_5 = {1L};
    int32_t *l_7 = &p_15->g_8;
    int32_t **l_6 = &l_7;
    int32_t *l_10 = &p_15->g_8;
    int32_t **l_9 = &l_10;
    int32_t **l_11 = (void*)0;
    int32_t *l_13 = &p_15->g_8;
    int32_t **l_12 = &l_13;
    int32_t *l_14 = &p_15->g_8;
    if ((atomic_inc(&p_15->l_atomic_input[29]) == 9))
    { /* block id: 6 */
        struct S2 l_2 = {0x3F0BC5021C3A23FEL,0x681AL,0x6CC2443AL,1UL,0x5CD16652L};/* VOLATILE GLOBAL l_2 */
        int32_t l_3 = 0x67528ACEL;
        uint16_t l_4 = 0xD8EAL;
        l_4 &= (l_2 , l_3);
        unsigned int result = 0;
        result += l_2.f0;
        result += l_2.f1;
        result += l_2.f2;
        result += l_2.f3;
        result += l_2.f4;
        result += l_3;
        result += l_4;
        atomic_add(&p_15->l_special_values[29], result);
    }
    else
    { /* block id: 8 */
        (1 + 1);
    }
    l_14 = ((*l_12) = ((*l_9) = ((*l_6) = (l_5 , (void*)0))));
    return p_15->g_comm_values[p_15->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S3 c_16;
    struct S3* p_15 = &c_16;
    struct S3 c_17 = {
        0x18D20B50L, // p_15->g_8
        0, // p_15->v_collective
        sequence_input[get_global_id(0)], // p_15->global_0_offset
        sequence_input[get_global_id(1)], // p_15->global_1_offset
        sequence_input[get_global_id(2)], // p_15->global_2_offset
        sequence_input[get_local_id(0)], // p_15->local_0_offset
        sequence_input[get_local_id(1)], // p_15->local_1_offset
        sequence_input[get_local_id(2)], // p_15->local_2_offset
        sequence_input[get_group_id(0)], // p_15->group_0_offset
        sequence_input[get_group_id(1)], // p_15->group_1_offset
        sequence_input[get_group_id(2)], // p_15->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_15->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_16 = c_17;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_15);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_15->g_8, "p_15->g_8", print_hash_value);
    transparent_crc(p_15->v_collective, "p_15->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 66; i++)
            transparent_crc(p_15->l_special_values[i], "p_15->l_special_values[i]", print_hash_value);
    transparent_crc(p_15->l_comm_values[get_linear_local_id()], "p_15->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_15->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_15->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
