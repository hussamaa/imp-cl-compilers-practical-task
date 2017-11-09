// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,79,7 -l 17,1,1
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

__constant uint32_t permutations[10][17] = {
{5,16,15,12,0,10,3,14,1,6,9,13,11,7,8,4,2}, // permutation 0
{4,0,10,7,14,16,6,12,11,13,8,15,9,5,2,1,3}, // permutation 1
{8,0,16,14,5,6,4,2,3,15,10,11,1,13,7,12,9}, // permutation 2
{13,10,4,2,0,6,16,1,3,7,5,12,9,14,11,8,15}, // permutation 3
{13,16,9,11,12,6,0,7,4,10,3,14,5,1,15,8,2}, // permutation 4
{8,7,12,3,16,11,15,10,6,5,2,0,9,4,14,13,1}, // permutation 5
{4,9,8,3,13,14,0,2,12,16,5,1,15,11,7,6,10}, // permutation 6
{13,11,2,16,6,10,7,4,15,14,0,3,8,12,5,1,9}, // permutation 7
{2,16,12,15,0,1,10,5,9,3,7,4,6,8,13,11,14}, // permutation 8
{4,2,8,16,15,0,13,3,5,14,6,7,1,11,10,9,12} // permutation 9
};

// Seed: 2735418844

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int64_t  f3;
};

union U1 {
   uint32_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   int32_t  f3;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3[4][7];
    int32_t g_7;
    uint32_t g_15;
    uint64_t g_70;
    int16_t g_76;
    int32_t g_97;
    union U1 g_103;
    union U1 *g_102;
    VECTOR(int32_t, 16) g_126;
    VECTOR(uint64_t, 8) g_139;
    uint16_t g_143[3][10][5];
    int32_t g_144;
    VECTOR(int32_t, 16) g_244;
    union U0 g_247[9][8];
    union U0 *g_246;
    VECTOR(int32_t, 2) g_351;
    VECTOR(uint16_t, 2) g_359;
    int8_t g_363;
    VECTOR(int8_t, 8) g_368;
    VECTOR(uint64_t, 8) g_415;
    VECTOR(int16_t, 8) g_426;
    VECTOR(int16_t, 2) g_427;
    uint32_t g_432;
    VECTOR(int64_t, 4) g_455;
    VECTOR(uint8_t, 8) g_459;
    uint16_t * volatile g_509[3][6][8];
    uint16_t * volatile *g_508[10][6][1];
    VECTOR(uint64_t, 4) g_538;
    int16_t g_562;
    uint16_t *g_578;
    uint16_t **g_577[1];
    VECTOR(int16_t, 8) g_620;
    VECTOR(int16_t, 16) g_622;
    volatile VECTOR(int8_t, 16) g_631;
    int64_t *g_639;
    int16_t g_707;
    union U0 g_708;
    union U1 **g_721;
    VECTOR(int8_t, 8) g_726;
    volatile int8_t g_762[5][6];
    VECTOR(int16_t, 16) g_774;
    volatile VECTOR(int32_t, 16) g_785;
    VECTOR(int32_t, 2) g_787;
    int32_t *g_793;
    int32_t * volatile * volatile g_792;
    int32_t * volatile * volatile g_796;
    int32_t ** volatile g_830;
    uint8_t *g_841;
    uint8_t **g_840;
    int32_t ** volatile g_844[4][3][1];
    volatile VECTOR(int64_t, 4) g_873;
    int8_t *g_878[2];
    int32_t **g_903;
    VECTOR(uint16_t, 2) g_904;
    volatile VECTOR(int64_t, 8) g_905;
    int32_t * volatile g_912;
    int32_t * volatile g_913;
    VECTOR(int16_t, 2) g_922;
    volatile uint64_t g_929;
    volatile VECTOR(int16_t, 16) g_969;
    union U1 ***g_973[5];
    union U1 ****g_972[7];
    volatile VECTOR(int16_t, 8) g_976;
    VECTOR(int64_t, 2) g_989;
    VECTOR(int64_t, 4) g_992;
    int32_t *g_993;
    VECTOR(uint16_t, 2) g_999;
    VECTOR(uint64_t, 8) g_1034;
    volatile VECTOR(int16_t, 2) g_1051;
    VECTOR(int16_t, 2) g_1052;
    VECTOR(int8_t, 2) g_1060;
    VECTOR(int8_t, 8) g_1061;
    int16_t g_1075;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_1102);
int32_t  func_18(uint64_t  p_19, struct S2 * p_1102);
int16_t  func_22(uint8_t  p_23, int32_t * p_24, int8_t  p_25, int16_t  p_26, int8_t  p_27, struct S2 * p_1102);
int32_t * func_28(int8_t  p_29, struct S2 * p_1102);
int32_t * func_30(int8_t  p_31, uint16_t  p_32, int32_t * p_33, union U1  p_34, int64_t  p_35, struct S2 * p_1102);
union U1  func_36(int32_t * p_37, int32_t * p_38, struct S2 * p_1102);
int32_t * func_39(union U0  p_40, int64_t  p_41, int32_t * p_42, int32_t * p_43, struct S2 * p_1102);
union U0  func_44(int32_t  p_45, union U0  p_46, int32_t * p_47, int32_t * p_48, int32_t * p_49, struct S2 * p_1102);
int32_t * func_51(int32_t * p_52, int32_t * p_53, int32_t * p_54, uint16_t  p_55, uint64_t  p_56, struct S2 * p_1102);
int32_t * func_57(uint64_t  p_58, int64_t  p_59, struct S2 * p_1102);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1102->g_3 p_1102->g_15 p_1102->g_2 p_1102->g_7 p_1102->g_comm_values p_1102->g_76 p_1102->l_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_70 p_1102->g_126 p_1102->g_139 p_1102->g_144 p_1102->g_244 p_1102->g_143 p_1102->g_351 p_1102->g_247.f0 p_1102->g_359 p_1102->g_368 p_1102->g_415 p_1102->g_426 p_1102->g_427 p_1102->g_103.f0 p_1102->g_103 p_1102->g_455 p_1102->g_459 p_1102->g_247 p_1102->g_508 p_1102->g_363 p_1102->g_538 p_1102->g_562 p_1102->g_620 p_1102->g_622 p_1102->g_631 p_1102->g_639 p_1102->g_432 p_1102->g_707 p_1102->g_708 p_1102->g_726 p_1102->g_103.f1 p_1102->g_762 p_1102->g_103.f2 p_1102->g_787 p_1102->g_904 p_1102->g_905 p_1102->g_903 p_1102->g_793 p_1102->g_830 p_1102->g_922 p_1102->g_929 p_1102->g_774 p_1102->g_721 p_1102->g_969 p_1102->g_972 p_1102->g_976 p_1102->g_989 p_1102->g_992 p_1102->g_999 p_1102->g_993 p_1102->g_1034 p_1102->g_1075 p_1102->g_913
 * writes: p_1102->g_3 p_1102->g_15 p_1102->g_1075 p_1102->g_707 p_1102->g_76 p_1102->g_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_103 p_1102->g_144 p_1102->g_246 p_1102->g_363 p_1102->g_143 p_1102->g_247.f0 p_1102->g_351 p_1102->g_538 p_1102->g_577 p_1102->g_126 p_1102->g_244 p_1102->g_432 p_1102->g_70 p_1102->g_721 p_1102->g_726 p_1102->g_878 p_1102->g_903 p_1102->g_793 p_1102->g_972 p_1102->g_708 p_1102->g_992 p_1102->g_7 p_1102->g_989
 */
uint64_t  func_1(struct S2 * p_1102)
{ /* block id: 4 */
    int8_t l_13 = 7L;
    int32_t l_14[10];
    int i;
    for (i = 0; i < 10; i++)
        l_14[i] = 5L;
    for (p_1102->g_3[2][4] = (-1); (p_1102->g_3[2][4] > (-18)); p_1102->g_3[2][4] = safe_sub_func_int16_t_s_s(p_1102->g_3[2][4], 5))
    { /* block id: 7 */
        int32_t *l_6 = &p_1102->g_7;
        int32_t *l_8 = &p_1102->g_7;
        int32_t l_9 = 0L;
        int32_t *l_10 = &p_1102->g_7;
        int32_t *l_11[6] = {&p_1102->g_7,&p_1102->g_3[2][4],&p_1102->g_7,&p_1102->g_7,&p_1102->g_3[2][4],&p_1102->g_7};
        VECTOR(int16_t, 4) l_12 = (VECTOR(int16_t, 4))(0x5228L, (VECTOR(int16_t, 2))(0x5228L, 0x6AF8L), 0x6AF8L);
        int64_t *l_1093 = (void*)0;
        int64_t *l_1094 = (void*)0;
        int64_t *l_1095 = (void*)0;
        int64_t *l_1096 = (void*)0;
        int64_t *l_1097 = (void*)0;
        int64_t *l_1098 = (void*)0;
        int64_t *l_1099 = (void*)0;
        int64_t *l_1100 = (void*)0;
        int64_t *l_1101 = (void*)0;
        int i, j;
        --p_1102->g_15;
        (*l_6) = func_18(p_1102->g_2, p_1102);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1102->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((p_1102->g_15 = (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(p_1102->g_351.x, ((-6L) | ((void*)0 == p_1102->g_913)))) , (p_1102->g_989.y = 0x0D092414DE2DE89FL)), ((void*)0 != &p_1102->g_363)))), 10))][(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]));
    }
    return l_14[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_7 p_1102->g_2 p_1102->g_3 p_1102->g_comm_values p_1102->g_15 p_1102->g_76 p_1102->l_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_70 p_1102->g_126 p_1102->g_139 p_1102->g_144 p_1102->g_244 p_1102->g_143 p_1102->g_351 p_1102->g_247.f0 p_1102->g_359 p_1102->g_368 p_1102->g_415 p_1102->g_426 p_1102->g_427 p_1102->g_103.f0 p_1102->g_103 p_1102->g_455 p_1102->g_459 p_1102->g_247 p_1102->g_508 p_1102->g_363 p_1102->g_538 p_1102->g_562 p_1102->g_620 p_1102->g_622 p_1102->g_631 p_1102->g_639 p_1102->g_432 p_1102->g_707 p_1102->g_708 p_1102->g_726 p_1102->g_103.f1 p_1102->g_762 p_1102->g_103.f2 p_1102->g_787 p_1102->g_904 p_1102->g_905 p_1102->g_903 p_1102->g_793 p_1102->g_830 p_1102->g_922 p_1102->g_929 p_1102->g_774 p_1102->g_721 p_1102->g_969 p_1102->g_972 p_1102->g_976 p_1102->g_989 p_1102->g_992 p_1102->g_999 p_1102->g_993 p_1102->g_1034 p_1102->g_1075
 * writes: p_1102->g_76 p_1102->g_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_103 p_1102->g_144 p_1102->g_246 p_1102->g_363 p_1102->g_143 p_1102->g_15 p_1102->g_247.f0 p_1102->g_351 p_1102->g_538 p_1102->g_577 p_1102->g_126 p_1102->g_244 p_1102->g_432 p_1102->g_70 p_1102->g_721 p_1102->g_726 p_1102->g_878 p_1102->g_903 p_1102->g_793 p_1102->g_707 p_1102->g_972 p_1102->g_708 p_1102->g_992 p_1102->g_1075
 */
int32_t  func_18(uint64_t  p_19, struct S2 * p_1102)
{ /* block id: 9 */
    int32_t l_20 = (-1L);
    int32_t l_21 = 0x38D8131DL;
    union U0 l_50[3][2][10] = {{{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}},{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}}},{{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}},{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}}},{{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}},{{0x33L},{0xE8L},{255UL},{247UL},{0xA3L},{247UL},{255UL},{0xE8L},{0x33L},{255UL}}}};
    VECTOR(uint32_t, 8) l_60 = (VECTOR(uint32_t, 8))(0x96434D12L, (VECTOR(uint32_t, 4))(0x96434D12L, (VECTOR(uint32_t, 2))(0x96434D12L, 0x0FEFE6B3L), 0x0FEFE6B3L), 0x0FEFE6B3L, 0x96434D12L, 0x0FEFE6B3L);
    VECTOR(uint32_t, 4) l_61 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967295UL), 4294967295UL);
    uint32_t *l_62 = (void*)0;
    int32_t l_63 = 0x1B79375EL;
    VECTOR(uint32_t, 16) l_64 = (VECTOR(uint32_t, 16))(0xA53CC61BL, (VECTOR(uint32_t, 4))(0xA53CC61BL, (VECTOR(uint32_t, 2))(0xA53CC61BL, 0UL), 0UL), 0UL, 0xA53CC61BL, 0UL, (VECTOR(uint32_t, 2))(0xA53CC61BL, 0UL), (VECTOR(uint32_t, 2))(0xA53CC61BL, 0UL), 0xA53CC61BL, 0UL, 0xA53CC61BL, 0UL);
    uint64_t *l_69[10][7][3] = {{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}},{{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70},{&p_1102->g_70,(void*)0,&p_1102->g_70}}};
    int32_t l_71 = (-3L);
    int64_t l_659 = 0x2E31FEE42483A79AL;
    int32_t *l_660[5][3];
    int32_t **l_915[1];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_660[i][j] = &p_1102->g_7;
    }
    for (i = 0; i < 1; i++)
        l_915[i] = &p_1102->g_793;
    l_21 &= l_20;
    atomic_and(&p_1102->g_atomic_reduction[get_linear_group_id()], (+(p_1102->g_1075 ^= ((((p_19 , (func_22(p_1102->g_7, func_28((&l_21 == ((*p_1102->g_830) = func_30(l_21, p_19, &l_21, func_36(func_39(func_44(p_1102->g_2, l_50[2][0][5], func_51(func_57((l_71 = (((((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x504A86D6L, 4294967295UL)).xyxy)).even, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(l_60.s61)).xxyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_61.yz)), 6UL, 4294967291UL)).ywywxyxyyyzwwzwz)).sc342))).xwyzwyxz, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((l_63 = ((VECTOR(uint32_t, 2))(0x837A000CL, 0x1708C993L)).even), ((VECTOR(uint32_t, 4))(l_64.s67df)), 4294967295UL, 5UL, 0x943CDC18L)))).s21)).yxxxyyyy))))).s6605253440213617)).sc65f, ((VECTOR(uint32_t, 16))(0x024CA9A9L, (safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((((p_1102->g_3[2][4] || 4294967291UL) >= l_21) , p_19) && 0L) != 0x71FCCBB7L), 2L)) & 0xCCBB28B9DDA26858L), 0x6D9CD53DL)), FAKE_DIVERGE(p_1102->local_2_offset, get_local_id(2), 10), 0x682755FCL, p_1102->g_comm_values[p_1102->tid], ((VECTOR(uint32_t, 8))(8UL)), ((VECTOR(uint32_t, 2))(8UL)), 0x42402BB9L)).sf80b))).even))).hi , &l_63) != &l_21) & 1UL)), p_1102->g_15, p_1102), &l_21, &l_21, p_1102->g_139.s3, p_1102->g_143[2][1][3], p_1102), &l_21, &l_21, p_1102), l_659, &l_21, l_660[0][1], p_1102), &l_21, p_1102), p_19, p_1102))), p_1102), p_1102->g_3[3][3], p_19, p_1102->g_904.x, p_1102) > p_1102->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))])) , p_19) <= 0x18AB3D3DA0150F37L) >= p_1102->g_622.sd))) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1102->v_collective += p_1102->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (l_71 = 5; (l_71 < (-19)); --l_71)
    { /* block id: 486 */
        uint64_t l_1078 = 0x7265DD151C637DFBL;
        l_1078++;
        for (p_1102->g_1075 = (-5); (p_1102->g_1075 >= 1); p_1102->g_1075 = safe_add_func_uint16_t_u_u(p_1102->g_1075, 8))
        { /* block id: 490 */
            uint8_t l_1086[2][5][4] = {{{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L}},{{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L},{0x12L,1UL,254UL,0x42L}}};
            int i, j, k;
            if (p_19)
                break;
            for (p_1102->g_707 = 0; (p_1102->g_707 <= 29); p_1102->g_707++)
            { /* block id: 494 */
                int32_t l_1085[6][5][5] = {{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}},{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}},{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}},{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}},{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}},{{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L},{(-8L),0L,(-1L),(-1L),0x467C6226L}}};
                int i, j, k;
                ++l_1086[1][3][2];
            }
        }
    }
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_721 p_1102->g_102 p_1102->g_904 p_1102->g_969 p_1102->g_972 p_1102->g_976 p_1102->g_143 p_1102->g_363 p_1102->g_989 p_1102->g_992 p_1102->g_432 p_1102->g_144 p_1102->g_97 p_1102->g_244 p_1102->g_903 p_1102->g_999 p_1102->g_3 p_1102->g_993 p_1102->g_830 p_1102->g_793 p_1102->g_922 p_1102->g_1034 p_1102->g_76 p_1102->l_comm_values p_1102->g_15 p_1102->g_comm_values p_1102->g_70
 * writes: p_1102->g_102 p_1102->g_432 p_1102->g_144 p_1102->g_972 p_1102->g_143 p_1102->g_363 p_1102->g_708 p_1102->g_992 p_1102->g_244 p_1102->g_793 p_1102->g_70 p_1102->g_76 p_1102->g_comm_values p_1102->g_97 p_1102->g_246
 */
