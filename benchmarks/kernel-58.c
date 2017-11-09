// --atomics 62 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,73,1 -l 59,1,1
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

__constant uint32_t permutations[10][59] = {
{44,0,16,43,22,54,25,23,20,47,39,24,28,13,49,14,9,30,12,26,45,17,33,1,38,48,42,37,4,6,11,55,58,32,5,29,52,7,18,50,35,46,21,36,56,51,34,8,15,10,31,27,40,57,3,2,41,19,53}, // permutation 0
{16,27,13,18,23,0,14,51,33,46,9,30,52,56,3,32,48,21,57,22,1,26,7,47,35,24,42,37,20,25,5,31,6,8,28,12,58,49,10,39,43,2,50,40,55,44,45,11,29,41,36,15,38,53,19,54,17,34,4}, // permutation 1
{8,24,12,46,37,58,52,55,4,48,5,19,0,18,28,41,14,30,51,36,11,50,22,10,23,20,16,49,21,39,29,9,3,34,56,43,7,15,47,40,17,38,33,6,45,27,42,57,35,44,13,25,1,53,54,31,26,32,2}, // permutation 2
{27,21,32,10,36,34,3,0,39,28,41,16,38,54,45,14,37,52,40,19,25,47,17,26,23,42,29,11,50,20,53,48,1,6,13,15,4,31,44,18,7,12,35,49,46,43,33,9,57,5,24,30,2,56,58,55,51,22,8}, // permutation 3
{52,36,23,55,44,29,40,22,26,48,8,13,45,20,42,34,41,56,46,37,27,32,47,14,4,21,54,35,25,57,5,10,0,18,58,16,15,24,38,9,39,33,49,31,53,12,43,28,2,19,50,7,1,11,3,51,30,17,6}, // permutation 4
{27,42,9,51,11,26,58,50,37,56,6,13,18,33,49,47,12,24,10,22,1,45,8,7,48,17,25,5,4,0,14,34,44,39,15,3,16,52,57,35,29,40,21,31,54,36,19,53,46,55,38,43,20,2,32,41,30,28,23}, // permutation 5
{12,46,29,37,52,34,49,35,57,30,17,53,1,25,26,42,56,45,2,40,36,13,54,20,7,28,0,19,43,8,31,50,18,58,3,47,5,39,51,38,33,44,22,16,15,32,24,14,6,21,27,41,11,10,55,4,48,9,23}, // permutation 6
{11,50,57,1,58,52,30,14,41,36,32,23,3,49,54,9,0,19,37,43,53,4,2,39,47,38,34,24,55,44,15,10,29,40,18,51,21,26,8,42,33,6,27,45,5,28,12,25,7,31,56,35,48,20,46,13,22,16,17}, // permutation 7
{1,7,37,56,25,47,5,22,11,9,28,43,18,49,46,8,54,0,44,51,27,38,34,23,10,16,30,36,17,32,2,13,39,50,21,3,31,40,26,41,58,48,15,4,6,52,12,45,35,55,20,53,24,42,29,33,19,57,14}, // permutation 8
{1,19,0,54,55,49,30,36,43,44,15,32,51,57,58,20,4,16,23,45,31,7,3,52,50,37,38,27,53,11,25,13,56,46,9,39,14,12,24,8,28,17,5,29,10,42,35,22,6,41,18,34,40,21,48,47,2,33,26} // permutation 9
};

// Seed: 2744476416

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int32_t, 4) g_2;
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
uint8_t  func_1(struct S0 * p_20);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_20->g_2 p_20->g_4
 * writes: p_20->g_4
 */
uint8_t  func_1(struct S0 * p_20)
{ /* block id: 4 */
    int32_t *l_3 = &p_20->g_4;
    int32_t *l_5 = &p_20->g_4;
    int32_t *l_6 = &p_20->g_4;
    int32_t *l_7 = &p_20->g_4;
    int32_t *l_8 = &p_20->g_4;
    int32_t *l_9 = &p_20->g_4;
    int32_t *l_10 = &p_20->g_4;
    int32_t *l_11 = &p_20->g_4;
    int32_t l_12[5] = {0x3414B58EL,0x3414B58EL,0x3414B58EL,0x3414B58EL,0x3414B58EL};
    int32_t *l_13 = &l_12[0];
    int32_t *l_14 = &p_20->g_4;
    int32_t *l_15 = &l_12[0];
    int32_t *l_16[8][8][4] = {{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}},{{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4},{&p_20->g_4,&p_20->g_4,&p_20->g_4,&p_20->g_4}}};
    uint32_t l_17 = 0xE58ED0BDL;
    int i, j, k;
    (*l_3) = ((VECTOR(int32_t, 16))(p_20->g_2.zzzxxywxwzzzzwyz)).se;
    --l_17;
    return (*l_6);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_comm_values[i] = 1;
    struct S0 c_21;
    struct S0* p_20 = &c_21;
    struct S0 c_22 = {
        (VECTOR(int32_t, 4))(0x47DC4B4EL, (VECTOR(int32_t, 2))(0x47DC4B4EL, 0x65AB3E90L), 0x65AB3E90L), // p_20->g_2
        0x5ED68044L, // p_20->g_4
        0, // p_20->v_collective
        sequence_input[get_global_id(0)], // p_20->global_0_offset
        sequence_input[get_global_id(1)], // p_20->global_1_offset
        sequence_input[get_global_id(2)], // p_20->global_2_offset
        sequence_input[get_local_id(0)], // p_20->local_0_offset
        sequence_input[get_local_id(1)], // p_20->local_1_offset
        sequence_input[get_local_id(2)], // p_20->local_2_offset
        sequence_input[get_group_id(0)], // p_20->group_0_offset
        sequence_input[get_group_id(1)], // p_20->group_1_offset
        sequence_input[get_group_id(2)], // p_20->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 59)), permutations[0][get_linear_local_id()])), // p_20->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_21 = c_22;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_20);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_20->g_2.x, "p_20->g_2.x", print_hash_value);
    transparent_crc(p_20->g_2.y, "p_20->g_2.y", print_hash_value);
    transparent_crc(p_20->g_2.z, "p_20->g_2.z", print_hash_value);
    transparent_crc(p_20->g_2.w, "p_20->g_2.w", print_hash_value);
    transparent_crc(p_20->g_4, "p_20->g_4", print_hash_value);
    transparent_crc(p_20->v_collective, "p_20->v_collective", print_hash_value);
    transparent_crc(p_20->l_comm_values[get_linear_local_id()], "p_20->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_20->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()], "p_20->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
