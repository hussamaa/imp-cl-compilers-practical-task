// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 57,11,9 -l 19,1,1
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

__constant uint32_t permutations[10][19] = {
{8,17,9,10,14,16,0,2,12,5,1,4,3,6,13,7,15,18,11}, // permutation 0
{3,10,4,8,2,17,16,9,15,7,0,1,6,14,11,12,5,13,18}, // permutation 1
{1,13,4,11,17,8,6,0,3,12,2,15,9,16,14,10,5,7,18}, // permutation 2
{12,10,15,11,5,4,3,2,18,1,7,17,6,8,14,0,9,16,13}, // permutation 3
{1,15,17,13,5,0,16,11,4,18,10,7,8,12,2,3,14,6,9}, // permutation 4
{1,9,4,6,8,18,16,3,11,15,12,2,10,7,17,0,14,5,13}, // permutation 5
{1,18,11,9,7,15,3,4,6,16,5,17,13,10,2,8,12,14,0}, // permutation 6
{9,18,15,11,12,16,13,5,4,7,1,2,17,3,0,10,6,8,14}, // permutation 7
{16,0,4,1,14,17,7,8,18,9,6,2,10,12,5,13,15,3,11}, // permutation 8
{12,8,13,14,10,16,15,4,7,17,5,11,6,9,2,1,18,3,0} // permutation 9
};

// Seed: 591305100

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

struct S1 {
    volatile VECTOR(int32_t, 8) g_2;
    volatile int32_t g_3[7];
    int32_t g_4;
    int32_t g_8;
    int32_t ** volatile g_13;
    int32_t ** volatile g_14;
    VECTOR(uint64_t, 2) g_27;
    volatile VECTOR(uint64_t, 2) g_28;
    VECTOR(uint64_t, 2) g_31;
    VECTOR(uint64_t, 2) g_33;
    uint64_t g_35;
    uint64_t *g_81;
    int32_t g_84[8];
    VECTOR(int8_t, 8) g_96;
    VECTOR(uint8_t, 16) g_99;
    uint64_t g_102;
    int32_t *g_110;
    int32_t **g_109;
    int32_t **g_117[3][2];
    int32_t ***g_116;
    volatile int8_t g_134;
    volatile int8_t *g_133[5];
    int32_t **g_140;
    uint32_t g_150;
    uint16_t g_162;
    VECTOR(int16_t, 16) g_206;
    int32_t g_220;
    struct S0 g_223;
    VECTOR(uint16_t, 16) g_262;
    VECTOR(uint8_t, 16) g_306;
    VECTOR(int8_t, 2) g_338;
    uint16_t g_366;
    int32_t g_435;
    VECTOR(int32_t, 8) g_450;
    VECTOR(uint32_t, 2) g_515;
    VECTOR(uint32_t, 8) g_516;
    VECTOR(uint32_t, 8) g_519;
    VECTOR(uint32_t, 4) g_521;
    VECTOR(uint32_t, 2) g_525;
    VECTOR(uint32_t, 2) g_526;
    VECTOR(uint32_t, 8) g_527;
    VECTOR(int32_t, 8) g_551;
    int8_t *g_599;
    int8_t **g_598;
    VECTOR(uint64_t, 4) g_643;
    VECTOR(uint64_t, 2) g_644;
    VECTOR(int32_t, 2) g_653;
    VECTOR(int64_t, 4) g_1031;
    struct S0 *g_1037;
    uint32_t *g_1124[7];
    uint32_t * volatile *g_1123;
    VECTOR(int32_t, 4) g_1135;
    VECTOR(int16_t, 2) g_1153;
    VECTOR(int8_t, 4) g_1189;
    int32_t ****g_1221;
    int32_t *****g_1220;
    int8_t ***g_1250;
    VECTOR(uint32_t, 2) g_1251;
    VECTOR(uint16_t, 16) g_1266;
    VECTOR(int8_t, 16) g_1279;
    VECTOR(uint32_t, 8) g_1281;
    VECTOR(uint32_t, 8) g_1284;
    int32_t g_1310;
    VECTOR(uint32_t, 2) g_1318;
    VECTOR(uint64_t, 4) g_1342;
    int32_t *g_1349;
    int32_t **g_1348[2][3];
    volatile VECTOR(int8_t, 16) g_1403;
    VECTOR(int8_t, 8) g_1404;
    volatile VECTOR(int32_t, 16) g_1410;
    uint32_t g_1421;
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
int8_t  func_1(struct S1 * p_1451);
int32_t * func_17(uint32_t  p_18, int32_t ** p_19, int32_t ** p_20, int32_t * p_21, int64_t  p_22, struct S1 * p_1451);
int16_t  func_40(uint64_t  p_41, struct S1 * p_1451);
struct S0  func_50(int8_t  p_51, uint16_t  p_52, struct S1 * p_1451);
uint8_t  func_55(int32_t ** p_56, struct S1 * p_1451);
int32_t ** func_57(int32_t * p_58, uint64_t  p_59, int16_t  p_60, uint64_t  p_61, struct S1 * p_1451);
int32_t * func_63(uint64_t * p_64, int32_t  p_65, uint32_t  p_66, int64_t  p_67, int64_t  p_68, struct S1 * p_1451);
uint64_t * func_69(uint64_t  p_70, uint64_t * p_71, uint64_t * p_72, int32_t ** p_73, struct S1 * p_1451);
int16_t  func_77(uint64_t * p_78, int16_t  p_79, int32_t  p_80, struct S1 * p_1451);
int32_t * func_85(int8_t  p_86, int32_t  p_87, struct S1 * p_1451);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1451->g_4 p_1451->g_8 p_1451->g_27 p_1451->g_comm_values p_1451->g_81 p_1451->g_84 p_1451->g_140 p_1451->g_220 p_1451->g_117 p_1451->g_110 p_1451->g_223 p_1451->g_96 p_1451->g_116 p_1451->g_109 p_1451->g_150 p_1451->g_99 p_1451->g_162 p_1451->g_133 p_1451->g_338 p_1451->g_435 p_1451->g_515 p_1451->l_comm_values p_1451->g_516 p_1451->g_526 p_1451->g_262 p_1451->g_450 p_1451->g_33 p_1451->g_525 p_1451->g_1031 p_1451->g_306 p_1451->g_102 p_1451->g_527 p_1451->g_643 p_1451->g_1123 p_1451->g_653 p_1451->g_551 p_1451->g_1220 p_1451->g_1251 p_1451->g_1266 p_1451->g_1221 p_1451->g_366 p_1451->g_1135 p_1451->g_1318 p_1451->g_1284 p_1451->g_1348 p_1451->g_1349 p_1451->g_1189 p_1451->g_206 p_1451->g_1153 p_1451->g_1279
 * writes: p_1451->g_4 p_1451->g_8 p_1451->g_35 p_1451->g_206 p_1451->g_110 p_1451->g_84 p_1451->g_220 p_1451->g_102 p_1451->g_223 p_1451->g_162 p_1451->g_99 p_1451->g_435 p_1451->g_526 p_1451->g_598 p_1451->g_262 p_1451->g_1037 p_1451->g_1153 p_1451->g_117 p_1451->g_109 p_1451->g_1031 p_1451->g_1250 p_1451->g_306 p_1451->g_1310 p_1451->g_96 p_1451->g_366
 */
int8_t  func_1(struct S1 * p_1451)
{ /* block id: 4 */
    VECTOR(uint64_t, 16) l_30 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x3BC6C2DB602708CDL), 0x3BC6C2DB602708CDL), 0x3BC6C2DB602708CDL, 1UL, 0x3BC6C2DB602708CDL, (VECTOR(uint64_t, 2))(1UL, 0x3BC6C2DB602708CDL), (VECTOR(uint64_t, 2))(1UL, 0x3BC6C2DB602708CDL), 1UL, 0x3BC6C2DB602708CDL, 1UL, 0x3BC6C2DB602708CDL);
    int64_t l_1347[10][4];
    int32_t l_1398 = 2L;
    uint32_t l_1417 = 0x3A460D89L;
    int8_t l_1422 = 0x67L;
    int16_t *l_1429 = (void*)0;
    int16_t **l_1428 = &l_1429;
    int16_t *l_1432 = (void*)0;
    int16_t *l_1433 = (void*)0;
    int16_t *l_1434 = (void*)0;
    int16_t *l_1435 = (void*)0;
    int16_t *l_1436 = (void*)0;
    int16_t *l_1437 = (void*)0;
    int16_t *l_1438 = (void*)0;
    int16_t *l_1439 = (void*)0;
    int16_t *l_1440[2][5][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t l_1441 = (-9L);
    struct S0 *l_1444 = &p_1451->g_223;
    uint32_t *l_1447 = (void*)0;
    uint32_t *l_1448 = (void*)0;
    uint16_t *l_1449 = (void*)0;
    uint16_t *l_1450 = &p_1451->g_366;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
            l_1347[i][j] = 7L;
    }
    for (p_1451->g_4 = 0; (p_1451->g_4 > 18); p_1451->g_4 = safe_add_func_int64_t_s_s(p_1451->g_4, 9))
    { /* block id: 7 */
        int32_t *l_7 = &p_1451->g_8;
        (*l_7) = 0x33B7BEDEL;
    }
    for (p_1451->g_8 = (-30); (p_1451->g_8 > (-30)); p_1451->g_8 = safe_add_func_int64_t_s_s(p_1451->g_8, 3))
    { /* block id: 12 */
        VECTOR(int64_t, 2) l_25 = (VECTOR(int64_t, 2))(4L, 0x576270E7AD53A38DL);
        int64_t l_240 = 0x00E5CDF09FE0713FL;
        int32_t **l_1350 = &p_1451->g_1349;
        uint8_t l_1388 = 0x31L;
        int32_t l_1399[1][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        VECTOR(int8_t, 4) l_1405 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x66L), 0x66L);
        VECTOR(int32_t, 2) l_1409 = (VECTOR(int32_t, 2))(0x70E67379L, 0x70DE597FL);
        int32_t l_1424 = 1L;
        int16_t **l_1426 = (void*)0;
        int16_t ***l_1427[3][9] = {{&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426},{&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426},{&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426,&l_1426}};
        int i, j;
        for (p_1451->g_4 = (-26); (p_1451->g_4 <= (-9)); p_1451->g_4++)
        { /* block id: 15 */
            int32_t *l_16[6];
            int32_t **l_15 = &l_16[0];
            VECTOR(uint64_t, 2) l_26 = (VECTOR(uint64_t, 2))(0xA2522ABF7C2F5A26L, 0xF39281C1D99EA5D8L);
            VECTOR(uint64_t, 8) l_29 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 9UL, 18446744073709551612UL);
            VECTOR(uint64_t, 8) l_32 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x4BCB8161DBFA2F90L), 0x4BCB8161DBFA2F90L), 0x4BCB8161DBFA2F90L, 1UL, 0x4BCB8161DBFA2F90L);
            uint64_t *l_34 = &p_1451->g_35;
            uint32_t l_62 = 0x825FC643L;
            uint16_t *l_1020 = (void*)0;
            uint16_t *l_1021[2][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t *****l_1384 = &p_1451->g_1221;
            uint32_t l_1387 = 0xA6481479L;
            int16_t *l_1389[4][7][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int8_t *l_1390 = (void*)0;
            int8_t *l_1391 = (void*)0;
            int8_t *l_1392 = (void*)0;
            int8_t *l_1393 = (void*)0;
            int8_t *l_1394 = (void*)0;
            int8_t *l_1395 = (void*)0;
            int8_t *l_1396 = (void*)0;
            int8_t *l_1397[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_16[i] = &p_1451->g_4;
            (*l_15) = &p_1451->g_4;
            (*p_1451->g_140) = func_17((((((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_25.xxyx)).ywwyyzwy))))).hi)).ywzxxxzyxxzzwyzx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_26.xx)).yyxyyxxxxxyxxxxy)).sacb3, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1451->g_27.yyxxyyxyxyyxxyxx)).s939c)), ((VECTOR(uint64_t, 2))(0x807C1ABDF11CAF1EL, 0xD8491F199E1F9531L)).yxyx))).zxwzzxzw, ((VECTOR(uint64_t, 2))(p_1451->g_28.xy)).xyxyyxyx))).s24, ((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))(0x7DCC3592E7BAA9D7L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xBFBC35CF455DBFE6L, 18446744073709551610UL)).xxyyxyyx)), ((VECTOR(uint64_t, 2))(l_29.s34)), 9UL, FAKE_DIVERGE(p_1451->global_0_offset, get_global_id(0), 10), 18446744073709551615UL, 0x6AECE01153AA9B22L, 18446744073709551607UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_30.sb5)), 5UL, 18446744073709551612UL)).xyxyxzxy)).s02))), 18446744073709551613UL, 0UL)).zwzxyzyw)).s2321335301733540))).sa2))), 18446744073709551615UL, 18446744073709551607UL)).wwzzxxyzwwwwxwwz, ((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 16))(p_1451->g_31.yxxxxyyxxxxxxyxx)), ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_32.s1420755731643451)).lo)), ((VECTOR(uint64_t, 8))(p_1451->g_33.xxyxyxyx))))).s1750015557134501)))))).sd ^ (((VECTOR(uint64_t, 2))(0x394AE9822C2642A2L, 0x01DC0BF288841F9FL)).even > ((*l_34) = l_25.y))) ^ (safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((p_1451->g_27.y , 0x3ED870B1L), (func_40(((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(0UL, ((safe_sub_func_int32_t_s_s(l_30.s2, (safe_div_func_uint16_t_u_u((p_1451->g_262.s8 = (func_50(((safe_mul_func_uint8_t_u_u(func_55(func_57(&p_1451->g_4, p_1451->g_comm_values[p_1451->tid], p_1451->g_27.y, l_62, p_1451), p_1451), p_1451->g_8)) >= l_240), (**l_15), p_1451) , p_1451->g_262.sb)), 1UL)))) & 9L))), p_1451->g_450.s4)) && 0xF9L), p_1451) > l_1347[5][2]))) >= p_1451->g_527.s0), 1UL))) >= 0x73AAAD26L), p_1451->g_1348[1][0], l_1350, (*l_15), l_30.s4, p_1451);
            l_1399[0][7] ^= ((l_1398 = (safe_add_func_int32_t_s_s(((~(((safe_div_func_uint8_t_u_u(1UL, (~(**l_15)))) >= (p_1451->g_96.s3 = ((0x048E4584L | (((safe_mul_func_int16_t_s_s((p_1451->g_1153.x |= ((safe_div_func_int64_t_s_s((((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s(l_1347[8][1], ((safe_mod_func_int32_t_s_s((((((VECTOR(uint8_t, 8))(0xF6L, ((VECTOR(uint8_t, 4))(0x83L, 0x3AL, 1UL, 0UL)), 249UL, 1UL, 0x87L)).s2 && (!p_1451->g_1189.z)) != 8L) < (&p_1451->g_1221 == l_1384)), ((safe_mul_func_uint16_t_u_u((l_1387 == 1L), 0x6EC5L)) || p_1451->g_206.s3))) > l_30.s8))) != p_1451->g_643.y) < 0x2A69CF00A97B0BC5L), 3)), 5)) , p_1451->g_8) >= p_1451->g_1031.x) , l_1347[7][1]) || 0x7872870CL), l_25.x)) , l_1388)), p_1451->g_1279.s2)) | p_1451->g_1318.y) == p_1451->g_162)) , (**l_15)))) || 0x7D67L)) < (-9L)), l_30.s6))) && (**l_15));
        }
        for (l_1398 = 0; (l_1398 != 11); ++l_1398)
        { /* block id: 587 */
            int8_t l_1402 = 0x1FL;
            uint8_t l_1415 = 1UL;
            struct S0 *l_1416[10];
            uint8_t *l_1418 = (void*)0;
            uint8_t *l_1419 = (void*)0;
            uint8_t *l_1420[7];
            uint64_t **l_1423 = &p_1451->g_81;
            int32_t l_1425 = 0x402767C1L;
            int i;
            for (i = 0; i < 10; i++)
                l_1416[i] = &p_1451->g_223;
            for (i = 0; i < 7; i++)
                l_1420[i] = (void*)0;
            l_1425 = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((p_1451->g_1310 |= l_1402) , ((((VECTOR(int8_t, 8))(0L, l_1402, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(p_1451->g_1403.sdc)).yyxxyyxxxyxxxyxx, ((VECTOR(int8_t, 8))((-1L), l_1402, ((VECTOR(int8_t, 4))(p_1451->g_1404.s6374)), 0x7FL, 0L)).s2024731364603644, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(0L, 0x22L)).yyxx, ((VECTOR(int8_t, 2))((-9L), (-2L))).yyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-8L), 0x04L)).yyyyyyyyyyyyyxxy)).s65d4))).wxwwzwyywwywxwxw))).s6b, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_1405.zxwxyxwwywwzwwwy)).even)).s56, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((((*l_1423) = func_69((safe_unary_minus_func_int16_t_s(((~((safe_rshift_func_uint8_t_u_u((((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1409.yxyyxyxyxyxyyxxy)).hi)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(p_1451->g_1410.sb7f945f1dc47f502)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-6L), 0x654E97FAL, 1L, 0x13CA7326L)).wwwwwyyzyxxzyyzw))))).s8c19)).zywzywwx))).s5 , (p_1451->g_1421 = (((-1L) || (((safe_mod_func_uint16_t_u_u(((((p_1451->g_31.x , 0x58DBL) == (safe_add_func_uint32_t_u_u(l_1398, ((p_1451->g_653.y || p_1451->g_521.w) ^ l_1415)))) , (void*)0) == l_1416[5]), 0x43A0L)) ^ p_1451->g_519.s2) && l_1417)) || l_1402))), 3)) == l_30.sb)) || l_1422))), &p_1451->g_35, &p_1451->g_35, l_1350, p_1451)) == (void*)0), ((VECTOR(int8_t, 2))(0x77L)), 0L, ((VECTOR(int8_t, 2))(0x56L)), 0L, 0x0CL)).s3353400005405724)))))))).odd)), ((VECTOR(int8_t, 8))(0L))))).s63))), ((VECTOR(int8_t, 2))(8L))))).xxyx, ((VECTOR(int8_t, 4))(0x4FL)), ((VECTOR(int8_t, 4))((-1L)))))).yzyzyxxzwzxywzyy)).s9e))), ((VECTOR(int8_t, 4))(1L)))).s3 | FAKE_DIVERGE(p_1451->global_0_offset, get_global_id(0), 10)) , l_1424)), 4L, (-1L), (-6L), l_1347[5][2], ((VECTOR(int32_t, 2))(0x6B06542CL)), 0x2DFE320BL)).hi, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0L))))).ywwzywxw, ((VECTOR(int32_t, 8))(0x0D773D65L))))).s4;
        }
        l_1428 = l_1426;
    }
    (*l_1444) = (((VECTOR(uint32_t, 8))(((l_1398 = ((*l_1450) &= (((***p_1451->g_1220) = (***p_1451->g_1220)) == (void*)0))) , GROUP_DIVERGE(1, 1)), 3UL, FAKE_DIVERGE(p_1451->local_2_offset, get_local_id(2), 10), 1UL, 4294967286UL, ((VECTOR(uint32_t, 2))(1UL)), 1UL)).s3 , (*l_1444));
    return l_30.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_1349
 * writes:
 */
int32_t * func_17(uint32_t  p_18, int32_t ** p_19, int32_t ** p_20, int32_t * p_21, int64_t  p_22, struct S1 * p_1451)
{ /* block id: 576 */
    int16_t l_1351[4][7] = {{0x4E76L,1L,0x4E76L,0x4E76L,1L,0x4E76L,0x4E76L},{0x4E76L,1L,0x4E76L,0x4E76L,1L,0x4E76L,0x4E76L},{0x4E76L,1L,0x4E76L,0x4E76L,1L,0x4E76L,0x4E76L},{0x4E76L,1L,0x4E76L,0x4E76L,1L,0x4E76L,0x4E76L}};
    VECTOR(int32_t, 8) l_1352 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x51976BF7L), 0x51976BF7L), 0x51976BF7L, 5L, 0x51976BF7L);
    int32_t *l_1353 = (void*)0;
    int32_t *l_1354 = (void*)0;
    int32_t *l_1355 = (void*)0;
    int32_t *l_1356 = (void*)0;
    int32_t *l_1357[6][5];
    int32_t l_1358 = 0x2334BFAEL;
    int32_t l_1359 = 6L;
    VECTOR(int8_t, 4) l_1360 = (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x40L), 0x40L);
    uint32_t l_1361 = 4294967295UL;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
            l_1357[i][j] = &p_1451->g_435;
    }
    --l_1361;
    return (*p_20);
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_1031 p_1451->g_8 p_1451->g_526 p_1451->g_223.f0 p_1451->g_525 p_1451->g_450 p_1451->g_33 p_1451->g_306 p_1451->g_102 p_1451->g_223 p_1451->g_527 p_1451->g_643 p_1451->g_84 p_1451->g_109 p_1451->g_110 p_1451->g_140 p_1451->g_116 p_1451->g_117 p_1451->g_162 p_1451->g_1123 p_1451->g_27 p_1451->g_653 p_1451->g_1135 p_1451->g_599 p_1451->g_4 p_1451->g_515 p_1451->g_220 p_1451->g_133 p_1451->g_99 p_1451->g_519 p_1451->g_521 p_1451->g_644 p_1451->g_435 p_1451->g_262 p_1451->g_1189 p_1451->g_551 p_1451->g_81 p_1451->g_1220 p_1451->g_1251 p_1451->g_1266 p_1451->g_1221 p_1451->g_366 p_1451->g_1279 p_1451->g_1281 p_1451->g_1284 p_1451->g_1318 p_1451->g_1342 p_1451->g_338
 * writes: p_1451->g_1037 p_1451->g_84 p_1451->g_110 p_1451->g_162 p_1451->g_206 p_1451->g_599 p_1451->g_102 p_1451->g_1153 p_1451->g_99 p_1451->g_262 p_1451->g_117 p_1451->g_109 p_1451->g_1031 p_1451->g_1250 p_1451->g_306 p_1451->g_223.f0 p_1451->g_1310
 */
