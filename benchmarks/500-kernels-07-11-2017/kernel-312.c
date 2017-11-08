// -g 63,97,1 -l 63,1,1
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


// Seed: 3421427696

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile int16_t g_6;
    volatile uint32_t g_7;
    int8_t g_26;
    int32_t g_59;
    uint16_t g_67;
    uint32_t g_79;
    uint32_t g_83;
    uint8_t g_88;
    int64_t g_92;
    int64_t g_94;
    uint32_t *g_99;
    uint64_t g_101;
    uint64_t g_102[4];
    int32_t g_105[7];
    uint32_t **g_156[2];
    uint32_t ** volatile *g_155;
    uint32_t ** volatile **g_154;
    volatile int32_t g_182;
    volatile int32_t *g_181;
    volatile int32_t **g_180;
    int32_t g_201;
    uint64_t g_215;
    int8_t g_235;
    uint64_t g_250;
    uint16_t g_257[9];
    int16_t g_274[2][5][4];
    int32_t **g_310;
    int8_t g_328;
    int8_t *g_327;
    volatile int16_t *g_371;
    volatile int16_t **g_370[9][2][8];
    uint32_t g_380;
    uint64_t g_410;
    int32_t g_432;
    int16_t g_458[5][8][6];
    int16_t g_475;
    uint8_t g_562;
    volatile int32_t g_570;
    volatile int32_t g_571;
    volatile int32_t g_572;
    volatile int32_t g_601[6];
    volatile int32_t *g_600;
    volatile uint16_t * volatile *g_643;
    uint64_t * volatile g_666;
    uint64_t * volatile * volatile g_665;
    uint64_t *g_668;
    uint64_t * volatile * volatile g_667;
    uint64_t * volatile *g_669;
    uint64_t * volatile * volatile *g_664[10];
    int32_t *g_685;
    int32_t g_725;
    int32_t *g_767;
    uint8_t g_878;
    uint16_t g_1045[9][5];
    volatile int8_t g_1084;
    volatile int8_t * volatile g_1083;
    volatile int8_t g_1086[9][9];
    volatile int8_t g_1087;
    volatile int8_t g_1088;
    volatile int8_t g_1089;
    volatile int8_t g_1090;
    volatile int8_t g_1091;
    volatile int8_t *g_1085[6][10];
    volatile int8_t * volatile *g_1082[5];
    volatile int8_t * volatile **g_1081[6];
    int64_t g_1109;
    int64_t g_1111;
    uint32_t ***g_1119;
    uint32_t ****g_1118;
    uint16_t g_1133[3];
    uint8_t g_1243;
    uint32_t *****g_1244;
    uint32_t g_1271;
    int32_t *g_1285;
    int32_t g_1287;
    volatile int32_t * volatile **g_1290;
    int32_t g_1416;
    int8_t **g_1516[6][9];
    int8_t ***g_1515;
    uint64_t * volatile g_1535[2];
    uint64_t * volatile *g_1534;
    volatile uint32_t g_1678;
    volatile uint32_t *g_1677;
    volatile uint32_t **g_1676[1];
    int16_t g_1697;
    int16_t g_1729;
    uint64_t g_1816;
    int16_t *g_1847;
    int16_t * volatile * volatile g_1846;
    int16_t * volatile * volatile g_1848;
    int16_t * volatile * volatile g_1849[7];
    int16_t * volatile * volatile g_1850;
    int16_t * volatile *g_1851;
    int16_t * volatile * volatile *g_1845[4][6];
    int16_t * volatile * volatile **g_1844[7];
    int32_t **g_1945;
    int32_t ***g_1944[6][1][9];
    int32_t ****g_1943;
    uint64_t *g_2001;
    uint64_t **g_2000;
    uint64_t **g_2023[2][4][1];
    uint64_t ***g_2022;
    uint32_t *g_2142;
    int64_t g_2159;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_2160);
uint64_t  func_15(int32_t * p_16, int32_t * p_17, uint32_t  p_18, uint32_t  p_19, int32_t  p_20, struct S0 * p_2160);
int32_t * func_21(uint32_t  p_22, int32_t * p_23, int32_t * p_24, int32_t * p_25, struct S0 * p_2160);
uint8_t  func_27(int32_t * p_28, int32_t  p_29, struct S0 * p_2160);
int32_t * func_30(int32_t * p_31, int32_t * p_32, struct S0 * p_2160);
int32_t * func_33(int32_t  p_34, struct S0 * p_2160);
uint64_t  func_37(int32_t  p_38, int32_t * p_39, uint16_t  p_40, struct S0 * p_2160);
int8_t  func_43(int32_t * p_44, int32_t * p_45, int32_t * p_46, struct S0 * p_2160);
int8_t  func_52(int32_t * p_53, int32_t  p_54, int32_t * p_55, struct S0 * p_2160);
int32_t * func_56(int32_t  p_57, struct S0 * p_2160);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2160->g_7 p_2160->g_3 p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_101 p_2160->g_83 p_2160->g_105 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_154 p_2160->g_102 p_2160->g_180 p_2160->g_155 p_2160->g_156 p_2160->g_201 p_2160->g_181 p_2160->g_235 p_2160->g_215 p_2160->g_250 p_2160->g_274 p_2160->g_310 p_2160->g_328 p_2160->g_370 p_2160->g_257 p_2160->g_410 p_2160->g_432 p_2160->g_458 p_2160->g_380 p_2160->g_643 p_2160->g_664 p_2160->g_668 p_2160->g_475 p_2160->g_669 p_2160->g_767 p_2160->g_562 p_2160->g_725 p_2160->g_878 p_2160->g_1045 p_2160->g_26 p_2160->g_1081 p_2160->g_1111 p_2160->g_1118 p_2160->g_1133 p_2160->g_1243 p_2160->g_1271 p_2160->g_1290 p_2160->g_1285 p_2160->g_1287 p_2160->g_1109 p_2160->g_1847 p_2160->g_1729 p_2160->g_1851 p_2160->g_1244 p_2160->g_1119 p_2160->g_2022 p_2160->g_1697 p_2160->g_2023 p_2160->g_1816 p_2160->g_2159
 * writes: p_2160->g_7 p_2160->g_26 p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_101 p_2160->g_102 p_2160->g_105 p_2160->g_83 p_2160->g_201 p_2160->g_215 p_2160->g_181 p_2160->g_235 p_2160->g_250 p_2160->g_257 p_2160->g_274 p_2160->g_310 p_2160->g_327 p_2160->g_328 p_2160->g_410 p_2160->g_432 p_2160->g_458 p_2160->g_600 p_2160->g_380 p_2160->g_685 p_2160->g_562 p_2160->g_725 p_2160->g_767 p_2160->g_878 p_2160->g_156 p_2160->g_475 p_2160->g_1045 p_2160->g_3 p_2160->g_1109 p_2160->g_1111 p_2160->g_1118 p_2160->g_1133 p_2160->g_1244 p_2160->g_1271 p_2160->g_1285 p_2160->g_1287 p_2160->g_1943 p_2160->g_2000 p_2160->g_2022 p_2160->g_1243 p_2160->g_2159
 */
uint16_t  func_1(struct S0 * p_2160)
{ /* block id: 4 */
    int32_t *l_2 = &p_2160->g_3;
    int32_t *l_4 = &p_2160->g_3;
    int32_t *l_5[9][9][1] = {{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}},{{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3},{&p_2160->g_3}}};
    uint16_t l_14 = 65535UL;
    int32_t *l_47 = &p_2160->g_3;
    int32_t **l_1283 = (void*)0;
    int32_t **l_1284[7][9][4] = {{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}},{{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47},{&l_4,&l_47,(void*)0,&l_47}}};
    int32_t *l_1286[1][3];
    int64_t *l_2158 = &p_2160->g_2159;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1286[i][j] = &p_2160->g_1287;
    }
    ++p_2160->g_7;
    (*l_2) = (((*l_2158) |= (p_2160->g_7 == (safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(0x79L, l_14)), func_15((p_2160->g_1285 = func_21(((((0x3BL != p_2160->g_3) , (p_2160->g_3 ^ p_2160->g_3)) > (((p_2160->g_26 = (*l_2)) == func_27(func_30(func_33((safe_sub_func_uint64_t_u_u(func_37(((safe_mul_func_int8_t_s_s(func_43(l_4, l_5[8][5][0], l_47, p_2160), 0x60L)) & p_2160->g_3), l_5[2][2][0], (*l_47), p_2160), 1L)), p_2160), &p_2160->g_3, p_2160), (*l_2), p_2160)) >= 0UL)) || (**p_2160->g_669)), l_47, &p_2160->g_3, &p_2160->g_3, p_2160)), l_1286[0][1], p_2160->g_1243, p_2160->g_1243, p_2160->g_1243, p_2160))))) , (*p_2160->g_1285));
    return (*l_47);
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_1290 p_2160->g_669 p_2160->g_668 p_2160->g_250 p_2160->g_105 p_2160->g_475 p_2160->g_1285 p_2160->g_94 p_2160->g_1045 p_2160->g_3 p_2160->g_380 p_2160->g_79 p_2160->g_102 p_2160->g_1287 p_2160->g_201 p_2160->g_1109 p_2160->g_274 p_2160->g_155 p_2160->g_156 p_2160->g_99 p_2160->g_83 p_2160->g_1847 p_2160->g_1729 p_2160->g_1111 p_2160->g_88 p_2160->g_1851 p_2160->g_1244 p_2160->g_1118 p_2160->g_1119 p_2160->g_310 p_2160->g_2022 p_2160->g_257 p_2160->g_1697 p_2160->g_92 p_2160->g_2023 p_2160->g_1816 p_2160->g_432 p_2160->g_154 p_2160->g_1243 p_2160->g_328 p_2160->g_562
 * writes: p_2160->g_257 p_2160->g_3 p_2160->g_105 p_2160->g_380 p_2160->g_79 p_2160->g_562 p_2160->g_1287 p_2160->g_1285 p_2160->g_274 p_2160->g_88 p_2160->g_250 p_2160->g_1943 p_2160->g_1133 p_2160->g_310 p_2160->g_2000 p_2160->g_2022 p_2160->g_92 p_2160->g_1243
 */
