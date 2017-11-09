// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,33,1 -l 87,1,1
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

__constant uint32_t permutations[10][87] = {
{26,38,34,82,62,37,6,59,85,41,81,44,19,46,35,20,65,50,32,83,43,77,84,40,18,74,75,64,70,33,16,21,58,10,14,66,55,31,27,8,28,22,17,0,51,69,9,49,79,73,78,86,68,45,4,24,7,60,61,47,76,5,1,71,56,39,42,63,25,11,54,23,15,30,72,48,13,2,53,67,29,3,80,36,57,52,12}, // permutation 0
{46,14,7,86,22,75,0,21,10,18,52,15,57,76,59,53,38,13,56,39,65,1,74,23,27,16,29,54,62,4,84,2,64,80,47,42,81,51,45,3,17,19,33,78,83,79,55,30,49,9,5,77,85,41,48,25,36,50,69,24,37,58,43,71,68,34,72,67,60,8,70,6,31,35,11,26,66,40,61,82,28,20,73,12,32,44,63}, // permutation 1
{85,40,86,83,15,16,52,24,66,42,41,17,51,57,38,21,60,27,45,70,61,13,12,18,11,32,36,68,59,44,29,71,2,37,4,78,34,77,0,64,25,23,53,20,69,79,67,5,8,28,80,31,73,81,58,65,10,49,76,43,26,39,75,54,7,22,33,46,62,82,84,63,47,35,1,55,50,74,72,6,56,9,19,14,48,30,3}, // permutation 2
{55,54,75,72,13,21,85,64,56,65,66,60,12,10,20,49,29,48,34,36,83,68,63,67,39,8,4,50,16,53,79,3,40,11,74,27,80,71,44,81,82,45,73,51,7,31,0,23,19,5,25,28,86,15,6,69,22,38,18,84,42,35,17,61,32,14,59,46,78,26,1,52,62,58,57,77,2,24,41,33,76,70,30,47,43,9,37}, // permutation 3
{8,74,31,16,54,6,39,66,15,10,37,49,25,59,32,63,27,5,85,42,75,44,56,67,65,7,47,78,22,36,13,9,12,55,72,73,34,23,26,76,62,35,77,21,33,82,50,48,30,58,40,29,14,86,24,80,45,71,46,20,61,70,57,68,1,0,2,52,41,51,4,53,60,17,18,64,11,38,43,69,3,83,19,84,81,28,79}, // permutation 4
{47,1,81,64,2,11,83,34,75,79,73,72,18,6,63,62,37,13,9,15,61,58,54,48,14,67,5,33,53,28,40,65,31,30,29,42,76,80,16,35,46,71,74,17,38,19,0,23,20,57,36,39,55,27,32,60,77,41,4,69,24,44,86,10,66,25,21,68,85,12,59,26,78,70,7,8,51,82,49,3,84,43,22,56,45,50,52}, // permutation 5
{55,37,29,22,24,85,34,74,69,12,35,56,64,83,59,7,52,63,41,43,26,19,84,68,86,2,33,6,50,4,73,54,79,77,53,8,11,15,3,57,38,80,61,65,81,45,23,78,39,62,5,76,48,10,30,58,49,14,82,17,25,71,46,72,9,44,40,47,32,18,0,75,36,66,13,28,67,20,42,21,70,27,1,16,60,51,31}, // permutation 6
{3,18,57,70,37,15,51,10,4,16,39,2,77,28,42,24,45,73,20,7,0,13,62,38,61,79,1,34,33,81,53,84,41,72,65,8,40,55,22,17,25,63,52,64,5,14,66,47,59,36,49,44,54,60,58,31,67,48,11,9,76,23,86,6,26,29,32,83,21,50,46,56,85,43,82,74,75,27,71,68,80,78,30,19,69,35,12}, // permutation 7
{43,38,68,45,64,80,18,31,34,23,58,70,40,30,0,2,8,27,15,29,19,12,36,5,55,82,66,65,81,47,35,22,83,11,9,52,39,71,14,24,50,72,51,60,61,7,32,13,76,79,10,54,59,86,20,6,4,63,49,25,44,85,21,67,73,42,69,28,48,46,75,74,78,84,16,53,56,41,77,17,26,57,3,62,37,1,33}, // permutation 8
{54,32,7,29,19,35,74,64,41,59,49,69,1,24,16,22,85,67,61,52,84,86,53,48,66,4,21,40,76,73,55,28,79,46,82,9,34,37,65,12,83,42,14,71,62,47,68,8,38,18,31,36,72,10,6,44,56,20,60,80,3,75,58,11,30,77,81,2,13,50,51,25,15,78,27,0,63,70,23,17,39,45,57,5,43,26,33} // permutation 9
};

