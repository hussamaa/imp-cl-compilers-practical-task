// -g 71,81,1 -l 1,9,1
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


// Seed: 3973629464

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int8_t * f1;
   uint64_t  f2;
   int32_t  f3;
};

union U1 {
   volatile uint32_t  f0;
   int64_t  f1;
   volatile int8_t * f2;
   uint64_t  f3;
};

struct S2 {
    int32_t g_5[8][7];
    int64_t g_13;
    uint16_t g_15;
    union U1 g_26;
    union U1 *g_25;
    uint64_t g_76;
    union U1 g_78;
    int32_t *g_81[9];
    union U1 g_96;
    union U1 g_97[1][7][1];
    uint32_t g_105;
    int8_t g_118;
    int32_t g_135;
    union U1 *g_142;
    union U1 **g_141;
    int8_t g_164[10];
    int8_t *g_163;
    int64_t g_180[3];
    int8_t g_183;
    volatile int32_t g_191;
    int32_t ** volatile g_196;
    int32_t * volatile g_242;
    int32_t * volatile g_243;
    uint8_t g_300[1][3][4];
    uint8_t g_302[8][9][3];
    int32_t *g_373;
    int32_t **g_372;
    union U0 g_386;
    volatile uint16_t ** volatile g_410;
    int32_t g_429[7][2];
    uint16_t *g_444[4];
    uint32_t g_493;
    uint32_t g_551;
    union U0 *g_572;
    union U0 ** volatile g_571;
    uint32_t *g_594;
    union U1 g_600;
    uint64_t *g_625;
    int16_t g_628[6];
    int8_t g_656[6];
    uint16_t g_719;
    int8_t g_747;
    int32_t * volatile g_774;
    int32_t * volatile g_775;
    union U1 **g_855;
    int8_t ** volatile g_872;
    int8_t ** volatile *g_871[5];
    int32_t * volatile g_940;
    int16_t * volatile g_993;
    int16_t * volatile * volatile g_992;
    int16_t * volatile * volatile * volatile g_994;
    union U1 *g_1057;
    uint8_t g_1062;
    int64_t *g_1123;
    int64_t **g_1122;
    uint64_t g_1237;
    int32_t g_1251;
    int64_t *g_1285;
    int64_t **g_1284[2][3];
    int64_t *** volatile g_1283;
    int16_t g_1335;
    volatile int16_t g_1338;
    volatile int16_t * volatile g_1337;
    volatile int16_t g_1340[7];
    volatile int16_t *g_1339;
    volatile int16_t * volatile *g_1336[9][10][2];
    int8_t **g_1374;
    int16_t g_1388;
    int64_t ***g_1455;
    union U1 g_1458;
    int16_t g_1496;
    int32_t *g_1549[3];
    volatile uint16_t g_1560;
    union U1 g_1563[6][1];
    int8_t ***g_1564;
    union U1 *** volatile g_1569;
    union U1 *** volatile *g_1568[4][1][10];
    union U0 ** volatile g_1701;
    int64_t ***g_1726;
    int64_t ****g_1725;
    volatile union U1 g_1737[10];
    volatile union U1 *g_1736;
    int16_t *g_1767;
    int16_t **g_1766;
    int32_t * volatile g_1774;
    int32_t * volatile g_1775;
    int32_t * volatile g_1776[7];
    int32_t * volatile g_1777[8];
    int32_t * volatile g_1817[5][8];
    int32_t * volatile g_1818;
    union U1 g_1826[10];
    int32_t * volatile g_1874;
    union U1 ***g_1890;
    union U1 ****g_1889;
    uint16_t g_2022;
    int64_t g_2094;
    volatile int32_t g_2159[3][6][7];
    union U1 g_2170;
    uint32_t g_2172[10];
    uint32_t g_2185;
    volatile uint64_t g_2200;
    volatile uint64_t g_2201;
    volatile uint64_t g_2202;
    volatile uint64_t g_2203;
    volatile uint64_t g_2204;
    volatile uint64_t g_2205;
    volatile uint64_t g_2206[2];
    volatile uint64_t g_2207;
    volatile uint64_t g_2208[10];
    volatile uint64_t g_2209[2][3];
    volatile uint64_t * volatile g_2199[10][5];
    volatile uint64_t * volatile *g_2198;
    volatile uint64_t * volatile **g_2197;
    uint32_t g_2247[10];
    volatile union U1 *g_2283;
    volatile union U1 g_2284;
    volatile uint16_t *g_2417;
    volatile uint16_t **g_2416;
    volatile uint16_t *** volatile g_2415;
    volatile uint16_t *** volatile *g_2414;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_2421);
union U1 * func_8(int32_t  p_9, int64_t  p_10, struct S2 * p_2421);
int8_t  func_20(union U1 * p_21, int32_t * p_22, int8_t * p_23, int32_t * p_24, struct S2 * p_2421);
int32_t * func_27(union U1 * p_28, struct S2 * p_2421);
union U1 * func_29(union U0  p_30, uint32_t  p_31, union U1 * p_32, struct S2 * p_2421);
union U0  func_33(union U1 * p_34, struct S2 * p_2421);
int32_t  func_36(uint64_t  p_37, union U1 * p_38, int8_t  p_39, uint16_t * p_40, struct S2 * p_2421);
int64_t  func_52(uint64_t  p_53, union U1 * p_54, struct S2 * p_2421);
int32_t * func_55(int64_t  p_56, int32_t  p_57, int32_t  p_58, uint64_t  p_59, int64_t  p_60, struct S2 * p_2421);
int32_t  func_61(union U1 * p_62, int16_t  p_63, int32_t  p_64, union U1 * p_65, struct S2 * p_2421);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2421->g_5
 * writes: p_2421->g_5
 */
int32_t  func_1(struct S2 * p_2421)
{ /* block id: 4 */
    int32_t l_2 = 0x59A924C0L;
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &p_2421->g_5[5][0];
    int32_t l_18 = 3L;
    union U1 ****l_1897 = &p_2421->g_1890;
    union U1 *****l_1898 = &p_2421->g_1889;
    int8_t l_1919[2][5][3];
    int32_t l_2006 = (-1L);
    uint32_t l_2034[1];
    int16_t l_2045 = 0x0934L;
    uint64_t l_2103 = 0UL;
    uint32_t l_2126 = 0xE3B21C55L;
    int32_t l_2131 = 0x5B2E4E43L;
    int32_t l_2134 = 0x31DCDF41L;
    int32_t l_2141 = 0x69137BB0L;
    int64_t l_2142 = (-5L);
    int32_t l_2143 = (-5L);
    int32_t l_2144 = (-2L);
    int32_t l_2148 = 0x6885633DL;
    int32_t *l_2157 = &l_18;
    uint64_t *l_2212 = &p_2421->g_1237;
    uint64_t **l_2211 = &l_2212;
    uint64_t ***l_2210 = &l_2211;
    int64_t l_2224 = 0x3705E7C5DC705003L;
    int8_t l_2246[9][9][3] = {{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}},{{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)},{0x01L,(-8L),(-4L)}}};
    union U0 l_2294 = {0L};
    int32_t l_2394 = (-1L);
    int16_t l_2420 = (-8L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
                l_1919[i][j][k] = 0x7EL;
        }
    }
    for (i = 0; i < 1; i++)
        l_2034[i] = 0UL;
    (*l_4) |= l_2;
    return l_2420;
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_373 p_2421->g_1251 p_2421->g_372 p_2421->g_196 p_2421->g_81 p_2421->g_1388 p_2421->g_302 p_2421->g_141 p_2421->g_142 p_2421->g_97 p_2421->g_429 p_2421->g_163 p_2421->g_1122 p_2421->g_1123 p_2421->g_13 p_2421->g_1564 p_2421->g_1374 p_2421->g_164 p_2421->g_594 p_2421->g_105 p_2421->g_1339 p_2421->g_1340 p_2421->g_1455 p_2421->g_1062 p_2421->g_1335 p_2421->g_191 p_2421->g_1725 p_2421->g_628 p_2421->g_1496 p_2421->g_180 p_2421->g_572 p_2421->g_386 p_2421->g_1889
 * writes: p_2421->g_135 p_2421->g_1251 p_2421->g_373 p_2421->g_1388 p_2421->g_164 p_2421->g_628 p_2421->g_1335 p_2421->g_302 p_2421->g_1062 p_2421->g_572 p_2421->g_15 p_2421->g_493 p_2421->g_1496 p_2421->g_300 p_2421->g_105
 */
