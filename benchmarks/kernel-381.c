// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 35,21,4 -l 35,1,4
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

__constant uint32_t permutations[10][140] = {
{6,114,3,133,36,31,61,65,47,28,108,17,123,34,68,18,2,41,71,90,45,116,4,26,106,14,102,129,135,40,73,77,91,95,127,86,121,50,13,48,87,62,12,72,93,52,59,22,20,110,134,25,37,66,38,51,117,99,32,39,7,122,21,19,0,29,109,83,35,63,119,27,89,107,111,55,76,58,124,1,115,94,84,75,131,56,132,49,5,120,30,44,60,88,8,54,69,81,112,79,126,85,78,118,128,125,23,82,92,101,64,113,98,24,53,97,43,33,10,70,80,11,96,103,137,67,57,139,46,105,104,9,16,100,15,130,42,136,138,74}, // permutation 0
{115,109,0,26,27,22,107,101,75,94,50,1,60,92,69,36,45,23,54,91,99,42,132,74,133,138,127,2,83,65,81,19,119,114,137,86,15,18,102,126,70,58,61,139,17,46,41,53,39,104,48,95,105,118,97,66,111,5,32,136,8,25,47,113,11,34,98,51,100,117,125,40,90,82,76,29,16,123,93,12,112,73,6,38,67,85,128,71,131,130,129,79,31,3,87,134,103,59,9,28,21,89,88,124,49,63,35,30,55,7,33,77,106,13,120,110,62,52,4,72,108,116,64,80,10,122,135,84,20,96,78,44,24,37,121,14,43,57,56,68}, // permutation 1
{58,49,79,81,43,116,83,125,115,5,135,1,54,20,137,41,32,42,4,25,121,89,112,128,82,114,90,7,29,67,103,77,8,6,35,13,60,45,63,106,94,73,138,38,66,65,86,92,28,134,88,51,16,123,122,69,61,124,14,117,10,97,75,120,78,3,12,132,109,126,22,104,70,31,105,56,80,19,74,76,98,127,50,39,72,107,9,111,47,85,118,18,59,53,40,87,37,48,24,30,36,34,129,96,131,71,119,136,27,100,44,11,113,101,23,108,62,130,17,15,0,2,46,110,68,55,64,99,52,26,95,33,84,139,91,57,133,21,102,93}, // permutation 2
{76,46,70,138,121,69,61,39,73,65,16,25,0,58,47,77,5,4,33,105,54,133,75,34,86,92,41,29,44,127,31,23,91,36,6,123,106,21,136,80,64,131,115,53,50,130,38,128,32,15,35,93,90,2,45,88,117,94,67,116,8,135,56,42,98,59,27,7,57,20,3,81,24,87,109,118,101,14,119,72,124,19,107,52,126,17,103,111,114,40,28,30,99,26,102,62,125,104,37,11,13,112,96,10,134,49,89,113,1,48,100,129,97,84,51,108,63,43,9,66,110,79,139,132,120,60,82,71,122,18,85,83,68,74,22,55,78,95,12,137}, // permutation 3
{44,56,78,108,95,138,123,69,20,0,96,59,64,94,109,39,105,118,2,70,68,80,115,90,98,73,60,54,43,75,119,83,11,14,129,49,62,117,77,106,125,47,30,12,111,61,93,72,19,71,86,85,46,92,57,21,81,139,130,82,87,137,126,63,48,41,104,15,110,34,53,128,52,8,50,33,26,89,100,114,35,76,18,136,103,31,65,133,99,40,17,58,23,51,10,124,116,132,131,24,91,66,28,38,27,5,84,88,42,122,3,25,67,74,127,79,107,55,29,97,112,1,22,16,102,32,36,9,113,121,7,101,120,134,37,4,45,13,135,6}, // permutation 4
{23,122,93,86,96,20,103,108,134,55,81,77,89,0,9,3,56,47,22,45,36,106,112,18,138,24,49,123,113,76,132,91,120,104,87,6,13,110,63,111,7,54,115,70,136,12,50,53,98,90,79,130,99,35,25,65,128,43,107,66,29,62,46,11,117,17,39,32,80,15,19,78,126,71,38,124,1,68,40,84,100,105,127,92,16,75,34,41,88,59,27,8,125,129,83,2,26,21,42,5,60,95,4,114,85,94,64,101,72,67,109,33,118,48,28,116,82,61,31,37,58,73,30,121,137,14,69,74,102,135,10,133,52,57,139,97,44,119,131,51}, // permutation 5
{1,129,9,44,115,45,135,17,5,38,29,15,121,126,16,131,132,97,124,76,127,110,66,70,120,106,134,118,77,0,61,49,4,87,119,107,22,43,68,23,34,32,33,39,78,27,75,8,10,84,71,60,56,25,82,112,57,48,128,85,46,50,26,13,90,81,108,11,130,14,88,93,65,51,96,35,18,6,73,36,2,63,89,86,116,92,54,20,113,102,104,109,58,125,139,53,103,40,30,69,83,91,133,100,41,24,52,114,55,31,42,105,64,37,136,62,12,94,79,7,80,98,117,95,137,99,3,47,101,74,21,59,138,28,122,72,19,111,123,67}, // permutation 6
{124,129,75,24,137,51,52,5,72,106,43,121,69,135,133,105,134,102,54,93,128,25,23,90,8,101,84,1,70,10,103,2,3,58,15,38,41,89,53,95,62,21,14,50,20,61,67,82,0,119,45,31,111,46,109,77,114,7,98,28,33,11,132,9,55,112,136,39,19,16,4,80,47,34,48,78,73,6,56,49,115,86,27,123,81,32,120,118,13,35,57,65,117,94,36,131,22,107,44,104,83,30,125,127,138,74,63,91,42,85,79,139,126,37,12,96,26,88,130,97,29,68,116,76,66,40,60,108,92,99,71,122,100,59,17,110,18,64,87,113}, // permutation 7
{101,0,37,83,24,134,81,107,125,132,130,99,110,60,43,10,69,40,66,111,32,3,11,119,117,8,108,121,88,50,65,139,30,45,127,74,58,78,12,26,109,47,27,21,90,38,36,95,56,94,55,35,128,5,6,48,22,53,89,59,29,2,76,18,41,17,123,14,98,28,118,103,68,100,54,33,71,85,19,112,42,73,86,122,138,39,93,57,113,15,72,49,9,104,131,52,79,77,129,114,23,20,4,136,84,62,31,80,102,115,120,64,116,105,124,16,13,97,92,75,25,106,91,133,137,51,7,67,82,135,63,70,34,126,46,44,1,87,61,96}, // permutation 8
{60,106,3,58,99,56,81,107,43,69,126,34,12,40,61,128,123,124,121,116,129,48,92,73,13,20,97,134,100,86,4,39,55,71,67,6,111,38,102,98,89,15,117,46,53,59,37,68,2,90,120,33,115,112,65,70,132,50,26,45,25,137,54,44,28,114,87,7,18,122,103,5,64,63,131,91,16,127,21,72,110,35,79,36,85,96,109,57,52,10,138,119,14,136,84,47,9,80,104,113,51,31,139,29,88,11,22,41,62,75,1,82,95,42,49,130,66,74,101,19,78,118,125,133,32,76,94,23,135,105,27,83,77,8,30,93,17,24,0,108} // permutation 9
};

