// --atomics 21 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 86,68,1 -l 1,68,1
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
{57,5,31,49,1,55,54,16,7,28,14,6,35,26,65,64,45,59,67,40,27,29,20,32,36,60,41,38,50,8,33,51,13,62,0,18,48,4,25,23,10,21,47,53,19,22,2,30,52,17,9,37,46,3,43,11,66,24,12,34,63,58,61,44,56,42,39,15}, // permutation 0
{24,36,37,67,15,50,42,19,49,43,9,48,3,31,38,54,57,35,25,60,34,21,12,17,51,33,63,28,47,26,32,14,13,22,10,2,5,46,66,64,61,58,30,41,7,45,44,27,55,0,29,16,65,6,18,52,4,1,40,23,62,53,8,56,59,20,11,39}, // permutation 1
{2,41,56,67,15,57,65,64,3,20,61,52,21,59,18,62,10,23,33,14,27,50,30,17,31,4,16,66,25,29,5,8,19,54,60,1,24,34,51,6,55,0,35,26,40,48,13,22,46,37,58,12,28,63,38,32,11,49,45,53,47,9,7,36,39,44,43,42}, // permutation 2
{3,36,44,7,1,27,14,20,59,21,57,38,40,30,60,25,19,26,64,63,54,8,48,43,46,13,45,18,15,32,4,33,61,58,37,41,16,34,0,49,65,2,39,35,11,55,62,10,28,67,22,6,12,56,51,31,50,47,42,66,24,9,52,23,53,29,5,17}, // permutation 3
{16,66,25,35,43,7,22,29,18,51,48,13,45,64,10,33,55,26,56,37,14,21,41,50,32,42,59,62,47,2,49,40,60,53,8,12,19,61,5,54,17,0,34,39,3,46,36,27,57,6,30,24,67,28,20,9,1,15,44,23,11,4,52,31,38,63,58,65}, // permutation 4
{28,42,2,0,13,14,60,53,7,12,51,48,34,1,20,46,29,21,22,65,33,43,41,40,44,11,54,25,56,52,58,37,36,47,8,38,59,55,5,26,35,3,61,67,10,9,24,45,27,39,66,16,17,57,6,50,30,32,4,31,64,23,49,15,18,19,63,62}, // permutation 5
{26,4,50,21,39,28,18,5,22,43,1,56,45,55,32,25,53,29,15,60,62,23,38,49,42,7,33,36,27,52,54,59,20,67,31,6,51,19,34,41,35,0,17,13,64,14,30,57,9,10,46,16,47,63,40,8,61,44,58,11,3,24,2,65,37,66,12,48}, // permutation 6
{65,23,32,37,48,51,42,38,1,66,45,15,53,5,67,24,0,61,33,34,19,39,21,55,27,30,4,64,3,63,47,13,54,11,36,56,18,31,17,22,9,49,58,20,43,35,52,2,57,62,16,14,59,50,8,40,26,28,29,44,25,7,6,46,10,60,12,41}, // permutation 7
{63,0,5,45,21,43,9,60,58,44,11,32,17,59,24,13,1,22,46,62,42,34,28,14,53,15,23,10,67,47,50,18,27,29,19,35,48,12,36,65,3,61,66,6,26,40,16,20,25,39,30,52,37,54,4,8,41,49,7,31,33,38,55,51,64,57,2,56}, // permutation 8
{35,26,40,61,48,39,44,41,50,59,30,47,56,60,8,54,20,57,1,51,53,11,42,37,43,21,58,28,4,33,27,24,49,63,6,18,3,14,12,19,13,9,16,64,36,67,23,5,25,7,17,55,10,32,65,0,15,22,46,62,34,2,29,38,45,31,52,66} // permutation 9
};

// Seed: 1225031814

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S8 {
    int32_t g_2;
    volatile int32_t g_5;
    volatile int32_t g_6[7];
    int32_t g_7;
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
int32_t  func_1(struct S8 * p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_11->g_2 p_11->g_7 p_11->g_comm_values p_11->g_5
 * writes: p_11->g_2 p_11->g_7
 */
int32_t  func_1(struct S8 * p_11)
{ /* block id: 4 */
    uint16_t l_10 = 65530UL;
    for (p_11->g_2 = 0; (p_11->g_2 != 24); p_11->g_2 = safe_add_func_int8_t_s_s(p_11->g_2, 9))
    { /* block id: 7 */
        for (p_11->g_7 = 24; (p_11->g_7 == 24); ++p_11->g_7)
        { /* block id: 10 */
            if (p_11->g_comm_values[p_11->tid])
                break;
        }
        return l_10;
    }
    return p_11->g_5;
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
    struct S8 c_12;
    struct S8* p_11 = &c_12;
    struct S8 c_13 = {
        0L, // p_11->g_2
        1L, // p_11->g_5
        {8L,0x3F0D3ECFL,8L,8L,0x3F0D3ECFL,8L,8L}, // p_11->g_6
        (-2L), // p_11->g_7
        0, // p_11->v_collective
        sequence_input[get_global_id(0)], // p_11->global_0_offset
        sequence_input[get_global_id(1)], // p_11->global_1_offset
        sequence_input[get_global_id(2)], // p_11->global_2_offset
        sequence_input[get_local_id(0)], // p_11->local_0_offset
        sequence_input[get_local_id(1)], // p_11->local_1_offset
        sequence_input[get_local_id(2)], // p_11->local_2_offset
        sequence_input[get_group_id(0)], // p_11->group_0_offset
        sequence_input[get_group_id(1)], // p_11->group_1_offset
        sequence_input[get_group_id(2)], // p_11->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 68)), permutations[0][get_linear_local_id()])), // p_11->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_12 = c_13;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_11);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_11->g_2, "p_11->g_2", print_hash_value);
    transparent_crc(p_11->g_5, "p_11->g_5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_11->g_6[i], "p_11->g_6[i]", print_hash_value);

    }
    transparent_crc(p_11->g_7, "p_11->g_7", print_hash_value);
    transparent_crc(p_11->v_collective, "p_11->v_collective", print_hash_value);
    transparent_crc(p_11->l_comm_values[get_linear_local_id()], "p_11->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_11->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()], "p_11->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
