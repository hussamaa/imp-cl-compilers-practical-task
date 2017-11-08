// -g 17,86,4 -l 1,43,2
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


// Seed: 526670825

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_3;
    int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6[8];
    int64_t g_67;
    int32_t g_82;
    uint8_t g_95;
    uint64_t g_117[8][8];
    uint64_t g_128;
    uint64_t g_132;
    int16_t g_158;
    int16_t g_160;
    uint8_t g_162;
    uint64_t g_163;
    int32_t *g_170[5][6];
    int32_t **g_169;
    int64_t g_182;
    uint16_t g_191;
    int32_t g_193;
    int16_t g_230[3];
    uint32_t g_232[7];
    uint8_t g_288;
    int32_t g_322;
    int8_t g_339;
    volatile int32_t *g_343;
    volatile int32_t ** volatile g_342;
    int64_t g_392;
    int64_t *g_391;
    int64_t **g_390[2];
    int64_t *** volatile g_389;
    int32_t **g_440;
    volatile int32_t g_459;
    volatile int32_t *g_458;
    volatile int32_t **g_457;
    int32_t ** volatile g_531;
    int64_t g_593[2];
    uint32_t g_600;
    int32_t **g_603;
    int32_t *g_608;
    int32_t **g_607;
    int32_t ** volatile g_614[4];
    volatile int16_t * volatile *g_647;
    volatile int16_t * volatile **g_646;
    uint16_t g_710[2];
    volatile uint64_t g_714;
    int8_t g_750;
    int8_t *g_749;
    volatile int16_t g_759;
    uint32_t g_783;
    int32_t *g_795;
    int8_t g_833;
    uint8_t *g_847;
    int64_t g_877[8];
    volatile uint64_t g_916;
    int32_t ** volatile g_962;
    int16_t **g_983;
    int32_t ** volatile g_1053;
    int32_t ** volatile g_1078;
    volatile uint32_t g_1143;
    int16_t * volatile g_1174[4];
    int32_t *g_1176;
    uint64_t g_1194;
    int32_t g_1256;
    int8_t **g_1270;
    int8_t ***g_1269;
    uint64_t ** volatile g_1326;
    uint32_t *g_1336;
    volatile int32_t * volatile g_1365;
    volatile int32_t * volatile * volatile g_1366;
    uint32_t g_1507[6][3][8];
    volatile int64_t g_1508;
    volatile uint32_t g_1564;
    int32_t g_1565[9];
    int8_t *g_1690[4][8][6];
    int32_t **g_1725;
    uint16_t g_1759;
    int8_t g_1766[6][1];
    volatile int32_t g_1808;
    int32_t g_1833;
    volatile int32_t ** volatile g_1860;
    uint8_t **g_1889[9];
    uint64_t g_1899[9];
    volatile uint16_t g_1940;
    volatile uint16_t *g_1939[3][1][3];
    volatile uint16_t ** volatile g_1938[2][8];
    int8_t g_1990;
    volatile uint64_t **g_2015;
    volatile uint64_t *** volatile g_2014;
    volatile uint64_t *** volatile * volatile g_2013[1][10];
    int64_t g_2023[9];
    int64_t g_2087;
    uint64_t ****g_2100;
    volatile int64_t g_2202;
    volatile int64_t *g_2201[8];
    volatile int64_t **g_2200;
    volatile int64_t ** volatile *g_2199;
    volatile int64_t ** volatile ** volatile g_2198;
    volatile int64_t ** volatile ** volatile *g_2197[10];
    uint32_t *g_2245;
    uint32_t **g_2244;
    int32_t *g_2259;
    int32_t **g_2258;
    int8_t ****g_2273;
    int8_t *****g_2272[8][1][5];
    volatile int16_t g_2409;
    volatile int32_t g_2414;
    int32_t * volatile * volatile **g_2483;
    volatile uint64_t g_2490;
    uint32_t g_2515;
    volatile uint8_t g_2516;
    int64_t ***g_2531;
    int64_t ****g_2530;
    int64_t *****g_2529;
    volatile uint16_t g_2553;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2554);
int32_t * func_7(int32_t * p_8, struct S0 * p_2554);
int32_t * func_9(uint32_t  p_10, int32_t * p_11, int32_t * p_12, struct S0 * p_2554);
int32_t * func_13(uint32_t  p_14, int64_t  p_15, int32_t * p_16, struct S0 * p_2554);
uint32_t  func_17(int32_t * p_18, uint32_t  p_19, int32_t  p_20, struct S0 * p_2554);
uint16_t  func_25(uint32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_2554);
int32_t * func_29(uint16_t  p_30, int32_t * p_31, uint32_t  p_32, struct S0 * p_2554);
int64_t  func_33(uint8_t  p_34, int8_t  p_35, uint32_t  p_36, int32_t * p_37, struct S0 * p_2554);
int8_t  func_40(int32_t * p_41, int32_t * p_42, int32_t * p_43, struct S0 * p_2554);
int32_t * func_44(int32_t * p_45, uint8_t  p_46, uint32_t  p_47, int32_t  p_48, int8_t  p_49, struct S0 * p_2554);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2554->g_4 p_2554->g_1176 p_2554->g_82 p_2554->g_6 p_2554->g_847 p_2554->g_95 p_2554->g_67 p_2554->g_795 p_2554->g_1508 p_2554->g_710 p_2554->g_1899 p_2554->g_1270 p_2554->g_749 p_2554->g_750 p_2554->g_1336 p_2554->g_1366 p_2554->g_458 p_2554->g_459 p_2554->g_1053 p_2554->g_607 p_2554->g_916 p_2554->g_132 p_2554->g_343 p_2554->g_1938 p_2554->g_5 p_2554->g_1725 p_2554->g_230 p_2554->g_600 p_2554->g_288
 * writes: p_2554->g_4 p_2554->g_3 p_2554->g_6 p_2554->g_230 p_2554->g_160 p_2554->g_1889 p_2554->g_82 p_2554->g_232 p_2554->g_608 p_2554->g_5 p_2554->g_288
 */
int32_t  func_1(struct S0 * p_2554)
{ /* block id: 4 */
    int16_t l_2[10] = {(-1L),0x4CE5L,(-3L),0x4CE5L,(-1L),(-1L),0x4CE5L,(-3L),0x4CE5L,(-1L)};
    int32_t *l_456 = &p_2554->g_6[1];
    int32_t **l_455 = &l_456;
    int64_t ***l_1848[10] = {(void*)0,&p_2554->g_390[1],&p_2554->g_390[0],&p_2554->g_390[1],(void*)0,(void*)0,&p_2554->g_390[1],&p_2554->g_390[0],&p_2554->g_390[1],(void*)0};
    int64_t ****l_1847[4] = {&l_1848[5],&l_1848[5],&l_1848[5],&l_1848[5]};
    int64_t ****l_1849 = &l_1848[4];
    int8_t ***l_1868 = &p_2554->g_1270;
    int32_t l_1869[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
    uint64_t l_1887 = 0xC921D5EE10BA7ECBL;
    uint8_t l_1888 = 0xBAL;
    uint16_t l_1921 = 0xAA36L;
    uint16_t *l_1937 = &p_2554->g_710[0];
    uint16_t **l_1936 = &l_1937;
    uint8_t **l_1963 = &p_2554->g_847;
    int32_t l_1979 = 0x6D4B2205L;
    uint64_t *l_1989 = &p_2554->g_1194;
    int64_t l_2022 = (-10L);
    int8_t l_2074 = 0x18L;
    uint16_t l_2075 = 0UL;
    int32_t l_2130 = 0x683C3F70L;
    uint16_t l_2141[3];
    uint64_t *l_2193 = &p_2554->g_117[0][6];
    uint64_t **l_2192 = &l_2193;
    uint32_t l_2246 = 0x5DB1F9F6L;
    uint64_t l_2254 = 0x2BF600C539A55307L;
    uint32_t l_2287 = 4294967295UL;
    uint64_t ***l_2331 = &l_2192;
    uint32_t l_2366 = 0x8773489FL;
    uint32_t l_2425 = 0xC70FB87AL;
    int i;
    for (i = 0; i < 3; i++)
        l_2141[i] = 0x4133L;
    for (p_2554->g_4 = 0; (p_2554->g_4 <= 9); p_2554->g_4 += 1)
    { /* block id: 7 */
        uint32_t l_452 = 4294967295UL;
        int32_t *l_958 = &p_2554->g_6[1];
        uint16_t *l_1843 = &p_2554->g_710[1];
        int16_t *l_1875 = &p_2554->g_230[2];
        int16_t *l_1876 = &p_2554->g_160;
        uint8_t *l_1914 = &p_2554->g_162;
        uint8_t *l_1923[3][8] = {{&p_2554->g_288,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162},{&p_2554->g_288,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162},{&p_2554->g_288,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162,&l_1888,&l_1888,&p_2554->g_162}};
        int32_t l_1943 = 0x08BB1E94L;
        int i, j;
        for (p_2554->g_3 = 0; p_2554->g_3 < 10; p_2554->g_3 += 1)
        {
            l_2[p_2554->g_3] = 1L;
        }
        for (p_2554->g_6[1] = 0; (p_2554->g_6[1] <= 9); p_2554->g_6[1] += 1)
        { /* block id: 11 */
            int8_t l_1840 = 0x58L;
            int64_t *l_1846[7];
            int32_t l_1861[2];
            int i;
            for (i = 0; i < 7; i++)
                l_1846[i] = &p_2554->g_877[7];
            for (i = 0; i < 2; i++)
                l_1861[i] = (-8L);
            (1 + 1);
        }
        if ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((*p_2554->g_1176))), ((safe_div_func_int16_t_s_s(0L, ((*l_1876) = ((*l_1875) = (**l_455))))) , ((safe_sub_func_uint16_t_u_u((((((((safe_add_func_int8_t_s_s(((p_2554->g_1889[3] = ((((((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((*l_958), (*p_2554->g_847))), (p_2554->g_67 & ((void*)0 == &p_2554->g_1194)))) < (safe_lshift_func_uint8_t_u_s((l_1887 = 251UL), (**l_455)))) & (-1L)) < l_1888) | 7UL) , &p_2554->g_847)) == &p_2554->g_847), (*p_2554->g_847))) || (*l_456)) && 0x7E01L) > (*p_2554->g_795)) != (*l_958)) != (*l_958)) || 4L), (-1L))) & (*l_456))))))
        { /* block id: 936 */
            int32_t l_1892 = 0x688BA794L;
            int16_t l_1900 = 0x1FB7L;
            int32_t *l_1901 = &l_1869[1];
            (*l_1901) |= (((*p_2554->g_1336) = (((-9L) & ((((((safe_sub_func_uint16_t_u_u(1UL, ((*l_456) > l_1892))) >= 6UL) || (((*p_2554->g_1176) = (0x7DFEE739L != (safe_div_func_uint16_t_u_u(p_2554->g_1508, (safe_mod_func_uint64_t_u_u((0x72501AE1AEE536E7L == ((safe_add_func_int16_t_s_s(((*l_1875) = ((0x7B07L & 0x40BBL) & l_1892)), 0x09B6L)) <= p_2554->g_710[1])), 0x5D99DCB4966280FCL)))))) || (-2L))) != p_2554->g_1899[4]) || l_1892) < l_1900)) == (**p_2554->g_1270))) > (*p_2554->g_795));
        }
        else
        { /* block id: 941 */
            uint16_t l_1912 = 9UL;
            uint8_t **l_1913[6] = {&p_2554->g_847,&p_2554->g_847,&p_2554->g_847,&p_2554->g_847,&p_2554->g_847,&p_2554->g_847};
            int32_t *l_1922 = &p_2554->g_322;
            int32_t l_1924 = 0x5A963C8DL;
            int32_t l_1944[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1944[i] = 0L;
            for (l_1887 = 0; (l_1887 == 33); l_1887 = safe_add_func_uint64_t_u_u(l_1887, 9))
            { /* block id: 944 */
                if ((**p_2554->g_1366))
                    break;
            }
            (*p_2554->g_343) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((+(safe_mul_func_uint8_t_u_u((((l_1912 &= (!(*l_456))) , (l_1914 = &l_1888)) != ((safe_lshift_func_int16_t_s_u((((**p_2554->g_1053) , (safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_1921, ((((*p_2554->g_607) = l_1922) == l_456) & 2L))), p_2554->g_916))) > (*l_456)), (*l_958))) , l_1923[2][5])), (*l_958)))), 0x28L)) , p_2554->g_132), 13)) >= l_1924), 0x4EL));
            l_1944[8] |= (l_1943 &= (((-1L) >= (((safe_sub_func_uint64_t_u_u((((&p_2554->g_1194 != (void*)0) , ((((safe_add_func_uint8_t_u_u(0UL, ((((safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u(((safe_div_func_int32_t_s_s(((*l_958) , (((l_1936 != p_2554->g_1938[0][0]) && (safe_lshift_func_int8_t_s_s(((**l_455) == (l_1924 != (**l_455))), 2))) != l_1912)), (*p_2554->g_795))) >= (*l_456)))) != 0UL), (*l_958))) && p_2554->g_5), 0xE0L)) ^ (*p_2554->g_1176)) >= l_1924) | (**p_2554->g_1725)))) & 65528UL) < (*l_958)) < p_2554->g_230[2])) & p_2554->g_600), p_2554->g_230[2])) || l_1912) == 0x5EF4BBE5L)) | p_2554->g_288));
        }
        for (l_1887 = 0; (l_1887 == 41); l_1887 = safe_add_func_int32_t_s_s(l_1887, 2))
        { /* block id: 956 */
            if ((**l_455))
                break;
            return (*l_958);
        }
    }
    for (p_2554->g_288 = 0; (p_2554->g_288 <= 0); p_2554->g_288 += 1)
    { /* block id: 963 */
        int64_t *l_1947 = &p_2554->g_877[4];
        int32_t l_1948 = 0x626AF929L;
        int64_t l_1955 = 0x193CA5003BFAD523L;
        uint16_t **l_1992 = &l_1937;
        int32_t *l_1993 = &p_2554->g_82;
        uint32_t l_2055 = 0xBE7B94C4L;
        int32_t l_2067 = 0x4EA7E55EL;
        int32_t l_2068 = (-1L);
        int32_t l_2069 = 1L;
        int32_t l_2070 = 0x5758BFE9L;
        int32_t l_2071 = (-4L);
        int32_t l_2072 = 3L;
        int32_t l_2073[7][2] = {{9L,0x71896E92L},{9L,0x71896E92L},{9L,0x71896E92L},{9L,0x71896E92L},{9L,0x71896E92L},{9L,0x71896E92L},{9L,0x71896E92L}};
        int64_t l_2080 = 0x33E79C67F6BECA67L;
        int64_t l_2088 = (-1L);
        uint32_t **l_2243 = &p_2554->g_1336;
        int8_t ****l_2271 = &p_2554->g_1269;
        int8_t *****l_2270[10][8] = {{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271},{&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271,&l_2271}};
        int16_t l_2288 = (-1L);
        int32_t **l_2343 = &p_2554->g_2259;
        int64_t l_2358 = 0x0E3C4A2D4E8DBB4FL;
        uint32_t l_2388 = 0x9795229BL;
        int32_t l_2411 = 0x592378A7L;
        int32_t **l_2442[9][8] = {{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795},{&l_456,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795,&p_2554->g_1176,&p_2554->g_795,&p_2554->g_170[3][1],&p_2554->g_795}};
        uint32_t l_2450 = 0x0DE83F1FL;
        uint64_t l_2463 = 1UL;
        uint32_t l_2488[1];
        int8_t l_2500[9] = {0x7EL,(-4L),0x7EL,0x7EL,(-4L),0x7EL,0x7EL,(-4L),0x7EL};
        uint8_t l_2504 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2488[i] = 0UL;
        (1 + 1);
    }
    return (**l_455);
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_962
 * writes: p_2554->g_170
 */
