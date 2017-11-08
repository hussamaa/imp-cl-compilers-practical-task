// -g 89,91,1 -l 89,1,1
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


// Seed: 949189740

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   uint16_t  f1;
   volatile uint16_t  f2;
   uint32_t  f3;
   volatile int64_t  f4;
};

struct S1 {
    int32_t g_4;
    volatile uint32_t g_7;
    union U0 g_40;
    int32_t g_42;
    uint16_t g_69;
    volatile union U0 g_81;
    volatile union U0 g_82;
    volatile union U0 *g_80[10];
    union U0 g_84;
    union U0 *g_83;
    union U0 g_88;
    volatile union U0 g_92;
    int8_t g_105;
    int8_t g_134;
    int8_t g_136;
    uint32_t g_138;
    int16_t g_148;
    uint64_t g_161;
    uint64_t g_165;
    int8_t g_177;
    volatile int32_t g_193[1][2];
    volatile int32_t *g_192[9];
    volatile int32_t **g_191;
    volatile uint16_t g_202;
    volatile uint16_t *g_201;
    volatile uint16_t **g_200;
    int16_t *g_209;
    uint32_t g_217;
    int16_t g_230[8][6];
    uint8_t g_240;
    int8_t g_252;
    uint64_t g_253[9];
    int16_t g_260[6][6][7];
    uint8_t g_261;
    int64_t g_286[3][8][1];
    uint32_t g_291[10];
    int64_t g_300;
    int32_t g_315;
    int8_t g_318;
    int32_t g_322;
    union U0 g_325;
    int32_t *g_345;
    uint64_t g_348;
    union U0 g_351[8][7];
    uint16_t g_363[1];
    int32_t **g_376;
    uint32_t g_398;
    uint32_t g_418[1];
    uint32_t g_420;
    int8_t g_423;
    int64_t g_424;
    int16_t g_425;
    uint64_t g_429;
    int32_t g_470;
    uint64_t *g_517;
    uint64_t **g_516[2];
    volatile int32_t g_524;
    volatile int32_t *g_523;
    volatile int32_t * volatile *g_522;
    volatile int32_t * volatile ** volatile g_521;
    volatile int32_t * volatile ** volatile g_525;
    volatile int32_t * volatile ** volatile *g_520[8][1];
    uint32_t g_529;
    int8_t g_564;
    int16_t g_566;
    int16_t g_567;
    uint16_t g_568;
    uint16_t g_628;
    int32_t ***g_687;
    int32_t ****g_686;
    int32_t *****g_685;
    uint64_t ***g_705;
    uint64_t ****g_704;
    uint8_t g_707;
    volatile int32_t g_725;
    volatile int32_t *g_724;
    uint32_t g_776;
    volatile int8_t g_859;
    volatile int8_t * volatile g_858;
    volatile int8_t * volatile *g_857[4];
    volatile uint32_t g_905;
    volatile uint32_t *g_904[5];
    volatile uint32_t **g_903;
    int32_t g_940;
    uint16_t g_987;
    union U0 g_1012;
    int32_t g_1015;
    int64_t *g_1117;
    int32_t ** volatile g_1120;
    int32_t *g_1137[9];
    int32_t ** volatile g_1136[4];
    uint64_t g_1175;
    union U0 g_1188;
    volatile int8_t g_1236[6][5];
    union U0 g_1248;
    uint16_t *g_1286;
    uint64_t g_1334;
    int32_t ** volatile g_1341;
    union U0 g_1372;
    int32_t * volatile g_1376;
    uint64_t *g_1382;
    uint64_t **g_1381[10];
    int32_t * volatile g_1393;
    int32_t g_1417;
    volatile int32_t ** volatile g_1435[5];
    volatile int32_t ** volatile *g_1434[8];
    volatile uint8_t g_1448[1];
    volatile uint32_t g_1475;
    uint32_t *g_1491;
    uint32_t **g_1490;
    volatile union U0 g_1504[8][3];
    union U0 g_1620;
    int32_t ** volatile g_1696;
    volatile uint64_t g_1705;
    union U0 g_1731;
    int8_t *g_1805[10][6][4];
    int8_t **g_1804;
    volatile uint8_t g_1812[7];
    uint32_t *g_1829;
    uint32_t **g_1828;
    volatile union U0 g_1835;
    volatile uint8_t g_1843;
    volatile int64_t g_1851;
    int32_t g_1863;
    int32_t ** volatile g_1903[7][7];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_1923);
int32_t  func_12(uint32_t  p_13, int8_t  p_14, int64_t  p_15, int32_t * p_16, int8_t  p_17, struct S1 * p_1923);
uint8_t  func_19(int32_t * p_20, uint16_t  p_21, uint32_t  p_22, int32_t * p_23, struct S1 * p_1923);
int32_t * func_24(uint8_t  p_25, int64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_1923);
int64_t  func_29(int32_t * p_30, int32_t * p_31, int32_t  p_32, struct S1 * p_1923);
uint16_t  func_33(uint32_t  p_34, uint8_t  p_35, int32_t  p_36, struct S1 * p_1923);
int16_t  func_47(int64_t  p_48, int64_t  p_49, struct S1 * p_1923);
int32_t  func_52(int64_t  p_53, union U0 * p_54, struct S1 * p_1923);
uint16_t  func_55(int32_t  p_56, int32_t * p_57, union U0 * p_58, int32_t * p_59, struct S1 * p_1923);
int32_t  func_60(union U0 * p_61, union U0 * p_62, union U0 * p_63, union U0 * p_64, int32_t * p_65, struct S1 * p_1923);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1923->g_7 p_1923->g_4 p_1923->g_1376 p_1923->g_940 p_1923->g_136 p_1923->g_209 p_1923->g_84.f0 p_1923->g_1341 p_1923->g_1137 p_1923->g_42 p_1923->g_1015 p_1923->g_1372.f1 p_1923->g_1620 p_1923->g_191 p_1923->g_192 p_1923->g_200 p_1923->g_201 p_1923->g_202 p_1923->g_138 p_1923->g_1620.f0 p_1923->g_517 p_1923->g_253 p_1923->g_705 p_1923->g_516 p_1923->g_628 p_1923->g_903 p_1923->g_904 p_1923->g_905
 * writes: p_1923->g_7 p_1923->g_4 p_1923->g_136 p_1923->g_42 p_1923->g_1015 p_1923->g_1372.f1 p_1923->g_192 p_1923->g_628
 */
