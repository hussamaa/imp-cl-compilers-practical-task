// --atomics 35 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 37,31,5 -l 37,1,1
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

__constant uint32_t permutations[10][37] = {
{2,27,32,29,7,23,22,17,4,8,34,1,6,24,30,25,35,13,15,14,21,10,36,19,20,11,31,3,12,16,5,9,33,18,28,0,26}, // permutation 0
{33,29,24,16,19,8,22,7,27,2,25,5,30,0,18,14,11,23,9,28,35,1,3,26,6,21,13,36,4,17,34,32,15,31,12,20,10}, // permutation 1
{4,15,34,5,19,21,24,11,13,23,14,30,6,2,10,36,33,32,16,18,8,25,0,12,26,35,1,20,17,7,22,27,3,31,9,29,28}, // permutation 2
{3,6,36,31,16,2,17,14,18,35,33,22,15,9,30,7,26,23,32,8,12,10,21,5,25,11,20,1,0,27,24,29,28,19,34,4,13}, // permutation 3
{25,19,1,18,10,36,32,11,24,35,16,5,27,30,34,23,28,29,21,6,3,13,26,20,2,22,12,8,0,33,4,14,15,9,31,17,7}, // permutation 4
{23,33,17,11,20,19,31,0,1,18,8,25,22,29,34,21,4,30,2,36,16,27,15,12,35,10,26,32,28,6,9,14,24,7,13,5,3}, // permutation 5
{22,0,14,16,21,5,27,34,18,4,20,7,19,24,15,31,32,29,1,28,8,23,11,10,35,13,26,33,25,17,12,3,36,30,9,6,2}, // permutation 6
{23,21,9,20,28,24,31,14,17,19,5,4,7,10,29,16,27,22,1,32,34,36,3,2,12,30,33,25,26,6,15,8,11,13,35,18,0}, // permutation 7
{24,34,16,1,9,14,15,25,23,8,7,27,3,19,35,5,18,30,0,28,21,12,17,11,36,33,13,22,6,20,31,26,32,29,2,10,4}, // permutation 8
{20,21,8,33,3,31,12,29,11,15,14,24,32,22,4,34,27,17,30,7,2,23,18,13,19,10,36,0,1,6,35,5,26,28,9,16,25} // permutation 9
};

