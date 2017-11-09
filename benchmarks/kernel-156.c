// --atomics 68 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,84,2 -l 1,42,2
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

__constant uint32_t permutations[10][84] = {
{72,66,67,37,68,47,18,14,35,11,52,62,74,40,60,53,77,20,81,61,30,9,32,4,42,55,76,0,65,58,12,45,29,19,28,5,21,54,41,63,2,57,59,17,36,78,44,83,27,64,34,50,33,51,71,15,80,7,22,38,23,48,43,79,31,8,75,10,82,24,25,56,46,73,3,16,49,6,39,13,1,70,69,26}, // permutation 0
{41,56,77,73,18,52,20,74,5,67,39,25,9,46,32,70,66,35,79,21,29,63,65,49,11,48,19,44,80,60,12,1,47,50,42,24,22,51,14,55,57,26,64,83,75,33,72,62,17,68,61,10,15,59,81,8,13,31,38,53,78,7,69,54,40,3,30,82,4,2,16,36,23,6,43,58,37,71,0,45,28,34,27,76}, // permutation 1
{16,56,43,50,53,27,40,20,81,48,11,68,83,37,44,71,70,0,10,30,26,61,55,49,39,66,74,28,47,19,5,29,18,7,52,79,32,13,1,45,42,8,63,78,51,54,14,17,35,82,62,65,6,33,15,77,2,57,22,23,73,12,58,72,67,80,24,3,25,36,21,9,76,41,75,34,69,64,4,46,60,59,31,38}, // permutation 2
{76,59,82,80,64,1,47,77,33,72,12,55,29,54,26,58,9,28,71,11,16,24,17,23,56,31,7,39,45,67,43,27,79,30,66,81,74,4,49,70,0,83,61,46,53,60,22,62,73,65,8,36,78,34,57,50,42,68,2,48,6,37,19,52,44,21,10,3,69,40,38,13,5,15,41,51,14,20,35,18,63,32,25,75}, // permutation 3
{72,31,36,83,80,30,48,21,35,58,73,20,59,45,61,78,42,43,15,66,40,68,34,32,70,75,60,76,12,55,13,67,17,37,10,46,47,57,23,54,74,2,63,41,26,50,38,16,79,71,65,3,81,7,64,39,0,49,24,51,4,1,28,52,27,6,69,53,44,56,22,9,14,62,82,18,8,11,77,5,29,19,25,33}, // permutation 4
{32,44,10,63,70,3,68,78,11,6,52,33,28,82,66,9,24,7,45,39,18,67,13,69,2,65,72,4,36,22,74,42,62,5,8,23,14,1,76,38,31,55,59,35,15,25,12,83,49,56,60,17,43,54,37,58,81,71,51,73,80,50,19,29,77,53,41,64,30,48,0,75,16,61,26,34,20,46,57,79,40,27,47,21}, // permutation 5
{24,21,61,11,0,15,55,46,38,4,76,82,79,33,57,12,67,56,41,54,20,59,10,42,69,78,1,25,26,74,35,22,39,2,45,72,47,31,49,19,18,75,71,62,27,51,68,70,7,64,32,80,48,16,44,23,60,13,40,9,28,53,29,77,5,36,52,34,83,17,58,14,65,30,3,50,63,73,8,6,81,66,37,43}, // permutation 6
{75,6,46,3,55,2,50,58,32,36,77,65,20,24,64,73,42,78,49,76,57,1,61,82,16,53,27,21,47,79,51,69,56,43,19,68,25,26,52,33,63,28,9,44,70,80,34,4,74,41,8,10,37,60,12,62,45,7,5,54,0,30,39,29,23,40,81,48,31,71,59,83,17,38,18,72,35,66,67,15,13,22,14,11}, // permutation 7
{71,75,55,48,65,11,66,42,29,4,78,61,39,68,18,82,27,14,41,52,3,24,13,31,50,53,36,35,9,63,74,8,70,21,56,77,10,57,81,26,49,45,51,60,37,28,20,64,80,67,62,32,5,1,25,15,40,23,72,34,33,44,54,69,76,2,79,7,16,22,19,73,83,59,0,17,43,47,6,12,46,58,30,38}, // permutation 8
{56,28,15,30,22,67,51,6,23,8,73,60,16,18,12,1,71,34,19,83,46,21,80,44,9,65,47,48,0,14,57,55,31,10,11,5,17,4,29,49,40,43,13,72,45,52,7,68,2,78,42,62,82,27,33,3,35,74,81,70,54,63,75,79,24,61,36,64,76,58,26,32,37,39,59,20,69,50,66,38,41,53,25,77} // permutation 9
};

// Seed: 1532220414

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_4;
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
int32_t  func_1(struct S0 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_6->g_4
 */
int32_t  func_1(struct S0 * p_6)
{ /* block id: 4 */
    uint32_t l_2 = 0x11738AB6L;
    int32_t l_3 = 0x0D526D2EL;
    uint32_t l_5[2][1][3] = {{{0xC443EB60L,0xC443EB60L,0xC443EB60L}},{{0xC443EB60L,0xC443EB60L,0xC443EB60L}}};
    int i, j, k;
    p_6->g_4 = ((-3L) > (l_3 ^= l_2));
    return l_5[0][0][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[84];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 84; i++)
            l_comm_values[i] = 1;
    struct S0 c_7;
    struct S0* p_6 = &c_7;
    struct S0 c_8 = {
        5L, // p_6->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 84)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_4, "p_6->g_4", print_hash_value);
    transparent_crc(p_6->v_collective, "p_6->v_collective", print_hash_value);
    transparent_crc(p_6->l_comm_values[get_linear_local_id()], "p_6->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
