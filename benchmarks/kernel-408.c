// --atomics 9 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,66,1 -l 2,33,1
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

__constant uint32_t permutations[10][66] = {
{4,25,62,32,35,53,45,63,20,51,61,5,39,50,0,37,14,12,41,57,26,23,7,1,30,28,19,65,6,22,8,47,15,54,49,36,21,60,44,55,27,13,18,48,2,58,34,43,33,31,38,42,46,56,24,9,10,29,3,52,59,11,16,17,40,64}, // permutation 0
{28,5,47,32,22,64,50,1,65,52,46,8,41,29,10,24,44,12,26,58,38,20,31,25,60,11,19,34,51,49,6,23,30,59,27,42,45,4,2,57,54,13,14,53,15,40,16,56,63,0,18,7,21,55,61,37,36,62,39,48,33,3,9,43,35,17}, // permutation 1
{26,17,24,6,7,63,2,15,61,3,43,58,52,16,57,31,23,34,22,10,62,9,41,20,0,32,14,18,46,64,42,13,28,8,21,37,12,1,54,55,19,11,47,36,48,53,49,40,51,4,29,44,5,33,60,30,35,27,45,50,59,25,39,56,38,65}, // permutation 2
{48,49,43,6,62,25,7,8,0,39,5,46,14,55,13,33,57,41,53,17,19,11,63,9,21,1,64,35,15,12,27,44,10,36,60,30,29,54,42,31,52,32,37,18,16,23,51,2,4,3,22,26,59,47,45,38,56,65,50,24,34,61,40,28,58,20}, // permutation 3
{53,28,29,54,62,49,8,58,6,14,18,31,27,56,32,1,7,4,64,51,30,61,12,36,19,20,41,22,5,24,57,21,3,9,59,42,52,46,65,0,25,10,60,33,55,15,50,34,2,43,38,44,11,13,48,47,17,35,16,26,45,39,63,40,37,23}, // permutation 4
{60,11,50,47,2,27,36,38,31,1,20,4,23,41,34,63,48,46,7,62,35,58,0,9,52,42,39,59,26,28,57,30,21,13,14,44,37,61,54,56,19,53,64,25,49,22,55,29,18,17,10,45,16,40,3,51,6,24,43,8,15,33,5,32,65,12}, // permutation 5
{18,46,40,43,45,34,28,41,3,33,25,62,37,13,6,44,60,2,56,38,15,59,42,47,12,10,22,30,14,4,5,9,58,65,8,20,29,52,32,36,51,53,31,49,0,26,61,54,23,24,55,1,35,16,39,7,19,21,11,48,63,50,17,64,27,57}, // permutation 6
{19,55,57,28,27,23,44,39,24,62,50,5,21,37,8,52,47,49,31,46,40,4,14,16,22,17,36,18,7,54,64,58,53,61,34,15,33,43,60,32,56,10,41,0,20,9,38,2,29,6,25,13,65,59,30,51,11,3,26,12,48,45,42,35,1,63}, // permutation 7
{45,4,40,1,11,22,38,0,7,5,64,37,49,14,36,60,32,15,23,33,16,31,44,6,8,17,61,35,28,27,57,26,62,58,29,41,13,24,42,10,63,39,18,50,47,55,52,53,2,20,59,48,21,19,46,30,51,9,12,65,34,3,56,43,54,25}, // permutation 8
{7,28,30,15,55,43,44,4,27,8,6,56,29,58,14,39,45,63,37,11,9,34,35,42,26,38,51,60,40,24,36,46,32,57,25,2,20,50,23,17,31,19,47,22,12,10,21,13,41,54,52,1,64,3,53,16,49,5,18,62,0,48,59,61,33,65} // permutation 9
};

// Seed: 2268618474

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    volatile int64_t g_14;
    int32_t g_15;
    VECTOR(uint16_t, 2) g_16;
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
int8_t  func_1(struct S0 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->g_2 p_19->l_comm_values p_19->g_16
 * writes: p_19->g_2 p_19->g_16
 */
int8_t  func_1(struct S0 * p_19)
{ /* block id: 4 */
    int32_t l_6 = 0x479E672CL;
    int8_t l_7 = (-1L);
    VECTOR(int32_t, 2) l_8 = (VECTOR(int32_t, 2))(0x1ADB2BC4L, (-1L));
    int32_t *l_9 = &l_6;
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = &p_19->g_2;
    int32_t *l_12 = &l_6;
    int32_t *l_13[10] = {&p_19->g_2,&l_6,&p_19->g_2,&p_19->g_2,&l_6,&p_19->g_2,&p_19->g_2,&l_6,&p_19->g_2,&p_19->g_2};
    int i;
    for (p_19->g_2 = 0; (p_19->g_2 < (-29)); p_19->g_2--)
    { /* block id: 7 */
        uint32_t l_5 = 0xC3FBB4EBL;
        if (l_5)
            break;
        l_6 = (1UL < p_19->l_comm_values[(safe_mod_func_uint32_t_u_u(p_19->tid, 66))]);
        return l_7;
    }
    (*l_9) |= ((VECTOR(int32_t, 4))(l_8.xyyy)).x;
    p_19->g_16.y++;
    return p_19->g_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_comm_values[i] = 1;
    struct S0 c_20;
    struct S0* p_19 = &c_20;
    struct S0 c_21 = {
        0x43CDF98AL, // p_19->g_2
        0x6BDA18461E707165L, // p_19->g_14
        (-1L), // p_19->g_15
        (VECTOR(uint16_t, 2))(0x55D5L, 0x90AEL), // p_19->g_16
        0, // p_19->v_collective
        sequence_input[get_global_id(0)], // p_19->global_0_offset
        sequence_input[get_global_id(1)], // p_19->global_1_offset
        sequence_input[get_global_id(2)], // p_19->global_2_offset
        sequence_input[get_local_id(0)], // p_19->local_0_offset
        sequence_input[get_local_id(1)], // p_19->local_1_offset
        sequence_input[get_local_id(2)], // p_19->local_2_offset
        sequence_input[get_group_id(0)], // p_19->group_0_offset
        sequence_input[get_group_id(1)], // p_19->group_1_offset
        sequence_input[get_group_id(2)], // p_19->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[0][get_linear_local_id()])), // p_19->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_20 = c_21;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_19);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_19->g_2, "p_19->g_2", print_hash_value);
    transparent_crc(p_19->g_14, "p_19->g_14", print_hash_value);
    transparent_crc(p_19->g_15, "p_19->g_15", print_hash_value);
    transparent_crc(p_19->g_16.x, "p_19->g_16.x", print_hash_value);
    transparent_crc(p_19->g_16.y, "p_19->g_16.y", print_hash_value);
    transparent_crc(p_19->v_collective, "p_19->v_collective", print_hash_value);
    transparent_crc(p_19->l_comm_values[get_linear_local_id()], "p_19->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_19->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()], "p_19->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
