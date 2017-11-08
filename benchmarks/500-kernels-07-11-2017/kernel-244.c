// -g 44,13,11 -l 4,1,1
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


// Seed: 4070928535

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   volatile int64_t  f2;
   volatile uint16_t  f3;
   uint32_t  f4;
   int32_t  f5;
   int16_t  f6;
};

struct S1 {
    int16_t g_20;
    uint64_t g_26;
    uint64_t g_39;
    uint64_t *g_38;
    int32_t g_43;
    int8_t g_62;
    uint64_t *g_64[10][2][10];
    uint64_t **g_63;
    int64_t g_86;
    int32_t g_102;
    volatile int16_t g_105;
    int64_t *g_110;
    int64_t * volatile * volatile g_109;
    int64_t * volatile * volatile * volatile g_111;
    uint32_t g_132;
    uint64_t g_135;
    uint16_t g_138;
    struct S0 g_139;
    struct S0 g_140[8][3];
    int32_t *g_143;
    struct S0 g_221;
    struct S0 g_256;
    struct S0 * volatile g_257;
    struct S0 g_293;
    volatile uint8_t g_301;
    struct S0 g_324;
    volatile int32_t g_336;
    volatile int32_t g_337[8][1];
    int32_t ** volatile g_357;
    uint32_t g_396;
    uint16_t g_451;
    uint16_t g_453;
    uint16_t g_456;
    struct S0 *g_460;
    struct S0 ** volatile g_459[2];
    volatile int32_t * volatile g_466;
    volatile int32_t * volatile * volatile g_467;
    int32_t ** volatile g_470;
    int32_t ** volatile g_500[2];
    volatile int8_t g_551;
    volatile int8_t *g_550;
    volatile int8_t **g_549;
    uint16_t *g_605;
    uint16_t **g_604;
    int32_t * volatile g_634;
    volatile struct S0 g_644[7];
    int8_t *g_654;
    int32_t *g_656;
    int32_t * volatile * volatile g_655;
    int32_t * volatile * volatile g_742[1];
    int32_t * volatile * volatile *g_741;
    int32_t * volatile * volatile **g_740;
    int32_t **g_766;
    int32_t ***g_765;
    uint64_t *g_837;
    uint64_t **g_836[6][10];
    uint64_t *** volatile g_835;
    uint8_t g_862[4][8];
    struct S0 g_890;
    struct S0 g_915;
    volatile struct S0 g_976;
    struct S0 g_989;
    uint64_t ***g_996;
    uint64_t ****g_995;
    struct S0 g_1029;
    volatile struct S0 g_1082[6];
    int8_t g_1138[6][2];
    struct S0 g_1154;
    volatile int8_t g_1161;
    uint16_t g_1181;
    volatile int32_t g_1209;
    volatile struct S0 g_1230;
    int16_t *g_1265[9];
    int16_t * volatile *g_1264;
    uint64_t g_1276;
    uint32_t g_1358;
    uint32_t g_1418;
    struct S0 g_1429;
    volatile struct S0 g_1459;
    struct S0 g_1471;
    struct S0 g_1500;
    struct S0 * volatile g_1501;
    struct S0 g_1503;
    struct S0 g_1504[8];
    uint32_t g_1552;
    volatile struct S0 g_1553;
    struct S0 g_1574[2];
    struct S0 g_1582;
    int8_t g_1623;
    volatile uint8_t g_1627;
    uint32_t g_1630;
    int32_t g_1658;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_1659);
uint8_t  func_4(uint64_t  p_5, int32_t  p_6, int32_t  p_7, uint64_t  p_8, int32_t  p_9, struct S1 * p_1659);
int16_t  func_11(uint32_t  p_12, int32_t  p_13, int64_t  p_14, int64_t  p_15, int32_t  p_16, struct S1 * p_1659);
int32_t  func_21(uint16_t  p_22, uint64_t  p_23, uint32_t  p_24, struct S1 * p_1659);
uint16_t  func_29(uint64_t * p_30, int32_t  p_31, struct S1 * p_1659);
uint64_t * func_32(uint64_t * p_33, uint64_t * p_34, int32_t  p_35, uint64_t * p_36, int8_t  p_37, struct S1 * p_1659);
int8_t  func_44(uint64_t  p_45, uint64_t * p_46, uint64_t * p_47, int32_t * p_48, struct S1 * p_1659);
uint16_t  func_51(int32_t * p_52, struct S1 * p_1659);
int32_t * func_56(int8_t  p_57, uint64_t ** p_58, uint64_t  p_59, uint64_t * p_60, struct S1 * p_1659);
int32_t  func_66(int8_t * p_67, uint64_t * p_68, int32_t  p_69, int8_t * p_70, struct S1 * p_1659);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1659->g_20 p_1659->g_26 p_1659->g_38 p_1659->g_39 p_1659->g_43 p_1659->g_62 p_1659->g_63 p_1659->g_64 p_1659->g_86 p_1659->g_138 p_1659->g_132 p_1659->g_102 p_1659->g_357 p_1659->g_143 p_1659->g_396 p_1659->g_453 p_1659->g_456 p_1659->g_293.f2 p_1659->g_139.f1 p_1659->g_324.f3 p_1659->g_337 p_1659->g_466 p_1659->g_467 p_1659->g_470 p_1659->g_324.f2 p_1659->g_324.f4 p_1659->g_140.f0 p_1659->g_324.f5 p_1659->g_221.f6 p_1659->g_139.f5 p_1659->g_256.f4 p_1659->g_549 p_1659->g_550 p_1659->g_551 p_1659->g_110 p_1659->g_111 p_1659->g_109 p_1659->g_293.f4 p_1659->g_293.f1 p_1659->g_604 p_1659->g_605 p_1659->g_451 p_1659->g_293.f5 p_1659->g_221.f0 p_1659->g_634 p_1659->g_256.f6 p_1659->g_644 p_1659->g_655 p_1659->g_221.f1 p_1659->g_256.f0 p_1659->g_256.f1 p_1659->g_654 p_1659->g_740 p_1659->g_140.f5 p_1659->g_741 p_1659->g_742 p_1659->g_324.f0 p_1659->g_293.f0 p_1659->g_835 p_1659->g_139.f6 p_1659->g_257 p_1659->g_139 p_1659->g_890 p_1659->g_460 p_1659->g_140.f4 p_1659->g_221.f5 p_1659->g_862 p_1659->g_915 p_1659->g_656 p_1659->g_140.f2 p_1659->g_976 p_1659->g_324 p_1659->g_221.f4 p_1659->g_256.f5 p_1659->g_1082.f0 p_1659->g_1264 p_1659->g_1276 p_1659->g_301 p_1659->g_1265 p_1659->g_1154.f6 p_1659->g_1154.f4 p_1659->g_293.f6 p_1659->g_989.f5 p_1659->g_1358 p_1659->g_1230.f0 p_1659->g_1029.f1 p_1659->g_1429 p_1659->g_1459 p_1659->g_1471 p_1659->g_1500 p_1659->g_1503 p_1659->g_1418 p_1659->g_1552 p_1659->g_1553 p_1659->g_1574 p_1659->g_1582 p_1659->g_1154.f1 p_1659->g_989.f1 p_1659->g_1627 p_1659->g_1630 p_1659->g_1029.f4 p_1659->g_1658
 * writes: p_1659->g_26 p_1659->g_43 p_1659->g_38 p_1659->g_62 p_1659->g_86 p_1659->g_138 p_1659->g_256.f1 p_1659->g_396 p_1659->g_221.f6 p_1659->g_102 p_1659->g_451 p_1659->g_453 p_1659->g_337 p_1659->g_132 p_1659->g_466 p_1659->g_143 p_1659->g_456 p_1659->g_140.f0 p_1659->g_140.f6 p_1659->g_139.f5 p_1659->g_140.f1 p_1659->g_293.f1 p_1659->g_654 p_1659->g_221.f1 p_1659->g_656 p_1659->g_64 p_1659->g_221.f0 p_1659->g_765 p_1659->g_836 p_1659->g_862 p_1659->g_256.f0 p_1659->g_324.f4 p_1659->g_324 p_1659->g_139.f1 p_1659->g_915 p_1659->g_139.f4 p_1659->g_460 p_1659->g_989.f5 p_1659->g_995 p_1659->g_221.f4 p_1659->g_1154.f1 p_1659->g_1154.f6 p_1659->g_293.f6 p_1659->g_1138 p_1659->g_256.f6 p_1659->g_1029.f1 p_1659->g_1418 p_1659->g_605 p_1659->g_139 p_1659->g_1504 p_1659->g_1552 p_1659->g_1574 p_1659->g_989.f1 p_1659->g_1627 p_1659->g_1630 p_1659->g_1658
 */
