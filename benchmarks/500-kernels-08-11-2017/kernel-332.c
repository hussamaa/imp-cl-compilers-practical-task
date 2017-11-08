// --atomics 78 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,54,2 -l 2,18,2
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
{55,6,67,4,61,31,58,23,19,49,7,50,59,42,48,44,45,53,62,38,65,14,60,63,68,2,43,30,25,12,9,29,18,39,40,10,28,57,33,35,41,1,69,16,11,0,46,27,66,22,71,54,56,32,15,51,20,24,47,21,13,5,26,37,70,3,36,17,64,52,8,34}, // permutation 0
{4,58,30,13,24,12,2,57,28,43,34,11,7,16,5,69,10,35,47,0,46,66,71,59,41,44,15,32,19,29,64,42,33,23,20,53,68,55,14,8,17,27,40,49,60,22,25,52,50,70,63,61,31,56,51,54,45,1,65,67,21,18,9,26,62,3,37,6,38,48,36,39}, // permutation 1
{25,63,28,52,68,12,0,9,32,55,10,20,57,27,8,37,33,35,66,14,30,61,26,42,71,47,58,23,62,45,53,69,44,13,60,11,4,65,7,22,54,41,56,39,3,21,17,46,24,5,64,67,1,40,48,19,18,70,43,34,51,15,36,2,6,29,16,49,31,59,50,38}, // permutation 2
{35,37,18,29,39,2,26,10,64,51,45,52,8,55,33,11,0,17,67,12,69,43,40,20,65,7,66,32,58,68,16,6,28,62,19,21,57,5,42,3,24,60,53,56,59,47,61,13,9,34,41,22,31,63,23,36,38,1,44,46,4,30,70,50,14,49,25,71,48,27,15,54}, // permutation 3
{48,59,41,29,31,16,56,42,7,20,25,63,14,23,45,19,6,61,46,68,64,40,62,12,71,60,44,5,65,67,33,36,22,10,2,32,47,27,15,9,3,0,53,37,58,21,50,34,13,55,28,35,26,30,49,57,1,69,54,4,24,52,43,66,11,17,39,70,18,8,51,38}, // permutation 4
{23,35,26,71,56,60,69,19,50,3,12,61,65,32,30,54,24,46,59,28,37,17,29,45,62,47,44,57,39,27,22,14,51,18,36,68,31,52,10,20,58,70,55,5,9,63,1,21,42,16,2,6,67,4,0,48,33,41,66,7,34,8,40,11,38,13,25,64,43,53,15,49}, // permutation 5
{4,56,53,59,9,26,63,8,51,5,54,40,67,16,47,65,35,20,34,14,21,64,60,12,7,6,46,31,62,32,23,18,70,1,49,48,44,42,55,38,39,50,17,28,58,10,68,13,11,37,71,36,45,61,57,25,66,43,0,15,29,52,19,33,3,41,27,69,2,24,22,30}, // permutation 6
{40,61,56,69,18,31,71,51,58,52,20,59,63,9,32,5,38,28,35,11,22,42,57,62,55,45,12,26,50,68,0,36,3,67,8,46,16,2,43,30,7,60,23,6,34,39,49,21,47,17,19,37,25,70,44,53,1,13,33,24,54,65,15,10,14,66,41,29,48,4,64,27}, // permutation 7
{33,62,22,7,32,43,40,55,70,46,8,24,23,3,34,61,25,44,9,12,67,50,35,63,21,6,16,49,13,19,65,54,52,28,42,66,26,58,5,1,64,56,41,11,36,14,2,17,38,15,39,47,45,27,10,51,30,60,48,29,31,69,68,0,71,4,57,18,53,59,37,20}, // permutation 8
{61,69,31,32,18,35,1,62,4,33,5,13,28,38,26,60,71,6,44,20,59,58,12,15,68,43,67,29,17,34,30,10,16,57,66,51,27,19,70,40,25,7,46,39,23,37,22,55,41,50,36,42,0,48,56,21,65,64,63,3,53,14,52,49,9,8,47,11,2,45,24,54} // permutation 9
};

// Seed: 2952889314

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_3;
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
int64_t  func_1(struct S1 * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_4->l_comm_values
 * writes:
 */
int64_t  func_1(struct S1 * p_4)
{ /* block id: 4 */
    int32_t *l_2 = &p_4->g_3;
    l_2 = l_2;
    return p_4->l_comm_values[(safe_mod_func_uint32_t_u_u(p_4->tid, 72))];
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
    struct S1 c_5;
    struct S1* p_4 = &c_5;
    struct S1 c_6 = {
        1L, // p_4->g_3
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[0][get_linear_local_id()])), // p_4->tid
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
    transparent_crc(p_4->g_3, "p_4->g_3", print_hash_value);
    transparent_crc(p_4->v_collective, "p_4->v_collective", print_hash_value);
    transparent_crc(p_4->l_comm_values[get_linear_local_id()], "p_4->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_4->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()], "p_4->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
