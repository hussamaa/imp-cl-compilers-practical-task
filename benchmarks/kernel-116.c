// --atomics 64 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 8,65,19 -l 1,5,1
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

__constant uint32_t permutations[10][5] = {
{3,0,1,2,4}, // permutation 0
{1,0,2,4,3}, // permutation 1
{1,2,0,3,4}, // permutation 2
{4,0,1,3,2}, // permutation 3
{1,2,3,0,4}, // permutation 4
{1,2,3,4,0}, // permutation 5
{3,0,1,2,4}, // permutation 6
{1,3,4,0,2}, // permutation 7
{4,0,2,1,3}, // permutation 8
{1,2,0,4,3} // permutation 9
};

// Seed: 2448802967

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
};

struct S1 {
    int32_t g_2;
    int32_t g_14;
    uint8_t g_17;
    int32_t *g_45;
    int32_t **g_44;
    volatile VECTOR(int8_t, 16) g_55;
    VECTOR(uint8_t, 4) g_56;
    volatile VECTOR(int32_t, 8) g_57;
    volatile VECTOR(uint64_t, 8) g_83;
    VECTOR(int32_t, 16) g_87;
    VECTOR(int32_t, 4) g_88;
    volatile VECTOR(uint64_t, 16) g_94;
    int16_t g_107;
    uint16_t g_109[7][10];
    int16_t g_120;
    uint32_t g_131;
    int32_t g_135;
    int32_t * volatile g_134;
    int32_t * volatile g_158[4][5];
    int32_t g_172;
    VECTOR(int64_t, 16) g_173;
    uint32_t g_178;
    int8_t g_193;
    uint16_t g_264;
    int32_t g_265[6][6][7];
    VECTOR(uint16_t, 4) g_272;
    volatile VECTOR(uint32_t, 8) g_274;
    volatile VECTOR(uint32_t, 2) g_275;
    volatile uint8_t g_287;
    uint16_t g_289;
    uint32_t g_290[4][8][7];
    struct S0 g_291;
    struct S0 * volatile g_292;
    int32_t *g_334;
    int32_t ** volatile g_333;
    VECTOR(int64_t, 2) g_344;
    volatile VECTOR(int8_t, 8) g_353;
    int8_t g_373[8];
    volatile struct S0 g_397;
    volatile struct S0 * volatile g_398;
    int32_t ** volatile g_401;
    int32_t ** volatile g_403[5][5];
    int32_t ** volatile g_404;
    volatile struct S0 g_430;
    int32_t ** volatile g_439;
    uint64_t g_476;
    int32_t g_492;
    VECTOR(uint16_t, 4) g_532;
    VECTOR(uint16_t, 2) g_546;
    int64_t *g_567;
    int64_t **g_566;
    VECTOR(uint8_t, 4) g_602;
    VECTOR(uint8_t, 8) g_604;
    volatile int32_t g_618;
    int32_t g_623[5][10][5];
    VECTOR(int64_t, 8) g_648;
    volatile VECTOR(uint8_t, 4) g_769;
    VECTOR(uint8_t, 2) g_773;
    VECTOR(int8_t, 2) g_776;
    VECTOR(int8_t, 2) g_778;
    VECTOR(int8_t, 16) g_786;
    VECTOR(int8_t, 16) g_813;
    VECTOR(uint8_t, 2) g_816;
    int32_t *** volatile g_832;
    volatile VECTOR(uint8_t, 16) g_843;
    volatile uint32_t g_902[10];
    uint8_t * volatile g_905;
    uint8_t * volatile * volatile g_904[2];
    uint8_t * volatile * volatile * volatile g_908;
    int32_t *g_955[4][5];
    int32_t **g_954[10];
    VECTOR(uint32_t, 16) g_981;
    volatile uint8_t * volatile * volatile g_1126;
    struct S0 g_1132;
    volatile VECTOR(int32_t, 8) g_1137;
    uint16_t g_1141[6][8][5];
    volatile VECTOR(uint32_t, 2) g_1143;
    uint16_t *g_1156;
    uint16_t **g_1155;
    volatile VECTOR(int8_t, 2) g_1173;
    VECTOR(int8_t, 16) g_1176;
    struct S0 g_1182;
    struct S0 g_1183[5][8];
    struct S0 g_1185;
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
int64_t  func_1(struct S1 * p_1190);
int32_t * func_5(int32_t * p_6, int32_t * p_7, int32_t * p_8, struct S1 * p_1190);
int32_t * func_10(uint64_t  p_11, struct S1 * p_1190);
int32_t * func_22(int32_t  p_23, int32_t  p_24, int64_t  p_25, uint64_t  p_26, int8_t  p_27, struct S1 * p_1190);
int32_t ** func_30(int32_t  p_31, uint32_t  p_32, int64_t  p_33, int32_t ** p_34, int32_t ** p_35, struct S1 * p_1190);
int16_t  func_39(int32_t ** p_40, int32_t * p_41, int32_t * p_42, int32_t ** p_43, struct S1 * p_1190);
int32_t * func_46(int32_t * p_47, uint8_t  p_48, struct S1 * p_1190);
uint8_t  func_49(int32_t * p_50, int64_t  p_51, struct S1 * p_1190);
uint64_t  func_59(int32_t * p_60, struct S1 * p_1190);
int32_t  func_76(int32_t * p_77, int32_t ** p_78, uint64_t  p_79, struct S1 * p_1190);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1190->g_2
 * writes: p_1190->g_2
 */
int64_t  func_1(struct S1 * p_1190)
{ /* block id: 4 */
    uint64_t l_36 = 18446744073709551615UL;
    int32_t *l_472 = &p_1190->g_2;
    int8_t l_1188 = 0x2FL;
    int32_t l_1189 = 4L;
    for (p_1190->g_2 = 0; (p_1190->g_2 >= (-7)); p_1190->g_2 = safe_sub_func_uint8_t_u_u(p_1190->g_2, 1))
    { /* block id: 7 */
        int32_t *l_9 = (void*)0;
        int32_t *l_21[3];
        int32_t **l_20 = &l_21[1];
        int32_t l_953 = 0L;
        int32_t ***l_996 = &p_1190->g_954[9];
        int i;
        for (i = 0; i < 3; i++)
            l_21[i] = &p_1190->g_2;
        (1 + 1);
    }
    return l_1189;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_292 p_1190->g_291 p_1190->g_333
 * writes: p_1190->g_1185 p_1190->g_334
 */
int32_t * func_5(int32_t * p_6, int32_t * p_7, int32_t * p_8, struct S1 * p_1190)
{ /* block id: 573 */
    VECTOR(int8_t, 8) l_1186 = (VECTOR(int8_t, 8))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x2CL), 0x2CL), 0x2CL, 0x56L, 0x2CL);
    VECTOR(int32_t, 8) l_1187 = (VECTOR(int32_t, 8))(0x5AAC69BBL, (VECTOR(int32_t, 4))(0x5AAC69BBL, (VECTOR(int32_t, 2))(0x5AAC69BBL, 0x4D06EA71L), 0x4D06EA71L), 0x4D06EA71L, 0x5AAC69BBL, 0x4D06EA71L);
    int i;
    p_1190->g_1185 = (*p_1190->g_292);
    l_1187.s5 = l_1186.s3;
    (*p_1190->g_333) = p_7;
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_17
 * writes: p_1190->g_17
 */