uint32_t  func_1(struct S1 * p_1659)
{ /* block id: 4 */
    int16_t l_10 = 0x237BL;
    uint64_t *l_25 = &p_1659->g_26;
    int32_t l_1631 = (-5L);
    uint32_t *l_1656 = (void*)0;
    uint32_t *l_1657 = &p_1659->g_132;
    p_1659->g_1658 ^= ((((safe_lshift_func_uint16_t_u_s((((*l_1657) = (func_4(l_10, l_10, (((**p_1659->g_1264) = func_11((((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((p_1659->g_20 < (~p_1659->g_20)), ((p_1659->g_20 == (l_1631 = func_21(l_10, ((*l_25)++), ((p_1659->g_20 , l_10) || (func_29(func_32(p_1659->g_38, l_25, p_1659->g_39, &p_1659->g_39, p_1659->g_39, p_1659), p_1659->g_39, p_1659) == l_10)), p_1659))) >= p_1659->g_1029.f4))))) | 253UL) != 0x1507A717L), l_10, l_10, l_10, l_10, p_1659)) & l_10), l_10, l_10, p_1659) ^ l_10)) ^ l_10), l_10)) | 0x6AL) ^ p_1659->g_221.f5) != l_10);
    return p_1659->g_1500.f5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_4(uint64_t  p_5, int32_t  p_6, int32_t  p_7, uint64_t  p_8, int32_t  p_9, struct S1 * p_1659)
{ /* block id: 786 */
    int32_t *l_1648 = (void*)0;
    int32_t *l_1649 = &p_1659->g_102;
    int32_t *l_1650 = &p_1659->g_102;
    int32_t l_1651 = 0x744964E2L;
    int32_t *l_1652[6] = {&p_1659->g_43,(void*)0,&p_1659->g_43,&p_1659->g_43,(void*)0,&p_1659->g_43};
    uint32_t l_1653 = 0x466A5B34L;
    int i;
    l_1653--;
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_1630 p_1659->g_111 p_1659->g_109 p_1659->g_110 p_1659->g_654 p_1659->g_62 p_1659->g_43
 * writes: p_1659->g_1630 p_1659->g_43
 */
int16_t  func_11(uint32_t  p_12, int32_t  p_13, int64_t  p_14, int64_t  p_15, int32_t  p_16, struct S1 * p_1659)
{ /* block id: 777 */
    int32_t l_1646[10][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
    int i, j;
    for (p_1659->g_1630 = 14; (p_1659->g_1630 == 47); p_1659->g_1630++)
    { /* block id: 780 */
        uint8_t l_1636[5] = {0x23L,0x23L,0x23L,0x23L,0x23L};
        uint64_t *l_1637 = &p_1659->g_1504[0].f0;
        uint8_t *l_1640 = (void*)0;
        uint8_t *l_1641 = &p_1659->g_1503.f1;
        int32_t *l_1647 = &p_1659->g_43;
        int i;
        (*l_1647) ^= (safe_lshift_func_int8_t_s_u(((((l_1636[4] , (**p_1659->g_111)) == l_1637) || (*p_1659->g_654)) , 0x2DL), p_16));
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_102 p_1659->g_915.f0 p_1659->g_976.f0 p_1659->g_604 p_1659->g_605 p_1659->g_451 p_1659->g_256.f5 p_1659->g_1082.f0 p_1659->g_256.f1 p_1659->g_1264 p_1659->g_221.f4 p_1659->g_467 p_1659->g_466 p_1659->g_1276 p_1659->g_301 p_1659->g_110 p_1659->g_1265 p_1659->g_1154.f6 p_1659->g_221.f6 p_1659->g_740 p_1659->g_741 p_1659->g_742 p_1659->g_143 p_1659->g_1154.f4 p_1659->g_86 p_1659->g_324.f5 p_1659->g_109 p_1659->g_549 p_1659->g_550 p_1659->g_551 p_1659->g_654 p_1659->g_989.f5 p_1659->g_221.f1 p_1659->g_62 p_1659->g_634 p_1659->g_43 p_1659->g_1358 p_1659->g_256.f6 p_1659->g_1230.f0 p_1659->g_1029.f1 p_1659->g_1429 p_1659->g_293.f1 p_1659->g_132 p_1659->g_1459 p_1659->g_460 p_1659->g_915 p_1659->g_324 p_1659->g_1471 p_1659->g_862 p_1659->g_1500 p_1659->g_257 p_1659->g_1503 p_1659->g_337 p_1659->g_453 p_1659->g_293.f6 p_1659->g_1418 p_1659->g_1552 p_1659->g_1553 p_1659->g_1574 p_1659->g_1582 p_1659->g_1154.f1 p_1659->g_111 p_1659->g_989.f1 p_1659->g_1627 p_1659->g_1630
 * writes: p_1659->g_102 p_1659->g_451 p_1659->g_221.f4 p_1659->g_337 p_1659->g_1154.f1 p_1659->g_915.f5 p_1659->g_86 p_1659->g_221.f1 p_1659->g_1154.f6 p_1659->g_221.f6 p_1659->g_143 p_1659->g_293.f6 p_1659->g_62 p_1659->g_1138 p_1659->g_43 p_1659->g_256.f6 p_1659->g_1029.f1 p_1659->g_1418 p_1659->g_605 p_1659->g_293.f1 p_1659->g_132 p_1659->g_915 p_1659->g_324 p_1659->g_139 p_1659->g_1504 p_1659->g_453 p_1659->g_1552 p_1659->g_1574 p_1659->g_989.f1 p_1659->g_1627
 */
int32_t  func_21(uint16_t  p_22, uint64_t  p_23, uint32_t  p_24, struct S1 * p_1659)
{ /* block id: 585 */
    int64_t **l_1255 = (void*)0;
    int64_t ***l_1254 = &l_1255;
    int32_t l_1258 = (-1L);
    int32_t *l_1274 = &l_1258;
    uint32_t l_1275[4];
    uint64_t ****l_1313 = &p_1659->g_996;
    uint16_t *l_1377 = &p_1659->g_453;
    int32_t l_1404 = 0x1195FE37L;
    int32_t l_1536 = (-9L);
    int32_t l_1539 = 1L;
    int32_t l_1541 = (-3L);
    int8_t l_1568 = 0x61L;
    uint16_t l_1607 = 8UL;
    uint64_t *l_1608 = &p_1659->g_1471.f0;
    uint64_t *l_1611 = &p_1659->g_139.f0;
    int32_t *l_1616 = &p_1659->g_102;
    int32_t *l_1617 = &p_1659->g_102;
    int32_t *l_1618 = &l_1536;
    int32_t *l_1619[2];
    int64_t l_1620 = (-1L);
    int32_t l_1621 = 0x46B7E6CCL;
    int32_t l_1622 = 1L;
    uint64_t l_1624 = 0UL;
    int i;
    for (i = 0; i < 4; i++)
        l_1275[i] = 0x2B008691L;
    for (i = 0; i < 2; i++)
        l_1619[i] = &l_1541;
    for (p_1659->g_102 = 0; (p_1659->g_102 <= 3); p_1659->g_102 += 1)
    { /* block id: 588 */
        uint16_t *l_1250 = (void*)0;
        int32_t l_1251 = 0x30157806L;
        uint32_t *l_1277 = &p_1659->g_890.f4;
        int32_t l_1294 = 0x1B8896C4L;
        if ((safe_mul_func_int16_t_s_s((((void*)0 == l_1250) , p_1659->g_915.f0), (l_1251 < (((((((safe_sub_func_int16_t_s_s(((l_1254 = l_1254) == (p_1659->g_976.f0 , &p_1659->g_109)), ((**p_1659->g_604) ^= (1UL && ((safe_add_func_int8_t_s_s(0x6EL, l_1258)) != p_23))))) == l_1251) ^ 7UL) > 0xFE349F6854ED98A8L) , (void*)0) != (void*)0) >= l_1251)))))
        { /* block id: 591 */
            int16_t l_1263 = (-2L);
            int64_t l_1268[9] = {0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL,0x336AE820EAB3520EL};
            int64_t ***l_1269 = &l_1255;
            uint32_t *l_1270[9][9][3] = {{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}},{{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4},{&p_1659->g_989.f4,(void*)0,&p_1659->g_1154.f4}}};
            int32_t **l_1271 = (void*)0;
            int32_t **l_1272 = &p_1659->g_143;
            int32_t **l_1273[5][4][1] = {{{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143}},{{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143}},{{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143}},{{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143}},{{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143},{&p_1659->g_143}}};
            uint32_t **l_1278[8] = {&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0],&l_1270[7][8][0]};
            uint16_t *l_1285 = &p_1659->g_1181;
            uint8_t *l_1292 = &p_1659->g_1154.f1;
            int32_t *l_1293 = &p_1659->g_915.f5;
            uint64_t l_1295[2][10][1] = {{{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L}},{{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L},{0xB0B09907B00BD362L}}};
            int i, j, k;
            (**p_1659->g_467) = ((((+(safe_div_func_uint8_t_u_u(p_1659->g_256.f5, (((p_24 == p_1659->g_1082[5].f0) < ((p_1659->g_256.f1 , (((p_1659->g_221.f4 ^= ((safe_lshift_func_uint8_t_u_u(l_1263, (l_1251 != ((((void*)0 == p_1659->g_1264) , ((+((safe_mul_func_uint16_t_u_u(l_1268[0], (**p_1659->g_604))) || (-1L))) , l_1269)) != (void*)0)))) >= (-1L))) , (void*)0) == (void*)0)) >= l_1263)) , l_1251)))) && l_1258) == l_1258) <= 1UL);
            l_1251 = (((((((0xF8A4A585L || (&l_1258 == (l_1274 = &l_1251))) & ((((*p_1659->g_605) = l_1258) , l_1275[3]) && p_1659->g_1276)) , (p_22 & (((l_1277 = l_1277) == &p_1659->g_396) | l_1251))) || 0xEF815EF3B1ADE911L) != 0x0BF1L) || p_24) > p_23);
            l_1258 = (safe_sub_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((((*p_1659->g_110) = (((void*)0 != l_1285) , (((((safe_div_func_uint8_t_u_u(((*l_1292) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_22, 3)) != ((p_24 & p_1659->g_301) , 0UL)), 1UL))), (((*l_1293) = (l_1251 = p_22)) , p_22))) != p_22) & 1UL) , (void*)0) == (void*)0))) > 0x4812DD012382D602L) ^ l_1294) >= p_24), 7)), l_1295[0][3][0])) | l_1294), (-3L)));
            l_1294 |= 0x5B9A3C58L;
        }
        else
        { /* block id: 604 */
            int32_t *l_1296 = &l_1251;
            l_1296 = &l_1258;
            l_1294 |= l_1251;
        }
        for (p_1659->g_221.f1 = 0; (p_1659->g_221.f1 <= 2); p_1659->g_221.f1 += 1)
        { /* block id: 610 */
            int32_t l_1297 = 0x5E212095L;
            l_1297 = (((**p_1659->g_1264) &= 0x651DL) != 0xAE3FL);
            (***p_1659->g_740) = &l_1258;
            if ((*p_1659->g_143))
                continue;
            for (l_1258 = 0; (l_1258 <= 2); l_1258 += 1)
            { /* block id: 617 */
                if (p_23)
                    break;
            }
        }
    }
    if (((p_1659->g_1154.f4 , 0x61E77AB4L) , (1UL > 0x0933825B65157CB5L)))
    { /* block id: 622 */
        uint32_t l_1308 = 4294967286UL;
        int64_t l_1314 = 0x02EB34609C82505AL;
        uint32_t l_1344 = 4UL;
        int64_t ***l_1376 = &l_1255;
        int32_t l_1379 = 0x60CCE6F2L;
        int32_t *l_1385 = &p_1659->g_43;
        int32_t l_1421[2][4][7] = {{{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L}},{{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L},{2L,0L,0L,2L,2L,0L,0L}}};
        uint16_t *l_1468 = &p_1659->g_456;
        int64_t l_1469 = 0x3DF413BE24C51094L;
        int8_t l_1507[7][10];
        int32_t l_1527[8][3][2] = {{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}},{{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL},{0x2261A18FL,0x2261A18FL}}};
        int16_t l_1538 = 0x3E23L;
        int32_t *l_1600 = &l_1527[7][1][0];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 10; j++)
                l_1507[i][j] = 1L;
        }
        if ((((((**p_1659->g_1264) = (((*p_1659->g_110) && (&p_1659->g_396 == (void*)0)) , (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_1659->g_324.f5, ((l_1314 = (safe_mod_func_int16_t_s_s((**p_1659->g_1264), (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_1308, 65531UL)), (((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((l_1308 , &p_1659->g_996) != l_1313) <= 0x7CL), p_24)), (**p_1659->g_604))) <= 1UL) , 255UL)))))) <= p_22))), 0L)))) && (*p_1659->g_605)) , l_1314) != p_22))
        { /* block id: 625 */
            uint8_t l_1315[6][3] = {{0xC7L,0xC7L,0xC7L},{0xC7L,0xC7L,0xC7L},{0xC7L,0xC7L,0xC7L},{0xC7L,0xC7L,0xC7L},{0xC7L,0xC7L,0xC7L},{0xC7L,0xC7L,0xC7L}};
            int32_t l_1347 = 7L;
            int32_t *l_1380 = &l_1379;
            int i, j;
lbl_1353:
            (*p_1659->g_466) = l_1315[4][0];
            for (p_1659->g_221.f1 = (-28); (p_1659->g_221.f1 <= 6); p_1659->g_221.f1 = safe_add_func_uint16_t_u_u(p_1659->g_221.f1, 7))
            { /* block id: 629 */
                uint8_t l_1343 = 0x79L;
                int32_t l_1384 = 4L;
                for (p_1659->g_293.f6 = 28; (p_1659->g_293.f6 < (-23)); p_1659->g_293.f6 = safe_sub_func_uint8_t_u_u(p_1659->g_293.f6, 3))
                { /* block id: 632 */
                    int8_t *l_1342 = &p_1659->g_1138[4][1];
                    uint8_t *l_1345 = &l_1315[3][1];
                    int32_t *l_1346[1][6][5] = {{{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43},{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43},{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43},{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43},{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43},{&p_1659->g_102,&p_1659->g_43,&p_1659->g_102,&p_1659->g_102,&p_1659->g_43}}};
                    int i, j, k;
                    if (p_24)
                        break;
                    l_1347 ^= (safe_mul_func_int16_t_s_s(((((*p_1659->g_634) = ((safe_sub_func_uint64_t_u_u(((((safe_mod_func_uint64_t_u_u(l_1308, (safe_rshift_func_int16_t_s_s((0x5AE3L > (((-1L) >= 0xE3F52EEFL) , (((safe_sub_func_int32_t_s_s((l_1258 = (0UL & ((**p_1659->g_109) && (((*l_1345) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*p_1659->g_605) = ((+((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**p_1659->g_549), (safe_sub_func_uint8_t_u_u((~(~(safe_rshift_func_int8_t_s_s(8L, ((*l_1342) = ((*p_1659->g_654) = 5L)))))), p_24)))), p_24)) || l_1343)) >= p_1659->g_989.f5)), p_22)), l_1344))) != p_1659->g_221.f1)))), p_24)) & (*p_1659->g_110)) && (*p_1659->g_654)))), p_22)))) != (*p_1659->g_110)) , p_23) || p_23), 0x490725FE877F62B5L)) , 1L)) , (*p_1659->g_110)) || p_23), 65535UL));
                }
                for (p_1659->g_221.f6 = 1; (p_1659->g_221.f6 >= 0); p_1659->g_221.f6 -= 1)
                { /* block id: 644 */
                    int16_t *l_1378 = &p_1659->g_256.f6;
                    int32_t l_1383 = 0x77F9C560L;
                    for (p_1659->g_86 = 0; (p_1659->g_86 <= 5); p_1659->g_86 += 1)
                    { /* block id: 647 */
                        uint16_t l_1348[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1348[i] = 65535UL;
                        l_1348[0]++;
                        l_1347 &= (l_1258 = (safe_rshift_func_uint8_t_u_s(p_23, (*p_1659->g_550))));
                        if (p_1659->g_1276)
                            goto lbl_1353;
                        if ((*p_1659->g_634))
                            continue;
                    }
                    if ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_1659->g_1358, 0UL)) , (safe_lshift_func_int16_t_s_s(((*l_1378) &= (0x5D17525BD82BC00EL && ((((safe_rshift_func_uint16_t_u_u(l_1315[0][1], 12)) && (((((l_1315[4][0] && (safe_unary_minus_func_int8_t_s(p_23))) > (safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(0x95CCL, (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((+(safe_lshift_func_uint8_t_u_s((l_1376 != ((*p_1659->g_605) , &p_1659->g_109)), l_1343))), p_23)), (*p_1659->g_654))))) , p_24) , 0x23A55717L), p_22))) <= p_23) ^ p_24) | 1L)) , l_1377) == (*p_1659->g_604)))), l_1344))), (*p_1659->g_654))))
                    { /* block id: 655 */
                        l_1379 = p_22;
                    }
                    else
                    { /* block id: 657 */
                        int32_t *l_1381 = (void*)0;
                        int32_t *l_1382[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1382[i] = &p_1659->g_43;
                        l_1380 = (void*)0;
                        l_1384 = (l_1383 = (l_1379 = (p_23 ^ p_1659->g_1230.f0)));
                        l_1385 = l_1382[4];
                        if (l_1383)
                            break;
                    }
                }
                if (p_24)
                    break;
            }
        }
        else
        { /* block id: 668 */
            int8_t l_1397[3];
            int32_t l_1406 = 0L;
            uint64_t *l_1428 = &p_1659->g_324.f0;
            int i;
            for (i = 0; i < 3; i++)
                l_1397[i] = (-3L);
            if ((p_22 != (safe_rshift_func_int8_t_s_u((**p_1659->g_549), 0))))
            { /* block id: 669 */
                int32_t l_1405[7][9] = {{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L},{(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L,(-1L),(-1L),0x6D04F268L,0x3A99A061L,0x6D04F268L}};
                int i, j;
                for (p_1659->g_1029.f1 = 25; (p_1659->g_1029.f1 <= 6); p_1659->g_1029.f1 = safe_sub_func_int64_t_s_s(p_1659->g_1029.f1, 2))
                { /* block id: 672 */
                    int32_t ***l_1394 = &p_1659->g_766;
                    uint64_t *l_1400 = &p_1659->g_135;
                    uint32_t *l_1403[4] = {&l_1275[3],&l_1275[3],&l_1275[3],&l_1275[3]};
                    uint32_t *l_1415 = (void*)0;
                    uint32_t *l_1416 = (void*)0;
                    uint32_t *l_1417 = &p_1659->g_1418;
                    int i;
                    l_1406 = ((18446744073709551612UL && (0x0017C674ED5FD9C3L | ((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((l_1394 == (((safe_rshift_func_int8_t_s_s((l_1397[0] & (**p_1659->g_109)), 2)) == (safe_div_func_uint16_t_u_u((*l_1385), ((l_1400 != l_1400) , ((((((((safe_add_func_uint8_t_u_u(((p_24 = (*l_1385)) > p_22), l_1404)) & 0L) == p_23) < (-1L)) || (*p_1659->g_605)) , p_1659->g_62) | p_23) | p_22))))) , (*p_1659->g_740))) , (**p_1659->g_549)), p_22)), l_1405[4][8])) < p_22))) || 3UL);
                    l_1406 = ((safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_24, ((((**p_1659->g_1264) ^= l_1405[4][8]) || l_1397[0]) && ((safe_add_func_uint64_t_u_u((((((*l_1417) = 0xDF8E770FL) , (&p_22 != ((*p_1659->g_604) = &p_22))) > (safe_mul_func_int8_t_s_s(0x7FL, (&l_1404 != &l_1379)))) <= (*l_1385)), (*p_1659->g_110))) && p_23)))), p_24)) & l_1421[0][0][4]), l_1405[4][8])) || (*l_1385));
                }
            }
            else
            { /* block id: 680 */
                int64_t l_1424 = 0x3A8FD46233A27982L;
                int32_t l_1430 = 0x18242FF8L;
                int32_t *l_1431 = &l_1404;
                int32_t *l_1432 = &p_1659->g_43;
                int32_t *l_1433 = &l_1404;
                int32_t *l_1434 = &p_1659->g_102;
                int32_t *l_1435 = &p_1659->g_102;
                int32_t *l_1436 = &l_1406;
                int32_t *l_1437[4][5] = {{&p_1659->g_43,&l_1430,(void*)0,&l_1430,&l_1430},{&p_1659->g_43,&l_1430,(void*)0,&l_1430,&l_1430},{&p_1659->g_43,&l_1430,(void*)0,&l_1430,&l_1430},{&p_1659->g_43,&l_1430,(void*)0,&l_1430,&l_1430}};
                uint32_t l_1438 = 4294967286UL;
                uint8_t *l_1441[10][7] = {{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1},{&p_1659->g_324.f1,&p_1659->g_324.f1,(void*)0,&p_1659->g_256.f1,(void*)0,(void*)0,&p_1659->g_890.f1}};
                uint32_t *l_1446 = &p_1659->g_132;
                uint16_t l_1455 = 65533UL;
                int i, j;
                l_1404 |= (((((safe_rshift_func_int16_t_s_u(1L, l_1424)) < 0L) , (safe_unary_minus_func_uint8_t_u((l_1397[2] > (safe_rshift_func_uint16_t_u_s((0x53A6A5A1EFBE5890L >= ((l_1428 = &p_23) != (p_1659->g_1429 , &p_23))), (0x57L >= p_24))))))) > p_23) <= 1L);
                l_1438--;
                if (((++p_1659->g_293.f1) != ((((*l_1446) &= (safe_add_func_int32_t_s_s(0x3DAA189AL, (*l_1385)))) ^ ((-3L) || 0x1AA5FAE2EED74FE5L)) > (~(safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u((((((!(l_1406 = (((p_23 = 0x1E2E034C32EA547AL) == (+((safe_rshift_func_int16_t_s_s((*l_1385), 1)) ^ ((!(*l_1431)) & p_24)))) != (safe_lshift_func_uint16_t_u_u(65531UL, 11))))) < (*p_1659->g_654)) <= 6L) != (-1L)) && p_22), 0x37L)) & (**p_1659->g_1264)) , (*p_1659->g_1264)) == (void*)0), 15))))))
                { /* block id: 688 */
                    uint32_t l_1458 = 0x67A2035EL;
                    l_1455++;
                    (*l_1436) ^= l_1458;
                }
                else
                { /* block id: 691 */
                    (**p_1659->g_741) = (void*)0;
                    if ((((+(1L || (p_1659->g_1459 , ((++p_23) | p_22)))) | (((void*)0 == p_1659->g_460) , ((l_1406 |= 0xC3L) & (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((*p_1659->g_604) == (l_1468 = &l_1455)) > 18446744073709551607UL), (*l_1385))), (*p_1659->g_654))), (*l_1385)))))) , 0x43A34D08L))
                    { /* block id: 696 */
                        (*l_1436) = l_1469;
                        (*p_1659->g_460) = (*p_1659->g_460);
                        (**p_1659->g_741) = &l_1379;
                    }
                    else
                    { /* block id: 700 */
                        uint32_t l_1470 = 0xB0340E4EL;
                        (*l_1435) &= (+l_1397[1]);
                        l_1470 = p_23;
                    }
                }
            }
            return p_24;
        }
        (*p_1659->g_460) = p_1659->g_1471;
        for (p_1659->g_324.f1 = 0; (p_1659->g_324.f1 <= 3); p_1659->g_324.f1 += 1)
        { /* block id: 711 */
            uint8_t l_1477 = 0x46L;
            uint16_t **l_1484 = &l_1377;
            uint16_t ***l_1485 = &l_1484;
            int32_t ****l_1518[6][1] = {{&p_1659->g_765},{&p_1659->g_765},{&p_1659->g_765},{&p_1659->g_765},{&p_1659->g_765},{&p_1659->g_765}};
            int i, j;
            if (((*l_1385) = (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_u((((((((**p_1659->g_604) = ((((*p_1659->g_550) > (l_1477 < (safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((((~(((safe_mul_func_int16_t_s_s((((((((*l_1485) = l_1484) != &l_1468) ^ (safe_sub_func_uint32_t_u_u((((l_1477 | (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((+(safe_div_func_uint32_t_u_u((p_22 || ((*p_1659->g_110) ^ (safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s(p_24, 0x8F35L)))))), 2UL))), p_23)), 0))) | p_24) | 0UL), 0x49B5F688L))) , p_23) >= 0x0D75L) > 0x0C32L), (**p_1659->g_604))) >= p_1659->g_256.f6) < p_24)) && l_1275[0]) , 0xCDL), p_1659->g_915.f6)) , 0x0A99784A42F3EC86L) == (*l_1385)) < p_1659->g_1429.f6), 0x0C83L)))) < p_23) && 1L)) , p_23) & 18446744073709551615UL) , p_1659->g_256.f6) , 4294967295UL) , (**p_1659->g_604)), p_22)))) & (*p_1659->g_654)), 0x60E0B8460A5F997AL))))
            { /* block id: 715 */
                uint8_t l_1497 = 0x5DL;
                int32_t l_1531 = 0x32ABAC73L;
                int32_t l_1535 = 0x5FD01B93L;
                int32_t l_1537 = (-10L);
                int32_t l_1540 = 0L;
                int32_t l_1542 = (-2L);
                int32_t **l_1546 = &l_1274;
                uint16_t **l_1573 = &p_1659->g_605;
                uint8_t *l_1583 = &p_1659->g_1154.f1;
                for (p_1659->g_915.f4 = 0; (p_1659->g_915.f4 <= 3); p_1659->g_915.f4 += 1)
                { /* block id: 718 */
                    uint8_t l_1521 = 0xBFL;
                    int32_t l_1523 = 1L;
                    int64_t l_1525 = (-1L);
                    int32_t l_1528 = (-1L);
                    int32_t l_1529 = 0x41693D1DL;
                    int32_t l_1532 = 1L;
                    int32_t l_1533[5] = {0x56D6B0E4L,0x56D6B0E4L,0x56D6B0E4L,0x56D6B0E4L,0x56D6B0E4L};
                    uint32_t l_1543 = 0x0F485507L;
                    int8_t *l_1569 = &p_1659->g_1138[1][1];
                    int i;
                    --l_1497;
                    for (p_1659->g_293.f6 = 3; (p_1659->g_293.f6 >= 0); p_1659->g_293.f6 -= 1)
                    { /* block id: 722 */
                        struct S0 *l_1502[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1502[i] = (void*)0;
                        (***p_1659->g_740) = (void*)0;
                        if (p_1659->g_862[p_1659->g_324.f1][(p_1659->g_324.f1 + 3)])
                            continue;
                        (*p_1659->g_257) = p_1659->g_1500;
                        p_1659->g_1504[0] = p_1659->g_1503;
                    }
                    if ((*p_1659->g_466))
                    { /* block id: 728 */
                        uint64_t *l_1519[7] = {&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39};
                        int64_t *l_1520 = &l_1469;
                        int32_t l_1522 = 5L;
                        int32_t l_1524 = 0L;
                        int32_t l_1526 = 0L;
                        int32_t l_1530 = 1L;
                        int32_t l_1534[8] = {0x60E160D4L,0x29E2B5BBL,0x60E160D4L,0x60E160D4L,0x29E2B5BBL,0x60E160D4L,0x60E160D4L,0x29E2B5BBL};
                        uint32_t *l_1547 = &p_1659->g_1418;
                        uint32_t *l_1550 = (void*)0;
                        uint32_t *l_1551 = &p_1659->g_1552;
                        int i;
                        (**p_1659->g_741) = (void*)0;
                        (*l_1385) ^= (((*p_1659->g_110) | (safe_div_func_uint16_t_u_u(((((**p_1659->g_604) = ((**p_1659->g_109) > (*p_1659->g_110))) == (l_1507[5][3] < (safe_div_func_int64_t_s_s((l_1521 = (((safe_sub_func_uint16_t_u_u(((***l_1485)++), (l_1497 || (p_22 >= (-1L))))) < (safe_mul_func_int8_t_s_s(((*p_1659->g_654) = ((((*l_1520) = (safe_sub_func_int64_t_s_s(0x75ABADFD946EE425L, (p_23 = (l_1518[5][0] == l_1518[5][0]))))) , 0L) <= p_22)), p_1659->g_293.f6))) && p_23)), p_22)))) && p_24), 1L))) > p_22);
                        l_1543++;
                        p_1659->g_102 ^= ((*l_1385) = ((l_1546 != ((((*l_1551) &= (+(++(*l_1547)))) , p_1659->g_1553) , (void*)0)) && p_22));
                    }
                    else
                    { /* block id: 742 */
                        int16_t **l_1556 = &p_1659->g_1265[1];
                        int8_t *l_1570 = (void*)0;
                        uint32_t *l_1571 = &l_1543;
                        int32_t l_1572[2][7][5] = {{{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL}},{{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL},{(-7L),0x100A92EBL,0L,(-5L),0x100A92EBL}}};
                        struct S0 *l_1575 = &p_1659->g_1574[1];
                        int i, j, k;
                        (*l_1385) |= (safe_lshift_func_uint16_t_u_u((((l_1556 == l_1556) , &p_1659->g_605) != ((safe_unary_minus_func_int16_t_s(((**l_1556) = ((!(safe_div_func_uint32_t_u_u(((*l_1571) = (safe_rshift_func_int8_t_s_s(p_24, ((p_23 = ((void*)0 == (*p_1659->g_741))) && ((((safe_mod_func_uint16_t_u_u(5UL, (((safe_lshift_func_int8_t_s_s((p_23 || (((((safe_sub_func_uint16_t_u_u(((0xAFL <= p_24) != 0x7FL), 0x7409L)) >= l_1568) , l_1569) == &l_1568) | (-5L))), 6)) < 0x3688452FL) , p_23))) > (**p_1659->g_604)) , l_1570) == (void*)0))))), l_1572[1][5][0]))) < p_22)))) , l_1573)), 6));
                        (*l_1575) = p_1659->g_1574[1];
                        return p_22;
                    }
                }
                l_1535 ^= (((*l_1385) = (((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((((p_1659->g_1582 , (((--(*l_1583)) < (((*p_1659->g_654) && (((+(safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((p_22 && ((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((*p_1659->g_460) , (*l_1385)) ^ (0x2AL <= ((p_23 <= ((safe_mul_func_uint8_t_u_u((l_1542 != ((**l_1484) ^= (p_23 & p_23))), p_23)) < (*p_1659->g_605))) ^ (*l_1385)))), 12)) , (**p_1659->g_1264)), p_23)) > 0xD87AAED44BA600EEL) && (***p_1659->g_111)) , (**p_1659->g_109))), 0x237C6807L)) < 4294967295UL), (-7L))), (*l_1385)))) <= 0x8C7BL) , p_22)) && p_22)) || p_24)) & p_23) , p_24) , p_22), (*p_1659->g_654))), (*l_1385))) , 0x487DL) || (*l_1385)) >= 65535UL), (*p_1659->g_605))) >= p_1659->g_862[0][1]) , p_23)) , (*p_1659->g_466));
            }
            else
            { /* block id: 755 */
                return p_23;
            }
        }
        l_1379 ^= ((p_23 = p_24) || (((**p_1659->g_604) & (safe_add_func_uint64_t_u_u(1UL, (*l_1385)))) >= ((*l_1600) &= 0x2AA12E54L)));
    }
    else
    { /* block id: 762 */
        uint64_t **l_1601 = &p_1659->g_64[0][0][1];
        int32_t l_1602 = 0x61A69F12L;
        uint64_t **l_1609[2];
        uint64_t *l_1610 = &p_1659->g_989.f0;
        uint8_t *l_1614 = &p_1659->g_989.f1;
        int16_t l_1615 = (-6L);
        int i;
        for (i = 0; i < 2; i++)
            l_1609[i] = (void*)0;
        (***p_1659->g_740) = &l_1536;
        l_1615 ^= (safe_mul_func_uint8_t_u_u(((*l_1614) ^= l_1536), 0x79L));
    }
    --l_1624;
    ++p_1659->g_1627;
    return p_1659->g_1630;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_140.f0 p_1659->g_143 p_1659->g_324.f5 p_1659->g_221.f6 p_1659->g_139.f5 p_1659->g_337 p_1659->g_396 p_1659->g_256.f4 p_1659->g_549 p_1659->g_550 p_1659->g_551 p_1659->g_102 p_1659->g_110 p_1659->g_86 p_1659->g_111 p_1659->g_109 p_1659->g_293.f4 p_1659->g_39 p_1659->g_43 p_1659->g_293.f1 p_1659->g_604 p_1659->g_605 p_1659->g_451 p_1659->g_293.f5 p_1659->g_138 p_1659->g_221.f0 p_1659->g_453 p_1659->g_470 p_1659->g_634 p_1659->g_256.f6 p_1659->g_644 p_1659->g_324.f4 p_1659->g_655 p_1659->g_221.f1 p_1659->g_256.f0 p_1659->g_256.f1 p_1659->g_654 p_1659->g_62 p_1659->g_63 p_1659->g_740 p_1659->g_140.f5 p_1659->g_741 p_1659->g_742 p_1659->g_324.f0 p_1659->g_139.f1 p_1659->g_64 p_1659->g_20 p_1659->g_132 p_1659->g_357 p_1659->g_456 p_1659->g_293.f2 p_1659->g_324.f3 p_1659->g_466 p_1659->g_467 p_1659->g_293.f0 p_1659->g_835 p_1659->g_139.f6 p_1659->g_257 p_1659->g_139 p_1659->g_890 p_1659->g_460 p_1659->g_140.f4 p_1659->g_221.f5 p_1659->g_862 p_1659->g_915 p_1659->g_656 p_1659->g_140.f2 p_1659->g_976 p_1659->g_324 p_1659->g_221.f4
 * writes: p_1659->g_140.f0 p_1659->g_140.f6 p_1659->g_102 p_1659->g_143 p_1659->g_221.f6 p_1659->g_139.f5 p_1659->g_140.f1 p_1659->g_138 p_1659->g_43 p_1659->g_293.f1 p_1659->g_451 p_1659->g_453 p_1659->g_654 p_1659->g_221.f1 p_1659->g_656 p_1659->g_256.f1 p_1659->g_64 p_1659->g_221.f0 p_1659->g_86 p_1659->g_765 p_1659->g_396 p_1659->g_62 p_1659->g_337 p_1659->g_132 p_1659->g_466 p_1659->g_836 p_1659->g_862 p_1659->g_256.f0 p_1659->g_324.f4 p_1659->g_324 p_1659->g_139.f1 p_1659->g_915 p_1659->g_139.f4 p_1659->g_460 p_1659->g_989.f5 p_1659->g_995
 */