union U1 * func_8(int32_t  p_9, int64_t  p_10, struct S2 * p_2421)
{ /* block id: 10 */
    union U1 *l_35 = &p_2421->g_26;
    int8_t *l_1249 = &p_2421->g_656[4];
    int32_t *l_1250 = &p_2421->g_1251;
    int64_t **l_1282[9];
    int64_t ***l_1303 = (void*)0;
    int32_t l_1313 = 0x0C1D172BL;
    int32_t l_1314 = 1L;
    int32_t l_1315[5][2] = {{0x23343C6DL,0L},{0x23343C6DL,0L},{0x23343C6DL,0L},{0x23343C6DL,0L},{0x23343C6DL,0L}};
    int32_t *l_1409 = (void*)0;
    int32_t **l_1408 = &l_1409;
    uint64_t l_1410 = 1UL;
    int32_t l_1424 = 1L;
    int8_t l_1441 = 7L;
    int64_t ***l_1453[7] = {&p_2421->g_1122,&p_2421->g_1122,&p_2421->g_1122,&p_2421->g_1122,&p_2421->g_1122,&p_2421->g_1122,&p_2421->g_1122};
    union U0 l_1457 = {0x2116EC8EL};
    union U1 **l_1506 = &p_2421->g_142;
    union U1 ***l_1566 = &p_2421->g_141;
    union U1 ****l_1565 = &l_1566;
    uint16_t l_1660[6][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
    int16_t l_1699 = 0x6A7AL;
    uint16_t l_1770 = 0x8ED9L;
    int64_t l_1815 = 0x151AA0ECB53A35A2L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_1282[i] = (void*)0;
    for (p_10 = 6; (p_10 >= 0); p_10 -= 1)
    { /* block id: 13 */
        int8_t l_1281 = 0x64L;
        uint8_t *l_1298 = &p_2421->g_1062;
        int64_t ***l_1301 = (void*)0;
        int64_t ****l_1302[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t *l_1308 = &p_2421->g_386.f2;
        int32_t l_1311[7] = {0x7ACECC54L,0x7ACECC54L,0x7ACECC54L,0x7ACECC54L,0x7ACECC54L,0x7ACECC54L,0x7ACECC54L};
        uint8_t l_1317 = 0x58L;
        int16_t *l_1334 = &p_2421->g_1335;
        int16_t **l_1333 = &l_1334;
        int32_t *l_1372 = &p_2421->g_429[1][0];
        int8_t l_1377 = 0L;
        union U0 **l_1394 = &p_2421->g_572;
        union U0 ***l_1393[7] = {&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394};
        uint16_t **l_1413 = &p_2421->g_444[1];
        uint16_t ***l_1412 = &l_1413;
        uint16_t ****l_1411 = &l_1412;
        union U1 ***l_1465[7][9][4] = {{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}},{{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0},{(void*)0,&p_2421->g_855,&p_2421->g_141,(void*)0}}};
        int64_t l_1499 = 0L;
        uint32_t l_1501 = 0xEC246ABFL;
        int i, j, k;
        (1 + 1);
    }
    (*p_2421->g_373) = (-5L);
    for (p_2421->g_1251 = 0; (p_2421->g_1251 > (-14)); p_2421->g_1251 = safe_sub_func_int32_t_s_s(p_2421->g_1251, 1))
    { /* block id: 652 */
        int32_t *l_1509 = &l_1315[3][0];
        int16_t l_1525 = 0L;
        union U1 *l_1552[6] = {&p_2421->g_78,(void*)0,&p_2421->g_78,&p_2421->g_78,(void*)0,&p_2421->g_78};
        int32_t l_1556[5][5][4] = {{{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL}},{{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL}},{{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL}},{{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL}},{{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL},{(-1L),(-1L),0x76C74AA0L,0x00F47A6DL}}};
        uint16_t l_1557 = 1UL;
        uint64_t l_1574 = 4UL;
        union U0 *l_1700 = &l_1457;
        int32_t l_1727 = 0x1BE9037BL;
        int32_t l_1740 = 0L;
        uint64_t l_1753 = 6UL;
        union U1 *l_1846 = (void*)0;
        int i, j, k;
        (*p_2421->g_372) = l_1509;
        for (p_2421->g_1388 = 5; (p_2421->g_1388 >= 1); p_2421->g_1388 -= 1)
        { /* block id: 656 */
            union U1 *l_1510 = &p_2421->g_26;
            int8_t ***l_1517 = &p_2421->g_1374;
            uint8_t l_1534 = 0x7DL;
            int32_t l_1553 = 8L;
            int32_t l_1554[4][8] = {{0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL},{0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL},{0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL},{0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL,0x1D414D3AL}};
            uint8_t l_1605[8][4][8] = {{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}},{{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L},{246UL,0xB4L,247UL,250UL,0x5AL,0x66L,5UL,0x66L}}};
            int i, j, k;
            l_1509 = (*p_2421->g_196);
            for (p_9 = 0; (p_9 >= 0); p_9 -= 1)
            { /* block id: 660 */
                int i, j;
                (1 + 1);
            }
        }
        for (p_9 = 0; (p_9 == 2); p_9++)
        { /* block id: 761 */
            uint32_t l_1638 = 0x67226A68L;
            int64_t **l_1655 = &p_2421->g_1123;
            int32_t l_1669 = 0x3DD7E790L;
            int32_t l_1745[6][8] = {{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)},{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)},{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)},{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)},{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)},{0x452A9382L,(-4L),(-4L),0x452A9382L,(-6L),4L,4L,(-6L)}};
            int8_t l_1752 = 1L;
            int16_t **l_1811 = &p_2421->g_1767;
            int8_t l_1849 = 1L;
            int i, j;
            if (((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((p_10 , ((-2L) > (+(safe_mul_func_int32_t_s_s((+(p_2421->g_1388 >= ((!((*l_1250) && l_1638)) , (safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((*l_1250) , (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((p_2421->g_302[3][8][1] , (((safe_div_func_int8_t_s_s(((**p_2421->g_141) , ((*p_2421->g_163) = ((p_2421->g_429[6][1] <= 0x0DL) < 0x532158A7L))), (*l_1250))) || 0xC59A757EL) >= 0x5A94L)) || l_1638), l_1638)) && (**p_2421->g_1122)), (*l_1250))), 5)), 1))) != p_10), 1L)) && 0x31AE2F7CL), 65535UL))))), 0L))))), l_1638)), l_1638)) , p_9))
            { /* block id: 763 */
                int16_t *l_1661 = &p_2421->g_628[2];
                uint32_t l_1668 = 1UL;
                (*p_2421->g_372) = ((safe_div_func_int16_t_s_s(((void*)0 == l_1655), (l_1669 |= ((safe_div_func_int16_t_s_s(((((***p_2421->g_1564) = (safe_div_func_int16_t_s_s((l_1660[5][0] <= (p_10 & p_9)), ((*l_1661) = l_1638)))) || (**p_2421->g_1374)) & (((safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((p_10 != (((((safe_lshift_func_uint16_t_u_s(p_10, 3)) > p_2421->g_1388) , p_10) >= (*p_2421->g_594)) < p_9)) , p_9), l_1668)) != (*l_1250)), 0x11L)) & (*p_2421->g_1339)) == 0x7E13DD65L)), 1L)) && p_2421->g_164[1])))) , (*p_2421->g_372));
            }
            else
            { /* block id: 768 */
                int16_t l_1698[3];
                uint32_t l_1713 = 4294967288UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1698[i] = 0x2A57L;
                for (p_2421->g_1335 = 0; (p_2421->g_1335 <= 4); p_2421->g_1335 += 1)
                { /* block id: 771 */
                    uint8_t *l_1676 = &p_2421->g_302[1][6][1];
                    int16_t *l_1691 = (void*)0;
                    int16_t *l_1692[3];
                    int32_t l_1693 = 0x6DB2C2C7L;
                    uint8_t *l_1694 = (void*)0;
                    uint8_t *l_1695 = (void*)0;
                    uint8_t *l_1696 = &p_2421->g_1062;
                    int32_t l_1697[3][8] = {{(-1L),2L,0x25975BB4L,2L,(-1L),(-1L),2L,0x25975BB4L},{(-1L),2L,0x25975BB4L,2L,(-1L),(-1L),2L,0x25975BB4L},{(-1L),2L,0x25975BB4L,2L,(-1L),(-1L),2L,0x25975BB4L}};
                    int64_t ****l_1724 = &l_1453[6];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1692[i] = &p_2421->g_628[2];
                    (*p_2421->g_373) |= (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((((l_1697[0][4] |= ((*l_1696) |= ((safe_rshift_func_int8_t_s_s(((((((*l_1676) = 3UL) | (safe_div_func_uint32_t_u_u(p_10, (safe_mul_func_uint16_t_u_u(4UL, p_9))))) , (65535UL & ((((l_1693 = ((safe_sub_func_int64_t_s_s((((~((p_10 && (((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_10, (+p_9))), (((safe_mod_func_int64_t_s_s((l_1669 = (safe_lshift_func_uint8_t_u_u(((*p_2421->g_594) & 1L), 3))), (*l_1250))) == 0x9940L) || (***p_2421->g_1455)))) <= 1UL) <= (-5L))) , p_9)) || 0x45A230DB6F473321L) && p_9), p_9)) , (*p_2421->g_1339))) || 6UL) >= 0x5AC24F38L) | 4294967295UL))) == 255UL) >= (-4L)), (*l_1250))) ^ 0L))) >= l_1698[2]) >= (-3L)), 15)) && l_1699), p_10));
                    for (l_1574 = 0; (l_1574 <= 3); l_1574 += 1)
                    { /* block id: 780 */
                        union U0 **l_1702 = &p_2421->g_572;
                        int i, j, k;
                        (*l_1702) = l_1700;
                        (*p_2421->g_373) = ((((l_1727 = (safe_mul_func_int16_t_s_s(((l_1556[p_2421->g_1335][p_2421->g_1335][l_1574] = ((0xFEL > 0x5FL) == (safe_add_func_int32_t_s_s(l_1556[p_2421->g_1335][p_2421->g_1335][l_1574], ((l_1556[p_2421->g_1335][p_2421->g_1335][l_1574] , l_1697[2][1]) >= ((((safe_mul_func_uint8_t_u_u(p_2421->g_191, ((((safe_rshift_func_int8_t_s_u(((!((l_1713 | (safe_mul_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((((p_10 , ((safe_rshift_func_int8_t_s_s((l_1724 == &p_2421->g_1455), l_1556[p_2421->g_1335][p_2421->g_1335][l_1574])) & 6L)) != p_9) < 0UL), (*l_1250))), 14)) == l_1556[p_2421->g_1335][p_2421->g_1335][l_1574]) >= p_9) , p_9), 0xBC17L))) == 0UL)) == 0x8222683E64B60929L), 5)) == p_9) , p_2421->g_1725) != (void*)0))) && l_1697[0][2]) , 0x0A34BDB7L) ^ (*p_2421->g_594))))))) || (*p_2421->g_594)), p_2421->g_628[0]))) != 0x9661L) > 7L) == (**p_2421->g_1374));
                    }
                }
            }
            for (p_2421->g_15 = 0; (p_2421->g_15 > 23); ++p_2421->g_15)
            { /* block id: 790 */
                union U1 **l_1734 = (void*)0;
                union U1 **l_1735 = &p_2421->g_1057;
                int32_t l_1746 = (-1L);
                int32_t l_1747 = (-2L);
                int32_t l_1748 = 0x08B616A7L;
                int32_t l_1749 = 2L;
                int32_t l_1751 = 5L;
                uint16_t *l_1864 = (void*)0;
                uint16_t *l_1865 = &l_1770;
                uint64_t *l_1870 = &p_2421->g_386.f2;
                uint64_t *l_1871 = &p_2421->g_1826[6].f3;
                uint32_t *l_1872 = &l_1638;
                int32_t *l_1873 = (void*)0;
                (1 + 1);
            }
            if (p_9)
                break;
            for (p_2421->g_493 = 0; (p_2421->g_493 != 5); p_2421->g_493 = safe_add_func_int32_t_s_s(p_2421->g_493, 5))
            { /* block id: 842 */
                uint8_t l_1879 = 246UL;
                for (p_2421->g_1496 = 2; (p_2421->g_1496 >= 0); p_2421->g_1496 -= 1)
                { /* block id: 845 */
                    int32_t l_1878[4];
                    int32_t **l_1891 = &p_2421->g_81[7];
                    uint8_t *l_1892 = &p_2421->g_300[0][1][0];
                    uint32_t *l_1893 = &l_1638;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1878[i] = (-1L);
                    for (l_1752 = 4; (l_1752 >= 0); l_1752 -= 1)
                    { /* block id: 848 */
                        int32_t *l_1877[2][5][10] = {{{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251}},{{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251},{&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251,&p_2421->g_1251,(void*)0,&l_1314,(void*)0,&p_2421->g_1251}}};
                        int i, j, k;
                        ++l_1879;
                        l_1314 |= ((*p_2421->g_373) = 0x2A242665L);
                    }
                    for (p_2421->g_15 = 0; (p_2421->g_15 <= 2); p_2421->g_15 += 1)
                    { /* block id: 855 */
                        uint64_t **l_1882 = (void*)0;
                        uint64_t ***l_1883 = &l_1882;
                        uint32_t *l_1884 = &p_2421->g_551;
                        (*l_1883) = l_1882;
                        (*p_2421->g_373) = (l_1884 != &p_2421->g_551);
                    }
                    (**p_2421->g_372) = (((*l_1893) = ((*p_2421->g_594) = (((safe_mod_func_uint8_t_u_u(((*l_1892) = ((safe_mul_func_int16_t_s_s((p_2421->g_180[p_2421->g_1496] > ((+(+(&p_2421->g_1569 != ((*p_2421->g_572) , p_2421->g_1889)))) == (0x7B9727D1L && p_9))), ((((*l_1250) > 1UL) , &l_1250) != l_1891))) != (-1L))), p_9)) , p_9) ^ 0x1E70DB3380C7E6A5L))) >= 0x27D6F1ABL);
                    (*p_2421->g_372) = &l_1313;
                }
            }
        }
    }
    for (l_1815 = 0; (l_1815 <= (-7)); --l_1815)
    { /* block id: 870 */
        (*p_2421->g_372) = (*p_2421->g_372);
        (*p_2421->g_372) = (*p_2421->g_196);
    }
    return (*l_1506);
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_15 p_2421->g_940 p_2421->g_135 p_2421->g_572 p_2421->g_594 p_2421->g_1251 p_2421->g_372 p_2421->g_163 p_2421->g_164
 * writes: p_2421->g_15 p_2421->g_135 p_2421->g_386 p_2421->g_493 p_2421->g_1251 p_2421->g_373
 */