int32_t * func_10(uint64_t  p_11, struct S1 * p_1190)
{ /* block id: 8 */
    int16_t l_12 = 0x4A20L;
    int32_t *l_13 = &p_1190->g_14;
    int32_t *l_15 = &p_1190->g_14;
    int32_t *l_16[2][8] = {{&p_1190->g_2,&p_1190->g_14,&p_1190->g_2,&p_1190->g_2,&p_1190->g_14,&p_1190->g_2,&p_1190->g_2,&p_1190->g_14},{&p_1190->g_2,&p_1190->g_14,&p_1190->g_2,&p_1190->g_2,&p_1190->g_14,&p_1190->g_2,&p_1190->g_2,&p_1190->g_14}};
    int i, j;
    p_1190->g_17--;
    return &p_1190->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_404 p_1190->g_334 p_1190->g_131 p_1190->g_14 p_1190->g_265 p_1190->g_1126 p_1190->g_1132 p_1190->g_264 p_1190->g_1182
 * writes: p_1190->g_1132 p_1190->g_264 p_1190->g_1141 p_1190->g_546 p_1190->g_131 p_1190->g_14 p_1190->g_265 p_1190->g_955 p_1190->g_1183
 */
int32_t * func_22(int32_t  p_23, int32_t  p_24, int64_t  p_25, uint64_t  p_26, int8_t  p_27, struct S1 * p_1190)
{ /* block id: 452 */
    uint64_t l_1125 = 0xC11D03355E8AE1BAL;
    int32_t l_1150 = 0x0C1463E7L;
    struct S0 *l_1151 = &p_1190->g_291;
    uint16_t **l_1158[7];
    VECTOR(uint32_t, 8) l_1160 = (VECTOR(uint32_t, 8))(0x7A293C8BL, (VECTOR(uint32_t, 4))(0x7A293C8BL, (VECTOR(uint32_t, 2))(0x7A293C8BL, 0xE39C812DL), 0xE39C812DL), 0xE39C812DL, 0x7A293C8BL, 0xE39C812DL);
    uint32_t l_1165 = 1UL;
    int32_t *l_1184 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_1158[i] = (void*)0;
    if ((atomic_inc(&p_1190->l_atomic_input[20]) == 3))
    { /* block id: 454 */
        int32_t l_997 = 0x6AE9855BL;
        int32_t l_1103[1][10] = {{0x339EE7B9L,(-1L),0x1188F000L,(-1L),0x339EE7B9L,0x339EE7B9L,(-1L),0x1188F000L,(-1L),0x339EE7B9L}};
        int32_t l_1104 = 0x721CED11L;
        uint32_t l_1105 = 0xC81DAA51L;
        int64_t l_1106[2][7][1] = {{{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L}},{{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L},{0x537683796BCE4D40L}}};
        int16_t l_1107 = 0x6D3AL;
        int8_t l_1108 = 0x60L;
        struct S0 l_1109[3][5] = {{{-1L,0xC9A7320E8B92A053L,2UL},{-1L,0xC9A7320E8B92A053L,2UL},{0L,0xBB82FBCDC7ED2EA2L,0xF6774B08L},{0x56L,1UL,0x7E338668L},{0x2CL,0x489924F070036EBFL,7UL}},{{-1L,0xC9A7320E8B92A053L,2UL},{-1L,0xC9A7320E8B92A053L,2UL},{0L,0xBB82FBCDC7ED2EA2L,0xF6774B08L},{0x56L,1UL,0x7E338668L},{0x2CL,0x489924F070036EBFL,7UL}},{{-1L,0xC9A7320E8B92A053L,2UL},{-1L,0xC9A7320E8B92A053L,2UL},{0L,0xBB82FBCDC7ED2EA2L,0xF6774B08L},{0x56L,1UL,0x7E338668L},{0x2CL,0x489924F070036EBFL,7UL}}};
        uint64_t l_1110 = 1UL;
        VECTOR(uint32_t, 4) l_1111 = (VECTOR(uint32_t, 4))(0xB1298D53L, (VECTOR(uint32_t, 2))(0xB1298D53L, 7UL), 7UL);
        uint8_t l_1112 = 4UL;
        int16_t l_1113 = 1L;
        int64_t l_1114 = 3L;
        uint64_t l_1115 = 0x07D541944466EAC3L;
        int i, j, k;
        for (l_997 = 0; (l_997 <= 25); ++l_997)
        { /* block id: 457 */
            uint32_t l_1000 = 4294967294UL;
            VECTOR(int64_t, 4) l_1001 = (VECTOR(int64_t, 4))(0x35E1C65E7B9BD34DL, (VECTOR(int64_t, 2))(0x35E1C65E7B9BD34DL, 6L), 6L);
            int64_t l_1002 = 0x67A261BA7017F6E5L;
            int64_t l_1003 = (-1L);
            VECTOR(int32_t, 4) l_1004 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2814AEFCL), 0x2814AEFCL);
            int32_t *l_1101 = (void*)0;
            int16_t l_1102 = 0L;
            int i;
            if (((VECTOR(int32_t, 8))(l_1000, (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1001.xyzwzwxxzyyxzwww)).s1e)).hi , l_1002), l_1003, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1004.zxxyywwwxzwxxzzx)).sfa6b)), 4L)).s2)
            { /* block id: 458 */
                int32_t l_1005 = 1L;
                VECTOR(uint8_t, 4) l_1017 = (VECTOR(uint8_t, 4))(0x67L, (VECTOR(uint8_t, 2))(0x67L, 8UL), 8UL);
                int16_t l_1018 = 0x622AL;
                uint8_t l_1019 = 0UL;
                VECTOR(int32_t, 8) l_1020 = (VECTOR(int32_t, 8))(0x4777EA8AL, (VECTOR(int32_t, 4))(0x4777EA8AL, (VECTOR(int32_t, 2))(0x4777EA8AL, 0x0DF90D6EL), 0x0DF90D6EL), 0x0DF90D6EL, 0x4777EA8AL, 0x0DF90D6EL);
                uint16_t l_1021 = 0UL;
                int i;
                for (l_1005 = 17; (l_1005 == 25); ++l_1005)
                { /* block id: 461 */
                    uint32_t l_1008[1][1][10] = {{{0x709AD8A5L,0xA71E7270L,4294967295UL,0xA71E7270L,0x709AD8A5L,0x709AD8A5L,0xA71E7270L,4294967295UL,0xA71E7270L,0x709AD8A5L}}};
                    uint32_t l_1011[3];
                    uint8_t l_1012 = 8UL;
                    VECTOR(int32_t, 8) l_1013 = (VECTOR(int32_t, 8))(0x1D439E22L, (VECTOR(int32_t, 4))(0x1D439E22L, (VECTOR(int32_t, 2))(0x1D439E22L, 9L), 9L), 9L, 0x1D439E22L, 9L);
                    int32_t *l_1014 = (void*)0;
                    int32_t *l_1015 = (void*)0;
                    struct S0 l_1016 = {4L,0xECD2AD9611966FF8L,0xC7842384L};/* VOLATILE GLOBAL l_1016 */
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1011[i] = 0x3AA24A9AL;
                    ++l_1008[0][0][8];
                    l_1004.w = l_1011[1];
                    l_1015 = ((l_1012 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1013.s24)).yxyxxyyx)).s3) , l_1014);
                    l_1004.w |= (l_1016 , 0x0E5AE21BL);
                }
                l_1019 ^= (l_1004.x = (((VECTOR(uint8_t, 2))(l_1017.zw)).lo , l_1018));
                l_1021 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1020.s2547)))).yyzyzwxz)).s4;
            }
            else
            { /* block id: 470 */
                VECTOR(int32_t, 8) l_1022 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L);
                uint16_t l_1023 = 0x9EF2L;
                int i;
                l_1004.z = ((VECTOR(int32_t, 4))(l_1022.s1266)).w;
                if ((l_1004.y &= l_1023))
                { /* block id: 473 */
                    struct S0 l_1026 = {1L,0UL,0UL};/* VOLATILE GLOBAL l_1026 */
                    struct S0 *l_1025 = &l_1026;
                    struct S0 **l_1024[7];
                    struct S0 **l_1027 = &l_1025;
                    struct S0 **l_1028 = &l_1025;
                    VECTOR(uint32_t, 16) l_1036 = (VECTOR(uint32_t, 16))(0xF55FD177L, (VECTOR(uint32_t, 4))(0xF55FD177L, (VECTOR(uint32_t, 2))(0xF55FD177L, 0x3C37446EL), 0x3C37446EL), 0x3C37446EL, 0xF55FD177L, 0x3C37446EL, (VECTOR(uint32_t, 2))(0xF55FD177L, 0x3C37446EL), (VECTOR(uint32_t, 2))(0xF55FD177L, 0x3C37446EL), 0xF55FD177L, 0x3C37446EL, 0xF55FD177L, 0x3C37446EL);
                    uint64_t l_1037 = 18446744073709551614UL;
                    VECTOR(int16_t, 4) l_1038 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3174L), 0x3174L);
                    VECTOR(int16_t, 16) l_1039 = (VECTOR(int16_t, 16))(0x0D8FL, (VECTOR(int16_t, 4))(0x0D8FL, (VECTOR(int16_t, 2))(0x0D8FL, 1L), 1L), 1L, 0x0D8FL, 1L, (VECTOR(int16_t, 2))(0x0D8FL, 1L), (VECTOR(int16_t, 2))(0x0D8FL, 1L), 0x0D8FL, 1L, 0x0D8FL, 1L);
                    VECTOR(int16_t, 2) l_1040 = (VECTOR(int16_t, 2))(0x1763L, 0x6EFCL);
                    int8_t l_1041 = 8L;
                    uint32_t l_1042 = 1UL;
                    int16_t l_1043 = 0x1B79L;
                    VECTOR(uint16_t, 4) l_1044 = (VECTOR(uint16_t, 4))(0xDF9EL, (VECTOR(uint16_t, 2))(0xDF9EL, 0xDDC8L), 0xDDC8L);
                    VECTOR(uint16_t, 16) l_1045 = (VECTOR(uint16_t, 16))(0x3DE7L, (VECTOR(uint16_t, 4))(0x3DE7L, (VECTOR(uint16_t, 2))(0x3DE7L, 0xF9C7L), 0xF9C7L), 0xF9C7L, 0x3DE7L, 0xF9C7L, (VECTOR(uint16_t, 2))(0x3DE7L, 0xF9C7L), (VECTOR(uint16_t, 2))(0x3DE7L, 0xF9C7L), 0x3DE7L, 0xF9C7L, 0x3DE7L, 0xF9C7L);
                    VECTOR(uint16_t, 4) l_1046 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xDF5AL), 0xDF5AL);
                    VECTOR(uint16_t, 4) l_1047 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), 4UL);
                    VECTOR(int32_t, 16) l_1048 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-8L)), (-8L)), (-8L), 9L, (-8L), (VECTOR(int32_t, 2))(9L, (-8L)), (VECTOR(int32_t, 2))(9L, (-8L)), 9L, (-8L), 9L, (-8L));
                    uint8_t l_1049 = 0x83L;
                    uint32_t l_1050 = 4294967295UL;
                    uint32_t l_1051 = 0x0A9C9E07L;
                    int32_t l_1052 = 0x4FC45531L;
                    uint32_t l_1053 = 0x0B884335L;
                    uint16_t l_1054[9] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1024[i] = &l_1025;
                    l_1028 = (l_1027 = l_1024[3]);
                    for (l_1026.f2 = 0; (l_1026.f2 > 50); l_1026.f2++)
                    { /* block id: 478 */
                        int32_t l_1032 = 0x7C11389CL;
                        int32_t *l_1031 = &l_1032;
                        int32_t *l_1033 = (void*)0;
                        int32_t *l_1034 = &l_1032;
                        int32_t *l_1035[7][10][1] = {{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}},{{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032},{&l_1032}}};
                        int i, j, k;
                        l_1031 = (void*)0;
                        l_1035[2][0][0] = (l_1034 = l_1033);
                    }
                    l_1022.s4 = ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))((-8L), 0x546EL, (((VECTOR(uint32_t, 2))(l_1036.se6)).even , l_1037), ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(l_1038.ww)).xxyy, ((VECTOR(int16_t, 4))(7L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1039.s0f67)).xxzzxxzy)).s40)), (-1L))), ((VECTOR(int16_t, 2))(l_1040.yy)).xyyx))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((l_1042 = l_1041), l_1043, 0x7A8AL, 0x7DC5L))))))), 0x52FBL)).even, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_1044.yzywzyzwwwxxxwzx)).hi)).even, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(l_1045.s82338ad9b12dd8df)).even, ((VECTOR(uint16_t, 4))(l_1046.xzyx)).wzwywxzy))).hi, ((VECTOR(uint16_t, 2))(l_1047.xx)).xyyx)))))))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1048.saa87)), (-7L), (-5L), (((l_1049 = 8UL) , l_1050) , l_1051), 1L, (-1L), (-1L), ((VECTOR(int32_t, 2))(0x2ADACBFCL)), l_1052, ((VECTOR(int32_t, 2))(6L)), 0x682C54C7L)).sae)), ((VECTOR(int32_t, 2))(0x4D836F78L)), l_1053, 0L, l_1054[3], 0x63AF8815L, 0x7E846427L, 0x17F1EAEEL, ((VECTOR(int32_t, 4))(0x787E1B31L)), 0x6E9EBF77L, 1L)).s4d))), 0x53338213L, 0x7AF91D6AL)))), ((VECTOR(int32_t, 4))(2L))))).w;
                }
                else
                { /* block id: 486 */
                    uint16_t l_1055 = 0x2067L;
                    VECTOR(int32_t, 8) l_1056 = (VECTOR(int32_t, 8))(0x3F8643F3L, (VECTOR(int32_t, 4))(0x3F8643F3L, (VECTOR(int32_t, 2))(0x3F8643F3L, 0x264EB898L), 0x264EB898L), 0x264EB898L, 0x3F8643F3L, 0x264EB898L);
                    VECTOR(int32_t, 4) l_1057 = (VECTOR(int32_t, 4))(0x07CCCBD3L, (VECTOR(int32_t, 2))(0x07CCCBD3L, (-4L)), (-4L));
                    uint8_t l_1058[5] = {0x46L,0x46L,0x46L,0x46L,0x46L};
                    VECTOR(int32_t, 4) l_1059 = (VECTOR(int32_t, 4))(0x7FA99DE7L, (VECTOR(int32_t, 2))(0x7FA99DE7L, 0x1570F899L), 0x1570F899L);
                    VECTOR(int32_t, 4) l_1060 = (VECTOR(int32_t, 4))(0x51B3330AL, (VECTOR(int32_t, 2))(0x51B3330AL, 0x1344BC8BL), 0x1344BC8BL);
                    VECTOR(int32_t, 4) l_1061 = (VECTOR(int32_t, 4))(0x52E81768L, (VECTOR(int32_t, 2))(0x52E81768L, 0x796ACB9CL), 0x796ACB9CL);
                    VECTOR(int32_t, 8) l_1062 = (VECTOR(int32_t, 8))(0x6C5CA518L, (VECTOR(int32_t, 4))(0x6C5CA518L, (VECTOR(int32_t, 2))(0x6C5CA518L, 0x700CFFA0L), 0x700CFFA0L), 0x700CFFA0L, 0x6C5CA518L, 0x700CFFA0L);
                    VECTOR(int32_t, 16) l_1063 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
                    VECTOR(int32_t, 4) l_1064 = (VECTOR(int32_t, 4))(0x353A7B4EL, (VECTOR(int32_t, 2))(0x353A7B4EL, (-5L)), (-5L));
                    VECTOR(int32_t, 4) l_1065 = (VECTOR(int32_t, 4))(0x2324412BL, (VECTOR(int32_t, 2))(0x2324412BL, 2L), 2L);
                    VECTOR(int32_t, 2) l_1066 = (VECTOR(int32_t, 2))(0x10E81423L, 0x4EFD1E42L);
                    int16_t l_1067 = 0x0F36L;
                    int16_t l_1068 = 0x28CEL;
                    VECTOR(int32_t, 4) l_1069 = (VECTOR(int32_t, 4))(0x0776DEFDL, (VECTOR(int32_t, 2))(0x0776DEFDL, 0x17BC3A82L), 0x17BC3A82L);
                    uint32_t l_1070 = 0x816B6D8EL;
                    int64_t l_1071[9][7][1] = {{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}},{{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL},{0x14D46A4CEB05FE4FL}}};
                    int32_t l_1072[7] = {0x1026F1E4L,0x1026F1E4L,0x1026F1E4L,0x1026F1E4L,0x1026F1E4L,0x1026F1E4L,0x1026F1E4L};
                    int64_t l_1073 = 0L;
                    int16_t l_1074 = (-1L);
                    int32_t l_1076 = 0x31E5B525L;
                    uint32_t l_1086 = 4294967295UL;
                    int64_t l_1087 = 0L;
                    uint64_t l_1088 = 1UL;
                    VECTOR(int32_t, 4) l_1089 = (VECTOR(int32_t, 4))(0x6AD50726L, (VECTOR(int32_t, 2))(0x6AD50726L, 0x7FA56656L), 0x7FA56656L);
                    int64_t l_1090 = 0x59588F3DA77D5723L;
                    int i, j, k;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1055, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_1056.s5716)).odd, ((VECTOR(int32_t, 2))(l_1057.wy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))((l_1056.s7 &= l_1058[4]), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(5L, (-7L), (-5L), (-4L), (-1L), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_1059.zxxx)).hi, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1060.zwyz)).lo)).even, 1L, 0x35E28FB9L, 0L)), 0x2040C4ECL, (-2L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1061.zxzwxyyx)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1062.s1720721162424670)).even)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), 0x152DA846L)).xyyx)).yxyyyxwz))).s55)).xxyxxxxyyxyyyyyx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1063.s96)))), 0x713C7332L, 0L)).lo, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1064.wz)).yyxxyyxxyxxyyxyx)).hi)).lo)).ywwyxzywzwxxzzxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1065.wz)), 0x10EA9F8CL, ((VECTOR(int32_t, 4))(l_1066.xxyx)), l_1067, 0x4148F75BL, (-9L), (l_1068 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x0820ECF2L, 0x0D16219EL, ((VECTOR(int32_t, 2))(l_1069.yy)), (l_1070 , (l_1004.x ^= (l_1071[4][4][0] , 0x6259A34DL))), 1L, 0x5713DAF3L, (-1L))), (-5L), ((VECTOR(int32_t, 2))(0L)), 1L, 0x1C0501AAL, l_1072[0], 0x380C6F2DL, 0x0575CCB1L)).sd6)).even), 0x3CE8C7BBL, ((VECTOR(int32_t, 2))(1L)), 0x0CCF4861L, 1L))))).s52))).xxyyyyxy, ((VECTOR(int32_t, 8))(0x0D4B8E89L)), ((VECTOR(int32_t, 8))(0x3BC8CAA8L))))).s5005050202114032))).sf06f)), 0x6C3DD43FL, ((VECTOR(int32_t, 2))(0x78F6568AL)), ((VECTOR(int32_t, 2))(3L)), 0x4A1C91A0L)).s37, ((VECTOR(int32_t, 2))(0x7DCCFCE2L)))))))), 3L)).s36, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x35E1802BL))))), (-10L))).lo, (int32_t)l_1073))).yyyxyxxy)).s76))), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(7L)), 0L)), 1L, l_1074, ((VECTOR(int32_t, 2))(0x47E859B7L)), 1L, ((VECTOR(int32_t, 2))((-1L))), 5L)).s8)
                    { /* block id: 489 */
                        l_1063.sa = 0x3CB19A7EL;
                    }
                    else
                    { /* block id: 491 */
                        int32_t l_1075 = (-1L);
                        l_1063.sf = l_1075;
                    }
                    if (l_1076)
                    { /* block id: 494 */
                        VECTOR(uint64_t, 4) l_1077 = (VECTOR(uint64_t, 4))(0x8D7F68CB9DD90129L, (VECTOR(uint64_t, 2))(0x8D7F68CB9DD90129L, 18446744073709551609UL), 18446744073709551609UL);
                        int32_t l_1079 = 0x3E51B71DL;
                        int32_t *l_1078 = &l_1079;
                        int32_t *l_1080 = &l_1079;
                        uint8_t l_1081 = 0UL;
                        int32_t l_1082 = (-7L);
                        struct S0 l_1083 = {9L,1UL,0x7D5B4A9AL};/* VOLATILE GLOBAL l_1083 */
                        struct S0 l_1084 = {0x6BL,1UL,0x801B2B10L};/* VOLATILE GLOBAL l_1084 */
                        int i;
                        l_1056.s2 ^= (((VECTOR(uint64_t, 2))(l_1077.ww)).even , 0x5541F8A0L);
                        l_1080 = (l_1078 = l_1078);
                        l_1084 = ((l_1055 = (l_1081 , l_1082)) , l_1083);
                    }
                    else
                    { /* block id: 500 */
                        int32_t l_1085 = 0x02C8A553L;
                        l_1065.z = l_1085;
                    }
                    l_1004.y = l_1086;
                    if ((l_1004.y ^= (l_1090 = ((l_1087 , 0x36337DBBL) , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1088, (-10L), 3L, 0L)).odd)).xxxxyyyx, ((VECTOR(int32_t, 8))(0x4C269816L, ((VECTOR(int32_t, 4))(l_1089.wyxw)), 7L, 1L, (-9L)))))).s2))))
                    { /* block id: 506 */
                        int32_t l_1092 = 0x5B2C928DL;
                        int32_t *l_1091 = &l_1092;
                        int32_t *l_1093 = (void*)0;
                        l_1093 = l_1091;
                    }
                    else
                    { /* block id: 508 */
                        int32_t l_1095 = (-5L);
                        int32_t *l_1094 = &l_1095;
                        int32_t *l_1096[10][1] = {{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095},{&l_1095}};
                        int32_t *l_1097 = &l_1095;
                        int32_t *l_1098 = &l_1095;
                        int32_t *l_1099 = &l_1095;
                        int32_t *l_1100 = &l_1095;
                        int i, j;
                        l_1096[0][0] = l_1094;
                        l_1098 = l_1097;
                        l_1100 = l_1099;
                    }
                }
            }
            l_1101 = (void*)0;
            l_1102 |= (-8L);
        }
        l_1114 = (l_1113 = (l_1112 = ((l_1104 |= l_1103[0][4]) , (l_1111.w ^= (l_1110 = ((((FAKE_DIVERGE(p_1190->local_2_offset, get_local_id(2), 10) , l_1105) , (l_1106[0][5][0] , l_1107)) , (l_1106[0][5][0] = l_1108)) , (l_1109[1][3] , 0L)))))));
        ++l_1115;
        for (l_1108 = 0; (l_1108 >= 8); l_1108 = safe_add_func_int16_t_s_s(l_1108, 8))
        { /* block id: 528 */
            uint64_t l_1120 = 18446744073709551611UL;
            int32_t l_1121 = 6L;
            uint32_t l_1122 = 4294967295UL;
            int8_t l_1123 = 0x03L;
            int32_t l_1124 = 0L;
            l_1124 &= (l_997 = (((l_1120 , l_1121) , l_1122) , l_1123));
        }
        unsigned int result = 0;
        result += l_997;
        int l_1103_i0, l_1103_i1;
        for (l_1103_i0 = 0; l_1103_i0 < 1; l_1103_i0++) {
            for (l_1103_i1 = 0; l_1103_i1 < 10; l_1103_i1++) {
                result += l_1103[l_1103_i0][l_1103_i1];
            }
        }
        result += l_1104;
        result += l_1105;
        int l_1106_i0, l_1106_i1, l_1106_i2;
        for (l_1106_i0 = 0; l_1106_i0 < 2; l_1106_i0++) {
            for (l_1106_i1 = 0; l_1106_i1 < 7; l_1106_i1++) {
                for (l_1106_i2 = 0; l_1106_i2 < 1; l_1106_i2++) {
                    result += l_1106[l_1106_i0][l_1106_i1][l_1106_i2];
                }
            }
        }
        result += l_1107;
        result += l_1108;
        int l_1109_i0, l_1109_i1;
        for (l_1109_i0 = 0; l_1109_i0 < 3; l_1109_i0++) {
            for (l_1109_i1 = 0; l_1109_i1 < 5; l_1109_i1++) {
                result += l_1109[l_1109_i0][l_1109_i1].f0;
                result += l_1109[l_1109_i0][l_1109_i1].f1;
                result += l_1109[l_1109_i0][l_1109_i1].f2;
            }
        }
        result += l_1110;
        result += l_1111.w;
        result += l_1111.z;
        result += l_1111.y;
        result += l_1111.x;
        result += l_1112;
        result += l_1113;
        result += l_1114;
        result += l_1115;
        atomic_add(&p_1190->l_special_values[20], result);
    }
    else
    { /* block id: 532 */
        (1 + 1);
    }
    if ((l_1125 = (**p_1190->g_404)))
    { /* block id: 536 */
        uint8_t *l_1128 = (void*)0;
        uint8_t **l_1127 = &l_1128;
        uint8_t ***l_1129 = &l_1127;
        struct S0 *l_1133 = &p_1190->g_1132;
        struct S0 **l_1134 = &l_1133;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1190->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u((p_1190->g_1126 == ((*l_1129) = l_1127)), 10))][(safe_mod_func_uint32_t_u_u(p_1190->tid, 5))]));
        if ((atomic_inc(&p_1190->g_atomic_input[64 * get_linear_group_id() + 1]) == 4))
        { /* block id: 542 */
            int32_t l_1130 = (-7L);
            uint8_t l_1131 = 0UL;
            l_1131 ^= l_1130;
            unsigned int result = 0;
            result += l_1130;
            result += l_1131;
            atomic_add(&p_1190->g_special_values[64 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 544 */
            (1 + 1);
        }
        (*l_1133) = p_1190->g_1132;
        (*l_1134) = l_1133;
    }
    else
    { /* block id: 549 */
        uint64_t l_1142 = 18446744073709551611UL;
        int32_t l_1152[6];
        int32_t l_1164 = 2L;
        VECTOR(int8_t, 16) l_1174 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x0FL), 0x0FL), 0x0FL, 0x6AL, 0x0FL, (VECTOR(int8_t, 2))(0x6AL, 0x0FL), (VECTOR(int8_t, 2))(0x6AL, 0x0FL), 0x6AL, 0x0FL, 0x6AL, 0x0FL);
        VECTOR(int8_t, 16) l_1175 = (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x25L), 0x25L), 0x25L, 0x4DL, 0x25L, (VECTOR(int8_t, 2))(0x4DL, 0x25L), (VECTOR(int8_t, 2))(0x4DL, 0x25L), 0x4DL, 0x25L, 0x4DL, 0x25L);
        VECTOR(int8_t, 16) l_1177 = (VECTOR(int8_t, 16))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, 1L), 1L), 1L, 0x7FL, 1L, (VECTOR(int8_t, 2))(0x7FL, 1L), (VECTOR(int8_t, 2))(0x7FL, 1L), 0x7FL, 1L, 0x7FL, 1L);
        int32_t **l_1181 = &p_1190->g_955[3][1];
        int i;
        for (i = 0; i < 6; i++)
            l_1152[i] = 0x62700F3DL;
        for (p_1190->g_264 = 0; (p_1190->g_264 > 57); p_1190->g_264++)
        { /* block id: 552 */
            uint8_t l_1140 = 254UL;
            uint8_t *l_1146 = (void*)0;
            uint8_t *l_1147 = (void*)0;
            uint8_t *l_1148 = (void*)0;
            uint8_t *l_1149[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int32_t *l_1153 = (void*)0;
            int32_t *l_1154[4][8] = {{&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1]},{&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1]},{&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1]},{&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1],&l_1152[5],&l_1152[5],&l_1152[1]}};
            uint16_t ***l_1157[9][10][2] = {{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}},{{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155},{&p_1190->g_1155,&p_1190->g_1155}}};
            int8_t *l_1159 = &p_1190->g_373[3];
            int64_t *l_1163[3][4][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            VECTOR(int8_t, 16) l_1172 = (VECTOR(int8_t, 16))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 0x4DL), 0x4DL), 0x4DL, 0x60L, 0x4DL, (VECTOR(int8_t, 2))(0x60L, 0x4DL), (VECTOR(int8_t, 2))(0x60L, 0x4DL), 0x60L, 0x4DL, 0x60L, 0x4DL);
            VECTOR(int8_t, 8) l_1178 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x2BL), 0x2BL), 0x2BL, 0x70L, 0x2BL);
            uint16_t ****l_1179 = &l_1157[3][6][0];
            int32_t **l_1180[8][6] = {{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_334,&p_1190->g_955[3][4]}};
            int i, j, k;
            l_1152[1] = ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((*p_1190->g_334), ((VECTOR(int32_t, 4))(p_1190->g_1137.s6646)), 0x53112805L, 0L, 0x5AF284CEL)).hi)).x , ((safe_sub_func_uint64_t_u_u((p_1190->g_1141[3][5][1] = l_1140), (~(l_1142 && (p_1190->g_546.y = (((VECTOR(uint32_t, 16))(p_1190->g_1143.xyyyxyxxxyyyxxxy)).sb , (p_1190->g_265[3][2][6] > ((p_26 == p_27) , (safe_lshift_func_uint8_t_u_u((((((l_1150 = l_1140) , (void*)0) != l_1151) <= 0x6D17209BL) != 65535UL), 5)))))))))) , 0x11L)) ^ p_27);
            l_1150 ^= ((*p_1190->g_334) = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-9L), 0x7CD364E2L)).yxyxxyxxxxyxxxyy))))).s4);
        }
        (*l_1181) = &l_1150;
        p_1190->g_1183[4][6] = (l_1160.s5 , p_1190->g_1182);
    }
    return l_1184;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_131 p_1190->g_134 p_1190->g_981 p_1190->g_404 p_1190->g_334 p_1190->g_14 p_1190->g_265 p_1190->g_109 p_1190->g_173 p_1190->g_264
 * writes: p_1190->g_135 p_1190->g_131 p_1190->g_14 p_1190->g_265 p_1190->g_264 p_1190->g_955
 */
int32_t ** func_30(int32_t  p_31, uint32_t  p_32, int64_t  p_33, int32_t ** p_34, int32_t ** p_35, struct S1 * p_1190)
{ /* block id: 438 */
    VECTOR(uint8_t, 16) l_968 = (VECTOR(uint8_t, 16))(0x16L, (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 0UL), 0UL), 0UL, 0x16L, 0UL, (VECTOR(uint8_t, 2))(0x16L, 0UL), (VECTOR(uint8_t, 2))(0x16L, 0UL), 0x16L, 0UL, 0x16L, 0UL);
    int32_t *l_979[1];
    VECTOR(uint32_t, 4) l_980 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
    int32_t l_985 = 5L;
    int32_t l_991[6][7][1] = {{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}},{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}},{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}},{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}},{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}},{{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L},{0x4A88FF24L}}};
    uint64_t l_992 = 6UL;
    uint64_t l_995 = 0xF70120BB91B8F294L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_979[i] = &p_1190->g_623[0][0][4];
    l_985 = ((*p_1190->g_334) = (safe_lshift_func_int8_t_s_u(p_32, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0xE4L, ((VECTOR(uint8_t, 16))(l_968.s530305f8c008b10c)).s7)), 0)) && GROUP_DIVERGE(0, 1)) , 0x95C8B57CL), (safe_div_func_int64_t_s_s((((((l_968.sc && (safe_mul_func_int16_t_s_s(p_1190->g_131, (safe_mod_func_uint64_t_u_u(((safe_div_func_int32_t_s_s(((((*p_1190->g_134) = (safe_rshift_func_int16_t_s_s(0x52CAL, 1))) <= ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(l_980.yyyzwxzywywywwzy)), ((VECTOR(uint32_t, 8))(p_1190->g_981.s6651d324)).s1310203147673311))).s8) && (2L <= (safe_div_func_int64_t_s_s((safe_unary_minus_func_int8_t_s((0xF6C64D25L < (**p_1190->g_404)))), p_31)))), p_32)) , p_33), 18446744073709551615UL))))) | p_31) & p_32) & p_31) < p_31), p_1190->g_109[4][7])))), 1)), p_1190->g_173.se)))));
    for (p_1190->g_264 = 17; (p_1190->g_264 < 28); p_1190->g_264 = safe_add_func_uint32_t_u_u(p_1190->g_264, 1))
    { /* block id: 444 */
        uint32_t l_988 = 1UL;
        int32_t *l_989 = &p_1190->g_623[0][0][4];
        int32_t **l_990 = &p_1190->g_955[1][0];
        l_988 |= (**p_1190->g_404);
        (*l_990) = l_989;
    }
    ++l_992;
    l_995 |= (*p_1190->g_334);
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_476 p_1190->g_131 p_1190->g_45 p_1190->g_492 p_1190->g_87 p_1190->g_44 p_1190->g_333 p_1190->g_532 p_1190->g_430.f0 p_1190->g_264 p_1190->g_546 p_1190->g_272 p_1190->g_2 p_1190->g_290 p_1190->g_109 p_1190->g_344 p_1190->g_566 p_1190->g_291.f0 p_1190->g_289 p_1190->g_334 p_1190->g_14 p_1190->g_265 p_1190->g_275 p_1190->g_602 p_1190->g_604 p_1190->g_173 p_1190->g_373 p_1190->g_178 p_1190->g_439 p_1190->g_57 p_1190->g_397.f0 p_1190->g_648 p_1190->g_107 p_1190->g_769 p_1190->g_773 p_1190->g_776 p_1190->g_778 p_1190->g_786 p_1190->g_291 p_1190->g_397.f2 p_1190->g_813 p_1190->g_816 p_1190->g_56 p_1190->g_193 p_1190->g_832 p_1190->g_843 p_1190->g_88 p_1190->g_120 p_1190->g_135 p_1190->g_172 p_1190->g_902 p_1190->g_904 p_1190->g_398 p_1190->g_397
 * writes: p_1190->g_476 p_1190->g_131 p_1190->g_14 p_1190->g_45 p_1190->g_334 p_1190->g_289 p_1190->g_291.f0 p_1190->g_265 p_1190->g_492 p_1190->g_178 p_1190->g_566 p_1190->g_290 p_1190->g_291 p_1190->g_546 p_1190->g_44 p_1190->g_120 p_1190->g_786 p_1190->g_135 p_1190->g_107 p_1190->g_904 p_1190->g_344
 */
