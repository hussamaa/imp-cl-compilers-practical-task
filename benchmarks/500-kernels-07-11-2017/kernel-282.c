// -g 39,32,8 -l 3,8,4
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


// Seed: 1254145877

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    uint8_t g_57[10];
    uint32_t g_65;
    int32_t g_83;
    volatile uint32_t g_87;
    int32_t ** volatile g_90;
    int64_t g_98;
    uint8_t g_100;
    uint8_t *g_99;
    int32_t *g_108;
    int32_t **g_107;
    uint64_t g_112;
    int16_t g_114;
    uint16_t g_117;
    int16_t g_127;
    int32_t **g_220;
    int16_t *g_232[2];
    int16_t **g_231;
    uint16_t g_252[2][10][5];
    uint16_t g_279;
    uint16_t *g_325;
    uint16_t *g_334;
    uint64_t * volatile g_365[4];
    uint64_t * volatile *g_364;
    uint32_t g_419;
    uint64_t g_428;
    int32_t * volatile g_436;
    int8_t g_467;
    int8_t g_469;
    int16_t g_473;
    uint32_t g_486;
    int32_t g_502;
    volatile uint8_t g_503;
    volatile int32_t g_527;
    volatile int32_t g_528;
    int32_t g_529;
    int64_t g_530;
    uint32_t g_532;
    uint16_t g_536[7];
    uint32_t *g_556;
    volatile uint16_t g_560;
    int64_t g_622;
    volatile int32_t g_629;
    volatile uint8_t g_636;
    volatile uint64_t g_660;
    int32_t * volatile g_669;
    uint64_t g_712[3][3];
    int32_t g_727;
    int32_t * volatile g_726;
    uint64_t *g_771;
    uint64_t **g_770[9][7][4];
    uint64_t **g_772;
    int8_t *g_778;
    int8_t * volatile *g_777;
    int16_t g_780;
    int32_t g_826;
    uint16_t g_830;
    uint16_t g_1148;
    uint64_t g_1150[4];
    int16_t g_1184;
    volatile int32_t g_1185[5];
    int16_t *** volatile g_1265;
    uint64_t g_1464[1];
    int8_t g_1491;
    int8_t **g_1511;
    uint32_t *g_1518;
    uint32_t **g_1517;
    int16_t g_1545[9][5][5];
    int32_t g_1586[3];
    uint16_t *** volatile g_1629;
    volatile uint16_t * volatile *g_1631;
    volatile uint16_t * volatile **g_1630;
    int32_t *g_1636;
    int32_t ** volatile g_1635[9];
    uint8_t g_1640;
    uint32_t ***g_1685;
    int32_t *** volatile g_1707;
    volatile int64_t g_1735;
    volatile int64_t *g_1734;
    volatile int64_t * volatile *g_1733;
    uint64_t g_1876;
    uint32_t **g_1879;
    uint32_t g_1883;
    uint32_t *g_1882;
    uint32_t **g_1881;
    uint8_t g_1891;
    int8_t g_1912;
    int8_t g_1913;
    uint16_t **g_2078[9][5];
    uint16_t ***g_2077;
    int64_t g_2130;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2132);
int64_t  func_5(uint64_t  p_6, struct S0 * p_2132);
int32_t * func_7(uint64_t  p_8, int32_t  p_9, int16_t  p_10, int32_t * p_11, struct S0 * p_2132);
int32_t  func_12(uint32_t  p_13, struct S0 * p_2132);
int8_t  func_18(int32_t  p_19, int32_t * p_20, int32_t * p_21, int8_t  p_22, int32_t * p_23, struct S0 * p_2132);
int64_t  func_24(uint32_t  p_25, int32_t * p_26, int32_t * p_27, struct S0 * p_2132);
uint32_t  func_28(int32_t  p_29, int8_t  p_30, int64_t  p_31, int32_t * p_32, struct S0 * p_2132);
int32_t  func_37(int8_t  p_38, uint32_t  p_39, int32_t * p_40, struct S0 * p_2132);
int32_t  func_42(int16_t  p_43, struct S0 * p_2132);
int32_t  func_66(uint8_t  p_67, struct S0 * p_2132);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2132->g_220 p_2132->g_530 p_2132->g_1517 p_2132->g_1518 p_2132->g_334 p_2132->g_117 p_2132->g_777 p_2132->g_778 p_2132->g_556 p_2132->g_532 p_2132->g_99 p_2132->g_100 p_2132->g_107 p_2132->g_1636 p_2132->g_826 p_2132->g_112 p_2132->g_1464 p_2132->g_364 p_2132->g_365 p_2132->g_1265 p_2132->g_231 p_2132->g_232 p_2132->g_469 p_2132->g_108 p_2132->g_114 p_2132->g_325 p_2132->g_252 p_2132->g_1640 p_2132->g_1734 p_2132->g_1735 p_2132->g_1685 p_2132->g_560 p_2132->g_1876 p_2132->g_1891 p_2132->g_83 p_2132->g_830 p_2132->g_1912 p_2132->g_1913 p_2132->g_467 p_2132->g_279 p_2132->g_1733 p_2132->g_2077 p_2132->g_2078
 * writes: p_2132->g_2 p_2132->g_108 p_2132->g_532 p_2132->g_83 p_2132->g_419 p_2132->g_530 p_2132->g_469 p_2132->g_117 p_2132->g_1148 p_2132->g_127 p_2132->g_826 p_2132->g_112 p_2132->g_114 p_2132->g_467 p_2132->g_1517 p_2132->g_1876 p_2132->g_98 p_2132->g_1891 p_2132->g_100 p_2132->g_231 p_2132->g_1912 p_2132->g_1184 p_2132->g_279 p_2132->g_2130
 */
int32_t  func_1(struct S0 * p_2132)
{ /* block id: 4 */
    uint64_t l_1512[5] = {0UL,0UL,0UL,0UL,0UL};
    int16_t **l_1524 = &p_2132->g_232[0];
    int8_t l_1544[10][9] = {{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L},{(-6L),(-1L),0L,1L,0x05L,0x21L,0x7BL,(-9L),0x66L}};
    int32_t l_1571[10] = {(-1L),0x0DC0EA47L,0x4E456908L,0x0DC0EA47L,(-1L),(-1L),0x0DC0EA47L,0x4E456908L,0x0DC0EA47L,(-1L)};
    int8_t l_1596 = (-1L);
    int32_t **l_1705 = &p_2132->g_108;
    uint32_t ***l_1709 = (void*)0;
    uint32_t l_1710 = 0x90F29316L;
    int32_t *l_1833 = &l_1571[4];
    uint32_t l_1872 = 0x039AFA6EL;
    int64_t l_1941 = 0x02AFBFD76D3307EFL;
    int32_t l_1943[3][8] = {{3L,0x578EC391L,0x578EC391L,3L,3L,0x578EC391L,0x578EC391L,3L},{3L,0x578EC391L,0x578EC391L,3L,3L,0x578EC391L,0x578EC391L,3L},{3L,0x578EC391L,0x578EC391L,3L,3L,0x578EC391L,0x578EC391L,3L}};
    int8_t l_1949 = 0x06L;
    int64_t l_1989 = 1L;
    uint16_t l_2063 = 0xCD0FL;
    int8_t l_2097 = 2L;
    uint64_t l_2102 = 0xB34099F1E8C738EBL;
    int i, j;
lbl_2105:
    for (p_2132->g_2 = (-29); (p_2132->g_2 > 28); p_2132->g_2++)
    { /* block id: 7 */
        int8_t **l_1506 = &p_2132->g_778;
        int8_t ***l_1505[7][3][5] = {{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}},{{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506},{&l_1506,&l_1506,&l_1506,&l_1506,&l_1506}}};
        int32_t l_1507 = 6L;
        int8_t **l_1510 = &p_2132->g_778;
        uint32_t *l_1514[6][10][4] = {{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}},{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}},{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}},{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}},{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}},{{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,(void*)0,&p_2132->g_486}}};
        uint32_t **l_1513 = &l_1514[4][5][2];
        int16_t **l_1519 = &p_2132->g_232[0];
        int32_t **l_1540 = (void*)0;
        int32_t l_1569 = (-5L);
        int32_t l_1570[3][7][7] = {{{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L}},{{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L}},{{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L},{1L,0x30548F49L,0x1DF1A99FL,9L,0L,(-8L),0x75985657L}}};
        int32_t *l_1638[1][5][3] = {{{&l_1571[4],&l_1569,&l_1571[4]},{&l_1571[4],&l_1569,&l_1571[4]},{&l_1571[4],&l_1569,&l_1571[4]},{&l_1571[4],&l_1569,&l_1571[4]},{&l_1571[4],&l_1569,&l_1571[4]}}};
        uint64_t l_1639[4];
        int16_t l_1641 = 0L;
        uint8_t l_1642[7];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1639[i] = 18446744073709551611UL;
        for (i = 0; i < 7; i++)
            l_1642[i] = 253UL;
        (1 + 1);
    }
    (*p_2132->g_220) = &l_1571[4];
