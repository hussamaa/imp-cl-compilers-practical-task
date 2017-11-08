// -g 51,69,1 -l 51,1,1
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


// Seed: 1892261296

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_3[6][9];
    int32_t g_4;
    volatile int32_t g_5;
    volatile int32_t g_6[4];
    int32_t g_7;
    uint16_t g_8;
    int32_t g_9;
    int32_t g_32;
    uint8_t g_41[8];
    uint16_t g_47;
    uint32_t g_51;
    uint8_t g_67;
    int32_t g_72[7];
    uint64_t g_74[1][6];
    volatile uint64_t g_78;
    volatile uint64_t *g_77;
    uint64_t g_89;
    uint32_t g_91[8][7][4];
    int8_t g_94;
    int32_t g_96;
    int32_t *g_99;
    int16_t g_125[10];
    uint64_t g_150;
    uint16_t *g_198;
    uint16_t **g_197;
    int64_t g_228;
    int32_t g_234[1];
    int64_t *g_298;
    int32_t *g_301;
    int32_t * volatile *g_300;
    int16_t g_326;
    uint16_t g_368;
    int16_t g_370;
    int32_t g_380;
    uint8_t g_384;
    uint16_t g_388[8][3][8];
    int32_t g_389;
    int16_t g_399;
    int64_t g_407;
    int32_t ***g_445;
    uint32_t g_446;
    int8_t g_516[10][4][3];
    uint64_t g_562[3];
    uint32_t g_657;
    int64_t g_660;
    uint16_t g_661;
    int64_t g_663;
    int32_t g_719;
    int8_t g_926;
    volatile int16_t g_944;
    volatile int16_t g_945;
    volatile int16_t g_946;
    volatile int16_t g_947;
    volatile int16_t g_948;
    volatile int16_t g_949;
    volatile int16_t g_950[8];
    volatile int16_t g_951;
    volatile int16_t g_952;
    volatile int16_t g_953;
    volatile int16_t g_954;
    volatile int16_t g_955;
    volatile int16_t g_956;
    volatile int16_t g_957;
    volatile int16_t g_958;
    volatile int16_t g_959[8][4][3];
    volatile int16_t g_960;
    volatile int16_t g_961;
    volatile int16_t g_962[9];
    volatile int16_t *g_943[5][5][3];
    volatile int16_t **g_942;
    int32_t ** volatile g_1094;
    volatile int32_t *g_1145;
    int32_t ** volatile g_1148;
    uint16_t *g_1155[1][4][10];
    volatile int8_t g_1176;
    int8_t *g_1253;
    int8_t **g_1252[6][1][9];
    int8_t **g_1254;
    int32_t **g_1306;
    int32_t *** volatile g_1305;
    uint64_t g_1314;
    volatile uint32_t g_1391;
    volatile uint32_t *g_1390[5][9];
    volatile uint32_t ** volatile g_1389;
    uint16_t g_1409[9][2];
    uint32_t * volatile * volatile g_1491[4];
    int16_t *g_1524;
    int16_t **g_1523;
    volatile uint32_t g_1587[10][4];
    volatile uint64_t g_1613[9][1][2];
    int8_t g_1687;
    volatile uint8_t * volatile * volatile g_1690;
    volatile uint8_t * volatile * volatile * volatile g_1689[3];
    uint32_t g_1703;
    uint16_t g_1835;
    uint32_t g_1882;
    volatile uint32_t g_1956;
    int64_t g_1979;
    volatile uint64_t g_1985;
    int64_t *g_2000;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2053);
int32_t * func_10(int32_t * p_11, int32_t * p_12, struct S0 * p_2053);
int32_t * func_13(int32_t * p_14, int8_t  p_15, int32_t * p_16, int32_t * p_17, struct S0 * p_2053);
int32_t * func_18(uint16_t  p_19, uint16_t  p_20, int32_t * p_21, struct S0 * p_2053);
uint32_t  func_33(int32_t * p_34, int32_t  p_35, int64_t  p_36, struct S0 * p_2053);
int32_t * func_37(int32_t * p_38, struct S0 * p_2053);
uint32_t  func_48(uint64_t  p_49, struct S0 * p_2053);
uint64_t  func_52(int32_t * p_53, int32_t  p_54, struct S0 * p_2053);
int32_t * func_55(int16_t  p_56, struct S0 * p_2053);
int32_t * func_62(uint16_t * p_63, uint8_t * p_64, struct S0 * p_2053);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2053->g_4 p_2053->g_1687 p_2053->g_1306 p_2053->g_1145 p_2053->g_3
 * writes: p_2053->g_4 p_2053->g_1687 p_2053->g_99 p_2053->g_3
 */
int32_t  func_1(struct S0 * p_2053)
{ /* block id: 4 */
    int64_t l_2[10][9][2] = {{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}}};
    uint16_t **l_1702 = &p_2053->g_1155[0][3][3];
    uint32_t l_1736 = 0UL;
    int32_t **l_1748 = &p_2053->g_301;
    int32_t l_1765 = 0x18264D92L;
    uint32_t l_1837 = 4294967295UL;
    uint32_t l_1865[9][6] = {{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL},{0x2BDFB097L,4294967295UL,1UL,0xA3332A5AL,1UL,1UL}};
    uint8_t l_1920 = 0xBBL;
    int32_t l_1980 = (-3L);
    int32_t l_1983 = 0x438B2605L;
    int32_t l_1984 = 4L;
    int64_t l_2003 = 0x41A28FC56EBA94C3L;
    int64_t l_2011[2];
    uint8_t l_2040 = 0x5FL;
    uint8_t l_2052 = 4UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2011[i] = 0x3C8F3659B2FF8A7FL;
    for (p_2053->g_4 = 1; (p_2053->g_4 >= 0); p_2053->g_4 -= 1)
    { /* block id: 7 */
        uint64_t l_822 = 18446744073709551606UL;
        uint64_t l_1062[6] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
        int32_t **l_1734 = &p_2053->g_301;
        int32_t l_1764[7] = {9L,0x00B6FB96L,9L,9L,0x00B6FB96L,9L,9L};
        uint32_t l_1770 = 0x5DE17A8FL;
        int32_t *l_1777 = &p_2053->g_9;
        uint16_t l_1791 = 65535UL;
        int16_t **l_1825 = &p_2053->g_1524;
        int8_t **l_1879[2];
        uint32_t *l_1936 = &l_1865[8][5];
        uint32_t **l_1935 = &l_1936;
        uint64_t l_1939 = 3UL;
        uint16_t *l_1968 = &p_2053->g_661;
        int64_t l_1974 = 6L;
        int8_t l_1975 = 0x74L;
        int16_t l_2015 = 0L;
        uint16_t l_2041 = 0xB13DL;
        int16_t **l_2046 = &p_2053->g_1524;
        int i;
        for (i = 0; i < 2; i++)
            l_1879[i] = (void*)0;
        (1 + 1);
    }
    for (p_2053->g_1687 = (-19); (p_2053->g_1687 == (-25)); p_2053->g_1687--)
    { /* block id: 991 */
        (*p_2053->g_1306) = (void*)0;
        (*p_2053->g_1145) &= l_2052;
    }
    return l_2040;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_1148 p_2053->g_99 p_2053->g_1306
 * writes: p_2053->g_99
 */