// Seed: 2154133832

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
    int32_t g_3;
    volatile int16_t g_4;
    int16_t g_5;
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
uint32_t  func_1(struct S3 * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_10->l_comm_values
 * writes:
 */
uint32_t  func_1(struct S3 * p_10)
{ /* block id: 4 */
    int32_t *l_2[4] = {&p_10->g_3,&p_10->g_3,&p_10->g_3,&p_10->g_3};
    int64_t l_6 = (-5L);
    uint32_t l_7 = 0x90C54408L;
    int i;
    l_7--;
    return p_10->l_comm_values[(safe_mod_func_uint32_t_u_u(p_10->tid, 140))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[140];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 140; i++)
            l_comm_values[i] = 1;
    struct S3 c_11;
    struct S3* p_10 = &c_11;
    struct S3 c_12 = {
        0x62BBEF7DL, // p_10->g_3
        0x1D21L, // p_10->g_4
        (-1L), // p_10->g_5
        0, // p_10->v_collective
        sequence_input[get_global_id(0)], // p_10->global_0_offset
        sequence_input[get_global_id(1)], // p_10->global_1_offset
        sequence_input[get_global_id(2)], // p_10->global_2_offset
        sequence_input[get_local_id(0)], // p_10->local_0_offset
        sequence_input[get_local_id(1)], // p_10->local_1_offset
        sequence_input[get_local_id(2)], // p_10->local_2_offset
        sequence_input[get_group_id(0)], // p_10->group_0_offset
        sequence_input[get_group_id(1)], // p_10->group_1_offset
        sequence_input[get_group_id(2)], // p_10->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 140)), permutations[0][get_linear_local_id()])), // p_10->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_11 = c_12;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_10);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_10->g_3, "p_10->g_3", print_hash_value);
    transparent_crc(p_10->g_4, "p_10->g_4", print_hash_value);
    transparent_crc(p_10->g_5, "p_10->g_5", print_hash_value);
    transparent_crc(p_10->v_collective, "p_10->v_collective", print_hash_value);
    transparent_crc(p_10->l_comm_values[get_linear_local_id()], "p_10->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_10->g_comm_values[get_linear_group_id() * 140 + get_linear_local_id()], "p_10->g_comm_values[get_linear_group_id() * 140 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