lbl_1967:
    for (p_2132->g_532 = (-8); (p_2132->g_532 == 2); p_2132->g_532++)
    { /* block id: 801 */
        uint16_t l_1687 = 0x95C0L;
        int32_t l_1695 = (-3L);
        int32_t l_1701[10][6] = {{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL},{1L,0x1C828851L,0x19B4A861L,3L,(-1L),0x21ACFADEL}};
        int32_t l_1797 = 1L;
        uint16_t **l_1813 = &p_2132->g_325;
        int32_t *l_1834 = &p_2132->g_826;
        uint32_t l_1843 = 0x5C321C5CL;
        uint32_t ***l_1880 = &p_2132->g_1879;
        uint32_t ***l_1884 = &p_2132->g_1881;
        int i, j;
        for (p_2132->g_83 = 0; (p_2132->g_83 != (-21)); p_2132->g_83 = safe_sub_func_uint16_t_u_u(p_2132->g_83, 4))
        { /* block id: 804 */
            uint32_t *l_1657[7][10] = {{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486}};
            int32_t l_1694[8][7] = {{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL},{0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL,0x430A1B80L,0x6335FDBAL,0x6335FDBAL}};
            int32_t l_1696 = 1L;
            int64_t l_1743 = 0x4CB1D1BD43C31646L;
            int8_t l_1744[2][7];
            uint64_t **l_1773 = (void*)0;
            int64_t l_1777 = 9L;
            uint8_t l_1806 = 0x38L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1744[i][j] = 5L;
            }
            for (p_2132->g_419 = 0; (p_2132->g_419 <= 26); p_2132->g_419 = safe_add_func_uint16_t_u_u(p_2132->g_419, 8))
            { /* block id: 807 */
                uint64_t l_1666 = 0xB1AC095CE946790DL;
                int32_t l_1688 = 0x627FC596L;
                int32_t l_1689 = 0x0DBBA6E5L;
                int32_t l_1699 = (-1L);
                int16_t ***l_1780 = &l_1524;
                int64_t l_1807 = (-1L);
                for (p_2132->g_530 = 2; (p_2132->g_530 <= 8); p_2132->g_530 += 1)
                { /* block id: 810 */
                    int i, j;
                    l_1571[p_2132->g_530] = ((safe_lshift_func_uint16_t_u_u(l_1544[p_2132->g_530][p_2132->g_530], ((*p_2132->g_334) = (0x37D2AF6EC988F0DCL < ((safe_sub_func_uint8_t_u_u(((l_1571[p_2132->g_530] , l_1657[5][7]) != (*p_2132->g_1517)), ((**p_2132->g_777) = (((0x3E641E71L > ((safe_rshift_func_int8_t_s_u(l_1571[(p_2132->g_530 + 1)], (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0xE7L, (l_1571[p_2132->g_530] , 0xFFL))) ^ l_1544[p_2132->g_530][p_2132->g_530]), (*p_2132->g_334))))) < l_1571[(p_2132->g_530 + 1)])) & l_1666) == l_1512[3])))) != (*p_2132->g_556)))))) != (*p_2132->g_99));
                }
            }
        }
        for (p_2132->g_469 = (-8); (p_2132->g_469 != (-23)); p_2132->g_469 = safe_sub_func_uint32_t_u_u(p_2132->g_469, 1))
        { /* block id: 872 */
            uint64_t **l_1870 = &p_2132->g_771;
            int32_t l_1874 = (-3L);
            l_1834 = l_1833;
            (*p_2132->g_107) = &l_1695;
            for (p_2132->g_1148 = 2; (p_2132->g_1148 <= 8); p_2132->g_1148 += 1)
            { /* block id: 877 */
                uint64_t l_1835[2][1][5];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1835[i][j][k] = 6UL;
                    }
                }
                ++l_1835[1][0][4];
                for (p_2132->g_127 = 4; (p_2132->g_127 >= 0); p_2132->g_127 -= 1)
                { /* block id: 881 */
                    uint32_t l_1840[3][5];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1840[i][j] = 7UL;
                    }
                    (*p_2132->g_1636) ^= 0x0DF4D557L;
                    for (l_1797 = 0; (l_1797 <= 4); l_1797 += 1)
                    { /* block id: 885 */
                        int32_t *l_1838 = &p_2132->g_826;
                        int32_t *l_1839[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1839[i] = &l_1701[7][4];
                        l_1840[0][3]--;
                    }
                }
                return l_1843;
            }
            for (p_2132->g_112 = 0; (p_2132->g_112 <= 9); p_2132->g_112 += 1)
            { /* block id: 893 */
                uint16_t l_1873 = 65535UL;
                uint32_t **l_1875 = &p_2132->g_1518;
                for (l_1797 = 0; (l_1797 <= 0); l_1797 += 1)
                { /* block id: 896 */
                    int8_t *l_1848 = &p_2132->g_467;
                    int32_t l_1849 = 0x3DF33A4AL;
                    int i;
                    (**p_2132->g_220) = ((l_1849 = (l_1571[p_2132->g_112] & ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x57L, p_2132->g_1464[l_1797])), ((***p_2132->g_1265) = ((**p_2132->g_364) & (*l_1834))))) < ((*l_1848) = (**p_2132->g_777))))) | l_1571[p_2132->g_112]);
                    for (l_1849 = 10; (l_1849 == (-30)); --l_1849)
                    { /* block id: 903 */
                        uint32_t l_1871 = 0xB15D570CL;
                        (**p_2132->g_107) = (((((safe_mul_func_uint16_t_u_u(((+(safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((((((0x34AFL & (((((*p_2132->g_556) | ((((*p_2132->g_334) = (*l_1834)) < ((!0x0A5A6475L) >= (safe_lshift_func_uint8_t_u_u((+0x28L), 0)))) | (((+(safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((((*p_2132->g_556) == 1UL) > (**p_2132->g_777)), ((l_1870 == &p_2132->g_365[2]) , l_1871))) == l_1871), l_1872)), 253UL)), 7))) >= 1L) != (*l_1833)))) , 4294967290UL) && (*l_1833)) || 0xCCDE5C3B6DC156FCL)) , l_1873) == 0x2E4F549063A5B45FL) & l_1871) >= 0x31L), (***p_2132->g_1265))), (*p_2132->g_325))) , p_2132->g_1640) , (*l_1833)), (*p_2132->g_99)))) , 0UL), l_1874)) && (*p_2132->g_1734)) && 0L) , (-1L)) == 249UL);
                        (*p_2132->g_1685) = l_1875;
                        return p_2132->g_560;
                    }
                    (*p_2132->g_220) = &l_1701[3][1];
                    p_2132->g_1876++;
                }
            }
        }
    }
    for (p_2132->g_98 = 3; (p_2132->g_98 >= 0); p_2132->g_98 -= 1)
    { /* block id: 921 */
        int32_t *l_1885 = (void*)0;
        int32_t *l_1886 = (void*)0;
        int32_t *l_1887 = &l_1571[2];
        int32_t *l_1888 = (void*)0;
        int32_t *l_1889 = &p_2132->g_826;
        int32_t *l_1890[9] = {&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4],&l_1571[4]};
        int8_t l_1942 = 0x42L;
        uint8_t l_1950[10][1][6] = {{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}},{{0x08L,0x60L,1UL,0xDDL,0x60L,0xDDL}}};
        int32_t l_2039 = (-1L);
        int64_t l_2072 = 0x09A5F6C06A17B684L;
        int i, j, k;
        p_2132->g_1891++;
        for (p_2132->g_469 = 3; (p_2132->g_469 >= 0); p_2132->g_469 -= 1)
        { /* block id: 925 */
            int32_t *l_1894 = &p_2132->g_83;
            int64_t l_1929 = 0x0FBC0BD6E6536577L;
            int8_t l_1940 = 0x5EL;
            int32_t l_1944 = (-7L);
            int32_t l_1945 = 0x4219A33EL;
            int32_t l_1946 = (-1L);
            int32_t l_1947[10][5][5] = {{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}},{{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)},{(-2L),0L,(-1L),0L,(-2L)}}};
            int32_t l_1948 = (-2L);
            int64_t l_1953 = 4L;
            int i, j, k;
            (*p_2132->g_220) = l_1894;
            if (((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((**l_1705))), 10)) , (&p_2132->g_220 == &p_2132->g_90)) != ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((!((safe_mul_func_int8_t_s_s(((void*)0 != l_1890[7]), ((*p_2132->g_1734) <= (safe_div_func_uint8_t_u_u((!(safe_mod_func_uint32_t_u_u(((void*)0 == (*p_2132->g_220)), (safe_add_func_int16_t_s_s(((255UL ^ (**l_1705)) != (**p_2132->g_231)), (*p_2132->g_325)))))), 1L))))) , 9UL)) == 0L) & 0UL) , p_2132->g_830) , (*p_2132->g_325)), (*l_1894))), 0xD611L)) < (*l_1894))) , 18446744073709551611UL) , 0xC97AL), (*l_1833))) , p_2132->g_1912))
            { /* block id: 927 */
                if ((*l_1833))
                    break;
                (*l_1887) = p_2132->g_1913;
                if ((*p_2132->g_1636))
                    continue;
            }
            else
            { /* block id: 931 */
                int32_t l_1916 = 0x07C6877CL;
                int8_t *l_1927[2];
                int32_t l_1928 = 1L;
                int16_t ***l_1938[6][2] = {{&p_2132->g_231,&l_1524},{&p_2132->g_231,&l_1524},{&p_2132->g_231,&l_1524},{&p_2132->g_231,&l_1524},{&p_2132->g_231,&l_1524},{&p_2132->g_231,&l_1524}};
                int16_t **l_1939 = &p_2132->g_232[0];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1927[i] = (void*)0;
                l_1940 ^= (((*l_1705) == (void*)0) <= (((*p_2132->g_99) |= l_1916) > ((((safe_sub_func_uint32_t_u_u(((((((*l_1894) <= (safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1928 = ((*l_1894) , (*p_2132->g_778))) , (l_1929 > (safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((*l_1833) = ((!((safe_mod_func_int16_t_s_s((((*p_2132->g_1265) = (*p_2132->g_1265)) != (l_1939 = &p_2132->g_232[0])), l_1928)) > l_1928)) > 0L)), (**p_2132->g_220))), l_1916)) | (*l_1894)), (**p_2132->g_777))))), l_1916)), l_1916)), 0x57D080B963133695L)), l_1916))) > (*p_2132->g_556)) , (*l_1833)) ^ 0x67D1L) , (*p_2132->g_556)), l_1916)) ^ 1UL) , 0x211F72C1C2CD955EL) >= (*l_1894))));
                if ((*l_1833))
                    continue;
                (*p_2132->g_107) = (void*)0;
                (*p_2132->g_1636) ^= (l_1916 > 65535UL);
            }
            l_1950[5][0][0]++;
            for (p_2132->g_1912 = 3; (p_2132->g_1912 >= 0); p_2132->g_1912 -= 1)
            { /* block id: 945 */
                uint32_t l_1954 = 0xA626158DL;
                l_1954++;
                for (l_1953 = 0; (l_1953 <= 4); l_1953 += 1)
                { /* block id: 949 */
                    for (l_1942 = 3; (l_1942 >= 0); l_1942 -= 1)
                    { /* block id: 952 */
                        (*l_1705) = (void*)0;
                        return p_2132->g_469;
                    }
                    (*l_1705) = (*p_2132->g_107);
                }
                return l_1954;
            }
        }
        for (p_2132->g_114 = 3; (p_2132->g_114 >= 0); p_2132->g_114 -= 1)
        { /* block id: 963 */
            int16_t *l_1963 = (void*)0;
            int16_t *l_1964 = &p_2132->g_1184;
            int32_t l_1966 = 1L;
            int32_t l_1972 = (-5L);
            int32_t l_1985 = (-1L);
            int32_t l_1987 = 0x5F12849CL;
            int32_t l_1988 = (-10L);
            (*l_1887) &= ((*p_2132->g_778) | 1L);
            (*l_1889) ^= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(251UL, ((*p_2132->g_325) > (safe_lshift_func_uint16_t_u_u((*p_2132->g_334), 9))))), ((*l_1964) = (***p_2132->g_1265))));
            for (p_2132->g_467 = 3; (p_2132->g_467 >= 0); p_2132->g_467 -= 1)
            { /* block id: 969 */
                uint32_t l_1965[10] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL};
                int32_t l_1975[3];
                uint8_t l_1977 = 0xEFL;
                int32_t *l_1983[4];
                int64_t l_1986 = 0x353C26D3C3011515L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1975[i] = 0x191DFA72L;
                for (i = 0; i < 4; i++)
                    l_1983[i] = &l_1975[0];
                for (p_2132->g_826 = 3; (p_2132->g_826 >= 0); p_2132->g_826 -= 1)
                { /* block id: 972 */
                    uint32_t l_1968[3][10] = {{4294967293UL,1UL,4UL,1UL,4294967293UL,4294967293UL,1UL,4UL,1UL,4294967293UL},{4294967293UL,1UL,4UL,1UL,4294967293UL,4294967293UL,1UL,4UL,1UL,4294967293UL},{4294967293UL,1UL,4UL,1UL,4294967293UL,4294967293UL,1UL,4UL,1UL,4294967293UL}};
                    int32_t l_1973 = (-9L);
                    int32_t l_1974 = 0x22F82AE8L;
                    uint16_t l_1990 = 0UL;
                    int i, j;
                    if ((l_1966 = l_1965[3]))
                    { /* block id: 974 */
                        int8_t l_1971 = 0x29L;
                        int8_t l_1976[5][1][1];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1976[i][j][k] = 0x2AL;
                            }
                        }
                        if (p_2132->g_532)
                            goto lbl_1967;
                        l_1968[0][0]--;
                        --l_1977;
                        (*p_2132->g_107) = l_1885;
                    }
                    else
                    { /* block id: 979 */
                        uint32_t l_1980 = 4294967295UL;
                        int32_t l_1984[10] = {0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL,0x1E90D2BEL};
                        int i;
                        l_1980--;
                        if (l_1975[0])
                            break;
                        (*p_2132->g_220) = l_1983[2];
                        l_1990--;
                    }
                }
            }
        }
        for (p_2132->g_826 = 0; (p_2132->g_826 <= 3); p_2132->g_826 += 1)
        { /* block id: 990 */
            int32_t *l_1993 = &l_1571[4];
            int32_t l_2019 = 0x513A2031L;
            int32_t l_2045 = 0L;
            int64_t l_2064 = 0x094CC7384767042CL;
            int32_t l_2068[4] = {(-1L),(-1L),(-1L),(-1L)};
            uint32_t l_2090[6][10][4] = {{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}},{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}},{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}},{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}},{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}},{{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL},{0xC9F47B55L,0x3D43F4BDL,4294967295UL,0xF14E2ADFL}}};
            int i, j, k;
            (1 + 1);
        }
        for (p_2132->g_279 = 0; (p_2132->g_279 <= 4); p_2132->g_279 += 1)
        { /* block id: 1074 */
            uint32_t l_2116 = 0xC16EE610L;
            if (p_2132->g_830)
                goto lbl_2105;
            for (l_2102 = 0; (l_2102 <= 3); l_2102 += 1)
            { /* block id: 1078 */
                uint8_t l_2127 = 0UL;
                (*p_2132->g_220) = l_1888;
                for (p_2132->g_532 = 0; (p_2132->g_532 <= 3); p_2132->g_532 += 1)
                { /* block id: 1082 */
                    uint32_t l_2115[6][6][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
                    int32_t l_2128 = (-7L);
                    int64_t *l_2129 = &p_2132->g_2130;
                    int32_t l_2131[6][1][4] = {{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}}};
                    int i, j, k;
                    l_2131[4][0][0] |= ((0L == (safe_lshift_func_uint8_t_u_u((((*l_1887) = ((void*)0 != &p_2132->g_57[1])) | 1UL), 5))) | (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((**p_2132->g_1733) < (((safe_unary_minus_func_uint64_t_u(((!(((safe_add_func_uint64_t_u_u(l_2115[3][0][1], (l_2116 && ((((*p_2132->g_1636) = (((*l_2129) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((*p_2132->g_556), (l_2128 &= ((safe_mul_func_int8_t_s_s((5UL > 0x77L), l_2127)) > 0xB385EDB8L)))), (***p_2132->g_2077))) , l_2116) < 0L), (-4L))), l_2116))) , (-4L))) | l_2115[5][3][1]) , 0xD5B7L)))) , 0xD215B27FL) >= 4294967292UL)) > (*p_2132->g_334)))) == (***p_2132->g_2077)) && l_2128)), l_2116)), 0x3086BF1BL)));
                }
            }
        }
    }
    return p_2132->g_467;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_2 p_2132->g_57 p_2132->g_87 p_2132->g_83 p_2132->g_100 p_2132->g_98 p_2132->g_99 p_2132->g_114 p_2132->g_108 p_2132->g_428 p_2132->g_436 p_2132->g_325 p_2132->g_252 p_2132->g_364 p_2132->g_365 p_2132->g_112 p_2132->g_231 p_2132->g_232 p_2132->g_220 p_2132->g_473 p_2132->g_334 p_2132->g_117 p_2132->g_127 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_279 p_2132->g_560 p_2132->g_556 p_2132->g_527 p_2132->g_419 p_2132->g_622 p_2132->g_636 p_2132->g_660 p_2132->g_530 p_2132->g_712 p_2132->g_726 p_2132->g_777 p_2132->g_780 p_2132->g_469 p_2132->g_778 p_2132->g_727 p_2132->g_830
 * writes: p_2132->g_57 p_2132->g_65 p_2132->g_87 p_2132->g_98 p_2132->g_99 p_2132->g_83 p_2132->g_107 p_2132->g_112 p_2132->g_117 p_2132->g_100 p_2132->g_428 p_2132->g_467 p_2132->g_469 p_2132->g_114 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_252 p_2132->g_556 p_2132->g_127 p_2132->g_108 p_2132->g_473 p_2132->g_636 p_2132->g_712 p_2132->g_727 p_2132->g_770 p_2132->g_772 p_2132->g_232 p_2132->g_231 p_2132->g_830 p_2132->g_1491
 */
