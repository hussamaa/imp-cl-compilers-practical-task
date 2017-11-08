// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,42,2 -l 2,7,2
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

__constant uint32_t permutations[10][28] = {
{1,6,26,19,18,12,13,17,0,5,24,9,22,2,11,10,15,27,21,23,4,8,16,25,20,7,3,14}, // permutation 0
{18,2,9,23,3,26,15,16,20,19,1,12,21,4,5,7,24,11,6,13,25,14,17,27,22,0,10,8}, // permutation 1
{19,12,24,10,13,5,1,16,21,7,17,4,25,6,27,11,8,2,22,20,9,15,18,23,3,0,14,26}, // permutation 2
{4,6,26,19,22,11,27,18,13,25,2,8,16,5,3,9,17,10,20,7,12,15,1,0,23,14,21,24}, // permutation 3
{26,8,10,19,5,13,3,7,25,6,16,18,23,9,21,24,22,12,14,20,15,2,27,1,17,0,4,11}, // permutation 4
{2,24,15,19,13,25,17,8,0,7,3,10,22,6,12,4,9,20,11,16,23,1,14,21,27,5,26,18}, // permutation 5
{1,20,10,16,25,11,15,8,17,24,13,21,2,9,27,19,5,22,7,12,0,6,3,23,18,26,4,14}, // permutation 6
{13,19,5,27,11,23,4,9,1,10,18,7,16,14,12,3,8,0,26,6,22,15,20,17,2,21,24,25}, // permutation 7
{22,8,26,6,20,3,5,11,15,2,7,25,19,13,4,10,14,17,12,16,23,1,24,0,9,18,21,27}, // permutation 8
{12,4,15,20,13,25,21,5,9,19,24,27,1,11,6,2,8,3,17,10,7,18,14,16,0,22,26,23} // permutation 9
};

// Seed: 2645064082

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int64_t  f3;
   int64_t  f4;
};