int16_t  func_22(uint8_t  p_23, int32_t * p_24, int8_t  p_25, int16_t  p_26, int8_t  p_27, struct S2 * p_1102)
{ /* block id: 425 */
    uint32_t l_937 = 1UL;
    int32_t l_938 = 0L;
    union U1 *l_939[6];
    union U0 *l_944 = &p_1102->g_708;
    uint32_t *l_955 = &p_1102->g_432;
    int32_t *l_956 = (void*)0;
    int32_t *l_957 = (void*)0;
    int32_t *l_958 = &p_1102->g_144;
    int32_t *l_959[9][1];
    uint32_t l_960[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    VECTOR(int16_t, 2) l_975 = (VECTOR(int16_t, 2))(0x3C1EL, (-4L));
    VECTOR(int16_t, 2) l_977 = (VECTOR(int16_t, 2))(0L, 0x30B2L);
    union U1 *l_982 = (void*)0;
    uint8_t **l_1022 = (void*)0;
    VECTOR(int8_t, 2) l_1058 = (VECTOR(int8_t, 2))(0x7AL, 0x3DL);
    VECTOR(int8_t, 4) l_1062 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
    int i, j;
    for (i = 0; i < 6; i++)
        l_939[i] = &p_1102->g_103;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_959[i][j] = &p_1102->g_7;
    }
    l_937 = p_26;
    l_938 = l_937;
    if ((l_960[7] = ((*l_958) = (((((((*p_1102->g_721) = (*p_1102->g_721)) == (l_939[3] = l_939[1])) < (GROUP_DIVERGE(2, 1) || (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_938 >= (p_25 < (!(((l_944 != &p_1102->g_247[0][6]) ^ ((safe_add_func_uint64_t_u_u((((GROUP_DIVERGE(0, 1) | 0UL) == ((VECTOR(uint16_t, 8))(65530UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0xBCEFL)), 7UL, 0xBB06L)), ((VECTOR(uint16_t, 2))(65535UL, 4UL)), 0UL)).s7) & (((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(0xBEFC55A1L, (safe_rshift_func_int8_t_s_s((((*l_955) = 4294967295UL) || l_937), l_938)))) > 3L), 13)), p_1102->g_904.y)) && l_937) != p_25)), p_27)) , l_937)) , p_23)))), 1)), 9UL)))) & 0L) != p_26) , l_937))))
    { /* block id: 433 */
        uint64_t *l_962 = (void*)0;
        uint64_t **l_961 = &l_962;
        uint64_t **l_963[8] = {&l_962,(void*)0,&l_962,&l_962,(void*)0,&l_962,&l_962,(void*)0};
        uint8_t ***l_966[8] = {&p_1102->g_840,&p_1102->g_840,&p_1102->g_840,&p_1102->g_840,&p_1102->g_840,&p_1102->g_840,&p_1102->g_840,&p_1102->g_840};
        union U1 ***l_971 = &p_1102->g_721;
        union U1 ****l_970 = &l_971;
        union U1 *****l_974 = &p_1102->g_972[6];
        uint16_t *l_980 = &p_1102->g_143[0][9][0];
        int32_t l_981[1];
        union U0 l_987 = {0x7CL};
        VECTOR(int16_t, 16) l_996 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 6L), 6L), 6L, (-5L), 6L, (VECTOR(int16_t, 2))((-5L), 6L), (VECTOR(int16_t, 2))((-5L), 6L), (-5L), 6L, (-5L), 6L);
        int i;
        for (i = 0; i < 1; i++)
            l_981[i] = 0x07284E49L;
        l_963[3] = l_961;
        (*l_958) = ((safe_div_func_uint32_t_u_u((&p_1102->g_840 == l_966[4]), 0x4E71DDDFL)) && (p_26 && ((safe_add_func_uint16_t_u_u(65535UL, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(p_1102->g_969.sfe5c5187c53dbfc1)).even, (int16_t)(l_970 != ((*l_974) = p_1102->g_972[6])), (int16_t)p_26))).s74, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(l_975.xx)).yxxyyxyyyyxyyxxy, ((VECTOR(int16_t, 2))(p_1102->g_976.s53)).yyyxxyyyyxxxyyyx))).s78, ((VECTOR(int16_t, 2))(l_977.yx))))))).odd < ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(7UL, 0xA2E7L)), 65534UL, ((*l_980) ^= (safe_mul_func_int8_t_s_s(p_23, 0x1EL))), 1UL, l_981[0], p_26, ((VECTOR(uint16_t, 8))(65535UL)), 1UL)).odd, ((VECTOR(uint16_t, 8))(0xDF94L))))).s3), p_23, 0x68L, (-1L))).yxxwyzyz, ((VECTOR(uint8_t, 8))(247UL))))).s3430564573724024, ((VECTOR(int16_t, 16))(0x3F12L))))).se)) | 0x1E5DL)));
        if (((void*)0 == l_982))
        { /* block id: 438 */
            int8_t *l_985 = &p_1102->g_363;
            int32_t l_986 = 0L;
            union U0 *l_988 = &l_987;
            int64_t *l_990 = (void*)0;
            int64_t *l_991[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(uint16_t, 8) l_997 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xA26EL), 0xA26EL), 0xA26EL, 65535UL, 0xA26EL);
            VECTOR(uint16_t, 4) l_998 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
            int i;
            l_986 = ((safe_lshift_func_uint16_t_u_u((((*l_985) ^= p_23) <= GROUP_DIVERGE(2, 1)), 0)) >= 0x191E7AE273F6BE39L);
            (*p_1102->g_903) = func_39(((*l_988) = ((*l_944) = l_987)), (p_1102->g_992.z |= ((VECTOR(int64_t, 16))(p_1102->g_989.xyxyxxxyxyyxxxxy)).s8), p_24, &l_981[0], p_1102);
            return p_1102->g_999.y;
        }
        else
        { /* block id: 446 */
            return p_1102->g_989.x;
        }
    }
    else
    { /* block id: 449 */
        uint32_t l_1004 = 4294967295UL;
        int32_t l_1014 = 0x19FBEBBEL;
        uint8_t **l_1023 = &p_1102->g_841;
        for (l_938 = 3; (l_938 >= (-28)); l_938 = safe_sub_func_int16_t_s_s(l_938, 6))
        { /* block id: 452 */
            uint32_t l_1015 = 4294967288UL;
            uint64_t *l_1025 = &p_1102->g_70;
            for (p_1102->g_708.f0 = 29; (p_1102->g_708.f0 <= 3); p_1102->g_708.f0 = safe_sub_func_uint32_t_u_u(p_1102->g_708.f0, 9))
            { /* block id: 455 */
                VECTOR(int16_t, 4) l_1007 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L);
                uint8_t *l_1008 = (void*)0;
                uint8_t *l_1009 = (void*)0;
                uint8_t *l_1010 = (void*)0;
                uint8_t *l_1011[8][9] = {{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0},{(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0,&p_1102->g_247[6][3].f0,&p_1102->g_247[6][3].f0,(void*)0,(void*)0}};
                uint32_t *l_1012 = &p_1102->g_247[6][3].f1;
                uint32_t *l_1013[5];
                int32_t l_1024 = 8L;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1013[i] = (void*)0;
                (*l_958) = ((l_1004 ^ ((*l_955) = ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1102->local_1_offset, get_local_id(1), 10), p_1102->g_3[1][4])) != (l_1024 = (~((VECTOR(uint8_t, 16))((p_1102->g_247[6][3].f0 |= (~l_1007.w)), 0x0EL, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x9BL, 0xE3L)).yxxyxxyy)), (uint8_t)p_1102->g_787.x, (uint8_t)((++l_1015) , (safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((p_23 = (((l_1023 = l_1022) != (p_1102->g_999.y , &l_1010)) & 0x61D741026C142261L)), p_25)) ^ p_1102->g_708.f0), l_1007.z)))))), 247UL, 0x49L, ((VECTOR(uint8_t, 2))(4UL)), 0UL, 3UL)).sf))))) , (*p_1102->g_993));
                (*p_1102->g_903) = func_28(p_25, p_1102);
            }
            (*p_1102->g_903) = func_57(((*l_1025) = (p_27 ^ 0x1E49L)), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(p_26, l_1014)) , (safe_add_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(p_1102->g_922.y, 0x54C9F90D185D40CAL)) >= p_23), l_1004))), (((((VECTOR(uint64_t, 2))(p_1102->g_1034.s51)).odd ^ ((safe_lshift_func_int8_t_s_s(p_25, 1)) ^ l_1015)) | l_1015) < 0x334BA233L))), p_1102);
        }
    }
    for (l_938 = (-10); (l_938 > 29); l_938++)
    { /* block id: 471 */
        int16_t *l_1047[6] = {&p_1102->g_707,&p_1102->g_707,&p_1102->g_707,&p_1102->g_707,&p_1102->g_707,&p_1102->g_707};
        uint8_t *l_1048 = &p_1102->g_247[6][3].f0;
        VECTOR(int16_t, 8) l_1053 = (VECTOR(int16_t, 8))(0x2898L, (VECTOR(int16_t, 4))(0x2898L, (VECTOR(int16_t, 2))(0x2898L, (-8L)), (-8L)), (-8L), 0x2898L, (-8L));
        VECTOR(int8_t, 8) l_1059 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x5EL), 0x5EL), 0x5EL, (-1L), 0x5EL);
        int32_t l_1067 = 0x7E9DB612L;
        union U1 ***l_1068 = &p_1102->g_721;
        union U1 ****l_1069 = &l_1068;
        int8_t *l_1070 = (void*)0;
        int8_t *l_1071 = (void*)0;
        int8_t *l_1072 = (void*)0;
        int32_t l_1073 = (-1L);
        int16_t l_1074 = 0x0A24L;
        int i;
        l_1074 = ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 16))(0x18F37183L, 0x9A3C6F6AL, (safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s((p_1102->g_426.s2 ^= (p_1102->g_708.f2 = p_1102->g_139.s5)), 6)) == 0x832D462CL) || (--(*l_1048))), ((VECTOR(int16_t, 8))((-3L), ((VECTOR(int16_t, 2))(p_1102->g_1051.xy)), ((VECTOR(int16_t, 4))(0x327EL, 1L, 0x6EC9L, (-9L))), 9L)).s7)) == p_23) >= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1102->g_1052.xy)).yyyy)), ((VECTOR(int16_t, 16))(l_1053.s7734132736662546)).sf603))), (safe_add_func_uint16_t_u_u(l_1053.s3, (&l_938 == (void*)0))), (safe_lshift_func_uint16_t_u_s(p_25, 7)), 2L, (-10L))).s42))))).hi) ^ ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(l_1058.yxyyyyxy)).s62, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1059.s3352)).ywwzxwyw)).s11))).xxyy, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(p_1102->g_1060.xxxx)).even, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1102->g_1061.s10150346)).s01)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_1062.yx)).yyyyxxyxyyyyxxxy)).lo)).s74)))))).xxxx))).x), (!GROUP_DIVERGE(0, 1)))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((safe_lshift_func_int8_t_s_s((((((l_1073 = (safe_div_func_int32_t_s_s((+(l_1067 = p_26)), ((((*l_1069) = l_1068) != (void*)0) && p_1102->g_774.s5)))) == l_1059.s1) , (*p_1102->g_993)) == l_1053.s5) , 0x5EL), 0)), p_23, ((VECTOR(uint32_t, 4))(0x7C3AB3CEL)), ((VECTOR(uint32_t, 4))(4UL)), ((VECTOR(uint32_t, 4))(1UL)), 0xBBC06548L, 0x8DE3F155L)).sa1e0)), ((VECTOR(uint32_t, 2))(0x1EC9CB79L)), 0x2C96A33AL)).s71)), ((VECTOR(uint32_t, 8))(0x50A375F0L)), p_27, 0x658B339DL, 0x65CF71ADL)).s75, ((VECTOR(uint32_t, 2))(1UL))))).yyyxyxyxxxxxyyxy, ((VECTOR(uint32_t, 16))(4294967295UL))))).s97)).hi, l_1059.s0)) && 9L);
        (*l_958) = l_1067;
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_922 p_1102->g_459 p_1102->g_929 p_1102->g_359 p_1102->g_139 p_1102->g_774 p_1102->g_144 p_1102->g_830 p_1102->g_793
 * writes: p_1102->g_707 p_1102->g_144
 */
int32_t * func_28(int8_t  p_29, struct S2 * p_1102)
{ /* block id: 419 */
    VECTOR(int16_t, 4) l_918 = (VECTOR(int16_t, 4))(0x38A3L, (VECTOR(int16_t, 2))(0x38A3L, 0x5305L), 0x5305L);
    VECTOR(int16_t, 16) l_919 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x493CL), 0x493CL), 0x493CL, 5L, 0x493CL, (VECTOR(int16_t, 2))(5L, 0x493CL), (VECTOR(int16_t, 2))(5L, 0x493CL), 5L, 0x493CL, 5L, 0x493CL);
    VECTOR(int16_t, 16) l_920 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4C13L), 0x4C13L), 0x4C13L, 1L, 0x4C13L, (VECTOR(int16_t, 2))(1L, 0x4C13L), (VECTOR(int16_t, 2))(1L, 0x4C13L), 1L, 0x4C13L, 1L, 0x4C13L);
    VECTOR(int16_t, 2) l_921 = (VECTOR(int16_t, 2))((-5L), 0x002AL);
    int16_t *l_925 = (void*)0;
    int16_t *l_926[7][10] = {{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707},{(void*)0,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_76,(void*)0,(void*)0,&p_1102->g_707}};
    int32_t l_932 = 0x740CDF8FL;
    int32_t *l_933 = (void*)0;
    int32_t *l_934 = (void*)0;
    int32_t *l_935 = (void*)0;
    int32_t *l_936 = &p_1102->g_144;
    int i, j;
    (*l_936) |= (safe_lshift_func_uint16_t_u_s((l_932 = ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(l_918.wx)).yxxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((l_918.z > FAKE_DIVERGE(p_1102->group_1_offset, get_group_id(1), 10)) & l_918.y), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(3L, 0x0E19L, ((VECTOR(int16_t, 2))(0x664BL, 0x43EBL)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_919.sa7bd1446)).s2153102333164304)).lo)), ((VECTOR(int16_t, 4))(l_920.s7765)))).sa3)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))((-1L), 0x3869L, l_920.s0, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(l_921.yx)), ((VECTOR(int16_t, 2))(p_1102->g_922.yy))))), 0x1AF6L, (-1L), ((l_919.s8 | ((((safe_mul_func_int16_t_s_s((((p_1102->g_707 = (+p_1102->g_459.s0)) && (((((p_29 ^ (!((safe_sub_func_uint16_t_u_u((p_1102->g_929 <= (safe_lshift_func_int8_t_s_s((l_920.s4 ^ l_918.w), p_29))), p_1102->g_359.y)) | l_919.s4))) == l_919.s1) ^ FAKE_DIVERGE(p_1102->group_2_offset, get_group_id(2), 10)) != p_29) > p_29)) | p_1102->g_139.s7), 0x77AFL)) == p_1102->g_774.sc) == l_921.x) || l_918.x)) == p_29), 0x654FL, (-2L), ((VECTOR(int16_t, 4))(0x2F6DL)), 0x0ACCL, 0x3728L)).s3f9f, ((VECTOR(int16_t, 4))(0L))))), 0x6A88L, (-1L), ((VECTOR(int16_t, 4))(0x159AL)), 5L, p_1102->g_922.x, (-1L), (-1L))).s6e)), (-1L))), ((VECTOR(int16_t, 2))((-1L))), 1L, 0x38E5L)).lo))).z), 3));
    (*l_936) ^= 0x5FFC8BB6L;
    return (*p_1102->g_830);
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_631 p_1102->g_726 p_1102->g_459 p_1102->g_139 p_1102->g_126 p_1102->g_455 p_1102->g_415 p_1102->g_103.f1 p_1102->g_comm_values p_1102->g_247.f0 p_1102->g_762 p_1102->g_15 p_1102->g_143 p_1102->g_622 p_1102->g_103.f2 p_1102->g_787 p_1102->l_comm_values p_1102->g_97 p_1102->g_368 p_1102->g_904 p_1102->g_905 p_1102->g_3 p_1102->g_538 p_1102->g_903 p_1102->g_793
 * writes: p_1102->g_721 p_1102->g_726 p_1102->g_103.f1 p_1102->g_76 p_1102->g_247.f0 p_1102->g_363 p_1102->g_15 p_1102->g_878 p_1102->g_97 p_1102->g_903
 */
