// -g 56,69,1 -l 1,3,1
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


// Seed: 4160104319

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

union U1 {
   uint32_t  f0;
   uint16_t  f1;
   int64_t  f2;
   volatile int8_t  f3;
   int32_t  f4;
};

union U2 {
   struct S0  f0;
   int8_t * volatile  f1;
};

struct S3 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6[6];
    int32_t g_7;
    int32_t g_17;
    int32_t g_21[2];
    struct S0 g_47;
    int8_t g_49[2][5][2];
    int8_t *g_48;
    int32_t g_70;
    int32_t *g_69[9];
    volatile int32_t g_78;
    volatile int32_t *g_77;
    volatile int32_t * volatile *g_76;
    int32_t g_83;
    int64_t g_104;
    int64_t g_105;
    uint64_t g_108;
    int64_t *g_122[3][2];
    int32_t g_133;
    int32_t *g_155;
    int32_t **g_154[5];
    uint32_t g_161;
    uint16_t g_170;
    int32_t g_177;
    uint8_t g_194;
    int16_t g_209;
    union U1 g_258;
    union U1 g_260;
    union U1 *g_259;
    union U1 g_263[4][5][8];
    union U1 g_264;
    union U1 g_265[10][10];
    uint64_t *g_337;
    int8_t g_339[5];
    struct S0 ***g_395;
    struct S0 *g_409;
    volatile int16_t g_440;
    volatile int16_t *g_439;
    volatile int16_t * volatile *g_438[9][1];
    volatile struct S0 ** volatile ** volatile g_500;
    volatile struct S0 ** volatile *g_502;
    volatile struct S0 ** volatile ** volatile g_501;
    volatile struct S0 ** volatile **g_503;
    volatile struct S0 ** volatile ** volatile *g_499[3][7][3];
    int8_t g_575[9];
    uint64_t g_582;
    volatile uint8_t g_586;
    volatile uint8_t * volatile g_585[1][5];
    volatile uint8_t * volatile * volatile g_584;
    volatile uint8_t * volatile * volatile *g_583;
    int8_t g_701;
    int64_t g_740;
    volatile union U2 g_742;
    volatile union U2 *g_741;
    union U2 g_788;
    union U2 g_791;
    int16_t g_822;
    int32_t ***g_833;
    int32_t *** volatile *g_832;
    int8_t **g_882;
    union U1 g_921;
    struct S0 ****g_1051;
    struct S0 *****g_1050;
    int16_t **g_1114;
    uint32_t g_1165[9];
    int64_t g_1179;
    volatile union U2 g_1207;
    union U1 g_1233;
    uint16_t *g_1277[5][7];
    uint16_t *g_1278;
    volatile uint16_t *g_1282;
    volatile uint16_t **g_1281;
    union U1 g_1360;
    union U1 g_1364[5];
    uint8_t g_1393;
    uint32_t g_1414[5];
    union U1 * volatile *g_1495;
    union U1 * volatile * volatile *g_1494;
    union U2 *g_1563[2][3][4];
    union U2 ** volatile g_1562;
    int32_t ** volatile g_1570;
    volatile union U2 g_1620;
    int32_t g_1642[6];
    int32_t ** volatile g_1657;
    union U1 g_1665;
    uint8_t ****g_1718;
    uint32_t g_1761;
    int32_t *g_1806[10][5][5];
    int32_t ** volatile g_1805;
    struct S0 g_1847[4][10];
    int32_t g_1870;
    volatile union U2 g_1902;
    volatile int16_t g_1971;
    struct S0 * volatile g_1983[8][6];
    struct S0 g_2003;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S3 * p_2004);
uint8_t  func_10(uint32_t  p_11, int32_t  p_12, int8_t * p_13, int8_t  p_14, struct S3 * p_2004);
int8_t * func_22(uint16_t  p_23, uint32_t  p_24, uint32_t  p_25, struct S3 * p_2004);
int8_t  func_34(int8_t  p_35, uint32_t  p_36, int64_t  p_37, int8_t  p_38, struct S3 * p_2004);
int8_t  func_39(struct S0  p_40, uint32_t  p_41, struct S3 * p_2004);
struct S0  func_42(struct S0  p_43, int32_t * p_44, uint16_t  p_45, int8_t  p_46, struct S3 * p_2004);
int64_t  func_55(int64_t  p_56, int32_t * p_57, int32_t  p_58, struct S3 * p_2004);
int32_t * func_59(int64_t  p_60, int32_t * p_61, int32_t * p_62, int32_t * p_63, uint16_t  p_64, struct S3 * p_2004);
int32_t * func_65(int8_t * p_66, struct S3 * p_2004);
int8_t * func_73(int8_t * p_74, int64_t  p_75, struct S3 * p_2004);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2004->g_3 p_2004->g_7 p_2004->g_921.f2
 * writes: p_2004->g_3 p_2004->g_7 p_2004->g_921.f2
 */
