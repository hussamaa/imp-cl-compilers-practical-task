// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 76,34,2 -l 1,34,2
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

__constant uint32_t permutations[10][68] = {
{42,66,16,50,35,13,29,28,56,14,5,43,60,61,59,15,23,41,64,62,9,44,37,24,8,6,25,45,52,53,12,0,47,7,17,65,21,22,19,10,1,34,40,11,49,3,46,54,38,63,2,4,36,20,48,51,31,18,58,30,26,32,57,39,67,55,27,33}, // permutation 0
{27,23,48,8,25,54,42,15,55,31,33,0,45,34,28,62,21,44,22,18,50,26,60,59,49,13,14,16,53,2,17,5,41,40,38,51,63,4,35,10,30,9,39,36,47,24,3,64,66,29,7,19,20,52,6,61,11,32,1,67,56,57,65,37,43,12,58,46}, // permutation 1
{44,58,29,67,47,59,25,16,63,45,53,66,31,17,32,20,62,8,9,26,40,35,64,50,39,48,43,57,1,2,5,38,56,30,7,42,37,55,15,11,33,10,21,34,14,61,52,23,41,51,3,19,27,18,12,4,28,54,24,46,0,60,49,6,36,13,65,22}, // permutation 2
{42,4,25,47,55,20,41,62,49,17,48,16,2,30,7,31,6,29,3,9,14,34,26,18,50,23,19,53,51,1,15,64,27,66,59,38,54,22,45,40,13,60,65,21,52,35,33,5,46,10,0,39,43,44,8,36,28,61,63,12,57,67,58,24,37,56,11,32}, // permutation 3
{64,28,5,62,9,4,45,0,66,12,39,3,57,37,10,52,60,35,18,65,24,59,16,49,54,34,1,27,33,42,36,6,17,41,38,63,53,51,23,21,61,30,67,29,56,32,20,31,55,13,58,47,15,14,50,48,11,19,26,43,46,2,8,7,44,40,22,25}, // permutation 4
{21,35,20,49,44,25,40,57,45,51,39,67,46,17,62,2,63,54,59,50,30,38,3,22,55,64,33,5,66,48,43,16,61,56,18,26,41,19,12,24,60,36,27,34,29,1,37,65,32,28,7,4,23,52,14,8,15,42,11,0,9,13,47,6,58,10,31,53}, // permutation 5
{46,44,48,0,36,45,67,11,37,66,5,22,19,62,6,33,16,39,59,4,50,3,9,57,34,40,7,47,58,51,17,49,21,23,35,13,2,14,32,56,64,29,24,10,53,65,55,1,12,28,18,15,54,26,31,41,60,30,42,38,25,20,61,8,43,63,52,27}, // permutation 6
{29,24,36,11,46,20,39,62,63,57,6,33,48,25,49,31,4,30,26,66,2,44,5,12,54,14,3,53,64,21,41,52,38,55,34,56,42,60,50,7,22,58,8,19,47,9,37,45,59,28,0,65,43,61,15,17,67,27,18,32,51,13,16,10,1,23,35,40}, // permutation 7
{18,57,45,46,4,9,38,50,59,61,36,16,52,24,12,47,23,2,37,30,26,17,32,21,13,28,0,6,43,41,5,66,42,39,35,40,60,64,67,51,63,20,53,22,56,33,14,49,31,55,27,8,48,3,34,62,1,19,7,65,29,10,54,15,44,11,58,25}, // permutation 8
{25,58,40,17,48,0,18,60,46,41,6,23,62,34,33,21,24,53,42,49,30,63,16,51,47,2,50,12,39,28,14,26,44,38,57,3,19,32,22,4,55,67,61,37,43,31,54,45,65,8,27,5,13,1,9,56,52,20,10,36,11,66,15,35,7,29,64,59} // permutation 9
};

// Seed: 3625600586

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_6;
    int32_t *g_17;
    int32_t ** volatile g_16;
    int32_t g_24[1][5];
    uint32_t g_36;
    int32_t **g_40;
    int32_t *** volatile g_39;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_47);
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S1 * p_47);
int32_t ** func_29(uint64_t  p_30, int32_t ** p_31, uint32_t  p_32, uint8_t  p_33, struct S1 * p_47);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_47->g_6 p_47->g_16 p_47->g_36 p_47->g_39 p_47->g_17 p_47->g_comm_values
 * writes: p_47->g_17 p_47->g_36 p_47->g_6 p_47->g_40
 */
