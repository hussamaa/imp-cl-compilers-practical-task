// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 52,25,7 -l 2,25,1
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

__constant uint32_t permutations[10][50] = {
{9,22,42,12,48,35,45,32,15,4,14,26,20,40,24,47,31,0,25,34,27,5,17,37,39,18,36,44,7,41,29,19,38,43,21,46,13,16,1,6,23,3,10,11,28,49,8,30,2,33}, // permutation 0
{5,41,26,38,12,27,28,7,22,8,46,23,44,37,35,43,15,13,24,25,33,11,4,21,32,20,9,2,18,31,40,3,19,30,14,47,45,49,10,34,42,17,48,29,16,6,36,0,1,39}, // permutation 1
{46,27,37,31,44,47,13,29,25,18,7,9,6,2,42,15,20,40,41,45,11,26,3,38,32,43,30,12,24,17,4,19,36,14,33,28,39,48,21,35,1,5,16,10,34,49,23,8,0,22}, // permutation 2
{25,16,8,37,44,12,18,40,48,9,0,6,39,15,14,36,24,30,17,31,47,5,3,41,2,34,46,19,23,45,22,13,26,49,35,33,28,10,4,38,32,1,7,11,21,42,43,20,29,27}, // permutation 3
{43,32,26,47,18,6,14,11,41,36,1,22,49,29,39,5,34,23,28,19,24,37,13,10,38,40,31,46,0,16,3,30,15,45,17,12,35,44,25,48,2,7,20,9,33,4,27,42,21,8}, // permutation 4
{3,11,0,31,48,33,4,41,27,6,22,8,21,23,10,14,19,39,40,7,25,30,13,5,9,45,36,28,46,2,17,1,15,49,26,16,29,42,37,35,44,38,12,43,34,24,18,47,32,20}, // permutation 5
{26,15,49,45,1,43,12,5,7,13,9,3,17,19,16,20,32,18,27,10,30,29,6,39,36,47,25,8,11,40,33,46,42,24,34,4,21,38,35,2,0,41,31,48,44,28,23,14,22,37}, // permutation 6
{18,17,23,36,6,5,46,28,16,19,31,32,30,29,33,4,15,20,38,34,3,0,22,47,44,12,42,21,14,35,25,10,43,48,1,13,45,9,39,49,8,11,41,7,2,27,37,26,40,24}, // permutation 7
{12,2,13,34,4,22,38,26,11,33,44,21,20,10,37,31,47,36,39,28,14,29,17,45,19,7,46,30,35,25,27,18,6,3,24,32,40,49,1,23,43,5,0,15,16,9,8,42,48,41}, // permutation 8
{6,4,7,0,3,12,15,16,2,35,23,1,42,41,14,40,17,37,26,46,38,22,48,9,28,29,33,21,44,49,24,43,30,11,39,31,34,36,25,5,45,20,18,10,32,47,8,19,27,13} // permutation 9
};

// Seed: 1178442991

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_2;
    int8_t g_8;
    int32_t g_10;
    int16_t g_22;
    volatile uint32_t g_23;
    volatile int8_t g_34;
    volatile uint32_t g_35;
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
uint64_t  func_1(struct S2 * p_39);
int8_t  func_5(int8_t * p_6, struct S2 * p_39);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_39->g_2 p_39->g_8 p_39->g_23 p_39->g_35 p_39->g_34
 * writes: p_39->g_2 p_39->g_23 p_39->g_35 p_39->g_10
 */
