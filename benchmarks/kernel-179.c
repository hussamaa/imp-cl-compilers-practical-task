// --atomics 44 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,41,3 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{45,46,67,69,51,15,27,65,22,16,10,53,57,18,50,48,33,47,77,63,11,35,74,9,41,14,78,2,66,23,72,26,31,39,34,6,12,3,17,21,61,55,25,43,62,68,56,52,36,40,64,30,20,28,71,5,32,19,0,49,38,54,59,4,75,44,42,1,24,58,70,29,73,13,76,60,8,7,37}, // permutation 0
{71,46,42,47,76,37,30,21,14,39,24,20,62,41,17,22,38,54,52,78,8,59,35,68,1,32,5,55,49,72,70,34,12,44,40,15,7,69,77,75,23,3,18,51,65,45,26,63,60,36,4,67,56,50,61,25,58,13,10,11,16,73,57,28,43,66,64,74,48,53,0,2,9,33,31,29,27,19,6}, // permutation 1
{29,18,58,34,76,16,23,55,71,10,73,12,45,5,41,1,66,61,70,13,52,49,56,60,40,78,25,31,74,72,67,24,3,14,21,7,6,30,26,17,38,44,48,46,33,53,69,27,54,35,0,59,65,62,43,42,32,19,36,9,8,51,37,64,11,75,2,39,77,15,20,4,22,47,50,68,57,28,63}, // permutation 2
{32,48,65,1,43,73,25,67,70,18,53,34,13,15,69,23,9,14,58,74,3,66,59,12,75,28,78,77,37,27,16,50,31,64,49,7,44,39,26,6,42,55,41,33,29,40,62,72,76,17,0,8,22,68,36,38,54,11,2,57,21,24,19,63,46,61,20,35,47,10,45,52,71,56,30,51,4,60,5}, // permutation 3
{1,9,40,29,50,18,21,23,28,51,65,61,44,67,73,14,34,41,62,78,13,45,48,69,22,57,60,27,64,38,7,33,68,35,59,30,37,24,42,75,47,20,0,16,70,26,76,49,55,43,53,77,25,58,66,72,5,71,31,54,2,56,8,19,36,12,3,15,17,39,52,46,32,10,63,6,4,74,11}, // permutation 4
{34,14,27,76,36,13,63,61,47,23,19,74,38,59,6,4,16,46,15,20,39,29,5,58,45,73,35,52,56,44,28,9,75,71,11,0,72,2,53,1,69,49,31,67,24,37,60,8,68,25,65,33,26,42,3,43,32,62,51,12,7,55,18,22,17,21,70,66,40,41,57,50,54,48,78,77,10,30,64}, // permutation 5
{21,42,75,1,3,52,25,36,2,61,8,49,39,41,66,59,0,11,50,56,14,17,77,27,23,22,72,12,15,31,32,71,34,58,19,9,70,45,43,40,29,35,60,4,51,7,54,63,30,38,74,64,78,37,5,69,48,10,24,16,20,28,44,13,6,67,26,76,53,73,18,57,55,47,33,65,46,68,62}, // permutation 6
{64,58,75,38,4,0,53,62,3,5,44,46,35,54,36,10,9,31,51,30,27,73,15,57,52,26,76,74,65,25,16,63,41,66,56,78,48,49,40,20,37,12,77,14,60,42,61,8,47,28,17,67,24,2,68,70,22,45,72,71,32,1,7,23,59,21,33,69,34,55,39,6,19,43,13,29,50,18,11}, // permutation 7
{13,28,56,57,4,23,71,74,65,67,16,60,42,15,51,68,47,40,48,5,39,14,64,70,66,53,38,43,22,34,63,25,30,8,3,2,54,62,61,26,24,36,35,31,0,72,9,7,41,17,44,20,1,75,18,29,55,58,19,50,21,46,77,10,76,59,69,32,11,49,6,78,27,45,37,52,12,73,33}, // permutation 8
{44,71,18,38,14,75,49,20,70,37,78,54,64,2,8,42,62,66,0,68,12,28,59,53,13,3,41,45,22,58,73,4,60,24,57,30,65,26,56,17,69,7,32,29,15,46,55,63,35,5,39,61,33,77,10,16,27,21,23,76,36,67,72,9,48,31,25,1,52,51,6,19,43,50,11,74,47,40,34} // permutation 9
};

// Seed: 1708540008

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
   uint32_t  f1;
   volatile int32_t  f2;
};