int32_t * func_10(int32_t * p_11, int32_t * p_12, struct S0 * p_2053)
{ /* block id: 820 */
    int32_t *l_1698 = &p_2053->g_72[3];
    (*p_2053->g_1306) = (*p_2053->g_1148);
    return l_1698;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_1145 p_2053->g_3 p_2053->g_1305 p_2053->g_1306 p_2053->g_99
 * writes: p_2053->g_3
 */
int32_t * func_13(int32_t * p_14, int8_t  p_15, int32_t * p_16, int32_t * p_17, struct S0 * p_2053)
{ /* block id: 817 */
    int8_t l_1697 = (-1L);
    (*p_2053->g_1145) |= l_1697;
    return (**p_2053->g_1305);
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_74 p_2053->g_77 p_2053->g_78 p_2053->g_91 p_2053->g_51 p_2053->g_389 p_2053->g_384 p_2053->g_959 p_2053->g_32 p_2053->g_234 p_2053->g_72 p_2053->g_41 p_2053->g_719 p_2053->g_67 p_2053->g_198 p_2053->g_8 p_2053->g_962 p_2053->g_446 p_2053->g_951 p_2053->g_1253 p_2053->g_926 p_2053->g_1176 p_2053->g_7 p_2053->g_96 p_2053->g_516 p_2053->g_660 p_2053->g_1145 p_2053->g_3 p_2053->g_1491 p_2053->g_1524 p_2053->g_1523 p_2053->g_370 p_2053->g_197 p_2053->g_954 p_2053->g_1306 p_2053->g_99 p_2053->g_657 p_2053->g_663 p_2053->g_1094 p_2053->g_1613 p_2053->g_1148 p_2053->g_399 p_2053->g_956 p_2053->g_1687 p_2053->g_1689
 * writes: p_2053->g_32 p_2053->g_99 p_2053->g_384 p_2053->g_399 p_2053->g_125 p_2053->g_407 p_2053->g_660 p_2053->g_67 p_2053->g_6 p_2053->g_1252 p_2053->g_1254 p_2053->g_388 p_2053->g_326 p_2053->g_389 p_2053->g_446 p_2053->g_1314 p_2053->g_719 p_2053->g_89 p_2053->g_926 p_2053->g_3 p_2053->g_51 p_2053->g_370 p_2053->g_234 p_2053->g_657 p_2053->g_72 p_2053->g_663 p_2053->g_1613 p_2053->g_91 p_2053->g_96
 */
int32_t * func_18(uint16_t  p_19, uint16_t  p_20, int32_t * p_21, struct S0 * p_2053)
{ /* block id: 521 */
    int32_t *l_1064 = &p_2053->g_32;
    int32_t l_1076 = 0x54F26242L;
    uint16_t ***l_1079 = &p_2053->g_197;
    uint8_t l_1096[8][5] = {{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L},{0x8BL,0x07L,255UL,246UL,0x07L}};
    uint64_t l_1107 = 0UL;
    int32_t l_1118[3][4][8] = {{{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L}},{{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L}},{{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L},{0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L,0x52E24628L}}};
    int8_t *l_1160[10] = {&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0],&p_2053->g_516[9][2][0]};
    int32_t l_1198[7] = {0x2FFE384DL,0x09952D9CL,0x2FFE384DL,0x2FFE384DL,0x09952D9CL,0x2FFE384DL,0x2FFE384DL};
    int32_t l_1205 = 0x2A05C078L;
    uint8_t l_1218 = 0x6AL;
    int16_t *l_1225 = &p_2053->g_399;
    int16_t *l_1238 = &p_2053->g_125[7];
    uint8_t l_1239 = 0x9EL;
    uint8_t l_1240 = 0x7FL;
    uint8_t *l_1241 = &l_1096[5][4];
    int64_t *l_1242 = &p_2053->g_407;
    int64_t *l_1243 = &p_2053->g_660;
    int8_t ***l_1281 = (void*)0;
    int16_t **l_1476 = &l_1238;
    int16_t ***l_1475 = &l_1476;
    int16_t ****l_1474 = &l_1475;
    int32_t ***l_1483 = &p_2053->g_1306;
    int32_t ***l_1485 = (void*)0;
    int32_t l_1597 = 1L;
    uint16_t l_1605[6][6][7] = {{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}},{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}},{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}},{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}},{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}},{{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL},{0x7971L,65535UL,1UL,0xFE0AL,0UL,1UL,1UL}}};
    int16_t l_1637 = 0L;
    int32_t l_1665 = (-1L);
    uint8_t l_1667 = 0xA4L;
    uint8_t **l_1674 = (void*)0;
    uint8_t ***l_1673 = &l_1674;
    uint32_t *l_1695 = &p_2053->g_51;
    uint32_t **l_1694 = &l_1695;
    int i, j, k;
    (*l_1064) = 0L;
    for (p_19 = 0; (p_19 == 28); p_19 = safe_add_func_uint32_t_u_u(p_19, 3))
    { /* block id: 525 */
        int32_t l_1073[8][4][7] = {{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}},{{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L},{6L,0x1CBD1931L,0x575D73EAL,(-6L),1L,3L,0L}}};
        uint64_t *l_1077[2];
        int32_t l_1078 = 0x4743FF7AL;
        uint16_t ***l_1080 = (void*)0;
        int32_t **l_1081 = &p_2053->g_99;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1077[i] = (void*)0;
        (*l_1081) = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_2053->g_74[0][5], ((((*l_1064) = (((-10L) > (*p_2053->g_77)) == l_1073[2][2][0])) ^ ((((void*)0 == p_21) , ((((safe_sub_func_uint64_t_u_u(l_1076, (l_1078 = ((l_1073[2][2][0] , p_2053->g_91[5][3][1]) <= p_2053->g_51)))) < p_20) , p_19) , l_1079)) != l_1080)) >= 0x1D643A4706B1B135L))), 0x4FC882DCL)), p_2053->g_389)) , &p_2053->g_32);
    }
    for (p_2053->g_384 = (-14); (p_2053->g_384 > 41); ++p_2053->g_384)
    { /* block id: 532 */
        uint8_t l_1131[7][4][9] = {{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}},{{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL},{1UL,0x57L,247UL,1UL,0x58L,254UL,0xEEL,0x22L,248UL}}};
        int32_t l_1132 = 0x7B483582L;
        int32_t l_1133 = 9L;
        int32_t l_1134 = 0L;
        int32_t l_1137 = 0x664EBC31L;
        int32_t l_1139 = 0x42B74D42L;
        uint16_t **l_1163 = &p_2053->g_198;
        uint8_t *l_1170 = (void*)0;
        int32_t l_1203 = 0x4B2DF9ECL;
        int32_t l_1207[7] = {0x553116F4L,1L,0x553116F4L,0x553116F4L,1L,0x553116F4L,0x553116F4L};
        uint16_t l_1208 = 0UL;
        int32_t *l_1211 = &p_2053->g_96;
        int32_t *l_1212 = &l_1198[6];
        int32_t *l_1213 = (void*)0;
        int32_t *l_1214 = &l_1137;
        int32_t *l_1215 = &l_1207[6];
        int32_t *l_1216 = (void*)0;
        int32_t *l_1217[4][10];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 10; j++)
                l_1217[i][j] = &p_2053->g_32;
        }
        if (p_2053->g_959[0][1][0])
            break;
    }
    if ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((!((-3L) & ((*l_1225) = (-2L)))) , 0x61L), 1)), ((safe_mod_func_int8_t_s_s(((*l_1064) <= ((0x0BL >= p_19) == ((*l_1243) = ((*l_1242) = ((p_19 > ((((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((*l_1241) = ((*l_1064) , ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_1238) = (((0L && 0x687F3615L) && (*l_1064)) >= 0L)), 0L)), p_19)), l_1239)) >= l_1240))), 1L)), p_2053->g_78)) >= p_2053->g_234[0]) || p_20) < p_2053->g_72[1])) & p_2053->g_41[4]))))), p_2053->g_719)) ^ 0x2AFE59E04F88AD38L))))
    { /* block id: 625 */
        int32_t l_1244 = 0x14588FB0L;
        int8_t **l_1249 = &l_1160[4];
        int8_t **l_1251 = &l_1160[1];
        int8_t ***l_1250 = &l_1251;
        uint16_t *l_1255 = &p_2053->g_388[0][2][5];
        int32_t l_1309[4] = {0x05DE16CFL,0x05DE16CFL,0x05DE16CFL,0x05DE16CFL};
        int32_t l_1311[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint16_t l_1379 = 0x0F4EL;
        uint64_t l_1410 = 0xEAA78EB5BA03C93AL;
        uint32_t l_1411 = 4294967295UL;
        uint16_t l_1420 = 65529UL;
        uint32_t l_1489 = 1UL;
        int16_t **l_1525[9] = {&l_1225,&l_1225,&l_1225,&l_1225,&l_1225,&l_1225,&l_1225,&l_1225,&l_1225};
        int32_t l_1567 = 1L;
        uint32_t l_1618 = 0xCBA0DC54L;
        int i;
        (*l_1064) = l_1244;
        for (p_2053->g_67 = 0; (p_2053->g_67 < 39); p_2053->g_67 = safe_add_func_uint32_t_u_u(p_2053->g_67, 8))
        { /* block id: 629 */
            for (l_1205 = 0; l_1205 < 4; l_1205 += 1)
            {
                p_2053->g_6[l_1205] = 0x20E08D78L;
            }
        }
        if (((*l_1064) >= (~((*l_1064) > (safe_div_func_uint16_t_u_u(((*l_1255) = ((*p_2053->g_198) > (~(l_1249 != (p_2053->g_1254 = (p_2053->g_1252[0][0][3] = ((*l_1250) = (void*)0))))))), ((~((p_2053->g_326 = ((0x58112FB23C4B68E6L < (safe_add_func_uint32_t_u_u(4294967295UL, ((safe_lshift_func_int16_t_s_s(p_20, 6)) & ((p_2053->g_962[7] || l_1244) <= 0xC0L))))) <= 18446744073709551612UL)) <= 0x6EC8L)) | p_2053->g_384)))))))
        { /* block id: 637 */
            uint64_t l_1296 = 1UL;
            int8_t *l_1298 = (void*)0;
            int32_t l_1310 = 0x5EA36180L;
            int32_t l_1312 = 1L;
            int32_t l_1313 = 9L;
            uint8_t l_1354 = 0x8CL;
            uint64_t l_1359[7][3][4];
            uint32_t *l_1387 = (void*)0;
            uint32_t **l_1386[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t ***l_1392 = &p_2053->g_197;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1359[i][j][k] = 8UL;
                }
            }
            for (p_2053->g_389 = 0; (p_2053->g_389 <= 7); p_2053->g_389 += 1)
            { /* block id: 640 */
                int32_t l_1280 = 0x144EDB76L;
                int8_t **l_1293 = &p_2053->g_1253;
                int64_t *l_1303 = &p_2053->g_228;
                uint8_t l_1408[8] = {0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L};
                int32_t l_1416 = (-5L);
                int32_t l_1418 = 7L;
                int32_t l_1419 = (-2L);
                int i;
                for (p_2053->g_446 = 0; (p_2053->g_446 <= 7); p_2053->g_446 += 1)
                { /* block id: 643 */
                    uint8_t *l_1264 = &p_2053->g_384;
                    int32_t l_1275[2];
                    uint64_t *l_1278[1][3];
                    int32_t l_1279 = 0L;
                    uint16_t *l_1355 = (void*)0;
                    uint16_t *l_1356 = &p_2053->g_368;
                    int16_t l_1366 = 0x5A07L;
                    int8_t l_1388 = (-1L);
                    int32_t l_1417 = (-9L);
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1275[i] = 7L;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1278[i][j] = &p_2053->g_562[1];
                    }
                    (1 + 1);
                }
            }
            return p_21;
        }
        else
        { /* block id: 699 */
            uint32_t l_1427[3][4] = {{0x52AF2609L,4294967286UL,0x52AF2609L,0x52AF2609L},{0x52AF2609L,4294967286UL,0x52AF2609L,0x52AF2609L},{0x52AF2609L,4294967286UL,0x52AF2609L,0x52AF2609L}};
            int32_t l_1452[7][2][1] = {{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}},{{0x1B73AE45L},{0x1B73AE45L}}};
            uint32_t l_1456 = 0xACFEB1DDL;
            uint8_t **l_1506 = &l_1241;
            uint16_t ****l_1541 = &l_1079;
            int32_t l_1568 = 0L;
            int16_t ****l_1576 = &l_1475;
            int8_t *l_1592 = &p_2053->g_516[9][2][0];
            uint32_t l_1596 = 4294967289UL;
            int32_t *l_1600 = &l_1309[3];
            int32_t *l_1616[10][9][2] = {{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}},{{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4},{&p_2053->g_72[1],&p_2053->g_4}}};
            int64_t l_1617 = 0x31A8006B064B1572L;
            int i, j, k;
            for (l_1240 = 0; (l_1240 <= 5); ++l_1240)
            { /* block id: 702 */
                uint32_t *l_1432 = &p_2053->g_446;
                int32_t l_1435 = 0x2B53C495L;
                int8_t **l_1442 = (void*)0;
                int32_t l_1451[6][1][3] = {{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}},{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}},{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}},{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}},{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}},{{0x5CDD6787L,0x5CDD6787L,0x5CDD6787L}}};
                int32_t *l_1453 = (void*)0;
                int32_t *l_1454 = (void*)0;
                int32_t *l_1455[1];
                int16_t **l_1473 = &l_1225;
                int16_t ***l_1472 = &l_1473;
                int16_t ****l_1471 = &l_1472;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1455[i] = (void*)0;
                l_1451[2][0][2] &= ((safe_sub_func_uint8_t_u_u(l_1427[1][2], (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((--(*l_1432)) == ((p_21 == l_1432) != l_1435)) < (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_20, (((l_1442 == &p_2053->g_1253) , (((((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(0xC6L, (l_1379 || l_1427[2][3]))) , &p_2053->g_1390[4][4]) == (void*)0), p_19)) != p_20) & l_1427[2][0]), 0x6EB3L)) >= p_20), p_2053->g_951)) ^ p_19) | 0xE2DBFAEA6F82A796L) < p_20) == (*l_1064))) , (*l_1064)))), 6)), (*p_2053->g_1253)))), (*p_2053->g_198))), l_1244)))) ^ 0x61L);
                ++l_1456;
                for (p_2053->g_1314 = 0; (p_2053->g_1314 >= 52); p_2053->g_1314 = safe_add_func_uint64_t_u_u(p_2053->g_1314, 8))
                { /* block id: 708 */
                    int32_t ***l_1484 = &p_2053->g_1306;
                    int32_t *l_1486 = (void*)0;
                    int32_t *l_1487 = &p_2053->g_719;
                    uint64_t *l_1488 = &p_2053->g_89;
                    int32_t l_1490 = (-1L);
                    l_1490 &= ((*l_1064) = ((safe_add_func_int8_t_s_s(((*p_2053->g_1253) ^= ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_2053->g_1176, ((l_1311[1] &= (((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((((((0x7D58BDD5L == ((l_1471 == l_1474) ^ (((*l_1488) = (safe_sub_func_uint64_t_u_u(((0x5475L && (((*l_1064) > (safe_div_func_uint16_t_u_u(((*p_21) & (safe_sub_func_uint32_t_u_u((((*l_1487) &= (l_1483 == (l_1485 = l_1484))) , p_19), p_2053->g_72[2]))), (-10L)))) ^ 0UL)) , p_2053->g_96), l_1411))) || 1L))) <= 8UL) != l_1489) < 65529UL) , p_2053->g_516[3][2][0]), (-6L))), p_19)) , &p_2053->g_1155[0][1][5]) != &p_2053->g_198)) | l_1309[2]))), p_2053->g_660)) | 0x74FE5E72L)), 0UL)) , (*p_21)));
                }
                (*p_2053->g_1145) ^= (*p_21);
            }
            if (l_1427[1][1])
            { /* block id: 719 */
                uint32_t **l_1492[2];
                uint32_t *l_1493 = &p_2053->g_51;
                uint8_t **l_1495 = &l_1241;
                uint8_t ***l_1494 = &l_1495;
                int8_t l_1505 = 0x26L;
                uint8_t ***l_1507 = &l_1506;
                int32_t l_1562 = 0L;
                int8_t *l_1593[1];
                uint64_t *l_1598 = &p_2053->g_89;
                int32_t *l_1599 = &l_1198[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1492[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_1593[i] = &l_1505;
                (*p_2053->g_1145) = ((p_2053->g_1491[0] != l_1492[1]) != p_20);
lbl_1573:
                if (((l_1311[1] = ((((*l_1493) = p_20) == (((*l_1494) = &l_1241) == ((*l_1507) = ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_19, (((~(((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((*l_1064))), (p_21 == (void*)0))) > (((((+p_20) ^ l_1411) ^ (safe_add_func_int8_t_s_s((*l_1064), 0x1FL))) == l_1311[1]) > 255UL)) , p_19)) >= 4294967295UL) , p_20))), l_1505)) , l_1506)))) > 0xE8E84FFE3F98094CL)) == p_20))
                { /* block id: 725 */
                    uint8_t l_1508 = 249UL;
                    int16_t l_1512 = (-8L);
                    uint16_t ****l_1540 = &l_1079;
                    int32_t l_1546 = 7L;
                    int8_t **l_1552[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1552[i] = (void*)0;
                    (*l_1064) |= l_1508;
                    (*l_1064) &= (safe_unary_minus_func_int8_t_s(((safe_add_func_uint16_t_u_u((p_20 & (((((***l_1475) = 0L) >= 0x25DDL) && (((l_1512 > (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(p_20, (safe_div_func_uint16_t_u_u(((((*l_1475) = (p_2053->g_67 , p_2053->g_1523)) != l_1525[2]) , (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((-2L) < l_1512), l_1452[5][0][0])), 4)), (*p_2053->g_1524)))), 0x1C66L)))), 0x2828L)) , l_1309[2]), p_19)), p_19))) , p_19) || p_20)) && 0x573EDB0DL)), p_19)) || 0UL)));
                    for (p_2053->g_389 = 8; (p_2053->g_389 >= 20); p_2053->g_389 = safe_add_func_int32_t_s_s(p_2053->g_389, 1))
                    { /* block id: 732 */
                        uint32_t *l_1551 = &p_2053->g_446;
                        uint16_t ***l_1561 = &p_2053->g_197;
                        l_1546 ^= (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((-1L) <= ((safe_rshift_func_uint8_t_u_u((l_1540 == l_1541), 2)) > 0x2FF6L)), p_20)) && (-1L)), (p_20 != (safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(0x5DF7L, (((((*l_1064) == (*p_21)) && (**p_2053->g_197)) , 0x28L) || 6UL))), 3UL)))));
                        if (p_2053->g_32)
                            goto lbl_1573;
                        (*p_2053->g_1145) |= (((((safe_add_func_uint32_t_u_u(((*l_1551) = (++(*l_1493))), (-9L))) , (l_1546 = ((((p_20 & (((*l_1250) = (void*)0) != l_1552[0])) <= ((!((safe_add_func_int64_t_s_s(0x531B41BAB62BD048L, (((*l_1064) < (l_1512 < (((((safe_mul_func_int16_t_s_s((l_1562 = ((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((((((*l_1241) &= l_1505) || ((*l_1540) == l_1561)) != p_20) < p_19) & (*l_1064)) , 0UL) && p_20), 0x5CL)), 255UL)) && (*p_2053->g_198))), (**p_2053->g_1523))) , l_1309[3]) && (-1L)) , l_1505) == (*p_21)))) && 0x2DCC421DL))) == l_1311[1])) ^ (*p_21))) | 0x544CL) > p_19))) || 8L) , (*p_21)) && l_1456);
                        if (p_2053->g_51)
                            goto lbl_1573;
                    }
                }
                else
                { /* block id: 742 */
                    int32_t *l_1572 = &p_2053->g_234[0];
                    (*p_2053->g_1145) = ((((**l_1506) = (safe_sub_func_int64_t_s_s((p_2053->g_954 , 0x50B986ADB5312905L), (safe_lshift_func_uint16_t_u_s(((0x55D1AA2FD9854A9EL <= l_1567) != (&p_2053->g_234[0] != (void*)0)), 0))))) <= (l_1568 < 0x5FB7L)) & (safe_unary_minus_func_uint8_t_u(((((((((*l_1572) |= (safe_mul_func_int16_t_s_s(((&l_1410 == (void*)0) && p_19), (*p_2053->g_1524)))) , &p_2053->g_228) == (void*)0) != (**p_2053->g_1523)) , p_20) | p_2053->g_660) , p_20))));
                }
                l_1311[1] = (safe_sub_func_uint32_t_u_u(((void*)0 != &p_2053->g_1523), ((l_1505 || ((**l_1506) |= (l_1576 == (void*)0))) & p_19)));
                l_1600 = ((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s((l_1311[1] = (safe_unary_minus_func_int8_t_s((l_1452[3][0][0] ^= (*p_2053->g_1253))))), 3)))) , (*p_2053->g_1306));
            }
            else
            { /* block id: 760 */
                int32_t *l_1601 = &l_1198[5];
                int32_t *l_1602 = &p_2053->g_32;
                int32_t *l_1603 = &l_1309[2];
                int32_t *l_1604[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1604[i] = &p_2053->g_72[1];
                ++l_1605[5][5][0];
                for (p_2053->g_657 = 0; (p_2053->g_657 <= 6); p_2053->g_657 += 1)
                { /* block id: 764 */
                    int i;
                    p_2053->g_72[p_2053->g_657] = 0x2F62B0CEL;
                    for (l_1244 = 0; (l_1244 <= 3); l_1244 += 1)
                    { /* block id: 768 */
                        return (*p_2053->g_1306);
                    }
                    for (p_2053->g_663 = 5; (p_2053->g_663 >= 0); p_2053->g_663 -= 1)
                    { /* block id: 773 */
                        int i;
                        (**l_1483) = &p_2053->g_72[p_2053->g_657];
                    }
                    for (l_1107 = 0; (l_1107 <= 3); l_1107 += 1)
                    { /* block id: 778 */
                        int32_t l_1610 = 0x7F4B2982L;
                        int i;
                        (*l_1601) &= ((safe_mul_func_int8_t_s_s(p_2053->g_72[(l_1107 + 2)], (((*l_1064) = (p_19 || (l_1309[2] && ((*p_2053->g_1145) & (p_19 || 247UL))))) && ((l_1610 = (0L & (*l_1064))) != (safe_lshift_func_int8_t_s_u((*l_1602), 3)))))) | 0x3BL);
                    }
                }
                (**l_1483) = (*p_2053->g_1094);
                p_2053->g_1613[3][0][0]++;
            }
            l_1618++;
        }
        if (((safe_mul_func_int8_t_s_s(0x6EL, ((*l_1241) = ((safe_lshift_func_uint8_t_u_s((((*l_1064) = 0x24L) <= ((safe_sub_func_int16_t_s_s(((((((*p_21) ^ (*p_21)) , p_19) , (void*)0) != (void*)0) < (((p_19 ^ ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((((*p_2053->g_77) > p_2053->g_72[4]) == 0x6B0F316B4E060F88L) & 0x0827E91AL), 1)) ^ 0x06B9B01AL) > l_1637), l_1379)), 0xACFEFFDDL)), 0)) > p_20)) & p_19) , p_20)), l_1489)) , p_20)), 1)) , (*l_1064))))) , (*p_2053->g_1145)))
        { /* block id: 791 */
            (*p_2053->g_1145) = 0L;
        }
        else
        { /* block id: 793 */
            int32_t l_1643[10] = {0x36C7CC4AL,1L,1L,1L,0x36C7CC4AL,0x36C7CC4AL,1L,1L,1L,0x36C7CC4AL};
            int32_t l_1661 = 0x21E17B9DL;
            int32_t l_1662 = 0x203EF593L;
            int32_t l_1663[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
            int i;
            (*p_2053->g_1306) = (*p_2053->g_1148);
            for (p_2053->g_399 = 18; (p_2053->g_399 < (-12)); p_2053->g_399--)
            { /* block id: 797 */
                int64_t l_1659 = 0x03F1C735139601F5L;
                int32_t l_1660 = 0x68C1B1F0L;
                int32_t l_1666[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1666[i] = 1L;
                if ((*p_21))
                    break;
                if ((*p_21))
                    continue;
                for (l_1567 = 24; (l_1567 >= 29); l_1567 = safe_add_func_int64_t_s_s(l_1567, 5))
                { /* block id: 802 */
                    int32_t l_1642 = 0x68462163L;
                    int32_t *l_1644 = &l_1244;
                    int32_t *l_1645 = &l_1244;
                    int32_t l_1646 = 0L;
                    int32_t *l_1647 = &l_1244;
                    int32_t *l_1648 = (void*)0;
                    int32_t *l_1649 = &l_1311[1];
                    int32_t *l_1650 = &p_2053->g_96;
                    int32_t *l_1651 = &p_2053->g_72[3];
                    int32_t *l_1652 = (void*)0;
                    int32_t *l_1653 = &l_1198[3];
                    int32_t *l_1654 = (void*)0;
                    int32_t *l_1655 = &l_1309[2];
                    int32_t *l_1656 = (void*)0;
                    int32_t *l_1657 = (void*)0;
                    int32_t *l_1658[2];
                    int8_t l_1664 = 0L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1658[i] = &p_2053->g_380;
                    --l_1667;
                    (*p_2053->g_1145) &= l_1666[0];
                }
            }
        }
    }
    else
    { /* block id: 808 */
        uint32_t *l_1672 = &p_2053->g_91[7][1][3];
        uint8_t ***l_1675 = (void*)0;
        int32_t l_1686 = (-6L);
        int32_t *l_1688 = &p_2053->g_389;
        uint64_t *l_1691[2];
        uint32_t *l_1693 = &p_2053->g_446;
        uint32_t **l_1692 = &l_1693;
        int32_t *l_1696 = &p_2053->g_96;
        int i;
        for (i = 0; i < 2; i++)
            l_1691[i] = (void*)0;
        (*l_1696) |= (!(((safe_mod_func_uint8_t_u_u((+((l_1686 = ((l_1675 = (((*l_1672) |= 0UL) , l_1673)) == (((0x17F1A917EC099D95L ^ 1UL) & ((*p_2053->g_1253) = (6UL != ((safe_mod_func_int32_t_s_s(((*p_21) > (safe_div_func_uint16_t_u_u(((((((*l_1688) ^= (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_1064) , l_1686), (p_2053->g_956 | (*p_2053->g_1253)))), p_2053->g_1687))) , l_1686) < (**p_2053->g_1523)) & (*l_1064)) != 255UL), (-6L)))), l_1686)) && 0x4B594C95L)))) , p_2053->g_1689[1]))) & 1UL)), 254UL)) , l_1692) == l_1694));
    }
    return (*p_2053->g_1306);
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_661 p_2053->g_384 p_2053->g_516 p_2053->g_41 p_2053->g_234 p_2053->g_380 p_2053->g_72 p_2053->g_298 p_2053->g_125 p_2053->g_8
 * writes: p_2053->g_380 p_2053->g_72 p_2053->g_298 p_2053->g_228
 */