int16_t  func_40(uint64_t  p_41, struct S1 * p_1451)
{ /* block id: 448 */
    int16_t l_1028 = (-5L);
    int32_t l_1032[6] = {0x49182ED4L,0x49182ED4L,0x49182ED4L,0x49182ED4L,0x49182ED4L,0x49182ED4L};
    uint16_t l_1040 = 65527UL;
    VECTOR(int32_t, 4) l_1089 = (VECTOR(int32_t, 4))(0x34E7E20FL, (VECTOR(int32_t, 2))(0x34E7E20FL, (-3L)), (-3L));
    VECTOR(uint8_t, 16) l_1095 = (VECTOR(uint8_t, 16))(0xCBL, (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 255UL), 255UL), 255UL, 0xCBL, 255UL, (VECTOR(uint8_t, 2))(0xCBL, 255UL), (VECTOR(uint8_t, 2))(0xCBL, 255UL), 0xCBL, 255UL, 0xCBL, 255UL);
    int8_t **l_1145 = &p_1451->g_599;
    uint64_t *l_1216 = &p_1451->g_223.f0;
    VECTOR(int16_t, 16) l_1252 = (VECTOR(int16_t, 16))(0x45DFL, (VECTOR(int16_t, 4))(0x45DFL, (VECTOR(int16_t, 2))(0x45DFL, 0L), 0L), 0L, 0x45DFL, 0L, (VECTOR(int16_t, 2))(0x45DFL, 0L), (VECTOR(int16_t, 2))(0x45DFL, 0L), 0x45DFL, 0L, 0x45DFL, 0L);
    int32_t l_1267 = (-1L);
    int64_t l_1270 = 0x67C5AAF0392D9094L;
    VECTOR(uint32_t, 2) l_1280 = (VECTOR(uint32_t, 2))(1UL, 2UL);
    uint32_t **l_1299[3];
    int64_t l_1333 = (-1L);
    int32_t *l_1343[9];
    uint16_t l_1344 = 0xC82CL;
    int32_t l_1345[8] = {0x0F0823D0L,0x0F0823D0L,0x0F0823D0L,0x0F0823D0L,0x0F0823D0L,0x0F0823D0L,0x0F0823D0L,0x0F0823D0L};
    int64_t l_1346 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_1299[i] = &p_1451->g_1124[6];
    for (i = 0; i < 9; i++)
        l_1343[i] = &p_1451->g_84[5];
    if ((safe_div_func_int16_t_s_s((l_1032[2] = (safe_mod_func_int64_t_s_s(((&p_1451->g_150 != (void*)0) > ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x4D45CC4E4FA95D70L, 1L)), 0x6EBAC476D4D90F4DL, 0x374916F0C71C584FL)).x), (safe_add_func_int32_t_s_s(((((l_1028 >= (safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))((4L ^ ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1451->g_1031.wzzxwywwyyzxyyyy)).s26)).hi), 255UL, 1UL, (p_41 && p_1451->g_8), ((((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x778F463FE881F125L, 0x1674EFDF4D0D90E5L)).xyxxyyyy)))))), (-1L), p_1451->g_526.y, (l_1028 < 0x05L), p_1451->g_223.f0, 0x247A282F516D15CAL, 0x571C348983E79433L, 0L)).s9 != FAKE_DIVERGE(p_1451->global_1_offset, get_global_id(1), 10)) != l_1028), ((VECTOR(uint8_t, 4))(0x68L)), 255UL, 252UL, l_1028, p_1451->g_525.y, ((VECTOR(uint8_t, 2))(0x10L)), 254UL)).odd, ((VECTOR(uint8_t, 8))(0xA8L))))).s2 , l_1028), l_1028))) & p_1451->g_450.s0) , (-10L)) == p_41), (-1L)))))), p_41)))
    { /* block id: 450 */
        uint32_t l_1033 = 0x6AFB7E36L;
        struct S0 *l_1036 = (void*)0;
        l_1033++;
        p_1451->g_1037 = l_1036;
    }
    else
    { /* block id: 453 */
        uint64_t *l_1041 = &p_1451->g_102;
        VECTOR(int8_t, 8) l_1056 = (VECTOR(int8_t, 8))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x6BL), 0x6BL), 0x6BL, 0x07L, 0x6BL);
        uint16_t *l_1058[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        uint16_t **l_1057 = &l_1058[0][0];
        int32_t l_1068 = 5L;
        int32_t l_1079 = 1L;
        int32_t l_1081 = (-1L);
        int32_t l_1082 = 0x1E6ACDF6L;
        int32_t l_1083 = 0L;
        int32_t l_1084 = (-1L);
        int32_t l_1085 = (-4L);
        int32_t l_1086 = 0x468BFD85L;
        int32_t l_1087 = (-2L);
        int32_t l_1088 = 0x11D5A3B6L;
        uint16_t l_1090 = 0x312AL;
        int32_t *****l_1224 = &p_1451->g_1221;
        VECTOR(uint8_t, 2) l_1259 = (VECTOR(uint8_t, 2))(0x7DL, 254UL);
        VECTOR(int16_t, 8) l_1265 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1B22L), 0x1B22L), 0x1B22L, (-1L), 0x1B22L);
        VECTOR(uint32_t, 8) l_1317 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x998D445FL), 0x998D445FL), 0x998D445FL, 4294967295UL, 0x998D445FL);
        int i, j;
        if ((safe_mod_func_int64_t_s_s((((VECTOR(uint32_t, 4))(0xD9BF5005L, l_1040, 0x6982A61EL, 4294967295UL)).x , (&p_1451->g_102 != l_1041)), GROUP_DIVERGE(0, 1))))
        { /* block id: 454 */
            uint16_t *l_1055 = &l_1040;
            uint16_t **l_1054 = &l_1055;
            int8_t *l_1059[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1060 = 9L;
            int16_t *l_1067 = &l_1028;
            int i;
            l_1068 &= (safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((((*l_1067) = (p_41 , ((safe_lshift_func_uint16_t_u_s(((((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_1054 != (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1056.s30)), 0L, 0x6FL)).lo)).odd , l_1057)), (GROUP_DIVERGE(1, 1) == 0xF9876C35B4C8883DL))) >= (((l_1032[1] = (~(l_1060 = l_1032[2]))) > ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_1056.s1 || p_41), 0x1A23L)), (safe_mul_func_uint8_t_u_u(p_1451->g_33.y, p_1451->g_525.y)))) , 0x45L)) > l_1056.s5)), p_41)) && 0x38F4L) , p_1451->g_1031.z) ^ p_41), p_41)) != 0xD58B9B9DC208DB65L))) != 0x7E6DL), 6)), p_1451->g_306.s3)) || p_1451->g_102)));
        }
        else
        { /* block id: 459 */
            if ((atomic_inc(&p_1451->l_atomic_input[0]) == 4))
            { /* block id: 461 */
                int32_t l_1069 = 0x0664640AL;
                int64_t l_1070 = (-1L);
                int32_t *l_1071 = &l_1069;
                int32_t *l_1072 = (void*)0;
                l_1070 |= l_1069;
                l_1072 = l_1071;
                unsigned int result = 0;
                result += l_1069;
                result += l_1070;
                atomic_add(&p_1451->l_special_values[0], result);
            }
            else
            { /* block id: 464 */
                (1 + 1);
            }
            return l_1056.s5;
        }
        for (l_1040 = 15; (l_1040 > 43); l_1040 = safe_add_func_uint16_t_u_u(l_1040, 1))
        { /* block id: 471 */
            int32_t *l_1075 = &p_1451->g_84[7];
            int32_t *l_1076 = (void*)0;
            int32_t l_1077 = 0L;
            int32_t *l_1078[9];
            int32_t l_1080 = 0x631DC551L;
            uint32_t *l_1104 = (void*)0;
            uint32_t *l_1105 = (void*)0;
            uint32_t *l_1106 = (void*)0;
            uint32_t *l_1107 = (void*)0;
            uint32_t *l_1108 = (void*)0;
            uint32_t *l_1109 = (void*)0;
            uint32_t *l_1110 = (void*)0;
            uint32_t *l_1111 = (void*)0;
            uint32_t *l_1112[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            uint16_t **l_1130[9][1][9] = {{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}},{{&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[0][0],&l_1058[1][0],&l_1058[4][0],&l_1058[1][0]}}};
            VECTOR(int32_t, 4) l_1134 = (VECTOR(int32_t, 4))(0x1A235EBEL, (VECTOR(int32_t, 2))(0x1A235EBEL, 0x2554B98AL), 0x2554B98AL);
            VECTOR(int16_t, 4) l_1160 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 9L), 9L);
            int8_t ***l_1176 = &p_1451->g_598;
            uint64_t *l_1180 = &p_1451->g_223.f0;
            uint64_t **l_1179 = &l_1180;
            int32_t ****l_1210 = &p_1451->g_116;
            struct S0 l_1298 = {18446744073709551615UL};
            uint64_t ***l_1331 = &l_1179;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1078[i] = (void*)0;
            l_1090--;
            if (((((safe_add_func_uint8_t_u_u(p_1451->g_1031.z, ((VECTOR(uint8_t, 16))(l_1095.se2d470ba5cea4b4c)).s3)) & ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x55BE0366L, 0UL)).yyxx)), 0UL, 0x028175A1L, 1UL, 9UL)).s6) & ((((safe_add_func_int8_t_s_s(p_41, (safe_mul_func_int8_t_s_s(l_1089.z, (safe_sub_func_int64_t_s_s(((l_1032[2] = (safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 0UL))) > ((p_1451->g_223 , &l_1077) != (void*)0)), (-6L))))))) > p_1451->g_527.s3) | 2UL) != FAKE_DIVERGE(p_1451->local_2_offset, get_local_id(2), 10))) <= p_1451->g_643.y))
            { /* block id: 474 */
                int8_t l_1117 = 7L;
                (*l_1075) ^= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(((l_1083 | l_1117) || ((p_41 , l_1041) == (void*)0)), 14)), 4));
                if (p_41)
                    continue;
            }
            else
            { /* block id: 477 */
                int32_t *l_1120[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1120[i] = &p_1451->g_84[0];
                for (l_1084 = (-12); (l_1084 == (-3)); l_1084 = safe_add_func_uint8_t_u_u(l_1084, 7))
                { /* block id: 480 */
                    (*p_1451->g_140) = (*p_1451->g_109);
                    if (l_1032[3])
                        continue;
                    (**p_1451->g_116) = l_1120[1];
                }
            }
            for (p_1451->g_162 = 0; (p_1451->g_162 <= 32); p_1451->g_162++)
            { /* block id: 488 */
                uint16_t **l_1129 = &l_1058[3][0];
                int32_t l_1133[4];
                VECTOR(int8_t, 4) l_1138 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L);
                int16_t *l_1146 = (void*)0;
                int16_t *l_1147 = &l_1028;
                int8_t *l_1148 = (void*)0;
                uint64_t *l_1161 = &p_1451->g_102;
                int8_t ***l_1177 = &p_1451->g_598;
                struct S0 l_1178[9] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
                VECTOR(int8_t, 16) l_1188 = (VECTOR(int8_t, 16))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, (-5L)), (-5L)), (-5L), 0x2DL, (-5L), (VECTOR(int8_t, 2))(0x2DL, (-5L)), (VECTOR(int8_t, 2))(0x2DL, (-5L)), 0x2DL, (-5L), 0x2DL, (-5L));
                int8_t l_1209 = 0L;
                int32_t *****l_1223[5] = {&p_1451->g_1221,&p_1451->g_1221,&p_1451->g_1221,&p_1451->g_1221,&p_1451->g_1221};
                VECTOR(uint32_t, 8) l_1316 = (VECTOR(uint32_t, 8))(0x46E2C0B8L, (VECTOR(uint32_t, 4))(0x46E2C0B8L, (VECTOR(uint32_t, 2))(0x46E2C0B8L, 5UL), 5UL), 5UL, 0x46E2C0B8L, 5UL);
                VECTOR(uint64_t, 4) l_1319 = (VECTOR(uint64_t, 4))(0x12E1B68D9C61546DL, (VECTOR(uint64_t, 2))(0x12E1B68D9C61546DL, 18446744073709551615UL), 18446744073709551615UL);
                int i;
                for (i = 0; i < 4; i++)
                    l_1133[i] = (-1L);
                if (((p_1451->g_526.x != l_1090) & ((void*)0 == p_1451->g_1123)))
                { /* block id: 489 */
                    (*l_1075) = p_41;
                }
                else
                { /* block id: 491 */
                    (*l_1075) |= (((0x32L && GROUP_DIVERGE(1, 1)) ^ p_41) && (p_41 & (safe_sub_func_uint8_t_u_u(p_1451->g_27.y, (safe_add_func_uint16_t_u_u((l_1129 != l_1130[1][0][4]), l_1084))))));
                }
                if ((l_1133[0] = (safe_mul_func_int8_t_s_s((+((p_1451->g_653.x > (p_1451->g_1153.y = ((l_1133[2] || (((*l_1041) |= (((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_1134.yw)), ((VECTOR(int32_t, 16))(p_1451->g_1135.wwywwxywzzxywwwz)).s35))).xxxyyyyx)).even, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))((-1L), (safe_add_func_int32_t_s_s(l_1133[3], (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(l_1138.wzwz)).even, (int8_t)(safe_mul_func_int16_t_s_s(((!(safe_mod_func_int16_t_s_s(((*l_1147) = (l_1145 != (void*)0)), (p_1451->g_206.s5 = 0x1B96L)))) != (l_1148 != ((*l_1145) = p_1451->g_599))), ((((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_41, 9UL)), p_41)) && l_1089.x) ^ (*p_1451->g_110)) >= p_1451->g_515.y)))))), 0L, 0x21L)).z <= p_1451->g_220))), 0x2ACA9C18L, (-3L), 0x66E995D4L, ((VECTOR(int32_t, 8))((-1L))), p_41, 0x39214388L, 0x16B91327L)), ((VECTOR(int32_t, 16))(0L))))).sc552, ((VECTOR(int32_t, 4))(0x4B4BFED1L))))).z , 0UL)) && l_1028)) < p_41))) != p_41)), 0x71L))))
                { /* block id: 500 */
                    int16_t l_1154 = (-7L);
                    VECTOR(int16_t, 4) l_1157 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L);
                    uint8_t *l_1162 = (void*)0;
                    uint8_t *l_1163 = (void*)0;
                    uint8_t *l_1164 = (void*)0;
                    uint8_t *l_1165 = (void*)0;
                    uint8_t *l_1166 = (void*)0;
                    uint8_t *l_1167 = (void*)0;
                    uint8_t *l_1168 = (void*)0;
                    uint8_t *l_1169 = (void*)0;
                    uint8_t *l_1170 = (void*)0;
                    uint8_t *l_1171[6];
                    VECTOR(uint16_t, 4) l_1192 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB4ECL), 0xB4ECL);
                    int32_t *****l_1211 = &l_1210;
                    int32_t ****l_1213[4];
                    int32_t *****l_1212 = &l_1213[1];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1171[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_1213[i] = &p_1451->g_116;
                    l_1154 = p_41;
                    if (((safe_div_func_uint32_t_u_u((p_1451->g_133[2] != (((((l_1154 , ((((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_1157.zxxy)).even, (int16_t)(safe_rshift_func_int8_t_s_s((-1L), p_41)), (int16_t)((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1160.zyxw)).xzyzzyzxwyxzzwzw)), ((VECTOR(int16_t, 16))(0x5A48L, 0x11BAL, ((l_1161 != &p_41) == (--p_1451->g_99.s6)), ((((**p_1451->g_109) | (safe_mod_func_uint8_t_u_u(((~p_41) == ((l_1176 != l_1177) || l_1138.x)), p_1451->g_519.s2))) | p_1451->g_526.y) , 0x53CAL), ((VECTOR(int16_t, 8))(0L)), p_1451->g_521.y, 5L, (-1L), 0x6286L)), ((VECTOR(int16_t, 16))(1L))))).even, ((VECTOR(int16_t, 8))(0L)))))))).s0))).xxyxxxxxyyxyxxyy, (int16_t)p_1451->g_515.x, (int16_t)p_1451->g_644.x))).sf & p_1451->g_435) , l_1178[7])) , GROUP_DIVERGE(2, 1)) , l_1157.w) == p_41) , (void*)0)), l_1157.w)) , p_41))
                    { /* block id: 503 */
                        uint64_t ***l_1181 = &l_1179;
                        (*l_1181) = l_1179;
                    }
                    else
                    { /* block id: 505 */
                        l_1087 |= ((p_1451->g_262.s1 |= 0xEE9DL) , ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(0x13L, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(l_1188.sb494060c)).s32, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x13L, 0x21L)), 0x76L, (-5L))))).lo))), 0x7DL, ((VECTOR(int8_t, 4))(p_1451->g_1189.wwyz)), 0x5EL, 0L, (+((*l_1075) |= (l_1133[2] = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1192.yxzz)).xwyywxyywwxzxzzy)).s03)).xxxyxxyy)).s2, ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((p_1451->g_643.z ^ p_41), 6)), (((!(((*l_1147) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((-1L), ((l_1078[0] == (void*)0) < p_1451->g_27.y))), ((safe_rshift_func_int8_t_s_u((p_41 , p_41), p_1451->g_33.y)) != GROUP_DIVERGE(2, 1)))), p_1451->g_27.y))) != l_1089.w)) == 0x3FAE125CL) < 0x44F7L))), p_1451->g_515.x)), 0UL)) != (-3L))))))), 0x33L, p_41, ((VECTOR(int8_t, 2))(0L)), 0x53L)).sd, GROUP_DIVERGE(2, 1))), 0x6FL)), 0x62AD372DL)) || l_1209));
                    }
                    (*l_1075) = (((*l_1212) = ((*l_1211) = l_1210)) != &p_1451->g_116);
                }
                else
                { /* block id: 515 */
                    int32_t l_1214 = (-9L);
                    uint64_t *l_1215 = (void*)0;
                    int32_t ***l_1219 = &p_1451->g_109;
                    int32_t ******l_1222[1][7][10] = {{{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220},{&p_1451->g_1220,&p_1451->g_1220,(void*)0,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220,&p_1451->g_1220}}};
                    int64_t *l_1225 = (void*)0;
                    int64_t *l_1226 = (void*)0;
                    int64_t *l_1227 = (void*)0;
                    int64_t *l_1228 = (void*)0;
                    int64_t *l_1229 = (void*)0;
                    int64_t *l_1230 = (void*)0;
                    int64_t *l_1231 = (void*)0;
                    int64_t *l_1232 = (void*)0;
                    int64_t *l_1233 = (void*)0;
                    int64_t *l_1234 = (void*)0;
                    int64_t *l_1235 = (void*)0;
                    int64_t *l_1236 = (void*)0;
                    int64_t *l_1237 = (void*)0;
                    int64_t *l_1238 = (void*)0;
                    int64_t *l_1239 = (void*)0;
                    int64_t *l_1240 = (void*)0;
                    int64_t *l_1241 = (void*)0;
                    int64_t *l_1242[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1242[i] = (void*)0;
                    l_1214 |= (*p_1451->g_110);
                    (*p_1451->g_140) = func_63(l_1215, (!(p_1451->g_551.s0 & (p_1451->g_81 == l_1216))), (safe_lshift_func_uint16_t_u_s(l_1028, (((*l_1219) = ((p_41 < l_1081) , ((**l_1210) = (*p_1451->g_116)))) != ((((p_1451->g_1031.w ^= (((l_1223[4] = p_1451->g_1220) != l_1224) < 4294967292UL)) >= 0x7F6C726597F29A00L) <= (-7L)) , (void*)0)))), p_1451->g_527.s3, l_1040, p_1451);
                    for (l_1087 = 0; (l_1087 < 27); l_1087 = safe_add_func_int64_t_s_s(l_1087, 4))
                    { /* block id: 524 */
                        uint16_t l_1245 = 0x19EFL;
                        VECTOR(uint8_t, 2) l_1260 = (VECTOR(uint8_t, 2))(0UL, 0x46L);
                        int i;
                        l_1245++;
                        l_1032[1] &= 0x6DB98EF3L;
                        atomic_xor(&p_1451->g_atomic_reduction[get_linear_group_id()], (p_41 > ((l_1245 != (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((((p_1451->g_1250 = &p_1451->g_598) != (void*)0) < ((p_1451->g_262.s1 = (l_1095.s8 > ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1451->g_1251.xxyxyyyyyyxyyyxx)).s9b3b)).lo)).odd)) ^ ((VECTOR(int16_t, 16))(l_1252.sf2f35cd4f482a40b)).s5)) != (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 2))(l_1259.yx)).yyxxyxxxxxyyxxxy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(0x5FL, 0UL)).yyyx, ((VECTOR(uint8_t, 16))(l_1260.yyxxxxxyxyxxxyyy)).s5053))).yzwwzwww, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((l_1267 = ((p_1451->g_306.s0--) != (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1265.s2471)).xzxxwwyxwzzywzxw)).sc6, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(7L, 0x2157L)), (-10L), 5L)).lo))).hi, ((VECTOR(uint16_t, 4))(p_1451->g_1266.s4813)).x)))) < ((void*)0 != l_1176)), 0x79L, 5UL, 255UL)).odd)))).yxxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(0UL, 0x66L, 0xD8L, (((p_1451->g_643.w > (safe_rshift_func_uint16_t_u_u(p_41, GROUP_DIVERGE(1, 1)))) ^ p_41) != (*****l_1224)), 255UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 8))(0x11L)), 0UL, 250UL)).odd))).s3430575516314371, ((VECTOR(uint8_t, 16))(1UL))))).sbb)))).xxxy))).wxxxwywz))).s5536155426101771, ((VECTOR(uint8_t, 16))(0xBAL))))).sd & l_1270), (-1L))) || FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10)), p_1451->g_366)), 65535UL)))))) == (*****l_1224))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1451->v_collective += p_1451->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if ((*****l_1224))
                            continue;
                    }
                }
                for (l_1081 = (-1); (l_1081 <= (-9)); l_1081 = safe_sub_func_int16_t_s_s(l_1081, 4))
                { /* block id: 537 */
                    int16_t l_1278 = 1L;
                    int32_t l_1291 = 0x1D9AB022L;
                    int32_t l_1292 = (-1L);
                    struct S0 *l_1293 = &l_1178[7];
                    int64_t *l_1320 = (void*)0;
                    VECTOR(uint16_t, 16) l_1328 = (VECTOR(uint16_t, 16))(0x7B15L, (VECTOR(uint16_t, 4))(0x7B15L, (VECTOR(uint16_t, 2))(0x7B15L, 0UL), 0UL), 0UL, 0x7B15L, 0UL, (VECTOR(uint16_t, 2))(0x7B15L, 0UL), (VECTOR(uint16_t, 2))(0x7B15L, 0UL), 0x7B15L, 0UL, 0x7B15L, 0UL);
                    uint64_t ***l_1332 = &l_1179;
                    uint32_t l_1339[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1339[i] = 0UL;
                    for (p_1451->g_223.f0 = 0; (p_1451->g_223.f0 == 36); p_1451->g_223.f0++)
                    { /* block id: 540 */
                        int32_t ******l_1275 = &l_1223[4];
                        l_1292 = (!(l_1291 = (l_1275 != (((safe_sub_func_int8_t_s_s((l_1278 , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1451->g_1279.s36)).xyxx)).w), (((((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_1280.yyxyyxyy)).s2554366437517410)).sbbf8)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(p_1451->g_1281.s41717137)).even, (uint32_t)(l_1032[2] = (safe_div_func_int32_t_s_s((****p_1451->g_1221), p_41)))))).odd))))).xxyy, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(p_1451->g_1284.s31)).yxyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967289UL)), 0UL, 0UL)))))))).z != 1L) > (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((0x1D4ED5D281AB12F6L > ((-1L) != (safe_lshift_func_int8_t_s_u(p_41, ((((FAKE_DIVERGE(p_1451->group_2_offset, get_group_id(2), 10) , ((0xD61D21B84D61A784L | 1UL) <= p_41)) <= 255UL) <= p_41) , l_1278))))), 255UL)), l_1252.s4))) != (-7L)))) , 1UL) , (void*)0))));
                        if (p_41)
                            continue;
                        if (p_41)
                            break;
                    }
                    atomic_max(&p_1451->g_atomic_reduction[get_linear_group_id()], (p_41 & (0xC6L > p_41)));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1451->v_collective += p_1451->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*l_1293) = p_1451->g_223;
                    if ((l_1032[0] = ((*l_1075) = (****p_1451->g_1221))))
                    { /* block id: 551 */
                        VECTOR(int16_t, 16) l_1308 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x3040L), 0x3040L), 0x3040L, (-9L), 0x3040L, (VECTOR(int16_t, 2))((-9L), 0x3040L), (VECTOR(int16_t, 2))((-9L), 0x3040L), (-9L), 0x3040L, (-9L), 0x3040L);
                        int32_t *l_1309[6];
                        VECTOR(uint8_t, 16) l_1313 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x66L), 0x66L), 0x66L, 255UL, 0x66L, (VECTOR(uint8_t, 2))(255UL, 0x66L), (VECTOR(uint8_t, 2))(255UL, 0x66L), 255UL, 0x66L, 255UL, 0x66L);
                        int64_t *l_1321[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                        VECTOR(uint16_t, 4) l_1324 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x5AFDL), 0x5AFDL);
                        VECTOR(uint64_t, 4) l_1327 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x927CA2CF745F63C2L), 0x927CA2CF745F63C2L);
                        int32_t l_1338 = 0x097296FDL;
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_1309[i] = &p_1451->g_1310;
                        (****l_1224) = func_63(&p_1451->g_102, (p_1451->g_1310 = ((safe_sub_func_int8_t_s_s(l_1089.z, ((((safe_mod_func_uint8_t_u_u((p_41 || (((l_1298 , FAKE_DIVERGE(p_1451->group_2_offset, get_group_id(2), 10)) && p_41) != ((l_1299[0] == ((((((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((-3L) < (((VECTOR(int8_t, 8))(((safe_mod_func_uint64_t_u_u((~((p_41 | ((safe_mul_func_int16_t_s_s(p_1451->g_551.s5, FAKE_DIVERGE(p_1451->local_1_offset, get_local_id(1), 10))) , p_41)) & GROUP_DIVERGE(1, 1))), p_1451->g_223.f0)) ^ 0x26BF2EE4A03880A0L), l_1032[2], 0x27L, l_1308.sa, ((VECTOR(int8_t, 2))(0x72L)), 1L, 1L)).s4 ^ l_1308.s2)), p_1451->g_1135.z)) ^ l_1252.s7), 0x39L)) != p_1451->g_450.s3) , 0x71L) == 0x35L) && FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10)) , (void*)0)) == 0x3AL))), (*****l_1224))) | (-5L)) && 0x2FL) != p_41))) & p_41)), p_41, p_41, p_41, p_1451);
                        if (l_1040)
                            break;
                        l_1292 = (l_1082 = (safe_div_func_int32_t_s_s((((((p_1451->g_450.s0 & ((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x9DL, ((VECTOR(uint8_t, 4))(l_1313.sb033)), (safe_mul_func_uint8_t_u_u((*****l_1224), ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(l_1316.s70)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(0UL, 1UL, 0UL, 0x1AC893E0L)), ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_1317.s0707374320712316)).sf52a)).wxxxzwxz)).s31)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x4940283BL, 4294967295UL))))))).yxyxxxxxyxxyxxxy, ((VECTOR(uint32_t, 2))(p_1451->g_1318.yx)).xyxxxyxyxyxyxyxx))).s8a22))).wwyxywxz)).s40))), GROUP_DIVERGE(0, 1), 0UL, 0xB61DBEA8L, 0UL, 0x2786FF01L)).odd)).x >= (!(((l_1079 = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1319.xw)), 0x5D23BFF5F6D460BFL, 18446744073709551615UL)).z >= (~(l_1320 == l_1321[1][0])))) > (((+(((*l_1057) = (void*)0) == &p_1451->g_366)) , &p_1451->g_133[2]) != (void*)0)) | ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1324.zyzz)).yzxywyzw)).s72)).hi, 13)) > (+((safe_rshift_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_1327.wwzx)).wzyxxwxwzxyxzzzz)).s6 < (((((*l_1075) &= (((VECTOR(uint16_t, 16))(l_1328.sb2337a63f253613a)).s0 < (((safe_rshift_func_int16_t_s_u(((*l_1147) ^= ((l_1331 == l_1332) , l_1327.w)), 12)) | l_1333) <= p_1451->g_1189.x))) == 0x2339F728L) , 0UL) < 0L)), 5)) >= l_1324.y)))))) && p_41))), 0xA7L, 2UL)).s02)).lo && l_1328.se) ^ (*****l_1224)) != 0L) ^ 4UL)) ^ p_1451->g_1318.x) <= p_41) < l_1328.sc) && p_41), GROUP_DIVERGE(1, 1))));
                        (*l_1075) = (0x78C8L | (((safe_rshift_func_uint16_t_u_s(l_1328.s1, 0)) , (((((safe_rshift_func_uint8_t_u_u(((*****l_1224) ^ (l_1338 = (l_1032[3] = p_41))), p_41)) && (-1L)) ^ 0x1B2B3BB8L) < ((void*)0 != &p_41)) > p_41)) , p_1451->g_262.s6));
                    }
                    else
                    { /* block id: 564 */
                        l_1339[1]--;
                    }
                }
            }
            (****p_1451->g_1220) = (p_41 , (****l_1224));
        }
        return p_1451->g_1284.s2;
    }
    l_1345[1] = (l_1344 = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1451->g_1342.zz)).xyyyxyxx)).even)).odd)).yyxy)).w < p_1451->g_338.y));
    return l_1346;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_116 p_1451->g_117 p_1451->g_109 p_1451->g_110 p_1451->g_8 p_1451->g_4 p_1451->g_150 p_1451->g_99 p_1451->g_223 p_1451->g_162 p_1451->g_96 p_1451->g_84 p_1451->g_133 p_1451->g_81 p_1451->g_338 p_1451->g_435 p_1451->g_551 p_1451->g_515 p_1451->l_comm_values p_1451->g_27 p_1451->g_519 p_1451->g_102 p_1451->g_516 p_1451->g_526 p_1451->g_643 p_1451->g_644 p_1451->g_653
 * writes: p_1451->g_110 p_1451->g_162 p_1451->g_84 p_1451->g_220 p_1451->g_99 p_1451->g_435 p_1451->g_526 p_1451->g_102 p_1451->g_598 p_1451->g_223.f0
 */
