// --atomics 5 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,74,1 -l 4,37,1
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

__constant uint32_t permutations[10][148] = {
{84,138,94,30,146,141,122,77,78,24,131,114,16,106,108,32,49,53,62,71,9,140,63,46,11,38,12,21,98,7,93,6,137,103,87,116,128,119,117,5,100,110,50,82,113,125,72,15,85,1,54,57,143,70,45,4,135,79,3,75,124,44,23,123,147,115,8,80,126,86,92,69,118,95,136,31,59,58,129,40,90,37,28,56,88,68,17,61,111,18,145,120,65,134,107,29,27,74,66,67,73,2,25,52,22,97,10,33,130,121,109,19,64,76,0,41,48,47,99,89,35,81,91,102,133,14,142,36,20,96,55,43,101,127,144,132,51,83,39,13,105,60,139,112,26,104,34,42}, // permutation 0
{19,58,56,140,40,18,55,75,50,71,95,132,94,31,51,61,45,144,10,129,17,89,35,63,122,146,91,70,12,120,34,78,38,131,143,16,138,8,104,142,137,106,124,116,14,68,102,53,66,62,109,49,21,133,69,135,127,130,52,87,119,112,128,147,23,111,85,43,73,9,99,107,25,5,79,46,7,22,60,98,72,134,90,41,32,30,57,15,93,28,1,48,2,105,33,13,64,113,11,92,4,141,77,44,29,20,136,88,86,108,47,6,3,36,39,74,65,82,81,123,139,54,125,117,121,145,27,42,24,26,126,80,100,118,96,76,114,0,84,59,103,37,115,101,67,83,110,97}, // permutation 1
{19,25,63,64,53,110,78,60,67,58,114,70,107,106,82,88,108,9,83,65,92,117,142,13,59,7,121,62,32,132,86,23,128,103,111,8,44,135,97,0,42,15,140,95,123,16,5,1,14,71,74,11,31,51,73,37,45,66,133,124,17,139,24,29,105,27,57,144,30,72,69,134,119,125,137,47,55,56,84,22,130,49,76,100,52,61,87,81,96,91,6,127,129,118,138,41,115,2,85,104,35,120,143,136,89,50,99,39,3,75,54,20,101,102,141,98,109,68,93,34,38,12,10,79,18,33,48,94,21,77,43,131,26,4,113,116,40,90,146,80,145,112,147,122,126,36,46,28}, // permutation 2
{107,131,80,134,145,16,6,27,18,38,109,141,14,87,22,91,104,4,95,41,60,30,123,127,82,124,63,120,100,26,43,69,88,39,33,21,51,85,0,3,96,10,47,98,106,138,84,140,132,117,125,64,142,93,83,143,53,11,118,75,108,105,126,12,112,25,103,54,74,133,115,61,86,102,9,68,113,122,70,45,144,114,52,119,92,50,8,56,146,57,67,77,135,73,13,139,65,90,17,111,130,81,46,19,23,31,71,62,99,20,44,76,49,66,36,78,59,89,42,101,40,2,32,137,35,147,72,110,58,129,7,48,5,55,24,97,15,136,34,128,79,29,1,121,28,94,116,37}, // permutation 3
{37,76,121,30,97,93,141,131,84,133,135,132,34,104,21,44,10,144,25,61,80,0,46,114,118,7,24,96,146,39,129,27,53,17,42,48,11,79,62,8,88,63,127,67,9,66,123,107,40,58,51,43,108,14,52,138,128,116,91,117,1,75,125,87,105,73,28,122,147,54,130,38,139,136,33,68,109,115,82,94,72,6,70,15,29,81,124,113,140,98,100,95,110,47,36,111,103,119,112,13,22,90,106,74,99,102,60,31,77,41,35,145,20,59,2,137,92,71,32,64,83,23,49,120,18,101,50,12,134,86,19,69,57,89,126,143,45,5,78,26,16,85,142,65,3,56,4,55}, // permutation 4
{11,45,35,71,139,72,136,98,60,51,80,124,17,81,19,28,143,43,27,109,18,65,29,119,55,90,135,99,145,100,79,50,78,92,94,15,95,1,82,108,116,106,73,105,76,115,23,89,67,74,14,97,93,26,75,121,142,25,4,21,66,144,44,86,120,85,64,42,69,6,7,133,111,34,131,147,2,101,130,61,113,49,140,40,20,57,103,104,22,96,38,0,32,112,88,3,141,9,70,53,68,126,59,54,117,138,127,47,125,107,146,5,24,56,128,33,12,13,37,46,10,36,31,62,129,39,77,123,58,114,63,137,30,134,118,87,52,83,48,84,102,91,41,16,132,110,8,122}, // permutation 5
{72,139,61,97,82,108,109,104,15,4,113,135,101,129,71,14,53,73,128,44,121,6,75,3,123,19,115,54,62,42,16,17,117,7,93,144,68,2,131,81,58,34,118,31,98,11,111,116,84,107,86,47,133,105,27,127,141,76,64,146,78,66,22,132,29,87,100,59,95,45,21,18,56,37,1,28,124,147,12,63,130,41,96,94,32,46,57,106,38,26,60,33,88,67,134,30,90,20,69,80,10,110,55,52,39,36,145,24,43,143,92,142,70,125,8,136,40,65,85,35,77,99,0,138,126,51,74,120,114,13,23,140,79,91,50,102,119,112,25,9,103,83,5,137,89,122,49,48}, // permutation 6
{61,36,63,135,70,32,47,77,101,79,12,40,49,5,84,0,19,11,75,111,31,15,33,80,48,39,72,113,24,14,105,102,2,132,4,56,99,76,118,92,130,45,62,58,126,117,131,86,73,55,20,68,120,94,38,147,89,109,71,88,69,140,137,98,51,133,136,54,37,95,110,23,46,8,64,138,112,139,103,134,100,128,9,93,85,90,27,143,21,74,43,7,18,10,121,107,6,30,26,52,116,119,13,129,145,124,142,87,78,127,67,96,82,53,83,16,3,66,144,106,42,81,115,59,125,29,25,146,141,50,122,114,123,34,44,60,108,104,41,1,91,97,22,28,35,65,57,17}, // permutation 7
{1,139,33,92,85,111,146,79,53,40,109,17,118,61,91,144,22,137,96,88,143,54,134,74,50,31,3,123,115,26,101,52,107,81,12,34,21,82,138,23,32,75,129,67,99,98,29,47,57,8,121,45,37,133,120,70,19,56,77,90,128,55,125,9,36,114,24,103,58,108,78,18,35,66,48,49,76,97,41,94,136,69,73,113,38,124,132,7,141,106,25,5,39,20,130,64,122,0,95,87,126,145,127,89,2,27,28,16,110,140,46,131,6,147,105,80,30,43,83,11,4,116,10,119,68,51,86,42,65,135,112,104,84,100,13,59,63,60,44,102,93,72,117,62,15,14,142,71}, // permutation 8
{18,123,32,60,135,76,31,15,121,132,83,79,50,92,129,40,55,75,124,67,66,25,65,46,87,59,84,13,112,82,146,94,103,12,11,101,10,128,39,52,109,47,54,58,28,95,41,127,49,133,51,80,77,120,72,63,43,19,21,64,6,24,29,113,140,68,70,96,61,126,116,73,33,111,85,22,131,134,27,108,57,118,69,107,17,86,16,37,42,89,97,71,0,93,141,98,5,125,1,23,44,38,2,3,110,104,147,62,35,91,106,74,139,143,137,138,36,122,78,88,8,99,30,81,136,26,7,117,4,102,56,45,115,34,130,105,48,144,53,20,142,90,14,145,9,100,114,119} // permutation 9
};