int64_t  func_5(uint64_t  p_6, struct S0 * p_2132)
{ /* block id: 8 */
    uint32_t l_33 = 3UL;
    int8_t l_34 = 0x31L;
    int32_t *l_35 = &p_2132->g_2;
    int32_t *l_36 = &p_2132->g_2;
    int32_t *l_672 = &p_2132->g_2;
    int32_t *l_673 = (void*)0;
    int32_t l_835 = 0L;
    uint64_t **l_931 = &p_2132->g_771;
    int8_t l_939[2][3][9] = {{{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L},{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L},{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L}},{{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L},{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L},{0L,0x1DL,0x24L,(-2L),0x24L,0x1DL,0L,8L,0x26L}}};
    int64_t l_1038 = (-1L);
    int64_t l_1039 = 0x4A7C87FF736927A3L;
    int8_t *l_1045 = &l_939[0][2][1];
    int32_t l_1181 = 0x1CF192A2L;
    int32_t l_1182[5];
    uint8_t *l_1242 = &p_2132->g_100;
    int16_t **l_1264 = &p_2132->g_232[0];
    int32_t l_1299 = (-1L);
    int32_t l_1353 = 0L;
    int32_t ***l_1389[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_1430 = (void*)0;
    uint16_t **l_1436 = &p_2132->g_325;
    uint16_t ***l_1435[6][10] = {{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0},{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0},{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0},{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0},{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0},{(void*)0,&l_1436,(void*)0,&l_1436,(void*)0,(void*)0,&l_1436,(void*)0,&l_1436,(void*)0}};
    uint16_t ****l_1434[10] = {&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5],&l_1435[3][5]};
    uint32_t l_1485 = 0x7D1AB165L;
    int32_t l_1490 = (-1L);
    int64_t *l_1499 = &p_2132->g_622;
    int64_t **l_1498 = &l_1499;
    uint32_t ***l_1502 = &l_1430;
    int16_t *l_1503[9] = {&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114,&p_2132->g_114};
    int64_t l_1504 = (-2L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1182[i] = 8L;
    (*p_2132->g_220) = (l_35 = func_7((func_12((p_2132->g_2 , ((safe_sub_func_uint32_t_u_u(p_6, (safe_div_func_int8_t_s_s(func_18((0x3A00D0E75D5F8D9AL ^ func_24(func_28(l_33, l_34, ((0x53413F08L > (l_35 != l_35)) , ((p_2132->g_2 && (*l_35)) , p_6)), l_36, p_2132), l_672, l_672, p_2132)), l_36, l_673, p_6, l_673, p_2132), (*l_35))))) | 0xC792L)), p_2132) , 18446744073709551608UL), p_2132->g_780, (*l_672), l_672, p_2132));
    for (l_33 = 0; (l_33 == 8); ++l_33)
    { /* block id: 424 */
        uint64_t l_844 = 0x7AB7BAADB2A42333L;
        int8_t **l_853 = &p_2132->g_778;
        int32_t l_856[7][4][9] = {{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}},{{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L},{1L,1L,0L,1L,1L,0L,0L,1L,1L}}};
        int32_t l_857 = 0x500F02FEL;
        uint64_t *l_858 = (void*)0;
        uint64_t *l_859 = &p_2132->g_428;
        int32_t ***l_938 = &p_2132->g_107;
        uint32_t l_967 = 0UL;
        int64_t l_1036 = 0L;
        uint32_t *l_1060 = &p_2132->g_486;
        uint16_t **l_1062 = &p_2132->g_325;
        uint16_t ***l_1061 = &l_1062;
        int32_t **l_1099 = (void*)0;
        int16_t *l_1156 = &p_2132->g_114;
        int64_t l_1238 = 6L;
        int8_t l_1282 = 3L;
        uint32_t l_1366 = 0x945A6725L;
        uint64_t ***l_1444 = &p_2132->g_770[0][0][2];
        int64_t l_1484[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1484[i] = 0x03CA617F24C00B05L;
        (1 + 1);
    }
    p_2132->g_1491 = (**p_2132->g_220);
    (*p_2132->g_436) &= (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_6, ((((void*)0 == l_1498) , (safe_sub_func_int8_t_s_s((((*l_1502) = l_1430) != (void*)0), (**p_2132->g_777)))) < (((*l_672) ^ p_2132->g_530) , ((l_1504 = ((*l_672) & (*l_35))) == 0x122EL))))), (*p_2132->g_778))) & (*l_672)), p_6));
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_114 p_2132->g_469 p_2132->g_778 p_2132->g_727 p_2132->g_560 p_2132->g_334 p_2132->g_726 p_2132->g_486 p_2132->g_2 p_2132->g_220 p_2132->g_830 p_2132->g_1586
 * writes: p_2132->g_114 p_2132->g_469 p_2132->g_232 p_2132->g_231 p_2132->g_727 p_2132->g_117 p_2132->g_486 p_2132->g_108 p_2132->g_830
 */
