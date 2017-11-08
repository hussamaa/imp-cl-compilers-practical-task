// -g 95,53,1 -l 95,1,1
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


// Seed: 4185970168

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile uint32_t g_12;
    uint64_t g_23;
    int32_t g_27[10];
    uint32_t g_35;
    int8_t g_58;
    volatile uint32_t g_63;
    volatile uint32_t *g_62;
    uint32_t g_64[4][5];
    uint64_t g_89;
    uint8_t g_93;
    uint16_t g_105[10];
    uint32_t g_111;
    int32_t g_113;
    int64_t g_121;
    int64_t g_144;
    volatile uint64_t g_166[9][10][2];
    volatile uint64_t *g_165;
    volatile uint64_t **g_164;
    int32_t *g_170;
    int32_t **g_169;
    int16_t g_189;
    uint8_t g_218;
    int16_t g_232;
    int16_t g_234;
    int16_t g_247;
    uint64_t g_249;
    int32_t g_311[2][2];
    int8_t g_312;
    int32_t g_337;
    int32_t g_339;
    int8_t g_352;
    int64_t **g_361;
    uint64_t g_425;
    uint16_t g_497;
    int16_t *g_531[4][1];
    int16_t **g_530[4][10][6];
    uint16_t *g_579[5];
    int64_t g_606;
    int32_t *g_665;
    uint32_t g_685;
    uint32_t g_715;
    int16_t g_832;
    volatile uint32_t g_850;
    volatile uint32_t g_851;
    volatile uint32_t g_852;
    volatile uint32_t g_853;
    volatile uint32_t g_854;
    volatile uint32_t g_855;
    volatile uint32_t g_856;
    volatile uint32_t g_857[6][10];
    volatile uint32_t g_858[6];
    volatile uint32_t g_859;
    volatile uint32_t g_860[4][1];
    volatile uint32_t g_861;
    volatile uint32_t g_862[5];
    volatile uint32_t g_863;
    volatile uint32_t g_864[2];
    volatile uint32_t g_865;
    volatile uint32_t g_866;
    volatile uint32_t g_867;
    volatile uint32_t g_868;
    volatile uint32_t g_869;
    volatile uint32_t g_870;
    volatile uint32_t g_871;
    volatile uint32_t g_872;
    volatile uint32_t g_873;
    volatile uint32_t g_874;
    volatile uint32_t g_875;
    volatile uint32_t g_876[4];
    volatile uint32_t g_877;
    volatile uint32_t g_878;
    volatile uint32_t g_879;
    volatile uint32_t g_880;
    volatile uint32_t g_881;
    volatile uint32_t g_882;
    volatile uint32_t g_883;
    volatile uint32_t g_884;
    volatile uint32_t g_885[8];
    volatile uint32_t g_886;
    volatile uint32_t g_887;
    volatile uint32_t g_888;
    volatile uint32_t g_889;
    volatile uint32_t g_890;
    volatile uint32_t g_891;
    volatile uint32_t g_892[5][9];
    volatile uint32_t g_893;
    volatile uint32_t *g_849[9][7][4];
    volatile uint32_t **g_848[9];
    volatile int32_t g_955;
    volatile int32_t * volatile g_954;
    volatile int32_t * volatile *g_953;
    volatile int32_t * volatile **g_952;
    uint64_t *g_975[6][5];
    uint32_t *g_1079;
    uint32_t **g_1078[9];
    volatile uint32_t ** volatile g_1168;
    volatile uint32_t **g_1169;
    volatile uint32_t ** volatile *g_1167[8];
    volatile uint32_t ** volatile * volatile *g_1166;
    uint32_t *g_1248[6];
    uint32_t **g_1247;
    uint32_t ***g_1246;
    uint32_t ***g_1251;
    uint8_t g_1394;
    int32_t g_1395[1];
    uint32_t * volatile *g_1403;
    uint64_t **g_1452;
    uint64_t ***g_1451;
    volatile int16_t g_1516;
    volatile int16_t *g_1515;
    int64_t g_1540;
    uint16_t g_1610;
    int16_t g_1617;
    volatile int64_t * volatile g_1622;
    volatile int64_t * volatile *g_1621;
    volatile int64_t * volatile **g_1620;
    int64_t g_1628;
    uint32_t g_1715;
    volatile int32_t g_1744;
    volatile int32_t g_1821;
    volatile int32_t *g_1820;
    uint64_t **g_1910[7];
    uint64_t g_2115;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_2118);
int32_t  func_2(uint64_t  p_3, uint64_t  p_4, int64_t  p_5, int64_t  p_6, uint32_t  p_7, struct S0 * p_2118);
int64_t  func_13(int64_t  p_14, int64_t  p_15, int32_t  p_16, int64_t  p_17, int32_t  p_18, struct S0 * p_2118);
int64_t  func_20(uint64_t  p_21, struct S0 * p_2118);
int16_t  func_28(uint64_t  p_29, struct S0 * p_2118);
uint64_t * func_39(uint64_t * p_40, struct S0 * p_2118);
uint64_t * func_41(int32_t * p_42, struct S0 * p_2118);
int32_t * func_45(uint32_t * p_46, int16_t  p_47, uint64_t * p_48, int32_t * p_49, struct S0 * p_2118);
uint32_t * func_50(int32_t  p_51, uint16_t  p_52, struct S0 * p_2118);
int32_t  func_66(int32_t * p_67, int32_t  p_68, uint32_t  p_69, int64_t  p_70, uint64_t * p_71, struct S0 * p_2118);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2118->g_12 p_2118->g_23 p_2118->g_35 p_2118->g_170 p_2118->g_27 p_2118->g_169 p_2118->g_337 p_2118->g_89 p_2118->g_58 p_2118->g_311 p_2118->g_339 p_2118->g_352 p_2118->g_93 p_2118->g_64 p_2118->g_247 p_2118->g_105 p_2118->g_425 p_2118->g_249 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_832 p_2118->g_232 p_2118->g_848 p_2118->g_218 p_2118->g_234 p_2118->g_665 p_2118->g_952 p_2118->g_606 p_2118->g_1610 p_2118->g_1617 p_2118->g_1540 p_2118->g_1395 p_2118->g_1620 p_2118->g_144 p_2118->g_849 p_2118->g_497 p_2118->g_1715 p_2118->g_312 p_2118->g_1394 p_2118->g_1628 p_2118->g_2115 p_2118->g_1820 p_2118->g_1821 p_2118->g_851
 * writes: p_2118->g_23 p_2118->g_27 p_2118->g_35 p_2118->g_579 p_2118->g_337 p_2118->g_89 p_2118->g_170 p_2118->g_58 p_2118->g_339 p_2118->g_606 p_2118->g_105 p_2118->g_665 p_2118->g_234 p_2118->g_232 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_715 p_2118->g_189 p_2118->g_249 p_2118->g_425 p_2118->g_361 p_2118->g_312 p_2118->g_93 p_2118->g_497 p_2118->g_1610 p_2118->g_1617 p_2118->g_1395 p_2118->g_832 p_2118->g_218 p_2118->g_1394 p_2118->g_1715 p_2118->g_1628 p_2118->g_2115 p_2118->g_1248 p_2118->g_1821
 */
int64_t  func_1(struct S0 * p_2118)
{ /* block id: 4 */
    uint64_t l_19 = 18446744073709551615UL;
    uint64_t *l_22 = &p_2118->g_23;
    uint8_t *l_1623[3][10][1] = {{{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394}},{{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394}},{{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394},{&p_2118->g_1394}}};
    int32_t l_1624[8] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int64_t *l_1627[2];
    int32_t l_1629 = 3L;
    int64_t l_1630 = 1L;
    uint64_t *l_2114 = &p_2118->g_2115;
    int16_t l_2116 = 0x4600L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1627[i] = &p_2118->g_1628;
    (*p_2118->g_1820) = func_2(((*l_2114) &= (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_2118->g_12, (func_13(l_19, func_20(((*l_22)--), p_2118), (safe_rshift_func_uint8_t_u_u((((void*)0 != p_2118->g_1620) == (4294967295UL >= ((l_1629 = ((l_1624[5] = l_19) > (l_19 , ((((safe_mod_func_int8_t_s_s(p_2118->g_64[0][3], p_2118->g_64[0][0])) != 0x7FC4L) , l_19) , (-6L))))) , 4294967287UL))), 6)), l_1630, p_2118->g_1540, p_2118) & l_1630))), p_2118->g_144))), l_19, l_2116, l_1630, l_19, p_2118);
    (*p_2118->g_1820) = (*p_2118->g_1820);
    return p_2118->g_851;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_2118->g_606 p_2118->g_1248
 */