uint64_t  func_15(int32_t * p_16, int32_t * p_17, uint32_t  p_18, uint32_t  p_19, int32_t  p_20, struct S0 * p_2160)
{ /* block id: 533 */
    uint16_t *l_1296 = &p_2160->g_257[6];
    int32_t l_1307 = 9L;
    int32_t l_1308 = 0x5C8FFD85L;
    int32_t l_1309 = 0L;
    int32_t l_1340 = 0L;
    int32_t *l_1341 = &p_2160->g_105[5];
    int32_t l_1368 = (-1L);
    int32_t l_1369 = 0x6CA14B54L;
    int32_t l_1372 = 0x49433C5CL;
    int32_t l_1373 = 0x16C2D8E5L;
    int32_t l_1374 = 0L;
    int32_t l_1375 = 0x7914E78BL;
    int32_t l_1378 = 6L;
    int32_t l_1383 = (-6L);
    int32_t l_1384 = 0x62462814L;
    uint8_t l_1386[6][5] = {{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L},{0xD1L,0xD1L,0xD1L,0xD1L,0xD1L}};
    uint64_t l_1389 = 0UL;
    uint32_t l_1398[7][1] = {{0x7C6CBB9AL},{0x7C6CBB9AL},{0x7C6CBB9AL},{0x7C6CBB9AL},{0x7C6CBB9AL},{0x7C6CBB9AL},{0x7C6CBB9AL}};
    uint32_t l_1399 = 0x84EFD5DBL;
    uint32_t **l_1477 = (void*)0;
    uint8_t *l_1501 = &p_2160->g_88;
    uint8_t **l_1500[8][1] = {{&l_1501},{&l_1501},{&l_1501},{&l_1501},{&l_1501},{&l_1501},{&l_1501},{&l_1501}};
    uint8_t ***l_1499[5] = {&l_1500[4][0],&l_1500[4][0],&l_1500[4][0],&l_1500[4][0],&l_1500[4][0]};
    int16_t l_1504 = 0x1937L;
    int8_t **l_1532 = &p_2160->g_327;
    uint32_t l_1539 = 0x43A0BC27L;
    int32_t l_1578 = 0x30C64ED1L;
    int32_t l_1579 = (-2L);
    int32_t l_1580[6];
    uint32_t l_1609[2];
    int64_t l_1610 = 0L;
    int32_t ***l_1621 = &p_2160->g_310;
    int16_t l_1767[4][9][1] = {{{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L}},{{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L}},{{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L}},{{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L},{0x06D2L}}};
    uint32_t l_1819 = 0xDB2EF599L;
    uint64_t **l_1900 = (void*)0;
    int32_t l_1914 = 0x6B0F316BL;
    int32_t l_1927[2];
    int16_t **l_1930 = &p_2160->g_1847;
    int16_t ***l_1929 = &l_1930;
    int16_t ****l_1928 = &l_1929;
    uint32_t ****l_1964 = (void*)0;
    uint64_t ***l_2083 = (void*)0;
    uint32_t l_2149 = 4294967295UL;
    int64_t *l_2157 = &p_2160->g_1109;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1580[i] = 0x70017056L;
    for (i = 0; i < 2; i++)
        l_1609[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_1927[i] = 0L;
    (*p_2160->g_1285) = (safe_div_func_uint16_t_u_u((((void*)0 == p_2160->g_1290) | (safe_mul_func_int16_t_s_s(0x21F9L, (l_1308 = (safe_add_func_uint16_t_u_u(((*l_1296) = (safe_unary_minus_func_int16_t_s(p_20))), (((safe_sub_func_int8_t_s_s(p_18, (-9L))) == (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((l_1307 = ((safe_lshift_func_uint16_t_u_u(p_18, ((safe_lshift_func_uint8_t_u_u((p_19 == (((**p_2160->g_669) , (void*)0) != (void*)0)), p_2160->g_105[4])) < p_20))) & 3UL)), 10)) != p_20), p_2160->g_475))) <= p_18))))))), l_1309));
    if ((l_1307 && p_19))
    { /* block id: 538 */
        int32_t **l_1311 = &p_2160->g_685;
        int32_t ***l_1310 = &l_1311;
        int32_t **l_1342 = (void*)0;
        int32_t **l_1343 = &p_2160->g_1285;
        (*p_16) ^= (((((*l_1310) = (void*)0) != &p_2160->g_685) > ((0xA670L > p_2160->g_94) ^ (p_2160->g_1045[4][3] <= 0UL))) , 0x68BFF313L);
        for (p_2160->g_380 = 0; (p_2160->g_380 >= 27); p_2160->g_380++)
        { /* block id: 543 */
            uint64_t l_1337 = 1UL;
            for (p_2160->g_79 = 3; (p_2160->g_79 < 26); p_2160->g_79++)
            { /* block id: 546 */
                uint32_t l_1318 = 0x1CE92C37L;
                uint8_t *l_1338 = (void*)0;
                uint8_t *l_1339 = (void*)0;
                l_1318 = ((*p_16) |= 0x4CE8A697L);
                if (l_1318)
                    break;
                (*p_17) = (0x2DB28EF9L < (((p_2160->g_562 = (safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(((p_2160->g_475 == ((l_1309 || p_2160->g_102[2]) == (safe_add_func_int64_t_s_s(((((l_1308 || l_1309) == ((*p_17) , 1UL)) >= (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((~((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((-1L) != p_18), 4)) & p_2160->g_105[5]), l_1337)) < p_19)), l_1337)), 6UL)), 4294967291UL))) == (**p_2160->g_669)), p_2160->g_201)))) , p_2160->g_1109), p_2160->g_274[0][3][3])) > l_1337) >= p_18), 0x77AF5CA5L))) || l_1340) < p_2160->g_1287));
            }
        }
        (*l_1343) = (p_16 = l_1341);
    }
    else
    { /* block id: 556 */
        uint16_t l_1344 = 0x5FD4L;
        int32_t l_1370 = 0L;
        int32_t l_1371 = 0x777AC423L;
        int32_t l_1376 = (-6L);
        int32_t l_1377 = 0x4BF42EFDL;
        int32_t l_1379 = (-6L);
        int32_t l_1380 = (-1L);
        int32_t l_1381 = 6L;
        int32_t l_1382 = (-1L);
        int32_t l_1385 = 5L;
        int64_t l_1417 = (-9L);
        int32_t l_1423 = 0x5FD2DE8CL;
        int32_t l_1424 = 0x1D7BE486L;
        int32_t l_1425 = 0x7CFB4A02L;
        int32_t l_1426 = 0x1B842C8FL;
        int8_t **l_1533[3][5] = {{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}};
        int16_t l_1581 = 0x52A0L;
        int32_t l_1583 = (-5L);
        int64_t l_1587[3][8] = {{0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L},{0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L},{0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L,0x22033FD2FB8DBC51L}};
        int32_t **l_1592 = &p_2160->g_685;
        int32_t ***l_1591 = &l_1592;
        int32_t ****l_1590 = &l_1591;
        uint32_t *****l_1620[6];
        uint16_t l_1647 = 8UL;
        int16_t l_1671 = 0L;
        int16_t l_1766 = 0x4937L;
        uint8_t ***l_1879 = &l_1500[4][0];
        uint64_t **l_1898 = &p_2160->g_668;
        uint32_t l_1915 = 0xB7722FCFL;
        int32_t l_1918 = 0L;
        int32_t l_1919 = 0x3E1CB7A2L;
        uint16_t l_1920 = 0x8E1BL;
        uint64_t ***l_1987[7];
        uint64_t ****l_1986[6] = {(void*)0,&l_1987[2],(void*)0,(void*)0,&l_1987[2],(void*)0};
        int32_t *l_2049 = &p_2160->g_1416;
        uint8_t l_2050 = 0x11L;
        uint16_t l_2051 = 65533UL;
        uint64_t **l_2100[7] = {&p_2160->g_2001,&p_2160->g_2001,&p_2160->g_2001,&p_2160->g_2001,&p_2160->g_2001,&p_2160->g_2001,&p_2160->g_2001};
        uint16_t l_2125 = 1UL;
        int32_t l_2127 = 0x3A7A0367L;
        int32_t *l_2154 = &l_1580[0];
        int i, j;
        for (i = 0; i < 6; i++)
            l_1620[i] = &p_2160->g_1118;
        for (i = 0; i < 7; i++)
            l_1987[i] = &l_1898;
        if (l_1344)
        { /* block id: 557 */
            int32_t **l_1350 = (void*)0;
            int32_t ***l_1349 = &l_1350;
            int32_t l_1353[1];
            int16_t *l_1354 = &p_2160->g_274[0][1][2];
            int16_t *l_1355[9][9] = {{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0},{&p_2160->g_475,&p_2160->g_458[1][1][4],&p_2160->g_458[0][2][5],&p_2160->g_458[1][1][4],&p_2160->g_475,(void*)0,&p_2160->g_458[1][1][4],&p_2160->g_458[1][1][4],(void*)0}};
            int32_t l_1413 = 0L;
            int32_t l_1419 = 0x2569FFFFL;
            int16_t l_1420 = 0x2359L;
            uint32_t l_1427[5] = {0x4F12E5E5L,0x4F12E5E5L,0x4F12E5E5L,0x4F12E5E5L,0x4F12E5E5L};
            uint32_t l_1483 = 0UL;
            uint32_t l_1514 = 4294967291UL;
            uint8_t l_1584 = 0x73L;
            uint32_t l_1627[4][4][1] = {{{0xC9946494L},{0xC9946494L},{0xC9946494L},{0xC9946494L}},{{0xC9946494L},{0xC9946494L},{0xC9946494L},{0xC9946494L}},{{0xC9946494L},{0xC9946494L},{0xC9946494L},{0xC9946494L}},{{0xC9946494L},{0xC9946494L},{0xC9946494L},{0xC9946494L}}};
            int8_t *l_1686[6][7] = {{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26},{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26},{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26},{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26},{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26},{&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26,(void*)0,&p_2160->g_26,&p_2160->g_26}};
            int32_t l_1721[6][4][6] = {{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}},{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}},{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}},{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}},{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}},{{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)},{0x008671B4L,0x1C0FA3D0L,0x4D562C31L,(-4L),(-8L),(-8L)}}};
            uint32_t *l_1806 = (void*)0;
            uint32_t **l_1805 = &l_1806;
            uint8_t l_1807 = 253UL;
            uint64_t l_1829[6][4][5] = {{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}},{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}},{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}},{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}},{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}},{{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL},{0x5A4F25D9ED419076L,0x5A4F25D9ED419076L,6UL,0x62691ABF4D872B66L,9UL}}};
            uint8_t *l_1833 = &l_1584;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1353[i] = 1L;
            (1 + 1);
        }
        else
        { /* block id: 765 */
            uint32_t *l_1864 = &p_2160->g_380;
            uint32_t **l_1863 = &l_1864;
            uint32_t ***l_1862 = &l_1863;
            int32_t l_1878 = 0x51459B39L;
            int32_t ***l_1897 = (void*)0;
            int32_t l_1908 = 0x7F4F0759L;
            int32_t l_1909 = 0x488FBF0EL;
            int32_t l_1910 = 0x2214A561L;
            int32_t l_1911 = 0x588D7DF6L;
            int32_t l_1912 = 0x303B3A97L;
            int32_t l_1913[1];
            int32_t ****l_1949 = &p_2160->g_1944[3][0][3];
            int32_t l_1965[1];
            uint64_t **l_1998 = (void*)0;
            uint32_t l_2009[2][2] = {{0x64EEB0A0L,0x64EEB0A0L},{0x64EEB0A0L,0x64EEB0A0L}};
            int16_t l_2126 = 0x11A7L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1913[i] = 0x6381B935L;
            for (i = 0; i < 1; i++)
                l_1965[i] = 0L;
            if (((*p_16) = (-1L)))
            { /* block id: 767 */
                int64_t *l_1865 = &l_1610;
                int32_t l_1874 = (-6L);
                int16_t *l_1888 = &l_1671;
                uint32_t *l_1890[1][7] = {{&p_2160->g_380,&p_2160->g_380,&p_2160->g_380,&p_2160->g_380,&p_2160->g_380,&p_2160->g_380,&p_2160->g_380}};
                uint32_t **l_1889 = &l_1890[0][0];
                int32_t *l_1891 = &l_1369;
                int i, j;
                (*p_17) ^= ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((((((*l_1865) = (l_1862 != &p_2160->g_1676[0])) ^ (safe_div_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((*l_1341), (safe_lshift_func_uint16_t_u_s(((***p_2160->g_155) , (safe_lshift_func_int16_t_s_u(l_1874, (safe_mul_func_uint16_t_u_u((*l_1341), (((((0x832A0B3F8FF93A71L || (safe_unary_minus_func_int32_t_s((*p_2160->g_1285)))) <= ((0x0689L <= p_20) == l_1874)) & l_1878) >= 0x1DE33CB09DB23958L) >= l_1878)))))), p_19)))) == (*p_16)) || 0x44L), (-9L)))) , l_1879) != (void*)0) , 0x5818482AL) , 252UL) ^ l_1878), 2)), p_2160->g_79)) <= l_1874);
                (*l_1891) ^= (((1L | (l_1878 < (l_1878 , 0x9F1D453F4DF061A9L))) <= ((safe_sub_func_uint32_t_u_u(p_19, ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_1583, (+((safe_div_func_int64_t_s_s(((*l_1865) = (((((**l_1862) = (void*)0) != ((*l_1889) = (((*l_1888) = ((*p_2160->g_1847) &= p_18)) , &p_2160->g_380))) ^ (*l_1341)) | 1L)), (-1L))) ^ p_2160->g_1729)))), p_19)) , (*p_17)))) >= l_1878)) , (-1L));
            }
            else
            { /* block id: 776 */
                uint16_t l_1896[3][4] = {{9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL}};
                uint64_t ***l_1899 = &l_1898;
                int i, j;
                (*p_17) = ((((safe_mod_func_uint8_t_u_u((((l_1878 = (l_1878 ^ ((p_2160->g_1111 && (+l_1896[0][1])) >= (((*p_2160->g_1285) |= 0x01CEA97EL) || p_18)))) , ((((((p_19 ^ (l_1897 == (((((*l_1899) = l_1898) != l_1900) , 0xC961L) , &p_2160->g_310))) > 0UL) > (*p_2160->g_1847)) >= l_1896[1][0]) >= p_2160->g_83) == 0UL)) >= 0x57L), 0xF4L)) | p_18) != 0x0BEE745EL) || (*p_2160->g_1847));
            }
            for (p_2160->g_88 = 25; (p_2160->g_88 < 20); p_2160->g_88 = safe_sub_func_int16_t_s_s(p_2160->g_88, 8))
            { /* block id: 784 */
                int64_t l_1903 = 0x45D4AB1EC227D331L;
                int32_t l_1904 = 0x089A4DB6L;
                int32_t *l_1905 = &l_1425;
                int32_t *l_1906 = &l_1375;
                int32_t *l_1907[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                ++l_1915;
                ++l_1920;
            }
            if (((4294967292UL <= l_1424) && (safe_add_func_uint32_t_u_u(0x02905C4EL, (-1L)))))
            { /* block id: 788 */
                int64_t *l_1931 = &l_1417;
                int32_t l_1932 = 0L;
                int32_t ****l_1937 = &l_1897;
                int32_t ****l_1942[1][5][2] = {{{&l_1591,&l_1591},{&l_1591,&l_1591},{&l_1591,&l_1591},{&l_1591,&l_1591},{&l_1591,&l_1591}}};
                int32_t *****l_1946 = &l_1590;
                int32_t ****l_1948 = &p_2160->g_1944[5][0][7];
                int32_t *****l_1947[1];
                int32_t l_1966 = 0L;
                uint16_t *l_1967 = (void*)0;
                uint16_t *l_1968 = (void*)0;
                uint16_t *l_1969 = &p_2160->g_1133[2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1947[i] = &l_1948;
                (*p_2160->g_1285) = (safe_add_func_int16_t_s_s(((l_1927[0] = 0xB9170E001DAA50F3L) && ((*l_1931) = (l_1928 == (void*)0))), (&p_2160->g_664[5] != (void*)0)));
                l_1932 ^= ((*p_16) = (-1L));
                l_1370 &= (((*l_1969) = ((*l_1341) = ((l_1966 ^= (((l_1380 ^= (p_20 , ((safe_mod_func_int16_t_s_s((((*p_2160->g_668)++) & (!(((*l_1937) = &p_2160->g_310) != &p_2160->g_180))), ((p_18 , (((safe_div_func_uint8_t_u_u(((*l_1501) = ((safe_mod_func_int16_t_s_s(((p_2160->g_1943 = l_1942[0][2][1]) != (l_1949 = ((*l_1946) = l_1942[0][2][1]))), ((*l_1296) = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((((*l_1341) <= (((safe_add_func_int64_t_s_s((l_1424 || ((**p_2160->g_1851) = (((p_2160->g_475 , (void*)0) != l_1964) ^ p_19))), 0x28E0267B96628158L)) , p_18) | 0x4D4C8DEC8DD4070DL)) != (-1L)) , 0x30731306CC6BF59EL) || p_20), l_1671)) != p_19), p_20)), l_1965[0])), 1)), (*p_17))), p_18))))) || l_1911)), l_1908)) == 0x45CD11EA873A961FL) || (*l_1341))) | l_1910))) , p_18))) != l_1912) != 1UL)) || p_19))) || p_19);
                if ((((((safe_rshift_func_int8_t_s_s((l_1919 = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((l_1966 , (safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((**p_2160->g_1851) ^= (safe_add_func_uint64_t_u_u(((*****p_2160->g_1244) , (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((l_1986[5] == &p_2160->g_664[4]), (safe_rshift_func_int8_t_s_s((-3L), 7)))), 4)) , 0xA4L) == (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((p_18 == (((((**l_1937) = (**l_1937)) != (void*)0) != 0xB309L) == l_1581)), 0x3FEDL)), p_20)))), p_20))), (-3L))), 0L))), 7)), 0)) == p_19)), p_20)) < 0x64L) , 0x31L) ^ p_20) < 0x71739FD7773E01CEL))
                { /* block id: 810 */
                    int64_t l_1994 = 0x7FDAB7F1AAEA77F7L;
                    uint32_t l_1995 = 4294967288UL;
                    uint64_t ***l_1999 = (void*)0;
                    l_1995--;
                    (*p_17) |= 0x6786F558L;
                    (*p_17) &= (((p_2160->g_2000 = l_1998) == (void*)0) != (*l_1341));
                    (*p_17) = 0x00D8A826L;
                }
                else
                { /* block id: 816 */
                    int32_t l_2002[1][4][4] = {{{0x0BC65A12L,0x24ECD912L,0L,0x24ECD912L},{0x0BC65A12L,0x24ECD912L,0L,0x24ECD912L},{0x0BC65A12L,0x24ECD912L,0L,0x24ECD912L},{0x0BC65A12L,0x24ECD912L,0L,0x24ECD912L}}};
                    int i, j, k;
                    l_2002[0][0][0] = l_2002[0][2][2];
                }
            }
            else
            { /* block id: 819 */
                uint64_t ***l_2024 = &l_1900;
                int32_t l_2025 = (-4L);
                (*p_17) = ((p_18 <= (safe_mod_func_uint32_t_u_u(((*l_1341) == (safe_div_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_u(((p_2160->g_92 ^= (((*l_1341) && ((p_2160->g_105[5] > l_2009[1][1]) != (safe_sub_func_int32_t_s_s((*p_17), ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((**l_1930) = ((((safe_rshift_func_int16_t_s_s((+((((l_2024 = (p_2160->g_2022 = p_2160->g_2022)) != &p_2160->g_2023[0][1][0]) == l_2025) && (*p_17))), p_20)) < l_2025) , 0x09L) != p_2160->g_257[6])), 0x3356L)), p_2160->g_1697)) ^ l_1919) & 0x2A67L), 0)), p_18)) <= p_2160->g_1697))))) , p_2160->g_250)) , p_20), 0)) >= p_19) < p_19) >= l_2025) != (-1L)), 0xA2L))), 0x41B6BA00L))) && 9UL);
            }
            for (l_1914 = (-25); (l_1914 != 21); l_1914++)
            { /* block id: 828 */
                uint64_t l_2038 = 1UL;
                int32_t l_2109 = 0x713429A0L;
                int32_t l_2113 = (-7L);
                int32_t l_2124 = 7L;
                if (((((safe_lshift_func_uint8_t_u_u((4294967295UL && (((safe_mul_func_int8_t_s_s(((p_18 && (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(l_2038, 1)), p_2160->g_1045[1][3])), ((((*p_16) , l_2038) >= (((p_2160->g_1243 = ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(((((***p_2160->g_2022) = (p_19 , (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((+((((void*)0 == l_2049) | p_20) >= p_20)) , 0x61D8D488L), l_2038)), 0x4CD0L)))) & l_1385) == 0x84L), 14)) < l_1371), p_2160->g_1816)), p_20)) , p_18)) == p_19) || p_2160->g_1816)) ^ p_18)))) ^ (*p_2160->g_1285)), 1UL)) & 0x77L) , (*p_16))), p_2160->g_79)) , (*p_2160->g_1285)) & l_2050) != l_2051))
                { /* block id: 831 */
                    int32_t *l_2077 = &p_2160->g_1416;
                    uint64_t ***l_2082 = &p_2160->g_2023[0][2][0];
                    int32_t l_2084 = (-6L);
                    int64_t l_2085[10][3] = {{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL},{0x534E1B6EB866B6F1L,0x534E1B6EB866B6F1L,0x55A4BDFCF0F4353CL}};
                    int64_t *l_2107 = (void*)0;
                    int64_t *l_2108[4][7][3] = {{{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610}},{{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610}},{{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610}},{{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610},{&l_1587[2][6],&l_2085[4][2],&l_1610}}};
                    int32_t l_2112 = (-1L);
                    int i, j, k;
                    for (p_2160->g_79 = 0; (p_2160->g_79 <= 14); p_2160->g_79 = safe_add_func_int64_t_s_s(p_2160->g_79, 8))
                    { /* block id: 834 */
                        uint32_t l_2068 = 4294967295UL;
                        int16_t ***l_2073 = (void*)0;
                        (*p_2160->g_1285) = (((safe_div_func_uint16_t_u_u((((((*l_1296)++) || ((((safe_add_func_uint64_t_u_u(0x1B98B5DB27C3D8A5L, (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(l_2068, ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_2073 != (void*)0), (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((void*)0 == l_2077) == ((*l_1341) , ((safe_sub_func_uint16_t_u_u(((!(safe_sub_func_uint8_t_u_u((l_2082 != l_2083), l_2038))) , p_2160->g_432), 0x6F3BL)) != 18446744073709551615UL))) || (***p_2160->g_2022)))), l_2084)))), p_2160->g_88)) , p_2160->g_88))) <= 4294967295UL), l_2038)) , 0xD5L), l_2038)), (****p_2160->g_154))) ^ 251UL) || l_2085[4][2]))) != p_18) , 0L) == p_18)) ^ 9UL) , l_1915), (**p_2160->g_1851))) & 0xC195823B322AC55BL) > 6L);
                    }
                    for (l_1910 = 0; (l_1910 == 22); l_1910++)
                    { /* block id: 840 */
                        if ((*p_2160->g_1285))
                            break;
                        return p_20;
                    }
                    (*p_2160->g_1285) |= (&p_20 != ((((p_20 | (~((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((--(*l_1296)) , l_1918) <= (((*p_17) , (void*)0) != (void*)0)) , ((((void*)0 != (*l_1591)) > (p_20 , p_20)) || p_18)), p_18)), 0x60L)), p_2160->g_1243)) && l_2085[4][0]), l_1587[2][0])), 0x53EEL)) == l_2084))) , l_2100[3]) != &p_2160->g_2001) , &p_20));
                    (*p_17) |= (((safe_mul_func_int8_t_s_s(((((+(safe_mul_func_int8_t_s_s((((&p_19 == ((**l_1862) = &p_2160->g_380)) & ((safe_mod_func_uint16_t_u_u(((l_2109 = 0x7B8CF327FF7C82FEL) < (l_2113 |= (safe_mod_func_int16_t_s_s(l_2085[4][2], (l_2112 = l_2051))))), ((*l_1296) = (safe_add_func_uint16_t_u_u(((p_18 >= (safe_mul_func_uint16_t_u_u(65530UL, (((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((**l_1930) |= (l_2124 |= p_20)) && (p_18 || p_20)), l_2085[4][2])), l_2125)), p_19)) < p_19) | p_20)))) , p_2160->g_328), l_2126))))) >= (*l_1341))) < 0L), p_18))) < l_2127) > 0xC1622462L) != 1UL), l_2125)) , 1UL) == 0x3E212FD216E5E9EFL);
                }
                else
                { /* block id: 854 */
                    if (l_2113)
                        break;
                    (*l_1341) = (*p_17);
                    l_1426 = ((*p_16) = 0L);
                }
            }
        }
        for (p_2160->g_562 = (-25); (p_2160->g_562 != 53); p_2160->g_562 = safe_add_func_int32_t_s_s(p_2160->g_562, 1))
        { /* block id: 864 */
            uint32_t *l_2140 = &p_2160->g_380;
            int32_t l_2143 = 0x22298E17L;
            (1 + 1);
        }
        l_2154 = &l_1380;
    }
    (*p_17) = ((safe_mul_func_uint16_t_u_u((~p_2160->g_250), ((void*)0 == l_2157))) , 5L);
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_154 p_2160->g_155 p_2160->g_156 p_2160->g_99 p_2160->g_83 p_2160->g_235 p_2160->g_67 p_2160->g_102 p_2160->g_257 p_2160->g_1045 p_2160->g_669 p_2160->g_668 p_2160->g_250 p_2160->g_432 p_2160->g_105 p_2160->g_458 p_2160->g_180 p_2160->g_3 p_2160->g_26 p_2160->g_274 p_2160->g_410 p_2160->g_1081 p_2160->g_88 p_2160->g_380 p_2160->g_1111 p_2160->g_562 p_2160->g_1118 p_2160->g_1133 p_2160->g_92 p_2160->g_215 p_2160->g_59 p_2160->g_79 p_2160->g_328 p_2160->g_1243 p_2160->g_725 p_2160->g_1271
 * writes: p_2160->g_83 p_2160->g_67 p_2160->g_257 p_2160->g_1045 p_2160->g_3 p_2160->g_94 p_2160->g_274 p_2160->g_181 p_2160->g_26 p_2160->g_1109 p_2160->g_1111 p_2160->g_1118 p_2160->g_105 p_2160->g_250 p_2160->g_1133 p_2160->g_1244 p_2160->g_725 p_2160->g_328 p_2160->g_1271 p_2160->g_88 p_2160->g_767
 */