struct S0  func_1(struct S3 * p_2004)
{ /* block id: 4 */
    uint32_t l_52[5];
    int16_t l_702 = 0x6923L;
    uint32_t l_1301[7][7][2] = {{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}},{{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL},{5UL,4294967292UL}}};
    struct S0 l_1597 = {18446744073709551608UL};
    int64_t l_1613 = 5L;
    int32_t l_1616 = 0x536E9DEBL;
    uint8_t *l_1716 = &p_2004->g_194;
    uint8_t **l_1715 = &l_1716;
    uint8_t ***l_1714 = &l_1715;
    uint8_t ****l_1713 = &l_1714;
    int32_t l_1729[5][10] = {{0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL,0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL},{0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL,0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL},{0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL,0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL},{0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL,0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL},{0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL,0x44F63C5FL,0x4ABADD84L,1L,0x4ABADD84L,0x44F63C5FL}};
    struct S0 l_1748 = {0x7FDEA0498EA290A2L};
    uint32_t l_1773 = 0xC22B04F4L;
    uint32_t l_1788 = 0xDD5F4F53L;
    int64_t l_1876[2];
    int32_t l_1877 = 0L;
    int8_t l_1878 = 2L;
    uint16_t l_1882 = 65530UL;
    uint8_t l_1905 = 0UL;
    uint8_t l_1914 = 0x31L;
    uint8_t l_1932[3][10] = {{250UL,0UL,0x98L,0x12L,0UL,0x12L,0x98L,0UL,250UL,250UL},{250UL,0UL,0x98L,0x12L,0UL,0x12L,0x98L,0UL,250UL,250UL},{250UL,0UL,0x98L,0x12L,0UL,0x12L,0x98L,0UL,250UL,250UL}};
    uint8_t l_1979 = 0UL;
    uint16_t l_1980[6];
    int32_t l_1981[1][8] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
    struct S0 l_2002 = {18446744073709551613UL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_52[i] = 0x438F8743L;
    for (i = 0; i < 2; i++)
        l_1876[i] = 1L;
    for (i = 0; i < 6; i++)
        l_1980[i] = 6UL;
    for (p_2004->g_3 = 21; (p_2004->g_3 == (-16)); --p_2004->g_3)
    { /* block id: 7 */
        int16_t l_18 = 0L;
        int32_t *l_28 = &p_2004->g_7;
        int8_t *l_50 = &p_2004->g_49[0][0][1];
        for (p_2004->g_7 = 0; (p_2004->g_7 <= (-13)); p_2004->g_7 = safe_sub_func_uint32_t_u_u(p_2004->g_7, 3))
        { /* block id: 10 */
            int32_t *l_19 = (void*)0;
            int32_t *l_20 = &p_2004->g_21[1];
            uint64_t l_32 = 0x5DFCC9F71D691704L;
            int32_t l_33 = 0x2F1BA137L;
            int64_t l_51 = 0x3B91E255018227FDL;
            int8_t *l_700[6];
            uint16_t *l_1299 = &p_2004->g_264.f1;
            int32_t l_1300 = 6L;
            volatile int32_t * volatile l_1593 = &p_2004->g_6[5];/* VOLATILE GLOBAL l_1593 */
            int i;
            for (i = 0; i < 6; i++)
                l_700[i] = &p_2004->g_701;
            (1 + 1);
        }
    }
    for (p_2004->g_921.f2 = 1; (p_2004->g_921.f2 >= 0); p_2004->g_921.f2 -= 1)
    { /* block id: 805 */
        uint32_t l_1594 = 4294967293UL;
        int32_t l_1603 = 0x6AEE1E2EL;
        struct S0 l_1617 = {18446744073709551608UL};
        int8_t l_1643 = 0x5EL;
        struct S0 l_1662 = {0x2BB2ECFC7FA4ED77L};
        int32_t *l_1678 = &l_1603;
        int8_t l_1736 = 0x00L;
        int32_t l_1743 = 5L;
        int32_t l_1787 = 1L;
        int8_t **l_1802 = (void*)0;
        uint64_t *l_1834 = &p_2004->g_582;
        int64_t l_1837[1];
        int32_t l_1842 = 0x340FA6FCL;
        int32_t l_1843 = 2L;
        int64_t l_1848 = (-10L);
        int32_t l_1879 = 0x0EAF5359L;
        int32_t l_1880 = 0x38B87B6FL;
        int32_t l_1881[2];
        uint8_t ****l_1896 = &l_1714;
        struct S0 ******l_1924 = &p_2004->g_1050;
        int8_t l_1961 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_1837[i] = 1L;
        for (i = 0; i < 2; i++)
            l_1881[i] = 0x6BA864CCL;
        (1 + 1);
    }
    return l_1597;
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_258.f4 p_2004->g_177
 * writes: p_2004->g_258.f4
 */
uint8_t  func_10(uint32_t  p_11, int32_t  p_12, int8_t * p_13, int8_t  p_14, struct S3 * p_2004)
{ /* block id: 741 */
    int64_t l_1530[10][8][3] = {{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}},{{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L},{(-1L),2L,4L}}};
    int32_t l_1532 = 0x162F96E2L;
    int32_t l_1549[7] = {9L,9L,9L,9L,9L,9L,9L};
    int32_t *l_1568 = &p_2004->g_177;
    int i, j, k;
    for (p_2004->g_258.f4 = 7; (p_2004->g_258.f4 == (-8)); p_2004->g_258.f4 = safe_sub_func_int16_t_s_s(p_2004->g_258.f4, 1))
    { /* block id: 744 */
        uint64_t l_1517[4][1] = {{0x9511544135961DEFL},{0x9511544135961DEFL},{0x9511544135961DEFL},{0x9511544135961DEFL}};
        int32_t l_1526 = 0x53C92E12L;
        int32_t l_1527 = (-10L);
        int32_t l_1531[6][5][6] = {{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}},{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}},{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}},{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}},{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}},{{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L},{0L,(-1L),0x4786959BL,(-1L),0L,0L}}};
        uint8_t *l_1557 = (void*)0;
        uint8_t **l_1556[7] = {&l_1557,&l_1557,&l_1557,&l_1557,&l_1557,&l_1557,&l_1557};
        uint8_t l_1588 = 0UL;
        int i, j, k;
        for (p_14 = 0; (p_14 <= 29); ++p_14)
        { /* block id: 747 */
            uint32_t *l_1512 = &p_2004->g_1165[8];
            uint32_t *l_1522 = &p_2004->g_1233.f0;
            int64_t *l_1525[2][2] = {{&p_2004->g_105,&p_2004->g_105},{&p_2004->g_105,&p_2004->g_105}};
            int8_t *l_1528 = &p_2004->g_339[2];
            int32_t l_1533 = (-3L);
            uint8_t ****l_1538 = (void*)0;
            uint8_t ****l_1540 = (void*)0;
            int32_t l_1546 = 3L;
            int32_t l_1547[5][8] = {{0x6CBCF691L,0x6CBCF691L,3L,(-9L),0x0F25C06CL,(-9L),3L,0x6CBCF691L},{0x6CBCF691L,0x6CBCF691L,3L,(-9L),0x0F25C06CL,(-9L),3L,0x6CBCF691L},{0x6CBCF691L,0x6CBCF691L,3L,(-9L),0x0F25C06CL,(-9L),3L,0x6CBCF691L},{0x6CBCF691L,0x6CBCF691L,3L,(-9L),0x0F25C06CL,(-9L),3L,0x6CBCF691L},{0x6CBCF691L,0x6CBCF691L,3L,(-9L),0x0F25C06CL,(-9L),3L,0x6CBCF691L}};
            int32_t l_1584 = (-9L);
            union U2 *l_1591 = &p_2004->g_791;
            int i, j;
            (1 + 1);
        }
        return l_1531[0][1][5];
    }
    return (*l_1568);
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_1278 p_2004->g_260.f0 p_2004->g_701 p_2004->g_194 p_2004->g_170 p_2004->g_339 p_2004->g_3 p_2004->g_70 p_2004->g_47.f0 p_2004->g_69 p_2004->g_259 p_2004->g_48 p_2004->g_49 p_2004->g_791.f0.f0 p_2004->g_882 p_2004->g_1165 p_2004->g_575 p_2004->g_7 p_2004->g_337 p_2004->g_108 p_2004->g_1414 p_2004->g_741 p_2004->g_258.f0 p_2004->g_1050 p_2004->g_177 p_2004->g_1494 p_2004->g_921.f0 p_2004->g_740 p_2004->g_258.f2
 * writes: p_2004->g_170 p_2004->g_260.f0 p_2004->g_209 p_2004->g_104 p_2004->g_155 p_2004->g_47.f0 p_2004->g_259 p_2004->g_70 p_2004->g_791.f0 p_2004->g_258.f1 p_2004->g_161 p_2004->g_1360.f2 p_2004->g_264.f4 p_2004->g_194 p_2004->g_1393 p_2004->g_1414 p_2004->g_741 p_2004->g_258.f0 p_2004->g_260.f4 p_2004->g_47 p_2004->g_1051 p_2004->g_582 p_2004->g_177 p_2004->g_740 p_2004->g_258.f2
 */