int32_t * func_7(int32_t * p_8, struct S0 * p_2554)
{ /* block id: 430 */
    int32_t *l_960[2];
    int32_t **l_961 = (void*)0;
    int8_t **l_968[3];
    int8_t ***l_967 = &l_968[1];
    int8_t **l_969 = &p_2554->g_749;
    int16_t *l_974 = &p_2554->g_230[2];
    int16_t **l_973 = &l_974;
    int16_t ***l_972 = &l_973;
    int64_t *l_975 = (void*)0;
    int64_t *l_976 = &p_2554->g_877[4];
    int8_t l_984 = 3L;
    uint16_t *l_985 = &p_2554->g_710[1];
    uint8_t l_986 = 0x3AL;
    int32_t l_987[10] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
    int8_t l_992 = 0x1BL;
    uint8_t l_1027 = 0UL;
    uint32_t l_1123 = 0UL;
    uint32_t l_1160 = 0xE755FB06L;
    int16_t l_1185[3][7][10] = {{{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L}},{{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L}},{{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L},{1L,0x4333L,0x7241L,0x4949L,0x07BFL,(-4L),5L,0x74CDL,0x0E2CL,0x4228L}}};
    int16_t l_1192 = 0x0A1FL;
    int16_t l_1281 = (-1L);
    uint64_t **l_1317[7];
    int64_t l_1351 = 1L;
    uint32_t l_1354 = 4294967295UL;
    uint16_t l_1370 = 0x448EL;
    int16_t l_1413 = 0x4365L;
    int32_t l_1566[8];
    uint64_t l_1694 = 1UL;
    int32_t l_1789 = 0x7D905213L;
    uint8_t **l_1805 = &p_2554->g_847;
    uint32_t **l_1811[7][9] = {{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336},{&p_2554->g_1336,(void*)0,(void*)0,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336,&p_2554->g_1336}};
    int32_t *l_1812 = (void*)0;
    uint64_t l_1819 = 1UL;
    uint8_t l_1820 = 252UL;
    uint32_t l_1829 = 0x383248F9L;
    int64_t l_1830[5] = {8L,8L,8L,8L,8L};
    int8_t l_1831 = 0x4CL;
    int16_t l_1832 = 0x0FDEL;
    int16_t l_1834 = 0x4682L;
    int32_t l_1835 = 0L;
    int32_t *l_1836 = &p_2554->g_6[1];
    int32_t **l_1837 = (void*)0;
    int32_t *l_1839 = &p_2554->g_193;
    int32_t **l_1838 = &l_1839;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_960[i] = &p_2554->g_6[1];
    for (i = 0; i < 3; i++)
        l_968[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_1317[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_1566[i] = 0x6D929F86L;
    (*p_2554->g_962) = l_960[1];
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_6 p_2554->g_4 p_2554->g_1565
 * writes:
 */
int32_t * func_9(uint32_t  p_10, int32_t * p_11, int32_t * p_12, struct S0 * p_2554)
{ /* block id: 427 */
    int16_t l_959[6];
    int i;
    for (i = 0; i < 6; i++)
        l_959[i] = (-1L);
    l_959[2] = (*p_12);
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_67 p_2554->g_191 p_2554->g_182 p_2554->g_160 p_2554->g_82 p_2554->g_458 p_2554->g_459 p_2554->g_288 p_2554->g_193 p_2554->g_162 p_2554->g_343 p_2554->g_3 p_2554->g_5 p_2554->g_117 p_2554->g_132 p_2554->g_531 p_2554->g_4 p_2554->g_457 p_2554->g_95 p_2554->g_163 p_2554->g_232 p_2554->g_6 p_2554->g_391 p_2554->g_593 p_2554->g_230 p_2554->g_646 p_2554->g_607 p_2554->g_608 p_2554->g_158 p_2554->g_128 p_2554->g_714 p_2554->g_600 p_2554->g_392 p_2554->g_339 p_2554->g_322 p_2554->g_647 p_2554->g_749 p_2554->g_750 p_2554->g_783 p_2554->g_169 p_2554->g_833 p_2554->g_795 p_2554->g_877 p_2554->g_847 p_2554->g_916
 * writes: p_2554->g_160 p_2554->g_82 p_2554->g_288 p_2554->g_3 p_2554->g_5 p_2554->g_117 p_2554->g_459 p_2554->g_132 p_2554->g_170 p_2554->g_458 p_2554->g_163 p_2554->g_67 p_2554->g_339 p_2554->g_593 p_2554->g_392 p_2554->g_95 p_2554->g_232 p_2554->g_191 p_2554->g_710 p_2554->g_162 p_2554->g_714 p_2554->g_600 p_2554->g_128 p_2554->g_749 p_2554->g_158 p_2554->g_169 p_2554->g_182 p_2554->g_193 p_2554->g_750 p_2554->g_847 p_2554->g_877 p_2554->g_783 p_2554->g_230
 */
int32_t * func_13(uint32_t  p_14, int64_t  p_15, int32_t * p_16, struct S0 * p_2554)
{ /* block id: 198 */
    int64_t l_462[10] = {3L,9L,0x76F917EF735F4DDDL,9L,3L,3L,9L,0x76F917EF735F4DDDL,9L,3L};
    int32_t *l_464 = &p_2554->g_322;
    int32_t **l_463 = &l_464;
    int32_t l_465 = 0x1EBC7EDFL;
    int32_t l_466 = (-3L);
    int32_t l_502 = 0L;
    int32_t l_505 = 0L;
    int32_t l_506 = 3L;
    int32_t l_507 = (-5L);
    int32_t l_509 = 1L;
    int32_t l_516 = 0x4789E3E7L;
    uint32_t l_518[1];
    uint32_t l_536 = 4294967286UL;
    int16_t *l_543 = (void*)0;
    int16_t **l_542 = &l_543;
    uint16_t l_572 = 5UL;
    int32_t l_579 = 8L;
    int32_t *l_610 = &p_2554->g_193;
    int32_t **l_609 = &l_610;
    int16_t l_639 = (-8L);
    uint8_t *l_650 = &p_2554->g_288;
    int16_t l_755 = 0x1522L;
    int16_t l_957 = 0x3CE3L;
    int i;
    for (i = 0; i < 1; i++)
        l_518[i] = 9UL;
    if (((safe_add_func_uint8_t_u_u(l_462[0], p_15)) <= ((((*l_463) = &p_2554->g_322) != (((p_2554->g_67 , (l_466 = (l_465 <= (l_465 != 0x27848E98236AF15DL)))) & ((((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(7UL, l_462[0])), p_2554->g_191)) == p_2554->g_182) != p_15) , l_462[8])) , p_16)) >= l_462[0])))
    { /* block id: 201 */
        int64_t l_491 = 0x197ED4762ED8C30EL;
        int32_t l_508 = 0L;
        int32_t l_510 = 0L;
        int32_t l_511 = 0x76030292L;
        int32_t l_512 = 0x592800B7L;
        int32_t l_513 = 0x27EF65A4L;
        int32_t l_514 = 0x36AFBD44L;
        int32_t l_515[5][1][8] = {{{0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L}},{{0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L}},{{0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L}},{{0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L}},{{0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L,0x395B7BF6L,0x395B7BF6L,0x50AD2903L}}};
        int8_t l_517[4] = {1L,1L,1L,1L};
        uint64_t l_522 = 18446744073709551611UL;
        int32_t *l_568 = (void*)0;
        int32_t **l_567[2][5][8] = {{{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568}},{{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,(void*)0,&l_568,&l_568,&l_568,&l_568}}};
        int32_t **l_602 = &l_464;
        int32_t **l_636 = &p_2554->g_170[1][5];
        uint8_t *l_637 = (void*)0;
        uint8_t *l_638 = &p_2554->g_95;
        uint8_t l_640 = 0x80L;
        uint64_t l_641 = 1UL;
        uint16_t *l_721 = &p_2554->g_710[0];
        volatile int16_t *l_758 = &p_2554->g_759;
        volatile int16_t * volatile *l_757 = &l_758;
        int8_t **l_801 = (void*)0;
        int32_t l_895 = 1L;
        uint64_t l_902[10] = {0UL,0x1B2F2E59CD9E5670L,0UL,0x1B2F2E59CD9E5670L,0UL,0UL,0x1B2F2E59CD9E5670L,0UL,0x1B2F2E59CD9E5670L,0UL};
        int i, j, k;
        for (p_2554->g_160 = (-25); (p_2554->g_160 != (-11)); p_2554->g_160 = safe_add_func_uint32_t_u_u(p_2554->g_160, 7))
        { /* block id: 204 */
            uint8_t l_490 = 0x55L;
            int32_t l_496 = 0x2FF17212L;
            int32_t *l_497 = &l_496;
            int32_t *l_498 = &l_466;
            int32_t *l_499 = (void*)0;
            int32_t l_500 = 0x0A594E35L;
            int32_t *l_501 = &p_2554->g_82;
            int32_t *l_503 = &l_496;
            int32_t *l_504[9] = {&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500};
            uint64_t *l_521 = &p_2554->g_117[3][3];
            int i;
            for (l_465 = 17; (l_465 > (-29)); l_465 = safe_sub_func_uint64_t_u_u(l_465, 5))
            { /* block id: 207 */
                int32_t l_492 = 0x1ADC72A0L;
                for (p_2554->g_82 = 0; (p_2554->g_82 <= (-29)); p_2554->g_82 = safe_sub_func_uint16_t_u_u(p_2554->g_82, 1))
                { /* block id: 210 */
                    uint64_t l_489 = 0x7B271EB0C7FFA786L;
                    int32_t *l_495[10] = {&p_2554->g_82,&p_2554->g_6[3],&p_2554->g_82,&p_2554->g_82,&p_2554->g_6[3],&p_2554->g_82,&p_2554->g_82,&p_2554->g_6[3],&p_2554->g_82,&p_2554->g_82};
                    int i;
                    if ((*p_2554->g_458))
                    { /* block id: 211 */
                        return &p_2554->g_6[1];
                    }
                    else
                    { /* block id: 213 */
                        uint8_t *l_485 = (void*)0;
                        uint8_t *l_486 = &p_2554->g_288;
                        (*p_2554->g_343) ^= (safe_div_func_int16_t_s_s(5L, (p_2554->g_160 | (safe_lshift_func_uint16_t_u_s((3L == (1L ^ (((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((--(*l_486)), 4)) > ((p_14 , (((&p_2554->g_339 != (void*)0) != (~l_462[5])) == l_489)) , l_490)), l_491)) , p_2554->g_193) == 18446744073709551615UL) == p_2554->g_162) , l_491))), l_492)))));
                        (*p_2554->g_343) = (safe_lshift_func_int8_t_s_u(l_466, l_489));
                        return l_495[3];
                    }
                }
            }
            l_518[0]++;
            (*p_2554->g_458) ^= (((((*l_521) = (2UL | p_2554->g_117[3][3])) != l_465) || 65535UL) , 3L);
            --l_522;
        }
        for (p_2554->g_132 = 0; (p_2554->g_132 < 41); p_2554->g_132++)
        { /* block id: 228 */
            int32_t l_537[4] = {(-2L),(-2L),(-2L),(-2L)};
            int16_t ***l_544 = &l_542;
            int32_t *l_552 = &p_2554->g_193;
            int32_t l_553 = 0x10D084EBL;
            uint64_t *l_560[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t ***l_569 = &l_567[1][0][0];
            int32_t **l_606 = (void*)0;
            int i;
            for (l_510 = 0; (l_510 == (-23)); l_510--)
            { /* block id: 231 */
                for (l_508 = 0; (l_508 != (-28)); l_508 = safe_sub_func_int64_t_s_s(l_508, 1))
                { /* block id: 234 */
                    p_16 = p_16;
                    (*p_2554->g_531) = p_16;
                    if ((*p_16))
                        continue;
                }
                (*p_2554->g_457) = (void*)0;
            }
            (*p_2554->g_343) = (l_553 = (safe_mod_func_uint64_t_u_u((((+(((l_537[1] = (l_505 , (safe_rshift_func_uint8_t_u_s((p_14 | l_536), 1)))) || (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_2554->g_95, 2)) >= (((*l_544) = l_542) == (void*)0)), 15))) , 0L)) || (safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u(((void*)0 != l_552), l_466)) , 0x2F0FL) < p_2554->g_67) == 0x092118AAL), p_14)), 0)) && p_15) , p_15)))) > 65529UL), l_511)));
            (*p_2554->g_343) = (((safe_rshift_func_uint8_t_u_u(7UL, 7)) | ((safe_div_func_int32_t_s_s((-4L), (safe_add_func_int64_t_s_s((&l_506 == (*p_2554->g_457)), (p_15 , ((void*)0 != &p_2554->g_193)))))) | ((++p_2554->g_163) < (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((*l_569) = l_567[1][3][4]) == ((((((safe_div_func_uint64_t_u_u(((p_14 , p_16) == (void*)0), l_553)) , (-1L)) == p_15) && 0x54FDL) && l_512) , (void*)0)), l_536)), l_572)) && p_2554->g_117[3][3]) < 65535UL)))) && 65535UL);
            for (l_507 = (-28); (l_507 > (-21)); ++l_507)
            { /* block id: 250 */
                uint32_t l_592 = 0xA232C957L;
                int32_t *l_616 = &l_502;
                uint8_t *l_617 = (void*)0;
                uint8_t *l_618 = &p_2554->g_162;
                uint16_t *l_623[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_623[i] = &p_2554->g_191;
                for (p_2554->g_67 = (-3); (p_2554->g_67 != 6); p_2554->g_67 = safe_add_func_int8_t_s_s(p_2554->g_67, 2))
                { /* block id: 253 */
                    int8_t *l_591 = &p_2554->g_339;
                    int32_t **l_594 = &p_2554->g_170[1][5];
                    (*l_594) = func_44(p_16, (p_15 | (((safe_rshift_func_uint16_t_u_u((l_579 <= (l_512 > (1UL && (p_2554->g_593[1] = (((((((safe_mod_func_int64_t_s_s(0x09A27764EEB6273AL, 1UL)) && (safe_unary_minus_func_int16_t_s((((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_536 , (safe_div_func_int8_t_s_s(((*l_591) = (safe_sub_func_uint8_t_u_u(0xA1L, l_537[3]))), 0x63L))), l_592)), l_592)) < p_15) ^ 0xA3L)))) , p_15) > l_462[0]) < p_14) == 0x28B30010F9541679L) > p_15))))), p_2554->g_3)) , 1UL) < p_14)), p_2554->g_232[5], l_537[2], l_592, p_2554);
                }
            }
        }
        if (((+(p_2554->g_163 = ((((*p_2554->g_391) = (l_512 = 0x40E343E1F72F0392L)) , (safe_mod_func_int64_t_s_s(((((safe_div_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(((p_15 == (((((*l_638) = (safe_mod_func_uint8_t_u_u(((l_508 ^ ((l_579 == (safe_sub_func_uint16_t_u_u(p_15, (&p_16 == l_636)))) | l_509)) <= ((p_14 , 0L) < 0x1C56L)), p_2554->g_459))) & l_639) || l_640) == l_507)) != 6UL), l_507)) != p_15) , (*p_16)), p_2554->g_82)) <= p_14) & p_2554->g_593[1]) ^ p_2554->g_67), l_641))) < (-4L)))) <= p_2554->g_230[2]))
        { /* block id: 296 */
            int16_t l_651[9][5][5] = {{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}},{{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L},{0L,0x0D79L,(-7L),0x4217L,0L}}};
            uint8_t *l_658 = &p_2554->g_162;
            int32_t **l_673[4][1];
            uint64_t l_756[9] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
            int8_t l_802 = (-1L);
            int8_t l_854[6];
            int16_t l_875 = 0x78ACL;
            uint16_t **l_876 = &l_721;
            uint16_t l_884 = 0x2593L;
            int16_t *l_891 = &l_875;
            int64_t *l_892 = &p_2554->g_877[3];
            uint32_t *l_893 = (void*)0;
            uint32_t *l_894 = (void*)0;
            int16_t ***l_900 = &l_542;
            uint16_t l_901 = 0x6BB0L;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_673[i][j] = (void*)0;
            }
            for (i = 0; i < 6; i++)
                l_854[i] = 0x2EL;
            if ((l_512 = (safe_mul_func_uint8_t_u_u(((4294967292UL >= (safe_add_func_int64_t_s_s((((!((void*)0 == p_2554->g_646)) , 1L) & (safe_mul_func_int16_t_s_s(0x141FL, (((p_14 , l_491) , (((void*)0 != l_650) , l_639)) ^ 0x4E58ADDCL)))), p_14))) , p_15), l_651[4][1][4]))))
            { /* block id: 298 */
                int64_t l_661 = 0x76CF4E910A95F487L;
                int64_t *l_664[7][6] = {{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]},{&l_462[0],(void*)0,&l_661,(void*)0,&l_462[0],&l_462[0]}};
                int8_t *l_669 = &l_517[1];
                int i, j;
                l_507 &= (((p_15 , (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((++(*l_638)), l_509)) ^ ((void*)0 == l_658)), (safe_mul_func_uint16_t_u_u(l_661, (((safe_lshift_func_int16_t_s_u(l_651[2][4][3], 14)) | ((p_2554->g_593[1] |= p_15) == ((!(safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((p_2554->g_6[0] & ((*l_669) = (l_506 = (-2L)))) >= l_462[0]), p_14)) > p_15), p_14))) , p_2554->g_160))) == p_2554->g_117[3][3])))))) ^ p_2554->g_117[6][4]) >= l_466);
                return p_16;
            }
            else
            { /* block id: 305 */
                uint32_t *l_672 = &p_2554->g_232[5];
                int32_t l_674 = 8L;
                int32_t l_675 = 0x7003E835L;
                uint16_t *l_724 = &l_572;
                int8_t *l_747 = &l_517[1];
                int16_t ***l_778[9];
                uint16_t l_784 = 0x3696L;
                uint64_t *l_799 = &p_2554->g_117[3][1];
                int i;
                for (i = 0; i < 9; i++)
                    l_778[i] = &l_542;
                if (((((((l_675 ^= (((p_14 <= ((safe_rshift_func_int8_t_s_u(((p_2554->g_95 | l_509) & (((*l_672) ^= p_15) , (p_15 == (((void*)0 != l_673[0][0]) ^ (l_674 & l_509))))), 1)) >= (*p_16))) ^ p_2554->g_163) < (*p_2554->g_343))) == 0x6FL) && 0x4CDBL) >= p_14) , p_2554->g_67) < l_509))
                { /* block id: 308 */
                    uint32_t l_707 = 1UL;
                    int32_t l_712 = 0x4608253CL;
                    uint16_t **l_722 = (void*)0;
                    uint16_t **l_723[2];
                    uint64_t *l_725 = (void*)0;
                    uint32_t *l_732 = &p_2554->g_600;
                    uint64_t *l_735 = &p_2554->g_128;
                    int8_t *l_738 = &p_2554->g_339;
                    int8_t **l_748[7][10] = {{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738},{(void*)0,&l_738,&l_747,&l_747,&l_738,&l_747,&l_747,&l_738,(void*)0,&l_738}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_723[i] = &l_721;
                    if ((p_2554->g_117[4][7] | ((void*)0 != &p_2554->g_608)))
                    { /* block id: 309 */
                        int32_t *l_688 = &l_579;
                        int8_t *l_689 = &l_517[1];
                        int32_t l_704[2];
                        uint16_t *l_705 = &p_2554->g_191;
                        uint16_t *l_706 = &l_572;
                        int32_t l_708[9] = {(-2L),0L,(-2L),(-2L),0L,(-2L),(-2L),0L,(-2L)};
                        uint16_t *l_709 = &p_2554->g_710[1];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_704[i] = (-7L);
                        (*p_2554->g_343) &= (((p_15 , ((safe_sub_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_u(((++(*l_650)) == (((safe_rshift_func_uint8_t_u_u(((*l_658) ^= (l_675 = (((((*l_709) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_688 == (*p_2554->g_607)), ((*l_689) = (-1L)))), (((l_674 = p_2554->g_158) , (0x57L < (((*p_2554->g_391) = (safe_div_func_int16_t_s_s((l_708[0] &= (safe_mod_func_uint64_t_u_u(((~(safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(p_2554->g_232[2], (((safe_mul_func_uint16_t_u_u(((*l_706) = ((*l_705) &= (safe_mul_func_uint8_t_u_u(255UL, (safe_div_func_int8_t_s_s((l_704[1] >= 0L), p_2554->g_232[5])))))), p_2554->g_128)) <= p_2554->g_593[1]) , l_704[1]))) , (void*)0) != &p_2554->g_232[5]), l_707))) , p_15), p_2554->g_230[1]))), p_15))) , 0x1EL))) > p_2554->g_95)))) | p_14) , 0xAB5C3F090DA66D38L) > 0x2A99FE21A6D3A097L))), p_2554->g_128)) , 0x3947L) && l_707)), p_2554->g_182)) >= l_518[0]) && 0UL) || p_2554->g_230[2]) && 0x1A7FL) > p_2554->g_230[2]), 0x0FB8L)) > 1L)) , p_2554->g_288) ^ p_2554->g_230[2]);
                    }
                    else
                    { /* block id: 321 */
                        int32_t l_711 = 0x75AF7511L;
                        int32_t l_713 = 3L;
                        --p_2554->g_714;
                        return p_16;
                    }
                    l_712 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_2554->g_593[1], ((((l_674 = ((l_724 = l_721) != &p_2554->g_710[1])) , (safe_sub_func_uint16_t_u_u(((p_14 >= ((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s((p_15 , p_15), (((--(*l_732)) , p_16) != &p_2554->g_193))) == ((*l_735) = 0xA4B8767625EE5BBDL)), p_2554->g_158)) & p_2554->g_191)) > (-7L)), l_712))) ^ 1UL) , 0x163FL))), p_2554->g_392));
                    l_756[7] ^= (safe_sub_func_int8_t_s_s(((*l_738) |= 0x77L), ((l_675 &= ((((((safe_add_func_uint16_t_u_u(p_2554->g_82, (((&p_2554->g_710[1] == &p_2554->g_191) , ((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(0x16B1L, (safe_mul_func_uint16_t_u_u(0UL, ((p_2554->g_749 = l_747) != &p_2554->g_750))))), 1)) == ((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(p_2554->g_322, l_755)) >= 0UL), p_14)) , p_2554->g_191) && l_674) , p_2554->g_600))) ^ p_15))) || 0x743CL) & (*p_16)) , p_14) , (*p_16)) == 0x5185998BL)) ^ p_2554->g_714)));
                }
                else
                { /* block id: 334 */
                    l_757 = (*p_2554->g_646);
                }
                (*p_2554->g_343) |= ((safe_lshift_func_int8_t_s_s(((*p_2554->g_749) != (((safe_div_func_int8_t_s_s(1L, (safe_mod_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((p_14 | (l_514 |= (*p_16))), (safe_sub_func_uint32_t_u_u(((p_15 >= ((((-1L) & (safe_sub_func_uint16_t_u_u(p_15, (((0L && ((((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((((l_675 |= l_518[0]) || p_2554->g_117[3][3]) != (*p_16)), 0x42E0869EEC35466CL)) , l_675), p_14)) > 0xBF0AL) ^ 0x461FL) , 65526UL)) | l_674) , p_14)))) , l_778[7]) != (void*)0)) | p_2554->g_162), 0x491483F3L)))), p_15)) , &l_640) != &p_2554->g_95), p_14)))) >= 0x03E6E1A3F6143BD9L) > p_2554->g_600)), l_509)) <= l_509);
                for (l_502 = (-23); (l_502 > 24); l_502 = safe_add_func_int64_t_s_s(l_502, 1))
                { /* block id: 342 */
                    int8_t **l_789 = &p_2554->g_749;
                    int64_t l_794 = 0x39A10F3386AA04AEL;
                    int64_t *l_798 = &p_2554->g_392;
                    int32_t *l_800[9][4][2] = {{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}},{{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510},{&l_509,&l_510}}};
                    uint16_t l_803 = 0xEFFAL;
                    int i, j, k;
                    for (l_579 = 14; (l_579 != (-13)); l_579 = safe_sub_func_uint8_t_u_u(l_579, 6))
                    { /* block id: 345 */
                        return p_16;
                    }
                    (*p_2554->g_531) = func_29(p_2554->g_783, &l_502, p_2554->g_117[7][0], p_2554);
                    if (((((((l_784 && 255UL) , (*p_2554->g_607)) != (void*)0) , l_794) == 0x0141L) > 0x66L))
                    { /* block id: 352 */
                        l_800[5][0][1] = ((*l_636) = (((*l_638) = (safe_add_func_uint32_t_u_u((0x88L && ((void*)0 != l_798)), (l_799 == &p_2554->g_132)))) , &l_675));
                        l_802 = (0L != (&p_2554->g_749 != l_801));
                    }
                    else
                    { /* block id: 357 */
                        uint32_t l_812[1];
                        int32_t l_813 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_812[i] = 4294967288UL;
                        if ((*p_16))
                            break;
                        l_803++;
                        l_813 ^= (l_512 = ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*p_2554->g_749) , 0UL) , ((**l_789) ^= (l_799 == &l_522))), (safe_sub_func_int8_t_s_s(l_675, l_812[0])))), l_507)) >= 0x0F36162F9A604221L));
                    }
                }
                for (l_640 = 0; (l_640 <= 4); l_640 += 1)
                { /* block id: 367 */
                    uint32_t l_818 = 0x2501EB1CL;
                    int32_t l_835 = 0x00DB3D2AL;
                    int32_t **l_838[7] = {&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464};
                    int32_t l_856 = (-1L);
                    int32_t l_857 = 0x55999130L;
                    int32_t ***l_879 = &l_567[1][3][4];
                    int i;
                    for (l_674 = 9; (l_674 >= 0); l_674 -= 1)
                    { /* block id: 370 */
                        int32_t l_834 = 0x6B290D2AL;
                        uint8_t **l_845 = (void*)0;
                        uint8_t **l_846[8][5] = {{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638},{&l_638,(void*)0,(void*)0,(void*)0,&l_638}};
                        int i, j;
                        l_835 = (((safe_lshift_func_int8_t_s_u(((l_462[l_674] | (((safe_mul_func_uint8_t_u_u(0xB8L, (p_14 , (l_834 = (l_818 || (((*p_2554->g_749) , (+((((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_14, (safe_rshift_func_uint8_t_u_s(p_2554->g_593[1], 1)))), 13)) <= ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(p_2554->g_783, (p_15 < 0x636FBEBFL))), 6)) != p_14), p_2554->g_833)) | 0x136DL)) | (*p_2554->g_795)), (*p_2554->g_749))) || l_466) > l_675) , p_2554->g_392))) && l_518[0])))))) && (-4L)) == l_675)) , p_14), 0)) & p_14) <= 0L);
                        (*p_2554->g_343) = (l_505 = (safe_rshift_func_uint16_t_u_s((l_838[0] != (((*l_721) = (((safe_lshift_func_uint16_t_u_s((((*l_747) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((p_2554->g_847 = l_650) != &p_2554->g_288) < p_15), 1L)), (safe_lshift_func_int16_t_s_u(((0x16L & (*p_2554->g_749)) , (l_834 = (((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((l_834 < p_14) , l_462[l_674]) , 1UL), p_2554->g_6[2])), l_854[4])) | (*p_16)) == 0xD7EAEA8822786556L))), 3))))) > l_818), 9)) , (void*)0) != (void*)0)) , &l_464)), p_14)));
                        p_2554->g_170[l_640][(l_640 + 1)] = p_16;
                    }
                    for (l_513 = 9; (l_513 >= 0); l_513 -= 1)
                    { /* block id: 383 */
                        int16_t l_855[10][9][2] = {{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}},{{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L},{0x3785L,0x3785L}}};
                        int32_t l_858[3];
                        uint32_t l_859[2];
                        int32_t ***l_878 = &l_567[1][3][5];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_858[i] = 0x59813F4EL;
                        for (i = 0; i < 2; i++)
                            l_859[i] = 1UL;
                        l_859[1]++;
                        (*p_2554->g_343) = ((safe_add_func_uint64_t_u_u(p_2554->g_193, (p_2554->g_160 || ((*l_799) ^= 0x393A533B549B5323L)))) | ((l_518[0] <= ((*l_638) = (safe_mod_func_int8_t_s_s(l_675, (l_835 ^ (((*l_672) ^= ((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s((((!(safe_add_func_int8_t_s_s(0x28L, ((safe_unary_minus_func_uint64_t_u((p_2554->g_182 == (p_2554->g_593[1] > 0x5778BE0F53E9059DL)))) | p_15)))) != l_875) == 0x7BE2AEBFL), l_462[2])) & 0xF3FA2BD2D8A93EE1L) , l_876) != l_876) || 9UL), 0x15L)), p_2554->g_877[4])) , l_878) != l_879) , p_2554->g_600)) >= 5L)))))) == p_15));
                    }
                    if ((*p_16))
                        continue;
                    return p_16;
                }
            }
            (*p_2554->g_343) ^= 0x05970EC9L;
            (*p_2554->g_343) &= (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((l_755 & (l_884 ^= p_2554->g_82)) , (((((((safe_div_func_uint32_t_u_u((l_895 = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(l_462[5], ((*l_891) = (p_2554->g_158 = 1L)))), 4)) == ((*l_892) = p_15))), (((safe_div_func_int8_t_s_s((*p_2554->g_749), (safe_rshift_func_uint8_t_u_s((!((((void*)0 != l_900) , (*p_16)) , p_14)), p_15)))) <= (*p_2554->g_847)) || p_15))) == l_901) >= p_15) ^ 0xDF6F1F34L) | p_2554->g_128) > l_902[7]) & 1L)), p_2554->g_230[2])), p_15));
        }
        else
        { /* block id: 401 */
            int64_t ***l_904[6][7] = {{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0},{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0},{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0},{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0},{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0},{&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],(void*)0,&p_2554->g_390[1],&p_2554->g_390[1],(void*)0}};
            int64_t ****l_903 = &l_904[2][3];
            uint32_t *l_905 = &p_2554->g_232[5];
            int32_t l_917 = 0x4BB8115FL;
            int32_t *l_918 = (void*)0;
            int i, j;
            (*l_636) = func_29(p_2554->g_117[3][3], func_44(((((&p_2554->g_390[1] == ((*l_903) = (void*)0)) , ((&p_2554->g_783 == l_905) , ((safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((*p_2554->g_847), (((*p_2554->g_749) , ((*l_610) = (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(0xD16B5519L, ((*p_2554->g_749) != (*p_2554->g_847)))) >= (*p_16)) , p_14) <= p_2554->g_459), 6)) && 0x85C4L) | p_2554->g_232[5]), 4)))) , p_2554->g_916))) >= 0x1FL) , (-1L)), (*p_2554->g_847))) || l_917))) && 1UL) , l_918), p_15, p_2554->g_162, (*p_16), p_15, p_2554), p_14, p_2554);
        }
        (*p_2554->g_343) = (*p_16);
    }
    else
    { /* block id: 407 */
        int32_t l_927[4][2] = {{0x01A2BA0BL,0x01A2BA0BL},{0x01A2BA0BL,0x01A2BA0BL},{0x01A2BA0BL,0x01A2BA0BL},{0x01A2BA0BL,0x01A2BA0BL}};
        uint8_t l_950[5];
        int32_t l_952 = 0x3AAFA4D5L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_950[i] = 0x1DL;
        for (p_2554->g_191 = 0; (p_2554->g_191 != 14); p_2554->g_191++)
        { /* block id: 410 */
            uint64_t *l_926[4][4][9] = {{{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]}},{{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]}},{{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]}},{{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]},{&p_2554->g_132,&p_2554->g_132,&p_2554->g_117[3][3],&p_2554->g_128,&p_2554->g_117[3][3],&p_2554->g_132,&p_2554->g_132,&p_2554->g_163,&p_2554->g_117[4][0]}}};
            uint16_t *l_940 = &p_2554->g_710[1];
            uint16_t *l_941 = &l_572;
            uint32_t *l_951 = &p_2554->g_783;
            int i, j, k;
            l_952 |= (safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_502 ^= ((l_927[0][1] = l_506) , p_15)), (l_507 == ((((((!(((safe_lshift_func_int16_t_s_u((((safe_mod_func_int64_t_s_s(0L, ((safe_div_func_uint64_t_u_u((((*l_951) = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_941) &= ((*l_940) = (safe_rshift_func_int16_t_s_u(((void*)0 != &p_2554->g_232[5]), 2)))), ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((*p_2554->g_749) = (((((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(l_950[2], (18446744073709551611UL | p_2554->g_916))), 0xE3EAL)) , 0x3D00L) || p_2554->g_322) < p_14) , (*p_2554->g_749))), p_14)), p_2554->g_67)) , l_518[0]))), 4))) < 0x48E45B8AL), p_15)) , p_14))) < p_14) > 0x0FD6L), 9)) == p_2554->g_232[1]) <= p_15)) > 0UL) ^ p_14) && 255UL) != (*p_2554->g_847)) != 0x69179DC9L)))), p_14))));
        }
        for (p_2554->g_163 = 0; p_2554->g_163 < 3; p_2554->g_163 += 1)
        {
            p_2554->g_230[p_2554->g_163] = 0x3A03L;
        }
        for (p_2554->g_82 = 0; (p_2554->g_82 >= 6); p_2554->g_82++)
        { /* block id: 422 */
            l_957 |= (0x33A1L ^ (safe_rshift_func_uint8_t_u_u(p_15, 3)));
        }
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_5 p_2554->g_4 p_2554->g_6 p_2554->g_67 p_2554->g_95 p_2554->g_82 p_2554->g_117 p_2554->g_132 p_2554->g_160 p_2554->g_163 p_2554->g_128 p_2554->g_169 p_2554->g_182 p_2554->g_191 p_2554->g_193 p_2554->g_232 p_2554->g_230 p_2554->g_162 p_2554->g_288 p_2554->g_322 p_2554->g_158 p_2554->g_342 p_2554->g_339 p_2554->g_343 p_2554->g_389 p_2554->g_3
 * writes: p_2554->g_82 p_2554->g_67 p_2554->g_95 p_2554->g_117 p_2554->g_128 p_2554->g_132 p_2554->g_158 p_2554->g_160 p_2554->g_162 p_2554->g_163 p_2554->g_169 p_2554->g_182 p_2554->g_193 p_2554->g_191 p_2554->g_232 p_2554->g_339 p_2554->g_343 p_2554->g_230 p_2554->g_5 p_2554->g_390 p_2554->g_440 p_2554->g_170 p_2554->g_3
 */