int32_t * func_21(uint32_t  p_22, int32_t * p_23, int32_t * p_24, int32_t * p_25, struct S0 * p_2160)
{ /* block id: 439 */
    uint64_t l_1043 = 1UL;
    int32_t l_1048 = (-5L);
    int16_t *l_1062 = &p_2160->g_475;
    int32_t l_1185 = 0x44D6EA9AL;
    int32_t l_1187[4][1];
    int32_t *l_1282[7];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1187[i][j] = (-9L);
    }
    for (i = 0; i < 7; i++)
        l_1282[i] = &p_2160->g_105[5];
    if ((((****p_2160->g_154) |= p_22) ^ (!p_22)))
    { /* block id: 441 */
        uint32_t l_1029 = 0x954BC7BDL;
        uint16_t *l_1036 = &p_2160->g_67;
        uint16_t *l_1044 = &p_2160->g_1045[4][3];
        int32_t l_1046[9];
        uint8_t *l_1047[3][3] = {{&p_2160->g_562,&p_2160->g_562,&p_2160->g_562},{&p_2160->g_562,&p_2160->g_562,&p_2160->g_562},{&p_2160->g_562,&p_2160->g_562,&p_2160->g_562}};
        int64_t *l_1049 = &p_2160->g_94;
        int8_t **l_1055[4][5][5] = {{{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}},{{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}},{{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}},{{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}}};
        int8_t **l_1059[10][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint32_t ***l_1074 = &p_2160->g_156[0];
        int64_t l_1170 = 0x0950E03EDC1666FEL;
        int32_t **l_1175 = &p_2160->g_685;
        int32_t ***l_1174 = &l_1175;
        uint8_t **l_1206 = &l_1047[2][1];
        uint32_t *****l_1245 = &p_2160->g_1118;
        int16_t l_1267[8][9][3] = {{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}},{{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L},{(-1L),(-3L),0x4454L}}};
        int8_t l_1269 = 0L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_1046[i] = 0L;
        if ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((*l_1049) = (((*p_25) = (((safe_sub_func_int32_t_s_s((p_22 != (l_1048 = (safe_div_func_uint64_t_u_u((((0xDCC1L && (((safe_mod_func_uint32_t_u_u(l_1029, (safe_mod_func_uint16_t_u_u(p_2160->g_235, (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((*l_1036) &= l_1029) < (l_1046[6] ^= ((*l_1044) ^= ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((p_2160->g_102[1] , (--p_2160->g_257[6])), 13)) || (l_1043 == 0x46FC40063CE3E7EBL)), (0x1E97AF1AL != l_1043))) > l_1029)))), 14)) < 1UL), 255UL)))))) != l_1043) , l_1043)) == l_1029) & p_2160->g_102[1]), 1L)))), (***p_2160->g_155))) , (**p_2160->g_669)) <= p_22)) < (****p_2160->g_154))), l_1043)), l_1043)), l_1029)))
        { /* block id: 449 */
            uint8_t l_1050 = 0x47L;
            int8_t **l_1054 = &p_2160->g_327;
            int8_t ***l_1053[9] = {&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054};
            int16_t *l_1058 = &p_2160->g_274[0][3][3];
            uint32_t **l_1106 = &p_2160->g_99;
            int32_t l_1188 = 0L;
            int32_t l_1189 = (-7L);
            uint8_t **l_1207[3][4][10] = {{{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]}},{{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]}},{{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]},{&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1],&l_1047[2][1]}}};
            int64_t l_1219 = (-2L);
            uint64_t l_1220 = 0x801045619AD015D6L;
            int32_t l_1268 = 0x544FE2F7L;
            int32_t l_1270[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1270[i] = 0x47049A9EL;
            p_24 = p_23;
            if ((l_1050 || (safe_lshift_func_uint16_t_u_s(((l_1043 && (p_2160->g_432 && p_22)) >= ((l_1055[1][3][0] = &p_2160->g_327) == (p_2160->g_105[5] , ((((*l_1058) = (safe_sub_func_int16_t_s_s((p_2160->g_102[2] == (l_1050 <= ((*p_24) = ((~p_22) | p_2160->g_458[3][6][4])))), l_1029))) >= 0x0D40L) , l_1059[2][9])))), l_1046[6]))))
            { /* block id: 454 */
                uint16_t l_1073 = 0x0202L;
                int32_t **l_1097[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t ***l_1096 = &l_1097[5];
                int32_t ****l_1095 = &l_1096;
                uint32_t **l_1107[5][6][3] = {{{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0}},{{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0}},{{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0}},{{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0}},{{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0},{&p_2160->g_99,&p_2160->g_99,(void*)0}}};
                int32_t *l_1180 = &p_2160->g_105[5];
                int32_t l_1186[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                uint8_t ***l_1208 = &l_1207[2][0][8];
                int i, j, k;
                (*p_2160->g_180) = (void*)0;
                if (((*p_25) = l_1046[4]))
                { /* block id: 457 */
                    for (l_1043 = 0; (l_1043 >= 39); l_1043 = safe_add_func_uint32_t_u_u(l_1043, 9))
                    { /* block id: 460 */
                        int16_t *l_1063 = &p_2160->g_458[1][1][4];
                        int32_t l_1064 = 0x36DCDAFFL;
                        (*p_25) |= (((l_1062 == (l_1063 = &p_2160->g_274[0][3][3])) != 0x39D70275L) != l_1064);
                    }
                    for (p_2160->g_26 = 2; (p_2160->g_26 != (-6)); p_2160->g_26 = safe_sub_func_uint32_t_u_u(p_2160->g_26, 5))
                    { /* block id: 466 */
                        int32_t *l_1092 = &l_1046[8];
                        int64_t *l_1108 = &p_2160->g_1109;
                        int64_t *l_1110 = &p_2160->g_1111;
                        (*l_1092) &= (safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((p_2160->g_274[0][2][2] <= (safe_lshift_func_int8_t_s_u(((((p_2160->g_3 != (((-8L) && (l_1073 > (((void*)0 != l_1074) , p_2160->g_432))) ^ (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_2160->g_250, (p_2160->g_458[0][5][3] > p_2160->g_410))), l_1048)), p_22)))) , p_2160->g_1081[3]) != &p_2160->g_1082[4]) != p_22), p_2160->g_3))), l_1050)) || 0x8408L), 1L));
                        (*p_24) &= (p_22 >= ((safe_mod_func_int32_t_s_s(((((void*)0 == l_1095) ^ (((*l_1092) , ((p_2160->g_88 , p_2160->g_380) >= (safe_mul_func_int16_t_s_s(p_22, ((*l_1058) ^= (((*l_1110) &= ((*l_1108) = (((safe_mod_func_uint16_t_u_u(p_22, (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_1106 == l_1107[2][0][0]) > 0x60CBL), p_22)), p_22)))) , (-4L)) == 0x8DL))) , p_2160->g_562)))))) >= p_2160->g_102[2])) <= (*l_1092)), 0x134C65BFL)) , 0xFDL));
                    }
                }
                else
                { /* block id: 473 */
                    uint32_t ****l_1117 = &l_1074;
                    uint32_t *****l_1116 = &l_1117;
                    uint32_t *****l_1120 = &p_2160->g_1118;
                    int32_t *l_1142 = &p_2160->g_105[6];
                    int32_t *l_1181 = &p_2160->g_725;
                    int32_t *l_1182 = &p_2160->g_432;
                    int32_t *l_1183 = (void*)0;
                    int32_t *l_1184[9][8][3] = {{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}},{{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725},{(void*)0,(void*)0,&p_2160->g_725}}};
                    int16_t l_1190 = 0x3132L;
                    uint16_t l_1191 = 1UL;
                    int i, j, k;
                    if ((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((p_22 || (((*l_1116) = (void*)0) != ((*l_1120) = p_2160->g_1118))) , l_1029) < (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((((*l_1142) = ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(p_22, 4)) || p_2160->g_1133[2]), p_2160->g_92)) >= (safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(((*p_24) = (((p_22 <= (+((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(l_1073, (-1L))), l_1048)) && 65531UL))) , p_22) <= 0x8FDEFA485263C7F0L)), 8L)) == p_22) ^ l_1073), l_1073))), l_1048)), p_2160->g_432)) && 1L) ^ 65535UL) , 0x6769330CL)) && l_1046[7]) | p_22), l_1043)) , (-5L)), p_22))), p_2160->g_1111)), 8)))
                    { /* block id: 478 */
                        return p_24;
                    }
                    else
                    { /* block id: 480 */
                        uint32_t l_1143[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1143[i] = 0xAE090B2FL;
                        (*p_2160->g_180) = (void*)0;
                        --l_1143[1];
                    }
                    if ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(p_22, 0)) <= ((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u((l_1048 || ((safe_div_func_int64_t_s_s(((p_2160->g_1133[2] = (((safe_mul_func_uint16_t_u_u(p_2160->g_92, (((((0x21184812L || ((safe_add_func_uint16_t_u_u((((**p_2160->g_669) = p_22) & 1UL), ((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_2160->g_215, (((l_1046[0] = l_1170) , (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((void*)0 == l_1174))), 2)) , 0x3FB3B9B3E350F3AEL) != 0UL)) > 0x03L))), 0x6418460EL)) > p_22), 0UL)) > (-1L)), (*p_23))) != 7L))) , (*l_1142))) , 0x41E1L) > 0x2B56L) < l_1050) , 1L))) ^ 2L) == (*l_1142))) , (*l_1142)), p_2160->g_3)) == p_2160->g_88)), 0x01FA0377L)) ^ l_1048) , 18446744073709551615UL) < l_1073) | (***p_2160->g_155)) , l_1048), 0x50L)) & 0UL)) < p_2160->g_102[2]), l_1170)))
                    { /* block id: 487 */
                        int32_t **l_1179 = &l_1142;
                        (*p_24) |= (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(6L)), (((*l_1179) = (void*)0) != p_23)));
                        (*l_1179) = l_1180;
                    }
                    else
                    { /* block id: 491 */
                        return l_1180;
                    }
                    l_1191++;
                }
                if (((safe_sub_func_int16_t_s_s(p_22, ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((p_22 , (safe_rshift_func_uint16_t_u_s((((p_2160->g_105[2] < (safe_mul_func_int8_t_s_s((*l_1180), (safe_mul_func_int8_t_s_s(((*p_25) & (l_1206 == ((*l_1208) = l_1207[2][0][8]))), (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((0x53L <= ((p_2160->g_59 ^ l_1185) , 0x3AL)), p_22)) | (*p_25)), l_1046[1])) , 1L) == 0x2F98L), p_2160->g_79)) ^ l_1219) | p_2160->g_92) <= l_1046[6]), (*l_1180))), 0x2BL))))))) < l_1219) > p_2160->g_88), p_22))) , l_1170), l_1220)), 0)) || (*p_24)) , (*l_1206)) == (*l_1206)))) <= p_2160->g_328))
                { /* block id: 497 */
                    return p_24;
                }
                else
                { /* block id: 499 */
                    int64_t l_1246[8] = {0x27ADB0F650565B13L,0x5B58CBA4DDFDF42BL,0x27ADB0F650565B13L,0x27ADB0F650565B13L,0x5B58CBA4DDFDF42BL,0x27ADB0F650565B13L,0x27ADB0F650565B13L,0x5B58CBA4DDFDF42BL};
                    int i;
                    for (l_1048 = 0; (l_1048 > 20); l_1048 = safe_add_func_int32_t_s_s(l_1048, 1))
                    { /* block id: 502 */
                        int32_t *l_1247 = &p_2160->g_725;
                        int32_t *l_1248 = &l_1046[4];
                        (*l_1248) ^= ((*l_1247) ^= (safe_lshift_func_int8_t_s_s(((((0x3240508387A8E52CL < 0x77753F5DB5161431L) ^ p_22) | (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(((0x19F89788L | ((++(****p_2160->g_154)) >= ((*p_25) ^= (0x28L < ((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((p_22 < ((p_2160->g_1243 <= ((p_22 < ((((p_2160->g_1244 = &p_2160->g_1118) == l_1245) , l_1050) && 2UL)) != l_1220)) < p_2160->g_562)), (*l_1180))), p_22)), p_22)), 1L)) == p_22))))) , l_1246[7]), 1L)) , 1UL), 6)), 0x61L))) , l_1246[7]), l_1029)));
                    }
                }
            }
            else
            { /* block id: 510 */
                int64_t l_1263 = 0x32B32AE45618EA75L;
                (*p_25) = (((safe_mod_func_uint8_t_u_u((+((((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(((p_22 || (((**p_2160->g_669) , p_2160->g_380) , (safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((-6L), 6)) , (p_22 , ((((l_1048 = p_22) & (((((p_2160->g_215 , p_22) ^ (safe_lshift_func_int8_t_s_u(((l_1185 != l_1220) , l_1220), 0))) | p_22) ^ l_1263) & 0x1A04L)) & 0L) , p_22))), 7UL)))) , l_1048), 65535UL)) > l_1263), 0x5FFEF7C2EDED9073L)), p_2160->g_274[1][1][2])) != l_1043) | 0x20B3L) & 0x66L)), 0x6BL)) >= 0xB3L) | 4294967295UL);
            }
            for (p_2160->g_328 = 0; (p_2160->g_328 > 23); ++p_2160->g_328)
            { /* block id: 516 */
                int32_t *l_1266[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1266[i] = (void*)0;
                --p_2160->g_1271;
                return p_24;
            }
        }
        else
        { /* block id: 520 */
            int8_t *l_1278 = &p_2160->g_235;
            int32_t *l_1281 = (void*)0;
            (*p_25) &= (((safe_lshift_func_uint8_t_u_s(p_2160->g_458[4][1][3], (p_22 > ((*l_1036) = (p_2160->g_257[6] = ((l_1278 != (((void*)0 != (*l_1206)) , l_1278)) == (-3L))))))) || ((*p_2160->g_668) ^= (l_1046[6] <= (safe_lshift_func_uint8_t_u_u((p_2160->g_88 = p_22), l_1043))))) || (-6L));
            p_2160->g_767 = l_1281;
        }
    }
    else
    { /* block id: 528 */
        return p_23;
    }
    return l_1282[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_201 p_2160->g_105 p_2160->g_3 p_2160->g_83 p_2160->g_250 p_2160->g_67 p_2160->g_215 p_2160->g_92 p_2160->g_59 p_2160->g_458 p_2160->g_155 p_2160->g_156 p_2160->g_99 p_2160->g_88 p_2160->g_668 p_2160->g_328 p_2160->g_102 p_2160->g_475 p_2160->g_180 p_2160->g_669 p_2160->g_432 p_2160->g_767 p_2160->g_562 p_2160->g_274 p_2160->g_725 p_2160->g_79 p_2160->g_235 p_2160->g_101 p_2160->g_878 p_2160->g_154 p_2160->g_380
 * writes: p_2160->g_201 p_2160->g_105 p_2160->g_235 p_2160->g_59 p_2160->g_767 p_2160->g_215 p_2160->g_92 p_2160->g_88 p_2160->g_181 p_2160->g_250 p_2160->g_725 p_2160->g_562 p_2160->g_79 p_2160->g_878 p_2160->g_458 p_2160->g_83 p_2160->g_274 p_2160->g_99 p_2160->g_328 p_2160->g_156 p_2160->g_475
 */
uint8_t  func_27(int32_t * p_28, int32_t  p_29, struct S0 * p_2160)
{ /* block id: 298 */
    int32_t **l_744 = (void*)0;
    uint8_t *l_745 = &p_2160->g_88;
    int32_t l_748[10] = {0L,0x492197F0L,(-2L),0x492197F0L,0L,0L,0x492197F0L,(-2L),0x492197F0L,0L};
    int32_t l_749 = (-5L);
    int16_t l_764 = (-2L);
    int32_t *l_768 = (void*)0;
    uint64_t l_778 = 0x021FCCD1BA6204F9L;
    uint16_t *l_847[2];
    uint16_t l_953 = 1UL;
    int32_t l_964 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_847[i] = (void*)0;
    for (p_2160->g_201 = 0; (p_2160->g_201 != 10); p_2160->g_201 = safe_add_func_int8_t_s_s(p_2160->g_201, 5))
    { /* block id: 301 */
        int64_t l_735 = 0x4C36DFCC020F7B11L;
        int32_t ***l_746[3];
        int8_t *l_747 = &p_2160->g_235;
        int32_t **l_804 = &p_2160->g_685;
        int32_t **l_806 = &p_2160->g_685;
        uint16_t *l_852 = &p_2160->g_67;
        int i;
        for (i = 0; i < 3; i++)
            l_746[i] = &p_2160->g_310;
        l_749 |= (+((safe_mod_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((((*l_747) = (safe_rshift_func_int16_t_s_u((l_735 <= (((*p_28) = (!(safe_mul_func_uint8_t_u_u(((0x70302B7CL > l_735) , ((*p_28) == (l_735 | (safe_mul_func_uint8_t_u_u(((2UL >= (((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s((l_744 == (void*)0), (l_745 == (void*)0))) ^ l_735), 7UL)) , l_746[0]) != &p_2160->g_180)) == p_2160->g_3), p_2160->g_105[5]))))), p_29)))) <= p_29)), 6))) <= (-7L)), l_748[6])) < 5L), 0x02E30E47L)) | l_748[0]));
        for (p_2160->g_59 = 3; (p_2160->g_59 >= 0); p_2160->g_59 -= 1)
        { /* block id: 307 */
            int8_t l_765 = (-1L);
            uint64_t l_766[6];
            int32_t l_783 = 0x769FF307L;
            int16_t *l_795 = &l_764;
            int16_t l_811 = (-1L);
            int i;
            for (i = 0; i < 6; i++)
                l_766[i] = 2UL;
            p_2160->g_767 = ((&p_2160->g_380 != (void*)0) , (((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(((!(safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((1UL && 1L), ((safe_sub_func_int16_t_s_s(p_2160->g_83, p_29)) , p_2160->g_250))) , p_29), ((void*)0 != &p_2160->g_155)))) , l_764), p_29)), l_765)) >= l_766[4]), 0x6C8EL)), 4294967294UL)) || p_2160->g_67) , &l_749));
            l_768 = p_28;
            for (p_2160->g_215 = 0; (p_2160->g_215 <= 4); p_2160->g_215 += 1)
            { /* block id: 312 */
                uint8_t l_769 = 1UL;
                int32_t l_776 = 0x4D219A31L;
                int32_t l_784[1][6] = {{0x7BF0975EL,0x7BF0975EL,0x7BF0975EL,0x7BF0975EL,0x7BF0975EL,0x7BF0975EL}};
                int64_t *l_799 = &p_2160->g_92;
                int16_t **l_829 = &l_795;
                uint64_t **l_843[6][10] = {{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668},{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668},{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668},{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668},{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668},{&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,(void*)0,&p_2160->g_668,(void*)0,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668,&p_2160->g_668}};
                uint64_t ***l_842[7][4][1] = {{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}},{{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]},{&l_843[5][3]}}};
                uint8_t l_863 = 0xF2L;
                int i, j, k;
                for (p_2160->g_92 = 3; (p_2160->g_92 >= 0); p_2160->g_92 -= 1)
                { /* block id: 315 */
                    int32_t **l_777 = &p_2160->g_685;
                    int32_t l_782 = 0x444D9224L;
                    int16_t l_812 = 0x1ED2L;
                    int i, j, k;
                    if ((p_2160->g_458[p_2160->g_215][(p_2160->g_92 + 1)][(p_2160->g_59 + 2)] >= (((((((+(***p_2160->g_155)) <= (***p_2160->g_155)) && ((void*)0 == p_28)) && l_769) < (l_776 = (safe_sub_func_uint64_t_u_u(p_2160->g_458[p_2160->g_215][(p_2160->g_92 + 1)][(p_2160->g_59 + 2)], ((l_769 == ((+(++(*l_745))) | (safe_mod_func_uint64_t_u_u((*p_2160->g_668), 0xACC5AFAA56510182L)))) ^ p_29))))) , l_777) == &p_2160->g_685)))
                    { /* block id: 318 */
                        uint8_t l_781[3][7] = {{251UL,251UL,0x46L,251UL,1UL,251UL,0x46L},{251UL,251UL,0x46L,251UL,1UL,251UL,0x46L},{251UL,251UL,0x46L,251UL,1UL,251UL,0x46L}};
                        int i, j;
                        ++l_778;
                        (*p_28) |= l_781[0][6];
                        return p_2160->g_328;
                    }
                    else
                    { /* block id: 322 */
                        uint32_t l_785 = 0xA2EF1F4BL;
                        l_785--;
                    }
                    for (l_776 = 4; (l_776 >= 0); l_776 -= 1)
                    { /* block id: 327 */
                        int8_t l_790 = 2L;
                        int16_t *l_796 = &p_2160->g_458[3][6][0];
                        int32_t ***l_805[4] = {&l_744,&l_744,&l_744,&l_744};
                        int i;
                        (*l_768) = (((l_790 == ((safe_rshift_func_int16_t_s_s(((*l_768) < p_29), 15)) < ((p_2160->g_102[2] < (0x61ABA19DL & 4294967295UL)) , (safe_add_func_int32_t_s_s((!(*p_28)), (((l_795 == l_796) ^ 0xDD8A2EEC2F8D28FFL) , l_790)))))) != l_783) != 0L);
                        (*l_768) = (p_29 || ((safe_mul_func_uint16_t_u_u((((p_29 > (l_799 == &l_735)) <= 18446744073709551613UL) ^ 255UL), (((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((l_804 != (l_806 = l_777)) || ((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_29, 1L)), p_29)) < 0x5907L)) & l_811), l_812)) != p_2160->g_475), 15)) ^ l_783) >= l_782))) < 1UL));
                    }
                    for (p_2160->g_88 = 3; (p_2160->g_88 <= 9); p_2160->g_88 += 1)
                    { /* block id: 334 */
                        int64_t *l_823 = &l_735;
                        int32_t l_828[3];
                        uint8_t *l_832 = &l_769;
                        uint64_t ***l_845 = &l_843[2][6];
                        uint64_t ****l_844 = &l_845;
                        uint16_t *l_846 = &p_2160->g_257[6];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_828[i] = 0x0F256A55L;
                        (1 + 1);
                    }
                    (*p_2160->g_180) = (void*)0;
                }
                (*p_2160->g_767) = (p_2160->g_725 &= (safe_rshift_func_int16_t_s_s(1L, (l_811 , (safe_rshift_func_int16_t_s_s(((((*l_745) = (safe_add_func_int64_t_s_s((((6L | ((~0x1EL) <= (((((*l_768) = ((~(((safe_add_func_int16_t_s_s((((**p_2160->g_669) &= p_29) & p_2160->g_432), 5L)) != 18446744073709551610UL) & l_863)) , l_783)) < (*p_2160->g_767)) || 7UL) > l_811))) && (*l_768)) ^ 0x6BL), p_2160->g_562))) >= 7UL) & p_29), p_2160->g_274[0][3][3]))))));
            }
        }
        if ((*p_28))
            continue;
        (*p_28) = 0x169F66A4L;
    }
    for (l_764 = 9; (l_764 >= 0); l_764 -= 1)
    { /* block id: 366 */
        uint64_t l_865 = 1UL;
        int32_t l_894 = 0x008050FCL;
        int32_t ***l_929 = (void*)0;
        int8_t *l_965 = (void*)0;
        int8_t *l_966 = (void*)0;
        int8_t *l_967 = &p_2160->g_328;
        int32_t l_992 = 0x0E46EECEL;
        int32_t l_993 = 0x2FFD532DL;
        int32_t l_994[5];
        uint64_t l_995 = 0x428800157B65D62AL;
        int i;
        for (i = 0; i < 5; i++)
            l_994[i] = 0x5D88B5C6L;
        for (p_2160->g_59 = 1; (p_2160->g_59 >= 0); p_2160->g_59 -= 1)
        { /* block id: 369 */
            int32_t *l_864 = &p_2160->g_725;
            int32_t l_893[9];
            int i;
            for (i = 0; i < 9; i++)
                l_893[i] = 0x5B35194DL;
            ++l_865;
            for (p_2160->g_562 = 0; (p_2160->g_562 <= 9); p_2160->g_562 += 1)
            { /* block id: 373 */
                int8_t l_874[2];
                uint32_t l_897 = 9UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_874[i] = 0x29L;
                for (p_2160->g_79 = 0; (p_2160->g_79 <= 4); p_2160->g_79 += 1)
                { /* block id: 376 */
                    uint8_t *l_877 = &p_2160->g_878;
                    uint32_t *l_881 = &p_2160->g_83;
                    int32_t l_895 = 0x68A75AD3L;
                    int32_t l_896 = 0x35876F49L;
                    int16_t *l_916 = &p_2160->g_274[0][3][3];
                    uint64_t *l_923[1][3][3];
                    int32_t **l_928[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t ****l_930 = &l_929;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_923[i][j][k] = &p_2160->g_215;
                        }
                    }
                    if (((safe_lshift_func_int16_t_s_s(p_2160->g_235, (safe_rshift_func_int16_t_s_u((((((3L > 0x2CDCL) || ((p_2160->g_458[p_2160->g_79][(p_2160->g_79 + 3)][(p_2160->g_79 + 1)] ^= ((safe_sub_func_int8_t_s_s(((((*l_877) = (l_874[1] , ((*l_745)++))) ^ ((1L > ((safe_add_func_int64_t_s_s((((l_881 = (void*)0) == (void*)0) || ((p_2160->g_250 < (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_29, (*l_864))), 7))) > 0x4B2F1BD90C4284AEL)), p_29)) , (*p_2160->g_668))) , (-3L))) & p_29), p_2160->g_59)) ^ p_29)) || 0x6872L)) ^ 0x00L) == 6UL) , p_2160->g_92), 13)))) | p_29))
                    { /* block id: 381 */
                        int32_t *l_886 = &l_748[6];
                        int32_t *l_887 = &p_2160->g_105[5];
                        int32_t *l_888 = &l_748[6];
                        int32_t *l_889 = &l_749;
                        int32_t *l_890 = &l_749;
                        int32_t *l_891 = (void*)0;
                        int32_t *l_892[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_892[i] = &p_2160->g_105[5];
                        (*p_28) = (p_29 > 0L);
                        --l_897;
                        if (l_874[1])
                            continue;
                        (*p_28) |= (*p_2160->g_767);
                    }
                    else
                    { /* block id: 386 */
                        int16_t *l_912[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_912[i] = &p_2160->g_458[p_2160->g_79][(p_2160->g_79 + 3)][(p_2160->g_79 + 1)];
                        (*p_2160->g_767) = (safe_sub_func_int16_t_s_s(((p_2160->g_458[1][1][4] && (l_894 >= ((****p_2160->g_154) ^= (safe_rshift_func_int16_t_s_s(p_2160->g_101, (p_2160->g_458[2][4][3] ^= ((l_874[0] < (0x26E7FA39L && ((-10L) & ((l_865 , ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_745)++), (safe_sub_func_uint64_t_u_u((**p_2160->g_669), p_2160->g_102[2])))), 0xBD1ED411B23F91D8L)) == p_29)) >= p_2160->g_878)))) , p_29))))))) == l_894), p_29));
                        return p_2160->g_328;
                    }
                    (*p_2160->g_767) = ((-4L) <= (((((void*)0 != l_877) & ((safe_unary_minus_func_uint32_t_u(0UL)) | (((((*p_2160->g_668) &= (((safe_mul_func_int16_t_s_s(((*l_916) = 0x6DFEL), p_29)) & (safe_mul_func_int8_t_s_s((~(safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((l_923[0][0][2] != (void*)0) && ((-1L) <= p_29)), p_29)), l_749))), (-2L)))) == p_29)) < 0x23C372F178ED9182L) || p_29) ^ l_865))) & (*p_2160->g_767)) < 0x5DL));
                    (*l_864) = (0L <= ((0x6D2D23DDFB261E39L > p_29) , ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(((l_928[0][5] == (void*)0) != (*p_28)), 1)) > ((((*l_930) = l_929) != (void*)0) & (safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((--(*p_2160->g_668)), (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((((0x0D478E7EL < (*p_2160->g_99)) , (void*)0) != &p_2160->g_878) >= p_29) , (*p_28)) ^ (****p_2160->g_154)), 13)), 0x4391L)))), 0x6EB8035AC0C17F5DL)))), 1)) > 1UL)));
                }
            }
        }
        (*p_2160->g_767) = ((safe_sub_func_uint8_t_u_u(p_29, ((*l_967) = (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((*l_745) = (safe_rshift_func_int8_t_s_u(1L, l_953))) == (((safe_rshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((*p_28), (((p_29 <= (safe_rshift_func_uint8_t_u_s(l_894, (((safe_add_func_uint64_t_u_u((**p_2160->g_669), (((***p_2160->g_154) = (**p_2160->g_155)) == (void*)0))) || p_29) || l_764)))) != (*p_28)) & l_964))) | 0xB8F2F2492418D07DL), p_29)) <= p_29) <= p_29), p_2160->g_725)) > 0xACL) , p_29)), p_29)), 1L)), 0x5F2A10B2L)), 1L))))) <= 0UL);
        (*p_2160->g_767) = (((*p_28) = 0x7C322C6BL) >= (*p_2160->g_767));
        for (p_2160->g_215 = 0; (p_2160->g_215 <= 1); p_2160->g_215 += 1)
        { /* block id: 410 */
            int32_t **l_968 = &l_768;
            uint64_t *l_981 = &p_2160->g_101;
            uint64_t l_986[9] = {0UL,0x29CECBE1774441C3L,0UL,0UL,0x29CECBE1774441C3L,0UL,0UL,0x29CECBE1774441C3L,0UL};
            int32_t l_990 = 0x09104BC6L;
            int32_t l_991[6][4][10] = {{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}},{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}},{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}},{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}},{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}},{{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L},{1L,0x4717C1F1L,0x26F8402CL,0x6DC5C463L,(-1L),0x6DC5C463L,0x26F8402CL,0x4717C1F1L,1L,0x2D4FD273L}}};
            uint32_t *l_1016 = (void*)0;
            uint32_t **l_1015 = &l_1016;
            int i, j, k;
            (*l_968) = p_28;
            for (p_2160->g_328 = 0; (p_2160->g_328 <= 1); p_2160->g_328 += 1)
            { /* block id: 414 */
                int32_t *l_987 = &l_748[6];
                int32_t *l_988 = (void*)0;
                int32_t *l_989[10][7][3] = {{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}},{{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964},{&l_964,&p_2160->g_105[2],&l_964}}};
                int i, j, k;
                (*l_968) = (*l_968);
                l_748[6] &= (((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint64_t_u_u(((**p_2160->g_669) = (((p_2160->g_562 ^= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(255UL, p_2160->g_274[p_2160->g_215][(p_2160->g_215 + 1)][p_2160->g_328])), 14)), (safe_lshift_func_int8_t_s_u((**l_968), (((*l_745) = (p_29 , 0UL)) == ((void*)0 != l_981))))))) >= (safe_sub_func_uint8_t_u_u(((p_2160->g_235 , ((safe_sub_func_uint32_t_u_u((**l_968), (*l_768))) , (void*)0)) == &l_894), p_29))) , (**l_968))), (*l_768))) , l_894) , p_29) , p_29) >= l_986[1]) && p_2160->g_274[p_2160->g_215][(p_2160->g_215 + 1)][p_2160->g_328]), p_2160->g_274[p_2160->g_215][(p_2160->g_215 + 1)][p_2160->g_328])) ^ 0x092B6741L) & (-1L));
                l_995++;
            }
            for (p_2160->g_83 = 0; (p_2160->g_83 <= 9); p_2160->g_83 += 1)
            { /* block id: 424 */
                int32_t l_1007 = (-1L);
                int32_t l_1013[5] = {0L,0L,0L,0L,0L};
                int16_t *l_1014[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1014[i] = (void*)0;
                for (l_993 = 0; l_993 < 2; l_993 += 1)
                {
                    p_2160->g_156[l_993] = &p_2160->g_99;
                }
                if ((*p_2160->g_767))
                    continue;
                (*p_2160->g_767) &= (safe_lshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((+(*l_768)), 0x64D9L)) , (((safe_lshift_func_int16_t_s_u((l_991[4][2][0] ^= (p_2160->g_274[0][3][3] = (safe_mul_func_int8_t_s_s(((*l_967) = (0x2FL >= (((safe_unary_minus_func_uint8_t_u(0x1EL)) == (l_1007 <= (safe_add_func_int32_t_s_s((((**l_968) ^ (safe_unary_minus_func_int8_t_s((l_993 ^= l_992)))) , (((p_2160->g_475 = (safe_mod_func_int8_t_s_s(((*l_768) = ((**p_2160->g_669) || (l_1013[3] = ((p_29 != p_29) , 0xC3A410A304C89BD7L)))), l_865))) , (*l_768)) || l_1007)), l_1007)))) , (*l_768)))), l_1007)))), p_2160->g_380)) < l_994[2]) , l_1015)) == &l_1016), 11));
            }
        }
    }
    return l_778;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_380 p_2160->g_99 p_2160->g_83 p_2160->g_105 p_2160->g_274 p_2160->g_101 p_2160->g_155 p_2160->g_156 p_2160->g_432
 * writes: p_2160->g_380 p_2160->g_562 p_2160->g_83 p_2160->g_432 p_2160->g_105 p_2160->g_725
 */