int8_t * func_22(uint16_t  p_23, uint32_t  p_24, uint32_t  p_25, struct S3 * p_2004)
{ /* block id: 625 */
    int16_t l_1308 = (-1L);
    int32_t *l_1316 = &p_2004->g_177;
    int32_t l_1336 = 0L;
    int8_t *l_1338 = (void*)0;
    int32_t ****l_1355 = &p_2004->g_833;
    struct S0 l_1362[3][7][9] = {{{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}}},{{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}}},{{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}},{{0x5B0AB821931D0723L},{0xC4B4849879BADD93L},{1UL},{0xC85364AACE51E977L},{1UL},{0x5B0AB821931D0723L},{0xC85364AACE51E977L},{0xB0A58AA4C0D85CF9L},{0xC85364AACE51E977L}}}};
    int32_t l_1410 = 0x287A66CDL;
    int32_t l_1411 = 0L;
    int32_t l_1412 = 0L;
    int32_t l_1413[2][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
    struct S0 ****l_1425[4][10] = {{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}};
    int i, j, k;
    if ((((((((safe_div_func_uint32_t_u_u((5L ^ (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(l_1308, (65535UL > ((p_25 >= ((*p_2004->g_1278) = l_1308)) > 0x4C8DL)))) <= l_1308), (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(p_25)), p_24))))), 9UL)) , (void*)0) != (void*)0) , &p_2004->g_1165[5]) != &p_2004->g_1165[5]) != p_25) == l_1308))
    { /* block id: 627 */
        struct S0 *l_1319 = &p_2004->g_791.f0;
        int32_t l_1337[5][5][3];
        int32_t *l_1408 = &l_1337[3][4][1];
        int32_t *l_1409[3];
        volatile union U2 **l_1417 = &p_2004->g_741;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1337[i][j][k] = 0x7AFB62E7L;
            }
        }
        for (i = 0; i < 3; i++)
            l_1409[i] = &l_1337[3][4][1];
        for (p_2004->g_260.f0 = (-22); (p_2004->g_260.f0 != 29); p_2004->g_260.f0 = safe_add_func_int8_t_s_s(p_2004->g_260.f0, 1))
        { /* block id: 630 */
            struct S0 l_1320[7] = {{6UL},{0x3724B4615FBB5907L},{6UL},{6UL},{0x3724B4615FBB5907L},{6UL},{6UL}};
            int32_t *l_1334[8];
            union U1 *l_1359 = &p_2004->g_1360;
            int32_t *l_1368[5];
            struct S0 **l_1404 = &l_1319;
            int8_t *l_1407 = &p_2004->g_701;
            int i;
            for (i = 0; i < 8; i++)
                l_1334[i] = &p_2004->g_177;
            for (i = 0; i < 5; i++)
                l_1368[i] = &p_2004->g_3;
            for (p_2004->g_209 = 0; (p_2004->g_209 <= (-26)); --p_2004->g_209)
            { /* block id: 633 */
                uint8_t l_1332 = 0x66L;
                int32_t *l_1333 = &p_2004->g_3;
                union U1 *l_1363 = &p_2004->g_1364[0];
                struct S0 **l_1405 = &p_2004->g_409;
                l_1316 = (void*)0;
                for (p_2004->g_104 = (-6); (p_2004->g_104 < 20); p_2004->g_104 = safe_add_func_int8_t_s_s(p_2004->g_104, 3))
                { /* block id: 637 */
                    uint8_t **l_1331 = (void*)0;
                    uint8_t ***l_1330 = &l_1331;
                    uint8_t ****l_1329 = &l_1330;
                    int32_t ****l_1356 = (void*)0;
                    if ((l_1319 == ((((((((((p_23 < ((l_1320[6] , (p_25 , p_23)) || (safe_mod_func_int8_t_s_s((p_24 != (safe_add_func_uint8_t_u_u(((((((safe_mul_func_uint8_t_u_u(p_2004->g_701, 255UL)) , (((((safe_div_func_uint64_t_u_u((((*l_1329) = (void*)0) != (void*)0), 18446744073709551614UL)) == p_23) == l_1332) < p_25) && l_1332)) <= p_2004->g_194) & p_23) < 1UL) , p_2004->g_170), 0UL))), p_2004->g_339[1])))) ^ 0x49L) > 0L) , p_2004->g_3) >= 0x845E6CC8L) , p_23) , p_25) >= l_1320[6].f0) != 0x3215A640L) , (void*)0)))
                    { /* block id: 639 */
                        int32_t **l_1335 = &p_2004->g_155;
                        (*l_1335) = (l_1334[2] = l_1333);
                        l_1336 = (*l_1333);
                        if (p_25)
                            continue;
                    }
                    else
                    { /* block id: 644 */
                        int32_t **l_1339 = (void*)0;
                        int32_t **l_1340[2][1];
                        int32_t *****l_1357 = &l_1356;
                        uint8_t *l_1358[5];
                        int64_t *l_1361[6][2][7] = {{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}},{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}},{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}},{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}},{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}},{{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104},{&p_2004->g_105,&p_2004->g_105,&p_2004->g_105,&p_2004->g_104,(void*)0,(void*)0,&p_2004->g_104}}};
                        union U1 **l_1365 = &p_2004->g_259;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1340[i][j] = (void*)0;
                        }
                        for (i = 0; i < 5; i++)
                            l_1358[i] = (void*)0;
                        l_1337[3][4][1] ^= 0x1236A676L;
                        l_1333 = func_65(l_1338, p_2004);
                        (*l_1319) = ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(((((*l_1333) = (safe_div_func_uint8_t_u_u((l_1337[3][4][1] || (!((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(p_23, 2)) & ((safe_add_func_int8_t_s_s((-1L), p_23)) , (l_1337[2][2][0] = (l_1355 == ((*l_1357) = l_1356))))) || (((p_2004->g_259 = p_2004->g_259) != (l_1320[4] , l_1359)) <= 1UL)) < p_23), p_23)), (*l_1333))) , (*l_1333)))), (*p_2004->g_48)))) == 0x602473B3D09A4939L) != 0x49C99E92L), p_2004->g_791.f0.f0)) , l_1337[3][4][1]), p_23)) , l_1362[0][2][6]);
                        (*l_1365) = l_1363;
                    }
                }
                for (p_2004->g_258.f1 = (-27); (p_2004->g_258.f1 < 37); p_2004->g_258.f1++)
                { /* block id: 657 */
                    int32_t **l_1369 = &l_1368[3];
                    (*l_1369) = l_1368[3];
                }
                for (p_2004->g_161 = 0; (p_2004->g_161 == 49); p_2004->g_161 = safe_add_func_uint8_t_u_u(p_2004->g_161, 3))
                { /* block id: 662 */
                    int64_t *l_1378 = &p_2004->g_1360.f2;
                    int32_t *l_1383[6][8][5] = {{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}},{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}},{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}},{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}},{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}},{{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336},{&l_1336,&l_1336,&p_2004->g_7,(void*)0,&l_1336}}};
                    int32_t *l_1384 = &p_2004->g_264.f4;
                    int i, j, k;
                    for (p_2004->g_1360.f2 = 0; (p_2004->g_1360.f2 > 22); p_2004->g_1360.f2 = safe_add_func_int16_t_s_s(p_2004->g_1360.f2, 4))
                    { /* block id: 665 */
                        int32_t **l_1374 = &l_1334[5];
                        (*l_1374) = func_65((*p_2004->g_882), p_2004);
                        if (p_24)
                            continue;
                    }
                    if (p_24)
                        continue;
                    if ((((-1L) || (((*l_1378) = ((safe_mul_func_uint16_t_u_u((~((*p_2004->g_1278) = (safe_unary_minus_func_int64_t_s((0x6A3B0DFCL && p_2004->g_1165[5]))))), 1UL)) > 0x90L)) && (safe_add_func_uint32_t_u_u((1L >= (safe_lshift_func_uint16_t_u_u((((*l_1384) = ((((void*)0 != l_1383[0][3][4]) >= ((l_1337[4][4][1] == p_23) , 0xF37691348C4DF330L)) & 65535UL)) , p_24), 4))), 0x68DB6F85L)))) ^ 0x3D4B43E750757CC9L))
                    { /* block id: 673 */
                        uint8_t *l_1392 = &p_2004->g_194;
                        int32_t l_1406[4] = {0x5BFAA2D1L,0x5BFAA2D1L,0x5BFAA2D1L,0x5BFAA2D1L};
                        int i;
                        l_1406[0] |= (l_1337[3][4][1] = (((((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(0x7CL, p_23)))) ^ (safe_rshift_func_uint8_t_u_u(p_2004->g_194, 4))) , ((safe_mod_func_uint8_t_u_u((p_23 , ((*l_1392) = p_2004->g_47.f0)), (p_2004->g_1393 = p_2004->g_575[7]))) ^ (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((*p_2004->g_1278) = ((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((l_1404 != ((p_2004->g_7 | 65535UL) , l_1405)), 5)) != (*l_1333)) != p_23), l_1337[0][3][1])), 1L)) > 0x0BA6L) , 0UL) <= p_25)), p_23)), (*p_2004->g_337))))) & p_24) | p_24));
                    }
                    else
                    { /* block id: 679 */
                        return l_1407;
                    }
                }
            }
            l_1336 = p_25;
        }
        ++p_2004->g_1414[3];
        (*l_1417) = p_2004->g_741;
    }
    else
    { /* block id: 688 */
        uint32_t l_1441 = 4294967293UL;
        struct S0 ****l_1449 = &p_2004->g_395;
        union U1 **l_1493 = &p_2004->g_259;
        union U1 ***l_1492 = &l_1493;
        int32_t *l_1504 = &l_1413[1][3];
        for (p_2004->g_258.f0 = (-24); (p_2004->g_258.f0 == 1); p_2004->g_258.f0++)
        { /* block id: 691 */
            uint32_t l_1432 = 4294967291UL;
            int32_t l_1434 = 0x46DE584AL;
            struct S0 l_1448[2] = {{0x2FF7E705719C0457L},{0x2FF7E705719C0457L}};
            int8_t l_1470 = 1L;
            int i;
            for (p_2004->g_209 = 16; (p_2004->g_209 <= 21); p_2004->g_209++)
            { /* block id: 694 */
                int8_t *l_1422[9][9] = {{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]},{&p_2004->g_339[1],&p_2004->g_339[1],(void*)0,(void*)0,&p_2004->g_339[1],&p_2004->g_575[2],&p_2004->g_339[4],&p_2004->g_575[3],&p_2004->g_339[4]}};
                int i, j;
                return l_1422[4][0];
            }
            if ((safe_add_func_uint8_t_u_u(p_2004->g_70, (l_1425[2][8] != (void*)0))))
            { /* block id: 697 */
                uint8_t l_1471[6][6][7] = {{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}},{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}},{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}},{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}},{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}},{{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL},{2UL,0x61L,0x4EL,250UL,0x98L,0x98L,250UL}}};
                int32_t l_1486 = 0L;
                uint64_t *l_1489 = &p_2004->g_582;
                int i, j, k;
                for (p_2004->g_260.f4 = (-26); (p_2004->g_260.f4 < (-6)); p_2004->g_260.f4++)
                { /* block id: 700 */
                    int8_t *l_1428 = &p_2004->g_339[0];
                    int32_t l_1430 = 0x2F439C51L;
                    int32_t l_1431[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    struct S0 l_1433 = {0xA1173F0CE0D0B2F7L};
                    struct S0 ****l_1450 = &p_2004->g_395;
                    int i;
                    if (p_23)
                    { /* block id: 701 */
                        int32_t **l_1429 = &l_1316;
                        (*l_1429) = func_65(l_1428, p_2004);
                        l_1431[3] |= (+l_1430);
                        (**l_1429) &= (p_25 , l_1432);
                    }
                    else
                    { /* block id: 705 */
                        int32_t *l_1435 = &l_1431[1];
                        int32_t *l_1436 = &l_1413[1][3];
                        int32_t *l_1437 = &l_1336;
                        int32_t *l_1438 = &p_2004->g_177;
                        int32_t *l_1439 = &l_1413[1][3];
                        int32_t *l_1440 = &l_1336;
                        uint64_t *l_1457 = &p_2004->g_582;
                        p_2004->g_47 = l_1433;
                        --l_1441;
                        (*l_1440) ^= ((safe_add_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((*l_1457) = ((0xB7L || (((((0x08DDBF08C6AECC9BL != (l_1434 != (((l_1448[0] , ((*p_2004->g_1050) = l_1449)) != l_1450) <= (safe_sub_func_uint64_t_u_u((p_25 | (safe_mod_func_int16_t_s_s(((0x102DL <= (safe_add_func_int16_t_s_s(p_23, (-1L)))) <= p_23), p_24))), l_1441))))) , 0UL) | p_25) , p_25) , p_24)) > 0xB7L)) , p_25), 0x6A3907E7L)) ^ 7UL), (*p_2004->g_337))) == (**p_2004->g_882));
                        (*l_1436) = 0x2A28E76BL;
                    }
                    (*l_1316) = (+(safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_24, (safe_mul_func_uint8_t_u_u(p_23, (safe_mod_func_int64_t_s_s(l_1448[0].f0, (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((l_1470 == ((l_1471[5][2][5] && (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((!(l_1434 = (~(safe_mul_func_uint16_t_u_u(0UL, (l_1431[6] ^ p_25)))))), ((safe_div_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((*p_2004->g_1278) = l_1430), p_24)) >= p_25) < (*l_1316)), 0x6874L)) > l_1441))) == l_1431[0]) == p_23), 0)), l_1433.f0))) ^ (-10L))), 0x40L)), l_1430)))))))), 0UL)));
                }
                l_1434 &= (safe_lshift_func_uint8_t_u_s(p_24, ((((--(*p_2004->g_1278)) && (((void*)0 == l_1489) < (safe_rshift_func_uint8_t_u_s(((void*)0 != &l_1470), 6)))) == ((l_1492 == ((*l_1316) , p_2004->g_1494)) , (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((safe_add_func_int32_t_s_s((((((p_23 == (*p_2004->g_48)) , 0x39AC4F3C30353C95L) == (*p_2004->g_337)) & p_2004->g_194) , l_1432), 0xEC58B29DL)))), (-6L))))) > p_2004->g_921.f0)));
            }
            else
            { /* block id: 719 */
                return (*p_2004->g_882);
            }
        }
        for (l_1336 = 4; (l_1336 >= 0); l_1336 -= 1)
        { /* block id: 725 */
            (*l_1316) ^= (-1L);
            return l_1338;
        }
        for (p_2004->g_740 = 2; (p_2004->g_740 < (-4)); --p_2004->g_740)
        { /* block id: 731 */
            int32_t **l_1503[4][7][8] = {{{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155}},{{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155}},{{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155}},{{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155},{&p_2004->g_155,(void*)0,&l_1316,&l_1316,&l_1316,&p_2004->g_155,(void*)0,&p_2004->g_155}}};
            int i, j, k;
            l_1504 = (void*)0;
        }
    }
    for (p_2004->g_258.f2 = 0; (p_2004->g_258.f2 >= (-3)); --p_2004->g_258.f2)
    { /* block id: 737 */
        struct S0 l_1507 = {0x9BF5A67A365F8779L};
        l_1507 = l_1507;
    }
    return (*p_2004->g_882);
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_260.f4 p_2004->g_337 p_2004->g_108 p_2004->g_1281 p_2004->g_49 p_2004->g_161 p_2004->g_882 p_2004->g_48
 * writes: p_2004->g_260.f4 p_2004->g_1277 p_2004->g_1278 p_2004->g_161 p_2004->g_788.f0.f0
 */
