// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 80,89,1 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 4177364271

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_11;
    int32_t g_17;
    volatile int32_t g_18;
    volatile uint16_t g_19;
    int32_t * volatile g_23;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S0 * p_24);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_24->g_19 p_24->g_17
 * writes: p_24->g_19 p_24->g_23
 */
int8_t  func_1(struct S0 * p_24)
{ /* block id: 4 */
    int32_t *l_10 = &p_24->g_11;
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &p_24->g_11;
    int32_t *l_15 = &p_24->g_11;
    int32_t *l_16[1];
    int32_t **l_22[1][5] = {{&l_10,&l_10,&l_10,&l_10,&l_10}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_16[i] = &p_24->g_11;
    if ((atomic_inc(&p_24->g_atomic_input[83 * get_linear_group_id() + 0]) == 2))
    { /* block id: 6 */
        int64_t l_2 = 0x2BD7B1C2A2C7C8A6L;
        uint8_t l_3 = 0xA1L;
        int32_t l_6[5];
        uint32_t l_7 = 0xF2C36544L;
        int i;
        for (i = 0; i < 5; i++)
            l_6[i] = 0x5FA5FEF9L;
        l_3--;
        l_7 |= l_6[3];
        unsigned int result = 0;
        result += l_2;
        result += l_3;
        int l_6_i0;
        for (l_6_i0 = 0; l_6_i0 < 5; l_6_i0++) {
            result += l_6[l_6_i0];
        }
        result += l_7;
        atomic_add(&p_24->g_special_values[83 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 9 */
        (1 + 1);
    }
    if ((atomic_inc(&p_24->g_atomic_input[83 * get_linear_group_id() + 68]) == 3))
    { /* block id: 13 */
        uint16_t l_8[4];
        int8_t l_9 = 4L;
        int i;
        for (i = 0; i < 4; i++)
            l_8[i] = 0UL;
        l_9 = (l_8[3] = 0x7B807CFAL);
        unsigned int result = 0;
        int l_8_i0;
        for (l_8_i0 = 0; l_8_i0 < 4; l_8_i0++) {
            result += l_8[l_8_i0];
        }
        result += l_9;
        atomic_add(&p_24->g_special_values[83 * get_linear_group_id() + 68], result);
    }
    else
    { /* block id: 16 */
        (1 + 1);
    }
    ++p_24->g_19;
    p_24->g_23 = (void*)0;
    return p_24->g_17;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S0 c_25;
    struct S0* p_24 = &c_25;
    struct S0 c_26 = {
        (-4L), // p_24->g_11
        1L, // p_24->g_17
        0x660E7790L, // p_24->g_18
        0xC6FEL, // p_24->g_19
        &p_24->g_17, // p_24->g_23
        0, // p_24->v_collective
        sequence_input[get_global_id(0)], // p_24->global_0_offset
        sequence_input[get_global_id(1)], // p_24->global_1_offset
        sequence_input[get_global_id(2)], // p_24->global_2_offset
        sequence_input[get_local_id(0)], // p_24->local_0_offset
        sequence_input[get_local_id(1)], // p_24->local_1_offset
        sequence_input[get_local_id(2)], // p_24->local_2_offset
        sequence_input[get_group_id(0)], // p_24->group_0_offset
        sequence_input[get_group_id(1)], // p_24->group_1_offset
        sequence_input[get_group_id(2)], // p_24->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_24->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_25 = c_26;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_24);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_24->g_11, "p_24->g_11", print_hash_value);
    transparent_crc(p_24->g_17, "p_24->g_17", print_hash_value);
    transparent_crc(p_24->g_18, "p_24->g_18", print_hash_value);
    transparent_crc(p_24->g_19, "p_24->g_19", print_hash_value);
    transparent_crc(p_24->v_collective, "p_24->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 83; i++)
            transparent_crc(p_24->g_special_values[i + 83 * get_linear_group_id()], "p_24->g_special_values[i + 83 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_24->l_comm_values[get_linear_local_id()], "p_24->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_24->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_24->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