int32_t  func_2(uint64_t  p_3, uint64_t  p_4, int64_t  p_5, int64_t  p_6, uint32_t  p_7, struct S0 * p_2118)
{ /* block id: 977 */
    int32_t l_2117 = 0x0C815E9DL;
    for (p_2118->g_606 = 0; p_2118->g_606 < 6; p_2118->g_606 += 1)
    {
        p_2118->g_1248[p_2118->g_606] = &p_2118->g_64[0][3];
    }
    return l_2117;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_832 p_2118->g_1395 p_2118->g_169 p_2118->g_170 p_2118->g_249 p_2118->g_144 p_2118->g_111 p_2118->g_849 p_2118->g_665 p_2118->g_311 p_2118->g_27 p_2118->g_497 p_2118->g_247 p_2118->g_1715 p_2118->g_105 p_2118->g_121 p_2118->g_312 p_2118->g_1394 p_2118->g_1628
 * writes: p_2118->g_832 p_2118->g_1395 p_2118->g_249 p_2118->g_170 p_2118->g_312 p_2118->g_111 p_2118->g_113 p_2118->g_27 p_2118->g_105 p_2118->g_218 p_2118->g_1394 p_2118->g_121 p_2118->g_1715 p_2118->g_1628
 */
int64_t  func_13(int64_t  p_14, int64_t  p_15, int32_t  p_16, int64_t  p_17, int32_t  p_18, struct S0 * p_2118)
{ /* block id: 749 */
    uint32_t l_1632 = 4294967290UL;
    int32_t l_1650 = 1L;
    int32_t l_1655[1];
    int16_t *l_1765 = &p_2118->g_1617;
    uint8_t l_1822 = 0xB7L;
    int8_t l_1839 = 1L;
    uint64_t l_1872 = 0xE83273B17EFA1BDEL;
    int8_t l_1930 = (-1L);
    int64_t l_1949 = 0x3AD667D22A03B29EL;
    uint32_t **l_1978[1];
    uint32_t ***l_2004 = &p_2118->g_1078[5];
    uint32_t ****l_2003 = &l_2004;
    int32_t *l_2106 = (void*)0;
    int32_t *l_2107 = &p_2118->g_1395[0];
    int32_t *l_2108 = (void*)0;
    int32_t *l_2109 = &l_1650;
    int32_t *l_2110[7][4][4] = {{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}},{{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113},{&p_2118->g_27[8],&p_2118->g_27[8],&p_2118->g_27[4],&p_2118->g_113}}};
    uint64_t l_2111 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1655[i] = 0x6C8EE135L;
    for (i = 0; i < 1; i++)
        l_1978[i] = &p_2118->g_1079;
    for (p_2118->g_832 = 0; (p_2118->g_832 >= 0); p_2118->g_832 -= 1)
    { /* block id: 752 */
        uint64_t l_1641 = 0UL;
        int32_t l_1645 = 0x1BD5FA3EL;
        int32_t l_1653[4] = {0x4FDCAE1FL,0x4FDCAE1FL,0x4FDCAE1FL,0x4FDCAE1FL};
        int32_t l_1657 = 2L;
        uint16_t *l_1675 = (void*)0;
        uint8_t l_1796 = 0xA3L;
        uint16_t l_1805 = 0x5777L;
        int32_t l_1837 = 0x3AA296E9L;
        uint16_t l_1841 = 0x6994L;
        int16_t l_1844 = (-1L);
        uint64_t l_1845 = 18446744073709551615UL;
        uint8_t *l_1886 = &l_1796;
        uint64_t **l_1908 = &p_2118->g_975[5][1];
        uint32_t l_1914 = 0UL;
        uint8_t l_1924[10][9][2] = {{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL},{255UL,255UL}}};
        int8_t l_1977 = 0x57L;
        int32_t **l_2034 = &p_2118->g_170;
        int16_t **l_2058[6] = {&p_2118->g_531[1][0],&l_1765,&p_2118->g_531[1][0],&p_2118->g_531[1][0],&l_1765,&p_2118->g_531[1][0]};
        int32_t *l_2104 = &l_1657;
        uint64_t ****l_2105 = &p_2118->g_1451;
        int i, j, k;
        for (p_14 = 0; (p_14 <= 3); p_14 += 1)
        { /* block id: 755 */
            int32_t *l_1631 = &p_2118->g_1395[p_2118->g_832];
            int32_t l_1639[9][8] = {{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)},{0x6F4D0C4EL,4L,0x5D58C1E6L,0x6F4D0C4EL,(-1L),0x5D58C1E6L,0x5D58C1E6L,(-1L)}};
            int32_t l_1656 = 0x28BD9731L;
            int64_t l_1799 = 1L;
            int32_t *l_1803 = (void*)0;
            int32_t *l_1804[3][1];
            uint8_t l_1808 = 6UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1804[i][j] = &p_2118->g_1395[p_2118->g_832];
            }
            (*l_1631) = p_2118->g_1395[p_2118->g_832];
            if (((--l_1632) , p_18))
            { /* block id: 758 */
                int32_t *l_1635 = &p_2118->g_1395[0];
                int32_t *l_1636 = &p_2118->g_1395[p_2118->g_832];
                int32_t *l_1637 = &p_2118->g_1395[p_2118->g_832];
                int32_t *l_1638[3];
                int64_t l_1640 = 5L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1638[i] = &p_2118->g_1395[p_2118->g_832];
                --l_1641;
            }
            else
            { /* block id: 760 */
                int32_t l_1651 = 0x2D4D2F34L;
                int32_t l_1652 = (-8L);
                int32_t l_1654[4] = {0x78ADB887L,0x78ADB887L,0x78ADB887L,0x78ADB887L};
                int32_t l_1798 = 0x1EF01406L;
                int i;
                for (l_1632 = 0; (l_1632 <= 3); l_1632 += 1)
                { /* block id: 763 */
                    int32_t *l_1644 = &p_2118->g_113;
                    int32_t *l_1646 = &l_1645;
                    int32_t *l_1647 = &l_1645;
                    int32_t *l_1648 = &p_2118->g_27[4];
                    int32_t *l_1649[3];
                    uint8_t l_1658[4][9][7] = {{{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL}},{{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL}},{{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL}},{{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL},{0UL,0xF6L,0x10L,0x10L,0xF6L,0UL,255UL}}};
                    uint16_t *l_1726 = &p_2118->g_105[0];
                    int32_t l_1729 = 0x704075ACL;
                    int8_t *l_1742 = &p_2118->g_352;
                    volatile int32_t *l_1743 = &p_2118->g_1744;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1649[i] = &l_1639[8][2];
                    l_1658[2][6][1]--;
                    for (p_2118->g_249 = 0; (p_2118->g_249 <= 3); p_2118->g_249 += 1)
                    { /* block id: 767 */
                        int32_t **l_1661 = &l_1631;
                        int64_t l_1670[9][10][2] = {{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}},{{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L},{(-8L),0x605382EA4471E565L}}};
                        int8_t *l_1676 = &p_2118->g_312;
                        int i, j, k;
                        (*l_1661) = ((*p_2118->g_169) = (*p_2118->g_169));
                        (*l_1647) = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((p_2118->g_249 <= (((safe_rshift_func_uint8_t_u_u(p_2118->g_144, ((((l_1670[5][3][0] & p_18) | l_1654[0]) >= (safe_add_func_int8_t_s_s(((*l_1676) = (l_1653[1] = ((0x9054L || ((safe_rshift_func_int8_t_s_u((&p_2118->g_105[0] == l_1675), (l_1655[0] = l_1654[2]))) > (-1L))) , p_2118->g_111))), p_15))) ^ l_1632))) , p_17) || 0x67L)), p_14)), 6UL)), p_17));
                    }
                    for (l_1652 = 3; (l_1652 >= 0); l_1652 -= 1)
                    { /* block id: 777 */
                        volatile int32_t *l_1678 = (void*)0;
                        volatile int32_t **l_1677 = &l_1678;
                        int32_t l_1681 = 0x44A67202L;
                        uint32_t *l_1686 = &p_2118->g_111;
                        int32_t l_1687 = 0L;
                        uint8_t *l_1690[4] = {&l_1658[3][5][1],&l_1658[3][5][1],&l_1658[3][5][1],&l_1658[3][5][1]};
                        int32_t l_1691[6] = {0x3F8D598BL,0x3F8D598BL,0x3F8D598BL,0x3F8D598BL,0x3F8D598BL,0x3F8D598BL};
                        uint16_t *l_1712 = (void*)0;
                        uint16_t *l_1713 = &p_2118->g_105[0];
                        uint16_t l_1714 = 1UL;
                        int i, j, k;
                        (*l_1677) = p_2118->g_849[(l_1652 + 2)][p_14][p_14];
                        if (p_14)
                            continue;
                        (*l_1646) ^= ((((safe_rshift_func_int16_t_s_s(((p_17 & (l_1681 < (safe_div_func_int8_t_s_s((((*p_2118->g_665) , p_18) == ((l_1681 && (l_1691[2] = (safe_add_func_uint32_t_u_u(((*l_1686) = p_18), (p_17 && ((*l_1644) = (((~((l_1687 |= 0xD8L) | (safe_add_func_uint8_t_u_u((0L || l_1655[0]), p_2118->g_27[8])))) == 0x43L) >= p_2118->g_497))))))) ^ 2L)), p_18)))) > 8L), p_16)) | p_18) & (-1L)) & l_1681);
                        (*l_1646) = (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x58L, (safe_lshift_func_uint16_t_u_u(((((((*l_1713) = (safe_lshift_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0x4AL, p_2118->g_247)) <= (l_1645 ^ ((l_1687 = (safe_sub_func_int32_t_s_s(((*l_1644) = p_18), ((((l_1655[0] = 4294967295UL) >= (((safe_sub_func_int16_t_s_s(((((*l_1648) &= p_17) | (safe_mul_func_uint8_t_u_u(l_1645, ((((-4L) | l_1654[1]) <= 18446744073709551615UL) > l_1691[2])))) || 0x6AA6L), p_14)) || 0x472901B980BFD993L) || 0xB3F4L)) , l_1657) < p_16)))) && p_17))) & p_15) > (-1L)), l_1650))) ^ (-3L)) , l_1714) , (void*)0) == (void*)0), p_18)))), p_2118->g_1715)), p_14)), 9L)) && l_1632) || 0x3F0413B0L);
                    }
                    l_1743 = p_2118->g_849[l_1632][p_2118->g_832][(p_2118->g_832 + 2)];
                }
                for (p_2118->g_218 = 0; (p_2118->g_218 <= 9); p_2118->g_218 += 1)
                { /* block id: 799 */
                    int16_t *l_1766 = &p_2118->g_832;
                    int32_t l_1776 = 0x31F5BCA6L;
                    int32_t l_1777 = 5L;
                    int32_t l_1791 = 0x37957DA4L;
                    uint32_t l_1800 = 0UL;
                    for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
                    { /* block id: 802 */
                        uint8_t *l_1745 = &p_2118->g_1394;
                        int32_t l_1760 = 0x5FBB6630L;
                        int16_t **l_1767 = &l_1766;
                        int32_t *l_1797[2][10] = {{&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0]},{&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0],&p_2118->g_1395[p_2118->g_832],&p_2118->g_1395[0],&p_2118->g_1395[0]}};
                        int i, j;
                        l_1657 &= ((((*l_1745) = p_2118->g_105[(p_2118->g_832 + 2)]) && (p_2118->g_105[(p_16 + 2)] || (safe_mul_func_uint16_t_u_u(((0x047ECD11E82C1185L >= (p_2118->g_121 &= l_1655[p_16])) > 0L), (safe_sub_func_int16_t_s_s(((!(((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((((0xE0L != ((*l_1745) = ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_2118->g_312, (p_16 ^ l_1650))) | p_15), 10)) && p_14))) & 0x7824A43CC82EFBF8L) || 0x6BL), 0x745EL)), p_14)), 246UL)) , 249UL) && l_1653[3])) , p_18), p_2118->g_105[(p_16 + 2)])))))) ^ l_1760);
                        l_1798 &= (p_2118->g_27[9] = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((&p_2118->g_1451 != (void*)0) , l_1765) != ((*l_1767) = l_1766)), (safe_mod_func_uint64_t_u_u((l_1652 = ((safe_mod_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(0x13D5L, (safe_sub_func_uint32_t_u_u(0x46CFDF61L, ((++(*l_1745)) >= (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(p_2118->g_247)) < ((safe_mul_func_int16_t_s_s(l_1791, (+(!(safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(p_2118->g_1715, p_18)), l_1657)))))) , l_1655[p_16])) > 0L), p_14)), l_1645)), l_1777))))))) ^ 4294967290UL) == l_1796), 2L)) < 1L)), p_16)))), 6)) > l_1654[2]));
                        --l_1800;
                    }
                    for (p_2118->g_1715 = 3; (p_2118->g_1715 <= 9); p_2118->g_1715 += 1)
                    { /* block id: 816 */
                        (*p_2118->g_169) = (l_1631 = &l_1650);
                    }
                }
            }
            l_1805++;
            for (l_1641 = 0; (l_1641 <= 3); l_1641 += 1)
            { /* block id: 825 */
                for (p_2118->g_312 = 3; (p_2118->g_312 >= 0); p_2118->g_312 -= 1)
                { /* block id: 828 */
                    int i, j;
                    return l_1639[p_2118->g_312][p_14];
                }
                ++l_1808;
            }
        }
        for (p_2118->g_1628 = 3; (p_2118->g_1628 >= 0); p_2118->g_1628 -= 1)
        { /* block id: 836 */
            int32_t *l_1811 = &l_1653[1];
            int32_t l_1833[5];
            int16_t l_1864 = 0x4046L;
            uint32_t l_1881 = 3UL;
            int32_t l_1919 = 7L;
            uint32_t l_1921 = 0x6A7A22F5L;
            uint8_t l_1939 = 0x71L;
            uint8_t *l_1946 = (void*)0;
            uint8_t *l_1947 = (void*)0;
            uint8_t *l_1948 = &l_1939;
            int16_t **l_1968 = &l_1765;
            uint32_t ****l_1972 = (void*)0;
            uint32_t *****l_1971[2][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1972,&l_1972,&l_1972,&l_1972}}};
            uint64_t *l_2067 = &l_1872;
            int64_t l_2080 = 0x7B68662834CACE25L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1833[i] = 9L;
            (*l_1811) |= p_2118->g_1395[p_2118->g_832];
        }
    }
    --l_2111;
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_35 p_2118->g_23 p_2118->g_170 p_2118->g_27 p_2118->g_169 p_2118->g_337 p_2118->g_89 p_2118->g_58 p_2118->g_311 p_2118->g_339 p_2118->g_352 p_2118->g_93 p_2118->g_64 p_2118->g_247 p_2118->g_105 p_2118->g_425 p_2118->g_249 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_832 p_2118->g_232 p_2118->g_848 p_2118->g_218 p_2118->g_234 p_2118->g_665 p_2118->g_952 p_2118->g_606 p_2118->g_1610 p_2118->g_1617 p_2118->g_1540 p_2118->g_1395
 * writes: p_2118->g_27 p_2118->g_35 p_2118->g_23 p_2118->g_579 p_2118->g_337 p_2118->g_89 p_2118->g_170 p_2118->g_58 p_2118->g_339 p_2118->g_606 p_2118->g_105 p_2118->g_665 p_2118->g_234 p_2118->g_232 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_715 p_2118->g_189 p_2118->g_249 p_2118->g_425 p_2118->g_361 p_2118->g_312 p_2118->g_93 p_2118->g_497 p_2118->g_1610 p_2118->g_1617 p_2118->g_1395
 */