struct S2 {
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
uint64_t  func_1(struct S2 * p_51);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_1(struct S2 * p_51)
{ /* block id: 4 */
    int8_t l_50 = 1L;
    if ((atomic_inc(&p_51->g_atomic_input[59 * get_linear_group_id() + 3]) == 0))
    { /* block id: 6 */
        int16_t l_2[9][4] = {{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL},{(-9L),0x1F6FL,0x0421L,0x1F6FL}};
        int32_t l_4 = 0x56160CBEL;
        int32_t *l_3 = &l_4;
        int32_t *l_5[2][7][4] = {{{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4,&l_4}}};
        int32_t *l_6 = (void*)0;
        int32_t *l_7 = &l_4;
        uint16_t l_8 = 7UL;
        uint32_t l_9[7] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
        uint32_t l_10 = 0xF12A83A0L;
        int64_t l_11 = 0L;
        int64_t l_12 = 0x462BB2C593C86992L;
        VECTOR(int32_t, 4) l_13 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L);
        uint16_t l_14 = 0xDC86L;
        uint16_t l_15 = 65535UL;
        int i, j, k;
        l_7 = (l_6 = (l_3 = (l_2[5][1] , (l_5[0][4][3] = l_3))));
        l_9[0] |= l_8;
        l_12 |= (l_11 = l_10);
        if (((*l_6) = (l_15 |= (l_14 = ((VECTOR(int32_t, 16))(l_13.ywxxxzzyyyyxxxyx)).se))))
        { /* block id: 17 */
            int32_t l_16 = (-1L);
            for (l_16 = 0; (l_16 > (-8)); --l_16)
            { /* block id: 20 */
                int32_t l_19 = 0x72E07230L;
                uint16_t l_20[8][9] = {{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL},{0xA0C0L,65535UL,0UL,65526UL,0UL,0UL,65526UL,0UL,65535UL}};
                int i, j;
                l_19 = l_19;
                l_19 = ((*l_6) |= l_20[7][8]);
            }
        }
        else
        { /* block id: 25 */
            int32_t l_21 = (-1L);
            for (l_21 = (-9); (l_21 == (-4)); ++l_21)
            { /* block id: 28 */
                int32_t l_24 = 0x61D67A3DL;
                for (l_24 = (-22); (l_24 >= 24); ++l_24)
                { /* block id: 31 */
                    uint16_t l_27 = 65535UL;
                    l_27++;
                    for (l_27 = 0; (l_27 >= 51); l_27 = safe_add_func_uint16_t_u_u(l_27, 5))
                    { /* block id: 35 */
                        int32_t **l_32 = (void*)0;
                        int32_t *l_34 = (void*)0;
                        int32_t **l_33 = &l_34;
                        struct S0 l_35[7] = {{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L},{-4L,-8L,18446744073709551614UL,0x6D70783DB47DC462L,0x1EB1ED309061E942L}};
                        VECTOR(int32_t, 16) l_37 = (VECTOR(int32_t, 16))(0x45654A13L, (VECTOR(int32_t, 4))(0x45654A13L, (VECTOR(int32_t, 2))(0x45654A13L, 8L), 8L), 8L, 0x45654A13L, 8L, (VECTOR(int32_t, 2))(0x45654A13L, 8L), (VECTOR(int32_t, 2))(0x45654A13L, 8L), 0x45654A13L, 8L, 0x45654A13L, 8L);
                        int32_t *l_36[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                        uint32_t l_38 = 0x1F1B003BL;
                        int32_t l_39 = 0L;
                        int i, j;
                        l_33 = (l_32 = (void*)0);
                        l_6 = ((l_35[5] , 0L) , (l_5[1][0][3] = (l_7 = l_36[3][0])));
                        (*l_3) |= l_38;
                        (*l_3) &= l_39;
                    }
                    for (l_27 = 0; (l_27 > 45); ++l_27)
                    { /* block id: 46 */
                        uint32_t l_42 = 4294967291UL;
                        uint64_t l_43 = 0x91A6653869515B84L;
                        struct S0 l_47 = {0x04L,-5L,0xE75FCAA6ABB25A59L,0x5EF04E4CABBE7F63L,0x0DA4CDC86D9E1B0FL};
                        struct S0 *l_46 = &l_47;
                        struct S0 *l_48 = &l_47;
                        uint64_t l_49[7][7] = {{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL},{18446744073709551606UL,18446744073709551606UL,0xA65742D117B57B06L,4UL,0x70B93D6BDADCC66FL,0x3D1D1CE175E04235L,0x3D9679FF52682FBAL}};
                        int i, j;
                        l_42 ^= 0x0915CC6CL;
                        l_48 = ((l_43++) , l_46);
                        l_49[2][3] = 0x015F77FBL;
                    }
                }
            }
        }
        unsigned int result = 0;
        int l_2_i0, l_2_i1;
        for (l_2_i0 = 0; l_2_i0 < 9; l_2_i0++) {
            for (l_2_i1 = 0; l_2_i1 < 4; l_2_i1++) {
                result += l_2[l_2_i0][l_2_i1];
            }
        }
        result += l_4;
        result += l_8;
        int l_9_i0;
        for (l_9_i0 = 0; l_9_i0 < 7; l_9_i0++) {
            result += l_9[l_9_i0];
        }
        result += l_10;
        result += l_11;
        result += l_12;
        result += l_13.w;
        result += l_13.z;
        result += l_13.y;
        result += l_13.x;
        result += l_14;
        result += l_15;
        atomic_add(&p_51->g_special_values[59 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 55 */
        (1 + 1);
    }
    return l_50;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_comm_values[i] = 1;
    struct S2 c_52;
    struct S2* p_51 = &c_52;
    struct S2 c_53 = {
        0, // p_51->v_collective
        sequence_input[get_global_id(0)], // p_51->global_0_offset
        sequence_input[get_global_id(1)], // p_51->global_1_offset
        sequence_input[get_global_id(2)], // p_51->global_2_offset
        sequence_input[get_local_id(0)], // p_51->local_0_offset
        sequence_input[get_local_id(1)], // p_51->local_1_offset
        sequence_input[get_local_id(2)], // p_51->local_2_offset
        sequence_input[get_group_id(0)], // p_51->group_0_offset
        sequence_input[get_group_id(1)], // p_51->group_1_offset
        sequence_input[get_group_id(2)], // p_51->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 28)), permutations[0][get_linear_local_id()])), // p_51->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_52 = c_53;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_51);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_51->v_collective, "p_51->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_51->g_special_values[i + 59 * get_linear_group_id()], "p_51->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_51->l_comm_values[get_linear_local_id()], "p_51->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_51->g_comm_values[get_linear_group_id() * 28 + get_linear_local_id()], "p_51->g_comm_values[get_linear_group_id() * 28 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
