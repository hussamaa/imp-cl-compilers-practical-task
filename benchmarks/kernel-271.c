// --atomics 44 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,54,8 -l 1,9,8
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
{9,51,52,21,70,17,6,15,32,69,2,61,12,45,27,46,0,41,60,62,67,31,50,1,55,8,24,49,43,18,20,47,63,42,37,39,25,66,36,4,64,29,33,38,30,48,68,7,35,22,59,26,11,54,71,10,28,40,3,13,23,19,65,53,57,16,5,14,58,44,34,56}, // permutation 0
{53,46,8,36,59,63,38,28,66,41,26,47,0,14,27,68,11,16,18,61,3,58,21,44,20,71,7,30,39,35,54,1,22,32,60,17,50,33,13,31,25,10,51,40,2,5,12,62,48,43,49,70,6,23,45,64,56,67,24,29,9,19,55,4,65,69,57,37,15,42,52,34}, // permutation 1
{20,3,33,15,63,67,4,51,0,52,18,26,36,24,65,39,2,10,7,35,70,6,64,42,1,46,17,38,45,57,61,37,56,25,29,40,8,11,41,49,50,27,31,53,13,66,48,71,22,28,30,19,47,55,21,62,69,43,32,23,9,5,59,58,12,34,16,68,14,44,54,60}, // permutation 2
{52,18,3,53,44,71,33,58,0,63,34,67,61,25,45,65,17,26,62,7,40,32,56,10,29,11,27,38,24,60,31,43,12,4,36,51,19,70,55,37,16,68,9,20,35,66,13,39,59,1,54,64,23,14,42,5,48,57,22,30,6,2,8,69,41,21,49,50,46,47,28,15}, // permutation 3
{61,63,14,25,0,47,45,23,7,19,30,69,41,46,32,42,53,24,48,35,11,71,44,8,21,55,43,16,37,3,52,27,38,40,34,39,70,51,31,15,17,36,66,4,65,59,68,28,22,33,1,60,50,2,13,20,57,67,49,62,26,64,10,54,12,18,29,9,58,6,56,5}, // permutation 4
{31,55,3,14,47,58,61,50,8,51,48,64,7,71,6,16,39,12,38,20,4,19,40,23,27,63,45,66,21,46,25,35,34,5,68,70,22,43,18,0,10,17,1,33,69,37,24,42,29,67,49,53,2,26,32,44,62,36,9,13,57,41,15,28,30,11,65,56,54,52,60,59}, // permutation 5
{67,16,41,22,69,44,64,14,42,11,39,30,15,43,13,70,2,38,46,27,28,55,9,56,25,6,50,45,31,47,0,59,10,24,19,65,49,5,40,57,12,62,51,26,68,3,17,4,48,58,35,36,34,53,61,52,37,23,8,54,71,20,21,32,60,18,33,66,7,63,1,29}, // permutation 6
{33,50,17,41,43,14,69,63,28,52,6,3,9,46,11,67,64,62,20,68,51,24,18,13,49,40,26,12,55,2,44,19,42,10,34,25,31,48,32,70,16,15,61,66,60,45,58,35,4,36,56,39,23,38,1,47,5,29,65,37,0,54,57,21,30,7,22,59,8,53,71,27}, // permutation 7
{60,10,51,59,35,69,46,19,4,30,47,52,6,41,26,70,65,61,56,11,12,49,2,14,64,63,40,21,9,38,0,57,31,55,34,62,22,15,27,32,42,36,43,3,20,8,17,71,50,68,45,53,23,37,24,18,66,67,44,48,39,28,5,1,58,25,13,16,33,29,54,7}, // permutation 8
{58,56,22,6,0,3,26,47,64,12,14,42,5,55,41,57,60,43,67,61,25,10,54,29,51,4,48,20,9,40,46,33,21,11,37,68,2,23,66,8,62,18,28,16,69,19,36,31,24,44,30,49,50,34,65,38,71,35,13,7,32,15,39,53,45,59,52,1,70,63,17,27} // permutation 9
};

// Seed: 278781809

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_2;
    VECTOR(int32_t, 2) g_6;
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
int32_t  func_1(struct S2 * p_22);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_22->g_2 p_22->g_6
 * writes: p_22->g_2
 */
int32_t  func_1(struct S2 * p_22)
{ /* block id: 4 */
    uint8_t l_9 = 255UL;
    int32_t l_12 = 1L;
    int32_t l_13 = (-1L);
    int32_t l_14 = 0x3389FA18L;
    int32_t l_15 = 0L;
    int64_t l_16 = 8L;
    int32_t l_17 = 0x2B6A3604L;
    int32_t l_18 = (-1L);
    uint16_t l_19 = 65529UL;
    for (p_22->g_2 = (-25); (p_22->g_2 <= 14); p_22->g_2 = safe_add_func_uint16_t_u_u(p_22->g_2, 4))
    { /* block id: 7 */
        int32_t *l_5 = (void*)0;
        int32_t *l_7 = (void*)0;
        int32_t *l_8[4][2][3];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_8[i][j][k] = (void*)0;
            }
        }
        l_9++;
        ++l_19;
        if (p_22->g_2)
            continue;
    }
    return p_22->g_6.x;
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
    struct S2 c_23;
    struct S2* p_22 = &c_23;
    struct S2 c_24 = {
        0x10197F0AL, // p_22->g_2
        (VECTOR(int32_t, 2))((-1L), 0L), // p_22->g_6
        0, // p_22->v_collective
        sequence_input[get_global_id(0)], // p_22->global_0_offset
        sequence_input[get_global_id(1)], // p_22->global_1_offset
        sequence_input[get_global_id(2)], // p_22->global_2_offset
        sequence_input[get_local_id(0)], // p_22->local_0_offset
        sequence_input[get_local_id(1)], // p_22->local_1_offset
        sequence_input[get_local_id(2)], // p_22->local_2_offset
        sequence_input[get_group_id(0)], // p_22->group_0_offset
        sequence_input[get_group_id(1)], // p_22->group_1_offset
        sequence_input[get_group_id(2)], // p_22->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[0][get_linear_local_id()])), // p_22->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_23 = c_24;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_22);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_22->g_2, "p_22->g_2", print_hash_value);
    transparent_crc(p_22->g_6.x, "p_22->g_6.x", print_hash_value);
    transparent_crc(p_22->g_6.y, "p_22->g_6.y", print_hash_value);
    transparent_crc(p_22->v_collective, "p_22->v_collective", print_hash_value);
    transparent_crc(p_22->l_comm_values[get_linear_local_id()], "p_22->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_22->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()], "p_22->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
