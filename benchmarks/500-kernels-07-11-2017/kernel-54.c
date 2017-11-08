// -g 44,61,1 -l 4,1,1
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


// Seed: 1427875943

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint8_t  f0;
   int8_t  f1;
   int8_t  f2;
   uint8_t  f3;
};

union U1 {
   volatile int64_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
};

struct S2 {
    int32_t g_2;
    uint16_t g_5;
    union U0 g_16;
    int32_t g_57;
    int32_t * volatile g_56;
    int64_t g_68;
    int64_t g_78;
    int32_t g_103;
    int64_t g_106[6];
    union U1 g_126;
    uint16_t g_138;
    uint32_t g_153;
    int16_t g_155;
    volatile union U0 g_158;
    volatile union U0 g_159[10];
    volatile union U0 g_160[1];
    volatile union U0 g_161[8];
    volatile union U0 g_162;
    volatile union U0 g_163;
    volatile union U0 g_164;
    volatile union U0 g_165;
    volatile union U0 g_166;
    volatile union U0 g_167;
    volatile union U0 g_168[4];
    volatile union U0 g_169[7][2][10];
    volatile union U0 g_170;
    volatile union U0 g_171;
    volatile union U0 g_172[9][1];
    volatile union U0 g_173;
    volatile union U0 g_174;
    volatile union U0 g_175[1];
    volatile union U0 g_176;
    volatile union U0 g_177;
    volatile union U0 g_178;
    volatile union U0 g_179;
    volatile union U0 g_180;
    volatile union U0 g_181;
    volatile union U0 g_182;
    volatile union U0 g_183[3];
    volatile union U0 g_184;
    volatile union U0 g_185;
    volatile union U0 g_186;
    volatile union U0 g_187;
    volatile union U0 g_188;
    volatile union U0 g_189;
    volatile union U0 g_190[8][2][2];
    volatile union U0 g_191;
    volatile union U0 g_192;
    volatile union U0 g_193;
    volatile union U0 g_194;
    volatile union U0 g_195;
    volatile union U0 *g_157[8][4][8];
    volatile union U1 g_196[3];
    uint32_t g_202[8];
    union U1 *g_207;
    union U1 ** volatile g_206;
    int32_t *g_216;
    uint64_t g_226;
    union U0 g_233[9][6];
    uint32_t g_236;
    int64_t g_247;
    uint32_t *g_280;
    uint32_t g_314;
    uint8_t g_341[7];
    volatile uint16_t g_399;
    volatile uint16_t *g_398;
    volatile uint16_t **g_397[1];
    union U0 g_414;
    union U0 *g_413;
    volatile union U0 g_423[7][10][3];
    uint8_t g_442;
    volatile union U1 g_463[4][2];
    uint8_t g_484;
    volatile int16_t g_490[3];
    volatile int32_t g_492;
    volatile uint16_t g_493[5];
    volatile uint32_t g_509;
    union U0 g_543;
    volatile int16_t *g_569;
    volatile int16_t **g_568;
    uint16_t *g_579;
    uint16_t **g_578;
    uint16_t ***g_577;
    int16_t g_610[3];
    volatile uint32_t g_611;
    volatile union U1 g_627;
    int64_t * volatile * volatile g_642;
    volatile int64_t *g_644;
    volatile int64_t * volatile *g_643;
    volatile union U1 g_670;
    uint8_t g_684[5][6][8];
    volatile int32_t g_688;
    volatile int16_t g_689;
    int8_t g_691;
    union U1 g_701;
    union U0 g_710;
    int16_t *g_757;
    int16_t **g_756;
    int16_t *** volatile g_755[9][7][4];
    int16_t *** volatile g_758;
    union U1 g_761[2];
    union U1 *g_760;
    union U1 **g_759;
    int16_t g_770;
    union U0 g_777;
    int32_t ** volatile g_783;
    union U0 g_785;
    volatile union U0 g_853[3];
    int32_t g_870;
    volatile uint64_t g_907;
    volatile int16_t g_964;
    int16_t g_968[9];
    volatile int64_t g_971;
    uint16_t g_974;
    int8_t *g_1001;
    volatile union U1 g_1041;
    int32_t ** volatile g_1045;
    uint16_t g_1061;
    int32_t * volatile g_1115;
    volatile union U0 g_1153[6];
    volatile union U0 g_1154;
    volatile int32_t g_1163;
    int32_t g_1167;
    int32_t g_1200[9];
    int32_t ** volatile g_1218;
    uint8_t g_1219;
    int64_t g_1236;
    union U1 *** volatile g_1242;
    volatile union U1 g_1243;
    int16_t *** volatile g_1245;
    int32_t ** volatile g_1251;
    union U0 g_1253;
    union U0 g_1254[7][10];
    union U0 g_1255[7][2];
    union U0 g_1256[6][2];
    union U0 *g_1252[9];
    int32_t * volatile g_1269;
    uint64_t *g_1273[1][8];
    uint64_t **g_1272;
    int32_t ** volatile g_1281;
    uint64_t g_1336;
    uint32_t g_1356;
    union U1 g_1363;
    volatile union U1 g_1364;
    union U0 ** volatile g_1374[6];
    union U0 ** volatile g_1375;
    union U0 *g_1376;
    uint8_t *g_1407;
    uint8_t **g_1406;
    union U1 g_1414;
    union U0 g_1424;
    volatile int8_t g_1454;
    volatile int8_t *g_1453[6][2];
    volatile int8_t **g_1452;
    volatile int8_t ** volatile *g_1451;
    volatile int8_t ** volatile * volatile * volatile g_1450;
    union U0 g_1469;
    uint16_t g_1485;
    volatile uint64_t g_1514;
    volatile uint16_t * volatile * volatile *g_1520;
    volatile uint16_t * volatile * volatile **g_1519;
    volatile uint16_t * volatile * volatile ** volatile *g_1518;
    volatile uint16_t g_1550;
    int32_t * volatile g_1558[6];
    int32_t * volatile g_1559;
    int32_t * volatile g_1562[6][3][3];
    union U0 g_1580;
    int16_t g_1629;
    int64_t **g_1696;
    uint8_t g_1778;
    uint64_t *** volatile g_1807;
    int32_t * volatile g_1812;
    int32_t g_1823[4][8];
    uint32_t *g_1891;
    union U1 g_1905;
    union U1 g_1953[3][1];
    int8_t g_1959;
    int64_t *g_1990;
    int64_t **g_1989;
    int64_t ***g_1988;
    volatile union U1 g_2031[8][5][6];
    int32_t g_2053[10];
    int32_t * volatile g_2052;
    union U0 ** volatile g_2054[9];
    union U0 ** volatile g_2055;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_2097);
union U0 * func_6(union U0 * p_7, union U0 * p_8, struct S2 * p_2097);
union U0 * func_9(union U0 * p_10, union U0 * p_11, uint64_t  p_12, union U0 * p_13, union U0 * p_14, struct S2 * p_2097);
union U0 * func_17(uint32_t  p_18, uint8_t  p_19, struct S2 * p_2097);
uint32_t  func_20(union U0 * p_21, int32_t  p_22, union U0 * p_23, union U0 * p_24, struct S2 * p_2097);
uint64_t  func_26(union U0 * p_27, uint32_t  p_28, uint32_t  p_29, union U0 * p_30, struct S2 * p_2097);
union U0 * func_31(uint8_t  p_32, union U0 * p_33, int32_t  p_34, int32_t  p_35, struct S2 * p_2097);
int32_t  func_45(int32_t  p_46, struct S2 * p_2097);
int32_t * func_79(int64_t  p_80, int8_t  p_81, uint16_t  p_82, uint32_t  p_83, struct S2 * p_2097);
uint16_t  func_88(int64_t * p_89, int64_t * p_90, uint16_t * p_91, struct S2 * p_2097);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2097->g_2 p_2097->g_216 p_2097->g_57 p_2097->g_103
 * writes: p_2097->g_2 p_2097->g_57
 */