int32_t * func_30(int32_t * p_31, int32_t * p_32, struct S0 * p_2160)
{ /* block id: 285 */
    uint8_t l_700 = 255UL;
    int8_t *l_720 = &p_2160->g_235;
    uint32_t l_722 = 0x6D1ACC7AL;
    int32_t *l_726 = &p_2160->g_105[5];
    for (p_2160->g_380 = 0; (p_2160->g_380 != 33); ++p_2160->g_380)
    { /* block id: 288 */
        uint8_t l_711 = 0x69L;
        uint8_t *l_712 = (void*)0;
        uint8_t *l_713 = &p_2160->g_562;
        int32_t l_721[10] = {0x3A14DFF1L,0x51A4A34AL,1L,0x51A4A34AL,0x3A14DFF1L,0x3A14DFF1L,0x51A4A34AL,1L,0x51A4A34AL,0x3A14DFF1L};
        int32_t *l_723 = &p_2160->g_432;
        int32_t *l_724 = &p_2160->g_725;
        int i;
        --l_700;
        (*l_724) = ((((safe_mul_func_uint8_t_u_u(0x78L, ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((((((*p_31) = ((*l_723) |= (((((safe_mul_func_uint8_t_u_u(((*l_713) = (l_711 >= 0x104C84458C2ABC0DL)), (safe_add_func_uint32_t_u_u(((***p_2160->g_155) = (l_721[7] |= (((l_700 >= (*p_2160->g_99)) , (l_700 >= ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_711, l_700)), (((((((l_711 , (void*)0) == l_720) == p_2160->g_83) && l_700) > (*p_31)) != l_711) & p_2160->g_274[0][3][3]))) <= p_2160->g_101))) <= 1UL))), l_711)))) || l_722) , 0x70DFC97C8A7DEBCEL) <= 1L) >= 0x2027L))) != 0x95E10694L) == l_722) != 0x2FED06B8L) ^ l_700) ^ 0xC6L), 5)), l_722)) >= 1UL))) , 18446744073709551610UL) , l_700) , 1L);
    }
    return l_726;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_88 p_2160->g_380 p_2160->g_458 p_2160->g_643 p_2160->g_664 p_2160->g_155 p_2160->g_156 p_2160->g_99 p_2160->g_83 p_2160->g_105 p_2160->g_79
 * writes: p_2160->g_88 p_2160->g_215 p_2160->g_83 p_2160->g_685 p_2160->g_562
 */