int64_t  func_20(uint64_t  p_21, struct S0 * p_2118)
{ /* block id: 6 */
    int32_t *l_26[1][1][4] = {{{&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4]}}};
    uint8_t l_30 = 0x5CL;
    uint32_t l_1606 = 0x8CAAAE7BL;
    uint16_t *l_1607 = (void*)0;
    uint16_t *l_1608 = &p_2118->g_497;
    uint16_t *l_1609 = &p_2118->g_1610;
    uint32_t ***l_1615[3];
    int16_t *l_1616 = &p_2118->g_1617;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1615[i] = &p_2118->g_1247;
    p_2118->g_27[3] = 0x6DE0184DL;
    p_2118->g_1395[0] ^= (((func_28(l_30, p_2118) == ((*l_1609) ^= (+((*l_1608) = l_1606)))) >= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((&p_2118->g_1247 == l_1615[1]) != ((((p_21 | p_2118->g_218) >= p_21) < ((*l_1616) &= p_21)) , p_21)), 11)), 0x292CL)) , p_2118->g_1540)) , (-10L));
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_35 p_2118->g_23 p_2118->g_170 p_2118->g_27 p_2118->g_169 p_2118->g_337 p_2118->g_89 p_2118->g_58 p_2118->g_311 p_2118->g_339 p_2118->g_352 p_2118->g_93 p_2118->g_64 p_2118->g_247 p_2118->g_105 p_2118->g_425 p_2118->g_249 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_832 p_2118->g_232 p_2118->g_848 p_2118->g_218 p_2118->g_234 p_2118->g_665 p_2118->g_952 p_2118->g_606
 * writes: p_2118->g_35 p_2118->g_27 p_2118->g_23 p_2118->g_579 p_2118->g_337 p_2118->g_89 p_2118->g_170 p_2118->g_58 p_2118->g_339 p_2118->g_606 p_2118->g_105 p_2118->g_665 p_2118->g_234 p_2118->g_232 p_2118->g_113 p_2118->g_121 p_2118->g_685 p_2118->g_111 p_2118->g_715 p_2118->g_189 p_2118->g_249 p_2118->g_425 p_2118->g_361 p_2118->g_312 p_2118->g_93
 */
