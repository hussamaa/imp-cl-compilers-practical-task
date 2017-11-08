// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 8,10,100 -l 2,10,5
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

__constant uint32_t permutations[10][100] = {
{95,28,83,51,75,85,29,44,88,65,60,34,21,64,71,90,84,14,1,18,46,39,70,96,89,66,16,15,17,8,31,54,22,35,50,82,12,67,78,45,19,23,42,59,49,11,91,32,73,25,47,27,38,94,62,58,5,4,30,57,77,79,13,24,26,48,7,81,3,55,87,20,61,99,97,69,43,10,98,86,37,80,63,40,9,52,92,74,2,0,76,93,72,68,33,56,41,6,36,53}, // permutation 0
{13,93,67,56,98,28,5,99,2,45,81,10,61,40,77,19,20,53,49,4,1,47,34,14,57,52,73,97,24,18,66,83,39,62,68,82,75,44,32,79,38,12,63,87,76,51,85,46,65,64,72,69,55,60,84,15,29,41,91,21,74,0,92,96,3,54,35,36,78,11,16,26,48,95,9,86,59,8,80,94,42,90,71,6,43,31,22,58,88,17,37,30,27,23,7,50,89,33,70,25}, // permutation 1
{23,94,3,66,47,28,49,7,5,55,80,84,44,83,8,33,82,13,27,0,99,20,79,39,81,4,32,60,51,78,26,18,90,15,40,24,10,56,59,21,67,71,2,1,64,62,88,34,85,46,97,73,25,87,57,54,14,63,70,95,42,75,41,68,72,77,43,61,9,35,92,74,37,11,76,29,58,53,65,16,45,89,31,12,22,38,48,17,96,19,93,69,52,36,98,6,91,86,50,30}, // permutation 2
{83,71,60,59,35,48,88,64,23,98,0,7,82,99,3,73,80,41,68,62,52,31,9,61,37,74,1,18,55,54,69,49,26,91,85,5,13,77,45,6,4,22,29,70,66,10,2,86,56,79,30,76,63,40,94,38,95,44,8,57,42,25,81,97,87,19,12,33,36,65,21,84,27,34,46,16,89,43,47,96,53,17,78,58,28,92,93,90,51,72,15,50,75,32,14,20,24,11,67,39}, // permutation 3
{88,20,93,23,69,60,64,76,72,55,54,13,41,58,11,83,3,37,86,28,99,65,47,19,74,39,1,92,77,84,71,87,53,44,26,21,82,24,50,0,6,89,34,61,46,32,4,36,78,22,15,73,2,45,10,43,30,97,5,68,25,8,98,80,52,31,75,95,70,35,16,27,59,48,81,40,96,57,33,29,51,7,38,63,17,94,62,66,67,56,42,18,12,85,91,9,14,49,90,79}, // permutation 4
{57,81,45,46,14,61,70,79,77,20,44,53,66,10,39,36,6,31,55,5,58,98,78,60,97,32,88,92,59,56,13,17,68,29,23,93,11,26,80,1,38,4,89,47,49,69,51,21,40,71,12,96,43,90,33,76,30,84,35,52,24,0,99,87,50,15,19,18,37,74,82,28,62,91,63,94,86,65,72,73,95,22,41,2,54,85,27,7,34,48,9,42,25,64,8,67,75,83,16,3}, // permutation 5
{76,32,81,26,56,15,73,50,82,61,96,6,29,42,22,47,83,67,49,1,11,51,5,77,38,45,33,95,23,99,48,69,72,28,9,86,8,4,94,17,13,14,40,93,59,65,39,10,43,36,84,52,46,85,53,19,16,21,64,12,31,92,58,25,88,79,62,68,0,55,57,18,34,44,54,70,60,27,3,63,80,37,24,97,7,90,75,41,66,2,98,35,71,74,89,78,91,20,87,30}, // permutation 6
{31,66,96,99,81,1,9,32,20,53,90,14,47,69,85,38,95,21,15,89,17,62,46,43,42,41,80,97,45,79,56,88,18,10,51,16,65,58,13,36,87,0,70,44,93,7,4,8,61,59,23,12,77,2,91,60,5,72,40,94,37,92,75,50,73,84,25,64,86,35,76,19,55,48,67,30,52,11,82,98,33,39,34,78,22,29,57,49,54,27,24,6,68,28,3,63,83,71,26,74}, // permutation 7
{16,12,55,73,89,34,95,92,70,76,59,80,54,53,64,46,93,9,74,35,58,2,75,11,71,83,26,41,96,14,97,91,78,24,85,37,56,32,67,23,81,3,40,84,13,88,21,44,7,66,51,28,0,49,15,4,6,36,52,39,43,19,69,31,1,47,94,5,27,17,79,82,61,42,29,65,57,77,50,22,20,99,60,72,30,90,63,45,48,38,68,25,86,33,10,62,98,18,87,8}, // permutation 8
{37,62,50,12,46,30,47,64,41,15,55,13,17,22,97,74,16,1,63,67,44,24,42,38,10,14,31,6,3,5,7,53,21,86,11,32,91,82,75,59,72,84,34,90,68,20,81,70,96,36,78,49,93,94,2,57,29,58,98,8,76,65,95,25,83,92,56,80,33,18,61,88,60,52,66,28,35,51,40,79,45,26,39,99,23,4,19,27,69,73,0,48,87,89,54,71,77,9,43,85} // permutation 9
};