uint32_t  func_33(int32_t * p_34, int32_t  p_35, int64_t  p_36, struct S0 * p_2053)
{ /* block id: 509 */
    uint8_t l_1037 = 251UL;
    int64_t **l_1038 = &p_2053->g_298;
    uint16_t ****l_1039 = (void*)0;
    int32_t *l_1046 = &p_2053->g_234[0];
    int32_t **l_1050 = &l_1046;
    int32_t ***l_1049 = &l_1050;
    uint32_t l_1061 = 0UL;
    (*p_34) = 0x177122B1L;
    (*p_34) = (0UL > (p_2053->g_661 && ((((l_1037 >= (&p_2053->g_99 == (void*)0)) , ((&p_36 != ((*l_1038) = &p_2053->g_228)) || (!((l_1039 = (void*)0) == (void*)0)))) < 0x64B51A8F921E71EEL) >= p_36)));
    if ((+(((**l_1038) = (l_1037 ^ (p_35 > (((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((l_1037 , ((safe_mul_func_int8_t_s_s((l_1046 == &p_35), (safe_mod_func_int8_t_s_s(((void*)0 == l_1049), (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((p_36 >= (safe_sub_func_int16_t_s_s(p_2053->g_384, l_1061))), 0xEF9ACB3AL)), 8L)), l_1037)), p_2053->g_516[9][2][0])))))) , 0xF0618439L)) , p_2053->g_41[4]) , p_36), 7)) , 0xF49CF7EF0962B077L), p_35)) & p_2053->g_234[0]) , (*p_34))))) , 4L)))
    { /* block id: 515 */
        return p_2053->g_125[7];
    }
    else
    { /* block id: 517 */
        return p_2053->g_8;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_47 p_2053->g_380 p_2053->g_41 p_2053->g_125 p_2053->g_446 p_2053->g_516 p_2053->g_370 p_2053->g_657 p_2053->g_228 p_2053->g_326 p_2053->g_72 p_2053->g_661 p_2053->g_198 p_2053->g_8 p_2053->g_197 p_2053->g_74 p_2053->g_77 p_2053->g_89 p_2053->g_4 p_2053->g_96 p_2053->g_926 p_2053->g_388 p_2053->g_562 p_2053->g_719 p_2053->g_942 p_2053->g_407 p_2053->g_9 p_2053->g_234 p_2053->g_368 p_2053->g_298 p_2053->g_91 p_2053->g_150 p_2053->g_399 p_2053->g_384 p_2053->g_660
 * writes: p_2053->g_719 p_2053->g_41 p_2053->g_446 p_2053->g_370 p_2053->g_228 p_2053->g_657 p_2053->g_661 p_2053->g_407 p_2053->g_663 p_2053->g_660 p_2053->g_72 p_2053->g_74 p_2053->g_89 p_2053->g_94 p_2053->g_96 p_2053->g_380 p_2053->g_47 p_2053->g_125 p_2053->g_99 p_2053->g_326 p_2053->g_368 p_2053->g_399 p_2053->g_388 p_2053->g_384
 */
int32_t * func_37(int32_t * p_38, struct S0 * p_2053)
{ /* block id: 383 */
    uint8_t l_834[8];
    uint16_t l_843 = 0x0367L;
    int32_t l_845 = 0x489D2A72L;
    int32_t l_881[3][8] = {{(-3L),0x3CEE53CDL,0x6274AA0EL,0x45CEDF91L,0x6274AA0EL,0x3CEE53CDL,(-3L),(-1L)},{(-3L),0x3CEE53CDL,0x6274AA0EL,0x45CEDF91L,0x6274AA0EL,0x3CEE53CDL,(-3L),(-1L)},{(-3L),0x3CEE53CDL,0x6274AA0EL,0x45CEDF91L,0x6274AA0EL,0x3CEE53CDL,(-3L),(-1L)}};
    uint32_t l_912 = 0UL;
    int8_t *l_971 = (void*)0;
    int8_t **l_970 = &l_971;
    int i, j;
    for (i = 0; i < 8; i++)
        l_834[i] = 0UL;
lbl_989:
    for (p_2053->g_719 = (-1); (p_2053->g_719 > (-2)); p_2053->g_719 = safe_sub_func_int8_t_s_s(p_2053->g_719, 4))
    { /* block id: 386 */
        int32_t l_831 = 1L;
        uint16_t **l_839[3];
        uint8_t *l_840 = &p_2053->g_41[4];
        uint32_t *l_844 = &p_2053->g_446;
        int i;
        for (i = 0; i < 3; i++)
            l_839[i] = &p_2053->g_198;
        l_845 &= ((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(l_831, (safe_lshift_func_uint8_t_u_s(l_834[1], 6)))) != ((*l_844) ^= (+((l_831 != ((p_2053->g_47 & (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((*p_38) , (l_839[2] == l_839[1])) , (l_831 , (((((*l_840)--) ^ p_2053->g_125[7]) | 0x9459L) , 0x74L))), 4)), 0x62L))) > 0x19E80A88L)) ^ l_843)))), p_2053->g_516[7][0][2])) || l_834[1]);
    }
    for (p_2053->g_370 = 2; (p_2053->g_370 >= 0); p_2053->g_370 -= 1)
    { /* block id: 393 */
        int32_t *l_846 = &p_2053->g_72[4];
        int32_t l_861 = (-1L);
        uint16_t ***l_868 = &p_2053->g_197;
        int32_t l_882 = 0x1C40A525L;
        int32_t l_885[1];
        int64_t l_894[6];
        int32_t l_896 = 4L;
        int32_t l_910 = 3L;
        int64_t *l_1025[3][9] = {{&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228},{&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228},{&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228,&p_2053->g_228}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_885[i] = 1L;
        for (i = 0; i < 6; i++)
            l_894[i] = 1L;
        for (p_2053->g_228 = 2; (p_2053->g_228 >= 0); p_2053->g_228 -= 1)
        { /* block id: 396 */
            int32_t **l_852 = &p_2053->g_301;
            int32_t l_860 = (-1L);
            uint64_t *l_862 = &p_2053->g_74[0][1];
            int32_t l_883 = 0x02180820L;
            int32_t l_884 = 7L;
            int32_t l_888 = 0x20543AFEL;
            int32_t l_889 = (-1L);
            int32_t l_890 = 9L;
            int32_t l_892 = (-10L);
            int32_t l_895 = 2L;
            int32_t l_897 = 0x3D6D05D0L;
            int32_t l_898 = 0x36C2A828L;
            int32_t l_899 = 0x41F4AA4AL;
            int32_t l_900 = 1L;
            int32_t l_901 = 9L;
            int32_t l_902 = (-9L);
            int32_t l_903 = 0L;
            int32_t l_905 = (-10L);
            int32_t l_906[9][3][8] = {{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}},{{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL},{(-1L),0x1BA32AC2L,1L,1L,0x6A21D8E8L,0x1BA32AC2L,0x022A9F1BL,0x7743A84DL}}};
            int64_t l_908 = 0x47AA1BC3815B56D2L;
            int i, j, k;
            for (p_2053->g_657 = 0; (p_2053->g_657 <= 0); p_2053->g_657 += 1)
            { /* block id: 399 */
                int32_t *l_847 = &l_845;
                uint64_t *l_850 = &p_2053->g_150;
                int32_t l_874 = 7L;
                int32_t l_878 = 0x571A63CBL;
                int32_t l_879 = (-1L);
                int32_t l_880 = 0L;
                int32_t l_886 = 9L;
                int32_t l_891 = 1L;
                int32_t l_893[2];
                int32_t l_907[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_893[i] = (-10L);
                if ((1UL >= p_2053->g_516[(p_2053->g_370 + 4)][(p_2053->g_657 + 2)][p_2053->g_228]))
                { /* block id: 400 */
                    int32_t **l_851 = &p_2053->g_301;
                    int64_t *l_859[4];
                    int32_t l_863[3];
                    int32_t **l_864[2][4][7] = {{{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99}},{{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99},{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_859[i] = &p_2053->g_660;
                    for (i = 0; i < 3; i++)
                        l_863[i] = (-8L);
                    for (p_2053->g_661 = 0; (p_2053->g_661 <= 0); p_2053->g_661 += 1)
                    { /* block id: 403 */
                        return l_846;
                    }
                    l_847 = &p_2053->g_72[5];
                    l_847 = ((p_2053->g_326 & (((((&p_2053->g_89 != ((((safe_mod_func_uint16_t_u_u((l_850 == &p_2053->g_150), (*l_846))) & ((((l_851 != ((p_2053->g_407 = (*l_846)) , l_852)) | ((l_861 = (((safe_add_func_int64_t_s_s((l_860 = (p_2053->g_663 = p_2053->g_657)), l_834[7])) == 0L) , (*p_38))) && 0L)) < 18446744073709551614UL) && 4294967293UL)) && 4L) , l_862)) == p_2053->g_661) > (*l_846)) && 0x8909L) == l_863[0])) , (void*)0);
                }
                else
                { /* block id: 412 */
                    int64_t *l_867 = &p_2053->g_660;
                    uint16_t ***l_870 = &p_2053->g_197;
                    uint16_t ****l_869 = &l_870;
                    int32_t l_873[4][2];
                    int16_t l_877 = 0x3183L;
                    int64_t l_887 = (-6L);
                    int8_t l_909 = 0x1CL;
                    int64_t l_911 = (-1L);
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_873[i][j] = 9L;
                    }
                    if ((*p_38))
                        break;
                    for (l_843 = 0; (l_843 <= 0); l_843 += 1)
                    { /* block id: 416 */
                        return p_38;
                    }
                    if ((((safe_add_func_int64_t_s_s(0x33A3A491B5B2DCA0L, 0x56465CFCF967FFB2L)) >= ((((*l_867) = (p_2053->g_47 && 0UL)) > ((((l_868 != ((*l_869) = l_868)) > (safe_add_func_uint32_t_u_u(l_834[3], ((*l_847) ^ (l_843 , l_873[2][1]))))) != l_860) <= 1L)) || (*p_2053->g_198))) || l_873[3][1]))
                    { /* block id: 421 */
                        int32_t *l_875 = &l_845;
                        int32_t *l_876[2][2] = {{&p_2053->g_96,&p_2053->g_96},{&p_2053->g_96,&p_2053->g_96}};
                        int32_t l_904 = 0L;
                        int32_t **l_915 = &l_847;
                        uint32_t l_919 = 0x942939B3L;
                        uint32_t *l_921[9][7][4] = {{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}},{{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[4][5][0],&p_2053->g_91[6][3][0]}}};
                        uint32_t **l_920 = &l_921[7][1][0];
                        int i, j, k;
                        (*l_847) &= 0x533FCFB9L;
                        --l_912;
                        (*l_915) = (l_846 = &p_2053->g_380);
                        l_873[2][1] = ((*l_847) = ((safe_unary_minus_func_uint64_t_u(l_911)) >= (((((((*l_875) = ((l_881[1][4] < (p_2053->g_41[4] |= 0x0FL)) <= (safe_mod_func_uint8_t_u_u((l_919 != ((l_876[0][0] == ((*l_920) = func_62((*p_2053->g_197), &l_834[1], p_2053))) || (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_2053->g_926, (*l_846))), (*l_847))))), p_2053->g_388[0][2][5])))) == l_888) | p_2053->g_326) , l_911) != (*p_2053->g_198)) == p_2053->g_562[0])));
                    }
                    else
                    { /* block id: 431 */
                        return &p_2053->g_72[1];
                    }
                }
            }
        }
        for (p_2053->g_96 = 0; (p_2053->g_96 <= 0); p_2053->g_96 += 1)
        { /* block id: 439 */
            uint32_t l_927 = 8UL;
            int32_t l_1015 = 0x3DD320C8L;
            int32_t **l_1018[5] = {&p_2053->g_301,&p_2053->g_301,&p_2053->g_301,&p_2053->g_301,&p_2053->g_301};
            int i;
            for (p_2053->g_660 = 0; (p_2053->g_660 <= 0); p_2053->g_660 += 1)
            { /* block id: 442 */
                int16_t *l_941 = &p_2053->g_125[7];
                int16_t **l_940 = &l_941;
                int32_t l_964[5] = {0x13533564L,0x13533564L,0x13533564L,0x13533564L,0x13533564L};
                uint16_t **l_965 = &p_2053->g_198;
                int16_t ***l_978 = &l_940;
                int i;
                for (p_2053->g_47 = 0; (p_2053->g_47 <= 0); p_2053->g_47 += 1)
                { /* block id: 445 */
                    int32_t l_934 = 0x7621AA70L;
                    int64_t *l_963 = &p_2053->g_407;
                    if ((l_927 < (((((((*l_941) |= ((!((p_2053->g_719 , (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0x221675B9L, ((safe_div_func_uint8_t_u_u(l_934, l_843)) && ((((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((!(l_940 != p_2053->g_942)), ((0L | ((*l_963) &= (p_2053->g_388[0][2][5] & p_2053->g_516[9][2][0]))) != 0L))), p_2053->g_9)))) >= p_2053->g_326) && 0x9FL) <= (*l_846))))), l_964[2]))) != (-1L))) , 0x65A4L)) && (*l_846)) , l_965) == l_965) , 0x697C9EC5L) , (-1L))))
                    { /* block id: 448 */
                        (*l_846) = l_881[1][4];
                        (*l_846) = (safe_add_func_int32_t_s_s(l_934, p_2053->g_4));
                        return &p_2053->g_380;
                    }
                    else
                    { /* block id: 452 */
                        int16_t ***l_977 = (void*)0;
                        int16_t ****l_976[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t **l_987 = (void*)0;
                        int32_t **l_988 = &l_846;
                        int i;
                        p_2053->g_72[1] &= (safe_add_func_int8_t_s_s(((l_845 = 0x67BE2BA0L) , (((void*)0 == l_970) & (safe_div_func_uint64_t_u_u(l_834[1], l_964[1])))), ((*p_38) >= (safe_lshift_func_uint16_t_u_s((&p_2053->g_942 != (l_978 = &l_940)), (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((*l_963) = (safe_add_func_int64_t_s_s(0x670CF8A3162B3F3DL, 1L))), (-1L))) < l_927), l_927)) && l_964[3]), l_964[1])))))));
                        if (p_2053->g_234[0])
                            continue;
                        (*l_988) = &l_845;
                        p_2053->g_99 = (((*l_963) ^= p_2053->g_516[9][2][0]) , &p_2053->g_96);
                    }
                    (*p_38) = (*p_38);
                    p_2053->g_99 = ((0L < 0x420FE4364B024A05L) , p_38);
                    for (p_2053->g_661 = 0; (p_2053->g_661 <= 0); p_2053->g_661 += 1)
                    { /* block id: 466 */
                        if ((*p_38))
                            break;
                        if (p_2053->g_661)
                            goto lbl_989;
                    }
                }
            }
            if ((*p_38))
                continue;
            if (l_927)
                continue;
            for (p_2053->g_326 = 0; (p_2053->g_326 >= 0); p_2053->g_326 -= 1)
            { /* block id: 476 */
                int8_t l_999 = 0x1CL;
                int32_t l_1000 = 0L;
                for (p_2053->g_368 = 0; (p_2053->g_368 <= 0); p_2053->g_368 += 1)
                { /* block id: 479 */
                    uint8_t *l_996 = &p_2053->g_384;
                    int32_t l_1010 = (-7L);
                    if ((safe_div_func_int8_t_s_s((p_2053->g_41[4] ^ (((l_1000 ^= ((((((safe_div_func_uint32_t_u_u(p_2053->g_516[2][2][0], ((safe_rshift_func_int8_t_s_s(((*p_2053->g_298) , p_2053->g_91[7][1][3]), 4)) , 0x41321349L))) && ((&p_2053->g_41[4] == l_996) < (-4L))) | (safe_mod_func_uint8_t_u_u(l_834[7], 0xCBL))) <= l_999) <= l_927) , (*l_846))) || (*l_846)) & 18446744073709551615UL)), l_834[2])))
                    { /* block id: 481 */
                        int16_t *l_1007 = &p_2053->g_399;
                        (*p_38) = ((l_927 > (0x48AC054CL && (((safe_div_func_int32_t_s_s(l_999, (safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(0x7932284287F2E33CL, 0x72C6C2DDCB401964L)) || p_2053->g_150), l_927)))) >= l_927) >= ((*l_1007) |= l_843)))) <= l_881[2][6]);
                    }
                    else
                    { /* block id: 484 */
                        uint16_t *l_1013[4][7] = {{&p_2053->g_661,&p_2053->g_661,(void*)0,&p_2053->g_388[0][1][1],&p_2053->g_388[5][1][7],&p_2053->g_388[0][1][1],(void*)0},{&p_2053->g_661,&p_2053->g_661,(void*)0,&p_2053->g_388[0][1][1],&p_2053->g_388[5][1][7],&p_2053->g_388[0][1][1],(void*)0},{&p_2053->g_661,&p_2053->g_661,(void*)0,&p_2053->g_388[0][1][1],&p_2053->g_388[5][1][7],&p_2053->g_388[0][1][1],(void*)0},{&p_2053->g_661,&p_2053->g_661,(void*)0,&p_2053->g_388[0][1][1],&p_2053->g_388[5][1][7],&p_2053->g_388[0][1][1],(void*)0}};
                        int32_t l_1014 = 0x7132AC27L;
                        uint32_t *l_1021[9];
                        int16_t *l_1022 = &p_2053->g_125[7];
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1021[i] = &l_912;
                        (*p_38) = p_2053->g_72[6];
                        (*l_846) = (((safe_add_func_uint8_t_u_u(p_2053->g_228, l_1010)) , (((safe_div_func_int16_t_s_s((((--p_2053->g_388[2][1][7]) && ((((*l_996) ^= p_2053->g_41[4]) != (((((((void*)0 != l_1018[0]) & 249UL) ^ (((safe_mod_func_int32_t_s_s((((*l_1022) = ((*p_38) ^ (p_2053->g_446 = l_927))) | (safe_lshift_func_int16_t_s_s(((p_2053->g_399 = ((((((l_1025[0][4] != (void*)0) <= 0x68L) , l_881[0][1]) == l_845) > p_2053->g_228) >= (*p_38))) != l_1010), l_1015))), (*l_846))) > p_2053->g_326) , 0x66291CAD140B4FEFL)) <= l_1014) && p_2053->g_370) >= 0xF171FD5ACBF820A5L)) & l_1010)) <= p_2053->g_8), l_1010)) <= p_2053->g_72[1]) , (void*)0)) != &p_2053->g_926);
                        if (p_2053->g_657)
                            goto lbl_989;
                    }
                }
                if ((*p_38))
                    break;
                for (l_845 = 0; (l_845 <= 0); l_845 += 1)
                { /* block id: 498 */
                    int32_t *l_1026 = &l_882;
                    int32_t *l_1027 = &l_881[1][4];
                    int32_t *l_1028 = (void*)0;
                    int32_t *l_1029[5] = {&l_910,&l_910,&l_910,&l_910,&l_910};
                    uint8_t l_1030[8][10][2] = {{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}},{{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL},{0x28L,1UL}}};
                    int i, j, k;
                    ++l_1030[2][2][1];
                    (*l_1027) = (safe_lshift_func_int16_t_s_s(l_927, (0L == (*p_38))));
                    if ((*p_38))
                        continue;
                    if (p_2053->g_9)
                        goto lbl_989;
                }
            }
        }
    }
    if (p_2053->g_407)
        goto lbl_989;
    return &p_2053->g_380;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_7 p_2053->g_72 p_2053->g_8 p_2053->g_74 p_2053->g_77 p_2053->g_89 p_2053->g_4 p_2053->g_96 p_2053->g_99 p_2053->g_67 p_2053->g_94 p_2053->g_51 p_2053->g_91 p_2053->g_197 p_2053->g_150 p_2053->g_234 p_2053->g_198 p_2053->g_300 p_2053->g_125 p_2053->g_326 p_2053->g_9 p_2053->g_384 p_2053->g_389 p_2053->g_399 p_2053->g_380 p_2053->g_228 p_2053->g_388 p_2053->g_368 p_2053->g_657 p_2053->g_407 p_2053->g_660 p_2053->g_663 p_2053->g_370 p_2053->g_516 p_2053->g_298
 * writes: p_2053->g_51 p_2053->g_72 p_2053->g_74 p_2053->g_89 p_2053->g_94 p_2053->g_96 p_2053->g_99 p_2053->g_125 p_2053->g_150 p_2053->g_91 p_2053->g_67 p_2053->g_228 p_2053->g_234 p_2053->g_298 p_2053->g_300 p_2053->g_326 p_2053->g_301 p_2053->g_368 p_2053->g_370 p_2053->g_380 p_2053->g_384 p_2053->g_388 p_2053->g_389 p_2053->g_399 p_2053->g_197 p_2053->g_657 p_2053->g_407 p_2053->g_660 p_2053->g_661 p_2053->g_663 p_2053->g_516
 */