int8_t  func_20(union U1 * p_21, int32_t * p_22, int8_t * p_23, int32_t * p_24, struct S2 * p_2421)
{ /* block id: 549 */
    uint32_t l_1254 = 4294967295UL;
    int32_t *l_1262 = &p_2421->g_429[1][0];
    uint64_t l_1264 = 6UL;
    union U1 **l_1271[2];
    int32_t l_1280 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_1271[i] = &p_2421->g_142;
    for (p_2421->g_15 = 0; (p_2421->g_15 > 53); p_2421->g_15 = safe_add_func_int8_t_s_s(p_2421->g_15, 5))
    { /* block id: 552 */
        uint32_t l_1257[10][8][3] = {{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}},{{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL},{0UL,0UL,4294967286UL}}};
        union U0 l_1263 = {-1L};
        int i, j, k;
        (*p_2421->g_940) &= l_1254;
        (*p_24) |= (l_1264 = ((safe_div_func_int16_t_s_s((((*p_2421->g_594) = ((l_1254 , l_1257[0][2][2]) && (!((safe_sub_func_uint32_t_u_u((~(l_1257[0][2][2] <= (l_1254 >= (-1L)))), (safe_sub_func_int32_t_s_s(0x7C562FF0L, (l_1262 == l_1262))))) && (((*p_2421->g_572) = l_1263) , 0x0F76L))))) | 0x0218BFF4L), l_1257[9][6][1])) , l_1263.f0));
        return l_1254;
    }
    (*p_2421->g_372) = p_22;
    return (*p_2421->g_163);
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_571 p_2421->g_572 p_2421->g_386 p_2421->g_243 p_2421->g_5 p_2421->g_163 p_2421->g_164 p_2421->g_386.f0 p_2421->g_300 p_2421->g_429 p_2421->g_594 p_2421->g_78.f0 p_2421->g_97.f0 p_2421->g_625 p_2421->g_13 p_2421->g_180 p_2421->g_493 p_2421->g_372 p_2421->g_26.f0 p_2421->g_105 p_2421->g_135 p_2421->g_656 p_2421->g_719 p_2421->g_747 p_2421->g_141 p_2421->g_191 p_2421->g_302 p_2421->g_775 p_2421->g_600.f0 p_2421->g_183 p_2421->g_97 p_2421->g_373 p_2421->g_628 p_2421->g_118 p_2421->g_196 p_2421->g_81 p_2421->g_551 p_2421->g_871 p_2421->g_774 p_2421->g_15 p_2421->g_855 p_2421->g_142 p_2421->g_872 p_2421->g_940 p_2421->g_992 p_2421->g_994 p_2421->g_1062 p_2421->g_1057 p_2421->g_993 p_2421->g_1123 p_2421->g_1122 p_2421->g_26
 * writes: p_2421->g_594 p_2421->g_164 p_2421->g_5 p_2421->g_13 p_2421->g_15 p_2421->g_493 p_2421->g_300 p_2421->g_625 p_2421->g_628 p_2421->g_373 p_2421->g_135 p_2421->g_386.f0 p_2421->g_142 p_2421->g_302 p_2421->g_141 p_2421->g_855 p_2421->g_386 p_2421->g_81 p_2421->g_992 p_2421->g_183 p_2421->g_96.f3 p_2421->g_1057 p_2421->g_1062 p_2421->g_747 p_2421->g_1122 p_2421->g_180 p_2421->g_76 p_2421->g_97.f3 p_2421->g_1237
 */
int32_t * func_27(union U1 * p_28, struct S2 * p_2421)
{ /* block id: 274 */
    int32_t l_590 = 0x667637C6L;
    uint32_t *l_593 = &p_2421->g_493;
    union U1 *l_599 = &p_2421->g_600;
    int32_t *l_601 = (void*)0;
    int32_t *l_602 = &p_2421->g_5[5][0];
    int32_t *l_603 = (void*)0;
    int64_t *l_612 = &p_2421->g_13;
    uint32_t l_617[2];
    uint16_t *l_618 = &p_2421->g_15;
    int8_t l_626 = (-1L);
    uint16_t l_652 = 0xED06L;
    int32_t l_700 = 4L;
    int32_t l_701 = 0L;
    int32_t l_702 = 4L;
    int32_t l_703[2][1][1];
    int32_t l_751 = 0L;
    uint64_t l_771 = 4UL;
    uint32_t l_840 = 0xFA3D85C1L;
    int32_t l_858 = (-2L);
    uint32_t l_964 = 0x52592AF0L;
    union U0 **l_1014 = (void*)0;
    int16_t *l_1102 = &p_2421->g_628[2];
    int16_t **l_1101 = &l_1102;
    int16_t ***l_1100 = &l_1101;
    int32_t l_1115 = 0x2473A43BL;
    uint16_t l_1220 = 4UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_617[i] = 0xE0B376E9L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_703[i][j][k] = 0x16802195L;
        }
    }
    l_590 = ((*l_602) = ((safe_add_func_int64_t_s_s((l_590 != ((((0x0EE3AA49E01F63AFL < (0x3690L == ((p_2421->g_594 = l_593) != &p_2421->g_493))) || ((*p_2421->g_163) |= (((((safe_mul_func_uint8_t_u_u((((**p_2421->g_571) , l_590) < 0UL), 0x7DL)) && 8UL) , (*p_2421->g_243)) , (void*)0) == l_593))) == l_590) || 0x423C6933086D4620L)), p_2421->g_386.f0)) >= l_590));
    if ((((*p_2421->g_594) = (((((*l_602) = ((safe_add_func_uint8_t_u_u(p_2421->g_300[0][0][0], (safe_mul_func_int8_t_s_s((~((*p_2421->g_163) &= 0L)), ((safe_mul_func_uint16_t_u_u((*l_602), (safe_sub_func_int8_t_s_s(p_2421->g_300[0][1][0], (((*l_612) = (*l_602)) & (safe_rshift_func_uint16_t_u_s(0xBA91L, 8))))))) >= ((*l_618) = ((*l_602) >= ((safe_mul_func_uint16_t_u_u(l_617[0], (*l_602))) <= (*l_602))))))))) & 0L)) & 0x0C8D5E82L) ^ p_2421->g_429[5][0]) , 0x52202199L)) && 4294967286UL))
    { /* block id: 284 */
        int32_t l_623 = 3L;
        uint8_t *l_624 = &p_2421->g_300[0][1][0];
        int16_t *l_627 = &p_2421->g_628[2];
        int32_t l_629[3][3];
        uint16_t **l_634[3];
        uint16_t ***l_633 = &l_634[2];
        uint16_t ****l_645 = (void*)0;
        uint16_t ***l_647 = &l_634[0];
        uint16_t ****l_646 = &l_647;
        uint32_t l_650 = 1UL;
        int32_t *l_651 = &p_2421->g_386.f0;
        int32_t l_653[10][4] = {{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L},{0x1725D392L,1L,1L,1L}};
        union U0 *l_695 = &p_2421->g_386;
        int64_t *l_766 = &p_2421->g_13;
        int8_t **l_805 = &p_2421->g_163;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_629[i][j] = (-5L);
        }
        for (i = 0; i < 3; i++)
            l_634[i] = (void*)0;
        l_629[1][0] ^= ((((0UL >= ((*l_627) = ((((0x5FL | p_2421->g_78.f0) , ((0xCDE67ADCL < (-1L)) <= (3L > (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((*l_624) = l_623), ((((((l_623 , (((((*p_2421->g_163) = ((p_2421->g_625 = l_612) != &p_2421->g_76)) <= l_623) , l_623) ^ 0L)) , 0x59L) == l_626) <= l_623) != 0x5AL) | p_2421->g_97[0][5][0].f0))), (*l_602)))))) <= (*l_602)) , (*l_602)))) , l_623) | 4294967290UL) , l_623);
        if ((l_653[5][2] ^= ((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(((void*)0 == l_633))) >= (*l_602)) & ((safe_div_func_uint16_t_u_u(((*l_602) < (((safe_mul_func_int8_t_s_s((l_629[1][0] , (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((l_629[0][0] = (l_623 | (((&l_634[0] == ((*l_646) = &l_634[2])) , (((((safe_mod_func_uint64_t_u_u((*p_2421->g_625), p_2421->g_180[2])) < (*p_2421->g_594)) , l_650) | l_629[1][0]) < (*l_602))) != 8UL))), 2)) , 0x5E0AC85AL), l_623)), l_650))), l_650)) , &l_629[1][2]) == l_651)), (*l_651))) > l_652)), p_2421->g_5[3][5])) && (*l_602))))
        { /* block id: 293 */
            uint32_t l_663 = 0xBAA90BAAL;
            int32_t l_704 = (-1L);
            int32_t l_705 = 1L;
            int32_t l_706 = 0L;
            int32_t l_707[3][5][10] = {{{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L}},{{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L}},{{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L},{0L,0x2B90B33EL,0x09A570B8L,0x62A26CE6L,1L,0x72883656L,0L,0L,0x2B90B33EL,1L}}};
            int16_t l_729[5][5] = {{(-1L),0x7864L,(-1L),(-1L),0x7864L},{(-1L),0x7864L,(-1L),(-1L),0x7864L},{(-1L),0x7864L,(-1L),(-1L),0x7864L},{(-1L),0x7864L,(-1L),(-1L),0x7864L},{(-1L),0x7864L,(-1L),(-1L),0x7864L}};
            uint16_t l_732 = 0x447CL;
            uint32_t l_754 = 0xF4F0C44FL;
            union U1 *l_757 = &p_2421->g_600;
            int64_t **l_767[1];
            int64_t *l_768[8][7][4] = {{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}},{{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13},{&p_2421->g_13,&p_2421->g_96.f1,&p_2421->g_96.f1,&p_2421->g_13}}};
            int32_t l_769 = 0x09807229L;
            int16_t l_770[8];
            uint64_t *l_772 = &p_2421->g_78.f3;
            uint64_t l_773 = 0x4E9697C6ADA6A37CL;
            int32_t **l_793 = &l_601;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_767[i] = &l_612;
            for (i = 0; i < 8; i++)
                l_770[i] = (-1L);