// Seed: 3007947954

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile uint64_t  f1;
   int8_t  f2;
   int8_t  f3;
   int32_t  f4;
   volatile int32_t  f5;
   int32_t  f6;
   volatile int32_t  f7;
   uint16_t  f8;
   int32_t  f9;
};

struct S3 {
    volatile struct S0 g_2;
    volatile struct S0 * volatile g_3;
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
int32_t  func_1(struct S3 * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_4->g_2 p_4->g_3
 * writes: p_4->g_2
 */
int32_t  func_1(struct S3 * p_4)
{ /* block id: 4 */
    (*p_4->g_3) = p_4->g_2;
    return p_4->g_2.f8;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[100];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 100; i++)
            l_comm_values[i] = 1;
    struct S3 c_5;
    struct S3* p_4 = &c_5;
    struct S3 c_6 = {
        {0x135E1F6F08421705L,0x141A9C2132456160L,1L,0x16L,-1L,0x5594D035L,1L,-1L,1UL,-5L}, // p_4->g_2
        &p_4->g_2, // p_4->g_3
        0, // p_4->v_collective
        sequence_input[get_global_id(0)], // p_4->global_0_offset
        sequence_input[get_global_id(1)], // p_4->global_1_offset
        sequence_input[get_global_id(2)], // p_4->global_2_offset
        sequence_input[get_local_id(0)], // p_4->local_0_offset
        sequence_input[get_local_id(1)], // p_4->local_1_offset
        sequence_input[get_local_id(2)], // p_4->local_2_offset
        sequence_input[get_group_id(0)], // p_4->group_0_offset
        sequence_input[get_group_id(1)], // p_4->group_1_offset
        sequence_input[get_group_id(2)], // p_4->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[0][get_linear_local_id()])), // p_4->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_5 = c_6;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_4);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_4->g_2.f0, "p_4->g_2.f0", print_hash_value);
    transparent_crc(p_4->g_2.f1, "p_4->g_2.f1", print_hash_value);
    transparent_crc(p_4->g_2.f2, "p_4->g_2.f2", print_hash_value);
    transparent_crc(p_4->g_2.f3, "p_4->g_2.f3", print_hash_value);
    transparent_crc(p_4->g_2.f4, "p_4->g_2.f4", print_hash_value);
    transparent_crc(p_4->g_2.f5, "p_4->g_2.f5", print_hash_value);
    transparent_crc(p_4->g_2.f6, "p_4->g_2.f6", print_hash_value);
    transparent_crc(p_4->g_2.f7, "p_4->g_2.f7", print_hash_value);
    transparent_crc(p_4->g_2.f8, "p_4->g_2.f8", print_hash_value);
    transparent_crc(p_4->g_2.f9, "p_4->g_2.f9", print_hash_value);
    transparent_crc(p_4->v_collective, "p_4->v_collective", print_hash_value);
    transparent_crc(p_4->l_comm_values[get_linear_local_id()], "p_4->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_4->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()], "p_4->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