uint32_t  func_17(int32_t * p_18, uint32_t  p_19, int32_t  p_20, struct S0 * p_2554)
{ /* block id: 13 */
    uint8_t l_24[8] = {0x9CL,0x9CL,0x9CL,0x9CL,0x9CL,0x9CL,0x9CL,0x9CL};
    int32_t *l_83 = &p_2554->g_6[6];
    uint32_t l_84[4][4] = {{0x96DE0D78L,4294967288UL,4294967288UL,0x96DE0D78L},{0x96DE0D78L,4294967288UL,4294967288UL,0x96DE0D78L},{0x96DE0D78L,4294967288UL,4294967288UL,0x96DE0D78L},{0x96DE0D78L,4294967288UL,4294967288UL,0x96DE0D78L}};
    int32_t l_447 = 0x2222C070L;
    int i, j;
    l_447 = ((safe_add_func_int64_t_s_s((p_19 , (l_24[4] | func_25(p_2554->g_5, func_29((p_2554->g_4 <= (func_33(((safe_sub_func_int8_t_s_s(func_40((p_2554->g_6[1] , func_44(p_18, p_20, (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((((p_2554->g_6[1] != (((safe_add_func_uint8_t_u_u(l_24[7], p_20)) & l_24[4]) < 0x50L)) >= p_2554->g_4) | p_19), 4)) < l_24[4]), 4294967295UL)), l_24[4])), p_2554->g_6[1], l_24[0], p_2554)), p_18, l_83, p_2554), 247UL)) && p_19), p_20, p_2554->g_6[1], &p_2554->g_6[3], p_2554) == 0x2E901CC30F106BFDL)), &p_2554->g_4, l_84[1][3], p_2554), p_19, p_2554))), (*l_83))) | p_20);
    (*p_2554->g_343) &= (l_447 = 0x018154D8L);
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_162 p_2554->g_158 p_2554->g_230 p_2554->g_160 p_2554->g_6 p_2554->g_4 p_2554->g_132 p_2554->g_342 p_2554->g_322 p_2554->g_232 p_2554->g_117 p_2554->g_288 p_2554->g_82 p_2554->g_339 p_2554->g_182 p_2554->g_343 p_2554->g_5 p_2554->g_193 p_2554->g_128 p_2554->g_389 p_2554->g_95 p_2554->g_3
 * writes: p_2554->g_162 p_2554->g_158 p_2554->g_160 p_2554->g_82 p_2554->g_339 p_2554->g_343 p_2554->g_117 p_2554->g_232 p_2554->g_67 p_2554->g_182 p_2554->g_230 p_2554->g_128 p_2554->g_5 p_2554->g_390 p_2554->g_440 p_2554->g_191 p_2554->g_170 p_2554->g_3
 */
