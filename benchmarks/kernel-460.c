// --atomics 54 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 27,77,3 -l 27,1,1
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
{5,12,24,6,22,20,9,3,7,0,14,17,16,4,26,21,15,13,18,25,23,19,8,10,11,2,1}, // permutation 0
{1,18,16,0,17,7,25,6,15,3,2,14,8,4,10,21,9,24,11,26,12,20,22,5,19,13,23}, // permutation 1
{6,12,3,26,20,23,16,2,21,10,0,9,5,22,4,25,13,24,17,1,19,11,18,8,14,7,15}, // permutation 2
{25,14,18,10,6,9,20,13,8,3,15,11,7,22,2,21,16,5,26,4,1,12,19,24,0,17,23}, // permutation 3
{16,25,7,4,21,10,13,1,3,0,18,20,26,5,12,14,2,19,17,6,24,9,22,15,23,8,11}, // permutation 4
{21,4,1,24,9,20,15,26,0,7,18,5,2,19,8,6,12,14,22,25,17,10,23,3,16,11,13}, // permutation 5
{12,17,21,8,20,6,9,18,2,5,19,14,10,22,1,4,15,0,3,16,23,13,7,11,24,26,25}, // permutation 6
{23,4,22,5,19,26,16,24,20,25,6,15,8,9,7,10,0,12,18,14,21,11,1,2,3,13,17}, // permutation 7
{2,13,10,4,0,9,1,11,22,25,26,21,7,19,18,15,14,20,17,3,24,5,8,16,23,12,6}, // permutation 8
{10,3,1,23,26,9,12,13,6,21,7,11,19,14,5,16,8,2,0,15,18,25,17,20,4,22,24} // permutation 9
};

// Seed: 634913704

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int32_t, 16) g_2;
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7;
    int32_t g_8;
    volatile int32_t *g_14[2][4];
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
uint32_t  func_1(struct S0 * p_17);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_17->g_2 p_17->g_8 p_17->g_comm_values
 * writes: p_17->g_2 p_17->g_8 p_17->g_14
 */
uint32_t  func_1(struct S0 * p_17)
{ /* block id: 4 */
    int8_t l_15[5][4][3] = {{{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L}},{{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L}},{{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L}},{{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L}},{{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L},{0x4CL,0x7CL,0x57L}}};
    int32_t *l_16 = &p_17->g_8;
    int i, j, k;
    for (p_17->g_2.s9 = (-3); (p_17->g_2.s9 == 9); p_17->g_2.s9 = safe_add_func_uint64_t_u_u(p_17->g_2.s9, 1))
    { /* block id: 7 */
        for (p_17->g_8 = 0; (p_17->g_8 >= 15); p_17->g_8 = safe_add_func_uint8_t_u_u(p_17->g_8, 6))
        { /* block id: 10 */
            volatile int32_t **l_11 = (void*)0;
            volatile int32_t *l_13 = &p_17->g_7;
            volatile int32_t **l_12[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            p_17->g_14[1][0] = &p_17->g_6;
            return p_17->g_2.se;
        }
    }
    (*l_16) = l_15[4][3][0];
    return p_17->g_comm_values[p_17->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_comm_values[i] = 1;
    struct S0 c_18;
    struct S0* p_17 = &c_18;
    struct S0 c_19 = {
        (VECTOR(int32_t, 16))(0x07DF2F4AL, (VECTOR(int32_t, 4))(0x07DF2F4AL, (VECTOR(int32_t, 2))(0x07DF2F4AL, 0x08F8256AL), 0x08F8256AL), 0x08F8256AL, 0x07DF2F4AL, 0x08F8256AL, (VECTOR(int32_t, 2))(0x07DF2F4AL, 0x08F8256AL), (VECTOR(int32_t, 2))(0x07DF2F4AL, 0x08F8256AL), 0x07DF2F4AL, 0x08F8256AL, 0x07DF2F4AL, 0x08F8256AL), // p_17->g_2
        1L, // p_17->g_5
        1L, // p_17->g_6
        0L, // p_17->g_7
        0x1AC48889L, // p_17->g_8
        {{&p_17->g_7,&p_17->g_7,&p_17->g_7,&p_17->g_7},{&p_17->g_7,&p_17->g_7,&p_17->g_7,&p_17->g_7}}, // p_17->g_14
        0, // p_17->v_collective
        sequence_input[get_global_id(0)], // p_17->global_0_offset
        sequence_input[get_global_id(1)], // p_17->global_1_offset
        sequence_input[get_global_id(2)], // p_17->global_2_offset
        sequence_input[get_local_id(0)], // p_17->local_0_offset
        sequence_input[get_local_id(1)], // p_17->local_1_offset
        sequence_input[get_local_id(2)], // p_17->local_2_offset
        sequence_input[get_group_id(0)], // p_17->group_0_offset
        sequence_input[get_group_id(1)], // p_17->group_1_offset
        sequence_input[get_group_id(2)], // p_17->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 27)), permutations[0][get_linear_local_id()])), // p_17->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_18 = c_19;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_17);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_17->g_2.s0, "p_17->g_2.s0", print_hash_value);
    transparent_crc(p_17->g_2.s1, "p_17->g_2.s1", print_hash_value);
    transparent_crc(p_17->g_2.s2, "p_17->g_2.s2", print_hash_value);
    transparent_crc(p_17->g_2.s3, "p_17->g_2.s3", print_hash_value);
    transparent_crc(p_17->g_2.s4, "p_17->g_2.s4", print_hash_value);
    transparent_crc(p_17->g_2.s5, "p_17->g_2.s5", print_hash_value);
    transparent_crc(p_17->g_2.s6, "p_17->g_2.s6", print_hash_value);
    transparent_crc(p_17->g_2.s7, "p_17->g_2.s7", print_hash_value);
    transparent_crc(p_17->g_2.s8, "p_17->g_2.s8", print_hash_value);
    transparent_crc(p_17->g_2.s9, "p_17->g_2.s9", print_hash_value);
    transparent_crc(p_17->g_2.sa, "p_17->g_2.sa", print_hash_value);
    transparent_crc(p_17->g_2.sb, "p_17->g_2.sb", print_hash_value);
    transparent_crc(p_17->g_2.sc, "p_17->g_2.sc", print_hash_value);
    transparent_crc(p_17->g_2.sd, "p_17->g_2.sd", print_hash_value);
    transparent_crc(p_17->g_2.se, "p_17->g_2.se", print_hash_value);
    transparent_crc(p_17->g_2.sf, "p_17->g_2.sf", print_hash_value);
    transparent_crc(p_17->g_5, "p_17->g_5", print_hash_value);
    transparent_crc(p_17->g_6, "p_17->g_6", print_hash_value);
    transparent_crc(p_17->g_7, "p_17->g_7", print_hash_value);
    transparent_crc(p_17->g_8, "p_17->g_8", print_hash_value);
    transparent_crc(p_17->v_collective, "p_17->v_collective", print_hash_value);
    transparent_crc(p_17->l_comm_values[get_linear_local_id()], "p_17->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_17->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()], "p_17->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