int32_t * func_7(uint64_t  p_8, int32_t  p_9, int16_t  p_10, int32_t * p_11, struct S0 * p_2132)
{ /* block id: 386 */
    uint8_t l_789[2][3] = {{0xA0L,0xA0L,0xA0L},{0xA0L,0xA0L,0xA0L}};
    int16_t *l_813 = &p_2132->g_473;
    int32_t l_818 = 0L;
    int32_t l_823 = 0x05212B92L;
    int32_t l_827 = 0L;
    int32_t l_828 = (-1L);
    int i, j;
    for (p_2132->g_114 = 0; (p_2132->g_114 <= 1); p_2132->g_114 += 1)
    { /* block id: 389 */
        int16_t **l_792 = &p_2132->g_232[1];
        int32_t l_795 = 1L;
        int8_t *l_811 = &p_2132->g_467;
        int32_t l_825 = 5L;
        int32_t l_829 = 0x211BFB01L;
        for (p_2132->g_469 = 0; (p_2132->g_469 <= 1); p_2132->g_469 += 1)
        { /* block id: 392 */
            int16_t *l_786 = &p_2132->g_780;
            int16_t **l_785 = &l_786;
            int16_t ***l_793 = &l_785;
            int16_t ***l_794 = &p_2132->g_231;
            int32_t l_798 = (-6L);
            int32_t *l_799 = &p_2132->g_727;
            int32_t l_814[7];
            int32_t l_824[8][5] = {{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L},{(-2L),(-6L),0x1BE0B284L,2L,0x1BE0B284L}};
            int i, j;
            for (i = 0; i < 7; i++)
                l_814[i] = 1L;
            if (((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((p_2132->g_232[p_2132->g_469] = (void*)0) != ((*l_785) = &p_10)) , ((safe_lshift_func_uint16_t_u_s((l_789[1][2] <= ((p_9 , (l_795 = ((*l_799) &= (((void*)0 == &p_10) ^ ((safe_mul_func_int16_t_s_s((((*l_794) = ((*l_793) = l_792)) != ((((l_795 , ((((safe_mul_func_uint16_t_u_u(p_8, 0x2947L)) == 4294967290UL) == 0x0204332B6453AD4AL) && l_795)) , 0x8B70L) , (*p_2132->g_778)) , (void*)0)), 0x6A9BL)) & l_798))))) || 0L)), 1)) , p_10)) , p_9), 0UL)), p_9)) || (*l_799)) == p_10) , 6L))
            { /* block id: 399 */
                int32_t l_804 = (-1L);
                int8_t *l_812 = (void*)0;
                (*l_799) |= (safe_mul_func_uint16_t_u_u(p_10, ((p_8 <= (l_804 != ((safe_sub_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(1UL, 1L)) <= 0UL) , p_2132->g_560), (((safe_lshift_func_uint16_t_u_s(((*p_2132->g_334) = (((l_811 != l_812) < l_789[1][2]) , l_804)), l_789[1][2])) <= (-3L)) | (-4L)))) || p_8))) | p_8)));
                (*l_799) &= (((void*)0 != l_813) , l_814[4]);
            }
            else
            { /* block id: 403 */
                int32_t *l_819 = &l_818;
                int32_t l_820 = 7L;
                int32_t *l_821 = &p_2132->g_727;
                int32_t *l_822[2][7] = {{&p_2132->g_83,(void*)0,&p_2132->g_83,&p_2132->g_83,(void*)0,&p_2132->g_83,&p_2132->g_83},{&p_2132->g_83,(void*)0,&p_2132->g_83,&p_2132->g_83,(void*)0,&p_2132->g_83,&p_2132->g_83}};
                int i, j;
                if ((*p_2132->g_726))
                    break;
                for (p_2132->g_486 = 0; (p_2132->g_486 > 25); p_2132->g_486 = safe_add_func_uint32_t_u_u(p_2132->g_486, 5))
                { /* block id: 407 */
                    uint32_t l_817 = 2UL;
                    l_795 |= (0L <= 0L);
                    if ((*p_11))
                        continue;
                    l_817 ^= (*p_2132->g_726);
                    (*p_2132->g_220) = p_11;
                }
                ++p_2132->g_830;
            }
            return p_11;
        }
        (*p_2132->g_220) = (p_9 , p_11);
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_231 p_2132->g_232 p_2132->g_114 p_2132->g_530 p_2132->g_334 p_2132->g_117 p_2132->g_712 p_2132->g_83 p_2132->g_726 p_2132->g_57 p_2132->g_556 p_2132->g_532 p_2132->g_2 p_2132->g_436 p_2132->g_220 p_2132->g_777
 * writes: p_2132->g_114 p_2132->g_98 p_2132->g_712 p_2132->g_83 p_2132->g_727 p_2132->g_57 p_2132->g_108 p_2132->g_770 p_2132->g_772
 */
int32_t  func_12(uint32_t  p_13, struct S0 * p_2132)
{ /* block id: 346 */
    uint32_t *l_683 = (void*)0;
    int16_t l_697 = 0x58FCL;
    uint32_t l_698 = 0x115A6EDAL;
    uint32_t l_702 = 0UL;
    int8_t *l_725 = (void*)0;
    int32_t l_759 = 0x06C053D3L;
    uint64_t ***l_766 = (void*)0;
    uint64_t *l_769 = &p_2132->g_112;
    uint64_t **l_768 = &l_769;
    uint64_t ***l_767[10][3][1];
    int8_t **l_776 = &l_725;
    int8_t ***l_775 = &l_776;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_767[i][j][k] = &l_768;
        }
    }
