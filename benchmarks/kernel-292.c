// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 35,21,1 -l 35,1,1
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

__constant uint32_t permutations[10][35] = {
{10,22,25,13,26,8,32,1,23,2,14,30,15,21,3,5,33,4,29,20,28,34,27,18,9,12,6,17,19,7,16,11,0,24,31}, // permutation 0
{27,0,12,11,5,6,20,3,25,15,13,24,30,9,4,19,18,23,2,31,28,1,8,21,22,16,26,14,29,34,32,10,33,7,17}, // permutation 1
{33,0,27,10,28,1,15,5,13,3,4,26,12,21,11,14,20,34,30,7,9,8,23,24,19,2,6,17,18,25,16,22,31,29,32}, // permutation 2
{9,8,21,33,25,13,24,22,34,5,0,30,12,7,23,17,18,16,11,4,29,3,32,2,27,20,19,1,28,15,10,6,31,26,14}, // permutation 3
{10,15,7,32,11,8,13,21,24,26,31,25,28,1,6,0,14,34,22,9,3,5,33,19,20,18,23,2,27,29,16,17,4,30,12}, // permutation 4
{22,20,1,6,3,9,25,17,14,33,10,24,7,27,21,4,12,5,2,34,13,8,16,19,15,28,18,23,30,11,26,32,29,31,0}, // permutation 5
{21,7,30,26,16,10,29,3,22,4,5,32,1,24,14,17,6,31,33,20,23,8,34,0,2,13,27,19,11,12,25,9,18,28,15}, // permutation 6
{11,21,2,22,14,8,7,5,26,17,15,34,3,10,20,29,1,30,32,23,27,25,24,0,9,19,4,31,33,13,28,18,16,12,6}, // permutation 7
{9,6,12,19,30,14,34,22,3,26,5,10,24,2,23,27,11,18,20,7,29,8,4,1,17,13,32,33,15,31,16,25,28,21,0}, // permutation 8
{8,7,11,10,18,28,24,15,17,22,21,16,25,20,34,23,26,1,33,32,31,19,3,2,4,30,14,27,9,0,12,5,13,6,29} // permutation 9
};

// Seed: 3407644232

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile int64_t  f1;
   uint64_t  f2;
   volatile int64_t  f3;
   uint64_t  f4;
};

struct S1 {
   volatile int32_t  f0;
   int64_t  f1;
   int64_t  f2;
   volatile uint32_t  f3;
   uint16_t  f4;
};

struct S2 {
    struct S1 g_5;
    struct S1 *g_4;
    struct S1 ** volatile g_3[9];
    struct S1 ** volatile g_6;
    struct S0 g_7;
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
struct S0  func_1(struct S2 * p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_8->g_6 p_8->g_7
 * writes: p_8->g_4
 */
struct S0  func_1(struct S2 * p_8)
{ /* block id: 4 */
    struct S1 *l_2 = (void*)0;
    (*p_8->g_6) = l_2;
    return p_8->g_7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_comm_values[i] = 1;
    struct S2 c_9;
    struct S2* p_8 = &c_9;
    struct S2 c_10 = {
        {-2L,0x16B779C63C407858L,-2L,0x5B054DBBL,8UL}, // p_8->g_5
        &p_8->g_5, // p_8->g_4
        {&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4,&p_8->g_4}, // p_8->g_3
        &p_8->g_4, // p_8->g_6
        {0x5714FFD8L,0x43836745799333C7L,18446744073709551610UL,0x5E495761BE360DE5L,0x41311E2DB80EBBD4L}, // p_8->g_7
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 35)), permutations[0][get_linear_local_id()])), // p_8->tid
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
    transparent_crc(p_8->g_5.f0, "p_8->g_5.f0", print_hash_value);
    transparent_crc(p_8->g_5.f1, "p_8->g_5.f1", print_hash_value);
    transparent_crc(p_8->g_5.f2, "p_8->g_5.f2", print_hash_value);
    transparent_crc(p_8->g_5.f3, "p_8->g_5.f3", print_hash_value);
    transparent_crc(p_8->g_5.f4, "p_8->g_5.f4", print_hash_value);
    transparent_crc(p_8->g_7.f0, "p_8->g_7.f0", print_hash_value);
    transparent_crc(p_8->g_7.f1, "p_8->g_7.f1", print_hash_value);
    transparent_crc(p_8->g_7.f2, "p_8->g_7.f2", print_hash_value);
    transparent_crc(p_8->g_7.f3, "p_8->g_7.f3", print_hash_value);
    transparent_crc(p_8->g_7.f4, "p_8->g_7.f4", print_hash_value);
    transparent_crc(p_8->v_collective, "p_8->v_collective", print_hash_value);
    transparent_crc(p_8->l_comm_values[get_linear_local_id()], "p_8->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_8->g_comm_values[get_linear_group_id() * 35 + get_linear_local_id()], "p_8->g_comm_values[get_linear_group_id() * 35 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