uint32_t  func_1(struct S1 * p_1923)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &p_1923->g_4;
    int32_t *l_5 = (void*)0;
    int32_t *l_6[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_37 = 0x30509B95L;
    uint32_t l_1394 = 4294967289UL;
    uint32_t *l_1419 = &p_1923->g_418[0];
    uint32_t **l_1418 = &l_1419;
    uint64_t *l_1440[9] = {&p_1923->g_165,&p_1923->g_1334,&p_1923->g_165,&p_1923->g_165,&p_1923->g_1334,&p_1923->g_165,&p_1923->g_165,&p_1923->g_1334,&p_1923->g_165};
    uint32_t l_1458 = 0xDB22812DL;
    uint32_t l_1461 = 0x9B9773E3L;
    uint32_t **l_1503 = &p_1923->g_1491;
    int64_t *l_1508 = &p_1923->g_300;
    uint8_t *l_1539 = (void*)0;
    uint64_t ***l_1559 = &p_1923->g_516[0];
    int16_t l_1567[6] = {0x2A1BL,0x2A1BL,0x2A1BL,0x2A1BL,0x2A1BL,0x2A1BL};
    uint64_t l_1568[5];
    int64_t l_1593 = 0x70F0823D0AD1B7FCL;
    uint32_t l_1596 = 4294967295UL;
    uint64_t l_1597 = 0UL;
    int8_t *l_1612 = &p_1923->g_423;
    int8_t **l_1611 = &l_1612;
    int8_t ***l_1610 = &l_1611;
    uint64_t **l_1613 = &p_1923->g_1382;
    uint8_t l_1661 = 0x01L;
    int8_t l_1703 = (-10L);
    int16_t l_1786 = 0x2BFCL;
    int16_t *l_1842[7];
    int i;
    for (i = 0; i < 5; i++)
        l_1568[i] = 0x638C460ECC1C1F4FL;
    for (i = 0; i < 7; i++)
        l_1842[i] = (void*)0;
    p_1923->g_7++;
    p_1923->g_4 = p_1923->g_7;
    for (p_1923->g_4 = 0; (p_1923->g_4 >= (-4)); p_1923->g_4 = safe_sub_func_uint32_t_u_u(p_1923->g_4, 4))
    { /* block id: 9 */
        int32_t l_18 = 0x7E3B6F9BL;
        uint32_t *l_802[10] = {&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776,&p_1923->g_776};
        int32_t **l_1383[9];
        int64_t l_1405 = 0x47FAAF216DFB88E8L;
        int32_t **l_1474 = &p_1923->g_345;
        uint64_t *****l_1482[5][3] = {{(void*)0,&p_1923->g_704,(void*)0},{(void*)0,&p_1923->g_704,(void*)0},{(void*)0,&p_1923->g_704,(void*)0},{(void*)0,&p_1923->g_704,(void*)0},{(void*)0,&p_1923->g_704,(void*)0}};
        int16_t **l_1494 = &p_1923->g_209;
        int32_t l_1495 = 0x7D626448L;
        uint16_t l_1555 = 2UL;
        int i, j;
        for (i = 0; i < 9; i++)
            l_1383[i] = &p_1923->g_1137[3];
        (1 + 1);
    }
    if ((*p_1923->g_1376))
    { /* block id: 850 */
        uint32_t l_1602 = 0x9354810EL;
        int32_t l_1603 = (-1L);
        for (p_1923->g_136 = (-30); (p_1923->g_136 == 21); p_1923->g_136 = safe_add_func_uint64_t_u_u(p_1923->g_136, 8))
        { /* block id: 853 */
            (*l_3) &= l_1602;
            if ((*p_1923->g_1376))
                break;
        }
        l_1603 |= (*p_1923->g_1376);
    }
    else
    { /* block id: 858 */
        int8_t *l_1608 = &p_1923->g_177;
        int8_t **l_1607 = &l_1608;
        int8_t ***l_1606[8][7][4] = {{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}},{{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607},{(void*)0,&l_1607,&l_1607,&l_1607}}};
        int8_t ****l_1609 = (void*)0;
        int32_t *****l_1614[1][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_1617 = 0x478C0994L;
        int8_t l_1629 = 5L;
        uint64_t ***l_1640 = &p_1923->g_1381[9];
        int32_t l_1641 = (-5L);
        uint32_t l_1642 = 0x1D85A590L;
        int32_t l_1643 = 0x3F26E636L;
        int8_t l_1662 = 4L;
        uint64_t *l_1674[5][1];
        int32_t *l_1695 = &p_1923->g_4;
        int32_t l_1700 = 0x13C0A9F9L;
        int64_t l_1701 = 1L;
        uint16_t l_1743 = 0xC27DL;
        int8_t l_1763 = 0x24L;
        uint32_t **l_1827 = &l_1419;
        int32_t l_1848 = (-8L);
        uint64_t *****l_1867 = &p_1923->g_704;
        int32_t l_1893 = 0x795B1B59L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_1674[i][j] = (void*)0;
        }
        (**p_1923->g_1341) ^= (safe_rshift_func_uint16_t_u_u((~(*l_3)), (((((l_1610 = l_1606[1][5][0]) != &p_1923->g_857[1]) , l_1613) != (((l_1614[0][0][1] == (void*)0) || (*p_1923->g_209)) , &p_1923->g_1382)) < ((safe_sub_func_uint64_t_u_u(((*l_3) , 0xCC559ED49E5B1BFCL), l_1617)) && 8L))));
        for (p_1923->g_1372.f1 = 0; (p_1923->g_1372.f1 < 10); p_1923->g_1372.f1++)
        { /* block id: 863 */
            int16_t l_1621[4] = {(-10L),(-10L),(-10L),(-10L)};
            int i;
            (*p_1923->g_191) = (p_1923->g_1620 , (*p_1923->g_191));
            (*l_3) = l_1621[2];
        }
        l_1643 ^= (safe_unary_minus_func_uint16_t_u((((~(safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(5L, (**p_1923->g_200))), 15)), l_1629))) == ((((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((-5L) < l_1617), ((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((l_1629 , ((((((void*)0 != l_1640) , (!(l_1641 = (*p_1923->g_209)))) < 0x7D3BL) & 0UL) >= 0x0B1F62D1F38A88B9L)), (*l_3))) == 0x16L) , l_1617) || l_1641), p_1923->g_138)) & p_1923->g_1620.f0) , (*p_1923->g_209)), 0xD826L)) < l_1629))), 0x8854ADABF86A103DL)) ^ (*p_1923->g_517)) & 0x27L) | (***p_1923->g_705))) == l_1642)));
        for (p_1923->g_628 = 1; (p_1923->g_628 <= 4); p_1923->g_628 += 1)
        { /* block id: 871 */
            uint64_t **l_1658 = &p_1923->g_517;
            uint32_t *l_1663 = &l_1458;
            uint32_t **l_1664 = (void*)0;
            uint16_t *l_1665[7][10][2] = {{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}},{{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1},{&p_1923->g_40.f1,&p_1923->g_40.f1}}};
            uint32_t l_1666 = 4294967295UL;
            int16_t l_1699 = 0L;
            int32_t l_1702 = (-9L);
            int32_t l_1704 = 6L;
            uint32_t l_1712 = 8UL;
            uint32_t l_1726[3][9] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
            uint32_t l_1760[6] = {3UL,6UL,3UL,3UL,6UL,3UL};
            int32_t ****l_1777 = &p_1923->g_687;
            int8_t ****l_1780 = &l_1606[7][2][3];
            int8_t ***l_1781 = &l_1611;
            int64_t **l_1791 = &l_1508;
            int32_t l_1810 = (-1L);
            int64_t l_1837 = 0x2116B7B9116B0802L;
            int32_t l_1846 = 0x352148DAL;
            int32_t l_1849 = (-9L);
            int32_t l_1850 = 0x4F909488L;
            int32_t l_1852 = (-8L);
            int32_t l_1855 = 0L;
            int32_t l_1856 = 0x1874599AL;
            int32_t l_1857 = 0x66ACFC90L;
            uint64_t *****l_1866 = &p_1923->g_704;
            uint32_t l_1895 = 0x74D22C2FL;
            int i, j, k;
            (1 + 1);
        }
    }
    return (**p_1923->g_903);
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_4
 * writes:
 */