int16_t  func_39(int32_t ** p_40, int32_t * p_41, int32_t * p_42, int32_t ** p_43, struct S1 * p_1190)
{ /* block id: 209 */
    uint64_t *l_475 = &p_1190->g_476;
    VECTOR(uint32_t, 4) l_482 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA2E19B98L), 0xA2E19B98L);
    uint16_t *l_484 = (void*)0;
    uint16_t **l_483 = &l_484;
    int64_t l_485 = 0x734663D782C50739L;
    uint32_t *l_488 = &p_1190->g_131;
    uint32_t l_491 = 0x529979E9L;
    VECTOR(uint64_t, 2) l_496 = (VECTOR(uint64_t, 2))(0x918A401E36F43756L, 7UL);
    VECTOR(uint16_t, 8) l_544 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    VECTOR(uint64_t, 2) l_558 = (VECTOR(uint64_t, 2))(0x3F057F657EABF47AL, 0UL);
    int32_t l_563[2];
    VECTOR(int16_t, 4) l_564 = (VECTOR(int16_t, 4))(0x0B3BL, (VECTOR(int16_t, 2))(0x0B3BL, (-1L)), (-1L));
    struct S0 *l_588 = &p_1190->g_291;
    uint32_t l_595 = 4294967293UL;
    VECTOR(uint8_t, 8) l_603 = (VECTOR(uint8_t, 8))(0x22L, (VECTOR(uint8_t, 4))(0x22L, (VECTOR(uint8_t, 2))(0x22L, 251UL), 251UL), 251UL, 0x22L, 251UL);
    int8_t l_626 = 0x37L;
    int32_t l_663 = 0x52AD1525L;
    int32_t l_666 = 0x1478362BL;
    uint64_t l_668[4][4] = {{18446744073709551610UL,18446744073709551610UL,7UL,0x9A5C93553EE73097L},{18446744073709551610UL,18446744073709551610UL,7UL,0x9A5C93553EE73097L},{18446744073709551610UL,18446744073709551610UL,7UL,0x9A5C93553EE73097L},{18446744073709551610UL,18446744073709551610UL,7UL,0x9A5C93553EE73097L}};
    uint16_t l_764 = 9UL;
    VECTOR(int8_t, 2) l_775 = (VECTOR(int8_t, 2))((-1L), (-2L));
    int16_t l_789 = 0x6669L;
    int32_t *l_886[2];
    VECTOR(uint64_t, 2) l_895 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x389BFA79AEA5DECEL);
    int32_t l_918 = (-9L);
    int32_t l_919 = 0x6A61F63FL;
    uint64_t l_920 = 0x7CAC3795CE8B5156L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_563[i] = 0x0D10A7D2L;
    for (i = 0; i < 2; i++)
        l_886[i] = &p_1190->g_265[3][2][6];
    if ((safe_div_func_int16_t_s_s((((*l_475)--) , (safe_unary_minus_func_uint64_t_u((safe_mod_func_int32_t_s_s(((*p_1190->g_45) = ((((VECTOR(uint32_t, 8))(l_482.xyywywwx)).s1 <= (l_483 != &l_484)) | (((*l_475)++) , (--(*l_488))))), l_491))))), 65528UL)))
    { /* block id: 214 */
        int64_t l_495 = 0L;
        int64_t *l_500 = &l_495;
        int32_t l_502 = 8L;
        VECTOR(uint16_t, 8) l_545 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65526UL), 65526UL), 65526UL, 1UL, 65526UL);
        VECTOR(uint16_t, 16) l_547 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 5UL), 5UL), 5UL, 6UL, 5UL, (VECTOR(uint16_t, 2))(6UL, 5UL), (VECTOR(uint16_t, 2))(6UL, 5UL), 6UL, 5UL, 6UL, 5UL);
        uint64_t l_565 = 18446744073709551608UL;
        VECTOR(uint16_t, 4) l_601 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x9DBBL), 0x9DBBL);
        VECTOR(uint8_t, 2) l_605 = (VECTOR(uint8_t, 2))(0xA5L, 1UL);
        int32_t l_615 = 0x43C65C33L;
        int32_t l_619 = (-7L);
        int32_t l_620 = 0x2AC284D0L;
        int32_t l_621 = 1L;
        int32_t l_622 = (-1L);
        int32_t l_624 = 0x18EB0C08L;
        int32_t l_625 = 0x22C2BC04L;
        int32_t l_627 = (-1L);
        int32_t l_628[10] = {(-7L),(-9L),0x527EEB37L,(-9L),(-7L),(-7L),(-9L),0x527EEB37L,(-9L),(-7L)};
        int32_t l_664 = 0L;
        int32_t l_667 = 0L;
        int8_t *l_770[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int8_t, 8) l_774 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
        VECTOR(int8_t, 4) l_777 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L);
        uint32_t *l_781 = &p_1190->g_290[3][5][4];
        uint16_t *l_790 = &p_1190->g_289;
        int16_t *l_848 = &p_1190->g_107;
        uint64_t l_873[6][7] = {{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL},{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL},{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL},{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL},{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL},{0x03E3421C067E94ECL,1UL,6UL,0x8B3BCFBBE9984D44L,1UL,0x8B3BCFBBE9984D44L,6UL}};
        int64_t l_875 = 1L;
        VECTOR(int32_t, 8) l_887 = (VECTOR(int32_t, 8))(0x4B677EDEL, (VECTOR(int32_t, 4))(0x4B677EDEL, (VECTOR(int32_t, 2))(0x4B677EDEL, (-2L)), (-2L)), (-2L), 0x4B677EDEL, (-2L));
        int i, j;
        if ((p_1190->g_492 != (safe_mod_func_int16_t_s_s(((!(((l_495 || ((((VECTOR(uint64_t, 4))(l_496.xyxx)).y || (-1L)) && (safe_unary_minus_func_int64_t_s((!((safe_add_func_int16_t_s_s((((*l_500) = l_482.w) | (safe_unary_minus_func_uint32_t_u(l_502))), ((void*)0 == &l_485))) >= l_485)))))) >= l_502) == l_502)) < p_1190->g_87.s8), 0x270AL))))
        { /* block id: 216 */
            uint16_t l_535 = 0UL;
            uint16_t *l_561 = &p_1190->g_289;
            int16_t l_562 = 0x0C37L;
            VECTOR(int32_t, 4) l_617 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L);
            int i;
            for (l_485 = 0; (l_485 > 11); l_485 = safe_add_func_int64_t_s_s(l_485, 1))
            { /* block id: 219 */
                int32_t **l_505[5][3][8] = {{{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334}},{{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334}},{{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334}},{{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334}},{{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334},{&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334,&p_1190->g_334}}};
                int i, j, k;
                (*p_1190->g_333) = ((*p_1190->g_44) = l_488);
                if ((**p_43))
                    break;
                if ((atomic_inc(&p_1190->l_atomic_input[3]) == 2))
                { /* block id: 224 */
                    struct S0 l_506 = {0L,0UL,7UL};/* VOLATILE GLOBAL l_506 */
                    struct S0 l_507 = {0x5DL,0xC443140FC30DF4A3L,0x7846B3E0L};/* VOLATILE GLOBAL l_507 */
                    int32_t l_508 = 0x07BA07ABL;
                    int8_t l_515 = 0L;
                    int32_t l_516 = 0x735167CDL;
                    VECTOR(int8_t, 8) l_517 = (VECTOR(int8_t, 8))(0x75L, (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, 9L), 9L), 9L, 0x75L, 9L);
                    int16_t l_518 = 0L;
                    uint16_t l_519 = 0xCB80L;
                    int i;
                    l_507 = l_506;
                    if (l_508)
                    { /* block id: 226 */
                        uint16_t l_509[3][2] = {{0x956BL,0x956BL},{0x956BL,0x956BL},{0x956BL,0x956BL}};
                        VECTOR(int32_t, 8) l_510 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                        VECTOR(int16_t, 2) l_511 = (VECTOR(int16_t, 2))(9L, 0x2FEFL);
                        VECTOR(int16_t, 2) l_512 = (VECTOR(int16_t, 2))(0x7CC7L, (-3L));
                        VECTOR(int32_t, 16) l_513 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x2ABA9780L), 0x2ABA9780L), 0x2ABA9780L, (-9L), 0x2ABA9780L, (VECTOR(int32_t, 2))((-9L), 0x2ABA9780L), (VECTOR(int32_t, 2))((-9L), 0x2ABA9780L), (-9L), 0x2ABA9780L, (-9L), 0x2ABA9780L);
                        int i, j;
                        l_508 ^= l_509[0][0];
                        l_508 = (((VECTOR(int32_t, 4))(l_510.s7475)).x , (((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(l_511.xy)).xxxy, ((VECTOR(int16_t, 4))(l_512.yxxx))))).z , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 16))(l_513.s310708985fce6c5a)).s8, 0x74BC575AL, (-9L))))).z));
                    }
                    else
                    { /* block id: 229 */
                        int16_t l_514[9][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
                        int i, j;
                        l_508 ^= l_514[0][1];
                    }
                    --l_519;
                    for (l_506.f0 = 0; (l_506.f0 >= 28); l_506.f0 = safe_add_func_int16_t_s_s(l_506.f0, 8))
                    { /* block id: 235 */
                        int64_t l_524 = (-5L);
                        int32_t l_526 = 7L;
                        int32_t *l_525 = &l_526;
                        int64_t **l_527 = (void*)0;
                        int64_t *l_529 = (void*)0;
                        int64_t **l_528[9][9] = {{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529},{&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529}};
                        int i, j;
                        l_525 = (l_524 , (void*)0);
                        l_528[5][6] = (l_527 = (void*)0);
                    }
                    unsigned int result = 0;
                    result += l_506.f0;
                    result += l_506.f1;
                    result += l_506.f2;
                    result += l_507.f0;
                    result += l_507.f1;
                    result += l_507.f2;
                    result += l_508;
                    result += l_515;
                    result += l_516;
                    result += l_517.s7;
                    result += l_517.s6;
                    result += l_517.s5;
                    result += l_517.s4;
                    result += l_517.s3;
                    result += l_517.s2;
                    result += l_517.s1;
                    result += l_517.s0;
                    result += l_518;
                    result += l_519;
                    atomic_add(&p_1190->l_special_values[3], result);
                }
                else
                { /* block id: 240 */
                    (1 + 1);
                }
            }
            if ((safe_sub_func_int16_t_s_s((((((VECTOR(uint16_t, 16))(p_1190->g_532.xyzxyxyxxxxzxzzy)).se ^ 65530UL) ^ (((((1UL & (((l_535 , FAKE_DIVERGE(p_1190->local_2_offset, get_local_id(2), 10)) , (p_1190->g_430.f0 < ((VECTOR(int64_t, 16))((255UL | ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((((VECTOR(uint64_t, 4))(0xFCBE6D0F294B9B26L, p_1190->g_476, 0UL, 18446744073709551615UL)).x && (p_1190->g_264 > (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(l_544.s3523530176214765)).s4231, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(l_545.s1063306274017077)).sa6, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1190->g_546.yx)))))).xxyxxyxy)).s03, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(0x269BL, 3UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_547.sf56bcb82)).even)).x, (((safe_lshift_func_int16_t_s_s((FAKE_DIVERGE(p_1190->global_0_offset, get_global_id(0), 10) & (((((((*l_561) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_545.s1, (safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_558.yxxxyxxy)).s6, (safe_mod_func_uint32_t_u_u(l_535, p_1190->g_272.y)))) && p_1190->g_2) ^ 0x3D76L) , 0x0559L) != FAKE_DIVERGE(p_1190->local_1_offset, get_local_id(1), 10)), l_558.x)))), l_485))) != l_562) <= l_502) , &l_562) != (void*)0) , p_1190->g_290[0][4][0])), 6)) ^ 0x270ECB92L) || 0xAD99L), 65533UL, 65535UL, 0xBDF7L, ((VECTOR(uint16_t, 4))(0x94F0L)), p_1190->g_109[0][7], 1UL, l_482.x, 0x8D20L, 0x0BDEL)).s3c, ((VECTOR(uint16_t, 2))(0xE7AEL)), ((VECTOR(uint16_t, 2))(0xBF6BL))))).yyyxxxxx)).s02))), ((VECTOR(uint16_t, 2))(8UL))))), 65535UL, 0x9F56L)), ((VECTOR(uint16_t, 4))(65531UL))))), 0x8EEFL, 1UL, l_563[1], 0xD659L, 1UL, p_1190->g_344.y, ((VECTOR(uint16_t, 2))(0xFE90L)), 65535UL, 0x99ECL, 1UL, 1UL)).odd)))).s6, l_564.w)) < 0x0583FB75L) ^ l_535))) <= l_547.sc) , 0x75L), 4)) <= p_1190->g_492), l_565)), l_491)) | p_1190->g_87.sf), p_1190->g_344.x, 0x7BL, 0x6BL)).xxwzzxwy)).s3), l_562, 0x4936BABF83CB39AEL, 0x0F5AA87ACAB73D9CL, 0x7C7F43BA47439D89L, ((VECTOR(int64_t, 8))(0x03DF082DD75F2984L)), (-6L), (-6L), (-1L))).sd)) == 0xAEL)) , (void*)0) == p_1190->g_566) & l_547.sc) > 0x4EL)) >= 0xE9L), l_547.sd)))
            { /* block id: 245 */
                int16_t l_587 = 0x2509L;
                if ((atomic_inc(&p_1190->g_atomic_input[64 * get_linear_group_id() + 26]) == 5))
                { /* block id: 247 */
                    int32_t l_568 = (-1L);
                    uint32_t l_575 = 0xF3EDF896L;
                    int32_t l_576 = 0x6F0B5535L;
                    uint16_t l_577 = 0x4E95L;
                    int64_t l_578 = 0x7536D5171C7C812CL;
                    uint64_t l_579 = 3UL;
                    VECTOR(int32_t, 8) l_580 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                    uint16_t l_581 = 0x59EEL;
                    VECTOR(int32_t, 8) l_582 = (VECTOR(int32_t, 8))(0x24B581F7L, (VECTOR(int32_t, 4))(0x24B581F7L, (VECTOR(int32_t, 2))(0x24B581F7L, (-1L)), (-1L)), (-1L), 0x24B581F7L, (-1L));
                    int8_t l_583 = 1L;
                    int32_t *l_584 = (void*)0;
                    int i;
                    l_568 = 0x68B45CC1L;
                    for (l_568 = (-6); (l_568 < (-11)); l_568 = safe_sub_func_int16_t_s_s(l_568, 1))
                    { /* block id: 251 */
                        uint8_t l_571[10][2][9] = {{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}},{{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L},{255UL,0xECL,0xF2L,255UL,0x6CL,0UL,7UL,0xECL,0x74L}}};
                        int16_t l_572 = (-5L);
                        int8_t l_573 = 0x68L;
                        uint64_t l_574 = 18446744073709551615UL;
                        int i, j, k;
                        l_574 ^= (l_573 = (l_572 = ((l_571[6][1][3] = (-1L)) , 0L)));
                    }
                    l_584 = ((l_583 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-3L), ((l_577 = (l_576 |= l_575)) , l_578), l_579, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_580.s4423)))), (-2L))), 6L, l_581, ((VECTOR(int32_t, 4))(l_582.s0773)), 0L, (-4L))).s7) , (void*)0);
                    unsigned int result = 0;
                    result += l_568;
                    result += l_575;
                    result += l_576;
                    result += l_577;
                    result += l_578;
                    result += l_579;
                    result += l_580.s7;
                    result += l_580.s6;
                    result += l_580.s5;
                    result += l_580.s4;
                    result += l_580.s3;
                    result += l_580.s2;
                    result += l_580.s1;
                    result += l_580.s0;
                    result += l_581;
                    result += l_582.s7;
                    result += l_582.s6;
                    result += l_582.s5;
                    result += l_582.s4;
                    result += l_582.s3;
                    result += l_582.s2;
                    result += l_582.s1;
                    result += l_582.s0;
                    result += l_583;
                    atomic_add(&p_1190->g_special_values[64 * get_linear_group_id() + 26], result);
                }
                else
                { /* block id: 261 */
                    (1 + 1);
                }
                for (p_1190->g_291.f0 = 0; (p_1190->g_291.f0 >= 26); p_1190->g_291.f0 = safe_add_func_uint8_t_u_u(p_1190->g_291.f0, 2))
                { /* block id: 266 */
                    (**p_40) = ((l_587 , ((&p_1190->g_397 == l_588) & (++(*l_561)))) && 0x9EL);
                    (*p_1190->g_334) &= ((safe_mul_func_uint16_t_u_u(p_1190->g_546.x, 0UL)) != l_587);
                }
                for (p_1190->g_492 = 17; (p_1190->g_492 > 2); p_1190->g_492 = safe_sub_func_int8_t_s_s(p_1190->g_492, 3))
                { /* block id: 273 */
                    return l_587;
                }
            }
            else
            { /* block id: 276 */
                int16_t l_600 = 4L;
                uint64_t *l_606 = &l_565;
                int32_t l_611 = (-1L);
                int32_t l_612 = (-1L);
                int32_t l_613 = (-9L);
                int32_t l_614[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int8_t l_616[4][5] = {{0x17L,0x17L,0x17L,0x17L,0x17L},{0x17L,0x17L,0x17L,0x17L,0x17L},{0x17L,0x17L,0x17L,0x17L,0x17L},{0x17L,0x17L,0x17L,0x17L,0x17L}};
                int i, j;
                (*p_43) = func_46((*p_43), (p_1190->g_275.x <= (l_595 , ((safe_add_func_uint8_t_u_u((((*l_500) ^= (0x1FB8AC94DDD7F59DL & ((*l_606) = (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x6BL, 0xEBL)).lo, (l_600 , ((!(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(l_601.yzwzwxyz)).even))).hi)), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(p_1190->g_602.wy)), 1UL))))))).odd, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_603.s4273)).yxwywzyx)).s3226727036337461)), ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(0xA2L, 8UL, 8UL, l_545.s3, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1190->g_604.s02466030)).even)), ((VECTOR(uint8_t, 2))(l_605.xx)), ((!p_1190->g_173.s2) != l_547.s0), 0xF8L, l_600, 0x37L, 7UL, 0xFEL)).hi, ((VECTOR(uint8_t, 8))(1UL))))))).s7606400536760135, ((VECTOR(uint8_t, 16))(255UL)))))))).s38))).yxyy)).even, ((VECTOR(uint8_t, 2))(0x98L)))))))), ((VECTOR(uint16_t, 2))(3UL))))), 65533UL, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(65535UL)), 0x2550L)).saa)).xxyx)).x , p_1190->g_492)) , p_1190->g_109[4][2]))))))) != l_600), 0x95L)) , (*p_41)))), p_1190);
                for (p_1190->g_178 = 0; (p_1190->g_178 != 31); p_1190->g_178 = safe_add_func_uint16_t_u_u(p_1190->g_178, 1))
                { /* block id: 282 */
                    int32_t *l_609 = &p_1190->g_14;
                    int32_t *l_610[9];
                    uint32_t l_629 = 0UL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_610[i] = &p_1190->g_135;
                    (*p_40) = (*p_40);
                    l_629--;
                    l_625 |= (safe_sub_func_uint8_t_u_u((8L & (0UL != (((**p_1190->g_439) != (l_502 <= (*p_1190->g_45))) < l_600))), l_617.w));
                }
                (*p_43) = func_46(&l_563[0], p_1190->g_272.w, p_1190);
            }
            (*p_41) &= 0x0260B8DAL;
            return p_1190->g_57.s6;
        }
        else
        { /* block id: 291 */
            int32_t l_638 = 1L;
            uint64_t *l_647 = &l_565;
            uint32_t l_657 = 4294967295UL;
            int64_t **l_658 = (void*)0;
            uint8_t *l_659 = (void*)0;
            int32_t l_660 = 0x137BF683L;
            int32_t *l_661 = (void*)0;
            int32_t *l_662[4][1][9] = {{{&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5]}},{{&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5]}},{{&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5]}},{{&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5],&l_628[5]}}};
            int16_t l_665 = 0x2F3FL;
            int i, j, k;
            l_563[1] = ((*p_1190->g_45) = ((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 2))(2L, (-1L))).odd)) != ((p_1190->g_397.f0 || (!(l_638 ^= (safe_unary_minus_func_int64_t_s(0x2D9AAC3772E24B69L))))) | (~((((*l_500) &= (safe_mul_func_uint8_t_u_u((l_660 = (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((p_1190->g_566 = &l_500) != (((safe_add_func_int8_t_s_s((((((*l_647) = (p_1190->g_344.x || ((*l_488) = p_1190->g_604.s6))) | ((VECTOR(int64_t, 16))(p_1190->g_648.s5504413107052553)).s2) ^ ((VECTOR(uint16_t, 4))(9UL, 65535UL, 0x80F9L, 1UL)).z) <= (!(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(p_1190->g_532.w, ((((255UL >= (safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), 12))) | (p_1190->g_178 <= p_1190->g_604.s1)) , 4294967295UL) || (*p_41)))), 15)), 249UL)) < l_657) , p_1190->g_107))), l_657)) , (*p_41)) , l_658)), p_1190->g_604.s1)), l_657))), GROUP_DIVERGE(0, 1)))) == l_657) >= 4UL)))));
            --l_668[2][0];
            if ((atomic_inc(&p_1190->l_atomic_input[0]) == 4))
            { /* block id: 302 */
                int32_t *l_671 = (void*)0;
                VECTOR(int32_t, 2) l_672 = (VECTOR(int32_t, 2))((-1L), 0x2D790AD0L);
                int32_t l_737 = 0x648A4CD4L;
                int i;
                l_671 = (void*)0;
                if (((VECTOR(int32_t, 2))(l_672.xy)).lo)
                { /* block id: 304 */
                    int8_t l_673 = (-3L);
                    VECTOR(int32_t, 4) l_674 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L);
                    VECTOR(int32_t, 16) l_675 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 5L), 5L), 5L, 5L, 5L, (VECTOR(int32_t, 2))(5L, 5L), (VECTOR(int32_t, 2))(5L, 5L), 5L, 5L, 5L, 5L);
                    VECTOR(int32_t, 4) l_676 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 4L), 4L);
                    int8_t l_677 = 0x75L;
                    VECTOR(int32_t, 2) l_678 = (VECTOR(int32_t, 2))(0x0991FFF1L, (-8L));
                    VECTOR(int32_t, 8) l_679 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 5L), 5L), 5L, (-6L), 5L);
                    VECTOR(int32_t, 16) l_680 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x21089561L), 0x21089561L), 0x21089561L, 1L, 0x21089561L, (VECTOR(int32_t, 2))(1L, 0x21089561L), (VECTOR(int32_t, 2))(1L, 0x21089561L), 1L, 0x21089561L, 1L, 0x21089561L);
                    VECTOR(int32_t, 2) l_681 = (VECTOR(int32_t, 2))((-8L), 1L);
                    VECTOR(int32_t, 4) l_682 = (VECTOR(int32_t, 4))(0x308B9F2DL, (VECTOR(int32_t, 2))(0x308B9F2DL, (-1L)), (-1L));
                    VECTOR(int32_t, 4) l_683 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L);
                    VECTOR(int32_t, 2) l_684 = (VECTOR(int32_t, 2))((-1L), 0L);
                    VECTOR(int32_t, 4) l_685 = (VECTOR(int32_t, 4))(0x64BAD157L, (VECTOR(int32_t, 2))(0x64BAD157L, 0x0FE19801L), 0x0FE19801L);
                    VECTOR(int32_t, 16) l_686 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x639049AAL), 0x639049AAL), 0x639049AAL, 4L, 0x639049AAL, (VECTOR(int32_t, 2))(4L, 0x639049AAL), (VECTOR(int32_t, 2))(4L, 0x639049AAL), 4L, 0x639049AAL, 4L, 0x639049AAL);
                    uint8_t l_687 = 0xDDL;
                    VECTOR(int32_t, 2) l_688 = (VECTOR(int32_t, 2))(0x414BD06EL, (-10L));
                    VECTOR(int32_t, 2) l_689 = (VECTOR(int32_t, 2))(2L, 0x5FE3B157L);
                    uint16_t l_690 = 0UL;
                    int32_t l_691 = 0x0DBB2FC4L;
                    VECTOR(uint16_t, 4) l_692 = (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 1UL), 1UL);
                    uint32_t l_693 = 0UL;
                    uint8_t l_694 = 255UL;
                    int32_t l_695 = 0L;
                    uint16_t l_696 = 4UL;
                    uint64_t l_697 = 0x420C54386A91FEE9L;
                    int8_t l_698 = 1L;
                    int i;
                    l_697 |= (l_673 , ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(l_674.xyxz)), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_675.sb7137f631d0bb61f)).s4b41, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x1944A7B7L, (-1L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(0x1B1AB5A0L, 0x45239B18L)).yyyyyyyxxyyyyyyy, ((VECTOR(int32_t, 2))(0x60FC33B5L, 0x6EDA30CDL)).xxxxyyyyyxyxxxyy, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_676.wzyxxxzy)).s53)).xxxxyxxxxxyyxxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_677, 0x3911DA1CL, 0x6D360CC0L, 0x6A07FCEEL)).yxzzzyzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(6L, 1L)).xxyyyyxyyyyyxxxy)).odd))).hi)).odd)).yxyxxxyxyyxxxxxx)).s315d, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_678.xyxyyxxx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_679.s6335035421472762)).s62d6)).wxzxxxwx))))).odd))).odd)).xyxyxxxyxxyxyxxx)))))).s04bf)).xyzxxzzwxwzzyxyz, ((VECTOR(int32_t, 8))(l_680.sc781de80)).s1311171736140735))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x73420377L, 6L)).yxyy)).ywwzywxywyyxwwxz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, (-9L))), (-9L), 0L)).zwyzzxzx)).s0457427325336054))))).s1a, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_681.xyyyxyyxyxxyxxyx)).even)).lo)).z, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_682.yzyzxxwzzwxxwxwz)).s9b, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_683.yy)))).yxyy, ((VECTOR(int32_t, 4))(l_684.xxyy))))))).lo))), 0x11D7142FL)).hi))).xxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0L, 0x3D15BA7DL)).xyxyyyyyxyxxyxxy, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_685.zxwwzzwwwywxwxxy)).s57, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(9L, 0x27FAD95CL)).xxyxyxyyxyxyyyyy)).odd, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_686.sba70)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-5L), 0x5A47A98BL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_687, ((VECTOR(int32_t, 4))(l_688.yyxx)).y, 0x51D3D49EL, 0x5A9A320FL)).y, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x758DDDF6L, 0x6F93DC65L)).yyyyyxxxyxyxxyyy)).sdf, ((VECTOR(int32_t, 16))(l_689.yxyxyxxxxxxyyxyx)).sca, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x2AD6928FL, 1L, l_690, 6L, 0x489C72B5L, (-1L), l_691, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(0x09FEL, (-5L))).yyxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_692.zwxw))))))), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))((-3L), 3L)).xyyyxxxxxyxxyyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_672.y = (-5L)), l_693, (-7L), l_694, l_695, l_696, (-6L), ((VECTOR(int32_t, 2))(0x4A3B9A4FL)), ((VECTOR(int32_t, 2))(0x65EAC018L)), 0x1EF2D46EL, 5L, ((VECTOR(int32_t, 2))(0x713D5912L)), 0x791ED3FCL)).even)).s5673654662522420, ((VECTOR(int32_t, 16))((-8L)))))).s30)).yyxy)))).sc9)).yyxy, (int32_t)1L, (int32_t)1L))).odd))), 0x2CFBEF20L)), 0x4CFC22B9L, (-5L))))).s05))).xxxyxyxy, ((VECTOR(int32_t, 8))(0L))))).odd, ((VECTOR(int32_t, 4))((-10L)))))).hi, ((VECTOR(int32_t, 2))((-5L))))))))).xxxyxyyxxyxyxxxy))).s6a71)), ((VECTOR(int32_t, 4))(0x79ADC387L))))))).ywzwzzwy, ((VECTOR(int32_t, 8))(1L))))))).s3131702427046542)).s05))).yxyyyxxyxxxyyxxy, ((VECTOR(int32_t, 16))((-1L)))))).odd, ((VECTOR(int32_t, 8))(0x413100E1L)), ((VECTOR(int32_t, 8))(1L))))).odd, ((VECTOR(int32_t, 4))(0x4AFA2D19L)))))))).lo, ((VECTOR(int32_t, 2))(0x42DCE2ECL))))).odd);
                    if (l_698)
                    { /* block id: 307 */
                        int32_t l_700 = 0x4B4A598DL;
                        int32_t *l_699[7] = {&l_700,&l_700,&l_700,&l_700,&l_700,&l_700,&l_700};
                        uint8_t l_701 = 0x70L;
                        VECTOR(int32_t, 16) l_702 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x1A4A79EEL), 0x1A4A79EEL), 0x1A4A79EEL, 3L, 0x1A4A79EEL, (VECTOR(int32_t, 2))(3L, 0x1A4A79EEL), (VECTOR(int32_t, 2))(3L, 0x1A4A79EEL), 3L, 0x1A4A79EEL, 3L, 0x1A4A79EEL);
                        int32_t *l_703 = &l_700;
                        int i;
                        l_671 = l_699[3];
                        (*l_671) = l_701;
                        l_672.y = ((*l_671) &= ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(1L, 3L)).xxyxxxxy, ((VECTOR(int32_t, 8))(l_702.s011a7cac))))).s7);
                        l_671 = l_703;
                    }
                    else
                    { /* block id: 313 */
                        struct S0 l_704 = {0x20L,0x2289DEC2C9A151F3L,0x1E6E49D6L};/* VOLATILE GLOBAL l_704 */
                        struct S0 l_705 = {0L,0x8A983C4C88C07820L,0UL};/* VOLATILE GLOBAL l_705 */
                        int32_t l_706 = 3L;
                        int16_t l_707[7];
                        uint8_t l_710 = 247UL;
                        uint8_t *l_709 = &l_710;
                        uint8_t **l_708 = &l_709;
                        uint8_t **l_711[8] = {&l_709,&l_709,&l_709,&l_709,&l_709,&l_709,&l_709,&l_709};
                        uint8_t **l_712 = (void*)0;
                        int32_t l_713 = 0L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_707[i] = (-6L);
                        l_705 = l_704;
                        l_708 = (l_712 = (l_706 , (l_707[6] , (l_711[4] = l_708))));
                        l_676.w ^= l_713;
                    }
                }
                else
                { /* block id: 320 */
                    int64_t l_714 = (-7L);
                    uint8_t l_715[8][7][4] = {{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}},{{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L},{0x37L,0x21L,0x37L,0x55L}}};
                    int32_t l_718 = 0x764344FAL;
                    uint16_t l_719 = 0x0DC5L;
                    int16_t l_722 = (-5L);
                    int32_t l_723 = 1L;
                    int32_t l_724 = (-3L);
                    VECTOR(uint64_t, 16) l_725 = (VECTOR(uint64_t, 16))(0x871251BFAD1D199CL, (VECTOR(uint64_t, 4))(0x871251BFAD1D199CL, (VECTOR(uint64_t, 2))(0x871251BFAD1D199CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x871251BFAD1D199CL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x871251BFAD1D199CL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x871251BFAD1D199CL, 18446744073709551615UL), 0x871251BFAD1D199CL, 18446744073709551615UL, 0x871251BFAD1D199CL, 18446744073709551615UL);
                    int i, j, k;
                    l_715[4][6][0]++;
                    l_719--;
                    --l_725.s4;
                    for (l_725.s1 = 0; (l_725.s1 > 9); l_725.s1++)
                    { /* block id: 326 */
                        uint16_t l_730 = 0x76BEL;
                        int16_t l_733 = 0x302FL;
                        int8_t l_734 = 0L;
                        int32_t l_736 = 0x3BE1D88DL;
                        int32_t *l_735[2][2] = {{&l_736,&l_736},{&l_736,&l_736}};
                        int i, j;
                        l_730--;
                        l_734 = ((VECTOR(int32_t, 4))((l_672.x = l_733), 0L, (-1L), (-1L))).w;
                        l_671 = l_735[0][0];
                    }
                }
                if ((l_737 |= 0x0BCE2CF5L))
                { /* block id: 334 */
                    int32_t l_739 = (-2L);
                    int32_t *l_738 = &l_739;
                    VECTOR(int32_t, 2) l_740 = (VECTOR(int32_t, 2))(0x1287D668L, (-1L));
                    int32_t *l_751 = &l_739;
                    int32_t *l_752[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_752[i] = (void*)0;
                    l_671 = (void*)0;
                    l_738 = l_738;
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_740.xy)))).lo)
                    { /* block id: 337 */
                        int32_t l_741 = 4L;
                        (*l_738) ^= l_741;
                    }
                    else
                    { /* block id: 339 */
                        uint64_t l_742 = 0x754377A43CB6D838L;
                        int16_t l_743 = 0x4A56L;
                        VECTOR(uint32_t, 8) l_744 = (VECTOR(uint32_t, 8))(0x14A3F1BAL, (VECTOR(uint32_t, 4))(0x14A3F1BAL, (VECTOR(uint32_t, 2))(0x14A3F1BAL, 0UL), 0UL), 0UL, 0x14A3F1BAL, 0UL);
                        uint64_t l_745 = 0x7FC6ABBD1EC8431CL;
                        uint32_t l_746 = 8UL;
                        int16_t l_747 = 0x0DBCL;
                        VECTOR(int32_t, 16) l_748 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4365A817L), 0x4365A817L), 0x4365A817L, 0L, 0x4365A817L, (VECTOR(int32_t, 2))(0L, 0x4365A817L), (VECTOR(int32_t, 2))(0L, 0x4365A817L), 0L, 0x4365A817L, 0L, 0x4365A817L);
                        VECTOR(int32_t, 16) l_749 = (VECTOR(int32_t, 16))(0x38882B30L, (VECTOR(int32_t, 4))(0x38882B30L, (VECTOR(int32_t, 2))(0x38882B30L, (-1L)), (-1L)), (-1L), 0x38882B30L, (-1L), (VECTOR(int32_t, 2))(0x38882B30L, (-1L)), (VECTOR(int32_t, 2))(0x38882B30L, (-1L)), 0x38882B30L, (-1L), 0x38882B30L, (-1L));
                        int32_t l_750[2][1][9] = {{{0L,0L,1L,(-1L),(-1L),(-1L),1L,0L,0L}},{{0L,0L,1L,(-1L),(-1L),(-1L),1L,0L,0L}}};
                        int i, j, k;
                        l_738 = ((l_742 , l_743) , (void*)0);
                        l_671 = (void*)0;
                        l_747 = (((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_744.s0575626314335160)).s28)).yxxx, (uint32_t)(l_745 , ((VECTOR(uint32_t, 2))(4294967295UL, 2UL)).even)))).x , (l_740.x = l_746));
                        l_672.y = (l_750[1][0][8] ^= ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_748.sf639)))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_749.s9ac57609)).odd)).even))).lo);
                    }
                    l_752[0] = (l_738 = (l_671 = (l_751 = (void*)0)));
                }
                else
                { /* block id: 351 */
                    uint64_t l_755 = 0UL;
                    uint64_t *l_754 = &l_755;
                    uint64_t **l_753 = &l_754;
                    uint64_t **l_756 = (void*)0;
                    uint32_t l_760 = 0x32A41B45L;
                    int64_t l_763[9][8][3] = {{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}},{{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L},{0x3991D1FC9525FE6AL,0x637C8A5DF024B246L,8L}}};
                    int i, j, k;
                    l_756 = l_753;
                    for (l_755 = (-20); (l_755 >= 19); l_755 = safe_add_func_int64_t_s_s(l_755, 6))
                    { /* block id: 355 */
                        uint8_t l_759[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_759[i] = 0xE6L;
                        l_672.y = l_759[1];
                    }
                    l_760++;
                    l_672.y &= l_763[7][4][1];
                }
                unsigned int result = 0;
                result += l_672.y;
                result += l_672.x;
                result += l_737;
                atomic_add(&p_1190->l_special_values[0], result);
            }
            else
            { /* block id: 361 */
                (1 + 1);
            }
            ++l_764;
        }
        if (((((VECTOR(uint8_t, 8))(p_1190->g_769.wzxwyxxx)).s5 ^ ((18446744073709551615UL < ((253UL ^ (l_615 = l_558.y)) > (l_558.x & 1UL))) < (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(0x28L, ((VECTOR(uint8_t, 2))(p_1190->g_773.yy)), 0UL)), ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_774.s1164201530023625)).s85)).yyyy, ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(0x67L, 0L)).yyyyxxxyxxyxyyyy, ((VECTOR(int8_t, 4))(l_775.yxyy)).yxwxzwywyyyzyxzz))).s86e6, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(p_1190->g_776.xxyxyyxx)).s6405123116010137, ((VECTOR(int8_t, 8))(l_777.xzwwxwww)).s6145275573344222, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1190->g_778.xyyxyyxy)).s6012253151174534))))).s630a))))).xxywzzyx))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), 0x27L)).xxxx)).hi, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(1L, 0x1BL)).xyxyxyyyxyyyyxyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(1L, ((((l_563[1] ^= 0x35L) ^ (((((((safe_div_func_int16_t_s_s((((*l_781)--) , (-10L)), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(p_1190->g_786.s7f43)).zzwzyywwxyywzyzz, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))((~0L), (safe_mod_func_uint64_t_u_u(0xA205F4C8A899B3BEL, (**p_1190->g_566))), p_1190->g_776.x, ((VECTOR(int8_t, 8))(0x5AL)), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0L)), 0x18L)).se6eb, ((VECTOR(int8_t, 4))((-2L)))))).zzyxzyyzzxzzzyyz))).lo)))).odd, ((VECTOR(int16_t, 4))((-1L)))))).odd, ((VECTOR(int16_t, 2))((-1L)))))).even, l_603.s2)) == (-1L)), l_601.x, ((VECTOR(uint16_t, 4))(0xE4A2L)), 0x3A1CL, 65530UL)).even)).xwxwyzxz)).s04, ((VECTOR(uint16_t, 2))(0x7CF9L))))).yxxxxxyy, ((VECTOR(uint16_t, 8))(0x56DDL))))).s1)) < p_1190->g_773.y) >= l_789) & l_789) , l_544.s5) && 5UL) || l_764)) , (void*)0) != l_790), 0x53L, (-9L))).zwxzyxwzzyzzwwyy)), ((VECTOR(int8_t, 16))((-10L)))))).s28))), ((VECTOR(int8_t, 8))(0L)), 0x1AL, l_544.s3, (-1L), 6L, 4L, 0x0CL)).odd))).s5166562447674416, ((VECTOR(int8_t, 16))(0x7EL))))).odd, ((VECTOR(int8_t, 8))(0L))))).s41)).yxxxxxyy, ((VECTOR(int8_t, 8))(0x6DL))))).hi))).zxxxyxzw)).s5, 7)))) < (-1L)))
        { /* block id: 369 */
            (*l_588) = (*l_588);
        }
        else
        { /* block id: 371 */
            VECTOR(uint8_t, 8) l_819 = (VECTOR(uint8_t, 8))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 5UL), 5UL), 5UL, 6UL, 5UL);
            int16_t *l_847 = &p_1190->g_120;
            int16_t **l_846[5];
            int32_t l_869 = 0x41E36B42L;
            uint8_t *l_870[6][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int64_t l_871 = (-1L);
            uint64_t l_872 = 0x80431170C52C8257L;
            int32_t l_874 = 0x7C00A1AAL;
            struct S0 *l_877 = &p_1190->g_291;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_846[i] = &l_847;
            (*p_1190->g_832) = ((0x67BDBA384D1CB582L && (safe_rshift_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(((p_1190->g_397.f2 | (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((((safe_mod_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) >= ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((p_1190->g_546.x &= ((*l_790) = 4UL)) >= (safe_unary_minus_func_uint8_t_u(((((safe_sub_func_uint16_t_u_u((((VECTOR(int8_t, 16))(p_1190->g_813.s16b028beed24837a)).s2 || 1L), ((safe_add_func_int16_t_s_s((!((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(0x4EL, 0x34L)).yxyx, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1190->g_816.yxyxxyyy)), ((VECTOR(uint8_t, 2))(0x18L, 1UL)), 255UL, (safe_rshift_func_int16_t_s_u(p_1190->g_56.x, 12)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x60L, 0x77L)), 1UL, 0xE3L)).hi)), 0x70L, 1UL)).hi)), ((VECTOR(uint8_t, 16))(l_819.s1407212777620153)).lo, ((VECTOR(uint8_t, 16))((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((((VECTOR(uint16_t, 2))(65530UL, 0xFFA5L)).even > (0xC5L == (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((l_620 <= (((p_1190->g_816.x && l_563[1]) > l_595) <= p_1190->g_265[3][2][6])), 255UL)), l_482.x)))) != (*p_41)) , p_1190->g_193), l_622)), l_491)), p_1190->g_532.z)), l_764)), 0UL, ((VECTOR(uint8_t, 4))(0x22L)), 2UL, 0xE1L, 0UL, 0x64L, 0x69L, 0xECL, p_1190->g_265[3][2][6], ((VECTOR(uint8_t, 2))(0x37L)), 3UL)).odd))).hi))).odd, (int16_t)l_545.s2))).xyxyyyxx))).s1), l_621)) , p_1190->g_532.x))) || 0x77397F0BL) , p_1190->g_492) < l_545.s5)))), l_595)) , l_563[1]) >= p_1190->g_602.w), 12)), l_491)) , GROUP_DIVERGE(1, 1)), l_777.z)) < p_1190->g_290[3][5][4]), p_1190->g_272.x)) ^ GROUP_DIVERGE(1, 1))), l_777.y)) , 0UL) | 255UL) , GROUP_DIVERGE(0, 1)))) != 6L), 255UL))) ^ 0xE2L), l_777.x)) ^ p_1190->g_265[3][2][6]) , GROUP_DIVERGE(2, 1)) <= p_1190->g_773.x), 2))) , &p_42);
            if ((+((p_1190->g_786.sb = (safe_sub_func_int8_t_s_s(0x2AL, ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_875 = (l_874 ^= (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_1190->g_843.s9fb964d41a175430)).sb, ((safe_sub_func_int8_t_s_s(0x56L, (((l_848 = &p_1190->g_120) != l_790) ^ ((((VECTOR(uint8_t, 2))(1UL, 0xE7L)).lo <= (l_663 ^= (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((((((l_819.s4 , (safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))((-1L), 4L)).even, (safe_mod_func_int32_t_s_s(((l_621 = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1190->g_776.x, FAKE_DIVERGE(p_1190->local_1_offset, get_local_id(1), 10), ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(7L, 0x4EEDFD6574F51A27L)), 1L, 0x018D3D48033F3ABCL)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((-1L), (l_869 |= (((**p_43) != ((VECTOR(int32_t, 2))(0L, 1L)).odd) && (safe_mod_func_int64_t_s_s((0xC6L & (safe_lshift_func_int16_t_s_u(((*l_847) ^= ((**p_40) <= p_1190->g_88.x)), 0))), FAKE_DIVERGE(p_1190->global_2_offset, get_global_id(2), 10))))), ((VECTOR(int64_t, 4))(0x0237D806A1F36DDDL)), 0x70CEE8B4B77D01B7L, ((VECTOR(int64_t, 4))(0L)), 8L, 0x7FD7DDF4F5B8F48CL, l_819.s4, 0x7F5E372CC59C31FBL, (-1L))).sd655)), ((VECTOR(int64_t, 4))((-5L)))))), (**p_1190->g_566), 0x3E41D4B9B9C2F094L, 0x5D289557CC87FF22L, 0x5C66080387718A29L)).lo)).lo))), 7L, 0x37F864C1177B66DDL, 0x701DD6E08864280EL, ((VECTOR(int64_t, 4))((-6L))), 8L, (-1L), ((VECTOR(int64_t, 2))(2L)), ((VECTOR(int64_t, 2))(0x24035D2C3BFBA540L)), 0x0AF82EB6402A5180L)).sd & l_563[0]) | l_628[4]), 0x7BL, 255UL, ((VECTOR(uint8_t, 2))(253UL)), 0x4CL)).s2635601277121645)).s2d0e)).xxxwzxwy, ((VECTOR(uint8_t, 8))(0xF2L))))).s50)))).yxyxyyyx)).s7) , (-1L)), l_819.s5)))), l_871))))) , l_601.w) >= l_547.s6) < 0x442D160DL) <= l_871) < l_872), l_547.s2)), l_774.s6)), l_873[2][0])), l_819.s1)))) , l_622)))) && l_819.s1))), l_819.s5)))), 0xC34EL)) > l_872), p_1190->g_14)) , p_1190->g_173.s8)))) == l_628[1])))
            { /* block id: 383 */
                int8_t l_876 = (-1L);
                return l_876;
            }
            else
            { /* block id: 385 */
                VECTOR(int8_t, 16) l_878 = (VECTOR(int8_t, 16))(0x68L, (VECTOR(int8_t, 4))(0x68L, (VECTOR(int8_t, 2))(0x68L, 0x33L), 0x33L), 0x33L, 0x68L, 0x33L, (VECTOR(int8_t, 2))(0x68L, 0x33L), (VECTOR(int8_t, 2))(0x68L, 0x33L), 0x68L, 0x33L, 0x68L, 0x33L);
                int i;
                (**p_43) &= (***p_1190->g_832);
                l_877 = l_877;
                return l_878.s7;
            }
        }
        for (l_663 = (-6); (l_663 <= (-10)); l_663 = safe_sub_func_uint8_t_u_u(l_663, 5))
        { /* block id: 393 */
            (*p_1190->g_45) ^= 0x4FAED633L;
            for (p_1190->g_135 = 0; (p_1190->g_135 == 28); ++p_1190->g_135)
            { /* block id: 397 */
                for (p_1190->g_107 = 0; (p_1190->g_107 <= (-8)); p_1190->g_107 = safe_sub_func_uint16_t_u_u(p_1190->g_107, 5))
                { /* block id: 400 */
                    int32_t **l_885 = &p_1190->g_334;
                    (1 + 1);
                }
            }
            (*p_1190->g_334) = (-1L);
        }
        (*p_1190->g_45) ^= ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(l_887.s0421)).wyzyzwyyywywxxzx, (int32_t)(safe_rshift_func_uint16_t_u_s((!p_1190->g_602.z), l_605.x))))).sb;
    }
    else
    { /* block id: 411 */
        int32_t l_890[6];
        int32_t l_903 = 9L;
        int32_t l_912 = 1L;
        int32_t l_913 = (-1L);
        int32_t l_914 = 0x790391AEL;
        int32_t l_915 = (-8L);
        int32_t l_916 = 5L;
        VECTOR(int32_t, 16) l_917 = (VECTOR(int32_t, 16))(0x3F05CCA4L, (VECTOR(int32_t, 4))(0x3F05CCA4L, (VECTOR(int32_t, 2))(0x3F05CCA4L, 0x7D8044F5L), 0x7D8044F5L), 0x7D8044F5L, 0x3F05CCA4L, 0x7D8044F5L, (VECTOR(int32_t, 2))(0x3F05CCA4L, 0x7D8044F5L), (VECTOR(int32_t, 2))(0x3F05CCA4L, 0x7D8044F5L), 0x3F05CCA4L, 0x7D8044F5L, 0x3F05CCA4L, 0x7D8044F5L);
        uint64_t *l_941[2];
        VECTOR(int64_t, 2) l_943 = (VECTOR(int64_t, 2))(0x56FB75B9D78A195DL, 0x74C4E44E5C21538BL);
        VECTOR(int16_t, 4) l_944 = (VECTOR(int16_t, 4))(0x035FL, (VECTOR(int16_t, 2))(0x035FL, 0x0422L), 0x0422L);
        int i;
        for (i = 0; i < 6; i++)
            l_890[i] = (-6L);
        for (i = 0; i < 2; i++)
            l_941[i] = &l_668[3][3];
        if ((l_890[0] && ((safe_mod_func_uint32_t_u_u((((((VECTOR(int32_t, 2))(1L, 4L)).hi < (**p_43)) ^ (((l_890[1] <= p_1190->g_476) == ((l_903 &= (safe_mul_func_int8_t_s_s((p_1190->g_172 > ((!(((l_890[0] >= ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_895.yx)), 6UL, 0xCD466B92C48EACCCL)), ((safe_sub_func_uint16_t_u_u(65535UL, l_890[1])) <= (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(0x6263L, 0x7587L)), l_890[0]))), 0UL, 18446744073709551615UL, 0UL)).s30, ((VECTOR(uint64_t, 2))(0xDC0302473D4F48E8L))))), 0x78B79F9CA999DC11L, 18446744073709551613UL)).x) < 0x6DL) , p_1190->g_272.x)) >= l_890[0])), p_1190->g_902[7]))) == 5UL)) , p_1190->g_344.y)) || p_1190->g_492), l_890[0])) || 7L)))
        { /* block id: 413 */
            uint8_t * volatile * volatile *l_906 = (void*)0;
            uint8_t * volatile * volatile *l_907 = (void*)0;
            uint8_t * volatile * volatile *l_909 = &p_1190->g_904[0];
            (*l_909) = p_1190->g_904[0];
        }
        else
        { /* block id: 415 */
            int32_t l_910 = (-1L);
            int32_t l_911[10][6][4] = {{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}},{{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L},{1L,0L,(-7L),8L}}};
            uint8_t *l_932[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_932[i] = (void*)0;
            l_920--;
            for (l_918 = 0; (l_918 < (-24)); l_918 = safe_sub_func_uint64_t_u_u(l_918, 1))
            { /* block id: 419 */
                int16_t *l_929 = &l_789;
                uint8_t *l_930 = (void*)0;
                uint8_t **l_931 = &l_930;
                int32_t l_942 = 0L;
                int64_t *l_950[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*p_1190->g_45) ^= (!(safe_sub_func_uint64_t_u_u((((*l_929) = (safe_div_func_int8_t_s_s(0x61L, ((VECTOR(uint8_t, 2))(4UL, 0x91L)).even))) != ((((*l_931) = l_930) == l_932[1]) ^ (+((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 14)) || ((p_1190->g_602.x , 1L) > l_915))))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((void*)0 == l_941[0]), ((p_1190->g_120 > 0x262BL) && l_911[5][2][1]))) , l_942) >= (-4L)), l_903)), p_1190->g_290[3][5][4])))));
                (**p_40) &= (((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(l_943.yxxy)), (int64_t)(((VECTOR(uint32_t, 2))(0xBDFDEA3AL, 0x15B37031L)).odd >= (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_944.wyxw)).odd)).hi ^ ((l_942 , (((p_1190->g_131 = 4294967291UL) ^ p_1190->g_57.s4) , ((VECTOR(uint32_t, 2))(0xDA640BD2L, 0x9AA5E2C5L)).hi)) || (0UL >= l_903))))))).w < (safe_unary_minus_func_int64_t_s((p_1190->g_344.y = (safe_sub_func_uint64_t_u_u(l_942, l_942))))));
                for (l_903 = 1; (l_903 > (-11)); l_903--)
                { /* block id: 428 */
                    return p_1190->g_265[3][2][6];
                }
                if ((**p_1190->g_439))
                    break;
            }
            (*l_588) = (*p_1190->g_398);
        }
    }
    return p_1190->g_131;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_373 p_1190->g_14 p_1190->g_131
 * writes: p_1190->g_14 p_1190->g_131
 */