// Seed: 1577074544

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3[5][5];
    volatile int32_t g_4;
    int32_t g_5[6];
    volatile int32_t *g_8[10];
    int32_t *g_10;
    int32_t ** volatile g_9;
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
int16_t  func_1(struct S0 * p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_13->g_5 p_13->g_9
 * writes: p_13->g_3 p_13->g_5 p_13->g_8 p_13->g_10
 */
int16_t  func_1(struct S0 * p_13)
{ /* block id: 4 */
    int32_t *l_2[6] = {&p_13->g_3[0][4],(void*)0,&p_13->g_3[0][4],&p_13->g_3[0][4],(void*)0,&p_13->g_3[0][4]};
    int16_t l_12[8] = {0x78E3L,0x78E3L,0x78E3L,0x78E3L,0x78E3L,0x78E3L,0x78E3L,0x78E3L};
    int i;
    p_13->g_3[3][1] = 0x3638ECF5L;
    for (p_13->g_5[3] = (-27); (p_13->g_5[3] == 24); p_13->g_5[3] = safe_add_func_uint16_t_u_u(p_13->g_5[3], 4))
    { /* block id: 8 */
        uint16_t l_11 = 0x7209L;
        p_13->g_8[8] = (void*)0;
        (*p_13->g_9) = l_2[1];
        if (l_11)
            continue;
    }
    return l_12[4];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_comm_values[i] = 1;
    struct S0 c_14;
    struct S0* p_13 = &c_14;
    struct S0 c_15 = {
        {{1L,0x2263126FL,1L,1L,0x2263126FL},{1L,0x2263126FL,1L,1L,0x2263126FL},{1L,0x2263126FL,1L,1L,0x2263126FL},{1L,0x2263126FL,1L,1L,0x2263126FL},{1L,0x2263126FL,1L,1L,0x2263126FL}}, // p_13->g_3
        0x29ACD409L, // p_13->g_4
        {1L,0x34EF66B1L,1L,1L,0x34EF66B1L,1L}, // p_13->g_5
        {&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4,&p_13->g_4}, // p_13->g_8
        (void*)0, // p_13->g_10
        &p_13->g_10, // p_13->g_9
        0, // p_13->v_collective
        sequence_input[get_global_id(0)], // p_13->global_0_offset
        sequence_input[get_global_id(1)], // p_13->global_1_offset
        sequence_input[get_global_id(2)], // p_13->global_2_offset
        sequence_input[get_local_id(0)], // p_13->local_0_offset
        sequence_input[get_local_id(1)], // p_13->local_1_offset
        sequence_input[get_local_id(2)], // p_13->local_2_offset
        sequence_input[get_group_id(0)], // p_13->group_0_offset
        sequence_input[get_group_id(1)], // p_13->group_1_offset
        sequence_input[get_group_id(2)], // p_13->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 87)), permutations[0][get_linear_local_id()])), // p_13->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_14 = c_15;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_13);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_13->g_3[i][j], "p_13->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_13->g_4, "p_13->g_4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_13->g_5[i], "p_13->g_5[i]", print_hash_value);

    }
    transparent_crc(p_13->v_collective, "p_13->v_collective", print_hash_value);
    transparent_crc(p_13->l_comm_values[get_linear_local_id()], "p_13->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_13->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()], "p_13->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