int64_t  func_1(struct S2 * p_2097)
{ /* block id: 4 */
    union U0 *l_25 = &p_2097->g_16;
    int32_t l_44[10] = {0x53271639L,0x56A218F0L,0x53271639L,0x53271639L,0x56A218F0L,0x53271639L,0x53271639L,0x56A218F0L,0x53271639L,0x53271639L};
    uint8_t ***l_2079 = &p_2097->g_1406;
    int32_t *l_2080 = &l_44[6];
    int32_t *l_2081 = &p_2097->g_57;
    int32_t *l_2082 = &p_2097->g_2;
    int32_t *l_2083 = (void*)0;
    int32_t *l_2084 = &p_2097->g_2053[4];
    int32_t *l_2085 = &p_2097->g_103;
    int32_t *l_2086 = &l_44[8];
    int32_t *l_2087 = (void*)0;
    int32_t *l_2088 = &l_44[6];
    int32_t *l_2089 = &p_2097->g_57;
    int32_t *l_2090[5][1][4] = {{{(void*)0,(void*)0,&p_2097->g_2053[3],&p_2097->g_2}},{{(void*)0,(void*)0,&p_2097->g_2053[3],&p_2097->g_2}},{{(void*)0,(void*)0,&p_2097->g_2053[3],&p_2097->g_2}},{{(void*)0,(void*)0,&p_2097->g_2053[3],&p_2097->g_2}},{{(void*)0,(void*)0,&p_2097->g_2053[3],&p_2097->g_2}}};
    int8_t l_2091 = 0x32L;
    int32_t l_2092 = 0x2BA45C31L;
    int64_t l_2093 = 0x7B2D2F2C620506C1L;
    uint32_t l_2094 = 0x159DCE47L;
    int i, j, k;
    for (p_2097->g_2 = 0; (p_2097->g_2 <= (-7)); p_2097->g_2--)
    { /* block id: 7 */
        union U0 *l_54 = &p_2097->g_16;
        int32_t l_59 = (-10L);
        union U0 *l_784 = &p_2097->g_785;
        int8_t l_2073 = 0x68L;
        int32_t l_2074 = 0x2835FD37L;
        int32_t l_2075 = 0x0640B991L;
        uint64_t l_2076[4][2][6] = {{{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL}},{{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL}},{{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL}},{{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,1UL}}};
        int i, j, k;
        (1 + 1);
    }
    (*p_2097->g_216) |= ((void*)0 == l_2079);
    l_2094++;
    return (*l_2085);
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_1407 p_2097->g_280 p_2097->g_153 p_2097->g_202 p_2097->g_1272 p_2097->g_1273 p_2097->g_226 p_2097->g_684 p_2097->g_194.f0 p_2097->g_701.f1 p_2097->g_1450 p_2097->g_974 p_2097->g_578 p_2097->g_579 p_2097->g_138 p_2097->g_1469 p_2097->g_757 p_2097->g_610 p_2097->g_56 p_2097->g_1485 p_2097->g_1115 p_2097->g_57 p_2097->g_759 p_2097->g_1269 p_2097->g_1514 p_2097->g_1518 p_2097->g_569 p_2097->g_490 p_2097->g_236 p_2097->g_398 p_2097->g_399 p_2097->g_442 p_2097->g_1001 p_2097->g_78 p_2097->g_1550 p_2097->g_1559 p_2097->g_1236 p_2097->g_103 p_2097->g_710.f3 p_2097->g_1812 p_2097->g_5
 * writes: p_2097->g_684 p_2097->g_701.f1 p_2097->g_138 p_2097->g_57 p_2097->g_5 p_2097->g_442 p_2097->g_1363.f1 p_2097->g_207 p_2097->g_760 p_2097->g_1469.f2 p_2097->g_103 p_2097->g_1514 p_2097->g_236 p_2097->g_691 p_2097->g_785.f2 p_2097->g_78 p_2097->g_1550 p_2097->g_1236 p_2097->g_710.f3
 */
union U0 * func_6(union U0 * p_7, union U0 * p_8, struct S2 * p_2097)
{ /* block id: 591 */
    int32_t l_1437 = (-1L);
    uint16_t l_1444 = 65526UL;
    int8_t **l_1446[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t ***l_1445 = &l_1446[4];
    int8_t ****l_1447 = (void*)0;
    union U1 *l_1487 = &p_2097->g_761[0];
    uint64_t l_1493 = 0xEDE772DEEDE79C31L;
    int32_t l_1510 = 0x4330A734L;
    int32_t l_1511[4][9] = {{1L,0x31935961L,0x244DD6E8L,0L,0x4EB3A80FL,1L,0L,1L,0L},{1L,0x31935961L,0x244DD6E8L,0L,0x4EB3A80FL,1L,0L,1L,0L},{1L,0x31935961L,0x244DD6E8L,0L,0x4EB3A80FL,1L,0L,1L,0L},{1L,0x31935961L,0x244DD6E8L,0L,0x4EB3A80FL,1L,0L,1L,0L}};
    uint8_t l_1555[2][3];
    uint8_t ***l_1560[1][3];
    union U0 *l_1681 = &p_2097->g_785;
    union U0 **l_1691 = &p_2097->g_1252[3];
    union U0 ***l_1690 = &l_1691;
    uint8_t ***l_1699 = &p_2097->g_1406;
    int32_t *l_1765 = &p_2097->g_57;
    uint64_t **l_1808[3][3][6] = {{{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]}},{{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]}},{{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]},{&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][1],&p_2097->g_1273[0][4],&p_2097->g_1273[0][1]}}};
    int64_t l_1814 = 0x167CF00A2F4DE015L;
    uint8_t l_1840 = 252UL;
    uint32_t l_1864 = 4294967290UL;
    union U1 ***l_1918 = (void*)0;
    int32_t l_1948 = 0x719FB027L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1555[i][j] = 0x9FL;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1560[i][j] = &p_2097->g_1406;
    }
    if (((safe_div_func_uint8_t_u_u(l_1437, ((*p_2097->g_1407) = l_1437))) || (safe_sub_func_uint32_t_u_u((((0x1CD3A7DDL == (*p_2097->g_280)) || (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((l_1444 != (((l_1445 = l_1445) != (void*)0) == ((**p_2097->g_1272) , (l_1444 , (*p_2097->g_1407))))) ^ l_1444), l_1437)), p_2097->g_194.f0))) > (*p_2097->g_1407)), l_1437))))
    { /* block id: 594 */
        int32_t l_1466 = 0x6300F103L;
        uint16_t ***l_1482 = &p_2097->g_578;
        int32_t l_1502 = 1L;
        int32_t l_1503 = 0x3166F313L;
        int32_t l_1505 = 0x48463825L;
        int32_t l_1508[7] = {1L,0x37030BA0L,1L,1L,0x37030BA0L,1L,1L};
        int i;
        for (p_2097->g_701.f1 = 0; (p_2097->g_701.f1 <= 2); p_2097->g_701.f1 += 1)
        { /* block id: 597 */
            return p_8;
        }
        if ((safe_mul_func_uint16_t_u_u((p_2097->g_1450 != &l_1445), 0x658DL)))
        { /* block id: 600 */
            uint64_t l_1455 = 18446744073709551615UL;
            int8_t **l_1470 = &p_2097->g_1001;
            int32_t l_1509 = 0x1FFEBD6CL;
            int32_t l_1513 = 0x5F0A6E9DL;
            union U1 **l_1530[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_1554[8][4] = {{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502},{&l_1502,&l_1511[3][0],&l_1502,&l_1502}};
            int i, j;
lbl_1553:
            (*p_2097->g_56) = (((!0x04220D805858A8A9L) , ((l_1455 && 1L) > (safe_rshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_1455, ((p_2097->g_974 , 6UL) < (((--(**p_2097->g_578)) & (l_1455 <= ((((*p_2097->g_1407)++) >= (l_1466 ^ (safe_mul_func_uint16_t_u_u((((p_2097->g_1469 , (void*)0) != l_1470) >= l_1466), l_1437)))) >= 0x77E0L))) <= (*p_2097->g_757))))) >= l_1444), 11)))) >= l_1455);
            for (p_2097->g_5 = 0; (p_2097->g_5 >= 49); p_2097->g_5 = safe_add_func_int32_t_s_s(p_2097->g_5, 8))
            { /* block id: 606 */
                int64_t l_1477 = 0L;
                int32_t l_1504 = 0x66BCF712L;
                int64_t l_1506[3];
                int32_t l_1507 = 0x2F443C01L;
                int32_t l_1512 = 7L;
                int32_t l_1545 = 0x1366A4D5L;
                int32_t l_1548 = 0x002718DCL;
                int32_t l_1549 = 0x36BC3CFCL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1506[i] = (-1L);
                for (p_2097->g_442 = 20; (p_2097->g_442 != 42); p_2097->g_442++)
                { /* block id: 609 */
                    uint16_t l_1490 = 0xC58CL;
                    int32_t *l_1494 = &p_2097->g_103;
                    int32_t *l_1495 = &l_1437;
                    int32_t *l_1496 = &l_1437;
                    int32_t *l_1497 = &l_1437;
                    int32_t *l_1498 = &p_2097->g_103;
                    int32_t *l_1499 = &p_2097->g_103;
                    int32_t *l_1500 = &p_2097->g_57;
                    int32_t *l_1501[9][6] = {{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103},{&p_2097->g_103,(void*)0,&p_2097->g_103,&p_2097->g_103,&p_2097->g_2,&p_2097->g_103}};
                    int32_t **l_1517 = &l_1499;
                    int i, j;
                    for (p_2097->g_1363.f1 = 0; (p_2097->g_1363.f1 <= 2); p_2097->g_1363.f1 += 1)
                    { /* block id: 612 */
                        int16_t l_1486 = 0x6BF7L;
                        (*p_2097->g_1115) &= (safe_rshift_func_int8_t_s_u(l_1477, (l_1437 , (safe_mod_func_int8_t_s_s(((--(*p_2097->g_579)) || (l_1482 == ((safe_rshift_func_int16_t_s_u(p_2097->g_1485, 7)) , &p_2097->g_397[0]))), l_1486)))));
                        (*p_2097->g_759) = l_1487;
                    }
                    for (p_2097->g_1469.f2 = 5; (p_2097->g_1469.f2 < 5); p_2097->g_1469.f2 = safe_add_func_uint16_t_u_u(p_2097->g_1469.f2, 6))
                    { /* block id: 619 */
                        int32_t *l_1491 = &p_2097->g_103;
                        int32_t *l_1492[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1492[i] = &l_1437;
                        l_1490 ^= (-1L);
                        (*p_2097->g_1269) = ((*l_1491) = 2L);
                        (*l_1491) = l_1493;
                    }
                    --p_2097->g_1514;
                    (*l_1517) = l_1499;
                }
                if (((void*)0 == p_2097->g_1518))
                { /* block id: 628 */
                    int32_t *l_1521[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1521[i] = &l_1505;
                    l_1510 |= ((*p_2097->g_569) && (-1L));
                    for (p_2097->g_236 = 0; (p_2097->g_236 >= 59); p_2097->g_236++)
                    { /* block id: 632 */
                        l_1507 = 0L;
                        return p_8;
                    }
                    p_2097->g_57 |= (l_1504 & ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((*p_2097->g_398), (l_1508[6] && ((((l_1503 ^ (safe_add_func_int64_t_s_s(((-1L) | (~((void*)0 != l_1530[2]))), ((((((**l_1470) = ((safe_sub_func_int32_t_s_s((p_2097->g_442 , (0xCAE8L ^ l_1506[2])), 0x500200E6L)) > (-6L))) , l_1509) , l_1477) == l_1513) < 2L)))) != 0xF3L) , 9L) , l_1511[1][2])))), 255UL)) <= (*p_2097->g_280)));
                }
                else
                { /* block id: 638 */
                    int16_t l_1543 = (-9L);
                    int32_t l_1544 = 0x74952BFAL;
                    int32_t l_1546 = 0x6564243BL;
                    int32_t l_1547[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1547[i] = 0x50D9229EL;
                    for (p_2097->g_78 = 0; (p_2097->g_78 <= 25); p_2097->g_78 = safe_add_func_uint8_t_u_u(p_2097->g_78, 5))
                    { /* block id: 641 */
                        int32_t *l_1535 = &l_1513;
                        int32_t *l_1536 = (void*)0;
                        int32_t *l_1537 = &l_1512;
                        int32_t *l_1538 = &p_2097->g_103;
                        int32_t l_1539 = (-3L);
                        int32_t *l_1540 = &l_1512;
                        int32_t *l_1541 = &l_1504;
                        int32_t *l_1542[7][2][9] = {{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}},{{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505},{&l_1507,(void*)0,(void*)0,&l_1505,&l_1509,&l_1507,&l_1505,&l_1511[1][2],&l_1505}}};
                        int i, j, k;
                        --p_2097->g_1550;
                        l_1509 = (l_1502 || ((*p_2097->g_1407) = 250UL));
                    }
                    if (l_1513)
                        goto lbl_1553;
                }
            }
            ++l_1555[1][0];
        }
        else
        { /* block id: 650 */
            (*p_2097->g_1559) &= l_1510;
        }
    }
    else
    { /* block id: 653 */
        uint8_t ***l_1561 = &p_2097->g_1406;
        int32_t l_1566 = 0x26B72C5EL;
        int16_t **l_1572 = (void*)0;
        int16_t **l_1577 = &p_2097->g_757;
        int8_t l_1583 = 0x48L;
        uint32_t *l_1591 = &p_2097->g_153;
        uint64_t l_1628 = 0xC4A7577B3484611FL;
        int32_t l_1630 = (-5L);
        int32_t l_1636 = 0x01A363FFL;
        int32_t l_1639 = 0x6B910A7BL;
        int32_t l_1640 = (-1L);
        int64_t *l_1655[3][10] = {{&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1],&p_2097->g_68,(void*)0,&p_2097->g_68,&p_2097->g_106[1],&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1]},{&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1],&p_2097->g_68,(void*)0,&p_2097->g_68,&p_2097->g_106[1],&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1]},{&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1],&p_2097->g_68,(void*)0,&p_2097->g_68,&p_2097->g_106[1],&p_2097->g_78,&p_2097->g_78,&p_2097->g_106[1]}};
        int64_t **l_1654 = &l_1655[1][0];
        uint32_t l_1680 = 1UL;
        uint64_t l_1724[3][3][10] = {{{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL}},{{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL}},{{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL},{0xFE381E77DE3B2247L,4UL,0xFAEC13D7E000C19FL,0xFE381E77DE3B2247L,18446744073709551615UL,0xFAEC13D7E000C19FL,0xFAEC13D7E000C19FL,18446744073709551615UL,0xFE381E77DE3B2247L,0xFAEC13D7E000C19FL}}};
        int16_t ***l_1762 = &l_1572;
        int16_t ****l_1761 = &l_1762;
        int32_t **l_1810 = (void*)0;
        int32_t **l_1811 = &l_1765;
        int i, j, k;
        for (p_2097->g_1236 = 2; (p_2097->g_1236 >= 0); p_2097->g_1236 -= 1)
        { /* block id: 656 */
            int32_t *l_1563 = &p_2097->g_103;
            int16_t **l_1571 = (void*)0;
            int16_t ***l_1573 = &l_1572;
            int16_t ***l_1576[10][2] = {{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571},{&l_1572,&l_1571}};
            int32_t l_1635[10] = {0x599A5620L,3L,0x599A5620L,0x599A5620L,3L,0x599A5620L,0x599A5620L,3L,0x599A5620L,0x599A5620L};
            uint16_t ****l_1678 = &p_2097->g_577;
            uint16_t *****l_1677 = &l_1678;
            int64_t ***l_1704 = (void*)0;
            int64_t ****l_1705 = (void*)0;
            int64_t ****l_1706 = &l_1704;
            uint16_t *l_1722 = &p_2097->g_974;
            union U1 **l_1725[3][9][3] = {{{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487}},{{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487}},{{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487},{&l_1487,&l_1487,&l_1487}}};
            int64_t l_1743 = 3L;
            int8_t ***l_1763 = &l_1446[4];
            int i, j, k;
            (*l_1563) ^= (l_1560[0][1] == l_1561);
        }
        (*l_1811) = (void*)0;
    }
    for (p_2097->g_710.f3 = 0; (p_2097->g_710.f3 <= 5); p_2097->g_710.f3 += 1)
    { /* block id: 770 */
        int32_t **l_1813 = &l_1765;
        uint16_t l_1845[3][5][2] = {{{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL}},{{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL}},{{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL},{0xF67FL,0xF67FL}}};
        int32_t l_1872 = (-1L);
        int8_t l_1874 = 0x20L;
        int32_t l_1875 = 0x618E9DDDL;
        int8_t l_1878 = 1L;
        int32_t l_1879 = (-1L);
        int32_t l_1880 = 0x661FE3BDL;
        int32_t l_1881 = 0x4EE57747L;
        uint16_t l_1882 = 1UL;
        int8_t ***l_1898 = &l_1446[4];
        int8_t ***l_1899 = &l_1446[4];
        int8_t l_1934 = 0x28L;
        int64_t *l_1987 = &p_2097->g_1236;
        int64_t **l_1986 = &l_1987;
        int64_t ***l_1985 = &l_1986;
        uint64_t ***l_2001 = &l_1808[0][0][5];
        int64_t *l_2022 = (void*)0;
        int64_t **l_2021[2][7][3] = {{{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0}},{{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0},{&l_2022,(void*)0,(void*)0}}};
        uint32_t *l_2039[8][5][6] = {{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0},{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,(void*)0,(void*)0}}};
        int i, j, k;
        (*p_2097->g_1812) |= (p_7 == (void*)0);
        (*l_1813) = &l_1511[1][2];
    }
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_1269 p_2097->g_57 p_2097->g_247 p_2097->g_1272 p_2097->g_280 p_2097->g_153 p_2097->g_202 p_2097->g_166.f0 p_2097->g_1001 p_2097->g_968 p_2097->g_56 p_2097->g_413 p_2097->g_216 p_2097->g_684 p_2097->g_236 p_2097->g_442 p_2097->g_610 p_2097->g_1061 p_2097->g_484 p_2097->g_643 p_2097->g_644 p_2097->g_1273 p_2097->g_578 p_2097->g_579 p_2097->g_1356 p_2097->g_493 p_2097->g_226 p_2097->g_568 p_2097->g_569 p_2097->g_490 p_2097->g_138 p_2097->g_103 p_2097->g_1414 p_2097->g_1256 p_2097->g_1255 p_2097->g_1254 p_2097->g_1253 p_2097->g_1424 p_2097->g_1407 p_2097->g_543.f2
 * writes: p_2097->g_57 p_2097->g_543.f2 p_2097->g_1272 p_2097->g_691 p_2097->g_785.f2 p_2097->g_492 p_2097->g_216 p_2097->g_684 p_2097->g_280 p_2097->g_341 p_2097->g_153 p_2097->g_226 p_2097->g_1336 p_2097->g_138 p_2097->g_314 p_2097->g_1356 p_2097->g_126.f1 p_2097->g_442 p_2097->g_247 p_2097->g_103 p_2097->g_1406
 */
union U0 * func_9(union U0 * p_10, union U0 * p_11, uint64_t  p_12, union U0 * p_13, union U0 * p_14, struct S2 * p_2097)
{ /* block id: 514 */
    int32_t l_1257 = 0x473C1100L;
    int32_t l_1264 = 0L;
    int32_t l_1265[10][7] = {{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)},{7L,7L,(-2L),0x0FB2B118L,0x0789B033L,0x0FB2B118L,(-2L)}};
    uint32_t l_1307[6][6][4] = {{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}},{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}},{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}},{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}},{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}},{{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L},{0x92EC68C3L,0xE5D481E3L,0xB9ED0145L,0xCB240396L}}};
    uint8_t *l_1333 = &p_2097->g_442;
    int32_t l_1353 = 0L;
    int32_t l_1354 = 0x4AA0EC06L;
    int32_t l_1355[8][4][5] = {{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}},{{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L},{6L,0x5D362B99L,0x4488A30CL,0x6264B643L,0x72FB2B07L}}};
    int16_t ***l_1367 = &p_2097->g_756;
    int32_t *l_1434 = (void*)0;
    int i, j, k;
    if ((p_12 >= l_1257))
    { /* block id: 515 */
        int32_t *l_1258 = (void*)0;
        int32_t l_1259 = 1L;
        int32_t *l_1260 = (void*)0;
        int32_t *l_1261 = &l_1257;
        int32_t *l_1262 = &l_1259;
        int32_t *l_1263[7][9][4] = {{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}},{{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0},{&l_1257,&p_2097->g_57,&p_2097->g_103,(void*)0}}};
        uint8_t l_1266 = 0xDBL;
        int i, j, k;
        l_1266++;
    }
    else
    { /* block id: 517 */
        return p_10;
    }
