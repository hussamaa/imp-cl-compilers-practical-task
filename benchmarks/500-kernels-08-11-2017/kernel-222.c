// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,73,1 -l 67,1,1
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

__constant uint32_t permutations[10][67] = {
{44,56,7,13,57,22,38,2,30,45,10,59,51,54,18,0,4,19,25,26,61,42,52,58,12,20,66,63,24,16,8,28,9,5,40,21,23,55,64,53,39,49,47,43,35,27,34,29,6,46,11,33,1,17,62,36,15,48,50,41,3,60,32,65,37,31,14}, // permutation 0
{42,24,43,62,58,36,12,23,38,48,41,61,17,37,13,66,39,49,34,0,10,52,51,19,14,46,64,57,11,29,40,7,56,31,9,54,59,26,20,50,4,5,28,22,21,16,55,35,6,60,65,44,63,15,47,53,32,33,3,27,18,30,45,8,2,25,1}, // permutation 1
{28,55,17,45,46,35,16,13,62,48,65,42,51,8,47,43,24,14,4,49,38,41,37,0,9,63,20,59,7,26,2,12,33,1,56,53,40,36,54,58,21,52,19,64,31,50,34,3,27,11,66,22,25,57,32,6,5,39,60,23,30,15,10,18,44,29,61}, // permutation 2
{64,10,5,58,13,26,33,46,3,61,41,44,34,32,18,20,17,59,62,63,16,7,40,54,57,39,36,29,31,2,35,11,48,19,9,12,51,0,43,52,50,23,27,1,4,53,60,30,65,49,24,45,42,66,21,8,37,56,6,25,14,22,28,38,55,15,47}, // permutation 3
{27,62,11,9,7,63,34,61,39,55,45,53,54,51,49,22,31,65,28,3,57,41,37,20,58,35,16,5,30,10,43,38,0,48,44,52,24,19,42,21,46,60,36,29,6,13,47,15,33,18,40,1,64,32,4,66,50,17,2,56,23,25,8,14,26,59,12}, // permutation 4
{40,51,33,4,2,59,64,24,45,16,21,11,41,46,6,57,47,42,1,7,13,35,58,49,3,52,63,5,38,31,66,19,61,32,30,17,39,9,43,18,36,26,53,50,14,29,20,62,10,55,12,54,25,56,28,0,44,23,34,65,48,8,15,37,60,27,22}, // permutation 5
{48,47,2,46,31,21,56,49,60,9,25,32,64,54,41,44,36,29,53,8,34,10,7,39,38,65,12,27,63,30,22,52,66,23,42,11,37,3,43,15,0,20,26,5,62,58,1,40,50,18,24,55,61,51,19,28,59,17,6,45,35,57,13,14,33,4,16}, // permutation 6
{15,55,63,59,0,13,54,51,2,41,50,44,58,57,8,45,22,10,66,48,61,19,46,56,60,6,65,20,39,43,38,33,3,62,47,4,17,36,52,16,25,37,1,31,23,11,35,24,18,49,5,29,12,28,26,64,14,40,34,21,53,7,32,27,30,42,9}, // permutation 7
{32,9,25,41,36,3,50,10,43,60,55,65,46,11,51,61,1,15,66,34,35,64,21,37,33,0,26,19,8,42,23,20,38,49,58,24,13,22,30,54,53,29,28,47,59,62,31,5,45,63,4,48,16,14,27,7,2,40,57,56,17,44,18,6,52,39,12}, // permutation 8
{26,11,64,39,53,66,28,29,60,65,33,38,22,7,31,36,50,24,4,46,56,57,20,48,32,44,16,30,52,21,37,47,55,2,54,41,27,59,19,18,12,10,13,14,61,62,3,17,45,58,8,5,0,63,1,40,43,9,25,34,49,35,6,51,42,15,23} // permutation 9
};

// Seed: 1692868488

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile uint64_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
   int8_t  f4;
   uint32_t  f5;
   volatile uint8_t  f6;
   volatile int64_t  f7;
   int32_t  f8;
};

struct S2 {
    int32_t g_4;
    volatile struct S0 g_5[9][6];
    volatile struct S0 * volatile g_6;
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
int32_t  func_1(struct S2 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_5
 * writes: p_7->g_5
 */
int32_t  func_1(struct S2 * p_7)
{ /* block id: 4 */
    int32_t *l_3 = &p_7->g_4;
    int32_t **l_2 = &l_3;
    (*l_2) = (void*)0;
    p_7->g_5[8][1] = p_7->g_5[8][1];
    return p_7->g_5[8][1].f0;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[67];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 67; i++)
            l_comm_values[i] = 1;
    struct S2 c_8;
    struct S2* p_7 = &c_8;
    struct S2 c_9 = {
        0x01D21F1EL, // p_7->g_4
        {{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}},{{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L},{0xE5C285CEL,18446744073709551615UL,0x79C63C40L,7UL,3L,3UL,0x05L,1L,3L}}}, // p_7->g_5
        (void*)0, // p_7->g_6
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[0][get_linear_local_id()])), // p_7->tid
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
    transparent_crc(p_7->g_4, "p_7->g_4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_7->g_5[i][j].f0, "p_7->g_5[i][j].f0", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f1, "p_7->g_5[i][j].f1", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f2, "p_7->g_5[i][j].f2", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f3, "p_7->g_5[i][j].f3", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f4, "p_7->g_5[i][j].f4", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f5, "p_7->g_5[i][j].f5", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f6, "p_7->g_5[i][j].f6", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f7, "p_7->g_5[i][j].f7", print_hash_value);
            transparent_crc(p_7->g_5[i][j].f8, "p_7->g_5[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_7->v_collective, "p_7->v_collective", print_hash_value);
    transparent_crc(p_7->l_comm_values[get_linear_local_id()], "p_7->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_7->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()], "p_7->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