int16_t  func_28(uint64_t  p_29, struct S0 * p_2118)
{ /* block id: 8 */
    uint8_t l_33 = 255UL;
    uint32_t *l_34 = &p_2118->g_35;
    int32_t *l_38 = &p_2118->g_27[6];
    int32_t l_611 = (-8L);
    uint16_t **l_626 = &p_2118->g_579[1];
    uint8_t l_643 = 1UL;
    uint64_t *l_657 = (void*)0;
    uint32_t *l_679 = &p_2118->g_64[0][0];
    uint32_t **l_678 = &l_679;
    int8_t *l_730 = (void*)0;
    int32_t l_738 = 0x5DF63867L;
    int32_t l_741 = (-5L);
    int32_t l_743 = 1L;
    int32_t l_744 = 0x4370787AL;
    uint64_t l_759 = 0x7433C5678A3E8E34L;
    int64_t *l_843 = &p_2118->g_606;
    int64_t *l_931 = &p_2118->g_121;
    int64_t **l_930 = &l_931;
    uint8_t l_968[10][7][3] = {{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}},{{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL},{0xBAL,0UL,246UL}}};
    int8_t l_1050 = 1L;
    uint32_t l_1091 = 0x690A5BFDL;
    int16_t **l_1102 = &p_2118->g_531[1][0];
    int32_t ***l_1117 = (void*)0;
    int32_t l_1178 = (-1L);
    int32_t l_1181 = (-1L);
    int32_t l_1182 = 0x78A5B6DAL;
    int32_t l_1183 = 9L;
    int32_t l_1184[7] = {0x322908E9L,0x322908E9L,0x322908E9L,0x322908E9L,0x322908E9L,0x322908E9L,0x322908E9L};
    int64_t l_1187 = 0x36C7BAE4F6F5EF86L;
    uint32_t l_1192 = 0x73284BA5L;
    int16_t l_1209 = 0x5814L;
    int32_t *l_1215 = (void*)0;
    int8_t l_1217 = 0x73L;
    uint64_t **l_1333 = &p_2118->g_975[1][4];
    uint64_t l_1431 = 0xA5FA6E424C1BC534L;
    uint32_t l_1469 = 0x02B9DDF2L;
    uint32_t ***l_1505 = (void*)0;
    uint32_t ****l_1504 = &l_1505;
    int64_t l_1514 = 0x41D172BC61325431L;
    int16_t *l_1517[4];
    uint32_t ****l_1599 = &p_2118->g_1251;
    uint16_t ***l_1600 = &l_626;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1517[i] = (void*)0;
    if ((safe_mul_func_int8_t_s_s(l_33, (((--(*l_34)) , (void*)0) != (((*l_38) = 4L) , func_39(func_41(l_34, p_2118), p_2118))))))
    { /* block id: 322 */
        uint32_t l_581 = 4294967295UL;
        int32_t *l_610[5] = {&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_113};
        int i;
        for (p_2118->g_89 = 0; (p_2118->g_89 <= 1); p_2118->g_89 += 1)
        { /* block id: 325 */
            int16_t l_584 = 0x5A37L;
            int32_t l_590 = 0x11EB7F1CL;
            --l_581;
            (*p_2118->g_169) = l_38;
            l_584 = ((*p_2118->g_170) &= 0L);
            for (p_2118->g_58 = 1; (p_2118->g_58 >= 0); p_2118->g_58 -= 1)
            { /* block id: 332 */
                uint8_t l_604[5][4][3] = {{{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL}},{{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL}},{{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL}},{{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL}},{{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL},{0UL,0xADL,3UL}}};
                int32_t l_607 = 0L;
                int32_t l_609 = (-1L);
                int i, j, k;
                for (p_2118->g_23 = 0; (p_2118->g_23 <= 1); p_2118->g_23 += 1)
                { /* block id: 335 */
                    uint8_t *l_589[8] = {&p_2118->g_218,&p_2118->g_218,&p_2118->g_218,&p_2118->g_218,&p_2118->g_218,&p_2118->g_218,&p_2118->g_218,&p_2118->g_218};
                    uint16_t *l_603[6][9][2] = {{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}},{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}},{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}},{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}},{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}},{{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]},{&p_2118->g_105[0],&p_2118->g_105[5]}}};
                    int64_t *l_605 = &p_2118->g_606;
                    int32_t l_608 = 1L;
                    int i, j, k;
                    (*p_2118->g_170) = 0x6611C049L;
                    (**p_2118->g_169) ^= p_2118->g_311[p_2118->g_89][p_2118->g_89];
                    for (p_2118->g_339 = 0; (p_2118->g_339 != 29); ++p_2118->g_339)
                    { /* block id: 340 */
                        (*p_2118->g_170) ^= 0x12494B5CL;
                        if ((**p_2118->g_169))
                            break;
                    }
                    (*p_2118->g_169) = ((0xA5A2L < l_581) , func_50((safe_mul_func_uint16_t_u_u(1UL, (((p_2118->g_337 |= ((((l_590 = p_2118->g_311[p_2118->g_89][p_2118->g_89]) == (safe_mul_func_uint16_t_u_u(0xBA64L, (safe_div_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(l_584, (safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((l_608 |= ((p_29 >= 0x19L) , (((l_607 = ((*l_605) = (safe_lshift_func_uint16_t_u_u((l_604[1][2][1] = ((p_2118->g_352 ^ p_2118->g_93) | 9L)), p_29)))) , p_2118->g_311[p_2118->g_89][p_2118->g_89]) | p_29))), 65534UL)) || l_581), (-3L))))) , (-9L)) > 0x86EFL), (*l_38)))))) & 0x452EFE70L) , p_29)) != l_609) & 0x1801L))), p_29, p_2118));
                }
                return p_2118->g_311[p_2118->g_89][p_2118->g_89];
            }
        }
        l_611 = ((*l_38) = l_581);
    }
    else
    { /* block id: 357 */
        uint16_t *l_627 = &p_2118->g_105[0];
        int32_t l_630[5][6][4] = {{{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L}},{{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L}},{{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L}},{{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L}},{{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L},{(-9L),1L,9L,0x3E673AB0L}}};
        uint32_t l_631 = 0xEF2FBE34L;
        int32_t l_632 = 0x5CDD349CL;
        uint64_t *l_658 = (void*)0;
        int32_t *l_663 = &p_2118->g_311[1][0];
        uint8_t l_718[2][8][4] = {{{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL}},{{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL},{1UL,0UL,0xB6L,1UL}}};
        int32_t ***l_921[2][1];
        int64_t **l_929 = (void*)0;
        uint8_t *l_937[1][9][9] = {{{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643},{&l_643,&l_643,&l_33,&p_2118->g_93,(void*)0,&p_2118->g_93,&l_33,&l_643,&l_643}}};
        int32_t **l_950 = &l_663;
        int32_t ***l_949[9][6] = {{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950,&l_950,&l_950}};
        int16_t l_1021 = 9L;
        int64_t l_1038 = 0x1C298DA639D4A57AL;
        uint32_t **l_1070[2];
        uint8_t l_1105 = 0x42L;
        int32_t **l_1153 = &p_2118->g_665;
        uint64_t l_1195[8][6] = {{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL},{0x1C4446BD0D3CFB70L,0x8ACB87756A1A0488L,0x7EBB20EADB0D209EL,0x1C4446BD0D3CFB70L,1UL,0x7EBB20EADB0D209EL}};
        int8_t l_1230 = 0L;
        uint32_t l_1245 = 0x75E7DBA5L;
        uint16_t l_1257 = 0x19E0L;
        uint32_t **l_1274 = &l_34;
        int16_t **l_1276 = &p_2118->g_531[0][0];
        uint16_t l_1294 = 0x314BL;
        uint8_t l_1297 = 0x21L;
        uint32_t ****l_1300 = &p_2118->g_1251;
        uint64_t l_1313 = 18446744073709551613UL;
        uint16_t l_1334[8][4] = {{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL}};
        uint32_t ****l_1390[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_1432 = 7UL;
        uint16_t l_1519 = 0x3FF9L;
        int16_t l_1532[9][3][7] = {{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}},{{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L},{(-4L),1L,(-6L),0x27C8L,1L,0x49D4L,0x6D50L}}};
        uint32_t *****l_1554 = &l_1504;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_921[i][j] = &p_2118->g_169;
        }
        for (i = 0; i < 2; i++)
            l_1070[i] = &l_679;
        if ((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((p_2118->g_64[0][0] == (*p_2118->g_170)), (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((((((*l_38) != (((*l_627) = (safe_add_func_int64_t_s_s((!(safe_add_func_uint16_t_u_u((((void*)0 == l_626) >= (-1L)), ((void*)0 != l_627)))), ((safe_mul_func_int8_t_s_s(((((0x25C3L > (*l_38)) < l_630[0][4][0]) | p_2118->g_247) , p_2118->g_105[4]), (*l_38))) ^ p_29)))) > l_631)) == l_632) >= l_632) & p_29) , p_29), l_630[1][4][3])), p_29)) && l_631), p_29)))) <= p_29) > p_29), (-3L))))
        { /* block id: 359 */
            int64_t l_636 = (-1L);
            int32_t l_641[4][5] = {{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}};
            int64_t *l_652 = (void*)0;
            uint32_t l_703[10] = {0x8E8FB9D4L,4294967295UL,0x8E8FB9D4L,0x8E8FB9D4L,4294967295UL,0x8E8FB9D4L,0x8E8FB9D4L,4294967295UL,0x8E8FB9D4L,0x8E8FB9D4L};
            int32_t **l_725 = &p_2118->g_665;
            int32_t l_737 = 1L;
            int32_t l_742 = (-10L);
            int16_t l_807 = 0x3BAFL;
            int32_t l_833 = 0x3C53D7FAL;
            int32_t l_834 = 0x46DC9D55L;
            int32_t ***l_922 = &p_2118->g_169;
            int64_t ***l_932 = &p_2118->g_361;
            int16_t *l_933 = &p_2118->g_189;
            uint8_t *l_934 = (void*)0;
            uint8_t *l_935 = &l_718[1][2][3];
            int8_t *l_936[6];
            uint8_t *l_938 = &p_2118->g_93;
            int i, j;
            for (i = 0; i < 6; i++)
                l_936[i] = &p_2118->g_312;
lbl_810:
            for (p_29 = 0; (p_29 >= 31); p_29++)
            { /* block id: 362 */
                int32_t *l_635 = &l_630[0][5][0];
                int32_t l_640 = 0x45E6A9AEL;
                int32_t l_642[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_642[i] = (-1L);
                if (((*l_635) = (((void*)0 != &p_2118->g_170) , ((*l_38) = 4L))))
                { /* block id: 365 */
                    int32_t *l_637 = &p_2118->g_27[7];
                    int32_t *l_638 = (void*)0;
                    int32_t *l_639[3][2] = {{&l_630[1][3][1],(void*)0},{&l_630[1][3][1],(void*)0},{&l_630[1][3][1],(void*)0}};
                    int i, j;
                    l_643++;
                }
                else
                { /* block id: 367 */
                    int32_t **l_664[5] = {&l_663,&l_663,&l_663,&l_663,&l_663};
                    int32_t l_666 = (-1L);
                    int16_t *l_667 = &p_2118->g_234;
                    int16_t *l_668 = &p_2118->g_232;
                    int32_t **l_677 = (void*)0;
                    int i;
                    if (((((*l_668) = ((*l_667) = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*l_38) != ((safe_sub_func_uint64_t_u_u(((void*)0 != l_652), ((safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((((l_630[1][1][3] , l_657) == l_658) > (safe_lshift_func_int16_t_s_u(((((l_635 != (p_2118->g_665 = l_663)) || ((l_636 , &p_2118->g_606) == (void*)0)) , (*l_635)) & l_666), 0))), l_630[0][4][0])) == p_2118->g_337) | (**p_2118->g_169)), p_2118->g_311[1][0])) | l_641[0][1]))) < (*l_635))) , l_632), p_2118->g_311[1][0])), 0xEEL)))) | p_29) , (**p_2118->g_169)))
                    { /* block id: 371 */
                        int64_t l_669 = 0x46530015FEA6483DL;
                        uint64_t *l_674[9][9] = {{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249},{&p_2118->g_23,(void*)0,(void*)0,&p_2118->g_249,&p_2118->g_425,&p_2118->g_89,&p_2118->g_23,&p_2118->g_23,&p_2118->g_249}};
                        uint32_t ***l_680 = (void*)0;
                        uint32_t ***l_681 = &l_678;
                        int i, j;
                        (*p_2118->g_170) = (*p_2118->g_170);
                        if (l_669)
                            break;
                        (*l_38) ^= (safe_div_func_uint16_t_u_u(l_669, (((((*l_635) = (safe_add_func_int8_t_s_s(0L, 0x1CL))) >= p_2118->g_425) | ((--(*l_34)) < (((void*)0 != l_677) >= ((((*l_681) = l_678) != (void*)0) == 0x50L)))) && l_666)));
                        (*p_2118->g_169) = (void*)0;
                    }
                    else
                    { /* block id: 379 */
                        if (l_641[0][1])
                            break;
                    }
                    l_666 = p_2118->g_249;
                    p_2118->g_113 |= 0x74E8EF0DL;
                }
                return p_29;
            }
            for (p_2118->g_121 = 0; (p_2118->g_121 > (-24)); p_2118->g_121 = safe_sub_func_uint16_t_u_u(p_2118->g_121, 8))
            { /* block id: 389 */
                uint32_t *l_684 = &p_2118->g_685;
                int32_t l_688[7][3] = {{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L},{0x4D925E26L,0x7CA5EFE5L,0x4D925E26L}};
                uint64_t l_697 = 0x71626747246FAA05L;
                int16_t *l_698 = &p_2118->g_234;
                int64_t l_701 = 0x5490096F722AD799L;
                int32_t *l_702[9];
                uint32_t l_735 = 0xE0F24B8DL;
                int32_t l_736[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int8_t l_739[2];
                uint8_t l_745[5][1][9] = {{{0x9AL,1UL,2UL,0xAFL,2UL,1UL,0x9AL,9UL,0x9CL}},{{0x9AL,1UL,2UL,0xAFL,2UL,1UL,0x9AL,9UL,0x9CL}},{{0x9AL,1UL,2UL,0xAFL,2UL,1UL,0x9AL,9UL,0x9CL}},{{0x9AL,1UL,2UL,0xAFL,2UL,1UL,0x9AL,9UL,0x9CL}},{{0x9AL,1UL,2UL,0xAFL,2UL,1UL,0x9AL,9UL,0x9CL}}};
                int64_t l_914 = 0L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_702[i] = &l_611;
                for (i = 0; i < 2; i++)
                    l_739[i] = 0x5BL;
                if (p_29)
                    break;
                if (((((((--(*l_684)) , ((*l_38) < (l_688[3][1] || (l_703[9] = (l_611 |= ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((p_29 > (safe_add_func_uint64_t_u_u(l_641[2][4], ((((((safe_lshift_func_uint16_t_u_s(p_29, (l_697 | ((*l_698) = l_688[2][1])))) || ((safe_sub_func_uint16_t_u_u(65535UL, p_29)) && p_29)) && 0UL) || (-9L)) & 0x581D5251L) <= (-1L))))) == 0x7A90L), l_701)), 2)) & l_630[2][1][0])))))) , p_29) >= 4294967288UL) , p_29) < 0L))
                { /* block id: 395 */
                    uint32_t l_708 = 0x210C8D5EL;
                    int32_t l_720 = 1L;
                    int32_t **l_727 = &l_663;
                    int32_t ***l_726 = &l_727;
                    int32_t l_740 = 0L;
                    for (l_643 = 0; (l_643 <= 9); l_643 += 1)
                    { /* block id: 398 */
                        int32_t l_711 = 0x2B3DD528L;
                        uint32_t *l_714 = &p_2118->g_715;
                        int16_t *l_719 = &p_2118->g_189;
                        int i;
                        l_720 = (((l_703[l_643] > ((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((p_2118->g_111 &= (l_711 = (((void*)0 == l_657) , ((((void*)0 != &p_2118->g_685) == l_708) , ((*l_34)--))))) >= p_29) >= (((*l_719) = (safe_mod_func_uint32_t_u_u(((*l_714) = p_29), (safe_div_func_int16_t_s_s(((*l_698) = (p_29 ^ l_718[1][2][3])), l_703[9]))))) != p_29)), (-1L))), 0x70L)) , p_2118->g_64[0][0])) == p_2118->g_93) & l_632);
                        if (p_29)
                            continue;
                    }
                    (*l_38) = (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((l_725 == ((*l_726) = &p_2118->g_665)) <= (safe_sub_func_int32_t_s_s((p_2118->g_121 >= (&p_2118->g_352 == l_730)), (((safe_rshift_func_int16_t_s_s(0x102AL, (safe_add_func_uint16_t_u_u(l_632, (&l_627 == (p_29 , l_626)))))) == l_631) , p_2118->g_64[0][2])))), l_632)), l_735));
                    l_745[0][0][3]--;
                    (**p_2118->g_169) = (*p_2118->g_170);
                }
                else
                { /* block id: 412 */
                    int64_t *l_752[3][2] = {{&p_2118->g_144,&p_2118->g_144},{&p_2118->g_144,&p_2118->g_144},{&p_2118->g_144,&p_2118->g_144}};
                    int32_t l_764 = (-1L);
                    int8_t *l_767 = &p_2118->g_58;
                    uint16_t l_784[10][8] = {{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL},{65528UL,0x1C4CL,65533UL,6UL,0x1C4CL,6UL,65533UL,0x1C4CL}};
                    int i, j;
                    p_2118->g_113 |= (((safe_sub_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(((l_641[1][3] = ((void*)0 == &p_2118->g_62)) != (safe_mod_func_int32_t_s_s(p_29, ((((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((p_2118->g_27[0] <= l_759) , 0x0197L) | (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_764, ((*l_767) = ((safe_add_func_uint16_t_u_u(0x38ADL, (p_29 >= 0xC640E3EDA2B2FFF0L))) | p_2118->g_105[5])))), l_631))), 5)), p_29)) , 0x13L) > 0xFAL) || (**p_2118->g_169))))), p_29)) > 0xA3D0598DL), 0x7AEBCA03920B8969L)) != 0L) , (*p_2118->g_170));
                    if (((((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x8A2C2C4F2240BCB0L, ((((safe_rshift_func_int8_t_s_u(((*l_767) = ((((l_632 &= p_29) && ((((((((p_2118->g_337 , (--(*l_34))) != (safe_lshift_func_int8_t_s_s(p_2118->g_27[2], 1))) >= (p_2118->g_64[2][0] >= ((safe_mul_func_int16_t_s_s(((*l_698) = ((l_764 <= ((l_738 = (0xD8BDC991L > (safe_add_func_int16_t_s_s(l_764, l_764)))) >= 1UL)) , l_630[1][1][0])), p_29)) <= p_29))) ^ 0UL) < 0L) >= l_764) ^ p_2118->g_64[0][0]) != p_29)) >= 0x80L) && p_2118->g_311[0][0])), p_29)) , 1UL) , 0x2CDF36E1F90A4A91L) , 0x87767DCAE02B672DL))), p_29)) == 65535UL) == (*l_38)) ^ l_784[2][0]))
                    { /* block id: 421 */
                        uint32_t l_808[6][1] = {{0x3491AC23L},{0x3491AC23L},{0x3491AC23L},{0x3491AC23L},{0x3491AC23L},{0x3491AC23L}};
                        int32_t l_809 = (-1L);
                        uint64_t *l_825 = &p_2118->g_249;
                        int i, j;
                        l_809 ^= (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0x93L, (safe_lshift_func_uint8_t_u_s(p_2118->g_23, (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_29 ^ ((((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((0x399F07E98B737396L < p_29), l_631)), (safe_sub_func_int64_t_s_s((-3L), (((safe_add_func_int8_t_s_s(6L, (((safe_add_func_int64_t_s_s((p_29 < p_2118->g_64[0][0]), p_29)) == 0x5E0AAFF7L) || p_29))) <= (*p_2118->g_170)) >= l_807))))) && l_737) != 0x3572L) , 0x521855F6L)), p_2118->g_35)), 1L)))))), l_808[1][0])) , 0x1952368EL) , 0x1990L), 14));
                        if (l_611)
                            goto lbl_810;
                        p_2118->g_113 ^= (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((l_833 = (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(1L, ((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((*l_825) = 0x5A997448E3178B73L), (l_641[0][1] ^= p_29))) <= ((&p_2118->g_311[1][0] == l_684) <= (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((void*)0 == l_652), ((safe_mul_func_int8_t_s_s(((l_630[0][4][0] && (p_2118->g_832 & 65535UL)) , p_2118->g_232), 0xE5L)) != 0xD134B84797B7369BL))) > p_29), l_718[1][7][0])))), 1UL)) , p_29))), p_29)), (**p_2118->g_169))) & 4UL) && p_29)) , 1L), (*l_38))) >= 0UL), l_807));
                        if (p_29)
                            break;
                    }
                    else
                    { /* block id: 429 */
                        uint16_t l_835 = 0xA33CL;
                        int32_t l_838[1][3][7];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_838[i][j][k] = 0x2FCFD211L;
                            }
                        }
                        (*p_2118->g_170) = l_632;
                        if (p_2118->g_232)
                            goto lbl_810;
                        l_835--;
                        l_630[0][4][0] = (~(l_838[0][1][6] = ((*p_2118->g_170) = l_784[7][1])));
                    }
                }
                if ((((safe_lshift_func_uint16_t_u_s(9UL, (safe_sub_func_uint64_t_u_u(p_29, ((void*)0 == l_843))))) , p_29) & (l_630[0][4][0] = p_29)))
                { /* block id: 439 */
                    (*p_2118->g_169) = (*p_2118->g_169);
                }
                else
                { /* block id: 441 */
                    return (*l_38);
                }
                for (p_2118->g_425 = 0; (p_2118->g_425 <= 33); p_2118->g_425++)
                { /* block id: 446 */
                    l_914 = (safe_div_func_int16_t_s_s((p_2118->g_848[5] == &p_2118->g_849[8][3][1]), (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((p_29 >= (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(p_29)) == (safe_sub_func_uint32_t_u_u(0xA9AC27A7L, (safe_unary_minus_func_int8_t_s(((+(*l_38)) && (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((p_29 | (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(l_632, (((safe_mod_func_uint64_t_u_u(p_2118->g_218, (-1L))) , 3UL) <= p_2118->g_35))) ^ (*p_2118->g_170)), 0x6422L))), p_29)), p_2118->g_234)))))))), 5))), p_2118->g_832)), (-1L)))));
                }
            }