int32_t  func_12(uint32_t  p_13, int8_t  p_14, int64_t  p_15, int32_t * p_16, int8_t  p_17, struct S1 * p_1923)
{ /* block id: 716 */
    return (*p_16);
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_200 p_1923->g_201 p_1923->g_1117 p_1923->g_286 p_1923->g_300 p_1923->g_1393
 * writes: p_1923->g_1015
 */
uint8_t  func_19(int32_t * p_20, uint16_t  p_21, uint32_t  p_22, int32_t * p_23, struct S1 * p_1923)
{ /* block id: 710 */
    uint16_t *l_1384[3][2];
    uint16_t **l_1385 = &l_1384[0][0];
    int32_t l_1386 = 0x4A60F5DEL;
    uint64_t **l_1387 = &p_1923->g_1382;
    uint64_t ***l_1388 = &p_1923->g_1381[3];
    uint64_t ***l_1389 = &p_1923->g_1381[5];
    uint64_t ***l_1390[10] = {&p_1923->g_1381[9],&p_1923->g_1381[5],&p_1923->g_1381[9],&p_1923->g_1381[9],&p_1923->g_1381[5],&p_1923->g_1381[9],&p_1923->g_1381[9],&p_1923->g_1381[5],&p_1923->g_1381[9],&p_1923->g_1381[9]};
    uint64_t **l_1391 = &p_1923->g_1382;
    uint64_t **l_1392 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1384[i][j] = &p_1923->g_628;
    }
    (*p_1923->g_1393) = (((((*l_1385) = l_1384[0][0]) == (*p_1923->g_200)) , ((l_1386 ^ (l_1386 > 0x3CCFAA31721B66AEL)) , (l_1391 = l_1387))) == ((*p_1923->g_1117) , (l_1392 = &p_1923->g_1382)));
    return l_1386;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_240 p_1923->g_4 p_1923->g_325.f0 p_1923->g_88.f0 p_1923->g_134 p_1923->g_92.f0 p_1923->g_136 p_1923->g_148 p_1923->g_191 p_1923->g_192 p_1923->g_42 p_1923->g_858 p_1923->g_859 p_1923->g_903 p_1923->g_857 p_1923->g_318 p_1923->g_776 p_1923->g_252 p_1923->g_253 p_1923->g_704 p_1923->g_705 p_1923->g_516 p_1923->g_517 p_1923->g_940 p_1923->g_209 p_1923->g_628 p_1923->g_84.f0 p_1923->g_40.f0 p_1923->g_418 p_1923->g_987 p_1923->g_83 p_1923->g_84 p_1923->g_1012 p_1923->g_69 p_1923->g_1015 p_1923->g_300 p_1923->g_286 p_1923->g_564 p_1923->g_200 p_1923->g_201 p_1923->g_202 p_1923->g_260 p_1923->g_429 p_1923->g_291 p_1923->g_363 p_1923->g_420 p_1923->g_724 p_1923->g_725 p_1923->g_82.f0 p_1923->g_325.f1 p_1923->g_567 p_1923->g_1341 p_1923->g_1286 p_1923->g_568 p_1923->g_904 p_1923->g_905 p_1923->g_177 p_1923->g_1372 p_1923->g_1188.f0 p_1923->g_1376
 * writes: p_1923->g_240 p_1923->g_325.f0 p_1923->g_88.f0 p_1923->g_136 p_1923->g_42 p_1923->g_148 p_1923->g_192 p_1923->g_776 p_1923->g_940 p_1923->g_84.f0 p_1923->g_628 p_1923->g_418 p_1923->g_318 p_1923->g_987 p_1923->g_707 p_1923->g_1015 p_1923->g_252 p_1923->g_261 p_1923->g_83 p_1923->g_363 p_1923->g_286 p_1923->g_253 p_1923->g_161 p_1923->g_1117 p_1923->g_325.f1 p_1923->g_567 p_1923->g_1137 p_1923->g_1248.f1 p_1923->g_568 p_1923->g_1381
 */
int32_t * func_24(uint8_t  p_25, int64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_1923)
{ /* block id: 433 */
    uint8_t l_821 = 0x05L;
    uint16_t *l_848 = (void*)0;
    int8_t *l_882[8] = {&p_1923->g_252,&p_1923->g_252,&p_1923->g_252,&p_1923->g_252,&p_1923->g_252,&p_1923->g_252,&p_1923->g_252,&p_1923->g_252};
    int32_t l_916 = 0x0A4616F3L;
    int32_t *l_919 = &p_1923->g_315;
    int32_t *****l_947 = &p_1923->g_686;
    int64_t l_979[7] = {0L,0L,0L,0L,0L,0L,0L};
    int32_t l_990 = 0x04C8643BL;
    int32_t l_991 = 0x181D667DL;
    int32_t l_992 = 1L;
    int32_t l_993 = (-1L);
    int32_t l_994 = (-2L);
    uint32_t l_996 = 1UL;
    uint32_t l_1016 = 7UL;
    int32_t l_1034 = (-2L);
    union U0 *l_1051 = (void*)0;
    int64_t *l_1150[3];
    int16_t l_1158 = 0x61E7L;
    int32_t l_1166[9] = {0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL,0x7413346CL};
    uint32_t *l_1210 = &p_1923->g_398;
    int64_t l_1358 = 1L;
    uint64_t *l_1380 = &p_1923->g_348;
    uint64_t **l_1379[2][3] = {{&l_1380,&l_1380,&l_1380},{&l_1380,&l_1380,&l_1380}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_1150[i] = (void*)0;
    for (p_1923->g_240 = 16; (p_1923->g_240 < 1); p_1923->g_240--)
    { /* block id: 436 */
        int32_t *l_819 = &p_1923->g_42;
        int32_t *l_820[8][3][5] = {{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}},{{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4},{(void*)0,&p_1923->g_42,&p_1923->g_42,(void*)0,&p_1923->g_4}}};
        volatile int32_t *l_843 = &p_1923->g_193[0][1];
        uint32_t l_886 = 1UL;
        int i, j, k;
        l_821--;
        if ((*p_27))
            continue;
        if ((*p_27))
            continue;
        for (p_1923->g_325.f0 = 0; (p_1923->g_325.f0 >= (-19)); --p_1923->g_325.f0)
        { /* block id: 442 */
            uint32_t l_835[5][2] = {{0xE49510B5L,0xE49510B5L},{0xE49510B5L,0xE49510B5L},{0xE49510B5L,0xE49510B5L},{0xE49510B5L,0xE49510B5L},{0xE49510B5L,0xE49510B5L}};
            uint16_t *l_846[9][8] = {{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]},{&p_1923->g_69,&p_1923->g_628,&p_1923->g_363[0],(void*)0,&p_1923->g_628,&p_1923->g_628,(void*)0,&p_1923->g_363[0]}};
            int8_t *l_861 = &p_1923->g_136;
            int8_t **l_860 = &l_861;
            int32_t **l_918 = &l_820[2][1][3];
            int i, j;
            for (p_1923->g_88.f0 = 18; (p_1923->g_88.f0 == (-12)); p_1923->g_88.f0 = safe_sub_func_uint16_t_u_u(p_1923->g_88.f0, 9))
            { /* block id: 445 */
                int8_t *l_834 = (void*)0;
                int8_t *l_840 = &p_1923->g_136;
                uint16_t *l_849 = &p_1923->g_363[0];
                int32_t l_865 = 0x79F8F7E7L;
                int8_t l_913[9] = {0x39L,0x54L,0x39L,0x39L,0x54L,0x39L,0x39L,0x54L,0x39L};
                int32_t l_917 = 0L;
                int i;
                if (((*l_819) = (p_1923->g_134 , (safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s(0x0CL, ((*l_840) &= (safe_add_func_uint8_t_u_u(p_25, ((p_26 & ((l_835[2][1] = p_25) < ((safe_lshift_func_uint8_t_u_s(((-7L) && p_1923->g_92.f0), (0x5225DE31L ^ (((0x67L == l_821) & p_28) == 0x258F157523EA5867L)))) || (*p_27)))) != p_26)))))) > p_26), 0)))))
                { /* block id: 449 */
                    uint64_t l_852 = 0x4FEDDA7FBC3AAFA2L;
                    int8_t *l_881 = (void*)0;
                    int32_t l_885 = (-10L);
                    int32_t l_888 = 1L;
                    for (p_1923->g_148 = 24; (p_1923->g_148 != 25); p_1923->g_148 = safe_add_func_int8_t_s_s(p_1923->g_148, 8))
                    { /* block id: 452 */
                        uint16_t **l_847[8] = {&l_846[2][1],&l_846[0][1],&l_846[2][1],&l_846[2][1],&l_846[0][1],&l_846[2][1],&l_846[2][1],&l_846[0][1]};
                        int8_t ***l_862 = &l_860;
                        int32_t l_866 = 6L;
                        uint8_t l_887 = 1UL;
                        int i;
                        l_843 = (*p_1923->g_191);
                    }
                    (*l_819) &= (*p_27);
                    return &p_1923->g_42;
                }
                else
                { /* block id: 467 */
                    int32_t l_889 = 0x54C27ABEL;
                    int32_t **l_890 = (void*)0;
                    int32_t **l_891 = &l_820[2][1][3];
                    int32_t **l_892 = &l_819;
                    uint32_t *l_915 = &p_1923->g_138;
                    uint32_t **l_914 = &l_915;
                    if (l_889)
                        break;
                    (*l_892) = ((*l_891) = &p_1923->g_42);
                    for (l_889 = 0; (l_889 <= 0); l_889 += 1)
                    { /* block id: 473 */
                        int i;
                        (*p_1923->g_191) = p_1923->g_192[(l_889 + 5)];
                    }
                    l_917 |= (safe_mod_func_uint8_t_u_u(((*p_1923->g_858) != ((safe_lshift_func_uint8_t_u_s(l_835[2][1], 2)) | (safe_mul_func_int16_t_s_s((0x3F18C06257F66324L | ((((((((((safe_rshift_func_int8_t_s_u((l_916 = (safe_lshift_func_int16_t_s_u(((p_1923->g_903 == (((safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(((((void*)0 != p_1923->g_857[1]) || (((((safe_mod_func_int8_t_s_s((p_1923->g_318 & ((**l_892) = ((p_1923->g_776 |= l_835[1][0]) == (safe_mod_func_uint16_t_u_u(65529UL, p_26))))), 0x5EL)) > 0x56L) , p_28) , 5L) != 0L)) , l_913[8]), p_28)))) , p_1923->g_252) , l_914)) < 0x05L), 14))), 7)) , p_26) == 0xC7280DC4L) || (*p_27)) & p_26) , (void*)0) == (void*)0) , 0UL) <= p_1923->g_253[7]) ^ p_25)), l_865)))), p_28));
                }
            }
            (*l_918) = p_27;
        }
    }
    if (l_821)
    { /* block id: 485 */
        int32_t *l_920 = &p_1923->g_470;
        int32_t *l_921 = &p_1923->g_42;
        int32_t l_937 = 9L;
        int16_t l_952 = 0x4778L;
        int64_t l_964[8];
        int32_t l_968 = 0L;
        int32_t l_985[4];
        int64_t l_1057 = 0x15FCD1CA729DF8CBL;
        uint64_t ***l_1112 = &p_1923->g_516[0];
        int i;
        for (i = 0; i < 8; i++)
            l_964[i] = 0x43974290399E2B37L;
        for (i = 0; i < 4; i++)
            l_985[i] = 0x58497D02L;
lbl_1059:
        if (((*l_921) = ((l_919 = p_27) == l_920)))
        { /* block id: 488 */
            int32_t *l_936 = (void*)0;
            int32_t *l_938 = &l_916;
            int32_t *l_939 = &p_1923->g_940;
            uint16_t *l_941 = (void*)0;
            uint16_t *l_942 = &p_1923->g_325.f1;
            int32_t ******l_948[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t *l_950 = &p_1923->g_418[0];
            int32_t l_962 = (-8L);
            int32_t l_966 = 0x6E0B66A5L;
            int32_t l_967 = (-6L);
            int32_t l_969 = (-1L);
            int32_t l_970 = 1L;
            int i, j;
            if (((****p_1923->g_704) | (((!(safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((((*p_1923->g_209) = ((*l_921) != ((l_937 = (-1L)) != ((*l_939) |= ((*l_938) = (-3L)))))) > (p_1923->g_628++)) , (*p_1923->g_209)), ((*l_921) && ((safe_add_func_uint32_t_u_u(((*l_950) |= (((l_947 = l_947) != ((safe_unary_minus_func_int64_t_s(p_1923->g_40.f0)) , &p_1923->g_520[1][0])) & 0x4D56L)), l_821)) ^ (-1L))))), l_821)) > 9UL) ^ l_821) >= p_26), 0xCB2B182EL)), 0x422CDAEFL)), 0x3BL)) != (*p_27)) < p_28), (-1L))), 0xA7L))) && (*l_921)) & (*l_921))))
            { /* block id: 496 */
                int32_t *l_951[4][6][2] = {{{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42}},{{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42}},{{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42}},{{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42},{&p_1923->g_42,&p_1923->g_42}}};
                int i, j, k;
                return p_27;
            }
            else
            { /* block id: 498 */
                int32_t *l_953 = &l_916;
                int32_t *l_954 = &p_1923->g_42;
                int32_t *l_955 = (void*)0;
                int32_t *l_956 = &l_916;
                int32_t *l_957 = (void*)0;
                int32_t *l_958 = (void*)0;
                int32_t *l_959 = &l_916;
                int32_t *l_960 = &p_1923->g_42;
                int32_t *l_961 = &l_937;
                int32_t *l_963[8];
                int8_t l_965[10] = {9L,9L,9L,9L,9L,9L,9L,9L,9L,9L};
                uint8_t l_971 = 1UL;
                int8_t l_1014 = 0x49L;
                int64_t *l_1033 = &l_979[1];
                int i;
                for (i = 0; i < 8; i++)
                    l_963[i] = &p_1923->g_42;
                l_971--;
                for (p_1923->g_148 = 0; (p_1923->g_148 > (-25)); p_1923->g_148 = safe_sub_func_int8_t_s_s(p_1923->g_148, 7))
                { /* block id: 502 */
                    uint16_t l_978 = 0xC58CL;
                    int32_t l_981 = (-6L);
                    int32_t l_982 = (-7L);
                    int32_t l_986 = (-1L);
                    int32_t l_995 = 0x6D3B9F3BL;
                    for (p_1923->g_318 = 4; (p_1923->g_318 >= (-12)); --p_1923->g_318)
                    { /* block id: 505 */
                        if ((*p_27))
                            break;
                        if (l_978)
                            break;
                    }
                    if ((*p_27))
                        break;
                    for (l_978 = 2; (l_978 <= 7); l_978 += 1)
                    { /* block id: 512 */
                        int32_t l_980 = 0x56D5B801L;
                        int32_t l_983 = 0x21C6257BL;
                        int32_t l_984[5] = {0x68B0E9B0L,0x68B0E9B0L,0x68B0E9B0L,0x68B0E9B0L,0x68B0E9B0L};
                        uint8_t *l_1013 = &p_1923->g_707;
                        int i;
                        ++p_1923->g_987;
                        --l_996;
                        p_1923->g_1015 &= ((-1L) ^ ((l_991 &= (safe_sub_func_uint16_t_u_u((((*l_961) = (safe_lshift_func_uint8_t_u_s((--p_25), (l_992 = (((safe_add_func_uint8_t_u_u((((*l_953) = (*p_27)) > ((((*p_1923->g_83) , (((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_992, p_26)), ((safe_unary_minus_func_int32_t_s(((*p_1923->g_209) > (p_1923->g_1012 , ((((((((*l_921) = (l_994 = (((*l_1013) = ((*p_27) & p_26)) , 0x5C235947L))) & (*l_939)) | 0x6D452FFC30266CA0L) , 0x7B2D3B5621D3D821L) && p_26) < 1L) >= l_990))))) < p_28))) != 0x4875L) ^ (*p_1923->g_209))) ^ p_28) || (*l_939))), 7UL)) & l_978) , l_1014))))) ^ p_1923->g_69), (*p_1923->g_209)))) || l_978));
                        --l_1016;
                    }
                }
                l_992 ^= (p_26 <= ((safe_mod_func_int8_t_s_s(0x5CL, (safe_lshift_func_uint8_t_u_u((((*l_1033) |= (safe_sub_func_uint32_t_u_u(((-10L) ^ ((((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((4294967293UL && (((safe_mul_func_int8_t_s_s(l_916, 4L)) ^ ((p_1923->g_252 |= ((p_1923->g_300 >= p_1923->g_40.f0) & (safe_sub_func_int64_t_s_s(p_1923->g_286[1][5][0], p_1923->g_564)))) < p_28)) & (*p_1923->g_209))) != (*l_961)), 0x1E5275F5L)), p_28)) < (*l_921)) || p_26) || 0xA7L)), 0x159D83D6L))) || l_1034), (*l_921))))) & p_25));
            }
            if (p_1923->g_987)
                goto lbl_1059;
        }
        else
        { /* block id: 531 */
            int32_t l_1043[8][8];
            uint8_t *l_1044 = &p_1923->g_261;
            union U0 **l_1052 = &p_1923->g_83;
            uint16_t *l_1058 = &p_1923->g_363[0];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1043[i][j] = 1L;
            }
            (*l_921) = ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((((*l_1044) = l_1043[2][1]) <= 0x79L) <= (0L || 254UL)) ^ ((p_26 >= (**p_1923->g_200)) || ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_1058) = (((0x6CE8L > ((((*l_1052) = l_1051) != ((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((*l_921), 0x39L)), (*p_27))) , &p_1923->g_81)) == p_25)) <= l_1043[2][1]) ^ l_1057)), (*p_1923->g_201))), (*l_921))), 0x19C79F3FL)) ^ 0x2AC0EA59L))), p_25)), p_26)), 0x75L)), p_1923->g_286[2][7][0])) <= 0x1CA6L) ^ p_1923->g_260[3][5][6]) > p_1923->g_429);
        }
        for (p_1923->g_240 = 0; (p_1923->g_240 >= 8); p_1923->g_240 = safe_add_func_uint64_t_u_u(p_1923->g_240, 9))
        { /* block id: 540 */
            int8_t l_1062 = (-5L);
            for (l_952 = 0; (l_952 >= 0); l_952 -= 1)
            { /* block id: 543 */
                return &p_1923->g_42;
            }
            if (l_1062)
                break;
            for (p_1923->g_707 = 0; (p_1923->g_707 <= 55); p_1923->g_707 = safe_add_func_int16_t_s_s(p_1923->g_707, 4))
            { /* block id: 549 */
                int8_t l_1085 = 6L;
                int64_t *l_1118 = (void*)0;
                int32_t l_1119 = 4L;
                if (l_1062)
                    break;
                for (l_1062 = (-22); (l_1062 == (-18)); l_1062++)
                { /* block id: 553 */
                    int64_t *l_1077 = &p_1923->g_286[2][2][0];
                    int32_t l_1079 = (-10L);
                    int32_t **l_1080 = &l_921;
                    int32_t *l_1082 = &l_1034;
                    int32_t **l_1081[4] = {&l_1082,&l_1082,&l_1082,&l_1082};
                    uint8_t *l_1083 = &p_1923->g_261;
                    uint8_t *l_1084 = &l_821;
                    int i;
                    if (((safe_lshift_func_int8_t_s_u((4UL & (((*l_1084) = ((safe_lshift_func_int8_t_s_u((0x07L > (((*l_1082) = (p_28 == ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_994, (((*l_1077) = p_28) == (safe_unary_minus_func_uint8_t_u(p_1923->g_291[9]))))), 4UL)), ((((l_1079 &= p_25) & ((*l_1083) = ((p_27 = ((*l_1080) = (void*)0)) != (*p_1923->g_191)))) && 0x908AC9E0L) != l_1062))) == p_1923->g_363[0]))) <= 0xCADA3A2CL)), 6)) < 0x04DE8FE9L)) > l_1085)), p_28)) > p_1923->g_420))
                    { /* block id: 561 */
                        (*l_1082) ^= p_26;
                    }
                    else
                    { /* block id: 563 */
                        uint16_t l_1090 = 0x5E07L;
                        uint64_t *l_1103 = &p_1923->g_161;
                        uint32_t l_1104 = 0x9E4EC670L;
                        int32_t l_1109 = 3L;
                        int64_t *l_1116 = &p_1923->g_300;
                        int64_t **l_1115[7][6] = {{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,(void*)0,&l_1116,&l_1116,&l_1116}};
                        int i, j;
                        l_1104 = ((*l_1082) = (safe_add_func_uint64_t_u_u(((*p_1923->g_517) ^= 0UL), ((*l_1103) = ((safe_add_func_int32_t_s_s(l_1090, (6L & ((safe_mul_func_uint16_t_u_u(((void*)0 == &p_1923->g_686), (++p_1923->g_363[0]))) >= 0x2622957B29FA53EFL)))) > (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((p_1923->g_940 |= l_1090) < (safe_lshift_func_int16_t_s_u(p_26, 13))), ((((safe_lshift_func_int16_t_s_s((&p_1923->g_686 == (void*)0), l_1062)) , (*p_1923->g_724)) , 0xF0L) >= p_1923->g_318))), (-1L))))))));
                        if (p_25)
                            continue;
                        l_1119 &= (safe_div_func_uint32_t_u_u(((p_1923->g_82.f0 , ((((p_1923->g_1117 = ((((safe_rshift_func_uint8_t_u_s((++(*l_1084)), (((*l_1082) <= ((void*)0 == l_1112)) > (l_921 == (void*)0)))) < (*p_1923->g_201)) || (-1L)) , ((((safe_rshift_func_uint8_t_u_s(0UL, 1)) | p_28) && l_1085) , l_1077))) != l_1118) , l_1104) >= l_952)) && p_26), p_28));
                    }
                }
                for (l_996 = 0; (l_996 <= 1); l_996 += 1)
                { /* block id: 578 */
                    int32_t **l_1121 = &l_921;
                    (*l_1121) = p_27;
                    for (l_1057 = 0; (l_1057 <= 5); l_1057 += 1)
                    { /* block id: 582 */
                        (*l_1121) = (void*)0;
                        return p_27;
                    }
                    for (p_1923->g_325.f1 = 0; (p_1923->g_325.f1 <= 5); p_1923->g_325.f1 += 1)
                    { /* block id: 588 */
                        return p_27;
                    }
                }
            }
        }
        for (p_1923->g_42 = 3; (p_1923->g_42 >= 0); p_1923->g_42 -= 1)
        { /* block id: 596 */
            (*p_1923->g_191) = (void*)0;
        }
    }
    else
    { /* block id: 599 */
        uint32_t l_1126 = 0x3B5EA028L;
        int32_t l_1132 = 0x1C3BB9ADL;
        int64_t *l_1148 = (void*)0;
        int32_t l_1155 = 0x3915A59FL;
        int32_t l_1163 = (-1L);
        int32_t l_1165[2];
        uint32_t l_1167 = 0x4C2FC15FL;
        uint64_t l_1279 = 0x7F209EE26D999E56L;
        int32_t **l_1335 = &p_1923->g_1137[6];
        int i;
        for (i = 0; i < 2; i++)
            l_1165[i] = 0x05AF5C98L;
        for (p_1923->g_567 = (-5); (p_1923->g_567 >= 26); p_1923->g_567++)
        { /* block id: 602 */
            uint32_t *l_1131 = (void*)0;
            int64_t *l_1133 = &p_1923->g_286[2][1][0];
            int64_t *l_1134 = &l_979[5];
            int32_t l_1135[5][2][6] = {{{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL},{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL}},{{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL},{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL}},{{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL},{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL}},{{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL},{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL}},{{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL},{0L,(-1L),0x210335D6L,0x0AA5642CL,(-1L),0x0AA5642CL}}};
            int32_t **l_1138[2];
            uint64_t ***l_1269 = &p_1923->g_516[0];
            uint8_t l_1332 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1138[i] = &p_1923->g_1137[6];
            if (l_994)
                break;
        }
        (*l_1335) = p_27;
    }
    for (p_1923->g_42 = 0; (p_1923->g_42 <= (-5)); --p_1923->g_42)
    { /* block id: 686 */
        uint16_t l_1351[5][6] = {{0x1F88L,0x1F88L,0UL,0x2E9BL,65527UL,0UL},{0x1F88L,0x1F88L,0UL,0x2E9BL,65527UL,0UL},{0x1F88L,0x1F88L,0UL,0x2E9BL,65527UL,0UL},{0x1F88L,0x1F88L,0UL,0x2E9BL,65527UL,0UL},{0x1F88L,0x1F88L,0UL,0x2E9BL,65527UL,0UL}};
        uint32_t l_1353 = 4294967288UL;
        int32_t l_1363 = 0x102DC740L;
        uint32_t *l_1373 = &p_1923->g_418[0];
        int i, j;
        for (p_1923->g_1248.f1 = 0; (p_1923->g_1248.f1 < 10); p_1923->g_1248.f1 = safe_add_func_int32_t_s_s(p_1923->g_1248.f1, 5))
        { /* block id: 689 */
            int32_t *l_1340[2][8] = {{&l_991,&l_991,&l_991,&l_991,&l_991,&l_991,&l_991,&l_991},{&l_991,&l_991,&l_991,&l_991,&l_991,&l_991,&l_991,&l_991}};
            uint16_t l_1348[1][9][1] = {{{0x8664L},{0x8664L},{0x8664L},{0x8664L},{0x8664L},{0x8664L},{0x8664L},{0x8664L},{0x8664L}}};
            uint64_t ****l_1352[7][3][9] = {{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}},{{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0},{(void*)0,(void*)0,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,(void*)0}}};
            int i, j, k;
            (*p_1923->g_1341) = l_1340[0][5];
            if (p_25)
                break;
            l_992 = (((void*)0 == &p_1923->g_315) > ((safe_add_func_int32_t_s_s((0xB9DCL < p_26), l_979[3])) != (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((l_1351[1][3] ^= (1UL && (((l_1348[0][5][0] < ((safe_lshift_func_int8_t_s_u(p_26, 2)) || (l_821 != 0L))) > (*p_1923->g_1286)) , 0x1EL))), p_28)), p_28))));
            l_994 |= (l_1363 = ((((void*)0 == l_1352[1][1][2]) >= l_1353) , ((l_1351[1][3] > (((safe_mod_func_int16_t_s_s((&p_1923->g_685 == ((safe_sub_func_uint32_t_u_u(l_1358, ((safe_mul_func_int16_t_s_s((((0xC734E11DL != (safe_mod_func_uint16_t_u_u(((0L >= ((((*p_1923->g_209) = 9L) , 0L) ^ 0x54L)) , 0x0ED7L), (-6L)))) || 0x43L) > 0x87L), 65535UL)) & (**p_1923->g_903)))) , &l_947)), p_26)) == p_26) , p_1923->g_177)) , 0L)));
        }
        (*p_1923->g_1376) = (safe_add_func_int8_t_s_s(l_1351[1][3], (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, ((((*p_1923->g_1286)--) ^ 0x434BL) >= (p_1923->g_1372 , ((*l_1373) = (p_28 | l_990)))))), (safe_mul_func_uint8_t_u_u(p_1923->g_253[7], p_1923->g_1188.f0))))));
        for (p_1923->g_628 = 0; (p_1923->g_628 <= 8); p_1923->g_628 += 1)
        { /* block id: 703 */
            uint64_t ****l_1377[6] = {&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705,&p_1923->g_705};
            int32_t l_1378[10] = {0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L,0x0AF73C13L};
            int i;
            l_1378[8] &= ((void*)0 == l_1377[0]);
        }
        p_1923->g_1381[9] = l_1379[1][1];
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_300 p_1923->g_776 p_1923->g_177 p_1923->g_705 p_1923->g_516 p_1923->g_517 p_1923->g_253 p_1923->g_348 p_1923->g_88.f0 p_1923->g_42 p_1923->g_424
 * writes: p_1923->g_300 p_1923->g_776 p_1923->g_253 p_1923->g_42
 */