uint16_t  func_29(uint64_t * p_30, int32_t  p_31, struct S1 * p_1659)
{ /* block id: 242 */
    uint64_t *l_512 = (void*)0;
    uint64_t *l_513 = &p_1659->g_140[0][0].f0;
    int32_t l_516 = 0x6D9DC397L;
    int16_t *l_519 = &p_1659->g_140[0][0].f6;
    int64_t l_552[3];
    int32_t l_557 = 1L;
    uint32_t l_561 = 1UL;
    int64_t **l_659 = &p_1659->g_110;
    int32_t **l_670 = &p_1659->g_656;
    uint64_t *l_715[2];
    int32_t l_802 = 2L;
    uint32_t l_807 = 0x6ADCEDB2L;
    int16_t l_831 = 8L;
    int32_t ***l_863 = &p_1659->g_766;
    uint64_t ***l_922[1];
    int32_t l_949 = 0L;
    int32_t l_950 = 1L;
    int32_t l_951 = (-6L);
    int32_t l_952 = 0x3FBEB206L;
    int32_t l_953 = 1L;
    int32_t l_954 = 0x22770027L;
    int32_t l_955[1];
    int64_t l_956 = 0x7EE264D3BD931A98L;
    uint32_t l_958 = 4UL;
    struct S0 *l_988 = &p_1659->g_989;
    int8_t **l_1005 = &p_1659->g_654;
    int32_t l_1007 = 0x18E6EBB8L;
    uint32_t l_1025[6][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
    uint64_t l_1153 = 0x6D84FB16A7216E6AL;
    int32_t l_1211 = 0x6A55E3AAL;
    int32_t *l_1239 = &l_952;
    int32_t *l_1240 = &l_955[0];
    int32_t *l_1241 = &p_1659->g_43;
    int32_t *l_1242[4][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t l_1243 = 0x44F567E5L;
    uint16_t l_1244 = 0x0C27L;
    uint64_t l_1247 = 0xBDF4E55081BFF0F3L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_552[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_715[i] = &p_1659->g_135;
    for (i = 0; i < 1; i++)
        l_922[i] = &p_1659->g_63;
    for (i = 0; i < 1; i++)
        l_955[i] = 1L;
    if (((*p_1659->g_143) = (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(((((*l_513)++) , p_31) , (l_516 & ((-1L) | ((safe_mul_func_int8_t_s_s((((*l_519) = 0x33FEL) , (p_31 > ((((((l_516 >= (((void*)0 != p_1659->g_143) > ((!7L) == 4294967292UL))) || 0x00614DC5L) , 0x1AEF406DL) ^ 0x7E1C9996L) & l_516) == p_1659->g_324.f5))), p_1659->g_324.f5)) || 1L)))), 6)) | l_516), 0xFA40C6E471D3CF57L))))
    { /* block id: 246 */
        int32_t **l_522 = &p_1659->g_143;
        (*l_522) = &l_516;
    }
    else
    { /* block id: 248 */
        int8_t l_531 = 0x0DL;
        int32_t **l_542 = (void*)0;
        int8_t *l_548 = &l_531;
        int8_t **l_547[10][5][2] = {{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}},{{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548},{&l_548,&l_548}}};
        int32_t l_556 = 0L;
        int32_t l_558 = 0x1B0F8A24L;
        int32_t l_559 = 0x424CFE45L;
        uint16_t **l_606 = (void*)0;
        int16_t l_616[10];
        int32_t ***l_744 = (void*)0;
        int32_t ****l_743[3][1][10] = {{{&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744}},{{&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744}},{{&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744,&l_744}}};
        uint64_t *l_753 = (void*)0;
        struct S0 **l_795 = (void*)0;
        uint8_t l_910[7][10] = {{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL},{0x50L,8UL,8UL,0x50L,0x50L,8UL,8UL,0x50L,0x50L,8UL}};
        uint64_t ***l_925 = &p_1659->g_63;
        uint8_t l_948 = 7UL;
        int32_t l_957 = 6L;
        uint32_t *l_975[3][9] = {{&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807},{&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807},{&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807,&l_807}};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_616[i] = 0x500EL;
        if (l_516)
        { /* block id: 249 */
            uint16_t l_535 = 0xD359L;
            int32_t l_560[3][3][4] = {{{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L}},{{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L}},{{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L},{0L,0x2ABEFA54L,0x3F99E341L,0x2ABEFA54L}}};
            int64_t l_609 = 0x5A410010EC2B68ABL;
            uint32_t *l_631[8] = {&p_1659->g_132,&p_1659->g_132,&p_1659->g_132,&p_1659->g_132,&p_1659->g_132,&p_1659->g_132,&p_1659->g_132,&p_1659->g_132};
            uint16_t *l_632 = &l_535;
            uint16_t *l_633 = &p_1659->g_453;
            int i, j, k;
            for (p_1659->g_221.f6 = 0; (p_1659->g_221.f6 <= 0); p_1659->g_221.f6 += 1)
            { /* block id: 252 */
                int32_t **l_546 = &p_1659->g_143;
                int32_t l_553 = 0L;
                uint16_t l_587[10][7] = {{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL},{3UL,0x6AB7L,9UL,0x7CDBL,0x1B95L,0x7CDBL,9UL}};
                int i, j;
                for (p_1659->g_139.f5 = 0; (p_1659->g_139.f5 <= 0); p_1659->g_139.f5 += 1)
                { /* block id: 255 */
                    uint32_t *l_532 = (void*)0;
                    uint32_t *l_533 = (void*)0;
                    uint32_t *l_534[5];
                    uint16_t *l_539 = (void*)0;
                    uint16_t **l_538 = &l_539;
                    uint8_t *l_540 = (void*)0;
                    uint8_t *l_541 = &p_1659->g_140[0][0].f1;
                    int32_t ***l_543 = (void*)0;
                    int32_t ***l_544 = (void*)0;
                    int32_t ***l_545 = &l_542;
                    int32_t *l_554[4] = {&l_553,&l_553,&l_553,&l_553};
                    int32_t l_555 = (-9L);
                    int32_t ****l_566 = &l_544;
                    uint16_t *l_580 = &p_1659->g_138;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_534[i] = &p_1659->g_132;
                    (**l_546) &= (((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((l_531 = (safe_lshift_func_int8_t_s_u(0x73L, p_1659->g_337[(p_1659->g_139.f5 + 7)][p_1659->g_139.f5]))) , p_1659->g_337[(p_1659->g_221.f6 + 7)][p_1659->g_221.f6]) && (p_31 != ((((((l_535 = p_1659->g_396) <= l_516) <= (((*l_545) = ((((*l_541) = (safe_add_func_int32_t_s_s((((p_1659->g_140[0][0].f6 = (((0L && p_31) , ((*l_538) = (void*)0)) == (void*)0)) < 0x6B61L) <= p_31), p_1659->g_337[(p_1659->g_139.f5 + 7)][p_1659->g_139.f5]))) == p_1659->g_256.f4) , l_542)) == l_546)) > 0x7A04748DL) , l_547[6][4][0]) == p_1659->g_549))), l_552[1])), l_553)) , (**p_1659->g_549)) & l_552[1]), p_31)) || 5L) , 0x47CC65F7L);
                    l_561++;
                    l_560[2][0][1] = ((*p_1659->g_143) = (l_535 >= (safe_sub_func_int16_t_s_s(((((((*l_566) = &l_546) == (void*)0) | ((0x624845C5L != (((p_31 , 4294967294UL) != (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_u(p_31, (safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_580) = (((*l_538) = l_519) != (void*)0)), p_31)), 0xABD7L)) || (*p_1659->g_110)) >= (***p_1659->g_111)), p_31)))))), 8)), p_1659->g_293.f4))) < 0x5CL)) , l_535)) != 255UL) > p_31), p_1659->g_39))));
                    for (p_1659->g_43 = 0; (p_1659->g_43 >= (-28)); p_1659->g_43 = safe_sub_func_int8_t_s_s(p_1659->g_43, 9))
                    { /* block id: 271 */
                        uint32_t l_583 = 0x08985FCEL;
                        int32_t l_584 = 1L;
                        l_584 &= l_583;
                    }
                }
                for (p_1659->g_293.f1 = 0; (p_1659->g_293.f1 >= 26); p_1659->g_293.f1++)
                { /* block id: 277 */
                    uint32_t l_599 = 4294967286UL;
                    uint8_t *l_607[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_608 = 0x1348F481L;
                    int i;
                    (1 + 1);
                }
                if (l_559)
                    break;
            }
            (*p_1659->g_634) = ((*p_1659->g_143) = (safe_mul_func_int16_t_s_s(5L, (l_561 | (+(safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_616[1], (((safe_unary_minus_func_uint64_t_u((l_516 = ((((safe_lshift_func_uint16_t_u_u((--(**p_1659->g_604)), ((*l_633) ^= (safe_div_func_uint16_t_u_u(((*l_632) ^= ((p_31 == (safe_add_func_uint32_t_u_u((l_557 |= (1UL != (((l_516 & (l_516 , (p_31 != ((((safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_609)), p_1659->g_293.f5)) == p_1659->g_138) >= (**p_1659->g_549)) <= p_1659->g_221.f0)))) > p_31) > p_31))), (*p_1659->g_143)))) & l_561)), p_31))))) > p_1659->g_39) , (**p_1659->g_470)) != l_552[1])))) == p_1659->g_39) | p_31))), l_560[1][2][2])))))));
        }
        else
        { /* block id: 294 */
            uint32_t l_639 = 0x973FE367L;
            (*p_1659->g_143) = (safe_mul_func_int16_t_s_s(p_1659->g_256.f6, (l_557 || (safe_sub_func_uint64_t_u_u(l_639, (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((p_1659->g_644[1] , (safe_sub_func_uint16_t_u_u(((0x2800L > ((void*)0 == &p_1659->g_63)) || (((p_1659->g_644[1].f6 | (safe_add_func_int64_t_s_s((((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*p_1659->g_110) < (*p_1659->g_110)), 1L)), l_552[0])) && p_1659->g_324.f4) != 0x09L), (*p_1659->g_110)))) & p_31) != p_1659->g_396)), p_31))) , 0xB396L), p_1659->g_256.f4)) < 1L), l_639)))))));
            return p_31;
        }
        if ((*p_1659->g_634))
        { /* block id: 298 */
            uint32_t l_653 = 0x4ECDB7EAL;
            uint64_t *l_716 = &p_1659->g_135;
            uint64_t *l_717 = &p_1659->g_221.f0;
            int32_t l_718 = 0x5798F22EL;
            int32_t l_797 = 1L;
            uint32_t l_800 = 0x17336ACEL;
            int32_t ***l_815[9];
            int32_t l_832[9][9] = {{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL},{0L,3L,0x7ACBE40EL,0x3EA4F30EL,(-2L),(-4L),(-4L),(-2L),0x3EA4F30EL}};
            int i, j;
            for (i = 0; i < 9; i++)
                l_815[i] = &l_542;
            if (l_653)
            { /* block id: 299 */
                uint8_t l_664 = 0x95L;
                uint8_t *l_667[7] = {&p_1659->g_221.f1,&p_1659->g_221.f1,&p_1659->g_221.f1,&p_1659->g_221.f1,&p_1659->g_221.f1,&p_1659->g_221.f1,&p_1659->g_221.f1};
                int32_t *l_671 = &p_1659->g_43;
                int i;
                (*l_671) &= (p_31 || ((p_1659->g_654 = &p_1659->g_62) == (l_557 , ((p_1659->g_655 != ((((safe_mod_func_uint8_t_u_u((l_659 != &p_1659->g_110), 0x39L)) < (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(l_664, (safe_rshift_func_uint8_t_u_u((p_1659->g_221.f1++), l_561)))), (*p_1659->g_143)))) != (*p_1659->g_605)) , l_670)) , (void*)0))));
            }
            else
            { /* block id: 303 */
                int16_t l_676 = 0x3EDFL;
                int16_t **l_679 = &l_519;
                int32_t *l_682[7][4][2] = {{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}},{{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5},{&p_1659->g_324.f5,&p_1659->g_221.f5}}};
                int32_t l_683 = (-2L);
                uint8_t *l_706 = &p_1659->g_256.f1;
                uint64_t *l_714[8] = {&p_1659->g_135,&p_1659->g_135,&p_1659->g_135,&p_1659->g_135,&p_1659->g_135,&p_1659->g_135,&p_1659->g_135,&p_1659->g_135};
                uint64_t **l_713[10] = {&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6],&l_714[6]};
                uint64_t **l_776 = &p_1659->g_64[9][0][1];
                int16_t l_805 = 0L;
                uint32_t l_812 = 0x9273D314L;
                int i, j, k;
                (*p_1659->g_143) = (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_676, (((safe_rshift_func_int8_t_s_s((((*l_679) = &p_1659->g_20) != &p_1659->g_20), (p_31 & ((safe_add_func_int64_t_s_s((*p_1659->g_110), l_653)) , p_31)))) > (l_683 = (l_682[3][3][0] == (p_1659->g_656 = &p_31)))) , l_653))), (**p_1659->g_604)));
                (*p_1659->g_143) = p_31;
                l_558 = (safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((*l_548) = l_516), (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(p_1659->g_256.f0, 0)), ((*l_717) |= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((p_31 < (safe_lshift_func_uint16_t_u_s(l_676, 0))) > (safe_add_func_uint32_t_u_u((((((safe_div_func_uint16_t_u_u(p_31, ((++(*l_706)) , (((l_718 |= ((((*p_1659->g_63) = ((((*p_1659->g_143) &= (((safe_rshift_func_uint8_t_u_s((p_31 >= ((l_716 = (l_715[1] = ((((*p_1659->g_550) <= ((safe_mod_func_int32_t_s_s(((((*p_1659->g_605) = 65528UL) || p_31) < 248UL), 6L)) < (*p_1659->g_654))) > p_31) , (void*)0))) != (void*)0)), 6)) , p_31) , l_552[1])) > p_31) , (void*)0)) != l_717) > p_31)) == 0x52D85DD9L) , p_31)))) < p_1659->g_256.f0) | 0L) | p_31) ^ p_31), p_31))) < 5UL), 0x1BL)), 0xB5L)), p_31))))))) & l_552[1]) < 9UL), 0x78L));
                if ((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((&p_1659->g_605 != &p_1659->g_605) , (safe_mul_func_uint64_t_u_u(((*l_717)++), (((**l_659) ^= p_31) <= (1UL <= (((l_683 && (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((**p_1659->g_549))), (-6L)))) , (+(2L > ((--(*l_513)) > (safe_div_func_uint8_t_u_u(((((((*p_1659->g_604) == (*p_1659->g_604)) ^ p_31) && p_31) , l_676) || (**p_1659->g_604)), (**p_1659->g_549))))))) > (-1L))))))), 4)), 6L)) != l_676) && 0x5C84L))
                { /* block id: 322 */
                    int64_t *l_752 = &l_552[2];
                    int32_t ***l_764 = &l_542;
                    int16_t l_796 = 0x6D3DL;
                    uint8_t l_801 = 7UL;
                    int32_t l_804 = 0x034C03A3L;
                    uint16_t *l_833[10] = {&p_1659->g_453,&p_1659->g_138,&p_1659->g_453,&p_1659->g_453,&p_1659->g_138,&p_1659->g_453,&p_1659->g_453,&p_1659->g_138,&p_1659->g_453,&p_1659->g_453};
                    uint64_t **l_834[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_834[i][j] = &l_715[1];
                    }
                    if ((((((safe_mul_func_uint16_t_u_u((((*l_548) = (((*p_1659->g_63) = p_30) == (void*)0)) < ((safe_sub_func_uint8_t_u_u(255UL, 0xDBL)) >= ((p_1659->g_740 != l_743[0][0][5]) > ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mod_func_int64_t_s_s(((*p_1659->g_110) = ((*l_752) |= ((safe_mod_func_int64_t_s_s((***p_1659->g_111), 0x549D17FA3F4ACD91L)) >= p_1659->g_256.f4))), l_676)))), 2)) >= (-9L))))), 1UL)) && p_1659->g_140[0][0].f5) , p_30) != l_753) == 1L))
                    { /* block id: 327 */
                        int16_t l_775 = (-1L);
                        uint8_t *l_798 = (void*)0;
                        uint8_t *l_799 = &p_1659->g_221.f1;
                        (***p_1659->g_741) = (3L || p_31);
                        (***p_1659->g_740) = func_56(((safe_add_func_int8_t_s_s((*p_1659->g_654), (safe_rshift_func_uint16_t_u_s(((((((safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(((void*)0 != &l_548), (-1L))), ((safe_lshift_func_uint16_t_u_u((l_557 == (0x2CL <= ((((p_1659->g_765 = l_764) == (void*)0) ^ (safe_mul_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((1L > 255UL) > 0x3079L), (**p_1659->g_470))), 6)), 0x63F4FEAF4958BD9AL)) > l_653) , 1L), p_1659->g_324.f0))) || l_561))), p_31)) ^ 0L))) == 0x88L) > 0xACB3L) , l_516) >= p_31) < p_31), p_1659->g_139.f1)))) , l_775), l_776, p_31, (*p_1659->g_63), p_1659);
                        l_516 |= ((*p_1659->g_634) = ((((safe_div_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((((((*l_799) &= (safe_add_func_int16_t_s_s((p_1659->g_293.f0 ^ ((*l_548) ^= (0xB2L && ((*l_706) ^= (((safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(((p_31 < (((((*p_1659->g_143) = (((**p_1659->g_549) == ((+(safe_div_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((((p_1659->g_139.f5 = l_653) , ((*p_1659->g_654) ^ ((((safe_sub_func_int8_t_s_s(((l_795 != &p_1659->g_460) , (0x2EL <= 252UL)), l_775)) , 0x531FBCE8D4F5EA1CL) , l_775) ^ 0x58L))) != l_796) && 1UL), l_718)), 0x8BAFL)) , l_797) , 18446744073709551615UL), p_31))) , 1UL)) || 0x24572C84L)) <= (-3L)) < l_775) >= 0xAD8DA800217EF921L)) & p_31), l_552[1])) >= (*p_1659->g_605)) < p_31) && l_718), 7)) <= p_31) , 8UL))))), p_31))) , l_800) , p_31) ^ l_801), 0x14L)) , 0x38C2L) , l_775), 0x4C23L)) > l_775) || l_802) | 0x5592034CL));
                    }
                    else
                    { /* block id: 338 */
                        int32_t l_803 = 0x41C56444L;
                        int32_t l_806[4][4] = {{(-3L),0x65EE501AL,(-3L),(-3L)},{(-3L),0x65EE501AL,(-3L),(-3L)},{(-3L),0x65EE501AL,(-3L),(-3L)},{(-3L),0x65EE501AL,(-3L),(-3L)}};
                        int i, j;
                        l_807--;
                        return (*p_1659->g_605);
                    }
                    (*p_1659->g_835) = ((safe_mul_func_uint8_t_u_u((l_812 < ((safe_add_func_uint8_t_u_u(((l_815[2] = &p_1659->g_766) == (*p_1659->g_740)), 0x02L)) <= ((p_1659->g_138 = ((*p_1659->g_605) = ((safe_add_func_uint16_t_u_u(p_31, (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_div_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_s((p_1659->g_221.f6 , (((safe_mod_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((((void*)0 != &p_1659->g_132) <= ((safe_sub_func_uint64_t_u_u(1UL, (-9L))) & p_31)) > l_718), p_1659->g_644[1].f2)) , 1L), (*p_1659->g_605))) || 1L) | l_831)), 1)) >= (*p_1659->g_110)) , l_831) || p_1659->g_102), p_31)))), (*p_1659->g_605))))) == l_832[7][6]))) , l_516))), 0xF4L)) , l_834[1][0]);
                }
                else
                { /* block id: 346 */
                    uint32_t l_861 = 0x0C278394L;
                    for (p_1659->g_256.f1 = 0; (p_1659->g_256.f1 != 48); p_1659->g_256.f1++)
                    { /* block id: 349 */
                        uint32_t l_846[5][4] = {{0x86E53B21L,1UL,0x3C65472DL,1UL},{0x86E53B21L,1UL,0x3C65472DL,1UL},{0x86E53B21L,1UL,0x3C65472DL,1UL},{0x86E53B21L,1UL,0x3C65472DL,1UL},{0x86E53B21L,1UL,0x3C65472DL,1UL}};
                        int i, j;
                        (**p_1659->g_741) = (*p_1659->g_470);
                        l_557 = (p_1659->g_862[0][1] = (safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((+(l_683 != ((+(safe_div_func_uint16_t_u_u((p_31 , (((*p_1659->g_143) |= (l_846[1][3] , 0x32492F2DL)) && ((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((~0xBEL), (+l_516))), ((safe_mul_func_int16_t_s_s(9L, ((p_1659->g_337[2][0] > (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x44L, 0x64L)), p_1659->g_139.f6)), l_861)), 0x4A6EL))) , p_1659->g_132))) | (**p_1659->g_604)))) , p_31))), l_861))) == p_31))), 0xEE45D8385A128711L)), p_1659->g_221.f1)));
                        (***p_1659->g_740) = (***p_1659->g_740);
                    }
                    for (p_1659->g_43 = 8; (p_1659->g_43 >= 0); p_1659->g_43 -= 1)
                    { /* block id: 358 */
                        return l_861;
                    }
                }
            }
        }
        else
        { /* block id: 363 */
            int64_t l_865 = 1L;
            int32_t l_892[7][1];
            int32_t l_893[5][4] = {{(-8L),0x61980124L,0x2D1575F0L,1L},{(-8L),0x61980124L,0x2D1575F0L,1L},{(-8L),0x61980124L,0x2D1575F0L,1L},{(-8L),0x61980124L,0x2D1575F0L,1L},{(-8L),0x61980124L,0x2D1575F0L,1L}};
            int16_t *l_912 = &p_1659->g_293.f6;
            uint64_t ***l_921 = &p_1659->g_63;
            int64_t **l_940 = &p_1659->g_110;
            uint64_t l_947 = 0x1B688F802F134305L;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_892[i][j] = 0x34D691D7L;
            }
            for (p_1659->g_256.f0 = 0; (p_1659->g_256.f0 <= 9); p_1659->g_256.f0 += 1)
            { /* block id: 366 */
                int32_t ***l_864 = &p_1659->g_766;
                int32_t l_866 = (-1L);
                int16_t *l_913 = &p_1659->g_256.f6;
                uint64_t ****l_923 = (void*)0;
                uint64_t ****l_924 = &l_922[0];
                if (((*p_1659->g_740) != (l_864 = l_863)))
                { /* block id: 368 */
                    uint32_t l_867 = 0x0E44FE52L;
                    int64_t **l_887[9] = {&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110,&p_1659->g_110};
                    uint32_t *l_888[6][7][6] = {{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}},{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}},{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}},{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}},{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}},{{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0},{(void*)0,&p_1659->g_324.f4,(void*)0,(void*)0,&p_1659->g_324.f4,(void*)0}}};
                    int32_t l_889[7][7][5] = {{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}},{{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L},{0x38A10895L,0x618122F7L,(-8L),0x618122F7L,0x38A10895L}}};
                    uint32_t *l_904 = &p_1659->g_132;
                    uint32_t *l_905 = (void*)0;
                    uint32_t *l_906 = &l_807;
                    uint8_t *l_909 = &p_1659->g_862[0][1];
                    int i, j, k;
                    for (p_1659->g_221.f0 = 0; (p_1659->g_221.f0 <= 2); p_1659->g_221.f0 += 1)
                    { /* block id: 371 */
                        (**p_1659->g_741) = (*p_1659->g_357);
                    }
                    ++l_867;
                    if ((safe_add_func_uint16_t_u_u((p_31 || (((p_1659->g_324.f4 |= (p_1659->g_396 = (l_889[2][6][4] = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_865, ((((p_31 < (((*p_1659->g_257) , ((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((!(((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((**l_659) = ((safe_lshift_func_int8_t_s_s(0x1EL, 5)) >= (p_1659->g_132 , (((safe_rshift_func_int8_t_s_u((**p_1659->g_549), 3)) , ((p_1659->g_644[1].f1 | (((l_865 != (*p_1659->g_110)) & (*p_1659->g_110)) < l_867)) , (**p_1659->g_109))) > (*p_1659->g_110))))), p_31)), 0x23L)) , (void*)0) != &p_1659->g_64[2][0][5])))), (*p_1659->g_605))) , l_887[5]) != (void*)0) ^ p_1659->g_293.f1)) , p_31)) == 1L) , (-9L)) ^ l_867))), 6))))) , l_865) ^ 1L)), p_1659->g_140[0][0].f0)))
                    { /* block id: 379 */
                        (***p_1659->g_740) = (**p_1659->g_741);
                        (*p_1659->g_460) = p_1659->g_890;
                    }
                    else
                    { /* block id: 382 */
                        int64_t l_891[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_891[i] = (-7L);
                        l_893[1][0] ^= (l_892[0][0] |= ((****p_1659->g_740) = l_891[0]));
                    }
                    if (((l_910[2][3] = ((*l_513) |= (p_31 | (((*l_909) &= ((((((**p_1659->g_549) | p_31) < ((((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_31, p_1659->g_140[0][0].f4)), ((**p_1659->g_604)--))), ((safe_lshift_func_int8_t_s_u((((247UL > ((((+((*l_906) &= ((*l_904) = p_1659->g_456))) == (safe_add_func_uint32_t_u_u((((p_31 > p_1659->g_139.f5) >= p_31) , 0xBB886E45L), p_31))) ^ 0L) , 0L)) >= p_31) , (*p_1659->g_654)), p_31)) ^ 0x6C2FCABCL))) ^ p_31) != p_31) == l_893[1][0])) ^ l_889[2][6][4]) >= p_31) , p_1659->g_221.f5)) , p_1659->g_456)))) && l_889[1][3][2]))
                    { /* block id: 393 */
                        int32_t l_911 = (-6L);
                        return l_911;
                    }
                    else
                    { /* block id: 395 */
                        int16_t **l_914 = &l_913;
                        (*p_1659->g_143) &= ((l_912 = l_912) == ((*l_914) = l_913));
                        (*p_1659->g_143) = p_31;
                        (*p_1659->g_460) = p_1659->g_915;
                    }
                }
                else
                { /* block id: 402 */
                    return (**p_1659->g_604);
                }
                l_893[3][2] |= ((p_31 && (**p_1659->g_470)) | ((safe_unary_minus_func_uint64_t_u(0xF82C5B2819CAA841L)) < (safe_lshift_func_int8_t_s_s((l_921 == (((((*l_924) = l_922[0]) != l_925) != (safe_unary_minus_func_int32_t_s((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((p_1659->g_39 , p_31), ((*p_1659->g_656) , p_31))), (*p_1659->g_110)))))) , &p_1659->g_63)), p_31))));
                l_948 |= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((**p_1659->g_604) = (((*p_1659->g_143) = p_31) != ((safe_unary_minus_func_uint64_t_u(l_865)) & p_31))), (p_31 >= (((*l_513) = ((safe_rshift_func_uint8_t_u_u((l_940 != (void*)0), p_1659->g_140[0][0].f2)) == ((((((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((l_892[0][0] | (-5L)), p_31)), p_31)) >= 0x0B2CCDADL) , p_31) >= l_947), p_31)) , &p_1659->g_862[0][1]) == (void*)0) || (*p_1659->g_110)) & p_1659->g_39) <= (*p_1659->g_110)))) | (*p_1659->g_110))))), 4)) > p_31), 0x5AL));
            }
            --l_958;
            l_892[1][0] &= (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(0x4FL, 5)) || (~1UL)), ((***p_1659->g_741) = (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((0x60F5364B2EC0B138L ^ (safe_sub_func_int32_t_s_s((((*p_1659->g_605) = ((*p_1659->g_110) | (&p_1659->g_109 == (void*)0))) & (((safe_sub_func_uint64_t_u_u(18446744073709551610UL, (safe_mod_func_int32_t_s_s((l_975[1][0] != (((0x70L & p_1659->g_453) , p_1659->g_976) , &p_1659->g_132)), 1UL)))) == l_947) , l_893[1][2])), p_31))) != p_1659->g_256.f4), 0x2D51787AF3915912L)), (*p_1659->g_654))))));
        }
    }
    if (l_802)
    { /* block id: 418 */
        int8_t l_982 = (-7L);
        uint64_t l_993 = 18446744073709551614UL;
        for (p_1659->g_139.f1 = 0; (p_1659->g_139.f1 <= 3); p_1659->g_139.f1 += 1)
        { /* block id: 421 */
            int32_t *l_979 = &l_949;
            int32_t l_990[3];
            uint8_t *l_994 = &p_1659->g_140[0][0].f1;
            int8_t **l_1006 = &p_1659->g_654;
            int i;
            for (i = 0; i < 3; i++)
                l_990[i] = 0x27E66657L;
            for (l_951 = 0; (l_951 <= 3); l_951 += 1)
            { /* block id: 424 */
                uint32_t *l_983 = &p_1659->g_139.f4;
                struct S0 *l_986 = &p_1659->g_915;
                struct S0 **l_987 = &p_1659->g_460;
                int i, j;
                for (l_954 = 0; (l_954 >= 0); l_954 -= 1)
                { /* block id: 427 */
                    for (l_807 = 0; (l_807 <= 1); l_807 += 1)
                    { /* block id: 430 */
                        int i, j;
                        (*p_1659->g_143) = (safe_add_func_int32_t_s_s(0x76559064L, (p_1659->g_862[p_1659->g_139.f1][(p_1659->g_139.f1 + 2)] >= p_31)));
                        return p_31;
                    }
                    (**p_1659->g_741) = l_979;
                }
                for (l_954 = 0; (l_954 <= 3); l_954 += 1)
                { /* block id: 438 */
                    (*p_1659->g_460) = (*p_1659->g_460);
                }
                if (p_1659->g_862[p_1659->g_139.f1][(l_951 + 2)])
                    continue;
                (*p_1659->g_143) |= (safe_add_func_uint32_t_u_u((p_1659->g_976.f4 , (p_1659->g_862[0][0] ^ (l_982 >= ((((((*l_983) = ((void*)0 == p_30)) , ((safe_sub_func_uint16_t_u_u(((((*p_1659->g_460) , ((*l_987) = l_986)) == l_988) , (**p_1659->g_604)), p_31)) ^ 0x31L)) >= (*p_1659->g_110)) , p_1659->g_862[p_1659->g_139.f1][(l_951 + 2)]) == p_1659->g_139.f1)))), p_31));
            }
            for (p_1659->g_989.f5 = 3; (p_1659->g_989.f5 >= 0); p_1659->g_989.f5 -= 1)
            { /* block id: 448 */
                (***p_1659->g_741) = 0x68122539L;
                if ((**p_1659->g_470))
                    continue;
                l_990[1] = ((*p_1659->g_143) = p_31);
            }
            (*l_979) = ((l_982 >= ((((safe_mul_func_uint8_t_u_u(((*l_994) = l_993), ((-3L) != ((p_1659->g_995 = (void*)0) == &l_922[0])))) & 0x1FL) | (safe_mul_func_int8_t_s_s(0x55L, 1L))) != (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((((safe_div_func_uint64_t_u_u((l_1005 == l_1006), l_982)) == l_1007) && 0x5EE0L) | (*l_979)) ^ p_31), p_31)), p_31)) >= p_1659->g_221.f4) || 2UL))) <= p_31);
            for (p_1659->g_132 = 0; (p_1659->g_132 <= 3); p_1659->g_132 += 1)
            { /* block id: 459 */
                return p_31;
            }
        }
    }
    else
    { /* block id: 463 */
        int32_t l_1027 = (-1L);
        int32_t l_1032 = (-8L);
        int32_t l_1034 = 0x1BE3EC64L;
        int32_t l_1035[10][6] = {{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L},{5L,1L,0x7DF85E30L,0x256AAB21L,0x3D779435L,0x256AAB21L}};
        int32_t *l_1101 = &l_953;
        uint8_t l_1106 = 0x47L;
        int32_t l_1156 = 0x708BD21DL;
        int32_t ****l_1200 = &l_863;
        int64_t l_1234 = 0x03B7E001592CF8D6L;
        int i, j;
        for (p_1659->g_396 = 0; (p_1659->g_396 <= 39); p_1659->g_396++)
        { /* block id: 466 */
            int64_t l_1010 = 0x5CF1C806445BDD74L;
            int32_t l_1024[8][1] = {{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L},{0x2F7F5C57L}};
            int32_t l_1026 = 0x0940992EL;
            uint16_t l_1028 = 0xB4EBL;
            int64_t l_1033 = 0x184FCA92E11857E2L;
            int32_t l_1094[7][2][1] = {{{0L},{0L}},{{0L},{0L}},{{0L},{0L}},{{0L},{0L}},{{0L},{0L}},{{0L},{0L}},{{0L},{0L}}};
            int32_t l_1100 = 0x0C142DB2L;
            uint32_t l_1130 = 0x3F26455FL;
            int16_t **l_1152 = &l_519;
            uint64_t **l_1160 = &l_512;
            int32_t ****l_1197 = &p_1659->g_765;
            int8_t l_1237 = 0x06L;
            int i, j, k;
            (1 + 1);
        }
    }
    l_1244++;
    return l_1247;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_43 p_1659->g_20 p_1659->g_62 p_1659->g_63 p_1659->g_64 p_1659->g_39 p_1659->g_86 p_1659->g_138 p_1659->g_132 p_1659->g_102 p_1659->g_357 p_1659->g_143 p_1659->g_396 p_1659->g_453 p_1659->g_456 p_1659->g_293.f2 p_1659->g_139.f1 p_1659->g_324.f3 p_1659->g_337 p_1659->g_466 p_1659->g_467 p_1659->g_470 p_1659->g_324.f2 p_1659->g_324.f4
 * writes: p_1659->g_43 p_1659->g_38 p_1659->g_62 p_1659->g_86 p_1659->g_138 p_1659->g_256.f1 p_1659->g_396 p_1659->g_221.f6 p_1659->g_102 p_1659->g_451 p_1659->g_453 p_1659->g_337 p_1659->g_132 p_1659->g_466 p_1659->g_143 p_1659->g_456
 */