int32_t * func_46(int32_t * p_47, uint8_t  p_48, struct S1 * p_1190)
{ /* block id: 205 */
    VECTOR(int8_t, 2) l_471 = (VECTOR(int8_t, 2))((-3L), 0x52L);
    int i;
    (*p_47) |= (((VECTOR(int8_t, 16))(l_471.xyyyyyxxxyyyxyxy)).se != p_1190->g_373[4]);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_14 p_1190->g_55 p_1190->g_56 p_1190->g_57 p_1190->g_44 p_1190->g_45 p_1190->g_83 p_1190->g_87 p_1190->g_88 p_1190->g_2 p_1190->g_94 p_1190->g_109 p_1190->g_134 p_1190->g_135 p_1190->g_131 p_1190->g_178 p_1190->g_172 p_1190->g_289 p_1190->g_193 p_1190->g_290 p_1190->g_291 p_1190->g_292 p_1190->g_275 p_1190->g_333 p_1190->g_344 p_1190->g_353 p_1190->g_173 p_1190->g_265 p_1190->g_373 p_1190->g_397 p_1190->g_398 p_1190->g_404 p_1190->g_430
 * writes: p_1190->g_14 p_1190->g_109 p_1190->g_120 p_1190->g_131 p_1190->g_135 p_1190->g_178 p_1190->g_56 p_1190->g_173 p_1190->g_264 p_1190->g_265 p_1190->g_289 p_1190->g_290 p_1190->g_291 p_1190->g_107 p_1190->g_334 p_1190->g_373 p_1190->g_397
 */
uint8_t  func_49(int32_t * p_50, int64_t  p_51, struct S1 * p_1190)
{ /* block id: 12 */
    VECTOR(int32_t, 16) l_52 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x085FFFF3L), 0x085FFFF3L), 0x085FFFF3L, 0L, 0x085FFFF3L, (VECTOR(int32_t, 2))(0L, 0x085FFFF3L), (VECTOR(int32_t, 2))(0L, 0x085FFFF3L), 0L, 0x085FFFF3L, 0L, 0x085FFFF3L);
    VECTOR(uint8_t, 16) l_53 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xDBL), 0xDBL), 0xDBL, 1UL, 0xDBL, (VECTOR(uint8_t, 2))(1UL, 0xDBL), (VECTOR(uint8_t, 2))(1UL, 0xDBL), 1UL, 0xDBL, 1UL, 0xDBL);
    VECTOR(uint8_t, 4) l_54 = (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 254UL), 254UL);
    VECTOR(int32_t, 16) l_58 = (VECTOR(int32_t, 16))(0x3464BBCDL, (VECTOR(int32_t, 4))(0x3464BBCDL, (VECTOR(int32_t, 2))(0x3464BBCDL, 0x0187147DL), 0x0187147DL), 0x0187147DL, 0x3464BBCDL, 0x0187147DL, (VECTOR(int32_t, 2))(0x3464BBCDL, 0x0187147DL), (VECTOR(int32_t, 2))(0x3464BBCDL, 0x0187147DL), 0x3464BBCDL, 0x0187147DL, 0x3464BBCDL, 0x0187147DL);
    int32_t *l_80 = &p_1190->g_14;
    VECTOR(uint64_t, 2) l_84 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL);
    VECTOR(int32_t, 2) l_85 = (VECTOR(int32_t, 2))(0L, (-2L));
    int32_t l_417 = (-4L);
    int64_t l_423 = 0x5B489AFE9C226567L;
    uint32_t l_427 = 0xA288E46EL;
    uint16_t *l_463 = &p_1190->g_109[4][2];
    int32_t *l_465 = &p_1190->g_265[5][4][5];
    int32_t *l_466[2];
    int64_t l_467 = (-9L);
    uint8_t l_468 = 0x32L;
    int i;
    for (i = 0; i < 2; i++)
        l_466[i] = &p_1190->g_14;
    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5E0D6158L, 1L)).xxyxxyxyxxyxyxxy)).s88, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_52.s23e629ba)).s5, (-5L), (p_1190->g_14 > ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))(0x2CL, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(l_53.sb389e7675daafe49)).s7d, (uint8_t)p_1190->g_14))), 0xA3L)).xyzxzwwwzzyxwzyw, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_54.xw)).yyyxxyyxyxxxyyyy)))), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1190->g_55.s69)))).xxyyxxxyxxyyyxxy))).scf74))).zwwzywwxzwxzyzzy))).odd, ((VECTOR(uint8_t, 2))(p_1190->g_56.xw)).yyxyxxxy))).s6452213202747573))).even)), (uint8_t)p_51))).s6), ((VECTOR(int32_t, 4))(p_1190->g_57.s2112)), 0L)).s22))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_58.s86)))).xyxx)), 0x424175C8L, 0x30C1ABDDL)).s2)
    { /* block id: 13 */
        int64_t l_68 = 0L;
        int32_t l_69[8] = {0x207EB839L,0x207EB839L,0x207EB839L,0x207EB839L,0x207EB839L,0x207EB839L,0x207EB839L,0x207EB839L};
        int32_t *l_82 = (void*)0;
        int32_t **l_81 = &l_82;
        int32_t *l_384 = &p_1190->g_265[3][3][5];
        int32_t *l_385 = &l_69[7];
        int32_t *l_386 = &l_69[7];
        int32_t *l_387[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_388 = 4294967295UL;
        int i;
        if ((func_59((*p_1190->g_44), p_1190) | l_54.y))
        { /* block id: 17 */
            int32_t *l_66 = &p_1190->g_14;
            int32_t *l_67[7] = {&p_1190->g_14,&p_1190->g_14,&p_1190->g_14,&p_1190->g_14,&p_1190->g_14,&p_1190->g_14,&p_1190->g_14};
            uint16_t l_70 = 1UL;
            int i;
            l_70--;
        }
        else
        { /* block id: 19 */
            int16_t l_75 = 0x787DL;
            VECTOR(int32_t, 4) l_86 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x3084DB6CL), 0x3084DB6CL);
            uint64_t *l_95 = (void*)0;
            uint64_t *l_96 = (void*)0;
            int32_t l_97 = 0x20674BD7L;
            int32_t *l_371 = (void*)0;
            int32_t *l_372[3][1];
            int32_t **l_374 = &l_371;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_372[i][j] = &l_69[7];
            }
            (*p_50) |= (-10L);
            for (l_68 = 17; (l_68 < 28); l_68 = safe_add_func_int32_t_s_s(l_68, 7))
            { /* block id: 23 */
                return l_75;
            }
            p_1190->g_373[4] ^= ((**p_1190->g_44) = func_76(l_80, (l_81 = &p_1190->g_45), (l_97 = ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_1190->g_83.s4630)).zwxxwxww)), ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(l_84.xyyyxxxyxyxxxyyy)).even, ((VECTOR(uint64_t, 8))(18446744073709551606UL, 1UL, 18446744073709551612UL, 18446744073709551608UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 2))(l_85.xx)).xxyxxxxxxyxyyyyy, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x00AFD421L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_86.zwzw)).zwzxzwyz, ((VECTOR(int32_t, 16))(p_1190->g_87.s289768afa15260ee)).hi))))).odd)).lo)), (-1L))).hi, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(p_1190->g_88.wwwxxywywywzxyzx)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))((((((*l_80) , p_1190->g_2) , (safe_mod_func_uint16_t_u_u((p_51 != ((safe_add_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1190->g_94.s76c1f1c6dc0dc4be)).lo)).s2)) , p_1190->g_87.sb) >= 1L), p_1190->g_56.w)) , 0L)), 65534UL))) , (-1L)) && 18446744073709551615UL), p_1190->g_56.z, 5L, p_1190->g_94.s6, 0x6A8FD6C6L, p_51, 0L, (-1L))), ((VECTOR(int32_t, 8))(0x1FBEB5A7L)), ((VECTOR(int32_t, 8))(0x33ECD4BAL))))), ((VECTOR(int32_t, 8))(0L))))).s0155104556232145, ((VECTOR(int32_t, 16))(1L))))).lo, ((VECTOR(int32_t, 8))(6L))))).s46, ((VECTOR(int32_t, 2))((-10L)))))).xyyxyyyxxyxxxxxy))).s69, ((VECTOR(uint32_t, 2))(1UL))))), 2UL, 0x02A6C391FFBB2933L))))).s35))).yyxxxxyy))), (uint64_t)l_86.y, (uint64_t)p_1190->g_88.w))).s1), p_1190));
            (*l_374) = (*l_81);
        }
        if ((atomic_inc(&p_1190->l_atomic_input[56]) == 8))
        { /* block id: 147 */
            int32_t l_375 = 0x2C44453BL;
            uint64_t l_376 = 0x5A3B342C65014AA9L;
            int32_t l_377[9][5] = {{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL},{5L,0x267042AFL,5L,5L,0x267042AFL}};
            int32_t l_378 = 1L;
            int16_t l_379 = 1L;
            int64_t l_380 = 0x04B66EE6EF279DEEL;
            uint64_t l_381[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_381[i] = 0x94112B45B9B62E4EL;
            l_376 ^= l_375;
            l_381[1]++;
            unsigned int result = 0;
            result += l_375;
            result += l_376;
            int l_377_i0, l_377_i1;
            for (l_377_i0 = 0; l_377_i0 < 9; l_377_i0++) {
                for (l_377_i1 = 0; l_377_i1 < 5; l_377_i1++) {
                    result += l_377[l_377_i0][l_377_i1];
                }
            }
            result += l_378;
            result += l_379;
            result += l_380;
            int l_381_i0;
            for (l_381_i0 = 0; l_381_i0 < 2; l_381_i0++) {
                result += l_381[l_381_i0];
            }
            atomic_add(&p_1190->l_special_values[56], result);
        }
        else
        { /* block id: 150 */
            (1 + 1);
        }
        --l_388;
    }
    else
    { /* block id: 154 */
        uint16_t l_407 = 1UL;
        int32_t l_411 = 8L;
        VECTOR(int8_t, 8) l_412 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
        int32_t l_418 = 0L;
        int32_t l_419 = 0x7A51DF62L;
        int32_t l_422 = 1L;
        int32_t l_424 = 0x4156BB3DL;
        int32_t l_425[5];
        int i;
        for (i = 0; i < 5; i++)
            l_425[i] = 1L;
        for (p_1190->g_291.f0 = 6; (p_1190->g_291.f0 < (-30)); p_1190->g_291.f0 = safe_sub_func_uint32_t_u_u(p_1190->g_291.f0, 1))
        { /* block id: 157 */
            int8_t l_413 = 0x6EL;
            int32_t l_420 = 0x13260DEBL;
            int32_t l_421 = 0x4F59ACACL;
            int32_t **l_431 = &l_80;
            for (p_1190->g_178 = 24; (p_1190->g_178 >= 47); p_1190->g_178 = safe_add_func_int8_t_s_s(p_1190->g_178, 8))
            { /* block id: 160 */
                int32_t *l_399 = &p_1190->g_14;
                int32_t l_410 = 1L;
                int32_t l_414 = 0x61EDD02AL;
                int32_t l_415 = 0x4479AD63L;
                int32_t l_416 = (-5L);
                int32_t l_426[8] = {0x173ECBC2L,0x173ECBC2L,0x173ECBC2L,0x173ECBC2L,0x173ECBC2L,0x173ECBC2L,0x173ECBC2L,0x173ECBC2L};
                int i;
                for (p_1190->g_291.f2 = 0; (p_1190->g_291.f2 >= 45); ++p_1190->g_291.f2)
                { /* block id: 163 */
                    int32_t **l_400 = (void*)0;
                    int32_t **l_402 = (void*)0;
                    int32_t *l_408[10];
                    int8_t l_409 = 0x6EL;
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_408[i] = &p_1190->g_135;
                    (*p_1190->g_398) = p_1190->g_397;
                    (*p_1190->g_404) = l_399;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1190->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s(l_407, p_51)), 10))][(safe_mod_func_uint32_t_u_u(p_1190->tid, 5))]));
                    l_427++;
                }
                (*p_1190->g_398) = p_1190->g_430;
                return p_1190->g_14;
            }
            (*l_431) = p_50;
            return p_1190->g_135;
        }
        for (l_427 = 0; (l_427 != 52); l_427 = safe_add_func_uint64_t_u_u(l_427, 8))
        { /* block id: 179 */
            int32_t *l_438 = &p_1190->g_2;
            (1 + 1);
        }
    }
    l_468++;
    return p_1190->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_14
 * writes:
 */