uint32_t  func_1(struct S1 * p_47)
{ /* block id: 4 */
    int32_t *l_5 = &p_47->g_6;
    int32_t **l_41 = &l_5;
    int16_t l_42 = 0x2B82L;
    int32_t *l_43[5][3][8] = {{{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]}},{{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]}},{{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]}},{{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]}},{{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]},{&p_47->g_24[0][2],&p_47->g_24[0][1],&p_47->g_24[0][2],&p_47->g_24[0][4],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2],&p_47->g_24[0][2]}}};
    uint32_t l_44 = 0x40E9B690L;
    int i, j, k;
    (*l_41) = func_2(l_5, ((0x1EL ^ p_47->g_6) , (void*)0), p_47);
    l_44--;
    return p_47->g_comm_values[p_47->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_47->g_16 p_47->g_6 p_47->g_36 p_47->g_39 p_47->g_17
 * writes: p_47->g_17 p_47->g_36 p_47->g_6 p_47->g_40
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S1 * p_47)
{ /* block id: 5 */
    int32_t *l_15 = &p_47->g_6;
    int32_t l_18 = (-5L);
    int32_t *l_19 = &p_47->g_6;
    int32_t *l_20 = (void*)0;
    int32_t *l_21 = &p_47->g_6;
    int32_t *l_22[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_23 = 0x54L;
    int32_t l_25 = (-1L);
    uint8_t l_26 = 0UL;
    uint32_t *l_34 = (void*)0;
    uint32_t *l_35 = &p_47->g_36;
    int i;
    if ((atomic_inc(&p_47->g_atomic_input[41 * get_linear_group_id() + 15]) == 7))
    { /* block id: 7 */
        VECTOR(uint32_t, 4) l_7 = (VECTOR(uint32_t, 4))(0xBC40ED3CL, (VECTOR(uint32_t, 2))(0xBC40ED3CL, 0x0D658EDFL), 0x0D658EDFL);
        int8_t l_8 = 6L;
        VECTOR(int32_t, 4) l_9 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 6L), 6L);
        uint32_t l_10 = 0xFCFBCE00L;
        int32_t *l_11 = (void*)0;
        uint8_t l_12 = 8UL;
        int i;
        l_8 ^= l_7.z;
        l_10 |= ((VECTOR(int32_t, 8))(l_9.wywzywzz)).s4;
        l_11 = (void*)0;
        ++l_12;
        unsigned int result = 0;
        result += l_7.w;
        result += l_7.z;
        result += l_7.y;
        result += l_7.x;
        result += l_8;
        result += l_9.w;
        result += l_9.z;
        result += l_9.y;
        result += l_9.x;
        result += l_10;
        result += l_12;
        atomic_add(&p_47->g_special_values[41 * get_linear_group_id() + 15], result);
    }
    else
    { /* block id: 12 */
        (1 + 1);
    }
    (*p_47->g_16) = l_15;
    --l_26;
    (*p_47->g_39) = func_29((*l_21), &p_47->g_17, (p_47->g_6 || ((*l_35) ^= (*l_15))), p_47->g_6, p_47);
    return (*p_47->g_16);
}


/* ------------------------------------------ */
/* 
 * reads : p_47->g_6
 * writes: p_47->g_6
 */
int32_t ** func_29(uint64_t  p_30, int32_t ** p_31, uint32_t  p_32, uint8_t  p_33, struct S1 * p_47)
{ /* block id: 18 */
    for (p_47->g_6 = 0; (p_47->g_6 != (-7)); p_47->g_6--)
    { /* block id: 21 */
        return &p_47->g_17;
    }
    return &p_47->g_17;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[68];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 68; i++)
            l_comm_values[i] = 1;
    struct S1 c_48;
    struct S1* p_47 = &c_48;
    struct S1 c_49 = {
        0x663E3155L, // p_47->g_6
        &p_47->g_6, // p_47->g_17
        &p_47->g_17, // p_47->g_16
        {{0x3A34071EL,0x3A34071EL,0x3A34071EL,0x3A34071EL,0x3A34071EL}}, // p_47->g_24
        0x510212AEL, // p_47->g_36
        &p_47->g_17, // p_47->g_40
        &p_47->g_40, // p_47->g_39
        0, // p_47->v_collective
        sequence_input[get_global_id(0)], // p_47->global_0_offset
        sequence_input[get_global_id(1)], // p_47->global_1_offset
        sequence_input[get_global_id(2)], // p_47->global_2_offset
        sequence_input[get_local_id(0)], // p_47->local_0_offset
        sequence_input[get_local_id(1)], // p_47->local_1_offset
        sequence_input[get_local_id(2)], // p_47->local_2_offset
        sequence_input[get_group_id(0)], // p_47->group_0_offset
        sequence_input[get_group_id(1)], // p_47->group_1_offset
        sequence_input[get_group_id(2)], // p_47->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 68)), permutations[0][get_linear_local_id()])), // p_47->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_48 = c_49;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_47);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_47->g_6, "p_47->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_47->g_24[i][j], "p_47->g_24[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_47->g_36, "p_47->g_36", print_hash_value);
    transparent_crc(p_47->v_collective, "p_47->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 41; i++)
            transparent_crc(p_47->g_special_values[i + 41 * get_linear_group_id()], "p_47->g_special_values[i + 41 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_47->l_comm_values[get_linear_local_id()], "p_47->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_47->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()], "p_47->g_comm_values[get_linear_group_id() * 68 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
