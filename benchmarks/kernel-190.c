// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,64,3 -l 5,1,3
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

__constant uint32_t permutations[10][15] = {
{9,2,0,8,13,1,6,5,12,4,14,7,3,11,10}, // permutation 0
{8,7,13,12,10,11,5,0,6,2,3,9,4,1,14}, // permutation 1
{13,5,1,3,6,11,4,7,0,2,14,12,10,9,8}, // permutation 2
{10,11,2,9,3,5,6,0,14,12,1,4,13,8,7}, // permutation 3
{6,0,1,5,14,3,2,7,11,10,12,4,13,8,9}, // permutation 4
{1,5,12,9,0,4,6,13,7,10,8,3,11,2,14}, // permutation 5
{3,6,12,1,13,7,0,5,4,9,2,11,14,10,8}, // permutation 6
{1,10,8,4,12,2,7,13,3,6,0,9,14,5,11}, // permutation 7
{1,4,3,14,10,9,7,0,6,8,5,11,12,2,13}, // permutation 8
{13,0,11,10,3,7,14,5,4,2,9,1,12,8,6} // permutation 9
};

// Seed: 3051034182

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int8_t * f0;
   volatile uint8_t  f1;
   volatile uint16_t  f2;
   volatile int32_t  f3;
};

union U1 {
   volatile int64_t  f0;
   volatile int8_t * volatile  f1;
   int8_t  f2;
};

