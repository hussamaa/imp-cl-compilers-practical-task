// --atomics 50 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 68,10,6 -l 4,10,3
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

__constant uint32_t permutations[10][120] = {
{19,90,84,42,30,7,82,26,61,75,119,115,12,37,48,76,92,109,33,63,22,113,28,13,83,31,98,96,93,4,101,11,6,65,73,50,59,105,60,68,102,44,77,111,74,1,64,10,15,94,85,86,66,114,36,62,112,23,35,87,91,104,103,78,56,118,21,67,116,80,107,25,0,95,14,117,58,38,5,51,99,45,18,55,81,43,47,16,71,9,52,53,32,41,46,2,3,69,88,49,110,34,100,70,17,27,24,39,72,40,20,97,106,54,57,79,8,89,29,108}, // permutation 0
{26,96,114,104,10,109,1,108,44,97,0,75,63,50,92,29,119,87,51,5,11,72,23,67,56,113,112,43,15,105,40,88,85,110,17,58,66,78,101,65,59,24,7,98,42,49,80,27,76,99,102,57,22,6,116,55,64,90,46,70,38,37,48,28,83,16,12,73,79,3,13,53,18,20,111,93,32,45,21,68,91,84,107,19,4,86,30,94,103,2,36,89,106,14,34,8,31,81,25,47,9,61,117,77,71,39,69,33,82,100,52,118,60,54,74,95,62,35,41,115}, // permutation 1
{105,91,90,38,52,34,76,25,94,11,112,99,98,17,87,89,62,96,108,29,68,92,93,1,78,66,30,102,114,13,95,106,82,56,53,49,73,8,18,104,51,40,65,28,85,59,88,101,70,36,23,67,54,26,71,2,110,42,61,72,81,116,35,119,109,7,9,22,64,27,75,47,118,103,12,100,16,79,24,43,10,77,55,84,14,48,111,41,31,32,57,60,4,113,39,6,0,15,5,33,107,58,86,97,3,50,115,117,19,80,46,74,20,63,44,21,45,83,37,69}, // permutation 2
{101,25,74,71,18,4,82,92,59,86,30,15,78,29,1,5,80,37,2,107,63,77,65,95,96,33,38,94,118,75,85,84,62,46,3,27,56,111,69,17,83,68,76,91,32,23,67,87,114,43,8,41,97,39,102,79,21,35,19,89,36,64,55,103,42,117,113,57,28,104,81,112,13,11,22,109,34,70,88,40,58,44,119,14,20,100,51,52,53,9,6,45,93,90,54,98,60,26,115,0,31,66,10,12,72,24,50,48,16,61,105,99,108,49,110,7,106,73,116,47}, // permutation 3
{79,56,24,114,46,9,82,62,71,80,4,23,49,75,45,74,100,61,21,95,64,20,16,70,26,85,107,63,86,55,65,17,14,76,91,111,118,15,110,87,40,93,109,18,117,113,101,81,92,72,31,29,27,105,104,22,28,89,94,102,108,54,106,83,78,112,96,73,57,43,30,12,1,5,50,98,37,3,6,47,69,44,8,88,0,38,51,19,48,99,103,84,7,41,2,116,60,90,33,34,10,13,42,58,52,35,59,39,97,53,67,77,25,66,119,68,32,11,115,36}, // permutation 4
{39,65,10,81,26,107,36,24,92,68,45,111,15,5,16,64,72,51,75,109,90,95,116,79,7,35,86,74,80,101,85,114,48,8,105,78,32,42,118,56,70,11,119,21,62,0,73,25,44,17,117,99,6,93,113,41,27,108,91,4,43,13,106,40,103,19,29,59,47,84,115,3,37,18,63,87,31,102,98,23,46,28,110,34,58,61,77,22,88,9,30,55,67,82,104,96,33,38,20,76,52,100,97,54,49,12,69,83,1,89,53,14,2,50,112,66,57,94,60,71}, // permutation 5
{94,41,90,80,19,20,103,44,46,100,118,9,71,81,51,48,42,57,112,35,113,40,62,15,89,101,85,110,107,72,47,74,119,96,34,45,2,59,61,70,79,105,43,38,14,65,106,55,32,27,6,11,64,75,92,52,97,86,111,66,53,28,115,5,88,99,37,12,67,77,30,23,87,10,17,1,8,16,93,95,22,116,78,21,76,24,33,102,117,68,114,82,18,91,29,39,31,3,73,69,50,63,56,60,36,58,0,7,13,4,109,83,104,84,108,98,26,25,49,54}, // permutation 6
{87,96,111,40,89,1,107,109,97,4,37,77,119,116,72,102,110,26,63,88,86,91,104,90,0,38,18,73,12,103,48,106,70,92,64,30,52,105,57,100,13,5,56,84,17,29,117,94,2,6,108,58,8,28,41,80,19,115,55,113,79,85,99,24,35,45,51,27,47,83,82,98,60,69,75,42,49,50,81,44,16,118,66,15,3,22,21,20,67,36,32,46,33,101,10,54,11,74,43,62,78,7,95,65,25,68,71,114,112,53,23,31,14,93,61,59,76,39,34,9}, // permutation 7
{21,115,91,61,93,110,23,119,88,2,96,101,1,39,52,58,73,80,30,81,60,84,113,95,45,76,41,79,18,118,49,40,82,108,100,116,10,62,65,66,89,99,17,70,67,71,11,3,109,46,75,59,68,103,54,19,36,50,6,78,77,117,38,86,97,37,63,57,9,85,83,0,47,33,90,87,48,72,20,32,12,94,4,98,34,13,15,14,29,8,55,5,53,112,24,16,7,106,111,22,105,107,104,92,26,42,51,69,35,64,102,44,31,114,27,74,56,43,25,28}, // permutation 8
{46,103,10,6,119,53,19,18,28,99,69,102,108,31,81,2,16,27,17,58,90,11,110,64,72,0,66,104,96,78,77,38,92,94,82,48,116,40,112,86,107,20,62,32,41,54,55,33,35,89,44,39,26,14,101,73,80,109,7,59,68,117,74,67,111,5,75,1,113,106,57,83,56,100,50,36,93,34,13,76,49,79,84,97,65,12,85,60,42,9,3,52,23,118,63,22,88,51,61,71,105,21,98,8,15,45,4,24,43,47,114,87,115,95,25,30,70,29,91,37} // permutation 9
};

