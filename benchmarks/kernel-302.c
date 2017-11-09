// --atomics 53 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,84,2 -l 3,3,1
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

__constant uint32_t permutations[10][9] = {
{1,5,7,0,8,6,2,3,4}, // permutation 0
{8,0,5,4,6,2,7,3,1}, // permutation 1
{1,0,3,7,2,4,6,5,8}, // permutation 2
{1,7,8,0,3,5,6,2,4}, // permutation 3
{3,4,6,5,2,7,0,1,8}, // permutation 4
{2,7,6,0,8,4,1,5,3}, // permutation 5
{7,0,3,2,8,5,6,4,1}, // permutation 6
{5,8,1,3,7,2,0,4,6}, // permutation 7
{1,7,2,4,5,3,0,8,6}, // permutation 8
{1,2,7,4,0,6,5,3,8} // permutation 9
};

// Seed: 729431701

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   volatile uint32_t  f3;
   uint8_t  f4;
   int32_t  f5;
};

struct S1 {
   volatile int32_t  f0;
   volatile uint16_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
   uint32_t  f4;
   volatile uint32_t  f5;
   struct S0  f6;
   uint32_t  f7;
   uint64_t  f8;
   int32_t  f9;
};

struct S3 {
    VECTOR(int32_t, 2) g_5;
    int32_t g_6;
    int32_t *g_25;
    int32_t ** volatile g_24;
    struct S1 g_26;
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
struct S1  func_1(struct S3 * p_27);
int32_t * func_2(int32_t * p_3, struct S3 * p_27);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_27->g_6 p_27->g_24 p_27->g_26
 * writes: p_27->g_6 p_27->g_25
 */
struct S1  func_1(struct S3 * p_27)
{ /* block id: 4 */
    int32_t *l_4 = (void*)0;
    (*p_27->g_24) = func_2(l_4, p_27);
    return p_27->g_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_27->g_6
 * writes: p_27->g_6
 */
int32_t * func_2(int32_t * p_3, struct S3 * p_27)
{ /* block id: 5 */
    int32_t l_20 = 0x50C7F122L;
    uint8_t l_21 = 249UL;
    for (p_27->g_6 = 0; (p_27->g_6 <= (-29)); --p_27->g_6)
    { /* block id: 8 */
        int32_t *l_9 = (void*)0;
        int32_t *l_10 = (void*)0;
        int32_t *l_11 = (void*)0;
        int32_t *l_12 = (void*)0;
        int32_t *l_13 = (void*)0;
        int32_t *l_14 = (void*)0;
        int32_t *l_15 = (void*)0;
        int32_t l_16 = 1L;
        VECTOR(int32_t, 2) l_17 = (VECTOR(int32_t, 2))(0x6369DDA3L, 0x253674F9L);
        int32_t *l_18 = (void*)0;
        int32_t *l_19[9][9][3] = {{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}},{{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16},{&p_27->g_6,&p_27->g_6,&l_16}}};
        int i, j, k;
        ++l_21;
    }
    return &p_27->g_6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_comm_values[i] = 1;
    struct S3 c_28;
    struct S3* p_27 = &c_28;
    struct S3 c_29 = {
        (VECTOR(int32_t, 2))((-7L), 1L), // p_27->g_5
        0x23B16AACL, // p_27->g_6
        &p_27->g_6, // p_27->g_25
        &p_27->g_25, // p_27->g_24
        {0x5D0043BDL,7UL,-5L,18446744073709551615UL,0UL,0x7622B461L,{0x9332C321L,0x7BB12200L,0x908CB2CCL,0x5678016BL,0x41L,-9L},4294967292UL,6UL,0x5BE583C6L}, // p_27->g_26
        0, // p_27->v_collective
        sequence_input[get_global_id(0)], // p_27->global_0_offset
        sequence_input[get_global_id(1)], // p_27->global_1_offset
        sequence_input[get_global_id(2)], // p_27->global_2_offset
        sequence_input[get_local_id(0)], // p_27->local_0_offset
        sequence_input[get_local_id(1)], // p_27->local_1_offset
        sequence_input[get_local_id(2)], // p_27->local_2_offset
        sequence_input[get_group_id(0)], // p_27->group_0_offset
        sequence_input[get_group_id(1)], // p_27->group_1_offset
        sequence_input[get_group_id(2)], // p_27->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[0][get_linear_local_id()])), // p_27->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_28 = c_29;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_27);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_27->g_5.x, "p_27->g_5.x", print_hash_value);
    transparent_crc(p_27->g_5.y, "p_27->g_5.y", print_hash_value);
    transparent_crc(p_27->g_6, "p_27->g_6", print_hash_value);
    transparent_crc(p_27->g_26.f0, "p_27->g_26.f0", print_hash_value);
    transparent_crc(p_27->g_26.f1, "p_27->g_26.f1", print_hash_value);
    transparent_crc(p_27->g_26.f2, "p_27->g_26.f2", print_hash_value);
    transparent_crc(p_27->g_26.f3, "p_27->g_26.f3", print_hash_value);
    transparent_crc(p_27->g_26.f4, "p_27->g_26.f4", print_hash_value);
    transparent_crc(p_27->g_26.f5, "p_27->g_26.f5", print_hash_value);
    transparent_crc(p_27->g_26.f6.f0, "p_27->g_26.f6.f0", print_hash_value);
    transparent_crc(p_27->g_26.f6.f1, "p_27->g_26.f6.f1", print_hash_value);
    transparent_crc(p_27->g_26.f6.f2, "p_27->g_26.f6.f2", print_hash_value);
    transparent_crc(p_27->g_26.f6.f3, "p_27->g_26.f6.f3", print_hash_value);
    transparent_crc(p_27->g_26.f6.f4, "p_27->g_26.f6.f4", print_hash_value);
    transparent_crc(p_27->g_26.f6.f5, "p_27->g_26.f6.f5", print_hash_value);
    transparent_crc(p_27->g_26.f7, "p_27->g_26.f7", print_hash_value);
    transparent_crc(p_27->g_26.f8, "p_27->g_26.f8", print_hash_value);
    transparent_crc(p_27->g_26.f9, "p_27->g_26.f9", print_hash_value);
    transparent_crc(p_27->v_collective, "p_27->v_collective", print_hash_value);
    transparent_crc(p_27->l_comm_values[get_linear_local_id()], "p_27->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_27->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()], "p_27->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