int32_t * func_30(int8_t  p_31, uint16_t  p_32, int32_t * p_33, union U1  p_34, int64_t  p_35, struct S2 * p_1102)
{ /* block id: 311 */
    union U1 **l_720[7];
    VECTOR(int8_t, 8) l_727 = (VECTOR(int8_t, 8))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x1FL), 0x1FL), 0x1FL, 0x1AL, 0x1FL);
    VECTOR(int16_t, 2) l_730 = (VECTOR(int16_t, 2))(0x3042L, 2L);
    VECTOR(int16_t, 4) l_731 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 1L), 1L);
    int16_t *l_734[4] = {&p_1102->g_247[6][3].f2,&p_1102->g_247[6][3].f2,&p_1102->g_247[6][3].f2,&p_1102->g_247[6][3].f2};
    int32_t l_735[5][7][1] = {{{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L}},{{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L}},{{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L}},{{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L}},{{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L},{0x54A1C372L}}};
    int8_t *l_736 = (void*)0;
    int8_t *l_737 = (void*)0;
    int8_t *l_738 = (void*)0;
    int8_t *l_739 = (void*)0;
    int8_t *l_740 = (void*)0;
    int8_t *l_741 = (void*)0;
    VECTOR(int32_t, 8) l_742 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
    VECTOR(uint8_t, 2) l_743 = (VECTOR(uint8_t, 2))(0x3EL, 255UL);
    int32_t l_759 = 0x1085583BL;
    VECTOR(int32_t, 2) l_772 = (VECTOR(int32_t, 2))(4L, 0x0D30B9CAL);
    uint8_t *l_839 = &p_1102->g_247[6][3].f0;
    uint8_t **l_838 = &l_839;
    int64_t **l_849 = &p_1102->g_639;
    uint8_t l_868[4][4][7] = {{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}},{{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}}};
    int32_t *l_914 = &p_1102->g_97;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_720[i] = &p_1102->g_102;
    (*p_33) = (((safe_div_func_int16_t_s_s(((((0x53AAF188L || (p_34 , ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(((p_1102->g_631.s8 < (safe_div_func_uint64_t_u_u(((p_34.f2 | (p_31 && ((safe_rshift_func_uint8_t_u_u((((p_1102->g_721 = l_720[4]) != (((-6L) > (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1102->group_1_offset, get_group_id(1), 10), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0x6DL)), (-7L), 0x4FL)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1102->g_726.s0350404762747456)).s7009)).xwzzyzxy, ((VECTOR(int8_t, 8))((p_1102->g_726.s7 = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x08L, 0x29L)), (-6L), 0x5AL)), ((VECTOR(int8_t, 2))(l_727.s47)).xyyx, ((VECTOR(int8_t, 2))(0x60L, 0x0BL)).xxyy))).wzwyyzzwxxywzyww, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(0x0EL, (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_730.yyyyyxyyyxxyxyyy)).s6a)), 0L, 0x19D1L)).odd)), ((((VECTOR(int16_t, 2))(l_731.xx)).hi || p_34.f2) , (l_735[4][3][0] = (safe_mul_func_int16_t_s_s(l_731.z, l_731.x)))), 0x389BL, p_32, ((VECTOR(int16_t, 2))(0x7CA5L)), 0x6C3AL)).s7040565623323113, ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))(0x52EEL))))).s3, 9)), (-1L), 0L)).hi, ((VECTOR(int8_t, 2))(0x5BL))))), 0x5FL, 1L)).xzyxwxwx, ((VECTOR(int8_t, 8))(0L))))))).s45)).xxxxyyyyyxxyxyxy)).s3b, (int8_t)0x36L))).xxxy, ((VECTOR(int8_t, 4))(0x05L))))), ((VECTOR(int8_t, 4))(0x7DL))))).xxxwzzzxwzzxwwxz, ((VECTOR(int8_t, 16))(0x2CL))))), ((VECTOR(int8_t, 16))(0x69L))))).sfcfe, ((VECTOR(int8_t, 4))(0x61L))))))).z), (-10L), l_730.x, l_735[4][3][0], ((VECTOR(int8_t, 4))(0x7CL))))))).s25)).xyyx, ((VECTOR(int8_t, 4))(0x34L))))).w)), p_35))) , &p_1102->g_102)) , 0xDFL), p_1102->g_459.s2)) | p_1102->g_139.s4))) && 0x0AC61F48L), 0x4E274B9A2003C069L))) , p_32))) > p_34.f2), 0x7574L)), 0x2FL)) ^ p_1102->g_126.se))) , FAKE_DIVERGE(p_1102->global_1_offset, get_global_id(1), 10)) || l_735[0][0][0]) , p_1102->g_455.x), 0x58A1L)) && p_1102->g_415.s2) != p_31);
    if ((((VECTOR(int32_t, 16))(l_742.s7121134755616556)).s7 == ((p_34.f2 , ((VECTOR(uint8_t, 16))(l_743.xyyyyxxyxxyxxxyx)).s6) > 3UL)))
    { /* block id: 316 */
        int64_t l_746 = (-1L);
        int32_t l_758 = 0x3854ED46L;
        int32_t l_760 = 0L;
        int32_t l_761 = 0x3F26D9FCL;
        int32_t l_763 = 0x327D3EB6L;
        uint16_t l_769 = 0x279BL;
        VECTOR(int32_t, 2) l_786 = (VECTOR(int32_t, 2))(0x27846EBEL, 4L);
        int8_t *l_850[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint64_t l_859 = 0x468441E15985ADA5L;
        int64_t **l_906 = &p_1102->g_639;
        int64_t **l_907 = &p_1102->g_639;
        int i, j;
        for (p_1102->g_103.f1 = 7; (p_1102->g_103.f1 <= 30); p_1102->g_103.f1++)
        { /* block id: 319 */
            uint64_t l_747 = 0x4C325C4572FB2FB8L;
            int32_t *l_749 = &p_1102->g_97;
            int32_t *l_750 = (void*)0;
            int32_t l_751 = (-4L);
            int32_t *l_752 = (void*)0;
            int32_t *l_753 = (void*)0;
            int32_t *l_754 = &p_1102->g_144;
            int32_t l_755 = (-10L);
            int32_t l_756 = 0x25E52078L;
            int32_t *l_757[9] = {&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0],&l_735[0][4][0]};
            VECTOR(uint16_t, 8) l_764 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL);
            uint16_t ***l_784 = &p_1102->g_577[0];
            union U1 ***l_819 = (void*)0;
            int i;
            (*p_33) |= (p_31 > ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((p_1102->g_76 = ((VECTOR(int16_t, 2))(0x440EL, 0L)).even) == l_746), 0x21L, ((VECTOR(int8_t, 4))((-4L), (-2L), (-6L), 0x55L)), 1L, 0L)))).even, ((VECTOR(int8_t, 4))(l_747, (l_735[4][3][0] = (safe_unary_minus_func_uint8_t_u(p_32))), 0x70L, 0x00L))))).x);
            ++l_764.s7;
            for (l_763 = 0; (l_763 <= (-16)); l_763 = safe_sub_func_int32_t_s_s(l_763, 2))
            { /* block id: 326 */
                VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))(7L, 6L);
                uint32_t *l_777 = &p_1102->g_432;
                uint16_t *l_780 = (void*)0;
                uint16_t *l_781[3][2][6] = {{{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0},{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0}},{{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0},{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0}},{{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0},{(void*)0,(void*)0,&p_1102->g_143[2][3][3],&p_1102->g_143[0][4][3],&p_1102->g_143[2][3][3],(void*)0}}};
                int i, j, k;
                if (p_1102->g_comm_values[p_1102->tid])
                    break;
                if (l_769)
                    continue;
            }
        }
        p_33 = (void*)0;
        if (((l_760 ^= (((0UL == (((l_772.x , (*l_838)) != ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((++(*l_839)) && (~l_758)), (((l_849 != (void*)0) , ((p_1102->g_363 = (0UL != p_1102->g_762[4][5])) < 0x76L)) == 1L), ((VECTOR(uint16_t, 8))(0x9906L)), ((VECTOR(uint16_t, 4))(0xA8F0L)), 1UL, 0x9FA2L)).lo)).s2215732172536762, ((VECTOR(uint16_t, 16))(0xE0BAL))))).s9, l_743.x)) , l_850[3][1])) <= p_31)) > FAKE_DIVERGE(p_1102->global_0_offset, get_global_id(0), 10)) != 0x44EA26A7L)) > l_735[4][0][0]))
        { /* block id: 382 */
            uint16_t l_853 = 65531UL;
            for (p_1102->g_15 = (-7); (p_1102->g_15 == 7); p_1102->g_15 = safe_add_func_uint16_t_u_u(p_1102->g_15, 9))
            { /* block id: 385 */
                int32_t *l_854[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_854[i] = &l_760;
                l_760 |= l_853;
            }
        }
        else
        { /* block id: 388 */
            int32_t *l_855[3][2][9] = {{{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]},{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]}},{{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]},{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]}},{{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]},{(void*)0,(void*)0,&p_1102->g_144,&l_763,&p_1102->g_97,(void*)0,&p_1102->g_3[1][0],&l_758,&p_1102->g_3[1][0]}}};
            int32_t l_856 = 0x1F3E26F8L;
            int32_t l_857[6] = {0x1A06D85BL,(-5L),0x1A06D85BL,0x1A06D85BL,(-5L),0x1A06D85BL};
            int16_t l_858[1];
            VECTOR(int32_t, 8) l_881 = (VECTOR(int32_t, 8))(0x62B04554L, (VECTOR(int32_t, 4))(0x62B04554L, (VECTOR(int32_t, 2))(0x62B04554L, 0x535EE66FL), 0x535EE66FL), 0x535EE66FL, 0x62B04554L, 0x535EE66FL);
            int32_t ***l_901 = (void*)0;
            int32_t ***l_902[1];
            uint64_t *l_908 = (void*)0;
            uint64_t *l_909 = (void*)0;
            uint64_t *l_910 = (void*)0;
            uint64_t *l_911 = &l_859;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_858[i] = 0L;
            for (i = 0; i < 1; i++)
                l_902[i] = (void*)0;
            ++l_859;
            for (p_34.f3 = 0; (p_34.f3 != 17); p_34.f3++)
            { /* block id: 392 */
                int32_t l_864 = 0x039684F4L;
                int32_t l_865 = 0x2ED0DF1CL;
                uint64_t *l_874 = (void*)0;
                uint64_t *l_875 = (void*)0;
                int8_t *l_876 = (void*)0;
                int8_t **l_877 = (void*)0;
                uint64_t *l_884 = &l_859;
                l_865 ^= (l_742.s1 = (l_864 = ((p_1102->g_363 = 9L) | ((void*)0 != &p_35))));
                p_1102->g_97 &= ((safe_div_func_int64_t_s_s((l_868[1][0][3] , (l_865 , (safe_sub_func_int8_t_s_s((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1102->g_873.wxxxxxxw)).s6207075503116436)).sf != (l_865 = p_1102->g_143[2][1][3])) == (&p_1102->g_363 != (p_1102->g_878[0] = l_876))) <= (0xD51A8AE3E548BA28L < ((((*l_884) |= ((safe_mul_func_uint8_t_u_u(p_1102->g_622.sb, p_1102->g_103.f2)) <= (((VECTOR(int32_t, 16))(l_881.s3233734354564442)).s7 && (safe_sub_func_uint16_t_u_u(((0x5458ECF88AF06822L && l_760) | p_34.f2), 0x61DEL))))) && p_1102->g_787.x) & p_1102->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]))), p_35)))), l_760)) || 0x4920C296L);
            }
            l_742.s5 = ((FAKE_DIVERGE(p_1102->group_2_offset, get_group_id(2), 10) && (((safe_add_func_uint16_t_u_u((p_1102->g_368.s1 < 0x7279978EL), (p_1102->g_622.s3 > (p_35 = p_34.f2)))) ^ ((void*)0 != &p_1102->g_708)) <= l_727.s4)) , l_730.x);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1102->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_731.x, (safe_lshift_func_uint8_t_u_u((~p_32), 7)))), (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(l_743.y, p_34.f2)) & ((((&p_1102->g_793 != (p_1102->g_903 = &p_1102->g_793)) , (l_786.x = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1102->g_904.xyyy)).xywywzyz)).s0)) , ((VECTOR(int64_t, 2))(p_1102->g_905.s15)).lo) | ((*l_911) = ((FAKE_DIVERGE(p_1102->group_1_offset, get_group_id(1), 10) , l_906) != (l_907 = l_849))))), l_730.y)), p_1102->g_3[2][4])), 2)))) || GROUP_DIVERGE(1, 1)) , p_1102->g_538.z), 10))][(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]));
        }
    }
    else
    { /* block id: 412 */
        (*p_33) &= l_772.x;
        return (*p_1102->g_903);
    }
    l_735[2][2][0] |= p_35;
    return l_914;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_102 p_1102->g_103
 * writes:
 */
union U1  func_36(int32_t * p_37, int32_t * p_38, struct S2 * p_1102)
{ /* block id: 309 */
    return (*p_1102->g_102);
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_432 p_1102->g_7 p_1102->g_351 p_1102->g_3 p_1102->g_144 p_1102->g_126 p_1102->g_426 p_1102->g_247.f0 p_1102->g_15 p_1102->g_368 p_1102->g_427 p_1102->g_620 p_1102->g_707 p_1102->l_comm_values p_1102->g_244 p_1102->g_708 p_1102->g_459 p_1102->g_97
 * writes: p_1102->g_432 p_1102->g_143 p_1102->g_363 p_1102->g_144 p_1102->g_351 p_1102->g_70 p_1102->g_247.f0 p_1102->g_103.f2 p_1102->g_97 p_1102->g_244
 */
int32_t * func_39(union U0  p_40, int64_t  p_41, int32_t * p_42, int32_t * p_43, struct S2 * p_1102)
{ /* block id: 291 */
    int64_t l_661 = 0x729B227F8717CA1FL;
    uint32_t *l_662 = &p_1102->g_432;
    VECTOR(uint8_t, 2) l_665 = (VECTOR(uint8_t, 2))(0UL, 0x13L);
    uint16_t *l_672 = &p_1102->g_143[2][1][3];
    int32_t l_673 = 0L;
    int8_t *l_674 = (void*)0;
    int8_t *l_675 = &p_1102->g_363;
    int32_t l_676 = (-5L);
    int64_t *l_677 = (void*)0;
    VECTOR(int32_t, 4) l_678 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6F48189AL), 0x6F48189AL);
    uint32_t *l_679[7][10] = {{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15},{&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15,&p_1102->g_15}};
    int32_t l_680 = (-1L);
    VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x5811CEEAL), 0x5811CEEAL), 0x5811CEEAL, (-10L), 0x5811CEEAL);
    int32_t *l_682[10][4][6] = {{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}},{{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0},{&p_1102->g_144,(void*)0,(void*)0,&p_1102->g_144,(void*)0,(void*)0}}};
    VECTOR(int32_t, 16) l_683 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L, (VECTOR(int32_t, 2))((-6L), 1L), (VECTOR(int32_t, 2))((-6L), 1L), (-6L), 1L, (-6L), 1L);
    VECTOR(uint16_t, 2) l_688 = (VECTOR(uint16_t, 2))(1UL, 65534UL);
    uint64_t *l_699[6];
    uint8_t *l_700 = (void*)0;
    uint8_t *l_701 = &p_1102->g_247[6][3].f0;
    int8_t l_706 = 0x31L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_699[i] = &p_1102->g_70;
    p_1102->g_144 ^= (0x1C9FL && (l_661 == (l_680 &= (((0x45335A259558E84EL || ((++(*l_662)) ^ (l_661 & (((l_661 > 0x61L) < (l_678.w ^= ((p_40 , (((VECTOR(uint8_t, 16))(l_665.yxxxxxyxxyyxxyxx)).s9 <= l_665.y)) != ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(0x2E2AL, 0x2881L)), (int16_t)((safe_sub_func_int32_t_s_s(((l_676 = ((*l_675) = (safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1102->global_1_offset, get_global_id(1), 10), ((((l_673 = (safe_lshift_func_uint16_t_u_s(((*l_672) = FAKE_DIVERGE(p_1102->global_1_offset, get_global_id(1), 10)), 8))) | (*p_43)) < p_41) , (-9L)))))) <= p_1102->g_351.y), p_1102->g_3[0][4])) , p_1102->g_7)))).hi))) == 0x714CA7113303C78BL)))) < 0xBCDBAA360C4AD079L) & 4L))));
    p_1102->g_144 = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x1AFB3EA5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_681.s25)))), (p_1102->g_351.x = 0x15E3D27DL), (-1L), (-5L), (p_1102->g_97 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(l_683.sf59acfe5ac014245)).hi, ((VECTOR(int32_t, 8))(((((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((0UL & (((((VECTOR(uint64_t, 2))(0xC8C5F04698DF89C2L, 0x82357CF41079509BL)).lo , (((p_41 >= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_688.xyyyyxyy)).s4, ((p_40.f0 < ((p_1102->g_126.s9 > (((p_1102->g_103.f2 = (((safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(p_1102->g_426.s2, (((((((p_1102->g_351.y = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((((((p_1102->g_70 = p_41) , (++(*l_701))) , ((0x5E5BL == (safe_div_func_uint64_t_u_u((p_40.f0 , p_40.f0), p_1102->g_15))) < p_1102->g_368.s4)) | p_40.f0) > p_40.f0) , p_1102->g_427.y) , p_40.f0), p_1102->g_620.s7)) <= p_41), 10)), p_41))) , GROUP_DIVERGE(0, 1)) < p_1102->g_126.s2) < (*p_42)) , GROUP_DIVERGE(2, 1)) || 9UL) , l_706))) && p_1102->g_15), p_1102->g_707)) <= 4UL) <= p_1102->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))])) & 0L) < p_1102->g_244.sa)) > 0L)) >= p_1102->g_126.s7), 0xF490L, 65535UL)).y) != p_40.f0) != p_40.f0)) >= 0x4793L) & (*p_43))), 0x7B3E50B1L)), GROUP_DIVERGE(2, 1))) == p_1102->g_620.s3) , p_1102->g_708) , 0x233F8089L), p_1102->g_459.s5, ((VECTOR(int32_t, 4))(8L)), 0L, 0x567D3456L)), ((VECTOR(int32_t, 8))(0x2F4DE35EL))))), ((VECTOR(int32_t, 8))(0x533F168AL))))).s01, ((VECTOR(int32_t, 2))(0x75762300L))))), 0x1BDA258FL, 0L, ((VECTOR(int32_t, 4))((-1L))))).s3), ((VECTOR(int32_t, 8))(0x56547C22L)), (-8L))).lo)).lo)))), ((VECTOR(int32_t, 4))(0L))))).xxzxyzwxzyyyzxxw, (int32_t)(*p_42), (int32_t)0x4378AF0FL))).s5;
    p_1102->g_244.s7 &= (2UL && p_1102->g_97);
    return &p_1102->g_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_620 p_1102->g_622 p_1102->g_631 p_1102->g_15 p_1102->g_3 p_1102->g_459 p_1102->g_76 p_1102->l_comm_values p_1102->g_97 p_1102->g_comm_values p_1102->g_102 p_1102->g_70 p_1102->g_144 p_1102->g_639 p_1102->g_126 p_1102->g_351 p_1102->g_244
 * writes: p_1102->g_143 p_1102->g_247.f0 p_1102->g_244 p_1102->g_76 p_1102->g_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_144 p_1102->g_246 p_1102->g_103.f2
 */
union U0  func_44(int32_t  p_45, union U0  p_46, int32_t * p_47, int32_t * p_48, int32_t * p_49, struct S2 * p_1102)
{ /* block id: 273 */
    int64_t l_582 = (-1L);
    int32_t l_583 = 0x2E48190AL;
    int32_t l_598 = (-1L);
    int32_t l_599 = (-2L);
    int32_t l_604 = 1L;
    int32_t l_605[1][1][8] = {{{0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L,0x7C4B96F2L}}};
    uint64_t l_608 = 0xBDA627542130248EL;
    VECTOR(int16_t, 4) l_618 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x17DDL), 0x17DDL);
    VECTOR(int16_t, 16) l_621 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    uint64_t l_623 = 0x719EB130CEF9EFC5L;
    union U1 l_628 = {0xBE929D21L};
    VECTOR(uint8_t, 2) l_645 = (VECTOR(uint8_t, 2))(0UL, 1UL);
    VECTOR(int32_t, 2) l_658 = (VECTOR(int32_t, 2))(0x4512847CL, (-4L));
    int i, j, k;
    if (l_582)
    { /* block id: 274 */
        int32_t *l_584 = (void*)0;
        int32_t *l_585 = (void*)0;
        int32_t *l_586 = (void*)0;
        int32_t *l_587 = &p_1102->g_144;
        int32_t *l_588 = &l_583;
        int32_t *l_589 = (void*)0;
        int32_t *l_590 = &p_1102->g_97;
        int32_t *l_591 = (void*)0;
        int32_t *l_592 = &l_583;
        int32_t *l_593 = &p_1102->g_144;
        int32_t *l_594 = (void*)0;
        int32_t *l_595 = &l_583;
        int32_t l_596 = 0x2208808DL;
        int32_t *l_597 = (void*)0;
        int32_t *l_600 = &l_583;
        int32_t *l_601 = &l_583;
        int32_t *l_602 = (void*)0;
        int32_t *l_603[6];
        int8_t l_606 = 0x0EL;
        int64_t l_607 = 0x23A77AC919903DA2L;
        int i;
        for (i = 0; i < 6; i++)
            l_603[i] = (void*)0;
        l_608--;
    }
    else
    { /* block id: 276 */
        uint16_t *l_617 = &p_1102->g_143[0][7][1];
        VECTOR(int16_t, 16) l_619 = (VECTOR(int16_t, 16))(0x47ACL, (VECTOR(int16_t, 4))(0x47ACL, (VECTOR(int16_t, 2))(0x47ACL, (-1L)), (-1L)), (-1L), 0x47ACL, (-1L), (VECTOR(int16_t, 2))(0x47ACL, (-1L)), (VECTOR(int16_t, 2))(0x47ACL, (-1L)), 0x47ACL, (-1L), 0x47ACL, (-1L));
        uint8_t *l_632 = &p_1102->g_247[6][3].f0;
        int32_t *l_634 = (void*)0;
        int32_t **l_633 = &l_634;
        int i;
        p_1102->g_244.s4 = ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((1L != (FAKE_DIVERGE(p_1102->group_1_offset, get_group_id(1), 10) == ((safe_mul_func_uint16_t_u_u(((*l_617) = p_46.f0), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(l_618.yw)).yyxyyxxxyyyyyyxx, ((VECTOR(int16_t, 8))(l_619.s466e9e9c)).s3531721071360245, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(1L, 0x3943L)).yxyyyxxy, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(p_1102->g_620.s16)).xyxyyxxx, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_621.se9e7b194)).s44)).xxyx)), 0x08BBL, ((VECTOR(int16_t, 2))(p_1102->g_622.s8d)), (0x61L & l_623), p_45, 0x26EAL, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(0x7B4FL, 0x332DL, 0x22E0L, 0L))))).odd, ((VECTOR(int16_t, 2))(7L, 1L))))), ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((-5L), (l_628 , ((0xD33BE4C3L && ((VECTOR(int32_t, 4))((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_1102->g_631.sd4)).lo, (((*l_632) = 247UL) != p_46.f0))), 0x7E623F49L, 0x17D8C879L, 0x5A04BEB3L)).z) < l_583)))) < p_1102->g_15), 5)) <= 0UL), 8L, 0x2717L, 0x705FL)), ((VECTOR(int16_t, 16))(7L))))), ((VECTOR(int16_t, 16))(0x655EL))))).lo, ((VECTOR(int16_t, 8))(0L))))).s3126261633671512, ((VECTOR(int16_t, 16))(0x2BE7L))))).s62, ((VECTOR(int16_t, 2))(0x7102L))))).lo, 0x2C2CL, 0x7A54L, (-8L))), ((VECTOR(int16_t, 4))(0x3F30L))))).zxxyxxyy, ((VECTOR(int16_t, 8))(1L))))).even, (int16_t)p_1102->g_622.s0))).yywywxzw, ((VECTOR(int16_t, 8))(0x57CCL))))).s21)), ((VECTOR(int16_t, 2))((-1L))), (-8L), ((VECTOR(int16_t, 2))(0L)), 0x5FC0L)).s34)), ((VECTOR(int16_t, 4))(0x6F2CL)), 0x0C46L, ((VECTOR(int16_t, 2))(0x147DL)), ((VECTOR(int16_t, 2))(1L)), 5L, l_605[0][0][7], 0x55BEL, (-10L), 0L))))))))).s292e, ((VECTOR(int16_t, 4))(1L))))))).wwxyzwxywxyywxyx, (int16_t)l_619.sd))).sd5, ((VECTOR(int16_t, 2))(0x1325L))))), 0x6BA8L, 0x21C6L)).y)) && l_619.sa))), 0)), GROUP_DIVERGE(1, 1))) == p_1102->g_3[2][6]);
        (*l_633) = func_57(p_1102->g_459.s4, p_46.f0, p_1102);
    }
    for (l_628.f2 = 28; (l_628.f2 != 33); l_628.f2 = safe_add_func_int8_t_s_s(l_628.f2, 2))
    { /* block id: 284 */
        int32_t l_640 = (-1L);
        uint8_t *l_650 = &p_1102->g_103.f2;
        if (l_621.s2)
            break;
        p_1102->g_244.s7 |= (safe_sub_func_uint32_t_u_u((((((p_1102->g_639 != (void*)0) ^ l_640) > ((VECTOR(int8_t, 2))(1L, 0x36L)).even) != (p_1102->g_97 && (((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((255UL || 0x7BL), 14)) & ((VECTOR(uint8_t, 4))(l_645.xyyy)).y), ((((*l_650) = ((((safe_lshift_func_uint8_t_u_u(((0xB6L | (safe_sub_func_uint8_t_u_u((p_1102->g_459.s1 >= 4294967291UL), GROUP_DIVERGE(1, 1)))) | 0UL), p_1102->g_126.s6)) && p_1102->g_459.s6) || l_640) , l_583)) && p_1102->g_351.x) < l_623))) == 0xEA633E6C9DC09D1AL) , l_640))) & p_46.f0), 0xEED34EBEL));
        p_1102->g_97 |= (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(0, 1))), (safe_mul_func_uint8_t_u_u((p_45 ^ (((VECTOR(int32_t, 4))(l_658.yyyx)).w > p_45)), p_45))));
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_244 p_1102->g_351 p_1102->g_3 p_1102->g_139 p_1102->g_70 p_1102->g_247.f0 p_1102->g_359 p_1102->g_143 p_1102->g_368 p_1102->g_76 p_1102->l_comm_values p_1102->g_15 p_1102->g_97 p_1102->g_comm_values p_1102->g_102 p_1102->g_144 p_1102->g_415 p_1102->g_426 p_1102->g_427 p_1102->g_7 p_1102->g_103.f0 p_1102->g_103 p_1102->g_455 p_1102->g_459 p_1102->g_247 p_1102->g_508 p_1102->g_363 p_1102->g_538 p_1102->g_126 p_1102->g_562
 * writes: p_1102->g_97 p_1102->g_363 p_1102->g_143 p_1102->g_76 p_1102->g_comm_values p_1102->g_102 p_1102->g_144 p_1102->g_246 p_1102->g_15 p_1102->g_247.f0 p_1102->g_103.f0 p_1102->g_351 p_1102->g_538 p_1102->g_577 p_1102->g_126
 */