uint64_t * func_32(uint64_t * p_33, uint64_t * p_34, int32_t  p_35, uint64_t * p_36, int8_t  p_37, struct S1 * p_1659)
{ /* block id: 6 */
    int32_t l_40[9][8] = {{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL},{0x2B0A94FEL,0x0B257695L,0L,0x2975A144L,(-9L),0x4AD2BB65L,0x2B0A94FEL,0x60D6158FL}};
    int32_t l_54 = 1L;
    uint64_t **l_55[3][6] = {{&p_1659->g_38,(void*)0,&p_1659->g_38,(void*)0,(void*)0,(void*)0},{&p_1659->g_38,(void*)0,&p_1659->g_38,(void*)0,(void*)0,(void*)0},{&p_1659->g_38,(void*)0,&p_1659->g_38,(void*)0,(void*)0,(void*)0}};
    int8_t *l_61 = &p_1659->g_62;
    uint16_t l_65 = 3UL;
    int32_t l_507 = 7L;
    int i, j;
    for (p_37 = 0; (p_37 <= 7); p_37 += 1)
    { /* block id: 9 */
        int32_t *l_41 = &l_40[1][5];
        int32_t *l_42 = &p_1659->g_43;
        (*l_42) = ((*l_41) = 1L);
        return p_33;
    }
    l_507 ^= (((func_44((safe_lshift_func_int16_t_s_u(p_1659->g_43, func_51(&l_40[8][1], p_1659))), &p_1659->g_39, (p_1659->g_38 = (l_54 , (void*)0)), func_56(((*l_61) &= (&p_1659->g_43 == &p_1659->g_43)), p_1659->g_63, l_65, p_34, p_1659), p_1659) < p_1659->g_324.f4) && l_40[6][3]) <= (-4L));
    return (*p_1659->g_63);
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_470 p_1659->g_102 p_1659->g_466 p_1659->g_337 p_1659->g_467 p_1659->g_324.f2
 * writes: p_1659->g_143 p_1659->g_102 p_1659->g_456 p_1659->g_337
 */
int8_t  func_44(uint64_t  p_45, uint64_t * p_46, uint64_t * p_47, int32_t * p_48, struct S1 * p_1659)
{ /* block id: 220 */
    int32_t *l_468 = &p_1659->g_102;
    int32_t **l_469 = (void*)0;
    int32_t l_492 = 0x35078393L;
    int32_t l_493 = 0x6D48294FL;
    int32_t l_494 = 0L;
    int32_t l_495 = 0x4FE6EF8BL;
    int32_t l_496 = 0x4EECB772L;
    int32_t *l_501 = &l_496;
    int32_t *l_503[8][8] = {{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495}};
    uint8_t l_504 = 0xE9L;
    int i, j;
    (*p_1659->g_470) = l_468;
    for (p_1659->g_102 = 2; (p_1659->g_102 >= 0); p_1659->g_102 -= 1)
    { /* block id: 224 */
        int32_t *l_471 = &p_1659->g_43;
        int32_t *l_472 = &p_1659->g_43;
        int32_t *l_473 = (void*)0;
        int32_t *l_474 = &p_1659->g_43;
        int32_t *l_475 = &p_1659->g_43;
        int32_t *l_476 = &p_1659->g_43;
        int32_t *l_477 = &p_1659->g_43;
        int32_t *l_478 = &p_1659->g_43;
        int32_t l_479 = 0x6F7846FBL;
        int32_t *l_480 = &l_479;
        int32_t *l_481 = &l_479;
        int32_t *l_482 = &p_1659->g_43;
        int32_t *l_483 = &p_1659->g_43;
        int32_t l_484 = 0x22AD9D1FL;
        int32_t *l_485 = &p_1659->g_43;
        int32_t *l_486 = (void*)0;
        int32_t *l_487 = &l_479;
        int32_t *l_488 = &l_479;
        int32_t *l_489 = &l_479;
        int32_t *l_490 = &l_484;
        int32_t *l_491[9];
        uint8_t l_497 = 8UL;
        int i;
        for (i = 0; i < 9; i++)
            l_491[i] = (void*)0;
        l_497--;
        for (p_1659->g_456 = 0; (p_1659->g_456 <= 2); p_1659->g_456 += 1)
        { /* block id: 228 */
            int64_t l_502 = 0x66269C28DA5A706DL;
            l_501 = &l_479;
            (**p_1659->g_467) = ((*p_1659->g_466) != (p_48 != l_490));
            for (l_494 = 2; (l_494 >= 0); l_494 -= 1)
            { /* block id: 233 */
                return l_502;
            }
        }
    }
    l_504++;
    return p_1659->g_324.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_20
 * writes:
 */
uint16_t  func_51(int32_t * p_52, struct S1 * p_1659)
{ /* block id: 14 */
    uint16_t l_53 = 0xB632L;
    (*p_52) = p_1659->g_20;
    return l_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_63 p_1659->g_64 p_1659->g_20 p_1659->g_43 p_1659->g_39 p_1659->g_86 p_1659->g_138 p_1659->g_62 p_1659->g_132 p_1659->g_102 p_1659->g_357 p_1659->g_143 p_1659->g_396 p_1659->g_453 p_1659->g_456 p_1659->g_293.f2 p_1659->g_139.f1 p_1659->g_324.f3 p_1659->g_337 p_1659->g_466 p_1659->g_467
 * writes: p_1659->g_86 p_1659->g_138 p_1659->g_256.f1 p_1659->g_396 p_1659->g_221.f6 p_1659->g_102 p_1659->g_451 p_1659->g_453 p_1659->g_62 p_1659->g_337 p_1659->g_132 p_1659->g_466
 */
int32_t * func_56(int8_t  p_57, uint64_t ** p_58, uint64_t  p_59, uint64_t * p_60, struct S1 * p_1659)
{ /* block id: 19 */
    uint32_t l_71 = 4294967294UL;
    uint64_t *l_82 = &p_1659->g_39;
    int64_t *l_85[6];
    int32_t l_87[4][4];
    int16_t l_90 = 0x067FL;
    int64_t l_91 = (-8L);
    int8_t *l_92 = &p_1659->g_62;
    int i, j;
    for (i = 0; i < 6; i++)
        l_85[i] = &p_1659->g_86;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_87[i][j] = 0x7CEDF4A2L;
    }
    (*p_1659->g_143) = func_66(&p_1659->g_62, (*p_1659->g_63), (l_71 | ((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_57 >= (safe_rshift_func_uint16_t_u_s(((((*p_58) != l_82) < (safe_mul_func_uint16_t_u_u(((((l_87[3][1] = 0x3FFD32083B01F688L) && p_1659->g_20) != ((p_1659->g_86 ^= ((safe_sub_func_uint8_t_u_u(((p_57 >= p_1659->g_43) & l_71), p_57)) , p_1659->g_39)) == l_90)) <= 0L), p_57))) != l_91), p_1659->g_39))), 0x2816L)), p_1659->g_20)), 0x3F80AFD421DEF15EL)), 0x1DL)) | l_91)), l_92, p_1659);
    return (*p_1659->g_357);
}