uint64_t  func_59(int32_t * p_60, struct S1 * p_1190)
{ /* block id: 14 */
    int32_t *l_61 = &p_1190->g_14;
    int32_t *l_62[1];
    uint8_t l_63 = 0UL;
    int i;
    for (i = 0; i < 1; i++)
        l_62[i] = &p_1190->g_14;
    --l_63;
    return p_1190->g_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_1190->g_44 p_1190->g_45 p_1190->g_109 p_1190->g_88 p_1190->g_87 p_1190->g_14 p_1190->g_134 p_1190->g_135 p_1190->g_131 p_1190->g_2 p_1190->g_178 p_1190->g_55 p_1190->g_83 p_1190->g_172 p_1190->g_289 p_1190->g_193 p_1190->g_290 p_1190->g_291 p_1190->g_292 p_1190->g_275 p_1190->g_333 p_1190->g_344 p_1190->g_353 p_1190->g_173 p_1190->g_265 p_1190->g_56
 * writes: p_1190->g_14 p_1190->g_109 p_1190->g_120 p_1190->g_131 p_1190->g_135 p_1190->g_178 p_1190->g_56 p_1190->g_173 p_1190->g_264 p_1190->g_265 p_1190->g_289 p_1190->g_290 p_1190->g_291 p_1190->g_107 p_1190->g_334
 */
int32_t  func_76(int32_t * p_77, int32_t ** p_78, uint64_t  p_79, struct S1 * p_1190)
{ /* block id: 28 */
    VECTOR(int32_t, 16) l_98 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int32_t, 2))(9L, 1L), (VECTOR(int32_t, 2))(9L, 1L), 9L, 1L, 9L, 1L);
    int32_t *l_101 = &p_1190->g_14;
    int32_t **l_100 = &l_101;
    VECTOR(uint16_t, 4) l_116 = (VECTOR(uint16_t, 4))(0xC818L, (VECTOR(uint16_t, 2))(0xC818L, 0xA7F6L), 0xA7F6L);
    VECTOR(uint16_t, 4) l_119 = (VECTOR(uint16_t, 4))(0x8F27L, (VECTOR(uint16_t, 2))(0x8F27L, 0xC04AL), 0xC04AL);
    VECTOR(uint64_t, 8) l_145 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL);
    VECTOR(int32_t, 4) l_152 = (VECTOR(int32_t, 4))(0x13908CA6L, (VECTOR(int32_t, 2))(0x13908CA6L, 0x6699BEB6L), 0x6699BEB6L);
    int32_t l_176 = 3L;
    uint32_t *l_215 = (void*)0;
    VECTOR(int64_t, 4) l_242 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x477CBA297D261BF6L), 0x477CBA297D261BF6L);
    VECTOR(uint8_t, 2) l_245 = (VECTOR(uint8_t, 2))(250UL, 0x57L);
    VECTOR(int8_t, 2) l_355 = (VECTOR(int8_t, 2))(0x05L, 7L);
    VECTOR(int8_t, 16) l_362 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
    int i;
    if (((**p_1190->g_44) = ((VECTOR(int32_t, 2))(l_98.s4d)).odd))
    { /* block id: 30 */
        int32_t **l_99[1][9][10] = {{{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45},{&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45,&p_1190->g_45}}};
        uint16_t *l_108 = &p_1190->g_109[4][2];
        VECTOR(int32_t, 16) l_127 = (VECTOR(int32_t, 16))(0x0752C94BL, (VECTOR(int32_t, 4))(0x0752C94BL, (VECTOR(int32_t, 2))(0x0752C94BL, 0x1C3F61B7L), 0x1C3F61B7L), 0x1C3F61B7L, 0x0752C94BL, 0x1C3F61B7L, (VECTOR(int32_t, 2))(0x0752C94BL, 0x1C3F61B7L), (VECTOR(int32_t, 2))(0x0752C94BL, 0x1C3F61B7L), 0x0752C94BL, 0x1C3F61B7L, 0x0752C94BL, 0x1C3F61B7L);
        uint32_t l_128 = 1UL;
        uint32_t l_129 = 4294967291UL;
        uint32_t *l_130 = &p_1190->g_131;
        uint32_t l_132 = 0xE0C58DE2L;
        int i, j, k;
        l_100 = l_99[0][3][9];
        (*p_1190->g_45) &= (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u(((*l_108)--), 0x2AB3L)))) && (-8L)), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(l_116.yy)), 65528UL)).w, 1)), ((((*l_130) = (safe_rshift_func_int16_t_s_s((p_79 && (p_1190->g_120 = ((VECTOR(uint16_t, 2))(l_119.xz)).even)), (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x527EL, (p_79 == (safe_sub_func_uint64_t_u_u(0x4A44B56EB578CF17L, ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_127.s6a28c7cd)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6E85A4DAL, 0x7F1D446CL)).xxxyxxxyxyyxyyyx)))).even)).s14)).xxxxxxxy))))).s4 , (FAKE_DIVERGE(p_1190->group_0_offset, get_group_id(0), 10) , ((((p_79 || p_79) & ((VECTOR(int8_t, 2))(0x19L, 1L)).hi) > (p_1190->g_88.x <= GROUP_DIVERGE(0, 1))) >= 0x4200A6F42BAF640DL))) , l_128)))))) && p_1190->g_87.s5), l_129))))) < (-8L)) != 65535UL)))));
        (*p_1190->g_45) = (**p_1190->g_44);
        (*p_77) = l_132;
    }
    else
    { /* block id: 38 */
        return (**l_100);
    }
    if ((*p_1190->g_45))
    { /* block id: 41 */
        int32_t *l_133 = (void*)0;
        VECTOR(uint8_t, 4) l_191 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x38L), 0x38L);
        int32_t l_203 = 0x7388FD20L;
        int8_t l_246 = 0x1AL;
        VECTOR(int16_t, 8) l_273 = (VECTOR(int16_t, 8))(0x670EL, (VECTOR(int16_t, 4))(0x670EL, (VECTOR(int16_t, 2))(0x670EL, 0x607DL), 0x607DL), 0x607DL, 0x670EL, 0x607DL);
        int32_t l_307 = 8L;
        int32_t l_308[3];
        uint8_t l_325 = 0x10L;
        int i;
        for (i = 0; i < 3; i++)
            l_308[i] = (-7L);
        (*p_1190->g_134) |= ((*l_101) = ((FAKE_DIVERGE(p_1190->local_1_offset, get_local_id(1), 10) , (*p_78)) == (*p_78)));
        for (p_1190->g_131 = 22; (p_1190->g_131 < 40); ++p_1190->g_131)
        { /* block id: 46 */
            uint16_t l_142 = 65526UL;
            uint32_t l_153 = 0x9AA89525L;
            int64_t *l_154 = (void*)0;
            int64_t *l_155[3];
            uint16_t *l_156 = &p_1190->g_109[0][5];
            int32_t **l_157 = &l_133;
            int32_t l_234 = 1L;
            int32_t l_310 = 4L;
            int32_t l_311 = 0x06218D79L;
            int32_t l_312[7] = {(-4L),(-10L),(-4L),(-4L),(-10L),(-4L),(-4L)};
            int i;
            for (i = 0; i < 3; i++)
                l_155[i] = (void*)0;
            if (((-6L) & ((-1L) >= (safe_mul_func_int8_t_s_s((+(l_142 <= ((safe_rshift_func_int8_t_s_u((&l_133 != (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_79, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(0xBDD6291BC3C69C58L, 18446744073709551613UL)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_142, 0x89F2823213DDA549L, 0x4963A11E95E8B2C4L, 0x68B3883621335F78L)).zwyyzxyz)).s0050306676173343, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_145.s16)).yyyx)), ((((safe_sub_func_uint16_t_u_u(((*l_156) = (safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((((*p_77) = ((VECTOR(int32_t, 2))(l_152.zy)).hi) > l_153), p_1190->g_57.s4)), (p_1190->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1190->tid, 5))] = (-1L))))), 65529UL)) , 0x4F3A628D867FBE65L) , (**p_1190->g_44)) < 0x4213D0C7L), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0UL, p_1190->g_120, 1UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0xC2BF5E7D46517117L, 0x35FC118C1422C922L)).odd)))).s1352607324353661))).s5b, ((VECTOR(uint64_t, 2))(1UL))))).xxxx)), 0xF98005EDC9C37AF4L, 0xE7F369DC22399FB3L, ((VECTOR(uint64_t, 4))(0x122096FE6C662CD8L)), 18446744073709551615UL)).sb0)), ((VECTOR(uint64_t, 2))(0UL))))).yyxxxyyy)).s3 , l_157)), 7)) > p_1190->g_2))), p_79)))))
            { /* block id: 50 */
                int32_t *l_159 = &p_1190->g_135;
                int32_t l_177 = (-1L);
                (*l_159) |= (**p_78);
                for (p_79 = 0; (p_79 >= 26); p_79++)
                { /* block id: 54 */
                    uint64_t *l_166 = (void*)0;
                    uint64_t *l_167 = (void*)0;
                    uint64_t *l_168 = (void*)0;
                    uint64_t *l_169 = (void*)0;
                    uint64_t *l_170 = (void*)0;
                    uint64_t *l_171[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_174 = (-9L);
                    int32_t l_175[8][4][8] = {{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}},{{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L},{0x0A49CF99L,1L,1L,0x0A49CF99L,6L,1L,1L,6L}}};
                    int8_t *l_192 = &p_1190->g_193;
                    int16_t *l_194 = &p_1190->g_107;
                    uint8_t *l_204 = (void*)0;
                    uint8_t *l_205 = (void*)0;
                    int i, j, k;
                    (**p_78) = ((safe_lshift_func_uint8_t_u_u((p_1190->g_56.z = ((safe_div_func_uint64_t_u_u((--p_1190->g_178), (((VECTOR(int32_t, 8))(0x3494EFD2L, (safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_159) = (safe_lshift_func_int16_t_s_s(((*l_194) = (((*l_192) = (safe_add_func_int32_t_s_s((**p_1190->g_44), (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_191.yw)).hi, (*l_159)))))) , p_79)), (p_1190->g_131 || (((*l_159) | ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((p_1190->g_172 != (l_203 = (p_1190->g_173.s7 = (l_174 |= (((*l_101) < (safe_rshift_func_uint8_t_u_u((((p_79 != (-1L)) , (*p_1190->g_44)) == (*p_78)), 5))) < p_79))))), p_1190->g_88.x)), 14)), l_175[3][1][4])) , p_1190->g_88.z)) == p_1190->g_83.s5))))), GROUP_DIVERGE(0, 1))) , p_1190->g_87.s6), 65530UL)), ((VECTOR(int32_t, 4))((-1L))), (-6L), 0x7BD51872L)).s0 , (*l_101)))) ^ p_79)), p_79)) ^ 0L);
                    if ((*p_1190->g_45))
                        break;
                    (*l_159) ^= 0x1B5F3F9DL;
                    if ((*l_159))
                    { /* block id: 66 */
                        (**p_78) = (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((&p_1190->g_193 != &p_1190->g_193), 9)), (((*l_157) = &l_203) != (void*)0)));
                    }
                    else
                    { /* block id: 69 */
                        return (**p_78);
                    }
                }
            }
            else
            { /* block id: 73 */
                uint64_t l_226 = 0x0527C21566154BDAL;
                int32_t *l_229 = &l_203;
                int32_t *l_230 = &p_1190->g_14;
                int32_t *l_231 = (void*)0;
                int32_t *l_232 = &l_176;
                int32_t *l_233[5];
                uint32_t l_235 = 0xDE2F61E5L;
                uint32_t l_288[6][3] = {{0xD71B6692L,9UL,9UL},{0xD71B6692L,9UL,9UL},{0xD71B6692L,9UL,9UL},{0xD71B6692L,9UL,9UL},{0xD71B6692L,9UL,9UL},{0xD71B6692L,9UL,9UL}};
                uint64_t l_329 = 0x5ED873879576AB05L;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_233[i] = &l_203;
                for (p_1190->g_14 = (-13); (p_1190->g_14 > (-20)); --p_1190->g_14)
                { /* block id: 76 */
                    for (l_142 = 0; (l_142 != 44); l_142 = safe_add_func_uint32_t_u_u(l_142, 4))
                    { /* block id: 79 */
                        int32_t *l_214[7][10][3] = {{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}},{{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176},{(void*)0,&p_1190->g_2,&l_176}}};
                        int i, j, k;
                        l_203 = (*p_1190->g_45);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1190->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u(((p_1190->g_55.s8 , l_215) != (void*)0), 10))][(safe_mod_func_uint32_t_u_u(p_1190->tid, 5))]));
                        if ((**p_78))
                            break;
                    }
                    for (l_142 = 0; (l_142 != 12); ++l_142)
                    { /* block id: 88 */
                        int32_t *l_218 = &p_1190->g_135;
                        int32_t *l_219 = &p_1190->g_135;
                        int32_t *l_220 = &l_203;
                        int32_t *l_221 = (void*)0;
                        int32_t *l_222 = (void*)0;
                        int32_t *l_223 = (void*)0;
                        int32_t *l_224 = &l_203;
                        int32_t *l_225[10][8] = {{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135},{&l_176,&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_14,&p_1190->g_135,&p_1190->g_135}};
                        int i, j;
                        l_226--;
                    }
                }
                ++l_235;
                (*l_230) = ((safe_add_func_int64_t_s_s((4294967294UL & ((p_1190->g_173.sc = (safe_div_func_uint16_t_u_u(((*p_1190->g_134) >= (*l_229)), (18446744073709551611UL || 0x6B128E4D22ADB033L)))) || (p_1190->g_83.s4 && (((VECTOR(int64_t, 16))(l_242.zwwzxyzxxyzzywzy)).s1 ^ 0x4DF3D4E41C9C5727L)))), 0x9F9DEE71F5CCE189L)) , (((safe_div_func_int16_t_s_s((+(((VECTOR(uint8_t, 8))(l_245.xxyyyyyx)).s5 != 0xB5L)), l_246)) | p_1190->g_172) , 0x61101BBEL));
                for (l_153 = 0; (l_153 == 58); ++l_153)
                { /* block id: 97 */
                    int32_t l_286 = 0x26A0A0CFL;
                    int32_t l_314 = 0x4BABD4FFL;
                    int32_t l_316 = 0x12AEA4F2L;
                    int32_t l_320 = 0x3FCDACD0L;
                    int32_t l_321 = 0x54D3185BL;
                    int32_t l_322 = 0x5CAAEBCDL;
                    int32_t l_323 = (-1L);
                    int32_t l_324 = 5L;
                    int16_t l_328 = 0x73E4L;
                    for (l_142 = 18; (l_142 > 9); l_142--)
                    { /* block id: 100 */
                        uint8_t *l_259 = (void*)0;
                        uint8_t *l_260 = (void*)0;
                        uint8_t *l_261 = (void*)0;
                        uint8_t *l_262[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t l_263 = 0x1B5AB522L;
                        int32_t l_276 = 0L;
                        int32_t l_277 = 1L;
                        int16_t *l_304 = &p_1190->g_107;
                        int i, j;
                        p_1190->g_290[3][5][4] |= (~((safe_sub_func_int8_t_s_s((((p_1190->g_289 &= ((((safe_lshift_func_int8_t_s_u((FAKE_DIVERGE(p_1190->local_2_offset, get_local_id(2), 10) , (p_1190->g_14 != (safe_div_func_int8_t_s_s(0L, (safe_mul_func_uint8_t_u_u((p_1190->g_265[3][2][6] = (p_1190->g_264 = (l_263 = (p_1190->g_56.z = p_1190->g_135)))), (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_1190->g_83.s4, p_1190->g_172)), (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_1190->g_272.yw)).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_273.s2763236402101244)))).sb)))), 0x4BC5L, 0x5DF0L, 0x2E6FL)).even)).even , (p_1190->g_55.s9 || ((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(p_1190->g_274.s5445046146330433)).s7b, ((VECTOR(uint32_t, 2))(0UL, 4294967286UL)), ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1190->g_275.yy)), ((l_277 = (l_276 = (**p_78))) & 0x12283141L), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((*l_156) ^= (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_277 == p_79), l_286)) <= l_286), 1UL))), 0x2AB2L)) == (-1L)) || p_1190->g_287), l_288[0][0])), 65534UL, 65533UL, 65531UL)), ((VECTOR(uint16_t, 4))(0xBE21L))))).x, 2UL, 0x9B3C1BA3L, 9UL)), 6UL, ((VECTOR(uint32_t, 2))(4294967295UL)), 4294967295UL)).lo)))), ((VECTOR(uint32_t, 4))(2UL))))).xxywwzwz)), 4294967295UL, 0x241EE354L, 0x94EE4FADL, 0xA93332FBL, 0x9604CEFAL)), ((VECTOR(uint32_t, 16))(0xDF876F52L))))).s2c))), ((VECTOR(uint32_t, 2))(0x45DC0C9EL))))), ((VECTOR(uint64_t, 4))(1UL)), FAKE_DIVERGE(p_1190->group_2_offset, get_group_id(2), 10), 0xBD809091BD80D6C4L, ((VECTOR(uint64_t, 4))(0UL)), 18446744073709551608UL, 0x52CEB1BD6C52F704L, 0x5B034C1A4F437D2AL)).sb)))))))), 6)) , p_79) <= p_79) , (*l_101))) >= p_1190->g_193) != 0L), (*l_229))) , (*p_1190->g_134)));
                        (*p_1190->g_292) = p_1190->g_291;
                        (*l_229) = (safe_lshift_func_uint8_t_u_s((((0x4C12E7F529766AB0L < (l_260 == &p_1190->g_193)) & (safe_mul_func_uint16_t_u_u((((*p_77) = 0x0153EA0CL) , ((p_79 | (((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(l_263, (18446744073709551613UL || (safe_unary_minus_func_uint32_t_u(0UL))))) ^ (safe_sub_func_int16_t_s_s(((*l_304) = ((p_1190->g_14 ^ 0x3EL) < l_276)), 0x5125L))) > p_1190->g_131), 0x11C3951CL)) & p_79) != p_1190->g_275.y)) <= GROUP_DIVERGE(1, 1))), p_79))) >= FAKE_DIVERGE(p_1190->local_0_offset, get_local_id(0), 10)), 1));
                    }
                    for (l_203 = 0; (l_203 == (-27)); l_203 = safe_sub_func_uint32_t_u_u(l_203, 5))
                    { /* block id: 117 */
                        int16_t l_309 = 1L;
                        int32_t l_313 = 3L;
                        int32_t l_315 = 1L;
                        int32_t l_317 = 0x5C334F7DL;
                        int32_t l_318 = (-1L);
                        int32_t l_319[1][5];
                        int32_t **l_332 = (void*)0;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_319[i][j] = 0x20D2046FL;
                        }
                        l_325--;
                        l_329--;
                        (*p_1190->g_333) = ((*l_157) = (*p_78));
                    }
                }
            }
            for (l_307 = 27; (l_307 <= 5); l_307--)
            { /* block id: 127 */
                (*l_157) = (*p_78);
                return (*p_77);
            }
            if (l_203)
                break;
        }
    }
    else
    { /* block id: 133 */
        int16_t *l_337 = &p_1190->g_107;
        int32_t l_345 = (-1L);
        VECTOR(uint16_t, 4) l_350 = (VECTOR(uint16_t, 4))(0x5AECL, (VECTOR(uint16_t, 2))(0x5AECL, 2UL), 2UL);
        VECTOR(int8_t, 16) l_354 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7BL), 0x7BL), 0x7BL, 0L, 0x7BL, (VECTOR(int8_t, 2))(0L, 0x7BL), (VECTOR(int8_t, 2))(0L, 0x7BL), 0L, 0x7BL, 0L, 0x7BL);
        int32_t l_367[4];
        uint8_t *l_368 = (void*)0;
        uint8_t *l_369 = (void*)0;
        uint8_t l_370 = 0xCBL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_367[i] = (-9L);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1190->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u((0UL >= (((*l_337) = p_1190->g_83.s7) , (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*p_1190->g_292) , ((*p_77) ^ (safe_rshift_func_uint16_t_u_u((&p_1190->g_291 != ((GROUP_DIVERGE(2, 1) , ((VECTOR(int64_t, 2))(p_1190->g_344.xx)).even) , &p_1190->g_291)), 3)))), l_345)), (l_345 || p_1190->g_291.f2))))), 10))][(safe_mod_func_uint32_t_u_u(p_1190->tid, 5))]));
        (**p_78) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((VECTOR(uint16_t, 2))(l_350.yx)).hi && 0xD651L), ((safe_add_func_int64_t_s_s((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1190->g_353.s2240510226735477)).lo)).s2741305507721435, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_354.sc0f4c300d561f332)).s9839))).ywyywxzxxywwywyw)).s3a, ((VECTOR(int8_t, 4))(p_1190->g_173.s0, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_355.yxxxyyyx)).s73)).odd, 0L, 1L)).lo))), 0L, 0x1AL)), (safe_add_func_int32_t_s_s((p_79 >= (safe_mul_func_uint16_t_u_u((((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_362.sfd16a6cd)).s4, ((safe_mul_func_uint16_t_u_u((((((l_354.s4 != ((*p_1190->g_44) != (void*)0)) & p_1190->g_344.y) ^ p_79) || ((p_1190->g_56.z &= ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(0x68L, ((VECTOR(uint8_t, 8))(0x65L)), 0xB5L, 0xCAL, 0xE4L, p_1190->g_344.y, p_1190->g_265[3][2][6], 253UL, 252UL)).s9648, (uint8_t)l_367[1]))).x) & p_1190->g_344.x)) , 5UL), 9UL)) , p_79))) & p_1190->g_135), 1L, ((VECTOR(int16_t, 8))((-5L))), p_79, 0x5657L, ((VECTOR(int16_t, 4))((-1L))))).sb8)).xxxxxyyy, ((VECTOR(uint16_t, 8))(1UL))))).s7 > p_79), (*l_101)))), l_367[1])), 1L, 0x64L, 0x0BL)).s70, ((VECTOR(int8_t, 2))(0x63L))))).yxxxyyyx)).s23, ((VECTOR(int8_t, 2))((-9L))), ((VECTOR(int8_t, 2))(0x3BL))))).yyyxyyyxyxyyyyxy))).sd9)).xxxxyxyxyxxxxyyx)).s5c)).yyxyxxyxyyxxxyxy)).s1 & l_370), p_1190->g_135)) && p_79))), 8L));
    }
    return (*p_77);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_comm_values[i] = 1;
    struct S1 c_1191;
    struct S1* p_1190 = &c_1191;
    struct S1 c_1192 = {
        9L, // p_1190->g_2
        (-8L), // p_1190->g_14
        0xABL, // p_1190->g_17
        &p_1190->g_14, // p_1190->g_45
        &p_1190->g_45, // p_1190->g_44
        (VECTOR(int8_t, 16))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0x7BL), 0x7BL), 0x7BL, 0x06L, 0x7BL, (VECTOR(int8_t, 2))(0x06L, 0x7BL), (VECTOR(int8_t, 2))(0x06L, 0x7BL), 0x06L, 0x7BL, 0x06L, 0x7BL), // p_1190->g_55
        (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 255UL), 255UL), // p_1190->g_56
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L)), // p_1190->g_57
        (VECTOR(uint64_t, 8))(0xF2AAF3324EF461E6L, (VECTOR(uint64_t, 4))(0xF2AAF3324EF461E6L, (VECTOR(uint64_t, 2))(0xF2AAF3324EF461E6L, 0xD8E9B07D9F9AE3A9L), 0xD8E9B07D9F9AE3A9L), 0xD8E9B07D9F9AE3A9L, 0xF2AAF3324EF461E6L, 0xD8E9B07D9F9AE3A9L), // p_1190->g_83
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x1C033C15L), 0x1C033C15L), 0x1C033C15L, 4L, 0x1C033C15L, (VECTOR(int32_t, 2))(4L, 0x1C033C15L), (VECTOR(int32_t, 2))(4L, 0x1C033C15L), 4L, 0x1C033C15L, 4L, 0x1C033C15L), // p_1190->g_87
        (VECTOR(int32_t, 4))(0x4BF1C6CBL, (VECTOR(int32_t, 2))(0x4BF1C6CBL, 0L), 0L), // p_1190->g_88
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_1190->g_94
        1L, // p_1190->g_107
        {{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL},{0UL,0x97A7L,0xF00BL,0x97A7L,0UL,0UL,0x97A7L,0xF00BL,0x97A7L,0UL}}, // p_1190->g_109
        2L, // p_1190->g_120
        5UL, // p_1190->g_131
        0L, // p_1190->g_135
        &p_1190->g_135, // p_1190->g_134
        {{&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,(void*)0,&p_1190->g_2},{&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,(void*)0,&p_1190->g_2},{&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,(void*)0,&p_1190->g_2},{&p_1190->g_135,&p_1190->g_135,&p_1190->g_14,(void*)0,&p_1190->g_2}}, // p_1190->g_158
        1L, // p_1190->g_172
        (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int64_t, 2))((-9L), (-1L)), (VECTOR(int64_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L)), // p_1190->g_173
        0x9C2D6479L, // p_1190->g_178
        (-1L), // p_1190->g_193
        3UL, // p_1190->g_264
        {{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}},{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}},{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}},{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}},{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}},{{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L},{1L,0x1B16540BL,0x1B16540BL,1L,(-4L),0L,9L}}}, // p_1190->g_265
        (VECTOR(uint16_t, 4))(0xB754L, (VECTOR(uint16_t, 2))(0xB754L, 6UL), 6UL), // p_1190->g_272
        (VECTOR(uint32_t, 8))(0x579ABDACL, (VECTOR(uint32_t, 4))(0x579ABDACL, (VECTOR(uint32_t, 2))(0x579ABDACL, 0x3E80B92BL), 0x3E80B92BL), 0x3E80B92BL, 0x579ABDACL, 0x3E80B92BL), // p_1190->g_274
        (VECTOR(uint32_t, 2))(4294967295UL, 0x49AF966FL), // p_1190->g_275
        0xA2L, // p_1190->g_287
        0xF35EL, // p_1190->g_289
        {{{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL}},{{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL}},{{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL}},{{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL},{4294967295UL,0xCBBEFF50L,0xD08208A4L,0x9AEA71C1L,0UL,1UL,0UL}}}, // p_1190->g_290
        {-1L,7UL,8UL}, // p_1190->g_291
        &p_1190->g_291, // p_1190->g_292
        &p_1190->g_265[3][2][6], // p_1190->g_334
        &p_1190->g_334, // p_1190->g_333
        (VECTOR(int64_t, 2))(0x700B228CD78839FAL, (-7L)), // p_1190->g_344
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x73L), 0x73L), 0x73L, (-1L), 0x73L), // p_1190->g_353
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1190->g_373
        {0x46L,0x8375D71700494A7CL,0xF8C5A12CL}, // p_1190->g_397
        &p_1190->g_397, // p_1190->g_398
        (void*)0, // p_1190->g_401
        {{(void*)0,&p_1190->g_45,(void*)0,(void*)0,&p_1190->g_45},{(void*)0,&p_1190->g_45,(void*)0,(void*)0,&p_1190->g_45},{(void*)0,&p_1190->g_45,(void*)0,(void*)0,&p_1190->g_45},{(void*)0,&p_1190->g_45,(void*)0,(void*)0,&p_1190->g_45},{(void*)0,&p_1190->g_45,(void*)0,(void*)0,&p_1190->g_45}}, // p_1190->g_403
        &p_1190->g_334, // p_1190->g_404
        {0x0EL,18446744073709551615UL,6UL}, // p_1190->g_430
        &p_1190->g_334, // p_1190->g_439
        0xED8874D9ADDAD165L, // p_1190->g_476
        0L, // p_1190->g_492
        (VECTOR(uint16_t, 4))(0xE2E0L, (VECTOR(uint16_t, 2))(0xE2E0L, 1UL), 1UL), // p_1190->g_532
        (VECTOR(uint16_t, 2))(0xA410L, 0x0EC2L), // p_1190->g_546
        (void*)0, // p_1190->g_567
        &p_1190->g_567, // p_1190->g_566
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xE2L), 0xE2L), // p_1190->g_602
        (VECTOR(uint8_t, 8))(0xAEL, (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 0xBFL), 0xBFL), 0xBFL, 0xAEL, 0xBFL), // p_1190->g_604
        (-4L), // p_1190->g_618
        {{{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L}},{{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L}},{{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L}},{{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L}},{{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L},{1L,0x6DCB5388L,1L,1L,0x6DCB5388L}}}, // p_1190->g_623
        (VECTOR(int64_t, 8))(0x241119A9D3B22CEEL, (VECTOR(int64_t, 4))(0x241119A9D3B22CEEL, (VECTOR(int64_t, 2))(0x241119A9D3B22CEEL, 3L), 3L), 3L, 0x241119A9D3B22CEEL, 3L), // p_1190->g_648
        (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x8FL), 0x8FL), // p_1190->g_769
        (VECTOR(uint8_t, 2))(0x3AL, 0UL), // p_1190->g_773
        (VECTOR(int8_t, 2))(0x38L, 0x06L), // p_1190->g_776
        (VECTOR(int8_t, 2))(0x0DL, 0x6BL), // p_1190->g_778
        (VECTOR(int8_t, 16))(0x4FL, (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, 1L), 1L), 1L, 0x4FL, 1L, (VECTOR(int8_t, 2))(0x4FL, 1L), (VECTOR(int8_t, 2))(0x4FL, 1L), 0x4FL, 1L, 0x4FL, 1L), // p_1190->g_786
        (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-5L)), (-5L)), (-5L), (-8L), (-5L), (VECTOR(int8_t, 2))((-8L), (-5L)), (VECTOR(int8_t, 2))((-8L), (-5L)), (-8L), (-5L), (-8L), (-5L)), // p_1190->g_813
        (VECTOR(uint8_t, 2))(248UL, 254UL), // p_1190->g_816
        &p_1190->g_44, // p_1190->g_832
        (VECTOR(uint8_t, 16))(0x62L, (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 0x31L), 0x31L), 0x31L, 0x62L, 0x31L, (VECTOR(uint8_t, 2))(0x62L, 0x31L), (VECTOR(uint8_t, 2))(0x62L, 0x31L), 0x62L, 0x31L, 0x62L, 0x31L), // p_1190->g_843
        {0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL,0xB44B8BDAL}, // p_1190->g_902
        (void*)0, // p_1190->g_905
        {&p_1190->g_905,&p_1190->g_905}, // p_1190->g_904
        (void*)0, // p_1190->g_908
        {{&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2},{&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2},{&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2},{&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2,&p_1190->g_2}}, // p_1190->g_955
        {&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1],&p_1190->g_955[3][1]}, // p_1190->g_954
        (VECTOR(uint32_t, 16))(0xFB0C3208L, (VECTOR(uint32_t, 4))(0xFB0C3208L, (VECTOR(uint32_t, 2))(0xFB0C3208L, 0UL), 0UL), 0UL, 0xFB0C3208L, 0UL, (VECTOR(uint32_t, 2))(0xFB0C3208L, 0UL), (VECTOR(uint32_t, 2))(0xFB0C3208L, 0UL), 0xFB0C3208L, 0UL, 0xFB0C3208L, 0UL), // p_1190->g_981
        (void*)0, // p_1190->g_1126
        {-7L,0x5A80315EDF172E4DL,0xF8CC848BL}, // p_1190->g_1132
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L)), // p_1190->g_1137
        {{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}},{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}},{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}},{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}},{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}},{{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL},{0x5DCEL,1UL,0xEB23L,1UL,0xDD7BL}}}, // p_1190->g_1141
        (VECTOR(uint32_t, 2))(0x854ED98AL, 0x9140702FL), // p_1190->g_1143
        (void*)0, // p_1190->g_1156
        &p_1190->g_1156, // p_1190->g_1155
        (VECTOR(int8_t, 2))((-6L), 0x6EL), // p_1190->g_1173
        (VECTOR(int8_t, 16))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x72L), 0x72L), 0x72L, 0x07L, 0x72L, (VECTOR(int8_t, 2))(0x07L, 0x72L), (VECTOR(int8_t, 2))(0x07L, 0x72L), 0x07L, 0x72L, 0x07L, 0x72L), // p_1190->g_1176
        {0x71L,0xFEBE56E7F64E5B3AL,1UL}, // p_1190->g_1182
        {{{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL}},{{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL}},{{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL}},{{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL}},{{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL},{0x2AL,18446744073709551615UL,0x88BC8C8FL}}}, // p_1190->g_1183
        {-3L,0x53A28F2458B4AE76L,0xA1E6AC86L}, // p_1190->g_1185
        0, // p_1190->v_collective
        sequence_input[get_global_id(0)], // p_1190->global_0_offset
        sequence_input[get_global_id(1)], // p_1190->global_1_offset
        sequence_input[get_global_id(2)], // p_1190->global_2_offset
        sequence_input[get_local_id(0)], // p_1190->local_0_offset
        sequence_input[get_local_id(1)], // p_1190->local_1_offset
        sequence_input[get_local_id(2)], // p_1190->local_2_offset
        sequence_input[get_group_id(0)], // p_1190->group_0_offset
        sequence_input[get_group_id(1)], // p_1190->group_1_offset
        sequence_input[get_group_id(2)], // p_1190->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[0][get_linear_local_id()])), // p_1190->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1191 = c_1192;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1190);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1190->g_2, "p_1190->g_2", print_hash_value);
    transparent_crc(p_1190->g_14, "p_1190->g_14", print_hash_value);
    transparent_crc(p_1190->g_17, "p_1190->g_17", print_hash_value);
    transparent_crc(p_1190->g_55.s0, "p_1190->g_55.s0", print_hash_value);
    transparent_crc(p_1190->g_55.s1, "p_1190->g_55.s1", print_hash_value);
    transparent_crc(p_1190->g_55.s2, "p_1190->g_55.s2", print_hash_value);
    transparent_crc(p_1190->g_55.s3, "p_1190->g_55.s3", print_hash_value);
    transparent_crc(p_1190->g_55.s4, "p_1190->g_55.s4", print_hash_value);
    transparent_crc(p_1190->g_55.s5, "p_1190->g_55.s5", print_hash_value);
    transparent_crc(p_1190->g_55.s6, "p_1190->g_55.s6", print_hash_value);
    transparent_crc(p_1190->g_55.s7, "p_1190->g_55.s7", print_hash_value);
    transparent_crc(p_1190->g_55.s8, "p_1190->g_55.s8", print_hash_value);
    transparent_crc(p_1190->g_55.s9, "p_1190->g_55.s9", print_hash_value);
    transparent_crc(p_1190->g_55.sa, "p_1190->g_55.sa", print_hash_value);
    transparent_crc(p_1190->g_55.sb, "p_1190->g_55.sb", print_hash_value);
    transparent_crc(p_1190->g_55.sc, "p_1190->g_55.sc", print_hash_value);
    transparent_crc(p_1190->g_55.sd, "p_1190->g_55.sd", print_hash_value);
    transparent_crc(p_1190->g_55.se, "p_1190->g_55.se", print_hash_value);
    transparent_crc(p_1190->g_55.sf, "p_1190->g_55.sf", print_hash_value);
    transparent_crc(p_1190->g_56.x, "p_1190->g_56.x", print_hash_value);
    transparent_crc(p_1190->g_56.y, "p_1190->g_56.y", print_hash_value);
    transparent_crc(p_1190->g_56.z, "p_1190->g_56.z", print_hash_value);
    transparent_crc(p_1190->g_56.w, "p_1190->g_56.w", print_hash_value);
    transparent_crc(p_1190->g_57.s0, "p_1190->g_57.s0", print_hash_value);
    transparent_crc(p_1190->g_57.s1, "p_1190->g_57.s1", print_hash_value);
    transparent_crc(p_1190->g_57.s2, "p_1190->g_57.s2", print_hash_value);
    transparent_crc(p_1190->g_57.s3, "p_1190->g_57.s3", print_hash_value);
    transparent_crc(p_1190->g_57.s4, "p_1190->g_57.s4", print_hash_value);
    transparent_crc(p_1190->g_57.s5, "p_1190->g_57.s5", print_hash_value);
    transparent_crc(p_1190->g_57.s6, "p_1190->g_57.s6", print_hash_value);
    transparent_crc(p_1190->g_57.s7, "p_1190->g_57.s7", print_hash_value);
    transparent_crc(p_1190->g_83.s0, "p_1190->g_83.s0", print_hash_value);
    transparent_crc(p_1190->g_83.s1, "p_1190->g_83.s1", print_hash_value);
    transparent_crc(p_1190->g_83.s2, "p_1190->g_83.s2", print_hash_value);
    transparent_crc(p_1190->g_83.s3, "p_1190->g_83.s3", print_hash_value);
    transparent_crc(p_1190->g_83.s4, "p_1190->g_83.s4", print_hash_value);
    transparent_crc(p_1190->g_83.s5, "p_1190->g_83.s5", print_hash_value);
    transparent_crc(p_1190->g_83.s6, "p_1190->g_83.s6", print_hash_value);
    transparent_crc(p_1190->g_83.s7, "p_1190->g_83.s7", print_hash_value);
    transparent_crc(p_1190->g_87.s0, "p_1190->g_87.s0", print_hash_value);
    transparent_crc(p_1190->g_87.s1, "p_1190->g_87.s1", print_hash_value);
    transparent_crc(p_1190->g_87.s2, "p_1190->g_87.s2", print_hash_value);
    transparent_crc(p_1190->g_87.s3, "p_1190->g_87.s3", print_hash_value);
    transparent_crc(p_1190->g_87.s4, "p_1190->g_87.s4", print_hash_value);
    transparent_crc(p_1190->g_87.s5, "p_1190->g_87.s5", print_hash_value);
    transparent_crc(p_1190->g_87.s6, "p_1190->g_87.s6", print_hash_value);
    transparent_crc(p_1190->g_87.s7, "p_1190->g_87.s7", print_hash_value);
    transparent_crc(p_1190->g_87.s8, "p_1190->g_87.s8", print_hash_value);
    transparent_crc(p_1190->g_87.s9, "p_1190->g_87.s9", print_hash_value);
    transparent_crc(p_1190->g_87.sa, "p_1190->g_87.sa", print_hash_value);
    transparent_crc(p_1190->g_87.sb, "p_1190->g_87.sb", print_hash_value);
    transparent_crc(p_1190->g_87.sc, "p_1190->g_87.sc", print_hash_value);
    transparent_crc(p_1190->g_87.sd, "p_1190->g_87.sd", print_hash_value);
    transparent_crc(p_1190->g_87.se, "p_1190->g_87.se", print_hash_value);
    transparent_crc(p_1190->g_87.sf, "p_1190->g_87.sf", print_hash_value);
    transparent_crc(p_1190->g_88.x, "p_1190->g_88.x", print_hash_value);
    transparent_crc(p_1190->g_88.y, "p_1190->g_88.y", print_hash_value);
    transparent_crc(p_1190->g_88.z, "p_1190->g_88.z", print_hash_value);
    transparent_crc(p_1190->g_88.w, "p_1190->g_88.w", print_hash_value);
    transparent_crc(p_1190->g_94.s0, "p_1190->g_94.s0", print_hash_value);
    transparent_crc(p_1190->g_94.s1, "p_1190->g_94.s1", print_hash_value);
    transparent_crc(p_1190->g_94.s2, "p_1190->g_94.s2", print_hash_value);
    transparent_crc(p_1190->g_94.s3, "p_1190->g_94.s3", print_hash_value);
    transparent_crc(p_1190->g_94.s4, "p_1190->g_94.s4", print_hash_value);
    transparent_crc(p_1190->g_94.s5, "p_1190->g_94.s5", print_hash_value);
    transparent_crc(p_1190->g_94.s6, "p_1190->g_94.s6", print_hash_value);
    transparent_crc(p_1190->g_94.s7, "p_1190->g_94.s7", print_hash_value);
    transparent_crc(p_1190->g_94.s8, "p_1190->g_94.s8", print_hash_value);
    transparent_crc(p_1190->g_94.s9, "p_1190->g_94.s9", print_hash_value);
    transparent_crc(p_1190->g_94.sa, "p_1190->g_94.sa", print_hash_value);
    transparent_crc(p_1190->g_94.sb, "p_1190->g_94.sb", print_hash_value);
    transparent_crc(p_1190->g_94.sc, "p_1190->g_94.sc", print_hash_value);
    transparent_crc(p_1190->g_94.sd, "p_1190->g_94.sd", print_hash_value);
    transparent_crc(p_1190->g_94.se, "p_1190->g_94.se", print_hash_value);
    transparent_crc(p_1190->g_94.sf, "p_1190->g_94.sf", print_hash_value);
    transparent_crc(p_1190->g_107, "p_1190->g_107", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1190->g_109[i][j], "p_1190->g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1190->g_120, "p_1190->g_120", print_hash_value);
    transparent_crc(p_1190->g_131, "p_1190->g_131", print_hash_value);
    transparent_crc(p_1190->g_135, "p_1190->g_135", print_hash_value);
    transparent_crc(p_1190->g_172, "p_1190->g_172", print_hash_value);
    transparent_crc(p_1190->g_173.s0, "p_1190->g_173.s0", print_hash_value);
    transparent_crc(p_1190->g_173.s1, "p_1190->g_173.s1", print_hash_value);
    transparent_crc(p_1190->g_173.s2, "p_1190->g_173.s2", print_hash_value);
    transparent_crc(p_1190->g_173.s3, "p_1190->g_173.s3", print_hash_value);
    transparent_crc(p_1190->g_173.s4, "p_1190->g_173.s4", print_hash_value);
    transparent_crc(p_1190->g_173.s5, "p_1190->g_173.s5", print_hash_value);
    transparent_crc(p_1190->g_173.s6, "p_1190->g_173.s6", print_hash_value);
    transparent_crc(p_1190->g_173.s7, "p_1190->g_173.s7", print_hash_value);
    transparent_crc(p_1190->g_173.s8, "p_1190->g_173.s8", print_hash_value);
    transparent_crc(p_1190->g_173.s9, "p_1190->g_173.s9", print_hash_value);
    transparent_crc(p_1190->g_173.sa, "p_1190->g_173.sa", print_hash_value);
    transparent_crc(p_1190->g_173.sb, "p_1190->g_173.sb", print_hash_value);
    transparent_crc(p_1190->g_173.sc, "p_1190->g_173.sc", print_hash_value);
    transparent_crc(p_1190->g_173.sd, "p_1190->g_173.sd", print_hash_value);
    transparent_crc(p_1190->g_173.se, "p_1190->g_173.se", print_hash_value);
    transparent_crc(p_1190->g_173.sf, "p_1190->g_173.sf", print_hash_value);
    transparent_crc(p_1190->g_178, "p_1190->g_178", print_hash_value);
    transparent_crc(p_1190->g_193, "p_1190->g_193", print_hash_value);
    transparent_crc(p_1190->g_264, "p_1190->g_264", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1190->g_265[i][j][k], "p_1190->g_265[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1190->g_272.x, "p_1190->g_272.x", print_hash_value);
    transparent_crc(p_1190->g_272.y, "p_1190->g_272.y", print_hash_value);
    transparent_crc(p_1190->g_272.z, "p_1190->g_272.z", print_hash_value);
    transparent_crc(p_1190->g_272.w, "p_1190->g_272.w", print_hash_value);
    transparent_crc(p_1190->g_274.s0, "p_1190->g_274.s0", print_hash_value);
    transparent_crc(p_1190->g_274.s1, "p_1190->g_274.s1", print_hash_value);
    transparent_crc(p_1190->g_274.s2, "p_1190->g_274.s2", print_hash_value);
    transparent_crc(p_1190->g_274.s3, "p_1190->g_274.s3", print_hash_value);
    transparent_crc(p_1190->g_274.s4, "p_1190->g_274.s4", print_hash_value);
    transparent_crc(p_1190->g_274.s5, "p_1190->g_274.s5", print_hash_value);
    transparent_crc(p_1190->g_274.s6, "p_1190->g_274.s6", print_hash_value);
    transparent_crc(p_1190->g_274.s7, "p_1190->g_274.s7", print_hash_value);
    transparent_crc(p_1190->g_275.x, "p_1190->g_275.x", print_hash_value);
    transparent_crc(p_1190->g_275.y, "p_1190->g_275.y", print_hash_value);
    transparent_crc(p_1190->g_287, "p_1190->g_287", print_hash_value);
    transparent_crc(p_1190->g_289, "p_1190->g_289", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1190->g_290[i][j][k], "p_1190->g_290[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1190->g_291.f0, "p_1190->g_291.f0", print_hash_value);
    transparent_crc(p_1190->g_291.f1, "p_1190->g_291.f1", print_hash_value);
    transparent_crc(p_1190->g_291.f2, "p_1190->g_291.f2", print_hash_value);
    transparent_crc(p_1190->g_344.x, "p_1190->g_344.x", print_hash_value);
    transparent_crc(p_1190->g_344.y, "p_1190->g_344.y", print_hash_value);
    transparent_crc(p_1190->g_353.s0, "p_1190->g_353.s0", print_hash_value);
    transparent_crc(p_1190->g_353.s1, "p_1190->g_353.s1", print_hash_value);
    transparent_crc(p_1190->g_353.s2, "p_1190->g_353.s2", print_hash_value);
    transparent_crc(p_1190->g_353.s3, "p_1190->g_353.s3", print_hash_value);
    transparent_crc(p_1190->g_353.s4, "p_1190->g_353.s4", print_hash_value);
    transparent_crc(p_1190->g_353.s5, "p_1190->g_353.s5", print_hash_value);
    transparent_crc(p_1190->g_353.s6, "p_1190->g_353.s6", print_hash_value);
    transparent_crc(p_1190->g_353.s7, "p_1190->g_353.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1190->g_373[i], "p_1190->g_373[i]", print_hash_value);

    }
    transparent_crc(p_1190->g_397.f0, "p_1190->g_397.f0", print_hash_value);
    transparent_crc(p_1190->g_397.f1, "p_1190->g_397.f1", print_hash_value);
    transparent_crc(p_1190->g_397.f2, "p_1190->g_397.f2", print_hash_value);
    transparent_crc(p_1190->g_430.f0, "p_1190->g_430.f0", print_hash_value);
    transparent_crc(p_1190->g_430.f1, "p_1190->g_430.f1", print_hash_value);
    transparent_crc(p_1190->g_430.f2, "p_1190->g_430.f2", print_hash_value);
    transparent_crc(p_1190->g_476, "p_1190->g_476", print_hash_value);
    transparent_crc(p_1190->g_492, "p_1190->g_492", print_hash_value);
    transparent_crc(p_1190->g_532.x, "p_1190->g_532.x", print_hash_value);
    transparent_crc(p_1190->g_532.y, "p_1190->g_532.y", print_hash_value);
    transparent_crc(p_1190->g_532.z, "p_1190->g_532.z", print_hash_value);
    transparent_crc(p_1190->g_532.w, "p_1190->g_532.w", print_hash_value);
    transparent_crc(p_1190->g_546.x, "p_1190->g_546.x", print_hash_value);
    transparent_crc(p_1190->g_546.y, "p_1190->g_546.y", print_hash_value);
    transparent_crc(p_1190->g_602.x, "p_1190->g_602.x", print_hash_value);
    transparent_crc(p_1190->g_602.y, "p_1190->g_602.y", print_hash_value);
    transparent_crc(p_1190->g_602.z, "p_1190->g_602.z", print_hash_value);
    transparent_crc(p_1190->g_602.w, "p_1190->g_602.w", print_hash_value);
    transparent_crc(p_1190->g_604.s0, "p_1190->g_604.s0", print_hash_value);
    transparent_crc(p_1190->g_604.s1, "p_1190->g_604.s1", print_hash_value);
    transparent_crc(p_1190->g_604.s2, "p_1190->g_604.s2", print_hash_value);
    transparent_crc(p_1190->g_604.s3, "p_1190->g_604.s3", print_hash_value);
    transparent_crc(p_1190->g_604.s4, "p_1190->g_604.s4", print_hash_value);
    transparent_crc(p_1190->g_604.s5, "p_1190->g_604.s5", print_hash_value);
    transparent_crc(p_1190->g_604.s6, "p_1190->g_604.s6", print_hash_value);
    transparent_crc(p_1190->g_604.s7, "p_1190->g_604.s7", print_hash_value);
    transparent_crc(p_1190->g_618, "p_1190->g_618", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1190->g_623[i][j][k], "p_1190->g_623[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1190->g_648.s0, "p_1190->g_648.s0", print_hash_value);
    transparent_crc(p_1190->g_648.s1, "p_1190->g_648.s1", print_hash_value);
    transparent_crc(p_1190->g_648.s2, "p_1190->g_648.s2", print_hash_value);
    transparent_crc(p_1190->g_648.s3, "p_1190->g_648.s3", print_hash_value);
    transparent_crc(p_1190->g_648.s4, "p_1190->g_648.s4", print_hash_value);
    transparent_crc(p_1190->g_648.s5, "p_1190->g_648.s5", print_hash_value);
    transparent_crc(p_1190->g_648.s6, "p_1190->g_648.s6", print_hash_value);
    transparent_crc(p_1190->g_648.s7, "p_1190->g_648.s7", print_hash_value);
    transparent_crc(p_1190->g_769.x, "p_1190->g_769.x", print_hash_value);
    transparent_crc(p_1190->g_769.y, "p_1190->g_769.y", print_hash_value);
    transparent_crc(p_1190->g_769.z, "p_1190->g_769.z", print_hash_value);
    transparent_crc(p_1190->g_769.w, "p_1190->g_769.w", print_hash_value);
    transparent_crc(p_1190->g_773.x, "p_1190->g_773.x", print_hash_value);
    transparent_crc(p_1190->g_773.y, "p_1190->g_773.y", print_hash_value);
    transparent_crc(p_1190->g_776.x, "p_1190->g_776.x", print_hash_value);
    transparent_crc(p_1190->g_776.y, "p_1190->g_776.y", print_hash_value);
    transparent_crc(p_1190->g_778.x, "p_1190->g_778.x", print_hash_value);
    transparent_crc(p_1190->g_778.y, "p_1190->g_778.y", print_hash_value);
    transparent_crc(p_1190->g_786.s0, "p_1190->g_786.s0", print_hash_value);
    transparent_crc(p_1190->g_786.s1, "p_1190->g_786.s1", print_hash_value);
    transparent_crc(p_1190->g_786.s2, "p_1190->g_786.s2", print_hash_value);
    transparent_crc(p_1190->g_786.s3, "p_1190->g_786.s3", print_hash_value);
    transparent_crc(p_1190->g_786.s4, "p_1190->g_786.s4", print_hash_value);
    transparent_crc(p_1190->g_786.s5, "p_1190->g_786.s5", print_hash_value);
    transparent_crc(p_1190->g_786.s6, "p_1190->g_786.s6", print_hash_value);
    transparent_crc(p_1190->g_786.s7, "p_1190->g_786.s7", print_hash_value);
    transparent_crc(p_1190->g_786.s8, "p_1190->g_786.s8", print_hash_value);
    transparent_crc(p_1190->g_786.s9, "p_1190->g_786.s9", print_hash_value);
    transparent_crc(p_1190->g_786.sa, "p_1190->g_786.sa", print_hash_value);
    transparent_crc(p_1190->g_786.sb, "p_1190->g_786.sb", print_hash_value);
    transparent_crc(p_1190->g_786.sc, "p_1190->g_786.sc", print_hash_value);
    transparent_crc(p_1190->g_786.sd, "p_1190->g_786.sd", print_hash_value);
    transparent_crc(p_1190->g_786.se, "p_1190->g_786.se", print_hash_value);
    transparent_crc(p_1190->g_786.sf, "p_1190->g_786.sf", print_hash_value);
    transparent_crc(p_1190->g_813.s0, "p_1190->g_813.s0", print_hash_value);
    transparent_crc(p_1190->g_813.s1, "p_1190->g_813.s1", print_hash_value);
    transparent_crc(p_1190->g_813.s2, "p_1190->g_813.s2", print_hash_value);
    transparent_crc(p_1190->g_813.s3, "p_1190->g_813.s3", print_hash_value);
    transparent_crc(p_1190->g_813.s4, "p_1190->g_813.s4", print_hash_value);
    transparent_crc(p_1190->g_813.s5, "p_1190->g_813.s5", print_hash_value);
    transparent_crc(p_1190->g_813.s6, "p_1190->g_813.s6", print_hash_value);
    transparent_crc(p_1190->g_813.s7, "p_1190->g_813.s7", print_hash_value);
    transparent_crc(p_1190->g_813.s8, "p_1190->g_813.s8", print_hash_value);
    transparent_crc(p_1190->g_813.s9, "p_1190->g_813.s9", print_hash_value);
    transparent_crc(p_1190->g_813.sa, "p_1190->g_813.sa", print_hash_value);
    transparent_crc(p_1190->g_813.sb, "p_1190->g_813.sb", print_hash_value);
    transparent_crc(p_1190->g_813.sc, "p_1190->g_813.sc", print_hash_value);
    transparent_crc(p_1190->g_813.sd, "p_1190->g_813.sd", print_hash_value);
    transparent_crc(p_1190->g_813.se, "p_1190->g_813.se", print_hash_value);
    transparent_crc(p_1190->g_813.sf, "p_1190->g_813.sf", print_hash_value);
    transparent_crc(p_1190->g_816.x, "p_1190->g_816.x", print_hash_value);
    transparent_crc(p_1190->g_816.y, "p_1190->g_816.y", print_hash_value);
    transparent_crc(p_1190->g_843.s0, "p_1190->g_843.s0", print_hash_value);
    transparent_crc(p_1190->g_843.s1, "p_1190->g_843.s1", print_hash_value);
    transparent_crc(p_1190->g_843.s2, "p_1190->g_843.s2", print_hash_value);
    transparent_crc(p_1190->g_843.s3, "p_1190->g_843.s3", print_hash_value);
    transparent_crc(p_1190->g_843.s4, "p_1190->g_843.s4", print_hash_value);
    transparent_crc(p_1190->g_843.s5, "p_1190->g_843.s5", print_hash_value);
    transparent_crc(p_1190->g_843.s6, "p_1190->g_843.s6", print_hash_value);
    transparent_crc(p_1190->g_843.s7, "p_1190->g_843.s7", print_hash_value);
    transparent_crc(p_1190->g_843.s8, "p_1190->g_843.s8", print_hash_value);
    transparent_crc(p_1190->g_843.s9, "p_1190->g_843.s9", print_hash_value);
    transparent_crc(p_1190->g_843.sa, "p_1190->g_843.sa", print_hash_value);
    transparent_crc(p_1190->g_843.sb, "p_1190->g_843.sb", print_hash_value);
    transparent_crc(p_1190->g_843.sc, "p_1190->g_843.sc", print_hash_value);
    transparent_crc(p_1190->g_843.sd, "p_1190->g_843.sd", print_hash_value);
    transparent_crc(p_1190->g_843.se, "p_1190->g_843.se", print_hash_value);
    transparent_crc(p_1190->g_843.sf, "p_1190->g_843.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1190->g_902[i], "p_1190->g_902[i]", print_hash_value);

    }
    transparent_crc(p_1190->g_981.s0, "p_1190->g_981.s0", print_hash_value);
    transparent_crc(p_1190->g_981.s1, "p_1190->g_981.s1", print_hash_value);
    transparent_crc(p_1190->g_981.s2, "p_1190->g_981.s2", print_hash_value);
    transparent_crc(p_1190->g_981.s3, "p_1190->g_981.s3", print_hash_value);
    transparent_crc(p_1190->g_981.s4, "p_1190->g_981.s4", print_hash_value);
    transparent_crc(p_1190->g_981.s5, "p_1190->g_981.s5", print_hash_value);
    transparent_crc(p_1190->g_981.s6, "p_1190->g_981.s6", print_hash_value);
    transparent_crc(p_1190->g_981.s7, "p_1190->g_981.s7", print_hash_value);
    transparent_crc(p_1190->g_981.s8, "p_1190->g_981.s8", print_hash_value);
    transparent_crc(p_1190->g_981.s9, "p_1190->g_981.s9", print_hash_value);
    transparent_crc(p_1190->g_981.sa, "p_1190->g_981.sa", print_hash_value);
    transparent_crc(p_1190->g_981.sb, "p_1190->g_981.sb", print_hash_value);
    transparent_crc(p_1190->g_981.sc, "p_1190->g_981.sc", print_hash_value);
    transparent_crc(p_1190->g_981.sd, "p_1190->g_981.sd", print_hash_value);
    transparent_crc(p_1190->g_981.se, "p_1190->g_981.se", print_hash_value);
    transparent_crc(p_1190->g_981.sf, "p_1190->g_981.sf", print_hash_value);
    transparent_crc(p_1190->g_1132.f0, "p_1190->g_1132.f0", print_hash_value);
    transparent_crc(p_1190->g_1132.f1, "p_1190->g_1132.f1", print_hash_value);
    transparent_crc(p_1190->g_1132.f2, "p_1190->g_1132.f2", print_hash_value);
    transparent_crc(p_1190->g_1137.s0, "p_1190->g_1137.s0", print_hash_value);
    transparent_crc(p_1190->g_1137.s1, "p_1190->g_1137.s1", print_hash_value);
    transparent_crc(p_1190->g_1137.s2, "p_1190->g_1137.s2", print_hash_value);
    transparent_crc(p_1190->g_1137.s3, "p_1190->g_1137.s3", print_hash_value);
    transparent_crc(p_1190->g_1137.s4, "p_1190->g_1137.s4", print_hash_value);
    transparent_crc(p_1190->g_1137.s5, "p_1190->g_1137.s5", print_hash_value);
    transparent_crc(p_1190->g_1137.s6, "p_1190->g_1137.s6", print_hash_value);
    transparent_crc(p_1190->g_1137.s7, "p_1190->g_1137.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1190->g_1141[i][j][k], "p_1190->g_1141[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1190->g_1143.x, "p_1190->g_1143.x", print_hash_value);
    transparent_crc(p_1190->g_1143.y, "p_1190->g_1143.y", print_hash_value);
    transparent_crc(p_1190->g_1173.x, "p_1190->g_1173.x", print_hash_value);
    transparent_crc(p_1190->g_1173.y, "p_1190->g_1173.y", print_hash_value);
    transparent_crc(p_1190->g_1176.s0, "p_1190->g_1176.s0", print_hash_value);
    transparent_crc(p_1190->g_1176.s1, "p_1190->g_1176.s1", print_hash_value);
    transparent_crc(p_1190->g_1176.s2, "p_1190->g_1176.s2", print_hash_value);
    transparent_crc(p_1190->g_1176.s3, "p_1190->g_1176.s3", print_hash_value);
    transparent_crc(p_1190->g_1176.s4, "p_1190->g_1176.s4", print_hash_value);
    transparent_crc(p_1190->g_1176.s5, "p_1190->g_1176.s5", print_hash_value);
    transparent_crc(p_1190->g_1176.s6, "p_1190->g_1176.s6", print_hash_value);
    transparent_crc(p_1190->g_1176.s7, "p_1190->g_1176.s7", print_hash_value);
    transparent_crc(p_1190->g_1176.s8, "p_1190->g_1176.s8", print_hash_value);
    transparent_crc(p_1190->g_1176.s9, "p_1190->g_1176.s9", print_hash_value);
    transparent_crc(p_1190->g_1176.sa, "p_1190->g_1176.sa", print_hash_value);
    transparent_crc(p_1190->g_1176.sb, "p_1190->g_1176.sb", print_hash_value);
    transparent_crc(p_1190->g_1176.sc, "p_1190->g_1176.sc", print_hash_value);
    transparent_crc(p_1190->g_1176.sd, "p_1190->g_1176.sd", print_hash_value);
    transparent_crc(p_1190->g_1176.se, "p_1190->g_1176.se", print_hash_value);
    transparent_crc(p_1190->g_1176.sf, "p_1190->g_1176.sf", print_hash_value);
    transparent_crc(p_1190->g_1182.f0, "p_1190->g_1182.f0", print_hash_value);
    transparent_crc(p_1190->g_1182.f1, "p_1190->g_1182.f1", print_hash_value);
    transparent_crc(p_1190->g_1182.f2, "p_1190->g_1182.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1190->g_1183[i][j].f0, "p_1190->g_1183[i][j].f0", print_hash_value);
            transparent_crc(p_1190->g_1183[i][j].f1, "p_1190->g_1183[i][j].f1", print_hash_value);
            transparent_crc(p_1190->g_1183[i][j].f2, "p_1190->g_1183[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1190->g_1185.f0, "p_1190->g_1185.f0", print_hash_value);
    transparent_crc(p_1190->g_1185.f1, "p_1190->g_1185.f1", print_hash_value);
    transparent_crc(p_1190->g_1185.f2, "p_1190->g_1185.f2", print_hash_value);
    transparent_crc(p_1190->v_collective, "p_1190->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 64; i++)
            transparent_crc(p_1190->g_special_values[i + 64 * get_linear_group_id()], "p_1190->g_special_values[i + 64 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 64; i++)
            transparent_crc(p_1190->l_special_values[i], "p_1190->l_special_values[i]", print_hash_value);
    transparent_crc(p_1190->l_comm_values[get_linear_local_id()], "p_1190->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1190->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()], "p_1190->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
