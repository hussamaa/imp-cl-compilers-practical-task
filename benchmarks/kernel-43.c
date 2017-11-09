// --atomics 66 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,99,1 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 3452484156

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
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
uint64_t  func_1(struct S1 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->l_comm_values
 * writes:
 */
uint64_t  func_1(struct S1 * p_19)
{ /* block id: 4 */
    if ((atomic_inc(&p_19->l_atomic_input[1]) == 7))
    { /* block id: 6 */
        VECTOR(int64_t, 8) l_2 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x3D42374B1B055CC2L), 0x3D42374B1B055CC2L), 0x3D42374B1B055CC2L, (-1L), 0x3D42374B1B055CC2L);
        uint8_t l_3 = 0xA7L;
        int32_t l_4 = 9L;
        int8_t l_5[1];
        uint32_t l_6[1][10] = {{0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L,0x207647F1L}};
        uint32_t l_7 = 4294967294UL;
        int32_t l_9[5][4][9] = {{{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL}},{{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL}},{{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL}},{{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL}},{{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL},{0x047D228DL,0x047D228DL,0x2AE857B1L,(-5L),(-1L),(-5L),0x2AE857B1L,0x047D228DL,0x047D228DL}}};
        int32_t *l_8 = &l_9[2][2][5];
        int32_t *l_10 = &l_9[0][0][5];
        VECTOR(int32_t, 4) l_11 = (VECTOR(int32_t, 4))(0x1943EC3EL, (VECTOR(int32_t, 2))(0x1943EC3EL, 0x0D8131DDL), 0x0D8131DDL);
        int16_t l_12 = 0x21B1L;
        int32_t l_13 = 0x508F4923L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_5[i] = 1L;
        l_10 = ((l_7 ^= (l_6[0][7] ^= (((VECTOR(int64_t, 16))(l_2.s5374006310764276)).s0 , (l_5[0] &= (l_4 &= l_3))))) , l_8);
        l_13 = (l_12 = ((VECTOR(int32_t, 8))(l_11.zxwwxwxy)).s5);
        for (l_6[0][3] = (-4); (l_6[0][3] <= 4); l_6[0][3] = safe_add_func_uint64_t_u_u(l_6[0][3], 6))
        { /* block id: 16 */
            int32_t l_17 = 0x264E785CL;
            int32_t *l_16[2][1];
            int32_t *l_18[2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_16[i][j] = &l_17;
            }
            for (i = 0; i < 2; i++)
                l_18[i] = &l_17;
            l_8 = l_16[0][0];
            l_10 = l_18[1];
        }
        unsigned int result = 0;
        result += l_2.s7;
        result += l_2.s6;
        result += l_2.s5;
        result += l_2.s4;
        result += l_2.s3;
        result += l_2.s2;
        result += l_2.s1;
        result += l_2.s0;
        result += l_3;
        result += l_4;
        int l_5_i0;
        for (l_5_i0 = 0; l_5_i0 < 1; l_5_i0++) {
            result += l_5[l_5_i0];
        }
        int l_6_i0, l_6_i1;
        for (l_6_i0 = 0; l_6_i0 < 1; l_6_i0++) {
            for (l_6_i1 = 0; l_6_i1 < 10; l_6_i1++) {
                result += l_6[l_6_i0][l_6_i1];
            }
        }
        result += l_7;
        int l_9_i0, l_9_i1, l_9_i2;
        for (l_9_i0 = 0; l_9_i0 < 5; l_9_i0++) {
            for (l_9_i1 = 0; l_9_i1 < 4; l_9_i1++) {
                for (l_9_i2 = 0; l_9_i2 < 9; l_9_i2++) {
                    result += l_9[l_9_i0][l_9_i1][l_9_i2];
                }
            }
        }
        result += l_11.w;
        result += l_11.z;
        result += l_11.y;
        result += l_11.x;
        result += l_12;
        result += l_13;
        atomic_add(&p_19->l_special_values[1], result);
    }
    else
    { /* block id: 20 */
        (1 + 1);
    }
    return p_19->l_comm_values[(safe_mod_func_uint32_t_u_u(p_19->tid, 1))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S1 c_20;
    struct S1* p_19 = &c_20;
    struct S1 c_21 = {
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_19->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
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
    transparent_crc(p_19->v_collective, "p_19->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 66; i++)
            transparent_crc(p_19->l_special_values[i], "p_19->l_special_values[i]", print_hash_value);
    transparent_crc(p_19->l_comm_values[get_linear_local_id()], "p_19->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_19->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_19->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
