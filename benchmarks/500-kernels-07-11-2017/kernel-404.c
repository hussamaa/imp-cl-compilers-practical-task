// -g 99,80,1 -l 3,10,1
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


// Seed: 2165220397

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint32_t g_6;
    uint16_t g_8;
    uint32_t g_9;
    uint16_t g_32;
    uint16_t *g_31[2];
    int32_t g_58;
    int32_t g_74;
    int8_t g_92[7][10];
    int8_t g_93[4];
    int32_t g_94;
    uint8_t g_95;
    int32_t * volatile g_99;
    int8_t g_121;
    int8_t *g_120;
    int8_t *g_122;
    uint32_t g_149;
    uint32_t g_153;
    uint16_t g_174;
    uint16_t g_181;
    int16_t g_184[2];
    int8_t g_192;
    volatile int16_t g_193;
    volatile uint64_t g_194;
    uint32_t *g_204[4][7];
    uint32_t **g_203;
    uint32_t *** volatile g_202;
    int64_t g_254[6][6];
    uint32_t g_256;
    int16_t g_259;
    int32_t * volatile g_327[1];
    int32_t ** volatile g_368;
    int32_t *g_370;
    int32_t ** volatile g_369[7][4];
    int32_t ** volatile g_372;
    int64_t g_420;
    uint64_t g_428;
    volatile int64_t g_461;
    uint32_t g_486;
    int32_t ** volatile g_489;
    int32_t ** volatile g_532;
    int32_t ** volatile g_546;
    int16_t g_603;
    int16_t *g_616;
    int16_t **g_615[4];
    uint8_t *g_623;
    int64_t g_671;
    int64_t *g_780;
    volatile int64_t g_798;
    uint32_t *g_861;
    int8_t **g_953;
    int8_t ***g_952;
    volatile int32_t g_975;
    volatile int32_t *g_974;
    volatile int32_t **g_973;
    int32_t *g_1059;
    int32_t *g_1066;
    int64_t **g_1101;
    int32_t ** volatile g_1117[5];
    int32_t ** volatile g_1118;
    uint32_t *g_1132;
    int32_t ** volatile g_1178;
    int32_t ** volatile g_1179;
    volatile uint64_t g_1214[2][6];
    volatile uint32_t g_1240;
    uint16_t g_1274;
    int64_t * volatile *g_1297;
    int64_t * volatile **g_1296;
    volatile int16_t *** volatile *g_1349;
    int16_t ***g_1379;
    volatile uint32_t g_1383;
    int32_t ** volatile g_1403;
    uint8_t g_1411[8][9];
    uint32_t g_1442;
    int32_t ** volatile g_1482;
    int32_t ** volatile g_1483;
    int32_t ** volatile g_1484;
    int32_t **g_1505;
    int32_t ***g_1504[7][3];
    uint32_t g_1565;
    int32_t ****g_1567;
    int32_t ** volatile * volatile g_1586;
    uint8_t g_1622;
    volatile uint64_t g_1642;
    uint8_t g_1646;
    int64_t ***g_1657;
    uint32_t g_1747[2][7][8];
    uint32_t ***g_1776;
    uint64_t g_1835;
    volatile int32_t g_1859;
    volatile int16_t g_1919;
    int32_t g_1925;
    int32_t *g_1972;
    int32_t g_1994;
    uint32_t *g_2197[9];
    int32_t g_2255;
    uint32_t g_2338;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_2387);
int8_t  func_12(uint16_t * p_13, struct S0 * p_2387);
uint8_t  func_15(uint16_t * p_16, uint16_t * p_17, uint16_t * p_18, uint16_t  p_19, int32_t  p_20, struct S0 * p_2387);
uint16_t * func_21(int8_t  p_22, uint16_t * p_23, uint16_t * p_24, uint16_t * p_25, struct S0 * p_2387);
int8_t  func_26(uint16_t  p_27, int32_t  p_28, uint64_t  p_29, uint16_t * p_30, struct S0 * p_2387);
uint8_t  func_38(uint8_t  p_39, uint64_t  p_40, uint16_t * p_41, int32_t  p_42, uint16_t * p_43, struct S0 * p_2387);
uint8_t  func_48(uint64_t  p_49, uint16_t * p_50, int32_t  p_51, struct S0 * p_2387);
int16_t  func_52(int64_t  p_53, int32_t  p_54, uint32_t  p_55, int32_t  p_56, struct S0 * p_2387);
uint32_t  func_67(uint16_t * p_68, struct S0 * p_2387);
uint16_t  func_102(uint16_t * p_103, uint16_t  p_104, int32_t  p_105, struct S0 * p_2387);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2387->g_1132 p_2387->g_486
 * writes:
 */
uint32_t  func_1(struct S0 * p_2387)
{ /* block id: 4 */
    uint16_t *l_7 = &p_2387->g_8;
    int32_t l_14 = 6L;
    uint16_t l_33 = 65528UL;
    uint16_t *l_1649 = &p_2387->g_174;
    uint16_t *l_1650 = &l_33;
    uint16_t **l_1654 = &l_1650;
    int32_t *l_1924 = &p_2387->g_1925;
    uint64_t *l_1928 = &p_2387->g_1835;
    uint64_t **l_1929 = (void*)0;
    uint64_t **l_1930 = &l_1928;
    uint64_t *l_1931 = &p_2387->g_428;
    int16_t ****l_1942 = &p_2387->g_1379;
    int8_t *l_1943 = (void*)0;
    int8_t *l_1944 = (void*)0;
    int8_t *l_1945 = &p_2387->g_92[1][3];
    uint32_t l_1946 = 0x46A0FEE1L;
    uint32_t l_2055 = 4294967295UL;
    uint64_t l_2062 = 18446744073709551615UL;
    int32_t l_2063 = 0x70AEFE72L;
    int8_t ***l_2071[5][7][7] = {{{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953}},{{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953}},{{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953}},{{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953}},{{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953},{&p_2387->g_953,&p_2387->g_953,(void*)0,&p_2387->g_953,(void*)0,&p_2387->g_953,&p_2387->g_953}}};
    int64_t *l_2078 = &p_2387->g_420;
    int64_t **l_2077 = &l_2078;
    int16_t l_2093 = 0x2368L;
    uint32_t **l_2097[4][1][6] = {{{&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861}},{{&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861}},{{&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861}},{{&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861,&p_2387->g_861}}};
    int32_t **l_2149 = &p_2387->g_1066;
    uint16_t l_2182 = 0xD7D0L;
    int16_t l_2202 = 4L;
    uint8_t l_2217 = 251UL;
    int32_t l_2240 = 1L;
    int32_t l_2241 = 0x481A4CEBL;
    int32_t l_2243[3][1];
    int32_t l_2265[7];
    uint64_t l_2270 = 0xD1D6F075B90D8CCEL;
    uint32_t ***l_2281[5];
    int8_t l_2340 = 0x79L;
    uint32_t l_2371 = 0UL;
    uint64_t l_2382[9][8] = {{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL},{0xB76F5E99D1D09A26L,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0xB76F5E99D1D09A26L,18446744073709551609UL}};
    int32_t *l_2386 = &l_2240;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2243[i][j] = 6L;
    }
    for (i = 0; i < 7; i++)
        l_2265[i] = 1L;
    for (i = 0; i < 5; i++)
        l_2281[i] = &p_2387->g_203;
    return (*p_2387->g_1132);
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_1657 p_2387->g_623 p_2387->g_95 p_2387->g_93 p_2387->g_184 p_2387->g_1296 p_2387->g_1297 p_2387->g_780 p_2387->g_254 p_2387->g_973 p_2387->g_974 p_2387->g_861 p_2387->g_256 p_2387->g_975 p_2387->g_1646 p_2387->g_420 p_2387->g_671 p_2387->g_952 p_2387->g_953 p_2387->g_120 p_2387->g_1747 p_2387->g_1214 p_2387->g_6 p_2387->g_58 p_2387->g_99 p_2387->g_74 p_2387->g_1505 p_2387->g_1776 p_2387->g_202 p_2387->g_203 p_2387->g_370 p_2387->g_489 p_2387->g_1101 p_2387->g_121 p_2387->g_1859 p_2387->g_1059 p_2387->g_603 p_2387->g_204 p_2387->g_1919 p_2387->g_1622
 * writes: p_2387->g_975 p_2387->g_74 p_2387->g_1622 p_2387->g_31 p_2387->g_254 p_2387->g_121 p_2387->g_1747 p_2387->g_428 p_2387->g_259 p_2387->g_603 p_2387->g_58 p_2387->g_370 p_2387->g_1776 p_2387->g_95 p_2387->g_92 p_2387->g_256 p_2387->g_1835 p_2387->g_1565
 */