lbl_750:
            for (l_626 = (-13); (l_626 <= (-28)); l_626--)
            { /* block id: 296 */
                int32_t *l_657 = &p_2421->g_5[1][4];
                int32_t l_658[1][2];
                int32_t *l_659 = &l_658[0][0];
                int32_t *l_660 = &p_2421->g_386.f0;
                int32_t *l_661 = &p_2421->g_135;
                int32_t *l_662 = &p_2421->g_135;
                int16_t l_685 = 0x41FEL;
                union U1 *l_692 = &p_2421->g_96;
                uint16_t l_710 = 0xAF6EL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_658[i][j] = 0L;
                }
                ++l_663;
                (*p_2421->g_372) = &l_590;
                for (l_590 = 0; (l_590 != (-4)); l_590--)
                { /* block id: 301 */
                    int16_t *l_693 = &l_685;
                    int32_t l_694 = 9L;
                    int32_t l_708 = 0L;
                    int32_t l_709 = (-1L);
                    int32_t l_730 = 0x065F65A2L;
                    int32_t l_731 = 0x1894CD6CL;
                    int32_t *l_749 = (void*)0;
                    if (((*l_661) = ((safe_unary_minus_func_uint32_t_u((safe_div_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u((*p_2421->g_163), 6)) & ((*l_657) , ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((l_685 == (p_2421->g_26.f0 , (0UL < (((**p_2421->g_571) , (((*l_602) ^= (safe_mul_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(((*p_2421->g_625) = (((safe_mul_func_int8_t_s_s((((*p_2421->g_572) , &p_2421->g_628[2]) == l_693), 7L)) | (-3L)) , l_694)), (*l_659))) , (void*)0) == p_28), (*l_651)))) >= l_663)) || (*l_651))))), 0UL)) | p_2421->g_105) != l_663), (*l_651))), (*l_659))) < (*l_651)))) >= l_694), (*p_2421->g_594))) , (*p_2421->g_594)) > (*l_662)), l_694)), (*l_651))) | l_663) && p_2421->g_656[4]) && 0x67L), 1UL)))) == (*l_651))))
                    { /* block id: 305 */
                        l_695 = (void*)0;
                    }
                    else
                    { /* block id: 307 */
                        uint32_t l_698 = 0xE84CA0E3L;
                        int32_t *l_699[8][4] = {{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0},{(void*)0,&l_629[0][2],&l_629[0][2],(void*)0}};
                        int i, j;
                        (*l_659) = (safe_sub_func_int64_t_s_s(0x07BD2B91B7184757L, l_698));
                        --l_710;
                        (*l_602) ^= (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((+(0x6459L ^ (safe_mod_func_int32_t_s_s((((*l_624) = p_2421->g_719) & 0x21L), ((*l_660) | 0x7725L))))) >= (6UL && (*p_2421->g_625))), 5)) & ((safe_sub_func_uint8_t_u_u(((*l_659) ^ (((*l_693) |= ((((*l_661) && (-1L)) && (*l_659)) , (*l_661))) >= l_709)), p_2421->g_164[0])) || p_2421->g_13)), 0x668B56D1L));
                    }
                    if ((*l_659))
                    { /* block id: 314 */
                        int32_t l_722 = 0x1E564A8FL;
                        int32_t *l_723 = &l_658[0][0];
                        int32_t l_724 = 1L;
                        int32_t *l_725 = &l_658[0][0];
                        int32_t *l_726 = &l_653[5][2];
                        int32_t *l_727 = &l_703[1][0][0];
                        int32_t *l_728[10][7][3] = {{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}},{{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702},{(void*)0,&l_701,&l_702}}};
                        int i, j, k;
                        l_732--;
                        (*l_726) |= (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(((*l_661) | (0xAAF88C5EL == (-7L))))), 1));
                        (*p_2421->g_243) = 0L;
                        if (l_663)
                            goto lbl_750;
                    }
                    else
                    { /* block id: 318 */
                        union U0 l_742 = {0x77E7E8D5L};
                        (*l_657) = (safe_rshift_func_uint8_t_u_s((++(*l_624)), (!(l_742 , (safe_lshift_func_uint8_t_u_u(255UL, (safe_mod_func_int32_t_s_s(p_2421->g_747, (safe_unary_minus_func_int16_t_s((0x13C0162FL != 0x92CFFBE9L)))))))))));
                        if (l_590)
                            goto lbl_758;
                        return l_749;
                    }
                }
                (*p_2421->g_372) = &l_658[0][0];
            }
            if ((0xF3966A00A3F47C69L || l_751))
            { /* block id: 327 */
                (*l_651) &= (safe_rshift_func_uint16_t_u_u(1UL, 2));
                l_754--;
lbl_758:
                (*p_2421->g_141) = l_757;
                (*p_2421->g_775) = (0L | ((l_773 &= (safe_sub_func_int16_t_s_s((l_695 == ((((l_770[6] = ((*l_651) = (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s((((void*)0 != &p_2421->g_410) & (l_769 |= (l_729[0][3] > ((*l_602) &= (p_2421->g_191 <= (~(safe_mul_func_uint16_t_u_u(1UL, (&p_2421->g_13 != (l_768[7][1][3] = (l_766 = l_766))))))))))), p_2421->g_13)))))) < l_729[0][3]) == l_653[5][2]) , (*p_2421->g_571))), l_771))) == p_2421->g_302[5][2][2]));
            }
            else
            { /* block id: 340 */
                uint16_t l_776 = 0x69B2L;
                (*p_2421->g_372) = func_55(l_773, (*l_651), (l_776 , 0x7C1F3287L), (safe_add_func_int32_t_s_s((((((((safe_lshift_func_int8_t_s_u((*l_651), 7)) <= ((((((safe_add_func_int32_t_s_s(6L, (safe_add_func_int64_t_s_s((&p_2421->g_13 == (l_612 = (((0x14L <= (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_2421->g_600.f0, 0xDA2EL)), 0x0332L)), 0x131FL))) , p_2421->g_747) , (void*)0))), p_2421->g_183)))) , (*p_2421->g_625)) && 18446744073709551615UL) <= 0x6BL) && 0L) >= 0x0788D97434D7BC4CL)) & (*l_651)) < 0x4AL) <= l_776) >= (*p_2421->g_163)) <= 0x07E32B64A56E85ECL), (-5L))), l_776, p_2421);
                (*p_2421->g_372) = &l_653[2][3];
            }
            (*l_793) = ((*p_2421->g_372) = &l_701);
        }
        else
        { /* block id: 347 */
            uint8_t *l_806[9][2] = {{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]},{&p_2421->g_302[5][2][2],&p_2421->g_302[5][2][2]}};
            int i, j;
            (*p_2421->g_372) = ((safe_unary_minus_func_int8_t_s(((+(*p_2421->g_163)) & (p_2421->g_302[5][2][2] = (((1L == (*l_602)) == (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_624) = (safe_sub_func_uint32_t_u_u(((*p_2421->g_594)--), (((((*p_28) , 0x054DD197L) || (l_805 != ((*l_651) , &p_2421->g_163))) , p_2421->g_656[4]) ^ 0x57E01C110F340885L)))), 1L)), (*l_651))), (*l_651)))) ^ 0xC749L))))) , (*p_2421->g_372));
            return (*p_2421->g_372);
        }
    }
    else
    { /* block id: 354 */
        uint8_t *l_809 = &p_2421->g_302[5][2][2];
        int32_t l_812 = 4L;
        int32_t l_831[2];
        int8_t l_833[1][5] = {{0x39L,0x39L,0x39L,0x39L,0x39L}};
        int32_t l_838[10][9][2] = {{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}},{{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L},{0x530FCEB6L,0x135E6120L}}};
        int8_t l_839 = 0x0FL;
        int16_t l_937 = 0x0E3EL;
        uint32_t l_989 = 0x3D8F1312L;
        int8_t l_1019 = 0x14L;
        uint32_t l_1083 = 4294967295UL;
        int32_t l_1093 = 0x509C4193L;
        int16_t *l_1140 = &p_2421->g_628[2];
        int16_t **l_1139 = &l_1140;
        uint32_t l_1158[9][9][3] = {{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}},{{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L},{4294967295UL,7UL,0x74A7EBA5L}}};
        int32_t **l_1192 = &l_602;
        int32_t l_1203 = 0x775C4134L;
        uint16_t l_1210[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_831[i] = 6L;
        if (((*l_602) = ((((safe_rshift_func_uint8_t_u_u(((++(*l_809)) != (*l_602)), l_812)) , (safe_sub_func_uint16_t_u_u((l_831[1] &= (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(((void*)0 != &p_2421->g_196), (safe_mul_func_int16_t_s_s(p_2421->g_628[2], l_812)))), (+(((*p_2421->g_163) & ((((safe_div_func_uint16_t_u_u((((*l_618) = (safe_lshift_func_uint16_t_u_s((0L > p_2421->g_118), p_2421->g_26.f0))) & 0x1F3DL), l_812)) , (void*)0) != (void*)0) ^ (*p_2421->g_163))) <= (*l_602))))) <= p_2421->g_164[1]), 1L)), l_812)), l_812))), 0x32A4L))) , (*l_602)) != 0x13A5F4C6320E4FF8L)))
        { /* block id: 359 */
            int32_t l_832 = (-1L);
            int32_t *l_834 = (void*)0;
            int32_t *l_835 = &l_701;
            int32_t *l_836 = &l_590;
            int32_t *l_837[10][4] = {{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832},{&l_832,&l_832,&l_832,&l_832}};
            int i, j;
            --l_840;
            return (*p_2421->g_196);
        }
        else
        { /* block id: 362 */
            int32_t *l_845 = &l_751;
            int32_t l_852 = (-7L);
            union U1 ***l_853 = (void*)0;
            union U1 ***l_854 = &p_2421->g_141;
            union U0 l_873 = {0x4F369C15L};
            int8_t **l_875 = &p_2421->g_163;
            int8_t ***l_874 = &l_875;
            int16_t *l_884 = &p_2421->g_628[2];
            int32_t l_984[10][3][1] = {{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}}};
            int32_t l_988 = (-10L);
            uint16_t l_1004 = 0UL;
            int i, j, k;
            (*p_2421->g_372) = &l_838[7][1][0];
            (*l_602) = (0x3DL == ((((((*l_845) = (safe_rshift_func_int8_t_s_u(0L, 7))) , (safe_div_func_uint64_t_u_u(0x002313B5D439437CL, (-9L)))) ^ (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((l_852 , ((*l_854) = (void*)0)) != (p_2421->g_855 = &p_2421->g_142)), ((safe_mod_func_int32_t_s_s(((**p_2421->g_372) ^= l_852), l_852)) , (*l_602)))), 0x4930731E627DF8BCL))) >= l_858) == 0x7C9EC44EF5F8D1FCL));
            if (((safe_mul_func_int16_t_s_s(p_2421->g_551, 0x35F2L)) || (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((-4L), ((*l_593) = (safe_div_func_uint16_t_u_u(l_852, (safe_mul_func_int16_t_s_s((p_2421->g_871[2] == (((*p_2421->g_572) = l_873) , l_874)), (*l_602)))))))) , (safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((*l_884) = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((!((*p_28) , 0L)), l_873.f0)), (*l_602)))), l_833[0][1])), l_833[0][1]))), l_833[0][1])) && l_873.f0) != 0x12L), p_2421->g_656[4]))))
            { /* block id: 372 */
                int32_t **l_885 = &p_2421->g_81[1];
                (*l_885) = ((*p_2421->g_372) = (*p_2421->g_196));
            }
            else
            { /* block id: 375 */
                uint32_t l_889 = 4294967295UL;
                int32_t l_913 = 0L;
                int64_t *l_965 = &p_2421->g_180[1];
                int32_t l_981 = 0x67E4BD70L;
                int32_t l_982 = 0x173D8E58L;
                int32_t l_983 = 0x25AE9D80L;
                int32_t l_985 = 0x130FDD86L;
                int32_t l_986[8] = {0x5EEB415FL,(-10L),0x5EEB415FL,0x5EEB415FL,(-10L),0x5EEB415FL,0x5EEB415FL,(-10L)};
                uint32_t l_1001 = 4294967295UL;
                int64_t l_1005[5][5];
                uint32_t l_1034[10] = {0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L,0x54B17EC5L};
                int64_t l_1047[3];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1005[i][j] = 1L;
                }
                for (i = 0; i < 3; i++)
                    l_1047[i] = 0x34BDB685A70518E9L;
                (**p_2421->g_372) ^= (*p_2421->g_775);
                for (l_701 = 4; (l_701 >= 0); l_701 -= 1)
                { /* block id: 379 */
                    uint32_t l_912[3];
                    int32_t *l_972 = &l_873.f3;
                    int32_t *l_973 = (void*)0;
                    int32_t *l_974 = &l_858;
                    int32_t *l_975 = &l_812;
                    int32_t *l_976 = &l_852;
                    int32_t *l_977 = &l_831[1];
                    int32_t *l_978 = &l_838[7][1][0];
                    int32_t *l_979 = (void*)0;
                    int32_t *l_980[7][2][7] = {{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}},{{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]},{&l_913,&l_913,&p_2421->g_5[5][0],&l_703[1][0][0],(void*)0,&l_703[1][0][0],&p_2421->g_5[5][0]}}};
                    int32_t l_987 = 0x15F4EA90L;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_912[i] = 4294967291UL;
                    for (l_852 = 0; (l_852 <= 4); l_852 += 1)
                    { /* block id: 382 */
                        uint32_t l_888 = 0x3B9B54E8L;
                        uint8_t l_892 = 0UL;
                        uint32_t *l_905 = (void*)0;
                        uint32_t *l_906 = (void*)0;
                        uint32_t *l_907 = &l_889;
                        int32_t **l_914 = &l_845;
                        int32_t *l_938 = &l_702;
                        int32_t l_939 = 0x1D56FD1AL;
                        uint16_t *l_945 = &l_652;
                        (*l_602) = (safe_mul_func_uint16_t_u_u((!(l_888 != (l_889 && (p_2421->g_774 == ((*l_914) = func_55((4294967287UL ^ ((safe_rshift_func_int8_t_s_u(((l_889 , (l_888 > l_892)) || (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((*p_2421->g_163) = (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_873.f0 | ((safe_rshift_func_int16_t_s_u(((((*l_907) = (--(*l_593))) ^ (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(1UL, l_873.f0)), 6))) , l_912[2]), 0)) >= 0x5A30L)) != l_873.f0), (*p_2421->g_163))), 1))), l_912[0])), p_2421->g_386.f0))), p_2421->g_15)) >= 0x527EL)), (**p_2421->g_372), p_2421->g_719, l_913, l_912[1], p_2421)))))), 0x32AAL));
                        (*p_2421->g_940) = (+(l_939 = (~((((*p_2421->g_594) < ((**p_2421->g_855) , (l_873.f0 < (safe_mul_func_uint8_t_u_u((0x84L <= (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_888, (((*l_938) = ((*p_2421->g_373) = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_852, (safe_mul_func_uint8_t_u_u(((18446744073709551615UL && (0L != (((safe_add_func_int16_t_s_s((((((*l_809) &= ((*l_602) = l_852)) || (**p_2421->g_872)) , l_892) == (*p_2421->g_594)), l_833[0][3])) ^ p_2421->g_15) == p_2421->g_164[1]))) | 65529UL), p_2421->g_747)))), 1)), 9)), l_838[7][1][0])), l_937)) == l_852), (*p_2421->g_594))))) <= 0L))) , l_913), (*p_2421->g_163)))), l_912[2]))))) | 4294967295UL) , l_831[1]))));
                        (*p_2421->g_372) = (*p_2421->g_372);
                        (*l_938) = ((++(*l_618)) > ((safe_mod_func_uint16_t_u_u(((*l_945) = l_913), l_889)) < (safe_div_func_int32_t_s_s(l_913, (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(l_912[2], (l_833[0][2] & (&p_28 == ((p_2421->g_628[5] < (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(0xAAC2F0D1L, (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(l_889, l_831[1])) < (*l_938)), l_889)))), (*l_938)))) , &p_28))))) ^ p_2421->g_429[1][0]), 253UL)), l_839))))));
                    }
                    (*l_602) = ((l_964 , ((((l_937 && (((0x3395538FA0B1EDA4L ^ 0x40D62251C377B71CL) , l_873.f0) >= (((((0x36L <= (&p_2421->g_180[2] == l_965)) != ((*l_809) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0x3DCA1442L || l_912[2]), l_912[1])), 0x5EL)), p_2421->g_302[5][2][2])))) , 0x0CL) && l_852) > p_2421->g_164[1]))) && p_2421->g_429[1][0]) <= (-2L)) > 0x28L)) == 8L);
                    (*l_602) &= (l_838[7][1][0] & l_912[0]);
                    l_989--;
                    for (l_652 = 1; (l_652 <= 4); l_652 += 1)
                    { /* block id: 405 */
                        uint32_t l_995 = 4294967291UL;
                        (*p_2421->g_994) = p_2421->g_992;
                        if (l_995)
                            continue;
                    }
                }
                for (l_889 = 0; (l_889 >= 25); l_889++)
                { /* block id: 412 */
                    int32_t *l_998 = &l_986[7];
                    union U0 **l_1016 = &p_2421->g_572;
                    (*p_2421->g_372) = &l_984[3][0][0];
                    l_998 = &l_838[7][1][0];
                    for (p_2421->g_135 = 0; (p_2421->g_135 < 23); p_2421->g_135 = safe_add_func_int8_t_s_s(p_2421->g_135, 1))
                    { /* block id: 417 */
                        (**p_2421->g_372) = l_1001;
                        if (l_984[3][0][0])
                            break;
                    }
                    for (p_2421->g_183 = 22; (p_2421->g_183 != (-24)); p_2421->g_183 = safe_sub_func_uint64_t_u_u(p_2421->g_183, 4))
                    { /* block id: 423 */
                        int8_t l_1012 = 0x1DL;
                        int32_t l_1013 = (-4L);
                        union U0 ***l_1015[8][6][5] = {{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}},{{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014},{&l_1014,(void*)0,&l_1014,&l_1014,&l_1014}}};
                        int32_t *l_1035 = &l_986[5];
                        int32_t *l_1036 = &l_703[1][0][0];
                        int32_t *l_1037 = &p_2421->g_386.f0;
                        int32_t *l_1038 = (void*)0;
                        int32_t *l_1039 = &l_985;
                        uint16_t l_1040 = 65533UL;
                        uint32_t l_1048[8][5][5] = {{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}},{{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL},{4294967295UL,6UL,6UL,4294967295UL,4294967295UL}}};
                        int i, j, k;
                        (1 + 1);
                    }
                }
            }
            for (l_839 = 0; (l_839 == (-13)); l_839 = safe_sub_func_uint32_t_u_u(l_839, 1))
            { /* block id: 439 */
                uint64_t *l_1051 = &p_2421->g_96.f3;
                union U1 **l_1056 = &l_599;
                uint8_t *l_1060 = &p_2421->g_300[0][1][0];
                uint8_t *l_1061 = &p_2421->g_1062;
                int16_t *l_1065 = (void*)0;
                int16_t *l_1066 = &l_937;
                (*l_602) = (((*l_1051) = l_873.f0) && (safe_mod_func_int8_t_s_s(((((l_873.f0 < ((((safe_sub_func_uint32_t_u_u((((*l_1066) ^= (((((*l_1056) = ((*p_2421->g_855) = p_28)) == (p_2421->g_1057 = p_28)) , ((((safe_sub_func_uint64_t_u_u(l_852, (((*l_612) = (((*l_1061) |= ((l_812 |= ((*l_1060) ^= p_2421->g_302[5][2][2])) != p_2421->g_600.f0)) == (0x58BFAFABL && (0x5BF7169E27B5F5CFL != l_984[6][1][0])))) < 0x11F0B6D3274693C4L))) , p_2421->g_628[2]) != p_2421->g_164[8]) != l_838[7][1][0])) , (*l_602))) && 0UL), 1L)) | 0x73L) , l_873.f0) >= 0x03B2L)) , l_937) || 0xD505L) & l_1004), 0x78L)));
                if (l_989)
                    break;
                return (*p_2421->g_196);
            }
        }
        if ((l_831[1] & ((*l_618) = l_831[1])))
        { /* block id: 455 */
            uint32_t l_1074 = 0xE0B415E2L;
            int32_t *l_1084 = &l_831[1];
            uint32_t l_1103 = 0xA5114F46L;
            union U0 l_1114 = {0x1C98DE54L};
            int32_t l_1149 = 0x176771DCL;
            int32_t l_1150 = 0x74D62D7FL;
            int32_t l_1151 = 6L;
            int32_t l_1153 = (-1L);
            int32_t l_1154 = 0x6BDD3B3CL;
            int32_t l_1155 = 0L;
            int32_t l_1156 = (-9L);
            int32_t l_1157 = 1L;
            union U0 **l_1171 = &p_2421->g_572;
            union U0 l_1182[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
            int16_t l_1204[6] = {5L,0L,5L,5L,0L,5L};
            int8_t **l_1235[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1235[i] = &p_2421->g_163;
            (*l_1084) |= (safe_unary_minus_func_int64_t_s(((*l_612) = (safe_lshift_func_int8_t_s_u(((((((((*p_2421->g_163) = (safe_sub_func_int16_t_s_s(1L, (safe_lshift_func_uint8_t_u_s(0xD7L, 1))))) != (&l_617[0] == &l_989)) < (l_1074 = (p_2421->g_656[4] , 6L))) , func_55(p_2421->g_628[2], (l_1019 >= ((((safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(l_812, 0x1DL)) | l_1074), 65535UL)) || l_839) , l_1074), (*l_602))) > l_937) < (*l_602)) != 1UL)), p_2421->g_300[0][2][3], l_1074, l_1083, p_2421)) != (void*)0) | (*p_2421->g_594)) , l_989), 3)))));