uint16_t  func_25(uint32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_2554)
{ /* block id: 132 */
    uint8_t *l_335[1][5][5] = {{{&p_2554->g_95,&p_2554->g_288,(void*)0,&p_2554->g_288,(void*)0},{&p_2554->g_95,&p_2554->g_288,(void*)0,&p_2554->g_288,(void*)0},{&p_2554->g_95,&p_2554->g_288,(void*)0,&p_2554->g_288,(void*)0},{&p_2554->g_95,&p_2554->g_288,(void*)0,&p_2554->g_288,(void*)0},{&p_2554->g_95,&p_2554->g_288,(void*)0,&p_2554->g_288,(void*)0}}};
    uint8_t **l_334 = &l_335[0][1][1];
    int32_t l_341 = (-10L);
    int32_t l_403[5][5] = {{0x09C08347L,0x34ECFFD0L,0x34ECFFD0L,0x09C08347L,0x09C08347L},{0x09C08347L,0x34ECFFD0L,0x34ECFFD0L,0x09C08347L,0x09C08347L},{0x09C08347L,0x34ECFFD0L,0x34ECFFD0L,0x09C08347L,0x09C08347L},{0x09C08347L,0x34ECFFD0L,0x34ECFFD0L,0x09C08347L,0x09C08347L},{0x09C08347L,0x34ECFFD0L,0x34ECFFD0L,0x09C08347L,0x09C08347L}};
    int16_t *l_419 = &p_2554->g_160;
    int16_t **l_418 = &l_419;
    int i, j, k;
    for (p_2554->g_162 = 0; (p_2554->g_162 > 39); p_2554->g_162 = safe_add_func_int8_t_s_s(p_2554->g_162, 9))
    { /* block id: 135 */
        uint16_t l_331 = 0x009EL;
        int64_t l_336[7];
        uint64_t l_340 = 0x505E1312063382B0L;
        uint16_t l_362 = 1UL;
        int32_t l_385 = 0x0012F82AL;
        int32_t *l_388 = (void*)0;
        int32_t l_398 = 0x564D9299L;
        int32_t l_404 = 0x40C62F08L;
        int32_t l_405 = (-4L);
        int32_t l_406[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_407[6];
        int32_t *l_442 = &p_2554->g_193;
        int32_t **l_441 = &l_442;
        int i;
        for (i = 0; i < 7; i++)
            l_336[i] = 0L;
        for (i = 0; i < 6; i++)
            l_407[i] = 4294967286UL;
        for (p_2554->g_158 = 2; (p_2554->g_158 >= 0); p_2554->g_158 -= 1)
        { /* block id: 138 */
            uint32_t l_325 = 0x7EB7EE75L;
            int32_t l_367[7];
            int32_t l_393 = 0x08550158L;
            int16_t *l_415 = &p_2554->g_158;
            int16_t **l_414 = &l_415;
            int i;
            for (i = 0; i < 7; i++)
                l_367[i] = 4L;
            for (p_2554->g_160 = 0; (p_2554->g_160 <= 2); p_2554->g_160 += 1)
            { /* block id: 141 */
                int i;
                return p_2554->g_230[p_2554->g_158];
            }
            for (p_2554->g_160 = 0; (p_2554->g_160 <= 2); p_2554->g_160 += 1)
            { /* block id: 146 */
                int32_t *l_328 = (void*)0;
                int32_t *l_337 = &p_2554->g_82;
                int8_t *l_338 = &p_2554->g_339;
                int32_t l_397 = 0x602E96E1L;
                int64_t l_399 = 0x5F433E2033D4CC4CL;
                int32_t l_400 = 0x2A783BB0L;
                int32_t l_402[7] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                uint32_t *l_443 = &p_2554->g_232[6];
                uint16_t *l_446 = &p_2554->g_191;
                int i;
                if (((((((((0L > p_2554->g_230[p_2554->g_160]) && ((l_325 , ((*l_338) = (((safe_mul_func_uint8_t_u_u((l_328 == ((safe_mul_func_uint8_t_u_u((l_331 > (((*l_337) = (safe_div_func_uint16_t_u_u(((p_26 , l_334) == (void*)0), l_336[0]))) , 4L)), 0x5EL)) , &p_2554->g_193)), 1L)) < 4UL) > l_325))) && l_340)) && l_331) ^ (*p_27)) || (-5L)) < p_2554->g_132) >= p_2554->g_230[1]) & l_341))
                { /* block id: 149 */
                    int64_t l_363 = 0L;
                    for (p_28 = 0; (p_28 <= 6); p_28 += 1)
                    { /* block id: 152 */
                        int i, j;
                        (*p_2554->g_342) = &p_2554->g_3;
                        (*l_337) = ((safe_rshift_func_int8_t_s_s((((((*l_338) &= ((l_336[(p_2554->g_160 + 1)] >= (safe_div_func_int64_t_s_s((p_26 ^ (safe_rshift_func_int16_t_s_u(7L, 12))), (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(l_325, 0x5DDA8162FA79A000L)) >= p_2554->g_160), (safe_mod_func_uint8_t_u_u((((p_2554->g_117[(p_2554->g_158 + 4)][(p_28 + 1)] |= (safe_rshift_func_uint16_t_u_s((0x4675D09DL && (((void*)0 != p_27) & p_2554->g_322)), p_2554->g_232[0]))) & p_2554->g_288) | p_28), l_325)))), (*l_337))) ^ 0UL) < p_2554->g_230[1]) , (-10L)), p_2554->g_232[6]))))) || l_362)) ^ 0UL) , p_28) > p_28), p_2554->g_182)) <= p_26);
                        return l_363;
                    }
                }
                else
                { /* block id: 159 */
                    int32_t *l_364[8][2];
                    int32_t **l_365 = &l_364[7][0];
                    int32_t **l_366 = &l_328;
                    uint64_t l_386 = 18446744073709551614UL;
                    int32_t l_401[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_364[i][j] = &p_2554->g_193;
                    }
                    if (((+((p_2554->g_160 == (((*l_366) = ((*l_365) = l_364[0][1])) == &p_2554->g_193)) < (l_367[2] = 1L))) <= ((((*l_337) > (((((p_2554->g_232[(p_2554->g_158 + 4)] = ((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_28, 65535UL)), (((l_341 != ((7L || p_2554->g_230[2]) == p_26)) >= 1L) , l_341))), 0x847E49756D08F1CCL)), 4294967295UL)) , 0xABFE7EAFL)) ^ (*p_27)) | 0x5BB232A8L) , (**p_2554->g_342)) ^ 0x9C35A51FL)) , p_2554->g_339) && p_26)))
                    { /* block id: 164 */
                        uint32_t *l_380 = &p_2554->g_232[5];
                        int64_t *l_383 = (void*)0;
                        int64_t *l_384 = (void*)0;
                        uint64_t *l_387[9] = {&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163,&p_2554->g_163};
                        int i;
                        (*p_2554->g_343) |= ((p_2554->g_128 ^= ((((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(255UL, p_2554->g_193)) , ((((((p_2554->g_182 |= (p_2554->g_67 = ((l_385 |= ((--(*l_380)) == 4294967295UL)) , p_2554->g_232[(p_2554->g_158 + 4)]))) ^ p_28) && ((((p_2554->g_230[p_2554->g_160] = 1L) , &p_2554->g_288) != &p_2554->g_162) , p_2554->g_117[3][3])) != l_386) , p_26) == l_340)) <= p_26), 0x98L)) <= p_2554->g_117[5][6]) | 0x56L) & 18446744073709551608UL)) < 0x0B784EC40B2B44CFL);
                        l_388 = &p_28;
                        (*p_2554->g_389) = &l_383;
                        if ((*l_388))
                            break;
                    }
                    else
                    { /* block id: 175 */
                        int32_t *l_394 = &l_341;
                        int32_t *l_395 = &l_385;
                        int32_t *l_396[9][1];
                        int16_t ***l_416 = (void*)0;
                        int16_t ***l_417 = &l_414;
                        int16_t ***l_420 = &l_418;
                        uint32_t l_433[2][2][3] = {{{4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL}}};
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_396[i][j] = &l_393;
                        }
                        --l_407[2];
                        if (l_341)
                            break;
                        (*p_2554->g_343) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((*l_417) = l_414) != ((*l_420) = l_418)), ((safe_rshift_func_int8_t_s_u(p_26, (p_2554->g_6[3] == (safe_add_func_uint16_t_u_u(p_2554->g_6[1], (safe_sub_func_int64_t_s_s((p_26 >= ((*l_337) = (+(((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((void*)0 == &p_2554->g_343), ((0x0923FCA1A84A1919L >= 0x094F55581A974543L) ^ 0x3C68L))), 1)) != 1UL), (*l_337))) != p_2554->g_322) , p_2554->g_232[6])))), p_2554->g_95))))))) ^ l_433[1][1][2]))), 0x47B1L));
                    }
                }
                (**p_2554->g_342) = (p_28 || (((p_2554->g_158 && (safe_add_func_uint64_t_u_u(((*l_418) != (void*)0), (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_446) = ((((*l_443) = ((p_2554->g_440 = &l_328) != l_441)) >= (safe_mul_func_uint16_t_u_u(p_28, l_340))) & l_403[3][0])), p_2554->g_230[2])), (*l_337)))))) == p_28) , l_341));
                if (l_341)
                    continue;
                p_2554->g_170[2][3] = &l_385;
            }
        }
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_67 p_2554->g_95 p_2554->g_82 p_2554->g_117 p_2554->g_6 p_2554->g_132 p_2554->g_160 p_2554->g_4 p_2554->g_163 p_2554->g_128 p_2554->g_169 p_2554->g_182 p_2554->g_191 p_2554->g_193 p_2554->g_232 p_2554->g_230 p_2554->g_162 p_2554->g_288 p_2554->g_322
 * writes: p_2554->g_67 p_2554->g_95 p_2554->g_117 p_2554->g_128 p_2554->g_132 p_2554->g_82 p_2554->g_158 p_2554->g_160 p_2554->g_162 p_2554->g_163 p_2554->g_169 p_2554->g_182 p_2554->g_193 p_2554->g_191 p_2554->g_232
 */