lbl_948:
            l_641[3][4] ^= ((((p_2118->g_111 == (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((l_922 = l_921[0][0]) == (void*)0), ((0x3FL != ((*l_938) = ((l_937[0][6][7] = ((safe_rshift_func_int8_t_s_u((p_2118->g_312 = (0x2F0DL >= (((*l_935) = ((p_2118->g_234 , (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((l_929 != ((*l_932) = l_930)) >= ((*l_933) = (*l_38))), l_807)), p_29)) | p_29) & p_29)) < 1UL)) , p_29))), 6)) , (void*)0)) != (void*)0))) && p_2118->g_111))), p_29)), 0x467E3889L))) != 0x535AD3B4L) , (*l_725)) == &p_2118->g_311[1][0]);
            if ((*p_2118->g_170))
            { /* block id: 458 */
                int32_t *l_945 = &l_630[3][2][0];
                for (l_759 = (-29); (l_759 >= 45); l_759 = safe_add_func_uint32_t_u_u(l_759, 3))
                { /* block id: 461 */
                    (**l_922) = (*p_2118->g_169);
                    for (p_2118->g_337 = 0; (p_2118->g_337 > (-21)); p_2118->g_337--)
                    { /* block id: 465 */
                        int16_t l_943[5] = {0x3657L,0x3657L,0x3657L,0x3657L,0x3657L};
                        int i;
                        return l_943[0];
                    }
                    if ((**p_2118->g_169))
                    { /* block id: 468 */
                        int32_t l_944 = 7L;
                        int32_t *l_946 = &l_632;
                        int32_t *l_947 = (void*)0;
                        (**p_2118->g_169) ^= (+l_944);
                        if (p_29)
                            break;
                        l_947 = (l_946 = l_945);
                    }
                    else
                    { /* block id: 473 */
                        if (p_2118->g_35)
                            goto lbl_948;
                    }
                }
            }
            else
            { /* block id: 477 */
                int32_t ****l_951 = &l_949[4][0];
                int32_t l_962 = (-9L);
                int32_t l_963 = 0x28CA148EL;
                int32_t l_964 = 0x16B6E51AL;
                int32_t l_965 = 0L;
                int32_t l_966 = 0x68D5F9F6L;
                int32_t l_967 = 0L;
                (*p_2118->g_169) = ((p_2118->g_685 , ((((*l_951) = l_949[5][1]) == p_2118->g_952) && ((0x1E9A5ECAL != ((((((safe_rshift_func_uint16_t_u_s(p_29, 11)) != p_29) > ((*l_38) == (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551615UL, 18446744073709551610UL)), (***l_922))))) != (***l_922)) || p_29) >= 0x06D1973AL)) > p_2118->g_606))) , (void*)0);
                --l_968[1][3][2];
            }
        }
        else
        { /* block id: 482 */
            return p_29;
        }
        for (l_738 = 3; (l_738 >= 0); l_738 -= 1)
        { /* block id: 487 */
            uint16_t *l_984 = &p_2118->g_105[4];
            int32_t l_989 = 0x530AFBC7L;
            uint32_t **l_1008 = &l_34;
            uint8_t *l_1012 = &l_643;
            int32_t ***l_1053 = &l_950;
            int32_t *l_1068 = &l_989;
            uint8_t l_1110 = 0xB6L;
            int32_t l_1176 = (-7L);
            int32_t l_1189[4][4][4] = {{{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)}},{{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)}},{{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)}},{{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)},{0L,0L,8L,(-10L)}}};
            int64_t *l_1214[4];
            int32_t l_1290 = 0x584B7DD8L;
            int16_t l_1292 = (-1L);
            uint32_t *****l_1311 = (void*)0;
            uint64_t **l_1330[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1346 = 0x4FE19D88L;
            uint8_t l_1348 = 246UL;
            int8_t l_1355 = 1L;
            uint32_t *l_1404[6] = {&p_2118->g_64[0][2],&p_2118->g_64[2][4],&p_2118->g_64[0][2],&p_2118->g_64[0][2],&p_2118->g_64[2][4],&p_2118->g_64[0][2]};
            uint8_t l_1406[8][3] = {{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L},{0xFDL,0x4BL,0x49L}};
            int32_t l_1413[10] = {0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L,0x294F14E9L};
            uint32_t *l_1481[4];
            int32_t l_1528[7][9][3] = {{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}},{{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L},{0L,0x642E36EDL,0x0E9A2B37L}}};
            uint32_t l_1533 = 0x58FE9EA1L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1214[i] = &l_1187;
            for (i = 0; i < 4; i++)
                l_1481[i] = (void*)0;
            (1 + 1);
        }
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_170 p_2118->g_27 p_2118->g_169 p_2118->g_337
 * writes: p_2118->g_579 p_2118->g_27 p_2118->g_337
 */