lbl_1164:
            (*l_602) = (*p_2421->g_243);
            (*p_2421->g_372) = func_55(((safe_add_func_uint64_t_u_u(0x54182CAB5CAF8FEDL, (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_809) = ((safe_add_func_uint16_t_u_u(0xE1CDL, (((p_2421->g_302[2][3][2] | ((-1L) ^ l_1093)) > ((*p_2421->g_163) = ((((((((((p_2421->g_164[1] > (((((*l_1084) &= (safe_mod_func_uint16_t_u_u(0x6F4BL, (safe_div_func_uint16_t_u_u(((0x6268A6C58FF796A5L == (((~p_2421->g_600.f0) , l_1100) == (void*)0)) <= (*p_2421->g_594)), 0x2B90L))))) == (*l_602)) == (-2L)) >= 0L)) || 4294967294UL) , (*l_1084)) , l_833[0][0]) <= (*l_602)) <= (*p_2421->g_594)) <= l_1083) ^ l_839) | (*p_2421->g_594)) ^ l_833[0][1]))) <= (-1L)))) < l_1074)), l_838[7][1][0])), p_2421->g_15)) <= 0x9B7456134C961911L) | p_2421->g_551))) ^ l_1103), l_1074, p_2421->g_719, l_838[7][1][0], l_1093, p_2421);
            if ((~(((*l_1084) & ((*l_1102) = (safe_sub_func_int64_t_s_s((*l_602), (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((65535UL ^ ((safe_lshift_func_int16_t_s_s(((l_812 < ((((safe_add_func_uint8_t_u_u((l_1114 , ((void*)0 != &p_2421->g_444[3])), ((*l_1084) <= (*l_1084)))) ^ (*l_602)) , &p_2421->g_141) != (void*)0)) && l_812), l_1115)) && 0x1330L)), (*l_602))), 2UL)))))) & (*l_1084))))
            { /* block id: 466 */
                int32_t l_1124 = 0x5CC8F373L;
                int32_t *l_1126[1][2][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1126[i][j][k] = &l_1114.f0;
                    }
                }
                for (l_700 = 0; (l_700 != 1); l_700 = safe_add_func_uint64_t_u_u(l_700, 1))
                { /* block id: 469 */
                    int32_t l_1125 = (-2L);
                    for (p_2421->g_747 = 9; (p_2421->g_747 >= 0); p_2421->g_747 -= 1)
                    { /* block id: 472 */
                        int16_t l_1118 = 6L;
                        int64_t **l_1119[2][2];
                        int64_t ***l_1120 = (void*)0;
                        int64_t ***l_1121[10][7] = {{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]},{(void*)0,&l_1119[1][1],&l_1119[1][0],&l_1119[1][1],(void*)0,(void*)0,&l_1119[1][1]}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1119[i][j] = &l_612;
                        }
                        l_1126[0][1][0] = func_55((l_1118 , ((p_2421->g_1122 = l_1119[0][0]) == &p_2421->g_1123)), (*p_2421->g_940), l_1124, l_1125, (p_2421->g_180[2] = (l_1124 , p_2421->g_5[5][0])), p_2421);
                        return (*p_2421->g_372);
                    }
                    return (*p_2421->g_196);
                }
            }
            else
            { /* block id: 480 */
                int32_t l_1133 = 0x4213F2D5L;
                int32_t l_1148[2];
                union U1 *l_1163[7][3][5] = {{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}},{{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0},{&p_2421->g_600,&p_2421->g_600,&p_2421->g_97[0][5][0],&p_2421->g_26,(void*)0}}};
                int32_t l_1167 = 0x6C261803L;
                union U0 **l_1173 = &p_2421->g_572;
                int8_t *l_1187 = (void*)0;
                int64_t *l_1205 = &p_2421->g_26.f1;
                int64_t *l_1206 = &p_2421->g_26.f1;
                int64_t *l_1207 = &p_2421->g_96.f1;
                uint32_t *l_1208 = &l_964;
                uint32_t *l_1209 = &l_617[0];
                int64_t *l_1211 = &p_2421->g_26.f1;
                int64_t *l_1212 = &p_2421->g_26.f1;
                int64_t *l_1213 = (void*)0;
                int32_t l_1214 = 0x48B3B3D3L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1148[i] = 0L;
                for (l_964 = 0; (l_964 <= 4); l_964 += 1)
                { /* block id: 483 */
                    int8_t *l_1138 = &l_626;
                    int32_t l_1141 = 4L;
                    uint16_t *l_1142 = &l_652;
                    uint16_t l_1143 = 0x7B23L;
                    int32_t l_1147 = 0L;
                    int32_t l_1152[8] = {0x60DFD74EL,(-7L),0x60DFD74EL,0x60DFD74EL,(-7L),0x60DFD74EL,0x60DFD74EL,(-7L)};
                    int32_t l_1166 = 0x2FF518D7L;
                    union U0 **l_1174 = &p_2421->g_572;
                    int i;
                    l_1114.f0 |= (((((((safe_sub_func_uint16_t_u_u((((((0L | (l_812 = ((*l_1142) ^= (safe_mul_func_int16_t_s_s((l_812 , ((((*p_2421->g_594) = (l_1083 & (-5L))) <= (((safe_mul_func_uint8_t_u_u(l_1133, ((l_1133 ^ (*l_1084)) == ((*l_1138) = ((*p_2421->g_163) = (((((*p_2421->g_1057) , (((safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((((**l_1100) = &p_2421->g_628[1]) != (**p_2421->g_994)) , (*p_2421->g_1123)), l_1133)) != 0x3CCB9FDBL), 2L)) | (*p_2421->g_1123)) < p_2421->g_15)) > 0x1D88L) , (*p_2421->g_243)) , l_1133)))))) , (void*)0) == l_1139)) & 0x6BB679DBDE9C04C1L)), l_1141))))) , p_2421->g_1062) ^ (**p_2421->g_1122)) > 0xC4F2L) > 0x58L), l_1019)) && (*l_1084)) | 0UL) , 0x19EC75B7C44BD5D9L) >= l_1141) || (*p_2421->g_594)) >= l_1143);
                    if ((*l_602))
                    { /* block id: 491 */
                        int32_t *l_1144 = &l_831[1];
                        int32_t *l_1145 = &p_2421->g_386.f0;
                        int32_t *l_1146[4][8][8] = {{{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0}},{{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0}},{{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0}},{{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0},{(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0,(void*)0,(void*)0,&l_1114.f0}}};
                        int i, j, k;
                        ++l_1158[0][1][0];
                        (*p_2421->g_372) = &l_1149;
                        (*p_2421->g_940) |= ((*l_1145) = (l_1152[7] = (*l_602)));
                    }
                    else
                    { /* block id: 497 */
                        l_831[1] = (~(safe_mod_func_int64_t_s_s((*l_1084), p_2421->g_164[1])));
                    }
                    (*p_2421->g_855) = l_1163[5][2][0];
                    for (l_700 = 6; (l_700 >= 2); l_700 -= 1)
                    { /* block id: 503 */
                        int32_t l_1170 = 0L;
                        union U0 ***l_1172 = &l_1171;
                        int16_t ***l_1185 = &l_1101;
                        uint64_t *l_1186 = &p_2421->g_76;
                        int i, j;
                        if (l_839)
                            goto lbl_1164;
                        if (p_2421->g_5[(l_964 + 2)][l_700])
                            continue;
                        (*l_1084) = ((*l_1084) && (((l_1170 = (((**p_2421->g_1122) = (((safe_unary_minus_func_int32_t_s((p_2421->g_5[(l_700 + 1)][l_964] = l_1166))) >= (*l_1084)) & ((l_1167 && ((~(l_812 &= (safe_mul_func_int16_t_s_s(0x6D33L, l_1170)))) < (p_2421->g_429[1][0] && (((*l_1172) = l_1171) == (l_1174 = l_1173))))) != l_1148[1]))) || l_812)) , (-2L)) ^ (-1L)));
                        (*l_1084) = (((0x6A27B5BAL != (safe_rshift_func_int8_t_s_s(((p_2421->g_97[0][5][0].f3 = ((*l_1186) = (safe_unary_minus_func_int32_t_s(((!(l_1173 != ((*l_1172) = l_1173))) , (safe_mod_func_uint16_t_u_u((l_1147 != ((l_1166 >= (((safe_sub_func_int64_t_s_s(((**p_2421->g_571) , (*p_2421->g_1123)), 0x432363913ED5A5A6L)) , l_1187) == (void*)0)) | 0xECA3E26FD2DF5FE7L)), p_2421->g_5[(l_700 + 1)][l_964]))))))) > l_1170), (*l_1084)))) == l_1148[0]) || l_1152[6]);
                    }
                }
                l_1214 |= (safe_lshift_func_int8_t_s_u((l_989 <= ((((&l_602 == l_1192) <= ((l_1167 |= (safe_mul_func_uint8_t_u_u((((((safe_mul_func_int16_t_s_s((-9L), p_2421->g_5[7][0])) , (((((*l_1209) = ((*l_1208) |= (+((*p_2421->g_594) = ((safe_sub_func_uint8_t_u_u(5UL, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((l_1148[0] &= (((7UL <= (((((**l_1192) = ((**p_2421->g_1122) >= (0xC0L ^ l_1203))) <= 0x4964F0C2L) < l_1204[2]) && 4294967289UL)) && (*l_1084)) , 1L)) || (**l_1192)) >= (*p_2421->g_163)), (*l_1084))), l_1133)))) , 0UL))))) ^ l_1133) < l_1210[3]) & l_1133)) , (void*)0) != (void*)0) >= (*l_1084)), (**p_2421->g_872)))) >= (*l_1084))) & 0x75FDL) && l_1148[0])), 7));
                for (p_2421->g_135 = 4; (p_2421->g_135 >= 0); p_2421->g_135 -= 1)
                { /* block id: 529 */
                    int8_t l_1215 = 0x43L;
                    int32_t *l_1216 = (void*)0;
                    int32_t *l_1217 = &l_838[7][1][0];
                    int32_t *l_1218 = &p_2421->g_386.f3;
                    int32_t *l_1219[9][3] = {{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0},{&l_1114.f0,&l_838[7][1][0],&l_1114.f0}};
                    int8_t **l_1234[8][4];
                    int8_t ***l_1233 = &l_1234[4][0];
                    uint64_t *l_1236 = &p_2421->g_1237;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1234[i][j] = &p_2421->g_163;
                    }
                    --l_1220;
                    (*l_1084) = 0L;
                    (*p_2421->g_372) = func_55((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((0x68L != ((p_2421->g_302[0][3][1] , ((((safe_lshift_func_int16_t_s_u(((*p_28) , ((0xD0A4L >= 0x03EFL) != (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_602), ((*l_1084) = (((*l_1233) = &l_1187) == l_1235[1])))), ((((((*l_1236) = (l_1148[0] <= 0L)) , (*p_2421->g_163)) >= (**p_2421->g_872)) ^ (*p_2421->g_594)) == (*l_1217)))))), 6)) , 0xA2L) < (**l_1192)) || 0x21FBL)) | (-5L))), 7)) > 0xB8L), p_2421->g_15)) && (**l_1192)) , (*l_1084)), (*l_602), p_2421->g_183, p_2421->g_180[2], l_1148[0], p_2421);
                }
                (*l_1192) = &l_1214;
            }
        }
        else
        { /* block id: 539 */
            int32_t l_1240 = (-5L);
            union U0 **l_1241[6][7] = {{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0},{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0},{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0},{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0},{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0},{&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,&p_2421->g_572,(void*)0,&p_2421->g_572,(void*)0}};
            uint64_t *l_1246 = &p_2421->g_97[0][5][0].f3;
            uint64_t *l_1247[7][6][6] = {{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}},{{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76},{&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76,&p_2421->g_76}}};
            int32_t l_1248[2][3][8] = {{{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L},{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L},{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L}},{{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L},{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L},{0x045E79F2L,0x5E5476B3L,0L,0x5E5476B3L,0x045E79F2L,0x045E79F2L,0x5E5476B3L,0L}}};
            int i, j, k;
            (**l_1192) = (safe_mul_func_int16_t_s_s((l_1240 <= (+(((*l_602) ^ (((*l_809) ^= ((&p_2421->g_572 == l_1241[1][3]) ^ ((*p_2421->g_775) != l_1240))) && (**l_1192))) > (l_1240 , (safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((l_1248[0][1][5] |= (&l_617[1] != (void*)0)), (*p_2421->g_1123))) , l_1248[0][1][5]), (**l_1192))))))), 0xE05BL));
        }
        return (*p_2421->g_196);
    }
    l_602 = &l_1115;
    (*l_602) ^= (*l_601);
    return (*p_2421->g_196);
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_196 p_2421->g_81 p_2421->g_372 p_2421->g_141 p_2421->g_142 p_2421->g_163 p_2421->g_164 p_2421->g_135 p_2421->g_243 p_2421->g_386.f0
 * writes: p_2421->g_373 p_2421->g_142 p_2421->g_164 p_2421->g_135 p_2421->g_5 p_2421->g_386.f0
 */
