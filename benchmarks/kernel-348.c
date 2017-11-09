// --atomics 96 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,29,5 -l 55,1,1
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

__constant uint32_t permutations[10][55] = {
{26,51,25,21,41,14,6,38,27,22,16,45,52,47,42,28,53,12,18,9,7,33,35,29,11,36,13,48,32,19,1,34,15,4,0,37,23,49,46,30,43,10,44,8,54,50,2,40,20,17,3,5,24,39,31}, // permutation 0
{37,31,7,18,20,49,39,52,5,21,2,17,54,6,32,24,47,0,35,43,14,19,48,38,33,16,15,22,9,23,3,11,41,25,50,8,46,51,45,53,10,30,12,36,1,4,42,13,27,28,26,29,40,34,44}, // permutation 1
{24,22,31,10,54,13,8,18,21,15,53,6,12,25,50,49,0,17,20,51,41,27,37,30,2,46,43,23,48,35,40,1,16,39,29,7,44,42,14,4,38,5,33,26,52,47,19,36,28,9,11,45,3,34,32}, // permutation 2
{37,16,23,39,53,36,1,13,25,17,31,30,7,48,19,15,0,21,32,40,29,6,24,22,43,28,44,10,52,35,47,9,2,46,49,4,5,45,34,33,26,50,54,42,8,11,38,14,18,51,27,41,3,20,12}, // permutation 3
{22,28,33,45,2,36,26,44,43,30,7,40,20,21,48,13,12,9,3,39,50,19,46,25,14,15,42,34,23,4,35,8,31,17,29,52,51,5,49,11,27,32,0,1,41,18,37,38,16,54,10,47,53,6,24}, // permutation 4
{51,12,25,20,17,33,52,39,43,14,11,32,2,7,21,28,45,37,3,22,23,34,31,8,4,18,30,38,0,19,44,50,35,54,36,49,40,5,15,1,29,46,42,27,13,48,16,24,9,41,10,26,47,6,53}, // permutation 5
{45,52,37,15,16,6,30,44,3,41,9,35,47,23,13,36,38,19,12,1,50,22,29,21,51,31,7,20,34,48,53,43,18,10,17,8,0,54,5,39,28,26,25,2,33,40,32,11,24,4,14,49,27,46,42}, // permutation 6
{35,7,32,44,39,45,52,8,47,34,24,15,9,37,53,16,25,41,3,13,6,21,19,33,10,38,2,28,31,51,17,43,12,14,4,20,46,54,49,27,1,30,50,11,26,29,48,18,22,23,0,42,36,5,40}, // permutation 7
{16,45,26,22,11,38,27,40,52,21,8,44,39,18,2,34,51,53,30,3,9,24,17,23,28,36,10,25,54,29,47,46,32,49,5,4,31,43,19,12,15,0,1,33,42,7,48,35,14,13,6,50,37,41,20}, // permutation 8
{9,16,2,10,53,33,51,7,6,21,48,44,13,38,46,8,0,49,30,22,40,14,23,4,32,37,15,28,47,27,50,1,34,19,54,5,25,18,31,12,11,17,45,36,20,52,39,41,3,24,29,42,43,26,35} // permutation 9
};

// Seed: 2924750192

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint16_t g_3;
    int32_t g_5;
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
uint8_t  func_1(struct S0 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_3 p_7->l_comm_values
 * writes: p_7->g_3 p_7->g_5
 */
uint8_t  func_1(struct S0 * p_7)
{ /* block id: 4 */
    uint8_t l_2 = 0UL;
    int32_t *l_4 = &p_7->g_5;
    uint64_t l_6 = 18446744073709551611UL;
    p_7->g_3 ^= l_2;
    (*l_4) = p_7->l_comm_values[(safe_mod_func_uint32_t_u_u(p_7->tid, 55))];
    return l_6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S0 c_8;
    struct S0* p_7 = &c_8;
    struct S0 c_9 = {
        0x9AEDL, // p_7->g_3
        0x72226312L, // p_7->g_5
        0, // p_7->v_collective
        sequence_input[get_global_id(0)], // p_7->global_0_offset
        sequence_input[get_global_id(1)], // p_7->global_1_offset
        sequence_input[get_global_id(2)], // p_7->global_2_offset
        sequence_input[get_local_id(0)], // p_7->local_0_offset
        sequence_input[get_local_id(1)], // p_7->local_1_offset
        sequence_input[get_local_id(2)], // p_7->local_2_offset
        sequence_input[get_group_id(0)], // p_7->group_0_offset
        sequence_input[get_group_id(1)], // p_7->group_1_offset
        sequence_input[get_group_id(2)], // p_7->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_7->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_8 = c_9;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_7->g_3, "p_7->g_3", print_hash_value);
    transparent_crc(p_7->g_5, "p_7->g_5", print_hash_value);
    transparent_crc(p_7->v_collective, "p_7->v_collective", print_hash_value);
    transparent_crc(p_7->l_comm_values[get_linear_local_id()], "p_7->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_7->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_7->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