struct S0  func_50(int8_t  p_51, uint16_t  p_52, struct S1 * p_1451)
{ /* block id: 109 */
    int32_t *l_241 = &p_1451->g_4;
    uint16_t *l_249 = &p_1451->g_162;
    uint16_t **l_248 = &l_249;
    int32_t l_250 = (-1L);
    uint32_t l_268 = 4294967295UL;
    uint32_t l_269 = 0x43B05D4DL;
    VECTOR(int64_t, 4) l_286 = (VECTOR(int64_t, 4))(0x5652D0F0CD6CE9E9L, (VECTOR(int64_t, 2))(0x5652D0F0CD6CE9E9L, 0x2F1B3B3F82F0E3FBL), 0x2F1B3B3F82F0E3FBL);
    int64_t l_313 = 0x79847B0FE2D9C7C9L;
    struct S0 l_321 = {0x32574745939E3DA6L};
    int8_t *l_379 = (void*)0;
    int8_t **l_378 = &l_379;
    uint8_t *l_381 = (void*)0;
    VECTOR(int32_t, 2) l_399 = (VECTOR(int32_t, 2))(0L, (-3L));
    uint32_t l_415[10][5] = {{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL},{0UL,0UL,0xE3B2298EL,0xA9329BD9L,0xE3B2298EL}};
    uint64_t l_442[4];
    uint32_t l_447 = 0xBF54EFDEL;
    VECTOR(int16_t, 2) l_466 = (VECTOR(int16_t, 2))(0x513FL, (-1L));
    VECTOR(uint32_t, 8) l_520 = (VECTOR(uint32_t, 8))(0xB3945254L, (VECTOR(uint32_t, 4))(0xB3945254L, (VECTOR(uint32_t, 2))(0xB3945254L, 0x82AF702DL), 0x82AF702DL), 0x82AF702DL, 0xB3945254L, 0x82AF702DL);
    VECTOR(uint64_t, 16) l_531 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x99D5224F25DA586AL), 0x99D5224F25DA586AL), 0x99D5224F25DA586AL, 1UL, 0x99D5224F25DA586AL, (VECTOR(uint64_t, 2))(1UL, 0x99D5224F25DA586AL), (VECTOR(uint64_t, 2))(1UL, 0x99D5224F25DA586AL), 1UL, 0x99D5224F25DA586AL, 1UL, 0x99D5224F25DA586AL);
    VECTOR(uint16_t, 2) l_535 = (VECTOR(uint16_t, 2))(65535UL, 2UL);
    VECTOR(uint16_t, 2) l_554 = (VECTOR(uint16_t, 2))(0UL, 65530UL);
    VECTOR(uint16_t, 4) l_596 = (VECTOR(uint16_t, 4))(0x3E22L, (VECTOR(uint16_t, 2))(0x3E22L, 0xB56CL), 0xB56CL);
    int8_t ***l_597[5];
    VECTOR(uint8_t, 4) l_627 = (VECTOR(uint8_t, 4))(0x42L, (VECTOR(uint8_t, 2))(0x42L, 5UL), 5UL);
    VECTOR(int32_t, 16) l_652 = (VECTOR(int32_t, 16))(0x48FF28B4L, (VECTOR(int32_t, 4))(0x48FF28B4L, (VECTOR(int32_t, 2))(0x48FF28B4L, 0x33A25009L), 0x33A25009L), 0x33A25009L, 0x48FF28B4L, 0x33A25009L, (VECTOR(int32_t, 2))(0x48FF28B4L, 0x33A25009L), (VECTOR(int32_t, 2))(0x48FF28B4L, 0x33A25009L), 0x48FF28B4L, 0x33A25009L, 0x48FF28B4L, 0x33A25009L);
    int32_t l_681 = 0x4107FDA3L;
    uint16_t l_682 = 0x4139L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_442[i] = 0UL;
    for (i = 0; i < 5; i++)
        l_597[i] = &l_378;
    (**p_1451->g_116) = l_241;
    for (p_51 = 0; (p_51 > (-11)); p_51--)
    { /* block id: 113 */
        int16_t l_247 = 0x4E2CL;
        int16_t *l_254 = (void*)0;
        int16_t *l_255 = &l_247;
        int32_t l_267[9];
        VECTOR(int32_t, 2) l_284 = (VECTOR(int32_t, 2))(0x3FA23E02L, 1L);
        VECTOR(uint32_t, 8) l_285 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x9C0ABDC0L), 0x9C0ABDC0L), 0x9C0ABDC0L, 0UL, 0x9C0ABDC0L);
        int32_t l_310 = 1L;
        int64_t l_314[3][9] = {{0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L},{0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L},{0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L,0x1D21E9CE888E3D81L,(-1L),0x1D21E9CE888E3D81L}};
        int32_t l_316 = 0x2CED354EL;
        struct S0 l_318 = {18446744073709551614UL};
        int8_t *l_335 = (void*)0;
        int8_t **l_334 = &l_335;
        int8_t l_367 = (-1L);
        int16_t l_434 = (-6L);
        uint32_t l_437 = 0x2D667FF0L;
        VECTOR(int64_t, 2) l_441 = (VECTOR(int64_t, 2))(0x03B2DA0C6AE4CC57L, 0x067DA67200DE4D2FL);
        int32_t l_470 = 0x0D1D13ADL;
        int32_t ****l_478 = &p_1451->g_116;
        int32_t l_495 = (-1L);
        VECTOR(int8_t, 8) l_585 = (VECTOR(int8_t, 8))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x26L), 0x26L), 0x26L, 0x6BL, 0x26L);
        int i, j;
        for (i = 0; i < 9; i++)
            l_267[i] = 1L;
        if (p_51)
        { /* block id: 114 */
            if ((**p_1451->g_109))
                break;
        }
        else
        { /* block id: 116 */
            int32_t *l_246[5];
            int i;
            for (i = 0; i < 5; i++)
                l_246[i] = &p_1451->g_84[7];
            l_247 ^= (safe_rshift_func_uint16_t_u_u((&p_51 == (void*)0), 1));
            l_250 = (((void*)0 != l_248) || (l_247 , p_52));
        }
        if ((0x48EDL ^ (l_269 = (((safe_unary_minus_func_uint64_t_u(((p_51 , p_51) , (safe_rshift_func_int16_t_s_u(((*l_255) ^= 0x1E23L), ((**l_248) = (((-8L) ^ (safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_51 < ((VECTOR(uint16_t, 16))(65535UL, ((void*)0 != (*p_1451->g_116)), 0UL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1451->g_262.sb4edd34a8c5b16d3)).s4a9a)).wxwzxzzwxzywywwy, ((VECTOR(uint16_t, 2))(0x9090L, 0xC004L)).yyyxyxxxxxyyyxyy))).sd0, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_241) , (*l_241)), p_1451->g_99.sc)) <= p_1451->g_206.s8), (*l_241))), l_267[7], ((VECTOR(uint16_t, 2))(65535UL)), 0UL, ((VECTOR(uint16_t, 2))(0x1674L)), 65530UL)).s7140455112765267)).s23, ((VECTOR(uint16_t, 2))(65535UL))))), 65535UL, ((VECTOR(uint16_t, 4))(0xDD56L)), 0UL, p_51, 65526UL, p_51, 9UL, 65532UL)).sa), GROUP_DIVERGE(2, 1))), l_267[3])) , p_1451->g_150), l_268))) < p_1451->g_99.s3))))))) <= 0x64CCL) < 0xC86A8BDDL))))
        { /* block id: 123 */
            int64_t *l_299 = (void*)0;
            int64_t *l_300[5];
            uint8_t *l_305[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_307[8] = {0x2DFC2FBDL,(-1L),0x2DFC2FBDL,0x2DFC2FBDL,(-1L),0x2DFC2FBDL,0x2DFC2FBDL,(-1L)};
            int16_t *l_308 = (void*)0;
            int16_t *l_309[3][3];
            uint16_t *l_311 = (void*)0;
            int32_t l_312 = 0x086A7733L;
            int32_t *l_315 = &p_1451->g_84[1];
            int32_t *l_317 = &l_307[5];
            struct S0 l_322 = {0xC2CC62D4CC2BFB4DL};
            int8_t *l_333[6][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int8_t **l_332 = &l_333[3][6][0];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_300[i] = (void*)0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_309[i][j] = (void*)0;
            }
            (*l_317) = (l_316 &= ((*l_315) ^= (safe_add_func_uint32_t_u_u((((p_1451->g_223 , (++(*l_249))) | (safe_add_func_uint8_t_u_u(((((VECTOR(int32_t, 2))((-8L), 0x5C24B93AL)).lo || (safe_mul_func_uint16_t_u_u(((p_1451->g_96.s4 <= 0L) <= ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_312 ^= (safe_div_func_uint16_t_u_u((((((((l_250 = ((p_52 | ((VECTOR(uint16_t, 16))(65534UL, 1UL, (((((((((l_310 &= (p_1451->g_206.s0 = (!(((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(l_284.yxyx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_285.s0040)).lo)).xyxy))).odd, ((VECTOR(int64_t, 2))(l_286.xy))))).yxyy)))), (p_1451->g_206.sa & ((safe_sub_func_uint64_t_u_u(p_1451->g_99.s7, ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(((((*l_255) = (safe_rshift_func_int16_t_s_u(p_1451->g_220, FAKE_DIVERGE(p_1451->group_2_offset, get_group_id(2), 10)))) & GROUP_DIVERGE(1, 1)) >= (p_1451->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1451->tid, 19))] = p_1451->g_33.y)), (((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_267[3] |= (0x06327222L > (-7L))), p_1451->g_96.s5)), 0x52L)) != p_52) <= 0x06FD94D4FCC94A39L))) , 65527UL) >= p_51), l_284.y)), 0x28L, 0x68L, (*l_241), 0x75L, ((VECTOR(int8_t, 2))(0x55L)), 0L)), ((VECTOR(int8_t, 8))(0x58L))))).s7, 0x33L)), l_307[3])) >= l_307[3]))) != (*l_241))), ((VECTOR(int64_t, 2))(0L)), p_51, ((VECTOR(int64_t, 2))((-8L))), 0x34CB6625C39C28E8L, ((VECTOR(int64_t, 2))(0x70DAF1D0D59C8BFBL)), 0L, 0L, 0L)).sb & 0xA8DDDDBC35AC691DL) || 5L) != (*l_241))))) <= p_1451->g_306.sa) ^ l_284.y) , (**p_1451->g_109)) > l_285.s0) , 1UL) > p_1451->g_306.sa) , l_300[2]) == &p_1451->g_102), 0UL, FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10), ((VECTOR(uint16_t, 8))(2UL)), 3UL, 1UL, 1UL)).s7) , l_307[3])) != 0x9EL) , GROUP_DIVERGE(2, 1)) != l_307[3]) == 0xC0L) , (void*)0) != &p_1451->g_140), p_52))) ^ l_313), p_52)), l_284.y)), l_310, ((VECTOR(int32_t, 4))(0L)), 8L, 2L)).lo)).wzyzywzz, ((VECTOR(uint32_t, 8))(0x277D689EL))))).s26)).yyyyyyxx)).s3 > (*l_241)) > 0x4253L)), 0x75ACL))) , p_1451->g_150), p_51))) < l_314[1][5]), 4294967291UL))));
            if ((*l_241))
            { /* block id: 135 */
                struct S0 *l_319 = (void*)0;
                struct S0 *l_320[7][10] = {{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318},{&l_318,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&p_1451->g_223,&l_318,&l_318,&l_318,&l_318}};
                int i, j;
                l_321 = l_318;
                return l_322;
            }
            else
            { /* block id: 138 */
                int8_t *l_330 = (void*)0;
                int8_t **l_329 = &l_330;
                int8_t ***l_331 = &l_329;
                (*l_317) ^= (+0x6F14D4A0L);
                (*l_317) = (~(l_316 , ((l_318.f0 >= (~((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))((*l_241), ((((*l_331) = l_329) == (((((l_334 = l_332) == (void*)0) != (p_1451->g_150 >= (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(p_1451->g_338.yx)).xxyxyyyyyyyyyxyx, ((VECTOR(uint8_t, 4))(1UL, 0x25L, 0xC7L, 0xA7L)).xwywyxxzwwxxyxxx))))).s0, (safe_rshift_func_uint8_t_u_u(0x32L, 0)))))) == ((*l_241) & p_51)) , &p_1451->g_133[2])) ^ GROUP_DIVERGE(0, 1)), 0x78L, (-2L))).even, ((VECTOR(int8_t, 2))((-1L)))))).even, p_1451->g_99.s0)), 11)), l_284.y)) >= (-1L)))) < 0x1C4FL)));
            }
        }
        else
        { /* block id: 144 */
            uint8_t l_349 = 7UL;
            VECTOR(uint64_t, 8) l_368 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 18446744073709551606UL, 18446744073709551609UL);
            int32_t l_384 = 0L;
            uint8_t l_417 = 0xC1L;
            int32_t l_436 = 0x60661AF3L;
            int8_t l_443[8] = {0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL};
            int32_t l_444 = 0x5B09391DL;
            int32_t l_445 = (-7L);
            int32_t l_446 = 0x0DE20CBCL;
            VECTOR(int16_t, 2) l_467 = (VECTOR(int16_t, 2))(6L, (-8L));
            int64_t l_469 = 0x1B35E40D5BDC5913L;
            uint32_t *l_479 = &l_415[7][3];
            int32_t **l_488 = (void*)0;
            int32_t *l_497 = &l_470;
            uint64_t *l_498[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(uint32_t, 4) l_513 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
            VECTOR(uint32_t, 4) l_518 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xE882120FL), 0xE882120FL);
            VECTOR(uint32_t, 4) l_522 = (VECTOR(uint32_t, 4))(0x839C7F78L, (VECTOR(uint32_t, 2))(0x839C7F78L, 0x484A9785L), 0x484A9785L);
            int i;
            for (p_1451->g_220 = (-27); (p_1451->g_220 == 10); p_1451->g_220 = safe_add_func_int64_t_s_s(p_1451->g_220, 8))
            { /* block id: 147 */
                uint8_t *l_350 = (void*)0;
                uint8_t *l_351 = (void*)0;
                uint8_t *l_352 = (void*)0;
                uint8_t *l_353 = (void*)0;
                uint8_t *l_354 = (void*)0;
                uint8_t *l_355 = (void*)0;
                VECTOR(int8_t, 16) l_362 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x4DL), 0x4DL), 0x4DL, 0x6AL, 0x4DL, (VECTOR(int8_t, 2))(0x6AL, 0x4DL), (VECTOR(int8_t, 2))(0x6AL, 0x4DL), 0x6AL, 0x4DL, 0x6AL, 0x4DL);
                int32_t *l_365 = &l_316;
                uint64_t l_369 = 0x2DC694FDEB0F3B1CL;
                int8_t **l_376[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t ***l_377 = &l_376[0];
                uint64_t *l_380[7][8][4] = {{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}},{{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0},{&l_369,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_385 = &p_1451->g_84[3];
                int64_t l_418 = (-8L);
                int32_t l_421 = 0x4561E61FL;
                int32_t l_422 = (-1L);
                VECTOR(int32_t, 16) l_433 = (VECTOR(int32_t, 16))(0x56788AE8L, (VECTOR(int32_t, 4))(0x56788AE8L, (VECTOR(int32_t, 2))(0x56788AE8L, 0L), 0L), 0L, 0x56788AE8L, 0L, (VECTOR(int32_t, 2))(0x56788AE8L, 0L), (VECTOR(int32_t, 2))(0x56788AE8L, 0L), 0x56788AE8L, 0L, 0x56788AE8L, 0L);
                int32_t ****l_459 = &p_1451->g_116;
                int32_t l_468[6] = {0x18C4CC30L,1L,0x18C4CC30L,0x18C4CC30L,1L,0x18C4CC30L};
                struct S0 *l_471 = &l_318;
                int i, j, k;
                (*l_365) |= (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_1451->g_133[4] == (void*)0), l_247)), 10)) == ((((l_349 <= ((p_1451->g_99.s3 = 6UL) >= (((l_368.s5 &= ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_362.sce)).odd, (((VECTOR(uint16_t, 2))(65535UL, 0x07F3L)).odd || ((VECTOR(int16_t, 16))((l_367 = (+((safe_mul_func_uint8_t_u_u((~((l_365 == l_365) , (p_1451->g_366 = (*l_241)))), (l_285.s0 , p_51))) & p_1451->g_338.y))), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 2))(0x7B4DL)), ((VECTOR(int16_t, 4))(0x6CCEL)), 0x45EAL)).s4))), 3)), p_51)) , p_52)) , p_1451->g_81) == p_1451->g_81))) , p_52) > l_369) , p_52)), p_1451->g_96.s1));
            }
            if (p_52)
                continue;
            if ((safe_lshift_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((&p_1451->g_116 == l_478) <= p_1451->g_96.s0) >= (--(*l_479))) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xD207L, (p_51 , ((((l_399.x = (safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_436 <= (p_52 & (l_488 == &l_241))), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((!(p_1451->g_99.s8 | 1UL)) < 0UL), 4L)), p_1451->g_96.s2)))) < p_1451->g_450.s3), 0L)) == GROUP_DIVERGE(2, 1)), p_1451->g_306.s5))) , (void*)0) == (*l_478)) > (-4L))), 0xD947L, 2UL)), 0xD82CL, 0x7237L, 9UL, 0x1A13L)).s5), l_495)), p_52)) & 0x061C9E11L) > (****l_478)) , (-2L)) == 65529UL), (*l_241))))
            { /* block id: 188 */
                int32_t *l_496 = &p_1451->g_4;
                uint64_t *l_499 = &l_321.f0;
                int32_t *l_500 = &p_1451->g_84[6];
                l_497 = l_496;
                (*l_500) = (l_498[6] == (((void*)0 == p_1451->g_133[2]) , l_499));
            }
            else
            { /* block id: 191 */
                VECTOR(uint32_t, 16) l_523 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967293UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), 4294967293UL, 4294967295UL, 4294967293UL, 4294967295UL);
                uint32_t l_575[3][2][4] = {{{4294967295UL,4294967290UL,0x309474D7L,4294967295UL},{4294967295UL,4294967290UL,0x309474D7L,4294967295UL}},{{4294967295UL,4294967290UL,0x309474D7L,4294967295UL},{4294967295UL,4294967290UL,0x309474D7L,4294967295UL}},{{4294967295UL,4294967290UL,0x309474D7L,4294967295UL},{4294967295UL,4294967290UL,0x309474D7L,4294967295UL}}};
                int i, j, k;
                for (l_470 = 0; (l_470 >= 18); l_470++)
                { /* block id: 194 */
                    VECTOR(uint32_t, 8) l_514 = (VECTOR(uint32_t, 8))(0xF31AC1A2L, (VECTOR(uint32_t, 4))(0xF31AC1A2L, (VECTOR(uint32_t, 2))(0xF31AC1A2L, 0UL), 0UL), 0UL, 0xF31AC1A2L, 0UL);
                    VECTOR(uint32_t, 2) l_524 = (VECTOR(uint32_t, 2))(4294967288UL, 0xE025A2F0L);
                    uint16_t l_530 = 1UL;
                    struct S0 *l_533[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    VECTOR(uint8_t, 2) l_537 = (VECTOR(uint8_t, 2))(1UL, 255UL);
                    uint64_t *l_558 = (void*)0;
                    uint64_t *l_559[10] = {&l_442[3],&p_1451->g_102,&p_1451->g_102,&p_1451->g_102,&l_442[3],&l_442[3],&p_1451->g_102,&p_1451->g_102,&p_1451->g_102,&l_442[3]};
                    int32_t l_560[4];
                    int32_t *l_584 = &l_445;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_560[i] = 0x28E780E6L;
                    for (l_384 = 0; (l_384 <= (-19)); --l_384)
                    { /* block id: 197 */
                        uint32_t l_505[1][1];
                        VECTOR(uint32_t, 8) l_517 = (VECTOR(uint32_t, 8))(0x598D01A3L, (VECTOR(uint32_t, 4))(0x598D01A3L, (VECTOR(uint32_t, 2))(0x598D01A3L, 0x766C46A6L), 0x766C46A6L), 0x766C46A6L, 0x598D01A3L, 0x766C46A6L);
                        int32_t l_532 = 0x1629A9BDL;
                        int32_t l_534[4];
                        int32_t *l_536 = &p_1451->g_435;
                        uint8_t *l_552 = (void*)0;
                        uint8_t *l_553 = &l_349;
                        int16_t *l_555 = &l_434;
                        int32_t *l_556 = (void*)0;
                        int32_t *l_557 = &p_1451->g_84[7];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_505[i][j] = 0x898A20BFL;
                        }
                        for (i = 0; i < 4; i++)
                            l_534[i] = 0x48416275L;
                        (*p_1451->g_109) = func_63(((0x28L & (((l_534[2] ^= ((&p_1451->g_223 != (l_505[0][0] , ((l_532 &= ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 2))(18446744073709551609UL, 0xA7A96ADD63482E6BL)).xxyxxxyxyxyyyyxx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0x779E53CE214503CCL, (((*l_255) ^= (((~0x52E298E86FE70606L) || (safe_mul_func_uint16_t_u_u(4UL, ((**l_248) = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_513.wx)))), 0UL, 2UL)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x57DFE00AL, 0x1E5F61D4L)).yyyyyxyy)).s6025433570515570, ((VECTOR(uint32_t, 4))(5UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(l_514.s70)), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(0xA52660BCL, 0xA3AE44DFL)), ((VECTOR(uint32_t, 8))(((*l_479) = GROUP_DIVERGE(1, 1)), ((VECTOR(uint32_t, 2))(p_1451->g_515.yy)), 0xB575247BL, ((VECTOR(uint32_t, 2))(0UL, 0xECBED76FL)), 0UL, 0xA03E4C64L)).s77, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1451->g_516.s02670037)).hi)))).lo)))))), 1UL)).zxwzzzwyyyxyzwzw, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).yxyxxxxxxyyxyyxx)))).s4b, ((VECTOR(uint32_t, 8))(l_517.s30616727)).s13, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(l_518.xzyw)).wywzxzzw, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4294967286UL, 4294967295UL, (****l_478), ((VECTOR(uint32_t, 2))(p_1451->g_519.s33)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_520.s0706)), ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(4294967295UL, 7UL)).yxyyxxxx, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1451->g_515.y, 0xE6A187CFL, 1UL, 0x0CB1CB35L)).odd)), ((VECTOR(uint32_t, 2))(p_1451->g_521.ww))))).xxyxyxxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x6846B129L, 1UL)).xyyyxyxx)).s30, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_522.wwyz)))), ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(0x55E2CF7BL, 4294967295UL)).xxyyyxyyxxyxyxyy, ((VECTOR(uint32_t, 16))(l_523.sac9b3da49b890603))))).sb0ee))).lo, ((VECTOR(uint32_t, 2))(0x964C4EF1L, 0xA1D45558L))))))).yxyy)).ywxzxxxx))), ((VECTOR(uint32_t, 4))(l_524.yyxy)))).sa2)))), 0xDA6AB176L)).s66)).yyxyxxxx))).s2275270166400672)).s5a))).yxxyxyyxyyyxyyyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(p_1451->g_525.xy)), ((VECTOR(uint32_t, 8))(p_1451->g_526.yyyxyyyx)).s34, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(0x75744DADL, 0x6C430C51L)).yxxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1451->g_527.s0111)).w, ((*l_479) |= l_505[0][0]), (safe_lshift_func_uint8_t_u_s((+(l_530 , 0xE0L)), 2)), 0xD696C140L, ((VECTOR(uint32_t, 8))(0x472C90B7L)), 0x2125BFBDL, p_52, 0x8DE11F97L, 0x323E3699L)).s23)).yyxxyxyy, ((VECTOR(uint32_t, 8))(0x5DEEA34AL))))).s6576060074676477)).s33f6))).wwzwwyyzywwzyyzw)).s75)).xyxyyyyxxyyyyyxy, ((VECTOR(uint32_t, 16))(1UL))))))).s4954)).even))), p_51, 4294967295UL, l_524.y, 4UL, 1UL, 0UL)).s3463337427767646)))), ((VECTOR(uint32_t, 16))(4294967295UL))))), ((VECTOR(uint32_t, 16))(0x7823978BL))))), ((VECTOR(uint32_t, 16))(4294967293UL))))).sf9, ((VECTOR(uint32_t, 2))(0x3F12D11BL))))).yxyy, ((VECTOR(uint32_t, 4))(0x12955FB3L)), ((VECTOR(uint32_t, 4))(0xF63C6555L))))).wzxxyywxzzwxzxxx, ((VECTOR(uint32_t, 16))(0x11774F6CL))))).s96, ((VECTOR(uint32_t, 2))(0xF169EAC0L))))).yyyyyyxy)).odd, ((VECTOR(uint32_t, 4))(9UL))))).yzwwyxyxyzwzxxzw))))).s50))).yyyx)), ((VECTOR(uint32_t, 4))(1UL))))).w, 0x3A5BDFE0L)))))) | p_51)) == l_531.sa), ((VECTOR(uint64_t, 4))(8UL)), 8UL, 18446744073709551607UL)).even)).wyxzywwzzwxxwyyz))).s2)), l_524.y)) , p_1451->g_338.x)) , l_533[3]))) >= 0x53512CDEFEAA8008L)) < l_517.s3) , p_51)) , &p_1451->g_102), p_51, l_524.y, (*l_241), l_523.sf, p_1451);
                        (*l_536) ^= ((p_51 & ((VECTOR(uint16_t, 4))(l_535.yxyy)).x) >= 0x19EBB2C30C919DD8L);
                        (*l_557) |= (((VECTOR(uint8_t, 16))(l_537.xyxxyxxyyyxxyyyx)).s8 != (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0x0FL, (((p_1451->g_526.x = (0L | (****l_478))) > (((*l_555) = (safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((*l_553) |= (1L || (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1451->g_551.s0776)).w, 0xE6C98025L)))), (((*l_255) = p_52) | ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_554.yxyyxyxx)).s4251311177161447)).sc))) == (p_1451->g_515.y , (*l_536))) , p_1451->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1451->tid, 19))]), p_1451->g_223.f0))) , l_514.s0)) && p_51))), 0xBFL)) <= p_52) , p_52))))));
                    }
                    (*l_584) = ((l_560[1] |= (*l_497)) >= (safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))((safe_mod_func_uint16_t_u_u((p_51 | ((((safe_div_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s(p_52, l_575[1][0][2])) && (****l_478)) > (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_1451->g_27.x, 7)), (!p_1451->g_519.s1))), (safe_rshift_func_int8_t_s_u(((l_321 , (~(p_1451->g_102 &= (****l_478)))) && GROUP_DIVERGE(1, 1)), 4))))) != p_52), 0x25FF2A68460C1C72L)) < 65531UL) | p_51) , p_51)), 7L)), p_1451->g_102, p_1451->g_516.s0, p_52, ((VECTOR(uint64_t, 4))(0x8A789D914379E5F1L)), 0xB36C4BC450637032L, ((VECTOR(uint64_t, 4))(0x1F4ECCB2CEBB9E5CL)), ((VECTOR(uint64_t, 2))(0x34C860A8899581D2L)), 0x324F1A58F54CC146L)).sf, l_537.y)), 9L)), p_1451->g_516.s6)), 0x0D2835D1L)));
                    if (p_51)
                        continue;
                }
                if (l_585.s1)
                    break;
            }
        }
    }
    if ((((((((VECTOR(int8_t, 2))((-5L), 3L)).even > ((*l_241) == (++(*l_249)))) <= (safe_mod_func_int8_t_s_s(p_51, ((p_1451->g_526.x <= ((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(p_1451->g_84[0], (0x6A88EAB8A1A6BB1BL ^ (((((4294967295UL > ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(l_596.xzzyxyyz)).odd))).lo)).odd, 12)) > ((p_1451->g_338.x , (void*)0) == (p_1451->g_598 = &l_379)))) || 0x6400L) && 0x5DL) || 1L) && p_51)))), p_1451->g_4)) != 0x2948A813L)) , (*l_241))))) <= (*l_241)) <= 0x7AC9L) ^ p_51))
    { /* block id: 223 */
        int32_t l_610 = (-7L);
        int32_t l_619[5] = {6L,6L,6L,6L,6L};
        VECTOR(uint32_t, 2) l_620 = (VECTOR(uint32_t, 2))(0x4297351FL, 0x247D4048L);
        int32_t *l_624 = (void*)0;
        int32_t *l_625 = (void*)0;
        int32_t *l_626[2];
        int i;
        for (i = 0; i < 2; i++)
            l_626[i] = &p_1451->g_435;
        for (p_1451->g_223.f0 = (-3); (p_1451->g_223.f0 <= 11); p_1451->g_223.f0 = safe_add_func_uint8_t_u_u(p_1451->g_223.f0, 1))
        { /* block id: 226 */
            int32_t *l_602 = &p_1451->g_220;
            int32_t *l_603 = (void*)0;
            int32_t *l_604 = (void*)0;
            int32_t *l_605 = &p_1451->g_84[0];
            int32_t *l_606 = (void*)0;
            int32_t *l_607 = (void*)0;
            int32_t *l_608 = &p_1451->g_435;
            int32_t *l_609 = &p_1451->g_84[0];
            int32_t *l_611 = (void*)0;
            int32_t *l_612 = (void*)0;
            int32_t *l_613 = &p_1451->g_220;
            int32_t *l_614 = &l_250;
            int32_t *l_615 = &p_1451->g_220;
            int32_t *l_616 = &p_1451->g_435;
            int32_t *l_617 = (void*)0;
            int32_t *l_618[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_623 = 4294967295UL;
            int i;
            --l_620.y;
            if (l_623)
                continue;
        }
        ++l_627.x;
    }
    else
    { /* block id: 231 */
        VECTOR(int64_t, 8) l_638 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        int32_t *l_645 = &p_1451->g_8;
        int32_t *l_654 = (void*)0;
        uint8_t l_655[1];
        int32_t *l_658 = &p_1451->g_220;
        int32_t *l_659 = &l_250;
        int i;
        for (i = 0; i < 1; i++)
            l_655[i] = 5UL;
        (*l_659) |= ((7UL < FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10)) || ((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1451->local_2_offset, get_local_id(2), 10), (safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((VECTOR(int64_t, 2))(l_638.s62)).even , (safe_rshift_func_uint8_t_u_u((!0x99L), (safe_div_func_uint64_t_u_u(p_51, p_51))))), (((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1451->g_643.wwxw)).even)).xyxxyyyyyyxxyyxx, ((VECTOR(uint64_t, 8))(p_1451->g_644.xxyxyxxx)).s3531601672124335))).sf , (**p_1451->g_116)) != l_645) <= ((((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((+0L), 0xC3AAFA27A1BFF1C6L)), 7)) == (l_399.y = ((*l_658) = ((safe_div_func_uint16_t_u_u(((l_655[0] = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_652.sdc52bb1ce1baa943)).sd2a6)).xzyyywwy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1451->g_653.yy)), 0x50949D85L, 0x689DA805L)).xywwzyww))).s1) || ((((safe_rshift_func_int16_t_s_u((1UL > 0x2710L), 10)) <= 65528UL) , p_51) >= p_52)), p_51)) == p_51)))) , &l_313) != (void*)0)))), GROUP_DIVERGE(2, 1))) , (*l_241)) && 7L), (*l_241))))) != (*l_241)));
        (*l_658) = p_52;
        for (p_1451->g_223.f0 = (-21); (p_1451->g_223.f0 == 11); p_1451->g_223.f0++)
        { /* block id: 239 */
            int32_t *l_662 = (void*)0;
            int32_t l_663 = 0L;
            int32_t *l_664 = &p_1451->g_220;
            int32_t *l_665 = (void*)0;
            int32_t *l_666 = (void*)0;
            int32_t *l_667 = &p_1451->g_84[0];
            int32_t *l_668 = (void*)0;
            int32_t *l_669 = &p_1451->g_220;
            int32_t *l_670 = (void*)0;
            int32_t *l_671 = (void*)0;
            int32_t *l_672 = (void*)0;
            int32_t *l_673 = (void*)0;
            int32_t *l_674 = &p_1451->g_84[5];
            int32_t *l_675 = (void*)0;
            int32_t *l_676 = &p_1451->g_220;
            int32_t *l_677 = (void*)0;
            int32_t *l_678 = (void*)0;
            int32_t *l_679 = &p_1451->g_220;
            int32_t *l_680[2][6][7] = {{{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250}},{{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250},{(void*)0,(void*)0,&p_1451->g_220,(void*)0,(void*)0,&p_1451->g_435,&l_250}}};
            int i, j, k;
            ++l_682;
        }
        if ((atomic_inc(&p_1451->l_atomic_input[21]) == 9))
        { /* block id: 243 */
            int32_t l_685[9] = {0x5C75D9EDL,0L,0x5C75D9EDL,0x5C75D9EDL,0L,0x5C75D9EDL,0x5C75D9EDL,0L,0x5C75D9EDL};
            uint32_t l_758 = 4294967288UL;
            int16_t l_759 = 0x0C09L;
            VECTOR(int8_t, 8) l_760 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
            VECTOR(int8_t, 2) l_761 = (VECTOR(int8_t, 2))(0x48L, 0x00L);
            VECTOR(int8_t, 4) l_762 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2FL), 0x2FL);
            int32_t l_763[10] = {0L,1L,0L,1L,0L,0L,1L,0L,1L,0L};
            VECTOR(int8_t, 4) l_764 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 5L), 5L);
            VECTOR(int8_t, 8) l_765 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x14L), 0x14L), 0x14L, 1L, 0x14L);
            int32_t l_766 = (-2L);
            VECTOR(int8_t, 2) l_767 = (VECTOR(int8_t, 2))(0L, 0x1AL);
            VECTOR(int8_t, 4) l_768 = (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0x63L), 0x63L);
            VECTOR(int8_t, 2) l_769 = (VECTOR(int8_t, 2))(0x3FL, 0x16L);
            VECTOR(uint8_t, 2) l_770 = (VECTOR(uint8_t, 2))(0UL, 0UL);
            int32_t l_771 = 1L;
            VECTOR(int8_t, 2) l_772 = (VECTOR(int8_t, 2))(6L, 0x5DL);
            uint32_t l_773 = 0x0C99ED54L;
            uint32_t l_774 = 1UL;
            uint16_t l_775 = 1UL;
            VECTOR(int8_t, 2) l_776 = (VECTOR(int8_t, 2))(0x4BL, 0x70L);
            VECTOR(uint8_t, 16) l_777 = (VECTOR(uint8_t, 16))(0x36L, (VECTOR(uint8_t, 4))(0x36L, (VECTOR(uint8_t, 2))(0x36L, 255UL), 255UL), 255UL, 0x36L, 255UL, (VECTOR(uint8_t, 2))(0x36L, 255UL), (VECTOR(uint8_t, 2))(0x36L, 255UL), 0x36L, 255UL, 0x36L, 255UL);
            VECTOR(uint64_t, 16) l_778 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 5UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL);
            int16_t l_779 = 0x636DL;
            int64_t l_780 = 0x24A4605B831425C2L;
            struct S0 l_781 = {18446744073709551608UL};
            VECTOR(int32_t, 4) l_782 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x32D15153L), 0x32D15153L);
            uint16_t l_783 = 0x4DD7L;
            VECTOR(int16_t, 4) l_784 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7E08L), 0x7E08L);
            uint64_t l_785 = 18446744073709551615UL;
            uint64_t l_786 = 0x589756E330F768EBL;
            VECTOR(int32_t, 2) l_787 = (VECTOR(int32_t, 2))((-1L), 0x3F0AC419L);
            VECTOR(int32_t, 16) l_788 = (VECTOR(int32_t, 16))(0x2F798157L, (VECTOR(int32_t, 4))(0x2F798157L, (VECTOR(int32_t, 2))(0x2F798157L, (-2L)), (-2L)), (-2L), 0x2F798157L, (-2L), (VECTOR(int32_t, 2))(0x2F798157L, (-2L)), (VECTOR(int32_t, 2))(0x2F798157L, (-2L)), 0x2F798157L, (-2L), 0x2F798157L, (-2L));
            uint8_t l_789 = 0UL;
            VECTOR(int32_t, 8) l_790 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-10L)), (-10L)), (-10L), (-4L), (-10L));
            VECTOR(int32_t, 2) l_791 = (VECTOR(int32_t, 2))((-7L), 0x4EAC62C1L);
            int32_t l_792 = 0x392400D8L;
            VECTOR(int8_t, 4) l_793 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L);
            VECTOR(int8_t, 8) l_794 = (VECTOR(int8_t, 8))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x25L), 0x25L), 0x25L, 0x22L, 0x25L);
            uint32_t l_795 = 0xB0345415L;
            VECTOR(int8_t, 2) l_796 = (VECTOR(int8_t, 2))(0x59L, 0L);
            uint16_t l_797 = 0x8755L;
            int32_t l_798[5] = {0L,0L,0L,0L,0L};
            int8_t l_799 = 0x7BL;
            int8_t l_800[2];
            int8_t l_801[2][8][7] = {{{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L}},{{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L},{0x4DL,0x00L,0L,0x1CL,1L,(-1L),0x65L}}};
            VECTOR(int8_t, 16) l_802 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x03L), 0x03L), 0x03L, (-1L), 0x03L, (VECTOR(int8_t, 2))((-1L), 0x03L), (VECTOR(int8_t, 2))((-1L), 0x03L), (-1L), 0x03L, (-1L), 0x03L);
            int64_t l_803 = 3L;
            uint64_t l_804 = 0x10A1835F915584C8L;
            uint16_t l_805 = 0xFE32L;
            uint64_t l_806[5] = {0x9E5D09E410044C1FL,0x9E5D09E410044C1FL,0x9E5D09E410044C1FL,0x9E5D09E410044C1FL,0x9E5D09E410044C1FL};
            uint32_t l_807 = 0x0A6A7553L;
            VECTOR(uint32_t, 4) l_808 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 9UL), 9UL);
            int8_t l_809 = (-1L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_800[i] = 0x1AL;
            for (l_685[7] = 0; (l_685[7] > 25); l_685[7]++)
            { /* block id: 246 */
                int16_t l_688[6];
                uint64_t l_689 = 0x41ED0F09988190EDL;
                uint32_t l_690 = 4294967291UL;
                VECTOR(uint64_t, 16) l_734 = (VECTOR(uint64_t, 16))(0x9E2B3763891599F2L, (VECTOR(uint64_t, 4))(0x9E2B3763891599F2L, (VECTOR(uint64_t, 2))(0x9E2B3763891599F2L, 0xEA77BCE3594F0701L), 0xEA77BCE3594F0701L), 0xEA77BCE3594F0701L, 0x9E2B3763891599F2L, 0xEA77BCE3594F0701L, (VECTOR(uint64_t, 2))(0x9E2B3763891599F2L, 0xEA77BCE3594F0701L), (VECTOR(uint64_t, 2))(0x9E2B3763891599F2L, 0xEA77BCE3594F0701L), 0x9E2B3763891599F2L, 0xEA77BCE3594F0701L, 0x9E2B3763891599F2L, 0xEA77BCE3594F0701L);
                VECTOR(int64_t, 16) l_735 = (VECTOR(int64_t, 16))(0x06E659B6BFA21E50L, (VECTOR(int64_t, 4))(0x06E659B6BFA21E50L, (VECTOR(int64_t, 2))(0x06E659B6BFA21E50L, 6L), 6L), 6L, 0x06E659B6BFA21E50L, 6L, (VECTOR(int64_t, 2))(0x06E659B6BFA21E50L, 6L), (VECTOR(int64_t, 2))(0x06E659B6BFA21E50L, 6L), 0x06E659B6BFA21E50L, 6L, 0x06E659B6BFA21E50L, 6L);
                uint16_t l_736 = 0x794BL;
                VECTOR(int64_t, 8) l_737 = (VECTOR(int64_t, 8))(0x0F42D34E4B27848DL, (VECTOR(int64_t, 4))(0x0F42D34E4B27848DL, (VECTOR(int64_t, 2))(0x0F42D34E4B27848DL, 0L), 0L), 0L, 0x0F42D34E4B27848DL, 0L);
                uint64_t l_738 = 0UL;
                int32_t l_739 = 0x1755331DL;
                VECTOR(uint32_t, 16) l_740 = (VECTOR(uint32_t, 16))(0x8CC8D1B7L, (VECTOR(uint32_t, 4))(0x8CC8D1B7L, (VECTOR(uint32_t, 2))(0x8CC8D1B7L, 4294967289UL), 4294967289UL), 4294967289UL, 0x8CC8D1B7L, 4294967289UL, (VECTOR(uint32_t, 2))(0x8CC8D1B7L, 4294967289UL), (VECTOR(uint32_t, 2))(0x8CC8D1B7L, 4294967289UL), 0x8CC8D1B7L, 4294967289UL, 0x8CC8D1B7L, 4294967289UL);
                uint8_t l_741 = 1UL;
                VECTOR(uint32_t, 16) l_742 = (VECTOR(uint32_t, 16))(0x5B8643DAL, (VECTOR(uint32_t, 4))(0x5B8643DAL, (VECTOR(uint32_t, 2))(0x5B8643DAL, 0xB99214D8L), 0xB99214D8L), 0xB99214D8L, 0x5B8643DAL, 0xB99214D8L, (VECTOR(uint32_t, 2))(0x5B8643DAL, 0xB99214D8L), (VECTOR(uint32_t, 2))(0x5B8643DAL, 0xB99214D8L), 0x5B8643DAL, 0xB99214D8L, 0x5B8643DAL, 0xB99214D8L);
                int32_t l_744 = 0x52FB7183L;
                int32_t *l_743 = &l_744;
                int32_t *l_745 = &l_744;
                uint8_t l_746[10] = {252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL};
                VECTOR(uint32_t, 8) l_747 = (VECTOR(uint32_t, 8))(0xC2893379L, (VECTOR(uint32_t, 4))(0xC2893379L, (VECTOR(uint32_t, 2))(0xC2893379L, 0xAEAA6D6EL), 0xAEAA6D6EL), 0xAEAA6D6EL, 0xC2893379L, 0xAEAA6D6EL);
                VECTOR(int64_t, 2) l_748 = (VECTOR(int64_t, 2))(0x5B1D4F99C98899CFL, (-1L));
                int16_t l_749 = 0x68B0L;
                int64_t l_750 = (-5L);
                uint32_t l_751 = 0xA88DE683L;
                uint32_t l_752[3];
                struct S0 l_754 = {0x2164896C0F1E241BL};
                struct S0 *l_753[4];
                struct S0 *l_755 = &l_754;
                struct S0 *l_756 = (void*)0;
                struct S0 *l_757 = (void*)0;
                int i;
                for (i = 0; i < 6; i++)
                    l_688[i] = (-1L);
                for (i = 0; i < 3; i++)
                    l_752[i] = 0xF4ED8497L;
                for (i = 0; i < 4; i++)
                    l_753[i] = &l_754;
                l_690 = (l_689 = l_688[5]);
                for (l_688[2] = (-27); (l_688[2] > (-25)); l_688[2] = safe_add_func_uint32_t_u_u(l_688[2], 7))
                { /* block id: 251 */
                    uint8_t l_693[3];
                    int64_t l_720 = 0x6FDF8B19D83BD36DL;
                    int16_t l_721 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_693[i] = 1UL;
                    l_693[2]--;
                    for (l_693[2] = 0; (l_693[2] >= 51); l_693[2] = safe_add_func_int8_t_s_s(l_693[2], 1))
                    { /* block id: 255 */
                        int64_t l_698 = (-1L);
                        int32_t l_699 = 0x7EAB88C5L;
                        int16_t l_700 = 0x72E9L;
                        int16_t l_701 = 0x7681L;
                        VECTOR(int8_t, 4) l_702 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-8L)), (-8L));
                        uint8_t l_703 = 0UL;
                        int8_t l_704[1][10][6] = {{{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL},{0x50L,0x5DL,0x3BL,(-1L),0x3BL,0x5DL}}};
                        uint32_t l_705 = 0x8C4A8DEBL;
                        VECTOR(uint16_t, 16) l_706 = (VECTOR(uint16_t, 16))(0xD1BAL, (VECTOR(uint16_t, 4))(0xD1BAL, (VECTOR(uint16_t, 2))(0xD1BAL, 0UL), 0UL), 0UL, 0xD1BAL, 0UL, (VECTOR(uint16_t, 2))(0xD1BAL, 0UL), (VECTOR(uint16_t, 2))(0xD1BAL, 0UL), 0xD1BAL, 0UL, 0xD1BAL, 0UL);
                        VECTOR(uint16_t, 8) l_707 = (VECTOR(uint16_t, 8))(0x98D8L, (VECTOR(uint16_t, 4))(0x98D8L, (VECTOR(uint16_t, 2))(0x98D8L, 0x0198L), 0x0198L), 0x0198L, 0x98D8L, 0x0198L);
                        VECTOR(uint16_t, 4) l_708 = (VECTOR(uint16_t, 4))(0xE0BDL, (VECTOR(uint16_t, 2))(0xE0BDL, 0xA0FEL), 0xA0FEL);
                        uint16_t l_709 = 0xBA39L;
                        int32_t l_710[8] = {0x585CB9A8L,0x585CB9A8L,0x585CB9A8L,0x585CB9A8L,0x585CB9A8L,0x585CB9A8L,0x585CB9A8L,0x585CB9A8L};
                        int8_t l_711[3][1][4] = {{{0L,(-1L),0L,0L}},{{0L,(-1L),0L,0L}},{{0L,(-1L),0L,0L}}};
                        VECTOR(uint16_t, 4) l_712 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xDC66L), 0xDC66L);
                        VECTOR(int16_t, 8) l_713 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4A2DL), 0x4A2DL), 0x4A2DL, 0L, 0x4A2DL);
                        VECTOR(int16_t, 16) l_714 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4D2AL), 0x4D2AL), 0x4D2AL, (-1L), 0x4D2AL, (VECTOR(int16_t, 2))((-1L), 0x4D2AL), (VECTOR(int16_t, 2))((-1L), 0x4D2AL), (-1L), 0x4D2AL, (-1L), 0x4D2AL);
                        VECTOR(uint16_t, 8) l_715 = (VECTOR(uint16_t, 8))(0xC33DL, (VECTOR(uint16_t, 4))(0xC33DL, (VECTOR(uint16_t, 2))(0xC33DL, 0x13CBL), 0x13CBL), 0x13CBL, 0xC33DL, 0x13CBL);
                        int8_t l_716 = 0L;
                        uint16_t l_717 = 0x04B2L;
                        struct S0 l_718[1] = {{18446744073709551615UL}};
                        struct S0 l_719 = {1UL};
                        int i, j, k;
                        l_699 = l_698;
                        l_718[0] = (l_700 , (l_719 = ((l_702.z = l_701) , (((VECTOR(uint16_t, 16))(l_703, GROUP_DIVERGE(2, 1), 65534UL, 1UL, ((VECTOR(uint16_t, 16))(0x0C8FL, (l_704[0][9][0] = 0x0DC4L), 65527UL, (l_705 , FAKE_DIVERGE(p_1451->local_1_offset, get_local_id(1), 10)), 0x45D7L, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_706.sce0d9fb5)).s1304016146014427)).s8309, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(l_707.s63454137)).s6715334730304071, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_708.xx)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x5A03L, 0xD016L, ((l_710[3] = l_709) , GROUP_DIVERGE(2, 1)), l_711[1][0][0], ((VECTOR(uint16_t, 4))(0xFA6BL, 0x23D5L, 0x71E8L, 1UL)))).s74)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_712.yywwywwxxxyxzxxw)).sd3)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(0x7655L, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(l_713.s05442444)).hi, ((VECTOR(int16_t, 2))(l_714.s9a)).yxyy))), ((VECTOR(uint16_t, 2))(l_715.s13)), 0xB6AEL)).hi, (uint16_t)l_716))).odd)), 0x5A7BL, ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 2))(0x26D8L)), 0xBF78L, 0xDD90L)).s03)).yyyxyxxyyxyxyyxy))))).s51c2, ((VECTOR(uint16_t, 4))(65535UL))))).zxyxwwzzyzwwxxzy)).sd6a6))).z, ((VECTOR(uint16_t, 8))(0xB54DL)), 0x9A9DL, 0xE15BL)).sd, ((VECTOR(uint16_t, 2))(1UL)), l_717, ((VECTOR(uint16_t, 8))(1UL)))).sa , l_718[0]))));
                    }
                    l_721 |= l_720;
                    for (l_721 = (-27); (l_721 >= 0); l_721 = safe_add_func_uint8_t_u_u(l_721, 7))
                    { /* block id: 266 */
                        int32_t l_725 = 0x04F6A747L;
                        int32_t *l_724 = &l_725;
                        int32_t *l_726 = &l_725;
                        int32_t *l_727 = (void*)0;
                        int8_t l_728 = 0x1FL;
                        uint32_t l_729 = 0x95D93BB9L;
                        int32_t *l_730 = &l_725;
                        int32_t *l_731 = &l_725;
                        int32_t l_732 = 0x7C747784L;
                        int16_t l_733 = 0x0ED8L;
                        l_727 = (l_726 = l_724);
                        l_729 = l_728;
                        l_731 = l_730;
                        l_733 = l_732;
                    }
                }
                l_745 = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0xF91197B9L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xAEC112F9L, 0x0CF06797L)))), 0x581771AEL, 0x26702259L)), 4294967295UL, 2UL, ((l_736 &= ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(l_734.s9104)).ywwxxxzywxwyyyyz, ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 16))(l_735.s332ccc0e478c6b7f)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((-1L), 0x07650A6E0B66A584L, 0x71B09AF5C294BFA0L, 3L)).zwyzwyxxywwzyxwz)).s4501)).zxywyxxxxwwxywxz)))))))).s1) , ((l_738 |= ((VECTOR(int64_t, 4))(l_737.s3323)).y) , ((VECTOR(uint32_t, 8))(l_739, 0x4390690BL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_740.sef)), 0xB3BD502FL, 0x53EC6013L)), 1UL, 0x44726EC7L)).s6)), (l_741 , 0x5A2BCECCL), ((VECTOR(uint32_t, 4))(0x10528142L, FAKE_DIVERGE(p_1451->group_2_offset, get_group_id(2), 10), 7UL, 0x5B8015D8L)), ((VECTOR(uint32_t, 2))(l_742.s21)), 0x40471B04L)).hi)).s0 , l_743);
                l_757 = (l_753[3] = (l_756 = ((l_746[7] , (((VECTOR(uint32_t, 16))(l_747.s0527366453757340)).s4 , 0x4A824E97L)) , ((l_752[1] = (l_751 = (((VECTOR(int64_t, 2))(l_748.yx)).even , (l_750 = (l_749 , 4294967294UL))))) , (l_755 = l_753[3])))));
            }
            l_781 = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((l_759 |= l_758), ((VECTOR(int8_t, 2))(3L, 0x67L)), 0x56L, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(l_760.s07445411)).s1220550440643344, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(5L, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_761.xyxxyyxyxyyyxxyx)).lo, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_762.ywxw)).yxxxzzyyxxwzyxxy)).sfa)).yyxyyxxyxxxxyxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_763[9], ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(l_764.wzzzxzxw)).s71, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_765.s46)), 0x6DL, 2L)), 6L, (l_766 , ((VECTOR(int8_t, 8))(l_767.xyyyyyxx)).s3), 0x78L, 0x3EL)).s7245062430546546)).s60))), 1L)), 0x1BL, 0L, (-7L), 7L)), ((VECTOR(int8_t, 8))(l_768.ywzzwyxw)), ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(l_769.yy)).xyxx, ((VECTOR(int8_t, 16))(6L, (((VECTOR(uint8_t, 4))(l_770.xyyy)).x , l_771), ((VECTOR(int8_t, 8))(l_772.yyyyxxxy)), 1L, 0x15L, l_773, l_774, 8L, 0x4CL)).sa393))).lo, ((VECTOR(int8_t, 2))((-10L), (-1L)))))), 9L)).hi, ((VECTOR(int8_t, 2))(7L, 0x28L)), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(l_775, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_776.yyyxxxyy)).even)).y, (-4L), (l_778.s3 ^= l_777.s6), ((VECTOR(int8_t, 8))(0x41L)), (-6L), 1L, 0L, 0x4AL)).sb6)))))).xyyxxyxy)))).lo, ((VECTOR(int8_t, 4))(5L))))), ((VECTOR(int8_t, 4))(0L)))).even)).zzzxyxzwywyywxyy, ((VECTOR(int8_t, 16))(0L))))).lo))).s27)).yyyyxyyyyyxyxyxx))))).s71, ((VECTOR(int8_t, 2))(0x08L)), ((VECTOR(int8_t, 2))(0L))))).xxxxyyxy))).s2, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 8))(0x64L)), 0x45L, 4L, 4L, (-5L))).odd)).s6616560143332234))).s0166, ((VECTOR(int8_t, 4))(0x31L)), ((VECTOR(int8_t, 4))((-1L))))))))).yxyxxyxz)).s2641031137723002)).s0b)), ((VECTOR(int8_t, 8))(0x57L)), l_779, ((VECTOR(int8_t, 2))(0x0FL)), 0x16L, (-1L))).sf143, ((VECTOR(int8_t, 4))(5L))))))), l_780, 4L, 0x57L, 5L, ((VECTOR(int8_t, 4))(1L)))).s1 , l_781);
            if ((l_809 = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(l_782.xz)), l_783, (l_784.z , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_786 = l_785), ((VECTOR(int32_t, 2))(0x6706549BL, 1L)), ((VECTOR(int32_t, 2))(l_787.yx)), 0x6E4F4E19L, 1L, 0x499855C9L)).hi)).y), 0x29B4CE2FL, 0L, 0x76B1ED4DL)).hi)).yxzwyxzw)).lo, ((VECTOR(int32_t, 16))(l_788.sc3525df32ee3e05d)).s8e75, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_789 = 0x45F985C8L), (l_792 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x46A3EEEBL, 0x2909AD71L)).yxxx, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_790.s1627)), ((VECTOR(int32_t, 2))(l_791.xy)).yxxy))), ((VECTOR(int32_t, 2))(0x0BB683F7L, (-3L))).yyxx))).zzyyzwwwzwyyzyzx)).s8), (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_793.yx)).yyxxyyxyyyxxxxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x60L, 0x54L, 0L, 8L)))).yxxyxyxzyxwyzwzx))).sabee)), ((VECTOR(int8_t, 2))(l_794.s54)).xyyy, ((VECTOR(int8_t, 16))(0x66L, (-2L), l_795, 0x3DL, (l_798[4] = (l_797 = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_796.xx)).yyyyxyxyyxyyyxxy)).even)).s7)), (-1L), l_799, 0x60L, l_800[1], l_801[1][5][1], ((VECTOR(int8_t, 2))(l_802.sfc)), (l_804 = l_803), 1L, 0x20L, 1L)).s584e))).hi))).yxyyyyyxyyyxxyxx, ((VECTOR(int8_t, 16))(7L))))).s37, ((VECTOR(uint8_t, 2))(0x3EL))))), ((VECTOR(int16_t, 2))(0x64D2L)), ((VECTOR(int16_t, 2))((-1L)))))), l_805, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(1L)), 0x488BL, 0x6D3EL, ((VECTOR(int16_t, 4))(0x396CL)), ((VECTOR(int16_t, 2))(1L)), 0x722BL)).s6 , l_806[3]), ((VECTOR(int32_t, 4))((-1L))), (-8L))), 1L, l_807, l_808.x, 2L, (-1L), (-1L), 3L, 0x729DF8CBL)).s50a7)).yzxwxyzz, ((VECTOR(int32_t, 8))((-1L)))))).odd))).y))
            { /* block id: 295 */
                uint32_t l_810 = 0xAC0EA597L;
                if (l_810)
                { /* block id: 296 */
                    int8_t l_811[2][6] = {{0x3CL,(-9L),0x3CL,0x3CL,(-9L),0x3CL},{0x3CL,(-9L),0x3CL,0x3CL,(-9L),0x3CL}};
                    int i, j;
                    if (l_811[0][1])
                    { /* block id: 297 */
                        VECTOR(uint32_t, 2) l_812 = (VECTOR(uint32_t, 2))(0xE7A0B84FL, 0xA8590E45L);
                        VECTOR(int32_t, 4) l_813 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x392B8706L), 0x392B8706L);
                        int32_t *l_814 = (void*)0;
                        int32_t *l_815 = (void*)0;
                        int32_t *l_816 = (void*)0;
                        int32_t *l_817[2];
                        struct S0 l_818 = {5UL};
                        int32_t *l_819 = (void*)0;
                        int32_t *l_820 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_817[i] = (void*)0;
                        l_817[1] = (l_816 = (l_815 = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x1125ED1BL, 0x39D9DA33L, 1UL, 4294967290UL, ((VECTOR(uint32_t, 4))(l_812.yxyy)))))).s51)), 1UL, 2UL)).x , ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x7670A0CAL, 0x49175800L)).yyxy, ((VECTOR(int32_t, 4))(l_813.xzyx))))).yxxxzzzzzyywyxxy, ((VECTOR(int32_t, 4))(1L, 0x1E265961L, (-1L), (-1L))).yxwxyzwxwyzwwzzx))).sf) , l_814)));
                        l_781 = ((l_811[1][2] &= 0x12L) , l_818);
                        l_820 = l_819;
                    }
                    else
                    { /* block id: 304 */
                        uint32_t l_821[5] = {0x7432E592L,0x7432E592L,0x7432E592L,0x7432E592L,0x7432E592L};
                        uint16_t l_822 = 0x7808L;
                        uint64_t l_823[7];
                        uint32_t l_824[8];
                        int16_t l_825 = 6L;
                        uint16_t l_826 = 0UL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_823[i] = 1UL;
                        for (i = 0; i < 8; i++)
                            l_824[i] = 0x2BC93914L;
                        l_822 &= l_821[0];
                        l_824[6] = l_823[4];
                        l_782.y |= 0x7C687394L;
                        l_826 = (l_825 , 0x604DE8FEL);
                    }
                    for (l_811[0][3] = 1; (l_811[0][3] == (-26)); l_811[0][3]--)
                    { /* block id: 312 */
                        int64_t l_829[3][8];
                        int64_t l_830 = 0x1FAE3BEF5C57E073L;
                        uint64_t l_831 = 18446744073709551615UL;
                        VECTOR(uint32_t, 2) l_832 = (VECTOR(uint32_t, 2))(0x72EA9D54L, 4294967288UL);
                        VECTOR(uint16_t, 4) l_833 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 8UL), 8UL);
                        VECTOR(uint16_t, 16) l_834 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65528UL), 65528UL, 65535UL, 65528UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65535UL, 65528UL, 65535UL, 65528UL);
                        int16_t l_835 = 0x62AEL;
                        VECTOR(uint8_t, 16) l_836 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xCDL), 0xCDL), 0xCDL, 2UL, 0xCDL, (VECTOR(uint8_t, 2))(2UL, 0xCDL), (VECTOR(uint8_t, 2))(2UL, 0xCDL), 2UL, 0xCDL, 2UL, 0xCDL);
                        VECTOR(uint8_t, 8) l_837 = (VECTOR(uint8_t, 8))(0xF0L, (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 0x52L), 0x52L), 0x52L, 0xF0L, 0x52L);
                        int32_t l_838 = (-10L);
                        int32_t l_839[1][9] = {{0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L,0x64B76FF6L}};
                        uint32_t l_840[2][4];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_829[i][j] = (-7L);
                        }
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_840[i][j] = 6UL;
                        }
                        l_790.s5 = ((((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(4UL, 4294967294UL, l_829[0][4], (l_830 , l_831), ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_832.yxxyxyxyxyxyyyxy)).s14)))))).xyxyyxyy, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(l_833.wyyz)).hi, ((VECTOR(uint16_t, 16))(4UL, 65535UL, 7UL, 0xFEA0L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xE4E8L, 65526UL, 0xA1B6L, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_834.sda9f839b)), l_835, 65529UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(l_836.s839b)).wzzxyxyxxyyyxyxw, ((VECTOR(uint8_t, 4))(l_837.s4515)).xyxyxxzywwxwzxzy))).sc75d)), 0x27A9L, 65526UL)).sc, ((l_807 = 0x2F096CE7L) , 0x3829L), GROUP_DIVERGE(2, 1), 65535UL, 0x9B25L)))), ((VECTOR(uint16_t, 2))(0x8995L)), 65528UL, 1UL)).s34))), 0UL, 0xA96FL)))).zzxyyxyyzxyyxwxy, ((VECTOR(uint16_t, 16))(65535UL))))).odd))).s3, ((VECTOR(uint32_t, 2))(0x1A5353E3L)), 0x22EA24EEL)).s65, (uint32_t)l_838, (uint32_t)0xB5B77993L))).even , l_839[0][2]) , l_840[0][2]);
                    }
                }
                else
                { /* block id: 316 */
                    uint32_t l_841 = 0x801C2458L;
                    int32_t l_854[9];
                    int32_t *l_853 = &l_854[0];
                    int32_t *l_855 = &l_854[0];
                    int32_t *l_856 = &l_854[3];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_854[i] = 0x4BA366F0L;
                    if ((l_782.w = (l_790.s5 = l_841)))
                    { /* block id: 319 */
                        l_790.s0 = (l_798[4] = 0L);
                    }
                    else
                    { /* block id: 322 */
                        int32_t l_843 = (-2L);
                        int32_t *l_842 = &l_843;
                        uint64_t l_844[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_844[i] = 18446744073709551606UL;
                        l_842 = (void*)0;
                        l_844[0] &= (l_791.x = 0x2B1DFF33L);
                    }
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), 8L, 2L, 0x7B41E72AL)).xxwwzywy)).s7)
                    { /* block id: 327 */
                        uint32_t l_845[9] = {0x105542D5L,0xC3201008L,0x105542D5L,0x105542D5L,0xC3201008L,0x105542D5L,0x105542D5L,0xC3201008L,0x105542D5L};
                        VECTOR(int32_t, 4) l_848 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L);
                        int32_t l_849 = 0L;
                        int i;
                        l_845[5]--;
                        l_798[1] = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_848.ywzy)).zzywzyyywzyyyxwy)))).seb)))).odd;
                        l_798[3] |= l_849;
                        l_848.y = (l_849 = 0L);
                    }
                    else
                    { /* block id: 333 */
                        int32_t *l_850 = (void*)0;
                        int32_t l_852[9][9] = {{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L},{0x16E3725AL,0x17ADF979L,4L,0x41DBA1E4L,0L,0x0432DC03L,0x16E3725AL,0x123F83B5L,0x3C7520C4L}};
                        int32_t *l_851 = &l_852[0][3];
                        int i, j;
                        l_851 = l_850;
                    }
                    l_856 = (l_855 = l_853);
                    if (((*l_853) = 0x271062D3L))
                    { /* block id: 339 */
                        uint32_t l_859 = 0x00AA5642L;
                        uint32_t *l_858 = &l_859;
                        uint32_t **l_857[2];
                        uint32_t **l_860 = &l_858;
                        VECTOR(int32_t, 2) l_862 = (VECTOR(int32_t, 2))(0x01EFF0A1L, (-1L));
                        int32_t *l_861[4][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        uint32_t l_863 = 4294967291UL;
                        int32_t l_864 = (-1L);
                        int32_t l_865 = 0x563D9D83L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_857[i] = &l_858;
                        l_860 = l_857[1];
                        l_853 = (l_861[3][4][4] = l_861[3][4][4]);
                        (*l_855) = (l_863 , l_864);
                        (*l_855) = l_865;
                    }
                    else
                    { /* block id: 345 */
                        struct S0 l_866 = {0x9888285ADB4938CAL};
                        int32_t l_868 = (-3L);
                        int32_t *l_867 = &l_868;
                        uint8_t l_869 = 0x6BL;
                        l_781 = ((l_789 = 255UL) , l_866);
                        l_855 = (l_853 = (l_856 = l_867));
                        l_869 ^= 0x696BB858L;
                    }
                }
                for (l_810 = 0; (l_810 >= 28); l_810++)
                { /* block id: 356 */
                    VECTOR(uint32_t, 16) l_872 = (VECTOR(uint32_t, 16))(0xF082265FL, (VECTOR(uint32_t, 4))(0xF082265FL, (VECTOR(uint32_t, 2))(0xF082265FL, 0xBA4AD130L), 0xBA4AD130L), 0xBA4AD130L, 0xF082265FL, 0xBA4AD130L, (VECTOR(uint32_t, 2))(0xF082265FL, 0xBA4AD130L), (VECTOR(uint32_t, 2))(0xF082265FL, 0xBA4AD130L), 0xF082265FL, 0xBA4AD130L, 0xF082265FL, 0xBA4AD130L);
                    int32_t l_873 = 0L;
                    int64_t l_874 = 7L;
                    struct S0 l_891 = {0x14C1F4E1E7309F77L};
                    int i;
                    l_791.x |= (l_790.s4 = (((VECTOR(uint32_t, 4))(l_872.s4109)).x , (l_771 &= l_873)));
                    l_788.sf ^= l_874;
                    for (l_872.s2 = 0; (l_872.s2 >= 38); l_872.s2 = safe_add_func_uint64_t_u_u(l_872.s2, 6))
                    { /* block id: 363 */
                        int8_t l_877 = 0x7BL;
                        uint64_t l_878 = 0xD14F247E7B562B8CL;
                        VECTOR(int32_t, 8) l_879 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L);
                        VECTOR(int32_t, 16) l_880 = (VECTOR(int32_t, 16))(0x6E69110BL, (VECTOR(int32_t, 4))(0x6E69110BL, (VECTOR(int32_t, 2))(0x6E69110BL, (-9L)), (-9L)), (-9L), 0x6E69110BL, (-9L), (VECTOR(int32_t, 2))(0x6E69110BL, (-9L)), (VECTOR(int32_t, 2))(0x6E69110BL, (-9L)), 0x6E69110BL, (-9L), 0x6E69110BL, (-9L));
                        uint16_t l_881 = 0x29B9L;
                        VECTOR(int32_t, 4) l_882 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x757C38AEL), 0x757C38AEL);
                        uint32_t l_883 = 4294967295UL;
                        int8_t l_884 = 0x2BL;
                        int64_t l_885 = 0x4876855B29FBFB7CL;
                        uint32_t l_886 = 0xC8D2373EL;
                        VECTOR(int32_t, 4) l_887 = (VECTOR(int32_t, 4))(0x0124C1C5L, (VECTOR(int32_t, 2))(0x0124C1C5L, 0L), 0L);
                        uint32_t l_888 = 6UL;
                        int i;
                        l_782.w = 0L;
                        l_878 = (l_791.x = l_877);
                        l_787.x ^= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))((-1L), 1L)).yxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(2L, (-1L))).xyxyxxxyyyyxyxxy)).sb200))))).xxzywzzw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, (-1L))).lo, 0x69F104F6L, ((VECTOR(int32_t, 16))(l_879.s1273026445215415)).s2, 0x1557CAB9L, ((VECTOR(int32_t, 2))(l_880.sc0)), l_881, 1L, ((VECTOR(int32_t, 4))(l_882.wxxz)), ((l_885 |= (l_884 &= l_883)) , l_886), ((VECTOR(int32_t, 16))(l_887.xyzyxzwwyyxzzzwy)).s9, 0x26CF6CC3L, 0x61E1C440L)).s485c)).yzwzywyx))).s5;
                        --l_888;
                    }
                    l_781 = l_891;
                }
            }
            else
            { /* block id: 374 */
                VECTOR(int32_t, 2) l_892 = (VECTOR(int32_t, 2))(0L, 0x381B3F03L);
                int32_t l_940 = (-1L);
                int32_t l_941 = 0L;
                struct S0 l_943 = {18446744073709551613UL};
                struct S0 *l_942[3];
                struct S0 *l_944[1][4];
                int32_t l_945 = 0x6CFED571L;
                uint32_t l_946[3];
                int64_t l_947 = 0x4CD7A59EB713DCF1L;
                VECTOR(int16_t, 8) l_948 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-4L)), (-4L)), (-4L), (-2L), (-4L));
                VECTOR(int16_t, 16) l_949 = (VECTOR(int16_t, 16))(0x33E4L, (VECTOR(int16_t, 4))(0x33E4L, (VECTOR(int16_t, 2))(0x33E4L, (-1L)), (-1L)), (-1L), 0x33E4L, (-1L), (VECTOR(int16_t, 2))(0x33E4L, (-1L)), (VECTOR(int16_t, 2))(0x33E4L, (-1L)), 0x33E4L, (-1L), 0x33E4L, (-1L));
                VECTOR(int16_t, 8) l_950 = (VECTOR(int16_t, 8))(0x6907L, (VECTOR(int16_t, 4))(0x6907L, (VECTOR(int16_t, 2))(0x6907L, 0x2C9CL), 0x2C9CL), 0x2C9CL, 0x6907L, 0x2C9CL);
                VECTOR(int8_t, 16) l_951 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0L), 0L), 0L, 8L, 0L, (VECTOR(int8_t, 2))(8L, 0L), (VECTOR(int8_t, 2))(8L, 0L), 8L, 0L, 8L, 0L);
                VECTOR(uint8_t, 8) l_952 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
                VECTOR(uint8_t, 16) l_953 = (VECTOR(uint8_t, 16))(0x09L, (VECTOR(uint8_t, 4))(0x09L, (VECTOR(uint8_t, 2))(0x09L, 249UL), 249UL), 249UL, 0x09L, 249UL, (VECTOR(uint8_t, 2))(0x09L, 249UL), (VECTOR(uint8_t, 2))(0x09L, 249UL), 0x09L, 249UL, 0x09L, 249UL);
                VECTOR(uint8_t, 4) l_954 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL);
                VECTOR(uint8_t, 8) l_955 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x39L), 0x39L), 0x39L, 253UL, 0x39L);
                VECTOR(uint8_t, 16) l_956 = (VECTOR(uint8_t, 16))(0x65L, (VECTOR(uint8_t, 4))(0x65L, (VECTOR(uint8_t, 2))(0x65L, 1UL), 1UL), 1UL, 0x65L, 1UL, (VECTOR(uint8_t, 2))(0x65L, 1UL), (VECTOR(uint8_t, 2))(0x65L, 1UL), 0x65L, 1UL, 0x65L, 1UL);
                VECTOR(int8_t, 8) l_957 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x0EL), 0x0EL), 0x0EL, 1L, 0x0EL);
                VECTOR(int8_t, 4) l_958 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0L), 0L);
                VECTOR(int8_t, 16) l_959 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2EL), 0x2EL), 0x2EL, 1L, 0x2EL, (VECTOR(int8_t, 2))(1L, 0x2EL), (VECTOR(int8_t, 2))(1L, 0x2EL), 1L, 0x2EL, 1L, 0x2EL);
                VECTOR(int8_t, 8) l_960 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(uint8_t, 16) l_961 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL, (VECTOR(uint8_t, 2))(0UL, 255UL), (VECTOR(uint8_t, 2))(0UL, 255UL), 0UL, 255UL, 0UL, 255UL);
                VECTOR(int16_t, 4) l_962 = (VECTOR(int16_t, 4))(0x12E3L, (VECTOR(int16_t, 2))(0x12E3L, 0x2DD9L), 0x2DD9L);
                int32_t l_963 = 0x5BB8DDF1L;
                VECTOR(int16_t, 4) l_964 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x1BB2L), 0x1BB2L);
                VECTOR(int16_t, 2) l_965 = (VECTOR(int16_t, 2))(0x2C4DL, 0x5FBBL);
                uint32_t l_966 = 0xE4F02983L;
                int32_t l_967 = (-3L);
                int16_t l_968 = 1L;
                int64_t l_969 = 0x29EE016C3CE7310CL;
                struct S0 l_970 = {0x81B40FCE91F3A7BBL};
                struct S0 l_971 = {0x2DA90EB03C34CFDDL};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_942[i] = &l_943;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_944[i][j] = &l_943;
                }
                for (i = 0; i < 3; i++)
                    l_946[i] = 0x88F9FC3FL;
                if (l_892.x)
                { /* block id: 375 */
                    struct S0 l_893 = {18446744073709551614UL};
                    int32_t l_895 = 1L;
                    int32_t *l_894[10] = {&l_895,&l_895,&l_895,&l_895,&l_895,&l_895,&l_895,&l_895,&l_895,&l_895};
                    int64_t l_896 = (-5L);
                    VECTOR(int64_t, 2) l_897 = (VECTOR(int64_t, 2))((-7L), 0x4BB358E82B29A232L);
                    uint8_t l_898 = 0x6DL;
                    uint16_t l_899 = 0xBD2CL;
                    uint8_t l_900 = 0UL;
                    VECTOR(uint64_t, 16) l_903 = (VECTOR(uint64_t, 16))(0xC0CD96C204D8BA60L, (VECTOR(uint64_t, 4))(0xC0CD96C204D8BA60L, (VECTOR(uint64_t, 2))(0xC0CD96C204D8BA60L, 1UL), 1UL), 1UL, 0xC0CD96C204D8BA60L, 1UL, (VECTOR(uint64_t, 2))(0xC0CD96C204D8BA60L, 1UL), (VECTOR(uint64_t, 2))(0xC0CD96C204D8BA60L, 1UL), 0xC0CD96C204D8BA60L, 1UL, 0xC0CD96C204D8BA60L, 1UL);
                    uint32_t l_904[5];
                    VECTOR(int32_t, 8) l_905 = (VECTOR(int32_t, 8))(0x7675168BL, (VECTOR(int32_t, 4))(0x7675168BL, (VECTOR(int32_t, 2))(0x7675168BL, 1L), 1L), 1L, 0x7675168BL, 1L);
                    int32_t l_906 = 1L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_904[i] = 6UL;
                    l_781 = l_893;
                    l_894[9] = l_894[9];
                    l_763[4] = ((((l_896 , ((l_803 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_897.xy)))).odd) , l_898)) , l_899) , (++l_900)) , (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_903.s76668e66)).s4527621404274740)).s6 , (l_906 = (l_904[0] , ((VECTOR(int32_t, 16))(l_905.s5401116315421655)).sc))));
                }
                else
                { /* block id: 382 */
                    uint32_t l_907 = 0x58579441L;
                    if (l_907)
                    { /* block id: 383 */
                        int32_t l_908 = (-9L);
                        uint32_t l_909 = 0x13316105L;
                        VECTOR(int16_t, 2) l_910 = (VECTOR(int16_t, 2))((-1L), 0x2323L);
                        uint8_t l_911 = 0xFDL;
                        uint32_t l_912 = 4294967295UL;
                        uint64_t l_913 = 0x7F90C5E4B3518645L;
                        uint32_t l_914 = 0xCC03EB34L;
                        uint64_t l_915 = 0UL;
                        int32_t l_916 = 0x5AE3ECA9L;
                        int32_t l_917 = (-8L);
                        int32_t l_918[10] = {0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L,0x3A4677A9L};
                        int16_t l_919 = 1L;
                        uint32_t l_920 = 0x66EA38CDL;
                        int32_t l_921 = 1L;
                        VECTOR(uint64_t, 2) l_922 = (VECTOR(uint64_t, 2))(0x06FD32E4F4A90EB2L, 0xCD064700278E0AA4L);
                        int i;
                        l_920 |= ((l_908 , l_909) , ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(0L, (-1L), (-1L), 1L)).even, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_910.xxxyxyxx)).s6772332210653112)).s7d, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_911, l_912, l_913, l_914, GROUP_DIVERGE(2, 1), 0x25D4L, 65535UL, 0x11D3L)), l_915, (l_916 , l_917), 0x026BL, l_918[4], l_919, ((VECTOR(uint16_t, 2))(1UL)), 9UL)).s66))), ((VECTOR(int32_t, 2))(0x21A2F39EL))))).odd);
                        l_763[9] &= ((l_907 = l_921) , l_922.x);
                    }
                    else
                    { /* block id: 387 */
                        uint32_t l_923 = 1UL;
                        VECTOR(int32_t, 2) l_926 = (VECTOR(int32_t, 2))(0x5D50CF50L, 0x6DF82BD6L);
                        VECTOR(int32_t, 2) l_927 = (VECTOR(int32_t, 2))(0x509FAF11L, 1L);
                        int8_t l_928 = 0L;
                        uint32_t l_929 = 1UL;
                        uint32_t l_932 = 0xC3989B34L;
                        int i;
                        l_923--;
                        l_798[4] |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_926.yyxxxxxxxxxyxyxx)).sdf)), 0x5A197851L, 0x3C2541A8L)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x6DE21FCDL, 0x4796BEACL, 0x3019550FL, 0x2C96E046L)).even)).yyyy))).hi)).odd;
                        --l_929;
                        l_927.x &= l_932;
                    }
                    for (l_907 = 23; (l_907 != 18); l_907--)
                    { /* block id: 395 */
                        VECTOR(int32_t, 2) l_935 = (VECTOR(int32_t, 2))(0x4B6E129BL, 0x327669EBL);
                        VECTOR(int32_t, 16) l_936 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4C20F09FL), 0x4C20F09FL), 0x4C20F09FL, 0L, 0x4C20F09FL, (VECTOR(int32_t, 2))(0L, 0x4C20F09FL), (VECTOR(int32_t, 2))(0L, 0x4C20F09FL), 0L, 0x4C20F09FL, 0L, 0x4C20F09FL);
                        VECTOR(int32_t, 2) l_937 = (VECTOR(int32_t, 2))(1L, (-3L));
                        uint64_t l_938[6][8][5] = {{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}},{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}},{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}},{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}},{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}},{{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L},{0xD85F032ACE52C785L,0xAACFCF133E89183FL,4UL,0x8EFEAFBB49B5BA96L,0xCD9136D32F9BCEC9L}}};
                        int32_t l_939 = 0x382AE1CBL;
                        int i, j, k;
                        l_892.y |= 0x078C0D4EL;
                        l_938[0][3][4] = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_935.xxxyyyxy)).s57, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_936.s5684cb510f8f787a)))).s83))).yyyyxyyxyyyyxyyx, ((VECTOR(int32_t, 2))(l_937.yx)).xxyxxxxxyxxyxyxy))).sf;
                        l_939 &= (-8L);
                    }
                }
                l_944[0][3] = (l_942[2] = ((l_940 , l_941) , (void*)0));
                l_971 = (l_781 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(3L, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))((-10L), 0x36F5L, 0L, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))((-1L), l_945, (l_947 = l_946[0]), ((VECTOR(int16_t, 8))(l_948.s22456643)), ((VECTOR(int16_t, 4))(l_949.s2635)), 1L)).s4c1b, ((VECTOR(int16_t, 2))(0x59CCL, 0x1539L)).xxyy))).wyzxwxxw, ((VECTOR(int16_t, 4))(0x6455L, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(l_950.s1306)).ywwwzwxxyzwyyxzx, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(l_951.s6f)).xxyyxyxyyyxyyyyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(FAKE_DIVERGE(p_1451->group_2_offset, get_group_id(2), 10), ((VECTOR(uint8_t, 2))(l_952.s50)), ((VECTOR(uint8_t, 4))(0UL, 0x98L, 0x01L, 0x53L)), 0UL, ((VECTOR(uint8_t, 4))(l_953.sd381)), 0x78L, ((VECTOR(uint8_t, 2))(0x07L, 0xC2L)), 0UL)).sa88e, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(0xF8L, 0x75L)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_954.xxwy)))).wxxwxzwy)).s20))))).xxxxyyyxyyxyyyyy)).s38))).yxxy))), ((VECTOR(uint8_t, 2))(l_955.s77)).yyyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_956.s34)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_957.s3724110143627450)).even)), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x10L, 0x44L, 1L, (-1L))), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(l_958.yywyzxwyxwwzywzw)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_959.sae)))), 0L, 0x33L)).ywzxwzxy)).s6065516152735244))).s84db, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(5L, (-3L))))).xyyx))))).odd, ((VECTOR(int8_t, 16))(l_960.s2126620361333766)).se5b5))).zwwyyxwx))))), 0x3EL, ((VECTOR(uint8_t, 4))(l_961.s71c7)), 0xE6L)).s9805))).yzwwzyyzzyyywwyx))))).saa55, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(0x28EBL, ((VECTOR(int16_t, 4))(l_962.wyyz)), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(0L, l_963, ((VECTOR(int16_t, 4))(0x32A5L, ((VECTOR(int16_t, 2))(l_964.zy)), 0x0696L)), (-7L), (-1L))).odd, (int16_t)0x3C17L))).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_965.yx)).xxyyyxxxyxyyyyyx)).se8))), 0x74F8L, 0x06F9L, (((l_778.s3 = l_966) , (l_967 , 0x7C4AF1AEL)) , (l_784.z = l_968)), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x13FAL)), (-1L), 1L)).sde, ((VECTOR(int16_t, 2))(0L))))).xyxx))).zzxxyyxzwwxxzyww))).sd, 4L, 0x512DL)).ywwwxxyz))), ((VECTOR(int16_t, 2))((-10L))), l_969, (-9L), 0L)).se689, ((VECTOR(uint16_t, 4))(0xDA8AL))))).hi)))), ((VECTOR(int32_t, 2))(0x78CFCC30L)), ((VECTOR(int32_t, 2))((-1L)))))), 0x78ED7C84L, 0x07EBDCC7L, ((VECTOR(int32_t, 2))(0x327D6249L)), 0x510461EFL)).even)), 1L, 0x2C895EBDL, 0x1F1AAC31L, 9L)).s6 , l_970));
                for (l_953.sb = 0; (l_953.sb <= 31); ++l_953.sb)
                { /* block id: 410 */
                    VECTOR(int32_t, 4) l_974 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L);
                    VECTOR(int32_t, 4) l_980 = (VECTOR(int32_t, 4))(0x1C5FC059L, (VECTOR(int32_t, 2))(0x1C5FC059L, 0L), 0L);
                    VECTOR(uint32_t, 8) l_981 = (VECTOR(uint32_t, 8))(0x0075F1BCL, (VECTOR(uint32_t, 4))(0x0075F1BCL, (VECTOR(uint32_t, 2))(0x0075F1BCL, 0x9CB8196DL), 0x9CB8196DL), 0x9CB8196DL, 0x0075F1BCL, 0x9CB8196DL);
                    int8_t l_982 = 0x38L;
                    int16_t l_1009[3];
                    int32_t *l_1010 = (void*)0;
                    int32_t *l_1011 = (void*)0;
                    int32_t *l_1012 = (void*)0;
                    int32_t *l_1013[5][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    uint64_t l_1014 = 1UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1009[i] = 0x40C5L;
                    if (((VECTOR(int32_t, 4))(l_974.yxxz)).w)
                    { /* block id: 411 */
                        uint32_t l_975 = 6UL;
                        VECTOR(int16_t, 16) l_976 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x66C2L), 0x66C2L), 0x66C2L, 0L, 0x66C2L, (VECTOR(int16_t, 2))(0L, 0x66C2L), (VECTOR(int16_t, 2))(0L, 0x66C2L), 0L, 0x66C2L, 0L, 0x66C2L);
                        struct S0 l_977 = {0xC933C54CCBA8B109L};
                        int i;
                        l_975 |= 8L;
                        l_763[9] = (l_976.sa , (l_977 , (-9L)));
                    }
                    else
                    { /* block id: 414 */
                        int16_t l_978[7];
                        int8_t l_979 = 0x2DL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_978[i] = 3L;
                        l_791.x = (l_892.y ^= (l_978[5] , (l_685[7] |= l_979)));
                    }
                    if (((((VECTOR(int32_t, 2))(l_980.xx)).odd , ((VECTOR(uint32_t, 2))(l_981.s27)).lo) , l_982))
                    { /* block id: 419 */
                        VECTOR(int32_t, 16) l_983 = (VECTOR(int32_t, 16))(0x174B8666L, (VECTOR(int32_t, 4))(0x174B8666L, (VECTOR(int32_t, 2))(0x174B8666L, 0L), 0L), 0L, 0x174B8666L, 0L, (VECTOR(int32_t, 2))(0x174B8666L, 0L), (VECTOR(int32_t, 2))(0x174B8666L, 0L), 0x174B8666L, 0L, 0x174B8666L, 0L);
                        VECTOR(int32_t, 8) l_984 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L);
                        uint32_t l_985 = 0x99E20536L;
                        VECTOR(int32_t, 4) l_986 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                        VECTOR(int32_t, 16) l_987 = (VECTOR(int32_t, 16))(0x22C5B557L, (VECTOR(int32_t, 4))(0x22C5B557L, (VECTOR(int32_t, 2))(0x22C5B557L, 0x5BE51E2AL), 0x5BE51E2AL), 0x5BE51E2AL, 0x22C5B557L, 0x5BE51E2AL, (VECTOR(int32_t, 2))(0x22C5B557L, 0x5BE51E2AL), (VECTOR(int32_t, 2))(0x22C5B557L, 0x5BE51E2AL), 0x22C5B557L, 0x5BE51E2AL, 0x22C5B557L, 0x5BE51E2AL);
                        VECTOR(int32_t, 2) l_988 = (VECTOR(int32_t, 2))(0x48B61411L, (-1L));
                        VECTOR(int32_t, 2) l_989 = (VECTOR(int32_t, 2))(0x3D215B00L, 0x79A5E9ADL);
                        int32_t l_990 = 0L;
                        int8_t l_991 = 1L;
                        VECTOR(int32_t, 8) l_992 = (VECTOR(int32_t, 8))(0x66DF067FL, (VECTOR(int32_t, 4))(0x66DF067FL, (VECTOR(int32_t, 2))(0x66DF067FL, 0x08958440L), 0x08958440L), 0x08958440L, 0x66DF067FL, 0x08958440L);
                        VECTOR(int32_t, 2) l_993 = (VECTOR(int32_t, 2))(0x7D9FD048L, 0x654AB8C2L);
                        VECTOR(int32_t, 2) l_994 = (VECTOR(int32_t, 2))(0x2ABACA6BL, 9L);
                        int32_t l_995[1];
                        VECTOR(int32_t, 8) l_996 = (VECTOR(int32_t, 8))(0x35946F84L, (VECTOR(int32_t, 4))(0x35946F84L, (VECTOR(int32_t, 2))(0x35946F84L, (-5L)), (-5L)), (-5L), 0x35946F84L, (-5L));
                        uint8_t l_997 = 0xAFL;
                        int16_t l_998 = 0L;
                        int32_t l_999 = (-10L);
                        uint8_t l_1000 = 0x1DL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_995[i] = 0x56F194B9L;
                        l_782.x ^= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_983.sf2)), ((VECTOR(int32_t, 2))(l_984.s57)), l_985, 0x5D298E23L, 1L, 0x0ED3C58AL)).s6304125565523245, ((VECTOR(int32_t, 8))(l_986.xxxzyzyw)).s6601104534303511, ((VECTOR(int32_t, 2))(l_987.s42)).yyyyxyyxyyyyxyyy))).even)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_988.yxxxxxyy)).s70, ((VECTOR(int32_t, 16))(0x27E48F4DL, 1L, 0x5F30BAE1L, 0x3DDE72C4L, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x223AB83CL, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_989.xxxxyyxy)).s4022477267630034))).s41, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_990 = 0x01312A4CL), 8L, 1L, (-6L), 1L, l_991, 0x30C1623AL, (-3L))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_992.s54)).xxyxxyyxyyxyxyxy)).sffa0)).zwyzyzxz))).s45, ((VECTOR(int32_t, 2))(l_993.xx))))), 0x548F1C0BL)), 0x6950B63FL, 0x674193B9L, 1L, ((VECTOR(int32_t, 2))(l_994.xy)), 0L, l_995[0], (-1L), 0x2670784BL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_996.s45)))), 1L)).sd0c7)), l_997, ((VECTOR(int32_t, 4))(0x09570976L)), 0x71CA7F23L, 0x13B9461FL)).s0f))).xxxxyxyyxxxxyyyy))).lo))), ((VECTOR(int32_t, 8))(0x1B1EB8B4L))))).s3207720166265111)).se5, ((VECTOR(int32_t, 2))(0x736C614BL)), ((VECTOR(int32_t, 2))(6L))))).hi;
                        --l_1000;
                    }
                    else
                    { /* block id: 423 */
                        int32_t l_1004 = (-8L);
                        int32_t *l_1003 = &l_1004;
                        int32_t *l_1005 = &l_1004;
                        uint16_t l_1006 = 5UL;
                        l_1005 = (l_1003 = (void*)0);
                        ++l_1006;
                    }
                    l_1013[0][4] = (l_1012 = (l_1011 = (GROUP_DIVERGE(0, 1) , ((l_943.f0 |= 0UL) , (l_1009[2] , l_1010)))));
                    l_798[4] ^= l_1014;
                }
            }
            for (l_802.sf = (-4); (l_802.sf < 12); l_802.sf++)
            { /* block id: 437 */
                uint16_t l_1017[4][2][9] = {{{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL},{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL}},{{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL},{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL}},{{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL},{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL}},{{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL},{0UL,0UL,0x5E93L,1UL,0x4816L,1UL,0x5E93L,0UL,0UL}}};
                struct S0 l_1018 = {18446744073709551612UL};
                struct S0 l_1019 = {4UL};
                int i, j, k;
                l_790.s3 |= l_1017[1][0][3];
                l_1019 = (l_781 = l_1018);
            }
            unsigned int result = 0;
            int l_685_i0;
            for (l_685_i0 = 0; l_685_i0 < 9; l_685_i0++) {
                result += l_685[l_685_i0];
            }
            result += l_758;
            result += l_759;
            result += l_760.s7;
            result += l_760.s6;
            result += l_760.s5;
            result += l_760.s4;
            result += l_760.s3;
            result += l_760.s2;
            result += l_760.s1;
            result += l_760.s0;
            result += l_761.y;
            result += l_761.x;
            result += l_762.w;
            result += l_762.z;
            result += l_762.y;
            result += l_762.x;
            int l_763_i0;
            for (l_763_i0 = 0; l_763_i0 < 10; l_763_i0++) {
                result += l_763[l_763_i0];
            }
            result += l_764.w;
            result += l_764.z;
            result += l_764.y;
            result += l_764.x;
            result += l_765.s7;
            result += l_765.s6;
            result += l_765.s5;
            result += l_765.s4;
            result += l_765.s3;
            result += l_765.s2;
            result += l_765.s1;
            result += l_765.s0;
            result += l_766;
            result += l_767.y;
            result += l_767.x;
            result += l_768.w;
            result += l_768.z;
            result += l_768.y;
            result += l_768.x;
            result += l_769.y;
            result += l_769.x;
            result += l_770.y;
            result += l_770.x;
            result += l_771;
            result += l_772.y;
            result += l_772.x;
            result += l_773;
            result += l_774;
            result += l_775;
            result += l_776.y;
            result += l_776.x;
            result += l_777.sf;
            result += l_777.se;
            result += l_777.sd;
            result += l_777.sc;
            result += l_777.sb;
            result += l_777.sa;
            result += l_777.s9;
            result += l_777.s8;
            result += l_777.s7;
            result += l_777.s6;
            result += l_777.s5;
            result += l_777.s4;
            result += l_777.s3;
            result += l_777.s2;
            result += l_777.s1;
            result += l_777.s0;
            result += l_778.sf;
            result += l_778.se;
            result += l_778.sd;
            result += l_778.sc;
            result += l_778.sb;
            result += l_778.sa;
            result += l_778.s9;
            result += l_778.s8;
            result += l_778.s7;
            result += l_778.s6;
            result += l_778.s5;
            result += l_778.s4;
            result += l_778.s3;
            result += l_778.s2;
            result += l_778.s1;
            result += l_778.s0;
            result += l_779;
            result += l_780;
            result += l_781.f0;
            result += l_782.w;
            result += l_782.z;
            result += l_782.y;
            result += l_782.x;
            result += l_783;
            result += l_784.w;
            result += l_784.z;
            result += l_784.y;
            result += l_784.x;
            result += l_785;
            result += l_786;
            result += l_787.y;
            result += l_787.x;
            result += l_788.sf;
            result += l_788.se;
            result += l_788.sd;
            result += l_788.sc;
            result += l_788.sb;
            result += l_788.sa;
            result += l_788.s9;
            result += l_788.s8;
            result += l_788.s7;
            result += l_788.s6;
            result += l_788.s5;
            result += l_788.s4;
            result += l_788.s3;
            result += l_788.s2;
            result += l_788.s1;
            result += l_788.s0;
            result += l_789;
            result += l_790.s7;
            result += l_790.s6;
            result += l_790.s5;
            result += l_790.s4;
            result += l_790.s3;
            result += l_790.s2;
            result += l_790.s1;
            result += l_790.s0;
            result += l_791.y;
            result += l_791.x;
            result += l_792;
            result += l_793.w;
            result += l_793.z;
            result += l_793.y;
            result += l_793.x;
            result += l_794.s7;
            result += l_794.s6;
            result += l_794.s5;
            result += l_794.s4;
            result += l_794.s3;
            result += l_794.s2;
            result += l_794.s1;
            result += l_794.s0;
            result += l_795;
            result += l_796.y;
            result += l_796.x;
            result += l_797;
            int l_798_i0;
            for (l_798_i0 = 0; l_798_i0 < 5; l_798_i0++) {
                result += l_798[l_798_i0];
            }
            result += l_799;
            int l_800_i0;
            for (l_800_i0 = 0; l_800_i0 < 2; l_800_i0++) {
                result += l_800[l_800_i0];
            }
            int l_801_i0, l_801_i1, l_801_i2;
            for (l_801_i0 = 0; l_801_i0 < 2; l_801_i0++) {
                for (l_801_i1 = 0; l_801_i1 < 8; l_801_i1++) {
                    for (l_801_i2 = 0; l_801_i2 < 7; l_801_i2++) {
                        result += l_801[l_801_i0][l_801_i1][l_801_i2];
                    }
                }
            }
            result += l_802.sf;
            result += l_802.se;
            result += l_802.sd;
            result += l_802.sc;
            result += l_802.sb;
            result += l_802.sa;
            result += l_802.s9;
            result += l_802.s8;
            result += l_802.s7;
            result += l_802.s6;
            result += l_802.s5;
            result += l_802.s4;
            result += l_802.s3;
            result += l_802.s2;
            result += l_802.s1;
            result += l_802.s0;
            result += l_803;
            result += l_804;
            result += l_805;
            int l_806_i0;
            for (l_806_i0 = 0; l_806_i0 < 5; l_806_i0++) {
                result += l_806[l_806_i0];
            }
            result += l_807;
            result += l_808.w;
            result += l_808.z;
            result += l_808.y;
            result += l_808.x;
            result += l_809;
            atomic_add(&p_1451->l_special_values[21], result);
        }
        else
        { /* block id: 442 */
            (1 + 1);
        }
    }
    return l_321;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_102 p_1451->g_110 p_1451->g_8 p_1451->g_223 p_1451->g_84 p_1451->g_4 p_1451->g_140 p_1451->g_96
 * writes: p_1451->g_102 p_1451->g_223 p_1451->g_110
 */