struct S3 {
    int32_t g_2;
    VECTOR(int32_t, 2) g_5;
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
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S3 * p_24);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_24->g_2 p_24->g_5 p_24->l_comm_values p_24->g_comm_values
 * writes: p_24->g_2 p_24->g_5
 */
uint32_t  func_1(struct S3 * p_24)
{ /* block id: 4 */
    for (p_24->g_2 = 12; (p_24->g_2 >= (-24)); --p_24->g_2)
    { /* block id: 7 */
        for (p_24->g_5.y = 0; (p_24->g_5.y >= (-17)); p_24->g_5.y = safe_sub_func_int16_t_s_s(p_24->g_5.y, 7))
        { /* block id: 10 */
            return p_24->l_comm_values[(safe_mod_func_uint32_t_u_u(p_24->tid, 79))];
        }
        if (p_24->g_comm_values[p_24->tid])
            break;
        if ((atomic_inc(&p_24->l_atomic_input[31]) == 8))
        { /* block id: 15 */
            int32_t l_8 = (-10L);
            uint8_t l_9 = 255UL;
            int8_t l_12 = 0x14L;
            uint32_t l_13 = 4294967292UL;
            int64_t l_14 = 0x24B5E495761BE360L;
            int32_t l_15 = (-1L);
            uint32_t l_16 = 0x80EBBD48L;
            union U0 l_17 = {0x0F5537C57F39CEE2L};/* VOLATILE GLOBAL l_17 */
            int16_t l_18 = (-4L);
            VECTOR(int32_t, 16) l_20 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7D522803L), 0x7D522803L), 0x7D522803L, (-1L), 0x7D522803L, (VECTOR(int32_t, 2))((-1L), 0x7D522803L), (VECTOR(int32_t, 2))((-1L), 0x7D522803L), (-1L), 0x7D522803L, (-1L), 0x7D522803L);
            int32_t *l_19 = (void*)0;
            int32_t *l_21 = (void*)0;
            int32_t *l_22 = (void*)0;
            int8_t l_23 = 0x0EL;
            int i;
            --l_9;
            l_22 = (l_21 = ((((l_14 = (l_16 = (((l_12 , l_13) , l_14) , l_15))) , l_17) , l_18) , l_19));
            l_23 = 1L;
            unsigned int result = 0;
            result += l_8;
            result += l_9;
            result += l_12;
            result += l_13;
            result += l_14;
            result += l_15;
            result += l_16;
            result += l_17.f0;
            result += l_17.f1;
            result += l_17.f2;
            result += l_18;
            result += l_20.sf;
            result += l_20.se;
            result += l_20.sd;
            result += l_20.sc;
            result += l_20.sb;
            result += l_20.sa;
            result += l_20.s9;
            result += l_20.s8;
            result += l_20.s7;
            result += l_20.s6;
            result += l_20.s5;
            result += l_20.s4;
            result += l_20.s3;
            result += l_20.s2;
            result += l_20.s1;
            result += l_20.s0;
            result += l_23;
            atomic_add(&p_24->l_special_values[31], result);
        }
        else
        { /* block id: 22 */
            (1 + 1);
        }
    }
    return p_24->l_comm_values[(safe_mod_func_uint32_t_u_u(p_24->tid, 79))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S3 c_25;
    struct S3* p_24 = &c_25;
    struct S3 c_26 = {
        0L, // p_24->g_2
        (VECTOR(int32_t, 2))(2L, 0L), // p_24->g_5
        0, // p_24->v_collective
        sequence_input[get_global_id(0)], // p_24->global_0_offset
        sequence_input[get_global_id(1)], // p_24->global_1_offset
        sequence_input[get_global_id(2)], // p_24->global_2_offset
        sequence_input[get_local_id(0)], // p_24->local_0_offset
        sequence_input[get_local_id(1)], // p_24->local_1_offset
        sequence_input[get_local_id(2)], // p_24->local_2_offset
        sequence_input[get_group_id(0)], // p_24->group_0_offset
        sequence_input[get_group_id(1)], // p_24->group_1_offset
        sequence_input[get_group_id(2)], // p_24->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_24->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_25 = c_26;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_24);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_24->g_2, "p_24->g_2", print_hash_value);
    transparent_crc(p_24->g_5.x, "p_24->g_5.x", print_hash_value);
    transparent_crc(p_24->g_5.y, "p_24->g_5.y", print_hash_value);
    transparent_crc(p_24->v_collective, "p_24->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 44; i++)
            transparent_crc(p_24->l_special_values[i], "p_24->l_special_values[i]", print_hash_value);
    transparent_crc(p_24->l_comm_values[get_linear_local_id()], "p_24->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_24->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_24->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