// Seed: 4136562578

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
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
int32_t  func_1(struct S0 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_4 p_6->l_comm_values p_6->g_comm_values
 * writes: p_6->g_4
 */
int32_t  func_1(struct S0 * p_6)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_2 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L), (VECTOR(int32_t, 2))(7L, (-1L)), (VECTOR(int32_t, 2))(7L, (-1L)), 7L, (-1L), 7L, (-1L));
    int32_t *l_3 = &p_6->g_4;
    VECTOR(uint32_t, 8) l_5 = (VECTOR(uint32_t, 8))(0x020BD2ABL, (VECTOR(uint32_t, 4))(0x020BD2ABL, (VECTOR(uint32_t, 2))(0x020BD2ABL, 4294967289UL), 4294967289UL), 4294967289UL, 0x020BD2ABL, 4294967289UL);
    int i;
    (*l_3) ^= ((VECTOR(int32_t, 2))(l_2.s23)).lo;
    (*l_3) |= p_6->l_comm_values[(safe_mod_func_uint32_t_u_u(p_6->tid, 148))];
    (*l_3) = (~(((VECTOR(uint32_t, 4))(l_5.s0473)).y , p_6->g_comm_values[p_6->tid]));
    return (*l_3);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[148];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 148; i++)
            l_comm_values[i] = 1;
    struct S0 c_7;
    struct S0* p_6 = &c_7;
    struct S0 c_8 = {
        8L, // p_6->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