lbl_1337:
    l_1257 = 1L;
    (*p_2097->g_1269) &= (p_12 && p_12);
    for (p_2097->g_543.f2 = (-8); (p_2097->g_543.f2 > 18); p_2097->g_543.f2++)
    { /* block id: 524 */
        uint64_t ***l_1274 = &p_2097->g_1272;
        int32_t l_1275 = 3L;
        uint16_t l_1280 = 65535UL;
        int32_t **l_1282 = &p_2097->g_216;
        uint32_t *l_1308 = &p_2097->g_153;
        uint32_t **l_1309 = &p_2097->g_280;
        int32_t l_1346 = 0x28C6472DL;
        int32_t l_1347 = 0x58A04906L;
        int32_t l_1348 = 7L;
        int32_t l_1349 = 1L;
        int32_t l_1351 = 0x290A8CDAL;
        int32_t l_1352[8][5][1] = {{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}},{{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L},{0x56A14464L}}};
        uint8_t **l_1405 = &l_1333;
        uint16_t l_1431 = 0x5981L;
        int i, j, k;
        (*l_1282) = func_79(p_12, ((*p_2097->g_1001) = (+((p_2097->g_247 > p_12) == ((((*l_1274) = p_2097->g_1272) == (l_1275 , (void*)0)) < ((*p_2097->g_280) || (((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((*p_2097->g_280) != l_1265[7][1]), 0x5DEF05D98A8DFC69L)), p_2097->g_166.f0)) , l_1280) || 5UL) , (-3L)) > l_1265[1][3])))))), p_12, p_2097->g_968[4], p_2097);
        if (p_12)
            break;
        if ((safe_add_func_int32_t_s_s((((*l_1309) = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((p_12 & (safe_add_func_uint8_t_u_u((--p_2097->g_684[0][1][1]), (safe_sub_func_uint8_t_u_u(l_1265[7][1], ((safe_lshift_func_uint16_t_u_s(((*p_2097->g_1269) != (safe_div_func_int8_t_s_s((**l_1282), (~(l_1257 = (safe_lshift_func_uint8_t_u_s((p_12 , (safe_lshift_func_uint16_t_u_s((((l_1265[7][1] < (((safe_sub_func_int8_t_s_s((p_2097->g_236 & (((+p_12) , ((p_2097->g_442 , p_2097->g_968[6]) , (*p_2097->g_280))) ^ p_12)), l_1264)) && p_2097->g_610[1]) & l_1264)) > l_1307[0][1][3]) , 0x10BDL), 3))), 7))))))), p_12)) != p_12)))))) & l_1265[9][4]), l_1265[3][6])), p_12)), 2)) , l_1308)) == &p_2097->g_202[3]), p_2097->g_1061)))
        { /* block id: 532 */
            uint8_t *l_1323 = &p_2097->g_341[0];
            int64_t *l_1324[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1334[6][4] = {{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L},{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L},{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L},{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L},{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L},{0x1DD2F869L,0x1DD2F869L,0x1DD2F869L,0x1DD2F869L}};
            uint64_t *l_1335 = &p_2097->g_1336;
            union U1 **l_1393 = &p_2097->g_207;
            uint8_t l_1423 = 1UL;
            int32_t l_1426 = 0L;
            int32_t l_1427 = (-8L);
            int i, j;
            if ((((l_1307[0][1][3] || (safe_lshift_func_uint8_t_u_s((((**p_2097->g_578) = ((safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((*l_1335) = (safe_unary_minus_func_int8_t_s((((safe_lshift_func_uint8_t_u_u(((*l_1323) = ((1UL | p_2097->g_484) < 0x799BD4B2L)), 3)) <= ((*p_2097->g_643) == l_1324[3])) && (((**l_1282) = (safe_add_func_uint64_t_u_u(((**p_2097->g_1272) = ((((((++(*l_1308)) | (((safe_add_func_uint32_t_u_u(((3L >= 0x1DL) , p_12), (*p_2097->g_216))) > (**l_1282)) >= 0x68972985L)) ^ l_1257) , &p_2097->g_684[0][1][1]) != l_1333) != p_12)), 0UL))) <= l_1334[1][3]))))), p_12)), p_12)))) ^ l_1334[4][3])) , 0x04L), l_1307[0][1][3]))) || (-1L)) <= p_12))
            { /* block id: 539 */
                int16_t l_1345 = (-4L);
                int32_t l_1350[6] = {0L,0L,0L,0L,0L,0L};
                int16_t ***l_1369[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_1369[i] = &p_2097->g_756;
                if (l_1275)
                    goto lbl_1337;
                if (l_1334[2][1])
                    continue;
                for (p_2097->g_314 = 22; (p_2097->g_314 < 17); p_2097->g_314 = safe_sub_func_int32_t_s_s(p_2097->g_314, 9))
                { /* block id: 544 */
                    uint64_t l_1340 = 0x20510AB8A9F073CDL;
                    int32_t *l_1343 = &p_2097->g_57;
                    int32_t *l_1344[3][4] = {{&p_2097->g_2,&l_1275,&p_2097->g_2,&p_2097->g_2},{&p_2097->g_2,&l_1275,&p_2097->g_2,&p_2097->g_2},{&p_2097->g_2,&l_1275,&p_2097->g_2,&p_2097->g_2}};
                    int16_t ****l_1368 = &l_1367;
                    int i, j;
                    l_1340++;
                    --p_2097->g_1356;
                }
                for (p_2097->g_126.f1 = 0; (p_2097->g_126.f1 == 18); p_2097->g_126.f1 = safe_add_func_uint64_t_u_u(p_2097->g_126.f1, 4))
                { /* block id: 560 */
                    return p_14;
                }
            }
            else
            { /* block id: 563 */
                int32_t l_1398[1][1][9] = {{{0x3F14D720L,0L,0x3F14D720L,0x3F14D720L,0L,0x3F14D720L,0x3F14D720L,0L,0x3F14D720L}}};
                uint8_t **l_1409 = &l_1333;
                uint8_t ***l_1408 = &l_1409;
                int16_t l_1425 = 0L;
                int i, j, k;
                if (p_12)
                    break;
                for (p_2097->g_442 = 9; (p_2097->g_442 > 55); p_2097->g_442 = safe_add_func_uint32_t_u_u(p_2097->g_442, 4))
                { /* block id: 567 */
                    uint32_t l_1399[9][4][3] = {{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}},{{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L},{1UL,0x0ABB0251L,0x858CC4D0L}}};
                    int32_t *l_1400 = &p_2097->g_103;
                    int i, j, k;
                    for (p_2097->g_247 = 8; (p_2097->g_247 > 17); p_2097->g_247 = safe_add_func_uint64_t_u_u(p_2097->g_247, 2))
                    { /* block id: 570 */
                        (*l_1282) = &l_1354;
                    }
                    (*l_1400) ^= (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((~(p_2097->g_493[1] || (safe_mod_func_int32_t_s_s((p_12 >= (safe_mod_func_uint8_t_u_u((+p_12), (~(l_1399[7][2][0] = ((safe_lshift_func_uint8_t_u_s(((((l_1393 == (void*)0) && (p_12 > (safe_mul_func_int16_t_s_s(((p_12 | 0x4B3F59B9FCFBE4B3L) || ((safe_lshift_func_uint8_t_u_u(p_2097->g_226, 2)) , l_1334[5][0])), (**p_2097->g_568))))) || 1L) , p_12), l_1398[0][0][2])) <= (*p_2097->g_216))))))), 4294967295UL)))) , (-1L)), (*p_2097->g_579))), l_1398[0][0][2]));
                }
                (*l_1282) = &l_1353;
                (**l_1282) = (l_1427 |= (safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((((p_2097->g_1406 = l_1405) != ((*l_1408) = &p_2097->g_1407)) > (safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(l_1334[4][0], 0L)) | (l_1426 |= (((p_12 == (((p_2097->g_1414 , (*p_14)) , (((safe_mul_func_int8_t_s_s(((*p_2097->g_1001) = ((safe_div_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(l_1423, ((((p_2097->g_1424 , &p_2097->g_1273[0][1]) == (void*)0) | (*p_2097->g_1407)) , l_1353))) != p_12), 0x3A255A5A609FE097L)) >= 0x6CE7L) || 18446744073709551615UL), l_1425)) >= 0x7287L)), l_1398[0][0][3])) < l_1355[4][1][2]) , (-4L))) , l_1334[3][0])) >= p_2097->g_153) , 0x6A0BE0A915DCD400L))), p_12))), 0UL)) != l_1398[0][0][2]), (*p_2097->g_280))));
            }
        }
        else
        { /* block id: 584 */
            int32_t l_1428[1];
            int32_t *l_1429 = &l_1349;
            int32_t *l_1430[10][2] = {{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346},{(void*)0,&l_1346}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1428[i] = 0x512EF8EFL;
            l_1431--;
        }
        (*l_1282) = (l_1434 = (*l_1282));
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_785.f3 p_2097->g_770 p_2097->g_341 p_2097->g_5 p_2097->g_68 p_2097->g_56 p_2097->g_57 p_2097->g_688 p_2097->g_280 p_2097->g_202 p_2097->g_1115 p_2097->g_206 p_2097->g_207 p_2097->g_759 p_2097->g_226 p_2097->g_160.f0 p_2097->g_684 p_2097->g_103 p_2097->g_870 p_2097->g_169.f0 p_2097->g_968 p_2097->g_1153 p_2097->g_1154 p_2097->g_1163 p_2097->g_1167 p_2097->g_1001 p_2097->g_757 p_2097->g_610 p_2097->g_578 p_2097->g_579 p_2097->g_106 p_2097->g_971 p_2097->g_138 p_2097->g_1218 p_2097->g_1219 p_2097->g_413 p_2097->g_216 p_2097->g_783 p_2097->g_1242 p_2097->g_1243 p_2097->g_1245 p_2097->g_236 p_2097->g_1251 p_2097->g_153
 * writes: p_2097->g_785.f3 p_2097->g_770 p_2097->g_226 p_2097->g_710.f1 p_2097->g_414.f1 p_2097->g_202 p_2097->g_57 p_2097->g_1061 p_2097->g_68 p_2097->g_760 p_2097->g_16.f1 p_2097->g_413 p_2097->g_870 p_2097->g_106 p_2097->g_103 p_2097->g_1167 p_2097->g_691 p_2097->g_785.f2 p_2097->g_710.f2 p_2097->g_1200 p_2097->g_138 p_2097->g_216 p_2097->g_1236 p_2097->g_492 p_2097->g_759 p_2097->g_756 p_2097->g_236 p_2097->g_153 p_2097->g_207
 */
union U0 * func_17(uint32_t  p_18, uint8_t  p_19, struct S2 * p_2097)
{ /* block id: 411 */
    uint8_t l_1080[1][5][5] = {{{0x1BL,0x68L,255UL,0x68L,0x1BL},{0x1BL,0x68L,255UL,0x68L,0x1BL},{0x1BL,0x68L,255UL,0x68L,0x1BL},{0x1BL,0x68L,255UL,0x68L,0x1BL},{0x1BL,0x68L,255UL,0x68L,0x1BL}}};
    int32_t l_1114 = 0x39C8F71FL;
    union U1 **l_1148 = &p_2097->g_760;
    int32_t *l_1164 = &p_2097->g_57;
    int32_t *l_1165[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int64_t l_1166 = 0x004A139E1A3DD5F5L;
    uint32_t l_1168 = 8UL;
    int64_t *l_1173 = &p_2097->g_106[5];
    int64_t **l_1172 = &l_1173;
    int64_t **l_1174 = &l_1173;
    int8_t l_1193 = 0x4DL;
    int8_t l_1197 = (-1L);
    uint16_t l_1228 = 0x41C4L;
    int32_t *l_1249[10][4][6] = {{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}},{{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0},{&l_1114,&p_2097->g_2,(void*)0,&l_1114,(void*)0,(void*)0}}};
    int i, j, k;
    for (p_2097->g_785.f3 = 0; (p_2097->g_785.f3 != 49); p_2097->g_785.f3 = safe_add_func_uint16_t_u_u(p_2097->g_785.f3, 8))
    { /* block id: 414 */
        uint16_t l_1074 = 2UL;
        int16_t **l_1098 = &p_2097->g_757;
        int32_t l_1109[4];
        int32_t l_1113 = (-10L);
        union U0 *l_1140 = &p_2097->g_543;
        int i;
        for (i = 0; i < 4; i++)
            l_1109[i] = 0x0E3B8B73L;
        for (p_2097->g_770 = 0; (p_2097->g_770 <= 3); p_2097->g_770 += 1)
        { /* block id: 417 */
            int8_t l_1079 = 0x37L;
            uint64_t *l_1083 = &p_2097->g_226;
            int16_t **l_1091 = &p_2097->g_757;
            int32_t l_1106 = 1L;
            int32_t l_1112[6][3] = {{0x468BBFCBL,4L,4L},{0x468BBFCBL,4L,4L},{0x468BBFCBL,4L,4L},{0x468BBFCBL,4L,4L},{0x468BBFCBL,4L,4L},{0x468BBFCBL,4L,4L}};
            int i, j;
            if ((safe_add_func_uint8_t_u_u((0x834A6500AC94016BL <= (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(p_2097->g_341[(p_2097->g_770 + 3)], l_1074)) ^ (p_19 < (((*l_1083) = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_1079 != (~l_1080[0][1][4])), l_1080[0][0][1])) , ((safe_lshift_func_int8_t_s_s((p_19 , l_1080[0][0][2]), l_1080[0][1][3])) , p_2097->g_5)), 0L)) & p_19)) & p_2097->g_341[(p_2097->g_770 + 3)]))), p_19))), p_19)))
            { /* block id: 419 */
                int16_t **l_1094 = (void*)0;
                uint32_t l_1099 = 0xBE1A98D8L;
                int32_t l_1104 = 0x2B91731EL;
                for (p_2097->g_710.f1 = 0; (p_2097->g_710.f1 <= 7); p_2097->g_710.f1 += 1)
                { /* block id: 422 */
                    uint32_t l_1084 = 0x2F2AB61BL;
                    if (l_1084)
                        break;
                }
                for (p_2097->g_414.f1 = 7; (p_2097->g_414.f1 >= 2); p_2097->g_414.f1 -= 1)
                { /* block id: 427 */
                    int16_t ***l_1092 = &p_2097->g_756;
                    int16_t ***l_1093 = &l_1091;
                    int16_t ***l_1095 = &p_2097->g_756;
                    int16_t ***l_1096 = &p_2097->g_756;
                    int16_t ***l_1097[5][6][1] = {{{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094}},{{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094}},{{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094}},{{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094}},{{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094},{&l_1094}}};
                    int8_t *l_1100 = &p_2097->g_777.f2;
                    int8_t *l_1101 = (void*)0;
                    int8_t *l_1102 = &p_2097->g_710.f1;
                    int8_t *l_1103 = &p_2097->g_543.f2;
                    int32_t l_1105 = (-7L);
                    int8_t *l_1110[4] = {&p_2097->g_543.f1,&p_2097->g_543.f1,&p_2097->g_543.f1,&p_2097->g_543.f1};
                    int32_t l_1111[5] = {0x546E11C6L,0x546E11C6L,0x546E11C6L,0x546E11C6L,0x546E11C6L};
                    int i, j, k;
                    (*p_2097->g_1115) = (l_1114 = (((*p_2097->g_280) = (l_1113 = (p_2097->g_68 > ((p_18 <= (safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((((((*l_1093) = l_1091) == (l_1098 = l_1094)) || ((*l_1102) = (l_1104 ^= (l_1099 , (-10L))))) || (l_1112[2][0] = ((l_1106 = l_1105) != ((l_1111[4] |= (+(l_1109[0] = (safe_sub_func_int64_t_s_s(0L, ((p_2097->g_341[(p_2097->g_770 + 3)] || (*p_2097->g_56)) , p_2097->g_688)))))) > l_1080[0][1][4])))), p_18)) , p_19), (*p_2097->g_280))), 0x627BL))) > l_1080[0][1][4])))) | p_18));
                }
            }
            else
            { /* block id: 441 */
                int64_t l_1127 = 0x404CEC87CD19F5D2L;
                int16_t *l_1134 = (void*)0;
                for (p_2097->g_1061 = 0; (p_2097->g_1061 <= 7); p_2097->g_1061 += 1)
                { /* block id: 444 */
                    uint32_t l_1116 = 4294967295UL;
                    for (p_2097->g_68 = 3; (p_2097->g_68 >= 0); p_2097->g_68 -= 1)
                    { /* block id: 447 */
                        (*p_2097->g_759) = (*p_2097->g_206);
                        if (l_1116)
                            break;
                    }
                }
                if (p_2097->g_226)
                    goto lbl_1171;
                if ((safe_lshift_func_uint8_t_u_u(p_18, 1)))
                { /* block id: 452 */
                    int8_t *l_1135 = &p_2097->g_16.f1;
                    int32_t l_1136 = (-6L);
                    int32_t *l_1137 = &l_1109[1];
                    int32_t *l_1138 = (void*)0;
                    int32_t *l_1139 = &l_1114;
                    (*l_1139) = (safe_mod_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((((65535UL != p_19) , (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((+((*l_1137) ^= (((~(l_1127 | (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_1080[0][1][4], (safe_sub_func_uint64_t_u_u(((*l_1083) &= (+l_1080[0][4][2])), 0x1FD36C95C31314A7L)))), (((*p_2097->g_280) = (((((void*)0 == l_1134) > ((((*l_1135) = p_2097->g_160[0].f0) & l_1136) , l_1127)) & p_18) | (-4L))) < l_1079))))) <= 0UL) , 1L))) == l_1136) && 0x40C3L), 8)), p_2097->g_684[0][1][1]))) | 0x6EL) < l_1136), (-1L))) != p_2097->g_103) ^ p_2097->g_770), p_19));
                }
                else
                { /* block id: 458 */
                    union U0 **l_1141 = &p_2097->g_413;
                    (*l_1141) = l_1140;
                }
            }
        }
    }
    for (p_2097->g_870 = 0; (p_2097->g_870 <= (-26)); p_2097->g_870 = safe_sub_func_int64_t_s_s(p_2097->g_870, 8))
    { /* block id: 466 */
        uint8_t l_1149 = 255UL;
        int64_t *l_1150 = &p_2097->g_106[1];
        l_1114 &= ((safe_mul_func_uint8_t_u_u((+(safe_mul_func_int8_t_s_s((l_1148 != (p_2097->g_169[1][0][3].f0 , &p_2097->g_760)), p_2097->g_968[7]))), (p_18 < l_1149))) | ((*l_1150) = (-9L)));
    }
    if ((safe_sub_func_int32_t_s_s((p_2097->g_1167 |= (((p_2097->g_1153[0] , (p_2097->g_1154 , l_1114)) && (l_1114 ^ (1L > (safe_mod_func_uint8_t_u_u(255UL, (safe_add_func_int64_t_s_s((((safe_div_func_uint32_t_u_u(p_19, (p_2097->g_103 = ((*l_1164) ^= (((safe_lshift_func_int16_t_s_u(p_18, 9)) <= (l_1080[0][1][4] != p_2097->g_1163)) , l_1080[0][1][4]))))) && p_18) , 0x6F8552193B323D54L), (-1L)))))))) | l_1166)), p_19)))
    { /* block id: 473 */
lbl_1171:
        l_1168++;
lbl_1240:
        l_1174 = l_1172;
    }
    else
    { /* block id: 477 */
        int32_t l_1194 = 0x2FFB8436L;
        int8_t *l_1198 = &p_2097->g_710.f2;
        int32_t *l_1199 = &p_2097->g_1200[3];
        int8_t l_1237 = 0x62L;
        union U0 *l_1239 = &p_2097->g_233[7][0];
        union U1 **l_1241 = &p_2097->g_207;
        int16_t **l_1244 = &p_2097->g_757;
        int32_t **l_1250 = (void*)0;
        if (((*l_1164) = (((safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((((((safe_div_func_int16_t_s_s(((((**l_1174) ^= ((((((**p_2097->g_578) = ((((*l_1199) = (safe_div_func_uint16_t_u_u(((!((safe_rshift_func_int8_t_s_s(((*l_1198) = (safe_sub_func_int32_t_s_s((((((safe_mul_func_int16_t_s_s(0x6BA0L, ((((*p_2097->g_1001) = 1L) , (safe_add_func_int64_t_s_s(p_19, 18446744073709551612UL))) >= 0x703F171421115499L))) == l_1193) && l_1194) != ((safe_rshift_func_uint16_t_u_s((((((*p_2097->g_280) = 4294967289UL) || (l_1194 < p_19)) , l_1194) && p_18), (*p_2097->g_757))) , p_18)) || l_1197), p_18))), 1)) | 3L)) >= 0x359705C1L), 1UL))) , p_19) || p_2097->g_684[0][3][4])) == (*l_1164)) | l_1194) || p_19) , l_1194)) ^ (*l_1164)) && 0UL), (*l_1164))) || p_2097->g_971) | l_1194) < l_1194) ^ p_2097->g_770) >= p_18), l_1194)), p_2097->g_5)), 0x18FFB771294729F8L)) | p_18) | p_19)))
        { /* block id: 485 */
            uint16_t l_1207 = 1UL;
            int32_t l_1208 = 0x0A3AAB93L;
            int32_t l_1217[10] = {5L,0L,0L,0L,5L,5L,0L,0L,0L,5L};
            int16_t l_1238 = 0L;
            int i;
            if (((*l_1164) = p_19))
            { /* block id: 487 */
                int8_t **l_1206 = &l_1198;
                int8_t ***l_1205 = &l_1206;
                int32_t l_1215[2][10] = {{0x0C98DD7AL,1L,0x1BDB3C3AL,1L,0x0C98DD7AL,0x0C98DD7AL,1L,0x1BDB3C3AL,1L,0x0C98DD7AL},{0x0C98DD7AL,1L,0x1BDB3C3AL,1L,0x0C98DD7AL,0x0C98DD7AL,1L,0x1BDB3C3AL,1L,0x0C98DD7AL}};
                int32_t l_1216 = 0x44ADECDFL;
                int i, j;
                l_1217[6] = (safe_add_func_uint16_t_u_u((*p_2097->g_579), ((safe_add_func_uint8_t_u_u(p_19, (l_1216 ^= (((((*l_1205) = &p_2097->g_1001) != (void*)0) && ((l_1208 = ((*l_1164) = (l_1207 < p_19))) >= (safe_rshift_func_uint16_t_u_s(((*p_2097->g_757) != ((safe_rshift_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u(((void*)0 == &l_1165[0][0][1]), l_1215[1][2])) | (*p_2097->g_757)) >= 0xB98DL) , l_1207) == 0xE0L) & p_18), p_18)) < l_1215[1][2])), p_18)))) || 0L)))) == l_1215[1][2])));
                (*p_2097->g_1218) = &l_1216;
            }
            else
            { /* block id: 494 */
                uint32_t l_1220 = 4294967295UL;
                int8_t **l_1226 = (void*)0;
                int8_t *l_1227 = &l_1197;
                int64_t *l_1235 = &p_2097->g_1236;
                (*p_2097->g_783) = func_79(p_2097->g_1219, p_2097->g_202[6], l_1220, (((*l_1173) = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u(0x625CD788AC892066L)), (safe_sub_func_uint8_t_u_u((((&l_1193 == (l_1227 = &p_2097->g_691)) , ((l_1228 != (((safe_mod_func_int8_t_s_s((p_19 == ((((((((*l_1235) = (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(1UL, l_1194)), 3L))) , p_19) || l_1237) == p_18) != 247UL) != p_18) && p_19)), p_19)) < l_1207) | 1L)) , p_18)) != l_1220), p_18)))) & p_19)) > l_1238), p_2097);
                return l_1239;
            }
            if (l_1207)
                goto lbl_1240;
        }
        else
        { /* block id: 502 */
            (*p_2097->g_1242) = l_1241;
        }
        (*p_2097->g_1245) = (p_2097->g_1243 , l_1244);
        for (p_2097->g_236 = 29; (p_2097->g_236 < 33); p_2097->g_236 = safe_add_func_uint8_t_u_u(p_2097->g_236, 5))
        { /* block id: 508 */
            union U0 *l_1248 = (void*)0;
            return l_1248;
        }
        (*p_2097->g_1251) = l_1249[6][0][2];
    }
    return &p_2097->g_785;
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_189.f0 p_2097->g_216 p_2097->g_757 p_2097->g_610 p_2097->g_578 p_2097->g_579 p_2097->g_138 p_2097->g_280 p_2097->g_202 p_2097->g_177.f0 p_2097->g_2 p_2097->g_57 p_2097->g_103 p_2097->g_16.f1 p_2097->g_158.f0 p_2097->g_153 p_2097->g_247 p_2097->g_56 p_2097->g_413 p_2097->g_684 p_2097->g_853 p_2097->g_783 p_2097->g_155 p_2097->g_710.f1 p_2097->g_759 p_2097->g_760 p_2097->g_761 p_2097->g_314 p_2097->g_192.f0 p_2097->g_442 p_2097->g_907 p_2097->g_68 p_2097->g_236 p_2097->g_493 p_2097->g_484 p_2097->g_179.f0 p_2097->g_853.f0 p_2097->g_157 p_2097->g_974 p_2097->g_16 p_2097->g_414.f0 p_2097->g_968 p_2097->g_180.f0 p_2097->g_1041 p_2097->g_1045 p_2097->g_188.f0 p_2097->g_78 p_2097->g_1061
 * writes: p_2097->g_57 p_2097->g_610 p_2097->g_103 p_2097->g_16.f1 p_2097->g_155 p_2097->g_492 p_2097->g_216 p_2097->g_684 p_2097->g_138 p_2097->g_5 p_2097->g_870 p_2097->g_710.f1 p_2097->g_761.f1 p_2097->g_226 p_2097->g_413 p_2097->g_974 p_2097->g_1001 p_2097->g_68 p_2097->g_777.f3 p_2097->g_314 p_2097->g_202 p_2097->g_1061
 */