uint32_t  func_48(uint64_t  p_49, struct S0 * p_2053)
{ /* block id: 23 */
    uint32_t *l_50 = &p_2053->g_51;
    int32_t l_57[3];
    int32_t *l_379 = &p_2053->g_380;
    uint8_t *l_383 = &p_2053->g_384;
    uint16_t *l_387 = &p_2053->g_388[0][2][5];
    uint32_t l_481 = 4294967289UL;
    uint16_t *l_500 = &p_2053->g_388[0][2][5];
    int16_t l_519 = 1L;
    int32_t l_522 = 0x4BF8CC17L;
    int32_t l_523 = 0x1CEEC801L;
    uint64_t l_755 = 0xED5FD24BB24325F1L;
    int16_t **l_783 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_57[i] = 0x1CF63D7CL;
    if ((((*l_50) = p_2053->g_7) || (func_52(func_55(l_57[1], p_2053), (p_2053->g_389 = ((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(l_57[0], (safe_add_func_int32_t_s_s(((*l_379) = p_49), p_2053->g_9)))), 7)) < (safe_mul_func_uint16_t_u_u(((*l_387) = (p_2053->g_7 >= (((*l_383) |= p_49) || (safe_lshift_func_int16_t_s_s(0x19ECL, p_2053->g_4))))), 5L))), 2L)) > (*p_2053->g_198))), p_2053) , p_2053->g_89)))
    { /* block id: 155 */
        uint8_t l_411[3];
        uint32_t *l_428[5][9][5] = {{{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]}},{{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]}},{{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]}},{{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]}},{{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]},{(void*)0,&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[5][1][0],&p_2053->g_91[7][1][3]}}};
        int32_t *l_451 = &p_2053->g_380;
        int32_t l_477[2];
        uint8_t l_480 = 8UL;
        int32_t *l_529[3];
        int32_t l_590 = (-5L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_411[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_477[i] = 0x501DC788L;
        for (i = 0; i < 3; i++)
            l_529[i] = &p_2053->g_380;
        for (p_2053->g_51 = 2; (p_2053->g_51 == 24); ++p_2053->g_51)
        { /* block id: 158 */
            int64_t *l_406[6][1] = {{&p_2053->g_407},{&p_2053->g_407},{&p_2053->g_407},{&p_2053->g_407},{&p_2053->g_407},{&p_2053->g_407}};
            int32_t l_408[6][7][6] = {{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}},{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}},{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}},{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}},{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}},{{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L},{0L,9L,0L,0x312121FFL,0x312121FFL,0L}}};
            int8_t *l_412 = &p_2053->g_94;
            int32_t l_415[3][9][2] = {{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}}};
            int16_t *l_591 = &p_2053->g_125[7];
            int i, j, k;
            (1 + 1);
        }
        l_57[1] |= (*l_451);
        for (p_2053->g_399 = 0; (p_2053->g_399 != (-4)); p_2053->g_399 = safe_sub_func_uint64_t_u_u(p_2053->g_399, 6))
        { /* block id: 254 */
            int32_t l_594 = 0L;
            int32_t l_595 = 0x5AFAA565L;
            uint32_t l_596[6][7] = {{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL},{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL},{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL},{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL},{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL},{0x7C437D02L,0x7C437D02L,1UL,4294967286UL,0x61FC71C8L,4294967286UL,1UL}};
            int i, j;
            l_596[5][6]++;
        }
        p_2053->g_99 = func_62(l_387, &p_2053->g_384, p_2053);
    }
    else
    { /* block id: 258 */
        uint16_t **l_616 = &p_2053->g_198;
        int16_t l_655 = 0x3395L;
        int32_t l_716 = (-1L);
        int32_t **l_738 = &p_2053->g_301;
        int32_t l_754[5][9][3] = {{{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL}},{{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL}},{{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL}},{{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL}},{{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL},{0x7FFA26ACL,0x7F81F93BL,0x7FFA26ACL}}};
        int32_t **l_771[1][7] = {{&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99,&p_2053->g_99}};
        int32_t l_803 = 1L;
        int i, j, k;
        for (p_2053->g_51 = 0; (p_2053->g_51 <= 0); p_2053->g_51 += 1)
        { /* block id: 261 */
            uint64_t l_626[10] = {0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL,0x2F54C932ABE95FFCL};
            int32_t l_664 = 0x52C8F89FL;
            int i;
            for (p_2053->g_228 = 0; (p_2053->g_228 >= 0); p_2053->g_228 -= 1)
            { /* block id: 264 */
                int32_t **l_599 = (void*)0;
                int32_t **l_600 = &l_379;
                int32_t l_625 = 5L;
                int i;
                (*l_600) = &p_2053->g_72[(p_2053->g_228 + 5)];
                for (l_522 = 0; (l_522 >= 0); l_522 -= 1)
                { /* block id: 268 */
                    uint16_t *l_601 = &p_2053->g_388[6][1][3];
                    uint32_t **l_610[7][2] = {{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50}};
                    int32_t l_621 = (-10L);
                    int32_t *l_624[2][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint32_t *l_656 = &p_2053->g_657;
                    int64_t *l_658 = &p_2053->g_407;
                    int64_t *l_659 = &p_2053->g_660;
                    int64_t *l_662 = &p_2053->g_663;
                    int i, j, k;
                    l_379 = &l_57[1];
                    for (p_2053->g_150 = 0; (p_2053->g_150 <= 2); p_2053->g_150 += 1)
                    { /* block id: 272 */
                        uint16_t ***l_617 = &p_2053->g_197;
                        int16_t *l_620 = &p_2053->g_125[8];
                        int32_t l_622 = 0x2701D2FCL;
                        int32_t *l_623 = &p_2053->g_380;
                        int i, j, k;
                        p_2053->g_99 = (void*)0;
                        p_2053->g_99 = &p_2053->g_72[(l_522 + 1)];
                        (*l_600) = func_62(l_601, l_383, p_2053);
                        (*l_623) |= (l_622 = ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_2053->g_388[(p_2053->g_150 + 1)][p_2053->g_150][(p_2053->g_228 + 6)], (((((void*)0 != l_610[3][0]) , (safe_add_func_uint64_t_u_u(p_2053->g_91[(p_2053->g_51 + 7)][(l_522 + 2)][(p_2053->g_51 + 2)], ((p_49 & ((((**l_600) = p_49) , ((safe_unary_minus_func_int32_t_s(((safe_add_func_uint8_t_u_u((&p_2053->g_198 != ((*l_617) = l_616)), ((safe_sub_func_uint16_t_u_u((((((*l_620) = 1L) != 4L) != p_2053->g_4) && 1L), p_49)) >= 0UL))) & 0x35634ED9L))) , p_49)) < 8UL)) & p_2053->g_368)))) != (*p_2053->g_198)) | p_49))), p_49)), 8L)), p_2053->g_384)) && 0x2936L) != l_621) > l_621));
                    }
                    l_626[6]--;
                    l_664 ^= (0x643EA027L < ((safe_sub_func_int8_t_s_s((((((*l_379) = (!((*l_662) &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(p_2053->g_67, (safe_mod_func_int8_t_s_s((*l_379), p_2053->g_91[7][1][3])))) != (((!(p_2053->g_661 = ((*l_500) = (((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((*l_383) |= ((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(((*l_659) &= ((*l_658) ^= ((safe_mod_func_int64_t_s_s((((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((p_49 , l_655) == p_49), (0xB4L <= (((*l_656) ^= ((65535UL ^ l_626[4]) ^ p_2053->g_74[0][1])) , 0x73L)))) , 0x29A3L), p_49)) & p_49) & p_2053->g_399), p_49)) == p_2053->g_234[0]))), p_49)), 5)) <= 9UL)), 8UL)) >= p_49) , (*l_379)), 5L)) < l_655) || (**p_2053->g_197))))) ^ l_655) ^ p_2053->g_125[7])), 13)), l_655)), 9L))))) && p_2053->g_94) != 1UL) != p_2053->g_7), p_49)) != (**p_2053->g_197)));
                }
            }
            return l_626[6];
        }
        for (p_2053->g_370 = (-2); (p_2053->g_370 != 3); p_2053->g_370 = safe_add_func_int8_t_s_s(p_2053->g_370, 5))
        { /* block id: 298 */
            uint8_t l_677 = 1UL;
            int32_t l_678 = (-1L);
            int32_t *l_685 = (void*)0;
            int16_t *l_686 = &l_655;
            int32_t l_687 = (-1L);
            int64_t l_688 = 1L;
            int64_t l_691 = 1L;
            int16_t l_751 = 1L;
            int8_t l_789 = 0x50L;
            (*l_379) = (+(-2L));
            for (l_523 = 0; (l_523 <= 2); l_523 += 1)
            { /* block id: 302 */
                int8_t *l_671[6][3] = {{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]},{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]},{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]},{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]},{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]},{&p_2053->g_516[3][3][2],&p_2053->g_516[6][3][0],&p_2053->g_516[6][3][0]}};
                int i, j;
                (*l_379) ^= ((safe_mod_func_int8_t_s_s((0x6CA3L < (1L < ((l_678 = (safe_mul_func_uint16_t_u_u(((p_2053->g_516[7][3][0] ^= ((l_57[l_523] , l_500) != (*p_2053->g_197))) != (((safe_unary_minus_func_uint64_t_u(l_57[l_523])) != (l_57[l_523] | ((0x7A439CBEL & (safe_div_func_uint16_t_u_u(((*l_387) = ((l_655 == p_49) <= l_677)), p_2053->g_72[4]))) <= p_2053->g_150))) == 2L)), p_2053->g_234[0]))) && 1UL))), 0x1EL)) || p_2053->g_657);
                if (l_655)
                    continue;
                for (p_2053->g_389 = 0; (p_2053->g_389 <= 2); p_2053->g_389 += 1)
                { /* block id: 310 */
                    for (l_677 = 0; (l_677 <= 2); l_677 += 1)
                    { /* block id: 313 */
                        if (l_57[l_523])
                            break;
                    }
                }
            }
            for (l_522 = (-25); (l_522 > (-29)); l_522 = safe_sub_func_int16_t_s_s(l_522, 2))
            { /* block id: 320 */
                int64_t l_705 = 0x54A68393AC0714BCL;
                uint16_t *l_710 = &p_2053->g_8;
                uint8_t l_780 = 0xD7L;
                int32_t l_781 = 0x70BED274L;
                l_688 = (p_2053->g_388[0][2][5] >= ((((safe_lshift_func_uint8_t_u_u(((((((*l_379) = p_49) | (safe_add_func_uint8_t_u_u(0x5EL, p_49))) & (l_685 == l_685)) | (0x68DBL & (((((*p_2053->g_298) = l_677) , l_686) == l_686) == (*p_2053->g_198)))) ^ l_687), p_49)) > p_2053->g_388[0][2][5]) <= 0x527E07600297F140L) & p_2053->g_150));
            }
            for (l_803 = 4; (l_803 != (-13)); l_803 = safe_sub_func_int8_t_s_s(l_803, 3))
            { /* block id: 373 */
                int32_t *l_807 = &l_57[1];
                int8_t *l_810 = &p_2053->g_516[9][2][0];
                uint64_t *l_811 = (void*)0;
                uint64_t *l_812[8] = {(void*)0,&p_2053->g_74[0][1],(void*)0,(void*)0,&p_2053->g_74[0][1],(void*)0,(void*)0,&p_2053->g_74[0][1]};
                int i;
                l_807 = func_62((*l_616), l_383, p_2053);
                p_2053->g_96 |= (safe_mod_func_uint64_t_u_u((p_49 |= (p_2053->g_8 ^ ((*l_810) ^= (*l_807)))), (*l_379)));
                if (p_49)
                    continue;
            }
        }
    }
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_389 p_2053->g_94 p_2053->g_234 p_2053->g_72 p_2053->g_8 p_2053->g_74 p_2053->g_77 p_2053->g_89 p_2053->g_4 p_2053->g_96 p_2053->g_99 p_2053->g_67 p_2053->g_51 p_2053->g_91 p_2053->g_197 p_2053->g_7 p_2053->g_150 p_2053->g_198 p_2053->g_300 p_2053->g_125 p_2053->g_326 p_2053->g_399
 * writes: p_2053->g_389 p_2053->g_228 p_2053->g_67 p_2053->g_72 p_2053->g_74 p_2053->g_89 p_2053->g_94 p_2053->g_96 p_2053->g_99 p_2053->g_125 p_2053->g_51 p_2053->g_150 p_2053->g_91 p_2053->g_234 p_2053->g_298 p_2053->g_300 p_2053->g_326 p_2053->g_301 p_2053->g_368 p_2053->g_370
 */