union U1 * func_29(union U0  p_30, uint32_t  p_31, union U1 * p_32, struct S2 * p_2421)
{ /* block id: 266 */
    uint32_t l_576[8] = {0x6C370BAAL,0x0DBEAF39L,0x6C370BAAL,0x6C370BAAL,0x0DBEAF39L,0x6C370BAAL,0x6C370BAAL,0x0DBEAF39L};
    uint8_t l_579 = 0xDAL;
    int32_t *l_586 = &p_2421->g_135;
    int32_t *l_587 = &p_2421->g_386.f0;
    int i;
    (*p_2421->g_372) = (*p_2421->g_196);
    (*p_2421->g_141) = (*p_2421->g_141);
    (*l_587) &= ((*p_2421->g_243) = ((*l_586) |= (((*p_2421->g_163) &= ((safe_mod_func_int32_t_s_s((-1L), ((l_576[2] | (safe_add_func_int16_t_s_s(l_579, p_30.f0))) , (safe_lshift_func_int16_t_s_s(1L, 11))))) || (((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(6L, 7)) ^ 0x1B891566L) ^ (p_30.f0 <= 8L)), 13)) && l_579) >= 65530UL))) ^ l_579)));
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_26.f0 p_2421->g_5 p_2421->g_25 p_2421->g_13 p_2421->g_15 p_2421->g_105 p_2421->g_96.f0 p_2421->g_118 p_2421->g_372 p_2421->g_373 p_2421->g_135 p_2421->g_164 p_2421->g_300 p_2421->g_183 p_2421->g_551 p_2421->g_429 p_2421->g_571
 * writes: p_2421->g_76 p_2421->g_81 p_2421->g_105 p_2421->g_5 p_2421->g_15 p_2421->g_118 p_2421->g_135 p_2421->g_302 p_2421->g_13 p_2421->g_183 p_2421->g_551 p_2421->g_572
 */
union U0  func_33(union U1 * p_34, struct S2 * p_2421)
{ /* block id: 14 */
    uint32_t l_45 = 0x98C245E3L;
    union U1 *l_71 = (void*)0;
    union U1 **l_70 = &l_71;
    union U1 *l_77 = &p_2421->g_78;
    int32_t **l_80 = (void*)0;
    int32_t *l_82[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_83 = 0x4BL;
    uint32_t l_107 = 0UL;
    uint16_t *l_108 = &p_2421->g_15;
    int8_t l_569 = 0x68L;
    uint32_t l_570 = 0x87B14653L;
    union U0 l_573 = {0L};
    int i;
    (**p_2421->g_372) = func_36((safe_mod_func_uint64_t_u_u(((~(safe_sub_func_uint8_t_u_u((l_45 , ((safe_mul_func_uint16_t_u_u((p_2421->g_26.f0 <= l_45), ((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((func_52(((((p_2421->g_81[1] = func_55((p_2421->g_5[5][0] == ((((func_61(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((p_2421->g_25 != ((*l_70) = (void*)0)) | (l_45 , (safe_add_func_uint64_t_u_u(0x64A3A207B8A5F036L, l_45)))), 7UL)), 0x39L)) , (void*)0), p_2421->g_13, p_2421->g_5[5][0], p_2421->g_25, p_2421) , l_45) || 0x97A847E08A84A000L) , p_2421->g_25) == l_77)), p_2421->g_13, l_45, l_45, l_45, p_2421)) != l_82[5]) < p_2421->g_13) > l_83), p_34, p_2421) && p_2421->g_5[4][3]), p_2421->g_13)), l_107)) || 4UL))) || p_2421->g_96.f0)), 7L))) ^ p_2421->g_15), p_2421->g_13)), l_77, p_2421->g_15, l_108, p_2421);
    l_570 ^= l_569;
    (*p_2421->g_571) = &p_2421->g_386;
    return l_573;
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_15 p_2421->g_118 p_2421->g_372 p_2421->g_373 p_2421->g_135 p_2421->g_164 p_2421->g_300 p_2421->g_183 p_2421->g_551 p_2421->g_429 p_2421->g_96.f0 l_2357
 * writes: p_2421->g_15 p_2421->g_118 p_2421->g_135 p_2421->g_302 p_2421->g_13 p_2421->g_183 p_2421->g_551 l_2357
 */