lbl_779:
    for (p_2132->g_114 = (-16); (p_2132->g_114 < 11); ++p_2132->g_114)
    { /* block id: 349 */
        int8_t l_680 = (-1L);
        int64_t *l_690 = &p_2132->g_98;
        int32_t l_699 = 1L;
        uint32_t *l_710[10] = {&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698};
        uint32_t *l_718 = &p_2132->g_486;
        int i;
        if (((l_680 | (0x67L < (l_699 ^= (safe_sub_func_int16_t_s_s((l_683 == &p_2132->g_87), (((safe_add_func_int64_t_s_s(((*l_690) = (~(safe_mul_func_int16_t_s_s((**p_2132->g_231), (safe_mul_func_uint16_t_u_u(0UL, l_680)))))), (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_680 || (p_13 > l_697)), p_2132->g_530)), (*p_2132->g_334))), l_698)))) ^ (-1L)) <= p_13)))))) | l_698))
        { /* block id: 352 */
            int32_t l_700 = 0L;
            int32_t l_701[4][10] = {{0x2D324B06L,0x2D324B06L,(-1L),0x654AA559L,0x6138ECCEL,0x654AA559L,(-1L),0x2D324B06L,0x2D324B06L,(-1L)},{0x2D324B06L,0x2D324B06L,(-1L),0x654AA559L,0x6138ECCEL,0x654AA559L,(-1L),0x2D324B06L,0x2D324B06L,(-1L)},{0x2D324B06L,0x2D324B06L,(-1L),0x654AA559L,0x6138ECCEL,0x654AA559L,(-1L),0x2D324B06L,0x2D324B06L,(-1L)},{0x2D324B06L,0x2D324B06L,(-1L),0x654AA559L,0x6138ECCEL,0x654AA559L,(-1L),0x2D324B06L,0x2D324B06L,(-1L)}};
            int i, j;
            l_701[3][1] ^= l_700;
            if (l_702)
                continue;
        }
        else
        { /* block id: 355 */
            uint64_t l_703 = 0xE9AC5E12D76FD2AEL;
            int8_t *l_733 = &p_2132->g_467;
            int8_t *l_735 = &l_680;
            int8_t *l_738[3];
            uint32_t *l_756 = &p_2132->g_486;
            int32_t l_758[9][8] = {{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L},{(-1L),0x2A3ACDDDL,0x0D3F4334L,0x2A3ACDDDL,(-1L),(-1L),0x2A3ACDDDL,0x0D3F4334L}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_738[i] = (void*)0;
            for (l_702 = 0; (l_702 <= 1); l_702 += 1)
            { /* block id: 358 */
                uint64_t *l_711 = &p_2132->g_712[0][0];
                uint32_t *l_715[6];
                int32_t l_721 = (-6L);
                int32_t *l_722 = &p_2132->g_83;
                uint64_t l_732 = 0xC03C51AB490ACABAL;
                int8_t **l_734 = &l_733;
                int i;
                for (i = 0; i < 6; i++)
                    l_715[i] = &l_698;
                ++l_703;
                (*p_2132->g_726) = (safe_sub_func_uint8_t_u_u(248UL, (safe_mul_func_uint8_t_u_u((((l_710[1] != ((+(++(*l_711))) , l_715[2])) , (4294967288UL ^ ((*l_722) |= (!(l_697 != (safe_sub_func_int32_t_s_s((l_718 == l_683), (safe_rshift_func_uint8_t_u_u(l_721, 5))))))))) ^ ((((safe_mul_func_uint16_t_u_u(((void*)0 != l_725), (**p_2132->g_231))) && p_13) != 0x0CAB9063816DF77BL) , 0x31EEC65F8752F9FDL)), 1UL))));
                if ((((safe_add_func_int16_t_s_s(((p_2132->g_57[5] <= (1UL | (safe_rshift_func_int8_t_s_u(((l_735 = (l_732 , ((*l_734) = l_733))) != ((((safe_rshift_func_int16_t_s_s((-10L), 6)) >= 0x2FF69B1D2CE9985AL) < p_13) , l_738[0])), 4)))) < ((((*p_2132->g_556) , 8L) | 0x00C99C4FL) != l_699)), p_13)) < p_13) <= p_13))
                { /* block id: 365 */
                    uint8_t *l_739 = &p_2132->g_57[7];
                    int32_t l_757 = 0x6FE38C43L;
                    l_699 &= ((l_680 != ((++(*l_739)) <= p_13)) <= ((!((*l_722) = (safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((l_758[6][0] |= ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(l_703, 1)) & (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((+(safe_sub_func_int32_t_s_s(l_680, (p_13 >= (((~(l_697 <= (l_703 & ((l_756 == l_722) < l_757)))) , 0x0888F75CL) > p_13))))), p_13)), (*p_2132->g_556)))) , 0x035DL), p_13)) != p_13)) && 0x2EL), l_757)), 0xF9417E59EF2697D9L)))) > 0x007E4497L));
                    return l_757;
                }
                else
                { /* block id: 371 */
                    return p_2132->g_2;
                }
            }
        }
        l_759 |= ((*p_2132->g_436) = 5L);
        (*p_2132->g_220) = &l_759;
    }
    l_759 &= (p_13 && (l_702 > ((safe_add_func_uint64_t_u_u(l_697, (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((p_2132->g_772 = (p_2132->g_770[1][1][2] = (void*)0)) != &p_2132->g_771), (safe_sub_func_uint16_t_u_u((((*l_775) = &l_725) != p_2132->g_777), 4UL)))) == 0x30L), 2)))) == p_13)));
    if (p_2132->g_83)
        goto lbl_779;
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_556 p_2132->g_532 p_2132->g_436 p_2132->g_83
 * writes: p_2132->g_532 p_2132->g_83
 */