int8_t  func_12(uint16_t * p_13, struct S0 * p_2387)
{ /* block id: 768 */
    int64_t **l_1656 = &p_2387->g_780;
    int64_t ***l_1655[2];
    int64_t ****l_1658[2][7] = {{&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657},{&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657,&p_2387->g_1657}};
    int64_t ***l_1659 = &l_1656;
    int8_t ****l_1662[2];
    int32_t l_1663 = 0x5498E533L;
    int32_t ****l_1666 = &p_2387->g_1504[1][0];
    uint32_t l_1667 = 0x8E483C8EL;
    uint16_t l_1668[4];
    uint16_t **l_1678 = &p_2387->g_31[0];
    uint8_t l_1681 = 0xF6L;
    uint32_t **l_1709 = (void*)0;
    int32_t l_1710 = 0x7DD16CCAL;
    uint32_t *l_1714 = &p_2387->g_149;
    uint32_t l_1729 = 2UL;
    int64_t *l_1788 = &p_2387->g_420;
    int64_t **l_1787[6][5] = {{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0},{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0},{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0},{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0},{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0},{&l_1788,(void*)0,(void*)0,&l_1788,(void*)0}};
    int32_t l_1798[1];
    uint32_t **l_1854 = &p_2387->g_1132;
    int8_t l_1885[4];
    int32_t l_1886 = 0x7D6446BDL;
    uint16_t l_1910 = 0xB0E3L;
    uint8_t l_1911 = 0xE5L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1655[i] = &l_1656;
    for (i = 0; i < 2; i++)
        l_1662[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_1668[i] = 0x6E82L;
    for (i = 0; i < 1; i++)
        l_1798[i] = 0x67B6D72AL;
    for (i = 0; i < 4; i++)
        l_1885[i] = 1L;
    (**p_2387->g_973) = ((l_1655[0] != (l_1659 = p_2387->g_1657)) , ((safe_rshift_func_int16_t_s_s(((((!0UL) , ((void*)0 != l_1662[0])) == (255UL & (*p_2387->g_623))) & (((((l_1663 < (safe_mul_func_int16_t_s_s(((((((p_2387->g_93[1] , p_2387->g_184[1]) , l_1666) != &p_2387->g_1586) < 0L) > 0x0AB7C2A4L) ^ l_1663), l_1663))) > 0UL) & (***p_2387->g_1296)) > l_1667) < l_1668[2])), l_1668[2])) && 0x4E00L));
lbl_1836:
    for (p_2387->g_74 = 0; (p_2387->g_74 >= (-25)); p_2387->g_74 = safe_sub_func_int16_t_s_s(p_2387->g_74, 1))
    { /* block id: 773 */
        int32_t l_1671 = 0x1DB86DBFL;
        (*p_2387->g_974) = (l_1671 != (l_1671 , (safe_sub_func_int32_t_s_s(((((l_1671 > (safe_add_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((&p_13 == l_1678), ((safe_mul_func_uint16_t_u_u((1L || l_1681), l_1671)) <= (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s(l_1671, (*p_2387->g_780))), l_1671))))) , (*p_2387->g_861)) != (*p_2387->g_861)) || l_1671), l_1671))) , (*p_2387->g_974)) > (-1L)) , l_1671), (*p_2387->g_861)))));
    }
    for (p_2387->g_1622 = 0; (p_2387->g_1622 == 53); p_2387->g_1622 = safe_add_func_int8_t_s_s(p_2387->g_1622, 3))
    { /* block id: 778 */
        uint32_t l_1704 = 0UL;
        uint16_t *l_1707 = &l_1668[2];
        int32_t *l_1708 = &l_1663;
        int8_t ****l_1727 = &p_2387->g_952;
        int32_t l_1742 = (-10L);
        int32_t l_1743 = 0x2B422C4AL;
        int32_t l_1744 = (-4L);
        int32_t l_1746[9][5][5] = {{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}},{{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL},{(-6L),0x40688DB8L,(-1L),(-6L),0x437A67CDL}}};
        uint16_t l_1759 = 0x3730L;
        uint32_t l_1760[6];
        int64_t *l_1771[8] = {&p_2387->g_420,&p_2387->g_420,&p_2387->g_420,&p_2387->g_420,&p_2387->g_420,&p_2387->g_420,&p_2387->g_420,&p_2387->g_420};
        int64_t ****l_1782 = &l_1655[0];
        int8_t l_1794 = 0x2CL;
        int32_t l_1920 = 0x36C3AC5BL;
        int64_t l_1921[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1760[i] = 0x3DC91AF9L;
        if (((((l_1710 ^= (~((p_2387->g_1646 , (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(0x29L, l_1668[0])) && (((((safe_add_func_uint64_t_u_u(p_2387->g_420, (safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(((*l_1708) = ((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_1704 ^ l_1704), (((((safe_add_func_int32_t_s_s(l_1704, (((*l_1678) = l_1707) != (void*)0))) < 0x588124272A0FCC36L) , (**p_2387->g_1297)) , 4294967295UL) >= l_1704))), 14)) && l_1681), 1L)) , l_1704)), (*p_2387->g_861))) | l_1704), l_1704)))) , (*l_1708)) , l_1709) != (void*)0) & 0x6D05D24469E59CC0L)), 0x2A2901D3L))) && (*l_1708)))) < 0x7DA1C845L) , (*l_1708)) & p_2387->g_671))
        { /* block id: 782 */
            int64_t l_1724 = 1L;
            int32_t l_1730[8] = {0x5BC2B6DDL,0L,0x5BC2B6DDL,0x5BC2B6DDL,0L,0x5BC2B6DDL,0x5BC2B6DDL,0L};
            uint32_t **l_1757 = &p_2387->g_204[2][4];
            int i;
            for (l_1663 = 0; (l_1663 <= 1); l_1663 += 1)
            { /* block id: 785 */
                int64_t **l_1711 = &p_2387->g_780;
                int32_t l_1728 = 0L;
                int32_t l_1741 = 0x6F32543BL;
                int i;
                if (((((void*)0 != l_1711) && (safe_mul_func_int16_t_s_s(((l_1714 == l_1708) <= (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_1724 |= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(0x305B3842L)), 6))), ((((****l_1727) = ((((*p_2387->g_780) &= (((safe_mul_func_int16_t_s_s(l_1681, (0UL && ((l_1662[l_1663] = l_1662[l_1663]) == l_1727)))) < l_1728) > l_1729)) == l_1730[5]) == l_1728)) & (*p_2387->g_623)) ^ 0x0CL))), (-5L))) , 6L), (*p_2387->g_623)))), l_1728))) , l_1728))
                { /* block id: 790 */
                    int32_t *l_1731 = &p_2387->g_94;
                    int32_t *l_1732 = &p_2387->g_74;
                    int32_t *l_1733 = &l_1710;
                    int32_t *l_1734 = &l_1730[5];
                    int32_t *l_1735 = &l_1710;
                    int32_t *l_1736 = (void*)0;
                    int32_t *l_1737 = &l_1728;
                    int32_t *l_1738 = &l_1728;
                    int32_t *l_1739 = (void*)0;
                    int32_t *l_1740[6];
                    int32_t l_1745[2][4][3] = {{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}}};
                    uint64_t *l_1750 = &p_2387->g_428;
                    int16_t *l_1758 = &p_2387->g_259;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1740[i] = &p_2387->g_94;
                    p_2387->g_1747[1][1][1]--;
                    (*l_1733) = (((*l_1750) = p_2387->g_1214[0][1]) > (l_1730[5] ^ ((safe_div_func_uint8_t_u_u((*p_2387->g_623), (l_1759 = (((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((p_2387->g_6 >= (((****l_1727) = (((*l_1708) | (l_1757 == (void*)0)) <= (0x663DL <= ((*l_1758) = ((void*)0 != &l_1730[5]))))) >= (*p_2387->g_623))), 1UL)), (*p_2387->g_623))) , (*l_1708)) | 5L) ^ 0x5DD1BFF0A1DBB83EL) | (-1L))))) <= (*l_1708))));
                }
                else
                { /* block id: 797 */
                    l_1730[5] = l_1760[2];
                }
                if (l_1730[5])
                    continue;
            }
            for (p_2387->g_603 = 4; (p_2387->g_603 >= 0); p_2387->g_603 -= 1)
            { /* block id: 804 */
                uint32_t l_1769 = 0x75541F40L;
                for (l_1744 = 0; (l_1744 <= 5); l_1744 += 1)
                { /* block id: 807 */
                    uint64_t l_1763 = 1UL;
                    for (p_2387->g_58 = 1; (p_2387->g_58 >= 0); p_2387->g_58 -= 1)
                    { /* block id: 810 */
                        int32_t *l_1764[6] = {&p_2387->g_58,&p_2387->g_58,&p_2387->g_58,&p_2387->g_58,&p_2387->g_58,&p_2387->g_58};
                        int i;
                        (*p_2387->g_974) |= (l_1760[p_2387->g_58] && ((((safe_lshift_func_int8_t_s_s((0x11L != (((*l_1708) < 0UL) , (l_1763 >= ((void*)0 == l_1764[4])))), ((l_1730[5] = (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(0x38033A1EL, (*l_1708))), 0))) & 0x6BL))) && l_1730[2]) <= (*l_1708)) > l_1760[p_2387->g_58]));
                        (*p_2387->g_99) &= l_1730[5];
                        (*l_1708) ^= l_1769;
                        if (l_1760[p_2387->g_58])
                            break;
                    }
                }
                return l_1769;
            }
        }
        else
        { /* block id: 820 */
            int64_t *l_1770 = &p_2387->g_420;
            int32_t *l_1772 = &l_1742;
            uint32_t **l_1781 = &p_2387->g_204[1][5];
            int32_t l_1795 = (-7L);
            uint32_t **l_1821[2];
            uint32_t ***l_1820 = &l_1821[1];
            uint32_t l_1887 = 0x91A83ACDL;
            int i;
            for (i = 0; i < 2; i++)
                l_1821[i] = (void*)0;
            if (((l_1771[3] = l_1770) != l_1770))
            { /* block id: 822 */
                int64_t ****l_1773 = &l_1655[0];
                uint32_t **l_1780 = &l_1714;
                uint32_t ***l_1779[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_1783[10];
                uint32_t ***l_1784 = (void*)0;
                int i, j;
                for (i = 0; i < 10; i++)
                    l_1783[i] = 0x46209039L;
                (*p_2387->g_1505) = l_1772;
                (*p_2387->g_1505) = &l_1746[0][0][3];
                (**p_2387->g_1505) &= ((l_1783[7] = ((&p_2387->g_1296 == l_1773) | (0x5492F9256AE7D2FAL & (safe_add_func_uint16_t_u_u(0xF357L, ((p_2387->g_1776 = p_2387->g_1776) == (((((safe_rshift_func_uint16_t_u_u((((*p_2387->g_202) != (l_1781 = &p_2387->g_204[3][1])) , 0xAD84L), 8)) == ((((((l_1782 != (void*)0) == l_1783[7]) & 65535UL) , (*p_2387->g_623)) == 3UL) < 0x64CBL)) || 0x6F5D58B3L) != (*l_1772)) , l_1784))))))) > (*l_1772));
                l_1772 = (*p_2387->g_489);
            }
            else
            { /* block id: 830 */
                int32_t l_1796[6][9] = {{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L},{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L},{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L},{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L},{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L},{0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L,0x095BEEE5L}};
                int32_t l_1797 = 0x3F83204DL;
                uint8_t l_1799 = 0xB9L;
                uint32_t *l_1823[8] = {&p_2387->g_149,&p_2387->g_149,&p_2387->g_149,&p_2387->g_149,&p_2387->g_149,&p_2387->g_149,&p_2387->g_149,&p_2387->g_149};
                uint32_t **l_1853[1];
                int32_t l_1883 = 5L;
                int32_t l_1884 = (-9L);
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1853[i] = &p_2387->g_1132;
                if (((safe_rshift_func_uint8_t_u_s(((1L <= (+(*l_1708))) ^ ((p_2387->g_1101 != (l_1787[1][2] = &l_1771[0])) | (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((*l_1772) != (((void*)0 != &p_2387->g_1411[1][7]) || (&l_1708 == &l_1772))), 0x5C6B47B1L)), 0x349C772EL)))), (*l_1708))) & (*p_13)))
                { /* block id: 832 */
                    int32_t *l_1793[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1793[i] = &l_1710;
                    --l_1799;
                }
                else
                { /* block id: 834 */
                    int32_t l_1812 = 0L;
                    uint32_t l_1822 = 0x8175350EL;
                    int32_t *l_1861 = &l_1798[0];
                    int32_t *l_1862 = &l_1710;
                    int32_t *l_1863 = &p_2387->g_74;
                    int32_t *l_1864 = &l_1663;
                    int32_t *l_1865 = &l_1743;
                    int32_t *l_1866 = (void*)0;
                    int32_t *l_1867 = &l_1743;
                    int32_t *l_1868 = &l_1797;
                    int32_t *l_1869 = &l_1795;
                    int32_t *l_1870 = &l_1798[0];
                    int32_t *l_1871 = &l_1744;
                    int32_t *l_1872 = &p_2387->g_94;
                    int32_t *l_1873 = &l_1742;
                    int32_t *l_1874 = (void*)0;
                    int32_t *l_1875 = &l_1743;
                    int32_t *l_1876 = (void*)0;
                    int32_t *l_1877 = (void*)0;
                    int32_t *l_1878 = &l_1797;
                    int32_t *l_1879 = &p_2387->g_74;
                    int32_t *l_1880 = (void*)0;
                    int32_t *l_1881 = &l_1710;
                    int32_t *l_1882[6][3] = {{&l_1742,&l_1742,&l_1663},{&l_1742,&l_1742,&l_1663},{&l_1742,&l_1742,&l_1663},{&l_1742,&l_1742,&l_1663},{&l_1742,&l_1742,&l_1663},{&l_1742,&l_1742,&l_1663}};
                    int i, j;
                    if ((safe_mul_func_uint16_t_u_u((--(*l_1707)), ((safe_rshift_func_int16_t_s_s((((*p_2387->g_623) = l_1796[1][8]) , (safe_mod_func_uint32_t_u_u(4294967291UL, (safe_add_func_int16_t_s_s(((l_1812 > (safe_add_func_int8_t_s_s(l_1797, (**p_2387->g_953)))) & l_1796[1][8]), (((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((l_1820 != p_2387->g_1776), (*p_13))))), (*p_13))) == 0xED905B4FL) & l_1799)))))), l_1822)) && l_1796[1][8]))))
                    { /* block id: 837 */
                        int32_t l_1830 = 0L;
                        uint64_t *l_1833 = &p_2387->g_428;
                        uint64_t *l_1834[9] = {&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835,&p_2387->g_1835};
                        int i;
                        (*p_2387->g_1505) = &l_1743;
                        (*p_2387->g_370) |= (((p_2387->g_1835 = ((*l_1833) = (((****l_1782) = ((void*)0 != l_1823[4])) < ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(253UL, ((safe_lshift_func_uint8_t_u_u(0x7BL, 4)) || (((*p_2387->g_623) != (***p_2387->g_952)) != (p_2387->g_92[1][3] = l_1830))))) & (safe_div_func_uint32_t_u_u(((*p_2387->g_861) = ((*l_1772) || ((l_1668[2] || l_1796[3][7]) > l_1830))), 4294967295UL))), 4)) > 0x5372BD68L)))) | 18446744073709551609UL) ^ (*l_1708));
                    }
                    else
                    { /* block id: 845 */
                        int8_t l_1837 = 0x3BL;
                        if (l_1812)
                            goto lbl_1836;
                        if (l_1837)
                            continue;
                    }
                    for (l_1729 = (-11); (l_1729 <= 36); ++l_1729)
                    { /* block id: 851 */
                        uint8_t l_1840 = 255UL;
                        int32_t l_1855 = (-7L);
                        int16_t *l_1860 = &p_2387->g_603;
                        if (l_1840)
                            break;
                        l_1746[2][0][2] |= ((!((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((*l_1860) &= ((((*p_2387->g_1059) = (safe_div_func_int32_t_s_s(((*l_1772) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((p_2387->g_1747[1][1][1] = ((l_1840 || ((l_1855 ^= ((l_1853[0] == l_1854) , (0x0BA2668DL < ((-10L) & (*l_1708))))) , (((safe_mul_func_uint16_t_u_u((*p_13), 65528UL)) && (safe_unary_minus_func_uint32_t_u((p_2387->g_1859 <= (**p_2387->g_953))))) , (*l_1708)))) && l_1855)) , l_1840), (*l_1772))), (*p_13)))), l_1796[1][7]))) , (-1L)) ^ l_1799)), 0x15AAL)) < 18446744073709551609UL), l_1812)) != 0UL)) >= 0x56L);
                        if ((*l_1708))
                            break;
                        (*p_2387->g_1505) = &l_1855;
                    }
                    ++l_1887;
                }
            }
            for (l_1710 = (-25); (l_1710 <= 13); ++l_1710)
            { /* block id: 867 */
                int8_t **l_1900 = &p_2387->g_122;
                int32_t l_1903 = 4L;
                int32_t *l_1922 = &l_1903;
                uint32_t l_1923 = 4294967295UL;
                for (l_1743 = 3; (l_1743 <= (-2)); l_1743--)
                { /* block id: 870 */
                    uint8_t l_1904 = 0x41L;
                    (**p_2387->g_973) = ((void*)0 != &l_1760[2]);
                    if (((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((**p_2387->g_202) != (*p_2387->g_203)), 0xE9L)), 0)) , &p_2387->g_1297) != (((safe_mul_func_int8_t_s_s((l_1900 == (**l_1727)), (((*p_2387->g_623) = (*l_1708)) == (safe_add_func_int8_t_s_s((5L | (255UL & l_1903)), (*l_1772)))))) , (*p_2387->g_120)) , (void*)0)) , l_1903))
                    { /* block id: 873 */
                        int32_t l_1909 = 0x2A48B755L;
                        uint32_t *l_1918 = &l_1760[2];
                        l_1798[0] ^= (l_1904 & (((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_1904 || (l_1909 , l_1910)) > (((*l_1708) && l_1911) ^ ((*l_1918) &= (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((((((*l_1772) != (*p_2387->g_861)) != 1L) , (*l_1772)) , l_1904) && l_1904), (*p_13))) && l_1903), (-2L))), (*l_1772)))))), l_1903)), p_2387->g_1919)) , l_1920) | l_1903) , 0x704C396C7BFB9E2BL) <= 0UL));
                    }
                    else
                    { /* block id: 876 */
                        return l_1903;
                    }
                    return l_1921[4];
                }
                for (p_2387->g_1565 = 0; (p_2387->g_1565 <= 4); p_2387->g_1565 += 1)
                { /* block id: 883 */
                    l_1922 = &l_1903;
                    return l_1923;
                }
            }
        }
    }
    return (***p_2387->g_952);
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_1442 p_2387->g_1274 p_2387->g_1214
 * writes: p_2387->g_1442 p_2387->g_1274 p_2387->g_74
 */