int32_t * func_51(int32_t * p_52, int32_t * p_53, int32_t * p_54, uint16_t  p_55, uint64_t  p_56, struct S2 * p_1102)
{ /* block id: 125 */
    uint32_t l_342 = 0x9169E038L;
    int16_t *l_352 = &p_1102->g_76;
    uint64_t l_356 = 1UL;
    union U0 **l_360 = &p_1102->g_246;
    int64_t *l_384 = (void*)0;
    int32_t l_398 = 0x30016C54L;
    int32_t l_400 = (-1L);
    uint16_t l_406 = 0x0360L;
    VECTOR(uint16_t, 4) l_409 = (VECTOR(uint16_t, 4))(0x3EC0L, (VECTOR(uint16_t, 2))(0x3EC0L, 0x3F4DL), 0x3F4DL);
    VECTOR(int16_t, 16) l_452 = (VECTOR(int16_t, 16))(0x49B4L, (VECTOR(int16_t, 4))(0x49B4L, (VECTOR(int16_t, 2))(0x49B4L, 0x5FC7L), 0x5FC7L), 0x5FC7L, 0x49B4L, 0x5FC7L, (VECTOR(int16_t, 2))(0x49B4L, 0x5FC7L), (VECTOR(int16_t, 2))(0x49B4L, 0x5FC7L), 0x49B4L, 0x5FC7L, 0x49B4L, 0x5FC7L);
    int32_t l_480 = 0L;
    int32_t l_483 = 1L;
    int32_t l_485 = 0L;
    int32_t l_486 = 0x07AABF59L;
    uint64_t l_488 = 0xF2E93A806DE8E74FL;
    uint16_t *l_497[2];
    uint16_t **l_496 = &l_497[0];
    VECTOR(int16_t, 4) l_545 = (VECTOR(int16_t, 4))(0x4D96L, (VECTOR(int16_t, 2))(0x4D96L, 0x695CL), 0x695CL);
    VECTOR(uint64_t, 16) l_548 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 18446744073709551609UL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551614UL), 18446744073709551609UL, 18446744073709551614UL, 18446744073709551609UL, 18446744073709551614UL);
    VECTOR(int32_t, 2) l_558 = (VECTOR(int32_t, 2))(0x3DC51645L, 0x2F7F6E29L);
    int i;
    for (i = 0; i < 2; i++)
        l_497[i] = (void*)0;
    if ((atomic_inc(&p_1102->l_atomic_input[80]) == 5))
    { /* block id: 127 */
        uint32_t l_260 = 0xFCA033A9L;
        int16_t l_338 = 1L;
        uint8_t l_339 = 0xE6L;
        if (l_260)
        { /* block id: 128 */
            int64_t l_261 = 0x16130E4FD301AD19L;
            uint64_t l_262 = 0x7B45C48BDE9DC1AAL;
            int32_t l_327 = 0x221348D3L;
            int32_t *l_326 = &l_327;
            int32_t *l_328 = (void*)0;
            uint32_t l_329 = 0x34E82969L;
            int32_t l_330 = 0x5DF04A75L;
            l_262 ^= (l_261 &= (-3L));
            for (l_262 = 0; (l_262 <= 1); l_262 = safe_add_func_int64_t_s_s(l_262, 3))
            { /* block id: 133 */
                uint16_t l_265 = 0xC0F5L;
                VECTOR(int32_t, 8) l_266 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
                uint16_t l_267 = 9UL;
                int8_t l_268 = (-8L);
                int32_t l_269 = (-1L);
                uint32_t l_270 = 0x932EEAFFL;
                int64_t l_271 = 0x2E771B17EABBAE32L;
                uint32_t l_315 = 0xB64468A4L;
                uint64_t l_316 = 18446744073709551615UL;
                VECTOR(uint32_t, 2) l_317 = (VECTOR(uint32_t, 2))(4294967295UL, 0xA3F23C4EL);
                VECTOR(uint32_t, 16) l_318 = (VECTOR(uint32_t, 16))(0x6E355F6FL, (VECTOR(uint32_t, 4))(0x6E355F6FL, (VECTOR(uint32_t, 2))(0x6E355F6FL, 1UL), 1UL), 1UL, 0x6E355F6FL, 1UL, (VECTOR(uint32_t, 2))(0x6E355F6FL, 1UL), (VECTOR(uint32_t, 2))(0x6E355F6FL, 1UL), 0x6E355F6FL, 1UL, 0x6E355F6FL, 1UL);
                VECTOR(int32_t, 2) l_319 = (VECTOR(int32_t, 2))(0x49BAC657L, 1L);
                VECTOR(int32_t, 16) l_320 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L, (VECTOR(int32_t, 2))(0L, 3L), (VECTOR(int32_t, 2))(0L, 3L), 0L, 3L, 0L, 3L);
                uint16_t l_321[4][7] = {{1UL,1UL,1UL,65535UL,1UL,65529UL,65532UL},{1UL,1UL,1UL,65535UL,1UL,65529UL,65532UL},{1UL,1UL,1UL,65535UL,1UL,65529UL,65532UL},{1UL,1UL,1UL,65535UL,1UL,65529UL,65532UL}};
                uint64_t l_324 = 6UL;
                int8_t l_325 = 1L;
                int i, j;
                l_267 = ((VECTOR(int32_t, 8))(2L, l_265, 0L, (-1L), ((VECTOR(int32_t, 4))(l_266.s1354)))).s3;
                l_271 &= (l_268 , (l_269 , l_270));
                for (l_270 = (-6); (l_270 == 7); l_270 = safe_add_func_uint32_t_u_u(l_270, 4))
                { /* block id: 138 */
                    int32_t *l_274 = (void*)0;
                    uint32_t l_275 = 4294967295UL;
                    uint32_t l_276 = 2UL;
                    uint32_t l_277 = 0x3F5A5799L;
                    int32_t l_278 = 0L;
                    int32_t l_279 = 0L;
                    VECTOR(int32_t, 2) l_280 = (VECTOR(int32_t, 2))(0x70517095L, 0x7B07FBC5L);
                    int8_t l_281 = 0x67L;
                    VECTOR(int32_t, 4) l_282 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x52C805C9L), 0x52C805C9L);
                    VECTOR(int32_t, 8) l_283 = (VECTOR(int32_t, 8))(0x290F1359L, (VECTOR(int32_t, 4))(0x290F1359L, (VECTOR(int32_t, 2))(0x290F1359L, 0x1F5763B2L), 0x1F5763B2L), 0x1F5763B2L, 0x290F1359L, 0x1F5763B2L);
                    VECTOR(int32_t, 16) l_284 = (VECTOR(int32_t, 16))(0x44A82BBEL, (VECTOR(int32_t, 4))(0x44A82BBEL, (VECTOR(int32_t, 2))(0x44A82BBEL, (-3L)), (-3L)), (-3L), 0x44A82BBEL, (-3L), (VECTOR(int32_t, 2))(0x44A82BBEL, (-3L)), (VECTOR(int32_t, 2))(0x44A82BBEL, (-3L)), 0x44A82BBEL, (-3L), 0x44A82BBEL, (-3L));
                    int8_t l_285[5][6] = {{(-2L),(-2L),1L,(-3L),0x20L,0x1DL},{(-2L),(-2L),1L,(-3L),0x20L,0x1DL},{(-2L),(-2L),1L,(-3L),0x20L,0x1DL},{(-2L),(-2L),1L,(-3L),0x20L,0x1DL},{(-2L),(-2L),1L,(-3L),0x20L,0x1DL}};
                    uint32_t l_288 = 4294967295UL;
                    int32_t l_289 = 1L;
                    uint32_t l_290 = 4294967286UL;
                    int32_t l_291 = 0x22D69E9BL;
                    int64_t l_292 = (-1L);
                    int64_t l_293 = 4L;
                    uint64_t l_294 = 0x1864CAFE291C010EL;
                    VECTOR(uint16_t, 4) l_295 = (VECTOR(uint16_t, 4))(0xFAADL, (VECTOR(uint16_t, 2))(0xFAADL, 1UL), 1UL);
                    int32_t l_296[5][1];
                    int16_t l_297 = 0L;
                    union U1 l_310 = {5UL};
                    int8_t l_311 = 0x7BL;
                    uint32_t *l_313 = (void*)0;
                    uint32_t **l_312 = &l_313;
                    uint32_t **l_314[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_296[i][j] = 1L;
                    }
                    for (i = 0; i < 5; i++)
                        l_314[i] = &l_313;
                    l_274 = l_274;
                    l_295.z = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_266.s4 = l_275), 0x5E0DA8BDL, l_276, 1L, l_277, 4L, (((VECTOR(uint64_t, 4))(0x0CA53A14165B2EF0L, 0x9FC251ACBAA4A077L, 0xAF5D0D1794D5D57FL, 18446744073709551611UL)).w , l_278), (l_266.s5 ^= l_279), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(1L, 0x1BDE4E45L)), 0L, ((VECTOR(int32_t, 4))(l_280.yxyy)), ((VECTOR(int32_t, 2))((-8L), 0x0D60D75DL)), 0x23C4206CL, 1L, 0x4B1D6F62L, 0x2F4F48F4L, 1L, 3L)).sfc70, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 1L)))).yxxy)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x3C3C447EL, 0x44A44EA5L, ((VECTOR(int32_t, 2))((-1L), 0x2B58A152L)), ((VECTOR(int32_t, 16))(l_281, ((VECTOR(int32_t, 2))(l_282.yz)), 0x395CEC5EL, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_283.s6771735070057144)).s715c))), (-1L), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_284.s65199b7f)).s6, ((((VECTOR(int64_t, 2))(0x54C38B294ED0EE74L, (-1L))).hi , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_285[4][3], 0L, ((--l_265) , l_288), (-8L), ((VECTOR(int64_t, 2))(0x5296113AD017C25CL)), l_289, 0x3E0AD6E44AAF0699L, l_290, 0x5C497394E5E61AE0L, 4L, ((VECTOR(int64_t, 4))(0x5DA8B97A130FDB2BL)), 0x4EEBD542BDA7D396L)).s67)).odd) , l_291), ((VECTOR(int32_t, 4))(0x2286EEC7L)), ((VECTOR(int32_t, 2))(0x2DEC39ADL)), 0x6CF501CBL, l_292, 1L, (-6L), 0x372ABC18L, ((VECTOR(int32_t, 2))((-10L))), 3L)).s24, (int32_t)0x34EAE28CL))).yyxy, ((VECTOR(int32_t, 4))(0x7D43B0D8L)), ((VECTOR(int32_t, 4))(5L))))), 0x12ABE026L, 0L, 0x43600163L)).s1, l_293, (-3L), 1L)).even, ((VECTOR(int32_t, 4))((-1L)))))))))))), 6L, l_294, 0x5F640F76L, 0x143134DEL)).hi)).s45)), ((VECTOR(int32_t, 2))(0x16BD690EL)), ((VECTOR(int32_t, 2))(0x32D9A532L))))).lo;
                    if ((l_296[3][0] , l_297))
                    { /* block id: 144 */
                        uint8_t l_298 = 5UL;
                        VECTOR(int16_t, 2) l_299 = (VECTOR(int16_t, 2))((-10L), 5L);
                        uint16_t l_302[9][9][2] = {{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}},{{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL},{5UL,65535UL}}};
                        uint16_t *l_301[1][6][2] = {{{&l_302[6][1][0],&l_302[6][1][0]},{&l_302[6][1][0],&l_302[6][1][0]},{&l_302[6][1][0],&l_302[6][1][0]},{&l_302[6][1][0],&l_302[6][1][0]},{&l_302[6][1][0],&l_302[6][1][0]},{&l_302[6][1][0],&l_302[6][1][0]}}};
                        uint16_t **l_300 = &l_301[0][1][0];
                        uint16_t **l_303[10][6][1];
                        int32_t *l_304 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_303[i][j][k] = &l_301[0][4][1];
                            }
                        }
                        l_274 = (((GROUP_DIVERGE(2, 1) , l_298) , (l_297 = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_299.yxyyyxyy)).s6567227543353510)).sa)) , (void*)0);
                        l_303[7][2][0] = l_300;
                        l_278 |= (l_283.s0 = 0L);
                        l_274 = l_304;
                    }
                    else
                    { /* block id: 151 */
                        int8_t l_305 = 0x5FL;
                        int8_t l_306 = 0x1AL;
                        uint32_t l_307 = 0x267EC730L;
                        l_282.y &= 0x761BECA9L;
                        l_307++;
                    }
                    l_314[3] = (l_310 , (l_311 , l_312));
                }
                l_325 &= ((((l_315 , l_316) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(l_317.xxyyyxyxxyxyxxxy)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_318.se3)).yyyyxxxx)).lo)).yxzyxwyzwxwwwyxz, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(l_319.yyxyyyxy)).odd, ((VECTOR(int32_t, 2))(l_320.s52)).yxyy))).xzywyzyxyxzxzzww, ((VECTOR(uint32_t, 2))(0x87F322EFL, 0x67DB7B88L)).xyyyxyyxyxyyxxyx))).sca)).yyxxxxxx))))).s2) , (--l_321[1][6])) , l_324);
            }
            l_328 = l_326;
            l_330 ^= l_329;
        }
        else
        { /* block id: 162 */
            int32_t l_332 = 0x58CD0151L;
            int32_t *l_331 = &l_332;
            int32_t *l_333 = &l_332;
            int32_t l_334 = 2L;
            uint64_t l_335 = 0x815BB668D786CBCBL;
            l_333 = l_331;
            l_335++;
        }
        ++l_339;
        unsigned int result = 0;
        result += l_260;
        result += l_338;
        result += l_339;
        atomic_add(&p_1102->l_special_values[80], result);
    }
    else
    { /* block id: 167 */
        (1 + 1);
    }
    if ((l_356 &= ((1UL >= (+p_1102->g_244.s6)) , ((l_342 >= (safe_rshift_func_int8_t_s_u((+((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1102->g_351.xyyx)).z, ((l_352 == (void*)0) && (safe_div_func_uint8_t_u_u((((p_56 != ((p_1102->g_3[0][2] == (safe_unary_minus_func_uint32_t_u(l_342))) > ((*p_54) & p_1102->g_139.s3))) <= 0x7DL) , p_1102->g_70), l_342))))), FAKE_DIVERGE(p_1102->global_0_offset, get_global_id(0), 10))), 1UL)) & p_1102->g_244.sd)), 4))) ^ p_1102->g_247[6][3].f0))))
    { /* block id: 171 */
        int8_t *l_361 = (void*)0;
        int8_t *l_362 = &p_1102->g_363;
        int64_t *l_366 = (void*)0;
        int64_t **l_367 = &l_366;
        int32_t l_371 = 1L;
        uint16_t *l_372 = (void*)0;
        uint16_t *l_373 = (void*)0;
        uint16_t *l_374 = (void*)0;
        uint16_t *l_375 = (void*)0;
        uint16_t *l_376 = (void*)0;
        uint16_t *l_377 = (void*)0;
        uint16_t *l_378 = (void*)0;
        uint16_t *l_379 = (void*)0;
        uint16_t *l_380 = (void*)0;
        uint16_t *l_381 = (void*)0;
        uint16_t *l_382[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_383 = 0x4AC07134L;
        int i;
        p_52 = func_57((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(p_1102->g_359.yxxyxxxyyxxxxxxx)).sdd, (uint16_t)(p_56 && p_55), (uint16_t)(0xD607E727781C1A81L == ((((*l_362) = (((*p_52) = (l_360 != (void*)0)) & p_56)) , (p_1102->g_143[2][1][3] ^= p_56)) < ((GROUP_DIVERGE(2, 1) || (((*l_367) = l_366) != (((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(p_1102->g_368.s21)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((safe_sub_func_uint16_t_u_u((l_383 |= (p_55 ^= ((1L < l_371) || 0L))), 0x6ECFL)), l_383, 0x0BL, ((VECTOR(int8_t, 2))(0x03L)), p_56, 3L, 1L)).hi)).lo))).even , l_384))) ^ l_371)))))).even, FAKE_DIVERGE(p_1102->global_1_offset, get_global_id(1), 10))), p_56, p_1102);
    }
    else
    { /* block id: 179 */
        int8_t l_401 = 1L;
        int64_t *l_449 = (void*)0;
        union U1 *l_464 = &p_1102->g_103;
        union U0 **l_470 = (void*)0;
        int32_t l_475 = 0L;
        int32_t l_476 = 0x611331BEL;
        int32_t l_477 = 0L;
        int32_t l_478 = 6L;
        int32_t l_482 = 0x79133C84L;
        int32_t l_484[1];
        VECTOR(int16_t, 2) l_531 = (VECTOR(int16_t, 2))(0x437FL, 0x2C51L);
        int16_t *l_532 = &p_1102->g_76;
        union U0 l_580 = {0x97L};
        VECTOR(uint64_t, 4) l_581 = (VECTOR(uint64_t, 4))(0x03EC771CB79A5993L, (VECTOR(uint64_t, 2))(0x03EC771CB79A5993L, 0x91D9A1DD73BC7EB4L), 0x91D9A1DD73BC7EB4L);
        int i;
        for (i = 0; i < 1; i++)
            l_484[i] = 0x3419D489L;
        if ((*p_54))
        { /* block id: 180 */
            int16_t l_397 = 0x00F9L;
            int32_t l_399 = (-1L);
            int32_t l_402 = (-6L);
            VECTOR(int32_t, 2) l_404 = (VECTOR(int32_t, 2))(0x54CE8065L, 0x51CFE5AEL);
            int i;
            for (l_342 = 7; (l_342 != 50); l_342 = safe_add_func_int16_t_s_s(l_342, 6))
            { /* block id: 183 */
                int32_t **l_387 = (void*)0;
                int32_t *l_389 = &p_1102->g_7;
                int32_t **l_388 = &l_389;
                int32_t l_403 = 0x2D9FF47AL;
                int32_t l_405 = (-4L);
                VECTOR(uint16_t, 8) l_410 = (VECTOR(uint16_t, 8))(0xC89CL, (VECTOR(uint16_t, 4))(0xC89CL, (VECTOR(uint16_t, 2))(0xC89CL, 2UL), 2UL), 2UL, 0xC89CL, 2UL);
                union U1 **l_435 = &p_1102->g_102;
                int i;
                (*l_388) = &p_1102->g_7;
                for (p_1102->g_15 = 7; (p_1102->g_15 <= 35); p_1102->g_15++)
                { /* block id: 187 */
                    int32_t *l_392 = (void*)0;
                    int32_t *l_393 = &p_1102->g_97;
                    int32_t *l_394 = &p_1102->g_144;
                    int32_t *l_395 = (void*)0;
                    int32_t *l_396[1];
                    union U1 **l_429 = &p_1102->g_102;
                    union U1 ***l_428 = &l_429;
                    uint8_t *l_430 = &p_1102->g_247[6][3].f0;
                    uint32_t *l_431[9][4][6] = {{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}},{{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15},{&p_1102->g_15,(void*)0,&p_1102->g_15,(void*)0,&p_1102->g_432,&p_1102->g_15}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_396[i] = &p_1102->g_144;
                    l_406++;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1102->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((l_404.x &= ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 4))(l_409.zxwx)).odd, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_410.s64110515)).s0563423652167165, ((VECTOR(uint16_t, 2))(0xD10EL, 65535UL)).xxyxyyyyxxyxxyxx))).sd5))).xyxx, ((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(0x4B2A54CFL, 0x241A6FC3L, ((safe_add_func_uint64_t_u_u((l_397 , p_1102->g_244.s1), ((VECTOR(uint64_t, 8))(p_1102->g_415.s34513635)).s0)) ^ ((p_1102->g_70 <= ((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((*l_394), ((*l_430) |= (safe_add_func_int64_t_s_s(p_56, ((p_1102->g_3[2][6] , ((safe_div_func_uint16_t_u_u((((*l_428) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1102->g_426.s0707)), ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(0x0E73L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1102->g_427.xx)).yyxyxxxy)), (-1L), (-1L), 0x18A2L, 0L, (!((*l_352) |= ((p_1102->g_70 , (p_1102->g_143[0][4][1] ^ GROUP_DIVERGE(0, 1))) == p_55))), 0x327CL, 8L)), ((VECTOR(int16_t, 16))(0x3534L))))).s8, ((VECTOR(int16_t, 2))(0x608EL)), 9L)).even, ((VECTOR(uint16_t, 4))(0x9174L))))))).ywxwwwzxwzzzzxxz)).s0 , (void*)0)) != (void*)0), 0x2B15L)) , p_1102->g_15)) , p_1102->g_70)))))), FAKE_DIVERGE(p_1102->group_0_offset, get_group_id(0), 10))) || l_401) , 2UL), (*p_53))) ^ 0x541FD5A42B7E91CFL)) >= (*l_389))), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x20B91481L)), ((VECTOR(int32_t, 4))(0x7CA1BD2FL)), (-6L), (-9L), 0x0DC2E478L)).hi))).odd))), ((VECTOR(uint32_t, 4))(0xE274C8EFL)), ((VECTOR(uint32_t, 4))(4294967295UL))))))).yyyxzyxzwxxzwywx, ((VECTOR(uint32_t, 16))(0x258A482AL)), ((VECTOR(uint32_t, 16))(0x5C1C4D87L))))).s8), 10))][(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]));
                }
                for (p_1102->g_103.f0 = 0; (p_1102->g_103.f0 >= 35); p_1102->g_103.f0 = safe_add_func_int8_t_s_s(p_1102->g_103.f0, 8))
                { /* block id: 199 */
                    union U1 ***l_436 = &l_435;
                    p_1102->g_351.x = 0x5B47F715L;
                    (*l_388) = p_54;
                    (*l_436) = l_435;
                    if ((atomic_inc(&p_1102->l_atomic_input[25]) == 2))
                    { /* block id: 204 */
                        uint64_t l_437 = 18446744073709551606UL;
                        int8_t l_438 = 1L;
                        int32_t l_440 = 0x48DB43B4L;
                        int32_t *l_439 = &l_440;
                        int32_t *l_441 = (void*)0;
                        int32_t *l_442[8][3] = {{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440},{&l_440,(void*)0,&l_440}};
                        int32_t *l_443 = &l_440;
                        int32_t *l_444[4];
                        uint8_t l_445 = 1UL;
                        int16_t l_446 = 0L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_444[i] = &l_440;
                        l_438 = l_437;
                        l_444[1] = (l_443 = (l_442[7][2] = (l_441 = (l_439 = (void*)0))));
                        l_446 ^= l_445;
                        unsigned int result = 0;
                        result += l_437;
                        result += l_438;
                        result += l_440;
                        result += l_445;
                        result += l_446;
                        atomic_add(&p_1102->l_special_values[25], result);
                    }
                    else
                    { /* block id: 212 */
                        (1 + 1);
                    }
                }
                (*l_388) = (void*)0;
            }
            (*p_52) = (*p_52);
        }
        else
        { /* block id: 219 */
            int32_t l_458 = 0x6D848602L;
            uint32_t *l_460 = &p_1102->g_15;
            uint16_t *l_461 = &p_1102->g_143[0][3][2];
            uint16_t *l_462[1][10][7] = {{{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406},{(void*)0,(void*)0,(void*)0,&l_406,&l_406,(void*)0,&l_406}}};
            uint32_t l_463 = 0UL;
            VECTOR(int32_t, 4) l_465 = (VECTOR(int32_t, 4))(0x15B277E2L, (VECTOR(int32_t, 2))(0x15B277E2L, 0x0F28EA8EL), 0x0F28EA8EL);
            union U0 **l_471 = &p_1102->g_246;
            VECTOR(uint32_t, 2) l_537 = (VECTOR(uint32_t, 2))(4294967289UL, 4294967293UL);
            union U1 *l_554 = (void*)0;
            uint16_t ***l_576[8][10][3] = {{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}},{{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0},{(void*)0,&l_496,(void*)0}}};
            int i, j, k;
            l_465.z = (((((*l_352) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, (-8L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((safe_add_func_int16_t_s_s(((((*p_1102->g_102) , l_449) == (void*)0) ^ (safe_sub_func_int32_t_s_s(((-8L) <= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(l_452.s6e)), 1L)))).odd, ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(0x2AE2L, 7L, ((safe_div_func_uint16_t_u_u((+(l_463 = ((*l_461) |= ((((VECTOR(int64_t, 4))(p_1102->g_455.yxxx)).z ^ (safe_mod_func_int32_t_s_s(((254UL || ((p_1102->g_368.s3 > l_458) , ((VECTOR(uint8_t, 16))(p_1102->g_459.s3530700277642336)).s8)) && ((*l_460) ^= ((((!0x06085D86L) , 0x360F8FD4L) , 0x5C0A3C16L) || 0x3BC90B6EL))), l_458))) != p_55)))), GROUP_DIVERGE(1, 1))) , l_401), p_1102->g_244.s7, p_1102->g_415.s1, 0L, 0x2219L, 0x4517L)).s30, ((VECTOR(int16_t, 2))(0x6127L))))), 1L)).lo))).xxyy, ((VECTOR(int16_t, 4))(0x0EE9L)), ((VECTOR(int16_t, 4))((-1L)))))).zyyyyxzxxyzxwwyz)).sd), (-4L)))), 0x4806L)), (-3L), 4L, p_1102->g_103.f0, ((VECTOR(int16_t, 8))(0x056CL)), ((VECTOR(int16_t, 2))(0x0D26L)), (-2L), 0x4FD3L)).s4854)))).y, ((VECTOR(int16_t, 2))((-6L))), l_458, ((VECTOR(int16_t, 4))(0x232DL)), (-8L), 0L, ((VECTOR(int16_t, 4))(1L)))).sb) < 0xD87AL) , (void*)0) == l_464);
            for (l_401 = (-30); (l_401 <= 24); ++l_401)
            { /* block id: 227 */
                int16_t l_479 = (-9L);
                int32_t l_481 = (-2L);
                int32_t l_487[6][4][2] = {{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}},{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}},{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}},{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}},{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}},{{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL},{0x632E8B4CL,0x632E8B4CL}}};
                union U0 **l_501 = &p_1102->g_246;
                uint16_t l_573[7][3][5] = {{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}},{{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL},{1UL,65535UL,0x821FL,65535UL,65535UL}}};
                int i, j, k;
                if ((safe_add_func_uint64_t_u_u((l_470 == (p_1102->g_368.s2 , l_471)), l_465.w)))
                { /* block id: 228 */
                    int32_t *l_472 = &p_1102->g_97;
                    int32_t *l_473 = &l_400;
                    int32_t *l_474[9][10] = {{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144},{(void*)0,&p_1102->g_3[3][6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1102->g_7,&p_1102->g_7,&p_1102->g_144}};
                    uint16_t **l_495 = (void*)0;
                    uint16_t ***l_498 = &l_496;
                    int64_t *l_504 = (void*)0;
                    int64_t *l_505 = (void*)0;
                    int64_t *l_506 = (void*)0;
                    int64_t *l_507 = (void*)0;
                    int8_t *l_510 = &p_1102->g_363;
                    int i, j;
                    ++l_488;
                    p_52 = ((safe_rshift_func_uint16_t_u_s(((*l_461) = ((((l_481 = (((((safe_mul_func_int8_t_s_s((((l_495 == ((*l_498) = l_496)) , (l_487[2][2][1] = p_1102->g_368.s4)) , ((*l_510) &= ((((safe_lshift_func_int8_t_s_s(((p_1102->g_351.y &= (*p_52)) >= (l_501 == &p_1102->g_246)), ((p_56 != ((((p_1102->g_247[6][3] , (l_475 = (safe_div_func_int64_t_s_s(((-1L) ^ p_1102->g_455.y), 0x08867232F6F129E7L)))) , p_1102->g_508[7][0][0]) == (void*)0) <= p_55)) <= l_458))) <= 0xDAL) >= l_465.x) , p_55))), 0x44L)) ^ 0xC6D1B46C0BA1A186L) ^ l_465.y) >= 3L) == (*p_54))) && p_1102->g_359.y) <= GROUP_DIVERGE(1, 1)) , 0x3546L)), 11)) , (void*)0);
                    if (p_1102->g_comm_values[p_1102->tid])
                        break;
                }
                else
                { /* block id: 239 */
                    uint16_t ***l_539[8] = {&l_496,&l_496,&l_496,&l_496,&l_496,&l_496,&l_496,&l_496};
                    union U1 *l_552 = &p_1102->g_103;
                    union U1 **l_553[10][8][3] = {{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}},{{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464},{&p_1102->g_102,&l_464,&l_464}}};
                    VECTOR(int32_t, 2) l_557 = (VECTOR(int32_t, 2))(1L, 0x00A27F8AL);
                    int i, j, k;
                    for (l_482 = 0; (l_482 <= 2); l_482++)
                    { /* block id: 242 */
                        VECTOR(uint64_t, 2) l_515 = (VECTOR(uint64_t, 2))(0xD09E916667EC3449L, 0x1DB35AF4FE7F809DL);
                        uint64_t *l_516 = &l_488;
                        uint16_t ****l_540 = &l_539[0];
                        int8_t *l_549 = &p_1102->g_363;
                        int8_t *l_550[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t l_551 = 5L;
                        int i, j;
                        (*p_52) = ((VECTOR(int32_t, 4))((safe_mul_func_int8_t_s_s((l_409.z < ((&p_1102->g_15 != &p_1102->g_15) && p_1102->g_97)), (((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(l_515.yxyxyyxx)), (uint64_t)((*l_516) = p_1102->g_139.s5), (uint64_t)GROUP_DIVERGE(2, 1)))).s3 < (safe_mod_func_uint16_t_u_u((p_1102->g_247[6][3] , (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1102->group_1_offset, get_group_id(1), 10), l_515.y)) | (safe_sub_func_uint64_t_u_u((0x123DC32BA29CA75CL | 0x46040B58F5887BD6L), p_56))), p_56)) | 0x8DE6L) ^ 0x6C8212C11831C80CL)), 0xB7C6L))))), (-9L), 0x51D6582FL, 0x4E26B286L)).z;
                        p_1102->g_144 = (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((void*)0 != &p_1102->g_247[6][3]), 15)) ^ (safe_sub_func_int8_t_s_s((((VECTOR(int16_t, 16))(l_531.xyxxyxyxyxxxxxyx)).sb && p_56), 0x12L))) == (l_532 != (void*)0)), (safe_lshift_func_uint8_t_u_u((((((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 252UL)).yyxy)).yzyzxyww, (uint8_t)(safe_sub_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_537.xxxxxyxxyyyxyxxy)).even)).s0 == (l_482 , ((((VECTOR(uint64_t, 8))(p_1102->g_538.ywxzzxwz)).s0 , &l_496) != ((*l_540) = l_539[4])))), p_1102->g_139.s1)), (uint8_t)FAKE_DIVERGE(p_1102->group_2_offset, get_group_id(2), 10)))).s01, ((VECTOR(uint8_t, 2))(0x20L)), ((VECTOR(uint8_t, 2))(255UL))))).hi & p_1102->g_126.sd) , 1UL) ^ p_1102->g_368.s3), p_1102->g_455.y))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1102->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((&p_1102->g_508[7][0][0] == (((p_1102->g_247[0][2] , (l_551 = ((*l_549) = ((safe_lshift_func_uint16_t_u_s(p_56, (p_56 , ((((*l_516) = l_515.x) | (p_55 , (l_465.z = l_515.x))) <= ((((VECTOR(int16_t, 16))(5L, ((VECTOR(int16_t, 2))((-1L), 0x1B0AL)).even, 0x668CL, 0x4E5CL, (-9L), ((VECTOR(int16_t, 8))(l_545.wwyywzyy)), 0L, 0L, 0x595DL)).sf >= (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_548.s92a2)).w, (0x2DL || l_548.sc)))) ^ l_409.y))))) >= GROUP_DIVERGE(0, 1))))) && p_55) , &p_1102->g_508[7][0][0])), 0L)) , 4294967295UL), 10))][(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]));
                    }
                    l_554 = l_552;
                    l_465.x = (+(safe_mul_func_uint8_t_u_u(p_56, (((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_557.yxyxxyyx)).even, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(1L, 1L)), ((VECTOR(int32_t, 8))(l_558.xyxyxxxx)).s31))).xxyy))).x , (((safe_unary_minus_func_uint16_t_u(p_56)) || (p_1102->g_538.z = l_548.s4)) || (1UL == 0x84309B7DL))))));
                    for (l_482 = 25; (l_482 <= 17); --l_482)
                    { /* block id: 260 */
                        int32_t *l_563 = (void*)0;
                        int32_t *l_564 = (void*)0;
                        int32_t *l_565 = &l_398;
                        int32_t *l_566 = &l_400;
                        int32_t *l_567 = &l_487[2][0][1];
                        int32_t *l_568 = &l_486;
                        int32_t *l_569 = &l_477;
                        int32_t *l_570 = &p_1102->g_97;
                        int32_t *l_571 = &l_483;
                        int32_t *l_572[6] = {&p_1102->g_144,&p_1102->g_144,&p_1102->g_144,&p_1102->g_144,&p_1102->g_144,&p_1102->g_144};
                        int i;
                        ++l_573[0][2][0];
                    }
                }
                return p_52;
            }
            l_496 = (p_1102->g_577[0] = &l_497[0]);
        }
        p_1102->g_351.y &= (safe_unary_minus_func_uint64_t_u((+(l_580 , p_1102->g_562))));
        p_1102->g_126.se = ((l_477 >= ((VECTOR(uint64_t, 16))(l_581.zyyywzxxyywxzzwx)).s2) && (+FAKE_DIVERGE(p_1102->local_0_offset, get_local_id(0), 10)));
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1102->g_76 p_1102->l_comm_values p_1102->g_15 p_1102->g_97 p_1102->g_comm_values p_1102->g_102 p_1102->g_7 p_1102->g_70 p_1102->g_126 p_1102->g_139 p_1102->g_3 p_1102->g_144 p_1102->g_244
 * writes: p_1102->g_76 p_1102->g_comm_values p_1102->g_97 p_1102->g_102 p_1102->g_103 p_1102->g_144 p_1102->g_246
 */