int8_t  func_18(int32_t  p_19, int32_t * p_20, int32_t * p_21, int8_t  p_22, int32_t * p_23, struct S0 * p_2132)
{ /* block id: 342 */
    uint32_t *l_676 = &p_2132->g_486;
    int32_t l_677 = 3L;
    (*p_2132->g_436) &= ((p_19 , p_21) == ((--(*p_2132->g_556)) , l_676));
    return l_677;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_24(uint32_t  p_25, int32_t * p_26, int32_t * p_27, struct S0 * p_2132)
{ /* block id: 340 */
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_2 p_2132->g_57 p_2132->g_87 p_2132->g_83 p_2132->g_100 p_2132->g_98 p_2132->g_99 p_2132->g_114 p_2132->g_108 p_2132->g_428 p_2132->g_436 p_2132->g_325 p_2132->g_252 p_2132->g_364 p_2132->g_365 p_2132->g_112 p_2132->g_231 p_2132->g_232 p_2132->g_220 p_2132->g_473 p_2132->g_334 p_2132->g_117 p_2132->g_127 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_279 p_2132->g_560 p_2132->g_556 p_2132->g_527 p_2132->g_419 p_2132->g_622 p_2132->g_636 p_2132->g_660
 * writes: p_2132->g_57 p_2132->g_65 p_2132->g_87 p_2132->g_98 p_2132->g_99 p_2132->g_83 p_2132->g_107 p_2132->g_112 p_2132->g_117 p_2132->g_100 p_2132->g_428 p_2132->g_467 p_2132->g_469 p_2132->g_114 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_252 p_2132->g_556 p_2132->g_127 p_2132->g_108 p_2132->g_473 p_2132->g_636
 */
uint32_t  func_28(int32_t  p_29, int8_t  p_30, int64_t  p_31, int32_t * p_32, struct S0 * p_2132)
{ /* block id: 9 */
    uint16_t l_41 = 0xC86FL;
    int32_t l_671 = 0x2C92C412L;
    l_671 = func_37(p_31, l_41, &p_2132->g_2, p_2132);
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_2 p_2132->g_57 p_2132->g_87 p_2132->g_83 p_2132->g_100 p_2132->g_98 p_2132->g_99 p_2132->g_114 p_2132->g_108 p_2132->g_428 p_2132->g_436 p_2132->g_325 p_2132->g_252 p_2132->g_364 p_2132->g_365 p_2132->g_112 p_2132->g_231 p_2132->g_232 p_2132->g_220 p_2132->g_473 p_2132->g_334 p_2132->g_117 p_2132->g_127 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_279 p_2132->g_560 p_2132->g_556 p_2132->g_527 p_2132->g_419 p_2132->g_622 p_2132->g_636 p_2132->g_660
 * writes: p_2132->g_57 p_2132->g_65 p_2132->g_87 p_2132->g_98 p_2132->g_99 p_2132->g_83 p_2132->g_107 p_2132->g_112 p_2132->g_117 p_2132->g_100 p_2132->g_428 p_2132->g_467 p_2132->g_469 p_2132->g_114 p_2132->g_486 p_2132->g_503 p_2132->g_502 p_2132->g_532 p_2132->g_536 p_2132->g_252 p_2132->g_556 p_2132->g_127 p_2132->g_108 p_2132->g_473 p_2132->g_636
 */
int32_t  func_37(int8_t  p_38, uint32_t  p_39, int32_t * p_40, struct S0 * p_2132)
{ /* block id: 10 */
    uint64_t l_44[8] = {0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL,0x0A7FCC65AD6CAD8EL};
    int32_t l_128 = 0x7C704608L;
    uint8_t *l_176 = (void*)0;
    int16_t l_192 = (-7L);
    int32_t l_203 = (-1L);
    int8_t l_277 = 0x21L;
    uint64_t *l_363 = &p_2132->g_112;
    uint64_t **l_362 = &l_363;
    uint16_t l_396 = 0x3D71L;
    int32_t l_425 = 0x26A61680L;
    int32_t l_426 = 0x3EECD8A6L;
    int32_t l_427 = 0x1C0C6047L;
    int32_t l_433 = 0x6C6D9930L;
    int16_t l_442 = 5L;
    int16_t l_496 = 8L;
    uint32_t l_506 = 0xD3E01734L;
    uint32_t l_521 = 4UL;
    int16_t l_535 = 0x0CF0L;
    uint16_t l_559 = 65535UL;
    uint64_t l_621 = 0x1133F69EDDB6210EL;
    int64_t *l_668 = &p_2132->g_530;
    int i;
lbl_541:
    if (func_42(l_44[1], p_2132))
    { /* block id: 34 */
        int16_t *l_125 = &p_2132->g_114;
        int16_t *l_126 = &p_2132->g_127;
        int32_t l_140 = (-1L);
        uint16_t l_180 = 0xF5F6L;
        int32_t **l_217[10] = {&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108,&p_2132->g_108};
        uint32_t l_289 = 0xBBB9A0ADL;
        uint16_t *l_326[3][3] = {{&l_180,&l_180,&l_180},{&l_180,&l_180,&l_180},{&l_180,&l_180,&l_180}};
        uint32_t l_332 = 0x7B79485CL;
        uint16_t *l_333 = (void*)0;
        int32_t l_335 = 0x0657B3D8L;
        int32_t l_400 = (-7L);
        int i, j;
        for (p_2132->g_100 = (-15); (p_2132->g_100 == 53); p_2132->g_100 = safe_add_func_int8_t_s_s(p_2132->g_100, 1))
        { /* block id: 37 */
            int32_t *l_120 = &p_2132->g_83;
            (*l_120) = 1L;
        }
    }
    else
    { /* block id: 204 */
        int64_t l_421 = (-7L);
        int32_t *l_422 = &l_128;
        int32_t *l_423 = &p_2132->g_83;
        int32_t *l_424[9] = {&l_128,&l_128,&l_128,&l_128,&l_128,&l_128,&l_128,&l_128,&l_128};
        int i;
        --p_2132->g_428;
    }
lbl_639:
    for (p_2132->g_428 = (-7); (p_2132->g_428 == 57); p_2132->g_428 = safe_add_func_uint64_t_u_u(p_2132->g_428, 3))
    { /* block id: 209 */
        int32_t *l_434 = (void*)0;
        int32_t *l_435 = &l_203;
        (*p_2132->g_436) |= ((*l_435) = (l_433 && (8UL && 6L)));
    }
    if ((safe_div_func_uint16_t_u_u((l_426 = (safe_rshift_func_int16_t_s_s((255UL | (&p_2132->g_87 != &p_2132->g_87)), ((safe_unary_minus_func_uint8_t_u(((-2L) && ((((((((l_203 ^= l_442) , (void*)0) != (void*)0) , (safe_lshift_func_int8_t_s_s(0x72L, 6))) < (((p_39 , 250UL) , l_442) >= (*p_2132->g_325))) , 0x21L) != 255UL) == p_38)))) && p_39)))), l_425)))
    { /* block id: 215 */
        int32_t l_447 = (-2L);
        l_447 = (safe_sub_func_int8_t_s_s(p_38, l_447));
        for (l_277 = 6; (l_277 >= 0); l_277 -= 1)
        { /* block id: 219 */
            uint32_t l_454 = 0x49EFBB6DL;
            int16_t *l_465 = &l_442;
            int8_t *l_466 = &p_2132->g_467;
            int8_t *l_468[1];
            int32_t *l_470 = &l_128;
            int64_t *l_495[2][8] = {{&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98},{&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98,&p_2132->g_98}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_468[i] = &p_2132->g_469;
            (*l_470) = (safe_rshift_func_int16_t_s_s(((**p_2132->g_231) = ((safe_sub_func_int64_t_s_s(((p_2132->g_469 = ((*l_466) = ((safe_sub_func_int16_t_s_s(l_454, (safe_mul_func_uint8_t_u_u(((0x5BL > ((safe_mul_func_int16_t_s_s(p_39, ((*l_465) = ((safe_mul_func_uint8_t_u_u(0UL, l_454)) , (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((((void*)0 != l_363) | p_39), (l_465 != l_465))) , 254UL), l_447)))))) != p_38)) >= l_447), l_447)))) || l_44[5]))) , p_2132->g_252[1][2][2]), (**p_2132->g_364))) < l_447)), l_426));
            l_470 = (*p_2132->g_220);
            for (l_427 = 0; (l_427 <= 7); l_427 += 1)
            { /* block id: 228 */
                uint32_t *l_484 = (void*)0;
                uint32_t *l_485[4][10] = {{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486,&p_2132->g_486}};
                int32_t l_487 = (-5L);
                int32_t *l_488 = (void*)0;
                int32_t *l_489 = &l_425;
                int64_t *l_494 = &p_2132->g_98;
                int i, j;
                (*l_489) ^= ((safe_lshift_func_uint16_t_u_u(p_2132->g_473, 0)) & (((safe_div_func_uint8_t_u_u(p_39, l_442)) == ((safe_mul_func_uint8_t_u_u(((((((l_447 , (~(safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((*p_40) == p_2132->g_57[7]) != p_39) == (((safe_rshift_func_int16_t_s_u(0x724DL, 10)) & ((l_128 = (p_2132->g_486 = (l_442 && p_38))) , 0x1F46L)) > (*p_2132->g_334))) >= l_487), (*l_470))), 10)))) != 0x6CD25131L) , 1UL) | p_39) != 0x630AL) , 0x72L), p_39)) != p_2132->g_87)) > p_2132->g_428));
                if (((0x894DB176B55D97A3L | (safe_lshift_func_int8_t_s_s(((*l_466) = ((*l_470) != (**p_2132->g_364))), (+((safe_sub_func_uint8_t_u_u((l_494 == l_495[1][2]), p_2132->g_127)) >= p_38))))) < (l_496 > p_38)))
                { /* block id: 233 */
                    (*l_489) = (*p_40);
                }
                else
                { /* block id: 235 */
                    if ((*p_2132->g_108))
                        break;
                }
                return (*p_40);
            }
        }
    }
    else
    { /* block id: 241 */
        int16_t l_499[4];
        int32_t l_500[10] = {0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L,0x402F0308L};
        uint32_t *l_518[4][3] = {{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486},{&p_2132->g_486,&p_2132->g_486,&p_2132->g_486}};
        int32_t l_564 = 0x01A83B4EL;
        uint64_t l_586 = 18446744073709551615UL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_499[i] = 0x716CL;
        for (p_2132->g_486 = 0; (p_2132->g_486 <= 1); p_2132->g_486 += 1)
        { /* block id: 244 */
            uint16_t l_497[3];
            int32_t *l_498[1][2];
            int64_t l_501 = 0x532F2DA413857A0AL;
            uint8_t *l_515 = &p_2132->g_100;
            uint32_t l_516 = 0x51AAE2FDL;
            uint8_t l_544 = 0x04L;
            int32_t l_577 = 0x21677764L;
            int16_t **l_602 = &p_2132->g_232[0];
            int32_t l_619[4];
            uint64_t **l_626 = &l_363;
            int16_t **l_662 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_497[i] = 0xBAAFL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_498[i][j] = &l_203;
            }
            for (i = 0; i < 4; i++)
                l_619[i] = 4L;
            l_497[0] = (*p_40);
            p_2132->g_503++;
            if (((p_39 || ((((+((5UL || p_2132->g_502) , l_506)) , (safe_mod_func_uint8_t_u_u(((*l_515) = ((((0x46136526L <= 0x75F16081L) & (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0xD2L, l_203)), ((*p_2132->g_334) = (safe_div_func_int64_t_s_s(p_38, l_500[6])))))) != 65529UL) > 0x938AL)), p_2132->g_503))) && 0x13DEL) <= l_500[9])) | 0x3E67121BBA0FB76DL))
            { /* block id: 249 */
                int8_t l_517 = 0x5BL;
                int32_t l_524 = 4L;
                int32_t l_525 = 0x321E6365L;
                l_517 = ((p_39 <= 5L) ^ (0xCB75D938E363BEB9L > l_516));
                for (p_2132->g_502 = 1; (p_2132->g_502 >= 0); p_2132->g_502 -= 1)
                { /* block id: 253 */
                    int16_t l_519 = 0L;
                    int32_t l_520 = 0x6F4BDF6DL;
                    int32_t l_531 = (-1L);
                    if ((l_518[2][0] != &p_2132->g_486))
                    { /* block id: 254 */
                        --l_521;
                    }
                    else
                    { /* block id: 256 */
                        int16_t l_526 = 0L;
                        --p_2132->g_532;
                        if ((*p_40))
                            continue;
                    }
                    for (p_2132->g_428 = 0; (p_2132->g_428 <= 1); p_2132->g_428 += 1)
                    { /* block id: 262 */
                        int i, j, k;
                        --p_2132->g_536[1];
                        l_500[6] &= (safe_rshift_func_uint8_t_u_u(0xE5L, 0));
                        if (p_2132->g_252[p_2132->g_428][(p_2132->g_502 + 2)][(p_2132->g_502 + 2)])
                            break;
                        if (p_2132->g_83)
                            goto lbl_541;
                    }
                }
                if (p_2132->g_2)
                    goto lbl_541;
                if ((safe_add_func_uint64_t_u_u((p_2132->g_279 , (p_2132->g_502 || p_39)), l_544)))
                { /* block id: 270 */
                    int32_t l_545 = 0x757227E6L;
                    if (l_545)
                        break;
                }
                else
                { /* block id: 272 */
                    int32_t l_561 = 0L;
                    int16_t *l_562 = &p_2132->g_127;
                    int64_t *l_563[6][1][4] = {{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}},{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}},{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}},{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}},{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}},{{(void*)0,&p_2132->g_530,&l_501,&p_2132->g_530}}};
                    int i, j, k;
                    l_564 = (((((l_500[6] = (((*l_562) = ((**p_2132->g_231) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*p_2132->g_325) = (*p_2132->g_334)), (safe_rshift_func_uint8_t_u_u((((((65535UL != (l_525 = (((((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((&p_2132->g_419 != (p_2132->g_556 = &p_2132->g_532)) , 1UL), l_524)), (0x481AF050L | (((safe_mul_func_uint64_t_u_u((((((void*)0 == p_40) ^ l_559) , p_38) , p_2132->g_560), 0L)) > l_496) < 8UL)))) <= l_525) , p_38) | (-1L)) && (-6L)))) != l_561) != (-1L)) != p_38) , 0x99L), 2)))), 4)))) | 0x1563L)) ^ l_517) != l_559) ^ 0x497FCE15L) ^ 0x26589205E0FE0EA6L);
                    (*p_2132->g_220) = (void*)0;
                    return (*p_40);
                }
            }
            else
            { /* block id: 283 */
                uint8_t l_567 = 255UL;
                uint64_t l_584 = 0x11C4A2CD4DCAC844L;
                int32_t l_585 = (-1L);
                l_585 = (safe_rshift_func_uint8_t_u_s(((l_567 , p_38) >= (safe_mul_func_int16_t_s_s((65526UL >= ((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(l_564, (((((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(l_577)), ((*p_2132->g_556) & (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(((((*l_515) |= ((-4L) > (p_38 , l_535))) | 0xE7L) || p_39), l_499[0])) , p_39), 2)) >= l_567), 7)) > l_584) == (*p_2132->g_334))))) < l_567) & l_496) , p_2132->g_527) <= l_584) , p_2132->g_536[1]) | p_39))) & 0x60C73ADB481D55B0L) >= p_38), 7)) ^ 1L)), 3L))), 3));
            }
            for (p_2132->g_502 = 0; (p_2132->g_502 <= 1); p_2132->g_502 += 1)
            { /* block id: 289 */
                int32_t l_596 = 1L;
                uint16_t l_618 = 65529UL;
                uint64_t **l_627 = &l_363;
                int32_t l_630 = 0x305737ECL;
                int32_t l_631 = 0L;
                int32_t l_633 = 0x0AA8C461L;
                int32_t l_635 = 0x05D8F5F7L;
                l_586++;
                for (l_586 = 0; (l_586 <= 1); l_586 += 1)
                { /* block id: 293 */
                    int32_t ***l_595 = &p_2132->g_220;
                    int32_t l_628[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_628[i] = 0L;
                    l_500[9] &= (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_39, (-9L))), (safe_sub_func_int16_t_s_s(((void*)0 == l_595), 0x804EL))));
                    for (l_427 = 0; (l_427 <= 1); l_427 += 1)
                    { /* block id: 297 */
                        int i;
                        return p_2132->g_536[p_2132->g_486];
                    }
                    if (l_506)
                        goto lbl_541;
                    for (l_559 = 0; (l_559 <= 1); l_559 += 1)
                    { /* block id: 303 */
                        int8_t l_597 = 0x44L;
                        uint16_t **l_614 = &p_2132->g_334;
                        uint16_t ***l_613 = &l_614;
                        int16_t *l_617 = &p_2132->g_473;
                        int64_t *l_620 = &l_501;
                        int32_t l_623 = (-10L);
                        int32_t l_632 = 0x0F936B92L;
                        int32_t l_634[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int i;
                        l_597 ^= (l_596 ^= (*p_2132->g_436));
                        l_623 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_602 == (void*)0) == (**p_2132->g_364)), 4)), (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((p_39 == 0UL), 0)) == (safe_sub_func_uint8_t_u_u((((p_39 & (((p_2132->g_83 |= (safe_sub_func_int16_t_s_s((!((((*l_620) = ((p_2132->g_428 = (safe_div_func_int8_t_s_s((((*l_613) = &p_2132->g_325) == (void*)0), (safe_add_func_int16_t_s_s(((*l_617) &= ((**l_602) = p_39)), l_618))))) < l_619[0])) && p_2132->g_419) && p_2132->g_127)), l_621))) || (*p_2132->g_556)) ^ p_39)) != p_2132->g_622) >= l_586), 0x50L))) && p_38), 2UL))));
                        l_564 |= ((((p_2132->g_536[1] >= ((**p_2132->g_364)++)) , (***l_595)) , &l_363) == (l_627 = l_626));
                        ++p_2132->g_636;
                    }
                }
                if (l_544)
                    goto lbl_639;
                for (l_621 = 0; (l_621 <= 1); l_621 += 1)
                { /* block id: 322 */
                    int64_t l_661 = 0x303158167C92FA73L;
                    int32_t l_663 = 0x76CB7875L;
                    l_663 = ((safe_sub_func_int8_t_s_s((l_535 ^ (safe_div_func_uint64_t_u_u(((*l_363) &= p_39), 18446744073709551610UL))), (safe_mul_func_uint8_t_u_u(l_500[5], (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((l_500[9] > (-9L)) == (safe_sub_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((p_2132->g_114 > (safe_div_func_int32_t_s_s((p_39 | ((p_38 , (void*)0) == (void*)0)), p_2132->g_660))) >= l_661), (*p_40))), 0x24L)) , (void*)0) == l_662) & 0x34D68487L), 4294967293UL))), 5)), p_2132->g_114)), 1)))))) , (*p_40));
                }
            }
        }
        l_500[6] &= (-1L);
    }
    for (l_277 = 0; (l_277 > (-4)); l_277 = safe_sub_func_int32_t_s_s(l_277, 7))
    { /* block id: 332 */
        int64_t *l_667 = &p_2132->g_622;
        int64_t **l_666 = &l_667;
        int32_t *l_670 = &l_203;
        (*l_670) = (((*l_666) = &p_2132->g_98) != (l_668 = &p_2132->g_622));
    }
    return l_128;
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_2 p_2132->g_57 p_2132->g_87 p_2132->g_83 p_2132->g_100 p_2132->g_98 p_2132->g_99 p_2132->g_114 p_2132->g_108
 * writes: p_2132->g_57 p_2132->g_65 p_2132->g_87 p_2132->g_98 p_2132->g_99 p_2132->g_83 p_2132->g_107 p_2132->g_112 p_2132->g_117
 */