uint32_t  func_20(union U0 * p_21, int32_t  p_22, union U0 * p_23, union U0 * p_24, struct S2 * p_2097)
{ /* block id: 317 */
    uint8_t l_792[8][7][3] = {{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}},{{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L},{0x71L,0x8BL,0xD5L}}};
    int32_t *l_797[1][10][3] = {{{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103},{(void*)0,(void*)0,&p_2097->g_103}}};
    uint32_t l_798 = 4294967294UL;
    int32_t l_799 = (-7L);
    union U1 **l_811[6] = {(void*)0,&p_2097->g_207,(void*)0,(void*)0,&p_2097->g_207,(void*)0};
    int16_t *l_815 = (void*)0;
    int32_t l_871[10][7][3] = {{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}},{{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L},{4L,(-1L),0x747C3856L}}};
    uint16_t **l_933 = &p_2097->g_579;
    uint64_t *l_940 = &p_2097->g_226;
    int64_t *l_994 = &p_2097->g_247;
    int64_t **l_993 = &l_994;
    int16_t l_1003 = 0x7DC8L;
    uint16_t l_1004 = 0UL;
    union U0 **l_1019 = &p_2097->g_413;
    uint64_t l_1042 = 18446744073709551615UL;
    int8_t **l_1056[10] = {&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001,&p_2097->g_1001};
    int64_t l_1060 = 0x0B7EEE7E1FF2B127L;
    int i, j, k;
    if ((((4294967295UL && (safe_add_func_int32_t_s_s((((2L & (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((l_792[1][6][0] && p_2097->g_189.f0) != (p_22 < ((*p_2097->g_757) ^= (safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((((~l_792[2][1][2]) , (l_798 = ((*p_2097->g_216) = ((((l_792[0][6][0] != 0x019EE2B1L) , (p_22 ^ l_792[1][6][0])) , p_22) != l_792[5][6][2])))) < 1L) != 3UL), p_22)) ^ 0x315B66DCL), p_22))))), p_22)), l_799))) , p_22) | (**p_2097->g_578)), p_22))) ^ (*p_2097->g_280)) || 251UL))
    { /* block id: 321 */
        union U1 **l_810 = &p_2097->g_207;
        int32_t l_814 = 1L;
        int16_t *l_820 = &p_2097->g_610[1];
        uint32_t l_821 = 1UL;
        int16_t l_822 = 0x1584L;
        uint32_t *l_868 = (void*)0;
        uint32_t l_876 = 0x57760BAEL;
        int32_t l_959 = (-6L);
        int32_t l_961[5];
        int32_t l_972 = (-7L);
        uint64_t l_1007 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 5; i++)
            l_961[i] = 0x13FC3C84L;
        p_2097->g_103 |= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((!p_2097->g_177.f0) == (safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s(((p_22 && ((((l_810 == l_811[1]) <= ((safe_lshift_func_uint8_t_u_s(l_814, 7)) , p_22)) | p_22) | ((l_815 = &p_2097->g_770) != (((safe_mul_func_int16_t_s_s(((*p_2097->g_757) = ((safe_mod_func_uint32_t_u_u((p_22 & p_22), 1L)) & p_2097->g_2)), p_22)) , (-3L)) , l_820)))) != (*p_2097->g_216)), l_821)), p_22)), p_2097->g_2))) | 0x48FE92F5L), l_822)), p_22));
        for (p_2097->g_16.f1 = 0; (p_2097->g_16.f1 >= 0); p_2097->g_16.f1 -= 1)
        { /* block id: 327 */
            int32_t l_832 = 0x07343AC0L;
            int32_t *l_834 = &l_799;
            uint8_t *l_844 = &p_2097->g_684[2][5][2];
            uint8_t **l_843 = &l_844;
            uint16_t ****l_896 = &p_2097->g_577;
            union U0 **l_901[6][9] = {{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413},{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413},{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413},{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413},{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413},{&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,(void*)0,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413}};
            union U0 ***l_900 = &l_901[1][7];
            int32_t l_960 = 0L;
            int32_t l_970 = 0x63FB7F5AL;
            int i, j;
            for (p_2097->g_155 = 0; (p_2097->g_155 >= 0); p_2097->g_155 -= 1)
            { /* block id: 330 */
                int16_t l_823 = 3L;
                uint16_t *l_826 = &p_2097->g_138;
                int32_t **l_833[3][9] = {{&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2]},{&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2]},{&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2],&l_797[0][7][2],&l_797[0][4][0],&l_797[0][7][2]}};
                uint16_t *l_854 = &p_2097->g_5;
                union U0 **l_899 = &p_2097->g_413;
                union U0 ***l_898 = &l_899;
                int8_t *l_917 = &p_2097->g_710.f1;
                uint64_t *l_942 = &p_2097->g_226;
                int i, j;
                l_834 = func_79(l_823, p_2097->g_158.f0, ((safe_mul_func_int8_t_s_s((+(((l_826 != l_820) | ((p_22 , (safe_mod_func_uint8_t_u_u(p_2097->g_153, (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u((p_22 | l_814), (((p_22 <= (*p_2097->g_280)) >= (*p_2097->g_757)) != 0x2A528E7BL)))))))) ^ l_832)) , 0x6AL)), p_2097->g_247)) == p_22), p_22, p_2097);
                if ((*p_2097->g_56))
                    break;
                if ((safe_lshift_func_uint16_t_u_s(((*l_854) = (!((safe_add_func_uint16_t_u_u(l_822, 0x90F0L)) ^ (safe_div_func_uint32_t_u_u(((p_22 , ((((safe_lshift_func_uint8_t_u_s(0xDEL, 3)) , p_22) , l_843) == &l_844)) == (((*l_844)++) || (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((**p_2097->g_578) = ((((safe_mod_func_int8_t_s_s((p_2097->g_853[2] , 7L), 0x6DL)) < 0x33F41587CF77829CL) <= 0x29L) < p_22)), p_22)), p_22)))), (*p_2097->g_216)))))), l_821)))
                { /* block id: 336 */
                    uint64_t l_865 = 0x3BC8D84D276C663AL;
                    int32_t *l_869 = &p_2097->g_870;
                    union U1 *l_872 = (void*)0;
                    int8_t *l_873 = &p_2097->g_710.f1;
                    uint32_t *l_874 = &p_2097->g_761[1].f1;
                    uint32_t *l_875[2];
                    uint64_t *l_893 = &l_865;
                    int32_t l_897 = 0x355A397CL;
                    int8_t l_916 = 0L;
                    int8_t **l_918[2][6] = {{&l_873,&l_917,&l_873,&l_873,&l_917,&l_873},{&l_873,&l_917,&l_873,&l_873,&l_917,&l_873}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_875[i] = (void*)0;
                    l_814 = (((p_22 |= ((*l_834) = (**p_2097->g_783))) >= (((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int8_t_s_s(((l_876 |= ((-1L) | ((*l_873) = (!(safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_2097->g_103, ((((((((((((*p_2097->g_579) && (p_2097->g_155 & l_865)) , p_2097->g_684[2][3][2]) == ((((*l_869) = (((safe_sub_func_uint8_t_u_u(((void*)0 == l_868), l_865)) < (*p_2097->g_280)) && 0x60D5L)) , l_865) && l_871[2][0][1])) , l_865) <= (*p_2097->g_280)) , l_814) >= l_865) < l_865) != l_865) , l_872) == (void*)0))), l_821)) & p_2097->g_684[2][2][0]), l_822)))))) > l_822), l_822)) && 0x1CL) , p_2097->g_710.f1) == 0x1C5B76ABL), 2)) <= 0x33L) != 0x1518E903L)) <= 0xD9C1L);
                    if ((p_22 ^ ((((safe_rshift_func_int8_t_s_s(((**p_2097->g_759) , ((safe_div_func_uint32_t_u_u((!((*l_874) = (safe_mul_func_uint8_t_u_u((~(safe_div_func_int64_t_s_s((safe_mul_func_uint64_t_u_u(p_2097->g_314, ((safe_sub_func_int8_t_s_s(p_2097->g_192.f0, ((safe_add_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u((++(*l_893)), (p_22 >= (*l_834)))) < ((((0x1315EEEBL < l_814) || ((void*)0 != l_896)) <= p_2097->g_202[6]) ^ l_897)) , l_822), p_22)) , 0UL))) != l_897))), p_2097->g_442))), p_22)))), (-9L))) & p_2097->g_2)), p_22)) || p_22) , l_898) == l_900)))
                    { /* block id: 345 */
                        return (*p_2097->g_280);
                    }
                    else
                    { /* block id: 347 */
                        int32_t *l_902[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_902[i] = &l_871[1][5][2];
                        l_834 = l_902[1];
                    }
                    (*l_834) = ((((*p_2097->g_216) = ((safe_mul_func_uint8_t_u_u(p_2097->g_907, 0x7AL)) > ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((p_2097->g_68 < ((((((*p_2097->g_579) != (!((**p_2097->g_578) & (((l_822 <= (l_897 |= ((0UL == 0x5E7CL) || (((safe_sub_func_int8_t_s_s(p_2097->g_68, p_22)) , p_22) , p_2097->g_710.f1)))) | l_916) != p_22)))) == (*p_2097->g_757)) ^ p_22) >= 0x1F457D103F02EC51L) >= 0x242D0801L)), p_22)) ^ p_22), (*l_834))) & p_2097->g_236), 0x0466FEEFL)) == 4L))) , 0xD994BBD2L) > 0x0EBBC5E1L);
                    (*l_834) ^= ((l_917 = l_917) != &p_2097->g_691);
                }
                else
                { /* block id: 355 */
                    int64_t *l_927 = (void*)0;
                    int32_t l_928[5][6][6] = {{{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL}},{{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL}},{{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL}},{{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL}},{{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL},{0x4358E6CCL,0x61EA4355L,0x5A3C774DL,0x61EA4355L,0x4358E6CCL,0x4358E6CCL}}};
                    uint64_t **l_941 = &l_940;
                    uint32_t l_943 = 0xDB3EEF7FL;
                    int i, j, k;
                    p_22 = ((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(((((*l_942) = ((-1L) && ((l_928[1][5][3] = p_22) || (((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_933 == &l_826), ((safe_mul_func_uint8_t_u_u(((**l_843) = (safe_sub_func_int64_t_s_s((1L & p_22), (0x5310L < ((safe_div_func_int32_t_s_s((((((*l_941) = l_940) != l_942) <= p_2097->g_493[1]) | p_22), p_22)) == p_2097->g_484))))), 255UL)) < (*l_834)))) & p_22), (-9L))) ^ p_22) ^ l_943)))) == 0x2E2E8F6342B312C7L) != 0L), p_22)) && p_2097->g_179.f0), p_22)), 0x28C6L)) & (*l_834));
                }
                (*p_2097->g_216) = ((*l_834) == ((safe_mul_func_uint8_t_u_u((p_2097->g_853[2].f0 == (safe_lshift_func_uint8_t_u_u(((0xD85AL & 0x0B2FL) != (safe_div_func_uint32_t_u_u((+(((safe_lshift_func_int16_t_s_s(((*p_2097->g_757) |= ((p_22 |= 0x1B178242L) > (0x1422L || ((**l_933) = ((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((*l_899) = ((safe_lshift_func_int8_t_s_u((*l_834), (8L < (((l_876 | 1L) & 4294967295UL) , (*p_2097->g_579))))) , p_2097->g_413)) != p_2097->g_157[1][3][3]) != 0x1D642182L), (*l_834))), (*l_834))) && 0x7B496E6CL))))), p_2097->g_155)) >= (*l_834)) , p_22)), (*l_834)))), 1))), 0xF7L)) , p_22));
                for (p_2097->g_870 = 0; (p_2097->g_870 <= 0); p_2097->g_870 += 1)
                { /* block id: 369 */
                    int64_t l_958 = 0x259B8C4F3901704EL;
                    int32_t l_963 = 1L;
                    int32_t l_966[9][4] = {{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)},{7L,0x69878F37L,0x27D71F2AL,(-1L)}};
                    uint32_t *l_995 = (void*)0;
                    uint32_t *l_996 = (void*)0;
                    uint32_t *l_997 = (void*)0;
                    uint32_t *l_998 = &p_2097->g_126.f1;
                    uint32_t *l_999 = &l_821;
                    int8_t **l_1000 = &l_917;
                    int8_t l_1002 = (-8L);
                    int i, j;
                    for (p_2097->g_710.f1 = 0; (p_2097->g_710.f1 <= 0); p_2097->g_710.f1 += 1)
                    { /* block id: 372 */
                        int32_t l_962 = 1L;
                        int64_t l_965 = 2L;
                        int32_t l_967 = 0x0949D9C9L;
                        int32_t l_969 = 0x400DFD6AL;
                        int32_t l_973 = 0x1912E081L;
                        int i, j, k;
                        --p_2097->g_974;
                    }
                    l_961[4] |= (((0x000A3B83L == ((*l_999) ^= (safe_mul_func_int8_t_s_s(((((*p_21) , ((((&l_940 != &l_940) || (p_2097->g_414.f0 <= ((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(255UL, 1)) , (safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((((((safe_div_func_int16_t_s_s((-10L), l_814)) || ((safe_add_func_int32_t_s_s(p_22, 0UL)) >= p_2097->g_202[0])) < p_22) != l_958) <= (*l_834)) != p_22) < p_2097->g_68), 0x623332E3A3ECEABAL)), p_2097->g_103))), l_963)) || l_958), 6)) , p_22))) && p_22) && (*p_2097->g_216))) , l_993) == (void*)0), p_2097->g_247)))) > 0UL) ^ (*l_834));
                    (*p_2097->g_783) = func_79((4UL || (+p_22)), p_22, l_966[3][2], (+(((p_2097->g_968[3] , &p_2097->g_691) != (p_2097->g_1001 = ((*l_1000) = &p_2097->g_691))) || (((!((((((((p_22 , l_1002) && 0xF04B1275L) , p_22) >= p_22) , p_2097->g_180.f0) | p_22) || 0x26FCL) == l_958)) != 4294967295UL) > p_2097->g_247))), p_2097);
                }
            }
            if ((**p_2097->g_783))
                continue;
            --l_1004;
            --l_1007;
        }
    }
    else
    { /* block id: 386 */
        int32_t **l_1010 = &l_797[0][0][1];
        (*l_1010) = (void*)0;
        return p_22;
    }
    for (p_2097->g_68 = 0; (p_2097->g_68 == (-27)); p_2097->g_68 = safe_sub_func_int32_t_s_s(p_2097->g_68, 9))
    { /* block id: 392 */
        union U0 **l_1021[7] = {&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413};
        int32_t l_1043 = 0x12B91E01L;
        uint8_t l_1044 = 0x9AL;
        int8_t **l_1058[7][1][7] = {{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}},{{(void*)0,&p_2097->g_1001,(void*)0,(void*)0,&p_2097->g_1001,(void*)0,(void*)0}}};
        int8_t ***l_1057 = &l_1058[0][0][3];
        uint32_t *l_1059 = &p_2097->g_314;
        int i, j, k;
        for (p_2097->g_103 = 0; (p_2097->g_103 < (-5)); p_2097->g_103 = safe_sub_func_uint64_t_u_u(p_2097->g_103, 7))
        { /* block id: 395 */
            union U0 ***l_1020 = &l_1019;
            uint8_t *l_1022 = &p_2097->g_777.f3;
            uint8_t *l_1033 = &p_2097->g_414.f3;
            uint8_t *l_1034 = &p_2097->g_684[1][2][7];
            (*p_2097->g_216) = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((-8L), (!((*l_1022) = (((*l_1020) = l_1019) != l_1021[4]))))), (-4L))) | (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((18446744073709551612UL != ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_s(((--(*l_1034)) ^ 247UL), (safe_div_func_uint64_t_u_u((p_22 , (safe_lshift_func_uint8_t_u_u((p_22 ^ (p_2097->g_1041 , l_1042)), 1))), p_22)))) != (*p_2097->g_216)) <= l_1043) < 1L) ^ 0UL), l_1043)), p_2097->g_968[4])) == l_1044)), p_2097->g_968[7])), p_2097->g_236)));
            (*p_2097->g_1045) = &l_871[5][2][0];
        }
        (*p_2097->g_216) = ((0xE8L > ((1UL != (l_1044 <= (l_1043 ^= ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((p_22 == (p_22 == ((*p_2097->g_280) = (((*l_1059) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((p_22 < (safe_mod_func_int64_t_s_s(0x0FF9BCA461B08DD2L, ((l_1056[4] != ((*l_1057) = (void*)0)) ^ 65533UL)))) != (*p_2097->g_280)) , &p_2097->g_226) != &l_1042), 1)), 0x633042E9L)) , p_2097->g_414.f0)) , (*p_2097->g_280))))) | (**p_2097->g_578)), p_22)), 6L)) && p_22)))) , p_2097->g_188.f0)) != p_2097->g_78);
    }
    --p_2097->g_1061;
    return (*p_2097->g_280);
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_2 p_2097->g_78 p_2097->g_57 p_2097->g_16.f0 p_2097->g_56 p_2097->g_103 p_2097->g_68 p_2097->g_106 p_2097->g_126 p_2097->g_5 p_2097->g_138 p_2097->g_153 p_2097->g_155 p_2097->g_157 p_2097->g_196 p_2097->g_202 p_2097->g_206 p_2097->g_216 p_2097->g_170.f0 p_2097->g_226 p_2097->g_164.f0 p_2097->g_233 p_2097->g_247 p_2097->g_16.f1 p_2097->g_192.f0 p_2097->g_341 p_2097->g_314 p_2097->g_16.f3 p_2097->g_236 p_2097->g_189.f0 p_2097->g_543 p_2097->g_413 p_2097->g_414 p_2097->g_126.f1 p_2097->g_568 p_2097->g_509 p_2097->g_398 p_2097->g_399 p_2097->g_160.f0 p_2097->g_484 p_2097->g_442 p_2097->g_579 p_2097->g_280 p_2097->g_611 p_2097->g_627 p_2097->g_490 p_2097->g_642 p_2097->g_643 p_2097->g_569 p_2097->g_188.f0 p_2097->g_578 p_2097->g_670 p_2097->g_543.f0 p_2097->g_610 p_2097->g_684 p_2097->g_701 p_2097->g_710 p_2097->g_169.f0 p_2097->g_577 p_2097->g_758 p_2097->g_759 p_2097->g_783
 * writes: p_2097->g_5 p_2097->g_68 p_2097->g_78 p_2097->g_103 p_2097->g_57 p_2097->g_106 p_2097->g_138 p_2097->g_126.f1 p_2097->g_153 p_2097->g_155 p_2097->g_202 p_2097->g_207 p_2097->g_226 p_2097->g_216 p_2097->g_236 p_2097->g_247 p_2097->g_16.f1 p_2097->g_186.f2 p_2097->g_159 p_2097->g_341 p_2097->g_16.f3 p_2097->g_233.f3 p_2097->g_577 p_2097->g_611 p_2097->g_233.f2 p_2097->g_492 p_2097->g_413 p_2097->g_684 p_2097->g_160 p_2097->g_756 p_2097->g_759 p_2097->g_770
 */