uint8_t  func_15(uint16_t * p_16, uint16_t * p_17, uint16_t * p_18, uint16_t  p_19, int32_t  p_20, struct S0 * p_2387)
{ /* block id: 730 */
    uint8_t l_1653[9][10] = {{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L},{0x59L,0x5CL,8UL,0x5CL,0x59L,0x59L,0x5CL,8UL,0x5CL,0x59L}};
    int i, j;
    for (p_2387->g_1442 = 0; (p_2387->g_1442 <= 1); p_2387->g_1442 += 1)
    { /* block id: 733 */
        int32_t l_1651 = 0x76ECFDA3L;
        for (p_2387->g_1274 = 0; (p_2387->g_1274 <= 1); p_2387->g_1274 += 1)
        { /* block id: 736 */
            for (p_2387->g_74 = 1; (p_2387->g_74 >= 0); p_2387->g_74 -= 1)
            { /* block id: 739 */
                int i, j;
                return p_2387->g_1214[p_2387->g_1442][(p_2387->g_1274 + 2)];
            }
            for (p_20 = 0; (p_20 <= 0); p_20 += 1)
            { /* block id: 744 */
                int i, j;
                return p_2387->g_1214[p_2387->g_1274][(p_20 + 3)];
            }
        }
    }
    return l_1653[8][7];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t * func_21(int8_t  p_22, uint16_t * p_23, uint16_t * p_24, uint16_t * p_25, struct S0 * p_2387)
{ /* block id: 495 */
    int32_t *l_1225 = &p_2387->g_74;
    int32_t *l_1267 = &p_2387->g_94;
    int32_t l_1270 = 1L;
    int32_t l_1288 = 0x242722BAL;
    int64_t **l_1295[1];
    int64_t ***l_1294[5];
    int32_t *l_1302 = &p_2387->g_94;
    uint8_t l_1313 = 0UL;
    uint8_t l_1345 = 0UL;
    int16_t **l_1365 = (void*)0;
    uint8_t l_1369 = 250UL;
    int32_t l_1391 = (-1L);
    int32_t l_1393 = (-6L);
    int32_t l_1394 = (-10L);
    uint16_t *l_1412 = &p_2387->g_181;
    int32_t l_1455 = 0x0392D8ADL;
    int8_t ****l_1479 = &p_2387->g_952;
    int32_t l_1511 = 0x46A840FCL;
    int8_t l_1512 = (-4L);
    int32_t l_1513[9];
    uint32_t **l_1612 = &p_2387->g_1132;
    uint32_t ***l_1611 = &l_1612;
    int64_t l_1623[2];
    int32_t *l_1624 = &l_1513[3];
    int32_t *l_1625 = &p_2387->g_94;
    int32_t *l_1626 = &l_1513[3];
    int32_t *l_1627 = &p_2387->g_74;
    int32_t *l_1628 = &l_1288;
    int32_t *l_1629 = (void*)0;
    int32_t *l_1630 = &l_1455;
    int32_t *l_1631 = (void*)0;
    int32_t *l_1632 = &p_2387->g_74;
    int32_t *l_1633 = &l_1393;
    int32_t *l_1634 = &l_1394;
    int32_t *l_1635 = &l_1455;
    int32_t *l_1636 = (void*)0;
    int32_t *l_1637 = &l_1455;
    int32_t *l_1638 = &l_1393;
    int32_t *l_1639 = &p_2387->g_94;
    int32_t *l_1640[10] = {&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394,&l_1394};
    int64_t l_1641 = 0x02FCFCB6E3D595B0L;
    int32_t l_1645 = 0x51D11586L;
    int i;
    for (i = 0; i < 1; i++)
        l_1295[i] = &p_2387->g_780;
    for (i = 0; i < 5; i++)
        l_1294[i] = &l_1295[0];
    for (i = 0; i < 9; i++)
        l_1513[i] = (-9L);
    for (i = 0; i < 2; i++)
        l_1623[i] = 1L;
    return l_1412;
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_32 p_2387->g_974 p_2387->g_623 p_2387->g_95 p_2387->g_952 p_2387->g_953 p_2387->g_120 p_2387->g_489 p_2387->g_370 p_2387->g_94 p_2387->g_121 p_2387->g_184 p_2387->g_1101 p_2387->g_1118 p_2387->g_780 p_2387->g_254 p_2387->g_861 p_2387->g_256 p_2387->g_74 p_2387->g_1178 p_2387->g_1179 p_2387->g_546 p_2387->g_973 p_2387->g_1214
 * writes: p_2387->g_32 p_2387->g_975 p_2387->g_1059 p_2387->g_121 p_2387->g_58 p_2387->g_1066 p_2387->g_94 p_2387->g_95 p_2387->g_486 p_2387->g_603 p_2387->g_1101 p_2387->g_370 p_2387->g_1132 p_2387->g_74 p_2387->g_256 p_2387->g_1214
 */
int8_t  func_26(uint16_t  p_27, int32_t  p_28, uint64_t  p_29, uint16_t * p_30, struct S0 * p_2387)
{ /* block id: 7 */
    uint8_t l_62 = 255UL;
    int8_t l_227[9][9][3] = {{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}},{{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL},{0x17L,0x36L,0x6BL}}};
    int16_t ***l_1042 = &p_2387->g_615[2];
    int16_t ****l_1041 = &l_1042;
    uint32_t l_1049 = 0x3EDB88B4L;
    int64_t *l_1054 = &p_2387->g_420;
    int32_t l_1055[7] = {0x155818F1L,0x155818F1L,0x155818F1L,0x155818F1L,0x155818F1L,0x155818F1L,0x155818F1L};
    int32_t l_1067 = 0x2F334118L;
    int32_t l_1068 = (-7L);
    int32_t **l_1078 = (void*)0;
    int32_t l_1164 = 0x360EC872L;
    int32_t l_1165 = 0x0D725B0EL;
    int32_t l_1166 = 8L;
    int32_t l_1169 = 0x63491EA3L;
    int32_t l_1170[2];
    uint32_t l_1184 = 0xECAE5EC8L;
    uint32_t **l_1189 = &p_2387->g_1132;
    int64_t l_1213 = (-7L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1170[i] = 6L;
    for (p_28 = (-16); (p_28 <= 10); p_28 = safe_add_func_uint64_t_u_u(p_28, 1))
    { /* block id: 10 */
        uint32_t l_59 = 0UL;
        int16_t *l_1043 = &p_2387->g_603;
        int64_t *l_1052 = &p_2387->g_420;
        int64_t **l_1053 = &l_1052;
        int32_t *l_1058 = &l_1055[4];
        int32_t **l_1057[5] = {&l_1058,&l_1058,&l_1058,&l_1058,&l_1058};
        uint64_t *l_1064[5][9][2] = {{{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428}},{{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428}},{{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428}},{{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428}},{{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428},{&p_2387->g_428,&p_2387->g_428}}};
        int32_t l_1065 = (-1L);
        int32_t l_1162 = 1L;
        int32_t l_1167 = 0x5537F5EFL;
        int32_t l_1168[7] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int32_t l_1171 = 0x0B1EA685L;
        int i, j, k;
        for (p_2387->g_32 = 0; (p_2387->g_32 == 37); p_2387->g_32 = safe_add_func_uint16_t_u_u(p_2387->g_32, 7))
        { /* block id: 13 */
            int32_t *l_57 = &p_2387->g_58;
            uint16_t *l_228 = &p_2387->g_32;
            int16_t ***l_1040 = &p_2387->g_615[3];
            int16_t ****l_1039 = &l_1040;
            (1 + 1);
        }
        (*p_2387->g_974) = (~(~((p_27 | ((safe_mod_func_uint32_t_u_u(p_28, (l_1049 & (((void*)0 == &p_2387->g_546) > p_29)))) | 7L)) >= l_227[2][7][1])));
        if ((((((((*l_1053) = l_1052) == l_1054) <= (l_1055[6] , (l_1067 = ((safe_unary_minus_func_int64_t_s(((p_2387->g_1059 = &p_2387->g_58) == (p_2387->g_1066 = ((p_2387->g_58 = ((safe_add_func_int8_t_s_s(((***p_2387->g_952) = (0x177435776CEAC504L | (l_59 >= (*p_2387->g_623)))), ((safe_mod_func_uint64_t_u_u((l_1065 = (0x00ADL < (l_59 || l_59))), p_29)) || 0x5A6DL))) || 0x9B2671E7L)) , (void*)0))))) > (-1L))))) , l_1068) != p_29) < 255UL))
        { /* block id: 441 */
            int64_t l_1069 = 0x5BB9E37898B43A05L;
            (*p_2387->g_370) = (l_1069 &= (**p_2387->g_489));
            for (p_2387->g_95 = (-25); (p_2387->g_95 > 44); ++p_2387->g_95)
            { /* block id: 446 */
                int32_t **l_1077 = &p_2387->g_370;
                int32_t ***l_1076[8][7][3] = {{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}},{{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0},{(void*)0,&l_1077,(void*)0}}};
                uint32_t *l_1079 = &p_2387->g_486;
                uint8_t *l_1082 = &l_62;
                int64_t ***l_1102 = &p_2387->g_1101;
                int i, j, k;
                (**l_1077) |= (safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((*l_1079) = (&p_2387->g_327[0] != (l_1078 = (void*)0))) , (safe_div_func_uint32_t_u_u((((*l_1082) = 0x2FL) > (((*l_1102) = (((safe_sub_func_int16_t_s_s(((3L <= l_1065) || ((((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*p_30) <= (p_28 || (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((*l_1043) = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((0x60L != ((((safe_lshift_func_uint8_t_u_u((*p_2387->g_623), 5)) , (void*)0) == &p_2387->g_461) && (-1L))), 13)), p_28)), (*p_30))) && l_1069)), p_27)) < l_1069), 0x89L)))), (*p_2387->g_120))), 0xE9L)) || p_2387->g_184[1]) , p_29) != p_27)), (*p_30))) >= l_1069) , p_2387->g_1101)) == (void*)0)), l_1069))), 18446744073709551615UL)) >= (-2L)), l_1069));
            }
        }
        else
        { /* block id: 454 */
            uint64_t l_1113 = 0UL;
            int32_t *l_1116 = &l_1068;
            int16_t ****l_1119 = &l_1042;
            int32_t l_1161[7] = {0x36A2E567L,0x36A2E567L,0x36A2E567L,0x36A2E567L,0x36A2E567L,0x36A2E567L,0x36A2E567L};
            int i;
            if ((**p_2387->g_489))
            { /* block id: 455 */
                int32_t *l_1103 = (void*)0;
                int32_t *l_1104 = &p_2387->g_74;
                int32_t *l_1105 = &l_1068;
                int32_t *l_1106 = &l_1067;
                int32_t *l_1107 = &p_2387->g_74;
                int32_t *l_1108 = &p_2387->g_74;
                int32_t *l_1109 = &l_1068;
                int32_t *l_1110 = &l_1068;
                int32_t l_1111 = 0x44FBF933L;
                int32_t *l_1112 = &l_1065;
                uint32_t *l_1131[9][5] = {{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6},{&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6,&p_2387->g_6}};
                uint32_t **l_1130[9] = {&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0],&l_1131[4][0]};
                uint16_t *l_1140[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1140[i] = (void*)0;
                l_1113++;
                (*p_2387->g_1118) = l_1116;
                (*l_1108) |= (p_28 || ((((((-9L) ^ ((void*)0 == l_1119)) == ((((safe_rshift_func_int8_t_s_s(((*l_1116) || ((((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((*p_30)--), 2)) < 4L), (!(l_1065 = ((*l_1116) = (((((p_2387->g_1132 = &p_2387->g_6) != &p_2387->g_6) > (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((l_1065 ^ l_59) < l_59), p_29)) != (*l_1116)), p_29)))) ^ 0UL), p_29))) || (*p_2387->g_780)) , (*l_1110))))))), 0xB14E3EEB0E53EB18L)) | p_29) && l_59) == (*p_2387->g_861))), p_28)) , &p_2387->g_615[3]) == (*l_1119)) < (**p_2387->g_953))) , p_27) | p_29) != p_28));
            }
            else
            { /* block id: 463 */
                int32_t **l_1141 = &l_1116;
                int32_t l_1148 = 0x04E3FB00L;
                int32_t l_1158 = 0x7D26C8DBL;
                int32_t l_1159 = (-1L);
                int32_t l_1160 = 5L;
                int32_t l_1163[1][1][4];
                uint8_t l_1172 = 0x82L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1163[i][j][k] = 0x4917EDC6L;
                    }
                }
                (*l_1141) = l_1116;
                for (l_59 = 0; (l_59 < 41); l_59++)
                { /* block id: 467 */
                    int32_t *l_1144 = &p_2387->g_74;
                    int32_t *l_1145 = &p_2387->g_74;
                    int32_t *l_1146 = (void*)0;
                    int32_t *l_1147 = &l_1065;
                    int32_t *l_1149 = &l_1065;
                    int32_t *l_1150 = &p_2387->g_94;
                    int32_t *l_1151 = (void*)0;
                    int32_t *l_1152 = &l_1068;
                    int32_t *l_1153 = (void*)0;
                    int32_t *l_1154 = (void*)0;
                    int32_t *l_1155 = &l_1148;
                    int32_t *l_1156 = &l_1065;
                    int32_t *l_1157[4][5] = {{&p_2387->g_74,&p_2387->g_94,&l_1067,&p_2387->g_94,&p_2387->g_74},{&p_2387->g_74,&p_2387->g_94,&l_1067,&p_2387->g_94,&p_2387->g_74},{&p_2387->g_74,&p_2387->g_94,&l_1067,&p_2387->g_94,&p_2387->g_74},{&p_2387->g_74,&p_2387->g_94,&l_1067,&p_2387->g_94,&p_2387->g_74}};
                    int i, j;
                    --l_1172;
                }
            }
            return (*p_2387->g_120);
        }
    }
    for (p_2387->g_256 = 0; (p_2387->g_256 == 29); p_2387->g_256 = safe_add_func_int64_t_s_s(p_2387->g_256, 3))
    { /* block id: 476 */
        int32_t *l_1177[4][10][5] = {{{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169}},{{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169}},{{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169}},{{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169},{(void*)0,&l_1169,&l_1169,&l_1169,&l_1169}}};
        uint64_t l_1192 = 0xB1B95E807207F269L;
        uint32_t l_1199 = 0x182FA790L;
        int32_t l_1212 = 0x10061484L;
        uint64_t l_1217 = 0xB9DEC8A841F2AEF6L;
        int i, j, k;
        (*p_2387->g_1178) = l_1177[3][6][1];
        (*p_2387->g_1179) = l_1177[3][6][1];
        if ((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_28, (l_1184 || (safe_div_func_int32_t_s_s((0x90143625L & p_29), (safe_mod_func_int16_t_s_s(((l_1189 != (p_28 , l_1189)) >= (safe_lshift_func_uint16_t_u_s(l_1192, (((((((void*)0 != (*p_2387->g_546)) <= 0x4C2FL) , (*p_2387->g_623)) , p_27) <= 0UL) , p_28)))), p_27))))))), 3L)))
        { /* block id: 479 */
            int64_t l_1193 = 0x54F5F2A19FBC3B62L;
            int32_t l_1194 = 0x4DBC4DD0L;
            int64_t l_1195 = 1L;
            int32_t l_1196 = 7L;
            int32_t l_1197 = 0x5DB97925L;
            int32_t l_1198[4][10] = {{1L,8L,0x78EC201AL,(-1L),0x78EC201AL,8L,1L,(-4L),0x7B1CF9ACL,0x2B508A85L},{1L,8L,0x78EC201AL,(-1L),0x78EC201AL,8L,1L,(-4L),0x7B1CF9ACL,0x2B508A85L},{1L,8L,0x78EC201AL,(-1L),0x78EC201AL,8L,1L,(-4L),0x7B1CF9ACL,0x2B508A85L},{1L,8L,0x78EC201AL,(-1L),0x78EC201AL,8L,1L,(-4L),0x7B1CF9ACL,0x2B508A85L}};
            int64_t *l_1204 = &p_2387->g_420;
            int i, j;
            --l_1199;
            for (l_1194 = 8; (l_1194 == (-13)); --l_1194)
            { /* block id: 483 */
                return p_28;
            }
            (*p_2387->g_974) = (0x2BL || ((*p_30) != ((p_28 , ((void*)0 == l_1204)) == 0x3104L)));
            (**p_2387->g_973) = ((safe_rshift_func_uint8_t_u_s((~0UL), 5)) && (*p_2387->g_861));
        }
        else
        { /* block id: 488 */
            int32_t **l_1207 = &p_2387->g_370;
            int32_t l_1208 = 0x17EB415DL;
            int32_t l_1209 = 0x4B97F238L;
            int32_t l_1210 = (-1L);
            int32_t l_1211[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1211[i] = 0x544E2684L;
            (*l_1207) = l_1177[3][6][1];
            ++p_2387->g_1214[0][1];
        }
        l_1217++;
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_58 p_2387->g_74 p_2387->g_184 p_2387->g_93 p_2387->g_32 p_2387->g_149 p_2387->g_153 p_2387->g_256 p_2387->g_92 p_2387->g_99 p_2387->g_192 p_2387->g_204 p_2387->g_174 p_2387->g_259 p_2387->g_121 p_2387->g_194 p_2387->g_181 p_2387->g_95 p_2387->g_372 p_2387->g_94 p_2387->g_370 p_2387->g_428 p_2387->g_6 p_2387->g_780 p_2387->g_254 p_2387->g_623
 * writes: p_2387->g_58 p_2387->g_74 p_2387->g_254 p_2387->g_256 p_2387->g_153 p_2387->g_92 p_2387->g_192 p_2387->g_174 p_2387->g_370 p_2387->g_181 p_2387->g_93 p_2387->g_94 p_2387->g_420 p_2387->g_95 p_2387->g_184 p_2387->g_259 p_2387->g_121 p_2387->g_31 p_2387->g_861
 */
uint8_t  func_38(uint8_t  p_39, uint64_t  p_40, uint16_t * p_41, int32_t  p_42, uint16_t * p_43, struct S0 * p_2387)
{ /* block id: 87 */
    uint64_t l_261 = 1UL;
    int32_t l_329 = 0L;
    int32_t l_332 = (-3L);
    int32_t l_337 = 0x7EFA8AE2L;
    int32_t l_338 = 0x2A82EBA1L;
    int32_t l_340 = 0x4E0EACEFL;
    int32_t l_345 = (-5L);
    int32_t l_346 = 0x52D39850L;
    int32_t l_347 = 0x1D087DD8L;
    int32_t l_349 = (-3L);
    int32_t l_352 = 3L;
    int32_t l_355 = 0L;
    int32_t l_359 = 0x5A618B0BL;
    int32_t l_361 = 1L;
    int32_t l_362 = (-1L);
    int32_t l_363 = 0x17873ECAL;
    int32_t l_364 = 0x3AF3FF8AL;
    uint64_t l_377[7][4] = {{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL}};
    int8_t *l_422[2];
    uint32_t l_460 = 0xC2E401CCL;
    int16_t *l_492 = &p_2387->g_184[1];
    int16_t **l_491 = &l_492;
    int64_t *l_544 = (void*)0;
    int32_t l_586 = 0L;
    uint32_t l_604 = 0x8D1D0773L;
    int32_t **l_627 = &p_2387->g_370;
    uint8_t l_669 = 0x89L;
    uint32_t *l_720 = &p_2387->g_153;
    uint8_t l_802 = 0xA0L;
    int64_t l_805 = 0x615D574EA00E0D03L;
    uint16_t **l_815 = &p_2387->g_31[1];
    int16_t *l_828[6];
    int32_t l_829[5] = {0x203A61A0L,0x203A61A0L,0x203A61A0L,0x203A61A0L,0x203A61A0L};
    int32_t l_830[6][8][5] = {{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}},{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}},{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}},{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}},{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}},{{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)},{0x433F9BF4L,(-10L),0L,0x45AB9072L,(-1L)}}};
    uint16_t *l_831 = &p_2387->g_32;
    uint64_t l_833[5];
    uint32_t ***l_853[7] = {&p_2387->g_203,&p_2387->g_203,&p_2387->g_203,&p_2387->g_203,&p_2387->g_203,&p_2387->g_203,&p_2387->g_203};
    int8_t l_937[9] = {0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_422[i] = &p_2387->g_92[1][3];
    for (i = 0; i < 6; i++)
        l_828[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_833[i] = 18446744073709551608UL;
    for (p_2387->g_58 = 0; (p_2387->g_58 <= 1); p_2387->g_58 += 1)
    { /* block id: 90 */
        int32_t *l_229 = &p_2387->g_74;
        uint64_t l_252 = 0UL;
        uint32_t ***l_273[9][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2387->g_203,(void*)0,(void*)0,&p_2387->g_203,&p_2387->g_203}};
        int32_t l_292 = 0x662893A8L;
        int32_t l_335 = 0x099B4E54L;
        int32_t l_336 = 0x0CEB50AAL;
        int32_t l_342 = 0x1EC9D5EBL;
        int32_t l_343[1][9] = {{0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL,0x536CD7EBL}};
        uint16_t *l_394 = &p_2387->g_181;
        int8_t **l_399[10][5][2] = {{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}},{{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122},{&p_2387->g_122,&p_2387->g_122}}};
        uint32_t *l_408 = &p_2387->g_256;
        uint64_t l_425 = 18446744073709551615UL;
        uint32_t l_478 = 0xABF24C7BL;
        uint32_t l_494 = 1UL;
        int8_t l_590 = 0x1CL;
        uint8_t *l_622 = &p_2387->g_95;
        int32_t **l_629 = &l_229;
        int8_t l_702 = 0L;
        uint8_t l_721 = 0UL;
        int8_t l_741 = 0x56L;
        int64_t l_747 = 2L;
        int8_t l_803[8];
        uint8_t l_806[6][7] = {{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL},{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL},{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL},{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL},{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL},{255UL,255UL,255UL,0UL,0xBBL,0UL,255UL}};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_803[i] = 0L;
        (*l_229) &= 8L;
        for (p_39 = 0; (p_39 <= 3); p_39 += 1)
        { /* block id: 94 */
            int64_t *l_253 = &p_2387->g_254[4][0];
            uint32_t *l_255 = &p_2387->g_256;
            int16_t *l_257 = (void*)0;
            int16_t *l_258[8] = {&p_2387->g_259,&p_2387->g_259,&p_2387->g_259,&p_2387->g_259,&p_2387->g_259,&p_2387->g_259,&p_2387->g_259,&p_2387->g_259};
            int32_t l_260 = 0x1B0D2A8AL;
            int8_t *l_262 = &p_2387->g_92[1][3];
            int32_t l_333 = 0x73448374L;
            int32_t l_334 = (-10L);
            int32_t l_339 = 0x4F5D2FF8L;
            int32_t l_341 = 0L;
            int32_t l_344 = (-1L);
            int32_t l_348 = 0x57B61FB8L;
            int32_t l_350 = 0x13C408D7L;
            int32_t l_351 = (-1L);
            int32_t l_353 = 0x372B352CL;
            int32_t l_354 = 0x129700CEL;
            int32_t l_356 = 9L;
            int32_t l_357 = 5L;
            int32_t l_358 = (-1L);
            int32_t l_360[2][3][5] = {{{0L,(-10L),8L,9L,(-3L)},{0L,(-10L),8L,9L,(-3L)},{0L,(-10L),8L,9L,(-3L)}},{{0L,(-10L),8L,9L,(-3L)},{0L,(-10L),8L,9L,(-3L)},{0L,(-10L),8L,9L,(-3L)}}};
            uint16_t l_365[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
            int32_t **l_371 = (void*)0;
            int32_t *l_373 = &p_2387->g_94;
            int32_t *l_374 = &l_356;
            int32_t *l_375 = &l_361;
            int32_t *l_376[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_376[i] = &p_2387->g_74;
            if ((p_2387->g_184[p_2387->g_58] , ((*l_229) = (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(p_2387->g_93[p_39], (p_2387->g_93[p_39] != ((p_2387->g_93[(p_2387->g_58 + 1)] >= ((*l_262) ^= (safe_rshift_func_uint8_t_u_u((0UL != (&p_2387->g_32 == ((0x61E63C6DL ^ (((l_260 ^= ((0x6C835524L && (p_2387->g_153 = ((*l_255) ^= ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((*l_253) = (safe_lshift_func_int8_t_s_u((((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((*p_41), p_2387->g_184[0])) == p_2387->g_149), p_2387->g_153)) <= l_252) > 0L), 2))) > 6L), 0x9CECA1EEL)), p_42)), (*l_229))) && p_42)))) ^ p_2387->g_184[p_2387->g_58])) > (*l_229)) | l_261)) , (void*)0))), 3)))) , p_39)))), 2)) , p_2387->g_74), l_261)) > 65535UL), (*l_229))))))
            { /* block id: 101 */
                int8_t l_271 = 0x2CL;
                int16_t l_272 = 0x75A1L;
                int32_t *l_293 = &p_2387->g_58;
                int32_t l_294 = (-2L);
                for (p_42 = 0; (p_42 <= 3); p_42 += 1)
                { /* block id: 104 */
                    uint32_t l_265 = 0x75CC2682L;
                    uint64_t *l_266 = &l_261;
                    (*l_229) = (safe_mul_func_int8_t_s_s((-1L), ((((((~l_265) || p_42) != (((*l_266) = 0x1443C3F1FFCAC88CL) , p_42)) & ((+((safe_add_func_int8_t_s_s(l_271, 0x42L)) ^ l_265)) | (&p_2387->g_254[0][0] == &p_2387->g_254[5][2]))) > l_272) | (*p_2387->g_99))));
                }
                if ((*p_2387->g_99))
                    break;
                for (p_2387->g_192 = 3; (p_2387->g_192 >= 0); p_2387->g_192 -= 1)
                { /* block id: 111 */
                    (*l_229) |= (l_273[7][8] == (void*)0);
                    for (p_2387->g_174 = 0; (p_2387->g_174 <= 3); p_2387->g_174 += 1)
                    { /* block id: 115 */
                        int32_t **l_274 = &l_229;
                        uint32_t l_284 = 0x1A52B7B2L;
                        uint64_t *l_291 = &l_252;
                        int i, j;
                        (*l_274) = (void*)0;
                        l_294 &= (safe_lshift_func_int8_t_s_s((p_2387->g_204[(p_2387->g_58 + 1)][(p_39 + 3)] == ((((safe_mod_func_int8_t_s_s(((*l_262) &= (((safe_mul_func_uint8_t_u_u(((l_261 , (((l_272 || (safe_sub_func_uint32_t_u_u(p_2387->g_32, (safe_unary_minus_func_uint64_t_u((l_284 == (safe_sub_func_int16_t_s_s(0L, ((p_2387->g_32 , (*p_43)) || (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((*l_291) = p_2387->g_259) & 0x0E1C6C223FEB27B6L), (*p_41))), l_292))))))))))) && p_2387->g_121) , p_2387->g_194)) , p_2387->g_149), 0x1AL)) >= 1L) , p_42)), p_2387->g_184[1])) && l_260) == p_2387->g_93[2]) , l_293)), 3));
                        (*l_274) = &l_294;
                    }
                }
            }
            else
            { /* block id: 123 */
                uint32_t l_326 = 0x7823650BL;
                int32_t *l_328 = &l_292;
                int32_t *l_330 = &l_329;
                int32_t *l_331[5][6][7] = {{{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329}},{{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329}},{{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329}},{{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329}},{{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329},{&l_329,(void*)0,&l_329,&l_329,(void*)0,&l_329,&l_329}}};
                int i, j, k;
                (*l_328) ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(p_42)), (((!(safe_add_func_uint16_t_u_u((((*l_255) = 0xD5421003L) | ((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*p_43), p_39)), (*p_43))) < (((p_2387->g_153 = (safe_div_func_int16_t_s_s(0x1292L, (safe_rshift_func_uint8_t_u_s(p_39, 2))))) , (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(p_2387->g_181, ((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((p_2387->g_181 ^ p_2387->g_184[p_2387->g_58]), 0x1CA1A8B2L)) , (*l_229)), p_2387->g_95)) & l_326), (*p_41))) & 0L))), p_42)), l_260))) || p_2387->g_174))), 0x6B36L))) > (*l_229)) || p_39))) | p_39), p_2387->g_92[1][3])) ^ p_42), 7)), 1));
                l_365[1]++;
            }
            (*p_2387->g_372) = p_2387->g_204[p_39][(p_39 + 3)];
            ++l_377[2][1];
            return p_2387->g_121;
        }
        (**p_2387->g_372) = (((*p_43) = 65532UL) == (safe_div_func_uint64_t_u_u(0xE2762CEE8C0E02BEL, (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*l_408) = (safe_div_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((p_2387->g_93[(p_2387->g_58 + 1)] = (safe_rshift_func_uint16_t_u_s(((*l_394) &= p_2387->g_184[p_2387->g_58]), p_2387->g_93[p_2387->g_58]))), 2)) || (p_2387->g_153 >= (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((&p_2387->g_122 == l_399[8][4][1]), (safe_add_func_uint32_t_u_u(((p_39 >= ((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((*l_229), 3)) >= (*l_229)), 0x15908953L)), 0UL)) | 0x49L)) < l_261), 8UL)))), p_42)))), p_2387->g_94))), (-10L))), 0x22F0L)), 0x31L)))));
        for (l_252 = 0; (l_252 <= 3); l_252 += 1)
        { /* block id: 140 */
            int64_t *l_419 = &p_2387->g_420;
            int8_t *l_421 = &p_2387->g_92[6][4];
            uint8_t *l_426 = (void*)0;
            uint8_t *l_427 = &p_2387->g_95;
            int16_t *l_429 = &p_2387->g_259;
            uint32_t l_441[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t l_463 = (-1L);
            int32_t l_473 = 0x646C208FL;
            int32_t l_475[3][1][9] = {{{0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL}},{{0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL}},{{0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL,0x022BD2BBL}}};
            int32_t *l_490 = &l_473;
            int32_t l_591[8][1] = {{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}};
            int i, j, k;
            (*l_229) = (*l_229);
            (*p_2387->g_370) = (safe_add_func_uint64_t_u_u((((*l_429) = (p_2387->g_184[p_2387->g_58] ^= ((safe_sub_func_uint16_t_u_u(65530UL, ((--(*p_43)) > ((((p_2387->g_93[1] <= ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((!((((((*l_419) = 0x0226C8784A21CFF7L) , l_421) != l_422[0]) >= ((*l_427) = ((p_2387->g_74 > (0xAFD54D44L ^ (-1L))) && (safe_mod_func_int32_t_s_s(p_42, l_425))))) , (-8L))), (-1L))) , p_2387->g_256), 2)) != (-10L))) , p_42) < 0x46284EC5L) && p_39)))) , p_2387->g_428))) || 0x48E5L), l_345));
            for (p_2387->g_121 = 3; (p_2387->g_121 >= 0); p_2387->g_121 -= 1)
            { /* block id: 150 */
                uint32_t l_446 = 4294967295UL;
                uint64_t l_459 = 18446744073709551615UL;
                int16_t l_462 = 0x41C3L;
                int32_t l_472 = 8L;
                int32_t l_474 = 0L;
                int32_t l_476[10][9] = {{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L},{0x0DC52EAFL,4L,0x48BFF00BL,0x027A9D84L,0x7D0F4B59L,(-9L),3L,5L,3L}};
                int16_t l_477 = 0x2150L;
                int i, j;
                (1 + 1);
            }
            for (p_42 = 3; (p_42 >= 0); p_42 -= 1)
            { /* block id: 169 */
                int16_t ***l_493 = &l_491;
                int8_t **l_502 = &l_422[0];
                uint32_t l_519[5][6] = {{1UL,4294967288UL,0x02DF21E2L,1UL,4294967288UL,1UL},{1UL,4294967288UL,0x02DF21E2L,1UL,4294967288UL,1UL},{1UL,4294967288UL,0x02DF21E2L,1UL,4294967288UL,1UL},{1UL,4294967288UL,0x02DF21E2L,1UL,4294967288UL,1UL},{1UL,4294967288UL,0x02DF21E2L,1UL,4294967288UL,1UL}};
                int32_t *l_520 = (void*)0;
                int64_t *l_530 = &p_2387->g_420;
                int64_t *l_545 = &p_2387->g_254[4][0];
                int32_t l_600[5] = {0x3B04BE8DL,0x3B04BE8DL,0x3B04BE8DL,0x3B04BE8DL,0x3B04BE8DL};
                int32_t l_602 = 6L;
                int32_t *l_621 = &l_591[0][0];
                int32_t ***l_628 = &l_627;
                uint64_t *l_632 = &p_2387->g_428;
                int i, j;
                (*l_493) = l_491;
                --l_494;
            }
        }
        for (l_364 = 0; (l_364 <= 1); l_364 += 1)
        { /* block id: 220 */
            int8_t l_633 = 0x26L;
            uint64_t *l_636 = &l_252;
            int32_t l_637 = 6L;
            int32_t l_642 = 0x499A512AL;
            int32_t l_645 = 0x0EB01B16L;
            int32_t l_646[10][2];
            uint8_t l_668[10] = {0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L};
            int8_t l_677 = 0x44L;
            uint32_t l_706 = 0x437AA2DBL;
            uint64_t l_733 = 1UL;
            uint32_t l_773 = 4294967292UL;
            uint32_t *l_795 = (void*)0;
            int32_t l_797[6] = {(-4L),(-2L),(-4L),(-4L),(-2L),(-4L)};
            uint16_t **l_801 = (void*)0;
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                    l_646[i][j] = 1L;
            }
            (1 + 1);
        }
    }
    if ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((~p_40), (safe_sub_func_int64_t_s_s(((+(p_39 & ((((*l_815) = l_492) == (void*)0) >= (((safe_mul_func_uint16_t_u_u((**l_627), ((**l_491) |= (safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_2387->g_6, (**l_627))), ((safe_mod_func_uint32_t_u_u(((p_41 != (l_828[1] = (*l_491))) , 5UL), 0x676852DCL)) || (*p_2387->g_780)))) && l_829[2]), p_42)) > (**l_627)), l_830[3][7][1]))))) , (void*)0) == l_831)))) , 0x0ADA33087A8FDE1BL), 0x1441BD3444F1E8D3L)))), 65535UL)))
    { /* block id: 314 */
        int32_t *l_832[9][3] = {{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362}};
        int i, j;
        l_833[3]++;
        (**l_627) = (safe_div_func_uint16_t_u_u(0x6B70L, (safe_rshift_func_int8_t_s_u((((*l_492) ^= p_39) | (*p_43)), 1))));
    }
    else
    { /* block id: 318 */
        uint64_t l_864 = 0xCB27601412B360F8L;
        int32_t l_874 = 0x15B4EC0BL;
        int16_t l_882 = 0x7BBDL;
        int16_t l_896 = 6L;
        int32_t l_933 = 0x1318CA05L;
        int8_t **l_951 = (void*)0;
        int8_t ***l_950 = &l_951;
        int8_t ***l_954[2];
        int64_t **l_987 = &l_544;
        int i;
        for (i = 0; i < 2; i++)
            l_954[i] = &l_951;
        for (l_805 = (-8); (l_805 == (-25)); l_805 = safe_sub_func_uint8_t_u_u(l_805, 1))
        { /* block id: 321 */
            uint32_t ***l_852[2];
            int32_t *l_865 = &l_352;
            int32_t ***l_875 = &l_627;
            uint32_t l_911[5][10] = {{4294967295UL,0xF25989C3L,4294967295UL,1UL,4294967295UL,0xF25989C3L,4294967295UL,0x4D30B217L,0UL,0UL},{4294967295UL,0xF25989C3L,4294967295UL,1UL,4294967295UL,0xF25989C3L,4294967295UL,0x4D30B217L,0UL,0UL},{4294967295UL,0xF25989C3L,4294967295UL,1UL,4294967295UL,0xF25989C3L,4294967295UL,0x4D30B217L,0UL,0UL},{4294967295UL,0xF25989C3L,4294967295UL,1UL,4294967295UL,0xF25989C3L,4294967295UL,0x4D30B217L,0UL,0UL},{4294967295UL,0xF25989C3L,4294967295UL,1UL,4294967295UL,0xF25989C3L,4294967295UL,0x4D30B217L,0UL,0UL}};
            uint32_t l_938 = 1UL;
            uint16_t l_955 = 1UL;
            int32_t l_956 = 0x3E2968BDL;
            uint32_t l_957[10] = {0x2264C981L,0xC3744C65L,0xAE342C79L,0xC3744C65L,0x2264C981L,0x2264C981L,0xC3744C65L,0xAE342C79L,0xC3744C65L,0x2264C981L};
            int16_t **l_992 = &l_828[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_852[i] = &p_2387->g_203;
            (*l_865) |= (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((&p_2387->g_181 != (void*)0), (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_852[1] == l_853[5]), 3)), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_42)), 2)), (((+((**l_627) == (++(*p_2387->g_623)))) != (((((p_2387->g_861 = (void*)0) != &p_2387->g_256) ^ (safe_lshift_func_int8_t_s_u(l_864, 0))) == p_40) || 0x489CL)) < p_40))))), 7UL)))), (-8L)));
        }
    }
    return (*p_2387->g_623);
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_121 p_2387->g_99 p_2387->g_74 p_2387->g_6 p_2387->g_174 p_2387->g_93
 * writes: p_2387->g_121 p_2387->g_153 p_2387->g_74
 */
