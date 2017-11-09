// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,30,10 -l 1,15,10
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

__constant uint32_t permutations[10][150] = {
{149,108,9,57,78,16,107,24,15,119,142,125,0,138,67,14,1,147,11,7,127,123,69,6,114,44,38,51,135,33,28,13,62,84,56,71,5,93,18,113,126,143,96,70,20,26,53,42,144,83,97,41,40,22,111,134,63,112,4,12,43,77,106,61,10,146,58,94,102,80,37,31,23,116,72,73,104,45,89,90,137,55,52,128,3,148,86,133,140,101,115,79,110,130,85,68,39,25,30,60,66,132,99,32,27,34,64,87,54,100,122,29,109,59,74,92,91,105,131,136,88,82,47,103,49,95,8,98,17,81,129,50,2,19,117,21,120,46,36,65,48,145,76,118,124,139,75,141,35,121}, // permutation 0
{98,76,60,58,119,105,44,66,116,70,143,71,26,80,24,145,147,86,19,30,91,51,111,47,54,90,50,149,115,43,8,38,133,3,126,84,89,46,131,134,40,144,39,130,61,37,129,125,27,41,93,100,110,92,103,11,112,123,114,52,94,72,135,22,35,107,95,53,101,85,36,34,9,55,64,136,20,106,0,146,124,63,99,5,2,29,56,68,128,127,138,122,81,78,141,121,79,148,65,59,97,32,28,75,62,96,117,13,21,109,74,88,45,12,17,102,104,87,132,118,49,82,6,42,31,120,140,77,4,69,108,14,73,67,15,7,23,57,18,16,25,137,48,1,139,33,83,142,113,10}, // permutation 1
{54,90,52,2,82,57,67,33,98,111,4,119,72,45,138,149,21,106,123,140,43,130,117,5,124,10,75,7,121,127,15,61,71,77,144,112,3,19,141,97,18,29,50,31,26,53,88,68,108,113,104,109,137,101,44,28,92,105,125,122,27,142,12,85,32,11,91,99,94,55,20,56,73,80,134,59,38,6,84,143,132,120,13,133,37,60,145,107,96,102,135,58,76,78,25,62,24,79,83,116,35,86,23,136,17,126,0,1,49,147,8,41,66,63,103,110,69,95,39,65,128,14,64,46,47,114,139,87,40,30,22,115,118,51,81,74,146,89,70,131,34,16,9,129,48,100,42,36,148,93}, // permutation 2
{78,113,5,24,59,85,84,125,49,43,131,8,11,12,119,121,4,107,14,19,21,147,115,89,144,100,143,138,40,96,33,148,0,2,17,42,94,64,16,117,13,126,45,127,6,137,133,139,7,72,99,90,114,122,36,58,102,136,95,141,56,22,75,124,109,28,29,146,37,120,69,142,86,50,47,39,149,63,77,70,1,111,132,48,97,135,46,41,128,62,34,116,44,9,105,30,66,15,74,88,129,23,83,81,61,52,25,140,71,108,82,65,51,110,31,79,32,27,106,57,87,3,60,104,20,118,123,91,103,98,68,26,38,55,92,93,53,73,112,76,35,101,134,67,80,145,130,18,54,10}, // permutation 3
{111,13,35,133,97,86,89,123,116,90,41,4,124,81,18,74,113,127,125,8,145,32,76,70,11,33,73,46,5,146,12,47,0,36,40,7,122,42,43,95,121,117,134,22,110,69,85,91,51,93,67,82,26,62,63,102,136,49,17,92,83,52,135,88,75,10,132,115,55,105,138,80,112,114,144,118,119,58,104,65,54,142,21,148,98,109,126,64,120,66,27,60,87,131,137,147,15,103,56,57,20,30,129,29,68,38,101,149,23,108,19,141,59,128,34,3,37,78,94,28,100,139,44,106,61,107,16,50,71,48,39,77,6,99,25,45,84,14,9,96,2,24,79,72,143,31,130,1,53,140}, // permutation 4
{146,82,139,66,87,84,26,122,124,91,144,41,112,47,77,116,54,90,71,141,1,103,126,74,109,14,7,94,9,18,2,133,16,97,72,33,20,15,40,123,8,107,143,130,28,58,79,127,125,134,136,52,6,59,27,83,106,75,35,89,70,3,11,68,147,64,132,140,128,37,57,21,10,108,60,0,43,117,93,38,131,29,76,145,88,149,67,44,51,50,102,86,85,32,92,53,4,119,23,118,65,80,34,121,48,19,49,81,22,61,99,96,45,120,105,17,46,55,13,25,24,56,30,63,5,36,69,62,101,73,111,39,135,42,95,31,137,98,148,104,100,78,142,114,115,138,129,12,110,113}, // permutation 5
{53,90,64,106,123,98,27,61,73,68,139,138,63,48,17,130,97,15,16,32,50,104,58,144,38,62,127,137,12,147,34,47,108,21,44,51,77,66,92,24,55,10,19,36,142,113,49,128,143,23,82,85,13,18,31,70,93,75,65,59,8,122,0,60,57,9,56,111,96,132,134,101,135,118,6,146,110,67,4,136,33,124,74,117,94,7,41,109,103,52,81,22,114,5,76,91,116,105,69,107,86,72,80,79,140,131,89,149,11,29,84,40,121,30,28,43,26,100,129,88,3,120,20,115,83,148,45,78,25,145,37,39,35,2,95,126,42,71,141,54,87,99,119,112,14,46,125,133,1,102}, // permutation 6
{110,69,96,130,84,90,26,98,94,43,115,136,56,71,138,39,28,101,2,137,140,93,63,13,5,92,34,148,1,78,88,38,107,106,99,113,149,23,144,0,89,8,3,40,128,62,102,29,58,45,75,81,74,76,91,125,80,35,129,127,10,22,104,85,11,100,30,70,9,65,83,73,77,44,47,18,142,16,14,50,105,122,15,108,21,66,17,141,54,51,24,139,55,87,41,121,147,46,135,111,42,33,12,60,82,19,36,79,68,143,120,32,52,6,53,134,49,126,97,118,59,124,48,132,95,131,145,86,133,109,27,103,117,146,112,64,61,7,114,67,116,37,123,25,4,20,57,31,119,72}, // permutation 7
{43,139,104,58,127,11,91,40,140,54,120,118,137,0,72,33,79,142,94,19,48,147,62,64,22,93,92,45,2,41,131,59,8,87,1,107,149,136,101,7,130,146,75,132,122,5,82,26,16,80,6,35,97,69,121,18,106,102,28,67,65,135,46,30,74,105,71,15,112,133,141,25,34,32,90,123,77,125,51,70,27,9,73,83,57,44,95,13,14,37,126,117,4,39,89,81,20,85,103,56,61,114,78,116,29,144,88,63,108,145,99,66,109,42,38,96,84,68,36,138,53,55,31,49,98,100,76,86,10,115,50,148,110,3,12,124,21,128,134,143,52,17,113,24,47,60,119,111,23,129}, // permutation 8
{6,112,3,20,43,71,57,99,113,117,129,25,124,24,5,104,29,96,114,42,61,132,123,146,91,76,103,62,133,125,144,34,21,109,1,44,105,111,100,26,119,85,95,68,74,18,9,51,31,135,13,83,127,41,115,60,10,46,147,27,22,90,12,143,84,33,67,86,65,63,14,108,66,69,77,64,37,107,55,7,38,32,50,36,45,136,92,56,78,138,49,106,140,110,102,73,53,87,80,47,142,40,48,97,8,120,0,54,17,52,30,58,2,11,23,121,28,134,59,16,101,89,39,88,93,81,75,128,141,139,72,145,149,116,35,15,118,94,137,82,122,19,131,130,4,79,70,148,126,98} // permutation 9
};