uint8_t  func_55(int32_t ** p_56, struct S1 * p_1451)
{ /* block id: 92 */
    int32_t ****l_224[10] = {&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116,&p_1451->g_116};
    VECTOR(int16_t, 2) l_237 = (VECTOR(int16_t, 2))(1L, 0x5E57L);
    struct S0 l_239 = {0x3B8E72FAC234BBA6L};
    int i;
    for (p_1451->g_102 = 2; (p_1451->g_102 == 39); p_1451->g_102++)
    { /* block id: 95 */
        uint32_t *l_225[9][4][2] = {{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}},{{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150},{&p_1451->g_150,&p_1451->g_150}}};
        int32_t l_226 = 0L;
        int32_t l_233[10][10][2] = {{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}},{{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)},{6L,(-1L)}}};
        uint16_t *l_234 = (void*)0;
        uint16_t **l_235 = &l_234;
        int32_t l_236 = 0x0293A830L;
        uint32_t l_238 = 0xA2884712L;
        int i, j, k;
        if ((**p_56))
            break;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1451->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u((l_226 = ((p_1451->g_223 , l_224[6]) != (void*)0)), 10))][(safe_mod_func_uint32_t_u_u(p_1451->tid, 19))]));
        l_236 |= (((~((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_1451->global_1_offset, get_global_id(1), 10), FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10))), p_1451->g_84[0])) <= (l_233[0][0][1] = (safe_sub_func_int64_t_s_s(l_226, p_1451->g_4))))) , &p_1451->g_162) != (((*p_56) == l_225[4][3][1]) , ((*l_235) = l_234)));
        l_236 = (GROUP_DIVERGE(2, 1) != ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_237.yyxyxyxxyyyxxxxx)).sa635, (int16_t)l_238))).z);
    }
    p_1451->g_223 = l_239;
    (*p_1451->g_140) = (*p_1451->g_140);
    return p_1451->g_96.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_81 p_1451->g_96 p_1451->g_99 p_1451->g_102 p_1451->g_109 p_1451->g_116 p_1451->g_117 p_1451->g_110 p_1451->g_8 p_1451->l_comm_values p_1451->g_27 p_1451->g_comm_values p_1451->g_84 p_1451->g_133 p_1451->g_140 p_1451->g_4 p_1451->g_33 p_1451->g_31 p_1451->g_206 p_1451->g_220
 * writes: p_1451->g_102 p_1451->g_109 p_1451->g_117 p_1451->g_96 p_1451->g_110 p_1451->g_150 p_1451->g_162 p_1451->g_comm_values p_1451->g_206 p_1451->g_84 p_1451->g_220
 */