int8_t  func_34(int8_t  p_35, uint32_t  p_36, int64_t  p_37, int8_t  p_38, struct S3 * p_2004)
{ /* block id: 330 */
    int8_t **l_715 = &p_2004->g_48;
    int8_t **l_717 = &p_2004->g_48;
    int32_t l_724[10];
    uint32_t l_739 = 0xD9A50BC5L;
    volatile union U2 *l_744 = (void*)0;
    union U1 **l_774 = &p_2004->g_259;
    union U1 **l_778 = &p_2004->g_259;
    uint64_t **l_817 = &p_2004->g_337;
    uint32_t l_917 = 4294967292UL;
    uint64_t *l_926 = (void*)0;
    int32_t l_941 = 1L;
    struct S0 ****l_945[8][6][5] = {{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}},{{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395},{&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395}}};
    struct S0 *****l_944 = &l_945[2][3][0];
    int16_t *l_978[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t **l_977 = &l_978[7];
    int16_t ***l_976 = &l_977;
    int32_t *l_994[8][4];
    int8_t **l_999 = (void*)0;
    uint8_t *l_1060[10][10][2] = {{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}},{{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194},{&p_2004->g_194,&p_2004->g_194}}};
    uint8_t **l_1059 = &l_1060[7][6][0];
    int64_t l_1252 = 0x1477992CE25FE78EL;
    uint64_t l_1263 = 1UL;
    uint16_t **l_1273 = (void*)0;
    uint16_t **l_1274 = (void*)0;
    uint16_t *l_1276 = (void*)0;
    uint16_t **l_1275[5][4] = {{&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276}};
    uint32_t *l_1290 = &p_2004->g_161;
    uint64_t *l_1293[1];
    uint32_t l_1294 = 4294967290UL;
    uint32_t l_1295 = 1UL;
    int32_t l_1296 = 1L;
    uint64_t l_1297[7] = {8UL,0xFDD7B8B605925976L,8UL,8UL,0xFDD7B8B605925976L,8UL,8UL};
    uint8_t l_1298 = 0x17L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_724[i] = 0x33BDD667L;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
            l_994[i][j] = &l_941;
    }
    for (i = 0; i < 1; i++)
        l_1293[i] = &p_2004->g_788.f0.f0;
    for (p_2004->g_260.f4 = 0; (p_2004->g_260.f4 <= 1); p_2004->g_260.f4 += 1)
    { /* block id: 333 */
        int32_t ***l_712 = &p_2004->g_154[0];
        int8_t **l_716[2][10] = {{&p_2004->g_48,&p_2004->g_48,(void*)0,&p_2004->g_48,&p_2004->g_48,&p_2004->g_48,&p_2004->g_48,(void*)0,&p_2004->g_48,&p_2004->g_48},{&p_2004->g_48,&p_2004->g_48,(void*)0,&p_2004->g_48,&p_2004->g_48,&p_2004->g_48,&p_2004->g_48,(void*)0,&p_2004->g_48,&p_2004->g_48}};
        int32_t l_758 = 0x1AEAE7D5L;
        int32_t l_760 = 0x2F1BD51CL;
        int32_t l_762[3];
        struct S0 l_785 = {0UL};
        struct S0 l_823 = {18446744073709551613UL};
        int32_t l_834 = (-5L);
        int64_t *l_940 = &p_2004->g_263[0][3][2].f2;
        struct S0 *****l_946[9][7][4] = {{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}},{{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]},{&l_945[5][1][1],&l_945[2][3][0],&l_945[4][0][2],&l_945[2][4][2]}}};
        int64_t l_980 = 0L;
        uint8_t l_985[2][8] = {{0UL,0UL,0x4EL,246UL,0xFDL,246UL,0x4EL,0UL},{0UL,0UL,0x4EL,246UL,0xFDL,246UL,0x4EL,0UL}};
        uint8_t *l_1029 = &p_2004->g_194;
        uint8_t **l_1028[6][7] = {{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0},{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0},{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0},{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0},{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0},{&l_1029,(void*)0,&l_1029,(void*)0,&l_1029,&l_1029,(void*)0}};
        uint8_t ***l_1027[9][3][6] = {{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}},{{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]},{&l_1028[3][6],(void*)0,&l_1028[4][4],&l_1028[3][6],&l_1028[4][2],&l_1028[4][4]}}};
        union U1 *l_1037 = (void*)0;
        int16_t l_1102 = 8L;
        uint64_t l_1115 = 0x7E515C256C8668DAL;
        uint8_t l_1133 = 252UL;
        struct S0 l_1181 = {0x0CDDB54139AE7DF7L};
        int16_t **l_1190 = (void*)0;
        int32_t l_1257 = 0x21CCECCAL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_762[i] = 0x70F38B90L;
        (1 + 1);
    }
    l_1296 |= (safe_div_func_int8_t_s_s(((*p_2004->g_337) <= (safe_mul_func_int16_t_s_s(((p_2004->g_1278 = (p_2004->g_1277[4][5] = &p_2004->g_170)) != (void*)0), ((p_36 , (safe_mod_func_int8_t_s_s(((p_2004->g_1281 != (void*)0) != (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((((p_2004->g_788.f0.f0 = (safe_lshift_func_uint16_t_u_s((p_2004->g_49[1][3][0] ^ ((((++(*l_1290)) , (!((&p_2004->g_439 != (*l_976)) ^ p_37))) , (*l_1059)) != (*l_1059))), p_36))) , p_37) && l_1294))), l_1295))), 0xBFL))) , 0xE001L)))), (**p_2004->g_882)));
    l_1298 ^= (l_1297[0] = p_35);
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_108 p_2004->g_48 p_2004->g_49
 * writes: p_2004->g_47 p_2004->g_108
 */