uint64_t * func_39(uint64_t * p_40, struct S0 * p_2118)
{ /* block id: 317 */
    uint16_t *l_577 = &p_2118->g_497;
    uint16_t **l_578[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_580[6][4][8] = {{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_113,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_337,&p_2118->g_113}}};
    int i, j, k;
    p_2118->g_337 ^= ((65535UL && ((p_2118->g_579[1] = l_577) != &p_2118->g_497)) , ((**p_2118->g_169) = (*p_2118->g_170)));
    return &p_2118->g_425;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_23
 * writes: p_2118->g_23
 */
uint64_t * func_41(int32_t * p_42, struct S0 * p_2118)
{ /* block id: 11 */
    int16_t l_53 = 1L;
    int32_t l_61 = 0L;
    uint64_t *l_440[4][3][10] = {{{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425}},{{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425}},{{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425}},{{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425},{&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425,(void*)0,&p_2118->g_425,&p_2118->g_425}}};
    int32_t l_516 = (-9L);
    int32_t l_517 = 1L;
    int32_t l_518 = (-1L);
    int32_t l_520 = (-1L);
    int32_t l_523 = 0x29D703F7L;
    int16_t **l_537 = &p_2118->g_531[0][0];
    int32_t *l_542 = (void*)0;
    int i, j, k;
    for (p_2118->g_23 = 25; (p_2118->g_23 > 3); p_2118->g_23--)
    { /* block id: 14 */
        int32_t l_56[4][4][7] = {{{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L}},{{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L}},{{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L}},{{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L},{0L,0x1D1A932DL,3L,0L,0x7E2CCF58L,0x1D4416DAL,0x6C6C0484L}}};
        int8_t *l_57 = &p_2118->g_58;
        int32_t *l_65 = (void*)0;
        int32_t l_513 = 0x5F7B112DL;
        int32_t l_514 = 1L;
        int32_t l_515 = (-1L);
        int32_t l_519 = 0x41A7B223L;
        int32_t l_521 = 6L;
        int32_t l_522 = (-1L);
        uint64_t l_524[2][2][9] = {{{0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL,0xDDB566800675CD5FL,0UL,0x176FAB498AACDBE7L,0UL,0xDDB566800675CD5FL,0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL},{0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL,0xDDB566800675CD5FL,0UL,0x176FAB498AACDBE7L,0UL,0xDDB566800675CD5FL,0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL}},{{0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL,0xDDB566800675CD5FL,0UL,0x176FAB498AACDBE7L,0UL,0xDDB566800675CD5FL,0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL},{0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL,0xDDB566800675CD5FL,0UL,0x176FAB498AACDBE7L,0UL,0xDDB566800675CD5FL,0x8B93D4EF9F8B5BFBL,0x8B93D4EF9F8B5BFBL}}};
        int16_t *l_528 = &p_2118->g_189;
        int16_t **l_527 = &l_528;
        int32_t l_534[2];
        uint64_t l_574 = 0xCB8928DA939C969BL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_534[i] = 0x6CD5F81CL;
        (1 + 1);
    }
    return l_440[2][1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_93 p_2118->g_170 p_2118->g_27 p_2118->g_337 p_2118->g_247 p_2118->g_249 p_2118->g_169 p_2118->g_89 p_2118->g_234 p_2118->g_311 p_2118->g_361 p_2118->g_189 p_2118->g_111 p_2118->g_113 p_2118->g_23 p_2118->g_232 p_2118->g_105 p_2118->g_497 p_2118->g_339 p_2118->g_121
 * writes: p_2118->g_93 p_2118->g_337 p_2118->g_247 p_2118->g_249 p_2118->g_89 p_2118->g_234 p_2118->g_27 p_2118->g_111 p_2118->g_113 p_2118->g_170 p_2118->g_121
 */
int32_t * func_45(uint32_t * p_46, int16_t  p_47, uint64_t * p_48, int32_t * p_49, struct S0 * p_2118)
{ /* block id: 224 */
    int32_t l_468 = 0x2CBAEEDBL;
    int32_t *l_509 = (void*)0;
    for (p_2118->g_93 = 0; (p_2118->g_93 == 42); p_2118->g_93++)
    { /* block id: 227 */
        int32_t *l_443 = &p_2118->g_337;
        (*l_443) |= (*p_2118->g_170);
        for (p_2118->g_247 = 29; (p_2118->g_247 == 2); p_2118->g_247 = safe_sub_func_uint8_t_u_u(p_2118->g_247, 9))
        { /* block id: 231 */
            int64_t *l_453 = &p_2118->g_121;
            int64_t **l_452[1];
            int32_t *l_459 = &p_2118->g_113;
            int32_t **l_458 = &l_459;
            int32_t l_498 = 0x5DE8BE5EL;
            int i;
            for (i = 0; i < 1; i++)
                l_452[i] = &l_453;
            for (p_2118->g_249 = 0; (p_2118->g_249 <= 1); p_2118->g_249 += 1)
            { /* block id: 234 */
                return (*p_2118->g_169);
            }
            for (p_2118->g_89 = (-24); (p_2118->g_89 > 10); p_2118->g_89 = safe_add_func_int16_t_s_s(p_2118->g_89, 8))
            { /* block id: 239 */
                int16_t l_464[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_464[i] = 0L;
                for (p_2118->g_234 = 0; (p_2118->g_234 <= 1); p_2118->g_234 += 1)
                { /* block id: 242 */
                    int32_t **l_461[2][3][4] = {{{&l_459,&l_443,&l_459,&l_443},{&l_459,&l_443,&l_459,&l_443},{&l_459,&l_443,&l_459,&l_443}},{{&l_459,&l_443,&l_459,&l_443},{&l_459,&l_443,&l_459,&l_443},{&l_459,&l_443,&l_459,&l_443}}};
                    int32_t ***l_460 = &l_461[0][2][3];
                    uint32_t *l_465 = (void*)0;
                    uint32_t *l_466 = &p_2118->g_111;
                    uint64_t *l_467[8][8] = {{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249},{&p_2118->g_249,&p_2118->g_23,&p_2118->g_249,(void*)0,&p_2118->g_89,&p_2118->g_249,(void*)0,&p_2118->g_249}};
                    int i, j, k;
                    l_468 ^= (((*l_459) = (safe_mul_func_uint8_t_u_u(p_2118->g_311[p_2118->g_234][p_2118->g_234], ((*l_443) && (safe_mul_func_int16_t_s_s((((**p_2118->g_169) = ((*l_443) ^= (l_452[0] == p_2118->g_361))) <= 4294967294UL), (safe_sub_func_uint16_t_u_u(65532UL, (((((safe_add_func_int16_t_s_s(((l_458 = (void*)0) == ((*l_460) = &p_49)), (((safe_add_func_uint8_t_u_u(((((*l_466) |= ((l_464[1] , p_47) , p_2118->g_189)) & (*l_459)) | l_464[1]), 0x26L)) ^ p_47) , p_47))) >= 0xB18FE55DL) >= p_2118->g_89) >= p_2118->g_113) >= 0x4BE1L))))))))) > p_47);
                    (*l_459) = (safe_mul_func_int8_t_s_s(p_47, (safe_lshift_func_int8_t_s_u(0x60L, 2))));
                }
                (*p_2118->g_169) = func_50((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((*p_49) = ((p_47 , ((safe_mul_func_int8_t_s_s((((*l_443) >= (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_464[1], (*p_49))), (((((!(safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(0x5412L, ((&p_2118->g_169 != (void*)0) ^ (((*l_459) = ((safe_div_func_uint64_t_u_u((l_464[1] , (((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_2118->g_23, 2)), l_464[0])) || p_2118->g_232) , p_47)), p_47)) ^ p_2118->g_105[0])) >= p_2118->g_497)))) && 0L), l_498)), 0x6609B1F1L))) <= l_464[1]) > p_2118->g_89) ^ p_2118->g_339) & p_47)))) != (*p_46)), p_47)) != (-2L))) || p_2118->g_497)) > p_47), p_47)), p_47)), 0UL)), p_47, p_2118);
            }
        }
    }
    for (p_2118->g_93 = 0; (p_2118->g_93 >= 36); ++p_2118->g_93)
    { /* block id: 260 */
        uint32_t l_506 = 0xDD3BD49DL;
        for (p_2118->g_121 = (-29); (p_2118->g_121 <= (-5)); p_2118->g_121++)
        { /* block id: 263 */
            int32_t *l_503 = &l_468;
            int32_t *l_504 = &p_2118->g_337;
            int32_t *l_505[7][2][7] = {{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}},{{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]},{&p_2118->g_113,&p_2118->g_113,&p_2118->g_27[9],&p_2118->g_113,&p_2118->g_337,&p_2118->g_27[9],&p_2118->g_27[9]}}};
            int i, j, k;
            l_506++;
        }
        (*p_2118->g_170) |= l_506;
    }
    return l_509;
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_170 p_2118->g_27
 * writes: p_2118->g_27
 */