int32_t ** func_57(int32_t * p_58, uint64_t  p_59, int16_t  p_60, uint64_t  p_61, struct S1 * p_1451)
{ /* block id: 18 */
    VECTOR(int16_t, 16) l_76 = (VECTOR(int16_t, 16))(0x6CCDL, (VECTOR(int16_t, 4))(0x6CCDL, (VECTOR(int16_t, 2))(0x6CCDL, (-7L)), (-7L)), (-7L), 0x6CCDL, (-7L), (VECTOR(int16_t, 2))(0x6CCDL, (-7L)), (VECTOR(int16_t, 2))(0x6CCDL, (-7L)), 0x6CCDL, (-7L), 0x6CCDL, (-7L));
    uint64_t *l_82 = (void*)0;
    int16_t *l_196 = (void*)0;
    int16_t *l_197 = (void*)0;
    int16_t *l_198 = (void*)0;
    int16_t *l_199 = (void*)0;
    int16_t *l_200 = (void*)0;
    int16_t *l_201 = (void*)0;
    int16_t *l_202 = (void*)0;
    int16_t *l_203[6][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint32_t l_204 = 0x5558BBB9L;
    VECTOR(int16_t, 2) l_205 = (VECTOR(int16_t, 2))(0x16F5L, (-1L));
    VECTOR(int16_t, 4) l_207 = (VECTOR(int16_t, 4))(0x1F19L, (VECTOR(int16_t, 2))(0x1F19L, 1L), 1L);
    int32_t ***l_208[6];
    int32_t ****l_209 = &l_208[1];
    int32_t *l_213 = &p_1451->g_84[6];
    int32_t **l_212 = &l_213;
    int32_t *l_219 = &p_1451->g_220;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_208[i] = &p_1451->g_117[0][0];
    (*l_219) ^= ((**l_212) = (((*p_1451->g_140) = func_63(func_69(((safe_mul_func_int16_t_s_s((p_1451->g_206.s1 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_76.s8365)), (-1L), ((VECTOR(int16_t, 16))((func_77(p_1451->g_81, ((void*)0 == l_82), l_76.sf, p_1451) , (l_204 = p_1451->g_8)), 0x66C8L, (-8L), (-1L), p_59, ((VECTOR(int16_t, 4))(l_205.yyyy)), 0x3A8AL, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(0x44FDL, 5L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(p_1451->g_206.s84)).yxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_207.wxzy)).odd)).yxyy))), (-1L), (-5L))).s30, ((VECTOR(int16_t, 8))(((((((*l_209) = l_208[1]) != ((safe_mod_func_uint32_t_u_u(((((&p_1451->g_117[0][0] != (void*)0) & p_1451->g_comm_values[p_1451->tid]) | 0x267926D8L) | p_60), (-3L))) , &p_1451->g_140)) && 6UL) >= p_60) > FAKE_DIVERGE(p_1451->global_2_offset, get_global_id(2), 10)), ((VECTOR(int16_t, 4))(0x3D32L)), p_59, 0L, 0x5B39L)).s64, ((VECTOR(int16_t, 2))(0x6253L))))), ((VECTOR(int16_t, 2))(0x0E69L))))), p_61, 0x2C54L, 0L, 1L)).s6, 1L, 1L)), ((VECTOR(int16_t, 8))(0x7CB8L))))).s16)).even), p_60)) <= 9L), l_82, p_1451->g_81, l_212, p_1451), p_59, p_1451->g_84[3], p_59, (**l_212), p_1451)) != (void*)0));
    (*l_219) &= ((*l_213) = (*p_58));
    return (**l_209);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_63(uint64_t * p_64, int32_t  p_65, uint32_t  p_66, int64_t  p_67, int64_t  p_68, struct S1 * p_1451)
{ /* block id: 84 */
    int32_t *l_218 = &p_1451->g_8;
    return l_218;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_69(uint64_t  p_70, uint64_t * p_71, uint64_t * p_72, int32_t ** p_73, struct S1 * p_1451)
{ /* block id: 75 */
    uint64_t *l_217 = (void*)0;
    if ((atomic_inc(&p_1451->g_atomic_input[23 * get_linear_group_id() + 6]) == 0))
    { /* block id: 77 */
        uint32_t l_214 = 5UL;
        uint32_t l_215 = 0x82E646FBL;
        uint8_t l_216 = 0xAFL;
        l_215 ^= l_214;
        l_216 = (-4L);
        unsigned int result = 0;
        result += l_214;
        result += l_215;
        result += l_216;
        atomic_add(&p_1451->g_special_values[23 * get_linear_group_id() + 6], result);
    }
    else
    { /* block id: 80 */
        (1 + 1);
    }
    return l_217;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_96 p_1451->g_99 p_1451->g_102 p_1451->g_109 p_1451->g_116 p_1451->g_117 p_1451->g_110 p_1451->g_8 p_1451->l_comm_values p_1451->g_27 p_1451->g_comm_values p_1451->g_84 p_1451->g_133 p_1451->g_140 p_1451->g_4 p_1451->g_33 p_1451->g_31
 * writes: p_1451->g_102 p_1451->g_109 p_1451->g_117 p_1451->g_96 p_1451->g_110 p_1451->g_150 p_1451->g_162 p_1451->g_comm_values
 */
int16_t  func_77(uint64_t * p_78, int16_t  p_79, int32_t  p_80, struct S1 * p_1451)
{ /* block id: 19 */
    int32_t *l_83 = &p_1451->g_84[0];
    VECTOR(uint8_t, 16) l_100 = (VECTOR(uint8_t, 16))(0xE5L, (VECTOR(uint8_t, 4))(0xE5L, (VECTOR(uint8_t, 2))(0xE5L, 9UL), 9UL), 9UL, 0xE5L, 9UL, (VECTOR(uint8_t, 2))(0xE5L, 9UL), (VECTOR(uint8_t, 2))(0xE5L, 9UL), 0xE5L, 9UL, 0xE5L, 9UL);
    uint64_t *l_101 = &p_1451->g_102;
    int32_t **l_108 = &l_83;
    int32_t ***l_107 = &l_108;
    int32_t ***l_111 = &p_1451->g_109;
    int32_t ***l_118 = &p_1451->g_117[2][1];
    uint32_t l_119 = 0xD7F83892L;
    uint32_t l_120 = 0xB3DFEA10L;
    int64_t l_121[7] = {0x5723E8202A807506L,0x5723E8202A807506L,0x5723E8202A807506L,0x5723E8202A807506L,0x5723E8202A807506L,0x5723E8202A807506L,0x5723E8202A807506L};
    VECTOR(uint8_t, 16) l_122 = (VECTOR(uint8_t, 16))(0xCDL, (VECTOR(uint8_t, 4))(0xCDL, (VECTOR(uint8_t, 2))(0xCDL, 4UL), 4UL), 4UL, 0xCDL, 4UL, (VECTOR(uint8_t, 2))(0xCDL, 4UL), (VECTOR(uint8_t, 2))(0xCDL, 4UL), 0xCDL, 4UL, 0xCDL, 4UL);
    int i;
    l_83 = &p_80;
    (*p_1451->g_140) = func_85((((((*p_1451->g_116) = ((safe_div_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((((l_120 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((((VECTOR(int8_t, 4))(p_1451->g_96.s0143)).y && (safe_lshift_func_uint8_t_u_s(((((p_79 & ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(p_1451->g_99.sd2)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_100.s4dc16d46)))).s10))).odd) > p_1451->g_96.s3) | (++(*l_101))) > (((void*)0 != l_83) >= ((safe_sub_func_uint32_t_u_u(p_1451->g_96.s2, ((((*l_107) = &l_83) == ((*l_111) = p_1451->g_109)) == (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((l_118 = p_1451->g_116) != l_107) | p_80), p_80)) , (***l_118)), l_119))))) == 1UL))), p_79))) < 0x74949FC4A87E6343L), FAKE_DIVERGE(p_1451->group_0_offset, get_group_id(0), 10), 1UL, 4UL)))).wyywxyyyxwxwxzxw)).s99a0))), (uint64_t)(***l_111)))).w || 0UL), 7)), p_1451->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1451->tid, 19))]))) & p_1451->g_27.y) > (*l_83)), l_121[4])) == p_1451->g_comm_values[p_1451->tid]), (-1L))) , (*l_118))) != &l_83) & l_122.s7) , p_1451->g_102), p_79, p_1451);
    return p_1451->g_31.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1451->g_102 p_1451->g_84 p_1451->g_133 p_1451->g_140 p_1451->g_109 p_1451->g_110 p_1451->g_8 p_1451->g_4 p_1451->g_33 p_1451->g_116 p_1451->g_117
 * writes: p_1451->g_96 p_1451->g_102 p_1451->g_110 p_1451->g_150 p_1451->g_162 p_1451->g_comm_values
 */