// Seed: 333939769

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
   uint32_t  f0;
   int64_t  f1;
   int8_t  f2;
   uint64_t  f3;
   int8_t  f4;
};

struct S4 {
    volatile int32_t g_2;
    int32_t g_3[9][8][3];
    struct S3 g_6;
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
struct S3  func_1(struct S4 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_3 p_7->g_6
 * writes: p_7->g_3
 */
struct S3  func_1(struct S4 * p_7)
{ /* block id: 4 */
    for (p_7->g_3[5][2][0] = 0; (p_7->g_3[5][2][0] < 27); ++p_7->g_3[5][2][0])
    { /* block id: 7 */
        return p_7->g_6;
    }
    return p_7->g_6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[150];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 150; i++)
            l_comm_values[i] = 1;
    struct S4 c_8;
    struct S4* p_7 = &c_8;
    struct S4 c_9 = {
        (-3L), // p_7->g_2
        {{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}},{{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L},{(-6L),0x5800F4D4L,0L}}}, // p_7->g_3
        {0x4F0E4F20L,1L,0x6FL,7UL,0L}, // p_7->g_6
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 150)), permutations[0][get_linear_local_id()])), // p_7->tid
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
    transparent_crc(p_7->g_2, "p_7->g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_7->g_3[i][j][k], "p_7->g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_7->g_6.f0, "p_7->g_6.f0", print_hash_value);
    transparent_crc(p_7->g_6.f1, "p_7->g_6.f1", print_hash_value);
    transparent_crc(p_7->g_6.f2, "p_7->g_6.f2", print_hash_value);
    transparent_crc(p_7->g_6.f3, "p_7->g_6.f3", print_hash_value);
    transparent_crc(p_7->g_6.f4, "p_7->g_6.f4", print_hash_value);
    transparent_crc(p_7->v_collective, "p_7->v_collective", print_hash_value);
    transparent_crc(p_7->l_comm_values[get_linear_local_id()], "p_7->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_7->g_comm_values[get_linear_group_id() * 150 + get_linear_local_id()], "p_7->g_comm_values[get_linear_group_id() * 150 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