uint64_t  func_26(union U0 * p_27, uint32_t  p_28, uint32_t  p_29, union U0 * p_30, struct S2 * p_2097)
{ /* block id: 17 */
    uint16_t *l_63[9] = {&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5,&p_2097->g_5};
    int32_t l_66 = 0x3AA2DF50L;
    int64_t *l_67 = &p_2097->g_68;
    int32_t l_69 = 0x76B84923L;
    int64_t *l_77 = &p_2097->g_78;
    uint16_t ***l_768 = &p_2097->g_578;
    uint16_t ****l_767 = &l_768;
    int i;
    if ((((((((p_2097->g_5 = 0xF8C5L) | (((*l_67) = (safe_mul_func_int8_t_s_s((&p_2097->g_16 == p_30), l_66))) != (((l_69 = 0x14ACL) ^ ((((safe_unary_minus_func_uint8_t_u((p_2097->g_2 , (safe_rshift_func_int8_t_s_u((((p_30 != ((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(((*l_77) ^= ((l_66 ^ ((-4L) < p_29)) < p_28)), (-3L))), p_28)) , (void*)0)) < l_66) ^ p_29), p_2097->g_57))))) <= l_66) | 1UL) >= l_66)) ^ 18446744073709551611UL))) & p_2097->g_16.f0) & p_2097->g_2) < p_2097->g_57) | l_66) && 0UL))
    { /* block id: 22 */
        return p_2097->g_2;
    }
    else
    { /* block id: 24 */
        union U1 ***l_762 = &p_2097->g_759;
        union U1 **l_764 = &p_2097->g_760;
        union U1 ***l_763 = &l_764;
        uint16_t ****l_765[4][1];
        uint16_t *****l_766[8][2];
        int16_t *l_769 = &p_2097->g_770;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_765[i][j] = (void*)0;
        }
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
                l_766[i][j] = (void*)0;
        }
        (*p_2097->g_783) = func_79(p_29, func_45(((safe_mul_func_int8_t_s_s(1L, (((safe_lshift_func_uint16_t_u_s(func_88(l_67, l_67, &p_2097->g_5, p_2097), 5)) > (((*l_763) = ((*l_762) = p_2097->g_759)) == &p_2097->g_760)) != ((*l_769) = ((l_767 = l_765[0][0]) == &l_768))))) >= 0x45L), p_2097), p_2097->g_442, p_2097->g_2, p_2097);
        (*p_2097->g_216) = 0x41A933CFL;
    }
    return p_2097->g_188.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0 * func_31(uint8_t  p_32, union U0 * p_33, int32_t  p_34, int32_t  p_35, struct S2 * p_2097)
{ /* block id: 14 */
    uint32_t l_60[1];
    int i;
    for (i = 0; i < 1; i++)
        l_60[i] = 1UL;
    for (p_35 = 0; p_35 < 1; p_35 += 1)
    {
        l_60[p_35] = 4294967288UL;
    }
    return &p_2097->g_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_56 p_2097->g_57
 * writes: p_2097->g_57
 */
int32_t  func_45(int32_t  p_46, struct S2 * p_2097)
{ /* block id: 10 */
    uint32_t l_55 = 1UL;
    uint64_t l_58[6];
    int i;
    for (i = 0; i < 6; i++)
        l_58[i] = 18446744073709551615UL;
    (*p_2097->g_56) &= l_55;
    for (p_46 = 0; p_46 < 6; p_46 += 1)
    {
        l_58[p_46] = 0xEA1325A46E4944C1L;
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_56 p_2097->g_57 p_2097->g_413 p_2097->g_216
 * writes: p_2097->g_57 p_2097->g_492 p_2097->g_216
 */
int32_t * func_79(int64_t  p_80, int8_t  p_81, uint16_t  p_82, uint32_t  p_83, struct S2 * p_2097)
{ /* block id: 306 */
    uint64_t l_773 = 6UL;
    union U0 *l_776 = &p_2097->g_777;
    int32_t *l_778[8][5] = {{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57},{&p_2097->g_57,(void*)0,&p_2097->g_57,&p_2097->g_2,&p_2097->g_57}};
    uint32_t l_779 = 4294967295UL;
    int32_t **l_782 = &p_2097->g_216;
    int i, j;
    p_2097->g_492 = (~((*p_2097->g_56) = (safe_rshift_func_uint16_t_u_s(l_773, (safe_add_func_int16_t_s_s((1UL | (*p_2097->g_56)), (l_776 == p_2097->g_413)))))));
    l_779++;
    (*l_782) = &p_2097->g_57;
    return (*l_782);
}


/* ------------------------------------------ */
/* 
 * reads : p_2097->g_78 p_2097->g_56 p_2097->g_57 p_2097->g_103 p_2097->g_68 p_2097->g_106 p_2097->g_126 p_2097->g_5 p_2097->g_138 p_2097->g_16.f0 p_2097->g_153 p_2097->g_155 p_2097->g_157 p_2097->g_196 p_2097->g_202 p_2097->g_206 p_2097->g_216 p_2097->g_170.f0 p_2097->g_226 p_2097->g_164.f0 p_2097->g_233 p_2097->g_247 p_2097->g_16.f1 p_2097->g_192.f0 p_2097->g_341 p_2097->g_2 p_2097->g_314 p_2097->g_16.f3 p_2097->g_236 p_2097->g_189.f0 p_2097->g_543 p_2097->g_413 p_2097->g_414 p_2097->g_126.f1 p_2097->g_568 p_2097->g_509 p_2097->g_398 p_2097->g_399 p_2097->g_160.f0 p_2097->g_484 p_2097->g_442 p_2097->g_579 p_2097->g_280 p_2097->g_611 p_2097->g_627 p_2097->g_490 p_2097->g_642 p_2097->g_643 p_2097->g_569 p_2097->g_188.f0 p_2097->g_578 p_2097->g_670 p_2097->g_543.f0 p_2097->g_610 p_2097->g_684 p_2097->g_701 p_2097->g_710 p_2097->g_169.f0 p_2097->g_577 p_2097->g_758
 * writes: p_2097->g_78 p_2097->g_103 p_2097->g_68 p_2097->g_57 p_2097->g_106 p_2097->g_5 p_2097->g_138 p_2097->g_126.f1 p_2097->g_153 p_2097->g_155 p_2097->g_202 p_2097->g_207 p_2097->g_226 p_2097->g_216 p_2097->g_236 p_2097->g_247 p_2097->g_16.f1 p_2097->g_186.f2 p_2097->g_159 p_2097->g_341 p_2097->g_16.f3 p_2097->g_233.f3 p_2097->g_577 p_2097->g_611 p_2097->g_233.f2 p_2097->g_492 p_2097->g_413 p_2097->g_684 p_2097->g_160 p_2097->g_756
 */
uint16_t  func_88(int64_t * p_89, int64_t * p_90, uint16_t * p_91, struct S2 * p_2097)
{ /* block id: 25 */
    int32_t l_94 = (-1L);
    int32_t l_154[6];
    int32_t *l_217 = &l_154[5];
    uint64_t *l_225 = &p_2097->g_226;
    uint32_t *l_231 = &p_2097->g_126.f1;
    union U1 *l_315 = (void*)0;
    int32_t l_342[8][1] = {{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L},{0x23C0FA37L}};
    uint16_t l_347 = 0xB859L;
    uint64_t l_348 = 0x53D7882B56A3F8C5L;
    int32_t l_364[4][9] = {{0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL},{0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL},{0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL},{0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL,0x5A649F2DL}};
    union U0 *l_411 = &p_2097->g_233[7][0];
    uint16_t *l_453 = &p_2097->g_138;
    uint16_t **l_452 = &l_453;
    int64_t *l_548[8];
    uint16_t ***l_580 = &l_452;
    int8_t l_588 = (-3L);
    uint8_t *l_660 = &p_2097->g_442;
    uint64_t l_692 = 0xFDC1C9238220575BL;
    uint32_t l_712 = 1UL;
    int32_t l_741 = (-1L);
    uint32_t l_751 = 0x4A94D249L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_154[i] = (-1L);
    for (i = 0; i < 8; i++)
        l_548[i] = (void*)0;
    for (p_2097->g_78 = (-2); (p_2097->g_78 == 9); p_2097->g_78 = safe_add_func_int8_t_s_s(p_2097->g_78, 8))
    { /* block id: 28 */
        uint32_t l_101 = 0xCEF17F0EL;
        int32_t *l_102 = &p_2097->g_103;
        int32_t l_197 = 1L;
        union U1 *l_205 = (void*)0;
        (*l_102) &= (((l_94 <= 1L) && (*p_2097->g_56)) >= (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((l_94 == (safe_mod_func_int8_t_s_s(l_101, 0x86L))), l_101)), (l_94 < (-1L)))));
        for (p_2097->g_68 = 12; (p_2097->g_68 < 1); p_2097->g_68 = safe_sub_func_int8_t_s_s(p_2097->g_68, 7))
        { /* block id: 32 */
            int32_t l_151 = 0x2F7B95B8L;
            int32_t l_198 = 0x04F902FEL;
            for (p_2097->g_103 = 0; (p_2097->g_103 <= 5); p_2097->g_103 += 1)
            { /* block id: 35 */
                int32_t l_120 = 0x3435D61FL;
                uint32_t l_156 = 4294967295UL;
                union U1 *l_208[5] = {&p_2097->g_126,&p_2097->g_126,&p_2097->g_126,&p_2097->g_126,&p_2097->g_126};
                int i;
                for (l_101 = 0; (l_101 <= 5); l_101 += 1)
                { /* block id: 38 */
                    if ((p_89 == (void*)0))
                    { /* block id: 39 */
                        return p_2097->g_57;
                    }
                    else
                    { /* block id: 41 */
                        return p_2097->g_68;
                    }
                }
                for (p_2097->g_57 = 1; (p_2097->g_57 <= 5); p_2097->g_57 += 1)
                { /* block id: 47 */
                    uint16_t **l_111 = (void*)0;
                    uint16_t *l_113 = &p_2097->g_5;
                    uint16_t **l_112 = &l_113;
                    uint16_t *l_115 = &p_2097->g_5;
                    uint16_t **l_114 = &l_115;
                    int32_t l_125 = 0x3A2F2406L;
                    int64_t l_134 = 4L;
                    int64_t *l_213 = &p_2097->g_106[p_2097->g_103];
                    int64_t *l_214 = (void*)0;
                    int64_t *l_215 = &l_134;
                    int32_t *l_218 = &l_154[5];
                    int i;
                    if ((0x22L != (((-5L) & (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_94, 3)) <= (((*l_112) = &p_2097->g_5) == ((((((*l_114) = (void*)0) != (((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((p_2097->g_106[p_2097->g_103] |= l_120), ((safe_mul_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(0x075E4EBAL, ((void*)0 != &p_2097->g_16))) <= 0xF63B645C325D181DL) <= 1UL) != l_94) < (*p_2097->g_56)), l_125)) & p_2097->g_57))), 0x2AL)) , p_2097->g_126) , &p_2097->g_5)) && p_2097->g_106[p_2097->g_103]) <= l_125) , (void*)0))), (*p_91)))) >= l_120)))
                    { /* block id: 51 */
                        int32_t **l_127 = &l_102;
                        (*l_127) = &p_2097->g_103;
                    }
                    else
                    { /* block id: 53 */
                        uint16_t *l_137 = &p_2097->g_138;
                        uint32_t *l_143[6][5][1] = {{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}},{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}},{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}},{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}},{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}},{{&l_101},{&l_101},{&l_101},{&l_101},{&l_101}}};
                        int32_t l_144 = 0x12FC398BL;
                        uint16_t *l_152 = (void*)0;
                        int32_t *l_199 = (void*)0;
                        int32_t *l_200 = &l_197;
                        int32_t *l_201[2][9][10] = {{{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144}},{{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144},{(void*)0,&l_144,&l_144,(void*)0,(void*)0,&l_144,&l_198,&l_125,(void*)0,&l_144}}};
                        int i, j, k;
                        l_197 = (safe_lshift_func_uint16_t_u_s(((*l_113)--), (((safe_sub_func_uint16_t_u_u(((((l_134 , (safe_lshift_func_int8_t_s_s(((p_2097->g_155 |= ((((p_2097->g_103 == ((--(*l_137)) == (l_154[5] = (p_2097->g_153 ^= (safe_mod_func_uint32_t_u_u((l_125 , (p_2097->g_126.f1 = p_2097->g_106[0])), ((p_2097->g_103 || 1UL) && ((~l_144) | ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((*l_102), (safe_mod_func_int16_t_s_s((((-1L) <= l_125) <= l_94), l_144)))) , p_2097->g_16.f0), 14)) , l_151))))))))) , l_154[5]) >= 2UL) > 7L)) ^ 0x3C7B1C5AL), l_156))) || 1L) , (void*)0) == p_2097->g_157[4][1][0]), l_120)) , p_2097->g_196[1]) , l_151)));
                        p_2097->g_202[6]--;
                        if ((*p_2097->g_56))
                            break;
                        (*p_2097->g_206) = l_205;
                    }
                    (*l_218) |= ((&l_197 == (l_217 = ((l_208[3] != (void*)0) , (((4294967292UL || (*p_2097->g_56)) | ((((*p_89) >= (((*l_215) = ((*l_213) = ((safe_div_func_int16_t_s_s(p_2097->g_138, p_2097->g_202[7])) < (safe_rshift_func_int16_t_s_s(p_2097->g_103, 6))))) | p_2097->g_57)) == l_94) <= 0xB3754A37D6F5CED9L)) , p_2097->g_216)))) == (*p_91));
                }
            }
        }
        (*l_102) = 1L;
    }
    if (((+((*l_217) , (((*l_217) ^ (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((((*p_89) >= (*p_90)) <= (*l_217)) < ((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(p_2097->g_170.f0)), ((*l_217) | (++(*l_225))))) || p_2097->g_164.f0) >= ((*l_231) = (((safe_div_func_uint8_t_u_u(p_2097->g_57, 9UL)) == p_2097->g_138) ^ (*l_217)))) != (*l_217))))), 4294967291UL))) > (*l_217)))) == (*l_217)))
    { /* block id: 76 */
        int32_t *l_232 = (void*)0;
        int32_t **l_234 = &p_2097->g_216;
        int32_t *l_235 = &p_2097->g_103;
        int16_t l_259 = 0x03DBL;
        uint32_t l_300 = 0x3318A37BL;
        p_2097->g_247 ^= (((*l_217) >= ((p_2097->g_236 = ((*l_235) = (l_232 != (p_2097->g_233[7][0] , ((*l_234) = &p_2097->g_2))))) , (safe_add_func_int32_t_s_s((*l_217), 0UL)))) != (((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s(((((((*l_217) , &p_2097->g_138) != (((safe_rshift_func_int16_t_s_s(((~(safe_div_func_int16_t_s_s((((*l_217) || (-2L)) && (*l_217)), (*l_217)))) | 0xA08BE86FL), (*l_217))) > (*p_90)) , p_91)) >= (-5L)) & (*l_217)) & (*l_217)), (*l_217))), (*l_217))) <= 1L) == 0x4AL));
        if (p_2097->g_78)
            goto lbl_250;
