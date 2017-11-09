// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,57,1 -l 91,1,1
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

__constant uint32_t permutations[10][91] = {
{35,42,23,61,50,30,65,62,47,72,40,3,51,11,16,90,66,21,70,22,31,71,78,64,9,32,33,28,6,76,69,75,83,59,8,12,57,85,1,10,2,44,25,36,82,56,37,26,53,19,84,68,74,86,0,49,89,46,77,79,87,88,13,60,63,27,80,29,58,41,34,5,67,17,20,38,39,55,24,45,43,73,81,14,7,48,4,52,54,18,15}, // permutation 0
{86,40,68,39,25,53,54,71,10,60,47,57,84,7,27,78,45,2,44,20,76,72,35,18,69,75,14,51,32,11,73,42,28,46,63,8,85,61,26,80,66,38,24,55,56,34,59,37,41,49,79,31,65,3,81,52,5,30,88,21,50,82,62,1,19,36,4,77,70,15,43,48,83,12,64,23,9,87,90,33,67,0,16,74,13,6,22,17,89,29,58}, // permutation 1
{14,28,54,32,68,30,5,41,27,39,6,86,11,33,21,88,47,90,89,29,2,57,77,40,63,0,13,15,50,25,42,66,82,64,73,75,35,22,23,49,59,8,18,65,71,70,48,51,9,26,83,17,3,85,12,4,72,60,20,84,61,62,56,76,1,44,67,16,38,55,79,10,52,69,58,74,81,24,87,53,36,78,37,43,46,45,31,7,80,19,34}, // permutation 2
{19,6,87,21,42,12,23,76,67,71,82,81,4,75,14,2,30,17,65,28,43,66,49,10,37,13,32,62,25,8,35,20,53,45,33,57,11,78,56,54,79,70,40,22,50,47,36,68,24,60,84,0,39,88,63,59,16,52,72,69,46,38,74,51,31,86,29,18,5,41,9,15,58,77,44,89,61,34,80,26,48,83,90,1,64,3,85,55,73,27,7}, // permutation 3
{24,50,65,17,31,43,14,8,63,60,71,36,4,89,75,33,5,39,61,10,77,76,30,81,42,23,1,45,58,0,90,16,15,80,85,55,18,27,19,53,59,51,7,68,25,13,41,34,20,26,48,49,3,52,84,72,86,73,22,37,11,32,44,67,9,35,78,82,79,2,56,47,12,69,40,57,70,29,38,46,74,62,88,54,83,87,64,21,66,28,6}, // permutation 4
{60,68,71,18,83,38,43,16,35,42,84,69,37,2,66,49,77,53,20,62,88,9,54,75,31,47,46,39,74,65,30,3,6,27,33,14,45,79,59,55,58,78,23,15,0,89,73,51,64,26,90,41,10,86,12,28,63,22,36,24,56,50,40,17,5,11,8,85,44,25,1,67,19,29,57,34,7,87,13,76,80,82,81,61,52,72,21,48,4,32,70}, // permutation 5
{66,47,31,30,32,59,88,70,75,39,81,85,11,10,8,33,6,77,27,72,23,29,50,49,71,35,57,12,9,51,16,86,60,7,89,52,84,55,54,61,14,73,2,90,24,65,26,63,87,80,5,78,25,56,37,44,46,41,1,79,62,48,19,76,82,58,45,74,36,15,34,67,43,42,28,53,69,68,83,64,4,38,17,13,20,40,22,0,18,3,21}, // permutation 6
{21,20,16,61,38,45,60,28,17,11,31,86,88,26,63,53,65,51,40,22,4,44,46,71,1,55,7,85,72,3,29,58,68,47,50,25,10,42,8,6,80,84,5,67,33,2,66,87,39,57,79,35,18,27,12,34,30,89,76,13,77,78,70,15,90,82,0,24,32,73,83,41,14,74,52,64,43,19,54,48,49,56,36,37,81,23,75,59,62,69,9}, // permutation 7
{45,26,57,0,49,59,55,8,21,33,58,41,56,34,1,9,42,62,54,80,19,90,79,30,40,73,25,81,87,70,46,35,44,29,14,37,66,47,12,31,38,39,15,75,67,85,89,71,11,4,83,77,86,65,10,74,17,43,20,60,64,61,18,16,48,72,51,5,82,6,28,78,84,63,52,36,24,13,2,88,22,53,27,76,3,23,32,7,69,50,68}, // permutation 8
{2,20,17,53,72,82,43,29,19,13,37,56,28,39,24,27,44,10,45,67,9,8,35,23,12,30,79,69,57,64,75,7,11,68,15,61,22,18,38,65,41,85,54,71,88,55,83,6,89,76,21,32,52,46,86,34,36,66,63,1,78,80,33,50,87,31,3,47,0,70,59,16,42,4,51,74,90,73,81,84,58,49,5,77,48,40,62,14,60,26,25} // permutation 9
};

// Seed: 3458674616

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    volatile int32_t g_2[9][7][4];
    int32_t g_4;
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
uint32_t  func_1(struct S4 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_2 p_5->g_4
 * writes: p_5->g_4 p_5->g_2
 */
uint32_t  func_1(struct S4 * p_5)
{ /* block id: 4 */
    int32_t *l_3[10][2];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_3[i][j] = &p_5->g_4;
    }
    p_5->g_4 |= p_5->g_2[1][4][1];
    p_5->g_2[8][4][1] = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-1L))).yyxy)).y ^ p_5->g_2[2][4][1]);
    return p_5->g_2[1][4][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S4 c_6;
    struct S4* p_5 = &c_6;
    struct S4 c_7 = {
        {{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}},{{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL},{0x3996A530L,0x3996A530L,1L,0x5A6C2E3AL}}}, // p_5->g_2
        0x3B06D9E9L, // p_5->g_4
        0, // p_5->v_collective
        sequence_input[get_global_id(0)], // p_5->global_0_offset
        sequence_input[get_global_id(1)], // p_5->global_1_offset
        sequence_input[get_global_id(2)], // p_5->global_2_offset
        sequence_input[get_local_id(0)], // p_5->local_0_offset
        sequence_input[get_local_id(1)], // p_5->local_1_offset
        sequence_input[get_local_id(2)], // p_5->local_2_offset
        sequence_input[get_group_id(0)], // p_5->group_0_offset
        sequence_input[get_group_id(1)], // p_5->group_1_offset
        sequence_input[get_group_id(2)], // p_5->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_5->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_6 = c_7;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_5);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_5->g_2[i][j][k], "p_5->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_5->g_4, "p_5->g_4", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
