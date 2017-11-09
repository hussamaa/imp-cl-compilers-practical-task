// --atomics 3 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,81,1 -l 1,81,1
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

__constant uint32_t permutations[10][81] = {
{61,62,21,17,52,16,35,13,11,51,1,36,25,63,44,34,70,45,7,50,4,30,47,64,80,78,10,2,54,40,42,12,65,8,76,22,23,74,39,49,32,56,31,71,5,55,79,15,66,43,60,14,58,38,26,24,57,53,20,68,41,33,67,46,27,0,28,29,75,6,48,18,73,69,19,77,72,37,59,3,9}, // permutation 0
{48,70,44,31,60,55,25,61,27,56,36,73,47,32,45,63,12,4,13,8,39,40,33,52,28,43,49,35,7,76,72,29,26,19,64,75,50,5,1,67,20,21,66,77,18,11,54,37,2,62,24,69,42,71,79,3,59,65,57,10,6,74,51,41,16,46,58,14,68,30,80,22,53,38,34,15,23,9,78,0,17}, // permutation 1
{1,56,45,33,13,72,3,40,5,65,76,55,11,32,16,80,23,30,39,0,26,58,52,51,41,17,74,54,35,4,28,71,50,18,22,77,24,70,64,43,69,60,31,19,8,49,67,14,47,66,20,63,44,73,78,68,6,62,21,12,57,61,38,48,7,75,46,53,36,34,10,15,42,27,59,79,37,2,9,25,29}, // permutation 2
{22,57,33,8,44,32,61,79,43,47,50,11,6,16,64,19,48,55,12,3,35,49,59,18,25,5,20,9,73,60,37,24,36,17,70,29,23,68,30,45,40,53,4,42,62,71,38,65,10,34,54,21,51,74,26,69,27,58,52,41,66,78,31,39,56,67,76,75,72,15,14,13,46,63,1,80,77,28,0,7,2}, // permutation 3
{41,47,37,43,19,42,31,8,23,27,76,68,63,49,59,6,26,35,62,40,66,51,54,79,80,16,57,74,2,53,56,69,67,38,33,4,61,34,75,64,25,17,18,1,5,13,52,0,78,60,9,55,3,30,12,24,20,39,72,77,36,14,29,50,22,45,65,15,58,11,21,28,73,7,44,71,46,70,10,32,48}, // permutation 4
{80,0,9,48,38,26,67,43,11,27,35,18,33,29,1,32,10,72,62,6,60,66,78,31,77,15,54,73,24,76,64,58,25,39,69,44,57,51,19,63,46,16,70,4,45,30,36,49,65,68,56,13,61,75,41,7,79,50,14,20,40,28,34,53,74,55,2,8,71,59,3,47,42,22,52,12,5,23,21,17,37}, // permutation 5
{10,52,67,80,44,1,33,51,23,31,30,68,55,69,13,75,48,4,32,64,46,66,14,41,79,78,35,59,26,58,8,6,70,50,34,62,25,19,18,0,24,71,76,2,37,3,22,60,56,54,29,7,20,73,16,5,9,36,45,11,53,15,21,63,17,77,43,72,28,57,40,49,61,74,42,38,27,39,65,47,12}, // permutation 6
{61,59,63,78,28,80,53,69,16,25,77,22,30,65,70,34,67,43,2,79,50,13,23,26,55,44,1,7,31,71,48,49,40,14,20,60,10,24,0,52,51,32,39,64,46,37,58,54,42,33,35,8,15,72,3,18,41,17,76,68,57,21,36,47,5,56,62,4,74,38,73,11,45,12,27,75,9,29,6,66,19}, // permutation 7
{34,55,65,29,14,21,16,11,47,56,48,35,40,8,52,12,0,75,66,60,20,51,58,63,77,19,71,26,80,1,2,4,44,79,24,6,64,38,49,61,68,50,9,39,22,67,62,69,28,59,27,76,46,54,3,70,57,31,43,45,13,15,23,73,5,17,78,10,42,41,37,25,32,18,53,36,30,74,7,72,33}, // permutation 8
{39,70,59,26,76,58,13,28,14,47,41,73,53,40,64,78,46,19,61,33,2,63,67,10,18,79,72,9,51,80,5,0,71,22,54,15,25,12,3,27,62,6,43,45,56,31,23,4,29,36,7,42,68,65,8,16,34,1,50,20,38,55,35,57,21,75,24,32,52,37,77,30,60,74,66,11,44,49,48,69,17} // permutation 9
};

// Seed: 3132626248

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    int32_t g_5;
    int32_t * volatile g_4;
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
int8_t  func_1(struct S4 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_4 p_6->g_5 p_6->l_comm_values
 * writes: p_6->g_5
 */
int8_t  func_1(struct S4 * p_6)
{ /* block id: 4 */
    uint32_t l_2 = 0x81D21F1EL;
    int32_t *l_3 = (void*)0;
    (*p_6->g_4) ^= l_2;
    return p_6->l_comm_values[(safe_mod_func_uint32_t_u_u(p_6->tid, 81))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[81];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 81; i++)
            l_comm_values[i] = 1;
    struct S4 c_7;
    struct S4* p_6 = &c_7;
    struct S4 c_8 = {
        0x65C285CEL, // p_6->g_5
        &p_6->g_5, // p_6->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 81)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 81 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 81 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