int32_t  func_36(uint64_t  p_37, union U1 * p_38, int8_t  p_39, uint16_t * p_40, struct S2 * p_2421)
{ /* block id: 29 */
    int32_t l_122 = 0x36B7D2F2L;
    int32_t l_147 = 0x588C5394L;
    int32_t l_149 = 0x5B4CFA5EL;
    int32_t l_152 = 0L;
    int32_t l_154 = 1L;
    int32_t l_155[10] = {0x72FA3325L,1L,0x72FA3325L,0x72FA3325L,1L,0x72FA3325L,0x72FA3325L,1L,0x72FA3325L,0x72FA3325L};
    int16_t l_157 = 9L;
    int32_t l_187 = 0x5A602393L;
    union U1 **l_228 = (void*)0;
    int32_t *l_247 = &l_155[2];
    uint64_t l_278 = 0x5827224D034F18C4L;
    uint16_t l_279[2];
    uint64_t l_344 = 18446744073709551615UL;
    uint16_t **l_409 = (void*)0;
    int32_t l_473 = 0x32ECB61AL;
    uint32_t l_475 = 0xBE3E0F7BL;
    int8_t l_486[6][5][5] = {{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}},{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}},{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}},{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}},{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}},{{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL},{0x6AL,(-8L),1L,0x6BL,0x7BL}}};
    int16_t *l_514 = &l_157;
    int64_t *l_517 = (void*)0;
    int64_t *l_518[7];
    uint16_t *l_519 = &l_279[0];
    uint16_t l_523 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_279[i] = 1UL;
    for (i = 0; i < 7; i++)
        l_518[i] = (void*)0;
    for (p_2421->g_15 = (-1); (p_2421->g_15 != 53); ++p_2421->g_15)
    { /* block id: 32 */
        int8_t *l_117 = &p_2421->g_118;
        int32_t l_119[3];
        int32_t *l_120 = (void*)0;
        int32_t *l_121[6][4] = {{&l_119[2],&l_119[2],&l_119[2],&l_119[2]},{&l_119[2],&l_119[2],&l_119[2],&l_119[2]},{&l_119[2],&l_119[2],&l_119[2],&l_119[2]},{&l_119[2],&l_119[2],&l_119[2],&l_119[2]},{&l_119[2],&l_119[2],&l_119[2],&l_119[2]},{&l_119[2],&l_119[2],&l_119[2],&l_119[2]}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_119[i] = (-1L);
        l_122 = ((safe_mul_func_int8_t_s_s(6L, (safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_117) ^= 5L), 1)) < 0x0437L), l_119[2])))) < 0x3A70L);
    }
    for (p_2421->g_118 = 0; (p_2421->g_118 <= 0); p_2421->g_118 += 1)
    { /* block id: 38 */
        int64_t l_138 = 2L;
        int32_t l_143 = 0x41F08C6BL;
        int32_t l_150 = (-1L);
        int32_t l_151 = 1L;
        int32_t l_153 = 0x48820D8BL;
        int32_t l_156[2];
        int64_t *l_178 = &p_2421->g_13;
        int32_t l_186 = 0x6C6C1B36L;
        union U1 **l_227 = (void*)0;
        uint16_t l_258[5][7] = {{0xDC31L,5UL,5UL,0xDC31L,65535UL,0x3FAEL,0x3FAEL},{0xDC31L,5UL,5UL,0xDC31L,65535UL,0x3FAEL,0x3FAEL},{0xDC31L,5UL,5UL,0xDC31L,65535UL,0x3FAEL,0x3FAEL},{0xDC31L,5UL,5UL,0xDC31L,65535UL,0x3FAEL,0x3FAEL},{0xDC31L,5UL,5UL,0xDC31L,65535UL,0x3FAEL,0x3FAEL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_156[i] = 0x3E70D6C7L;
        (1 + 1);
    }
    (**p_2421->g_372) |= p_39;
    if (((*l_247) = ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((p_2421->g_302[5][2][2] = ((++(*p_40)) && (safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_2421->g_164[1], ((*l_514) = p_2421->g_300[0][2][0]))), (&p_40 != (void*)0))), 0xF645A3E977C4A829L)))), (safe_add_func_int16_t_s_s((p_37 <= (((*l_247) | ((**p_2421->g_372) = (((*l_519) = ((p_2421->g_13 = (-10L)) || ((void*)0 != &p_2421->g_105))) ^ p_39))) , 0x244C2CB0L)), 0x423AL)))) , 5L), p_39)) , p_39)))
    { /* block id: 245 */
        uint32_t l_520 = 4294967293UL;
        uint32_t l_528 = 4294967295UL;
        int32_t l_550[9][5] = {{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL},{0x5C3B0559L,1L,0x18FCBF8AL,0x5421C8B2L,0x18FCBF8AL}};
        int i, j;
        --l_520;
        l_523++;
        for (p_2421->g_183 = 0; (p_2421->g_183 <= (-22)); --p_2421->g_183)
        { /* block id: 250 */
            int32_t *l_531 = (void*)0;
            int32_t *l_532 = (void*)0;
            int32_t *l_533 = &l_155[9];
            int32_t *l_534 = &l_149;
            int32_t *l_535 = &l_122;
            int32_t *l_536 = &p_2421->g_386.f3;
            int32_t *l_537 = &p_2421->g_5[6][0];
            int32_t *l_538 = &p_2421->g_135;
            int32_t l_539 = 0x6724599FL;
            int32_t *l_540 = &l_149;
            int32_t *l_541 = (void*)0;
            int32_t *l_542 = &l_154;
            int32_t *l_543 = &p_2421->g_386.f0;
            int32_t *l_544 = &p_2421->g_5[5][0];
            int32_t *l_545 = (void*)0;
            int32_t *l_546 = &l_122;
            int32_t *l_547 = &p_2421->g_5[5][0];
            int32_t *l_548 = &p_2421->g_135;
            int32_t *l_549[7][5] = {{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0},{&l_152,&l_539,&l_154,(void*)0,(void*)0}};
            int i, j;
            l_528++;
            p_2421->g_551++;
        }
    }
    else
    { /* block id: 254 */
        int64_t **l_556 = &l_517;
        int32_t l_561 = 0x7F3CC385L;
        uint8_t l_566 = 0xC0L;
        int32_t l_567[7] = {0L,0x7AD2507DL,0L,0L,0x7AD2507DL,0L,0L};
        int8_t l_568 = 0x57L;
        int i;
        (**p_2421->g_372) = ((((p_39 < ((p_37 <= ((safe_rshift_func_int8_t_s_u(((void*)0 == l_556), ((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((*l_519) ^= (l_561 ^ ((*l_247) , (*l_247)))), (0xA0L || (((l_567[6] = ((((safe_sub_func_uint8_t_u_u((((*p_40) = (safe_add_func_uint8_t_u_u(p_2421->g_429[3][1], 0xD8L))) == p_39), l_561)) & p_2421->g_300[0][0][2]) | l_566) != (-3L))) & 8L) , 0x2EL)))) >= l_566), l_568)) & p_2421->g_183) & l_566) , (*l_247)))) == 0x1DA7AACBL)) || (*l_247))) == (*l_247)) ^ p_2421->g_96.f0) >= p_37);
        (**p_2421->g_372) = p_39;
    }
    return (*p_2421->g_373);
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_5 p_2421->g_13 p_2421->g_105
 * writes: p_2421->g_76 p_2421->g_105 p_2421->g_5
 */