int32_t * func_33(int32_t  p_34, struct S0 * p_2160)
{ /* block id: 264 */
    int32_t l_632 = 4L;
    uint32_t *l_635 = &p_2160->g_380;
    uint32_t *l_638 = &p_2160->g_380;
    int32_t l_686 = 0x1F7A9F89L;
    int32_t l_688 = 0x4C646EB9L;
    int32_t *l_689 = &l_686;
    int32_t *l_690 = &p_2160->g_432;
    int32_t *l_691 = (void*)0;
    int32_t *l_692 = &l_686;
    int32_t *l_693[8][7] = {{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432},{&p_2160->g_105[4],&p_2160->g_105[5],&p_2160->g_432,(void*)0,&p_2160->g_105[5],(void*)0,&p_2160->g_432}};
    int16_t l_694 = (-1L);
    uint32_t l_695 = 0UL;
    int i, j;
    for (p_2160->g_88 = 0; (p_2160->g_88 != 36); p_2160->g_88 = safe_add_func_int64_t_s_s(p_2160->g_88, 1))
    { /* block id: 267 */
        uint32_t *l_636 = &p_2160->g_380;
        uint32_t **l_637 = &l_636;
        int32_t l_641 = 0x7A891B4DL;
        int32_t l_642 = 0x45491C6BL;
        int16_t *l_663 = (void*)0;
        int16_t l_672[2][4][7] = {{{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L}},{{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L},{0x1EE2L,0x4AF1L,(-1L),(-1L),(-1L),0x4AF1L,0x1EE2L}}};
        int32_t *l_684 = &l_632;
        int32_t **l_683 = &l_684;
        uint8_t *l_687 = &p_2160->g_562;
        int i, j, k;
        l_642 &= ((p_34 , 0x6027L) != ((safe_add_func_int8_t_s_s(((l_632 && ((((safe_mul_func_uint16_t_u_u(0x8288L, (l_635 == (l_638 = ((*l_637) = l_636))))) <= (safe_div_func_int16_t_s_s(((p_34 && 1UL) , (p_2160->g_380 , p_34)), p_34))) , l_641) && p_34)) | 1L), p_34)) , p_2160->g_458[1][4][5]));
        for (p_2160->g_215 = 0; (p_2160->g_215 <= 1); p_2160->g_215 += 1)
        { /* block id: 273 */
            int32_t *l_644[10] = {&p_2160->g_105[1],&p_2160->g_3,&p_2160->g_3,&p_2160->g_3,&p_2160->g_105[1],&p_2160->g_105[1],&p_2160->g_3,&p_2160->g_3,&p_2160->g_3,&p_2160->g_105[1]};
            int i;
            l_641 |= ((void*)0 == p_2160->g_643);
        }
        l_688 ^= (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(4294967295UL, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((((l_663 == l_663) || 0x765FL) , p_2160->g_664[5]) == (void*)0), ((*l_687) = (safe_lshift_func_uint16_t_u_u((l_672[0][3][5] , (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_642, (safe_mod_func_int64_t_s_s(((((((l_686 = ((p_2160->g_685 = ((--(***p_2160->g_155)) , ((*l_683) = &l_632))) != (void*)0)) & p_34) > 0x38D2C1A3L) >= l_632) >= 1L) ^ p_34), p_2160->g_105[5])))), 15)), 1)) & 0x33L) , p_2160->g_79)), l_632))))) > p_34), 1)))) ^ p_34) | p_34), l_632)) && l_672[0][3][5]), l_641)), 15)), 0x399492F142BE87F0L)), (-1L))), p_2160->g_458[4][0][0]));
    }
    l_695++;
    return &p_2160->g_105[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_215 p_2160->g_370 p_2160->g_92 p_2160->g_154 p_2160->g_155 p_2160->g_156 p_2160->g_99 p_2160->g_94 p_2160->g_105 p_2160->g_83 p_2160->g_257 p_2160->g_67 p_2160->g_101 p_2160->g_235 p_2160->g_250 p_2160->g_410 p_2160->g_201 p_2160->g_432 p_2160->g_274 p_2160->g_3 p_2160->g_328 p_2160->g_88 p_2160->g_458 p_2160->g_380 p_2160->g_102
 * writes: p_2160->g_215 p_2160->g_79 p_2160->g_83 p_2160->g_328 p_2160->g_250 p_2160->g_101 p_2160->g_88 p_2160->g_274 p_2160->g_410 p_2160->g_432 p_2160->g_458 p_2160->g_105 p_2160->g_600 p_2160->g_380
 */
uint64_t  func_37(int32_t  p_38, int32_t * p_39, uint16_t  p_40, struct S0 * p_2160)
{ /* block id: 154 */
    uint64_t *l_372 = &p_2160->g_101;
    int32_t l_373 = 1L;
    uint8_t l_431 = 7UL;
    uint16_t l_476 = 0x9E35L;
    int32_t *l_487 = (void*)0;
    uint32_t l_508[9] = {0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL,0x1E0DF8CBL};
    int32_t l_526 = (-1L);
    int32_t l_539 = 5L;
    int32_t l_540 = 0L;
    int32_t l_542 = 0x6DBF247DL;
    int32_t l_543[7][5] = {{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)},{(-3L),0L,0L,(-3L),(-3L)}};
    int32_t l_563 = 0L;
    uint32_t ****l_564 = (void*)0;
    int32_t l_592 = 0x68C442D0L;
    int16_t l_594 = 0x28D0L;
    uint64_t l_595 = 0x915FCB699F790591L;
    int i, j;
    for (p_2160->g_215 = 0; (p_2160->g_215 >= 30); p_2160->g_215 = safe_add_func_uint64_t_u_u(p_2160->g_215, 1))
    { /* block id: 157 */
        uint64_t l_381[2];
        int16_t *l_384 = &p_2160->g_274[0][3][3];
        int16_t **l_383 = &l_384;
        int32_t *l_388 = &p_2160->g_105[5];
        int32_t l_501 = 1L;
        uint32_t l_505 = 0UL;
        int32_t l_527 = 0x7A3F2DC6L;
        int32_t l_532[6][8] = {{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L},{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L},{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L},{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L},{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L},{0L,0L,1L,0x6C3601EAL,(-9L),0x6C3601EAL,1L,0L}};
        int64_t l_541[7][2][8] = {{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}},{{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)},{0x00BAFBA1694FD9A4L,0x1E990D92BEB2506BL,0x125F053228AAFF28L,0x69C7087AEA02C455L,0x7DD029A9FE3F57EAL,1L,1L,(-2L)}}};
        int32_t l_593 = 5L;
        uint64_t **l_599 = (void*)0;
        uint64_t ***l_598 = &l_599;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_381[i] = 18446744073709551608UL;
        for (p_2160->g_79 = (-18); (p_2160->g_79 != 24); p_2160->g_79++)
        { /* block id: 160 */
            int8_t *l_378 = &p_2160->g_328;
            uint32_t *l_379[10][1] = {{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380},{&p_2160->g_380}};
            int32_t l_382 = 0x18DDC099L;
            int32_t l_385 = 0x59C4E1FAL;
            int32_t l_461 = 0x52763322L;
            uint16_t l_515 = 0x7C62L;
            uint16_t l_519 = 0x4B30L;
            int32_t l_528 = 0x7E460425L;
            int32_t l_529 = 0x7FC4CAE8L;
            int32_t l_531 = (-8L);
            int32_t l_535 = 0x2EF2367AL;
            int32_t l_537[2];
            uint32_t l_544 = 0x8F400A15L;
            volatile int32_t *l_569[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int8_t l_578 = 0x14L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_537[i] = 0x5771CC63L;
            if ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((((p_2160->g_370[5][0][7] != (((l_382 |= ((((l_381[1] = (((*l_378) = ((((((****p_2160->g_154) = (p_2160->g_92 & (p_38 > ((void*)0 == l_372)))) > p_38) & (l_373 , ((safe_div_func_int32_t_s_s(9L, (safe_mod_func_int32_t_s_s(0x65C71616L, l_373)))) ^ l_373))) != 0x56566E9846EECE68L) , (-1L))) ^ 0x29L)) , 65535UL) <= p_38) ^ p_2160->g_92)) > 255UL) , l_383)) , p_2160->g_94) || p_40) || l_373), p_38)) > 0x36L) ^ l_385), l_373)), p_38)))
            { /* block id: 165 */
                uint8_t l_408[5][9][1] = {{{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL}},{{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL}},{{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL}},{{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL}},{{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL},{254UL}}};
                int i, j, k;
                for (p_2160->g_250 = 0; (p_2160->g_250 > 40); ++p_2160->g_250)
                { /* block id: 168 */
                    int32_t **l_389 = &l_388;
                    uint8_t *l_409[8][8] = {{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]},{&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0],&l_408[2][2][0]}};
                    int32_t l_430 = 1L;
                    int i, j;
                    (*l_389) = l_388;
                    p_2160->g_410 |= ((**l_389) < ((+((3L != ((*p_2160->g_99)++)) || ((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u((p_2160->g_94 != 0L), 13)) , (safe_lshift_func_int16_t_s_s(p_2160->g_257[6], 8))) >= (0x3081EB192F1295B1L != l_373)) & ((**l_383) = ((p_2160->g_88 = (((safe_div_func_int64_t_s_s(p_2160->g_67, (safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((*l_372)--) & p_2160->g_235), l_408[2][2][0])), p_38)))) , p_38) == 0x0E60L)) != p_40))), p_2160->g_250)) <= p_40))) < (*l_388)));
                    p_2160->g_432 &= (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_40, ((safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0x6EL != (l_373 , (safe_rshift_func_uint8_t_u_u(((((((0UL && (safe_lshift_func_uint8_t_u_u(p_38, 2))) == ((*l_388) , l_373)) , (((&p_2160->g_327 == (void*)0) != l_430) , &p_2160->g_59)) != (void*)0) | 3UL) && 0x4E46A7C776CF2D3BL), p_2160->g_101)))), 9)), p_2160->g_201)), l_431)) == (*l_388)), p_38)) < p_40))), p_38)))), 0xC3A5L));
                }
            }
            else
            { /* block id: 177 */
                uint64_t l_437 = 0x85C06E6E6B571F5CL;
                int16_t *l_456 = (void*)0;
                int16_t *l_457 = &p_2160->g_458[1][1][4];
                (*l_388) = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_437, (p_38 | (((p_38 < (safe_mul_func_int8_t_s_s((((7UL != (l_385 > ((safe_lshift_func_uint16_t_u_s(p_2160->g_274[1][2][2], (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*l_457) = (((safe_rshift_func_int16_t_s_u(p_2160->g_432, (p_2160->g_3 >= (safe_sub_func_int32_t_s_s((((*l_378) ^= (((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((((0x56L ^ p_2160->g_257[3]) != p_2160->g_250) < 0x885F7989L) , p_38), p_40)), (*l_388))) || p_2160->g_101) || (*l_388)) <= l_385) < (-1L))) , l_382), (*l_388)))))) == 0x229D3015L) ^ 6L)), 10)), p_2160->g_88)))) == l_437))) , p_38) , p_2160->g_458[2][4][4]), p_2160->g_380))) & (***p_2160->g_155)) ^ 1L)))), 0x8684L));
            }
            for (p_2160->g_101 = 0; (p_2160->g_101 <= 8); p_2160->g_101 += 1)
            { /* block id: 184 */
                int8_t *l_470[8][5][2] = {{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}},{{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235},{(void*)0,&p_2160->g_235}}};
                int16_t *l_473 = &p_2160->g_458[0][0][5];
                int16_t *l_474[7][4] = {{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475},{&p_2160->g_475,&p_2160->g_475,&p_2160->g_475,&p_2160->g_475}};
                uint64_t l_502 = 0UL;
                uint16_t **l_518 = (void*)0;
                int32_t l_533 = 0L;
                int32_t l_534 = 2L;
                int32_t l_536 = (-3L);
                int32_t l_538[2];
                uint32_t ***l_566[3][7][8] = {{{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]}},{{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]}},{{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]},{&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],&p_2160->g_156[0],(void*)0,(void*)0,&p_2160->g_156[0]}}};
                uint32_t ****l_565 = &l_566[1][3][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_538[i] = 0x0AAF305EL;
                (1 + 1);
            }
            for (l_528 = 0; (l_528 < 17); l_528 = safe_add_func_uint8_t_u_u(l_528, 5))
            { /* block id: 232 */
                int32_t *l_581 = (void*)0;
                int32_t *l_582 = &l_529;
                int32_t *l_583 = (void*)0;
                int32_t *l_584 = &l_385;
                int32_t *l_585 = &l_532[3][0];
                int32_t *l_586 = (void*)0;
                int32_t *l_587 = &l_382;
                int32_t *l_588 = &l_537[0];
                int32_t *l_589 = (void*)0;
                int32_t *l_590[6] = {&l_535,&l_535,&l_535,&l_535,&l_535,&l_535};
                int32_t l_591[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_591[i] = (-1L);
                ++l_595;
            }
        }
        (*l_598) = &l_372;
        p_2160->g_600 = (void*)0;
    }
    for (l_476 = 0; (l_476 <= 8); l_476 += 1)
    { /* block id: 241 */
        int32_t *l_603 = (void*)0;
        int32_t *l_604 = (void*)0;
        int32_t *l_605[4];
        int8_t l_624 = 0x3FL;
        int i;
        for (i = 0; i < 4; i++)
            l_605[i] = &l_373;
        for (p_2160->g_380 = 0; (p_2160->g_380 <= 1); p_2160->g_380 += 1)
        { /* block id: 244 */
            int i;
            return l_508[(p_2160->g_380 + 3)];
        }
        p_2160->g_432 |= ((p_40 = (safe_unary_minus_func_int16_t_s((l_542 && p_38)))) ^ 0xC327L);
        p_2160->g_105[5] = 0x1AE5C585L;
        for (l_592 = 0; (l_592 <= 8); l_592 += 1)
        { /* block id: 252 */
            uint64_t ***l_612 = (void*)0;
            uint16_t *l_623 = &p_2160->g_67;
            uint16_t **l_622 = &l_623;
            int64_t l_625 = (-1L);
            int32_t l_626[2];
            int i;
            for (i = 0; i < 2; i++)
                l_626[i] = 0L;
            for (p_38 = 3; (p_38 >= 0); p_38 -= 1)
            { /* block id: 255 */
                int16_t *l_617 = &p_2160->g_458[1][1][4];
                int32_t **l_627 = &l_605[3];
                int i;
                l_626[1] |= (l_625 = (safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0x5E5F0D637EEF8580L, (safe_add_func_uint16_t_u_u(((p_2160->g_102[p_38] , ((l_612 != l_612) >= ((safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((((l_508[l_476] = (p_2160->g_102[p_38] > 0x36705466L)) == p_2160->g_102[p_38]) , l_617) != ((safe_sub_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((p_2160->g_3 & 0UL) || p_40), p_38)) , (void*)0) == l_622), 0xD78C5D1CE8DF31F3L)) , l_623)), 65534UL)) , p_38) == 0x7965L), p_2160->g_102[p_38])) > p_2160->g_3))) && l_624), 0x0712L)))), p_2160->g_432)));
                (*l_627) = &l_526;
            }
        }
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_3 p_2160->g_101 p_2160->g_83 p_2160->g_105 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_154 p_2160->g_102 p_2160->g_180 p_2160->g_155 p_2160->g_156 p_2160->g_201 p_2160->g_181 p_2160->g_235 p_2160->g_215 p_2160->g_250 p_2160->g_274 p_2160->g_310 p_2160->g_328
 * writes: p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_101 p_2160->g_102 p_2160->g_105 p_2160->g_83 p_2160->g_201 p_2160->g_215 p_2160->g_181 p_2160->g_235 p_2160->g_250 p_2160->g_257 p_2160->g_274 p_2160->g_310 p_2160->g_327 p_2160->g_328
 */
