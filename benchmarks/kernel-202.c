// --atomics 97 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,85,1 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{57,66,34,58,26,5,56,60,3,4,76,67,65,50,29,18,23,73,33,15,52,77,48,44,39,51,70,36,45,27,32,59,42,31,35,54,64,72,68,38,6,74,22,41,37,75,55,62,49,25,17,78,1,14,10,47,12,43,8,13,9,63,69,19,46,40,0,61,7,30,71,16,53,24,21,11,28,2,20}, // permutation 0
{8,40,67,38,9,60,78,0,36,13,33,34,64,19,61,74,45,62,37,73,54,70,28,66,68,6,48,27,12,7,21,16,10,18,52,63,14,2,31,57,76,53,1,77,75,30,41,17,46,69,35,72,51,11,42,58,59,15,29,43,25,32,24,20,56,44,55,71,3,50,47,26,65,4,22,39,23,49,5}, // permutation 1
{50,78,27,12,62,20,57,44,1,61,49,25,15,41,46,5,33,66,16,53,77,59,56,70,7,28,17,54,24,68,3,63,40,26,60,35,6,47,65,51,31,21,9,48,58,36,43,8,71,0,52,14,73,23,72,4,74,42,39,37,69,30,34,76,18,45,32,29,67,11,13,55,38,19,10,22,2,75,64}, // permutation 2
{25,0,4,22,62,8,14,21,75,72,76,37,52,32,13,11,15,60,48,39,34,53,42,71,57,2,78,12,46,49,26,69,19,36,16,47,10,31,64,73,68,66,24,35,70,27,18,63,40,6,44,28,74,17,41,58,9,45,59,3,1,51,29,50,7,43,23,5,61,38,30,65,67,55,20,54,33,56,77}, // permutation 3
{60,13,57,25,34,53,38,28,77,2,6,36,66,49,45,19,73,20,11,16,51,4,23,58,67,68,52,61,62,24,0,10,41,71,72,27,47,15,33,8,64,7,35,1,18,5,26,40,29,12,55,14,17,32,59,69,22,44,42,65,74,21,31,50,63,43,75,54,9,78,46,76,37,70,48,39,3,30,56}, // permutation 4
{64,0,9,26,61,59,62,4,14,52,70,11,40,18,72,22,71,45,36,65,66,30,53,17,13,16,74,56,41,10,46,50,55,6,77,23,43,31,35,28,69,15,67,7,42,34,48,60,54,57,32,8,21,1,47,2,51,73,20,76,39,5,12,33,3,29,24,38,27,44,25,19,78,37,68,49,63,75,58}, // permutation 5
{78,27,55,24,9,37,40,16,13,38,50,4,52,22,77,46,56,5,51,26,11,44,60,1,15,57,45,17,66,18,54,62,34,23,28,32,39,30,42,58,67,71,61,64,0,19,25,14,21,49,29,65,70,10,2,12,72,68,3,41,76,35,59,8,73,47,6,48,7,63,36,74,75,69,20,43,53,31,33}, // permutation 6
{56,45,53,35,33,44,32,47,61,58,19,5,21,2,71,37,72,3,20,52,65,23,50,63,73,41,60,48,4,43,70,49,29,26,8,25,16,7,77,68,18,39,55,28,24,51,34,36,76,59,62,6,14,75,11,10,31,38,15,27,46,42,30,9,22,17,13,64,1,78,66,54,74,67,0,57,69,12,40}, // permutation 7
{52,27,54,10,35,42,59,74,75,72,6,7,51,62,50,11,9,23,46,1,38,69,34,58,66,63,13,21,4,32,61,18,14,22,30,65,20,48,77,29,19,8,26,31,17,41,24,43,45,53,44,60,33,76,15,37,55,25,0,71,49,16,28,2,73,67,3,5,78,68,36,57,40,39,64,12,70,47,56}, // permutation 8
{30,7,13,17,46,22,53,76,58,71,63,4,24,5,6,3,2,56,54,31,20,74,57,59,28,47,65,37,35,38,1,61,16,50,19,40,52,8,72,55,32,68,77,0,26,60,25,36,33,12,9,11,51,44,45,73,78,15,75,27,69,48,14,39,43,42,62,23,21,49,29,18,41,66,70,64,34,67,10} // permutation 9
};

// Seed: 450826048

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
    int32_t g_3[10];
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
uint64_t  func_1(struct S3 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_3 p_5->l_comm_values
 * writes: p_5->g_3
 */
uint64_t  func_1(struct S3 * p_5)
{ /* block id: 4 */
    int32_t *l_2 = &p_5->g_3[0];
    int32_t l_4[9][3][1] = {{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}},{{0x3F6085E0L},{0x3F6085E0L},{0x3F6085E0L}}};
    int i, j, k;
    (*l_2) = 0x55595070L;
    (*l_2) ^= l_4[0][0][0];
    (*l_2) = p_5->l_comm_values[(safe_mod_func_uint32_t_u_u(p_5->tid, 79))];
    return (*l_2);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S3 c_6;
    struct S3* p_5 = &c_6;
    struct S3 c_7 = {
        {0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L,0x5BDA7FE6L}, // p_5->g_3
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_5->g_3[i], "p_5->g_3[i]", print_hash_value);

    }
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
