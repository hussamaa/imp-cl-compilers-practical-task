// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,10,8 -l 2,10,4
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

__constant uint32_t permutations[10][80] = {
{53,9,56,78,4,10,68,29,79,27,64,35,24,19,73,58,2,55,63,17,71,23,61,57,5,3,25,0,8,46,59,76,45,66,31,32,67,13,26,41,48,11,30,52,20,21,43,33,28,40,34,44,60,1,47,75,6,65,22,54,69,36,77,51,16,14,7,72,12,50,74,49,38,18,37,62,42,70,15,39}, // permutation 0
{9,29,22,11,43,8,64,16,58,49,26,72,34,79,63,10,24,70,18,40,61,54,25,65,3,35,67,47,38,0,68,56,71,7,32,66,45,33,69,51,53,44,41,59,12,23,5,37,2,48,19,78,55,27,6,42,62,57,31,60,74,30,39,52,4,1,76,75,14,15,20,50,46,17,77,36,73,21,28,13}, // permutation 1
{38,51,55,78,12,43,24,27,6,69,72,64,74,39,28,7,22,44,63,60,47,4,49,79,45,42,13,25,33,36,30,10,15,14,58,50,17,73,56,75,26,68,76,0,48,18,19,2,53,67,46,20,71,65,8,5,23,52,41,31,9,29,57,70,54,34,77,40,32,16,61,37,59,66,62,11,3,21,1,35}, // permutation 2
{72,39,65,66,1,40,43,33,74,27,51,23,12,49,11,8,15,57,36,79,50,16,75,18,13,67,53,61,42,24,32,58,52,5,10,9,7,71,69,70,46,4,59,63,35,64,41,17,47,78,37,14,56,19,45,44,62,30,0,68,54,25,20,76,3,22,73,21,55,29,60,26,2,28,77,34,38,31,48,6}, // permutation 3
{18,1,50,43,71,69,4,3,61,54,31,25,70,40,15,36,58,65,41,63,78,23,29,73,32,75,27,7,0,11,49,52,51,10,64,60,17,67,76,30,24,57,48,19,44,8,14,46,21,74,20,38,47,55,6,79,37,45,34,62,22,12,35,39,28,9,53,13,59,5,72,16,77,33,26,66,68,56,2,42}, // permutation 4
{54,46,0,18,66,14,8,58,59,1,17,35,11,6,44,19,24,78,16,57,56,37,3,65,40,15,39,36,76,73,53,62,79,26,51,4,41,68,74,12,31,22,20,45,50,42,10,63,69,72,13,61,9,30,28,43,71,49,60,38,33,70,27,64,67,48,47,75,25,7,52,21,5,77,29,55,34,32,23,2}, // permutation 5
{29,45,11,63,38,14,10,32,12,60,30,7,47,56,49,61,28,41,23,66,35,67,2,22,34,36,48,4,77,26,6,19,27,51,68,24,59,5,64,37,65,57,58,9,40,78,69,3,44,21,76,46,15,25,62,71,42,31,74,13,55,20,73,33,70,79,53,39,1,72,75,43,16,50,8,18,52,17,0,54}, // permutation 6
{45,58,22,59,62,24,19,57,15,30,29,28,66,1,71,72,75,69,12,38,68,0,65,49,23,4,31,20,13,55,48,61,17,63,35,70,46,6,40,37,7,9,51,18,67,39,47,11,64,16,2,36,73,52,14,56,34,32,78,10,5,26,53,60,44,8,76,41,3,42,25,77,74,21,43,33,79,54,50,27}, // permutation 7
{44,31,12,62,58,35,16,52,45,72,57,18,65,23,24,5,13,42,2,68,21,38,63,17,6,41,34,37,71,74,60,53,27,10,26,20,0,36,25,79,40,29,75,19,28,1,49,76,51,61,30,54,66,9,7,43,46,56,4,47,50,48,55,8,73,77,3,67,22,33,11,59,39,64,15,70,69,14,32,78}, // permutation 8
{34,39,56,43,75,62,29,35,25,40,47,8,71,26,49,79,58,70,20,14,11,66,69,33,24,37,21,2,76,52,59,60,9,13,32,44,27,41,42,0,3,28,16,5,68,48,55,36,50,18,54,65,38,1,77,78,10,64,72,61,53,4,74,23,57,46,7,19,51,17,12,6,45,22,15,30,63,31,67,73} // permutation 9
};

// Seed: 2406579570

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
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
uint64_t  func_1(struct S1 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_5
 * writes: p_6->g_5
 */
uint64_t  func_1(struct S1 * p_6)
{ /* block id: 4 */
    VECTOR(int32_t, 8) l_2 = (VECTOR(int32_t, 8))(0x325B3B9DL, (VECTOR(int32_t, 4))(0x325B3B9DL, (VECTOR(int32_t, 2))(0x325B3B9DL, 0x5073FF82L), 0x5073FF82L), 0x5073FF82L, 0x325B3B9DL, 0x5073FF82L);
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &p_6->g_5;
    int i;
    (*l_4) ^= ((VECTOR(int32_t, 4))(l_2.s7740)).w;
    return p_6->g_5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_comm_values[i] = 1;
    struct S1 c_7;
    struct S1* p_6 = &c_7;
    struct S1 c_8 = {
        4L, // p_6->g_5
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_5, "p_6->g_5", print_hash_value);
    transparent_crc(p_6->v_collective, "p_6->v_collective", print_hash_value);
    transparent_crc(p_6->l_comm_values[get_linear_local_id()], "p_6->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