int8_t  func_43(int32_t * p_44, int32_t * p_45, int32_t * p_46, struct S0 * p_2160)
{ /* block id: 7 */
    int32_t *l_58 = &p_2160->g_59;
    int32_t l_242 = 0x451EC3E9L;
    uint64_t *l_249[2][10];
    int32_t l_251 = 0x14BD8925L;
    int32_t l_252 = 0x51E0E9ADL;
    int32_t l_253 = 0x062E0C10L;
    uint16_t *l_256 = &p_2160->g_257[6];
    uint32_t l_347 = 4294967295UL;
    int16_t *l_358 = &p_2160->g_274[0][3][3];
    int32_t *l_359 = &p_2160->g_105[5];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
            l_249[i][j] = &p_2160->g_250;
    }
    (*p_2160->g_180) = ((((((*l_256) = (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((p_44 == (void*)0) , func_52(func_56(((*l_58) = (0L == (!255UL))), p_2160), (+((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(l_242, (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_242, (((safe_sub_func_uint64_t_u_u((p_2160->g_250--), (((*l_256) = l_242) != (((l_253 > l_242) == l_253) , (-1L))))) , p_2160->g_250) & p_2160->g_3))), 0x161DL)))) || l_252), 0x6D558A1BL)) & p_2160->g_3)), &l_253, p_2160)) , l_251) != l_242) | 0xFDL), 0)), l_347))) && l_242) ^ p_2160->g_3) != l_347) , (void*)0);
    (*l_359) |= ((++(***p_2160->g_155)) < (l_251 , (((safe_mul_func_uint16_t_u_u(((p_2160->g_67 & ((l_242 = p_2160->g_79) & ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(l_251, 1)) >= (l_253 = ((void*)0 == &p_2160->g_327))), (l_347 ^ (*p_44)))) > ((((*l_358) = l_251) != p_2160->g_3) && l_347)), 0x18L)) >= (-1L)))) >= 18446744073709551607UL), l_347)) || 0x61L) != p_2160->g_92)));
    return p_2160->g_235;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_88 p_2160->g_105 p_2160->g_92 p_2160->g_94 p_2160->g_180 p_2160->g_83 p_2160->g_215 p_2160->g_67 p_2160->g_274 p_2160->g_310 p_2160->g_101 p_2160->g_235 p_2160->g_102 p_2160->g_328
 * writes: p_2160->g_94 p_2160->g_181 p_2160->g_92 p_2160->g_274 p_2160->g_310 p_2160->g_105 p_2160->g_235 p_2160->g_327 p_2160->g_257 p_2160->g_328 p_2160->g_88
 */