uint64_t  func_52(int32_t * p_53, int32_t  p_54, struct S0 * p_2053)
{ /* block id: 136 */
    for (p_2053->g_389 = 0; (p_2053->g_389 > (-16)); p_2053->g_389--)
    { /* block id: 139 */
        int8_t l_392 = 0L;
        int32_t **l_398 = &p_2053->g_99;
        if (l_392)
            break;
        for (p_2053->g_228 = 0; (p_2053->g_228 != 20); p_2053->g_228 = safe_add_func_uint32_t_u_u(p_2053->g_228, 1))
        { /* block id: 143 */
            int8_t l_397 = 0x5DL;
            for (p_2053->g_67 = 0; (p_2053->g_67 <= 43); p_2053->g_67++)
            { /* block id: 146 */
                return p_2053->g_94;
            }
            if (l_397)
                continue;
        }
        (*l_398) = func_55(p_2053->g_234[0], p_2053);
        if ((*p_53))
            continue;
    }
    return p_2053->g_399;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_72 p_2053->g_8 p_2053->g_74 p_2053->g_77 p_2053->g_89 p_2053->g_4 p_2053->g_96 p_2053->g_99 p_2053->g_67 p_2053->g_94 p_2053->g_51 p_2053->g_91 p_2053->g_197 p_2053->g_7 p_2053->g_150 p_2053->g_234 p_2053->g_198 p_2053->g_300 p_2053->g_125 p_2053->g_326
 * writes: p_2053->g_72 p_2053->g_74 p_2053->g_89 p_2053->g_94 p_2053->g_96 p_2053->g_99 p_2053->g_125 p_2053->g_51 p_2053->g_150 p_2053->g_91 p_2053->g_67 p_2053->g_228 p_2053->g_234 p_2053->g_298 p_2053->g_300 p_2053->g_326 p_2053->g_301 p_2053->g_368 p_2053->g_370
 */
int32_t * func_55(int16_t  p_56, struct S0 * p_2053)
{ /* block id: 25 */
    uint32_t *l_60 = &p_2053->g_51;
    uint16_t *l_101 = (void*)0;
    uint8_t *l_102 = (void*)0;
    int32_t l_117 = 1L;
    int32_t l_122 = 0x09E7F0AFL;
    int32_t **l_123 = &p_2053->g_99;
    int32_t l_160 = 0x13449551L;
    int32_t l_164 = 0x29FD3CF2L;
    int32_t l_168 = 0x4F36AFE7L;
    int32_t l_169[5][7][7] = {{{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)}},{{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)}},{{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)}},{{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)}},{{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)},{0x24E93014L,0x24E93014L,0x0625BB58L,0x69AE68F2L,(-6L),(-8L),(-1L)}}};
    int32_t l_207 = 8L;
    int64_t *l_296 = &p_2053->g_228;
    int i, j, k;
    for (p_56 = 0; (p_56 <= (-20)); --p_56)
    { /* block id: 28 */
        uint32_t *l_61 = &p_2053->g_51;
        uint16_t *l_65 = &p_2053->g_8;
        uint8_t *l_66 = &p_2053->g_67;
        int32_t *l_103 = &p_2053->g_72[1];
        int8_t l_153 = 0x42L;
        int32_t l_158 = (-5L);
        int32_t l_161 = 0x5CA7D67CL;
        int32_t l_165[2];
        int64_t l_244 = 1L;
        int32_t l_288[6];
        int64_t *l_295 = &p_2053->g_228;
        int i;
        for (i = 0; i < 2; i++)
            l_165[i] = 0x3B64E573L;
        for (i = 0; i < 6; i++)
            l_288[i] = 1L;
        if (((l_60 = &p_2053->g_51) != l_61))
        { /* block id: 30 */
            int32_t *l_98[7][6] = {{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9},{&p_2053->g_72[6],&p_2053->g_72[6],&p_2053->g_96,&p_2053->g_9,&p_2053->g_4,&p_2053->g_9}};
            int32_t **l_97[2][1][9] = {{{&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[4][3]}},{{&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[5][0],&l_98[4][3],&l_98[5][0],&l_98[4][3]}}};
            uint8_t *l_100 = &p_2053->g_67;
            int32_t *l_233 = &p_2053->g_234[0];
            int16_t *l_235 = &p_2053->g_125[7];
            uint16_t l_242 = 0x33FBL;
            uint32_t l_243 = 0xC2746B81L;
            int i, j, k;
            p_2053->g_99 = func_62(l_65, l_66, p_2053);
            if ((l_100 != &p_2053->g_67))
            { /* block id: 42 */
                if ((*p_2053->g_99))
                    break;
            }
            else
            { /* block id: 44 */
                uint32_t l_116 = 0UL;
                int16_t *l_124 = &p_2053->g_125[7];
                int32_t l_159[2][2];
                uint16_t l_172 = 0xC6D4L;
                uint16_t **l_199 = &p_2053->g_198;
                int32_t l_203[8] = {0x7F1D9F50L,(-1L),0x7F1D9F50L,0x7F1D9F50L,(-1L),0x7F1D9F50L,0x7F1D9F50L,(-1L)};
                uint16_t *l_229 = &l_172;
                int32_t *l_230 = &l_203[5];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_159[i][j] = 0x6043946FL;
                }
                if (p_56)
                    break;
                l_103 = func_62(l_101, l_102, p_2053);
                if ((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((p_2053->g_96 , &p_2053->g_8) == (((*l_124) = (((p_56 , (l_122 |= ((((safe_mul_func_int8_t_s_s((0x320E94A997FCA463L ^ ((p_2053->g_74[0][0] < (safe_mul_func_int8_t_s_s(l_116, 0L))) , l_117)), (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_2053->g_72[1], 0x2DL)), (*p_2053->g_99))))) >= 0x01L) != 1UL) , (*p_2053->g_99)))) , &l_103) == l_123)) , (void*)0)) > 0x50E2L), (*l_103))), 0x222EFFBDL)), 1L)), p_2053->g_67)) | p_56) >= p_2053->g_94))
                { /* block id: 49 */
                    uint64_t *l_149 = &p_2053->g_150;
                    uint16_t **l_151 = (void*)0;
                    uint16_t **l_152 = &l_65;
                    p_2053->g_96 = ((((**l_123) = (--p_2053->g_51)) | ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int32_t_s_s((-2L), p_56)) == ((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(1L, (((safe_mod_func_uint64_t_u_u(p_2053->g_94, (safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((*l_149) = (safe_rshift_func_uint8_t_u_s((0x66428892L >= p_56), 1))) , p_56), ((((*l_152) = &p_2053->g_8) == &p_2053->g_8) ^ p_56))), l_153)), p_2053->g_67)) ^ p_2053->g_74[0][2]), 1UL)))) != p_56) && (-8L)))) , p_56), 0UL)) & p_2053->g_67)))) ^ p_2053->g_8), p_2053->g_91[2][3][1])) == p_56)) , 7L);
                }
                else
                { /* block id: 55 */
                    int64_t l_156 = 0x42E77F79E9FF3C38L;
                    uint8_t l_157 = 6UL;
                    int32_t l_162 = 0x1F002BF4L;
                    int32_t l_163 = 0L;
                    int32_t l_166 = 1L;
                    int32_t l_167 = 0x2910136EL;
                    int32_t l_170 = 0x579F787DL;
                    int32_t l_171[5] = {4L,4L,4L,4L,4L};
                    uint16_t *l_181 = &p_2053->g_8;
                    int8_t l_205[2];
                    uint16_t l_208 = 0UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_205[i] = (-8L);
                    (*l_123) = (void*)0;
                    l_157 ^= ((safe_lshift_func_uint16_t_u_s(l_156, 9)) >= p_2053->g_72[0]);
                    --l_172;
                    if (((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((&l_157 == &p_2053->g_67), (p_2053->g_74[0][1] , p_2053->g_8))), (((((!(safe_div_func_uint64_t_u_u(((l_181 == ((safe_sub_func_int32_t_s_s((*l_103), p_56)) , (void*)0)) == p_56), p_56))) , p_2053->g_4) & p_2053->g_72[1]) , l_172) || 1UL))) ^ 0x6DA8L))
                    { /* block id: 59 */
                        uint32_t *l_190 = &p_2053->g_91[4][4][3];
                        uint64_t *l_202[2];
                        int32_t l_204 = 0x52E694BAL;
                        int32_t l_206 = 0x0A756052L;
                        int64_t *l_227 = &p_2053->g_228;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_202[i] = &p_2053->g_74[0][1];
                        l_204 ^= (safe_mod_func_int64_t_s_s((65534UL || (l_203[5] = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((--(*l_190)) , p_56), p_2053->g_94)), ((safe_add_func_int64_t_s_s(((++(*l_100)) && p_56), ((l_199 = p_2053->g_197) != ((p_56 , ((l_159[1][1] |= (safe_sub_func_uint16_t_u_u(0xEA13L, ((*l_103) > p_56)))) > p_2053->g_51)) , &p_2053->g_198)))) , 0x77L))) & p_56))), 0x19B3750E86C6B0ADL));
                        l_208--;
                        (*l_103) = (safe_sub_func_int64_t_s_s(p_2053->g_72[1], (safe_div_func_uint8_t_u_u(((*l_103) == ((7L & ((safe_rshift_func_int16_t_s_u(((((safe_mul_func_uint8_t_u_u((((((((*l_100) &= (safe_sub_func_uint64_t_u_u(l_206, (safe_div_func_uint64_t_u_u((((((safe_div_func_int32_t_s_s((((-1L) && (l_206 >= 0xD8L)) || (safe_add_func_uint32_t_u_u(p_56, ((((((*l_227) = ((0L ^ p_2053->g_91[7][1][3]) || 0x5890436EL)) , p_56) && 0x7F09A42ADB1AD04EL) < p_56) & p_56)))), 0x47195CB3L)) , (void*)0) != &l_103) || 0L) ^ 1L), l_156))))) >= p_2053->g_72[1]) , p_2053->g_91[7][1][3]) || l_204) & (*l_103)) , p_56), 0x45L)) != p_2053->g_72[4]) <= 0x7BF04F6DF07101F3L) & p_56), 15)) <= p_56)) | p_2053->g_7)), 1UL))));
                    }
                    else
                    { /* block id: 70 */
                        p_2053->g_99 = (*l_123);
                    }
                }
                l_230 = func_62(l_229, l_66, p_2053);
            }
            l_165[0] &= (safe_lshift_func_uint16_t_u_s(p_56, ((((l_235 = (((*l_103) = ((*l_233) = p_56)) , &p_2053->g_125[7])) != &p_56) , (((((1L | (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((p_56 , p_56), ((safe_lshift_func_int16_t_s_s((p_2053->g_150 > ((((p_2053->g_89 || p_2053->g_67) ^ l_242) != p_2053->g_7) > 0xBABFCD6ECBC03DADL)), p_2053->g_234[0])) , l_243))), p_2053->g_94))) >= l_244) , p_2053->g_94) == 0x039DL) , (-7L))) | p_2053->g_94)));
        }
        else
        { /* block id: 80 */
            uint64_t *l_255 = &p_2053->g_74[0][2];
            int32_t l_279[2][7] = {{0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L},{0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L,0x29C8A471L}};
            int32_t **l_313 = &p_2053->g_301;
            int32_t ***l_312 = &l_313;
            int16_t *l_365 = &p_2053->g_125[7];
            int16_t *l_366 = &p_2053->g_326;
            uint16_t *l_367 = &p_2053->g_368;
            int16_t *l_369 = &p_2053->g_370;
            int i, j;
            l_164 |= (p_56 , ((safe_sub_func_int32_t_s_s(9L, (safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((*l_255)--), (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0xBB20481DL, (0x06L || ((0xF02BL ^ (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((*l_103), (safe_mod_func_uint32_t_u_u((p_56 ^ (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(((void*)0 == &p_2053->g_94), 65535UL)))), p_2053->g_4)), 4)) == (*l_103)) == p_56), 0x4D1F4282L))), l_168)))) == p_56), p_56))) == p_56)))) & p_2053->g_8), (**p_2053->g_197))))), 0x98L)), 0x7C2F7F7D65FC6833L)) >= (*l_103)), p_56)))) , (*l_103)));
            if (((p_56 | (*l_103)) ^ p_2053->g_72[0]))
            { /* block id: 83 */
                uint64_t l_289[7][8] = {{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL},{18446744073709551611UL,0UL,1UL,0x93BFC38B602A20DFL,1UL,0UL,18446744073709551611UL,1UL}};
                int8_t *l_299 = &l_153;
                int16_t *l_311 = &p_2053->g_125[7];
                int32_t l_327[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_327[i] = 0x66010BBAL;
                for (l_117 = 0; (l_117 == 2); ++l_117)
                { /* block id: 86 */
                    int32_t *l_280 = &l_165[1];
                    int32_t *l_281 = &l_279[0][6];
                    int32_t *l_282 = &l_279[1][3];
                    int32_t *l_283 = &l_169[0][4][4];
                    int32_t *l_284 = &p_2053->g_72[1];
                    int32_t *l_285 = &p_2053->g_96;
                    int32_t *l_286 = &l_164;
                    int32_t *l_287[6];
                    uint32_t *l_322 = &p_2053->g_91[7][1][3];
                    uint32_t **l_321 = &l_322;
                    int64_t *l_323 = (void*)0;
                    int64_t *l_324 = &l_244;
                    int16_t *l_325 = &p_2053->g_326;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_287[i] = &l_165[0];
                    l_289[5][4]--;
                    for (l_168 = 3; (l_168 >= 0); l_168 -= 1)
                    { /* block id: 90 */
                        uint32_t **l_294 = &l_61;
                        int64_t **l_297[7][10] = {{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295},{(void*)0,(void*)0,&l_295,(void*)0,&l_296,&l_295,&l_296,&l_296,&l_296,&l_295}};
                        int32_t * volatile **l_302[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_302[i] = &p_2053->g_300;
                        (*l_280) &= (p_2053->g_72[(l_168 + 1)] = (((((p_56 , (safe_mul_func_uint16_t_u_u((((*l_294) = func_62((*p_2053->g_197), l_66, p_2053)) != (void*)0), (((*p_2053->g_198) , (p_2053->g_234[0] != (l_295 != (p_2053->g_298 = l_296)))) > p_2053->g_7)))) , &p_2053->g_94) == l_299) == 4294967295UL) | p_56));
                        p_2053->g_300 = p_2053->g_300;
                    }
                    (*l_280) = (safe_rshift_func_uint16_t_u_s(0x1373L, 9));
                    (*l_286) |= (((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((l_311 != &p_56) , l_312) != (void*)0), (safe_mod_func_int8_t_s_s(p_2053->g_72[1], p_2053->g_91[3][4][3])))), (((((((**l_312) = (((safe_mul_func_int8_t_s_s((((p_2053->g_125[7] == (l_327[0] = ((+(safe_unary_minus_func_uint16_t_u((**p_2053->g_197)))) | ((*l_325) |= (safe_div_func_uint32_t_u_u(((((*l_324) = ((((*l_321) = &p_2053->g_91[3][0][2]) == l_61) < (-1L))) && p_2053->g_72[2]) >= l_289[5][4]), (-1L))))))) < p_2053->g_72[1]) & 0xE5B5EF81E7EB0D78L), p_2053->g_4)) | (*p_2053->g_198)) , l_287[3])) != l_60) || p_56) & 4294967288UL) | l_279[1][3]) , 0UL))), p_2053->g_51)) , (*l_103)) , p_56);
                }
            }
            else
            { /* block id: 105 */
                int64_t **l_341 = &p_2053->g_298;
                int32_t *l_347[4][8] = {{&p_2053->g_7,&p_2053->g_72[1],&l_165[1],(void*)0,&l_164,&p_2053->g_7,(void*)0,(void*)0},{&p_2053->g_7,&p_2053->g_72[1],&l_165[1],(void*)0,&l_164,&p_2053->g_7,(void*)0,(void*)0},{&p_2053->g_7,&p_2053->g_72[1],&l_165[1],(void*)0,&l_164,&p_2053->g_7,(void*)0,(void*)0},{&p_2053->g_7,&p_2053->g_72[1],&l_165[1],(void*)0,&l_164,&p_2053->g_7,(void*)0,(void*)0}};
                uint64_t l_348[2][5][7] = {{{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL}},{{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL},{0xF7F2B848C472A42CL,0x5AC11CBEC437ABDAL,1UL,0x0E682F7A6DE3D146L,1UL,0x5AC11CBEC437ABDAL,0xF7F2B848C472A42CL}}};
                int i, j, k;
                for (p_2053->g_67 = 0; (p_2053->g_67 >= 17); p_2053->g_67 = safe_add_func_int64_t_s_s(p_2053->g_67, 4))
                { /* block id: 108 */
                    int64_t l_332[4];
                    int32_t *l_342 = &l_207;
                    int32_t **l_343 = &p_2053->g_301;
                    int32_t ***l_344 = &l_343;
                    int16_t *l_345 = &p_2053->g_125[7];
                    int32_t *l_346 = &l_165[1];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_332[i] = 0x25B732AD42B0A204L;
                    (*l_123) = func_62((*p_2053->g_197), &p_2053->g_67, p_2053);
                    if ((*p_2053->g_99))
                        break;
                    (*l_346) |= (p_2053->g_96 ^= (safe_div_func_uint64_t_u_u((l_279[1][6] , (((*l_345) = (((((+l_332[1]) ^ ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(p_2053->g_74[0][1], (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(((((**l_123) , p_2053->g_91[5][5][3]) , l_341) == (((*l_342) = 1L) , ((&p_2053->g_301 != ((*l_344) = ((*l_312) = l_343))) , l_341))), (*l_103))) ^ p_56), 3)))) | 18446744073709551614UL), p_56)) > p_56)) || p_56) == l_332[2]) > (**l_123))) > (**l_123))), p_56)));
                }
                if (l_279[1][3])
                    break;
                l_348[1][0][3]++;
            }
            l_117 &= ((*l_103) ^= 0x66268CC5L);
            (*l_103) = (safe_add_func_int8_t_s_s((((~(((*l_369) = (safe_mul_func_uint16_t_u_u((((p_56 ^ ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0xE7A89DF4L, ((l_279[1][3] ^ (((((p_56 >= ((*l_367) = ((safe_add_func_uint8_t_u_u(0x3CL, ((*l_66) &= p_56))) != (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(p_2053->g_74[0][1], p_2053->g_7)), ((*l_366) = ((*l_365) = (p_56 <= (*l_103))))))))) , p_2053->g_8) , 0UL) <= p_56) != p_2053->g_89)) <= 0L))), 0UL)) < p_56)) > (*l_103)) <= p_2053->g_234[0]), 65532UL))) == p_56)) || p_2053->g_91[7][1][3]) , l_279[1][3]), p_56));
        }
    }
    return &p_2053->g_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_2053->g_72 p_2053->g_8 p_2053->g_74 p_2053->g_77 p_2053->g_89 p_2053->g_4 p_2053->g_96
 * writes: p_2053->g_72 p_2053->g_74 p_2053->g_89 p_2053->g_94 p_2053->g_96
 */