int32_t  func_42(int16_t  p_43, struct S0 * p_2132)
{ /* block id: 11 */
    int8_t l_47 = 0x43L;
    uint8_t *l_56[2];
    int32_t l_58[6] = {0x188A746CL,0x0B13309EL,0x188A746CL,0x188A746CL,0x0B13309EL,0x188A746CL};
    int32_t l_59 = (-1L);
    int32_t *l_63 = &l_58[4];
    int32_t **l_62 = &l_63;
    int32_t *l_64[7] = {&l_58[0],&l_58[4],&l_58[0],&l_58[0],&l_58[4],&l_58[0],&l_58[0]};
    int64_t l_116 = (-7L);
    int i;
    for (i = 0; i < 2; i++)
        l_56[i] = &p_2132->g_57[7];
    p_2132->g_117 = (l_116 = (~((safe_mul_func_uint8_t_u_u(l_47, ((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((p_2132->g_65 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_2132->g_2, 0)), ((!8UL) && (&p_2132->g_2 != ((*l_62) = ((--p_2132->g_57[3]) , (void*)0))))))), func_66((p_43 , (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_2132->g_2, ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(18446744073709551607UL, (p_43 < p_2132->g_2))) || p_43), p_43)) & 5L), p_2132->g_2)) > 0UL))), p_43)), 0x8CL))), p_2132))) , 0x42L), p_43)) || p_2132->g_100))) < 18446744073709551610UL)));
    return (*p_2132->g_108);
}


/* ------------------------------------------ */
/* 
 * reads : p_2132->g_87 p_2132->g_83 p_2132->g_100 p_2132->g_98 p_2132->g_99 p_2132->g_114
 * writes: p_2132->g_87 p_2132->g_98 p_2132->g_99 p_2132->g_83 p_2132->g_107 p_2132->g_112
 */
