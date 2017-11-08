// --atomics 7 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 26,32,10 -l 1,16,10
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

__constant uint32_t permutations[10][160] = {
{137,58,104,25,49,91,45,51,158,22,36,122,9,141,64,78,112,31,75,26,79,59,130,144,126,96,42,19,157,28,108,84,82,127,32,12,14,33,145,37,69,53,34,73,11,13,29,131,46,149,68,65,2,21,118,43,89,117,107,152,60,147,6,20,132,71,77,18,97,81,90,62,102,87,70,113,47,86,5,146,41,88,63,119,134,138,142,129,83,155,10,101,109,48,38,128,136,67,7,15,94,93,153,156,61,44,151,124,56,92,27,39,143,55,98,125,133,40,3,1,23,54,52,74,95,159,0,80,24,100,106,116,154,16,148,72,111,66,139,85,140,105,121,50,114,123,17,8,4,115,99,35,110,103,120,30,150,135,76,57}, // permutation 0
{136,147,28,41,44,14,29,31,96,126,152,10,101,107,110,39,66,50,135,83,134,82,78,24,85,6,71,9,86,37,77,54,25,34,129,70,35,125,131,111,117,18,53,105,109,36,114,61,23,148,140,79,149,40,63,1,13,137,89,108,121,72,56,15,75,3,20,102,118,103,93,127,26,19,5,97,106,98,38,42,128,145,88,81,100,158,139,132,73,99,141,119,153,52,90,67,138,45,142,57,55,0,146,59,95,92,12,74,33,144,94,49,151,157,150,30,84,87,133,64,17,58,21,22,46,51,155,76,4,120,48,124,60,143,115,91,2,116,43,32,16,130,123,47,159,7,68,112,65,62,104,80,122,11,154,69,156,113,27,8}, // permutation 1
{20,46,1,76,117,71,116,17,88,146,23,92,156,58,27,119,121,54,34,96,43,91,106,129,49,41,126,15,113,2,137,136,154,62,18,79,14,57,125,39,9,42,3,38,51,110,150,128,157,22,7,81,85,11,102,133,101,144,26,141,158,95,131,8,111,105,140,60,86,108,87,21,142,56,90,109,120,29,50,93,99,149,134,114,100,4,72,89,47,32,127,123,53,148,115,16,44,147,138,45,25,103,48,74,30,5,52,155,80,104,31,122,151,135,69,97,6,24,73,65,66,75,153,82,67,77,19,70,0,55,35,28,83,132,33,61,64,68,145,59,152,84,13,107,139,10,78,118,124,98,36,159,130,112,63,94,37,40,143,12}, // permutation 2
{91,131,88,29,15,31,36,138,17,103,72,60,151,107,52,153,20,111,119,95,22,50,143,7,120,44,139,81,6,141,142,62,65,86,80,114,18,51,158,157,33,123,118,41,128,97,96,99,56,73,79,46,82,39,75,87,21,74,129,54,136,90,92,154,115,76,58,5,2,77,66,42,106,67,144,152,64,38,93,53,130,4,0,12,83,94,59,34,63,69,132,150,78,148,135,70,134,40,71,146,14,19,156,57,16,145,89,112,110,9,125,27,43,121,113,26,10,126,61,108,122,155,100,47,48,133,24,137,55,117,105,101,35,98,116,28,104,127,85,45,124,32,37,30,84,1,149,13,49,109,147,11,3,140,68,23,25,8,159,102}, // permutation 3
{139,134,138,87,140,108,110,58,0,59,49,96,157,121,37,130,47,21,42,156,118,69,129,93,7,13,119,117,135,60,85,159,23,46,29,144,122,109,16,4,18,136,94,38,152,105,66,45,8,20,123,5,75,14,116,127,143,148,124,90,72,57,103,88,34,83,56,2,17,97,95,91,31,52,10,107,98,101,54,32,64,73,28,40,62,120,24,141,39,6,55,19,82,65,113,111,9,92,70,132,102,22,78,33,53,106,104,77,115,112,151,50,61,30,128,36,100,142,1,67,126,68,48,99,35,43,76,146,155,3,147,80,71,125,12,133,44,137,51,149,74,11,131,15,84,26,114,79,153,63,145,86,89,154,25,27,41,150,158,81}, // permutation 4
{21,75,54,55,72,156,31,34,24,106,150,71,83,102,95,129,52,96,138,155,1,112,144,56,80,12,87,23,91,19,154,76,45,103,36,117,125,8,70,130,32,67,158,6,93,57,73,0,128,82,42,108,16,61,110,40,44,100,28,38,17,4,11,35,122,65,10,43,46,60,141,145,159,142,85,149,143,20,132,137,98,58,64,127,48,109,78,115,86,51,30,62,104,47,124,146,33,50,3,126,133,119,18,90,13,2,147,153,113,151,63,135,49,39,120,134,123,105,53,84,7,26,69,121,25,68,94,99,111,157,107,77,79,136,9,152,131,116,22,14,5,37,148,92,59,140,139,89,118,15,97,66,101,114,29,81,41,27,88,74}, // permutation 5
{102,71,125,56,90,75,33,74,18,115,70,63,114,138,3,4,144,24,137,34,122,54,48,92,103,42,76,149,57,36,155,105,20,84,66,112,159,156,2,143,51,134,27,1,11,9,0,157,128,73,17,47,58,111,52,107,67,21,130,8,95,31,110,152,89,158,5,80,16,109,38,78,116,97,106,26,135,154,44,133,142,61,45,77,22,100,132,15,87,82,148,96,69,68,147,104,146,79,49,113,35,145,121,6,140,101,94,53,108,60,124,150,118,37,12,13,99,136,14,117,123,93,141,55,98,46,7,64,72,32,120,81,153,30,85,23,86,91,129,50,40,151,25,119,29,19,127,88,139,131,43,65,10,59,28,62,41,83,126,39}, // permutation 6
{75,110,35,83,157,58,54,69,105,141,86,13,128,41,16,125,2,56,67,62,46,123,144,61,140,70,118,48,82,77,32,55,9,95,114,112,121,146,138,38,5,14,91,72,53,96,15,111,68,24,153,106,23,120,155,34,47,49,97,127,131,30,94,0,17,21,90,115,134,7,85,158,92,133,71,93,126,27,102,11,29,8,51,65,142,149,73,107,143,42,39,87,151,100,122,132,19,116,145,76,109,25,154,104,10,36,89,63,57,50,52,159,20,99,137,103,80,119,156,26,101,6,147,88,64,28,81,152,60,40,124,135,3,84,12,4,79,33,59,108,150,136,78,44,37,98,130,18,66,31,113,129,1,22,43,139,74,148,117,45}, // permutation 7
{119,143,20,113,26,39,35,94,66,142,122,78,51,80,46,17,55,149,58,79,23,90,89,99,13,109,42,139,152,97,7,83,61,137,138,101,75,158,112,145,1,33,129,60,157,38,49,115,69,19,71,136,121,74,67,85,73,24,120,132,59,153,81,86,16,37,32,127,48,96,123,124,150,47,4,135,110,41,2,28,126,98,107,15,11,22,56,93,104,54,6,57,146,30,133,18,100,155,88,102,50,5,95,87,0,116,43,77,156,44,147,72,141,62,27,31,21,52,14,134,53,36,40,92,125,84,91,159,8,103,114,64,144,65,105,45,70,29,131,108,34,63,130,106,140,25,128,151,76,148,154,68,118,3,117,9,82,10,12,111}, // permutation 8
{72,70,130,108,85,88,99,76,16,30,34,129,131,124,142,74,6,51,157,58,38,0,114,5,3,52,86,145,44,42,97,78,8,61,73,39,144,1,91,50,141,116,27,83,149,154,63,12,139,118,17,159,121,31,151,65,89,60,19,35,140,137,7,84,37,111,98,41,120,153,115,133,112,135,136,22,100,2,81,90,9,102,155,24,95,21,33,87,125,134,55,13,46,29,43,18,10,25,158,143,14,66,49,71,113,75,36,68,28,64,152,96,103,94,45,104,122,48,148,101,128,138,23,123,146,147,79,77,150,109,15,93,53,67,56,54,105,40,126,26,59,80,32,132,47,117,4,11,156,106,69,20,119,127,62,92,110,57,107,82} // permutation 9
};

// Seed: 486775678

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
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
int32_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->l_comm_values
 * writes: p_5->g_4
 */
int32_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    uint8_t l_2[1];
    int32_t *l_3[7] = {(void*)0,&p_5->g_4,(void*)0,(void*)0,&p_5->g_4,(void*)0,(void*)0};
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x38L;
    p_5->g_4 = l_2[0];
    p_5->g_4 = (-1L);
    return p_5->l_comm_values[(safe_mod_func_uint32_t_u_u(p_5->tid, 160))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[160];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 160; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        (-1L), // p_5->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 160)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    transparent_crc(p_5->g_4, "p_5->g_4", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 160 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 160 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