int64_t  func_52(uint64_t  p_53, union U1 * p_54, struct S2 * p_2421)
{ /* block id: 23 */
    uint16_t *l_86 = &p_2421->g_15;
    uint16_t **l_87 = &l_86;
    int32_t l_90 = 0x5F5A2915L;
    union U1 *l_95[2][3] = {{&p_2421->g_96,&p_2421->g_96,&p_2421->g_96},{&p_2421->g_96,&p_2421->g_96,&p_2421->g_96}};
    uint16_t l_100 = 3UL;
    uint64_t *l_103 = &p_2421->g_76;
    uint32_t *l_104 = &p_2421->g_105;
    int32_t *l_106 = &p_2421->g_5[5][0];
    int i, j;
    (*l_106) = (p_53 == (safe_mul_func_int16_t_s_s((((*l_87) = l_86) != (void*)0), (safe_sub_func_uint32_t_u_u(l_90, ((safe_sub_func_int8_t_s_s(p_53, ((((safe_mod_func_int16_t_s_s(((p_2421->g_5[2][5] > (l_95[1][0] != (((*l_104) |= (((safe_div_func_uint8_t_u_u((((l_100 >= ((safe_div_func_uint64_t_u_u(((*l_103) = 0xF05BB7EAB3286B00L), p_2421->g_5[3][1])) | p_53)) != l_90) , p_2421->g_13), 0x64L)) | p_53) >= 0xA71DL)) , l_95[1][0]))) | p_53), 0x1A55L)) | p_2421->g_5[5][0]) , l_90) != p_2421->g_13))) && p_53))))));
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_55(int64_t  p_56, int32_t  p_57, int32_t  p_58, uint64_t  p_59, int64_t  p_60, struct S2 * p_2421)
{ /* block id: 20 */
    int32_t *l_79[10][5] = {{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0},{&p_2421->g_5[5][0],(void*)0,&p_2421->g_5[5][0],&p_2421->g_5[5][0],(void*)0}};
    int i, j;
    return l_79[3][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_2421->g_5 p_2421->g_15
 * writes: p_2421->g_76
 */
int32_t  func_61(union U1 * p_62, int16_t  p_63, int32_t  p_64, union U1 * p_65, struct S2 * p_2421)
{ /* block id: 16 */
    int32_t *l_75 = &p_2421->g_5[5][0];
    int32_t **l_74 = &l_75;
    (*l_74) = &p_2421->g_5[1][0];
    p_2421->g_76 = (**l_74);
    return p_2421->g_15;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_2422;
    struct S2* p_2421 = &c_2422;
    struct S2 c_2423 = {
        {{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L},{8L,0L,0x4C8F0D07L,0L,8L,8L,0L}}, // p_2421->g_5
        0x4B0BEFCDF11BBB4FL, // p_2421->g_13
        65535UL, // p_2421->g_15
        {0x67A7BF74L}, // p_2421->g_26
        &p_2421->g_26, // p_2421->g_25
        0x6EF3BB579AB67338L, // p_2421->g_76
        {4294967293UL}, // p_2421->g_78
        {&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0],&p_2421->g_5[5][0]}, // p_2421->g_81
        {0UL}, // p_2421->g_96
        {{{{0x76AF746AL}},{{0x76AF746AL}},{{0x76AF746AL}},{{0x76AF746AL}},{{0x76AF746AL}},{{0x76AF746AL}},{{0x76AF746AL}}}}, // p_2421->g_97
        0x86993EB3L, // p_2421->g_105
        0x0FL, // p_2421->g_118
        0L, // p_2421->g_135
        &p_2421->g_97[0][5][0], // p_2421->g_142
        &p_2421->g_142, // p_2421->g_141
        {0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL}, // p_2421->g_164
        &p_2421->g_164[1], // p_2421->g_163
        {0x5CBAFF72D6A1B3C1L,0x5CBAFF72D6A1B3C1L,0x5CBAFF72D6A1B3C1L}, // p_2421->g_180
        (-1L), // p_2421->g_183
        0x7298B66DL, // p_2421->g_191
        &p_2421->g_81[0], // p_2421->g_196
        (void*)0, // p_2421->g_242
        &p_2421->g_5[5][0], // p_2421->g_243
        {{{0x29L,0x29L,0x29L,0x29L},{0x29L,0x29L,0x29L,0x29L},{0x29L,0x29L,0x29L,0x29L}}}, // p_2421->g_300
        {{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}},{{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}}}, // p_2421->g_302
        &p_2421->g_135, // p_2421->g_373
        &p_2421->g_373, // p_2421->g_372
        {0x03CEE95FL}, // p_2421->g_386
        (void*)0, // p_2421->g_410
        {{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L},{0x7E33C890L,0x7E33C890L}}, // p_2421->g_429
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_2421->g_444
        4294967295UL, // p_2421->g_493
        0x2C7EB56FL, // p_2421->g_551
        &p_2421->g_386, // p_2421->g_572
        &p_2421->g_572, // p_2421->g_571
        &p_2421->g_105, // p_2421->g_594
        {0x4EA4E375L}, // p_2421->g_600
        (void*)0, // p_2421->g_625
        {0x44E1L,0x48B6L,0x44E1L,0x44E1L,0x48B6L,0x44E1L}, // p_2421->g_628
        {0x1FL,(-1L),0x1FL,0x1FL,(-1L),0x1FL}, // p_2421->g_656
        7UL, // p_2421->g_719
        0x75L, // p_2421->g_747
        (void*)0, // p_2421->g_774
        &p_2421->g_135, // p_2421->g_775
        &p_2421->g_142, // p_2421->g_855
        &p_2421->g_163, // p_2421->g_872
        {&p_2421->g_872,&p_2421->g_872,&p_2421->g_872,&p_2421->g_872,&p_2421->g_872}, // p_2421->g_871
        &p_2421->g_135, // p_2421->g_940
        (void*)0, // p_2421->g_993
        &p_2421->g_993, // p_2421->g_992
        &p_2421->g_992, // p_2421->g_994
        &p_2421->g_97[0][4][0], // p_2421->g_1057
        4UL, // p_2421->g_1062
        &p_2421->g_13, // p_2421->g_1123
        &p_2421->g_1123, // p_2421->g_1122
        0xB5871A5094CCCDD9L, // p_2421->g_1237
        0x5080705DL, // p_2421->g_1251
        &p_2421->g_180[0], // p_2421->g_1285
        {{&p_2421->g_1285,&p_2421->g_1285,&p_2421->g_1285},{&p_2421->g_1285,&p_2421->g_1285,&p_2421->g_1285}}, // p_2421->g_1284
        &p_2421->g_1284[0][1], // p_2421->g_1283
        (-9L), // p_2421->g_1335
        0x4A4EL, // p_2421->g_1338
        &p_2421->g_1338, // p_2421->g_1337
        {0x4072L,0x4072L,0x4072L,0x4072L,0x4072L,0x4072L,0x4072L}, // p_2421->g_1340
        &p_2421->g_1340[2], // p_2421->g_1339
        {{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}},{{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339},{&p_2421->g_1339,&p_2421->g_1339}}}, // p_2421->g_1336
        &p_2421->g_163, // p_2421->g_1374
        0x1A23L, // p_2421->g_1388
        &p_2421->g_1122, // p_2421->g_1455
        {0xAC63995AL}, // p_2421->g_1458
        0x7A4DL, // p_2421->g_1496
        {&p_2421->g_429[1][0],&p_2421->g_429[1][0],&p_2421->g_429[1][0]}, // p_2421->g_1549
        0UL, // p_2421->g_1560
        {{{0xC9D6C840L}},{{0xC9D6C840L}},{{0xC9D6C840L}},{{0xC9D6C840L}},{{0xC9D6C840L}},{{0xC9D6C840L}}}, // p_2421->g_1563
        &p_2421->g_1374, // p_2421->g_1564
        (void*)0, // p_2421->g_1569
        {{{(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0}},{{(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0}},{{(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0}},{{(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0,&p_2421->g_1569,&p_2421->g_1569,&p_2421->g_1569,(void*)0}}}, // p_2421->g_1568
        (void*)0, // p_2421->g_1701
        &p_2421->g_1284[1][1], // p_2421->g_1726
        &p_2421->g_1726, // p_2421->g_1725
        {{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL}}, // p_2421->g_1737
        &p_2421->g_1737[7], // p_2421->g_1736
        &p_2421->g_1335, // p_2421->g_1767
        &p_2421->g_1767, // p_2421->g_1766
        (void*)0, // p_2421->g_1774
        (void*)0, // p_2421->g_1775
        {&p_2421->g_135,&p_2421->g_1251,&p_2421->g_135,&p_2421->g_135,&p_2421->g_1251,&p_2421->g_135,&p_2421->g_135}, // p_2421->g_1776
        {&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3,&p_2421->g_386.f3}, // p_2421->g_1777
        {{(void*)0,&p_2421->g_1251,&p_2421->g_5[5][0],&p_2421->g_1251,&p_2421->g_1251,(void*)0,&p_2421->g_1251,&p_2421->g_5[5][2]},{(void*)0,&p_2421->g_1251,&p_2421->g_5[5][0],&p_2421->g_1251,&p_2421->g_1251,(void*)0,&p_2421->g_1251,&p_2421->g_5[5][2]},{(void*)0,&p_2421->g_1251,&p_2421->g_5[5][0],&p_2421->g_1251,&p_2421->g_1251,(void*)0,&p_2421->g_1251,&p_2421->g_5[5][2]},{(void*)0,&p_2421->g_1251,&p_2421->g_5[5][0],&p_2421->g_1251,&p_2421->g_1251,(void*)0,&p_2421->g_1251,&p_2421->g_5[5][2]},{(void*)0,&p_2421->g_1251,&p_2421->g_5[5][0],&p_2421->g_1251,&p_2421->g_1251,(void*)0,&p_2421->g_1251,&p_2421->g_5[5][2]}}, // p_2421->g_1817
        &p_2421->g_386.f0, // p_2421->g_1818
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_2421->g_1826
        &p_2421->g_386.f3, // p_2421->g_1874
        &p_2421->g_855, // p_2421->g_1890
        &p_2421->g_1890, // p_2421->g_1889
        65535UL, // p_2421->g_2022
        0x1E06F8184A59FC96L, // p_2421->g_2094
        {{{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L}},{{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L}},{{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L},{1L,0x689B6656L,1L,1L,0x689B6656L,1L,1L}}}, // p_2421->g_2159
        {0UL}, // p_2421->g_2170
        {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}, // p_2421->g_2172
        0xF858224BL, // p_2421->g_2185
        9UL, // p_2421->g_2200
        0xE5BBDB5A377404C6L, // p_2421->g_2201
        0x1860A4C97DE18AF7L, // p_2421->g_2202
        0x5A04D716D9513B5EL, // p_2421->g_2203
        18446744073709551606UL, // p_2421->g_2204
        18446744073709551612UL, // p_2421->g_2205
        {0xD4D1A1D6763BF809L,0xD4D1A1D6763BF809L}, // p_2421->g_2206
        0x29F677428FCEDC1BL, // p_2421->g_2207
        {0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL,0x13E77C586EBF961CL}, // p_2421->g_2208
        {{1UL,1UL,1UL},{1UL,1UL,1UL}}, // p_2421->g_2209
        {{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0},{&p_2421->g_2209[1][0],&p_2421->g_2209[1][0],&p_2421->g_2207,&p_2421->g_2204,(void*)0}}, // p_2421->g_2199
        &p_2421->g_2199[0][2], // p_2421->g_2198
        &p_2421->g_2198, // p_2421->g_2197
        {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}, // p_2421->g_2247
        &p_2421->g_1737[7], // p_2421->g_2283
        {4294967295UL}, // p_2421->g_2284
        (void*)0, // p_2421->g_2417
        &p_2421->g_2417, // p_2421->g_2416
        &p_2421->g_2416, // p_2421->g_2415
        &p_2421->g_2415, // p_2421->g_2414
    };
    c_2422 = c_2423;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2421);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2421->g_5[i][j], "p_2421->g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2421->g_13, "p_2421->g_13", print_hash_value);
    transparent_crc(p_2421->g_15, "p_2421->g_15", print_hash_value);
    transparent_crc(p_2421->g_26.f0, "p_2421->g_26.f0", print_hash_value);
    transparent_crc(p_2421->g_76, "p_2421->g_76", print_hash_value);
    transparent_crc(p_2421->g_78.f0, "p_2421->g_78.f0", print_hash_value);
    transparent_crc(p_2421->g_96.f0, "p_2421->g_96.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_2421->g_97[i][j][k].f0, "p_2421->g_97[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2421->g_105, "p_2421->g_105", print_hash_value);
    transparent_crc(p_2421->g_118, "p_2421->g_118", print_hash_value);
    transparent_crc(p_2421->g_135, "p_2421->g_135", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_164[i], "p_2421->g_164[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2421->g_180[i], "p_2421->g_180[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_183, "p_2421->g_183", print_hash_value);
    transparent_crc(p_2421->g_191, "p_2421->g_191", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2421->g_300[i][j][k], "p_2421->g_300[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2421->g_302[i][j][k], "p_2421->g_302[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2421->g_386.f0, "p_2421->g_386.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2421->g_429[i][j], "p_2421->g_429[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2421->g_493, "p_2421->g_493", print_hash_value);
    transparent_crc(p_2421->g_551, "p_2421->g_551", print_hash_value);
    transparent_crc(p_2421->g_600.f0, "p_2421->g_600.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2421->g_628[i], "p_2421->g_628[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2421->g_656[i], "p_2421->g_656[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_719, "p_2421->g_719", print_hash_value);
    transparent_crc(p_2421->g_747, "p_2421->g_747", print_hash_value);
    transparent_crc(p_2421->g_1062, "p_2421->g_1062", print_hash_value);
    transparent_crc(p_2421->g_1237, "p_2421->g_1237", print_hash_value);
    transparent_crc(p_2421->g_1251, "p_2421->g_1251", print_hash_value);
    transparent_crc(p_2421->g_1335, "p_2421->g_1335", print_hash_value);
    transparent_crc(p_2421->g_1338, "p_2421->g_1338", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2421->g_1340[i], "p_2421->g_1340[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_1388, "p_2421->g_1388", print_hash_value);
    transparent_crc(p_2421->g_1458.f0, "p_2421->g_1458.f0", print_hash_value);
    transparent_crc(p_2421->g_1496, "p_2421->g_1496", print_hash_value);
    transparent_crc(p_2421->g_1560, "p_2421->g_1560", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2421->g_1563[i][j].f0, "p_2421->g_1563[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_1737[i].f0, "p_2421->g_1737[i].f0", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_1826[i].f0, "p_2421->g_1826[i].f0", print_hash_value);

    }
    transparent_crc(p_2421->g_2022, "p_2421->g_2022", print_hash_value);
    transparent_crc(p_2421->g_2094, "p_2421->g_2094", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2421->g_2159[i][j][k], "p_2421->g_2159[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2421->g_2170.f0, "p_2421->g_2170.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_2172[i], "p_2421->g_2172[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_2185, "p_2421->g_2185", print_hash_value);
    transparent_crc(p_2421->g_2200, "p_2421->g_2200", print_hash_value);
    transparent_crc(p_2421->g_2201, "p_2421->g_2201", print_hash_value);
    transparent_crc(p_2421->g_2202, "p_2421->g_2202", print_hash_value);
    transparent_crc(p_2421->g_2203, "p_2421->g_2203", print_hash_value);
    transparent_crc(p_2421->g_2204, "p_2421->g_2204", print_hash_value);
    transparent_crc(p_2421->g_2205, "p_2421->g_2205", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2421->g_2206[i], "p_2421->g_2206[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_2207, "p_2421->g_2207", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_2208[i], "p_2421->g_2208[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2421->g_2209[i][j], "p_2421->g_2209[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2421->g_2247[i], "p_2421->g_2247[i]", print_hash_value);

    }
    transparent_crc(p_2421->g_2284.f0, "p_2421->g_2284.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