int32_t  func_66(uint8_t  p_67, struct S0 * p_2132)
{ /* block id: 15 */
    int8_t l_86[2][3][2];
    uint8_t *l_96 = (void*)0;
    int16_t *l_113 = &p_2132->g_114;
    int32_t l_115 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_86[i][j][k] = 0L;
        }
    }
    for (p_67 = 0; (p_67 >= 31); p_67 = safe_add_func_int64_t_s_s(p_67, 2))
    { /* block id: 18 */
        int32_t *l_82 = &p_2132->g_83;
        int32_t *l_84[5][6] = {{&p_2132->g_83,(void*)0,&p_2132->g_2,&p_2132->g_2,&p_2132->g_2,(void*)0},{&p_2132->g_83,(void*)0,&p_2132->g_2,&p_2132->g_2,&p_2132->g_2,(void*)0},{&p_2132->g_83,(void*)0,&p_2132->g_2,&p_2132->g_2,&p_2132->g_2,(void*)0},{&p_2132->g_83,(void*)0,&p_2132->g_2,&p_2132->g_2,&p_2132->g_2,(void*)0},{&p_2132->g_83,(void*)0,&p_2132->g_2,&p_2132->g_2,&p_2132->g_2,(void*)0}};
        int16_t l_85 = 0L;
        int16_t *l_93 = &l_85;
        int64_t *l_97 = &p_2132->g_98;
        int32_t **l_106[6] = {&l_84[0][0],&l_84[0][0],&l_84[0][0],&l_84[0][0],&l_84[0][0],&l_84[0][0]};
        int32_t ***l_105[3][10][8] = {{{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]}},{{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]}},{{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]},{(void*)0,&l_106[0],&l_106[0],&l_106[0],(void*)0,&l_106[0],&l_106[0],&l_106[0]}}};
        uint64_t *l_111 = &p_2132->g_112;
        int i, j, k;
        p_2132->g_87--;
        l_84[0][0] = &p_2132->g_83;
        (*l_82) = (safe_sub_func_int8_t_s_s((((((((*l_93) &= 0L) != (0L <= (p_2132->g_87 == 9UL))) , ((safe_mul_func_int16_t_s_s(((l_96 == (((*l_97) = (p_2132->g_83 , p_67)) , (p_2132->g_99 = &p_67))) , ((safe_mod_func_uint16_t_u_u((p_67 != p_67), p_2132->g_100)) > p_2132->g_98)), (*l_82))) >= p_2132->g_83)) , p_2132->g_98) > p_2132->g_100) , p_2132->g_98), l_86[1][0][0]));
        l_115 &= (((((*l_93) = (safe_add_func_uint16_t_u_u(((0x363893D913691F75L && (+(p_67 == (((p_2132->g_107 = &l_84[0][0]) == (void*)0) , ((((-1L) == p_67) || 0x7BL) && ((safe_rshift_func_int8_t_s_u((((p_2132->g_100 < (((~((((*l_111) = p_2132->g_87) , p_2132->g_83) || l_86[0][0][0])) , p_67) != 4294967295UL)) , l_113) != &p_2132->g_114), (*p_2132->g_99))) <= 0x04BC89C4L)))))) & (-1L)), l_86[1][0][0]))) || 0UL) && 0x729EE1F0013D6AA3L) | p_2132->g_114);
    }
    return l_86[1][1][0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2133;
    struct S0* p_2132 = &c_2133;
    struct S0 c_2134 = {
        0x0F94F378L, // p_2132->g_2
        {255UL,0UL,255UL,255UL,0UL,255UL,255UL,0UL,255UL,255UL}, // p_2132->g_57
        9UL, // p_2132->g_65
        5L, // p_2132->g_83
        0UL, // p_2132->g_87
        (void*)0, // p_2132->g_90
        0x16D7EC95B9239C2BL, // p_2132->g_98
        0UL, // p_2132->g_100
        &p_2132->g_100, // p_2132->g_99
        &p_2132->g_2, // p_2132->g_108
        &p_2132->g_108, // p_2132->g_107
        0xD4C7A7D0CF22777CL, // p_2132->g_112
        (-8L), // p_2132->g_114
        65531UL, // p_2132->g_117
        (-2L), // p_2132->g_127
        &p_2132->g_108, // p_2132->g_220
        {&p_2132->g_114,&p_2132->g_114}, // p_2132->g_232
        &p_2132->g_232[0], // p_2132->g_231
        {{{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L}},{{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L},{0x680EL,0x5454L,0xFA01L,65533UL,0xFA01L}}}, // p_2132->g_252
        0UL, // p_2132->g_279
        &p_2132->g_252[0][8][1], // p_2132->g_325
        &p_2132->g_117, // p_2132->g_334
        {&p_2132->g_112,&p_2132->g_112,&p_2132->g_112,&p_2132->g_112}, // p_2132->g_365
        &p_2132->g_365[1], // p_2132->g_364
        4294967288UL, // p_2132->g_419
        0x5004E339473622A3L, // p_2132->g_428
        &p_2132->g_83, // p_2132->g_436
        0x7EL, // p_2132->g_467
        (-9L), // p_2132->g_469
        0L, // p_2132->g_473
        0UL, // p_2132->g_486
        0x425DBC12L, // p_2132->g_502
        0xCFL, // p_2132->g_503
        (-1L), // p_2132->g_527
        0x2920CA4CL, // p_2132->g_528
        3L, // p_2132->g_529
        (-8L), // p_2132->g_530
        0x6B791054L, // p_2132->g_532
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_2132->g_536
        &p_2132->g_532, // p_2132->g_556
        0x98C7L, // p_2132->g_560
        0L, // p_2132->g_622
        0L, // p_2132->g_629
        0x42L, // p_2132->g_636
        0xBD84AA08C3FE3253L, // p_2132->g_660
        (void*)0, // p_2132->g_669
        {{0UL,1UL,0UL},{0UL,1UL,0UL},{0UL,1UL,0UL}}, // p_2132->g_712
        0x33770788L, // p_2132->g_727
        &p_2132->g_727, // p_2132->g_726
        (void*)0, // p_2132->g_771
        {{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}},{{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771},{&p_2132->g_771,&p_2132->g_771,&p_2132->g_771,&p_2132->g_771}}}, // p_2132->g_770
        &p_2132->g_771, // p_2132->g_772
        &p_2132->g_469, // p_2132->g_778
        &p_2132->g_778, // p_2132->g_777
        2L, // p_2132->g_780
        0x12BA8069L, // p_2132->g_826
        1UL, // p_2132->g_830
        0x8625L, // p_2132->g_1148
        {0xD657576E5C96DF8AL,0xD657576E5C96DF8AL,0xD657576E5C96DF8AL,0xD657576E5C96DF8AL}, // p_2132->g_1150
        0x500AL, // p_2132->g_1184
        {0x56A45163L,0x56A45163L,0x56A45163L,0x56A45163L,0x56A45163L}, // p_2132->g_1185
        &p_2132->g_231, // p_2132->g_1265
        {0x8BAEB833C69B6E0EL}, // p_2132->g_1464
        0x32L, // p_2132->g_1491
        (void*)0, // p_2132->g_1511
        &p_2132->g_486, // p_2132->g_1518
        &p_2132->g_1518, // p_2132->g_1517
        {{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}},{{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L},{0x0F16L,0x583EL,0L,0x4D91L,0x3F44L}}}, // p_2132->g_1545
        {8L,8L,8L}, // p_2132->g_1586
        (void*)0, // p_2132->g_1629
        (void*)0, // p_2132->g_1631
        &p_2132->g_1631, // p_2132->g_1630
        &p_2132->g_826, // p_2132->g_1636
        {&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636,&p_2132->g_1636}, // p_2132->g_1635
        0x13L, // p_2132->g_1640
        &p_2132->g_1517, // p_2132->g_1685
        (void*)0, // p_2132->g_1707
        (-1L), // p_2132->g_1735
        &p_2132->g_1735, // p_2132->g_1734
        &p_2132->g_1734, // p_2132->g_1733
        0xC87A15D0BFADDBF1L, // p_2132->g_1876
        (void*)0, // p_2132->g_1879
        0x8E4289E0L, // p_2132->g_1883
        &p_2132->g_1883, // p_2132->g_1882
        &p_2132->g_1882, // p_2132->g_1881
        1UL, // p_2132->g_1891
        0x42L, // p_2132->g_1912
        0x78L, // p_2132->g_1913
        {{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325},{&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325,&p_2132->g_325}}, // p_2132->g_2078
        &p_2132->g_2078[5][3], // p_2132->g_2077
        0L, // p_2132->g_2130
    };
    c_2133 = c_2134;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2132);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2132->g_2, "p_2132->g_2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2132->g_57[i], "p_2132->g_57[i]", print_hash_value);

    }
    transparent_crc(p_2132->g_65, "p_2132->g_65", print_hash_value);
    transparent_crc(p_2132->g_83, "p_2132->g_83", print_hash_value);
    transparent_crc(p_2132->g_87, "p_2132->g_87", print_hash_value);
    transparent_crc(p_2132->g_98, "p_2132->g_98", print_hash_value);
    transparent_crc(p_2132->g_100, "p_2132->g_100", print_hash_value);
    transparent_crc(p_2132->g_112, "p_2132->g_112", print_hash_value);
    transparent_crc(p_2132->g_114, "p_2132->g_114", print_hash_value);
    transparent_crc(p_2132->g_117, "p_2132->g_117", print_hash_value);
    transparent_crc(p_2132->g_127, "p_2132->g_127", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2132->g_252[i][j][k], "p_2132->g_252[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2132->g_279, "p_2132->g_279", print_hash_value);
    transparent_crc(p_2132->g_419, "p_2132->g_419", print_hash_value);
    transparent_crc(p_2132->g_428, "p_2132->g_428", print_hash_value);
    transparent_crc(p_2132->g_467, "p_2132->g_467", print_hash_value);
    transparent_crc(p_2132->g_469, "p_2132->g_469", print_hash_value);
    transparent_crc(p_2132->g_473, "p_2132->g_473", print_hash_value);
    transparent_crc(p_2132->g_486, "p_2132->g_486", print_hash_value);
    transparent_crc(p_2132->g_502, "p_2132->g_502", print_hash_value);
    transparent_crc(p_2132->g_503, "p_2132->g_503", print_hash_value);
    transparent_crc(p_2132->g_527, "p_2132->g_527", print_hash_value);
    transparent_crc(p_2132->g_528, "p_2132->g_528", print_hash_value);
    transparent_crc(p_2132->g_529, "p_2132->g_529", print_hash_value);
    transparent_crc(p_2132->g_530, "p_2132->g_530", print_hash_value);
    transparent_crc(p_2132->g_532, "p_2132->g_532", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2132->g_536[i], "p_2132->g_536[i]", print_hash_value);

    }
    transparent_crc(p_2132->g_560, "p_2132->g_560", print_hash_value);
    transparent_crc(p_2132->g_622, "p_2132->g_622", print_hash_value);
    transparent_crc(p_2132->g_629, "p_2132->g_629", print_hash_value);
    transparent_crc(p_2132->g_636, "p_2132->g_636", print_hash_value);
    transparent_crc(p_2132->g_660, "p_2132->g_660", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2132->g_712[i][j], "p_2132->g_712[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2132->g_727, "p_2132->g_727", print_hash_value);
    transparent_crc(p_2132->g_780, "p_2132->g_780", print_hash_value);
    transparent_crc(p_2132->g_826, "p_2132->g_826", print_hash_value);
    transparent_crc(p_2132->g_830, "p_2132->g_830", print_hash_value);
    transparent_crc(p_2132->g_1148, "p_2132->g_1148", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2132->g_1150[i], "p_2132->g_1150[i]", print_hash_value);

    }
    transparent_crc(p_2132->g_1184, "p_2132->g_1184", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2132->g_1185[i], "p_2132->g_1185[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2132->g_1464[i], "p_2132->g_1464[i]", print_hash_value);

    }
    transparent_crc(p_2132->g_1491, "p_2132->g_1491", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2132->g_1545[i][j][k], "p_2132->g_1545[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2132->g_1586[i], "p_2132->g_1586[i]", print_hash_value);

    }
    transparent_crc(p_2132->g_1640, "p_2132->g_1640", print_hash_value);
    transparent_crc(p_2132->g_1735, "p_2132->g_1735", print_hash_value);
    transparent_crc(p_2132->g_1876, "p_2132->g_1876", print_hash_value);
    transparent_crc(p_2132->g_1883, "p_2132->g_1883", print_hash_value);
    transparent_crc(p_2132->g_1891, "p_2132->g_1891", print_hash_value);
    transparent_crc(p_2132->g_1912, "p_2132->g_1912", print_hash_value);
    transparent_crc(p_2132->g_1913, "p_2132->g_1913", print_hash_value);
    transparent_crc(p_2132->g_2130, "p_2132->g_2130", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