int8_t  func_39(struct S0  p_40, uint32_t  p_41, struct S3 * p_2004)
{ /* block id: 316 */
    struct S0 l_688 = {0xF3E5E5051D4A5CF9L};
    struct S0 ****l_690 = &p_2004->g_395;
    struct S0 *****l_689 = &l_690;
    uint32_t *l_695 = &p_2004->g_161;
    int8_t **l_696 = &p_2004->g_48;
    int32_t l_697 = (-8L);
    int32_t *l_698 = &l_697;
    int32_t l_699 = 0x5235EBC0L;
    p_2004->g_47 = p_40;
    l_697 = 0L;
    l_699 ^= ((*l_698) = (+l_697));
    for (p_2004->g_108 = 1; (p_2004->g_108 <= 4); p_2004->g_108 += 1)
    { /* block id: 324 */
        p_40 = p_40;
        return p_40.f0;
    }
    return (*p_2004->g_48);
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_49 p_2004->g_47.f0 p_2004->g_69 p_2004->g_3 p_2004->g_70 p_2004->g_76 p_2004->g_83 p_2004->g_7 p_2004->g_108 p_2004->g_258.f2 p_2004->g_260.f4 p_2004->g_155 p_2004->g_583 p_2004->g_265.f0 p_2004->g_337 p_2004->g_177 p_2004->g_575 p_2004->g_258.f1 p_2004->g_264.f4 p_2004->g_154 p_2004->g_582 p_2004->g_339 p_2004->g_48 p_2004->g_170 p_2004->g_161 p_2004->g_264.f0 p_2004->g_260.f0 p_2004->g_258.f0 p_2004->g_104
 * writes: p_2004->g_47.f0 p_2004->g_48 p_2004->g_76 p_2004->g_104 p_2004->g_83 p_2004->g_105 p_2004->g_108 p_2004->g_122 p_2004->g_258.f2 p_2004->g_260.f4 p_2004->g_70 p_2004->g_582 p_2004->g_161 p_2004->g_154 p_2004->g_258.f1 p_2004->g_264.f4 p_2004->g_155 p_2004->g_209 p_2004->g_177 p_2004->g_49
 */
struct S0  func_42(struct S0  p_43, int32_t * p_44, uint16_t  p_45, int8_t  p_46, struct S3 * p_2004)
{ /* block id: 14 */
    uint16_t l_53 = 65532UL;
    uint64_t l_54 = 1UL;
    int8_t *l_67 = &p_2004->g_49[0][1][0];
    int32_t *l_71 = &p_2004->g_3;
    struct S0 l_687 = {0xA28D62535327FF87L};
    if (((+(l_53 && (l_54 || (p_45 && (func_55(p_2004->g_49[1][2][1], func_59(((l_54 < l_54) != l_54), p_44, func_65(l_67, p_2004), l_71, (*l_71), p_2004), p_46, p_2004) <= p_45))))) < (*l_71)))
    { /* block id: 307 */
        int64_t l_683 = (-1L);
        int64_t *l_684 = &p_2004->g_104;
        int32_t l_685[8][7][4] = {{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}},{{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L},{(-1L),(-1L),(-1L),3L}}};
        int32_t l_686[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_686[i] = (-1L);
        l_686[0] = (p_2004->g_161 < (l_685[2][5][3] = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((*l_684) ^= (((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((0x313B075091B5102FL < ((((safe_add_func_uint8_t_u_u(((((p_2004->g_264.f0 || (((((*l_67) &= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x07F7L, p_2004->g_260.f0)), 0x3282L))) == ((*l_71) == ((safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(0x228BL, p_2004->g_258.f0)) | 0L), 5UL)) == l_683))) , 0UL) < 0x11657065L)) , p_2004->g_161) < (*l_71)) && p_45), p_2004->g_265[0][0].f0)) | (*l_71)) ^ l_683) <= 9UL)), 0L)) > l_683), l_683)) != 4294967290UL) || (*p_2004->g_48))), p_43.f0)), (*l_71))), 13)) & 1L)));
        return p_43;
    }
    else
    { /* block id: 313 */
        return l_687;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_55(int64_t  p_56, int32_t * p_57, int32_t  p_58, struct S3 * p_2004)
{ /* block id: 304 */
    int32_t **l_659 = (void*)0;
    int32_t **l_660[2][9][8] = {{{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155}},{{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155},{&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155}}};
    int i, j, k;
    p_57 = &p_58;
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_70 p_2004->g_76 p_2004->g_83 p_2004->g_7 p_2004->g_49 p_2004->g_47.f0 p_2004->g_69 p_2004->g_108 p_2004->g_258.f2 p_2004->g_260.f4 p_2004->g_155 p_2004->g_583 p_2004->g_265.f0 p_2004->g_337 p_2004->g_177 p_2004->g_575 p_2004->g_258.f1 p_2004->g_264.f4 p_2004->g_154 p_2004->g_582 p_2004->g_339 p_2004->g_48 p_2004->g_170 l_1842
 * writes: p_2004->g_48 p_2004->g_76 p_2004->g_104 p_2004->g_83 p_2004->g_105 p_2004->g_47.f0 p_2004->g_108 p_2004->g_122 p_2004->g_258.f2 p_2004->g_260.f4 p_2004->g_70 p_2004->g_582 p_2004->g_161 p_2004->g_154 p_2004->g_258.f1 p_2004->g_264.f4 p_2004->g_155 p_2004->g_209 p_2004->g_177 l_1842
 */
int32_t * func_59(int64_t  p_60, int32_t * p_61, int32_t * p_62, int32_t * p_63, uint16_t  p_64, struct S3 * p_2004)
{ /* block id: 22 */
    uint32_t l_72 = 0UL;
    int32_t l_131[2][5][4] = {{{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L}},{{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L},{0x159DA389L,0x65577DD4L,0x106BCBB3L,0x65577DD4L}}};
    uint32_t l_142 = 0UL;
    int32_t l_197 = (-6L);
    struct S0 *l_237 = &p_2004->g_47;
    union U1 **l_406 = &p_2004->g_259;
    int64_t *l_423 = &p_2004->g_104;
    int16_t l_472 = 0x16F5L;
    struct S0 ****l_486 = &p_2004->g_395;
    struct S0 **l_532 = (void*)0;
    struct S0 ***l_531 = &l_532;
    uint32_t l_553 = 1UL;
    int16_t l_571 = (-4L);
    int32_t l_572 = 0x531B8C3BL;
    int16_t l_574[10][9][2] = {{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}},{{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L},{1L,0x5DD8L}}};
    uint32_t l_576 = 0x8592EC74L;
    uint32_t l_601 = 0UL;
    uint32_t l_649[7];
    int32_t l_655 = (-1L);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_649[i] = 0x61E4A37FL;
    if (l_72)
    { /* block id: 23 */
        int32_t *l_107[5][5] = {{(void*)0,&p_2004->g_83,(void*)0,(void*)0,&p_2004->g_83},{(void*)0,&p_2004->g_83,(void*)0,(void*)0,&p_2004->g_83},{(void*)0,&p_2004->g_83,(void*)0,(void*)0,&p_2004->g_83},{(void*)0,&p_2004->g_83,(void*)0,(void*)0,&p_2004->g_83},{(void*)0,&p_2004->g_83,(void*)0,(void*)0,&p_2004->g_83}};
        int32_t **l_106 = &l_107[3][2];
        int i, j;
        (*l_106) = func_65(func_73((p_2004->g_48 = &p_2004->g_49[0][3][0]), p_2004->g_70, p_2004), p_2004);
        --p_2004->g_108;
        return p_61;
    }
    else
    { /* block id: 38 */
        int32_t *l_111 = &p_2004->g_3;
        int32_t **l_112 = &l_111;
        int32_t *l_115 = (void*)0;
        int32_t l_116[5];
        uint32_t l_175[5][7];
        union U1 *l_257 = &p_2004->g_258;
        union U1 *l_262[9] = {&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2],&p_2004->g_263[0][3][2]};
        uint8_t *l_267 = &p_2004->g_194;
        int i, j;
        for (i = 0; i < 5; i++)
            l_116[i] = (-1L);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 7; j++)
                l_175[i][j] = 0x11A6D5F0L;
        }
        (*l_112) = l_111;
        l_116[0] = (safe_rshift_func_int16_t_s_u(1L, 1));
        for (l_72 = 0; (l_72 < 34); l_72++)
        { /* block id: 43 */
            uint64_t l_121 = 1UL;
            int32_t l_132 = 0x00617AC7L;
            int32_t l_134[2][7][3] = {{{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L}},{{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L}}};
            int32_t **l_158 = &l_111;
            uint16_t *l_169 = &p_2004->g_170;
            uint32_t *l_176 = &p_2004->g_161;
            uint8_t l_195 = 255UL;
            uint64_t l_286 = 0x8BB0FE6DB16A5F3AL;
            uint8_t l_299 = 0UL;
            uint32_t l_318[8];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_318[i] = 0x325F09CDL;
            for (p_2004->g_47.f0 = 0; (p_2004->g_47.f0 <= 6); p_2004->g_47.f0 = safe_add_func_int16_t_s_s(p_2004->g_47.f0, 9))
            { /* block id: 46 */
                int32_t l_127[6][4] = {{(-1L),0x7ED851E2L,0L,0x7ED851E2L},{(-1L),0x7ED851E2L,0L,0x7ED851E2L},{(-1L),0x7ED851E2L,0L,0x7ED851E2L},{(-1L),0x7ED851E2L,0L,0x7ED851E2L},{(-1L),0x7ED851E2L,0L,0x7ED851E2L},{(-1L),0x7ED851E2L,0L,0x7ED851E2L}};
                int64_t l_130[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_130[i][j] = 0x1419659B86C8B6B2L;
                }
                if (((l_121 , &p_2004->g_105) == (p_2004->g_122[0][0] = &p_60)))
                { /* block id: 48 */
                    uint16_t l_123 = 1UL;
                    int32_t *l_124 = &l_116[1];
                    int32_t *l_125 = &l_116[0];
                    int32_t *l_126 = &l_116[0];
                    int32_t *l_128 = &l_116[0];
                    int32_t *l_129[2];
                    uint8_t l_135 = 0xEBL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_129[i] = &p_2004->g_83;
                    if (l_123)
                        break;
                    --l_135;
                }
                else
                { /* block id: 51 */
                    for (p_64 = 0; (p_64 == 57); p_64++)
                    { /* block id: 54 */
                        return p_61;
                    }
                    if (p_2004->g_70)
                        break;
                }
                if (l_130[0][2])
                    break;
            }
        }
    }
    if (l_131[1][2][2])
    { /* block id: 130 */
        uint64_t *l_335 = &p_2004->g_108;
        int32_t l_356 = 0x67FAD097L;
        int8_t *l_398 = &p_2004->g_49[1][3][0];
        union U1 **l_405 = (void*)0;
        int32_t l_460 = (-1L);
        int32_t l_471[8][6] = {{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L},{(-6L),0x104E687CL,0x547A8F06L,1L,0x32A23CF2L,1L}};
        uint64_t l_519 = 0xA99F086A561614DBL;
        struct S0 **l_530 = (void*)0;
        struct S0 ***l_529[5] = {&l_530,&l_530,&l_530,&l_530,&l_530};
        uint8_t *l_543[3];
        uint8_t **l_542[4] = {&l_543[1],&l_543[1],&l_543[1],&l_543[1]};
        int8_t l_552[4][5][8] = {{{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL}},{{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL}},{{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL}},{{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL},{0x4CL,(-10L),9L,(-1L),0x5BL,(-1L),(-3L),0x1BL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_543[i] = &p_2004->g_194;
        for (p_2004->g_258.f2 = 0; (p_2004->g_258.f2 <= (-5)); p_2004->g_258.f2 = safe_sub_func_int16_t_s_s(p_2004->g_258.f2, 5))
        { /* block id: 133 */
            int32_t l_327 = 0L;
            uint64_t **l_336[1];
            int8_t *l_338 = &p_2004->g_339[1];
            int32_t *l_344 = &p_2004->g_177;
            int32_t l_350 = (-4L);
            int32_t l_351 = 7L;
            int32_t l_352 = 0x0C4852D7L;
            int32_t l_353[10] = {1L,4L,1L,1L,4L,1L,1L,4L,1L,1L};
            int64_t l_358 = (-8L);
            uint64_t l_360 = 18446744073709551607UL;
            struct S0 **l_367[9];
            uint64_t l_424[8] = {0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL,0x1DBCB66D57E6AFCAL};
            uint8_t *l_427 = &p_2004->g_194;
            struct S0 ****l_484[5] = {&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395,&p_2004->g_395};
            uint8_t **l_541 = &l_427;
            int32_t l_551 = 0x1AA371DEL;
            int32_t *l_557 = &l_131[0][4][0];
            int32_t *l_558[4][1][5] = {{{&l_356,&l_356,&p_2004->g_3,&l_353[9],&l_131[1][2][2]}},{{&l_356,&l_356,&p_2004->g_3,&l_353[9],&l_131[1][2][2]}},{{&l_356,&l_356,&p_2004->g_3,&l_353[9],&l_131[1][2][2]}},{{&l_356,&l_356,&p_2004->g_3,&l_353[9],&l_131[1][2][2]}}};
            uint32_t l_559 = 0UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_336[i] = (void*)0;
            for (i = 0; i < 9; i++)
                l_367[i] = &l_237;
            (1 + 1);
        }
    }
    else
    { /* block id: 227 */
        int32_t l_569 = 1L;
        int32_t l_570[10][3] = {{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL},{0x63409F1CL,(-10L),0x63409F1CL}};
        int32_t l_573[1];
        uint8_t *l_591 = &p_2004->g_194;
        int32_t *l_596 = &l_570[4][0];
        int32_t *l_597 = &p_2004->g_177;
        int32_t *l_598 = (void*)0;
        int32_t *l_599 = (void*)0;
        int32_t *l_600[8][7] = {{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0},{&l_131[1][2][2],&p_2004->g_177,(void*)0,&l_197,&l_131[1][2][2],&l_197,(void*)0}};
        int32_t ***l_604 = &p_2004->g_154[1];
        int16_t *l_611[3][8][3] = {{{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209}},{{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209}},{{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209},{(void*)0,(void*)0,&p_2004->g_209}}};
        int16_t **l_612 = &l_611[1][1][0];
        int16_t **l_613 = (void*)0;
        int16_t *l_615 = (void*)0;
        int16_t **l_614 = &l_615;
        int16_t *l_616 = &p_2004->g_209;
        struct S0 l_617 = {0x1055B25B1C41B7BFL};
        union U1 **l_658 = &p_2004->g_259;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_573[i] = 0x1AED1250L;
        for (p_2004->g_260.f4 = (-4); (p_2004->g_260.f4 < (-30)); p_2004->g_260.f4 = safe_sub_func_int16_t_s_s(p_2004->g_260.f4, 3))
        { /* block id: 230 */
            int32_t *l_567[1][4];
            int16_t l_568 = 9L;
            uint64_t *l_581 = &p_2004->g_582;
            uint8_t **l_592 = &l_591;
            uint32_t *l_593 = &p_2004->g_161;
            int32_t **l_594 = (void*)0;
            int32_t **l_595 = &l_567[0][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_567[i][j] = &l_131[1][2][2];
            }
            for (l_553 = 25; (l_553 > 56); l_553 = safe_add_func_int16_t_s_s(l_553, 6))
            { /* block id: 233 */
                int32_t *l_566 = (void*)0;
                return l_566;
            }
            p_63 = func_65(&p_2004->g_339[0], p_2004);
            --l_576;
            (*l_595) = func_65(((((*p_63) &= (*p_2004->g_155)) <= ((*l_593) = (safe_mul_func_uint16_t_u_u((((l_571 >= (((l_570[0][0] |= ((*l_581) = p_2004->g_83)) , p_2004->g_583) != (void*)0)) & (l_573[0] ^ (((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((((*l_592) = l_591) == &p_2004->g_194) == p_2004->g_108), p_64)), p_60)) , 0x2FL) , l_569))) , p_2004->g_265[0][0].f0), 9L)))) , &p_2004->g_575[2]), p_2004);
        }
        --l_601;
        if (((((*l_604) = &p_2004->g_155) == &p_63) != ((((~(((safe_rshift_func_uint8_t_u_s(p_60, 4)) >= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((&p_2004->g_209 == (l_616 = ((*l_614) = ((*l_612) = l_611[0][5][0])))), (0x37L >= (((*l_423) = ((void*)0 == &p_2004->g_409)) >= (l_617 , (*p_2004->g_337)))))), 0))) | (*l_597))) , p_64) <= p_2004->g_575[0]) ^ p_60)))
        { /* block id: 251 */
            for (p_2004->g_258.f1 = (-30); (p_2004->g_258.f1 > 58); p_2004->g_258.f1++)
            { /* block id: 254 */
                int32_t *l_625 = &l_131[1][0][3];
                struct S0 l_626 = {0x13B7B4B6F5595D0AL};
                for (p_2004->g_264.f4 = (-5); (p_2004->g_264.f4 <= (-9)); p_2004->g_264.f4 = safe_sub_func_uint32_t_u_u(p_2004->g_264.f4, 1))
                { /* block id: 257 */
                    uint8_t l_622 = 0x9AL;
                    l_622++;
                    (*l_596) |= l_72;
                    l_625 = p_63;
                    l_617 = l_626;
                    if (p_2004->g_47.f0)
                        goto lbl_629;
                }
                for (l_569 = 9; (l_569 == (-28)); l_569 = safe_sub_func_uint64_t_u_u(l_569, 3))
                { /* block id: 265 */
                    (1 + 1);
                }
                return (**l_604);
            }
lbl_629:
            (**l_604) = p_61;
            return p_62;
        }
        else
        { /* block id: 276 */
            int32_t ***l_634 = (void*)0;
            for (p_64 = 1; (p_64 <= 4); p_64 += 1)
            { /* block id: 279 */
                int32_t *l_630 = &l_570[0][0];
                union U1 **l_635 = &p_2004->g_259;
                (**l_604) = l_630;
                for (p_2004->g_582 = 0; (p_2004->g_582 <= 4); p_2004->g_582 += 1)
                { /* block id: 283 */
                    struct S0 *****l_631 = (void*)0;
                    uint64_t l_648 = 2UL;
                    int i;
                    (*l_596) = (p_2004->g_339[p_64] , ((void*)0 != l_631));
                    (***l_604) ^= (l_131[1][3][3] = ((void*)0 != l_406));
                    (*l_597) = ((safe_add_func_uint32_t_u_u(p_64, (l_406 == (((void*)0 != l_634) , l_635)))) || (((!((safe_rshift_func_uint16_t_u_s((((*l_630) = (safe_add_func_uint8_t_u_u(((0x30BBL == ((safe_sub_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((p_2004->g_209 = ((((p_60 ^ ((((safe_div_func_uint8_t_u_u(((*p_2004->g_155) <= 1L), p_2004->g_575[2])) ^ (*l_630)) ^ l_648) , 0x53L)) ^ p_60) ^ p_60) < 0x0067L)), 0x41C0L)) ^ p_64) , p_60) <= p_64), p_60)) == p_64)) <= (*l_630)), (*p_2004->g_48)))) && l_553), l_553)) , l_648)) , &p_2004->g_194) == (void*)0));
                    if (l_649[5])
                        break;
                }
            }
            if (l_553)
                goto lbl_650;
