// --atomics 6 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,99,1 -l 7,9,1
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

__constant uint32_t permutations[10][63] = {
{56,48,34,7,11,41,51,17,26,21,3,46,28,25,16,50,61,14,45,18,32,39,60,37,19,22,24,52,47,1,49,20,0,35,30,23,33,38,2,10,53,59,42,62,55,15,43,9,12,8,6,58,4,57,13,27,40,54,31,44,5,36,29}, // permutation 0
{29,18,49,6,48,11,61,3,59,25,13,50,2,44,9,54,28,33,34,30,5,31,23,53,17,51,45,21,37,19,42,1,38,57,8,43,60,56,40,62,36,20,10,35,16,46,0,12,39,27,55,32,4,58,47,24,52,7,14,26,41,15,22}, // permutation 1
{23,11,27,32,54,24,35,20,55,51,28,45,5,58,22,19,2,31,14,36,18,6,33,42,4,1,47,34,38,43,3,7,8,62,12,48,17,9,29,44,52,49,61,57,10,39,40,56,0,26,46,59,37,15,21,60,13,50,25,30,16,53,41}, // permutation 2
{5,19,16,21,45,50,30,12,18,61,58,17,44,62,26,56,6,25,39,11,57,42,51,53,8,31,13,20,37,46,48,36,35,49,23,47,27,15,24,43,2,32,7,14,10,34,40,0,38,33,1,9,55,28,3,52,54,60,22,59,41,29,4}, // permutation 3
{31,38,23,21,45,59,54,5,27,22,0,52,16,40,26,17,24,37,51,12,50,62,42,55,44,61,58,34,28,11,3,20,7,29,46,6,13,47,56,18,10,15,33,41,19,49,9,32,53,39,8,4,25,36,57,2,14,35,48,43,30,1,60}, // permutation 4
{11,13,22,50,3,53,52,24,23,7,12,28,49,32,20,18,46,42,0,1,62,56,41,8,35,19,51,6,30,43,47,17,34,45,61,58,59,25,5,29,57,31,26,55,39,37,21,38,16,9,54,10,33,48,2,4,27,14,40,15,44,60,36}, // permutation 5
{46,34,22,21,30,35,60,29,61,51,27,20,24,10,11,16,5,38,43,42,31,53,7,1,50,4,19,26,3,62,44,58,23,52,57,47,0,33,25,9,55,40,13,12,49,45,39,14,54,15,36,48,41,2,32,17,6,8,59,18,37,28,56}, // permutation 6
{51,26,15,32,45,17,4,41,2,36,1,58,34,47,39,5,49,48,28,61,9,54,46,33,27,50,62,11,24,18,40,8,60,35,42,20,56,19,13,25,38,55,31,23,53,3,37,29,59,30,12,43,14,7,57,22,52,16,6,10,44,21,0}, // permutation 7
{1,47,55,62,26,13,53,9,29,60,10,16,2,57,40,32,30,36,15,45,51,35,61,54,37,52,8,20,5,6,19,4,42,38,59,18,56,48,24,3,23,34,50,41,7,12,43,25,28,17,21,46,31,39,49,33,44,0,27,58,14,11,22}, // permutation 8
{22,40,24,7,35,26,30,59,25,44,36,9,52,42,45,3,50,2,23,19,37,17,12,48,55,27,58,61,53,16,33,32,5,20,60,56,28,4,38,29,21,1,34,49,54,41,43,10,13,11,46,31,57,51,6,8,0,15,62,14,47,39,18} // permutation 9
};

// Seed: 3084232180

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
   uint64_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   int64_t  f3;
   int32_t  f4;
   int32_t  f5;
   volatile uint32_t  f6;
   int32_t  f7;
};

struct S2 {
   int32_t  f0;
   int16_t  f1;
   volatile uint32_t  f2;
   int64_t  f3;
   volatile uint32_t  f4;
   uint32_t  f5;
   int16_t  f6;
   uint32_t  f7;
   volatile struct S1  f8;
};

struct S4 {
    uint32_t g_2;
    struct S2 g_5;
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
struct S2  func_1(struct S4 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_2 p_6->g_5
 * writes: p_6->g_2
 */
struct S2  func_1(struct S4 * p_6)
{ /* block id: 4 */
    ++p_6->g_2;
    return p_6->g_5;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_comm_values[i] = 1;
    struct S4 c_7;
    struct S4* p_6 = &c_7;
    struct S4 c_8 = {
        0xB43D2717L, // p_6->g_2
        {-10L,0L,4294967289UL,0x2BE197E7C14AB653L,4294967291UL,7UL,0x1FA4L,4294967292UL,{1UL,4294967295UL,0L,0x593BA6AED1D25BB0L,0x66193FE6L,0L,0xF3B0639EL,0L}}, // p_6->g_5
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 63)), permutations[0][get_linear_local_id()])), // p_6->tid
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
    transparent_crc(p_6->g_2, "p_6->g_2", print_hash_value);
    transparent_crc(p_6->g_5.f0, "p_6->g_5.f0", print_hash_value);
    transparent_crc(p_6->g_5.f1, "p_6->g_5.f1", print_hash_value);
    transparent_crc(p_6->g_5.f2, "p_6->g_5.f2", print_hash_value);
    transparent_crc(p_6->g_5.f3, "p_6->g_5.f3", print_hash_value);
    transparent_crc(p_6->g_5.f4, "p_6->g_5.f4", print_hash_value);
    transparent_crc(p_6->g_5.f5, "p_6->g_5.f5", print_hash_value);
    transparent_crc(p_6->g_5.f6, "p_6->g_5.f6", print_hash_value);
    transparent_crc(p_6->g_5.f7, "p_6->g_5.f7", print_hash_value);
    transparent_crc(p_6->g_5.f8.f0, "p_6->g_5.f8.f0", print_hash_value);
    transparent_crc(p_6->g_5.f8.f1, "p_6->g_5.f8.f1", print_hash_value);
    transparent_crc(p_6->g_5.f8.f2, "p_6->g_5.f8.f2", print_hash_value);
    transparent_crc(p_6->g_5.f8.f3, "p_6->g_5.f8.f3", print_hash_value);
    transparent_crc(p_6->g_5.f8.f4, "p_6->g_5.f8.f4", print_hash_value);
    transparent_crc(p_6->g_5.f8.f5, "p_6->g_5.f8.f5", print_hash_value);
    transparent_crc(p_6->g_5.f8.f6, "p_6->g_5.f8.f6", print_hash_value);
    transparent_crc(p_6->g_5.f8.f7, "p_6->g_5.f8.f7", print_hash_value);
    transparent_crc(p_6->v_collective, "p_6->v_collective", print_hash_value);
    transparent_crc(p_6->l_comm_values[get_linear_local_id()], "p_6->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_6->g_comm_values[get_linear_group_id() * 63 + get_linear_local_id()], "p_6->g_comm_values[get_linear_group_id() * 63 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