lbl_250:
        for (p_2097->g_155 = 0; (p_2097->g_155 < (-7)); p_2097->g_155 = safe_sub_func_int64_t_s_s(p_2097->g_155, 1))
        { /* block id: 83 */
            return (*p_91);
        }
        for (p_2097->g_16.f1 = 7; (p_2097->g_16.f1 >= 2); p_2097->g_16.f1 -= 1)
        { /* block id: 89 */
            uint16_t l_251 = 0x87E5L;
            int32_t l_253 = 0x1F17B183L;
            uint32_t l_301 = 0xAD0A1E72L;
            for (p_2097->g_186.f2 = 0; p_2097->g_186.f2 < 10; p_2097->g_186.f2 += 1)
            {
                union U0 tmp = {{0xA1L}};
                p_2097->g_159[p_2097->g_186.f2] = tmp;
            }
            (*l_234) = &p_2097->g_103;
            if (l_251)
                continue;
            if ((*l_235))
                break;
            for (p_2097->g_155 = 7; (p_2097->g_155 >= 0); p_2097->g_155 -= 1)
            { /* block id: 96 */
                union U1 **l_252 = (void*)0;
                int32_t l_260 = (-1L);
                uint64_t l_283 = 0x0155958A4741F752L;
                uint32_t *l_313 = &p_2097->g_314;
                int8_t *l_316 = &p_2097->g_233[7][0].f2;
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 131 */
        int8_t *l_335 = &p_2097->g_16.f1;
        uint8_t *l_336 = &p_2097->g_233[7][0].f3;
        uint8_t *l_337 = &p_2097->g_233[7][0].f3;
        uint8_t *l_338 = &p_2097->g_233[7][0].f3;
        int32_t l_339[4][3][4] = {{{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL}},{{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL}},{{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL}},{{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL},{0x7F13D07EL,0x1A7C9FCBL,(-2L),0x1A7C9FCBL}}};
        uint8_t *l_340[7][10] = {{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]},{&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1],&p_2097->g_233[7][0].f3,(void*)0,&p_2097->g_233[7][0].f3,&p_2097->g_341[1],&p_2097->g_341[5],&p_2097->g_341[5],&p_2097->g_341[1]}};
        int32_t **l_349 = &l_217;
        int16_t *l_359 = &p_2097->g_155;
        int32_t *l_365[3][8][2] = {{{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]}},{{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]}},{{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]},{(void*)0,&l_154[5]}}};
        int64_t l_366 = 0x17B5B3C7A56F86E5L;
        int64_t l_410 = 0x0DA59580A802C583L;
        union U0 **l_507 = &l_411;
        int32_t l_536[2][2][9] = {{{(-2L),(-2L),(-9L),5L,0x238EEEE2L,0x1844B3BAL,(-1L),(-4L),(-1L)},{(-2L),(-2L),(-9L),5L,0x238EEEE2L,0x1844B3BAL,(-1L),(-4L),(-1L)}},{{(-2L),(-2L),(-9L),5L,0x238EEEE2L,0x1844B3BAL,(-1L),(-4L),(-1L)},{(-2L),(-2L),(-9L),5L,0x238EEEE2L,0x1844B3BAL,(-1L),(-4L),(-1L)}}};
        int64_t *l_551 = &l_410;
        uint64_t l_552 = 0x78D8AB6327CC199DL;
        uint16_t ***l_575 = &l_452;
        union U1 **l_594 = (void*)0;
        union U1 **l_595 = &p_2097->g_207;
        uint8_t l_711 = 0x89L;
        int32_t l_725 = 0x044905EDL;
        int i, j, k;
        (*l_349) = ((safe_mod_func_int16_t_s_s((&p_2097->g_247 == (void*)0), (safe_rshift_func_int16_t_s_s(p_2097->g_192.f0, (safe_mod_func_uint64_t_u_u(((*l_217) > (safe_mod_func_uint64_t_u_u(0UL, (((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((((safe_div_func_int64_t_s_s(((((+(*l_217)) & ((((*l_335) = 9L) > (p_2097->g_341[0]--)) == (((*p_91) = (safe_div_func_uint8_t_u_u(0x4FL, l_347))) | (*l_217)))) , (void*)0) == (void*)0), (*l_217))) , (void*)0) == (void*)0) | l_339[3][2][3]), p_2097->g_202[6])), l_348)), 248UL)), p_2097->g_106[0])) ^ p_2097->g_226) , 0xA2CB06E81FA64683L)))), 0x6FE5D314C61F8A72L)))))) , &p_2097->g_2);
        if ((0x7132A05AL ^ (((*p_91) = (((((safe_unary_minus_func_uint16_t_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((**l_349), (((safe_rshift_func_int16_t_s_s(((*l_359) = (safe_rshift_func_int8_t_s_u((l_225 == ((*l_217) , l_225)), 3))), ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(2UL, (((l_364[2][2] >= (+((p_2097->g_103 ^= (*p_2097->g_56)) != (*p_2097->g_216)))) , 1L) & 4294967290UL))), 11)) > p_2097->g_314))) ^ (**l_349)) , (**l_349)))), (*l_217))))) == l_366) >= (*p_2097->g_216)) > (*l_217)) <= (*p_91))) < p_2097->g_78)))
        { /* block id: 139 */
            uint16_t l_369[2][2];
            int32_t l_370 = 0x4EFC4C12L;
            int8_t l_455 = (-7L);
            int32_t l_488 = (-10L);
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_369[i][j] = 0xBB60L;
            }
            for (p_2097->g_16.f3 = 0; (p_2097->g_16.f3 == 16); p_2097->g_16.f3++)
            { /* block id: 142 */
                uint32_t l_371 = 0xEE67E9CEL;
                if (l_369[1][1])
                    break;
                l_371--;
            }
            for (l_370 = 0; (l_370 < (-8)); --l_370)
            { /* block id: 148 */
                uint16_t l_378 = 65535UL;
                uint16_t *l_401 = &p_2097->g_138;
                uint16_t **l_400 = &l_401;
                uint16_t ***l_454 = &l_452;
                int32_t l_489[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_489[i] = 0x206FD582L;
                (1 + 1);
            }
        }
        else
        { /* block id: 211 */
            int16_t *l_533 = &p_2097->g_155;
            int16_t **l_534 = &l_359;
            int32_t l_535 = (-6L);
            int32_t l_563 = 0x51DCC962L;
            int32_t l_564[4][8][8] = {{{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L}},{{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L}},{{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L}},{{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L},{0x4583BF57L,0x0873D6D5L,(-1L),4L,0x23084BE7L,0x1A4D6E9CL,(-1L),0L}}};
            uint16_t ****l_616[7] = {&l_580,&p_2097->g_577,&l_580,&l_580,&p_2097->g_577,&l_580,&l_580};
            uint32_t *l_634[5][1][6] = {{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314}},{{&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314,&p_2097->g_314}}};
            uint8_t l_635[6] = {0x1BL,0x1BL,0x1BL,0x1BL,0x1BL,0x1BL};
            int8_t l_687 = 0x59L;
            union U0 *l_708 = &p_2097->g_233[7][0];
            uint16_t l_743 = 0x4FD0L;
            int i, j, k;
            if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((*l_217), (*l_217))), ((((!((*l_335) = p_2097->g_236)) , (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((8L <= p_2097->g_189.f0), 11)), (*p_89))), (**l_349))), (((*l_534) = l_533) != (void*)0))), l_535)), 255UL)), l_536[1][1][8]))) == 0x3DL) > p_2097->g_341[0]))), 0L)))
            { /* block id: 214 */
                int64_t *l_550 = &p_2097->g_247;
                int64_t **l_549[4][2] = {{&l_550,&l_550},{&l_550,&l_550},{&l_550,&l_550},{&l_550,&l_550}};
                int32_t l_555 = 0x1585C962L;
                uint32_t *l_562 = &p_2097->g_202[1];
                int32_t l_607 = 1L;
                int32_t l_609 = (-7L);
                union U0 **l_664 = &l_411;
                int16_t l_690 = 8L;
                int i, j;
                if ((((((((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_535, (**l_349))), (p_2097->g_543 , ((**l_452) = (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((((*p_2097->g_413) , l_548[3]) != (l_551 = p_90)), (--l_552))) , (l_555 >= (!(-1L)))), 6)))))), (l_564[0][7][4] |= (((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_336) = (&p_2097->g_236 != l_562)), 0)), 0x46L)), 2)) >= l_563) < (*p_91)) | 0x236556774654AAA6L) != (**l_349))))) , l_564[0][7][4]) != 1L) && 3L) == 8L) != p_2097->g_126.f1) ^ l_563))
                { /* block id: 220 */
                    int8_t l_570 = 0L;
                    uint16_t ****l_576 = &l_575;
                    int32_t *l_589 = (void*)0;
                    if ((safe_unary_minus_func_int16_t_s((0x5AE70F58L & (safe_mod_func_uint32_t_u_u(((p_2097->g_568 != &p_2097->g_569) == l_570), (p_2097->g_509 | (l_555 != (safe_lshift_func_int8_t_s_s(((p_2097->g_577 = ((*l_576) = l_575)) != l_580), 5))))))))))
                    { /* block id: 223 */
                        int64_t l_585 = (-1L);
                        (*p_2097->g_56) = ((((*l_225) = (0UL < (*p_2097->g_56))) , 65535UL) != ((((void*)0 != l_576) != ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((l_585 & ((+(((((safe_rshift_func_uint16_t_u_s(0xB47CL, (p_2097->g_106[4] == (0xF2L || 0x13L)))) >= (*p_90)) >= (-6L)) , 0x60BDL) <= 0xB093L)) , (*p_90))) > p_2097->g_202[0]), l_585)), 0L)) != p_2097->g_202[6])) || l_588));
                        (*p_2097->g_56) |= l_585;
                        return (*p_2097->g_398);
                    }
                    else
                    { /* block id: 228 */
                        int32_t l_606 = 1L;
                        (*l_349) = l_589;
                        (*l_349) = &l_555;
                        p_2097->g_103 = (safe_rshift_func_int8_t_s_s((((0UL >= (safe_mul_func_uint8_t_u_u(((*l_338) = (l_594 == (l_595 = &p_2097->g_207))), ((safe_sub_func_uint64_t_u_u(((*l_225) = (l_555 , ((safe_div_func_uint32_t_u_u(0x0EC55AD3L, (safe_sub_func_uint8_t_u_u((((*p_2097->g_216) = (safe_sub_func_uint64_t_u_u(p_2097->g_160[0].f0, l_555))) ^ (((safe_mul_func_int16_t_s_s(p_2097->g_484, (p_2097->g_202[6] | l_555))) | 1UL) | (*p_89))), l_606)))) != p_2097->g_442))), l_535)) | (*p_2097->g_579))))) > (*p_2097->g_280)) | l_535), (*l_217)));
                        (**l_349) &= ((void*)0 == l_507);
                    }
                }
                else
                { /* block id: 238 */
                    int64_t l_608 = 0x593C9B7DA3E7CD0EL;
                    int8_t l_645 = 0L;
                    uint8_t *l_661 = &p_2097->g_484;
                    uint8_t **l_662 = &l_337;
                    uint8_t **l_663 = &l_338;
                    int8_t *l_665 = (void*)0;
                    int8_t *l_666 = &l_645;
                    uint64_t l_667 = 0xDFD2CE1967C99391L;
                    union U0 *l_682 = &p_2097->g_543;
                    int32_t l_683 = 0x2EE20901L;
                    ++p_2097->g_611;
                    if (p_2097->g_103)
                        goto lbl_637;
                    if ((safe_lshift_func_uint8_t_u_u((((l_555 ^ ((*l_338) = (l_616[6] == l_616[3]))) != (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((&p_2097->g_226 != p_90), ((safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(6L, ((safe_rshift_func_uint8_t_u_u((p_2097->g_627 , (safe_mul_func_int8_t_s_s(((*l_335) = (safe_lshift_func_uint8_t_u_u(0x13L, (safe_mod_func_uint8_t_u_u((p_2097->g_68 | 18446744073709551614UL), p_2097->g_2))))), p_2097->g_490[1]))), p_2097->g_341[1])) ^ l_608))) , (void*)0) == l_634[4][0][4]), p_2097->g_226)) , l_635[0]))), l_564[3][4][6]))) <= 0xE8E79BAF4FDC2A73L), p_2097->g_202[6])))
                    { /* block id: 242 */
                        (*p_2097->g_216) &= (0x5EEEL < (safe_unary_minus_func_int8_t_s(0x47L)));
lbl_637:
                        (*p_2097->g_216) = (l_555 &= (*p_2097->g_56));
                        p_2097->g_492 = (((3UL >= ((l_535 &= (((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((p_2097->g_155 != (l_564[0][7][4] ^= 255UL)) & (((*p_2097->g_216) = (((*l_338) = (7L <= (p_2097->g_642 == p_2097->g_643))) & l_645)) || (((p_2097->g_233[7][0].f2 = ((safe_lshift_func_int8_t_s_s(0L, 1)) , ((((l_608 & (*p_2097->g_569)) , l_365[1][0][1]) != &p_2097->g_202[2]) && (*l_217)))) < l_607) , l_645))), 0x19L)), l_563)) , (*p_90)) == l_607)) && 0x7CL)) && (-1L)) > 0xA9C0841A4477D505L);
                        (*p_2097->g_216) = (l_555 ^= ((((*l_666) = (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_340[6][9] == (void*)0), (safe_div_func_int8_t_s_s(((l_564[3][4][5] , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0x48L, ((*l_335) = (p_2097->g_188.f0 >= (((l_660 == ((*l_663) = ((*l_662) = l_661))) < p_2097->g_226) == ((void*)0 == l_664)))))), 8L)), (**p_2097->g_578)))) != l_563), l_564[2][5][0])))), l_645))) & l_667) >= 246UL));
                    }
                    else
                    { /* block id: 259 */
                        union U0 ***l_679 = &l_664;
                        int32_t l_680 = 0x12A62359L;
                        int32_t *l_681 = &l_154[5];
                        (*p_2097->g_216) &= (safe_lshift_func_uint8_t_u_u(((p_2097->g_670 , (((((void*)0 == &p_2097->g_157[4][1][0]) | (((((safe_lshift_func_uint16_t_u_s((p_2097->g_543.f0 <= 3UL), 6)) != (((*l_217) , 1L) >= (safe_div_func_uint8_t_u_u(((l_667 , (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(((((*l_679) = &p_2097->g_413) != &p_2097->g_157[4][0][3]) & 0UL), p_2097->g_138)) || (**p_2097->g_578)), p_2097->g_610[1]))) != 65533UL), l_680)))) > l_535) && 0xE1BC07C0L) || l_680)) , 2UL) , &l_580)) != &p_2097->g_577), (*l_217)));
                        l_681 = &p_2097->g_103;
                        (*p_2097->g_216) = 1L;
                        (*l_664) = l_682;
                    }
                    p_2097->g_684[0][1][1]--;
                }
                l_692--;
                (*p_2097->g_56) |= ((void*)0 == &p_89);
            }
            else
            { /* block id: 270 */
                int16_t *l_709 = &p_2097->g_610[2];
                for (l_366 = (-15); (l_366 >= (-5)); l_366 = safe_add_func_uint64_t_u_u(l_366, 8))
                { /* block id: 273 */
                    int8_t *l_706[6];
                    int8_t **l_707 = &l_706[0];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_706[i] = &l_687;
                    (*p_2097->g_216) = (safe_sub_func_int8_t_s_s(0x5BL, l_564[3][1][1]));
                    (*p_2097->g_216) = (safe_add_func_int32_t_s_s((p_2097->g_701 , (((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((*l_707) = l_706[0]) != &l_588), (((((void*)0 == l_708) , l_709) != (p_2097->g_710 , p_91)) ^ (*l_217)))) ^ 0x84897C6781F161E9L), l_711)) < (*p_2097->g_280)) , (*p_2097->g_216))), (*p_2097->g_280)));
                }
            }
            (*l_507) = func_31(l_712, (*l_507), l_564[2][3][0], (((safe_sub_func_int64_t_s_s(l_564[0][7][4], (*p_90))) , (safe_add_func_uint32_t_u_u((--(*p_2097->g_280)), 0x0A688FD7L))) < ((*l_335) = (safe_rshift_func_int16_t_s_s(((l_564[0][7][4] > p_2097->g_341[0]) & ((safe_mul_func_int16_t_s_s((!((l_725 <= 0x2961CEA3L) & (*p_2097->g_398))), (-1L))) == l_342[0][0])), 5)))), p_2097);
            if (l_154[5])
            { /* block id: 282 */
                int32_t l_726 = 0x569430FDL;
                int32_t l_742 = 0L;
                (*p_2097->g_216) = l_726;
                l_154[2] &= (+(safe_mod_func_int8_t_s_s((((p_2097->g_169[1][0][3].f0 != ((*l_225) = (safe_sub_func_int32_t_s_s(((*p_2097->g_216) = (safe_div_func_int64_t_s_s((((0x5D9F94F4L == (*p_2097->g_216)) || (*p_91)) | ((safe_div_func_int16_t_s_s(((l_741 = (safe_div_func_uint16_t_u_u((((*p_2097->g_577) == (void*)0) != ((safe_sub_func_int64_t_s_s((p_2097->g_247 = (((safe_lshift_func_int8_t_s_s(l_635[0], 5)) >= l_726) , (((void*)0 == l_708) | (*p_2097->g_216)))), p_2097->g_103)) && p_2097->g_103)), p_2097->g_57))) >= 0x638C37C2L), 0x2B62L)) , 1L)), l_564[0][7][4]))), l_726)))) , (*p_2097->g_569)) || l_726), p_2097->g_484)));
                ++l_743;
            }
            else
            { /* block id: 290 */
                for (l_711 = 16; (l_711 <= 11); --l_711)
                { /* block id: 293 */
                    int16_t l_748 = 0x7499L;
                    int32_t l_749 = 0x6B4B5232L;
                    int32_t l_750[8][10][1] = {{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}},{{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L},{0x5A277950L}}};
                    int16_t ***l_754 = (void*)0;
                    int i, j, k;
                    for (l_94 = 0; l_94 < 1; l_94 += 1)
                    {
                        union U0 tmp = {{255UL}};
                        p_2097->g_160[l_94] = tmp;
                    }
                    l_751++;
                    (*p_2097->g_758) = &l_359;
                }
            }
        }
    }
    return (*p_2097->g_398);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_2098;
    struct S2* p_2097 = &c_2098;
    struct S2 c_2099 = {
        0L, // p_2097->g_2
        0x3421L, // p_2097->g_5
        {1UL}, // p_2097->g_16
        (-10L), // p_2097->g_57
        &p_2097->g_57, // p_2097->g_56
        1L, // p_2097->g_68
        1L, // p_2097->g_78
        0x11C9306AL, // p_2097->g_103
        {(-1L),0x39A3708275CA9567L,(-1L),(-1L),0x39A3708275CA9567L,(-1L)}, // p_2097->g_106
        {0x643A315420A8C717L}, // p_2097->g_126
        65526UL, // p_2097->g_138
        4UL, // p_2097->g_153
        0x20EFL, // p_2097->g_155
        {1UL}, // p_2097->g_158
        {{253UL},{253UL},{253UL},{253UL},{253UL},{253UL},{253UL},{253UL},{253UL},{253UL}}, // p_2097->g_159
        {{0UL}}, // p_2097->g_160
        {{255UL},{252UL},{255UL},{255UL},{252UL},{255UL},{255UL},{252UL}}, // p_2097->g_161
        {0x27L}, // p_2097->g_162
        {0x56L}, // p_2097->g_163
        {255UL}, // p_2097->g_164
        {0x15L}, // p_2097->g_165
        {0UL}, // p_2097->g_166
        {255UL}, // p_2097->g_167
        {{0x39L},{0x39L},{0x39L},{0x39L}}, // p_2097->g_168
        {{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}},{{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}},{{249UL},{249UL},{0UL},{1UL},{0x99L},{0x99L},{1UL},{0UL},{249UL},{249UL}}}}, // p_2097->g_169
        {0x19L}, // p_2097->g_170
        {0x4DL}, // p_2097->g_171
        {{{247UL}},{{247UL}},{{247UL}},{{247UL}},{{247UL}},{{247UL}},{{247UL}},{{247UL}},{{247UL}}}, // p_2097->g_172
        {250UL}, // p_2097->g_173
        {1UL}, // p_2097->g_174
        {{249UL}}, // p_2097->g_175
        {0UL}, // p_2097->g_176
        {0x71L}, // p_2097->g_177
        {2UL}, // p_2097->g_178
        {1UL}, // p_2097->g_179
        {0x65L}, // p_2097->g_180
        {0xE7L}, // p_2097->g_181
        {0xF9L}, // p_2097->g_182
        {{0UL},{0UL},{0UL}}, // p_2097->g_183
        {0x85L}, // p_2097->g_184
        {0xC4L}, // p_2097->g_185
        {0x85L}, // p_2097->g_186
        {1UL}, // p_2097->g_187
        {1UL}, // p_2097->g_188
        {0xE0L}, // p_2097->g_189
        {{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}},{{{247UL},{247UL}},{{247UL},{247UL}}}}, // p_2097->g_190
        {0x0AL}, // p_2097->g_191
        {0UL}, // p_2097->g_192
        {1UL}, // p_2097->g_193
        {0x30L}, // p_2097->g_194
        {0x56L}, // p_2097->g_195
        {{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2097->g_189,&p_2097->g_166,&p_2097->g_189,(void*)0,(void*)0,(void*)0}}}, // p_2097->g_157
        {{0x7574EA98C39ED3BEL},{0x7574EA98C39ED3BEL},{0x7574EA98C39ED3BEL}}, // p_2097->g_196
        {0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L,0x9BBD7F02L}, // p_2097->g_202
        &p_2097->g_126, // p_2097->g_207
        &p_2097->g_207, // p_2097->g_206
        &p_2097->g_57, // p_2097->g_216
        18446744073709551615UL, // p_2097->g_226
        {{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}},{{0x6FL},{255UL},{1UL},{255UL},{0x6AL},{0x6AL}}}, // p_2097->g_233
        1UL, // p_2097->g_236
        0x782F8447B9DC6C3DL, // p_2097->g_247
        &p_2097->g_202[3], // p_2097->g_280
        4294967287UL, // p_2097->g_314
        {255UL,255UL,255UL,255UL,255UL,255UL,255UL}, // p_2097->g_341
        1UL, // p_2097->g_399
        &p_2097->g_399, // p_2097->g_398
        {&p_2097->g_398}, // p_2097->g_397
        {0xEAL}, // p_2097->g_414
        &p_2097->g_414, // p_2097->g_413
        {{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}},{{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}},{{2UL},{0x51L},{8UL}}}}, // p_2097->g_423
        0UL, // p_2097->g_442
        {{{0x280FFB08B6A63888L},{0x280FFB08B6A63888L}},{{0x280FFB08B6A63888L},{0x280FFB08B6A63888L}},{{0x280FFB08B6A63888L},{0x280FFB08B6A63888L}},{{0x280FFB08B6A63888L},{0x280FFB08B6A63888L}}}, // p_2097->g_463
        0UL, // p_2097->g_484
        {0x6081L,0x6081L,0x6081L}, // p_2097->g_490
        0x4CB5AF79L, // p_2097->g_492
        {0x8C10L,0x8C10L,0x8C10L,0x8C10L,0x8C10L}, // p_2097->g_493
        0x172036FAL, // p_2097->g_509
        {0UL}, // p_2097->g_543
        &p_2097->g_490[1], // p_2097->g_569
        &p_2097->g_569, // p_2097->g_568
        &p_2097->g_138, // p_2097->g_579
        &p_2097->g_579, // p_2097->g_578
        &p_2097->g_578, // p_2097->g_577
        {1L,1L,1L}, // p_2097->g_610
        4294967295UL, // p_2097->g_611
        {0x2AE1EDD34CAE9A5AL}, // p_2097->g_627
        (void*)0, // p_2097->g_642
        (void*)0, // p_2097->g_644
        &p_2097->g_644, // p_2097->g_643
        {0x604308E86AE2B4E3L}, // p_2097->g_670
        {{{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL}},{{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL}},{{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL}},{{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL}},{{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL},{0x15L,246UL,0x0AL,255UL,8UL,248UL,1UL,4UL}}}, // p_2097->g_684
        (-1L), // p_2097->g_688
        (-8L), // p_2097->g_689
        0x6DL, // p_2097->g_691
        {0x4341BE32370B43B1L}, // p_2097->g_701
        {0x79L}, // p_2097->g_710
        &p_2097->g_610[1], // p_2097->g_757
        &p_2097->g_757, // p_2097->g_756
        {{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}},{{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756},{&p_2097->g_756,&p_2097->g_756,&p_2097->g_756,&p_2097->g_756}}}, // p_2097->g_755
        &p_2097->g_756, // p_2097->g_758
        {{0x1ADFBDA4BDA738AAL},{0x1ADFBDA4BDA738AAL}}, // p_2097->g_761
        &p_2097->g_761[1], // p_2097->g_760
        &p_2097->g_760, // p_2097->g_759
        0x3A64L, // p_2097->g_770
        {1UL}, // p_2097->g_777
        &p_2097->g_216, // p_2097->g_783
        {246UL}, // p_2097->g_785
        {{4UL},{4UL},{4UL}}, // p_2097->g_853
        6L, // p_2097->g_870
        0xF11AAB65C042DD3AL, // p_2097->g_907
        0x1F9FL, // p_2097->g_964
        {0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL,0x3F8FL}, // p_2097->g_968
        0x17AE45CC28501B22L, // p_2097->g_971
        65530UL, // p_2097->g_974
        &p_2097->g_785.f2, // p_2097->g_1001
        {0x0A674AD87759D054L}, // p_2097->g_1041
        &p_2097->g_216, // p_2097->g_1045
        65532UL, // p_2097->g_1061
        &p_2097->g_57, // p_2097->g_1115
        {{0xDFL},{0xDFL},{0xDFL},{0xDFL},{0xDFL},{0xDFL}}, // p_2097->g_1153
        {255UL}, // p_2097->g_1154
        0L, // p_2097->g_1163
        0x1630ABE2L, // p_2097->g_1167
        {1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_2097->g_1200
        &p_2097->g_216, // p_2097->g_1218
        0UL, // p_2097->g_1219
        1L, // p_2097->g_1236
        &p_2097->g_759, // p_2097->g_1242
        {-1L}, // p_2097->g_1243
        &p_2097->g_756, // p_2097->g_1245
        &p_2097->g_216, // p_2097->g_1251
        {0xAAL}, // p_2097->g_1253
        {{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}},{{0xD1L},{8UL},{252UL},{0x7AL},{252UL},{8UL},{0xD1L},{255UL},{6UL},{6UL}}}, // p_2097->g_1254
        {{{0x77L},{0x77L}},{{0x77L},{0x77L}},{{0x77L},{0x77L}},{{0x77L},{0x77L}},{{0x77L},{0x77L}},{{0x77L},{0x77L}},{{0x77L},{0x77L}}}, // p_2097->g_1255
        {{{0x3EL},{0x3EL}},{{0x3EL},{0x3EL}},{{0x3EL},{0x3EL}},{{0x3EL},{0x3EL}},{{0x3EL},{0x3EL}},{{0x3EL},{0x3EL}}}, // p_2097->g_1256
        {&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253,&p_2097->g_1253}, // p_2097->g_1252
        &p_2097->g_57, // p_2097->g_1269
        {{&p_2097->g_226,&p_2097->g_226,&p_2097->g_226,&p_2097->g_226,&p_2097->g_226,&p_2097->g_226,&p_2097->g_226,&p_2097->g_226}}, // p_2097->g_1273
        &p_2097->g_1273[0][1], // p_2097->g_1272
        (void*)0, // p_2097->g_1281
        18446744073709551607UL, // p_2097->g_1336
        0xF7E6D462L, // p_2097->g_1356
        {0L}, // p_2097->g_1363
        {9L}, // p_2097->g_1364
        {&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413,&p_2097->g_413}, // p_2097->g_1374
        (void*)0, // p_2097->g_1375
        &p_2097->g_233[3][2], // p_2097->g_1376
        &p_2097->g_684[0][1][1], // p_2097->g_1407
        &p_2097->g_1407, // p_2097->g_1406
        {0x3DA5006D12122B22L}, // p_2097->g_1414
        {247UL}, // p_2097->g_1424
        0x0DL, // p_2097->g_1454
        {{&p_2097->g_1454,&p_2097->g_1454},{&p_2097->g_1454,&p_2097->g_1454},{&p_2097->g_1454,&p_2097->g_1454},{&p_2097->g_1454,&p_2097->g_1454},{&p_2097->g_1454,&p_2097->g_1454},{&p_2097->g_1454,&p_2097->g_1454}}, // p_2097->g_1453
        &p_2097->g_1453[2][1], // p_2097->g_1452
        &p_2097->g_1452, // p_2097->g_1451
        &p_2097->g_1451, // p_2097->g_1450
        {0xE6L}, // p_2097->g_1469
        0x9E95L, // p_2097->g_1485
        0x2F70BD18510FE28EL, // p_2097->g_1514
        (void*)0, // p_2097->g_1520
        &p_2097->g_1520, // p_2097->g_1519
        &p_2097->g_1519, // p_2097->g_1518
        0x887BL, // p_2097->g_1550
        {&p_2097->g_2,&p_2097->g_103,&p_2097->g_2,&p_2097->g_2,&p_2097->g_103,&p_2097->g_2}, // p_2097->g_1558
        &p_2097->g_57, // p_2097->g_1559
        {{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}},{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}},{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}},{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}},{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}},{{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2},{&p_2097->g_103,(void*)0,&p_2097->g_2}}}, // p_2097->g_1562
        {0xACL}, // p_2097->g_1580
        0x20C7L, // p_2097->g_1629
        (void*)0, // p_2097->g_1696
        0xC7L, // p_2097->g_1778
        &p_2097->g_1272, // p_2097->g_1807
        &p_2097->g_57, // p_2097->g_1812
        {{5L,0x56DEC49EL,7L,0x7AEE8BC6L,0x7762A3C9L,5L,0x7AEE8BC6L,6L},{5L,0x56DEC49EL,7L,0x7AEE8BC6L,0x7762A3C9L,5L,0x7AEE8BC6L,6L},{5L,0x56DEC49EL,7L,0x7AEE8BC6L,0x7762A3C9L,5L,0x7AEE8BC6L,6L},{5L,0x56DEC49EL,7L,0x7AEE8BC6L,0x7762A3C9L,5L,0x7AEE8BC6L,6L}}, // p_2097->g_1823
        &p_2097->g_202[6], // p_2097->g_1891
        {0L}, // p_2097->g_1905
        {{{0x2218E3B3AB6993C2L}},{{0x2218E3B3AB6993C2L}},{{0x2218E3B3AB6993C2L}}}, // p_2097->g_1953
        0x0AL, // p_2097->g_1959
        (void*)0, // p_2097->g_1990
        &p_2097->g_1990, // p_2097->g_1989
        &p_2097->g_1989, // p_2097->g_1988
        {{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}},{{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}},{{0L},{0L},{-1L},{3L},{-1L},{-1L}}}}, // p_2097->g_2031
        {0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L,0x7F5034C2L}, // p_2097->g_2053
        &p_2097->g_2053[3], // p_2097->g_2052
        {&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376,&p_2097->g_1376}, // p_2097->g_2054
        &p_2097->g_1376, // p_2097->g_2055
    };
    c_2098 = c_2099;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2097);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2097->g_2, "p_2097->g_2", print_hash_value);
    transparent_crc(p_2097->g_5, "p_2097->g_5", print_hash_value);
    transparent_crc(p_2097->g_16.f0, "p_2097->g_16.f0", print_hash_value);
    transparent_crc(p_2097->g_57, "p_2097->g_57", print_hash_value);
    transparent_crc(p_2097->g_68, "p_2097->g_68", print_hash_value);
    transparent_crc(p_2097->g_78, "p_2097->g_78", print_hash_value);
    transparent_crc(p_2097->g_103, "p_2097->g_103", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2097->g_106[i], "p_2097->g_106[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_126.f0, "p_2097->g_126.f0", print_hash_value);
    transparent_crc(p_2097->g_138, "p_2097->g_138", print_hash_value);
    transparent_crc(p_2097->g_153, "p_2097->g_153", print_hash_value);
    transparent_crc(p_2097->g_155, "p_2097->g_155", print_hash_value);
    transparent_crc(p_2097->g_158.f0, "p_2097->g_158.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2097->g_159[i].f0, "p_2097->g_159[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2097->g_160[i].f0, "p_2097->g_160[i].f0", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2097->g_161[i].f0, "p_2097->g_161[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_162.f0, "p_2097->g_162.f0", print_hash_value);
    transparent_crc(p_2097->g_163.f0, "p_2097->g_163.f0", print_hash_value);
    transparent_crc(p_2097->g_164.f0, "p_2097->g_164.f0", print_hash_value);
    transparent_crc(p_2097->g_165.f0, "p_2097->g_165.f0", print_hash_value);
    transparent_crc(p_2097->g_166.f0, "p_2097->g_166.f0", print_hash_value);
    transparent_crc(p_2097->g_167.f0, "p_2097->g_167.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2097->g_168[i].f0, "p_2097->g_168[i].f0", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_2097->g_169[i][j][k].f0, "p_2097->g_169[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2097->g_170.f0, "p_2097->g_170.f0", print_hash_value);
    transparent_crc(p_2097->g_171.f0, "p_2097->g_171.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2097->g_172[i][j].f0, "p_2097->g_172[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_173.f0, "p_2097->g_173.f0", print_hash_value);
    transparent_crc(p_2097->g_174.f0, "p_2097->g_174.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2097->g_175[i].f0, "p_2097->g_175[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_176.f0, "p_2097->g_176.f0", print_hash_value);
    transparent_crc(p_2097->g_177.f0, "p_2097->g_177.f0", print_hash_value);
    transparent_crc(p_2097->g_178.f0, "p_2097->g_178.f0", print_hash_value);
    transparent_crc(p_2097->g_179.f0, "p_2097->g_179.f0", print_hash_value);
    transparent_crc(p_2097->g_180.f0, "p_2097->g_180.f0", print_hash_value);
    transparent_crc(p_2097->g_181.f0, "p_2097->g_181.f0", print_hash_value);
    transparent_crc(p_2097->g_182.f0, "p_2097->g_182.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2097->g_183[i].f0, "p_2097->g_183[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_184.f0, "p_2097->g_184.f0", print_hash_value);
    transparent_crc(p_2097->g_185.f0, "p_2097->g_185.f0", print_hash_value);
    transparent_crc(p_2097->g_186.f0, "p_2097->g_186.f0", print_hash_value);
    transparent_crc(p_2097->g_187.f0, "p_2097->g_187.f0", print_hash_value);
    transparent_crc(p_2097->g_188.f0, "p_2097->g_188.f0", print_hash_value);
    transparent_crc(p_2097->g_189.f0, "p_2097->g_189.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2097->g_190[i][j][k].f0, "p_2097->g_190[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2097->g_191.f0, "p_2097->g_191.f0", print_hash_value);
    transparent_crc(p_2097->g_192.f0, "p_2097->g_192.f0", print_hash_value);
    transparent_crc(p_2097->g_193.f0, "p_2097->g_193.f0", print_hash_value);
    transparent_crc(p_2097->g_194.f0, "p_2097->g_194.f0", print_hash_value);
    transparent_crc(p_2097->g_195.f0, "p_2097->g_195.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2097->g_196[i].f0, "p_2097->g_196[i].f0", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2097->g_202[i], "p_2097->g_202[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_226, "p_2097->g_226", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_2097->g_233[i][j].f0, "p_2097->g_233[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_236, "p_2097->g_236", print_hash_value);
    transparent_crc(p_2097->g_247, "p_2097->g_247", print_hash_value);
    transparent_crc(p_2097->g_314, "p_2097->g_314", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2097->g_341[i], "p_2097->g_341[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_399, "p_2097->g_399", print_hash_value);
    transparent_crc(p_2097->g_414.f0, "p_2097->g_414.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2097->g_423[i][j][k].f0, "p_2097->g_423[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2097->g_442, "p_2097->g_442", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2097->g_463[i][j].f0, "p_2097->g_463[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_484, "p_2097->g_484", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2097->g_490[i], "p_2097->g_490[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_492, "p_2097->g_492", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2097->g_493[i], "p_2097->g_493[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_509, "p_2097->g_509", print_hash_value);
    transparent_crc(p_2097->g_543.f0, "p_2097->g_543.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2097->g_610[i], "p_2097->g_610[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_611, "p_2097->g_611", print_hash_value);
    transparent_crc(p_2097->g_627.f0, "p_2097->g_627.f0", print_hash_value);
    transparent_crc(p_2097->g_670.f0, "p_2097->g_670.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2097->g_684[i][j][k], "p_2097->g_684[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2097->g_688, "p_2097->g_688", print_hash_value);
    transparent_crc(p_2097->g_689, "p_2097->g_689", print_hash_value);
    transparent_crc(p_2097->g_691, "p_2097->g_691", print_hash_value);
    transparent_crc(p_2097->g_701.f0, "p_2097->g_701.f0", print_hash_value);
    transparent_crc(p_2097->g_710.f0, "p_2097->g_710.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2097->g_761[i].f0, "p_2097->g_761[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_770, "p_2097->g_770", print_hash_value);
    transparent_crc(p_2097->g_777.f0, "p_2097->g_777.f0", print_hash_value);
    transparent_crc(p_2097->g_785.f0, "p_2097->g_785.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2097->g_853[i].f0, "p_2097->g_853[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_870, "p_2097->g_870", print_hash_value);
    transparent_crc(p_2097->g_907, "p_2097->g_907", print_hash_value);
    transparent_crc(p_2097->g_964, "p_2097->g_964", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2097->g_968[i], "p_2097->g_968[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_971, "p_2097->g_971", print_hash_value);
    transparent_crc(p_2097->g_974, "p_2097->g_974", print_hash_value);
    transparent_crc(p_2097->g_1041.f0, "p_2097->g_1041.f0", print_hash_value);
    transparent_crc(p_2097->g_1061, "p_2097->g_1061", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2097->g_1153[i].f0, "p_2097->g_1153[i].f0", print_hash_value);

    }
    transparent_crc(p_2097->g_1154.f0, "p_2097->g_1154.f0", print_hash_value);
    transparent_crc(p_2097->g_1163, "p_2097->g_1163", print_hash_value);
    transparent_crc(p_2097->g_1167, "p_2097->g_1167", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2097->g_1200[i], "p_2097->g_1200[i]", print_hash_value);

    }
    transparent_crc(p_2097->g_1219, "p_2097->g_1219", print_hash_value);
    transparent_crc(p_2097->g_1236, "p_2097->g_1236", print_hash_value);
    transparent_crc(p_2097->g_1243.f0, "p_2097->g_1243.f0", print_hash_value);
    transparent_crc(p_2097->g_1253.f0, "p_2097->g_1253.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2097->g_1254[i][j].f0, "p_2097->g_1254[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2097->g_1255[i][j].f0, "p_2097->g_1255[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2097->g_1256[i][j].f0, "p_2097->g_1256[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_1336, "p_2097->g_1336", print_hash_value);
    transparent_crc(p_2097->g_1356, "p_2097->g_1356", print_hash_value);
    transparent_crc(p_2097->g_1363.f0, "p_2097->g_1363.f0", print_hash_value);
    transparent_crc(p_2097->g_1364.f0, "p_2097->g_1364.f0", print_hash_value);
    transparent_crc(p_2097->g_1414.f0, "p_2097->g_1414.f0", print_hash_value);
    transparent_crc(p_2097->g_1424.f0, "p_2097->g_1424.f0", print_hash_value);
    transparent_crc(p_2097->g_1454, "p_2097->g_1454", print_hash_value);
    transparent_crc(p_2097->g_1469.f0, "p_2097->g_1469.f0", print_hash_value);
    transparent_crc(p_2097->g_1485, "p_2097->g_1485", print_hash_value);
    transparent_crc(p_2097->g_1514, "p_2097->g_1514", print_hash_value);
    transparent_crc(p_2097->g_1550, "p_2097->g_1550", print_hash_value);
    transparent_crc(p_2097->g_1580.f0, "p_2097->g_1580.f0", print_hash_value);
    transparent_crc(p_2097->g_1629, "p_2097->g_1629", print_hash_value);
    transparent_crc(p_2097->g_1778, "p_2097->g_1778", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_2097->g_1823[i][j], "p_2097->g_1823[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_1905.f0, "p_2097->g_1905.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2097->g_1953[i][j].f0, "p_2097->g_1953[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2097->g_1959, "p_2097->g_1959", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2097->g_2031[i][j][k].f0, "p_2097->g_2031[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2097->g_2053[i], "p_2097->g_2053[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