// Seed: 3321805898

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
   uint64_t  f0;
   int64_t  f1;
   uint32_t  f2;
   int16_t  f3;
   volatile uint32_t  f4;
};

struct S4 {
    int32_t g_3;
    int32_t * volatile g_2[5];
    struct S3 g_5;
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
struct S3  func_1(struct S4 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->l_comm_values p_6->g_5
 * writes: p_6->g_3
 */
struct S3  func_1(struct S4 * p_6)
{ /* block id: 4 */
    int32_t *l_4 = &p_6->g_3;
    (*l_4) = p_6->l_comm_values[(safe_mod_func_uint32_t_u_u(p_6->tid, 120))];
    return p_6->g_5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[120];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 120; i++)
            l_comm_values[i] = 1;
    struct S4 c_7;
    struct S4* p_6 = &c_7;
    struct S4 c_8 = {
        3L, // p_6->g_3
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_6->g_2
        {1UL,-1L,0xCFBCE008L,-1L,0x44CF5927L}, // p_6->g_5
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 120)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_3, "p_6->g_3", print_hash_value);
    transparent_crc(p_6->g_5.f0, "p_6->g_5.f0", print_hash_value);
    transparent_crc(p_6->g_5.f1, "p_6->g_5.f1", print_hash_value);
    transparent_crc(p_6->g_5.f2, "p_6->g_5.f2", print_hash_value);
    transparent_crc(p_6->g_5.f3, "p_6->g_5.f3", print_hash_value);
    transparent_crc(p_6->g_5.f4, "p_6->g_5.f4", print_hash_value);
    transparent_crc(p_6->v_collective, "p_6->v_collective", print_hash_value);
    transparent_crc(p_6->l_comm_values[get_linear_local_id()], "p_6->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 120 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 120 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
