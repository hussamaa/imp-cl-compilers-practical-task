// --atomics 46 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 16,34,16 -l 1,34,2
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

__constant uint32_t permutations[10][68] = {
{45,22,0,9,49,63,64,67,60,65,54,47,1,29,31,43,39,16,8,35,5,6,48,38,7,44,13,32,34,62,61,37,42,18,20,14,23,30,53,11,21,10,52,4,19,15,56,2,28,51,26,41,24,58,55,46,50,36,33,27,59,66,12,25,57,17,3,40}, // permutation 0
{47,12,45,31,46,62,24,52,36,0,39,28,8,66,58,23,55,67,25,3,42,57,19,32,21,6,53,2,33,51,38,5,16,17,11,40,44,60,18,63,20,34,48,49,56,9,50,15,14,35,22,4,54,43,30,7,13,27,37,61,64,41,10,26,59,65,29,1}, // permutation 1
{66,62,54,51,33,32,45,15,7,31,18,20,16,58,61,39,21,24,30,2,67,36,38,14,3,57,34,4,25,43,42,19,40,49,23,37,60,10,1,65,29,11,59,12,8,17,55,56,5,35,26,44,9,13,22,63,0,47,28,27,46,50,53,64,6,48,52,41}, // permutation 2
{1,11,38,16,33,60,34,10,46,35,39,64,3,20,55,9,13,8,17,7,36,2,49,52,21,6,25,41,65,61,28,5,37,47,12,4,62,15,30,27,40,19,18,45,54,67,22,57,29,53,58,44,0,31,26,43,32,14,56,48,24,42,50,66,51,23,63,59}, // permutation 3
{25,41,4,42,66,60,57,63,46,13,36,30,5,31,6,1,58,40,19,65,39,33,3,22,49,56,16,9,59,44,62,54,8,61,35,28,7,17,26,14,12,50,45,47,52,51,64,11,10,37,34,2,21,0,53,20,18,23,43,55,38,48,15,27,24,32,29,67}, // permutation 4
{3,40,52,28,30,19,60,65,42,10,31,51,49,5,34,8,12,22,38,44,66,59,54,41,37,14,20,46,2,6,4,67,15,61,53,50,63,57,43,32,36,33,27,35,58,29,24,17,45,48,26,7,55,47,21,23,0,64,39,16,18,1,11,13,62,25,9,56}, // permutation 5
{62,67,5,17,31,58,27,37,11,29,19,36,26,13,25,42,66,10,0,44,9,3,61,55,34,63,47,49,18,52,15,22,59,1,38,30,33,35,64,2,46,51,65,12,7,40,41,21,56,8,32,53,16,39,4,43,24,23,57,48,54,14,45,20,60,6,28,50}, // permutation 6
{22,0,23,11,53,27,50,46,60,39,3,66,29,44,59,13,37,20,7,33,15,56,32,4,8,54,47,6,28,55,45,42,35,48,61,30,64,26,14,25,18,58,51,21,67,1,65,12,43,24,2,31,10,40,16,5,17,36,52,41,19,38,9,63,57,62,49,34}, // permutation 7
{1,62,36,63,7,18,43,4,26,34,64,17,52,47,6,12,3,2,35,39,20,5,58,67,13,59,44,41,22,66,9,53,24,48,28,15,29,55,21,50,51,37,32,60,38,0,8,10,19,40,61,25,65,16,46,31,11,42,14,23,49,33,30,27,54,45,57,56}, // permutation 8
{10,31,53,18,27,58,44,6,33,41,4,56,38,11,3,36,57,51,60,37,16,29,46,2,14,17,25,52,54,5,45,39,59,64,21,40,35,8,62,48,67,43,15,23,9,55,61,0,32,24,28,66,49,26,65,20,13,30,1,50,34,63,42,47,12,7,22,19} // permutation 9
};

// Seed: 1866323610

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int8_t  f1;
};

struct S1 {
   volatile uint32_t  f0;
   struct S0  f1;
   volatile uint64_t  f2;
   struct S0  f3;
   uint64_t  f4;
};

struct S2 {
    uint64_t g_2;
    struct S1 g_3;
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
struct S1  func_1(struct S2 * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_4->l_comm_values p_4->g_3
 * writes: p_4->g_2
 */
struct S1  func_1(struct S2 * p_4)
{ /* block id: 4 */
    p_4->g_2 = p_4->l_comm_values[(safe_mod_func_uint32_t_u_u(p_4->tid, 68))];
    return p_4->g_3;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[68];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 68; i++)
            l_comm_values[i] = 1;
    struct S2 c_5;
    struct S2* p_4 = &c_5;
    struct S2 c_6 = {
        18446744073709551608UL, // p_4->g_2
        {8UL,{0x349D585EL,0x06L},0UL,{1L,6L},0xF2FDAD5A519D8147L}, // p_4->g_3
        0, // p_4->v_collective
        sequence_input[get_global_id(0)], // p_4->global_0_offset
        sequence_input[get_global_id(1)], // p_4->global_1_offset
        sequence_input[get_global_id(2)], // p_4->global_2_offset
        sequence_input[get_local_id(0)], // p_4->local_0_offset
        sequence_input[get_local_id(1)], // p_4->local_1_offset
        sequence_input[get_local_id(2)], // p_4->local_2_offset
        sequence_input[get_group_id(0)], // p_4->group_0_offset
        sequence_input[get_group_id(1)], // p_4->group_1_offset
        sequence_input[get_group_id(2)], // p_4->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 68)), permutations[0][get_linear_local_id()])), // p_4->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_5 = c_6;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_4);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_4->g_2, "p_4->g_2", print_hash_value);
    transparent_crc(p_4->g_3.f0, "p_4->g_3.f0", print_hash_value);
    transparent_crc(p_4->g_3.f1.f0, "p_4->g_3.f1.f0", print_hash_value);
    transparent_crc(p_4->g_3.f1.f1, "p_4->g_3.f1.f1", print_hash_value);
    transparent_crc(p_4->g_3.f2, "p_4->g_3.f2", print_hash_value);
    transparent_crc(p_4->g_3.f3.f0, "p_4->g_3.f3.f0", print_hash_value);
    transparent_crc(p_4->g_3.f3.f1, "p_4->g_3.f3.f1", print_hash_value);
    transparent_crc(p_4->g_3.f4, "p_4->g_3.f4", print_hash_value);
    transparent_crc(p_4->v_collective, "p_4->v_collective", print_hash_value);
    transparent_crc(p_4->l_comm_values[get_linear_local_id()], "p_4->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_4->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()], "p_4->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