int8_t  func_52(int32_t * p_53, int32_t  p_54, int32_t * p_55, struct S0 * p_2160)
{ /* block id: 97 */
    int8_t l_272 = (-10L);
    int16_t *l_273 = &p_2160->g_274[0][3][3];
    int64_t *l_275 = &p_2160->g_94;
    uint32_t l_276 = 6UL;
    int32_t *l_277 = &p_2160->g_105[5];
    int32_t *l_278 = &p_2160->g_105[5];
    int32_t *l_279 = &p_2160->g_105[5];
    int32_t *l_280 = (void*)0;
    int32_t l_281 = 0x448F8A4CL;
    int32_t l_282[4][10];
    int32_t *l_283 = &p_2160->g_105[5];
    int32_t *l_284 = &l_281;
    int32_t *l_285 = &l_282[3][6];
    int32_t *l_286 = (void*)0;
    int32_t *l_287[3];
    int32_t l_288 = 7L;
    int32_t l_289[3];
    int16_t l_290 = 0x3CCBL;
    int64_t l_291 = 1L;
    uint16_t l_292 = 65526UL;
    uint16_t l_319[9][10][2] = {{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}},{{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL},{5UL,0x760DL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
            l_282[i][j] = (-8L);
    }
    for (i = 0; i < 3; i++)
        l_287[i] = &l_282[1][2];
    for (i = 0; i < 3; i++)
        l_289[i] = 2L;
    (*p_55) ^= (((*l_275) &= (p_54 || (safe_sub_func_uint16_t_u_u((p_2160->g_88 && p_2160->g_105[5]), ((!(safe_mod_func_int8_t_s_s(p_2160->g_92, (safe_sub_func_int8_t_s_s(p_54, (safe_sub_func_int8_t_s_s((((((*p_53) && (safe_rshift_func_uint8_t_u_s(((((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(l_272, (+p_54))), 251UL)) && 0x8562L) <= p_54) , p_54), 5))) || 0x1B1D98B4L) , l_273) == (void*)0), 0xEEL))))))) || 0x74C5E4DCB4F3F161L))))) ^ l_276);
    (*p_2160->g_180) = (void*)0;
    --l_292;
    for (p_2160->g_92 = (-24); (p_2160->g_92 < 12); p_2160->g_92 = safe_add_func_uint32_t_u_u(p_2160->g_92, 1))
    { /* block id: 104 */
        uint64_t l_320 = 0x0562B50104BB7613L;
        int8_t *l_325 = (void*)0;
        uint8_t *l_343 = (void*)0;
        uint8_t *l_344[9];
        int i;
        for (i = 0; i < 9; i++)
            l_344[i] = &p_2160->g_88;
        for (l_272 = 19; (l_272 >= 4); l_272 = safe_sub_func_uint32_t_u_u(l_272, 2))
        { /* block id: 107 */
            uint16_t l_307 = 0UL;
            int8_t *l_329 = &l_272;
            if (p_2160->g_83)
            { /* block id: 108 */
                int32_t **l_312 = &l_284;
                if (((*p_55) = p_2160->g_215))
                { /* block id: 110 */
                    int32_t ***l_311 = &p_2160->g_310;
                    if (p_2160->g_67)
                        break;
                    p_2160->g_105[5] = (p_54 < ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_307, ((p_2160->g_274[0][3][3] = p_2160->g_274[1][1][3]) > (safe_add_func_int16_t_s_s((((((*l_311) = p_2160->g_310) == (((-1L) != p_54) , l_312)) <= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(0x76L, 5)) <= ((safe_div_func_uint32_t_u_u(((+((**l_312) = ((((((((*p_55) ^= (p_54 | l_319[4][3][0])) == 0L) <= 0x15A3L) > 1UL) || l_307) != p_2160->g_105[0]) >= 0x09L))) && (**l_312)), l_320)) , p_2160->g_101)), p_54))) & 9L), p_2160->g_101))))) , p_2160->g_235), p_54)), p_2160->g_92)) <= 0x21L));
                    return p_54;
                }
                else
                { /* block id: 118 */
                    for (p_2160->g_94 = 3; (p_2160->g_94 >= 0); p_2160->g_94 -= 1)
                    { /* block id: 121 */
                        int i, j;
                        if (l_282[p_2160->g_94][(p_2160->g_94 + 2)])
                            break;
                    }
                }
            }
            else
            { /* block id: 125 */
                int32_t **l_321 = &l_284;
                int8_t *l_324 = &p_2160->g_235;
                int8_t **l_326 = &l_325;
                uint16_t *l_330 = (void*)0;
                uint16_t *l_333 = (void*)0;
                uint16_t *l_334 = (void*)0;
                uint16_t *l_335 = &l_319[4][3][0];
                int8_t *l_338 = (void*)0;
                int8_t *l_339 = &p_2160->g_328;
                int64_t l_342 = (-1L);
                (*l_321) = &p_54;
                (*p_55) = (p_2160->g_102[2] | ((*l_339) &= ((((safe_lshift_func_int16_t_s_u(l_307, (p_2160->g_257[8] = ((((*l_324) = (+p_2160->g_88)) == ((p_2160->g_327 = ((*l_326) = l_325)) != l_329)) , p_2160->g_235)))) , 0x73L) && ((safe_rshift_func_uint16_t_u_u((--(*l_335)), 12)) , ((((l_307 , (p_54 , (-3L))) > (**l_321)) ^ l_307) , 0x54L))) <= 0x3A691C5FL)));
                for (p_54 = (-17); (p_54 != (-18)); p_54 = safe_sub_func_uint8_t_u_u(p_54, 1))
                { /* block id: 136 */
                    (*p_55) = l_342;
                }
            }
            return l_307;
        }
        (*p_55) &= ((--p_2160->g_88) != p_2160->g_102[2]);
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_3 p_2160->g_101 p_2160->g_83 p_2160->g_105 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_154 p_2160->g_102 p_2160->g_180 p_2160->g_155 p_2160->g_156 p_2160->g_201 p_2160->g_181 p_2160->g_235 p_2160->g_215
 * writes: p_2160->g_59 p_2160->g_67 p_2160->g_79 p_2160->g_88 p_2160->g_92 p_2160->g_94 p_2160->g_99 p_2160->g_101 p_2160->g_102 p_2160->g_105 p_2160->g_83 p_2160->g_201 p_2160->g_215 p_2160->g_181 p_2160->g_235
 */
int32_t * func_56(int32_t  p_57, struct S0 * p_2160)
{ /* block id: 9 */
    int16_t l_112[2][6] = {{7L,0x798EL,7L,7L,0x798EL,7L},{7L,0x798EL,7L,7L,0x798EL,7L}};
    int32_t l_115 = 0L;
    int32_t l_116 = 1L;
    int16_t l_136 = 0x33B9L;
    uint64_t *l_163 = &p_2160->g_102[3];
    uint64_t *l_164 = &p_2160->g_101;
    uint32_t **l_179[3];
    int32_t l_187 = 0x1FBB944CL;
    int16_t *l_194[8] = {&l_112[0][5],&l_112[0][5],&l_112[0][5],&l_112[0][5],&l_112[0][5],&l_112[0][5],&l_112[0][5],&l_112[0][5]};
    uint8_t *l_202 = &p_2160->g_88;
    uint64_t l_219 = 18446744073709551613UL;
    int8_t *l_234 = &p_2160->g_235;
    int64_t *l_236 = &p_2160->g_92;
    int32_t *l_237 = &l_187;
    int i, j;
    for (i = 0; i < 3; i++)
        l_179[i] = &p_2160->g_99;
    for (p_2160->g_59 = 0; (p_2160->g_59 < (-15)); p_2160->g_59--)
    { /* block id: 12 */
        uint32_t l_84 = 0x9AA6B35EL;
        uint32_t *l_95 = &p_2160->g_83;
        int32_t *l_120 = &p_2160->g_105[5];
        uint16_t *l_183[5][3] = {{&p_2160->g_67,&p_2160->g_67,&p_2160->g_67},{&p_2160->g_67,&p_2160->g_67,&p_2160->g_67},{&p_2160->g_67,&p_2160->g_67,&p_2160->g_67},{&p_2160->g_67,&p_2160->g_67,&p_2160->g_67},{&p_2160->g_67,&p_2160->g_67,&p_2160->g_67}};
        uint16_t l_184 = 65532UL;
        int16_t *l_185 = &l_112[1][5];
        int32_t l_186 = 0x11B318C5L;
        uint32_t l_195 = 4UL;
        int i, j;
        for (p_57 = (-3); (p_57 >= (-7)); p_57--)
        { /* block id: 15 */
            uint16_t *l_66[1];
            uint32_t *l_78 = &p_2160->g_79;
            uint32_t *l_82[4][3][9] = {{{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0}},{{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0}},{{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0}},{{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0},{&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0,&p_2160->g_83,&p_2160->g_83,(void*)0,&p_2160->g_83,(void*)0}}};
            uint8_t *l_87 = &p_2160->g_88;
            int64_t *l_91 = &p_2160->g_92;
            int64_t *l_93 = &p_2160->g_94;
            uint32_t **l_96 = &l_82[1][2][6];
            uint32_t *l_98 = &p_2160->g_83;
            uint32_t **l_97[7] = {&l_78,(void*)0,&l_78,&l_78,(void*)0,&l_78,&l_78};
            uint64_t *l_100[7];
            int32_t l_103 = 1L;
            int32_t *l_104 = &p_2160->g_105[5];
            int32_t *l_106 = &l_103;
            uint32_t ***l_107 = &l_97[0];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_66[i] = &p_2160->g_67;
            for (i = 0; i < 7; i++)
                l_100[i] = &p_2160->g_101;
            (*l_106) = ((*l_104) ^= ((safe_add_func_uint8_t_u_u((((p_2160->g_67--) & (((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*l_78)++), (l_84--))), p_57)) & (--(*l_87))), (p_2160->g_59 ^ (~((((*l_93) = ((*l_91) = p_57)) >= (-1L)) >= ((p_2160->g_102[2] = (((((((*l_96) = l_95) == (p_2160->g_3 , (p_2160->g_99 = l_95))) , ((p_2160->g_101 &= ((void*)0 != l_95)) & p_57)) < p_2160->g_3) , 4294967290UL) && p_57)) & p_2160->g_83)))))) == 0UL) <= l_103)) == p_2160->g_83), p_2160->g_3)) != p_57));
            (*l_107) = &p_2160->g_99;
            (*l_106) = p_2160->g_92;
            for (l_103 = 0; (l_103 <= 6); l_103 += 1)
            { /* block id: 32 */
                uint16_t l_117 = 0xD1B7L;
                for (p_2160->g_94 = 2; (p_2160->g_94 <= 6); p_2160->g_94 += 1)
                { /* block id: 35 */
                    int64_t l_114 = 0x4323298C059577EEL;
                    uint8_t *l_134[4][10] = {{&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88},{&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88},{&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88},{&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,(void*)0,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88,&p_2160->g_88}};
                    uint8_t **l_135 = &l_87;
                    int i, j;
                    for (p_2160->g_101 = 0; (p_2160->g_101 <= 6); p_2160->g_101 += 1)
                    { /* block id: 38 */
                        int32_t *l_108 = &p_2160->g_105[l_103];
                        int32_t *l_109 = &p_2160->g_105[2];
                        int32_t *l_110 = (void*)0;
                        int32_t *l_111 = &p_2160->g_105[1];
                        int32_t *l_113[8][2][9] = {{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}},{{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103},{&l_103,&p_2160->g_3,(void*)0,(void*)0,(void*)0,&p_2160->g_3,&l_103,&p_2160->g_3,&l_103}}};
                        int32_t **l_121 = &l_111;
                        int i, j, k;
                        ++l_117;
                        l_120 = &p_2160->g_105[p_2160->g_94];
                        p_2160->g_105[5] = 0x1C73263BL;
                        (*l_121) = &p_2160->g_105[5];
                    }
                    p_2160->g_105[l_103] = (safe_sub_func_uint64_t_u_u(((+((*l_98) = (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((((void*)0 != &p_2160->g_88) && (safe_rshift_func_uint8_t_u_s(p_2160->g_105[p_2160->g_94], (((-1L) == p_57) && ((safe_lshift_func_int8_t_s_s((((((l_117 || ((l_134[3][0] == ((*l_135) = &p_2160->g_88)) > ((*l_91) = ((p_57 != p_57) != l_117)))) == l_136) > p_57) > 0x10L) >= (*l_120)), p_2160->g_101)) == (*p_2160->g_99)))))), p_2160->g_94)) || (*l_120)), 9)), l_136)) >= p_57) < 0x5E0419DFL))) && l_114), p_57));
                }
            }
        }
        for (p_2160->g_92 = 1; (p_2160->g_92 != (-20)); p_2160->g_92 = safe_sub_func_uint32_t_u_u(p_2160->g_92, 6))
        { /* block id: 53 */
            uint32_t **l_144 = &p_2160->g_99;
            uint32_t ***l_143[4];
            uint32_t ****l_145 = &l_143[0];
            int32_t l_157[6][8] = {{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L},{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L},{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L},{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L},{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L},{(-4L),0x55863721L,0x360DBC48L,0x55863721L,(-4L),(-4L),0x55863721L,0x360DBC48L}};
            int32_t *l_158 = &l_116;
            int i, j;
            for (i = 0; i < 4; i++)
                l_143[i] = &l_144;
            (*l_158) &= (((*l_120) ^= ((0x42217A83L != ((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((*l_145) = l_143[0]) != (void*)0), (((((void*)0 == &p_2160->g_92) ^ (safe_lshift_func_uint16_t_u_s(0x0542L, (safe_sub_func_uint32_t_u_u(0x91154651L, (((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((p_2160->g_88 < ((p_2160->g_154 == &p_2160->g_155) == p_2160->g_92)), 4L)) <= l_157[2][2]), l_112[0][0])) , 255UL) <= p_57)))))) == 4294967289UL) ^ p_57))), 65532UL)) && p_2160->g_67)) == l_157[2][2])) || p_2160->g_102[2]);
        }
        l_187 |= (safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((((*l_185) = (((l_163 != l_164) && (-8L)) <= (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((*l_120) = (((((((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((0x5FL ^ ((p_2160->g_83 && p_57) != (l_116 = ((safe_sub_func_uint8_t_u_u(p_2160->g_59, (safe_div_func_uint32_t_u_u((l_115 | p_2160->g_105[5]), p_57)))) == 0UL)))), 65535UL)), 2)) , l_179[1]) != l_179[1]) | (-2L)), p_2160->g_83)) , (void*)0) == p_2160->g_180) ^ 0x941DL) >= (*l_120)) && p_2160->g_79) ^ p_57)), l_184)) , p_2160->g_92), p_2160->g_88)))) < p_57), 1UL)) != l_115), l_186));
        for (p_2160->g_67 = 0; (p_2160->g_67 <= 1); p_2160->g_67 += 1)
        { /* block id: 64 */
            uint32_t *l_188 = &l_84;
            int16_t **l_193[2][2][2];
            int32_t *l_200[6][7][3] = {{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}},{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}},{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}},{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}},{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}},{{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116},{&p_2160->g_3,&l_187,&l_116}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_193[i][j][k] = &l_185;
                }
            }
            p_2160->g_201 ^= ((((p_2160->g_105[p_2160->g_67] < p_2160->g_105[(p_2160->g_67 + 2)]) <= (((***p_2160->g_154) = (**p_2160->g_155)) == (l_95 = l_188))) , ((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_183[(p_2160->g_67 + 3)][p_2160->g_67] != (l_194[1] = &l_136)) > (l_195 , (safe_lshift_func_uint16_t_u_u(p_2160->g_105[(p_2160->g_67 + 2)], ((safe_lshift_func_uint16_t_u_u((p_57 , p_2160->g_101), 6)) , p_2160->g_101))))), p_2160->g_79)), 0L)) & p_57)) ^ p_2160->g_94);
            if (p_2160->g_102[1])
                continue;
            for (l_184 = 0; (l_184 <= 1); l_184 += 1)
            { /* block id: 72 */
                uint8_t **l_203 = (void*)0;
                uint8_t **l_204 = &l_202;
                uint8_t *l_205 = &p_2160->g_88;
                int16_t *l_210 = &l_136;
                uint64_t *l_213 = (void*)0;
                uint64_t *l_214 = &p_2160->g_215;
                l_115 |= (((*l_205) = ((((*l_204) = l_202) != (void*)0) & ((*p_2160->g_154) != &l_179[1]))) , (p_2160->g_79 , (safe_sub_func_int16_t_s_s(((p_2160->g_101 , (safe_mul_func_uint16_t_u_u(l_116, (((l_210 == (((*l_214) = (((((safe_rshift_func_int8_t_s_s((p_2160->g_83 || p_2160->g_105[1]), (*l_120))) , 0x005F4BB7FEAD5EC5L) > p_57) | (*l_120)) || p_57)) , l_210)) <= 1L) & p_57)))) <= 0UL), 0x7B34L))));
                (*p_2160->g_180) = (*p_2160->g_180);
            }
            for (l_84 = 0; (l_84 <= 2); l_84 += 1)
            { /* block id: 81 */
                uint32_t l_216[10];
                int32_t l_217 = (-1L);
                int i;
                for (i = 0; i < 10; i++)
                    l_216[i] = 8UL;
                l_217 &= ((*l_120) = (0x46FE84D5964E550AL || l_216[0]));
            }
        }
    }
    if (p_2160->g_3)
        goto lbl_218;