int32_t * func_57(uint64_t  p_58, int64_t  p_59, struct S2 * p_1102)
{ /* block id: 13 */
    uint32_t l_74 = 3UL;
    int16_t *l_75 = &p_1102->g_76;
    union U0 l_83 = {0x43L};
    union U0 *l_84 = &l_83;
    int32_t l_87 = 0x25C46AF0L;
    int32_t l_88 = (-1L);
    int64_t *l_89 = (void*)0;
    int64_t *l_90 = (void*)0;
    int64_t *l_91 = (void*)0;
    int64_t *l_92 = (void*)0;
    int64_t *l_93 = (void*)0;
    int64_t *l_94[8];
    int32_t l_95[10] = {0x301AA1ECL,0x41228708L,0x222C05F7L,0x41228708L,0x301AA1ECL,0x301AA1ECL,0x41228708L,0x222C05F7L,0x41228708L,0x301AA1ECL};
    int32_t *l_96 = &p_1102->g_97;
    VECTOR(int8_t, 16) l_98 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x45L), 0x45L), 0x45L, 7L, 0x45L, (VECTOR(int8_t, 2))(7L, 0x45L), (VECTOR(int8_t, 2))(7L, 0x45L), 7L, 0x45L, 7L, 0x45L);
    int8_t *l_99 = (void*)0;
    int8_t *l_100 = (void*)0;
    union U1 l_115[2] = {{0x3BFF73A4L},{0x3BFF73A4L}};
    int64_t l_118 = 0x3EFA01E2AC5FADB9L;
    VECTOR(uint8_t, 2) l_123 = (VECTOR(uint8_t, 2))(0xF6L, 1UL);
    VECTOR(uint64_t, 4) l_140 = (VECTOR(uint64_t, 4))(0x0F138F814AE1D9C2L, (VECTOR(uint64_t, 2))(0x0F138F814AE1D9C2L, 9UL), 9UL);
    union U0 **l_245 = &l_84;
    union U0 *l_249 = &l_83;
    union U0 **l_248 = &l_249;
    VECTOR(int32_t, 2) l_253 = (VECTOR(int32_t, 2))(0x71BE66A9L, (-10L));
    int i;
    for (i = 0; i < 8; i++)
        l_94[i] = (void*)0;
    (*l_96) |= (((l_95[8] |= (p_59 = (((safe_lshift_func_uint8_t_u_u(l_74, 1)) != ((*l_75) = (4L > 4UL))) , ((safe_lshift_func_uint16_t_u_u(l_74, (((((p_1102->g_comm_values[p_1102->tid] = (((safe_sub_func_uint8_t_u_u(0x5DL, ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0UL, 248UL)).even, (&p_1102->g_76 == (((*l_84) = l_83) , l_75)))) != (l_88 |= (safe_rshift_func_int16_t_s_u((l_87 = p_58), 7)))))) > p_1102->g_76) == l_74)) , 4L) , 0UL) <= l_74) , p_1102->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1102->tid, 17))]))) ^ 0x2AL)))) == p_1102->g_15) ^ p_58);
    if ((p_58 | ((*l_96) = ((VECTOR(int8_t, 4))(l_98.s516b)).y)))
    { /* block id: 23 */
        int32_t **l_101 = &l_96;
        union U1 **l_104 = &p_1102->g_102;
        int32_t *l_119[5][5][2] = {{{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7}},{{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7}},{{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7}},{{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7}},{{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7},{(void*)0,&p_1102->g_7}}};
        int i, j, k;
        (*l_101) = (void*)0;
        (*l_104) = (p_1102->g_comm_values[p_1102->tid] , p_1102->g_102);
        p_1102->g_97 |= ((l_95[2] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(6L, ((VECTOR(int32_t, 4))((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_int16_t_s_u(p_1102->g_15, p_1102->g_comm_values[p_1102->tid])))), (+(safe_add_func_uint64_t_u_u((p_1102->g_15 < ((safe_div_func_uint16_t_u_u((+((safe_rshift_func_uint16_t_u_s(((((*p_1102->g_102) = l_115[0]) , (safe_mod_func_int16_t_s_s(((p_58 ^ (((void*)0 != &p_1102->g_102) > (&p_1102->g_102 == &p_1102->g_102))) ^ l_118), p_58))) <= 246UL), p_59)) >= p_1102->g_15)), 65535UL)) != p_1102->g_7)), 0x3922E0D36818C3B0L))), 0L, 0x4888E099L)), 0x05A9B4FBL, 0x04AA5B52L, 0x303FFABFL)).lo)))).x) > p_1102->g_70);
        for (l_83.f0 = 0; (l_83.f0 <= 17); l_83.f0 = safe_add_func_uint64_t_u_u(l_83.f0, 2))
        { /* block id: 31 */
            return &p_1102->g_97;
        }
    }
    else
    { /* block id: 34 */
        VECTOR(int32_t, 16) l_122 = (VECTOR(int32_t, 16))(0x267DBE3FL, (VECTOR(int32_t, 4))(0x267DBE3FL, (VECTOR(int32_t, 2))(0x267DBE3FL, 1L), 1L), 1L, 0x267DBE3FL, 1L, (VECTOR(int32_t, 2))(0x267DBE3FL, 1L), (VECTOR(int32_t, 2))(0x267DBE3FL, 1L), 0x267DBE3FL, 1L, 0x267DBE3FL, 1L);
        uint16_t *l_141 = (void*)0;
        uint16_t *l_142[6];
        int i;
        for (i = 0; i < 6; i++)
            l_142[i] = &p_1102->g_143[2][1][3];
        p_1102->g_144 &= ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 4))(0x3CF63262L, ((*l_96) >= ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xF6L, 0xA6L)))).lo), 0x37032A69L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_122.sf3594746)).even)), 0L, (((*l_96) = (((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(l_123.yy)).yyxyxxxyxxxxyxyy, (uint8_t)p_58, (uint8_t)(((*l_96) || ((safe_sub_func_uint8_t_u_u(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1102->g_126.sf011)))).z <= (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), GROUP_DIVERGE(0, 1)))) , ((*l_96) <= (safe_div_func_uint16_t_u_u((&l_115[1] == (void*)0), (safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(0xFFB87322D81C2D92L, 0xBAEEB66546BCCE89L)), (safe_div_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(p_1102->g_139.s37)), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_140.yy)).yxxx)).hi)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(0x79D8590BC55D5BA1L, ((VECTOR(uint64_t, 2))(1UL)), 0x55685DB3B990F710L)).lo, (uint64_t)0xD011C8EEA47A0FBCL, (uint64_t)p_58))), 0xD73480D3783E0E50L, FAKE_DIVERGE(p_1102->local_1_offset, get_local_id(1), 10), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 8UL, 0x39697EC7B67EAC4BL)).s7666566671045534)).lo)).s3461473474340233))).s53b9)), 0x6ECDBE2488046BDBL, 0x57CA1C3D12EEB9F0L)))).even)).lo, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), ((VECTOR(uint64_t, 2))(0x049F96D3B482F0B7L))))), ((VECTOR(uint64_t, 2))(0UL))))))).hi < p_59) || p_59), p_1102->g_7)) < p_1102->g_7) < p_1102->g_76) ^ (-9L)), p_1102->g_3[2][4])))))))), (*l_96))) || 7L)) || 1UL)))).sd1ff, ((VECTOR(uint8_t, 4))(0xDAL))))).yxxxzzyy, ((VECTOR(uint8_t, 8))(0UL))))).s3 >= (-5L))) & p_58), 0x3F82D50EL, ((VECTOR(int32_t, 2))(0x20534DAAL)), 0x0BF5E601L, (-8L))).s34, (int32_t)1L))).yyyyyxxx, ((VECTOR(int32_t, 8))(0x1376D488L))))).s4;
        if ((atomic_inc(&p_1102->g_atomic_input[82 * get_linear_group_id() + 27]) == 1))
        { /* block id: 38 */
            int32_t l_145[5][3][4] = {{{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L}},{{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L}},{{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L}},{{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L}},{{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L},{(-7L),0x1257A5ACL,0x6EC59925L,0x3FAAA289L}}};
            int8_t l_197 = 1L;
            uint16_t l_243 = 65526UL;
            int i, j, k;
            for (l_145[3][0][3] = 0; (l_145[3][0][3] == (-29)); l_145[3][0][3]--)
            { /* block id: 41 */
                int32_t l_148 = 0x1C4E8F14L;
                uint8_t l_149 = 252UL;
                if ((l_149 = l_148))
                { /* block id: 43 */
                    VECTOR(int32_t, 4) l_150 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x251C85CDL), 0x251C85CDL);
                    VECTOR(int32_t, 16) l_151 = (VECTOR(int32_t, 16))(0x3826330AL, (VECTOR(int32_t, 4))(0x3826330AL, (VECTOR(int32_t, 2))(0x3826330AL, 5L), 5L), 5L, 0x3826330AL, 5L, (VECTOR(int32_t, 2))(0x3826330AL, 5L), (VECTOR(int32_t, 2))(0x3826330AL, 5L), 0x3826330AL, 5L, 0x3826330AL, 5L);
                    VECTOR(int32_t, 8) l_152 = (VECTOR(int32_t, 8))(0x3EB4B7A3L, (VECTOR(int32_t, 4))(0x3EB4B7A3L, (VECTOR(int32_t, 2))(0x3EB4B7A3L, 0L), 0L), 0L, 0x3EB4B7A3L, 0L);
                    VECTOR(int32_t, 4) l_153 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L));
                    uint32_t l_154 = 1UL;
                    union U1 l_155 = {0x1C75A49CL};
                    VECTOR(int64_t, 8) l_156 = (VECTOR(int64_t, 8))(0x581DAF6D627CF3F8L, (VECTOR(int64_t, 4))(0x581DAF6D627CF3F8L, (VECTOR(int64_t, 2))(0x581DAF6D627CF3F8L, 0x69EF1CF844ED8ECEL), 0x69EF1CF844ED8ECEL), 0x69EF1CF844ED8ECEL, 0x581DAF6D627CF3F8L, 0x69EF1CF844ED8ECEL);
                    VECTOR(uint8_t, 2) l_157 = (VECTOR(uint8_t, 2))(5UL, 0x7AL);
                    union U1 l_158[7] = {{1UL},{0xD1E7D8B5L},{1UL},{1UL},{0xD1E7D8B5L},{1UL},{1UL}};
                    uint8_t l_159 = 251UL;
                    int16_t l_160 = 0x576AL;
                    int32_t l_161[1][7] = {{0x11453208L,0x11453208L,0x11453208L,0x11453208L,0x11453208L,0x11453208L,0x11453208L}};
                    int64_t l_162 = 0x57CB5B6F9CE4C8BBL;
                    uint64_t l_163 = 18446744073709551614UL;
                    uint32_t l_164 = 4294967291UL;
                    VECTOR(int32_t, 4) l_165 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x286E48C6L), 0x286E48C6L);
                    VECTOR(int32_t, 16) l_166 = (VECTOR(int32_t, 16))(0x6317D50AL, (VECTOR(int32_t, 4))(0x6317D50AL, (VECTOR(int32_t, 2))(0x6317D50AL, 9L), 9L), 9L, 0x6317D50AL, 9L, (VECTOR(int32_t, 2))(0x6317D50AL, 9L), (VECTOR(int32_t, 2))(0x6317D50AL, 9L), 0x6317D50AL, 9L, 0x6317D50AL, 9L);
                    uint8_t l_167 = 0x6AL;
                    int16_t l_168 = (-9L);
                    uint8_t l_169 = 255UL;
                    int8_t l_170 = (-7L);
                    uint32_t l_171 = 0x29E3F56EL;
                    uint8_t l_172 = 0x86L;
                    uint16_t l_173 = 0x847DL;
                    uint32_t l_174 = 4294967287UL;
                    int32_t *l_175 = (void*)0;
                    uint16_t l_176 = 65526UL;
                    int i, j;
                    l_174 |= (l_148 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_150.yyzx)).wwxzzzzx, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_151.sc0)).yxyxxxyyxxxyxxyy, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x638069DBL, 5L)).xxxxyxxxyyxxxxxx)).s1acb)).yzzyxyyz, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x1AFEE84AL, 0x7CE4FDF0L)).xyyyyyxyyxxxyyyx)).even, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_152.s6712)).yzxzzyxyxyxzwzyw)).s0acf, ((VECTOR(int32_t, 4))(l_153.xywz))))), ((VECTOR(int32_t, 8))(2L, (-6L), (l_154 , (l_172 = (l_171 = ((l_155 = l_155) , ((l_156.s6 , ((((((VECTOR(uint8_t, 2))(l_157.yy)).hi , l_158[5]) , FAKE_DIVERGE(p_1102->global_2_offset, get_global_id(2), 10)) , (l_161[0][3] = (l_160 = l_159))) , (GROUP_DIVERGE(1, 1) , ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_162, (-10L), ((l_164 = l_163) , 0x4F4673FFL), 0x23877515L, ((VECTOR(int32_t, 2))(0x7C6CF834L, (-9L))), 0L, 0L)).odd)).yxxxyywwzxxzyzwx, ((VECTOR(int32_t, 8))(l_165.zwzzzwyz)).s6505120172664170))).s0d)).yyxy, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_166.s2520f901617e3ced)))), ((VECTOR(int32_t, 16))(0x15B945AAL, 0L, ((VECTOR(int32_t, 8))(l_167, l_168, ((VECTOR(int32_t, 4))(0L)), 0x6ADB586EL, 0x7CF3D8B4L)), l_169, ((VECTOR(int32_t, 4))(0x6879FE9BL)), 0x7FBB3F43L))))).s01ed))).xxyyyyyzzxwywyxy, ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))(0x0D822432L))))).s4))) , l_170))))), ((VECTOR(int32_t, 4))(0x675D47F8L)), 1L)).hi))).zxzzzxzw)))))).s3231672103076233))).even))).odd)).hi, ((VECTOR(int32_t, 2))((-8L)))))).xyxy)).zyzwxxwy)).s3031217475435735)).s5c8f))).yzywzwzw)).s0 , l_173));
                    l_175 = (void*)0;
                    l_176--;
                }
                else
                { /* block id: 54 */
                    uint16_t l_179[4][9] = {{65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL},{65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL},{65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL},{65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL,0x2E3CL,0x2E3CL,65535UL,65535UL}};
                    int64_t l_180[2];
                    uint8_t l_181 = 0x06L;
                    int16_t l_182 = 0L;
                    uint32_t l_183 = 4294967295UL;
                    int32_t l_184 = (-2L);
                    VECTOR(int32_t, 2) l_185 = (VECTOR(int32_t, 2))(0x186A3D86L, 7L);
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_180[i] = (-1L);
                    l_180[1] = l_179[0][7];
                    l_148 = (l_181 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x68FEB3E2L, 0x192A0FD9L)))))).xyxxyxxx)).s4);
                    l_184 = (l_183 = (l_148 ^= (l_182 = 3L)));
                    if (((VECTOR(int32_t, 2))(l_185.xx)).odd)
                    { /* block id: 61 */
                        VECTOR(uint32_t, 16) l_186 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0UL), 0UL), 0UL, 4294967286UL, 0UL, (VECTOR(uint32_t, 2))(4294967286UL, 0UL), (VECTOR(uint32_t, 2))(4294967286UL, 0UL), 4294967286UL, 0UL, 4294967286UL, 0UL);
                        union U0 l_187 = {2UL};
                        union U0 l_188 = {0UL};
                        uint32_t l_189 = 1UL;
                        int32_t l_190 = 0x7F1068F0L;
                        VECTOR(int32_t, 4) l_191 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                        int i;
                        l_148 |= (((l_188 = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_186.s66)).xyyyxxxx)).s5 , l_187)) , ((l_189 , (l_190 , 0x1FF22B61L)) , 4294967295UL)) , (l_185.x = 0x0758B476L));
                        l_148 = ((VECTOR(int32_t, 16))(l_191.xzzwxwyywwwywzyw)).sf;
                    }
                    else
                    { /* block id: 66 */
                        int32_t *l_192 = (void*)0;
                        int32_t *l_193 = (void*)0;
                        int32_t l_195[4][9] = {{0x1DE071CAL,0x1FB543D2L,0x1FB543D2L,0x1DE071CAL,0L,0L,0L,0L,0x1DE071CAL},{0x1DE071CAL,0x1FB543D2L,0x1FB543D2L,0x1DE071CAL,0L,0L,0L,0L,0x1DE071CAL},{0x1DE071CAL,0x1FB543D2L,0x1FB543D2L,0x1DE071CAL,0L,0L,0L,0L,0x1DE071CAL},{0x1DE071CAL,0x1FB543D2L,0x1FB543D2L,0x1DE071CAL,0L,0L,0L,0L,0x1DE071CAL}};
                        int32_t *l_194 = &l_195[1][8];
                        int32_t *l_196 = &l_195[0][8];
                        int i, j;
                        l_192 = (void*)0;
                        l_194 = l_193;
                        l_196 = (void*)0;
                    }
                }
            }
            if (l_197)
            { /* block id: 73 */
                uint32_t l_198 = 0xD868492EL;
                if (l_198)
                { /* block id: 74 */
                    int32_t l_199 = 0x4094F27FL;
                    uint16_t l_200 = 0xFC93L;
                    VECTOR(int32_t, 8) l_203 = (VECTOR(int32_t, 8))(0x5DE9F337L, (VECTOR(int32_t, 4))(0x5DE9F337L, (VECTOR(int32_t, 2))(0x5DE9F337L, 0x697F253EL), 0x697F253EL), 0x697F253EL, 0x5DE9F337L, 0x697F253EL);
                    int i;
                    l_200--;
                    if ((l_145[3][0][3] = ((VECTOR(int32_t, 8))(l_203.s67111413)).s4))
                    { /* block id: 77 */
                        int16_t l_204 = 0L;
                        VECTOR(int64_t, 4) l_205 = (VECTOR(int64_t, 4))(0x417C9C8E14738CBDL, (VECTOR(int64_t, 2))(0x417C9C8E14738CBDL, 0x7041C5E05B46385DL), 0x7041C5E05B46385DL);
                        int32_t l_207 = 0x3765FA4DL;
                        int32_t *l_206 = &l_207;
                        int i;
                        l_206 = (l_204 , (((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(0x6E3D103FD7DE96F4L, 1L, (-9L), 1L)), ((VECTOR(int64_t, 2))(l_205.yz)).xyyx))).w , (void*)0));
                    }
                    else
                    { /* block id: 79 */
                        int32_t *l_208 = (void*)0;
                        int32_t l_210 = 0x3BCF27EAL;
                        int32_t *l_209 = &l_210;
                        int8_t l_211 = 0x3FL;
                        l_209 = l_208;
                        l_203.s0 = l_211;
                    }
                }
                else
                { /* block id: 83 */
                    int32_t l_213 = (-1L);
                    int32_t *l_212[8] = {&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213};
                    int32_t *l_214 = &l_213;
                    int32_t *l_215 = &l_213;
                    VECTOR(int32_t, 16) l_216 = (VECTOR(int32_t, 16))(0x6E62EBD1L, (VECTOR(int32_t, 4))(0x6E62EBD1L, (VECTOR(int32_t, 2))(0x6E62EBD1L, 1L), 1L), 1L, 0x6E62EBD1L, 1L, (VECTOR(int32_t, 2))(0x6E62EBD1L, 1L), (VECTOR(int32_t, 2))(0x6E62EBD1L, 1L), 0x6E62EBD1L, 1L, 0x6E62EBD1L, 1L);
                    int i;
                    l_212[3] = (void*)0;
                    l_215 = l_214;
                    if (((VECTOR(int32_t, 4))(l_216.s0640)).z)
                    { /* block id: 86 */
                        int64_t l_217 = 0x63A3BE4AEF56FE32L;
                        uint32_t l_218 = 7UL;
                        uint64_t l_219[2];
                        int32_t l_220 = (-5L);
                        int8_t l_221 = 0x75L;
                        VECTOR(int32_t, 4) l_222 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x46BC6A43L), 0x46BC6A43L);
                        int64_t l_223[9] = {(-9L),0x26EF9ED5F9CC0651L,(-9L),(-9L),0x26EF9ED5F9CC0651L,(-9L),(-9L),0x26EF9ED5F9CC0651L,(-9L)};
                        uint16_t l_224 = 0xDA78L;
                        int32_t l_225 = 0x178618A0L;
                        uint64_t l_226 = 18446744073709551610UL;
                        uint8_t l_227 = 0xFBL;
                        int64_t l_228 = 0x737D8D9BF796855FL;
                        int32_t l_229[6][5][8] = {{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}},{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}},{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}},{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}},{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}},{{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)},{0L,0x754D8CB4L,0x379FDA06L,0x5C55EF8AL,0x379FDA06L,0x754D8CB4L,0L,(-1L)}}};
                        int8_t l_230 = 1L;
                        int32_t l_231 = (-2L);
                        int64_t l_232[10][1];
                        uint16_t *l_234 = &l_224;
                        uint16_t **l_233[1][5][10] = {{{(void*)0,&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234}}};
                        int16_t l_235 = (-4L);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_219[i] = 0x9DFCBD086D457817L;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_232[i][j] = 0x029F15E469161175L;
                        }
                        l_233[0][1][9] = (l_217 , ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_218, 0x622F3474L, 9L, 1L, 0x694D726BL, (l_219[1] , l_220), (-1L), (l_229[4][3][5] = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-10L), 0L)), 0x55EE9946L, l_221, (-9L), ((VECTOR(int32_t, 2))((-10L), 0x41B22920L)), 0x282EA697L)).s7741752007472103, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_222.zwzxxyyzzwxyzxzx)), ((VECTOR(int32_t, 16))(1L, ((*l_214) &= (l_223[3] , l_224)), (l_225 &= (-7L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(l_226, 0x1D6A4EE5L, 0x07A9E167L, ((VECTOR(int32_t, 2))(0x18745E32L)), 0x647BB7FCL, 0x76EA8D96L, (-1L))).s1013464512656517, ((VECTOR(int32_t, 16))(0x21755247L))))).s99d5, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 4))(5L))))).hi)), ((VECTOR(int32_t, 4))(0x7FF5A794L)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x6B3C655BL)), 0x04D39E5BL))))).sc2, (int32_t)l_227))).yxyyyyxyxxxxxxxy)).lo, ((VECTOR(int32_t, 8))(0x41C2686BL))))).s1761150356123724)).se6)).xxxy)).zzzyyzzzxzwwxxxx, ((VECTOR(int32_t, 16))(0x3E5A5224L)))))))).s7c))).yyyxyxxxxxyxxxyy)).s1 , l_228)), (-1L), l_230, 1L, l_231, ((VECTOR(int32_t, 4))(1L)))).odd)).s37, ((VECTOR(int32_t, 2))(3L))))).yxxxxxyy)).s3 , l_232[1][0]) , (void*)0));
                        (*l_215) = l_235;
                        l_222.x ^= ((*l_214) = (-1L));
                    }
                    else
                    { /* block id: 94 */
                        uint16_t l_236 = 3UL;
                        (*l_214) &= (-1L);
                        --l_236;
                    }
                }
            }
            else
            { /* block id: 99 */
                uint32_t l_239 = 4294967295UL;
                int32_t l_240[9][10][2] = {{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}},{{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L},{(-10L),0x21A61383L}}};
                int32_t *l_241[9] = {(void*)0,&l_240[5][3][0],(void*)0,(void*)0,&l_240[5][3][0],(void*)0,(void*)0,&l_240[5][3][0],(void*)0};
                int32_t *l_242 = &l_240[7][9][0];
                int i, j, k;
                l_145[0][0][1] = (l_240[5][3][0] = l_239);
                l_242 = l_241[0];
            }
            l_145[3][0][3] |= l_243;
            unsigned int result = 0;
            int l_145_i0, l_145_i1, l_145_i2;
            for (l_145_i0 = 0; l_145_i0 < 5; l_145_i0++) {
                for (l_145_i1 = 0; l_145_i1 < 3; l_145_i1++) {
                    for (l_145_i2 = 0; l_145_i2 < 4; l_145_i2++) {
                        result += l_145[l_145_i0][l_145_i1][l_145_i2];
                    }
                }
            }
            result += l_197;
            result += l_243;
            atomic_add(&p_1102->g_special_values[82 * get_linear_group_id() + 27], result);
        }
        else
        { /* block id: 105 */
            (1 + 1);
        }
        (*l_96) = p_59;
        (*l_96) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1102->g_244.s3cda)).xzxwxyzwyyzyxzwy)).s1c)).yxyxxyxx)).s3145650411131433)).hi))))).s0;
    }
    (*l_248) = (p_1102->g_246 = ((*l_245) = &l_83));
    for (l_88 = (-25); (l_88 == 16); l_88 = safe_add_func_int8_t_s_s(l_88, 3))
    { /* block id: 116 */
        int32_t *l_252 = &l_87;
        uint16_t *l_255 = &p_1102->g_143[0][9][3];
        uint16_t **l_254 = &l_255;
        union U0 l_256[3] = {{5UL},{5UL},{5UL}};
        uint64_t *l_257[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_258 = &l_95[7];
        int32_t **l_259 = &l_96;
        int i;
        (*l_252) = (!6L);
        (*l_252) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_253.xxyyxyyx)).s2313710520661334)).s4;
        (*l_258) = (((*l_252) = (((*l_254) = &p_1102->g_143[2][1][3]) != (l_256[1] , &p_1102->g_143[2][1][3]))) != 0x7DD72BB7433FA989L);
        (*l_259) = &p_1102->g_144;
    }
    return &p_1102->g_97;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S2 c_1103;
    struct S2* p_1102 = &c_1103;
    struct S2 c_1104 = {
        6L, // p_1102->g_2
        {{0x621AFA9BL,0x621AFA9BL,0x27EF5D87L,0x0CD50997L,0x07642760L,0x0CD50997L,0x27EF5D87L},{0x621AFA9BL,0x621AFA9BL,0x27EF5D87L,0x0CD50997L,0x07642760L,0x0CD50997L,0x27EF5D87L},{0x621AFA9BL,0x621AFA9BL,0x27EF5D87L,0x0CD50997L,0x07642760L,0x0CD50997L,0x27EF5D87L},{0x621AFA9BL,0x621AFA9BL,0x27EF5D87L,0x0CD50997L,0x07642760L,0x0CD50997L,0x27EF5D87L}}, // p_1102->g_3
        (-1L), // p_1102->g_7
        0x62D50C85L, // p_1102->g_15
        0x5D205C6C2786FE95L, // p_1102->g_70
        (-1L), // p_1102->g_76
        0x3F6D4BD0L, // p_1102->g_97
        {0x5684B0DFL}, // p_1102->g_103
        &p_1102->g_103, // p_1102->g_102
        (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x4488BB19L), 0x4488BB19L), 0x4488BB19L, (-7L), 0x4488BB19L, (VECTOR(int32_t, 2))((-7L), 0x4488BB19L), (VECTOR(int32_t, 2))((-7L), 0x4488BB19L), (-7L), 0x4488BB19L, (-7L), 0x4488BB19L), // p_1102->g_126
        (VECTOR(uint64_t, 8))(0x9A36358C7ECC317CL, (VECTOR(uint64_t, 4))(0x9A36358C7ECC317CL, (VECTOR(uint64_t, 2))(0x9A36358C7ECC317CL, 0x24AF2DFD280BCC4BL), 0x24AF2DFD280BCC4BL), 0x24AF2DFD280BCC4BL, 0x9A36358C7ECC317CL, 0x24AF2DFD280BCC4BL), // p_1102->g_139
        {{{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L}},{{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L}},{{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L},{0x38CDL,0xFE29L,0xDD55L,0xB662L,0xDD55L}}}, // p_1102->g_143
        0L, // p_1102->g_144
        (VECTOR(int32_t, 16))(0x1D70EA7FL, (VECTOR(int32_t, 4))(0x1D70EA7FL, (VECTOR(int32_t, 2))(0x1D70EA7FL, (-6L)), (-6L)), (-6L), 0x1D70EA7FL, (-6L), (VECTOR(int32_t, 2))(0x1D70EA7FL, (-6L)), (VECTOR(int32_t, 2))(0x1D70EA7FL, (-6L)), 0x1D70EA7FL, (-6L), 0x1D70EA7FL, (-6L)), // p_1102->g_244
        {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}}, // p_1102->g_247
        &p_1102->g_247[6][3], // p_1102->g_246
        (VECTOR(int32_t, 2))(0L, (-1L)), // p_1102->g_351
        (VECTOR(uint16_t, 2))(0x98C6L, 0x51FAL), // p_1102->g_359
        (-1L), // p_1102->g_363
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4EL), 0x4EL), 0x4EL, 1L, 0x4EL), // p_1102->g_368
        (VECTOR(uint64_t, 8))(0x3BADAA52480694E0L, (VECTOR(uint64_t, 4))(0x3BADAA52480694E0L, (VECTOR(uint64_t, 2))(0x3BADAA52480694E0L, 0x80111D71673F1BD5L), 0x80111D71673F1BD5L), 0x80111D71673F1BD5L, 0x3BADAA52480694E0L, 0x80111D71673F1BD5L), // p_1102->g_415
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1697L), 0x1697L), 0x1697L, 1L, 0x1697L), // p_1102->g_426
        (VECTOR(int16_t, 2))(1L, 0x1A36L), // p_1102->g_427
        0xFABF194AL, // p_1102->g_432
        (VECTOR(int64_t, 4))(0x6272AB70C26BFF9FL, (VECTOR(int64_t, 2))(0x6272AB70C26BFF9FL, 2L), 2L), // p_1102->g_455
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x8FL), 0x8FL), 0x8FL, 1UL, 0x8FL), // p_1102->g_459
        {{{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0}},{{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0}},{{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0},{&p_1102->g_143[1][6][2],&p_1102->g_143[1][6][2],&p_1102->g_143[2][0][0],&p_1102->g_143[2][1][3],&p_1102->g_143[1][1][4],(void*)0,&p_1102->g_143[2][1][3],(void*)0}}}, // p_1102->g_509
        {{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}},{{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]},{&p_1102->g_509[1][4][2]}}}, // p_1102->g_508
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x504BD36AD07AA265L), 0x504BD36AD07AA265L), // p_1102->g_538
        0x247FL, // p_1102->g_562
        (void*)0, // p_1102->g_578
        {&p_1102->g_578}, // p_1102->g_577
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7629L), 0x7629L), 0x7629L, 1L, 0x7629L), // p_1102->g_620
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int16_t, 2))((-1L), 2L), (VECTOR(int16_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L), // p_1102->g_622
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x16L), 0x16L), 0x16L, (-1L), 0x16L, (VECTOR(int8_t, 2))((-1L), 0x16L), (VECTOR(int8_t, 2))((-1L), 0x16L), (-1L), 0x16L, (-1L), 0x16L), // p_1102->g_631
        (void*)0, // p_1102->g_639
        (-9L), // p_1102->g_707
        {0x56L}, // p_1102->g_708
        &p_1102->g_102, // p_1102->g_721
        (VECTOR(int8_t, 8))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x2EL), 0x2EL), 0x2EL, 0x56L, 0x2EL), // p_1102->g_726
        {{0L,6L,0L,0x73L,6L,0x73L},{0L,6L,0L,0x73L,6L,0x73L},{0L,6L,0L,0x73L,6L,0x73L},{0L,6L,0L,0x73L,6L,0x73L},{0L,6L,0L,0x73L,6L,0x73L}}, // p_1102->g_762
        (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x5B3DL), 0x5B3DL), 0x5B3DL, 5L, 0x5B3DL, (VECTOR(int16_t, 2))(5L, 0x5B3DL), (VECTOR(int16_t, 2))(5L, 0x5B3DL), 5L, 0x5B3DL, 5L, 0x5B3DL), // p_1102->g_774
        (VECTOR(int32_t, 16))(0x5B822C33L, (VECTOR(int32_t, 4))(0x5B822C33L, (VECTOR(int32_t, 2))(0x5B822C33L, (-6L)), (-6L)), (-6L), 0x5B822C33L, (-6L), (VECTOR(int32_t, 2))(0x5B822C33L, (-6L)), (VECTOR(int32_t, 2))(0x5B822C33L, (-6L)), 0x5B822C33L, (-6L), 0x5B822C33L, (-6L)), // p_1102->g_785
        (VECTOR(int32_t, 2))(0x12B54034L, 1L), // p_1102->g_787
        (void*)0, // p_1102->g_793
        &p_1102->g_793, // p_1102->g_792
        &p_1102->g_793, // p_1102->g_796
        &p_1102->g_793, // p_1102->g_830
        (void*)0, // p_1102->g_841
        &p_1102->g_841, // p_1102->g_840
        {{{&p_1102->g_793},{&p_1102->g_793},{&p_1102->g_793}},{{&p_1102->g_793},{&p_1102->g_793},{&p_1102->g_793}},{{&p_1102->g_793},{&p_1102->g_793},{&p_1102->g_793}},{{&p_1102->g_793},{&p_1102->g_793},{&p_1102->g_793}}}, // p_1102->g_844
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), // p_1102->g_873
        {&p_1102->g_363,&p_1102->g_363}, // p_1102->g_878
        &p_1102->g_793, // p_1102->g_903
        (VECTOR(uint16_t, 2))(0x78E3L, 1UL), // p_1102->g_904
        (VECTOR(int64_t, 8))(0x00EE805BF9FB3D90L, (VECTOR(int64_t, 4))(0x00EE805BF9FB3D90L, (VECTOR(int64_t, 2))(0x00EE805BF9FB3D90L, 1L), 1L), 1L, 0x00EE805BF9FB3D90L, 1L), // p_1102->g_905
        (void*)0, // p_1102->g_912
        (void*)0, // p_1102->g_913
        (VECTOR(int16_t, 2))((-1L), 1L), // p_1102->g_922
        1UL, // p_1102->g_929
        (VECTOR(int16_t, 16))(0x3A66L, (VECTOR(int16_t, 4))(0x3A66L, (VECTOR(int16_t, 2))(0x3A66L, (-1L)), (-1L)), (-1L), 0x3A66L, (-1L), (VECTOR(int16_t, 2))(0x3A66L, (-1L)), (VECTOR(int16_t, 2))(0x3A66L, (-1L)), 0x3A66L, (-1L), 0x3A66L, (-1L)), // p_1102->g_969
        {&p_1102->g_721,&p_1102->g_721,&p_1102->g_721,&p_1102->g_721,&p_1102->g_721}, // p_1102->g_973
        {&p_1102->g_973[1],&p_1102->g_973[2],&p_1102->g_973[1],&p_1102->g_973[1],&p_1102->g_973[2],&p_1102->g_973[1],&p_1102->g_973[1]}, // p_1102->g_972
        (VECTOR(int16_t, 8))(0x3B0FL, (VECTOR(int16_t, 4))(0x3B0FL, (VECTOR(int16_t, 2))(0x3B0FL, 1L), 1L), 1L, 0x3B0FL, 1L), // p_1102->g_976
        (VECTOR(int64_t, 2))((-5L), 0x610A2E96CAE389E5L), // p_1102->g_989
        (VECTOR(int64_t, 4))(0x7BC162BD56F22646L, (VECTOR(int64_t, 2))(0x7BC162BD56F22646L, 0x3B0E64CE4CC8A506L), 0x3B0E64CE4CC8A506L), // p_1102->g_992
        &p_1102->g_97, // p_1102->g_993
        (VECTOR(uint16_t, 2))(0x817EL, 0UL), // p_1102->g_999
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x09DF4E48DE5C213DL), 0x09DF4E48DE5C213DL), 0x09DF4E48DE5C213DL, 18446744073709551615UL, 0x09DF4E48DE5C213DL), // p_1102->g_1034
        (VECTOR(int16_t, 2))((-8L), 0x09FDL), // p_1102->g_1051
        (VECTOR(int16_t, 2))(0x34C1L, 0x26C8L), // p_1102->g_1052
        (VECTOR(int8_t, 2))((-1L), 0x20L), // p_1102->g_1060
        (VECTOR(int8_t, 8))(0x09L, (VECTOR(int8_t, 4))(0x09L, (VECTOR(int8_t, 2))(0x09L, 0x48L), 0x48L), 0x48L, 0x09L, 0x48L), // p_1102->g_1061
        4L, // p_1102->g_1075
        0, // p_1102->v_collective
        sequence_input[get_global_id(0)], // p_1102->global_0_offset
        sequence_input[get_global_id(1)], // p_1102->global_1_offset
        sequence_input[get_global_id(2)], // p_1102->global_2_offset
        sequence_input[get_local_id(0)], // p_1102->local_0_offset
        sequence_input[get_local_id(1)], // p_1102->local_1_offset
        sequence_input[get_local_id(2)], // p_1102->local_2_offset
        sequence_input[get_group_id(0)], // p_1102->group_0_offset
        sequence_input[get_group_id(1)], // p_1102->group_1_offset
        sequence_input[get_group_id(2)], // p_1102->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_1102->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1103 = c_1104;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1102);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1102->g_2, "p_1102->g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1102->g_3[i][j], "p_1102->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1102->g_7, "p_1102->g_7", print_hash_value);
    transparent_crc(p_1102->g_15, "p_1102->g_15", print_hash_value);
    transparent_crc(p_1102->g_70, "p_1102->g_70", print_hash_value);
    transparent_crc(p_1102->g_76, "p_1102->g_76", print_hash_value);
    transparent_crc(p_1102->g_97, "p_1102->g_97", print_hash_value);
    transparent_crc(p_1102->g_126.s0, "p_1102->g_126.s0", print_hash_value);
    transparent_crc(p_1102->g_126.s1, "p_1102->g_126.s1", print_hash_value);
    transparent_crc(p_1102->g_126.s2, "p_1102->g_126.s2", print_hash_value);
    transparent_crc(p_1102->g_126.s3, "p_1102->g_126.s3", print_hash_value);
    transparent_crc(p_1102->g_126.s4, "p_1102->g_126.s4", print_hash_value);
    transparent_crc(p_1102->g_126.s5, "p_1102->g_126.s5", print_hash_value);
    transparent_crc(p_1102->g_126.s6, "p_1102->g_126.s6", print_hash_value);
    transparent_crc(p_1102->g_126.s7, "p_1102->g_126.s7", print_hash_value);
    transparent_crc(p_1102->g_126.s8, "p_1102->g_126.s8", print_hash_value);
    transparent_crc(p_1102->g_126.s9, "p_1102->g_126.s9", print_hash_value);
    transparent_crc(p_1102->g_126.sa, "p_1102->g_126.sa", print_hash_value);
    transparent_crc(p_1102->g_126.sb, "p_1102->g_126.sb", print_hash_value);
    transparent_crc(p_1102->g_126.sc, "p_1102->g_126.sc", print_hash_value);
    transparent_crc(p_1102->g_126.sd, "p_1102->g_126.sd", print_hash_value);
    transparent_crc(p_1102->g_126.se, "p_1102->g_126.se", print_hash_value);
    transparent_crc(p_1102->g_126.sf, "p_1102->g_126.sf", print_hash_value);
    transparent_crc(p_1102->g_139.s0, "p_1102->g_139.s0", print_hash_value);
    transparent_crc(p_1102->g_139.s1, "p_1102->g_139.s1", print_hash_value);
    transparent_crc(p_1102->g_139.s2, "p_1102->g_139.s2", print_hash_value);
    transparent_crc(p_1102->g_139.s3, "p_1102->g_139.s3", print_hash_value);
    transparent_crc(p_1102->g_139.s4, "p_1102->g_139.s4", print_hash_value);
    transparent_crc(p_1102->g_139.s5, "p_1102->g_139.s5", print_hash_value);
    transparent_crc(p_1102->g_139.s6, "p_1102->g_139.s6", print_hash_value);
    transparent_crc(p_1102->g_139.s7, "p_1102->g_139.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1102->g_143[i][j][k], "p_1102->g_143[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1102->g_144, "p_1102->g_144", print_hash_value);
    transparent_crc(p_1102->g_244.s0, "p_1102->g_244.s0", print_hash_value);
    transparent_crc(p_1102->g_244.s1, "p_1102->g_244.s1", print_hash_value);
    transparent_crc(p_1102->g_244.s2, "p_1102->g_244.s2", print_hash_value);
    transparent_crc(p_1102->g_244.s3, "p_1102->g_244.s3", print_hash_value);
    transparent_crc(p_1102->g_244.s4, "p_1102->g_244.s4", print_hash_value);
    transparent_crc(p_1102->g_244.s5, "p_1102->g_244.s5", print_hash_value);
    transparent_crc(p_1102->g_244.s6, "p_1102->g_244.s6", print_hash_value);
    transparent_crc(p_1102->g_244.s7, "p_1102->g_244.s7", print_hash_value);
    transparent_crc(p_1102->g_244.s8, "p_1102->g_244.s8", print_hash_value);
    transparent_crc(p_1102->g_244.s9, "p_1102->g_244.s9", print_hash_value);
    transparent_crc(p_1102->g_244.sa, "p_1102->g_244.sa", print_hash_value);
    transparent_crc(p_1102->g_244.sb, "p_1102->g_244.sb", print_hash_value);
    transparent_crc(p_1102->g_244.sc, "p_1102->g_244.sc", print_hash_value);
    transparent_crc(p_1102->g_244.sd, "p_1102->g_244.sd", print_hash_value);
    transparent_crc(p_1102->g_244.se, "p_1102->g_244.se", print_hash_value);
    transparent_crc(p_1102->g_244.sf, "p_1102->g_244.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1102->g_247[i][j].f0, "p_1102->g_247[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1102->g_351.x, "p_1102->g_351.x", print_hash_value);
    transparent_crc(p_1102->g_351.y, "p_1102->g_351.y", print_hash_value);
    transparent_crc(p_1102->g_359.x, "p_1102->g_359.x", print_hash_value);
    transparent_crc(p_1102->g_359.y, "p_1102->g_359.y", print_hash_value);
    transparent_crc(p_1102->g_363, "p_1102->g_363", print_hash_value);
    transparent_crc(p_1102->g_368.s0, "p_1102->g_368.s0", print_hash_value);
    transparent_crc(p_1102->g_368.s1, "p_1102->g_368.s1", print_hash_value);
    transparent_crc(p_1102->g_368.s2, "p_1102->g_368.s2", print_hash_value);
    transparent_crc(p_1102->g_368.s3, "p_1102->g_368.s3", print_hash_value);
    transparent_crc(p_1102->g_368.s4, "p_1102->g_368.s4", print_hash_value);
    transparent_crc(p_1102->g_368.s5, "p_1102->g_368.s5", print_hash_value);
    transparent_crc(p_1102->g_368.s6, "p_1102->g_368.s6", print_hash_value);
    transparent_crc(p_1102->g_368.s7, "p_1102->g_368.s7", print_hash_value);
    transparent_crc(p_1102->g_415.s0, "p_1102->g_415.s0", print_hash_value);
    transparent_crc(p_1102->g_415.s1, "p_1102->g_415.s1", print_hash_value);
    transparent_crc(p_1102->g_415.s2, "p_1102->g_415.s2", print_hash_value);
    transparent_crc(p_1102->g_415.s3, "p_1102->g_415.s3", print_hash_value);
    transparent_crc(p_1102->g_415.s4, "p_1102->g_415.s4", print_hash_value);
    transparent_crc(p_1102->g_415.s5, "p_1102->g_415.s5", print_hash_value);
    transparent_crc(p_1102->g_415.s6, "p_1102->g_415.s6", print_hash_value);
    transparent_crc(p_1102->g_415.s7, "p_1102->g_415.s7", print_hash_value);
    transparent_crc(p_1102->g_426.s0, "p_1102->g_426.s0", print_hash_value);
    transparent_crc(p_1102->g_426.s1, "p_1102->g_426.s1", print_hash_value);
    transparent_crc(p_1102->g_426.s2, "p_1102->g_426.s2", print_hash_value);
    transparent_crc(p_1102->g_426.s3, "p_1102->g_426.s3", print_hash_value);
    transparent_crc(p_1102->g_426.s4, "p_1102->g_426.s4", print_hash_value);
    transparent_crc(p_1102->g_426.s5, "p_1102->g_426.s5", print_hash_value);
    transparent_crc(p_1102->g_426.s6, "p_1102->g_426.s6", print_hash_value);
    transparent_crc(p_1102->g_426.s7, "p_1102->g_426.s7", print_hash_value);
    transparent_crc(p_1102->g_427.x, "p_1102->g_427.x", print_hash_value);
    transparent_crc(p_1102->g_427.y, "p_1102->g_427.y", print_hash_value);
    transparent_crc(p_1102->g_432, "p_1102->g_432", print_hash_value);
    transparent_crc(p_1102->g_455.x, "p_1102->g_455.x", print_hash_value);
    transparent_crc(p_1102->g_455.y, "p_1102->g_455.y", print_hash_value);
    transparent_crc(p_1102->g_455.z, "p_1102->g_455.z", print_hash_value);
    transparent_crc(p_1102->g_455.w, "p_1102->g_455.w", print_hash_value);
    transparent_crc(p_1102->g_459.s0, "p_1102->g_459.s0", print_hash_value);
    transparent_crc(p_1102->g_459.s1, "p_1102->g_459.s1", print_hash_value);
    transparent_crc(p_1102->g_459.s2, "p_1102->g_459.s2", print_hash_value);
    transparent_crc(p_1102->g_459.s3, "p_1102->g_459.s3", print_hash_value);
    transparent_crc(p_1102->g_459.s4, "p_1102->g_459.s4", print_hash_value);
    transparent_crc(p_1102->g_459.s5, "p_1102->g_459.s5", print_hash_value);
    transparent_crc(p_1102->g_459.s6, "p_1102->g_459.s6", print_hash_value);
    transparent_crc(p_1102->g_459.s7, "p_1102->g_459.s7", print_hash_value);
    transparent_crc(p_1102->g_538.x, "p_1102->g_538.x", print_hash_value);
    transparent_crc(p_1102->g_538.y, "p_1102->g_538.y", print_hash_value);
    transparent_crc(p_1102->g_538.z, "p_1102->g_538.z", print_hash_value);
    transparent_crc(p_1102->g_538.w, "p_1102->g_538.w", print_hash_value);
    transparent_crc(p_1102->g_562, "p_1102->g_562", print_hash_value);
    transparent_crc(p_1102->g_620.s0, "p_1102->g_620.s0", print_hash_value);
    transparent_crc(p_1102->g_620.s1, "p_1102->g_620.s1", print_hash_value);
    transparent_crc(p_1102->g_620.s2, "p_1102->g_620.s2", print_hash_value);
    transparent_crc(p_1102->g_620.s3, "p_1102->g_620.s3", print_hash_value);
    transparent_crc(p_1102->g_620.s4, "p_1102->g_620.s4", print_hash_value);
    transparent_crc(p_1102->g_620.s5, "p_1102->g_620.s5", print_hash_value);
    transparent_crc(p_1102->g_620.s6, "p_1102->g_620.s6", print_hash_value);
    transparent_crc(p_1102->g_620.s7, "p_1102->g_620.s7", print_hash_value);
    transparent_crc(p_1102->g_622.s0, "p_1102->g_622.s0", print_hash_value);
    transparent_crc(p_1102->g_622.s1, "p_1102->g_622.s1", print_hash_value);
    transparent_crc(p_1102->g_622.s2, "p_1102->g_622.s2", print_hash_value);
    transparent_crc(p_1102->g_622.s3, "p_1102->g_622.s3", print_hash_value);
    transparent_crc(p_1102->g_622.s4, "p_1102->g_622.s4", print_hash_value);
    transparent_crc(p_1102->g_622.s5, "p_1102->g_622.s5", print_hash_value);
    transparent_crc(p_1102->g_622.s6, "p_1102->g_622.s6", print_hash_value);
    transparent_crc(p_1102->g_622.s7, "p_1102->g_622.s7", print_hash_value);
    transparent_crc(p_1102->g_622.s8, "p_1102->g_622.s8", print_hash_value);
    transparent_crc(p_1102->g_622.s9, "p_1102->g_622.s9", print_hash_value);
    transparent_crc(p_1102->g_622.sa, "p_1102->g_622.sa", print_hash_value);
    transparent_crc(p_1102->g_622.sb, "p_1102->g_622.sb", print_hash_value);
    transparent_crc(p_1102->g_622.sc, "p_1102->g_622.sc", print_hash_value);
    transparent_crc(p_1102->g_622.sd, "p_1102->g_622.sd", print_hash_value);
    transparent_crc(p_1102->g_622.se, "p_1102->g_622.se", print_hash_value);
    transparent_crc(p_1102->g_622.sf, "p_1102->g_622.sf", print_hash_value);
    transparent_crc(p_1102->g_631.s0, "p_1102->g_631.s0", print_hash_value);
    transparent_crc(p_1102->g_631.s1, "p_1102->g_631.s1", print_hash_value);
    transparent_crc(p_1102->g_631.s2, "p_1102->g_631.s2", print_hash_value);
    transparent_crc(p_1102->g_631.s3, "p_1102->g_631.s3", print_hash_value);
    transparent_crc(p_1102->g_631.s4, "p_1102->g_631.s4", print_hash_value);
    transparent_crc(p_1102->g_631.s5, "p_1102->g_631.s5", print_hash_value);
    transparent_crc(p_1102->g_631.s6, "p_1102->g_631.s6", print_hash_value);
    transparent_crc(p_1102->g_631.s7, "p_1102->g_631.s7", print_hash_value);
    transparent_crc(p_1102->g_631.s8, "p_1102->g_631.s8", print_hash_value);
    transparent_crc(p_1102->g_631.s9, "p_1102->g_631.s9", print_hash_value);
    transparent_crc(p_1102->g_631.sa, "p_1102->g_631.sa", print_hash_value);
    transparent_crc(p_1102->g_631.sb, "p_1102->g_631.sb", print_hash_value);
    transparent_crc(p_1102->g_631.sc, "p_1102->g_631.sc", print_hash_value);
    transparent_crc(p_1102->g_631.sd, "p_1102->g_631.sd", print_hash_value);
    transparent_crc(p_1102->g_631.se, "p_1102->g_631.se", print_hash_value);
    transparent_crc(p_1102->g_631.sf, "p_1102->g_631.sf", print_hash_value);
    transparent_crc(p_1102->g_707, "p_1102->g_707", print_hash_value);
    transparent_crc(p_1102->g_726.s0, "p_1102->g_726.s0", print_hash_value);
    transparent_crc(p_1102->g_726.s1, "p_1102->g_726.s1", print_hash_value);
    transparent_crc(p_1102->g_726.s2, "p_1102->g_726.s2", print_hash_value);
    transparent_crc(p_1102->g_726.s3, "p_1102->g_726.s3", print_hash_value);
    transparent_crc(p_1102->g_726.s4, "p_1102->g_726.s4", print_hash_value);
    transparent_crc(p_1102->g_726.s5, "p_1102->g_726.s5", print_hash_value);
    transparent_crc(p_1102->g_726.s6, "p_1102->g_726.s6", print_hash_value);
    transparent_crc(p_1102->g_726.s7, "p_1102->g_726.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1102->g_762[i][j], "p_1102->g_762[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1102->g_774.s0, "p_1102->g_774.s0", print_hash_value);
    transparent_crc(p_1102->g_774.s1, "p_1102->g_774.s1", print_hash_value);
    transparent_crc(p_1102->g_774.s2, "p_1102->g_774.s2", print_hash_value);
    transparent_crc(p_1102->g_774.s3, "p_1102->g_774.s3", print_hash_value);
    transparent_crc(p_1102->g_774.s4, "p_1102->g_774.s4", print_hash_value);
    transparent_crc(p_1102->g_774.s5, "p_1102->g_774.s5", print_hash_value);
    transparent_crc(p_1102->g_774.s6, "p_1102->g_774.s6", print_hash_value);
    transparent_crc(p_1102->g_774.s7, "p_1102->g_774.s7", print_hash_value);
    transparent_crc(p_1102->g_774.s8, "p_1102->g_774.s8", print_hash_value);
    transparent_crc(p_1102->g_774.s9, "p_1102->g_774.s9", print_hash_value);
    transparent_crc(p_1102->g_774.sa, "p_1102->g_774.sa", print_hash_value);
    transparent_crc(p_1102->g_774.sb, "p_1102->g_774.sb", print_hash_value);
    transparent_crc(p_1102->g_774.sc, "p_1102->g_774.sc", print_hash_value);
    transparent_crc(p_1102->g_774.sd, "p_1102->g_774.sd", print_hash_value);
    transparent_crc(p_1102->g_774.se, "p_1102->g_774.se", print_hash_value);
    transparent_crc(p_1102->g_774.sf, "p_1102->g_774.sf", print_hash_value);
    transparent_crc(p_1102->g_785.s0, "p_1102->g_785.s0", print_hash_value);
    transparent_crc(p_1102->g_785.s1, "p_1102->g_785.s1", print_hash_value);
    transparent_crc(p_1102->g_785.s2, "p_1102->g_785.s2", print_hash_value);
    transparent_crc(p_1102->g_785.s3, "p_1102->g_785.s3", print_hash_value);
    transparent_crc(p_1102->g_785.s4, "p_1102->g_785.s4", print_hash_value);
    transparent_crc(p_1102->g_785.s5, "p_1102->g_785.s5", print_hash_value);
    transparent_crc(p_1102->g_785.s6, "p_1102->g_785.s6", print_hash_value);
    transparent_crc(p_1102->g_785.s7, "p_1102->g_785.s7", print_hash_value);
    transparent_crc(p_1102->g_785.s8, "p_1102->g_785.s8", print_hash_value);
    transparent_crc(p_1102->g_785.s9, "p_1102->g_785.s9", print_hash_value);
    transparent_crc(p_1102->g_785.sa, "p_1102->g_785.sa", print_hash_value);
    transparent_crc(p_1102->g_785.sb, "p_1102->g_785.sb", print_hash_value);
    transparent_crc(p_1102->g_785.sc, "p_1102->g_785.sc", print_hash_value);
    transparent_crc(p_1102->g_785.sd, "p_1102->g_785.sd", print_hash_value);
    transparent_crc(p_1102->g_785.se, "p_1102->g_785.se", print_hash_value);
    transparent_crc(p_1102->g_785.sf, "p_1102->g_785.sf", print_hash_value);
    transparent_crc(p_1102->g_787.x, "p_1102->g_787.x", print_hash_value);
    transparent_crc(p_1102->g_787.y, "p_1102->g_787.y", print_hash_value);
    transparent_crc(p_1102->g_873.x, "p_1102->g_873.x", print_hash_value);
    transparent_crc(p_1102->g_873.y, "p_1102->g_873.y", print_hash_value);
    transparent_crc(p_1102->g_873.z, "p_1102->g_873.z", print_hash_value);
    transparent_crc(p_1102->g_873.w, "p_1102->g_873.w", print_hash_value);
    transparent_crc(p_1102->g_904.x, "p_1102->g_904.x", print_hash_value);
    transparent_crc(p_1102->g_904.y, "p_1102->g_904.y", print_hash_value);
    transparent_crc(p_1102->g_905.s0, "p_1102->g_905.s0", print_hash_value);
    transparent_crc(p_1102->g_905.s1, "p_1102->g_905.s1", print_hash_value);
    transparent_crc(p_1102->g_905.s2, "p_1102->g_905.s2", print_hash_value);
    transparent_crc(p_1102->g_905.s3, "p_1102->g_905.s3", print_hash_value);
    transparent_crc(p_1102->g_905.s4, "p_1102->g_905.s4", print_hash_value);
    transparent_crc(p_1102->g_905.s5, "p_1102->g_905.s5", print_hash_value);
    transparent_crc(p_1102->g_905.s6, "p_1102->g_905.s6", print_hash_value);
    transparent_crc(p_1102->g_905.s7, "p_1102->g_905.s7", print_hash_value);
    transparent_crc(p_1102->g_922.x, "p_1102->g_922.x", print_hash_value);
    transparent_crc(p_1102->g_922.y, "p_1102->g_922.y", print_hash_value);
    transparent_crc(p_1102->g_929, "p_1102->g_929", print_hash_value);
    transparent_crc(p_1102->g_969.s0, "p_1102->g_969.s0", print_hash_value);
    transparent_crc(p_1102->g_969.s1, "p_1102->g_969.s1", print_hash_value);
    transparent_crc(p_1102->g_969.s2, "p_1102->g_969.s2", print_hash_value);
    transparent_crc(p_1102->g_969.s3, "p_1102->g_969.s3", print_hash_value);
    transparent_crc(p_1102->g_969.s4, "p_1102->g_969.s4", print_hash_value);
    transparent_crc(p_1102->g_969.s5, "p_1102->g_969.s5", print_hash_value);
    transparent_crc(p_1102->g_969.s6, "p_1102->g_969.s6", print_hash_value);
    transparent_crc(p_1102->g_969.s7, "p_1102->g_969.s7", print_hash_value);
    transparent_crc(p_1102->g_969.s8, "p_1102->g_969.s8", print_hash_value);
    transparent_crc(p_1102->g_969.s9, "p_1102->g_969.s9", print_hash_value);
    transparent_crc(p_1102->g_969.sa, "p_1102->g_969.sa", print_hash_value);
    transparent_crc(p_1102->g_969.sb, "p_1102->g_969.sb", print_hash_value);
    transparent_crc(p_1102->g_969.sc, "p_1102->g_969.sc", print_hash_value);
    transparent_crc(p_1102->g_969.sd, "p_1102->g_969.sd", print_hash_value);
    transparent_crc(p_1102->g_969.se, "p_1102->g_969.se", print_hash_value);
    transparent_crc(p_1102->g_969.sf, "p_1102->g_969.sf", print_hash_value);
    transparent_crc(p_1102->g_976.s0, "p_1102->g_976.s0", print_hash_value);
    transparent_crc(p_1102->g_976.s1, "p_1102->g_976.s1", print_hash_value);
    transparent_crc(p_1102->g_976.s2, "p_1102->g_976.s2", print_hash_value);
    transparent_crc(p_1102->g_976.s3, "p_1102->g_976.s3", print_hash_value);
    transparent_crc(p_1102->g_976.s4, "p_1102->g_976.s4", print_hash_value);
    transparent_crc(p_1102->g_976.s5, "p_1102->g_976.s5", print_hash_value);
    transparent_crc(p_1102->g_976.s6, "p_1102->g_976.s6", print_hash_value);
    transparent_crc(p_1102->g_976.s7, "p_1102->g_976.s7", print_hash_value);
    transparent_crc(p_1102->g_989.x, "p_1102->g_989.x", print_hash_value);
    transparent_crc(p_1102->g_989.y, "p_1102->g_989.y", print_hash_value);
    transparent_crc(p_1102->g_992.x, "p_1102->g_992.x", print_hash_value);
    transparent_crc(p_1102->g_992.y, "p_1102->g_992.y", print_hash_value);
    transparent_crc(p_1102->g_992.z, "p_1102->g_992.z", print_hash_value);
    transparent_crc(p_1102->g_992.w, "p_1102->g_992.w", print_hash_value);
    transparent_crc(p_1102->g_999.x, "p_1102->g_999.x", print_hash_value);
    transparent_crc(p_1102->g_999.y, "p_1102->g_999.y", print_hash_value);
    transparent_crc(p_1102->g_1034.s0, "p_1102->g_1034.s0", print_hash_value);
    transparent_crc(p_1102->g_1034.s1, "p_1102->g_1034.s1", print_hash_value);
    transparent_crc(p_1102->g_1034.s2, "p_1102->g_1034.s2", print_hash_value);
    transparent_crc(p_1102->g_1034.s3, "p_1102->g_1034.s3", print_hash_value);
    transparent_crc(p_1102->g_1034.s4, "p_1102->g_1034.s4", print_hash_value);
    transparent_crc(p_1102->g_1034.s5, "p_1102->g_1034.s5", print_hash_value);
    transparent_crc(p_1102->g_1034.s6, "p_1102->g_1034.s6", print_hash_value);
    transparent_crc(p_1102->g_1034.s7, "p_1102->g_1034.s7", print_hash_value);
    transparent_crc(p_1102->g_1051.x, "p_1102->g_1051.x", print_hash_value);
    transparent_crc(p_1102->g_1051.y, "p_1102->g_1051.y", print_hash_value);
    transparent_crc(p_1102->g_1052.x, "p_1102->g_1052.x", print_hash_value);
    transparent_crc(p_1102->g_1052.y, "p_1102->g_1052.y", print_hash_value);
    transparent_crc(p_1102->g_1060.x, "p_1102->g_1060.x", print_hash_value);
    transparent_crc(p_1102->g_1060.y, "p_1102->g_1060.y", print_hash_value);
    transparent_crc(p_1102->g_1061.s0, "p_1102->g_1061.s0", print_hash_value);
    transparent_crc(p_1102->g_1061.s1, "p_1102->g_1061.s1", print_hash_value);
    transparent_crc(p_1102->g_1061.s2, "p_1102->g_1061.s2", print_hash_value);
    transparent_crc(p_1102->g_1061.s3, "p_1102->g_1061.s3", print_hash_value);
    transparent_crc(p_1102->g_1061.s4, "p_1102->g_1061.s4", print_hash_value);
    transparent_crc(p_1102->g_1061.s5, "p_1102->g_1061.s5", print_hash_value);
    transparent_crc(p_1102->g_1061.s6, "p_1102->g_1061.s6", print_hash_value);
    transparent_crc(p_1102->g_1061.s7, "p_1102->g_1061.s7", print_hash_value);
    transparent_crc(p_1102->g_1075, "p_1102->g_1075", print_hash_value);
    transparent_crc(p_1102->v_collective, "p_1102->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 82; i++)
            transparent_crc(p_1102->g_special_values[i + 82 * get_linear_group_id()], "p_1102->g_special_values[i + 82 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 82; i++)
            transparent_crc(p_1102->l_special_values[i], "p_1102->l_special_values[i]", print_hash_value);
    transparent_crc(p_1102->l_comm_values[get_linear_local_id()], "p_1102->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1102->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_1102->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
