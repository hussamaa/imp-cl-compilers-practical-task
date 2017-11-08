// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,6,22 -l 1,3,22
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

__constant uint32_t permutations[10][66] = {
{5,58,17,54,11,18,39,21,41,8,51,36,46,60,43,50,27,38,30,49,14,53,4,3,45,37,57,20,64,6,28,34,55,25,24,15,63,19,16,31,23,59,12,52,56,26,10,9,65,35,29,47,42,62,44,48,13,22,0,1,7,33,61,32,40,2}, // permutation 0
{27,17,60,59,6,26,24,12,33,30,4,45,43,10,39,37,46,2,52,15,58,5,51,20,7,38,64,34,13,55,25,56,31,61,48,0,11,40,36,29,53,18,44,62,28,49,19,47,9,57,50,32,14,63,1,22,54,21,3,8,23,35,16,42,65,41}, // permutation 1
{25,20,12,52,21,44,4,34,26,60,22,24,57,0,23,39,14,49,9,62,55,48,15,42,45,19,3,29,7,63,28,43,2,61,31,16,54,5,53,6,38,36,33,32,10,65,27,18,51,30,47,13,35,59,64,40,17,11,46,37,58,41,50,56,8,1}, // permutation 2
{35,29,53,22,52,58,0,8,26,1,32,19,51,40,57,50,27,62,54,28,21,41,55,23,36,2,49,17,10,16,34,3,56,7,15,61,44,24,45,47,33,65,14,48,59,4,39,43,63,11,31,38,30,5,6,9,25,46,37,12,64,42,18,13,60,20}, // permutation 3
{36,19,57,26,24,13,27,51,59,40,3,61,39,2,55,42,45,1,23,48,47,41,65,50,64,0,4,33,62,56,10,30,21,11,32,9,8,16,34,20,43,18,29,25,37,63,17,5,35,54,53,60,14,49,22,28,7,12,6,44,46,38,58,15,31,52}, // permutation 4
{49,42,26,30,56,22,14,16,39,32,21,52,6,63,19,55,9,58,17,64,44,25,5,10,3,37,35,33,24,51,53,1,2,15,41,40,54,4,62,13,31,57,43,12,28,11,7,18,46,48,0,23,47,60,27,59,65,36,50,8,45,61,20,34,38,29}, // permutation 5
{59,41,7,52,3,16,62,40,9,2,25,48,39,29,45,15,56,11,57,19,21,17,26,6,44,42,10,20,24,58,37,60,34,22,28,61,38,65,31,4,51,30,36,35,13,12,46,8,63,49,55,27,1,5,50,43,23,54,47,14,18,53,64,0,32,33}, // permutation 6
{9,31,63,46,21,38,5,42,44,3,12,14,26,59,43,61,41,19,7,51,1,15,36,4,37,56,17,6,29,49,60,40,33,16,50,32,18,54,13,8,23,34,64,55,25,62,58,48,30,27,35,2,22,53,47,65,28,45,39,20,57,52,0,10,11,24}, // permutation 7
{3,65,33,5,32,50,30,48,11,46,60,42,22,43,31,2,29,0,59,8,40,45,19,18,52,26,37,28,9,4,63,53,7,64,44,38,49,54,34,39,17,10,12,16,13,15,35,23,20,56,21,1,61,47,36,14,55,58,6,62,57,51,27,41,24,25}, // permutation 8
{1,25,49,56,48,36,12,55,18,61,46,33,31,4,52,27,39,26,8,14,20,5,50,10,45,35,11,64,47,9,44,38,21,51,58,3,24,65,15,6,2,22,30,32,62,0,57,13,43,53,19,41,54,42,29,7,23,60,28,17,34,40,63,37,59,16} // permutation 9
};

// Seed: 4022776993

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   uint32_t  f4;
   uint8_t  f5;
   volatile int32_t  f6;
};

struct S3 {
    volatile int32_t g_3;
    volatile int32_t *g_2;
    struct S0 g_5;
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
struct S0  func_1(struct S3 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_2 p_6->g_5
 * writes: p_6->g_2
 */
struct S0  func_1(struct S3 * p_6)
{ /* block id: 4 */
    volatile int32_t **l_4[6][4][3] = {{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}},{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}},{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}},{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}},{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}},{{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2},{&p_6->g_2,(void*)0,&p_6->g_2}}};
    int i, j, k;
    p_6->g_2 = p_6->g_2;
    return p_6->g_5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_comm_values[i] = 1;
    struct S3 c_7;
    struct S3* p_6 = &c_7;
    struct S3 c_8 = {
        0x28A062B0L, // p_6->g_3
        &p_6->g_3, // p_6->g_2
        {18446744073709551609UL,4294967288UL,4294967295UL,3L,8UL,250UL,0x33356370L}, // p_6->g_5
        0, // p_6->v_collective
        sequence_input[get_global_id(0)], // p_6->global_0_offset
        sequence_input[get_global_id(1)], // p_6->global_1_offset
        sequence_input[get_global_id(2)], // p_6->global_2_offset
        sequence_input[get_local_id(0)], // p_6->local_0_offset
        sequence_input[get_local_id(1)], // p_6->local_1_offset
        sequence_input[get_local_id(2)], // p_6->local_2_offset
        sequence_input[get_group_id(0)], // p_6->group_0_offset
        sequence_input[get_group_id(1)], // p_6->group_1_offset
        sequence_input[get_group_id(2)], // p_6->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[0][get_linear_local_id()])), // p_6->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_7 = c_8;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_6);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_6->g_3, "p_6->g_3", print_hash_value);
    transparent_crc(p_6->g_5.f0, "p_6->g_5.f0", print_hash_value);
    transparent_crc(p_6->g_5.f1, "p_6->g_5.f1", print_hash_value);
    transparent_crc(p_6->g_5.f2, "p_6->g_5.f2", print_hash_value);
    transparent_crc(p_6->g_5.f3, "p_6->g_5.f3", print_hash_value);
    transparent_crc(p_6->g_5.f4, "p_6->g_5.f4", print_hash_value);
    transparent_crc(p_6->g_5.f5, "p_6->g_5.f5", print_hash_value);
    transparent_crc(p_6->g_5.f6, "p_6->g_5.f6", print_hash_value);
    transparent_crc(p_6->v_collective, "p_6->v_collective", print_hash_value);
    transparent_crc(p_6->l_comm_values[get_linear_local_id()], "p_6->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