struct S2 {
    int32_t g_2[5][8];
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
int16_t  func_1(struct S2 * p_48);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_48->g_2
 * writes: p_48->g_2
 */
int16_t  func_1(struct S2 * p_48)
{ /* block id: 4 */
    int32_t l_47[1];
    int i;
    for (i = 0; i < 1; i++)
        l_47[i] = 0x341C0C23L;
    for (p_48->g_2[4][0] = (-14); (p_48->g_2[4][0] < 26); ++p_48->g_2[4][0])
    { /* block id: 7 */
        if ((atomic_inc(&p_48->g_atomic_input[26 * get_linear_group_id() + 4]) == 8))
        { /* block id: 9 */
            int32_t l_5 = 0x68819570L;
            uint8_t l_33 = 0x36L;
            uint8_t l_34 = 0xCAL;
            union U0 l_35 = {0};/* VOLATILE GLOBAL l_35 */
            VECTOR(uint64_t, 16) l_36 = (VECTOR(uint64_t, 16))(0xD84CB426AB799115L, (VECTOR(uint64_t, 4))(0xD84CB426AB799115L, (VECTOR(uint64_t, 2))(0xD84CB426AB799115L, 0UL), 0UL), 0UL, 0xD84CB426AB799115L, 0UL, (VECTOR(uint64_t, 2))(0xD84CB426AB799115L, 0UL), (VECTOR(uint64_t, 2))(0xD84CB426AB799115L, 0UL), 0xD84CB426AB799115L, 0UL, 0xD84CB426AB799115L, 0UL);
            uint32_t l_37 = 0x35737360L;
            VECTOR(uint64_t, 4) l_38 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL);
            uint16_t l_39 = 65535UL;
            uint8_t l_40 = 246UL;
            uint64_t l_41 = 0xCF9C76A8768DD0F0L;
            uint64_t l_42[1];
            int8_t l_43 = 0L;
            uint64_t l_44 = 18446744073709551615UL;
            int32_t *l_45 = &l_5;
            int32_t *l_46 = &l_5;
            int i;
            for (i = 0; i < 1; i++)
                l_42[i] = 0x21466050866D8206L;
            for (l_5 = (-17); (l_5 <= (-10)); ++l_5)
            { /* block id: 12 */
                uint32_t l_8 = 4294967295UL;
                union U1 l_9 = {0x64BAE0FC36FE5AB0L};/* VOLATILE GLOBAL l_9 */
                int32_t l_10[4];
                union U0 l_11 = {0};/* VOLATILE GLOBAL l_11 */
                int32_t l_12 = 0x36046E74L;
                uint32_t l_13[5];
                int8_t l_14 = 0x3AL;
                VECTOR(int32_t, 4) l_15 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 4L), 4L);
                VECTOR(int32_t, 2) l_16 = (VECTOR(int32_t, 2))(0x3396D56AL, 4L);
                VECTOR(int32_t, 16) l_17 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int32_t, 2))((-3L), (-1L)), (VECTOR(int32_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
                VECTOR(int32_t, 8) l_18 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-2L)), (-2L)), (-2L), (-2L), (-2L));
                uint64_t l_19 = 0UL;
                VECTOR(int32_t, 16) l_20 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x40E81688L), 0x40E81688L), 0x40E81688L, (-6L), 0x40E81688L, (VECTOR(int32_t, 2))((-6L), 0x40E81688L), (VECTOR(int32_t, 2))((-6L), 0x40E81688L), (-6L), 0x40E81688L, (-6L), 0x40E81688L);
                VECTOR(int32_t, 2) l_21 = (VECTOR(int32_t, 2))((-1L), 0x6B447FD3L);
                uint32_t l_22 = 0x77F141C5L;
                VECTOR(int32_t, 2) l_23 = (VECTOR(int32_t, 2))(0x16D714E2L, (-1L));
                uint16_t l_24[6] = {0UL,0x8F64L,0UL,0UL,0x8F64L,0UL};
                int32_t l_25[3];
                int8_t l_26 = (-5L);
                uint64_t l_27 = 0x5052DE1722BB76E0L;
                int32_t *l_28 = (void*)0;
                int32_t *l_29 = (void*)0;
                uint8_t l_30[6];
                int i;
                for (i = 0; i < 4; i++)
                    l_10[i] = (-10L);
                for (i = 0; i < 5; i++)
                    l_13[i] = 0xF59172DDL;
                for (i = 0; i < 3; i++)
                    l_25[i] = 0L;
                for (i = 0; i < 6; i++)
                    l_30[i] = 0x72L;
                l_27 = ((VECTOR(int32_t, 16))((l_13[3] = (((l_8 , l_9) , ((l_10[2] = ((VECTOR(int32_t, 2))((-4L), 1L)).odd) , l_11)) , l_12)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0L, 0L)).xxxy))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(5L, 0x09B467BBL, ((VECTOR(int32_t, 2))(0x716DE6EAL, (-8L))), 1L, 0x6011B55EL, (l_14 |= 0x5C3C3AE5L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_15.zy)), 0x77A0211EL, 0x1D012742L)).x, ((VECTOR(int32_t, 4))(l_16.yxxx)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_17.s925701832d748aee)).s51, ((VECTOR(int32_t, 4))(l_18.s1034)).lo))), (-7L), 0x28CE9B8AL)).hi, ((VECTOR(int32_t, 4))(0x7F44FB66L, ((VECTOR(int32_t, 2))(0L, 0x08586989L)), 0x600BF094L)).ywwzxwxx, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-10L), l_19, 0L, 0x7DA6603FL)).zxwwxzyzwyzxxzww)), ((VECTOR(int32_t, 2))(0x25D0C9ADL, 4L)).xyxxxxyyyyxxyyyx, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1879A925L, 0L)).yxxxxxyx)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_20.s4addbfd3)), 0x116E8CFBL, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_21.xxyyyyyy)).s61))), (int32_t)(l_22 , ((VECTOR(int32_t, 2))(l_23.yx)).hi), (int32_t)l_24[3]))).yyyy)).odd, ((VECTOR(int32_t, 2))((-3L)))))).xyxy, (int32_t)l_25[0]))), l_26, 0x2D3F5771L, 1L)).s352a))).yyxxwyyyyzxzxyyy))).lo))).s64)), 0x6C2CF376L, 0x2FB55E8AL, ((VECTOR(int32_t, 2))(0x4C6B0C40L)), (-3L), ((VECTOR(int32_t, 2))((-7L))), 0x05063020L, 1L)).s3;
                l_29 = l_28;
                ++l_30[3];
            }
            l_33 |= 0L;
            l_46 = (l_45 = (l_34 , (l_35 , (((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(l_36.sf94e)).lo, ((VECTOR(uint64_t, 2))(6UL, 0x8479822E7BB92158L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(GROUP_DIVERGE(1, 1), (l_37 , FAKE_DIVERGE(p_48->group_2_offset, get_group_id(2), 10)), 0UL, 18446744073709551607UL, 18446744073709551612UL, 0x3911DF381B91F40AL, 0x5C258348F9E473B9L, ((VECTOR(uint64_t, 2))(0x72AF4091208AFAEFL, 18446744073709551613UL)).even, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_38.xzxwzyzxzwzywxwx)).se2d8)), FAKE_DIVERGE(p_48->local_2_offset, get_local_id(2), 10), l_39, 0x5A6935E7B049BDD3L, 0x9507407285EBC95BL)).sc, 0x3697EF0591FCF288L, l_40, 0xE07DECC76B58F18CL, l_41, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(0x819E5EE4ADB81C66L, 0xF6EF7D18C36E20A5L)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))((l_42[0] = 0xE731193FL), l_43, l_44, 3UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(1UL)), 4294967295UL)).s0636066416123617, ((VECTOR(uint32_t, 16))(0x171BA0D8L))))).s9505)).yyxxwzxzyzxwzzyw)).s06))), 0UL)).s70))).even , l_45))));
            unsigned int result = 0;
            result += l_5;
            result += l_33;
            result += l_34;
            result += l_35.f0;
            result += l_35.f1;
            result += l_35.f2;
            result += l_35.f3;
            result += l_36.sf;
            result += l_36.se;
            result += l_36.sd;
            result += l_36.sc;
            result += l_36.sb;
            result += l_36.sa;
            result += l_36.s9;
            result += l_36.s8;
            result += l_36.s7;
            result += l_36.s6;
            result += l_36.s5;
            result += l_36.s4;
            result += l_36.s3;
            result += l_36.s2;
            result += l_36.s1;
            result += l_36.s0;
            result += l_37;
            result += l_38.w;
            result += l_38.z;
            result += l_38.y;
            result += l_38.x;
            result += l_39;
            result += l_40;
            result += l_41;
            int l_42_i0;
            for (l_42_i0 = 0; l_42_i0 < 1; l_42_i0++) {
                result += l_42[l_42_i0];
            }
            result += l_43;
            result += l_44;
            atomic_add(&p_48->g_special_values[26 * get_linear_group_id() + 4], result);
        }
        else
        { /* block id: 24 */
            (1 + 1);
        }
    }
    return l_47[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S2 c_49;
    struct S2* p_48 = &c_49;
    struct S2 c_50 = {
        {{(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL},{(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL},{(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL},{(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL},{(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL,(-1L),(-1L),0x414173BFL}}, // p_48->g_2
        0, // p_48->v_collective
        sequence_input[get_global_id(0)], // p_48->global_0_offset
        sequence_input[get_global_id(1)], // p_48->global_1_offset
        sequence_input[get_global_id(2)], // p_48->global_2_offset
        sequence_input[get_local_id(0)], // p_48->local_0_offset
        sequence_input[get_local_id(1)], // p_48->local_1_offset
        sequence_input[get_local_id(2)], // p_48->local_2_offset
        sequence_input[get_group_id(0)], // p_48->group_0_offset
        sequence_input[get_group_id(1)], // p_48->group_1_offset
        sequence_input[get_group_id(2)], // p_48->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_48->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_49 = c_50;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_48);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_48->g_2[i][j], "p_48->g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_48->v_collective, "p_48->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 26; i++)
            transparent_crc(p_48->g_special_values[i + 26 * get_linear_group_id()], "p_48->g_special_values[i + 26 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_48->l_comm_values[get_linear_local_id()], "p_48->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_48->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_48->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