uint64_t  func_1(struct S2 * p_39)
{ /* block id: 4 */
    int8_t *l_7 = &p_39->g_8;
    int32_t l_33[1][3][6] = {{{(-8L),9L,0x2E7C650BL,(-10L),9L,(-10L)},{(-8L),9L,0x2E7C650BL,(-10L),9L,(-10L)},{(-8L),9L,0x2E7C650BL,(-10L),9L,(-10L)}}};
    int32_t *l_38 = &p_39->g_10;
    int i, j, k;
    for (p_39->g_2 = 0; (p_39->g_2 >= 27); p_39->g_2++)
    { /* block id: 7 */
        uint32_t l_26 = 0UL;
        int32_t l_32[9] = {0x3E6286C8L,0x01D5F49DL,0x3E6286C8L,0x3E6286C8L,0x01D5F49DL,0x3E6286C8L,0x3E6286C8L,0x01D5F49DL,0x3E6286C8L};
        int i;
        if ((((VECTOR(uint8_t, 2))(1UL, 0UL)).hi , (0L >= func_5(l_7, p_39))))
        { /* block id: 10 */
            int32_t *l_9 = &p_39->g_10;
            int32_t *l_11 = &p_39->g_10;
            int32_t *l_12 = &p_39->g_10;
            int32_t *l_13 = (void*)0;
            int32_t *l_14 = &p_39->g_10;
            int32_t l_15[3][7][6] = {{{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L}},{{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L}},{{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L},{0x1DC6B79DL,1L,(-1L),(-10L),(-1L),1L}}};
            int32_t *l_16 = &l_15[2][0][2];
            int32_t *l_17 = &p_39->g_10;
            int32_t *l_18 = (void*)0;
            int32_t *l_19 = &l_15[2][0][2];
            int32_t *l_20 = (void*)0;
            int32_t *l_21[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_21[i] = &p_39->g_10;
            ++p_39->g_23;
            if (l_26)
                break;
        }
        else
        { /* block id: 13 */
            int32_t *l_27 = (void*)0;
            int32_t *l_28 = &p_39->g_10;
            int32_t *l_29 = &p_39->g_10;
            int32_t *l_30 = &p_39->g_10;
            int32_t *l_31[9] = {&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10,&p_39->g_10};
            int i;
            ++p_39->g_35;
        }
        l_33[0][0][1] |= l_26;
        p_39->g_10 = 0L;
    }
    (*l_38) = 0x7A2D47E1L;
    return p_39->g_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_39->g_8
 * writes:
 */
int8_t  func_5(int8_t * p_6, struct S2 * p_39)
{ /* block id: 8 */
    return (*p_6);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[50];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 50; i++)
            l_comm_values[i] = 1;
    struct S2 c_40;
    struct S2* p_39 = &c_40;
    struct S2 c_41 = {
        1L, // p_39->g_2
        2L, // p_39->g_8
        (-7L), // p_39->g_10
        0x64C9L, // p_39->g_22
        0x11B9C6FEL, // p_39->g_23
        9L, // p_39->g_34
        0x65DA1F79L, // p_39->g_35
        0, // p_39->v_collective
        sequence_input[get_global_id(0)], // p_39->global_0_offset
        sequence_input[get_global_id(1)], // p_39->global_1_offset
        sequence_input[get_global_id(2)], // p_39->global_2_offset
        sequence_input[get_local_id(0)], // p_39->local_0_offset
        sequence_input[get_local_id(1)], // p_39->local_1_offset
        sequence_input[get_local_id(2)], // p_39->local_2_offset
        sequence_input[get_group_id(0)], // p_39->group_0_offset
        sequence_input[get_group_id(1)], // p_39->group_1_offset
        sequence_input[get_group_id(2)], // p_39->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 50)), permutations[0][get_linear_local_id()])), // p_39->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_40 = c_41;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_39);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_39->g_2, "p_39->g_2", print_hash_value);
    transparent_crc(p_39->g_8, "p_39->g_8", print_hash_value);
    transparent_crc(p_39->g_10, "p_39->g_10", print_hash_value);
    transparent_crc(p_39->g_22, "p_39->g_22", print_hash_value);
    transparent_crc(p_39->g_23, "p_39->g_23", print_hash_value);
    transparent_crc(p_39->g_34, "p_39->g_34", print_hash_value);
    transparent_crc(p_39->g_35, "p_39->g_35", print_hash_value);
    transparent_crc(p_39->v_collective, "p_39->v_collective", print_hash_value);
    transparent_crc(p_39->l_comm_values[get_linear_local_id()], "p_39->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_39->g_comm_values[get_linear_group_id() * 50 + get_linear_local_id()], "p_39->g_comm_values[get_linear_group_id() * 50 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