uint8_t  func_48(uint64_t  p_49, uint16_t * p_50, int32_t  p_51, struct S0 * p_2387)
{ /* block id: 79 */
    int32_t l_216 = 0x203F8E5CL;
    int16_t l_225 = 0x4E1DL;
    for (p_2387->g_121 = 18; (p_2387->g_121 <= (-25)); p_2387->g_121--)
    { /* block id: 82 */
        uint32_t *l_217 = &p_2387->g_153;
        int32_t l_224 = (-10L);
        int32_t *l_226 = &p_2387->g_74;
        (*l_226) = (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x2024L, (((void*)0 == &p_51) ^ ((((*l_217) = (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(((!l_216) , ((((void*)0 != l_217) != (-7L)) , ((safe_sub_func_uint16_t_u_u(((((p_2387->g_121 , (safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((p_49 , 0x7007463A8961DA0AL), p_49)), l_224))) | (*p_2387->g_99)) <= l_225) ^ p_51), 0x2D4EL)) >= l_225))), 7))))) <= p_2387->g_6) || (*p_50))))), p_51));
    }
    return p_2387->g_93[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_58 p_2387->g_95 p_2387->g_32 p_2387->g_99 p_2387->g_74 p_2387->g_92 p_2387->g_93 p_2387->g_94 p_2387->g_120 p_2387->g_122 p_2387->g_121 p_2387->g_181 p_2387->g_184 p_2387->g_174 p_2387->g_194 p_2387->g_202
 * writes: p_2387->g_58 p_2387->g_95 p_2387->g_74 p_2387->g_92 p_2387->g_120 p_2387->g_122 p_2387->g_94 p_2387->g_149 p_2387->g_153 p_2387->g_31 p_2387->g_181 p_2387->g_194 p_2387->g_203
 */
int16_t  func_52(int64_t  p_53, int32_t  p_54, uint32_t  p_55, int32_t  p_56, struct S0 * p_2387)
{ /* block id: 15 */
    uint16_t *l_69 = &p_2387->g_32;
    int32_t l_98 = 0x487E88E1L;
    int32_t l_106 = 0L;
    int32_t *l_206 = &l_106;
    (*p_2387->g_99) = ((safe_sub_func_uint32_t_u_u(func_67(l_69, p_2387), l_98)) | (0x28L < p_53));
    (*l_206) = (safe_lshift_func_uint16_t_u_s(func_102(&p_2387->g_32, ((l_98 <= (p_54 , ((((((l_106 != 0xD293A85175EF58E7L) , (-1L)) <= ((p_56 ^ (p_53 <= p_2387->g_74)) , 0L)) & l_106) , 0x0583186D9D6E25B9L) || p_2387->g_92[5][6]))) ^ 0x5D61L), p_2387->g_92[1][3], p_2387), p_2387->g_121));
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_58 p_2387->g_95 p_2387->g_32
 * writes: p_2387->g_58 p_2387->g_95
 */
uint32_t  func_67(uint16_t * p_68, struct S0 * p_2387)
{ /* block id: 16 */
    int32_t l_72[7] = {(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L)};
    int32_t l_75 = 0x6EB303A6L;
    int32_t l_90 = (-8L);
    int32_t l_91[8][6] = {{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)},{0x202D2A5DL,(-10L),(-10L),0x202D2A5DL,0x202D2A5DL,(-10L)}};
    int i, j;
    for (p_2387->g_58 = (-3); (p_2387->g_58 < 13); ++p_2387->g_58)
    { /* block id: 19 */
        int32_t *l_73 = &p_2387->g_74;
        int32_t *l_76 = &p_2387->g_74;
        int32_t *l_77 = &p_2387->g_74;
        int32_t *l_78 = &l_75;
        int32_t *l_79 = &l_75;
        int32_t l_80 = 0L;
        int32_t *l_81 = (void*)0;
        int32_t *l_82 = &l_80;
        int32_t *l_83 = &l_80;
        int32_t *l_84 = &l_75;
        int32_t *l_85 = (void*)0;
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = &p_2387->g_74;
        int32_t *l_88 = &p_2387->g_74;
        int32_t *l_89[1][1][6] = {{{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80}}};
        int i, j, k;
        if (l_72[1])
            break;
        p_2387->g_95++;
        return l_90;
    }
    return p_2387->g_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_2387->g_93 p_2387->g_32 p_2387->g_99 p_2387->g_74 p_2387->g_94 p_2387->g_95 p_2387->g_120 p_2387->g_92 p_2387->g_122 p_2387->g_121 p_2387->g_181 p_2387->g_184 p_2387->g_174 p_2387->g_58 p_2387->g_194 p_2387->g_202
 * writes: p_2387->g_92 p_2387->g_120 p_2387->g_122 p_2387->g_94 p_2387->g_95 p_2387->g_149 p_2387->g_153 p_2387->g_31 p_2387->g_181 p_2387->g_194 p_2387->g_203
 */
uint16_t  func_102(uint16_t * p_103, uint16_t  p_104, int32_t  p_105, struct S0 * p_2387)
{ /* block id: 26 */
    int8_t l_113[9][4] = {{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L},{0x34L,(-5L),0x34L,0x34L}};
    int8_t *l_114 = &p_2387->g_92[1][3];
    int8_t **l_117 = (void*)0;
    int8_t *l_119 = (void*)0;
    int8_t **l_118[8] = {&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119};
    int32_t l_123 = (-6L);
    int32_t *l_127 = &p_2387->g_94;
    int8_t l_151 = 1L;
    uint32_t *l_201 = (void*)0;
    uint32_t **l_200 = &l_201;
    int i, j;
    l_123 = (p_2387->g_94 |= (safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_113[6][1], p_105)), (((p_2387->g_93[1] == (((*l_114) = p_104) < (((safe_mod_func_uint8_t_u_u(p_105, (((p_2387->g_32 >= (-9L)) == ((p_2387->g_122 = (l_113[6][1] , (p_2387->g_120 = &l_113[3][2]))) == (void*)0)) || p_2387->g_32))) , 0x640DCEDDL) != l_113[6][1]))) >= p_104) , (*p_2387->g_99)))) || p_2387->g_93[3]), 4294967295UL)));
    for (p_2387->g_95 = 0; (p_2387->g_95 <= 54); p_2387->g_95++)
    { /* block id: 34 */
        int32_t *l_126 = &l_123;
        int32_t **l_128[1];
        int8_t l_135 = 0x39L;
        uint32_t *l_148 = &p_2387->g_149;
        uint8_t l_150 = 255UL;
        uint32_t *l_152 = &p_2387->g_153;
        int i;
        for (i = 0; i < 1; i++)
            l_128[i] = &l_126;
        (*l_126) &= (*p_2387->g_99);
        l_127 = l_127;
        if ((safe_div_func_uint64_t_u_u((!(safe_div_func_uint32_t_u_u(((*l_152) = (((0x13E846AAE9426A84L < (safe_mod_func_uint64_t_u_u((((((*l_127) & ((((*p_2387->g_122) = (l_135 ^= ((*l_114) &= (*p_2387->g_120)))) < (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((*l_127), (p_2387->g_93[3] , (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((p_2387->g_32 , (safe_rshift_func_int8_t_s_s(0L, 4))), 3)) || ((((*l_148) = (*l_127)) , p_104) != p_2387->g_93[1])), p_2387->g_94))))) , (*p_103)), l_150))) > l_151)) & 1UL) || p_2387->g_121) | 0x101FL), p_104))) , (*l_127)) ^ (-1L))), p_105))), p_105)))
        { /* block id: 42 */
            uint16_t **l_172 = &p_2387->g_31[0];
            uint16_t *l_173 = &p_2387->g_174;
            uint8_t *l_179[5][10][5] = {{{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0}},{{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0}},{{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0}},{{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0}},{{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0},{&p_2387->g_95,(void*)0,(void*)0,&p_2387->g_95,(void*)0}}};
            int32_t l_180 = (-1L);
            int16_t l_185[3][4][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_185[i][j][k] = 1L;
                }
            }
            (*l_127) = (((((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u(4294967287UL, ((((safe_lshift_func_int8_t_s_u(5L, (((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*p_2387->g_99), (((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((((*l_172) = (void*)0) == (l_173 = &p_2387->g_32)), 18446744073709551609UL)) | ((safe_add_func_uint16_t_u_u((p_105 < ((!(safe_div_func_int8_t_s_s((&p_2387->g_153 == ((((p_2387->g_181--) > (&p_2387->g_32 == (void*)0)) && 0x58L) , l_148)), p_105))) == 1UL)), p_2387->g_184[1])) <= (-4L))) || p_2387->g_174) , p_2387->g_93[1]), p_2387->g_58)), 0x741DADCEL)) ^ (*p_2387->g_122)) < p_105), 6)) == (-3L)) , l_180))), p_2387->g_74)) ^ l_185[0][1][0]) < p_104))) >= p_104) | (*l_126)) <= (*l_127)))) , 0UL) == p_2387->g_174), (*p_2387->g_122))) ^ 0x409B365E47C546E7L) >= 0x5C95L) , p_104) || 1UL);
        }
        else
        { /* block id: 47 */
            (*l_126) = p_105;
            for (p_2387->g_149 = (-16); (p_2387->g_149 >= 59); p_2387->g_149++)
            { /* block id: 51 */
                for (p_105 = 0; (p_105 <= 3); p_105 += 1)
                { /* block id: 54 */
                    int i, j;
                    return l_113[(p_105 + 2)][p_105];
                }
            }
            for (l_123 = 0; (l_123 == 20); l_123++)
            { /* block id: 60 */
                for (p_2387->g_149 = 0; (p_2387->g_149 <= 15); p_2387->g_149 = safe_add_func_uint8_t_u_u(p_2387->g_149, 6))
                { /* block id: 63 */
                    uint8_t l_197 = 0x12L;
                    ++p_2387->g_194;
                    --l_197;
                    if (((void*)0 == &p_104))
                    { /* block id: 66 */
                        int16_t l_205 = 0L;
                        (*p_2387->g_202) = l_200;
                        return l_205;
                    }
                    else
                    { /* block id: 69 */
                        return (*p_103);
                    }
                }
            }
        }
    }
    return (*p_103);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2388;
    struct S0* p_2387 = &c_2388;
    struct S0 c_2389 = {
        0x8F3D4210L, // p_2387->g_6
        65529UL, // p_2387->g_8
        4294967295UL, // p_2387->g_9
        0x5878L, // p_2387->g_32
        {&p_2387->g_32,&p_2387->g_32}, // p_2387->g_31
        (-4L), // p_2387->g_58
        0x65C5BCCBL, // p_2387->g_74
        {{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL},{0x76L,0x76L,0x0CL,7L,0x33L,7L,0x0CL,0x76L,0x76L,0x0CL}}, // p_2387->g_92
        {0x39L,0x39L,0x39L,0x39L}, // p_2387->g_93
        5L, // p_2387->g_94
        0UL, // p_2387->g_95
        &p_2387->g_74, // p_2387->g_99
        0L, // p_2387->g_121
        &p_2387->g_121, // p_2387->g_120
        (void*)0, // p_2387->g_122
        1UL, // p_2387->g_149
        1UL, // p_2387->g_153
        0xA900L, // p_2387->g_174
        0x818BL, // p_2387->g_181
        {0x4BACL,0x4BACL}, // p_2387->g_184
        0x58L, // p_2387->g_192
        0x6358L, // p_2387->g_193
        2UL, // p_2387->g_194
        {{&p_2387->g_149,(void*)0,&p_2387->g_149,(void*)0,&p_2387->g_149,&p_2387->g_149,(void*)0},{&p_2387->g_149,(void*)0,&p_2387->g_149,(void*)0,&p_2387->g_149,&p_2387->g_149,(void*)0},{&p_2387->g_149,(void*)0,&p_2387->g_149,(void*)0,&p_2387->g_149,&p_2387->g_149,(void*)0},{&p_2387->g_149,(void*)0,&p_2387->g_149,(void*)0,&p_2387->g_149,&p_2387->g_149,(void*)0}}, // p_2387->g_204
        &p_2387->g_204[1][5], // p_2387->g_203
        &p_2387->g_203, // p_2387->g_202
        {{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL},{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL},{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL},{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL},{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL},{0x4766C88365F3817BL,6L,(-6L),6L,0x4766C88365F3817BL,0x4766C88365F3817BL}}, // p_2387->g_254
        4294967292UL, // p_2387->g_256
        1L, // p_2387->g_259
        {&p_2387->g_94}, // p_2387->g_327
        (void*)0, // p_2387->g_368
        &p_2387->g_94, // p_2387->g_370
        {{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370},{&p_2387->g_370,&p_2387->g_370,(void*)0,&p_2387->g_370}}, // p_2387->g_369
        &p_2387->g_370, // p_2387->g_372
        (-8L), // p_2387->g_420
        1UL, // p_2387->g_428
        0x66F4AF103D78EF34L, // p_2387->g_461
        0xF3CD458CL, // p_2387->g_486
        &p_2387->g_370, // p_2387->g_489
        (void*)0, // p_2387->g_532
        &p_2387->g_370, // p_2387->g_546
        0x4CE9L, // p_2387->g_603
        (void*)0, // p_2387->g_616
        {&p_2387->g_616,&p_2387->g_616,&p_2387->g_616,&p_2387->g_616}, // p_2387->g_615
        &p_2387->g_95, // p_2387->g_623
        0x0675C2F4D29B337EL, // p_2387->g_671
        &p_2387->g_254[1][2], // p_2387->g_780
        0x46B25B68FB46E692L, // p_2387->g_798
        &p_2387->g_256, // p_2387->g_861
        &p_2387->g_120, // p_2387->g_953
        &p_2387->g_953, // p_2387->g_952
        (-6L), // p_2387->g_975
        &p_2387->g_975, // p_2387->g_974
        &p_2387->g_974, // p_2387->g_973
        &p_2387->g_58, // p_2387->g_1059
        (void*)0, // p_2387->g_1066
        (void*)0, // p_2387->g_1101
        {&p_2387->g_370,&p_2387->g_370,&p_2387->g_370,&p_2387->g_370,&p_2387->g_370}, // p_2387->g_1117
        &p_2387->g_370, // p_2387->g_1118
        &p_2387->g_486, // p_2387->g_1132
        &p_2387->g_370, // p_2387->g_1178
        &p_2387->g_370, // p_2387->g_1179
        {{0x6F56104F52327343L,0xB594FAD239CBD277L,0x6F56104F52327343L,0x6F56104F52327343L,0xB594FAD239CBD277L,0x6F56104F52327343L},{0x6F56104F52327343L,0xB594FAD239CBD277L,0x6F56104F52327343L,0x6F56104F52327343L,0xB594FAD239CBD277L,0x6F56104F52327343L}}, // p_2387->g_1214
        4294967286UL, // p_2387->g_1240
        0x3BEBL, // p_2387->g_1274
        &p_2387->g_780, // p_2387->g_1297
        &p_2387->g_1297, // p_2387->g_1296
        (void*)0, // p_2387->g_1349
        &p_2387->g_615[3], // p_2387->g_1379
        0UL, // p_2387->g_1383
        (void*)0, // p_2387->g_1403
        {{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L},{0x48L,0x05L,0x48L,0x48L,0x05L,0x48L,0x48L,0x05L,0x48L}}, // p_2387->g_1411
        0x71788A03L, // p_2387->g_1442
        (void*)0, // p_2387->g_1482
        &p_2387->g_370, // p_2387->g_1483
        &p_2387->g_370, // p_2387->g_1484
        &p_2387->g_370, // p_2387->g_1505
        {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}, // p_2387->g_1504
        3UL, // p_2387->g_1565
        &p_2387->g_1504[3][1], // p_2387->g_1567
        &p_2387->g_489, // p_2387->g_1586
        252UL, // p_2387->g_1622
        0xBF3CA662935B34E1L, // p_2387->g_1642
        0xB7L, // p_2387->g_1646
        (void*)0, // p_2387->g_1657
        {{{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL}},{{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL},{1UL,4294967288UL,0xCBFBB466L,0x5BDA483FL,4294967290UL,0x57FC62A7L,1UL,0UL}}}, // p_2387->g_1747
        (void*)0, // p_2387->g_1776
        0xB0C9C3EA89EDF6A8L, // p_2387->g_1835
        (-1L), // p_2387->g_1859
        5L, // p_2387->g_1919
        0x23775ED1L, // p_2387->g_1925
        &p_2387->g_74, // p_2387->g_1972
        (-2L), // p_2387->g_1994
        {&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256,&p_2387->g_256}, // p_2387->g_2197
        0L, // p_2387->g_2255
        0x17B1E129L, // p_2387->g_2338
    };
    c_2388 = c_2389;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2387);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2387->g_6, "p_2387->g_6", print_hash_value);
    transparent_crc(p_2387->g_8, "p_2387->g_8", print_hash_value);
    transparent_crc(p_2387->g_9, "p_2387->g_9", print_hash_value);
    transparent_crc(p_2387->g_32, "p_2387->g_32", print_hash_value);
    transparent_crc(p_2387->g_58, "p_2387->g_58", print_hash_value);
    transparent_crc(p_2387->g_74, "p_2387->g_74", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2387->g_92[i][j], "p_2387->g_92[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2387->g_93[i], "p_2387->g_93[i]", print_hash_value);

    }
    transparent_crc(p_2387->g_94, "p_2387->g_94", print_hash_value);
    transparent_crc(p_2387->g_95, "p_2387->g_95", print_hash_value);
    transparent_crc(p_2387->g_121, "p_2387->g_121", print_hash_value);
    transparent_crc(p_2387->g_149, "p_2387->g_149", print_hash_value);
    transparent_crc(p_2387->g_153, "p_2387->g_153", print_hash_value);
    transparent_crc(p_2387->g_174, "p_2387->g_174", print_hash_value);
    transparent_crc(p_2387->g_181, "p_2387->g_181", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2387->g_184[i], "p_2387->g_184[i]", print_hash_value);

    }
    transparent_crc(p_2387->g_192, "p_2387->g_192", print_hash_value);
    transparent_crc(p_2387->g_193, "p_2387->g_193", print_hash_value);
    transparent_crc(p_2387->g_194, "p_2387->g_194", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_2387->g_254[i][j], "p_2387->g_254[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2387->g_256, "p_2387->g_256", print_hash_value);
    transparent_crc(p_2387->g_259, "p_2387->g_259", print_hash_value);
    transparent_crc(p_2387->g_420, "p_2387->g_420", print_hash_value);
    transparent_crc(p_2387->g_428, "p_2387->g_428", print_hash_value);
    transparent_crc(p_2387->g_461, "p_2387->g_461", print_hash_value);
    transparent_crc(p_2387->g_486, "p_2387->g_486", print_hash_value);
    transparent_crc(p_2387->g_603, "p_2387->g_603", print_hash_value);
    transparent_crc(p_2387->g_671, "p_2387->g_671", print_hash_value);
    transparent_crc(p_2387->g_798, "p_2387->g_798", print_hash_value);
    transparent_crc(p_2387->g_975, "p_2387->g_975", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_2387->g_1214[i][j], "p_2387->g_1214[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2387->g_1240, "p_2387->g_1240", print_hash_value);
    transparent_crc(p_2387->g_1274, "p_2387->g_1274", print_hash_value);
    transparent_crc(p_2387->g_1383, "p_2387->g_1383", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2387->g_1411[i][j], "p_2387->g_1411[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2387->g_1442, "p_2387->g_1442", print_hash_value);
    transparent_crc(p_2387->g_1565, "p_2387->g_1565", print_hash_value);
    transparent_crc(p_2387->g_1622, "p_2387->g_1622", print_hash_value);
    transparent_crc(p_2387->g_1642, "p_2387->g_1642", print_hash_value);
    transparent_crc(p_2387->g_1646, "p_2387->g_1646", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2387->g_1747[i][j][k], "p_2387->g_1747[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2387->g_1835, "p_2387->g_1835", print_hash_value);
    transparent_crc(p_2387->g_1859, "p_2387->g_1859", print_hash_value);
    transparent_crc(p_2387->g_1919, "p_2387->g_1919", print_hash_value);
    transparent_crc(p_2387->g_1925, "p_2387->g_1925", print_hash_value);
    transparent_crc(p_2387->g_1994, "p_2387->g_1994", print_hash_value);
    transparent_crc(p_2387->g_2255, "p_2387->g_2255", print_hash_value);
    transparent_crc(p_2387->g_2338, "p_2387->g_2338", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
