// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,39,2 -l 23,3,1
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

__constant uint32_t permutations[10][69] = {
{37,11,48,62,18,19,68,25,17,54,56,41,23,52,63,42,4,59,16,26,7,58,34,30,31,61,12,49,64,39,5,65,66,24,43,55,15,21,3,27,57,13,0,50,10,8,6,53,28,32,35,9,14,33,38,44,1,36,29,45,2,22,51,46,20,67,47,60,40}, // permutation 0
{11,10,54,41,57,59,21,56,43,38,61,12,51,25,23,30,20,14,8,15,60,7,36,40,28,0,4,53,19,66,3,32,52,37,18,5,16,62,27,68,42,65,9,45,6,17,29,50,22,46,24,44,49,1,47,48,26,2,58,35,39,67,55,63,34,31,33,13,64}, // permutation 1
{37,53,3,46,9,44,35,32,14,2,42,60,68,7,23,10,15,55,65,48,62,31,5,33,40,50,49,30,41,38,61,43,21,18,28,63,17,54,11,66,39,0,45,52,51,56,22,27,29,36,47,25,67,20,58,1,24,12,13,4,16,8,57,6,26,34,19,64,59}, // permutation 2
{25,43,24,28,32,2,50,41,1,40,5,68,61,58,63,16,33,30,19,56,60,3,17,59,0,9,67,39,62,35,34,46,27,31,47,53,42,38,20,21,66,8,48,65,36,13,44,7,4,29,11,64,12,55,14,22,26,6,54,51,23,52,45,57,18,37,15,10,49}, // permutation 3
{48,13,59,23,15,41,11,51,26,38,19,18,5,56,42,30,8,27,16,20,25,24,39,63,7,47,33,34,45,58,6,53,2,54,52,61,32,46,49,68,64,50,9,55,62,22,29,36,43,31,60,44,0,57,1,12,65,14,28,67,66,10,37,35,4,17,3,40,21}, // permutation 4
{63,55,64,3,37,16,23,54,62,28,33,30,38,46,14,19,68,40,20,35,49,8,15,65,7,9,61,4,27,0,12,11,50,41,22,53,18,42,67,32,31,17,57,45,2,52,24,47,39,60,48,1,56,34,51,26,58,21,5,59,25,10,6,13,43,29,44,36,66}, // permutation 5
{23,58,18,63,39,35,14,61,50,6,22,48,1,57,9,40,53,65,27,60,12,41,28,16,15,51,11,2,49,30,34,29,21,4,52,7,3,19,66,10,55,8,24,36,64,56,46,32,17,68,59,0,42,37,54,13,20,38,47,62,45,33,25,44,5,26,67,43,31}, // permutation 6
{8,52,66,65,35,40,2,20,42,58,47,46,24,0,3,39,34,61,51,30,43,12,14,15,67,59,49,53,60,7,18,29,55,19,63,38,57,54,21,25,45,44,6,48,10,32,50,36,13,62,17,23,16,37,27,31,4,28,26,41,64,68,9,11,56,1,33,22,5}, // permutation 7
{30,22,46,39,23,9,53,67,6,13,63,32,68,12,25,51,28,8,65,15,29,11,0,57,58,16,40,10,1,37,47,3,41,44,14,24,34,45,38,36,21,64,66,27,20,52,55,62,4,18,26,61,31,5,60,17,19,48,33,7,42,49,50,54,59,43,2,56,35}, // permutation 8
{51,11,64,30,43,14,68,20,0,29,23,45,48,18,47,38,56,16,40,24,39,41,35,42,10,22,58,28,33,50,26,3,9,61,4,49,17,27,52,66,34,57,19,37,59,53,55,12,60,32,67,21,7,36,13,44,6,63,54,65,62,25,31,15,8,1,5,46,2} // permutation 9
};

// Seed: 102368636

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
};

union U4 {
   uint32_t  f0;
   volatile int8_t * f1;
   struct S0  f2;
   int8_t * f3;
};

struct S5 {
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
union U4  func_1(struct S5 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U4  func_1(struct S5 * p_3)
{ /* block id: 4 */
    union U4 l_2 = {0UL};
    return l_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_comm_values[i] = 1;
    struct S5 c_4;
    struct S5* p_3 = &c_4;
    struct S5 c_5 = {
        0, // p_3->v_collective
        sequence_input[get_global_id(0)], // p_3->global_0_offset
        sequence_input[get_global_id(1)], // p_3->global_1_offset
        sequence_input[get_global_id(2)], // p_3->global_2_offset
        sequence_input[get_local_id(0)], // p_3->local_0_offset
        sequence_input[get_local_id(1)], // p_3->local_1_offset
        sequence_input[get_local_id(2)], // p_3->local_2_offset
        sequence_input[get_group_id(0)], // p_3->group_0_offset
        sequence_input[get_group_id(1)], // p_3->group_1_offset
        sequence_input[get_group_id(2)], // p_3->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 69)), permutations[0][get_linear_local_id()])), // p_3->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_4 = c_5;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3->v_collective, "p_3->v_collective", print_hash_value);
    transparent_crc(p_3->l_comm_values[get_linear_local_id()], "p_3->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_3->g_comm_values[get_linear_group_id() * 69 + get_linear_local_id()], "p_3->g_comm_values[get_linear_group_id() * 69 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