lbl_218:
    p_2160->g_105[2] = p_2160->g_101;
    l_237 = ((((((***p_2160->g_155) &= l_219) || ((****p_2160->g_154) = (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((((((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(p_57, p_57)) , (((*l_236) = ((p_2160->g_102[2] <= ((safe_div_func_uint32_t_u_u((18446744073709551615UL & 0UL), l_219)) ^ (safe_mod_func_uint64_t_u_u((l_219 >= (safe_rshift_func_int8_t_s_s(((*l_234) |= p_57), 6))), (-6L))))) > l_136)) & p_2160->g_215)), p_2160->g_67)) | (****p_2160->g_154)) , p_2160->g_235) || l_136) , p_57), l_136)) && 1UL) || 0x580EL), p_2160->g_102[2])))) , 0x7A57L) & l_219) , &l_187);
    return &p_2160->g_105[0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2161;
    struct S0* p_2160 = &c_2161;
    struct S0 c_2162 = {
        0x38ECF54CL, // p_2160->g_3
        1L, // p_2160->g_6
        0x981FF29AL, // p_2160->g_7
        (-9L), // p_2160->g_26
        1L, // p_2160->g_59
        0UL, // p_2160->g_67
        0xABF77135L, // p_2160->g_79
        0x9B053640L, // p_2160->g_83
        0x8EL, // p_2160->g_88
        1L, // p_2160->g_92
        0L, // p_2160->g_94
        &p_2160->g_83, // p_2160->g_99
        0xA9B16E5D1C1BBB80L, // p_2160->g_101
        {0UL,0UL,0UL,0UL}, // p_2160->g_102
        {0x42FE0EC9L,0x42FE0EC9L,0x42FE0EC9L,0x42FE0EC9L,0x42FE0EC9L,0x42FE0EC9L,0x42FE0EC9L}, // p_2160->g_105
        {&p_2160->g_99,&p_2160->g_99}, // p_2160->g_156
        &p_2160->g_156[0], // p_2160->g_155
        &p_2160->g_155, // p_2160->g_154
        0x6602B377L, // p_2160->g_182
        &p_2160->g_182, // p_2160->g_181
        &p_2160->g_181, // p_2160->g_180
        0x6CBFF400L, // p_2160->g_201
        3UL, // p_2160->g_215
        0x3FL, // p_2160->g_235
        18446744073709551615UL, // p_2160->g_250
        {0x5B97L,0x5B97L,0x5B97L,0x5B97L,0x5B97L,0x5B97L,0x5B97L,0x5B97L,0x5B97L}, // p_2160->g_257
        {{{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)}},{{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)}}}, // p_2160->g_274
        (void*)0, // p_2160->g_310
        1L, // p_2160->g_328
        &p_2160->g_328, // p_2160->g_327
        (void*)0, // p_2160->g_371
        {{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}},{{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371},{&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,(void*)0,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371,&p_2160->g_371}}}, // p_2160->g_370
        9UL, // p_2160->g_380
        18446744073709551613UL, // p_2160->g_410
        0x141B8CBEL, // p_2160->g_432
        {{{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L}},{{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L}},{{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L}},{{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L}},{{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L},{3L,0x6CA2L,0x26D1L,(-1L),0x3382L,0L}}}, // p_2160->g_458
        (-7L), // p_2160->g_475
        9UL, // p_2160->g_562
        0x326FD2F0L, // p_2160->g_570
        0x40F22350L, // p_2160->g_571
        7L, // p_2160->g_572
        {8L,8L,8L,8L,8L,8L}, // p_2160->g_601
        &p_2160->g_601[0], // p_2160->g_600
        (void*)0, // p_2160->g_643
        &p_2160->g_410, // p_2160->g_666
        &p_2160->g_666, // p_2160->g_665
        &p_2160->g_250, // p_2160->g_668
        &p_2160->g_668, // p_2160->g_667
        &p_2160->g_668, // p_2160->g_669
        {&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665,&p_2160->g_665}, // p_2160->g_664
        &p_2160->g_201, // p_2160->g_685
        0x020BB7C7L, // p_2160->g_725
        &p_2160->g_725, // p_2160->g_767
        0x68L, // p_2160->g_878
        {{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL},{0x9461L,0x9461L,2UL,0xF011L,65535UL}}, // p_2160->g_1045
        0x03L, // p_2160->g_1084
        &p_2160->g_1084, // p_2160->g_1083
        {{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L},{(-1L),0x59L,0x18L,1L,0L,(-1L),1L,0L,1L}}, // p_2160->g_1086
        4L, // p_2160->g_1087
        (-1L), // p_2160->g_1088
        0L, // p_2160->g_1089
        0x13L, // p_2160->g_1090
        1L, // p_2160->g_1091
        {{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]},{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]},{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]},{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]},{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]},{&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6],&p_2160->g_1086[5][6],&p_2160->g_1089,&p_2160->g_1089,&p_2160->g_1086[5][6]}}, // p_2160->g_1085
        {&p_2160->g_1083,&p_2160->g_1083,&p_2160->g_1083,&p_2160->g_1083,&p_2160->g_1083}, // p_2160->g_1082
        {&p_2160->g_1082[4],&p_2160->g_1082[4],&p_2160->g_1082[4],&p_2160->g_1082[4],&p_2160->g_1082[4],&p_2160->g_1082[4]}, // p_2160->g_1081
        5L, // p_2160->g_1109
        (-3L), // p_2160->g_1111
        &p_2160->g_156[0], // p_2160->g_1119
        &p_2160->g_1119, // p_2160->g_1118
        {0x95F2L,0x95F2L,0x95F2L}, // p_2160->g_1133
        0xB7L, // p_2160->g_1243
        &p_2160->g_1118, // p_2160->g_1244
        0xDEBA8029L, // p_2160->g_1271
        (void*)0, // p_2160->g_1285
        (-1L), // p_2160->g_1287
        (void*)0, // p_2160->g_1290
        0x3840CEA3L, // p_2160->g_1416
        {{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327},{&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327,&p_2160->g_327}}, // p_2160->g_1516
        &p_2160->g_1516[0][7], // p_2160->g_1515
        {&p_2160->g_215,&p_2160->g_215}, // p_2160->g_1535
        &p_2160->g_1535[0], // p_2160->g_1534
        8UL, // p_2160->g_1678
        &p_2160->g_1678, // p_2160->g_1677
        {&p_2160->g_1677}, // p_2160->g_1676
        0x6F82L, // p_2160->g_1697
        1L, // p_2160->g_1729
        0x0D7752BC38BF5F76L, // p_2160->g_1816
        &p_2160->g_274[1][4][1], // p_2160->g_1847
        &p_2160->g_1847, // p_2160->g_1846
        &p_2160->g_1847, // p_2160->g_1848
        {&p_2160->g_1847,&p_2160->g_1847,&p_2160->g_1847,&p_2160->g_1847,&p_2160->g_1847,&p_2160->g_1847,&p_2160->g_1847}, // p_2160->g_1849
        (void*)0, // p_2160->g_1850
        &p_2160->g_1847, // p_2160->g_1851
        {{&p_2160->g_1851,(void*)0,&p_2160->g_1851,&p_2160->g_1851,(void*)0,&p_2160->g_1851},{&p_2160->g_1851,(void*)0,&p_2160->g_1851,&p_2160->g_1851,(void*)0,&p_2160->g_1851},{&p_2160->g_1851,(void*)0,&p_2160->g_1851,&p_2160->g_1851,(void*)0,&p_2160->g_1851},{&p_2160->g_1851,(void*)0,&p_2160->g_1851,&p_2160->g_1851,(void*)0,&p_2160->g_1851}}, // p_2160->g_1845
        {&p_2160->g_1845[3][4],&p_2160->g_1845[3][4],&p_2160->g_1845[3][4],&p_2160->g_1845[3][4],&p_2160->g_1845[3][4],&p_2160->g_1845[3][4],&p_2160->g_1845[3][4]}, // p_2160->g_1844
        &p_2160->g_685, // p_2160->g_1945
        {{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}},{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}},{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}},{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}},{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}},{{(void*)0,(void*)0,&p_2160->g_1945,(void*)0,(void*)0,(void*)0,(void*)0,&p_2160->g_1945,(void*)0}}}, // p_2160->g_1944
        &p_2160->g_1944[5][0][7], // p_2160->g_1943
        &p_2160->g_215, // p_2160->g_2001
        &p_2160->g_2001, // p_2160->g_2000
        {{{&p_2160->g_668},{&p_2160->g_668},{&p_2160->g_668},{&p_2160->g_668}},{{&p_2160->g_668},{&p_2160->g_668},{&p_2160->g_668},{&p_2160->g_668}}}, // p_2160->g_2023
        &p_2160->g_2023[0][2][0], // p_2160->g_2022
        &p_2160->g_380, // p_2160->g_2142
        0x61EB32BFE363783EL, // p_2160->g_2159
    };
    c_2161 = c_2162;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2160);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2160->g_3, "p_2160->g_3", print_hash_value);
    transparent_crc(p_2160->g_6, "p_2160->g_6", print_hash_value);
    transparent_crc(p_2160->g_7, "p_2160->g_7", print_hash_value);
    transparent_crc(p_2160->g_26, "p_2160->g_26", print_hash_value);
    transparent_crc(p_2160->g_59, "p_2160->g_59", print_hash_value);
    transparent_crc(p_2160->g_67, "p_2160->g_67", print_hash_value);
    transparent_crc(p_2160->g_79, "p_2160->g_79", print_hash_value);
    transparent_crc(p_2160->g_83, "p_2160->g_83", print_hash_value);
    transparent_crc(p_2160->g_88, "p_2160->g_88", print_hash_value);
    transparent_crc(p_2160->g_92, "p_2160->g_92", print_hash_value);
    transparent_crc(p_2160->g_94, "p_2160->g_94", print_hash_value);
    transparent_crc(p_2160->g_101, "p_2160->g_101", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2160->g_102[i], "p_2160->g_102[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2160->g_105[i], "p_2160->g_105[i]", print_hash_value);

    }
    transparent_crc(p_2160->g_182, "p_2160->g_182", print_hash_value);
    transparent_crc(p_2160->g_201, "p_2160->g_201", print_hash_value);
    transparent_crc(p_2160->g_215, "p_2160->g_215", print_hash_value);
    transparent_crc(p_2160->g_235, "p_2160->g_235", print_hash_value);
    transparent_crc(p_2160->g_250, "p_2160->g_250", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2160->g_257[i], "p_2160->g_257[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2160->g_274[i][j][k], "p_2160->g_274[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2160->g_328, "p_2160->g_328", print_hash_value);
    transparent_crc(p_2160->g_380, "p_2160->g_380", print_hash_value);
    transparent_crc(p_2160->g_410, "p_2160->g_410", print_hash_value);
    transparent_crc(p_2160->g_432, "p_2160->g_432", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2160->g_458[i][j][k], "p_2160->g_458[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2160->g_475, "p_2160->g_475", print_hash_value);
    transparent_crc(p_2160->g_562, "p_2160->g_562", print_hash_value);
    transparent_crc(p_2160->g_570, "p_2160->g_570", print_hash_value);
    transparent_crc(p_2160->g_571, "p_2160->g_571", print_hash_value);
    transparent_crc(p_2160->g_572, "p_2160->g_572", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2160->g_601[i], "p_2160->g_601[i]", print_hash_value);

    }
    transparent_crc(p_2160->g_725, "p_2160->g_725", print_hash_value);
    transparent_crc(p_2160->g_878, "p_2160->g_878", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_2160->g_1045[i][j], "p_2160->g_1045[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2160->g_1084, "p_2160->g_1084", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2160->g_1086[i][j], "p_2160->g_1086[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2160->g_1087, "p_2160->g_1087", print_hash_value);
    transparent_crc(p_2160->g_1088, "p_2160->g_1088", print_hash_value);
    transparent_crc(p_2160->g_1089, "p_2160->g_1089", print_hash_value);
    transparent_crc(p_2160->g_1090, "p_2160->g_1090", print_hash_value);
    transparent_crc(p_2160->g_1091, "p_2160->g_1091", print_hash_value);
    transparent_crc(p_2160->g_1109, "p_2160->g_1109", print_hash_value);
    transparent_crc(p_2160->g_1111, "p_2160->g_1111", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2160->g_1133[i], "p_2160->g_1133[i]", print_hash_value);

    }
    transparent_crc(p_2160->g_1243, "p_2160->g_1243", print_hash_value);
    transparent_crc(p_2160->g_1271, "p_2160->g_1271", print_hash_value);
    transparent_crc(p_2160->g_1287, "p_2160->g_1287", print_hash_value);
    transparent_crc(p_2160->g_1416, "p_2160->g_1416", print_hash_value);
    transparent_crc(p_2160->g_1678, "p_2160->g_1678", print_hash_value);
    transparent_crc(p_2160->g_1697, "p_2160->g_1697", print_hash_value);
    transparent_crc(p_2160->g_1729, "p_2160->g_1729", print_hash_value);
    transparent_crc(p_2160->g_1816, "p_2160->g_1816", print_hash_value);
    transparent_crc(p_2160->g_2159, "p_2160->g_2159", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