// Seed: 3702907348

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
uint16_t  func_1(struct S1 * p_71);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_1(struct S1 * p_71)
{ /* block id: 4 */
    int8_t l_70 = 0x34L;
    if ((atomic_inc(&p_71->l_atomic_input[1]) == 2))
    { /* block id: 6 */
        int32_t l_3 = 0x091C5534L;
        int32_t *l_2 = &l_3;
        int32_t *l_35 = &l_3;
        int32_t *l_36 = (void*)0;
        l_2 = (void*)0;
        for (l_3 = 18; (l_3 < 9); l_3 = safe_sub_func_int64_t_s_s(l_3, 1))
        { /* block id: 10 */
            VECTOR(uint32_t, 4) l_6 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL);
            int64_t l_7 = 0x5652568108531D14L;
            int32_t l_20 = (-7L);
            int32_t *l_19[4][9][3] = {{{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20}},{{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20}},{{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20}},{{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20}}};
            int32_t **l_18 = &l_19[0][6][2];
            int i, j, k;
            l_7 = ((((VECTOR(uint32_t, 16))(l_6.xzwzxwxyyywzxyzz)).se , 0x5720B963AB1943C6L) , 0x266D210EL);
            for (l_6.x = 0; (l_6.x >= 50); l_6.x++)
            { /* block id: 14 */
                uint32_t l_10 = 0xA3D7F191L;
                int32_t l_16[5] = {0L,0L,0L,0L,0L};
                VECTOR(uint32_t, 16) l_17 = (VECTOR(uint32_t, 16))(0x4C821046L, (VECTOR(uint32_t, 4))(0x4C821046L, (VECTOR(uint32_t, 2))(0x4C821046L, 0x20DD93BAL), 0x20DD93BAL), 0x20DD93BAL, 0x4C821046L, 0x20DD93BAL, (VECTOR(uint32_t, 2))(0x4C821046L, 0x20DD93BAL), (VECTOR(uint32_t, 2))(0x4C821046L, 0x20DD93BAL), 0x4C821046L, 0x20DD93BAL, 0x4C821046L, 0x20DD93BAL);
                int i;
                l_2 = (void*)0;
                l_10++;
                for (l_10 = 0; (l_10 <= 51); l_10 = safe_add_func_int16_t_s_s(l_10, 6))
                { /* block id: 19 */
                    uint8_t l_15 = 0x9EL;
                    l_15 |= 4L;
                }
                l_17.s6 |= l_16[3];
            }
            l_18 = (void*)0;
            for (l_7 = 0; (l_7 != 26); l_7 = safe_add_func_uint64_t_u_u(l_7, 4))
            { /* block id: 27 */
                uint64_t l_23[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
                uint32_t l_24 = 4294967295UL;
                VECTOR(int32_t, 4) l_25 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x732AFCB0L), 0x732AFCB0L);
                VECTOR(int32_t, 8) l_26 = (VECTOR(int32_t, 8))(0x731D497CL, (VECTOR(int32_t, 4))(0x731D497CL, (VECTOR(int32_t, 2))(0x731D497CL, 0x2EA6AE20L), 0x2EA6AE20L), 0x2EA6AE20L, 0x731D497CL, 0x2EA6AE20L);
                VECTOR(int32_t, 2) l_27 = (VECTOR(int32_t, 2))((-3L), 0x48A2DB63L);
                int32_t l_30 = 0x76D77974L;
                int32_t *l_29[8] = {&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30};
                int32_t **l_28 = &l_29[4];
                int32_t **l_31[5] = {&l_29[6],&l_29[6],&l_29[6],&l_29[6],&l_29[6]};
                int32_t **l_32 = (void*)0;
                uint8_t l_33 = 255UL;
                int16_t l_34 = 6L;
                int i;
                l_32 = ((l_23[5] , (l_24 , ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-5L), 1L)).yyyyyyxy, ((VECTOR(int32_t, 2))(0x620A3418L, 0L)).xyxxyyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x1BD12F8BL, 4L)))).yxxx)).wywwyxzw))).s1007156237665134)).sb1)).xxyy)), ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(l_25.zz)).yyxyyxyxyxyxyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_26.s24551766)).s57)).xxyyxyxxyyyyxxyy)), ((VECTOR(int32_t, 8))(l_27.yyyxxxxy)).s7246344017103271))).s8be4))).y)) , (l_31[1] = (l_18 = l_28)));
                l_34 = (l_33 , 0x73A6825DL);
            }
        }
        l_36 = l_35;
        for (l_3 = (-4); (l_3 < 29); l_3++)
        { /* block id: 37 */
            int32_t l_39 = 0x5C6606A8L;
            for (l_39 = 0; (l_39 > 24); l_39 = safe_add_func_int64_t_s_s(l_39, 4))
            { /* block id: 40 */
                int32_t l_43 = 0x02D77871L;
                int32_t *l_42 = &l_43;
                VECTOR(int32_t, 8) l_51 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
                VECTOR(int32_t, 2) l_52 = (VECTOR(int32_t, 2))((-10L), 0L);
                VECTOR(int32_t, 4) l_53 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L);
                uint16_t l_54 = 0xE532L;
                int16_t l_55 = (-3L);
                VECTOR(int32_t, 2) l_56 = (VECTOR(int32_t, 2))(0x23AFD543L, 0x5A12577EL);
                uint32_t l_57 = 0x902D2708L;
                uint64_t l_58 = 0x2223AA5B3E5B6057L;
                VECTOR(int32_t, 4) l_59 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x20769136L), 0x20769136L);
                VECTOR(int32_t, 8) l_60 = (VECTOR(int32_t, 8))(0x09E5C5CBL, (VECTOR(int32_t, 4))(0x09E5C5CBL, (VECTOR(int32_t, 2))(0x09E5C5CBL, 1L), 1L), 1L, 0x09E5C5CBL, 1L);
                uint8_t l_61 = 0x38L;
                int i;
                l_35 = (FAKE_DIVERGE(p_71->group_2_offset, get_group_id(2), 10) , (GROUP_DIVERGE(1, 1) , (l_42 = l_42)));
                for (l_43 = (-24); (l_43 == 3); l_43++)
                { /* block id: 45 */
                    uint16_t l_46 = 0x9780L;
                    int32_t l_49[3][4][8] = {{{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L}},{{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L}},{{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L},{0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L,0x4C26B3FAL,0x4C26B3FAL,0x5FE6EE09L}}};
                    int32_t l_50 = 0x5D18A938L;
                    int i, j, k;
                    l_46--;
                    l_50 |= l_49[1][2][6];
                }
                l_61 = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_51.s53)).yyyxxyxxyxyyxyyy, ((VECTOR(int32_t, 8))(0x6EFE450DL, ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_52.yxxx)).wyzwwxxz)), 1L, (l_55 = (l_54 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_53.ywyzxyxyzzzyzxyx)))).sa)), 5L, ((VECTOR(int32_t, 2))((-1L), 0L)), 6L, 0x230E0CE7L, 0x34C718FEL)).s3 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_58 = (l_57 = ((VECTOR(int32_t, 8))(((*l_42) = (-1L)), 0x6F731361L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_56.yy)), 0x319DC099L, 0x41E6F706L)), 0x28DCCB67L, 5L)).s4)), 3L, ((VECTOR(int32_t, 4))(l_59.ywxx)), (-1L), (-2L))).s7703304505135467)).s43)).even) , 0x2C4F7295L), ((VECTOR(int32_t, 4))(l_60.s3711)), 0x10E05D1EL, 6L)).s6622445075170735))).s1;
            }
            for (l_39 = (-22); (l_39 >= (-2)); l_39 = safe_add_func_int64_t_s_s(l_39, 7))
            { /* block id: 58 */
                int16_t l_64 = 0x6833L;
                int32_t l_65 = 0x218A5C64L;
                int32_t l_66 = 0x1FED5CABL;
                int32_t *l_67 = &l_65;
                uint16_t l_68 = 0x3618L;
                uint32_t l_69[8][8][4] = {{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}},{{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL},{0x29568EBAL,9UL,0x975085CEL,0x975085CEL}}};
                int i, j, k;
                l_2 = (l_64 , (void*)0);
                l_67 = (l_65 , (l_66 , l_67));
                l_69[5][7][3] ^= l_68;
            }
        }
        unsigned int result = 0;
        result += l_3;
        atomic_add(&p_71->l_special_values[1], result);
    }
    else
    { /* block id: 64 */
        (1 + 1);
    }
    return l_70;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_comm_values[i] = 1;
    struct S1 c_72;
    struct S1* p_71 = &c_72;
    struct S1 c_73 = {
        0, // p_71->v_collective
        sequence_input[get_global_id(0)], // p_71->global_0_offset
        sequence_input[get_global_id(1)], // p_71->global_1_offset
        sequence_input[get_global_id(2)], // p_71->global_2_offset
        sequence_input[get_local_id(0)], // p_71->local_0_offset
        sequence_input[get_local_id(1)], // p_71->local_1_offset
        sequence_input[get_local_id(2)], // p_71->local_2_offset
        sequence_input[get_group_id(0)], // p_71->group_0_offset
        sequence_input[get_group_id(1)], // p_71->group_1_offset
        sequence_input[get_group_id(2)], // p_71->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 37)), permutations[0][get_linear_local_id()])), // p_71->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_72 = c_73;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_71);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_71->v_collective, "p_71->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 35; i++)
            transparent_crc(p_71->l_special_values[i], "p_71->l_special_values[i]", print_hash_value);
    transparent_crc(p_71->l_comm_values[get_linear_local_id()], "p_71->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_71->g_comm_values[get_linear_group_id() * 37 + get_linear_local_id()], "p_71->g_comm_values[get_linear_group_id() * 37 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