int64_t  func_29(int32_t * p_30, int32_t * p_31, int32_t  p_32, struct S1 * p_1923)
{ /* block id: 422 */
    int64_t l_813 = 0x247E4564751D6D5EL;
    for (p_1923->g_300 = 0; (p_1923->g_300 >= 29); p_1923->g_300 = safe_add_func_int16_t_s_s(p_1923->g_300, 5))
    { /* block id: 425 */
        int8_t l_807 = 0L;
        uint32_t *l_808 = &p_1923->g_776;
        int32_t l_816 = 1L;
        p_1923->g_42 &= (safe_sub_func_uint64_t_u_u(l_807, (l_816 = ((~(((--(*l_808)) > (0x1CD1E613L == p_32)) > (safe_mul_func_uint8_t_u_u(l_813, ((((p_1923->g_177 > 0UL) && ((~(l_813 , (((***p_1923->g_705)--) > (p_32 ^ ((-1L) <= p_1923->g_348))))) , p_32)) && p_1923->g_253[4]) && p_1923->g_88.f0))))) >= p_32))));
        if (p_1923->g_424)
            continue;
    }
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_40.f3 p_1923->g_42 p_1923->g_322 p_1923->g_363 p_1923->g_291 p_1923->g_138 p_1923->g_240 p_1923->g_286
 * writes: p_1923->g_42 p_1923->g_40.f3 p_1923->g_322 p_1923->g_363 p_1923->g_376 p_1923->g_84.f1
 */
uint16_t  func_33(uint32_t  p_34, uint8_t  p_35, int32_t  p_36, struct S1 * p_1923)
{ /* block id: 10 */
    uint64_t l_38[1];
    union U0 *l_39 = &p_1923->g_40;
    int32_t *l_79 = (void*)0;
    int32_t *l_323[7][7][5] = {{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}},{{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4},{&p_1923->g_4,&p_1923->g_4,(void*)0,&p_1923->g_4,&p_1923->g_4}}};
    int32_t *l_359 = &p_1923->g_4;
    int32_t **l_362 = &l_323[0][6][2];
    int8_t *l_369 = &p_1923->g_134;
    int8_t **l_368 = &l_369;
    int32_t **l_374 = &p_1923->g_345;
    uint16_t l_390[3][1];
    int32_t l_457 = 3L;
    int32_t ***l_466[1];
    uint64_t ***l_670[6][4] = {{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]},{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]},{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]},{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]},{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]},{&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0],&p_1923->g_516[0]}};
    int32_t ******l_751[3][7][3] = {{{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0}},{{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0}},{{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0},{&p_1923->g_685,&p_1923->g_685,(void*)0}}};
    uint32_t l_797 = 8UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_38[i] = 0x6F62939C0105807CL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_390[i][j] = 0x5CD2L;
    }
    for (i = 0; i < 1; i++)
        l_466[i] = &l_374;
    for (p_34 = 0; (p_34 <= 0); p_34 += 1)
    { /* block id: 13 */
        int32_t *l_41 = &p_1923->g_42;
        union U0 *l_85 = (void*)0;
        int i;
        l_39 = l_39;
        (*l_41) = (+l_38[p_34]);
        for (p_35 = 0; (p_35 <= 0); p_35 += 1)
        { /* block id: 18 */
            int64_t l_78 = 8L;
            union U0 *l_350 = &p_1923->g_351[7][5];
            int32_t *l_353[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int32_t **l_360 = (void*)0;
            int32_t **l_361 = &l_359;
            int i, j;
            for (p_1923->g_40.f3 = 0; (p_1923->g_40.f3 <= 0); p_1923->g_40.f3 += 1)
            { /* block id: 21 */
                uint16_t *l_68 = &p_1923->g_69;
                int32_t *l_321 = &p_1923->g_322;
                union U0 *l_324 = &p_1923->g_325;
                int32_t l_357 = (-9L);
                int32_t l_358 = 0x2AFF6A0FL;
                int i;
                (1 + 1);
            }
            (*l_361) = l_359;
        }
    }
    (*l_362) = l_359;
    p_1923->g_42 ^= (-1L);
    for (p_1923->g_322 = 0; (p_1923->g_322 <= 9); p_1923->g_322 += 1)
    { /* block id: 185 */
        int8_t **l_370 = &l_369;
        int8_t ***l_371 = &l_370;
        int32_t ***l_375[2][10][5] = {{{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374}},{{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374}}};
        uint16_t *l_377 = &p_1923->g_84.f1;
        int64_t *l_388[1][7];
        int32_t l_389 = 0x278D9F81L;
        int32_t l_391 = (-5L);
        int16_t *l_392 = (void*)0;
        int16_t *l_393 = &p_1923->g_230[6][1];
        int32_t l_422[10][3] = {{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L}};
        int32_t l_456 = 0x46D05E8FL;
        int64_t l_478 = 0x47DBB030C00B2D08L;
        int64_t l_613 = 0x3359AD223F90EEA8L;
        int32_t ****l_683 = &l_466[0];
        int32_t *****l_682 = &l_683;
        uint64_t l_754 = 0x0CB03AD21F9F4C31L;
        uint32_t *l_761 = &p_1923->g_418[0];
        int16_t l_772[9] = {9L,(-4L),9L,9L,(-4L),9L,9L,(-4L),9L};
        uint32_t l_780 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_388[i][j] = &p_1923->g_286[1][0][0];
        }
        ++p_1923->g_363[0];
        p_1923->g_42 = ((safe_sub_func_uint8_t_u_u(p_1923->g_291[p_1923->g_322], ((l_368 == ((*l_371) = l_370)) == p_36))) | ((65533UL && (((0x69ECFBAD7428BB21L || 0x7D5DAD6D62857CCBL) , ((*l_377) = ((&p_1923->g_345 == (p_1923->g_376 = l_374)) >= p_1923->g_138))) > p_1923->g_240)) , p_1923->g_286[2][3][0]));
        if (p_1923->g_240)
            continue;
    }
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_47(int64_t  p_48, int64_t  p_49, struct S1 * p_1923)
{ /* block id: 171 */
    uint64_t l_354 = 18446744073709551615UL;
    int32_t *l_355 = (void*)0;
    int32_t l_356[6][7] = {{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL},{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL},{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL},{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL},{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL},{(-1L),0x4E8F852FL,0x4E8F852FL,(-1L),(-1L),0x4E8F852FL,0x4E8F852FL}};
    int i, j;
    l_356[4][2] ^= (l_354 & 0x20D7AD1C5595F862L);
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_83 p_1923->g_217
 * writes: p_1923->g_83
 */
int32_t  func_52(int64_t  p_53, union U0 * p_54, struct S1 * p_1923)
{ /* block id: 168 */
    union U0 **l_352 = &p_1923->g_83;
    (*l_352) = p_1923->g_83;
    return p_1923->g_217;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_240 p_1923->g_177 p_1923->g_230 p_1923->g_318 p_1923->g_260 p_1923->g_40.f0 p_1923->g_345 p_1923->g_148 p_1923->g_42
 * writes: p_1923->g_240 p_1923->g_177 p_1923->g_318 p_1923->g_345 p_1923->g_348 p_1923->g_42
 */
uint16_t  func_55(int32_t  p_56, int32_t * p_57, union U0 * p_58, int32_t * p_59, struct S1 * p_1923)
{ /* block id: 147 */
    uint64_t *l_333[5] = {&p_1923->g_161,&p_1923->g_161,&p_1923->g_161,&p_1923->g_161,&p_1923->g_161};
    uint64_t **l_332 = &l_333[2];
    int32_t *l_342 = (void*)0;
    int i;
    for (p_1923->g_240 = 0; (p_1923->g_240 <= 57); ++p_1923->g_240)
    { /* block id: 150 */
        uint8_t l_331 = 0UL;
        uint64_t ***l_334 = &l_332;
        int8_t *l_335 = &p_1923->g_318;
        int32_t **l_346 = &p_1923->g_345;
        uint64_t *l_347 = &p_1923->g_348;
        int32_t *l_349 = &p_1923->g_42;
        for (p_1923->g_177 = (-25); (p_1923->g_177 == (-4)); ++p_1923->g_177)
        { /* block id: 153 */
            uint32_t l_330 = 4294967295UL;
            for (p_56 = 1; (p_56 <= 9); p_56 += 1)
            { /* block id: 156 */
                return l_330;
            }
            l_331 |= (p_1923->g_230[6][1] < 1UL);
        }
        (*l_334) = l_332;
        (*l_349) ^= (0x0ABDC080L < ((((*l_335) |= (-1L)) , ((*l_347) = ((safe_div_func_int64_t_s_s((p_1923->g_260[3][5][6] < (safe_mod_func_uint8_t_u_u(p_1923->g_40.f0, (safe_div_func_int16_t_s_s((l_342 == &p_1923->g_315), (safe_add_func_int16_t_s_s((&l_335 == (void*)0), (((*l_346) = p_1923->g_345) != &p_56)))))))), p_1923->g_148)) == 0x60FFL))) , 0x08873CDEL));
    }
    return p_1923->g_40.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1923->g_69 p_1923->g_88.f1 p_1923->g_165 p_1923->g_217 p_1923->g_40.f0 p_1923->g_209 p_1923->g_84.f0 p_1923->g_4 p_1923->g_105 p_1923->g_42 p_1923->g_230 p_1923->g_161 p_1923->g_240 p_1923->g_177 p_1923->g_252 p_1923->g_253 p_1923->g_261 p_1923->g_136 p_1923->g_138 p_1923->g_134 p_1923->g_191 p_1923->g_192 p_1923->g_291 p_1923->g_260 p_1923->g_286 p_1923->g_318
 * writes: p_1923->g_42 p_1923->g_83 p_1923->g_88.f3 p_1923->g_80 p_1923->g_88.f1 p_1923->g_165 p_1923->g_217 p_1923->g_69 p_1923->g_105 p_1923->g_230 p_1923->g_240 p_1923->g_84.f0 p_1923->g_252 p_1923->g_253 p_1923->g_261 p_1923->g_209 p_1923->g_286 p_1923->g_161 p_1923->g_177 p_1923->g_291 p_1923->g_148 p_1923->g_300 p_1923->g_318 p_1923->g_192
 */
int32_t  func_60(union U0 * p_61, union U0 * p_62, union U0 * p_63, union U0 * p_64, int32_t * p_65, struct S1 * p_1923)
{ /* block id: 23 */
    int32_t l_86 = 1L;
    union U0 *l_87 = &p_1923->g_88;
    uint16_t *l_89 = &p_1923->g_69;
    uint16_t **l_90 = (void*)0;
    uint16_t *l_91 = (void*)0;
    int32_t l_106 = 0x5F25B48FL;
    int8_t *l_119 = &p_1923->g_105;
    uint16_t **l_163 = &l_89;
    int32_t l_174 = (-3L);
    int32_t l_176 = 0x13052EA8L;
    int16_t l_198[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int8_t l_212 = (-4L);
    int32_t l_249 = 0x5A8FA795L;
    int16_t **l_273 = &p_1923->g_209;
    uint16_t l_284[9][3][4] = {{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}},{{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL},{0x813BL,0xBF45L,65532UL,65535UL}}};
    int64_t *l_285 = &p_1923->g_286[2][3][0];
    int i, j, k;
    (*p_65) = l_86;
    p_1923->g_83 = ((p_1923->g_69 || l_86) , l_87);
    if (((l_89 = l_89) != l_91))
    { /* block id: 27 */
        for (p_1923->g_88.f3 = 0; p_1923->g_88.f3 < 10; p_1923->g_88.f3 += 1)
        {
            p_1923->g_80[p_1923->g_88.f3] = &p_1923->g_92;
        }
    }
    else
    { /* block id: 29 */
        union U0 *l_98 = (void*)0;
        int32_t l_102 = (-1L);
        int32_t l_171 = 0x5BBDA667L;
        int32_t l_175[4];
        uint16_t **l_199 = &l_91;
        int16_t *l_206 = &l_198[9];
        int32_t *l_256 = &l_175[2];
        int32_t *l_257 = (void*)0;
        int32_t *l_258 = &l_175[1];
        int32_t *l_259[10][2] = {{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]},{(void*)0,&l_175[3]}};
        uint64_t *l_272[8] = {&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4],&p_1923->g_253[4]};
        int i, j;
        for (i = 0; i < 4; i++)
            l_175[i] = 0x0E7BB6F3L;
        for (p_1923->g_88.f1 = 26; (p_1923->g_88.f1 != 3); --p_1923->g_88.f1)
        { /* block id: 32 */
            uint16_t l_103 = 65535UL;
            uint32_t l_162[2][1][8] = {{{0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL}},{{0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL,0x006811DCL}}};
            int32_t l_173 = 9L;
            int16_t *l_208[2];
            int16_t **l_207[8][8] = {{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]},{(void*)0,&l_208[1],&l_208[1],(void*)0,&l_208[1],(void*)0,(void*)0,&l_208[1]}};
            int32_t *l_213 = &l_176;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_208[i] = &p_1923->g_40.f0;
            if (p_1923->g_69)
                break;
        }
        for (p_1923->g_165 = 0; (p_1923->g_165 > 2); ++p_1923->g_165)
        { /* block id: 90 */
            int32_t *l_216[9][5][5] = {{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}},{{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106},{(void*)0,&l_175[1],(void*)0,&l_175[1],&l_106}}};
            uint8_t *l_239 = &p_1923->g_240;
            int i, j, k;
            p_1923->g_217--;
            p_1923->g_230[6][1] &= (safe_mod_func_int64_t_s_s(((((((*l_89) &= 0xBBF4L) | ((*l_206) = (+(safe_sub_func_int32_t_s_s(0x7222A015L, ((((((safe_mul_func_uint8_t_u_u(p_1923->g_40.f0, l_176)) || (safe_add_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((*p_1923->g_209), (*p_1923->g_209))) || p_1923->g_217) , ((*l_119) &= (p_1923->g_4 | p_1923->g_40.f0))) , l_198[8]), (-7L)))) ^ 5UL) & (*p_65)) == 0xCBDDEB08E153FFEBL) > 8UL)))))) >= l_106) , l_86) >= 0UL), 2UL));
            l_176 = ((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(p_1923->g_161, (safe_rshift_func_uint8_t_u_u((l_106 | l_198[8]), ((safe_sub_func_int8_t_s_s(((0L ^ p_1923->g_161) == (p_1923->g_230[6][3] == 0x9527E5EAL)), ((*l_239)++))) >= ((safe_rshift_func_int16_t_s_u(((((*p_1923->g_209) = ((safe_sub_func_int64_t_s_s(l_175[2], (safe_mod_func_uint16_t_u_u(l_171, (*p_1923->g_209))))) > p_1923->g_177)) == l_86) ^ p_1923->g_161), 11)) != 0x7C214725L)))))), l_86)) || l_249);
            for (p_1923->g_240 = (-18); (p_1923->g_240 < 29); p_1923->g_240++)
            { /* block id: 101 */
                p_1923->g_252 &= ((*p_65) = l_106);
                p_1923->g_253[4]++;
            }
        }
        p_1923->g_261--;
        (*p_65) &= (((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((*p_1923->g_209), l_86)) > (l_249 = (safe_lshift_func_int16_t_s_u(((p_1923->g_136 | ((*p_1923->g_209) ^ (*p_1923->g_209))) ^ ((((!(*l_256)) ^ (((p_1923->g_253[4] &= ((safe_mod_func_uint16_t_u_u(((*l_89) = (p_1923->g_138 ^ ((l_198[8] < ((l_198[2] > (*p_1923->g_209)) <= 0x0917L)) == (*l_258)))), p_1923->g_134)) < 0xEFL)) != p_1923->g_230[6][1]) | 6UL)) , (void*)0) != (void*)0)), p_1923->g_105)))), (*l_258))) || p_1923->g_253[4]) ^ p_1923->g_177);
    }
    if (((((*l_273) = &p_1923->g_148) == (void*)0) && ((*p_65) = (((*l_285) = (((safe_sub_func_int16_t_s_s(((p_1923->g_138 == (safe_add_func_uint64_t_u_u(18446744073709551607UL, (((safe_lshift_func_int16_t_s_u(l_106, 7)) <= (((p_1923->g_217 , (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((&l_212 == &l_212), (((l_86 > p_1923->g_84.f0) == 0x59EF8C94L) != l_198[8]))) , (void*)0) != &p_1923->g_161), l_284[3][0][3]))) , (void*)0) != (*p_1923->g_191))) ^ l_249)))) , 0x2E3BL), 0x3E5AL)) < l_174) , p_1923->g_161)) >= l_176))))
    { /* block id: 116 */
        int32_t *l_287 = &p_1923->g_42;
        int16_t *l_307[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1923->g_230[0][5],(void*)0,(void*)0}};
        int8_t *l_316 = &p_1923->g_136;
        int i, j;
        for (p_1923->g_161 = 0; (p_1923->g_161 <= 9); p_1923->g_161 += 1)
        { /* block id: 119 */
            int16_t l_313 = 8L;
            int32_t **l_319 = (void*)0;
            int32_t **l_320 = &l_287;
            for (p_1923->g_177 = 0; (p_1923->g_177 <= 9); p_1923->g_177 += 1)
            { /* block id: 122 */
                int32_t *l_289 = &l_249;
                int32_t *l_290[7][7] = {{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176},{&l_249,&l_106,&l_174,&l_176,&l_176,&l_249,&l_176}};
                int64_t *l_299 = &p_1923->g_300;
                int16_t **l_308 = &l_307[6][6];
                int32_t *l_314[9] = {&p_1923->g_315,(void*)0,&p_1923->g_315,&p_1923->g_315,(void*)0,&p_1923->g_315,&p_1923->g_315,(void*)0,&p_1923->g_315};
                int8_t **l_317 = &l_119;
                int i, j;
                for (p_1923->g_69 = 1; (p_1923->g_69 <= 9); p_1923->g_69 += 1)
                { /* block id: 125 */
                    int32_t **l_288 = &l_287;
                    (*l_288) = l_287;
                    if (p_1923->g_230[6][1])
                        break;
                }
                p_1923->g_291[1]--;
                p_1923->g_318 |= (((**l_273) = 1L) | (((*l_317) = ((((*l_287) = ((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_s(2L, (((*l_299) = p_1923->g_260[1][2][1]) , (safe_mod_func_int32_t_s_s((!((0x2DAACF49DBCD6006L < ((*l_285) ^= (p_1923->g_138 , (safe_mul_func_int8_t_s_s(p_1923->g_253[6], (((safe_add_func_int32_t_s_s((((((*l_308) = l_307[7][6]) != (*l_273)) >= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(l_313, 0x62944A458A64CC76L)), l_212))) & l_284[8][1][0]), (*l_289))) < l_198[1]) , 0x3CL)))))) , 0L)), p_1923->g_42))))))), l_313)) , l_313)) , (*l_289)) , l_316)) != l_316));
            }
            (*l_320) = l_287;
            (*p_65) |= (-1L);
        }
    }
    else
    { /* block id: 141 */
        (*p_1923->g_191) = (*p_1923->g_191);
        (*p_1923->g_191) = (*p_1923->g_191);
    }
    return l_174;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1924;
    struct S1* p_1923 = &c_1924;
    struct S1 c_1925 = {
        0x049F845DL, // p_1923->g_4
        4294967289UL, // p_1923->g_7
        {0x6FCEL}, // p_1923->g_40
        0x1CC0C7FDL, // p_1923->g_42
        0x2D8CL, // p_1923->g_69
        {1L}, // p_1923->g_81
        {0x535EL}, // p_1923->g_82
        {&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81,&p_1923->g_81}, // p_1923->g_80
        {6L}, // p_1923->g_84
        &p_1923->g_84, // p_1923->g_83
        {0x145DL}, // p_1923->g_88
        {-1L}, // p_1923->g_92
        0x35L, // p_1923->g_105
        4L, // p_1923->g_134
        0x40L, // p_1923->g_136
        1UL, // p_1923->g_138
        6L, // p_1923->g_148
        0xD743813938A05123L, // p_1923->g_161
        18446744073709551610UL, // p_1923->g_165
        0L, // p_1923->g_177
        {{0x1D746092L,0x1D746092L}}, // p_1923->g_193
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1923->g_192
        &p_1923->g_192[8], // p_1923->g_191
        6UL, // p_1923->g_202
        &p_1923->g_202, // p_1923->g_201
        &p_1923->g_201, // p_1923->g_200
        &p_1923->g_84.f0, // p_1923->g_209
        0xE58FD312L, // p_1923->g_217
        {{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L},{(-1L),1L,(-9L),5L,(-9L),1L}}, // p_1923->g_230
        255UL, // p_1923->g_240
        0x70L, // p_1923->g_252
        {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}, // p_1923->g_253
        {{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}},{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}},{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}},{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}},{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}},{{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L},{5L,0x73DDL,0x6773L,0x6812L,(-1L),0x5044L,0x0383L}}}, // p_1923->g_260
        251UL, // p_1923->g_261
        {{{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L}},{{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L}},{{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L},{0x47171A2D92CA5481L}}}, // p_1923->g_286
        {1UL,0xDDACF115L,1UL,0xDDACF115L,1UL,1UL,0xDDACF115L,1UL,0xDDACF115L,1UL}, // p_1923->g_291
        (-8L), // p_1923->g_300
        (-10L), // p_1923->g_315
        0x10L, // p_1923->g_318
        0x24C5BDC9L, // p_1923->g_322
        {-1L}, // p_1923->g_325
        &p_1923->g_322, // p_1923->g_345
        2UL, // p_1923->g_348
        {{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}},{{0x28C3L},{8L},{0x28C3L},{0x28C3L},{8L},{0x28C3L},{0x28C3L}}}, // p_1923->g_351
        {65535UL}, // p_1923->g_363
        &p_1923->g_345, // p_1923->g_376
        4294967294UL, // p_1923->g_398
        {4294967289UL}, // p_1923->g_418
        0UL, // p_1923->g_420
        8L, // p_1923->g_423
        5L, // p_1923->g_424
        (-7L), // p_1923->g_425
        0x7E4DCE7EF314835BL, // p_1923->g_429
        0x7AB0C96CL, // p_1923->g_470
        &p_1923->g_253[4], // p_1923->g_517
        {&p_1923->g_517,&p_1923->g_517}, // p_1923->g_516
        0x4B96F055L, // p_1923->g_524
        &p_1923->g_524, // p_1923->g_523
        &p_1923->g_523, // p_1923->g_522
        &p_1923->g_522, // p_1923->g_521
        &p_1923->g_522, // p_1923->g_525
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1923->g_520
        4294967290UL, // p_1923->g_529
        0x2BL, // p_1923->g_564
        0L, // p_1923->g_566
        0x57E2L, // p_1923->g_567
        0x5B6FL, // p_1923->g_568
        0x1B1CL, // p_1923->g_628
        &p_1923->g_376, // p_1923->g_687
        &p_1923->g_687, // p_1923->g_686
        &p_1923->g_686, // p_1923->g_685
        &p_1923->g_516[1], // p_1923->g_705
        &p_1923->g_705, // p_1923->g_704
        1UL, // p_1923->g_707
        0x5A49B890L, // p_1923->g_725
        &p_1923->g_725, // p_1923->g_724
        7UL, // p_1923->g_776
        (-1L), // p_1923->g_859
        &p_1923->g_859, // p_1923->g_858
        {&p_1923->g_858,&p_1923->g_858,&p_1923->g_858,&p_1923->g_858}, // p_1923->g_857
        4294967289UL, // p_1923->g_905
        {&p_1923->g_905,&p_1923->g_905,&p_1923->g_905,&p_1923->g_905,&p_1923->g_905}, // p_1923->g_904
        &p_1923->g_904[4], // p_1923->g_903
        (-1L), // p_1923->g_940
        0x8A85L, // p_1923->g_987
        {0x661BL}, // p_1923->g_1012
        0x1577BECCL, // p_1923->g_1015
        &p_1923->g_300, // p_1923->g_1117
        (void*)0, // p_1923->g_1120
        {&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015,&p_1923->g_1015}, // p_1923->g_1137
        {&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]}, // p_1923->g_1136
        0x2DF305A197851203L, // p_1923->g_1175
        {6L}, // p_1923->g_1188
        {{(-3L),0x0EL,0x46L,0L,0x76L},{(-3L),0x0EL,0x46L,0L,0x76L},{(-3L),0x0EL,0x46L,0L,0x76L},{(-3L),0x0EL,0x46L,0L,0x76L},{(-3L),0x0EL,0x46L,0L,0x76L},{(-3L),0x0EL,0x46L,0L,0x76L}}, // p_1923->g_1236
        {0L}, // p_1923->g_1248
        &p_1923->g_568, // p_1923->g_1286
        5UL, // p_1923->g_1334
        &p_1923->g_1137[7], // p_1923->g_1341
        {0x70BAL}, // p_1923->g_1372
        &p_1923->g_940, // p_1923->g_1376
        &p_1923->g_348, // p_1923->g_1382
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1923->g_1381
        &p_1923->g_1015, // p_1923->g_1393
        (-8L), // p_1923->g_1417
        {&p_1923->g_523,&p_1923->g_523,&p_1923->g_523,&p_1923->g_523,&p_1923->g_523}, // p_1923->g_1435
        {&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4],&p_1923->g_1435[4]}, // p_1923->g_1434
        {0UL}, // p_1923->g_1448
        0x96B1673BL, // p_1923->g_1475
        &p_1923->g_398, // p_1923->g_1491
        &p_1923->g_1491, // p_1923->g_1490
        {{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}},{{0x106EL},{3L},{0x2544L}}}, // p_1923->g_1504
        {0x2921L}, // p_1923->g_1620
        &p_1923->g_1137[6], // p_1923->g_1696
        0x0A76397C02362688L, // p_1923->g_1705
        {0x0689L}, // p_1923->g_1731
        {{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}},{{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564},{&p_1923->g_105,(void*)0,&p_1923->g_252,&p_1923->g_564}}}, // p_1923->g_1805
        &p_1923->g_1805[9][5][1], // p_1923->g_1804
        {4UL,0x22L,4UL,4UL,0x22L,4UL,4UL}, // p_1923->g_1812
        &p_1923->g_138, // p_1923->g_1829
        &p_1923->g_1829, // p_1923->g_1828
        {0x5826L}, // p_1923->g_1835
        247UL, // p_1923->g_1843
        0x663445E43C8C0A5CL, // p_1923->g_1851
        5L, // p_1923->g_1863
        {{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]},{&p_1923->g_1137[6],(void*)0,&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6],&p_1923->g_1137[6]}}, // p_1923->g_1903
    };
    c_1924 = c_1925;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1923);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1923->g_4, "p_1923->g_4", print_hash_value);
    transparent_crc(p_1923->g_7, "p_1923->g_7", print_hash_value);
    transparent_crc(p_1923->g_40.f0, "p_1923->g_40.f0", print_hash_value);
    transparent_crc(p_1923->g_42, "p_1923->g_42", print_hash_value);
    transparent_crc(p_1923->g_69, "p_1923->g_69", print_hash_value);
    transparent_crc(p_1923->g_81.f0, "p_1923->g_81.f0", print_hash_value);
    transparent_crc(p_1923->g_82.f0, "p_1923->g_82.f0", print_hash_value);
    transparent_crc(p_1923->g_84.f0, "p_1923->g_84.f0", print_hash_value);
    transparent_crc(p_1923->g_88.f0, "p_1923->g_88.f0", print_hash_value);
    transparent_crc(p_1923->g_92.f0, "p_1923->g_92.f0", print_hash_value);
    transparent_crc(p_1923->g_105, "p_1923->g_105", print_hash_value);
    transparent_crc(p_1923->g_134, "p_1923->g_134", print_hash_value);
    transparent_crc(p_1923->g_136, "p_1923->g_136", print_hash_value);
    transparent_crc(p_1923->g_138, "p_1923->g_138", print_hash_value);
    transparent_crc(p_1923->g_148, "p_1923->g_148", print_hash_value);
    transparent_crc(p_1923->g_161, "p_1923->g_161", print_hash_value);
    transparent_crc(p_1923->g_165, "p_1923->g_165", print_hash_value);
    transparent_crc(p_1923->g_177, "p_1923->g_177", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1923->g_193[i][j], "p_1923->g_193[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1923->g_202, "p_1923->g_202", print_hash_value);
    transparent_crc(p_1923->g_217, "p_1923->g_217", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1923->g_230[i][j], "p_1923->g_230[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1923->g_240, "p_1923->g_240", print_hash_value);
    transparent_crc(p_1923->g_252, "p_1923->g_252", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1923->g_253[i], "p_1923->g_253[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1923->g_260[i][j][k], "p_1923->g_260[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1923->g_261, "p_1923->g_261", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1923->g_286[i][j][k], "p_1923->g_286[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1923->g_291[i], "p_1923->g_291[i]", print_hash_value);

    }
    transparent_crc(p_1923->g_300, "p_1923->g_300", print_hash_value);
    transparent_crc(p_1923->g_315, "p_1923->g_315", print_hash_value);
    transparent_crc(p_1923->g_318, "p_1923->g_318", print_hash_value);
    transparent_crc(p_1923->g_322, "p_1923->g_322", print_hash_value);
    transparent_crc(p_1923->g_325.f0, "p_1923->g_325.f0", print_hash_value);
    transparent_crc(p_1923->g_348, "p_1923->g_348", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1923->g_351[i][j].f0, "p_1923->g_351[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1923->g_363[i], "p_1923->g_363[i]", print_hash_value);

    }
    transparent_crc(p_1923->g_398, "p_1923->g_398", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1923->g_418[i], "p_1923->g_418[i]", print_hash_value);

    }
    transparent_crc(p_1923->g_420, "p_1923->g_420", print_hash_value);
    transparent_crc(p_1923->g_423, "p_1923->g_423", print_hash_value);
    transparent_crc(p_1923->g_424, "p_1923->g_424", print_hash_value);
    transparent_crc(p_1923->g_425, "p_1923->g_425", print_hash_value);
    transparent_crc(p_1923->g_429, "p_1923->g_429", print_hash_value);
    transparent_crc(p_1923->g_470, "p_1923->g_470", print_hash_value);
    transparent_crc(p_1923->g_524, "p_1923->g_524", print_hash_value);
    transparent_crc(p_1923->g_529, "p_1923->g_529", print_hash_value);
    transparent_crc(p_1923->g_564, "p_1923->g_564", print_hash_value);
    transparent_crc(p_1923->g_566, "p_1923->g_566", print_hash_value);
    transparent_crc(p_1923->g_567, "p_1923->g_567", print_hash_value);
    transparent_crc(p_1923->g_568, "p_1923->g_568", print_hash_value);
    transparent_crc(p_1923->g_628, "p_1923->g_628", print_hash_value);
    transparent_crc(p_1923->g_707, "p_1923->g_707", print_hash_value);
    transparent_crc(p_1923->g_725, "p_1923->g_725", print_hash_value);
    transparent_crc(p_1923->g_776, "p_1923->g_776", print_hash_value);
    transparent_crc(p_1923->g_859, "p_1923->g_859", print_hash_value);
    transparent_crc(p_1923->g_905, "p_1923->g_905", print_hash_value);
    transparent_crc(p_1923->g_940, "p_1923->g_940", print_hash_value);
    transparent_crc(p_1923->g_987, "p_1923->g_987", print_hash_value);
    transparent_crc(p_1923->g_1012.f0, "p_1923->g_1012.f0", print_hash_value);
    transparent_crc(p_1923->g_1015, "p_1923->g_1015", print_hash_value);
    transparent_crc(p_1923->g_1175, "p_1923->g_1175", print_hash_value);
    transparent_crc(p_1923->g_1188.f0, "p_1923->g_1188.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1923->g_1236[i][j], "p_1923->g_1236[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1923->g_1248.f0, "p_1923->g_1248.f0", print_hash_value);
    transparent_crc(p_1923->g_1334, "p_1923->g_1334", print_hash_value);
    transparent_crc(p_1923->g_1372.f0, "p_1923->g_1372.f0", print_hash_value);
    transparent_crc(p_1923->g_1417, "p_1923->g_1417", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1923->g_1448[i], "p_1923->g_1448[i]", print_hash_value);

    }
    transparent_crc(p_1923->g_1475, "p_1923->g_1475", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1923->g_1504[i][j].f0, "p_1923->g_1504[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1923->g_1620.f0, "p_1923->g_1620.f0", print_hash_value);
    transparent_crc(p_1923->g_1705, "p_1923->g_1705", print_hash_value);
    transparent_crc(p_1923->g_1731.f0, "p_1923->g_1731.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1923->g_1812[i], "p_1923->g_1812[i]", print_hash_value);

    }
    transparent_crc(p_1923->g_1835.f0, "p_1923->g_1835.f0", print_hash_value);
    transparent_crc(p_1923->g_1843, "p_1923->g_1843", print_hash_value);
    transparent_crc(p_1923->g_1851, "p_1923->g_1851", print_hash_value);
    transparent_crc(p_1923->g_1863, "p_1923->g_1863", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