lbl_650:
            (*l_604) = (*l_604);
            (*l_597) ^= ((safe_sub_func_int64_t_s_s((((void*)0 != &p_2004->g_161) , (((((*p_62) , (l_649[5] ^ (l_655 > (*p_2004->g_48)))) || ((*p_2004->g_337) = (&p_2004->g_105 != &p_2004->g_104))) == ((+0x16BEL) <= p_60)) >= p_2004->g_170)), 0x2E5254C128F835D2L)) != p_2004->g_49[1][3][0]);
            (*l_597) |= 1L;
        }
        l_131[1][2][2] = (safe_lshift_func_uint16_t_u_u((((***l_604) = ((l_658 = &p_2004->g_259) == (void*)0)) , p_2004->g_108), 0));
    }
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_47.f0 p_2004->g_69
 * writes: p_2004->g_47.f0
 */
int32_t * func_65(int8_t * p_66, struct S3 * p_2004)
{ /* block id: 15 */
    int8_t l_68[2];
    int i;
    for (i = 0; i < 2; i++)
        l_68[i] = 0x22L;
    for (p_2004->g_47.f0 = 0; (p_2004->g_47.f0 <= 1); p_2004->g_47.f0 += 1)
    { /* block id: 18 */
        int i;
        if (l_68[p_2004->g_47.f0])
            break;
    }
    return p_2004->g_69[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_2004->g_76 p_2004->g_83 p_2004->g_70 p_2004->g_7 p_2004->g_49
 * writes: p_2004->g_76 p_2004->g_104 p_2004->g_83 p_2004->g_105
 */
int8_t * func_73(int8_t * p_74, int64_t  p_75, struct S3 * p_2004)
{ /* block id: 25 */
    volatile int32_t * volatile **l_79 = &p_2004->g_76;
    int32_t *l_80 = &p_2004->g_7;
    int32_t **l_81 = &l_80;
    int32_t *l_82[8][9][3] = {{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}},{{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0},{&p_2004->g_7,&p_2004->g_7,(void*)0}}};
    int8_t *l_90[10][2][9] = {{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}},{{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]},{&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0],&p_2004->g_49[1][3][0]}}};
    uint64_t l_95 = 0xF2BDDC7CBFABE471L;
    uint8_t l_100 = 4UL;
    int32_t l_101[4] = {0x65C6936EL,0x65C6936EL,0x65C6936EL,0x65C6936EL};
    uint32_t l_102 = 8UL;
    int64_t *l_103 = &p_2004->g_104;
    int i, j, k;
    (*l_79) = p_2004->g_76;
    l_82[1][0][1] = ((*l_81) = l_80);
    p_2004->g_83 = (safe_add_func_int16_t_s_s((p_2004->g_83 < (safe_mul_func_uint16_t_u_u((+(safe_mod_func_uint32_t_u_u(((p_74 = p_74) == l_90[2][0][3]), (safe_add_func_int64_t_s_s(((*l_103) = (((safe_sub_func_uint16_t_u_u(l_95, ((((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_2004->g_70, (**l_81))), (-4L))) , (l_100 , p_75)) & p_75) ^ l_101[2]))) != (**l_81)) || l_102)), p_75))))), (**l_81)))), (-3L)));
    p_2004->g_105 = ((*l_80) , (p_2004->g_83 &= p_2004->g_49[1][3][0]));
    return l_90[9][1][7];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_2005;
    struct S3* p_2004 = &c_2005;
    struct S3 c_2006 = {
        0x44AD72D7L, // p_2004->g_2
        0x5F0ED1ADL, // p_2004->g_3
        {0x64E6DC66L,0x64E6DC66L,0x64E6DC66L,0x64E6DC66L,0x64E6DC66L,0x64E6DC66L}, // p_2004->g_6
        (-1L), // p_2004->g_7
        (-1L), // p_2004->g_17
        {(-10L),(-10L)}, // p_2004->g_21
        {1UL}, // p_2004->g_47
        {{{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL}},{{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL},{0x4DL,0x4DL}}}, // p_2004->g_49
        &p_2004->g_49[1][3][0], // p_2004->g_48
        (-5L), // p_2004->g_70
        {&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70,&p_2004->g_70}, // p_2004->g_69
        5L, // p_2004->g_78
        &p_2004->g_78, // p_2004->g_77
        &p_2004->g_77, // p_2004->g_76
        0x75F5401BL, // p_2004->g_83
        (-1L), // p_2004->g_104
        0x234B592E16A0CFD0L, // p_2004->g_105
        0xC31A0A76656E8C2BL, // p_2004->g_108
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_2004->g_122
        0x331C24E8L, // p_2004->g_133
        &p_2004->g_83, // p_2004->g_155
        {&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155,&p_2004->g_155}, // p_2004->g_154
        0x42C5C11FL, // p_2004->g_161
        0x157FL, // p_2004->g_170
        (-1L), // p_2004->g_177
        0x86L, // p_2004->g_194
        1L, // p_2004->g_209
        {0xA505E2F4L}, // p_2004->g_258
        {0xF195CB6CL}, // p_2004->g_260
        &p_2004->g_260, // p_2004->g_259
        {{{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}}},{{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}}},{{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}}},{{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}},{{4294967287UL},{0xE1750489L},{0x3C7E615FL},{4294967289UL},{1UL},{2UL},{0x98A5BDFAL},{0xAC3036BEL}}}}, // p_2004->g_263
        {0x66F533BDL}, // p_2004->g_264
        {{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}},{{0UL},{6UL},{5UL},{0x892BBAF6L},{6UL},{0x892BBAF6L},{5UL},{6UL},{0UL},{0UL}}}, // p_2004->g_265
        &p_2004->g_108, // p_2004->g_337
        {0x07L,0x07L,0x07L,0x07L,0x07L}, // p_2004->g_339
        (void*)0, // p_2004->g_395
        (void*)0, // p_2004->g_409
        0x76E2L, // p_2004->g_440
        &p_2004->g_440, // p_2004->g_439
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_2004->g_438
        (void*)0, // p_2004->g_500
        (void*)0, // p_2004->g_502
        &p_2004->g_502, // p_2004->g_501
        (void*)0, // p_2004->g_503
        {{{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503}},{{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503}},{{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503},{&p_2004->g_503,&p_2004->g_503,&p_2004->g_503}}}, // p_2004->g_499
        {1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_2004->g_575
        0xA5D7CBA5F6FDC8B9L, // p_2004->g_582
        255UL, // p_2004->g_586
        {{&p_2004->g_586,&p_2004->g_586,&p_2004->g_586,&p_2004->g_586,&p_2004->g_586}}, // p_2004->g_585
        &p_2004->g_585[0][3], // p_2004->g_584
        &p_2004->g_584, // p_2004->g_583
        (-9L), // p_2004->g_701
        (-3L), // p_2004->g_740
        {{0x0046352A8EC40130L}}, // p_2004->g_742
        &p_2004->g_742, // p_2004->g_741
        {{0xB8019219DFEF6A15L}}, // p_2004->g_788
        {{0xF775672D78C6C59EL}}, // p_2004->g_791
        0x0163L, // p_2004->g_822
        (void*)0, // p_2004->g_833
        &p_2004->g_833, // p_2004->g_832
        &p_2004->g_48, // p_2004->g_882
        {4294967295UL}, // p_2004->g_921
        &p_2004->g_395, // p_2004->g_1051
        &p_2004->g_1051, // p_2004->g_1050
        (void*)0, // p_2004->g_1114
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_2004->g_1165
        (-2L), // p_2004->g_1179
        {{18446744073709551615UL}}, // p_2004->g_1207
        {0x217E0F3CL}, // p_2004->g_1233
        {{&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1},{&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1},{&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1},{&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1},{&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1,&p_2004->g_1233.f1}}, // p_2004->g_1277
        &p_2004->g_263[0][3][2].f1, // p_2004->g_1278
        (void*)0, // p_2004->g_1282
        &p_2004->g_1282, // p_2004->g_1281
        {0xA5A138E9L}, // p_2004->g_1360
        {{0xBD38E544L},{0xBD38E544L},{0xBD38E544L},{0xBD38E544L},{0xBD38E544L}}, // p_2004->g_1364
        0xB7L, // p_2004->g_1393
        {0xF1EA5C5CL,0xF1EA5C5CL,0xF1EA5C5CL,0xF1EA5C5CL,0xF1EA5C5CL}, // p_2004->g_1414
        &p_2004->g_259, // p_2004->g_1495
        &p_2004->g_1495, // p_2004->g_1494
        {{{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791},{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791},{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791}},{{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791},{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791},{&p_2004->g_791,&p_2004->g_788,&p_2004->g_791,&p_2004->g_791}}}, // p_2004->g_1563
        &p_2004->g_1563[1][2][2], // p_2004->g_1562
        &p_2004->g_155, // p_2004->g_1570
        {{0x36AD3A9676417F8CL}}, // p_2004->g_1620
        {0x2761CF18L,0x1D285830L,0x2761CF18L,0x2761CF18L,0x1D285830L,0x2761CF18L}, // p_2004->g_1642
        &p_2004->g_155, // p_2004->g_1657
        {4294967295UL}, // p_2004->g_1665
        (void*)0, // p_2004->g_1718
        0x6454FF5CL, // p_2004->g_1761
        {{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}},{{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7},{&p_2004->g_177,&p_2004->g_7,&p_2004->g_7,(void*)0,&p_2004->g_7}}}, // p_2004->g_1806
        &p_2004->g_1806[3][4][2], // p_2004->g_1805
        {{{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL}},{{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL}},{{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL}},{{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL},{0UL},{2UL},{2UL}}}, // p_2004->g_1847
        0x25040BC9L, // p_2004->g_1870
        {{0xFCB4505FA698E65BL}}, // p_2004->g_1902
        8L, // p_2004->g_1971
        {{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0},{&p_2004->g_791.f0,&p_2004->g_1847[2][1],&p_2004->g_791.f0,&p_2004->g_47,(void*)0,&p_2004->g_791.f0}}, // p_2004->g_1983
        {0x92D8EAC32E7B3C1AL}, // p_2004->g_2003
    };
    c_2005 = c_2006;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2004);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2004->g_2, "p_2004->g_2", print_hash_value);
    transparent_crc(p_2004->g_3, "p_2004->g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2004->g_6[i], "p_2004->g_6[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_7, "p_2004->g_7", print_hash_value);
    transparent_crc(p_2004->g_17, "p_2004->g_17", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2004->g_21[i], "p_2004->g_21[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_47.f0, "p_2004->g_47.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2004->g_49[i][j][k], "p_2004->g_49[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2004->g_70, "p_2004->g_70", print_hash_value);
    transparent_crc(p_2004->g_78, "p_2004->g_78", print_hash_value);
    transparent_crc(p_2004->g_83, "p_2004->g_83", print_hash_value);
    transparent_crc(p_2004->g_104, "p_2004->g_104", print_hash_value);
    transparent_crc(p_2004->g_105, "p_2004->g_105", print_hash_value);
    transparent_crc(p_2004->g_108, "p_2004->g_108", print_hash_value);
    transparent_crc(p_2004->g_133, "p_2004->g_133", print_hash_value);
    transparent_crc(p_2004->g_161, "p_2004->g_161", print_hash_value);
    transparent_crc(p_2004->g_170, "p_2004->g_170", print_hash_value);
    transparent_crc(p_2004->g_177, "p_2004->g_177", print_hash_value);
    transparent_crc(p_2004->g_194, "p_2004->g_194", print_hash_value);
    transparent_crc(p_2004->g_209, "p_2004->g_209", print_hash_value);
    transparent_crc(p_2004->g_258.f0, "p_2004->g_258.f0", print_hash_value);
    transparent_crc(p_2004->g_260.f0, "p_2004->g_260.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2004->g_263[i][j][k].f0, "p_2004->g_263[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2004->g_264.f0, "p_2004->g_264.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2004->g_265[i][j].f0, "p_2004->g_265[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2004->g_339[i], "p_2004->g_339[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_440, "p_2004->g_440", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2004->g_575[i], "p_2004->g_575[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_582, "p_2004->g_582", print_hash_value);
    transparent_crc(p_2004->g_586, "p_2004->g_586", print_hash_value);
    transparent_crc(p_2004->g_701, "p_2004->g_701", print_hash_value);
    transparent_crc(p_2004->g_740, "p_2004->g_740", print_hash_value);
    transparent_crc(p_2004->g_742.f0.f0, "p_2004->g_742.f0.f0", print_hash_value);
    transparent_crc(p_2004->g_788.f0.f0, "p_2004->g_788.f0.f0", print_hash_value);
    transparent_crc(p_2004->g_791.f0.f0, "p_2004->g_791.f0.f0", print_hash_value);
    transparent_crc(p_2004->g_822, "p_2004->g_822", print_hash_value);
    transparent_crc(p_2004->g_921.f0, "p_2004->g_921.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2004->g_1165[i], "p_2004->g_1165[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_1179, "p_2004->g_1179", print_hash_value);
    transparent_crc(p_2004->g_1207.f0.f0, "p_2004->g_1207.f0.f0", print_hash_value);
    transparent_crc(p_2004->g_1233.f0, "p_2004->g_1233.f0", print_hash_value);
    transparent_crc(p_2004->g_1360.f0, "p_2004->g_1360.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2004->g_1364[i].f0, "p_2004->g_1364[i].f0", print_hash_value);

    }
    transparent_crc(p_2004->g_1393, "p_2004->g_1393", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2004->g_1414[i], "p_2004->g_1414[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_1620.f0.f0, "p_2004->g_1620.f0.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2004->g_1642[i], "p_2004->g_1642[i]", print_hash_value);

    }
    transparent_crc(p_2004->g_1665.f0, "p_2004->g_1665.f0", print_hash_value);
    transparent_crc(p_2004->g_1761, "p_2004->g_1761", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2004->g_1847[i][j].f0, "p_2004->g_1847[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2004->g_1870, "p_2004->g_1870", print_hash_value);
    transparent_crc(p_2004->g_1902.f0.f0, "p_2004->g_1902.f0.f0", print_hash_value);
    transparent_crc(p_2004->g_1971, "p_2004->g_1971", print_hash_value);
    transparent_crc(p_2004->g_2003.f0, "p_2004->g_2003.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