int32_t * func_85(int8_t  p_86, int32_t  p_87, struct S1 * p_1451)
{ /* block id: 27 */
    int8_t l_125 = 0x28L;
    int32_t l_126 = 0x4899101CL;
    int8_t *l_127 = (void*)0;
    int8_t *l_128[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_129 = 0x18A46498L;
    uint8_t l_141[2][2][5] = {{{0xA0L,0xA0L,0xA0L,0xA0L,0xA0L},{0xA0L,0xA0L,0xA0L,0xA0L,0xA0L}},{{0xA0L,0xA0L,0xA0L,0xA0L,0xA0L},{0xA0L,0xA0L,0xA0L,0xA0L,0xA0L}}};
    int32_t l_152 = 0x2A5491B9L;
    int i, j, k;
    l_129 = (safe_mul_func_uint8_t_u_u((l_126 = l_125), (p_1451->g_96.s6 = l_125)));
    for (p_1451->g_102 = 20; (p_1451->g_102 > 39); p_1451->g_102 = safe_add_func_uint64_t_u_u(p_1451->g_102, 8))
    { /* block id: 33 */
        int8_t **l_132 = &l_128[6];
        int32_t l_137 = (-10L);
        int32_t ***l_144 = &p_1451->g_109;
        uint32_t *l_149 = &p_1451->g_150;
        int32_t *l_151 = &l_126;
        uint32_t l_180 = 0x9F5B7F4FL;
        l_141[1][1][0] |= (((p_86 == 65534UL) && (p_1451->g_84[0] <= (((*l_132) = &p_86) == p_1451->g_133[2]))) >= (safe_sub_func_int32_t_s_s(((l_137 & (l_137 | ((void*)0 != p_1451->g_140))) || l_137), FAKE_DIVERGE(p_1451->local_1_offset, get_local_id(1), 10))));
        (*p_1451->g_109) = (void*)0;
        l_152 &= (((((**l_144) = (((GROUP_DIVERGE(0, 1) | p_86) < (safe_add_func_int32_t_s_s(1L, (p_87 & (p_87 | ((void*)0 == l_144)))))) , (**l_144))) == (void*)0) < FAKE_DIVERGE(p_1451->local_0_offset, get_local_id(0), 10)) , ((*l_151) = (((*l_149) = ((l_129 = (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_1451->g_8, p_86)), 7))) > l_126)) && p_87)));
        for (p_87 = 0; (p_87 == (-22)); p_87 = safe_sub_func_int32_t_s_s(p_87, 4))
        { /* block id: 44 */
            uint16_t *l_161 = &p_1451->g_162;
            struct S0 l_169 = {0UL};
            int64_t *l_178[4][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_179 = 0x6ACEA086L;
            uint64_t *l_181 = &l_169.f0;
            int i, j, k;
            l_129 ^= (safe_div_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(5UL, 0x1F37730FL, 0xA5094A51L, (safe_mul_func_uint16_t_u_u(((*l_161) = (safe_div_func_int16_t_s_s(p_86, p_87))), (safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((!(FAKE_DIVERGE(p_1451->local_1_offset, get_local_id(1), 10) != (safe_sub_func_uint8_t_u_u(((l_169 , ((*l_181) = ((((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))((-2L), (-1L))).yxyy, ((VECTOR(int8_t, 16))((l_179 = (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((*l_149) = (safe_sub_func_uint64_t_u_u((*l_151), (safe_add_func_uint64_t_u_u(p_87, p_1451->g_4))))), (((p_86 >= l_169.f0) > ((VECTOR(int8_t, 4))(0x66L, 0x72L, 1L, 0x39L)).w) <= (((p_1451->g_comm_values[p_1451->tid] = 7L) & 0x51E81E1FAD2F1836L) > 0x1F213F65L)))) , l_169.f0), 2))), l_180, 1L, (-6L), 0x72L, 0x22L, ((VECTOR(int8_t, 4))(0x07L)), p_87, ((VECTOR(int8_t, 4))(8L)), (-2L))).sa5c4))).hi, ((VECTOR(int8_t, 2))((-10L)))))))))).xxxxyxxyxxxxxxyy, ((VECTOR(int8_t, 16))(0x45L))))).s5 || l_152) , 1UL))) , p_1451->g_33.x), (-6L))))) <= p_87), GROUP_DIVERGE(1, 1))), p_86)))), ((VECTOR(uint32_t, 2))(4294967287UL)), 0x7D6E8952L, ((VECTOR(uint32_t, 4))(4294967287UL)), ((VECTOR(uint32_t, 4))(0x6B1BB55FL)), 4294967295UL)).sf || 0x00C78AF0L), (*l_151)));
            (**p_1451->g_116) = (*p_1451->g_109);
        }
    }
    if ((atomic_inc(&p_1451->g_atomic_input[23 * get_linear_group_id() + 7]) == 1))
    { /* block id: 55 */
        int32_t l_182[7][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
        int64_t l_194 = 0x140D45DD2073866EL;
        uint32_t l_195 = 0x88FC330AL;
        int i, j;
        for (l_182[0][0] = (-10); (l_182[0][0] >= (-30)); l_182[0][0]--)
        { /* block id: 58 */
            uint32_t l_185 = 0x23E96085L;
            uint8_t l_186 = 1UL;
            uint32_t l_187 = 0xEFAB7566L;
            int64_t l_188[6][8][3] = {{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}},{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}},{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}},{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}},{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}},{{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L},{0x5AB7222A015E9F7BL,(-7L),1L}}};
            uint32_t l_189 = 0xCB368D48L;
            int32_t *l_190 = (void*)0;
            int32_t l_192 = (-1L);
            int32_t *l_191 = &l_192;
            int32_t *l_193[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            l_186 = l_185;
            l_189 ^= (l_188[4][2][0] &= l_187);
            l_193[0] = (l_191 = l_190);
        }
        l_195 |= l_194;
        unsigned int result = 0;
        int l_182_i0, l_182_i1;
        for (l_182_i0 = 0; l_182_i0 < 7; l_182_i0++) {
            for (l_182_i1 = 0; l_182_i1 < 1; l_182_i1++) {
                result += l_182[l_182_i0][l_182_i1];
            }
        }
        result += l_194;
        result += l_195;
        atomic_add(&p_1451->g_special_values[23 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 66 */
        (1 + 1);
    }
    return (*p_1451->g_140);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S1 c_1452;
    struct S1* p_1451 = &c_1452;
    struct S1 c_1453 = {
        (VECTOR(int32_t, 8))(0x164A53AAL, (VECTOR(int32_t, 4))(0x164A53AAL, (VECTOR(int32_t, 2))(0x164A53AAL, (-10L)), (-10L)), (-10L), 0x164A53AAL, (-10L)), // p_1451->g_2
        {1L,1L,1L,1L,1L,1L,1L}, // p_1451->g_3
        0x16580849L, // p_1451->g_4
        0x3938DD44L, // p_1451->g_8
        (void*)0, // p_1451->g_13
        (void*)0, // p_1451->g_14
        (VECTOR(uint64_t, 2))(0xB63E91CB64B69305L, 18446744073709551615UL), // p_1451->g_27
        (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x7F5D1CC0C7FD579DL), // p_1451->g_28
        (VECTOR(uint64_t, 2))(18446744073709551613UL, 0UL), // p_1451->g_31
        (VECTOR(uint64_t, 2))(0xE3B61EA52FA57A88L, 1UL), // p_1451->g_33
        18446744073709551606UL, // p_1451->g_35
        (void*)0, // p_1451->g_81
        {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_1451->g_84
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x60L), 0x60L), 0x60L, (-1L), 0x60L), // p_1451->g_96
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL), // p_1451->g_99
        0xBA9186717EFFEB3BL, // p_1451->g_102
        &p_1451->g_8, // p_1451->g_110
        &p_1451->g_110, // p_1451->g_109
        {{&p_1451->g_110,&p_1451->g_110},{&p_1451->g_110,&p_1451->g_110},{&p_1451->g_110,&p_1451->g_110}}, // p_1451->g_117
        &p_1451->g_117[0][0], // p_1451->g_116
        0L, // p_1451->g_134
        {&p_1451->g_134,&p_1451->g_134,&p_1451->g_134,&p_1451->g_134,&p_1451->g_134}, // p_1451->g_133
        &p_1451->g_110, // p_1451->g_140
        4294967289UL, // p_1451->g_150
        0x3E6BL, // p_1451->g_162
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0084L), 0x0084L), 0x0084L, (-1L), 0x0084L, (VECTOR(int16_t, 2))((-1L), 0x0084L), (VECTOR(int16_t, 2))((-1L), 0x0084L), (-1L), 0x0084L, (-1L), 0x0084L), // p_1451->g_206
        4L, // p_1451->g_220
        {18446744073709551615UL}, // p_1451->g_223
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x95E3L), 0x95E3L), 0x95E3L, 65530UL, 0x95E3L, (VECTOR(uint16_t, 2))(65530UL, 0x95E3L), (VECTOR(uint16_t, 2))(65530UL, 0x95E3L), 65530UL, 0x95E3L, 65530UL, 0x95E3L), // p_1451->g_262
        (VECTOR(uint8_t, 16))(0xA3L, (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 254UL), 254UL), 254UL, 0xA3L, 254UL, (VECTOR(uint8_t, 2))(0xA3L, 254UL), (VECTOR(uint8_t, 2))(0xA3L, 254UL), 0xA3L, 254UL, 0xA3L, 254UL), // p_1451->g_306
        (VECTOR(int8_t, 2))((-6L), (-5L)), // p_1451->g_338
        65527UL, // p_1451->g_366
        8L, // p_1451->g_435
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1680E0D4L), 0x1680E0D4L), 0x1680E0D4L, (-1L), 0x1680E0D4L), // p_1451->g_450
        (VECTOR(uint32_t, 2))(4294967288UL, 0x1C657936L), // p_1451->g_515
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x90E09373L), 0x90E09373L), 0x90E09373L, 0UL, 0x90E09373L), // p_1451->g_516
        (VECTOR(uint32_t, 8))(0x02F74617L, (VECTOR(uint32_t, 4))(0x02F74617L, (VECTOR(uint32_t, 2))(0x02F74617L, 7UL), 7UL), 7UL, 0x02F74617L, 7UL), // p_1451->g_519
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0UL), 0UL), // p_1451->g_521
        (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), // p_1451->g_525
        (VECTOR(uint32_t, 2))(0UL, 0x735A14F7L), // p_1451->g_526
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEE919B90L), 0xEE919B90L), 0xEE919B90L, 1UL, 0xEE919B90L), // p_1451->g_527
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L)), // p_1451->g_551
        (void*)0, // p_1451->g_599
        &p_1451->g_599, // p_1451->g_598
        (VECTOR(uint64_t, 4))(0xB2D166793A814736L, (VECTOR(uint64_t, 2))(0xB2D166793A814736L, 1UL), 1UL), // p_1451->g_643
        (VECTOR(uint64_t, 2))(0x251B305C3EC9E3E8L, 0UL), // p_1451->g_644
        (VECTOR(int32_t, 2))(0x2207BC86L, 0x4AA0279EL), // p_1451->g_653
        (VECTOR(int64_t, 4))(0x4B19F2D94ED4AEACL, (VECTOR(int64_t, 2))(0x4B19F2D94ED4AEACL, 0L), 0L), // p_1451->g_1031
        (void*)0, // p_1451->g_1037
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1451->g_1124
        &p_1451->g_1124[3], // p_1451->g_1123
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), // p_1451->g_1135
        (VECTOR(int16_t, 2))(0x5060L, (-2L)), // p_1451->g_1153
        (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-1L)), (-1L)), // p_1451->g_1189
        &p_1451->g_116, // p_1451->g_1221
        &p_1451->g_1221, // p_1451->g_1220
        &p_1451->g_598, // p_1451->g_1250
        (VECTOR(uint32_t, 2))(0x7F0F3CA0L, 0x353EE8D8L), // p_1451->g_1251
        (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xBBD1L), 0xBBD1L), 0xBBD1L, 65533UL, 0xBBD1L, (VECTOR(uint16_t, 2))(65533UL, 0xBBD1L), (VECTOR(uint16_t, 2))(65533UL, 0xBBD1L), 65533UL, 0xBBD1L, 65533UL, 0xBBD1L), // p_1451->g_1266
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1451->g_1279
        (VECTOR(uint32_t, 8))(0x99592A08L, (VECTOR(uint32_t, 4))(0x99592A08L, (VECTOR(uint32_t, 2))(0x99592A08L, 0x34A102DEL), 0x34A102DEL), 0x34A102DEL, 0x99592A08L, 0x34A102DEL), // p_1451->g_1281
        (VECTOR(uint32_t, 8))(0xF305054FL, (VECTOR(uint32_t, 4))(0xF305054FL, (VECTOR(uint32_t, 2))(0xF305054FL, 4294967295UL), 4294967295UL), 4294967295UL, 0xF305054FL, 4294967295UL), // p_1451->g_1284
        8L, // p_1451->g_1310
        (VECTOR(uint32_t, 2))(0xF9DD4004L, 0x32C821F8L), // p_1451->g_1318
        (VECTOR(uint64_t, 4))(0x3F58F12FA3C4D89BL, (VECTOR(uint64_t, 2))(0x3F58F12FA3C4D89BL, 0x9137EACBBDCA7CBAL), 0x9137EACBBDCA7CBAL), // p_1451->g_1342
        (void*)0, // p_1451->g_1349
        {{&p_1451->g_1349,&p_1451->g_1349,&p_1451->g_1349},{&p_1451->g_1349,&p_1451->g_1349,&p_1451->g_1349}}, // p_1451->g_1348
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4BL), 0x4BL), 0x4BL, 1L, 0x4BL, (VECTOR(int8_t, 2))(1L, 0x4BL), (VECTOR(int8_t, 2))(1L, 0x4BL), 1L, 0x4BL, 1L, 0x4BL), // p_1451->g_1403
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1451->g_1404
        (VECTOR(int32_t, 16))(0x485704C7L, (VECTOR(int32_t, 4))(0x485704C7L, (VECTOR(int32_t, 2))(0x485704C7L, 3L), 3L), 3L, 0x485704C7L, 3L, (VECTOR(int32_t, 2))(0x485704C7L, 3L), (VECTOR(int32_t, 2))(0x485704C7L, 3L), 0x485704C7L, 3L, 0x485704C7L, 3L), // p_1451->g_1410
        0xB9D49E8CL, // p_1451->g_1421
        0, // p_1451->v_collective
        sequence_input[get_global_id(0)], // p_1451->global_0_offset
        sequence_input[get_global_id(1)], // p_1451->global_1_offset
        sequence_input[get_global_id(2)], // p_1451->global_2_offset
        sequence_input[get_local_id(0)], // p_1451->local_0_offset
        sequence_input[get_local_id(1)], // p_1451->local_1_offset
        sequence_input[get_local_id(2)], // p_1451->local_2_offset
        sequence_input[get_group_id(0)], // p_1451->group_0_offset
        sequence_input[get_group_id(1)], // p_1451->group_1_offset
        sequence_input[get_group_id(2)], // p_1451->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_1451->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1452 = c_1453;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1451);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1451->g_2.s0, "p_1451->g_2.s0", print_hash_value);
    transparent_crc(p_1451->g_2.s1, "p_1451->g_2.s1", print_hash_value);
    transparent_crc(p_1451->g_2.s2, "p_1451->g_2.s2", print_hash_value);
    transparent_crc(p_1451->g_2.s3, "p_1451->g_2.s3", print_hash_value);
    transparent_crc(p_1451->g_2.s4, "p_1451->g_2.s4", print_hash_value);
    transparent_crc(p_1451->g_2.s5, "p_1451->g_2.s5", print_hash_value);
    transparent_crc(p_1451->g_2.s6, "p_1451->g_2.s6", print_hash_value);
    transparent_crc(p_1451->g_2.s7, "p_1451->g_2.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1451->g_3[i], "p_1451->g_3[i]", print_hash_value);

    }
    transparent_crc(p_1451->g_4, "p_1451->g_4", print_hash_value);
    transparent_crc(p_1451->g_8, "p_1451->g_8", print_hash_value);
    transparent_crc(p_1451->g_27.x, "p_1451->g_27.x", print_hash_value);
    transparent_crc(p_1451->g_27.y, "p_1451->g_27.y", print_hash_value);
    transparent_crc(p_1451->g_28.x, "p_1451->g_28.x", print_hash_value);
    transparent_crc(p_1451->g_28.y, "p_1451->g_28.y", print_hash_value);
    transparent_crc(p_1451->g_31.x, "p_1451->g_31.x", print_hash_value);
    transparent_crc(p_1451->g_31.y, "p_1451->g_31.y", print_hash_value);
    transparent_crc(p_1451->g_33.x, "p_1451->g_33.x", print_hash_value);
    transparent_crc(p_1451->g_33.y, "p_1451->g_33.y", print_hash_value);
    transparent_crc(p_1451->g_35, "p_1451->g_35", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1451->g_84[i], "p_1451->g_84[i]", print_hash_value);

    }
    transparent_crc(p_1451->g_96.s0, "p_1451->g_96.s0", print_hash_value);
    transparent_crc(p_1451->g_96.s1, "p_1451->g_96.s1", print_hash_value);
    transparent_crc(p_1451->g_96.s2, "p_1451->g_96.s2", print_hash_value);
    transparent_crc(p_1451->g_96.s3, "p_1451->g_96.s3", print_hash_value);
    transparent_crc(p_1451->g_96.s4, "p_1451->g_96.s4", print_hash_value);
    transparent_crc(p_1451->g_96.s5, "p_1451->g_96.s5", print_hash_value);
    transparent_crc(p_1451->g_96.s6, "p_1451->g_96.s6", print_hash_value);
    transparent_crc(p_1451->g_96.s7, "p_1451->g_96.s7", print_hash_value);
    transparent_crc(p_1451->g_99.s0, "p_1451->g_99.s0", print_hash_value);
    transparent_crc(p_1451->g_99.s1, "p_1451->g_99.s1", print_hash_value);
    transparent_crc(p_1451->g_99.s2, "p_1451->g_99.s2", print_hash_value);
    transparent_crc(p_1451->g_99.s3, "p_1451->g_99.s3", print_hash_value);
    transparent_crc(p_1451->g_99.s4, "p_1451->g_99.s4", print_hash_value);
    transparent_crc(p_1451->g_99.s5, "p_1451->g_99.s5", print_hash_value);
    transparent_crc(p_1451->g_99.s6, "p_1451->g_99.s6", print_hash_value);
    transparent_crc(p_1451->g_99.s7, "p_1451->g_99.s7", print_hash_value);
    transparent_crc(p_1451->g_99.s8, "p_1451->g_99.s8", print_hash_value);
    transparent_crc(p_1451->g_99.s9, "p_1451->g_99.s9", print_hash_value);
    transparent_crc(p_1451->g_99.sa, "p_1451->g_99.sa", print_hash_value);
    transparent_crc(p_1451->g_99.sb, "p_1451->g_99.sb", print_hash_value);
    transparent_crc(p_1451->g_99.sc, "p_1451->g_99.sc", print_hash_value);
    transparent_crc(p_1451->g_99.sd, "p_1451->g_99.sd", print_hash_value);
    transparent_crc(p_1451->g_99.se, "p_1451->g_99.se", print_hash_value);
    transparent_crc(p_1451->g_99.sf, "p_1451->g_99.sf", print_hash_value);
    transparent_crc(p_1451->g_102, "p_1451->g_102", print_hash_value);
    transparent_crc(p_1451->g_134, "p_1451->g_134", print_hash_value);
    transparent_crc(p_1451->g_150, "p_1451->g_150", print_hash_value);
    transparent_crc(p_1451->g_162, "p_1451->g_162", print_hash_value);
    transparent_crc(p_1451->g_206.s0, "p_1451->g_206.s0", print_hash_value);
    transparent_crc(p_1451->g_206.s1, "p_1451->g_206.s1", print_hash_value);
    transparent_crc(p_1451->g_206.s2, "p_1451->g_206.s2", print_hash_value);
    transparent_crc(p_1451->g_206.s3, "p_1451->g_206.s3", print_hash_value);
    transparent_crc(p_1451->g_206.s4, "p_1451->g_206.s4", print_hash_value);
    transparent_crc(p_1451->g_206.s5, "p_1451->g_206.s5", print_hash_value);
    transparent_crc(p_1451->g_206.s6, "p_1451->g_206.s6", print_hash_value);
    transparent_crc(p_1451->g_206.s7, "p_1451->g_206.s7", print_hash_value);
    transparent_crc(p_1451->g_206.s8, "p_1451->g_206.s8", print_hash_value);
    transparent_crc(p_1451->g_206.s9, "p_1451->g_206.s9", print_hash_value);
    transparent_crc(p_1451->g_206.sa, "p_1451->g_206.sa", print_hash_value);
    transparent_crc(p_1451->g_206.sb, "p_1451->g_206.sb", print_hash_value);
    transparent_crc(p_1451->g_206.sc, "p_1451->g_206.sc", print_hash_value);
    transparent_crc(p_1451->g_206.sd, "p_1451->g_206.sd", print_hash_value);
    transparent_crc(p_1451->g_206.se, "p_1451->g_206.se", print_hash_value);
    transparent_crc(p_1451->g_206.sf, "p_1451->g_206.sf", print_hash_value);
    transparent_crc(p_1451->g_220, "p_1451->g_220", print_hash_value);
    transparent_crc(p_1451->g_223.f0, "p_1451->g_223.f0", print_hash_value);
    transparent_crc(p_1451->g_262.s0, "p_1451->g_262.s0", print_hash_value);
    transparent_crc(p_1451->g_262.s1, "p_1451->g_262.s1", print_hash_value);
    transparent_crc(p_1451->g_262.s2, "p_1451->g_262.s2", print_hash_value);
    transparent_crc(p_1451->g_262.s3, "p_1451->g_262.s3", print_hash_value);
    transparent_crc(p_1451->g_262.s4, "p_1451->g_262.s4", print_hash_value);
    transparent_crc(p_1451->g_262.s5, "p_1451->g_262.s5", print_hash_value);
    transparent_crc(p_1451->g_262.s6, "p_1451->g_262.s6", print_hash_value);
    transparent_crc(p_1451->g_262.s7, "p_1451->g_262.s7", print_hash_value);
    transparent_crc(p_1451->g_262.s8, "p_1451->g_262.s8", print_hash_value);
    transparent_crc(p_1451->g_262.s9, "p_1451->g_262.s9", print_hash_value);
    transparent_crc(p_1451->g_262.sa, "p_1451->g_262.sa", print_hash_value);
    transparent_crc(p_1451->g_262.sb, "p_1451->g_262.sb", print_hash_value);
    transparent_crc(p_1451->g_262.sc, "p_1451->g_262.sc", print_hash_value);
    transparent_crc(p_1451->g_262.sd, "p_1451->g_262.sd", print_hash_value);
    transparent_crc(p_1451->g_262.se, "p_1451->g_262.se", print_hash_value);
    transparent_crc(p_1451->g_262.sf, "p_1451->g_262.sf", print_hash_value);
    transparent_crc(p_1451->g_306.s0, "p_1451->g_306.s0", print_hash_value);
    transparent_crc(p_1451->g_306.s1, "p_1451->g_306.s1", print_hash_value);
    transparent_crc(p_1451->g_306.s2, "p_1451->g_306.s2", print_hash_value);
    transparent_crc(p_1451->g_306.s3, "p_1451->g_306.s3", print_hash_value);
    transparent_crc(p_1451->g_306.s4, "p_1451->g_306.s4", print_hash_value);
    transparent_crc(p_1451->g_306.s5, "p_1451->g_306.s5", print_hash_value);
    transparent_crc(p_1451->g_306.s6, "p_1451->g_306.s6", print_hash_value);
    transparent_crc(p_1451->g_306.s7, "p_1451->g_306.s7", print_hash_value);
    transparent_crc(p_1451->g_306.s8, "p_1451->g_306.s8", print_hash_value);
    transparent_crc(p_1451->g_306.s9, "p_1451->g_306.s9", print_hash_value);
    transparent_crc(p_1451->g_306.sa, "p_1451->g_306.sa", print_hash_value);
    transparent_crc(p_1451->g_306.sb, "p_1451->g_306.sb", print_hash_value);
    transparent_crc(p_1451->g_306.sc, "p_1451->g_306.sc", print_hash_value);
    transparent_crc(p_1451->g_306.sd, "p_1451->g_306.sd", print_hash_value);
    transparent_crc(p_1451->g_306.se, "p_1451->g_306.se", print_hash_value);
    transparent_crc(p_1451->g_306.sf, "p_1451->g_306.sf", print_hash_value);
    transparent_crc(p_1451->g_338.x, "p_1451->g_338.x", print_hash_value);
    transparent_crc(p_1451->g_338.y, "p_1451->g_338.y", print_hash_value);
    transparent_crc(p_1451->g_366, "p_1451->g_366", print_hash_value);
    transparent_crc(p_1451->g_435, "p_1451->g_435", print_hash_value);
    transparent_crc(p_1451->g_450.s0, "p_1451->g_450.s0", print_hash_value);
    transparent_crc(p_1451->g_450.s1, "p_1451->g_450.s1", print_hash_value);
    transparent_crc(p_1451->g_450.s2, "p_1451->g_450.s2", print_hash_value);
    transparent_crc(p_1451->g_450.s3, "p_1451->g_450.s3", print_hash_value);
    transparent_crc(p_1451->g_450.s4, "p_1451->g_450.s4", print_hash_value);
    transparent_crc(p_1451->g_450.s5, "p_1451->g_450.s5", print_hash_value);
    transparent_crc(p_1451->g_450.s6, "p_1451->g_450.s6", print_hash_value);
    transparent_crc(p_1451->g_450.s7, "p_1451->g_450.s7", print_hash_value);
    transparent_crc(p_1451->g_515.x, "p_1451->g_515.x", print_hash_value);
    transparent_crc(p_1451->g_515.y, "p_1451->g_515.y", print_hash_value);
    transparent_crc(p_1451->g_516.s0, "p_1451->g_516.s0", print_hash_value);
    transparent_crc(p_1451->g_516.s1, "p_1451->g_516.s1", print_hash_value);
    transparent_crc(p_1451->g_516.s2, "p_1451->g_516.s2", print_hash_value);
    transparent_crc(p_1451->g_516.s3, "p_1451->g_516.s3", print_hash_value);
    transparent_crc(p_1451->g_516.s4, "p_1451->g_516.s4", print_hash_value);
    transparent_crc(p_1451->g_516.s5, "p_1451->g_516.s5", print_hash_value);
    transparent_crc(p_1451->g_516.s6, "p_1451->g_516.s6", print_hash_value);
    transparent_crc(p_1451->g_516.s7, "p_1451->g_516.s7", print_hash_value);
    transparent_crc(p_1451->g_519.s0, "p_1451->g_519.s0", print_hash_value);
    transparent_crc(p_1451->g_519.s1, "p_1451->g_519.s1", print_hash_value);
    transparent_crc(p_1451->g_519.s2, "p_1451->g_519.s2", print_hash_value);
    transparent_crc(p_1451->g_519.s3, "p_1451->g_519.s3", print_hash_value);
    transparent_crc(p_1451->g_519.s4, "p_1451->g_519.s4", print_hash_value);
    transparent_crc(p_1451->g_519.s5, "p_1451->g_519.s5", print_hash_value);
    transparent_crc(p_1451->g_519.s6, "p_1451->g_519.s6", print_hash_value);
    transparent_crc(p_1451->g_519.s7, "p_1451->g_519.s7", print_hash_value);
    transparent_crc(p_1451->g_521.x, "p_1451->g_521.x", print_hash_value);
    transparent_crc(p_1451->g_521.y, "p_1451->g_521.y", print_hash_value);
    transparent_crc(p_1451->g_521.z, "p_1451->g_521.z", print_hash_value);
    transparent_crc(p_1451->g_521.w, "p_1451->g_521.w", print_hash_value);
    transparent_crc(p_1451->g_525.x, "p_1451->g_525.x", print_hash_value);
    transparent_crc(p_1451->g_525.y, "p_1451->g_525.y", print_hash_value);
    transparent_crc(p_1451->g_526.x, "p_1451->g_526.x", print_hash_value);
    transparent_crc(p_1451->g_526.y, "p_1451->g_526.y", print_hash_value);
    transparent_crc(p_1451->g_527.s0, "p_1451->g_527.s0", print_hash_value);
    transparent_crc(p_1451->g_527.s1, "p_1451->g_527.s1", print_hash_value);
    transparent_crc(p_1451->g_527.s2, "p_1451->g_527.s2", print_hash_value);
    transparent_crc(p_1451->g_527.s3, "p_1451->g_527.s3", print_hash_value);
    transparent_crc(p_1451->g_527.s4, "p_1451->g_527.s4", print_hash_value);
    transparent_crc(p_1451->g_527.s5, "p_1451->g_527.s5", print_hash_value);
    transparent_crc(p_1451->g_527.s6, "p_1451->g_527.s6", print_hash_value);
    transparent_crc(p_1451->g_527.s7, "p_1451->g_527.s7", print_hash_value);
    transparent_crc(p_1451->g_551.s0, "p_1451->g_551.s0", print_hash_value);
    transparent_crc(p_1451->g_551.s1, "p_1451->g_551.s1", print_hash_value);
    transparent_crc(p_1451->g_551.s2, "p_1451->g_551.s2", print_hash_value);
    transparent_crc(p_1451->g_551.s3, "p_1451->g_551.s3", print_hash_value);
    transparent_crc(p_1451->g_551.s4, "p_1451->g_551.s4", print_hash_value);
    transparent_crc(p_1451->g_551.s5, "p_1451->g_551.s5", print_hash_value);
    transparent_crc(p_1451->g_551.s6, "p_1451->g_551.s6", print_hash_value);
    transparent_crc(p_1451->g_551.s7, "p_1451->g_551.s7", print_hash_value);
    transparent_crc(p_1451->g_643.x, "p_1451->g_643.x", print_hash_value);
    transparent_crc(p_1451->g_643.y, "p_1451->g_643.y", print_hash_value);
    transparent_crc(p_1451->g_643.z, "p_1451->g_643.z", print_hash_value);
    transparent_crc(p_1451->g_643.w, "p_1451->g_643.w", print_hash_value);
    transparent_crc(p_1451->g_644.x, "p_1451->g_644.x", print_hash_value);
    transparent_crc(p_1451->g_644.y, "p_1451->g_644.y", print_hash_value);
    transparent_crc(p_1451->g_653.x, "p_1451->g_653.x", print_hash_value);
    transparent_crc(p_1451->g_653.y, "p_1451->g_653.y", print_hash_value);
    transparent_crc(p_1451->g_1031.x, "p_1451->g_1031.x", print_hash_value);
    transparent_crc(p_1451->g_1031.y, "p_1451->g_1031.y", print_hash_value);
    transparent_crc(p_1451->g_1031.z, "p_1451->g_1031.z", print_hash_value);
    transparent_crc(p_1451->g_1031.w, "p_1451->g_1031.w", print_hash_value);
    transparent_crc(p_1451->g_1135.x, "p_1451->g_1135.x", print_hash_value);
    transparent_crc(p_1451->g_1135.y, "p_1451->g_1135.y", print_hash_value);
    transparent_crc(p_1451->g_1135.z, "p_1451->g_1135.z", print_hash_value);
    transparent_crc(p_1451->g_1135.w, "p_1451->g_1135.w", print_hash_value);
    transparent_crc(p_1451->g_1153.x, "p_1451->g_1153.x", print_hash_value);
    transparent_crc(p_1451->g_1153.y, "p_1451->g_1153.y", print_hash_value);
    transparent_crc(p_1451->g_1189.x, "p_1451->g_1189.x", print_hash_value);
    transparent_crc(p_1451->g_1189.y, "p_1451->g_1189.y", print_hash_value);
    transparent_crc(p_1451->g_1189.z, "p_1451->g_1189.z", print_hash_value);
    transparent_crc(p_1451->g_1189.w, "p_1451->g_1189.w", print_hash_value);
    transparent_crc(p_1451->g_1251.x, "p_1451->g_1251.x", print_hash_value);
    transparent_crc(p_1451->g_1251.y, "p_1451->g_1251.y", print_hash_value);
    transparent_crc(p_1451->g_1266.s0, "p_1451->g_1266.s0", print_hash_value);
    transparent_crc(p_1451->g_1266.s1, "p_1451->g_1266.s1", print_hash_value);
    transparent_crc(p_1451->g_1266.s2, "p_1451->g_1266.s2", print_hash_value);
    transparent_crc(p_1451->g_1266.s3, "p_1451->g_1266.s3", print_hash_value);
    transparent_crc(p_1451->g_1266.s4, "p_1451->g_1266.s4", print_hash_value);
    transparent_crc(p_1451->g_1266.s5, "p_1451->g_1266.s5", print_hash_value);
    transparent_crc(p_1451->g_1266.s6, "p_1451->g_1266.s6", print_hash_value);
    transparent_crc(p_1451->g_1266.s7, "p_1451->g_1266.s7", print_hash_value);
    transparent_crc(p_1451->g_1266.s8, "p_1451->g_1266.s8", print_hash_value);
    transparent_crc(p_1451->g_1266.s9, "p_1451->g_1266.s9", print_hash_value);
    transparent_crc(p_1451->g_1266.sa, "p_1451->g_1266.sa", print_hash_value);
    transparent_crc(p_1451->g_1266.sb, "p_1451->g_1266.sb", print_hash_value);
    transparent_crc(p_1451->g_1266.sc, "p_1451->g_1266.sc", print_hash_value);
    transparent_crc(p_1451->g_1266.sd, "p_1451->g_1266.sd", print_hash_value);
    transparent_crc(p_1451->g_1266.se, "p_1451->g_1266.se", print_hash_value);
    transparent_crc(p_1451->g_1266.sf, "p_1451->g_1266.sf", print_hash_value);
    transparent_crc(p_1451->g_1279.s0, "p_1451->g_1279.s0", print_hash_value);
    transparent_crc(p_1451->g_1279.s1, "p_1451->g_1279.s1", print_hash_value);
    transparent_crc(p_1451->g_1279.s2, "p_1451->g_1279.s2", print_hash_value);
    transparent_crc(p_1451->g_1279.s3, "p_1451->g_1279.s3", print_hash_value);
    transparent_crc(p_1451->g_1279.s4, "p_1451->g_1279.s4", print_hash_value);
    transparent_crc(p_1451->g_1279.s5, "p_1451->g_1279.s5", print_hash_value);
    transparent_crc(p_1451->g_1279.s6, "p_1451->g_1279.s6", print_hash_value);
    transparent_crc(p_1451->g_1279.s7, "p_1451->g_1279.s7", print_hash_value);
    transparent_crc(p_1451->g_1279.s8, "p_1451->g_1279.s8", print_hash_value);
    transparent_crc(p_1451->g_1279.s9, "p_1451->g_1279.s9", print_hash_value);
    transparent_crc(p_1451->g_1279.sa, "p_1451->g_1279.sa", print_hash_value);
    transparent_crc(p_1451->g_1279.sb, "p_1451->g_1279.sb", print_hash_value);
    transparent_crc(p_1451->g_1279.sc, "p_1451->g_1279.sc", print_hash_value);
    transparent_crc(p_1451->g_1279.sd, "p_1451->g_1279.sd", print_hash_value);
    transparent_crc(p_1451->g_1279.se, "p_1451->g_1279.se", print_hash_value);
    transparent_crc(p_1451->g_1279.sf, "p_1451->g_1279.sf", print_hash_value);
    transparent_crc(p_1451->g_1281.s0, "p_1451->g_1281.s0", print_hash_value);
    transparent_crc(p_1451->g_1281.s1, "p_1451->g_1281.s1", print_hash_value);
    transparent_crc(p_1451->g_1281.s2, "p_1451->g_1281.s2", print_hash_value);
    transparent_crc(p_1451->g_1281.s3, "p_1451->g_1281.s3", print_hash_value);
    transparent_crc(p_1451->g_1281.s4, "p_1451->g_1281.s4", print_hash_value);
    transparent_crc(p_1451->g_1281.s5, "p_1451->g_1281.s5", print_hash_value);
    transparent_crc(p_1451->g_1281.s6, "p_1451->g_1281.s6", print_hash_value);
    transparent_crc(p_1451->g_1281.s7, "p_1451->g_1281.s7", print_hash_value);
    transparent_crc(p_1451->g_1284.s0, "p_1451->g_1284.s0", print_hash_value);
    transparent_crc(p_1451->g_1284.s1, "p_1451->g_1284.s1", print_hash_value);
    transparent_crc(p_1451->g_1284.s2, "p_1451->g_1284.s2", print_hash_value);
    transparent_crc(p_1451->g_1284.s3, "p_1451->g_1284.s3", print_hash_value);
    transparent_crc(p_1451->g_1284.s4, "p_1451->g_1284.s4", print_hash_value);
    transparent_crc(p_1451->g_1284.s5, "p_1451->g_1284.s5", print_hash_value);
    transparent_crc(p_1451->g_1284.s6, "p_1451->g_1284.s6", print_hash_value);
    transparent_crc(p_1451->g_1284.s7, "p_1451->g_1284.s7", print_hash_value);
    transparent_crc(p_1451->g_1310, "p_1451->g_1310", print_hash_value);
    transparent_crc(p_1451->g_1318.x, "p_1451->g_1318.x", print_hash_value);
    transparent_crc(p_1451->g_1318.y, "p_1451->g_1318.y", print_hash_value);
    transparent_crc(p_1451->g_1342.x, "p_1451->g_1342.x", print_hash_value);
    transparent_crc(p_1451->g_1342.y, "p_1451->g_1342.y", print_hash_value);
    transparent_crc(p_1451->g_1342.z, "p_1451->g_1342.z", print_hash_value);
    transparent_crc(p_1451->g_1342.w, "p_1451->g_1342.w", print_hash_value);
    transparent_crc(p_1451->g_1403.s0, "p_1451->g_1403.s0", print_hash_value);
    transparent_crc(p_1451->g_1403.s1, "p_1451->g_1403.s1", print_hash_value);
    transparent_crc(p_1451->g_1403.s2, "p_1451->g_1403.s2", print_hash_value);
    transparent_crc(p_1451->g_1403.s3, "p_1451->g_1403.s3", print_hash_value);
    transparent_crc(p_1451->g_1403.s4, "p_1451->g_1403.s4", print_hash_value);
    transparent_crc(p_1451->g_1403.s5, "p_1451->g_1403.s5", print_hash_value);
    transparent_crc(p_1451->g_1403.s6, "p_1451->g_1403.s6", print_hash_value);
    transparent_crc(p_1451->g_1403.s7, "p_1451->g_1403.s7", print_hash_value);
    transparent_crc(p_1451->g_1403.s8, "p_1451->g_1403.s8", print_hash_value);
    transparent_crc(p_1451->g_1403.s9, "p_1451->g_1403.s9", print_hash_value);
    transparent_crc(p_1451->g_1403.sa, "p_1451->g_1403.sa", print_hash_value);
    transparent_crc(p_1451->g_1403.sb, "p_1451->g_1403.sb", print_hash_value);
    transparent_crc(p_1451->g_1403.sc, "p_1451->g_1403.sc", print_hash_value);
    transparent_crc(p_1451->g_1403.sd, "p_1451->g_1403.sd", print_hash_value);
    transparent_crc(p_1451->g_1403.se, "p_1451->g_1403.se", print_hash_value);
    transparent_crc(p_1451->g_1403.sf, "p_1451->g_1403.sf", print_hash_value);
    transparent_crc(p_1451->g_1404.s0, "p_1451->g_1404.s0", print_hash_value);
    transparent_crc(p_1451->g_1404.s1, "p_1451->g_1404.s1", print_hash_value);
    transparent_crc(p_1451->g_1404.s2, "p_1451->g_1404.s2", print_hash_value);
    transparent_crc(p_1451->g_1404.s3, "p_1451->g_1404.s3", print_hash_value);
    transparent_crc(p_1451->g_1404.s4, "p_1451->g_1404.s4", print_hash_value);
    transparent_crc(p_1451->g_1404.s5, "p_1451->g_1404.s5", print_hash_value);
    transparent_crc(p_1451->g_1404.s6, "p_1451->g_1404.s6", print_hash_value);
    transparent_crc(p_1451->g_1404.s7, "p_1451->g_1404.s7", print_hash_value);
    transparent_crc(p_1451->g_1410.s0, "p_1451->g_1410.s0", print_hash_value);
    transparent_crc(p_1451->g_1410.s1, "p_1451->g_1410.s1", print_hash_value);
    transparent_crc(p_1451->g_1410.s2, "p_1451->g_1410.s2", print_hash_value);
    transparent_crc(p_1451->g_1410.s3, "p_1451->g_1410.s3", print_hash_value);
    transparent_crc(p_1451->g_1410.s4, "p_1451->g_1410.s4", print_hash_value);
    transparent_crc(p_1451->g_1410.s5, "p_1451->g_1410.s5", print_hash_value);
    transparent_crc(p_1451->g_1410.s6, "p_1451->g_1410.s6", print_hash_value);
    transparent_crc(p_1451->g_1410.s7, "p_1451->g_1410.s7", print_hash_value);
    transparent_crc(p_1451->g_1410.s8, "p_1451->g_1410.s8", print_hash_value);
    transparent_crc(p_1451->g_1410.s9, "p_1451->g_1410.s9", print_hash_value);
    transparent_crc(p_1451->g_1410.sa, "p_1451->g_1410.sa", print_hash_value);
    transparent_crc(p_1451->g_1410.sb, "p_1451->g_1410.sb", print_hash_value);
    transparent_crc(p_1451->g_1410.sc, "p_1451->g_1410.sc", print_hash_value);
    transparent_crc(p_1451->g_1410.sd, "p_1451->g_1410.sd", print_hash_value);
    transparent_crc(p_1451->g_1410.se, "p_1451->g_1410.se", print_hash_value);
    transparent_crc(p_1451->g_1410.sf, "p_1451->g_1410.sf", print_hash_value);
    transparent_crc(p_1451->g_1421, "p_1451->g_1421", print_hash_value);
    transparent_crc(p_1451->v_collective, "p_1451->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 23; i++)
            transparent_crc(p_1451->g_special_values[i + 23 * get_linear_group_id()], "p_1451->g_special_values[i + 23 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 23; i++)
            transparent_crc(p_1451->l_special_values[i], "p_1451->l_special_values[i]", print_hash_value);
    transparent_crc(p_1451->l_comm_values[get_linear_local_id()], "p_1451->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1451->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_1451->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