uint32_t * func_50(int32_t  p_51, uint16_t  p_52, struct S0 * p_2118)
{ /* block id: 18 */
    int32_t *l_72[6] = {&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4],&p_2118->g_27[4]};
    uint64_t *l_94 = &p_2118->g_23;
    uint16_t l_149 = 65535UL;
    int64_t *l_225 = &p_2118->g_121;
    int8_t *l_309 = (void*)0;
    int64_t l_329 = (-1L);
    uint8_t l_334 = 0UL;
    int64_t l_430 = 0x18B35AB75A38078AL;
    int32_t l_431 = (-10L);
    int32_t l_432 = 0L;
    uint16_t l_433 = 0x5CAEL;
    int i;
    for (p_52 = 0; (p_52 <= 3); p_52 += 1)
    { /* block id: 21 */
        uint16_t l_85 = 65535UL;
        int8_t *l_86 = (void*)0;
        uint64_t *l_87 = (void*)0;
        uint64_t *l_88 = &p_2118->g_89;
        int32_t *l_90 = &p_2118->g_27[4];
        uint16_t *l_91 = &l_85;
        uint8_t *l_92 = &p_2118->g_93;
        int32_t l_260[10] = {0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL,0x146EBC1DL};
        uint32_t *l_284 = &p_2118->g_111;
        int64_t l_288 = 0x09246CAE3DAA5321L;
        uint32_t l_294[9][1][10] = {{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}},{{0xE048BF08L,0UL,4UL,0xD9533163L,0x7037C345L,0x32F114DFL,0xE048BF08L,0x66749B94L,0xDC0AB179L,0xDC0AB179L}}};
        uint64_t l_354 = 4UL;
        int i, j, k;
        (1 + 1);
    }
    --l_433;
    (*p_2118->g_170) |= (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((-8L), p_52)), 3));
    return l_72[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_2118->g_27 p_2118->g_64
 * writes: p_2118->g_111
 */
int32_t  func_66(int32_t * p_67, int32_t  p_68, uint32_t  p_69, int64_t  p_70, uint64_t * p_71, struct S0 * p_2118)
{ /* block id: 25 */
    uint16_t *l_107 = (void*)0;
    int32_t l_114[2];
    int i;
    for (i = 0; i < 2; i++)
        l_114[i] = 0x40ACBBF4L;
    if (p_2118->g_27[2])
    { /* block id: 26 */
        int64_t l_103[10][10][2] = {{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}},{{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L},{0x27D8CF631B5FDDB2L,0x58B784503A7054D2L}}};
        uint16_t *l_104[2][3] = {{&p_2118->g_105[0],&p_2118->g_105[0],&p_2118->g_105[0]},{&p_2118->g_105[0],&p_2118->g_105[0],&p_2118->g_105[0]}};
        uint16_t **l_106[9] = {&l_104[0][2],(void*)0,&l_104[0][2],&l_104[0][2],(void*)0,&l_104[0][2],&l_104[0][2],(void*)0,&l_104[0][2]};
        uint32_t *l_110 = &p_2118->g_111;
        int32_t *l_112[4][10][3] = {{{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]}},{{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]}},{{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]}},{{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]},{&p_2118->g_27[4],&p_2118->g_113,&p_2118->g_27[4]}}};
        int i, j, k;
        l_114[1] |= ((safe_mod_func_int16_t_s_s((((p_69 & 255UL) != (p_2118->g_64[0][0] , (safe_div_func_int16_t_s_s((p_70 && 5L), (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_103[4][2][0], ((*l_110) = ((l_104[0][2] == (l_107 = (void*)0)) >= (safe_rshift_func_uint8_t_u_u(p_2118->g_64[0][0], 6)))))) , p_68), p_2118->g_27[4])))))) != p_70), l_103[4][9][0])) != 0x5BA7L);
    }
    else
    { /* block id: 30 */
        return p_2118->g_27[4];
    }
    return l_114[1];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2119;
    struct S0* p_2118 = &c_2119;
    struct S0 c_2120 = {
        6UL, // p_2118->g_12
        18446744073709551615UL, // p_2118->g_23
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_2118->g_27
        0xFBFC75DAL, // p_2118->g_35
        (-1L), // p_2118->g_58
        0xA207B8A5L, // p_2118->g_63
        &p_2118->g_63, // p_2118->g_62
        {{4294967295UL,0xD441147CL,4294967295UL,4294967295UL,0xD441147CL},{4294967295UL,0xD441147CL,4294967295UL,4294967295UL,0xD441147CL},{4294967295UL,0xD441147CL,4294967295UL,4294967295UL,0xD441147CL},{4294967295UL,0xD441147CL,4294967295UL,4294967295UL,0xD441147CL}}, // p_2118->g_64
        18446744073709551615UL, // p_2118->g_89
        0xF0L, // p_2118->g_93
        {0xD033L,0xD033L,0xD033L,0xD033L,0xD033L,0xD033L,0xD033L,0xD033L,0xD033L,0xD033L}, // p_2118->g_105
        0x986CBD83L, // p_2118->g_111
        0L, // p_2118->g_113
        (-1L), // p_2118->g_121
        8L, // p_2118->g_144
        {{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}},{{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L},{0xBEB426B7B25FE38CL,0x4D2ADB4F27B7FA82L}}}, // p_2118->g_166
        &p_2118->g_166[3][5][1], // p_2118->g_165
        &p_2118->g_165, // p_2118->g_164
        &p_2118->g_27[4], // p_2118->g_170
        &p_2118->g_170, // p_2118->g_169
        0x1720L, // p_2118->g_189
        0x7FL, // p_2118->g_218
        0x6CDAL, // p_2118->g_232
        (-1L), // p_2118->g_234
        0x26EAL, // p_2118->g_247
        0xE96DD3B4845BDF1AL, // p_2118->g_249
        {{(-10L),(-10L)},{(-10L),(-10L)}}, // p_2118->g_311
        1L, // p_2118->g_312
        0x4E1A11DBL, // p_2118->g_337
        0x24AFA983L, // p_2118->g_339
        0x7FL, // p_2118->g_352
        (void*)0, // p_2118->g_361
        0x26F0A58C4BF6A316L, // p_2118->g_425
        0x5A47L, // p_2118->g_497
        {{&p_2118->g_247},{&p_2118->g_247},{&p_2118->g_247},{&p_2118->g_247}}, // p_2118->g_531
        {{{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]}},{{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]}},{{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]}},{{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]},{&p_2118->g_531[3][0],&p_2118->g_531[1][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0],&p_2118->g_531[0][0]}}}, // p_2118->g_530
        {&p_2118->g_105[0],&p_2118->g_105[0],&p_2118->g_105[0],&p_2118->g_105[0],&p_2118->g_105[0]}, // p_2118->g_579
        0x674EAA66875C227BL, // p_2118->g_606
        &p_2118->g_311[1][0], // p_2118->g_665
        3UL, // p_2118->g_685
        0xCF1D3208L, // p_2118->g_715
        (-2L), // p_2118->g_832
        4294967295UL, // p_2118->g_850
        0x29670450L, // p_2118->g_851
        0xADE906B7L, // p_2118->g_852
        0x330F3BF7L, // p_2118->g_853
        0UL, // p_2118->g_854
        0x8B56D17CL, // p_2118->g_855
        4294967295UL, // p_2118->g_856
        {{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL},{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL},{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL},{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL},{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL},{0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL,0x0E28BA27L,0xE20C4C0BL,0x0E28BA27L,4294967295UL,0xE3FC9F5AL,0xE3FC9F5AL,4294967295UL}}, // p_2118->g_857
        {0xB7D8835AL,0xB7D8835AL,0xB7D8835AL,0xB7D8835AL,0xB7D8835AL,0xB7D8835AL}, // p_2118->g_858
        0xCFE32775L, // p_2118->g_859
        {{4294967291UL},{4294967291UL},{4294967291UL},{4294967291UL}}, // p_2118->g_860
        1UL, // p_2118->g_861
        {4UL,4UL,4UL,4UL,4UL}, // p_2118->g_862
        0xC36368D6L, // p_2118->g_863
        {4294967286UL,4294967286UL}, // p_2118->g_864
        0x8E483700L, // p_2118->g_865
        7UL, // p_2118->g_866
        3UL, // p_2118->g_867
        0UL, // p_2118->g_868
        4294967295UL, // p_2118->g_869
        0x628EC4B7L, // p_2118->g_870
        0xCCBFD22FL, // p_2118->g_871
        4294967295UL, // p_2118->g_872
        0xB67F3DBBL, // p_2118->g_873
        1UL, // p_2118->g_874
        4294967295UL, // p_2118->g_875
        {4294967287UL,4294967287UL,4294967287UL,4294967287UL}, // p_2118->g_876
        0xE54F695AL, // p_2118->g_877
        0UL, // p_2118->g_878
        0UL, // p_2118->g_879
        0UL, // p_2118->g_880
        2UL, // p_2118->g_881
        4294967295UL, // p_2118->g_882
        0UL, // p_2118->g_883
        7UL, // p_2118->g_884
        {4294967292UL,0xC6248436L,4294967292UL,4294967292UL,0xC6248436L,4294967292UL,4294967292UL,0xC6248436L}, // p_2118->g_885
        0xE6001AF1L, // p_2118->g_886
        9UL, // p_2118->g_887
        4294967295UL, // p_2118->g_888
        0x8A9FD24EL, // p_2118->g_889
        0xF0BB7FF1L, // p_2118->g_890
        4294967286UL, // p_2118->g_891
        {{0UL,4294967286UL,0UL,0UL,4294967286UL,0UL,0UL,4294967286UL,0UL},{0UL,4294967286UL,0UL,0UL,4294967286UL,0UL,0UL,4294967286UL,0UL},{0UL,4294967286UL,0UL,0UL,4294967286UL,0UL,0UL,4294967286UL,0UL},{0UL,4294967286UL,0UL,0UL,4294967286UL,0UL,0UL,4294967286UL,0UL},{0UL,4294967286UL,0UL,0UL,4294967286UL,0UL,0UL,4294967286UL,0UL}}, // p_2118->g_892
        0xC623CED4L, // p_2118->g_893
        {{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}},{{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0},{&p_2118->g_860[0][0],&p_2118->g_850,&p_2118->g_863,(void*)0}}}, // p_2118->g_849
        {&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1],&p_2118->g_849[8][3][1]}, // p_2118->g_848
        (-1L), // p_2118->g_955
        &p_2118->g_955, // p_2118->g_954
        &p_2118->g_954, // p_2118->g_953
        &p_2118->g_953, // p_2118->g_952
        {{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23},{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23},{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23},{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23},{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23},{&p_2118->g_249,&p_2118->g_249,&p_2118->g_249,(void*)0,&p_2118->g_23}}, // p_2118->g_975
        (void*)0, // p_2118->g_1079
        {&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079,&p_2118->g_1079}, // p_2118->g_1078
        &p_2118->g_62, // p_2118->g_1168
        (void*)0, // p_2118->g_1169
        {&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168,&p_2118->g_1168}, // p_2118->g_1167
        &p_2118->g_1167[5], // p_2118->g_1166
        {&p_2118->g_64[0][0],(void*)0,&p_2118->g_64[0][0],&p_2118->g_64[0][0],(void*)0,&p_2118->g_64[0][0]}, // p_2118->g_1248
        &p_2118->g_1248[0], // p_2118->g_1247
        &p_2118->g_1247, // p_2118->g_1246
        (void*)0, // p_2118->g_1251
        1UL, // p_2118->g_1394
        {0x5CF11007L}, // p_2118->g_1395
        &p_2118->g_1079, // p_2118->g_1403
        &p_2118->g_975[2][0], // p_2118->g_1452
        &p_2118->g_1452, // p_2118->g_1451
        (-1L), // p_2118->g_1516
        &p_2118->g_1516, // p_2118->g_1515
        0x7FBA7134BDFB7E28L, // p_2118->g_1540
        0xA48DL, // p_2118->g_1610
        8L, // p_2118->g_1617
        (void*)0, // p_2118->g_1622
        &p_2118->g_1622, // p_2118->g_1621
        &p_2118->g_1621, // p_2118->g_1620
        0x72BDE9A57D89B6D1L, // p_2118->g_1628
        0x50097581L, // p_2118->g_1715
        (-8L), // p_2118->g_1744
        1L, // p_2118->g_1821
        &p_2118->g_1821, // p_2118->g_1820
        {&p_2118->g_975[3][0],&p_2118->g_975[4][3],&p_2118->g_975[3][0],&p_2118->g_975[3][0],&p_2118->g_975[4][3],&p_2118->g_975[3][0],&p_2118->g_975[3][0]}, // p_2118->g_1910
        0x801020721CA55128L, // p_2118->g_2115
    };
    c_2119 = c_2120;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2118);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2118->g_12, "p_2118->g_12", print_hash_value);
    transparent_crc(p_2118->g_23, "p_2118->g_23", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2118->g_27[i], "p_2118->g_27[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_35, "p_2118->g_35", print_hash_value);
    transparent_crc(p_2118->g_58, "p_2118->g_58", print_hash_value);
    transparent_crc(p_2118->g_63, "p_2118->g_63", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_2118->g_64[i][j], "p_2118->g_64[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2118->g_89, "p_2118->g_89", print_hash_value);
    transparent_crc(p_2118->g_93, "p_2118->g_93", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2118->g_105[i], "p_2118->g_105[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_111, "p_2118->g_111", print_hash_value);
    transparent_crc(p_2118->g_113, "p_2118->g_113", print_hash_value);
    transparent_crc(p_2118->g_121, "p_2118->g_121", print_hash_value);
    transparent_crc(p_2118->g_144, "p_2118->g_144", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2118->g_166[i][j][k], "p_2118->g_166[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2118->g_189, "p_2118->g_189", print_hash_value);
    transparent_crc(p_2118->g_218, "p_2118->g_218", print_hash_value);
    transparent_crc(p_2118->g_232, "p_2118->g_232", print_hash_value);
    transparent_crc(p_2118->g_234, "p_2118->g_234", print_hash_value);
    transparent_crc(p_2118->g_247, "p_2118->g_247", print_hash_value);
    transparent_crc(p_2118->g_249, "p_2118->g_249", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2118->g_311[i][j], "p_2118->g_311[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2118->g_312, "p_2118->g_312", print_hash_value);
    transparent_crc(p_2118->g_337, "p_2118->g_337", print_hash_value);
    transparent_crc(p_2118->g_339, "p_2118->g_339", print_hash_value);
    transparent_crc(p_2118->g_352, "p_2118->g_352", print_hash_value);
    transparent_crc(p_2118->g_425, "p_2118->g_425", print_hash_value);
    transparent_crc(p_2118->g_497, "p_2118->g_497", print_hash_value);
    transparent_crc(p_2118->g_606, "p_2118->g_606", print_hash_value);
    transparent_crc(p_2118->g_685, "p_2118->g_685", print_hash_value);
    transparent_crc(p_2118->g_715, "p_2118->g_715", print_hash_value);
    transparent_crc(p_2118->g_832, "p_2118->g_832", print_hash_value);
    transparent_crc(p_2118->g_850, "p_2118->g_850", print_hash_value);
    transparent_crc(p_2118->g_851, "p_2118->g_851", print_hash_value);
    transparent_crc(p_2118->g_852, "p_2118->g_852", print_hash_value);
    transparent_crc(p_2118->g_853, "p_2118->g_853", print_hash_value);
    transparent_crc(p_2118->g_854, "p_2118->g_854", print_hash_value);
    transparent_crc(p_2118->g_855, "p_2118->g_855", print_hash_value);
    transparent_crc(p_2118->g_856, "p_2118->g_856", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2118->g_857[i][j], "p_2118->g_857[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2118->g_858[i], "p_2118->g_858[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_859, "p_2118->g_859", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2118->g_860[i][j], "p_2118->g_860[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2118->g_861, "p_2118->g_861", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2118->g_862[i], "p_2118->g_862[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_863, "p_2118->g_863", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2118->g_864[i], "p_2118->g_864[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_865, "p_2118->g_865", print_hash_value);
    transparent_crc(p_2118->g_866, "p_2118->g_866", print_hash_value);
    transparent_crc(p_2118->g_867, "p_2118->g_867", print_hash_value);
    transparent_crc(p_2118->g_868, "p_2118->g_868", print_hash_value);
    transparent_crc(p_2118->g_869, "p_2118->g_869", print_hash_value);
    transparent_crc(p_2118->g_870, "p_2118->g_870", print_hash_value);
    transparent_crc(p_2118->g_871, "p_2118->g_871", print_hash_value);
    transparent_crc(p_2118->g_872, "p_2118->g_872", print_hash_value);
    transparent_crc(p_2118->g_873, "p_2118->g_873", print_hash_value);
    transparent_crc(p_2118->g_874, "p_2118->g_874", print_hash_value);
    transparent_crc(p_2118->g_875, "p_2118->g_875", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2118->g_876[i], "p_2118->g_876[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_877, "p_2118->g_877", print_hash_value);
    transparent_crc(p_2118->g_878, "p_2118->g_878", print_hash_value);
    transparent_crc(p_2118->g_879, "p_2118->g_879", print_hash_value);
    transparent_crc(p_2118->g_880, "p_2118->g_880", print_hash_value);
    transparent_crc(p_2118->g_881, "p_2118->g_881", print_hash_value);
    transparent_crc(p_2118->g_882, "p_2118->g_882", print_hash_value);
    transparent_crc(p_2118->g_883, "p_2118->g_883", print_hash_value);
    transparent_crc(p_2118->g_884, "p_2118->g_884", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2118->g_885[i], "p_2118->g_885[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_886, "p_2118->g_886", print_hash_value);
    transparent_crc(p_2118->g_887, "p_2118->g_887", print_hash_value);
    transparent_crc(p_2118->g_888, "p_2118->g_888", print_hash_value);
    transparent_crc(p_2118->g_889, "p_2118->g_889", print_hash_value);
    transparent_crc(p_2118->g_890, "p_2118->g_890", print_hash_value);
    transparent_crc(p_2118->g_891, "p_2118->g_891", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2118->g_892[i][j], "p_2118->g_892[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2118->g_893, "p_2118->g_893", print_hash_value);
    transparent_crc(p_2118->g_955, "p_2118->g_955", print_hash_value);
    transparent_crc(p_2118->g_1394, "p_2118->g_1394", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2118->g_1395[i], "p_2118->g_1395[i]", print_hash_value);

    }
    transparent_crc(p_2118->g_1516, "p_2118->g_1516", print_hash_value);
    transparent_crc(p_2118->g_1540, "p_2118->g_1540", print_hash_value);
    transparent_crc(p_2118->g_1610, "p_2118->g_1610", print_hash_value);
    transparent_crc(p_2118->g_1617, "p_2118->g_1617", print_hash_value);
    transparent_crc(p_2118->g_1628, "p_2118->g_1628", print_hash_value);
    transparent_crc(p_2118->g_1715, "p_2118->g_1715", print_hash_value);
    transparent_crc(p_2118->g_1744, "p_2118->g_1744", print_hash_value);
    transparent_crc(p_2118->g_1821, "p_2118->g_1821", print_hash_value);
    transparent_crc(p_2118->g_2115, "p_2118->g_2115", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