/* ------------------------------------------ */
/* 
 * reads : p_1659->g_86 p_1659->g_138 p_1659->g_62 p_1659->g_132 p_1659->g_102 p_1659->g_43 p_1659->g_357 p_1659->g_143 p_1659->g_396 p_1659->g_453 p_1659->g_456 p_1659->g_293.f2 p_1659->g_139.f1 p_1659->g_324.f3 p_1659->g_337 p_1659->g_466 p_1659->g_467
 * writes: p_1659->g_86 p_1659->g_138 p_1659->g_256.f1 p_1659->g_396 p_1659->g_221.f6 p_1659->g_102 p_1659->g_451 p_1659->g_453 p_1659->g_62 p_1659->g_337 p_1659->g_132 p_1659->g_466
 */
int32_t  func_66(int8_t * p_67, uint64_t * p_68, int32_t  p_69, int8_t * p_70, struct S1 * p_1659)
{ /* block id: 22 */
    int32_t *l_93 = &p_1659->g_43;
    int32_t **l_94 = &l_93;
    int8_t l_227 = 0x56L;
    int32_t l_234 = 0x61D119A2L;
    uint32_t l_291[5];
    int32_t l_338 = (-1L);
    int32_t l_339 = (-1L);
    int32_t l_341 = 2L;
    int32_t l_342 = 0x6665C511L;
    int32_t l_343 = 0L;
    int32_t l_344 = 0x65BF82E2L;
    int32_t l_345 = 0x59610C3CL;
    int32_t l_346[7] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
    int64_t l_376 = (-1L);
    uint32_t l_390[9][4] = {{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL},{7UL,7UL,0UL,4294967290UL}};
    int32_t l_393 = 0L;
    int64_t l_403[5];
    int64_t **l_406 = (void*)0;
    int64_t ***l_405 = &l_406;
    int i, j;
    for (i = 0; i < 5; i++)
        l_291[i] = 0x2A97216EL;
    for (i = 0; i < 5; i++)
        l_403[i] = 0x7195B78B7190C5EAL;
    (*l_94) = l_93;
    for (p_1659->g_86 = 0; (p_1659->g_86 <= 16); p_1659->g_86 = safe_add_func_int32_t_s_s(p_1659->g_86, 5))
    { /* block id: 26 */
        uint8_t l_106 = 0x5EL;
        uint64_t **l_152 = &p_1659->g_64[2][1][4];
        int32_t l_215[6] = {0x27E7B49FL,0x5E34E35CL,0x27E7B49FL,0x27E7B49FL,0x5E34E35CL,0x27E7B49FL};
        int64_t l_216 = 0x2AA0D6759D5BA957L;
        int64_t **l_226 = &p_1659->g_110;
        uint32_t l_236 = 0x14EA6A5FL;
        int8_t l_252 = 1L;
        uint32_t l_347 = 1UL;
        int i;
        for (p_69 = 0; (p_69 > 5); p_69++)
        { /* block id: 29 */
            int32_t l_133 = 0x7EBDF65DL;
            uint64_t **l_151 = &p_1659->g_64[2][1][4];
            int32_t l_157 = 0x0B388362L;
            int32_t l_160 = 4L;
            uint64_t l_212 = 0xD3EC5925C35DA187L;
            uint16_t l_259 = 0x7371L;
            int32_t l_340[5][7][3] = {{{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L}},{{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L}},{{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L}},{{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L}},{{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L},{0x4AE76482L,0L,0x1EF29D04L}}};
            int16_t *l_367 = &p_1659->g_221.f6;
            int i, j, k;
            (1 + 1);
        }
        return l_215[5];
    }
    if ((0x7B2CL != p_1659->g_138))
    { /* block id: 168 */
        int8_t l_394 = 0x6CL;
        int32_t l_408 = 0x541EA757L;
        int32_t l_425 = 0L;
        int32_t l_432 = 0x06564CDBL;
        int32_t l_433 = 0x6EAC0C16L;
        uint32_t l_457 = 0x021C40D5L;
        l_376 ^= 0x2A61C218L;
        for (p_1659->g_138 = 0; (p_1659->g_138 != 40); p_1659->g_138 = safe_add_func_int32_t_s_s(p_1659->g_138, 6))
        { /* block id: 172 */
            int64_t l_379 = 0x41659D98ACD11674L;
            int32_t l_423 = 0L;
            int32_t l_424 = 5L;
            int32_t l_431 = 9L;
            int32_t l_434 = 0x3A26B86AL;
            if (l_379)
            { /* block id: 173 */
                uint8_t *l_384 = (void*)0;
                uint8_t *l_385 = &p_1659->g_256.f1;
                int32_t l_395 = (-1L);
                int32_t *l_400 = (void*)0;
                int32_t **l_399 = &l_400;
                int32_t *l_402 = &p_1659->g_293.f5;
                int32_t **l_401 = &l_402;
                int16_t *l_404 = &p_1659->g_221.f6;
                int32_t *l_407[8][8] = {{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339},{(void*)0,&l_345,&l_341,&l_341,&l_345,(void*)0,&l_345,&l_339}};
                int i, j;
                p_1659->g_396 &= (((((((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((((*l_385) = l_379) ^ 0x31L), (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((l_390[7][1] && ((l_393 ^= (((((*p_67) >= (~0x7FL)) , &p_1659->g_135) == (void*)0) != (p_69 <= (safe_lshift_func_int16_t_s_s(1L, 9))))) , p_1659->g_132)), l_394)) > l_395) , l_395), p_1659->g_102)))) | (-1L)), l_394)) , 4294967292UL) , (*l_93)) >= p_69) | (*p_70)) | (**p_1659->g_357)) <= 3UL);
                if (l_395)
                    break;
                l_408 |= ((*p_1659->g_143) ^= (((((*l_404) = (safe_add_func_uint8_t_u_u(((((*l_399) = p_1659->g_143) == ((*l_401) = p_1659->g_143)) , 0x6FL), ((l_394 >= l_379) ^ l_403[4])))) , l_405) == &l_406) > p_69));
            }
            else
            { /* block id: 183 */
                int32_t *l_409 = &l_344;
                int32_t *l_410 = (void*)0;
                int32_t l_411 = 0x3FE3A148L;
                int32_t *l_412 = (void*)0;
                int32_t *l_413 = &l_342;
                int32_t *l_414 = &l_408;
                int32_t *l_415 = &l_341;
                int32_t *l_416 = &l_344;
                int32_t *l_417 = &l_345;
                int32_t *l_418 = (void*)0;
                int32_t *l_419 = &l_342;
                int32_t *l_420 = &l_346[2];
                int32_t *l_421 = &p_1659->g_102;
                int32_t *l_422 = &l_346[2];
                int32_t *l_426 = (void*)0;
                int32_t *l_427 = (void*)0;
                int32_t l_428 = 0x4222ED12L;
                int32_t *l_429 = &l_346[2];
                int32_t *l_430[1];
                uint8_t l_435[4][3];
                uint16_t *l_450 = &p_1659->g_451;
                uint16_t *l_452 = &p_1659->g_453;
                uint16_t l_458 = 0xD844L;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_430[i] = &l_345;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_435[i][j] = 0x45L;
                }
                l_435[1][2]--;
                (*l_415) |= (((((0x3DL != ((-6L) & (((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(l_423, (((safe_mod_func_int16_t_s_s(((((*l_452) ^= ((*l_450) = 0x0792L)) || p_69) == ((((*p_70) &= 0x5EL) == ((l_424 = (safe_mod_func_uint64_t_u_u(l_433, p_1659->g_456))) < l_432)) , p_1659->g_293.f2)), p_1659->g_43)) != l_457) != 0x2B56L))) , l_432) >= 0UL), l_433)), 0UL)), p_1659->g_139.f1)), 8UL)) | p_69) , 0L))) == l_458) && p_69) , p_1659->g_324.f3) & (**l_94));
                if ((**l_94))
                    continue;
            }
            for (l_423 = 0; (l_423 <= 3); l_423 += 1)
            { /* block id: 194 */
                for (l_432 = 0; (l_432 <= 3); l_432 += 1)
                { /* block id: 197 */
                    struct S0 *l_461 = &p_1659->g_140[2][0];
                    int32_t *l_462 = (void*)0;
                    uint32_t l_463 = 6UL;
                    l_461 = &p_1659->g_256;
                    for (l_341 = 0; (l_341 >= 0); l_341 -= 1)
                    { /* block id: 201 */
                        int i, j;
                        p_1659->g_337[(l_423 + 3)][l_341] ^= 0x41171559L;
                    }
                    ++l_463;
                }
            }
        }
    }
    else
    { /* block id: 208 */
        (*p_1659->g_143) ^= p_69;
        for (p_1659->g_132 = 0; (p_1659->g_132 <= 0); p_1659->g_132 += 1)
        { /* block id: 212 */
            return (*p_1659->g_143);
        }
        (*p_1659->g_467) = p_1659->g_466;
    }
    return (*l_93);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1660;
    struct S1* p_1659 = &c_1660;
    struct S1 c_1661 = {
        0x70EDL, // p_1659->g_20
        0x37BD55FD0A3205F5L, // p_1659->g_26
        0x938D10FBF2B8319BL, // p_1659->g_39
        &p_1659->g_39, // p_1659->g_38
        0x56B80F4BL, // p_1659->g_43
        0L, // p_1659->g_62
        {{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}},{{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39},{&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,(void*)0,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39,&p_1659->g_39}}}, // p_1659->g_64
        &p_1659->g_64[2][1][4], // p_1659->g_63
        0x3E652FC6110BDBE7L, // p_1659->g_86
        (-4L), // p_1659->g_102
        0x591FL, // p_1659->g_105
        &p_1659->g_86, // p_1659->g_110
        &p_1659->g_110, // p_1659->g_109
        &p_1659->g_109, // p_1659->g_111
        4294967287UL, // p_1659->g_132
        0UL, // p_1659->g_135
        1UL, // p_1659->g_138
        {0xD8D7B0DA77971598L,0x7BL,1L,0UL,0UL,0x33F527E6L,0x4DF1L}, // p_1659->g_139
        {{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}},{{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L},{0xAFCFED7C6F009EE3L,0x61L,0x4200A6F42BAF640DL,4UL,0UL,0x7F9D31CEL,-10L},{18446744073709551613UL,255UL,0x7FD1FBCF3A28AA74L,65526UL,0x34005F24L,0x46D94E14L,0x39A9L}}}, // p_1659->g_140
        &p_1659->g_102, // p_1659->g_143
        {18446744073709551608UL,1UL,0x1AEB0871CD10DC54L,7UL,4294967295UL,0x2889E001L,0x1D70L}, // p_1659->g_221
        {0x55CF0B89F9E0A391L,0x8CL,1L,0x35F3L,0x714C3FAFL,1L,0x7A23L}, // p_1659->g_256
        &p_1659->g_139, // p_1659->g_257
        {18446744073709551611UL,0x69L,0x47E159038929805EL,0UL,0xF1453EFBL,0x3CDCE5CDL,0x52ECL}, // p_1659->g_293
        0UL, // p_1659->g_301
        {0x11ADE92C07549F4BL,255UL,0x20E4C8265B78EF11L,0x0F9BL,0x80FE1BC5L,0x1DB039A9L,0x6CBBL}, // p_1659->g_324
        0x27F81382L, // p_1659->g_336
        {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}, // p_1659->g_337
        &p_1659->g_143, // p_1659->g_357
        4294967289UL, // p_1659->g_396
        0UL, // p_1659->g_451
        0xAA1DL, // p_1659->g_453
        3UL, // p_1659->g_456
        &p_1659->g_324, // p_1659->g_460
        {&p_1659->g_460,&p_1659->g_460}, // p_1659->g_459
        &p_1659->g_337[3][0], // p_1659->g_466
        &p_1659->g_466, // p_1659->g_467
        &p_1659->g_143, // p_1659->g_470
        {(void*)0,(void*)0}, // p_1659->g_500
        0x41L, // p_1659->g_551
        &p_1659->g_551, // p_1659->g_550
        &p_1659->g_550, // p_1659->g_549
        &p_1659->g_451, // p_1659->g_605
        &p_1659->g_605, // p_1659->g_604
        &p_1659->g_43, // p_1659->g_634
        {{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL},{0UL,255UL,3L,0x1AB0L,0xA8DFD3C1L,-1L,0x6CCAL}}, // p_1659->g_644
        &p_1659->g_62, // p_1659->g_654
        &p_1659->g_221.f5, // p_1659->g_656
        &p_1659->g_656, // p_1659->g_655
        {&p_1659->g_143}, // p_1659->g_742
        &p_1659->g_742[0], // p_1659->g_741
        &p_1659->g_741, // p_1659->g_740
        (void*)0, // p_1659->g_766
        &p_1659->g_766, // p_1659->g_765
        &p_1659->g_135, // p_1659->g_837
        {{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837},{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837},{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837},{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837},{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837},{&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,&p_1659->g_837,(void*)0,(void*)0,&p_1659->g_837}}, // p_1659->g_836
        &p_1659->g_836[3][2], // p_1659->g_835
        {{0x8EL,1UL,1UL,0x8EL,0x8EL,1UL,1UL,0x8EL},{0x8EL,1UL,1UL,0x8EL,0x8EL,1UL,1UL,0x8EL},{0x8EL,1UL,1UL,0x8EL,0x8EL,1UL,1UL,0x8EL},{0x8EL,1UL,1UL,0x8EL,0x8EL,1UL,1UL,0x8EL}}, // p_1659->g_862
        {0xA533E8DC1A5C5679L,0x67L,0L,0xBDE0L,9UL,0x3BF8DD0BL,0x0186L}, // p_1659->g_890
        {0xA337915BA16DA22CL,255UL,0x0D04C04067AF3842L,0x6382L,7UL,0x2CFBEF20L,0x54CFL}, // p_1659->g_915
        {0x05ABA73E5B25B059L,7UL,1L,0UL,4294967293UL,2L,0x36BFL}, // p_1659->g_976
        {0x42095380A362D857L,0x33L,0x6980DE6750CA1D51L,1UL,0xC250FFD1L,0L,0x4E8FL}, // p_1659->g_989
        &p_1659->g_63, // p_1659->g_996
        &p_1659->g_996, // p_1659->g_995
        {0x2127F7EA81D353E4L,0xC9L,0x4B7D72EA8FBF6C8BL,0x5DFBL,0x2D503B00L,-9L,6L}, // p_1659->g_1029
        {{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL},{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL},{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL},{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL},{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL},{0UL,247UL,0x33FBE8E7333719D8L,1UL,0x41BF4E0AL,4L,0x1CFAL}}, // p_1659->g_1082
        {{0L,0x31L},{0L,0x31L},{0L,0x31L},{0L,0x31L},{0L,0x31L},{0L,0x31L}}, // p_1659->g_1138
        {0UL,1UL,0x52805A918308AB47L,0x4DA2L,0x483793D6L,0x2A3AE3CCL,1L}, // p_1659->g_1154
        1L, // p_1659->g_1161
        0x4F0CL, // p_1659->g_1181
        1L, // p_1659->g_1209
        {0xC7D5B4A9A8BF4040L,0x3DL,-1L,65535UL,4294967295UL,0L,0x2B10L}, // p_1659->g_1230
        {&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6,&p_1659->g_221.f6}, // p_1659->g_1265
        &p_1659->g_1265[1], // p_1659->g_1264
        18446744073709551615UL, // p_1659->g_1276
        0x6B828C46L, // p_1659->g_1358
        0UL, // p_1659->g_1418
        {0x07ED2554ABE6FC0BL,0UL,0L,0xB8C1L,0xA6086D95L,0x64A9432DL,6L}, // p_1659->g_1429
        {0x04D141502F2B87A4L,0x99L,-1L,65528UL,4294967295UL,1L,1L}, // p_1659->g_1459
        {18446744073709551609UL,0xC5L,0x40A92F2FA8BDF10FL,65535UL,4294967295UL,-1L,-1L}, // p_1659->g_1471
        {0xF068A8147E595FABL,1UL,0x5FE1F6D92B7A34FEL,65535UL,4294967295UL,0L,-10L}, // p_1659->g_1500
        (void*)0, // p_1659->g_1501
        {1UL,255UL,-1L,0x02F7L,0x6A6356F1L,9L,1L}, // p_1659->g_1503
        {{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L},{0UL,0xE9L,4L,0UL,0x59E24C3EL,0x6F31CA59L,-2L}}, // p_1659->g_1504
        0UL, // p_1659->g_1552
        {0x21423F48EEE5C8FEL,6UL,3L,0x7132L,0x32B507F2L,0x714D04A5L,0x5BB3L}, // p_1659->g_1553
        {{18446744073709551615UL,0xB4L,0x28E1BC3ABCEB28F9L,0x27C3L,0x32F332B9L,0x64C41057L,0x1A7EL},{18446744073709551615UL,0xB4L,0x28E1BC3ABCEB28F9L,0x27C3L,0x32F332B9L,0x64C41057L,0x1A7EL}}, // p_1659->g_1574
        {0xB5BC0A49E79012C7L,0x51L,8L,0UL,4294967295UL,0x73EDE078L,0x4D3EL}, // p_1659->g_1582
        0x60L, // p_1659->g_1623
        0UL, // p_1659->g_1627
        0UL, // p_1659->g_1630
        (-7L), // p_1659->g_1658
    };
    c_1660 = c_1661;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1659);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1659->g_20, "p_1659->g_20", print_hash_value);
    transparent_crc(p_1659->g_26, "p_1659->g_26", print_hash_value);
    transparent_crc(p_1659->g_39, "p_1659->g_39", print_hash_value);
    transparent_crc(p_1659->g_43, "p_1659->g_43", print_hash_value);
    transparent_crc(p_1659->g_62, "p_1659->g_62", print_hash_value);
    transparent_crc(p_1659->g_86, "p_1659->g_86", print_hash_value);
    transparent_crc(p_1659->g_102, "p_1659->g_102", print_hash_value);
    transparent_crc(p_1659->g_105, "p_1659->g_105", print_hash_value);
    transparent_crc(p_1659->g_132, "p_1659->g_132", print_hash_value);
    transparent_crc(p_1659->g_135, "p_1659->g_135", print_hash_value);
    transparent_crc(p_1659->g_138, "p_1659->g_138", print_hash_value);
    transparent_crc(p_1659->g_139.f0, "p_1659->g_139.f0", print_hash_value);
    transparent_crc(p_1659->g_139.f1, "p_1659->g_139.f1", print_hash_value);
    transparent_crc(p_1659->g_139.f2, "p_1659->g_139.f2", print_hash_value);
    transparent_crc(p_1659->g_139.f3, "p_1659->g_139.f3", print_hash_value);
    transparent_crc(p_1659->g_139.f4, "p_1659->g_139.f4", print_hash_value);
    transparent_crc(p_1659->g_139.f5, "p_1659->g_139.f5", print_hash_value);
    transparent_crc(p_1659->g_139.f6, "p_1659->g_139.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1659->g_140[i][j].f0, "p_1659->g_140[i][j].f0", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f1, "p_1659->g_140[i][j].f1", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f2, "p_1659->g_140[i][j].f2", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f3, "p_1659->g_140[i][j].f3", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f4, "p_1659->g_140[i][j].f4", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f5, "p_1659->g_140[i][j].f5", print_hash_value);
            transparent_crc(p_1659->g_140[i][j].f6, "p_1659->g_140[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_1659->g_221.f0, "p_1659->g_221.f0", print_hash_value);
    transparent_crc(p_1659->g_221.f1, "p_1659->g_221.f1", print_hash_value);
    transparent_crc(p_1659->g_221.f2, "p_1659->g_221.f2", print_hash_value);
    transparent_crc(p_1659->g_221.f3, "p_1659->g_221.f3", print_hash_value);
    transparent_crc(p_1659->g_221.f4, "p_1659->g_221.f4", print_hash_value);
    transparent_crc(p_1659->g_221.f5, "p_1659->g_221.f5", print_hash_value);
    transparent_crc(p_1659->g_221.f6, "p_1659->g_221.f6", print_hash_value);
    transparent_crc(p_1659->g_256.f0, "p_1659->g_256.f0", print_hash_value);
    transparent_crc(p_1659->g_256.f1, "p_1659->g_256.f1", print_hash_value);
    transparent_crc(p_1659->g_256.f2, "p_1659->g_256.f2", print_hash_value);
    transparent_crc(p_1659->g_256.f3, "p_1659->g_256.f3", print_hash_value);
    transparent_crc(p_1659->g_256.f4, "p_1659->g_256.f4", print_hash_value);
    transparent_crc(p_1659->g_256.f5, "p_1659->g_256.f5", print_hash_value);
    transparent_crc(p_1659->g_256.f6, "p_1659->g_256.f6", print_hash_value);
    transparent_crc(p_1659->g_293.f0, "p_1659->g_293.f0", print_hash_value);
    transparent_crc(p_1659->g_293.f1, "p_1659->g_293.f1", print_hash_value);
    transparent_crc(p_1659->g_293.f2, "p_1659->g_293.f2", print_hash_value);
    transparent_crc(p_1659->g_293.f3, "p_1659->g_293.f3", print_hash_value);
    transparent_crc(p_1659->g_293.f4, "p_1659->g_293.f4", print_hash_value);
    transparent_crc(p_1659->g_293.f5, "p_1659->g_293.f5", print_hash_value);
    transparent_crc(p_1659->g_293.f6, "p_1659->g_293.f6", print_hash_value);
    transparent_crc(p_1659->g_301, "p_1659->g_301", print_hash_value);
    transparent_crc(p_1659->g_324.f0, "p_1659->g_324.f0", print_hash_value);
    transparent_crc(p_1659->g_324.f1, "p_1659->g_324.f1", print_hash_value);
    transparent_crc(p_1659->g_324.f2, "p_1659->g_324.f2", print_hash_value);
    transparent_crc(p_1659->g_324.f3, "p_1659->g_324.f3", print_hash_value);
    transparent_crc(p_1659->g_324.f4, "p_1659->g_324.f4", print_hash_value);
    transparent_crc(p_1659->g_324.f5, "p_1659->g_324.f5", print_hash_value);
    transparent_crc(p_1659->g_324.f6, "p_1659->g_324.f6", print_hash_value);
    transparent_crc(p_1659->g_336, "p_1659->g_336", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1659->g_337[i][j], "p_1659->g_337[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1659->g_396, "p_1659->g_396", print_hash_value);
    transparent_crc(p_1659->g_451, "p_1659->g_451", print_hash_value);
    transparent_crc(p_1659->g_453, "p_1659->g_453", print_hash_value);
    transparent_crc(p_1659->g_456, "p_1659->g_456", print_hash_value);
    transparent_crc(p_1659->g_551, "p_1659->g_551", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1659->g_644[i].f0, "p_1659->g_644[i].f0", print_hash_value);
        transparent_crc(p_1659->g_644[i].f1, "p_1659->g_644[i].f1", print_hash_value);
        transparent_crc(p_1659->g_644[i].f2, "p_1659->g_644[i].f2", print_hash_value);
        transparent_crc(p_1659->g_644[i].f3, "p_1659->g_644[i].f3", print_hash_value);
        transparent_crc(p_1659->g_644[i].f4, "p_1659->g_644[i].f4", print_hash_value);
        transparent_crc(p_1659->g_644[i].f5, "p_1659->g_644[i].f5", print_hash_value);
        transparent_crc(p_1659->g_644[i].f6, "p_1659->g_644[i].f6", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1659->g_862[i][j], "p_1659->g_862[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1659->g_890.f0, "p_1659->g_890.f0", print_hash_value);
    transparent_crc(p_1659->g_890.f1, "p_1659->g_890.f1", print_hash_value);
    transparent_crc(p_1659->g_890.f2, "p_1659->g_890.f2", print_hash_value);
    transparent_crc(p_1659->g_890.f3, "p_1659->g_890.f3", print_hash_value);
    transparent_crc(p_1659->g_890.f4, "p_1659->g_890.f4", print_hash_value);
    transparent_crc(p_1659->g_890.f5, "p_1659->g_890.f5", print_hash_value);
    transparent_crc(p_1659->g_890.f6, "p_1659->g_890.f6", print_hash_value);
    transparent_crc(p_1659->g_915.f0, "p_1659->g_915.f0", print_hash_value);
    transparent_crc(p_1659->g_915.f1, "p_1659->g_915.f1", print_hash_value);
    transparent_crc(p_1659->g_915.f2, "p_1659->g_915.f2", print_hash_value);
    transparent_crc(p_1659->g_915.f3, "p_1659->g_915.f3", print_hash_value);
    transparent_crc(p_1659->g_915.f4, "p_1659->g_915.f4", print_hash_value);
    transparent_crc(p_1659->g_915.f5, "p_1659->g_915.f5", print_hash_value);
    transparent_crc(p_1659->g_915.f6, "p_1659->g_915.f6", print_hash_value);
    transparent_crc(p_1659->g_976.f0, "p_1659->g_976.f0", print_hash_value);
    transparent_crc(p_1659->g_976.f1, "p_1659->g_976.f1", print_hash_value);
    transparent_crc(p_1659->g_976.f2, "p_1659->g_976.f2", print_hash_value);
    transparent_crc(p_1659->g_976.f3, "p_1659->g_976.f3", print_hash_value);
    transparent_crc(p_1659->g_976.f4, "p_1659->g_976.f4", print_hash_value);
    transparent_crc(p_1659->g_976.f5, "p_1659->g_976.f5", print_hash_value);
    transparent_crc(p_1659->g_976.f6, "p_1659->g_976.f6", print_hash_value);
    transparent_crc(p_1659->g_989.f0, "p_1659->g_989.f0", print_hash_value);
    transparent_crc(p_1659->g_989.f1, "p_1659->g_989.f1", print_hash_value);
    transparent_crc(p_1659->g_989.f2, "p_1659->g_989.f2", print_hash_value);
    transparent_crc(p_1659->g_989.f3, "p_1659->g_989.f3", print_hash_value);
    transparent_crc(p_1659->g_989.f4, "p_1659->g_989.f4", print_hash_value);
    transparent_crc(p_1659->g_989.f5, "p_1659->g_989.f5", print_hash_value);
    transparent_crc(p_1659->g_989.f6, "p_1659->g_989.f6", print_hash_value);
    transparent_crc(p_1659->g_1029.f0, "p_1659->g_1029.f0", print_hash_value);
    transparent_crc(p_1659->g_1029.f1, "p_1659->g_1029.f1", print_hash_value);
    transparent_crc(p_1659->g_1029.f2, "p_1659->g_1029.f2", print_hash_value);
    transparent_crc(p_1659->g_1029.f3, "p_1659->g_1029.f3", print_hash_value);
    transparent_crc(p_1659->g_1029.f4, "p_1659->g_1029.f4", print_hash_value);
    transparent_crc(p_1659->g_1029.f5, "p_1659->g_1029.f5", print_hash_value);
    transparent_crc(p_1659->g_1029.f6, "p_1659->g_1029.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1659->g_1082[i].f0, "p_1659->g_1082[i].f0", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f1, "p_1659->g_1082[i].f1", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f2, "p_1659->g_1082[i].f2", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f3, "p_1659->g_1082[i].f3", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f4, "p_1659->g_1082[i].f4", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f5, "p_1659->g_1082[i].f5", print_hash_value);
        transparent_crc(p_1659->g_1082[i].f6, "p_1659->g_1082[i].f6", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1659->g_1138[i][j], "p_1659->g_1138[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1659->g_1154.f0, "p_1659->g_1154.f0", print_hash_value);
    transparent_crc(p_1659->g_1154.f1, "p_1659->g_1154.f1", print_hash_value);
    transparent_crc(p_1659->g_1154.f2, "p_1659->g_1154.f2", print_hash_value);
    transparent_crc(p_1659->g_1154.f3, "p_1659->g_1154.f3", print_hash_value);
    transparent_crc(p_1659->g_1154.f4, "p_1659->g_1154.f4", print_hash_value);
    transparent_crc(p_1659->g_1154.f5, "p_1659->g_1154.f5", print_hash_value);
    transparent_crc(p_1659->g_1154.f6, "p_1659->g_1154.f6", print_hash_value);
    transparent_crc(p_1659->g_1161, "p_1659->g_1161", print_hash_value);
    transparent_crc(p_1659->g_1181, "p_1659->g_1181", print_hash_value);
    transparent_crc(p_1659->g_1209, "p_1659->g_1209", print_hash_value);
    transparent_crc(p_1659->g_1230.f0, "p_1659->g_1230.f0", print_hash_value);
    transparent_crc(p_1659->g_1230.f1, "p_1659->g_1230.f1", print_hash_value);
    transparent_crc(p_1659->g_1230.f2, "p_1659->g_1230.f2", print_hash_value);
    transparent_crc(p_1659->g_1230.f3, "p_1659->g_1230.f3", print_hash_value);
    transparent_crc(p_1659->g_1230.f4, "p_1659->g_1230.f4", print_hash_value);
    transparent_crc(p_1659->g_1230.f5, "p_1659->g_1230.f5", print_hash_value);
    transparent_crc(p_1659->g_1230.f6, "p_1659->g_1230.f6", print_hash_value);
    transparent_crc(p_1659->g_1276, "p_1659->g_1276", print_hash_value);
    transparent_crc(p_1659->g_1358, "p_1659->g_1358", print_hash_value);
    transparent_crc(p_1659->g_1418, "p_1659->g_1418", print_hash_value);
    transparent_crc(p_1659->g_1429.f0, "p_1659->g_1429.f0", print_hash_value);
    transparent_crc(p_1659->g_1429.f1, "p_1659->g_1429.f1", print_hash_value);
    transparent_crc(p_1659->g_1429.f2, "p_1659->g_1429.f2", print_hash_value);
    transparent_crc(p_1659->g_1429.f3, "p_1659->g_1429.f3", print_hash_value);
    transparent_crc(p_1659->g_1429.f4, "p_1659->g_1429.f4", print_hash_value);
    transparent_crc(p_1659->g_1429.f5, "p_1659->g_1429.f5", print_hash_value);
    transparent_crc(p_1659->g_1429.f6, "p_1659->g_1429.f6", print_hash_value);
    transparent_crc(p_1659->g_1459.f0, "p_1659->g_1459.f0", print_hash_value);
    transparent_crc(p_1659->g_1459.f1, "p_1659->g_1459.f1", print_hash_value);
    transparent_crc(p_1659->g_1459.f2, "p_1659->g_1459.f2", print_hash_value);
    transparent_crc(p_1659->g_1459.f3, "p_1659->g_1459.f3", print_hash_value);
    transparent_crc(p_1659->g_1459.f4, "p_1659->g_1459.f4", print_hash_value);
    transparent_crc(p_1659->g_1459.f5, "p_1659->g_1459.f5", print_hash_value);
    transparent_crc(p_1659->g_1459.f6, "p_1659->g_1459.f6", print_hash_value);
    transparent_crc(p_1659->g_1471.f0, "p_1659->g_1471.f0", print_hash_value);
    transparent_crc(p_1659->g_1471.f1, "p_1659->g_1471.f1", print_hash_value);
    transparent_crc(p_1659->g_1471.f2, "p_1659->g_1471.f2", print_hash_value);
    transparent_crc(p_1659->g_1471.f3, "p_1659->g_1471.f3", print_hash_value);
    transparent_crc(p_1659->g_1471.f4, "p_1659->g_1471.f4", print_hash_value);
    transparent_crc(p_1659->g_1471.f5, "p_1659->g_1471.f5", print_hash_value);
    transparent_crc(p_1659->g_1471.f6, "p_1659->g_1471.f6", print_hash_value);
    transparent_crc(p_1659->g_1500.f0, "p_1659->g_1500.f0", print_hash_value);
    transparent_crc(p_1659->g_1500.f1, "p_1659->g_1500.f1", print_hash_value);
    transparent_crc(p_1659->g_1500.f2, "p_1659->g_1500.f2", print_hash_value);
    transparent_crc(p_1659->g_1500.f3, "p_1659->g_1500.f3", print_hash_value);
    transparent_crc(p_1659->g_1500.f4, "p_1659->g_1500.f4", print_hash_value);
    transparent_crc(p_1659->g_1500.f5, "p_1659->g_1500.f5", print_hash_value);
    transparent_crc(p_1659->g_1500.f6, "p_1659->g_1500.f6", print_hash_value);
    transparent_crc(p_1659->g_1503.f0, "p_1659->g_1503.f0", print_hash_value);
    transparent_crc(p_1659->g_1503.f1, "p_1659->g_1503.f1", print_hash_value);
    transparent_crc(p_1659->g_1503.f2, "p_1659->g_1503.f2", print_hash_value);
    transparent_crc(p_1659->g_1503.f3, "p_1659->g_1503.f3", print_hash_value);
    transparent_crc(p_1659->g_1503.f4, "p_1659->g_1503.f4", print_hash_value);
    transparent_crc(p_1659->g_1503.f5, "p_1659->g_1503.f5", print_hash_value);
    transparent_crc(p_1659->g_1503.f6, "p_1659->g_1503.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1659->g_1504[i].f0, "p_1659->g_1504[i].f0", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f1, "p_1659->g_1504[i].f1", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f2, "p_1659->g_1504[i].f2", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f3, "p_1659->g_1504[i].f3", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f4, "p_1659->g_1504[i].f4", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f5, "p_1659->g_1504[i].f5", print_hash_value);
        transparent_crc(p_1659->g_1504[i].f6, "p_1659->g_1504[i].f6", print_hash_value);

    }
    transparent_crc(p_1659->g_1552, "p_1659->g_1552", print_hash_value);
    transparent_crc(p_1659->g_1553.f0, "p_1659->g_1553.f0", print_hash_value);
    transparent_crc(p_1659->g_1553.f1, "p_1659->g_1553.f1", print_hash_value);
    transparent_crc(p_1659->g_1553.f2, "p_1659->g_1553.f2", print_hash_value);
    transparent_crc(p_1659->g_1553.f3, "p_1659->g_1553.f3", print_hash_value);
    transparent_crc(p_1659->g_1553.f4, "p_1659->g_1553.f4", print_hash_value);
    transparent_crc(p_1659->g_1553.f5, "p_1659->g_1553.f5", print_hash_value);
    transparent_crc(p_1659->g_1553.f6, "p_1659->g_1553.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1659->g_1574[i].f0, "p_1659->g_1574[i].f0", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f1, "p_1659->g_1574[i].f1", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f2, "p_1659->g_1574[i].f2", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f3, "p_1659->g_1574[i].f3", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f4, "p_1659->g_1574[i].f4", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f5, "p_1659->g_1574[i].f5", print_hash_value);
        transparent_crc(p_1659->g_1574[i].f6, "p_1659->g_1574[i].f6", print_hash_value);

    }
    transparent_crc(p_1659->g_1582.f0, "p_1659->g_1582.f0", print_hash_value);
    transparent_crc(p_1659->g_1582.f1, "p_1659->g_1582.f1", print_hash_value);
    transparent_crc(p_1659->g_1582.f2, "p_1659->g_1582.f2", print_hash_value);
    transparent_crc(p_1659->g_1582.f3, "p_1659->g_1582.f3", print_hash_value);
    transparent_crc(p_1659->g_1582.f4, "p_1659->g_1582.f4", print_hash_value);
    transparent_crc(p_1659->g_1582.f5, "p_1659->g_1582.f5", print_hash_value);
    transparent_crc(p_1659->g_1582.f6, "p_1659->g_1582.f6", print_hash_value);
    transparent_crc(p_1659->g_1623, "p_1659->g_1623", print_hash_value);
    transparent_crc(p_1659->g_1627, "p_1659->g_1627", print_hash_value);
    transparent_crc(p_1659->g_1630, "p_1659->g_1630", print_hash_value);
    transparent_crc(p_1659->g_1658, "p_1659->g_1658", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