int32_t * func_29(uint16_t  p_30, int32_t * p_31, uint32_t  p_32, struct S0 * p_2554)
{ /* block id: 26 */
    int32_t l_100 = 1L;
    int32_t l_126 = 0x662AD52EL;
    int32_t *l_145 = &p_2554->g_82;
    int32_t **l_144[3];
    uint16_t l_249 = 5UL;
    uint8_t l_319 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_144[i] = &l_145;
    for (p_2554->g_67 = 0; (p_2554->g_67 == 3); p_2554->g_67 = safe_add_func_int64_t_s_s(p_2554->g_67, 5))
    { /* block id: 29 */
        uint16_t l_87 = 0UL;
        int32_t *l_125 = &p_2554->g_82;
        uint16_t *l_190 = &p_2554->g_191;
        int64_t l_194 = 0x35B7F529ED1989E6L;
        int32_t l_213 = 0L;
        int32_t l_214 = 0x5B1603EDL;
        int32_t l_216[7][8] = {{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL},{0x51C29661L,0x1EFD968EL,0x33148EFDL,0L,0x33148EFDL,0x1EFD968EL,0x51C29661L,0x37B7EF6DL}};
        int16_t *l_287 = &p_2554->g_230[2];
        uint8_t *l_318 = &p_2554->g_288;
        int i, j;
        --l_87;
        for (l_87 = 6; (l_87 < 18); l_87++)
        { /* block id: 33 */
            uint8_t *l_94 = &p_2554->g_95;
            uint64_t *l_115 = (void*)0;
            uint64_t *l_116 = &p_2554->g_117[3][3];
            int32_t **l_122 = (void*)0;
            int32_t *l_124 = &p_2554->g_6[1];
            int32_t **l_123 = &l_124;
            uint64_t *l_127 = &p_2554->g_128;
            uint64_t *l_129 = (void*)0;
            uint64_t *l_130 = (void*)0;
            uint64_t *l_131[1];
            uint16_t l_133 = 9UL;
            int i;
            for (i = 0; i < 1; i++)
                l_131[i] = &p_2554->g_132;
            (*l_125) = (safe_lshift_func_int16_t_s_s((((((*l_94)--) >= ((safe_rshift_func_int8_t_s_s((l_100 | (safe_lshift_func_int16_t_s_s(0x6F6EL, 14))), 5)) != (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_2554->g_82, (l_87 , ((((safe_lshift_func_int8_t_s_u(0x02L, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((p_2554->g_132 |= ((*l_127) = ((((*l_116)++) > (safe_sub_func_int16_t_s_s(((((l_126 = ((((*l_123) = &p_2554->g_6[1]) == l_125) || p_30)) | p_32) , 1UL) ^ (*l_125)), p_2554->g_6[7]))) , p_2554->g_6[1]))) || p_32) | p_2554->g_6[1]) , 1UL) < p_30), l_100)), 0xD0E4L)), l_133)))) , (void*)0) != (void*)0) > p_2554->g_82)))), l_100)))) | p_32) || p_2554->g_67), 2));
            for (l_133 = 2; (l_133 <= 7); l_133 += 1)
            { /* block id: 43 */
                uint32_t l_134 = 4294967293UL;
                int32_t *l_137[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_137[i] = &p_2554->g_6[1];
                for (p_2554->g_128 = 0; (p_2554->g_128 <= 0); p_2554->g_128 += 1)
                { /* block id: 46 */
                    --l_134;
                }
                return l_137[5];
            }
        }
        for (p_30 = 0; (p_30 > 21); p_30 = safe_add_func_int8_t_s_s(p_30, 6))
        { /* block id: 54 */
            int16_t *l_157 = &p_2554->g_158;
            int16_t *l_159 = &p_2554->g_160;
            uint8_t *l_161 = &p_2554->g_162;
            p_2554->g_163 |= ((p_2554->g_82 | ((safe_add_func_uint16_t_u_u(p_2554->g_95, ((safe_add_func_int64_t_s_s(0x6A2825B7CC70ECFAL, (((void*)0 != l_144[2]) > p_32))) || (((255UL < (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(p_30, (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_161) = (((*l_159) |= ((*l_157) = ((safe_rshift_func_int16_t_s_s(p_2554->g_6[1], 10)) <= p_32))) || p_32)), 1L)), 0x452DL)))))), 1UL))) , 0x17L) , p_2554->g_4)))) || p_30)) && p_30);
        }
        for (l_126 = (-7); (l_126 > (-28)); l_126 = safe_sub_func_int8_t_s_s(l_126, 9))
        { /* block id: 62 */
            int32_t ***l_166 = (void*)0;
            int32_t ***l_167 = (void*)0;
            int32_t ***l_168[1];
            int16_t l_221 = 0x584EL;
            uint8_t *l_280[9][8] = {{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162},{&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_162,&p_2554->g_95,&p_2554->g_95,&p_2554->g_162}};
            uint8_t l_290[8] = {0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L};
            int i, j;
            for (i = 0; i < 1; i++)
                l_168[i] = &l_144[2];
            if ((((p_2554->g_169 = &l_145) == &p_2554->g_170[1][5]) && (65528UL || p_2554->g_128)))
            { /* block id: 64 */
                uint16_t *l_175 = &l_87;
                int32_t *l_180[6][10][4] = {{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}}};
                int64_t *l_181 = &p_2554->g_182;
                int32_t l_189[8];
                int32_t *l_192[9] = {&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193,&p_2554->g_193};
                int32_t l_195 = 0x261EF3BDL;
                uint16_t l_218 = 0xBB77L;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_189[i] = 1L;
                (*p_2554->g_169) = l_125;
                (*p_2554->g_169) = func_44((*p_2554->g_169), (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((*l_175) = 0xD23BL) | ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((((0x7E92L <= (((p_2554->g_193 = ((((((*l_125) &= 0L) , ((*l_181) = 0x31D27B0B2C2AFABCL)) == ((((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((p_30 <= ((l_189[2] = 0x7D1AE754L) ^ ((*p_31) & (1UL != 65535UL)))) < p_2554->g_6[1]), 12)), 0xB52AL)), 2)) , l_189[2]) , (void*)0) != l_190)) , 255UL) >= 0x41L)) , p_2554->g_182) == p_30)) || (*p_31)) & (*p_31)) , &p_2554->g_132) != (void*)0), p_30)) > p_30), l_194)) >= p_30)), p_32)), l_195)), l_195, (*p_31), p_30, p_2554);
                if ((*p_31))
                { /* block id: 72 */
                    int16_t *l_202 = &p_2554->g_158;
                    int16_t *l_203 = (void*)0;
                    int16_t *l_204[2];
                    int32_t l_205 = (-1L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_204[i] = &p_2554->g_160;
                    (*p_2554->g_169) = func_44(((*p_2554->g_169) = (*p_2554->g_169)), p_2554->g_191, (*l_125), (+((l_205 = ((*l_202) = ((l_189[2] = (p_30 , ((-7L) | (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((0x23AA6587CEBA9940L & (safe_add_func_int64_t_s_s(0x45FDDC11C7F1A52FL, (p_2554->g_193 || (p_32 == 18446744073709551610UL))))), p_30)), 1L))))) < 0x3868L))) <= 0L)), p_2554->g_163, p_2554);
                }
                else
                { /* block id: 78 */
                    int64_t l_208 = 0x1847874FC3CE81A5L;
                    int32_t l_209 = 2L;
                    int32_t l_211 = 0L;
                    int32_t l_212[10] = {0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L,0x0FC7E913L};
                    uint64_t l_222[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                    uint32_t l_229[2];
                    uint32_t *l_231 = &p_2554->g_232[5];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_229[i] = 3UL;
                    for (p_2554->g_128 = 1; (p_2554->g_128 == 39); p_2554->g_128++)
                    { /* block id: 81 */
                        int32_t l_210 = 9L;
                        int32_t l_215 = (-3L);
                        int32_t l_217[2][5] = {{0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L},{0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L,0x4C7CFD09L}};
                        int i, j;
                        l_208 = (**p_2554->g_169);
                        ++l_218;
                        l_222[4]--;
                    }
                    for (p_2554->g_95 = 0; (p_2554->g_95 <= 6); p_2554->g_95 += 1)
                    { /* block id: 88 */
                        int i, j;
                        l_189[p_2554->g_95] &= 0x5613FC01L;
                        (*p_2554->g_169) = &l_216[p_2554->g_95][p_2554->g_95];
                    }
                    l_209 &= (safe_lshift_func_uint16_t_u_u(((p_2554->g_182 , (0x00606C95L || (safe_div_func_int16_t_s_s((0xDBF1L > p_2554->g_160), ((*l_190) |= ((*l_125) = (0x128A37D8L | l_229[0]))))))) <= ((l_216[3][4] = (l_222[2] != (++(*l_231)))) != l_218)), 5));
                    p_31 = func_44(func_44(p_31, (+((((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((p_2554->g_191 | (safe_mod_func_int32_t_s_s((((((safe_add_func_uint8_t_u_u((&p_2554->g_191 == &p_2554->g_191), p_2554->g_230[1])) > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((0x22L && (((void*)0 != p_31) < ((!(p_2554->g_95 || p_30)) == 0UL))), p_2554->g_232[5])), p_2554->g_4)), p_30))) && 0x4187EB05F36B146FL) | 0x1D0DL) == 0x2EL), p_2554->g_6[4]))), l_189[0])) < 0x28AC87BADBB8D56CL) , p_2554->g_163) == p_30), (*l_125))) | 0x1DA19FEDL) == p_32) >= l_222[4])), p_30, (**p_2554->g_169), p_32, p_2554), p_2554->g_163, p_2554->g_132, l_249, p_32, p_2554);
                }
            }
            else
            { /* block id: 99 */
                int8_t l_250[4][5][9] = {{{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L}},{{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L}},{{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L}},{{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L},{0x23L,0x7EL,0x01L,0x01L,0x7EL,0x23L,0x78L,(-1L),1L}}};
                uint8_t *l_277 = &p_2554->g_162;
                uint8_t **l_276 = &l_277;
                uint8_t *l_279 = &p_2554->g_95;
                uint8_t **l_278 = &l_279;
                int16_t *l_285 = &p_2554->g_160;
                int16_t **l_286[4];
                int32_t l_299 = 0L;
                int32_t l_304 = (-1L);
                int32_t *l_310 = (void*)0;
                int32_t l_313 = 1L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_286[i] = &l_285;
                (*p_2554->g_169) = p_31;
                l_250[2][1][2] &= 0x22D8C443L;
                if ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_2554->g_162, (safe_sub_func_int32_t_s_s(((*l_125) |= (**p_2554->g_169)), (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((p_2554->g_4 <= (((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_30, (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((*l_278) = ((*l_276) = &p_2554->g_162)) != l_280[8][6]) , (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_287 = l_285) == &l_221) != l_250[0][4][2]), p_30)) | p_32), p_2554->g_191))), p_2554->g_191)), l_250[2][1][2])), p_32)))), p_2554->g_288)) > p_2554->g_128), p_2554->g_67)) , &p_2554->g_170[1][5]) != (void*)0), p_30)) & 1UL) < p_2554->g_128)))) == l_250[2][1][2]), 0x34BDL)))))) | 0UL), p_30)))
                { /* block id: 106 */
                    uint32_t l_289 = 0x5826A119L;
                    int32_t l_300 = 0x0ACCEB7FL;
                    int32_t l_301[6][5] = {{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L},{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L},{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L},{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L},{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L},{0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L,0x0927EC23L}};
                    int i, j;
                    l_289 = (*p_31);
                    l_301[2][4] = ((*l_145) , (l_290[1] >= (safe_rshift_func_int8_t_s_u(p_2554->g_191, (safe_sub_func_int32_t_s_s((l_300 = ((*l_125) = (((((((0x08639D33BB9B582AL > 0x02F886A3D9CF59EBL) | (((*l_285) = ((safe_lshift_func_uint16_t_u_u(p_30, 1)) == ((safe_lshift_func_uint8_t_u_s(p_2554->g_288, 5)) >= p_2554->g_162))) == p_32)) , l_250[2][1][2]) , l_299) != (*p_31)) || p_2554->g_230[2]) >= p_2554->g_232[5]))), 0x68662834L))))));
                }
                else
                { /* block id: 112 */
                    uint64_t l_305 = 0UL;
                    for (p_2554->g_160 = 1; (p_2554->g_160 >= 21); ++p_2554->g_160)
                    { /* block id: 115 */
                        (1 + 1);
                    }
                    l_304 ^= (p_32 == (safe_add_func_int32_t_s_s((*p_31), l_313)));
                }
                p_31 = ((*p_2554->g_169) = func_44(&l_304, ((p_30 , 18446744073709551614UL) , ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 != l_318), (*p_31))), (l_319 ^= 0L))) >= (~(p_2554->g_322 < 0L)))), (*l_125), (*l_125), (*l_145), p_2554));
            }
        }
    }
    p_31 = p_31;
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_33(uint8_t  p_34, int8_t  p_35, uint32_t  p_36, int32_t * p_37, struct S0 * p_2554)
{ /* block id: 24 */
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_6
 * writes:
 */
int8_t  func_40(int32_t * p_41, int32_t * p_42, int32_t * p_43, struct S0 * p_2554)
{ /* block id: 22 */
    return p_2554->g_6[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2554->g_4 p_2554->g_6 p_2554->g_67
 * writes: p_2554->g_82
 */
int32_t * func_44(int32_t * p_45, uint8_t  p_46, uint32_t  p_47, int32_t  p_48, int8_t  p_49, struct S0 * p_2554)
{ /* block id: 14 */
    int32_t l_58[3];
    int32_t *l_59 = &p_2554->g_4;
    int8_t l_68 = (-7L);
    int i;
    for (i = 0; i < 3; i++)
        l_58[i] = (-1L);
    for (p_46 = 0; (p_46 <= 2); p_46 += 1)
    { /* block id: 17 */
        int64_t *l_66[1];
        int32_t *l_81 = &p_2554->g_82;
        int i;
        for (i = 0; i < 1; i++)
            l_66[i] = &p_2554->g_67;
        (*l_81) = ((l_59 != ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((+((l_68 = 0L) >= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(l_58[p_46], (safe_add_func_int64_t_s_s(((l_59 == ((((~(!0x0F575434BB1B2B15L)) & (l_58[p_46] ^ (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(l_58[p_46], (safe_lshift_func_int16_t_s_s((((!(*l_59)) != p_2554->g_4) <= p_2554->g_6[1]), p_2554->g_6[4])))) <= 248UL), 0x18DE77BFL)))) | l_58[p_46]) , &p_48)) == p_2554->g_67), (*l_59))))) , p_2554->g_67), 0x5EL)))), 3)) != p_2554->g_4), (*l_59))) , 0L), p_2554->g_4)) , l_59)) , 0x3FCFF147L);
    }
    return l_59;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2555;
    struct S0* p_2554 = &c_2555;
    struct S0 c_2556 = {
        0x6E5C7A00L, // p_2554->g_3
        (-1L), // p_2554->g_4
        0x572276B8L, // p_2554->g_5
        {0x7A516694L,0x7A516694L,0x7A516694L,0x7A516694L,0x7A516694L,0x7A516694L,0x7A516694L,0x7A516694L}, // p_2554->g_6
        0x418CC907F7A796FBL, // p_2554->g_67
        0x325A4489L, // p_2554->g_82
        246UL, // p_2554->g_95
        {{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL},{0x2056F02031241CAEL,0x2056F02031241CAEL,18446744073709551615UL,0x86803F40BDE86D36L,2UL,0xA3D5FEEC887C424AL,18446744073709551610UL,1UL}}, // p_2554->g_117
        0UL, // p_2554->g_128
        3UL, // p_2554->g_132
        (-4L), // p_2554->g_158
        0x1868L, // p_2554->g_160
        0UL, // p_2554->g_162
        0x98293F6A8FE63917L, // p_2554->g_163
        {{&p_2554->g_4,&p_2554->g_6[1],&p_2554->g_6[0],&p_2554->g_6[1],&p_2554->g_6[1],&p_2554->g_6[1]},{&p_2554->g_4,&p_2554->g_6[1],&p_2554->g_6[0],&p_2554->g_6[1],&p_2554->g_6[1],&p_2554->g_6[1]},{&p_2554->g_4,&p_2554->g_6[1],&p_2554->g_6[0],&p_2554->g_6[1],&p_2554->g_6[1],&p_2554->g_6[1]},{&p_2554->g_4,&p_2554->g_6[1],&p_2554->g_6[0],&p_2554->g_6[1],&p_2554->g_6[1],&p_2554->g_6[1]},{&p_2554->g_4,&p_2554->g_6[1],&p_2554->g_6[0],&p_2554->g_6[1],&p_2554->g_6[1],&p_2554->g_6[1]}}, // p_2554->g_170
        &p_2554->g_170[1][5], // p_2554->g_169
        0x54A1D4D89940A854L, // p_2554->g_182
        0xC970L, // p_2554->g_191
        0x6C21901EL, // p_2554->g_193
        {1L,1L,1L}, // p_2554->g_230
        {0xE049319BL,0xE049319BL,0xE049319BL,0xE049319BL,0xE049319BL,0xE049319BL,0xE049319BL}, // p_2554->g_232
        0x68L, // p_2554->g_288
        0x0BCAD3E5L, // p_2554->g_322
        0x46L, // p_2554->g_339
        &p_2554->g_5, // p_2554->g_343
        &p_2554->g_343, // p_2554->g_342
        1L, // p_2554->g_392
        &p_2554->g_392, // p_2554->g_391
        {&p_2554->g_391,&p_2554->g_391}, // p_2554->g_390
        &p_2554->g_390[1], // p_2554->g_389
        (void*)0, // p_2554->g_440
        0x0BF30543L, // p_2554->g_459
        &p_2554->g_459, // p_2554->g_458
        &p_2554->g_458, // p_2554->g_457
        &p_2554->g_170[1][5], // p_2554->g_531
        {5L,5L}, // p_2554->g_593
        0x083864CBL, // p_2554->g_600
        (void*)0, // p_2554->g_603
        (void*)0, // p_2554->g_608
        &p_2554->g_608, // p_2554->g_607
        {&p_2554->g_170[4][5],&p_2554->g_170[4][5],&p_2554->g_170[4][5],&p_2554->g_170[4][5]}, // p_2554->g_614
        (void*)0, // p_2554->g_647
        &p_2554->g_647, // p_2554->g_646
        {0UL,0UL}, // p_2554->g_710
        1UL, // p_2554->g_714
        0L, // p_2554->g_750
        &p_2554->g_750, // p_2554->g_749
        0x5E6DL, // p_2554->g_759
        0x73254C06L, // p_2554->g_783
        &p_2554->g_6[7], // p_2554->g_795
        0x03L, // p_2554->g_833
        &p_2554->g_95, // p_2554->g_847
        {0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL,0x365C3274C42FD6BEL}, // p_2554->g_877
        0x1653BD308C3FDD73L, // p_2554->g_916
        &p_2554->g_170[3][3], // p_2554->g_962
        (void*)0, // p_2554->g_983
        &p_2554->g_795, // p_2554->g_1053
        &p_2554->g_170[1][5], // p_2554->g_1078
        1UL, // p_2554->g_1143
        {&p_2554->g_160,&p_2554->g_160,&p_2554->g_160,&p_2554->g_160}, // p_2554->g_1174
        &p_2554->g_82, // p_2554->g_1176
        18446744073709551615UL, // p_2554->g_1194
        0x5ECEFDFEL, // p_2554->g_1256
        &p_2554->g_749, // p_2554->g_1270
        &p_2554->g_1270, // p_2554->g_1269
        (void*)0, // p_2554->g_1326
        &p_2554->g_232[5], // p_2554->g_1336
        &p_2554->g_3, // p_2554->g_1365
        &p_2554->g_458, // p_2554->g_1366
        {{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}},{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}},{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}},{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}},{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}},{{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL},{0x31364DC1L,0x435BB2B5L,1UL,3UL,0x3B7A251FL,0xC5F5CC12L,0x1D7D7FC9L,0x9BA2DA1FL}}}, // p_2554->g_1507
        0x113D78216C78412DL, // p_2554->g_1508
        4294967295UL, // p_2554->g_1564
        {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_2554->g_1565
        {{{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339}},{{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339}},{{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339}},{{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339},{&p_2554->g_750,(void*)0,&p_2554->g_339,&p_2554->g_339,&p_2554->g_833,&p_2554->g_339}}}, // p_2554->g_1690
        &p_2554->g_795, // p_2554->g_1725
        65530UL, // p_2554->g_1759
        {{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}}, // p_2554->g_1766
        0x5B8BFD48L, // p_2554->g_1808
        0x0DB53E11L, // p_2554->g_1833
        (void*)0, // p_2554->g_1860
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2554->g_1889
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_2554->g_1899
        0x96D8L, // p_2554->g_1940
        {{{&p_2554->g_1940,&p_2554->g_1940,&p_2554->g_1940}},{{&p_2554->g_1940,&p_2554->g_1940,&p_2554->g_1940}},{{&p_2554->g_1940,&p_2554->g_1940,&p_2554->g_1940}}}, // p_2554->g_1939
        {{&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2],&p_2554->g_1939[1][0][1],&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2],&p_2554->g_1939[1][0][1],&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2]},{&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2],&p_2554->g_1939[1][0][1],&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2],&p_2554->g_1939[1][0][1],&p_2554->g_1939[1][0][1],&p_2554->g_1939[2][0][2]}}, // p_2554->g_1938
        0x65L, // p_2554->g_1990
        (void*)0, // p_2554->g_2015
        &p_2554->g_2015, // p_2554->g_2014
        {{&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014,&p_2554->g_2014}}, // p_2554->g_2013
        {0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L,0x39548D23FD9E97A5L}, // p_2554->g_2023
        0x6EF9E1F3EC339FB8L, // p_2554->g_2087
        (void*)0, // p_2554->g_2100
        1L, // p_2554->g_2202
        {&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202,&p_2554->g_2202}, // p_2554->g_2201
        &p_2554->g_2201[7], // p_2554->g_2200
        &p_2554->g_2200, // p_2554->g_2199
        &p_2554->g_2199, // p_2554->g_2198
        {&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198,&p_2554->g_2198}, // p_2554->g_2197
        &p_2554->g_783, // p_2554->g_2245
        &p_2554->g_2245, // p_2554->g_2244
        &p_2554->g_193, // p_2554->g_2259
        &p_2554->g_2259, // p_2554->g_2258
        &p_2554->g_1269, // p_2554->g_2273
        {{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}},{{&p_2554->g_2273,(void*)0,&p_2554->g_2273,&p_2554->g_2273,&p_2554->g_2273}}}, // p_2554->g_2272
        1L, // p_2554->g_2409
        6L, // p_2554->g_2414
        (void*)0, // p_2554->g_2483
        8UL, // p_2554->g_2490
        4294967289UL, // p_2554->g_2515
        0xE7L, // p_2554->g_2516
        &p_2554->g_390[0], // p_2554->g_2531
        &p_2554->g_2531, // p_2554->g_2530
        &p_2554->g_2530, // p_2554->g_2529
        0UL, // p_2554->g_2553
    };
    c_2555 = c_2556;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2554);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2554->g_3, "p_2554->g_3", print_hash_value);
    transparent_crc(p_2554->g_4, "p_2554->g_4", print_hash_value);
    transparent_crc(p_2554->g_5, "p_2554->g_5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2554->g_6[i], "p_2554->g_6[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_67, "p_2554->g_67", print_hash_value);
    transparent_crc(p_2554->g_82, "p_2554->g_82", print_hash_value);
    transparent_crc(p_2554->g_95, "p_2554->g_95", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_2554->g_117[i][j], "p_2554->g_117[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2554->g_128, "p_2554->g_128", print_hash_value);
    transparent_crc(p_2554->g_132, "p_2554->g_132", print_hash_value);
    transparent_crc(p_2554->g_158, "p_2554->g_158", print_hash_value);
    transparent_crc(p_2554->g_160, "p_2554->g_160", print_hash_value);
    transparent_crc(p_2554->g_162, "p_2554->g_162", print_hash_value);
    transparent_crc(p_2554->g_163, "p_2554->g_163", print_hash_value);
    transparent_crc(p_2554->g_182, "p_2554->g_182", print_hash_value);
    transparent_crc(p_2554->g_191, "p_2554->g_191", print_hash_value);
    transparent_crc(p_2554->g_193, "p_2554->g_193", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2554->g_230[i], "p_2554->g_230[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2554->g_232[i], "p_2554->g_232[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_288, "p_2554->g_288", print_hash_value);
    transparent_crc(p_2554->g_322, "p_2554->g_322", print_hash_value);
    transparent_crc(p_2554->g_339, "p_2554->g_339", print_hash_value);
    transparent_crc(p_2554->g_392, "p_2554->g_392", print_hash_value);
    transparent_crc(p_2554->g_459, "p_2554->g_459", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2554->g_593[i], "p_2554->g_593[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_600, "p_2554->g_600", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2554->g_710[i], "p_2554->g_710[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_714, "p_2554->g_714", print_hash_value);
    transparent_crc(p_2554->g_750, "p_2554->g_750", print_hash_value);
    transparent_crc(p_2554->g_759, "p_2554->g_759", print_hash_value);
    transparent_crc(p_2554->g_783, "p_2554->g_783", print_hash_value);
    transparent_crc(p_2554->g_833, "p_2554->g_833", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2554->g_877[i], "p_2554->g_877[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_916, "p_2554->g_916", print_hash_value);
    transparent_crc(p_2554->g_1143, "p_2554->g_1143", print_hash_value);
    transparent_crc(p_2554->g_1194, "p_2554->g_1194", print_hash_value);
    transparent_crc(p_2554->g_1256, "p_2554->g_1256", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2554->g_1507[i][j][k], "p_2554->g_1507[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2554->g_1508, "p_2554->g_1508", print_hash_value);
    transparent_crc(p_2554->g_1564, "p_2554->g_1564", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2554->g_1565[i], "p_2554->g_1565[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_1759, "p_2554->g_1759", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2554->g_1766[i][j], "p_2554->g_1766[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2554->g_1808, "p_2554->g_1808", print_hash_value);
    transparent_crc(p_2554->g_1833, "p_2554->g_1833", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2554->g_1899[i], "p_2554->g_1899[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_1940, "p_2554->g_1940", print_hash_value);
    transparent_crc(p_2554->g_1990, "p_2554->g_1990", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2554->g_2023[i], "p_2554->g_2023[i]", print_hash_value);

    }
    transparent_crc(p_2554->g_2087, "p_2554->g_2087", print_hash_value);
    transparent_crc(p_2554->g_2202, "p_2554->g_2202", print_hash_value);
    transparent_crc(p_2554->g_2409, "p_2554->g_2409", print_hash_value);
    transparent_crc(p_2554->g_2414, "p_2554->g_2414", print_hash_value);
    transparent_crc(p_2554->g_2490, "p_2554->g_2490", print_hash_value);
    transparent_crc(p_2554->g_2515, "p_2554->g_2515", print_hash_value);
    transparent_crc(p_2554->g_2516, "p_2554->g_2516", print_hash_value);
    transparent_crc(p_2554->g_2553, "p_2554->g_2553", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