int32_t * func_62(uint16_t * p_63, uint8_t * p_64, struct S0 * p_2053)
{ /* block id: 31 */
    uint16_t *l_68 = &p_2053->g_8;
    uint16_t *l_70 = &p_2053->g_8;
    uint16_t **l_69 = &l_70;
    int32_t *l_71 = &p_2053->g_72[1];
    uint64_t *l_73 = &p_2053->g_74[0][1];
    uint64_t *l_88 = &p_2053->g_89;
    uint32_t *l_90[9][7] = {{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]},{&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[7][1][3],&p_2053->g_91[7][1][3],&p_2053->g_91[1][2][3],&p_2053->g_91[1][2][3]}};
    int32_t l_92 = 0x5F0EF6F4L;
    int8_t *l_93 = &p_2053->g_94;
    int32_t *l_95 = &p_2053->g_96;
    int i, j;
    (*l_71) |= (l_68 == ((*l_69) = p_63));
    (*l_95) |= (((*l_93) = (p_2053->g_8 | (((((*l_73)++) & 18446744073709551615UL) == (&p_63 == (void*)0)) <= (&l_70 != ((l_92 = ((*l_71) = (((void*)0 != p_2053->g_77) || ((safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint64_t_u_u(((*l_88) &= ((((*l_71) & (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((((((-4L) > (*l_71)) || (*l_71)) && 0UL) != (*l_71)), (*l_71))), (*l_71))), (*l_71)))) <= (*l_71)) && p_2053->g_72[1])), (*l_71))) && 0UL) < p_2053->g_4))) > (*l_71))))) , (void*)0))))) , p_2053->g_8);
    return &p_2053->g_72[1];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2054;
    struct S0* p_2053 = &c_2054;
    struct S0 c_2055 = {
        {{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L},{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L},{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L},{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L},{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L},{0L,0L,0x51449BABL,1L,0x2EC28784L,1L,0x51449BABL,0L,0L}}, // p_2053->g_3
        0x0900DD03L, // p_2053->g_4
        1L, // p_2053->g_5
        {0L,0L,0L,0L}, // p_2053->g_6
        0x71356723L, // p_2053->g_7
        1UL, // p_2053->g_8
        0x5ED357DCL, // p_2053->g_9
        5L, // p_2053->g_32
        {0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL}, // p_2053->g_41
        0UL, // p_2053->g_47
        4294967295UL, // p_2053->g_51
        0x3DL, // p_2053->g_67
        {1L,1L,1L,1L,1L,1L,1L}, // p_2053->g_72
        {{1UL,1UL,1UL,1UL,1UL,1UL}}, // p_2053->g_74
        0xDA29A6A910B13A75L, // p_2053->g_78
        &p_2053->g_78, // p_2053->g_77
        0xC429AA74C462F112L, // p_2053->g_89
        {{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}},{{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L},{0xEBF7ADE5L,7UL,0UL,0xEBF7ADE5L}}}, // p_2053->g_91
        1L, // p_2053->g_94
        (-1L), // p_2053->g_96
        (void*)0, // p_2053->g_99
        {0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL,0x6A1EL}, // p_2053->g_125
        18446744073709551609UL, // p_2053->g_150
        &p_2053->g_8, // p_2053->g_198
        &p_2053->g_198, // p_2053->g_197
        0x066E181E8E284A5FL, // p_2053->g_228
        {0x7AAD5573L}, // p_2053->g_234
        &p_2053->g_228, // p_2053->g_298
        &p_2053->g_234[0], // p_2053->g_301
        &p_2053->g_301, // p_2053->g_300
        4L, // p_2053->g_326
        0x4405L, // p_2053->g_368
        0x7D2CL, // p_2053->g_370
        0x17D30F8CL, // p_2053->g_380
        0x88L, // p_2053->g_384
        {{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}},{{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL},{0x47D8L,6UL,0x5F3DL,0xCA11L,0xC0E3L,0xC0E3L,0xCA11L,0x5F3DL}}}, // p_2053->g_388
        0x0CB7659AL, // p_2053->g_389
        0x3BA7L, // p_2053->g_399
        6L, // p_2053->g_407
        (void*)0, // p_2053->g_445
        4294967295UL, // p_2053->g_446
        {{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}},{{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL},{1L,0x25L,0x6EL}}}, // p_2053->g_516
        {0xD4E8FBF5B36224E2L,0xD4E8FBF5B36224E2L,0xD4E8FBF5B36224E2L}, // p_2053->g_562
        1UL, // p_2053->g_657
        1L, // p_2053->g_660
        0x677BL, // p_2053->g_661
        (-5L), // p_2053->g_663
        0L, // p_2053->g_719
        0x6CL, // p_2053->g_926
        0x3928L, // p_2053->g_944
        0x1424L, // p_2053->g_945
        0x0DF2L, // p_2053->g_946
        (-7L), // p_2053->g_947
        0x6140L, // p_2053->g_948
        0x0CADL, // p_2053->g_949
        {3L,3L,3L,3L,3L,3L,3L,3L}, // p_2053->g_950
        (-4L), // p_2053->g_951
        (-6L), // p_2053->g_952
        0x3A9CL, // p_2053->g_953
        0x3D7FL, // p_2053->g_954
        0x0D90L, // p_2053->g_955
        (-8L), // p_2053->g_956
        0x7A63L, // p_2053->g_957
        1L, // p_2053->g_958
        {{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}},{{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L},{0x39EFL,0x65A7L,0x65A7L}}}, // p_2053->g_959
        0x494BL, // p_2053->g_960
        (-8L), // p_2053->g_961
        {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_2053->g_962
        {{{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956}},{{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956}},{{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956}},{{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956}},{{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956},{&p_2053->g_946,&p_2053->g_949,&p_2053->g_956}}}, // p_2053->g_943
        &p_2053->g_943[1][3][0], // p_2053->g_942
        &p_2053->g_99, // p_2053->g_1094
        &p_2053->g_3[2][6], // p_2053->g_1145
        &p_2053->g_99, // p_2053->g_1148
        {{{&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5]},{&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5]},{&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5]},{&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5],&p_2053->g_388[0][2][5]}}}, // p_2053->g_1155
        0x3FL, // p_2053->g_1176
        &p_2053->g_926, // p_2053->g_1253
        {{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}},{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}},{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}},{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}},{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}},{{&p_2053->g_1253,&p_2053->g_1253,(void*)0,&p_2053->g_1253,(void*)0,&p_2053->g_1253,&p_2053->g_1253,&p_2053->g_1253,(void*)0}}}, // p_2053->g_1252
        &p_2053->g_1253, // p_2053->g_1254
        &p_2053->g_99, // p_2053->g_1306
        &p_2053->g_1306, // p_2053->g_1305
        0xC7185C256EF191FBL, // p_2053->g_1314
        7UL, // p_2053->g_1391
        {{&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391},{&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391},{&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391},{&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391},{&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391,&p_2053->g_1391}}, // p_2053->g_1390
        &p_2053->g_1390[4][3], // p_2053->g_1389
        {{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL},{65535UL,65532UL}}, // p_2053->g_1409
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_2053->g_1491
        &p_2053->g_370, // p_2053->g_1524
        &p_2053->g_1524, // p_2053->g_1523
        {{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L},{0x2F295997L,0x2F295997L,1UL,0x5BCFC4D9L}}, // p_2053->g_1587
        {{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}},{{0xC0B8755CC271AE19L,3UL}}}, // p_2053->g_1613
        (-9L), // p_2053->g_1687
        (void*)0, // p_2053->g_1690
        {&p_2053->g_1690,&p_2053->g_1690,&p_2053->g_1690}, // p_2053->g_1689
        4294967292UL, // p_2053->g_1703
        0xAD6CL, // p_2053->g_1835
        0x437ABAE8L, // p_2053->g_1882
        0UL, // p_2053->g_1956
        0x715F833B014EBBF1L, // p_2053->g_1979
        0x59FF775714E60344L, // p_2053->g_1985
        &p_2053->g_1979, // p_2053->g_2000
    };
    c_2054 = c_2055;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2053);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2053->g_3[i][j], "p_2053->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2053->g_4, "p_2053->g_4", print_hash_value);
    transparent_crc(p_2053->g_5, "p_2053->g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2053->g_6[i], "p_2053->g_6[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_7, "p_2053->g_7", print_hash_value);
    transparent_crc(p_2053->g_8, "p_2053->g_8", print_hash_value);
    transparent_crc(p_2053->g_9, "p_2053->g_9", print_hash_value);
    transparent_crc(p_2053->g_32, "p_2053->g_32", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2053->g_41[i], "p_2053->g_41[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_47, "p_2053->g_47", print_hash_value);
    transparent_crc(p_2053->g_51, "p_2053->g_51", print_hash_value);
    transparent_crc(p_2053->g_67, "p_2053->g_67", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2053->g_72[i], "p_2053->g_72[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_2053->g_74[i][j], "p_2053->g_74[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2053->g_78, "p_2053->g_78", print_hash_value);
    transparent_crc(p_2053->g_89, "p_2053->g_89", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2053->g_91[i][j][k], "p_2053->g_91[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2053->g_94, "p_2053->g_94", print_hash_value);
    transparent_crc(p_2053->g_96, "p_2053->g_96", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2053->g_125[i], "p_2053->g_125[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_150, "p_2053->g_150", print_hash_value);
    transparent_crc(p_2053->g_228, "p_2053->g_228", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2053->g_234[i], "p_2053->g_234[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_326, "p_2053->g_326", print_hash_value);
    transparent_crc(p_2053->g_368, "p_2053->g_368", print_hash_value);
    transparent_crc(p_2053->g_370, "p_2053->g_370", print_hash_value);
    transparent_crc(p_2053->g_380, "p_2053->g_380", print_hash_value);
    transparent_crc(p_2053->g_384, "p_2053->g_384", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2053->g_388[i][j][k], "p_2053->g_388[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2053->g_389, "p_2053->g_389", print_hash_value);
    transparent_crc(p_2053->g_399, "p_2053->g_399", print_hash_value);
    transparent_crc(p_2053->g_407, "p_2053->g_407", print_hash_value);
    transparent_crc(p_2053->g_446, "p_2053->g_446", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2053->g_516[i][j][k], "p_2053->g_516[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2053->g_562[i], "p_2053->g_562[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_657, "p_2053->g_657", print_hash_value);
    transparent_crc(p_2053->g_660, "p_2053->g_660", print_hash_value);
    transparent_crc(p_2053->g_661, "p_2053->g_661", print_hash_value);
    transparent_crc(p_2053->g_663, "p_2053->g_663", print_hash_value);
    transparent_crc(p_2053->g_719, "p_2053->g_719", print_hash_value);
    transparent_crc(p_2053->g_926, "p_2053->g_926", print_hash_value);
    transparent_crc(p_2053->g_944, "p_2053->g_944", print_hash_value);
    transparent_crc(p_2053->g_945, "p_2053->g_945", print_hash_value);
    transparent_crc(p_2053->g_946, "p_2053->g_946", print_hash_value);
    transparent_crc(p_2053->g_947, "p_2053->g_947", print_hash_value);
    transparent_crc(p_2053->g_948, "p_2053->g_948", print_hash_value);
    transparent_crc(p_2053->g_949, "p_2053->g_949", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2053->g_950[i], "p_2053->g_950[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_951, "p_2053->g_951", print_hash_value);
    transparent_crc(p_2053->g_952, "p_2053->g_952", print_hash_value);
    transparent_crc(p_2053->g_953, "p_2053->g_953", print_hash_value);
    transparent_crc(p_2053->g_954, "p_2053->g_954", print_hash_value);
    transparent_crc(p_2053->g_955, "p_2053->g_955", print_hash_value);
    transparent_crc(p_2053->g_956, "p_2053->g_956", print_hash_value);
    transparent_crc(p_2053->g_957, "p_2053->g_957", print_hash_value);
    transparent_crc(p_2053->g_958, "p_2053->g_958", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2053->g_959[i][j][k], "p_2053->g_959[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2053->g_960, "p_2053->g_960", print_hash_value);
    transparent_crc(p_2053->g_961, "p_2053->g_961", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2053->g_962[i], "p_2053->g_962[i]", print_hash_value);

    }
    transparent_crc(p_2053->g_1176, "p_2053->g_1176", print_hash_value);
    transparent_crc(p_2053->g_1314, "p_2053->g_1314", print_hash_value);
    transparent_crc(p_2053->g_1391, "p_2053->g_1391", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2053->g_1409[i][j], "p_2053->g_1409[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_2053->g_1587[i][j], "p_2053->g_1587[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2053->g_1613[i][j][k], "p_2053->g_1613[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2053->g_1687, "p_2053->g_1687", print_hash_value);
    transparent_crc(p_2053->g_1703, "p_2053->g_1703", print_hash_value);
    transparent_crc(p_2053->g_1835, "p_2053->g_1835", print_hash_value);
    transparent_crc(p_2053->g_1882, "p_2053->g_1882", print_hash_value);
    transparent_crc(p_2053->g_1956, "p_2053->g_1956", print_hash_value);
    transparent_crc(p_2053->g_1979, "p_2053->g_1979", print_hash_value);
    transparent_crc(p_2053->g_1985, "p_2053->g_1985", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
