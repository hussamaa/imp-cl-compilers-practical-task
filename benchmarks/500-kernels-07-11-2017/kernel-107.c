// -g 96,66,1 -l 4,22,1
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


// Seed: 2206677330

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   volatile int64_t  f3;
   int8_t * volatile  f4;
};

union U1 {
   volatile int64_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
   int8_t  f3;
   int16_t  f4;
};

union U2 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
   int8_t * volatile  f4;
};

union U3 {
   int8_t  f0;
};

struct S4 {
    int32_t g_12;
    int8_t g_19;
    int8_t *g_18;
    union U3 g_59;
    int32_t g_69;
    int32_t g_77;
    int32_t *g_76;
    uint16_t g_87;
    union U1 g_99;
    union U1 g_103[9];
    uint64_t g_110;
    uint32_t g_114;
    uint16_t g_120;
    int32_t g_124;
    int32_t g_126;
    int16_t g_140[8];
    int64_t g_143;
    volatile uint8_t g_146;
    union U2 g_168;
    int8_t *g_173;
    union U0 g_201;
    union U0 *g_202;
    int32_t ** volatile g_203;
    uint32_t *g_205;
    uint32_t **g_204;
    uint32_t **g_207;
    uint16_t *g_227[1];
    volatile union U2 g_239;
    union U2 g_241;
    int32_t ** volatile g_243;
    int32_t ** volatile g_246;
    uint16_t * volatile g_271;
    uint8_t g_339;
    int8_t g_343;
    uint16_t **g_392;
    uint16_t ***g_391;
    uint32_t g_420;
    int32_t *g_426;
    int8_t **g_435;
    int8_t *** volatile g_434[4][4][5];
    volatile union U2 g_447;
    int64_t g_489[4][7][1];
    int32_t ** volatile g_493;
    volatile union U0 g_511;
    int64_t g_512;
    volatile union U2 g_543[3];
    uint8_t **g_548[7];
    int16_t g_617;
    int8_t g_630;
    uint32_t g_631;
    uint8_t g_656;
    volatile uint8_t g_667;
    int32_t g_711;
    uint8_t g_712;
    union U0 g_734;
    uint64_t g_758[7][1];
    int32_t g_761;
    union U0 *g_777[7];
    volatile union U0 g_788[7][4][7];
    union U0 g_791;
    volatile union U2 g_798;
    int32_t **g_801;
    int8_t g_846;
    volatile uint32_t *g_892;
    volatile uint32_t ** volatile g_891;
    volatile uint32_t ** volatile *g_890[7];
    volatile uint32_t ** volatile * volatile * volatile g_889;
    int64_t g_933;
    volatile union U0 g_948;
    uint32_t ***g_959;
    int32_t **g_967;
    int32_t *** volatile g_966;
    volatile union U0 *g_1036;
    volatile union U0 * volatile * volatile g_1035;
    volatile union U0 * volatile * volatile *g_1034;
    union U0 **g_1092;
    union U0 **g_1093;
    uint64_t g_1114[4][6];
    int32_t * volatile g_1169;
    volatile int16_t g_1177[9][9][3];
    int32_t * volatile g_1214;
    union U1 *g_1223[3][6][3];
    union U1 * volatile * volatile g_1222;
    uint16_t g_1226;
    union U1 * volatile * volatile g_1263;
    volatile int32_t g_1271;
    volatile int8_t g_1272;
    volatile int64_t g_1273;
    uint8_t g_1274;
    volatile union U2 g_1283;
    int32_t ** volatile g_1292[6];
    int32_t ** volatile g_1293[8][10];
    int32_t ** volatile g_1294[9];
    union U0 g_1311;
    volatile uint16_t g_1381;
    volatile uint16_t * volatile g_1380;
    volatile uint16_t * volatile *g_1379;
    volatile uint16_t * volatile * volatile * volatile g_1378;
    union U2 g_1393;
    union U2 g_1395;
    volatile uint64_t ** volatile g_1437;
    int32_t *g_1471;
    int32_t g_1476[4];
    uint64_t *g_1484;
    volatile uint8_t g_1491;
    uint8_t g_1527;
    int32_t ** volatile g_1528[6];
    int32_t ** volatile g_1529;
    volatile union U0 g_1584;
    int32_t ** volatile g_1601;
    int32_t ** volatile g_1602[2][10][9];
    int32_t ** volatile g_1603;
    int8_t ***g_1614;
    volatile union U0 g_1615;
    union U2 g_1683;
    volatile union U0 ** volatile g_1692[7];
    volatile union U0 g_1697;
    union U0 g_1713;
    volatile union U0 g_1717[3];
    union U1 g_1784[7];
    union U2 g_1797;
    union U2 g_1800;
    union U2 *g_1799;
    int32_t * volatile *g_1816;
    int32_t * volatile **g_1815;
    int32_t * volatile ** volatile *g_1814[5];
    uint32_t g_1869;
    volatile union U1 g_1891;
    int32_t * volatile g_1920[2][5][9];
    int32_t * volatile g_1921;
    union U1 g_1954;
    union U0 g_1966;
    union U2 g_1969;
    int32_t * volatile g_1978;
    int32_t ****g_1979;
    volatile union U1 g_2042;
    union U1 g_2074;
    int32_t * volatile g_2077;
    union U3 *g_2080;
    union U0 g_2094;
    union U1 g_2099[6];
    union U0 g_2139;
    union U2 **g_2172;
    union U2 ***g_2171[9];
    union U0 g_2177;
    int8_t *g_2185;
    uint32_t g_2243;
    int32_t ***g_2311;
    int32_t ****g_2310;
    union U1 g_2318;
    union U0 g_2328[3][5];
    int8_t g_2345;
    int32_t g_2359[1];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S4 * p_2362);
uint16_t  func_7(uint16_t  p_8, int8_t * p_9, int8_t  p_10, uint16_t  p_11, struct S4 * p_2362);
int8_t * func_13(int8_t * p_14, uint32_t  p_15, uint64_t  p_16, int32_t  p_17, struct S4 * p_2362);
uint8_t  func_20(int8_t * p_21, struct S4 * p_2362);
int8_t * func_22(uint16_t  p_23, int8_t * p_24, uint16_t  p_25, int64_t  p_26, int32_t  p_27, struct S4 * p_2362);
uint16_t  func_28(uint8_t  p_29, int8_t  p_30, int64_t  p_31, int8_t * p_32, uint64_t  p_33, struct S4 * p_2362);
int16_t  func_36(int16_t  p_37, uint8_t  p_38, int8_t * p_39, uint8_t  p_40, int32_t  p_41, struct S4 * p_2362);
int32_t * func_42(uint32_t  p_43, int32_t * p_44, int8_t * p_45, int64_t  p_46, int32_t  p_47, struct S4 * p_2362);
int32_t * func_48(uint64_t  p_49, int8_t * p_50, int8_t * p_51, int32_t * p_52, struct S4 * p_2362);
uint32_t  func_55(int8_t * p_56, union U3  p_57, struct S4 * p_2362);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2362->g_12 p_2362->g_18 p_2362->g_19 p_2362->g_59 p_2362->g_59.f0 p_2362->g_76 p_2362->g_77 p_2362->g_69 p_2362->g_99 p_2362->g_87 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_126 p_2362->g_146 p_2362->g_168 p_2362->g_140 p_2362->g_173 p_2362->g_203 p_2362->g_204 p_2362->g_631 p_2362->g_143 p_2362->g_339 p_2362->g_447.f0 p_2362->g_205 p_2362->g_243 p_2362->g_656 p_2362->g_667 p_2362->g_617 p_2362->g_712 p_2362->g_435 p_2362->g_734 p_2362->g_202 p_2362->g_201 p_2362->g_391 p_2362->g_241.f0 p_2362->g_227 p_2362->g_543.f0 p_2362->g_246 p_2362->g_788 p_2362->g_791 p_2362->g_798 p_2362->g_489 p_2362->g_758 p_2362->g_801 p_2362->g_511.f0 p_2362->g_846 p_2362->g_343 p_2362->g_630 p_2362->g_124 p_2362->g_889 p_2362->g_791.f0 p_2362->g_761 p_2362->g_948 p_2362->g_966 p_2362->g_711 p_2362->g_967 p_2362->g_239.f0 p_2362->g_99.f4 p_2362->g_271 p_2362->g_512 p_2362->g_1034 p_2362->g_168.f0 p_2362->g_99.f3 p_2362->g_1114 p_2362->g_99.f2 p_2362->g_241.f2 p_2362->g_1214 p_2362->g_1035 p_2362->g_1036 p_2362->g_511 p_2362->g_1222 p_2362->g_1226 p_2362->g_1223 p_2362->g_1274 p_2362->g_1379 p_2362->g_1380 p_2362->g_1381 p_2362->g_1814 p_2362->g_1378 p_2362->g_1476 p_2362->g_1869 p_2362->g_1891 p_2362->g_1921 p_2362->g_1527 p_2362->g_1273 p_2362->g_1816 p_2362->g_1954 p_2362->g_1966 p_2362->g_1815 p_2362->g_1393.f0 p_2362->g_1978 p_2362->g_1979 p_2362->g_1966.f0 p_2362->g_933 p_2362->g_1491 p_2362->g_1969.f0 p_2362->g_2042 p_2362->g_543 p_2362->g_1697.f0 p_2362->g_2074 p_2362->g_1272 p_2362->g_2077 p_2362->g_2094 p_2362->g_2099 p_2362->g_1799 p_2362->g_1800 p_2362->g_1683.f2 p_2362->g_2243 p_2362->g_1169 p_2362->g_1484 p_2362->g_420 p_2362->g_2318 p_2362->g_2328 p_2362->g_1311.f2 p_2362->g_1177 p_2362->g_2074.f3 p_2362->g_2359
 * writes: p_2362->g_59.f0 p_2362->g_69 p_2362->g_87 p_2362->g_77 p_2362->g_19 p_2362->g_103 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_124 p_2362->g_126 p_2362->g_146 p_2362->g_173 p_2362->g_99.f2 p_2362->g_140 p_2362->g_202 p_2362->g_76 p_2362->g_204 p_2362->g_207 p_2362->g_631 p_2362->g_339 p_2362->g_656 p_2362->g_143 p_2362->g_512 p_2362->g_99.f4 p_2362->g_205 p_2362->g_712 p_2362->g_761 p_2362->g_392 p_2362->g_777 p_2362->g_801 p_2362->g_617 p_2362->g_630 p_2362->g_241.f0 p_2362->g_959 p_2362->g_967 p_2362->g_711 p_2362->g_59 p_2362->g_1092 p_2362->g_1093 p_2362->g_201.f2 p_2362->g_99.f3 p_2362->g_241.f2 p_2362->g_1274 p_2362->g_1784.f4 p_2362->g_18 p_2362->g_1393.f0 p_2362->g_846 p_2362->g_1869 p_2362->g_548 p_2362->g_1527 p_2362->g_343 p_2362->g_933 p_2362->g_1169 p_2362->g_1799 p_2362->g_1979 p_2362->g_1395.f0 p_2362->g_2080 p_2362->g_1683.f2 p_2362->g_1954.f2 p_2362->g_1476 p_2362->g_1683.f0 p_2362->g_1036 p_2362->g_1226 p_2362->g_2243 p_2362->g_1311.f2 p_2362->g_2099.f4 p_2362->g_2310 p_2362->g_420 p_2362->g_2074.f3
 */
uint16_t  func_1(struct S4 * p_2362)
{ /* block id: 4 */
    int8_t l_2 = 0x04L;
    int16_t l_914 = 0x42E2L;
    uint8_t *l_915[1][7][7] = {{{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2362->g_656,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_916 = 8L;
    int8_t l_917 = 0x2DL;
    int32_t *l_2360 = &p_2362->g_1797.f2;
    int32_t l_2361[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2361[i] = 0x5713EDC5L;
    l_2361[3] |= (((l_2 < (safe_sub_func_uint16_t_u_u(l_2, (l_2 | (((safe_mod_func_uint16_t_u_u(func_7(p_2362->g_12, func_13(p_2362->g_18, (func_20(func_22((+p_2362->g_12), &p_2362->g_19, func_28((l_916 = (safe_add_func_int16_t_s_s(func_36(((p_2362->g_19 , (((void*)0 == &l_2) <= p_2362->g_12)) | p_2362->g_19), l_2, &p_2362->g_19, l_2, p_2362->g_12, p_2362), l_914))), l_2, p_2362->g_846, &l_2, l_917, p_2362), l_2, p_2362->g_758[2][0], p_2362), p_2362) != l_2), p_2362->g_168.f0, p_2362->g_343, p_2362), l_2, l_917, p_2362), 4L)) , (-1L)) && 0x95L))))) ^ l_917) , l_916);
    (*p_2362->g_1816) = &l_2361[3];
    return l_916;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_512 p_2362->g_1035 p_2362->g_1036 p_2362->g_1034 p_2362->g_1815 p_2362->g_1816 p_2362->g_712 p_2362->g_2243 p_2362->g_19 p_2362->g_77 p_2362->g_1169 p_2362->g_1969.f0 p_2362->g_339 p_2362->g_1484 p_2362->g_1527 p_2362->g_420 p_2362->g_2318 p_2362->g_2328 p_2362->g_1380 p_2362->g_1381 p_2362->g_1311.f2 p_2362->g_87 p_2362->g_1226 p_2362->g_1177 p_2362->g_2074.f3 p_2362->g_2359
 * writes: p_2362->g_512 p_2362->g_1036 p_2362->g_1226 p_2362->g_1169 p_2362->g_2243 p_2362->g_19 p_2362->g_1311.f2 p_2362->g_2099.f4 p_2362->g_2310 p_2362->g_77 p_2362->g_420 p_2362->g_143 p_2362->g_87 p_2362->g_2074.f3 p_2362->g_140
 */
uint16_t  func_7(uint16_t  p_8, int8_t * p_9, int8_t  p_10, uint16_t  p_11, struct S4 * p_2362)
{ /* block id: 1067 */
    int32_t *l_2238 = &p_2362->g_77;
    uint64_t *l_2252 = &p_2362->g_758[2][0];
    int32_t ***l_2308 = &p_2362->g_967;
    int32_t ****l_2307[10] = {(void*)0,&l_2308,&l_2308,&l_2308,(void*)0,(void*)0,&l_2308,&l_2308,&l_2308,(void*)0};
    int32_t *****l_2312 = (void*)0;
    int32_t *****l_2314 = (void*)0;
    int64_t l_2333[1];
    int32_t l_2343 = 1L;
    int32_t l_2344[6] = {0x0D13D5EFL,0x0D13D5EFL,0x0D13D5EFL,0x0D13D5EFL,0x0D13D5EFL,0x0D13D5EFL};
    int32_t l_2350 = (-1L);
    int32_t l_2351 = 0x58A4525AL;
    int i;
    for (i = 0; i < 1; i++)
        l_2333[i] = 1L;
    for (p_2362->g_512 = 2; (p_2362->g_512 <= 6); p_2362->g_512 += 1)
    { /* block id: 1070 */
        uint32_t **l_2262 = &p_2362->g_205;
        int32_t l_2281 = 0x1ECA2F01L;
        uint8_t l_2315 = 3UL;
        union U3 l_2329 = {0x2CL};
        uint32_t ****l_2332 = &p_2362->g_959;
        int32_t l_2349 = 0L;
        (**p_2362->g_1034) = (*p_2362->g_1035);
        for (p_2362->g_1226 = 0; (p_2362->g_1226 <= 2); p_2362->g_1226 += 1)
        { /* block id: 1074 */
            uint8_t l_2241 = 0x33L;
            uint32_t *l_2242 = &p_2362->g_2243;
            uint8_t **l_2248 = (void*)0;
            uint8_t *l_2250 = &p_2362->g_712;
            uint8_t **l_2249 = &l_2250;
            uint8_t *l_2251 = &p_2362->g_712;
            int32_t l_2295 = 9L;
            int32_t l_2296 = 0x7102FCD5L;
            int32_t l_2352 = 0x0E537422L;
            (**p_2362->g_1815) = (l_2238 = l_2238);
            if ((6UL & (p_2362->g_712 , (safe_lshift_func_uint16_t_u_u(l_2241, ((++(*l_2242)) , (safe_lshift_func_int8_t_s_s((((*l_2249) = p_9) != (l_2251 = p_9)), ((void*)0 == l_2252)))))))))
            { /* block id: 1080 */
                uint8_t **l_2255 = &l_2251;
                int32_t **l_2272[9][9] = {{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471},{&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,(void*)0,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471,&p_2362->g_1471}};
                int32_t ***l_2271 = &l_2272[5][0];
                int32_t l_2294 = (-8L);
                int16_t *l_2303 = &p_2362->g_2099[4].f4;
                int32_t ****l_2306 = (void*)0;
                int32_t *****l_2309 = &l_2307[7];
                int32_t ******l_2313 = &l_2312;
                uint32_t *l_2317 = &p_2362->g_420;
                union U3 l_2319 = {0x1CL};
                union U3 *l_2330 = (void*)0;
                union U3 *l_2331 = &l_2319;
                int64_t *l_2334 = &p_2362->g_143;
                int i, j;
                for (p_11 = 0; (p_11 <= 2); p_11 += 1)
                { /* block id: 1083 */
                    uint8_t **l_2257 = &l_2251;
                    for (p_2362->g_19 = 3; (p_2362->g_19 >= 0); p_2362->g_19 -= 1)
                    { /* block id: 1086 */
                        uint8_t ***l_2256 = &l_2249;
                        uint8_t ***l_2258 = &l_2248;
                        uint32_t **l_2261 = &p_2362->g_205;
                        int32_t ***l_2264 = &p_2362->g_967;
                        int32_t ****l_2263[4][7] = {{&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264},{&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264},{&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264},{&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264,&l_2264}};
                        int i, j, k;
                        (1 + 1);
                    }
                }
                l_2296 |= (safe_mod_func_int16_t_s_s((((((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((((*l_2271) = &p_2362->g_1471) == &p_2362->g_1471) < (safe_mod_func_int32_t_s_s(((0x9946C551L <= (safe_div_func_int16_t_s_s(((p_8 < ((p_10 > (safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u(((!(l_2294 = ((l_2281 < (((safe_add_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-9L), ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((*p_9) , (safe_rshift_func_uint16_t_u_u((l_2238 == l_2238), 14))), 4)), (*l_2238))) > 0x0C4F71C1L))), (*p_9))) >= p_10) && l_2294), 0x18L)) & l_2281) ^ (**p_2362->g_1816))) != p_8))) , p_10), 8)) >= l_2295) ^ p_10) < 6UL), p_2362->g_1969.f0))) <= 0xBFDF757BL)) && p_10), 0x7313L))) ^ 0x6634B272L), p_10))), p_11)), l_2281)) | 0x8067CD44L) || p_10) | 1L) && (*p_9)), 1L));
                if ((((safe_lshift_func_int16_t_s_u((((((((((*l_2303) = (p_10 & (((*p_2362->g_1484) = p_2362->g_339) <= (safe_mod_func_uint64_t_u_u(l_2296, p_2362->g_1527))))) < (l_2281 |= (((safe_div_func_uint8_t_u_u((p_11 , (l_2306 != (p_2362->g_2310 = ((*l_2309) = l_2307[7])))), p_10)) & (((*l_2313) = l_2312) == l_2314)) & p_8))) >= 18446744073709551615UL) ^ l_2241) == l_2294) != l_2315) , 0xA2L) & (*p_9)), 0)) | 0L) , l_2241))
                { /* block id: 1106 */
                    uint8_t l_2316 = 0x50L;
                    (**p_2362->g_1815) = &l_2296;
                    (*l_2238) = 1L;
                    if (l_2316)
                        continue;
                }
                else
                { /* block id: 1110 */
                    return p_8;
                }
                (*l_2238) &= ((((*l_2317) &= l_2281) < (((p_2362->g_2318 , 0x3FL) || (((l_2319 = l_2319) , (((*l_2334) = (p_11 >= ((***p_2362->g_1815) = ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_u((((p_2362->g_2328[1][4] , (((*l_2331) = l_2329) , l_2332)) != &p_2362->g_890[3]) , l_2329.f0), 14)))) , l_2333[0]), l_2241)))), 5)) | (-10L))))) ^ (-1L))) || (*p_2362->g_1380))) & p_11)) > (*p_2362->g_1484));
            }
            else
            { /* block id: 1119 */
                uint32_t l_2335 = 0xCD7632F3L;
                int32_t l_2336 = 2L;
                int32_t l_2337 = 0x3757B282L;
                int32_t l_2346 = (-3L);
                int32_t l_2347 = (-1L);
                int32_t l_2348[8] = {0x6A115675L,0x7E3FCEFBL,0x6A115675L,0x6A115675L,0x7E3FCEFBL,0x6A115675L,0x6A115675L,0x7E3FCEFBL};
                int i;
                (**p_2362->g_1815) = &l_2281;
                if (l_2335)
                    break;
                for (p_2362->g_87 = 0; (p_2362->g_87 <= 2); p_2362->g_87 += 1)
                { /* block id: 1124 */
                    int i, j, k;
                    if (p_2362->g_1177[(p_2362->g_87 + 1)][(p_2362->g_1226 + 2)][p_2362->g_87])
                        break;
                    if (p_2362->g_1177[(p_2362->g_87 + 4)][(p_2362->g_87 + 4)][p_2362->g_87])
                        break;
                }
                for (l_2315 = 0; (l_2315 <= 6); l_2315 += 1)
                { /* block id: 1130 */
                    int32_t *l_2338 = &p_2362->g_1393.f0;
                    int32_t *l_2339 = &p_2362->g_1395.f2;
                    int32_t *l_2340 = &p_2362->g_168.f0;
                    int32_t *l_2341 = &p_2362->g_1395.f0;
                    int32_t *l_2342[6][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    uint16_t l_2353[7][8];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_2353[i][j] = 65535UL;
                    }
                    l_2353[1][3]--;
                }
            }
            (*p_2362->g_1816) = &l_2344[5];
        }
        for (p_2362->g_2074.f3 = 6; (p_2362->g_2074.f3 >= 0); p_2362->g_2074.f3 -= 1)
        { /* block id: 1138 */
            uint64_t l_2356 = 8UL;
            (**p_2362->g_1815) = &l_2349;
            l_2356++;
            if (p_10)
                break;
            (*l_2238) |= (p_11 == (p_2362->g_140[2] = p_2362->g_87));
        }
        (*l_2238) = ((*p_9) == l_2329.f0);
    }
    return p_2362->g_2359[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_1379 p_2362->g_1380 p_2362->g_1381 p_2362->g_140 p_2362->g_1814 p_2362->g_339 p_2362->g_1378 p_2362->g_1476 p_2362->g_19 p_2362->g_435 p_2362->g_617 p_2362->g_1869 p_2362->g_447.f0 p_2362->g_761 p_2362->g_1891 p_2362->g_124 p_2362->g_69 p_2362->g_173 p_2362->g_77 p_2362->g_1921 p_2362->g_1527 p_2362->g_18 p_2362->g_1114 p_2362->g_1273 p_2362->g_343 p_2362->g_1816 p_2362->g_1954 p_2362->g_59.f0 p_2362->g_1966 p_2362->g_99.f4 p_2362->g_1815 p_2362->g_1393.f0 p_2362->g_1978 p_2362->g_1979 p_2362->g_1966.f0 p_2362->g_227 p_2362->g_933 p_2362->g_1491 p_2362->g_1969.f0 p_2362->g_1222 p_2362->g_1223 p_2362->g_2042 p_2362->g_512 p_2362->g_543 p_2362->g_1697.f0 p_2362->g_846 p_2362->g_1274 p_2362->g_2074 p_2362->g_1272 p_2362->g_2077 p_2362->g_2094 p_2362->g_2099 p_2362->g_1799 p_2362->g_1800 p_2362->g_656 p_2362->g_1683.f2 p_2362->g_168.f0 p_2362->g_667 p_2362->g_246 p_2362->g_76 p_2362->g_114 p_2362->g_967 p_2362->g_966 p_2362->g_99.f2
 * writes: p_2362->g_1784.f4 p_2362->g_140 p_2362->g_99.f4 p_2362->g_173 p_2362->g_18 p_2362->g_19 p_2362->g_1393.f0 p_2362->g_846 p_2362->g_1869 p_2362->g_548 p_2362->g_1527 p_2362->g_343 p_2362->g_933 p_2362->g_1169 p_2362->g_512 p_2362->g_1799 p_2362->g_241.f0 p_2362->g_1979 p_2362->g_87 p_2362->g_339 p_2362->g_631 p_2362->g_59.f0 p_2362->g_143 p_2362->g_1395.f0 p_2362->g_2080 p_2362->g_99.f2 p_2362->g_1683.f2 p_2362->g_1954.f2 p_2362->g_656 p_2362->g_1274 p_2362->g_1476 p_2362->g_1683.f0 p_2362->g_76 p_2362->g_114
 */
int8_t * func_13(int8_t * p_14, uint32_t  p_15, uint64_t  p_16, int32_t  p_17, struct S4 * p_2362)
{ /* block id: 822 */
    uint32_t l_1803 = 0xBA203C9BL;
    int32_t l_1804 = 0x58BDFC4AL;
    int32_t l_1805[3];
    int32_t l_1806 = (-6L);
    int16_t *l_1811 = (void*)0;
    int16_t *l_1812 = &p_2362->g_1784[2].f4;
    union U2 **l_1841 = &p_2362->g_1799;
    int32_t ***l_1849 = &p_2362->g_967;
    int32_t ****l_1848[10] = {&l_1849,&l_1849,&l_1849,&l_1849,&l_1849,&l_1849,&l_1849,&l_1849,&l_1849,&l_1849};
    uint16_t l_1941 = 0xCFF2L;
    int32_t *l_1945[2];
    uint32_t l_1946 = 0x6248DEBDL;
    uint32_t l_1967 = 0UL;
    int8_t *l_1971 = &p_2362->g_630;
    int32_t *l_1985 = (void*)0;
    uint8_t l_2087 = 246UL;
    uint64_t l_2164[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    uint32_t **l_2195[3];
    uint32_t **l_2196 = (void*)0;
    uint8_t *l_2197[7] = {&p_2362->g_656,&p_2362->g_656,&p_2362->g_656,&p_2362->g_656,&p_2362->g_656,&p_2362->g_656,&p_2362->g_656};
    uint32_t l_2198 = 1UL;
    uint16_t ****l_2201 = &p_2362->g_391;
    uint16_t ****l_2202 = &p_2362->g_391;
    uint64_t *l_2203 = &l_2164[1][0];
    uint32_t l_2234 = 0x3E56A036L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1805[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_1945[i] = &p_2362->g_1311.f0;
    for (i = 0; i < 3; i++)
        l_2195[i] = &p_2362->g_205;
    if (((p_15 ^ l_1803) < ((&p_2362->g_1484 == &p_2362->g_1484) ^ (((*l_1812) = ((l_1806 = (l_1805[2] = (l_1803 && (l_1804 = (**p_2362->g_1379))))) || (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_1806, l_1804)), (l_1804 , 0x73EECF63L))))) > l_1803))))
    { /* block id: 827 */
        uint64_t l_1813[7] = {0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,0UL};
        uint32_t l_1819 = 0xE6174F11L;
        int32_t l_1838 = 0x666ED198L;
        int8_t *l_1843 = &p_2362->g_19;
        int32_t ****l_1845 = (void*)0;
        int32_t l_1868 = 0L;
        int16_t *l_1914 = &p_2362->g_140[5];
        int32_t l_1917[1];
        uint8_t **l_1929 = (void*)0;
        uint32_t l_1949 = 4294967295UL;
        union U2 *l_1972 = (void*)0;
        uint8_t *l_1984 = &p_2362->g_656;
        uint8_t **l_1983 = &l_1984;
        int64_t *l_2002[5][5] = {{&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0],&p_2362->g_489[1][1][0],&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0]},{&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0],&p_2362->g_489[1][1][0],&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0]},{&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0],&p_2362->g_489[1][1][0],&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0]},{&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0],&p_2362->g_489[1][1][0],&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0]},{&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0],&p_2362->g_489[1][1][0],&p_2362->g_489[1][1][0],&p_2362->g_489[2][2][0]}};
        union U1 * volatile l_2029 = &p_2362->g_103[5];/* VOLATILE GLOBAL l_2029 */
        uint64_t l_2051 = 0x56B0E8D0C6D4B30BL;
        uint32_t l_2133[9] = {0x3901A63CL,0UL,0x3901A63CL,0x3901A63CL,0UL,0x3901A63CL,0x3901A63CL,0UL,0x3901A63CL};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1917[i] = (-1L);
        if (((((l_1813[5] && ((p_2362->g_140[2] ^= 0x4393L) , (p_2362->g_1814[4] != (void*)0))) > p_15) ^ (!p_15)) ^ p_2362->g_339))
        { /* block id: 829 */
            union U2 **l_1827 = &p_2362->g_1799;
            union U2 ***l_1826 = &l_1827;
            int16_t *l_1839 = &p_2362->g_99.f4;
            int32_t l_1840[1][3][3];
            int32_t l_1842 = (-1L);
            int32_t l_1844 = 0L;
            int32_t *****l_1846 = (void*)0;
            int32_t *****l_1847 = &l_1845;
            uint8_t l_1895 = 0x32L;
            uint16_t **l_1970 = &p_2362->g_227[0];
            int32_t *****l_1980[10] = {&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979,&p_2362->g_1979};
            uint32_t **l_2018[2][6][2];
            uint64_t **l_2075 = &p_2362->g_1484;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1840[i][j][k] = 0x61184C14L;
                }
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_2018[i][j][k] = &p_2362->g_205;
                }
            }
            l_1844 |= ((safe_rshift_func_int16_t_s_u(((*l_1812) = l_1804), (***p_2362->g_1378))) < (!((p_2362->g_18 = ((*p_2362->g_435) = ((~(l_1842 ^= (l_1819 , (((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((0x4F21L <= (l_1805[2] = (l_1813[2] && (p_16 ^ (((*l_1826) = &p_2362->g_1799) == (((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_1805[2], ((*l_1839) = (safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(5UL, l_1838)) && p_15), 0x2DD4L)) == 18446744073709551615UL), p_16))))), l_1840[0][1][2])) ^ l_1804) , l_1841)))))) > p_2362->g_1476[1]) & l_1840[0][1][2]), 0x6AL)) | p_16), p_16)), p_15)) | (*p_14)) != p_15)))) , l_1843))) == (void*)0)));
            l_1805[2] |= 0x6847EA76L;
            if ((((*l_1847) = l_1845) != l_1848[8]))
            { /* block id: 840 */
                int32_t *l_1850 = &l_1805[1];
                int32_t *l_1851 = &p_2362->g_1683.f2;
                int32_t *l_1852[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1852[i] = &p_2362->g_168.f0;
                l_1804 &= (l_1844 ^= ((*l_1850) = l_1840[0][1][2]));
            }
            else
            { /* block id: 844 */
                int8_t ****l_1853 = &p_2362->g_1614;
                int32_t l_1886 = 0x6F92F7FBL;
                uint32_t l_1909 = 4294967295UL;
                int32_t *l_1928[9][2][10] = {{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}},{{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711},{&p_2362->g_711,&p_2362->g_126,&p_2362->g_126,&p_2362->g_711,&l_1838,&p_2362->g_12,&p_2362->g_711,&p_2362->g_126,&p_2362->g_791.f0,&p_2362->g_711}}};
                int32_t l_1937 = 9L;
                uint32_t l_1973[9][10][2] = {{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}},{{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL},{0xF213C54BL,0xF213C54BL}}};
                int32_t *l_1977 = (void*)0;
                int i, j, k;
lbl_1976:
                for (l_1806 = 0; (l_1806 <= 7); l_1806 += 1)
                { /* block id: 847 */
                    int32_t l_1893 = 0x3BBE99BFL;
                    int16_t *l_1916 = &p_2362->g_140[l_1806];
                    int32_t *l_1925 = (void*)0;
                    int i;
                    if ((((((void*)0 != l_1853) || ((safe_div_func_uint16_t_u_u((+0x5183L), (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_2362->g_140[l_1806], p_2362->g_140[l_1806])), (safe_mod_func_uint8_t_u_u(p_2362->g_140[l_1806], p_2362->g_140[l_1806])))), (l_1868 = (l_1805[2] = (safe_rshift_func_uint16_t_u_s(((0x5D2A33E984E8A476L || (safe_mul_func_uint8_t_u_u(0x3FL, 0x30L))) ^ l_1804), p_2362->g_617)))))))) != l_1844)) != 1L) & p_2362->g_1869))
                    { /* block id: 850 */
                        int8_t *l_1892[9] = {&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3,&p_2362->g_1784[2].f3};
                        int32_t l_1894 = 0L;
                        int32_t *l_1896 = &p_2362->g_1797.f2;
                        int32_t *l_1897 = &l_1868;
                        int i;
                        (*l_1897) ^= (((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((((**p_2362->g_435) = (~((p_17 <= (safe_rshift_func_uint16_t_u_s(((l_1840[0][1][2] = (safe_mul_func_uint8_t_u_u(0x48L, ((p_16 <= (safe_mul_func_int8_t_s_s(l_1844, ((safe_add_func_int32_t_s_s((p_15 , ((l_1893 &= (safe_div_func_uint16_t_u_u(((!18446744073709551615UL) & ((((l_1886 > ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((4294967295UL < p_15) >= 0x5DD9L) , (*p_14)), 3)), p_2362->g_447.f0)) >= p_2362->g_761)) & (-8L)) , p_2362->g_1891) , p_2362->g_124)), 65535UL))) && 0x61L)), p_16)) > 0L)))) == l_1894)))) , p_16), 1))) | p_2362->g_69))) > p_17), l_1895)), l_1842)) >= l_1894) > p_2362->g_140[l_1806]);
                        if (l_1886)
                            break;
                        if (l_1886)
                            break;
                    }
                    else
                    { /* block id: 857 */
                        int8_t l_1902 = 0x57L;
                        int16_t **l_1915[4];
                        uint8_t *l_1918 = (void*)0;
                        uint32_t l_1919[3][3];
                        uint8_t l_1924 = 0xD9L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_1915[i] = &l_1812;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1919[i][j] = 0xF4A4B0D2L;
                        }
                        (*p_2362->g_1921) = (safe_mod_func_int8_t_s_s(((*p_2362->g_173) = (l_1893 = (safe_lshift_func_int16_t_s_u(((0x721E2215L || (l_1902 || (((((*p_14) & ((safe_rshift_func_uint8_t_u_u((l_1919[2][2] = (safe_div_func_int8_t_s_s(((-2L) && (safe_lshift_func_int8_t_s_s((!l_1909), (safe_sub_func_int32_t_s_s(p_15, (safe_lshift_func_uint16_t_u_s((p_2362->g_77 >= ((l_1914 != (l_1916 = &p_2362->g_140[2])) & 0x1FA3L)), 13))))))), l_1917[0]))), p_2362->g_140[l_1806])) != 0xC3B0EDDDL)) > p_2362->g_140[l_1806]) ^ p_17) | l_1902))) || 18446744073709551611UL), p_2362->g_140[l_1806])))), 255UL));
                        l_1917[0] = (safe_mod_func_int16_t_s_s(((***p_2362->g_1378) , ((*l_1812) = p_16)), (l_1909 || (0x7E77L && l_1924))));
                    }
                    if (l_1819)
                        break;
                    if (l_1909)
                        break;
                    for (p_2362->g_846 = 2; (p_2362->g_846 >= 0); p_2362->g_846 -= 1)
                    { /* block id: 870 */
                        l_1925 = (void*)0;
                    }
                    for (p_2362->g_1869 = 0; (p_2362->g_1869 <= 6); p_2362->g_1869 += 1)
                    { /* block id: 875 */
                        return (*p_2362->g_435);
                    }
                }
                for (p_2362->g_846 = 0; (p_2362->g_846 == (-13)); --p_2362->g_846)
                { /* block id: 881 */
                    uint8_t ***l_1930[10][8][3];
                    int32_t l_1940 = 0x393C0807L;
                    int8_t *l_1942 = &p_2362->g_1784[2].f3;
                    int8_t *l_1943 = &p_2362->g_99.f3;
                    int8_t *l_1944 = &p_2362->g_343;
                    int32_t *l_1947 = (void*)0;
                    int32_t *l_1948[2];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 8; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1930[i][j][k] = &p_2362->g_548[4];
                        }
                    }
                    for (i = 0; i < 2; i++)
                        l_1948[i] = &l_1917[0];
                    l_1949 |= (5UL != ((((l_1928[4][0][7] = &p_2362->g_12) == (((p_2362->g_548[5] = l_1929) == ((safe_add_func_int8_t_s_s((*p_14), ((*l_1944) ^= ((((l_1806 = 0xD7L) ^ (((((l_1840[0][1][2] && ((safe_mod_func_int32_t_s_s(l_1868, (safe_rshift_func_int8_t_s_s(((p_2362->g_1527++) | (*p_14)), (*p_2362->g_18))))) && p_2362->g_1114[0][3])) && p_2362->g_1273) != l_1940) , 65535UL) & p_15)) != (*p_14)) == l_1941)))) , l_1929)) , l_1945[0])) > p_15) & l_1946));
                    for (p_2362->g_933 = 9; (p_2362->g_933 >= 2); p_2362->g_933 -= 1)
                    { /* block id: 890 */
                        (*p_2362->g_1816) = &l_1917[0];
                        if (p_15)
                            break;
                        return p_14;
                    }
                    for (p_2362->g_512 = 0; (p_2362->g_512 > (-10)); p_2362->g_512 = safe_sub_func_int16_t_s_s(p_2362->g_512, 1))
                    { /* block id: 897 */
                        union U0 **l_1955 = &p_2362->g_202;
                        int32_t l_1968 = 0x3CF517A3L;
                        l_1968 ^= (((safe_add_func_int16_t_s_s(((*l_1839) |= ((((((p_2362->g_1954 , (l_1886 = ((void*)0 != l_1955))) || (safe_add_func_int16_t_s_s(((*l_1812) = p_2362->g_59.f0), ((safe_rshift_func_uint16_t_u_u(((((*p_14) = (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((0x2CC4D2959648406BL == ((*p_2362->g_18) > ((p_2362->g_1966 , &p_2362->g_1614) != &p_2362->g_1614))), l_1842)), 0x505AL)) & l_1804) , (*p_14)), (*p_2362->g_173)))) | p_16) >= (-1L)), l_1803)) , l_1909)))) != (-7L)) > l_1967) != l_1840[0][2][2]) || 0L)), 0xBA79L)) , l_1909) ^ (-6L));
                        (**p_2362->g_1815) = &l_1886;
                        p_2362->g_1799 = l_1972;
                        ++l_1973[1][0][1];
                    }
                }
                if (l_1838)
                    goto lbl_1976;
                (*p_2362->g_1978) = (*p_2362->g_1921);
            }
            if ((((p_2362->g_1979 = p_2362->g_1979) != &p_2362->g_1815) , ((((l_1985 = &l_1868) != &l_1868) >= l_1967) != p_16)))
            { /* block id: 913 */
                uint8_t l_1991 = 0x39L;
                int32_t l_2014 = 0x370F07F5L;
                int32_t *l_2052 = &p_2362->g_1954.f2;
                int8_t l_2072 = (-1L);
lbl_2003:
                if (((p_2362->g_1966.f0 == p_17) && ((**l_1970) = p_15)))
                { /* block id: 915 */
                    (*l_1985) &= ((void*)0 != &p_2362->g_1692[5]);
                    if (l_1941)
                        goto lbl_2003;
                }
                else
                { /* block id: 917 */
                    int32_t l_1988 = 0x4213D717L;
                    int32_t l_1989 = 0x027A6E4CL;
                    int32_t l_1990 = 0x6A02C37CL;
                    for (p_2362->g_339 = 15; (p_2362->g_339 > 15); p_2362->g_339++)
                    { /* block id: 920 */
                        (**p_2362->g_1815) = &l_1917[0];
                    }
                    l_1991--;
                    for (p_2362->g_933 = 0; (p_2362->g_933 <= (-8)); --p_2362->g_933)
                    { /* block id: 926 */
                        (*l_1985) |= ((((safe_add_func_int16_t_s_s(((*l_1839) ^= (!(safe_lshift_func_uint16_t_u_s((((0xD88AD31FL | (safe_add_func_uint8_t_u_u(((p_15 & 0xF064DC60BD82B12CL) , 0UL), ((l_2002[3][1] = &p_2362->g_489[2][2][0]) == (void*)0)))) < (((**l_1970) = ((void*)0 != &p_17)) | ((p_2362->g_1491 | 0xB4DA183EF1C65751L) >= 0x2F482321A54D21E2L))) > p_2362->g_1393.f0), p_15)))), p_17)) , p_2362->g_447.f0) && p_2362->g_1969.f0) == (-1L));
                        return p_14;
                    }
                }
                for (p_2362->g_99.f4 = (-2); (p_2362->g_99.f4 != (-13)); p_2362->g_99.f4 = safe_sub_func_uint8_t_u_u(p_2362->g_99.f4, 8))
                { /* block id: 937 */
                    int16_t l_2015 = 0x3F24L;
                    uint64_t l_2019 = 0x74D68C695F2F704EL;
                    int32_t l_2020 = 0x5C536545L;
                    union U1 * volatile *l_2028[8] = {&p_2362->g_1223[0][3][0],&p_2362->g_1223[1][3][0],&p_2362->g_1223[0][3][0],&p_2362->g_1223[0][3][0],&p_2362->g_1223[1][3][0],&p_2362->g_1223[0][3][0],&p_2362->g_1223[0][3][0],&p_2362->g_1223[1][3][0]};
                    int i;
                    l_2020 |= (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((0x43L ^ (p_16 > ((*p_14) , ((safe_sub_func_uint16_t_u_u((p_17 ^ (((((l_2014 = 0x3B62L) , ((p_15 = l_2014) > (l_2015 || (safe_div_func_int64_t_s_s((l_1917[0] && (((void*)0 == l_2018[1][4][0]) & p_16)), p_17))))) != 1L) < 4UL) == 0L)), (*l_1985))) >= p_16)))) >= l_2019), l_1991)) , p_2362->g_1969.f0) <= 0x09B9A169117B01E8L), 0x96L)), l_1838));
                    if (l_1838)
                    { /* block id: 941 */
                        return p_14;
                    }
                    else
                    { /* block id: 943 */
                        uint32_t l_2021 = 0xEAD9BC27L;
                        uint64_t *l_2027[1];
                        uint64_t **l_2026 = &l_2027[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2027[i] = &p_2362->g_758[2][0];
                        (*l_1985) |= l_2021;
                        (*l_1985) ^= ((((((((l_1813[1] ^ (((&l_1971 == ((65535UL < ((*l_1914) = ((*p_2362->g_173) > (**p_2362->g_435)))) , (void*)0)) , l_1991) == (safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s((0xF3556959L && (p_2362->g_631 = (((*l_2026) = &p_2362->g_758[5][0]) != (void*)0))), 0x57A484C79B50C26BL)), p_17)))) & (*p_2362->g_173)) && l_2014) < 0x60BEL) >= 9L) | 0x248DL) , &p_2362->g_1799) == &l_1972);
                        (*l_1985) = (*l_1985);
                    }
                    l_2029 = (*p_2362->g_1222);
                }
                for (p_2362->g_59.f0 = 3; (p_2362->g_59.f0 >= 0); p_2362->g_59.f0 -= 1)
                { /* block id: 955 */
                    int64_t *l_2057 = &p_2362->g_512;
                    int64_t *l_2060 = &p_2362->g_143;
                    uint64_t *l_2073[6][10][4] = {{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}},{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}},{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}},{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}},{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}},{{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051},{(void*)0,(void*)0,(void*)0,&l_2051}}};
                    int i, j, k;
                    l_2052 = ((safe_div_func_int8_t_s_s(p_2362->g_1476[p_2362->g_59.f0], (safe_add_func_int32_t_s_s(p_17, (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((p_2362->g_2042 , (0x52L <= (-1L))), (-1L))) && ((l_2014 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((***p_2362->g_1378), l_2051)), (l_1991 ^ p_17))), 13)), (*l_1985)))) == 0x0DF231331EBB1FE0L)), p_16)) , 0x13L), l_1991)), 2)))))) , &l_1804);
                    (*l_1985) ^= p_2362->g_1476[p_2362->g_59.f0];
                    (*l_1985) = (safe_lshift_func_uint8_t_u_u(((l_1985 != &p_17) ^ (((*l_1985) & (safe_add_func_int64_t_s_s((((*l_2057) ^= 0x7E21B89A0B47BCE5L) & ((*l_1985) , ((safe_sub_func_uint16_t_u_u(((((p_2362->g_543[2] , (((*l_2060) = 0x35E9E94A8161102BL) ^ (safe_unary_minus_func_uint64_t_u((l_1917[0] |= ((safe_add_func_int32_t_s_s((((*l_2052) = (safe_mul_func_int16_t_s_s((((p_16 ^= ((((p_2362->g_1697.f0 & (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(l_2072, 1L)) ^ 0x5868E8D4B5C51E7AL) > p_2362->g_846), p_2362->g_1274)), (*l_2052)))) , 0xCD28L) , p_2362->g_1476[p_2362->g_59.f0]) == 4L)) , p_2362->g_2074) , p_16), 0x486EL))) && (*l_1985)), p_15)) ^ 0xE3156AE1L)))))) , p_15) < p_17) && (-4L)), p_17)) , p_15))), p_15))) , p_16)), p_17));
                    if (p_17)
                        continue;
                }
            }
            else
            { /* block id: 967 */
                (*l_1985) = (0x38F3L && (l_2075 != &p_2362->g_1484));
            }
        }
        else
        { /* block id: 970 */
            int32_t l_2076[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            union U3 *l_2079[9];
            union U3 **l_2078[4] = {&l_2079[7],&l_2079[7],&l_2079[7],&l_2079[7]};
            int8_t l_2095 = (-10L);
            int32_t l_2130 = 9L;
            union U0 *l_2138 = &p_2362->g_2139;
            int32_t *l_2167 = &p_2362->g_1683.f2;
            int i;
            for (i = 0; i < 9; i++)
                l_2079[i] = &p_2362->g_59;
            (*p_2362->g_2077) = (l_2076[0] && p_2362->g_1272);
lbl_2142:
            p_2362->g_2080 = (void*)0;
            for (p_2362->g_99.f2 = 0; (p_2362->g_99.f2 <= 7); p_2362->g_99.f2 += 1)
            { /* block id: 975 */
                int32_t *l_2096 = &p_2362->g_1683.f2;
                int32_t l_2106[10] = {5L,(-1L),0L,(-1L),5L,5L,(-1L),0L,(-1L),5L};
                int i;
                if (p_15)
                    break;
                if (((*l_2096) = ((safe_sub_func_uint16_t_u_u(((-1L) | (safe_mod_func_int16_t_s_s((0x62A0029BL > ((0x87D6AAE5C7C972B4L | (l_2095 = (safe_sub_func_int16_t_s_s(l_1803, (((-1L) <= l_2087) && ((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((0x5031EC6BL > (((((p_16 && (((p_2362->g_2094 , l_1917[0]) != p_15) != p_16)) | 0UL) ^ p_17) >= 18446744073709551615UL) , l_2051)), l_1941)), 4)) , 0x3A4B4398FF7A9561L) & p_2362->g_761) , p_16)))))) != l_1806)), 0x71D9L))), l_2076[0])) >= p_17)))
                { /* block id: 979 */
                    int16_t l_2111 = (-5L);
                    int32_t l_2118[5][1];
                    uint64_t *l_2120 = &p_2362->g_758[2][0];
                    uint64_t **l_2119 = &l_2120;
                    int8_t l_2140 = (-10L);
                    int32_t *l_2141 = &l_2118[0][0];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2118[i][j] = 0x4876D9E9L;
                    }
                    for (p_2362->g_1954.f2 = (-13); (p_2362->g_1954.f2 > 28); p_2362->g_1954.f2 = safe_add_func_int16_t_s_s(p_2362->g_1954.f2, 8))
                    { /* block id: 982 */
                        uint16_t *l_2116 = &p_2362->g_87;
                        int32_t l_2117 = (-8L);
                        uint64_t ***l_2121 = &l_2119;
                        l_1985 = &l_1806;
                        (*l_2121) = (((l_2118[0][0] = ((p_2362->g_2099[4] , (safe_sub_func_uint8_t_u_u(p_16, (safe_mod_func_int32_t_s_s(((*l_2096) = (((safe_add_func_int16_t_s_s(l_2106[2], ((*l_2116) = ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((p_16 ^ l_2111) ^ (safe_lshift_func_uint8_t_u_s(((*p_2362->g_1799) , ((*l_1985) ^ ((((*l_1984)++) > (p_2362->g_1393.f0 == (*l_1985))) < l_1917[0]))), (*p_2362->g_18)))), (*l_2096))), p_17)) >= p_2362->g_168.f0)))) >= 1L) <= l_2117)), 1UL))))) <= p_16)) | p_15) , l_2119);
                    }
                    if (((**p_2362->g_1379) , (((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0xAB65L, p_17)), (safe_lshift_func_uint16_t_u_s((l_2130 |= l_1819), (p_2362->g_933 ^ ((safe_mul_func_uint8_t_u_u(((p_16 ^= (l_2133[1] , (((safe_add_func_int8_t_s_s(((**p_2362->g_1379) == ((safe_sub_func_uint32_t_u_u(((void*)0 == l_2138), l_2076[7])) & l_2076[0])), (*p_14))) == 2L) >= p_15))) | l_2118[0][0]), (*l_2096))) , p_15)))))), l_2140)) >= p_15) > p_15)))
                    { /* block id: 992 */
                        l_2141 = &l_2106[2];
                    }
                    else
                    { /* block id: 994 */
                        if (p_2362->g_1966.f0)
                            goto lbl_2142;
                    }
                }
                else
                { /* block id: 997 */
                    uint32_t l_2149 = 0UL;
                    int32_t *l_2158 = &p_2362->g_1969.f2;
                    int32_t *l_2159 = &l_2106[2];
                    (*l_2159) ^= (safe_lshift_func_int16_t_s_u(p_15, ((((safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((l_1949 | l_2051) > l_2149), 7)) | (safe_div_func_int8_t_s_s((-8L), 6UL))), (safe_rshift_func_int8_t_s_s(0x15L, (((((safe_mul_func_int16_t_s_s(1L, (safe_sub_func_int32_t_s_s(0x39C9E15DL, p_15)))) && p_2362->g_667) >= l_1917[0]) >= p_16) == (*l_2096)))))) > (*p_14)) || l_2149) >= p_15)));
                    for (p_2362->g_1274 = 2; (p_2362->g_1274 <= 6); p_2362->g_1274 += 1)
                    { /* block id: 1001 */
                        int32_t *l_2160 = &p_2362->g_1476[1];
                        int32_t *l_2161 = &p_2362->g_1683.f0;
                        int32_t *l_2162 = (void*)0;
                        int32_t *l_2163 = &p_2362->g_1393.f0;
                        l_2164[1][0]++;
                        (*l_2160) = (((*l_2096) , p_17) | 0x205FB06EL);
                        l_2167 = l_2161;
                        (*l_2160) = l_1819;
                    }
                }
            }
            (*l_2167) = l_2095;
        }
        (*p_2362->g_1816) = &l_1806;
        for (p_16 = 0; (p_16 <= 6); p_16 += 1)
        { /* block id: 1014 */
            uint16_t ***l_2176[1];
            int32_t l_2181 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_2176[i] = &p_2362->g_392;
            for (l_1804 = 0; (l_1804 <= 6); l_1804 += 1)
            { /* block id: 1017 */
                union U2 ***l_2173 = &p_2362->g_2172;
                int32_t l_2180 = (-9L);
                union U0 **l_2186 = &p_2362->g_777[2];
                uint64_t l_2191[5][5][1] = {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}};
                int i, j, k;
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 1041 */
        uint8_t l_2192 = 0x04L;
        ++l_2192;
    }
    (*p_2362->g_246) = &l_1804;
    if (((((*p_14) & (l_2198--)) , l_2201) == (l_2202 = l_2201)))
    { /* block id: 1047 */
        uint64_t *l_2204 = &p_2362->g_1114[0][3];
        int32_t l_2209 = (-1L);
        int32_t **l_2212 = &l_1945[0];
        int32_t l_2215 = (-1L);
        int32_t *l_2216 = &p_2362->g_1476[0];
        (*p_2362->g_76) = (l_2203 != l_2204);
        for (p_2362->g_114 = 0; (p_2362->g_114 < 54); p_2362->g_114++)
        { /* block id: 1051 */
            uint32_t l_2213 = 0x911E745CL;
            int16_t *l_2214[4] = {&p_2362->g_617,&p_2362->g_617,&p_2362->g_617,&p_2362->g_617};
            int i;
            l_1804 = (safe_mul_func_int16_t_s_s(l_2209, (l_2215 = (safe_div_func_uint16_t_u_u(((*l_1849) == (l_2212 = (*p_2362->g_966))), ((*l_1812) = (l_2213 , (p_16 , 6L))))))));
            (*p_2362->g_1816) = l_2216;
        }
    }
    else
    { /* block id: 1058 */
        int64_t l_2229 = (-1L);
        int32_t l_2230 = 5L;
        int32_t l_2232 = 0x1E514D86L;
        int32_t l_2233[8][2][1] = {{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}},{{0x0FB317E5L},{0x0FB317E5L}}};
        int32_t *l_2237 = &l_2233[0][0][0];
        int i, j, k;
        for (p_2362->g_343 = (-20); (p_2362->g_343 > (-1)); p_2362->g_343 = safe_add_func_int64_t_s_s(p_2362->g_343, 2))
        { /* block id: 1061 */
            int32_t *l_2219 = &p_2362->g_1969.f2;
            int32_t *l_2220 = &p_2362->g_1683.f0;
            int32_t *l_2221 = &p_2362->g_1800.f0;
            int32_t *l_2222 = &p_2362->g_1784[2].f2;
            int32_t *l_2223 = (void*)0;
            int32_t *l_2224 = &p_2362->g_99.f2;
            int32_t *l_2225 = &p_2362->g_2099[4].f2;
            int32_t *l_2226 = (void*)0;
            int32_t *l_2227 = &p_2362->g_1797.f0;
            int32_t *l_2228[1][4][4];
            int32_t l_2231[10][6][2] = {{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}},{{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L},{(-1L),3L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_2228[i][j][k] = &p_2362->g_1395.f0;
                }
            }
            l_2234--;
            (**p_2362->g_1815) = l_2237;
        }
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_846 p_2362->g_19 p_2362->g_59.f0 p_2362->g_343 p_2362->g_241.f2 p_2362->g_631 p_2362->g_143 p_2362->g_1214 p_2362->g_1035 p_2362->g_1036 p_2362->g_511 p_2362->g_1222 p_2362->g_1226 p_2362->g_339 p_2362->g_1223 p_2362->g_18 p_2362->g_126 p_2362->g_140 p_2362->g_1274 p_2362->g_77
 * writes: p_2362->g_512 p_2362->g_241.f2 p_2362->g_143 p_2362->g_77 p_2362->g_59.f0 p_2362->g_19 p_2362->g_1274
 */
uint8_t  func_20(int8_t * p_21, struct S4 * p_2362)
{ /* block id: 555 */
    uint32_t l_1182 = 0x7F185CE1L;
    union U1 *l_1209 = (void*)0;
    int32_t l_1238 = (-10L);
    uint8_t l_1239 = 255UL;
    int16_t *l_1255 = &p_2362->g_99.f4;
    int32_t *l_1265 = (void*)0;
    int32_t *l_1266 = &p_2362->g_168.f2;
    int32_t *l_1267 = &p_2362->g_77;
    int32_t *l_1268 = (void*)0;
    int32_t *l_1269 = &p_2362->g_69;
    int32_t *l_1270[8][4][6] = {{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}},{{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238},{&l_1238,(void*)0,&l_1238,&l_1238,(void*)0,&l_1238}}};
    uint32_t ****l_1284 = &p_2362->g_959;
    uint16_t l_1285 = 0UL;
    int8_t l_1309 = 0x4AL;
    uint32_t l_1310[9][2][10] = {{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}},{{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL},{0UL,0UL,0xB829970EL,0xA9D6D094L,2UL,0xA9D6D094L,0xB829970EL,0UL,0UL,0xB829970EL}}};
    uint16_t l_1342 = 0xA123L;
    uint16_t l_1348 = 2UL;
    uint64_t *l_1430 = &p_2362->g_1114[0][3];
    uint8_t l_1472 = 0x58L;
    uint16_t l_1473 = 0x261FL;
    uint32_t l_1496 = 0UL;
    int8_t l_1497 = 1L;
    uint64_t *l_1507 = &p_2362->g_758[2][0];
    int32_t l_1516 = 1L;
    int32_t l_1560 = (-1L);
    union U0 ***l_1579[3];
    int8_t ***l_1612[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_1693 = (void*)0;
    uint32_t l_1756 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1579[i] = &p_2362->g_1093;
    --l_1182;
    for (p_2362->g_512 = 8; (p_2362->g_512 == 21); p_2362->g_512 = safe_add_func_uint16_t_u_u(p_2362->g_512, 2))
    { /* block id: 559 */
        int64_t l_1193 = 0L;
        union U0 ***l_1206[1];
        union U1 *l_1207 = &p_2362->g_103[5];
        union U1 **l_1208 = &l_1207;
        union U1 *l_1211[5];
        union U1 **l_1210 = &l_1211[0];
        int32_t *l_1212 = &p_2362->g_241.f2;
        int64_t *l_1213 = &p_2362->g_143;
        uint8_t *l_1224 = &p_2362->g_339;
        uint16_t l_1250 = 65526UL;
        union U1 * volatile *l_1264 = &l_1211[0];
        int i;
        for (i = 0; i < 1; i++)
            l_1206[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_1211[i] = &p_2362->g_103[0];
        (*p_2362->g_1214) = (((safe_div_func_int32_t_s_s(((l_1182 && (249UL || (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((*l_1213) ^= (~((l_1193 || l_1182) ^ (safe_sub_func_int32_t_s_s(l_1182, ((safe_div_func_int64_t_s_s((((*l_1212) = ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((void*)0 != l_1206[0]) , (l_1209 = ((*l_1208) = l_1207))) != ((*l_1210) = &p_2362->g_103[4])), 0xB324L)), (*p_21)))), l_1182)), l_1193)) , 0x24759E17L)) && (*l_1212)), p_2362->g_631)) <= l_1182)))))) >= l_1182) || (*l_1212)), 0x471ECEC439633544L)), (-1L))))) < l_1182), l_1182)) >= l_1182) <= l_1182);
        for (p_2362->g_59.f0 = 0; (p_2362->g_59.f0 < 15); p_2362->g_59.f0++)
        { /* block id: 568 */
            uint16_t l_1217 = 7UL;
            uint8_t *l_1225 = &p_2362->g_339;
            int8_t *l_1237 = &p_2362->g_343;
            int64_t *l_1253 = (void*)0;
            int64_t *l_1254 = &l_1193;
            int32_t l_1256[8] = {0x21187A93L,0x21187A93L,0x21187A93L,0x21187A93L,0x21187A93L,0x21187A93L,0x21187A93L,0x21187A93L};
            int32_t l_1257 = (-6L);
            int32_t *l_1262 = &p_2362->g_124;
            int i;
            (*l_1212) = l_1217;
            (*l_1212) = ((((*p_21) < (((~((**p_2362->g_1035) , (safe_lshift_func_int8_t_s_s(((((void*)0 == p_2362->g_1222) <= ((*p_21) != ((((l_1225 = l_1224) == ((((*p_21) >= p_2362->g_1226) ^ ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((l_1238 = (((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(248UL, l_1217)), 0x09ADL)) ^ (*l_1212)) ^ l_1182) , l_1237) == (void*)0)), l_1239)), l_1217)), (*p_21))) & p_2362->g_339)) , p_21)) && l_1239) | 0x6BL))) | (*l_1212)), l_1217)))) != 18446744073709551615UL) & 0xEDL)) , (*l_1210)) != p_2362->g_1223[1][3][0]);
            l_1257 &= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(l_1238, 8)) , ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_1256[4] = (safe_mod_func_uint64_t_u_u((((+((*l_1213) = l_1217)) && (((l_1250 |= 1UL) == ((*p_2362->g_18) &= l_1238)) > (~(((*l_1254) &= ((*l_1213) &= (safe_lshift_func_uint16_t_u_s(65535UL, 7)))) , (&p_2362->g_1177[2][8][1] == (((*l_1212) >= p_2362->g_126) , l_1255)))))) , 18446744073709551611UL), l_1217))), (-8L))), 0x7EL)) ^ 2L)), 0));
            l_1256[7] = ((18446744073709551615UL || (0x34L <= (safe_sub_func_uint64_t_u_u((p_2362->g_140[4] ^ ((void*)0 != (*p_2362->g_1035))), (safe_sub_func_int16_t_s_s((l_1262 == (void*)0), l_1238)))))) , 0x31ABFB2AL);
        }
        (*l_1264) = (*p_2362->g_1222);
        if (l_1182)
            continue;
    }
    ++p_2362->g_1274;
    return (*l_1267);
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_99.f3 p_2362->g_143 p_2362->g_489 p_2362->g_712 p_2362->g_126 p_2362->g_1114 p_2362->g_18 p_2362->g_19 p_2362->g_69 p_2362->g_271 p_2362->g_120 p_2362->g_512 p_2362->g_99.f2
 * writes: p_2362->g_99.f3 p_2362->g_143 p_2362->g_712 p_2362->g_19 p_2362->g_69 p_2362->g_140 p_2362->g_99.f2 p_2362->g_77
 */
int8_t * func_22(uint16_t  p_23, int8_t * p_24, uint16_t  p_25, int64_t  p_26, int32_t  p_27, struct S4 * p_2362)
{ /* block id: 511 */
    int8_t l_1102[10] = {0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L};
    uint64_t *l_1147 = &p_2362->g_1114[0][5];
    int32_t l_1150 = (-2L);
    int32_t l_1151 = 0x2F386DC4L;
    union U3 l_1162[1] = {{-1L}};
    uint8_t *l_1163 = &p_2362->g_656;
    int32_t *l_1171 = (void*)0;
    int32_t *l_1172 = &p_2362->g_69;
    int32_t *l_1173 = (void*)0;
    int32_t *l_1174 = &p_2362->g_69;
    int32_t *l_1175 = &l_1151;
    int32_t *l_1176[3];
    uint16_t l_1178 = 0x33C1L;
    int8_t *l_1181 = &p_2362->g_343;
    int i;
    for (i = 0; i < 3; i++)
        l_1176[i] = &p_2362->g_69;
    for (p_27 = 0; (p_27 <= (-16)); p_27--)
    { /* block id: 514 */
        int8_t *l_1101[8][1][2] = {{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}},{{&p_2362->g_59.f0,&p_2362->g_59.f0}}};
        int32_t l_1105 = 9L;
        union U0 **l_1118 = (void*)0;
        int64_t *l_1168[6][4][2] = {{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}},{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}},{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}},{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}},{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}},{{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]},{&p_2362->g_489[3][2][0],&p_2362->g_489[1][6][0]}}};
        int32_t *l_1170 = &p_2362->g_77;
        int i, j, k;
        for (p_2362->g_99.f3 = 0; (p_2362->g_99.f3 < (-10)); --p_2362->g_99.f3)
        { /* block id: 517 */
            for (p_2362->g_143 = 0; (p_2362->g_143 >= 0); p_2362->g_143 -= 1)
            { /* block id: 520 */
                return l_1101[0][0][0];
            }
            if (l_1102[3])
                continue;
        }
        for (p_26 = (-16); (p_26 == (-9)); p_26 = safe_add_func_int8_t_s_s(p_26, 2))
        { /* block id: 527 */
            uint8_t *l_1106 = &p_2362->g_712;
            int32_t l_1115 = 0x5846BCC1L;
            int64_t *l_1119[7][5][7] = {{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}},{{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512},{(void*)0,&p_2362->g_143,&p_2362->g_933,&p_2362->g_933,&p_2362->g_512,&p_2362->g_933,&p_2362->g_512}}};
            int16_t l_1120 = 0x2379L;
            int32_t *l_1121 = &l_1115;
            uint32_t ****l_1149 = &p_2362->g_959;
            uint32_t *****l_1148 = &l_1149;
            int32_t l_1154 = (-1L);
            int i, j, k;
            (*l_1121) = ((p_2362->g_489[2][2][0] & ((++(*l_1106)) == ((*p_2362->g_18) ^= ((safe_lshift_func_uint16_t_u_s(p_23, (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int64_t_s(p_2362->g_126)) < ((p_2362->g_1114[0][3] > 1L) != (l_1115 >= (l_1120 ^= (safe_lshift_func_int8_t_s_u((l_1118 == (void*)0), ((0x7DD66CF0E92BF50FL < l_1102[6]) | 0xE48AF935L))))))), p_25)))) != l_1115)))) >= p_27);
            l_1105 = (safe_mul_func_uint8_t_u_u(0UL, 0x64L));
            for (p_2362->g_69 = 6; (p_2362->g_69 <= 15); p_2362->g_69 = safe_add_func_int64_t_s_s(p_2362->g_69, 1))
            { /* block id: 535 */
                uint32_t ****l_1146 = &p_2362->g_959;
                uint32_t *****l_1145 = &l_1146;
                int32_t l_1152 = 0x0D1DB051L;
                int32_t *l_1153[8] = {&l_1105,&p_2362->g_168.f0,&l_1105,&l_1105,&p_2362->g_168.f0,&l_1105,&l_1105,&p_2362->g_168.f0};
                int8_t *l_1155 = &p_2362->g_343;
                int i;
                l_1154 ^= ((0xDBAFL ^ (l_1151 |= (safe_add_func_int64_t_s_s(p_27, ((((l_1105 >= (safe_sub_func_uint16_t_u_u((l_1150 &= (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(1L, (p_2362->g_140[2] = (((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((7L && (safe_div_func_int32_t_s_s(((*l_1121) = 0L), (safe_sub_func_uint16_t_u_u((l_1145 != (((~p_27) ^ ((&p_2362->g_110 == l_1147) ^ (*p_24))) , l_1148)), 0L))))), 0UL)), l_1105)), (*p_24))))) != 0x668575D6L) == (*p_2362->g_18))))) != l_1102[3]), (-9L)))), (*p_2362->g_271)))) <= l_1105) | p_2362->g_512) || 8L))))) || l_1152);
                return l_1155;
            }
        }
        for (p_2362->g_99.f2 = 0; (p_2362->g_99.f2 != 22); p_2362->g_99.f2 = safe_add_func_int64_t_s_s(p_2362->g_99.f2, 2))
        { /* block id: 546 */
            return p_24;
        }
        (*l_1170) = (p_26 < ((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((((l_1162[0] , l_1163) != (void*)0) > (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_26, (l_1151 &= (-1L)))), 2L))) | (((void*)0 == l_1168[4][1][1]) | 65535UL)), 0x4CA0A53DL)), 6)) , 0L));
    }
    l_1171 = &l_1151;
    ++l_1178;
    return l_1181;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_241.f0 p_2362->g_761 p_2362->g_948 p_2362->g_712 p_2362->g_966 p_2362->g_711 p_2362->g_77 p_2362->g_967 p_2362->g_18 p_2362->g_758 p_2362->g_239.f0 p_2362->g_246 p_2362->g_99.f4 p_2362->g_19 p_2362->g_271 p_2362->g_120 p_2362->g_512 p_2362->g_76 p_2362->g_243 p_2362->g_1034 p_2362->g_203 p_2362->g_99 p_2362->g_630 p_2362->g_168.f0 p_2362->g_617 p_2362->g_87
 * writes: p_2362->g_241.f0 p_2362->g_761 p_2362->g_959 p_2362->g_967 p_2362->g_711 p_2362->g_77 p_2362->g_140 p_2362->g_19 p_2362->g_76 p_2362->g_99.f4 p_2362->g_143 p_2362->g_120 p_2362->g_801 p_2362->g_630 p_2362->g_59 p_2362->g_617 p_2362->g_512 p_2362->g_1092 p_2362->g_1093 p_2362->g_201.f2
 */
uint16_t  func_28(uint8_t  p_29, int8_t  p_30, int64_t  p_31, int8_t * p_32, uint64_t  p_33, struct S4 * p_2362)
{ /* block id: 409 */
    int32_t ***l_918 = &p_2362->g_801;
    int32_t ****l_919 = &l_918;
    int32_t ***l_920 = &p_2362->g_801;
    int32_t l_927 = (-1L);
    int32_t l_928 = 0L;
    int32_t l_932[6][5] = {{9L,(-7L),7L,(-7L),9L},{9L,(-7L),7L,(-7L),9L},{9L,(-7L),7L,(-7L),9L},{9L,(-7L),7L,(-7L),9L},{9L,(-7L),7L,(-7L),9L},{9L,(-7L),7L,(-7L),9L}};
    uint64_t *l_997 = (void*)0;
    uint32_t l_1037[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    union U0 **l_1076 = &p_2362->g_777[2];
    union U0 ***l_1077 = &l_1076;
    int64_t *l_1078 = &p_2362->g_512;
    int32_t *l_1083 = &p_2362->g_761;
    int16_t l_1084 = 0x177BL;
    int8_t l_1087 = 1L;
    union U0 **l_1089 = &p_2362->g_777[2];
    union U0 ***l_1088 = &l_1089;
    union U0 **l_1091[7] = {&p_2362->g_777[0],&p_2362->g_777[0],&p_2362->g_777[0],&p_2362->g_777[0],&p_2362->g_777[0],&p_2362->g_777[0],&p_2362->g_777[0]};
    union U0 ***l_1090[4][4] = {{(void*)0,&l_1091[6],(void*)0,(void*)0},{(void*)0,&l_1091[6],(void*)0,(void*)0},{(void*)0,&l_1091[6],(void*)0,(void*)0},{(void*)0,&l_1091[6],(void*)0,(void*)0}};
    uint64_t *l_1094 = &p_2362->g_201.f2;
    int32_t *l_1095[6];
    int32_t l_1096 = 0L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1095[i] = (void*)0;
    if ((((*l_919) = l_918) != l_920))
    { /* block id: 411 */
        uint32_t l_921 = 1UL;
        int32_t *l_922 = &p_2362->g_241.f0;
        int32_t *l_925 = &p_2362->g_168.f0;
        int32_t *l_926[9][8] = {{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0},{&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_241.f0,&p_2362->g_168.f2,(void*)0,&p_2362->g_168.f2,&p_2362->g_241.f0,&p_2362->g_241.f0}};
        uint16_t l_929 = 2UL;
        uint8_t l_934 = 0xD5L;
        int i, j;
        if (l_921)
        { /* block id: 412 */
            l_922 = l_922;
            (*l_922) = (safe_rshift_func_int16_t_s_s((*l_922), 7));
        }
        else
        { /* block id: 415 */
            return p_31;
        }
        l_929++;
        l_934++;
    }
    else
    { /* block id: 420 */
        int16_t l_961 = 0x7BA4L;
        int32_t l_962[3];
        int32_t l_963 = (-6L);
        int32_t l_1022 = 1L;
        uint64_t l_1051 = 18446744073709551615UL;
        union U3 l_1073 = {0x0BL};
        int i;
        for (i = 0; i < 3; i++)
            l_962[i] = 0L;
        for (p_2362->g_761 = 3; (p_2362->g_761 >= 0); p_2362->g_761 -= 1)
        { /* block id: 423 */
            uint64_t **l_943 = (void*)0;
            uint64_t *l_945 = &p_2362->g_758[6][0];
            uint64_t **l_944 = &l_945;
            int32_t l_949 = 1L;
            uint32_t ****l_956 = (void*)0;
            uint32_t ***l_958 = &p_2362->g_204;
            uint32_t ****l_957[1];
            uint8_t *l_960[10][5] = {{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339},{&p_2362->g_339,&p_2362->g_656,&p_2362->g_656,&p_2362->g_339,&p_2362->g_339}};
            int32_t **l_964[9];
            int32_t ***l_965 = (void*)0;
            uint32_t l_979 = 4294967295UL;
            uint8_t l_1042 = 0x9FL;
            int32_t **l_1054 = &p_2362->g_76;
            int i, j;
            for (i = 0; i < 1; i++)
                l_957[i] = &l_958;
            for (i = 0; i < 9; i++)
                l_964[i] = &p_2362->g_426;
            l_949 = (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((0x24FA6C94L <= (0x1318B78CL && (((*l_944) = (void*)0) != (void*)0))) == (((safe_rshift_func_int8_t_s_u((p_2362->g_948 , (l_949 , ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((p_29 & l_949), ((((l_962[0] = (l_961 = ((p_2362->g_959 = &p_2362->g_204) != (void*)0))) || (*p_32)) | (*p_32)) & 0xAE069D45L))) < 1UL) ^ 0xC0E6A16FB1BAA7ACL) & 1UL), l_949)), l_963)) && 0x014AE10BL))), p_29)) | p_33) != 0UL)) & p_30), 0x4064L)), p_2362->g_712)) == p_29), l_963)) < l_963) ^ l_949);
            (*p_2362->g_966) = (l_949 , l_964[1]);
            for (p_2362->g_711 = 6; (p_2362->g_711 >= 0); p_2362->g_711 -= 1)
            { /* block id: 432 */
                int32_t *l_968[7][8][2] = {{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}},{{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927},{&l_963,&l_927}}};
                int32_t *l_970 = &l_927;
                uint8_t l_988[7][6] = {{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL},{0xA3L,252UL,252UL,0xA3L,0xDFL,3UL}};
                uint32_t l_1017 = 0xEA8864A0L;
                int i, j, k;
                if (l_949)
                    break;
                for (p_2362->g_77 = 6; (p_2362->g_77 >= 0); p_2362->g_77 -= 1)
                { /* block id: 436 */
                    int32_t **l_969 = &l_968[2][1][0];
                    l_970 = ((*l_969) = l_968[2][1][0]);
                    if ((+((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(((*l_970) >= (safe_mul_func_int8_t_s_s((p_29 , (*p_32)), ((void*)0 != (*p_2362->g_966))))), 7)) || (safe_lshift_func_uint8_t_u_s(((p_2362->g_140[2] = 0x570AL) != ((l_979 <= (*p_32)) & (p_33 ^ 18446744073709551615UL))), (*p_32)))), l_949)) <= p_33)))
                    { /* block id: 440 */
                        (*l_969) = &l_963;
                        if (p_30)
                            break;
                        (*l_969) = &l_949;
                    }
                    else
                    { /* block id: 444 */
                        return p_30;
                    }
                }
                if (((void*)0 != &p_2362->g_489[2][2][0]))
                { /* block id: 448 */
                    int8_t *l_989 = (void*)0;
                    int32_t l_996 = 0x5B9BDF31L;
                    int32_t *l_1008[4][6] = {{&l_962[0],&l_932[1][3],&l_963,&l_996,&l_932[1][3],&l_996},{&l_962[0],&l_932[1][3],&l_963,&l_996,&l_932[1][3],&l_996},{&l_962[0],&l_932[1][3],&l_963,&l_996,&l_932[1][3],&l_996},{&l_962[0],&l_932[1][3],&l_963,&l_996,&l_932[1][3],&l_996}};
                    int64_t *l_1014 = &p_2362->g_143;
                    uint64_t *l_1018 = &p_2362->g_201.f2;
                    uint64_t *l_1019 = (void*)0;
                    uint64_t *l_1020 = &p_2362->g_201.f2;
                    uint64_t *l_1021 = &p_2362->g_201.f2;
                    int i, j;
                    if (((p_30 = ((*p_2362->g_18) = 0x5AL)) || ((p_33 && (0x117E2FF5L || ((p_31 , (0L ^ (*p_32))) > ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((p_2362->g_758[2][0] == ((((safe_sub_func_uint16_t_u_u(p_33, (((safe_add_func_uint32_t_u_u(((p_2362->g_239.f0 , l_988[1][2]) || (*p_32)), 0x17667764L)) ^ p_33) || 0x47L))) != 0x84L) , &l_949) == (void*)0)) ^ (*p_32)), 247UL)) < (*p_32)), l_949)) == 0x6CB5F4CAL)))) == p_29)))
                    { /* block id: 451 */
                        uint64_t *l_1007[7][6] = {{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0},{&p_2362->g_110,(void*)0,(void*)0,&p_2362->g_110,&p_2362->g_110,(void*)0}};
                        uint64_t **l_1006 = &l_1007[3][5];
                        int i, j;
                        l_1008[3][4] = &l_949;
                        if (p_29)
                            break;
                    }
                    else
                    { /* block id: 457 */
                        uint8_t l_1009[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1009[i] = 0xD3L;
                        if (l_1009[0])
                            break;
                        return l_1009[0];
                    }
                    (*p_2362->g_246) = &l_996;
                    for (p_2362->g_99.f4 = 0; (p_2362->g_99.f4 <= 6); p_2362->g_99.f4 += 1)
                    { /* block id: 464 */
                        return p_31;
                    }
                    if ((~(safe_lshift_func_uint16_t_u_s((((*p_2362->g_18) != l_962[2]) < (l_1022 ^= (((safe_rshift_func_uint16_t_u_s((*p_2362->g_271), 15)) || (((*l_1014) = p_2362->g_241.f0) , ((*p_2362->g_271) , ((((l_963 = p_29) && (p_2362->g_512 , (safe_mul_func_int8_t_s_s(0x2DL, (l_1017 |= p_30))))) <= (*p_2362->g_76)) < 0xB4343B44L)))) | p_31))), p_31))))
                    { /* block id: 471 */
                        int32_t l_1031[5][9][2] = {{{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL}},{{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL}},{{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL}},{{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL}},{{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL},{(-1L),0x1E88E2AEL}}};
                        int i, j, k;
                        if (p_29)
                            break;
                        if ((**p_2362->g_243))
                            continue;
                        (**p_2362->g_203) |= (safe_rshift_func_int8_t_s_u((p_30 = (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x5FD2L, 0x28E9L)), (safe_lshift_func_int8_t_s_s((0x369A958969D784B8L > (l_1022 , ((((*p_2362->g_18) = 0x59L) | (l_1031[3][0][1] | 0x7F49197DL)) , 0x75355519871C4704L))), ((safe_add_func_uint64_t_u_u(((~((*l_1014) = ((((!(p_2362->g_1034 == (void*)0)) , p_29) & p_30) <= p_29))) ^ 0xA77EE2148E9A67D1L), l_1037[2])) , l_963)))))), 4));
                    }
                    else
                    { /* block id: 478 */
                        uint16_t *l_1043 = &p_2362->g_120;
                        int32_t l_1046 = (-9L);
                        int32_t l_1050 = 0x63AF9397L;
                        (*p_2362->g_76) = ((safe_mod_func_uint8_t_u_u((l_1046 = (((safe_mul_func_int16_t_s_s(p_33, (p_2362->g_99 , ((*l_1043) = ((l_1042 < l_1022) == 0x2AD53182A91963F4L))))) < l_949) >= (safe_mod_func_int8_t_s_s((*p_32), p_31)))), (safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_u(l_1050, p_30)))))) && 0L);
                        if (p_31)
                            continue;
                    }
                }
                else
                { /* block id: 484 */
                    l_1051++;
                    (**l_919) = l_1054;
                }
                (*l_970) = p_29;
                for (p_2362->g_630 = 3; (p_2362->g_630 >= 0); p_2362->g_630 -= 1)
                { /* block id: 491 */
                    int16_t l_1055 = (-9L);
                    int16_t *l_1074 = &p_2362->g_617;
                    int64_t *l_1075 = &p_2362->g_512;
                    l_1055 = p_30;
                    (*l_970) = (safe_mod_func_uint64_t_u_u((((safe_div_func_int64_t_s_s((4294967289UL | ((safe_div_func_uint32_t_u_u((p_2362->g_630 == ((safe_sub_func_int64_t_s_s(l_1055, ((*l_1075) = ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((p_31 <= (l_1055 > (p_30 & (&p_2362->g_110 == ((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((p_2362->g_59 = l_1073) , ((*l_1074) &= p_2362->g_168.f0)), (*l_970))) || p_33), p_33)) , l_945))))) , p_29), 0x56EFL)), (*p_2362->g_271))))) && 18446744073709551615UL)))) & 0x43B9L)), p_31)) >= 1UL)), (-1L))) | 65535UL) != p_31), p_33));
                    return l_1055;
                }
            }
        }
    }
    l_1096 &= (p_2362->g_87 | (((*l_1094) = (((*l_1077) = l_1076) != (p_2362->g_1093 = (p_2362->g_1092 = ((*l_1088) = ((((*l_1078) = 0x2F150BBD1BCCB66AL) && (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((l_1084 |= (p_33 || (l_1083 == l_1083))), (((p_33 && ((safe_sub_func_int32_t_s_s(((p_31 && p_33) && (*p_2362->g_18)), p_30)) >= p_33)) && 5L) != l_1087))), (*p_32)))) , &p_2362->g_202)))))) < p_2362->g_761));
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_59 p_2362->g_59.f0 p_2362->g_76 p_2362->g_12 p_2362->g_19 p_2362->g_77 p_2362->g_69 p_2362->g_99 p_2362->g_87 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_126 p_2362->g_146 p_2362->g_168 p_2362->g_140 p_2362->g_173 p_2362->g_203 p_2362->g_204 p_2362->g_631 p_2362->g_143 p_2362->g_339 p_2362->g_447.f0 p_2362->g_205 p_2362->g_243 p_2362->g_656 p_2362->g_667 p_2362->g_617 p_2362->g_712 p_2362->g_435 p_2362->g_734 p_2362->g_202 p_2362->g_201 p_2362->g_18 p_2362->g_391 p_2362->g_241.f0 p_2362->g_227 p_2362->g_543.f0 p_2362->g_246 p_2362->g_788 p_2362->g_791 p_2362->g_798 p_2362->g_489 p_2362->g_758 p_2362->g_801 p_2362->g_511.f0 p_2362->g_846 p_2362->g_343 p_2362->g_630 p_2362->g_124 p_2362->g_889 p_2362->g_791.f0
 * writes: p_2362->g_59.f0 p_2362->g_69 p_2362->g_87 p_2362->g_77 p_2362->g_19 p_2362->g_103 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_124 p_2362->g_126 p_2362->g_146 p_2362->g_173 p_2362->g_99.f2 p_2362->g_140 p_2362->g_202 p_2362->g_76 p_2362->g_204 p_2362->g_207 p_2362->g_631 p_2362->g_339 p_2362->g_656 p_2362->g_143 p_2362->g_512 p_2362->g_99.f4 p_2362->g_205 p_2362->g_712 p_2362->g_761 p_2362->g_392 p_2362->g_777 p_2362->g_801 p_2362->g_617 p_2362->g_630
 */
int16_t  func_36(int16_t  p_37, uint8_t  p_38, int8_t * p_39, uint8_t  p_40, int32_t  p_41, struct S4 * p_2362)
{ /* block id: 5 */
    int8_t *l_58 = &p_2362->g_19;
    int8_t **l_174 = &p_2362->g_173;
    uint8_t *l_666 = &p_2362->g_656;
    int32_t l_683 = 0L;
    uint32_t *l_686[5][1][5] = {{{&p_2362->g_631,&p_2362->g_631,(void*)0,&p_2362->g_114,&p_2362->g_631}},{{&p_2362->g_631,&p_2362->g_631,(void*)0,&p_2362->g_114,&p_2362->g_631}},{{&p_2362->g_631,&p_2362->g_631,(void*)0,&p_2362->g_114,&p_2362->g_631}},{{&p_2362->g_631,&p_2362->g_631,(void*)0,&p_2362->g_114,&p_2362->g_631}},{{&p_2362->g_631,&p_2362->g_631,(void*)0,&p_2362->g_114,&p_2362->g_631}}};
    int32_t *l_689 = &p_2362->g_124;
    uint8_t *l_690 = &p_2362->g_339;
    int32_t l_700 = 0x4FFA23EDL;
    int32_t l_701 = 4L;
    int32_t l_702 = (-3L);
    int32_t l_703 = 0x0AB4811EL;
    int32_t l_705 = (-1L);
    int32_t l_706 = (-7L);
    int32_t l_707 = 0L;
    int32_t l_708 = 3L;
    int32_t l_709 = 1L;
    int32_t l_710 = 0x252B1399L;
    int32_t *l_725 = &l_701;
    uint16_t **l_768 = (void*)0;
    uint32_t l_845[6][9][4] = {{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}},{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}},{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}},{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}},{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}},{{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L},{0x8492460AL,0x06138DF6L,0xE08C26BBL,0xA2DC4D16L}}};
    uint8_t l_895[10][3][8] = {{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}},{{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL},{7UL,255UL,0UL,255UL,0x98L,0xA3L,0UL,251UL}}};
    int32_t *l_910 = (void*)0;
    int32_t *l_911 = &l_700;
    union U2 *l_912 = &p_2362->g_241;
    int32_t *l_913 = &l_708;
    int i, j, k;
    (*p_2362->g_203) = func_42(p_38, func_48((safe_div_func_uint32_t_u_u((p_37 == func_55(l_58, p_2362->g_59, p_2362)), p_40)), p_39, ((*l_174) = p_2362->g_173), p_2362->g_76, p_2362), p_39, p_41, p_2362->g_143, p_2362);
    if ((safe_rshift_func_int16_t_s_s(((((*l_666) |= p_37) > p_2362->g_667) < (safe_rshift_func_uint16_t_u_u((((((*l_690) |= (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((p_2362->g_617 , (-1L)), 1)))), ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((((*l_689) = (safe_div_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(l_683, (safe_lshift_func_uint16_t_u_s(p_41, (((*p_2362->g_204) = l_686[2][0][1]) == ((safe_rshift_func_uint8_t_u_s(248UL, ((*l_174) == (*l_174)))) , l_686[0][0][1])))))) && 0xEC16L) , l_683) == l_683), l_683))) , 1UL) , p_38), l_683)), p_41)) >= l_683)))) == 0L) != (*p_39)) && l_683), 11))), p_40)))
    { /* block id: 276 */
        int8_t l_696 = 0x35L;
        int32_t l_697 = 0L;
        int32_t l_698 = 0x01D3445FL;
        int32_t l_699[5][3][2] = {{{0x384E7291L,(-2L)},{0x384E7291L,(-2L)},{0x384E7291L,(-2L)}},{{0x384E7291L,(-2L)},{0x384E7291L,(-2L)},{0x384E7291L,(-2L)}},{{0x384E7291L,(-2L)},{0x384E7291L,(-2L)},{0x384E7291L,(-2L)}},{{0x384E7291L,(-2L)},{0x384E7291L,(-2L)},{0x384E7291L,(-2L)}},{{0x384E7291L,(-2L)},{0x384E7291L,(-2L)},{0x384E7291L,(-2L)}}};
        int64_t l_704 = (-1L);
        uint64_t *l_723[8][10][3] = {{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}},{{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110},{&p_2362->g_110,&p_2362->g_110,&p_2362->g_110}}};
        uint64_t **l_722 = &l_723[7][3][0];
        uint16_t *l_771 = &p_2362->g_120;
        int32_t *l_775[7] = {&l_706,&l_706,&l_706,&l_706,&l_706,&l_706,&l_706};
        int i, j, k;
        if (((**p_2362->g_243) == 0x09E09101L))
        { /* block id: 277 */
            union U1 **l_692 = (void*)0;
            union U1 *l_694 = &p_2362->g_103[6];
            union U1 **l_693 = &l_694;
            int32_t *l_695[9] = {&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683};
            int i;
            (*p_2362->g_76) = (safe_unary_minus_func_uint16_t_u(0UL));
            (*l_693) = (void*)0;
            p_2362->g_712++;
        }
        else
        { /* block id: 281 */
            int16_t *l_717 = &p_2362->g_99.f4;
            int32_t **l_724[1][2];
            uint32_t l_730 = 0x96273494L;
            uint16_t **l_733 = &p_2362->g_227[0];
            uint64_t l_774 = 0x0F785876D9D2CFE7L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_724[i][j] = &p_2362->g_76;
            }
            l_725 = func_48(p_40, p_39, ((*l_174) = (*p_2362->g_435)), &l_699[1][0][1], p_2362);
            if (((((safe_add_func_int32_t_s_s((((*l_717) = (l_699[3][0][0] >= (~(safe_div_func_uint64_t_u_u((l_730 , ((safe_div_func_int32_t_s_s((((*l_58) = 0L) || ((void*)0 != l_733)), p_37)) >= (p_2362->g_734 , ((*p_2362->g_243) != &p_2362->g_77)))), 7L))))) == (*l_725)), 0L)) , (void*)0) != &l_686[0][0][1]) >= (-9L)))
            { /* block id: 286 */
                int32_t *l_735 = (void*)0;
                uint64_t *l_757[9] = {&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0],&p_2362->g_758[2][0]};
                int32_t l_759 = 0x10688022L;
                int32_t *l_760 = &p_2362->g_761;
                int64_t *l_762 = &l_704;
                int32_t l_767 = 0x3CC0D755L;
                int i;
                (*p_2362->g_76) = (((*l_725) , ((l_735 == (void*)0) == 65527UL)) >= p_38);
                if ((safe_rshift_func_uint8_t_u_s((((*l_762) &= ((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_40, 0x60E8BC38L)) != ((!((*p_2362->g_202) , ((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((~((*l_760) = ((safe_sub_func_uint32_t_u_u(((((((*l_725) = (l_698 |= ((safe_unary_minus_func_uint32_t_u((((*l_690) ^= 0xCEL) < ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_725) , p_41), p_38)) >= ((**p_2362->g_203) != (((safe_mul_func_uint8_t_u_u((1UL <= p_40), 248UL)) || (*p_2362->g_18)) <= (*p_2362->g_76)))), 0x5EL)) & p_2362->g_77)))) && p_2362->g_19))) , (-7L)) == p_38) ^ 65526UL) & l_759), 0x4A731513L)) >= p_40))) , 0x2F51L), l_759)), p_38)), p_2362->g_77)) > p_41))) ^ p_2362->g_12)), 7L)) <= l_759)) ^ (-4L)), 5)))
                { /* block id: 293 */
                    (*p_2362->g_76) &= (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((2UL | l_767), p_37)), (((*p_2362->g_391) = l_768) != l_768)));
                    (*p_2362->g_76) = (safe_add_func_int32_t_s_s((0UL < p_2362->g_241.f0), (l_771 == (*l_733))));
                }
                else
                { /* block id: 297 */
                    uint8_t l_778 = 253UL;
                    for (p_2362->g_712 = 8; (p_2362->g_712 > 22); p_2362->g_712++)
                    { /* block id: 300 */
                        union U0 **l_776 = &p_2362->g_202;
                        l_775[1] = &l_699[1][0][1];
                        p_2362->g_777[2] = ((*l_776) = (void*)0);
                    }
                    l_778--;
                    (**p_2362->g_246) = (p_2362->g_543[0].f0 || ((*l_717) = p_40));
                    (*l_725) = (+(**p_2362->g_243));
                }
                for (p_2362->g_712 = 13; (p_2362->g_712 == 50); p_2362->g_712 = safe_add_func_int16_t_s_s(p_2362->g_712, 8))
                { /* block id: 312 */
                    uint32_t l_784 = 0x6EE1246CL;
                    for (l_709 = 2; (l_709 >= 0); l_709 -= 1)
                    { /* block id: 315 */
                        l_784 ^= (safe_unary_minus_func_uint64_t_u((*l_725)));
                    }
                }
            }
            else
            { /* block id: 319 */
                uint64_t l_785 = 0xC84338E8114FDC36L;
                l_785++;
            }
        }
        (*l_725) &= p_41;
        l_702 ^= ((*l_725) = (p_2362->g_788[3][0][2] , (*l_725)));
        for (p_2362->g_143 = 0; (p_2362->g_143 < 25); ++p_2362->g_143)
        { /* block id: 328 */
            int32_t **l_800 = (void*)0;
            int32_t ***l_799[3];
            int i;
            for (i = 0; i < 3; i++)
                l_799[i] = &l_800;
            (*p_2362->g_76) = (+(p_2362->g_791 , (((safe_mod_func_uint8_t_u_u(p_40, ((((p_2362->g_59 , (18446744073709551609UL || ((p_37 < ((--(*l_771)) && (p_2362->g_798 , ((p_2362->g_801 = (void*)0) == &l_725)))) , (safe_add_func_int32_t_s_s(p_38, p_38))))) && p_40) , p_2362->g_617) | 0x203E0F88A823D6CCL))) & p_2362->g_489[1][3][0]) , 0x6DB16F6BL)));
        }
    }
    else
    { /* block id: 333 */
        int64_t *l_808 = &p_2362->g_143;
        int32_t l_811 = (-5L);
        int32_t ***l_815 = &p_2362->g_801;
        (***l_815) &= (safe_sub_func_uint32_t_u_u((((p_2362->g_59 , &p_2362->g_143) != (p_40 , l_808)) > (p_2362->g_758[5][0] <= (safe_rshift_func_int16_t_s_s(l_811, 7)))), (safe_unary_minus_func_uint8_t_u((((*l_725) = (+((*l_666) = ((safe_lshift_func_uint8_t_u_s((!((void*)0 != l_815)), 7)) , (p_2362->g_667 == p_38))))) & (*p_39))))));
    }
    for (p_2362->g_617 = 0; (p_2362->g_617 != 1); p_2362->g_617 = safe_add_func_int32_t_s_s(p_2362->g_617, 1))
    { /* block id: 340 */
        int64_t l_818 = 0x0A6A14200F0FD61BL;
        int32_t *l_819[4][3] = {{&l_710,(void*)0,&p_2362->g_77},{&l_710,(void*)0,&p_2362->g_77},{&l_710,(void*)0,&p_2362->g_77},{&l_710,(void*)0,&p_2362->g_77}};
        union U0 **l_863 = &p_2362->g_202;
        uint32_t ***l_878[4][1][7] = {{{&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204}},{{&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204}},{{&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204}},{{&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204,&p_2362->g_204}}};
        uint32_t ****l_877 = &l_878[1][0][1];
        int i, j, k;
        l_707 = (l_818 > l_818);
        for (l_818 = 0; (l_818 != 14); ++l_818)
        { /* block id: 344 */
            int32_t *l_836 = (void*)0;
            int32_t l_850 = (-1L);
            union U3 l_869 = {0x04L};
            uint8_t l_897 = 0x77L;
            for (p_2362->g_59.f0 = 0; (p_2362->g_59.f0 < (-10)); p_2362->g_59.f0 = safe_sub_func_uint8_t_u_u(p_2362->g_59.f0, 5))
            { /* block id: 347 */
                int32_t **l_837 = &l_836;
                uint16_t *l_844 = &p_2362->g_120;
                if ((safe_add_func_int8_t_s_s((*p_39), (safe_mul_func_uint8_t_u_u((0x61CBL || p_2362->g_511.f0), (((safe_mod_func_int64_t_s_s(((((safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x7EA1L, p_38)), ((((((0x6BA866DF81D32163L >= ((((((*l_837) = l_836) != (void*)0) || ((((safe_div_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*l_844) = 0xC990L) || p_2362->g_617), p_38)), p_2362->g_140[2])) & p_40) < 0x1FFD3C9140B1E0CCL), p_37)) , (*p_39)) > (*p_39)) , 4294967286UL)) | 0xA54C103A1CCDA3B1L) < (*p_39))) , (*p_39)) & p_37) >= 0x5CCCFD3220325591L) > p_40) ^ 0x61L))) & p_40), 1UL)) != l_845[5][2][3]) >= p_40) < 0x5B09L), 0xB620E126EF803012L)) && p_2362->g_846) != p_2362->g_343))))))
                { /* block id: 350 */
                    int32_t l_849 = 0x58CDEAAFL;
                    for (p_2362->g_110 = (-18); (p_2362->g_110 <= 46); p_2362->g_110 = safe_add_func_int32_t_s_s(p_2362->g_110, 7))
                    { /* block id: 353 */
                        return l_849;
                    }
                    l_850 |= (l_768 != &l_844);
                    for (p_2362->g_114 = (-25); (p_2362->g_114 != 6); p_2362->g_114 = safe_add_func_uint16_t_u_u(p_2362->g_114, 1))
                    { /* block id: 359 */
                        int32_t *l_853 = (void*)0;
                        if (p_40)
                            break;
                        (*l_837) = l_819[0][0];
                        (*l_837) = (p_37 , l_853);
                        l_849 = (p_40 < p_2362->g_143);
                    }
                }
                else
                { /* block id: 365 */
                    union U0 **l_860[6][8] = {{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202},{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202},{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202},{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202},{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202},{&p_2362->g_202,&p_2362->g_202,&p_2362->g_777[0],&p_2362->g_777[3],&p_2362->g_202,&p_2362->g_777[3],&p_2362->g_777[0],&p_2362->g_202}};
                    int32_t l_865[9][1][2] = {{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}},{{1L,(-7L)}}};
                    int32_t *l_866 = &l_865[3][0][0];
                    uint32_t ***l_875 = &p_2362->g_204;
                    uint32_t ****l_874 = &l_875;
                    int i, j, k;
                    for (l_705 = 6; (l_705 >= 0); l_705 -= 1)
                    { /* block id: 368 */
                        l_702 = p_41;
                    }
                    for (p_2362->g_630 = 15; (p_2362->g_630 == (-27)); p_2362->g_630--)
                    { /* block id: 373 */
                        union U0 **l_858[7] = {&p_2362->g_777[6],&p_2362->g_777[5],&p_2362->g_777[6],&p_2362->g_777[6],&p_2362->g_777[5],&p_2362->g_777[6],&p_2362->g_777[6]};
                        union U0 ***l_859[3][9][2] = {{{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]}},{{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]}},{{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]},{&l_858[5],&l_858[5]}}};
                        int32_t l_864 = 0x427F5CF8L;
                        int i, j, k;
                        l_864 |= (safe_add_func_int64_t_s_s(p_2362->g_110, ((l_860[1][4] = l_858[5]) != ((p_2362->g_114--) , l_863))));
                        l_850 &= l_865[3][0][0];
                        if (p_41)
                            continue;
                        l_866 = &l_864;
                    }
                    for (p_2362->g_124 = 0; (p_2362->g_124 <= 2); p_2362->g_124 += 1)
                    { /* block id: 383 */
                        uint32_t *****l_876 = &l_874;
                        int64_t *l_896 = &p_2362->g_512;
                        int i, j, k;
                        l_836 = (*l_837);
                        l_897 = ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((+((0x6FL <= (!(3UL != (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((!((void*)0 == p_2362->g_889)), (((p_2362->g_99.f4 = (((((p_41 & 0xD464L) || ((*l_896) = (p_41 <= (((((((p_2362->g_59 , (((safe_rshift_func_int8_t_s_u(((((p_40 , p_38) , p_38) > 0L) < p_2362->g_126), 4)) || l_895[0][1][3]) > p_2362->g_846)) || 0x879D7325L) <= p_2362->g_791.f0) & 1L) == p_2362->g_617) , p_41) != 0x0770472EL)))) || 0xD25E50F5L) , (void*)0) == (void*)0)) , p_2362->g_126) | 0x5EF1L))), p_38))))) || p_2362->g_489[0][3][0])), p_40)), p_38)), (-9L))) || p_38);
                        l_850 &= p_41;
                    }
                }
            }
        }
        p_2362->g_777[0] = (*l_863);
        for (p_2362->g_114 = 1; (p_2362->g_114 >= 13); p_2362->g_114 = safe_add_func_int8_t_s_s(p_2362->g_114, 5))
        { /* block id: 398 */
            int32_t l_904 = (-1L);
            int32_t l_909 = 0x18BF361EL;
            l_909 ^= (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_mod_func_uint64_t_u_u((((+(p_40 > (l_702 &= 0x6CDB52DEL))) && l_904) , (((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((p_2362->g_631 = p_37), (p_38 && p_40))), 0x08L)) ^ (l_703 |= p_37)) | l_904)), p_38))));
        }
    }
    (*l_913) &= (((*l_911) = ((-1L) | 1UL)) > ((void*)0 != l_912));
    return p_2362->g_143;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_19 p_2362->g_339 p_2362->g_447.f0 p_2362->g_12 p_2362->g_204 p_2362->g_205 p_2362->g_114 p_2362->g_77 p_2362->g_243 p_2362->g_76
 * writes: p_2362->g_339 p_2362->g_656 p_2362->g_143 p_2362->g_512 p_2362->g_114 p_2362->g_99.f4 p_2362->g_77
 */
int32_t * func_42(uint32_t  p_43, int32_t * p_44, int8_t * p_45, int64_t  p_46, int32_t  p_47, struct S4 * p_2362)
{ /* block id: 258 */
    union U1 *l_650 = &p_2362->g_103[4];
    int32_t l_651 = 1L;
    uint8_t *l_652 = &p_2362->g_339;
    uint8_t *l_655 = &p_2362->g_656;
    int32_t l_657 = (-9L);
    uint32_t l_658 = 4294967295UL;
    int64_t *l_659[1][4][6] = {{{&p_2362->g_512,(void*)0,(void*)0,&p_2362->g_512,&p_2362->g_512,(void*)0},{&p_2362->g_512,(void*)0,(void*)0,&p_2362->g_512,&p_2362->g_512,(void*)0},{&p_2362->g_512,(void*)0,(void*)0,&p_2362->g_512,&p_2362->g_512,(void*)0},{&p_2362->g_512,(void*)0,(void*)0,&p_2362->g_512,&p_2362->g_512,(void*)0}}};
    int32_t l_662 = 0x7CA6C933L;
    int16_t *l_663 = &p_2362->g_99.f4;
    int i, j, k;
    (*p_44) ^= ((+(((*l_663) = (((safe_div_func_uint32_t_u_u((p_43 = (l_662 &= ((**p_2362->g_204) &= (safe_sub_func_int64_t_s_s((p_2362->g_512 = ((safe_sub_func_int8_t_s_s((*p_45), ((p_2362->g_143 = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_655) = ((l_650 != (l_651 , l_650)) , (++(*l_652)))), (l_658 = ((*p_45) > (l_657 ^= l_651))))), 0x6E62L))) ^ (safe_div_func_uint16_t_u_u((~0x90B6L), ((p_2362->g_447.f0 , 0x4E5EL) || p_2362->g_12)))))) && p_43)), p_47))))), l_651)) || 1UL) & l_651)) == 0L)) ^ l_651);
    return (*p_2362->g_243);
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_77 p_2362->g_126 p_2362->g_114 p_2362->g_19 p_2362->g_59 p_2362->g_140 p_2362->g_76 p_2362->g_12 p_2362->g_203 p_2362->g_204 p_2362->g_631
 * writes: p_2362->g_99.f2 p_2362->g_114 p_2362->g_77 p_2362->g_124 p_2362->g_140 p_2362->g_87 p_2362->g_202 p_2362->g_76 p_2362->g_204 p_2362->g_207 p_2362->g_631
 */
int32_t * func_48(uint64_t  p_49, int8_t * p_50, int8_t * p_51, int32_t * p_52, struct S4 * p_2362)
{ /* block id: 73 */
    uint64_t l_181 = 0x83F7B260C6B045E1L;
    int32_t **l_182 = (void*)0;
    int32_t *l_183 = (void*)0;
    int32_t *l_184 = &p_2362->g_99.f2;
    uint32_t *l_185 = &p_2362->g_114;
    int32_t l_210[4][8] = {{0x39877F82L,2L,(-1L),2L,0x39877F82L,0x39877F82L,2L,(-1L)},{0x39877F82L,2L,(-1L),2L,0x39877F82L,0x39877F82L,2L,(-1L)},{0x39877F82L,2L,(-1L),2L,0x39877F82L,0x39877F82L,2L,(-1L)},{0x39877F82L,2L,(-1L),2L,0x39877F82L,0x39877F82L,2L,(-1L)}};
    uint8_t l_221 = 252UL;
    uint64_t *l_351 = &l_181;
    union U3 l_423[1][5] = {{{0L},{0L},{0L},{0L},{0L}}};
    uint16_t *l_452 = &p_2362->g_87;
    uint16_t ****l_528 = &p_2362->g_391;
    union U2 *l_544[2];
    uint32_t ***l_601 = &p_2362->g_204;
    int32_t l_624 = 0x1837E17FL;
    uint16_t l_637 = 0x0060L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_544[i] = &p_2362->g_168;
    (*p_52) = ((*p_52) >= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x2793L, ((((((*l_185) |= (p_2362->g_126 || ((*l_184) = (l_181 && (l_182 != &p_52))))) , ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_2362->g_19, (safe_rshift_func_int16_t_s_u(((p_2362->g_59 , p_49) >= 0xE3L), p_2362->g_140[3])))), p_49)) | 0L)) ^ p_49) | p_49) & p_49))), 7)) & p_49), 0)));
    if ((*p_2362->g_76))
    { /* block id: 77 */
        uint16_t *l_193 = (void*)0;
        uint16_t **l_192[1][4] = {{&l_193,&l_193,&l_193,&l_193}};
        union U0 *l_200 = &p_2362->g_201;
        int32_t *l_208 = &p_2362->g_69;
        int64_t l_258 = (-3L);
        int32_t l_290 = 0x724748E8L;
        int32_t l_291 = 1L;
        uint32_t l_433 = 0x75C95F3DL;
        int8_t l_504 = 0x15L;
        int32_t l_516 = 1L;
        uint16_t ****l_560 = (void*)0;
        int32_t l_606 = 0x347B3997L;
        int32_t l_607 = 1L;
        int32_t l_609 = 8L;
        int32_t l_610 = 0x7350050DL;
        int32_t l_611 = (-2L);
        int32_t l_612 = 1L;
        int32_t l_613 = 0x701B0271L;
        int32_t l_614 = (-1L);
        int32_t l_615 = 0x1F65F2D6L;
        int32_t l_616 = 0x7CFBB92CL;
        int i, j;
        if (((p_2362->g_12 | ((void*)0 != l_192[0][1])) , (*p_2362->g_76)))
        { /* block id: 78 */
            (*p_52) ^= 3L;
            for (p_2362->g_124 = 0; (p_2362->g_124 == (-21)); p_2362->g_124--)
            { /* block id: 82 */
                for (p_2362->g_99.f2 = 0; p_2362->g_99.f2 < 8; p_2362->g_99.f2 += 1)
                {
                    p_2362->g_140[p_2362->g_99.f2] = 1L;
                }
                for (p_2362->g_87 = 0; (p_2362->g_87 == 34); p_2362->g_87 = safe_add_func_int8_t_s_s(p_2362->g_87, 6))
                { /* block id: 86 */
                    for (l_181 = 26; (l_181 == 16); l_181 = safe_sub_func_int64_t_s_s(l_181, 2))
                    { /* block id: 89 */
                        return p_52;
                    }
                }
            }
            p_2362->g_202 = l_200;
            (*p_2362->g_203) = p_52;
        }
        else
        { /* block id: 96 */
            uint32_t ***l_206[2];
            int32_t **l_209 = &l_183;
            int32_t *l_211 = &l_210[0][1];
            int32_t l_212 = 0L;
            int32_t *l_213 = &l_210[0][1];
            int32_t *l_214 = &p_2362->g_99.f2;
            int32_t *l_215 = &l_210[1][7];
            int32_t *l_216 = &p_2362->g_168.f0;
            int32_t *l_217 = &p_2362->g_168.f2;
            int32_t *l_218 = (void*)0;
            int32_t *l_219 = &p_2362->g_69;
            int32_t *l_220[3][8][9] = {{{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212}},{{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212}},{{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212},{(void*)0,(void*)0,&p_2362->g_77,&p_2362->g_69,&l_210[1][1],&p_2362->g_168.f0,&p_2362->g_168.f0,&l_212,&l_212}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_206[i] = &p_2362->g_204;
            p_2362->g_207 = (p_2362->g_204 = p_2362->g_204);
            (*l_209) = l_208;
            --l_221;
        }
    }
    else
    { /* block id: 252 */
        int8_t l_623 = 3L;
        int32_t *l_625 = (void*)0;
        int32_t *l_626 = &p_2362->g_69;
        int32_t *l_627 = (void*)0;
        int32_t *l_628[9] = {&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2,&p_2362->g_99.f2};
        int64_t l_629 = 0x31D3BC19BBE34083L;
        uint32_t l_634[10][9] = {{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L},{0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L,0xA7CE6A23L,0x39D5E637L,0xA7CE6A23L}};
        int i, j;
        p_2362->g_631--;
        ++l_634[9][5];
        l_637--;
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_2362->g_76 p_2362->g_12 p_2362->g_19 p_2362->g_69 p_2362->g_99 p_2362->g_77 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_126 p_2362->g_146 p_2362->g_168 p_2362->g_140 p_2362->g_59.f0 p_2362->g_87
 * writes: p_2362->g_59.f0 p_2362->g_69 p_2362->g_87 p_2362->g_77 p_2362->g_19 p_2362->g_103 p_2362->g_110 p_2362->g_114 p_2362->g_120 p_2362->g_124 p_2362->g_126 p_2362->g_146
 */
uint32_t  func_55(int8_t * p_56, union U3  p_57, struct S4 * p_2362)
{ /* block id: 6 */
    int32_t *l_68 = &p_2362->g_69;
    int32_t *l_75 = (void*)0;
    int32_t **l_74 = &l_75;
    uint16_t *l_84 = (void*)0;
    uint16_t *l_85 = (void*)0;
    uint16_t *l_86 = &p_2362->g_87;
    int32_t l_136 = 0x3F7D50A4L;
    union U2 *l_172 = &p_2362->g_168;
lbl_98:
    for (p_2362->g_59.f0 = (-28); (p_2362->g_59.f0 == 9); p_2362->g_59.f0++)
    { /* block id: 9 */
        return p_57.f0;
    }
    if ((((safe_mod_func_int64_t_s_s((-2L), (((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((-1L), ((*l_68) = p_57.f0))), (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((+(((*l_74) = l_68) == p_2362->g_76)) , (safe_mod_func_int32_t_s_s(((*p_2362->g_76) = (safe_mod_func_uint64_t_u_u(p_2362->g_12, ((*p_56) ^ (safe_mul_func_uint16_t_u_u(((*l_86) = 0x7F9BL), (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((*l_74) != (void*)0), p_2362->g_19)), 0L)))))))), p_57.f0))), 3L)), 0x10L)))) >= p_2362->g_12) || p_2362->g_19) | p_57.f0) , (-2L)))) , 0L) || 1UL))
    { /* block id: 16 */
lbl_102:
        for (p_2362->g_77 = 0; (p_2362->g_77 < (-24)); p_2362->g_77--)
        { /* block id: 19 */
            for (p_2362->g_59.f0 = (-16); (p_2362->g_59.f0 <= 29); ++p_2362->g_59.f0)
            { /* block id: 22 */
                for (p_2362->g_19 = (-17); (p_2362->g_19 >= (-18)); p_2362->g_19--)
                { /* block id: 25 */
                    return p_2362->g_69;
                }
            }
            return p_57.f0;
        }
    }
    else
    { /* block id: 31 */
        uint32_t l_149[2];
        int32_t l_167 = 0L;
        int32_t **l_171 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_149[i] = 0xCC279608L;
        if (p_57.f0)
            goto lbl_98;
        if ((p_2362->g_99 , (-1L)))
        { /* block id: 33 */
            return p_57.f0;
        }
        else
        { /* block id: 35 */
            int32_t *l_105 = &p_2362->g_77;
            int32_t l_138 = 0x60341E9FL;
            int32_t l_139 = 0L;
            int32_t l_141 = 0x49D89B7AL;
            int32_t l_142[9][9][3] = {{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}},{{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)},{1L,0x4AB74881L,(-1L)}}};
            int32_t l_169 = 1L;
            int32_t l_170 = 0x53CA78DFL;
            int i, j, k;
lbl_150:
            (*p_2362->g_76) &= p_57.f0;
            for (p_2362->g_87 = 0; (p_2362->g_87 > 6); p_2362->g_87 = safe_add_func_int32_t_s_s(p_2362->g_87, 1))
            { /* block id: 39 */
                int8_t l_104 = 0x3BL;
                int32_t l_119 = 0x35CE3A63L;
                int32_t *l_160 = &l_142[3][3][2];
                if (p_2362->g_19)
                    goto lbl_102;
                for (p_2362->g_77 = 0; p_2362->g_77 < 9; p_2362->g_77 += 1)
                {
                    union U1 tmp = {{1L}};
                    p_2362->g_103[p_2362->g_77] = tmp;
                }
                if (l_104)
                { /* block id: 42 */
                    uint32_t *l_113[4][6] = {{&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114},{&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114},{&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114},{&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114,&p_2362->g_114}};
                    int32_t *l_123 = &p_2362->g_124;
                    int32_t *l_125 = &p_2362->g_126;
                    int32_t l_137 = 0x2103C12DL;
                    int32_t l_144 = 0L;
                    int32_t l_145 = 0x250DF4C6L;
                    int32_t **l_151 = &l_68;
                    int i, j;
                    l_105 = &p_2362->g_69;
                    if (((((safe_sub_func_uint32_t_u_u(((p_57.f0 < (safe_div_func_uint16_t_u_u(1UL, (--p_2362->g_110)))) , (**l_74)), (p_2362->g_114 |= 0xD88F4020L))) | (safe_div_func_int64_t_s_s(p_2362->g_77, (safe_rshift_func_int8_t_s_u((((*l_125) &= ((*l_123) = ((++p_2362->g_120) | ((p_2362->g_19 >= p_57.f0) & ((p_57.f0 >= p_57.f0) != 4294967289UL))))) , (-1L)), 2))))) > p_57.f0) <= 249UL))
                    { /* block id: 49 */
                        int32_t *l_127 = &p_2362->g_77;
                        int32_t *l_128 = &p_2362->g_77;
                        int32_t *l_129 = (void*)0;
                        int32_t *l_130 = &l_119;
                        int32_t *l_131 = &l_119;
                        int32_t *l_132 = &l_119;
                        int32_t *l_133 = (void*)0;
                        int32_t *l_134 = &l_119;
                        int32_t *l_135[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_135[i] = &p_2362->g_69;
                        p_2362->g_146++;
                        if (l_149[0])
                            break;
                        if (p_2362->g_19)
                            goto lbl_150;
                        (*l_74) = &p_2362->g_77;
                    }
                    else
                    { /* block id: 54 */
                        (*l_105) = (l_145 , l_104);
                    }
                    (*l_151) = ((*l_74) = &l_142[0][7][0]);
                }
                else
                { /* block id: 59 */
                    int32_t *l_161 = &l_138;
                    uint16_t **l_166 = &l_86;
                    (*p_2362->g_76) = ((safe_rshift_func_int8_t_s_u((p_57.f0 >= ((*l_160) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((((safe_lshift_func_uint8_t_u_u(((((*l_74) = l_160) != l_161) != (safe_rshift_func_int8_t_s_u((p_57.f0 < (((safe_div_func_int32_t_s_s((((*l_166) = &p_2362->g_120) != &p_2362->g_120), l_167)) && 0L) || ((p_2362->g_168 , (*l_161)) > p_57.f0))), (*l_105)))), l_169)) != l_149[0]) <= l_170) , 0x3CAE63CDL) == 0x6967E9F4L) || (*p_2362->g_76)), (*l_160))), 5)))), p_2362->g_126)) ^ 0x31L);
                    l_171 = &l_160;
                    l_172 = &p_2362->g_168;
                }
            }
            return p_2362->g_140[2];
        }
    }
    return p_2362->g_140[6];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_2363;
    struct S4* p_2362 = &c_2363;
    struct S4 c_2364 = {
        (-6L), // p_2362->g_12
        7L, // p_2362->g_19
        &p_2362->g_19, // p_2362->g_18
        {0L}, // p_2362->g_59
        0x65392FB3L, // p_2362->g_69
        1L, // p_2362->g_77
        &p_2362->g_77, // p_2362->g_76
        0UL, // p_2362->g_87
        {-9L}, // p_2362->g_99
        {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_2362->g_103
        18446744073709551615UL, // p_2362->g_110
        0xD5DC534FL, // p_2362->g_114
        65535UL, // p_2362->g_120
        5L, // p_2362->g_124
        0x09581AD2L, // p_2362->g_126
        {0x0433L,0x0433L,0x0433L,0x0433L,0x0433L,0x0433L,0x0433L,0x0433L}, // p_2362->g_140
        0x526D738FFA6F56A4L, // p_2362->g_143
        254UL, // p_2362->g_146
        {0L}, // p_2362->g_168
        (void*)0, // p_2362->g_173
        {-1L}, // p_2362->g_201
        &p_2362->g_201, // p_2362->g_202
        &p_2362->g_76, // p_2362->g_203
        &p_2362->g_114, // p_2362->g_205
        &p_2362->g_205, // p_2362->g_204
        &p_2362->g_205, // p_2362->g_207
        {&p_2362->g_87}, // p_2362->g_227
        {0x397C7D5AL}, // p_2362->g_239
        {0x3672675DL}, // p_2362->g_241
        &p_2362->g_76, // p_2362->g_243
        &p_2362->g_76, // p_2362->g_246
        &p_2362->g_120, // p_2362->g_271
        1UL, // p_2362->g_339
        0x72L, // p_2362->g_343
        (void*)0, // p_2362->g_392
        &p_2362->g_392, // p_2362->g_391
        0x94B6A790L, // p_2362->g_420
        (void*)0, // p_2362->g_426
        &p_2362->g_173, // p_2362->g_435
        {{{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435}},{{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435}},{{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435}},{{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435},{&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435,&p_2362->g_435}}}, // p_2362->g_434
        {0L}, // p_2362->g_447
        {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}}, // p_2362->g_489
        &p_2362->g_76, // p_2362->g_493
        {-1L}, // p_2362->g_511
        (-4L), // p_2362->g_512
        {{0x7D327A6EL},{0x7D327A6EL},{0x7D327A6EL}}, // p_2362->g_543
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2362->g_548
        0x4888L, // p_2362->g_617
        0x65L, // p_2362->g_630
        0xB5232DBBL, // p_2362->g_631
        252UL, // p_2362->g_656
        0x51L, // p_2362->g_667
        (-3L), // p_2362->g_711
        0UL, // p_2362->g_712
        {0x6C0D53A6L}, // p_2362->g_734
        {{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L},{0x6C108CAC7C888D88L}}, // p_2362->g_758
        0x176D4010L, // p_2362->g_761
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2362->g_777
        {{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}},{{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}},{{0x550459C5L},{0x04E76D32L},{0x7CA020F8L},{-9L},{-9L},{0x7CA020F8L},{0x04E76D32L}}}}, // p_2362->g_788
        {0x5C94C584L}, // p_2362->g_791
        {0x7A12E5F0L}, // p_2362->g_798
        &p_2362->g_76, // p_2362->g_801
        (-1L), // p_2362->g_846
        (void*)0, // p_2362->g_892
        &p_2362->g_892, // p_2362->g_891
        {&p_2362->g_891,&p_2362->g_891,&p_2362->g_891,&p_2362->g_891,&p_2362->g_891,&p_2362->g_891,&p_2362->g_891}, // p_2362->g_890
        &p_2362->g_890[3], // p_2362->g_889
        (-2L), // p_2362->g_933
        {0x37C8CA26L}, // p_2362->g_948
        &p_2362->g_204, // p_2362->g_959
        (void*)0, // p_2362->g_967
        &p_2362->g_967, // p_2362->g_966
        &p_2362->g_511, // p_2362->g_1036
        &p_2362->g_1036, // p_2362->g_1035
        &p_2362->g_1035, // p_2362->g_1034
        &p_2362->g_777[5], // p_2362->g_1092
        (void*)0, // p_2362->g_1093
        {{0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L,0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L},{0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L,0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L},{0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L,0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L},{0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L,0x7F6C8433A433A506L,1UL,0x7F6C8433A433A506L}}, // p_2362->g_1114
        (void*)0, // p_2362->g_1169
        {{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}},{{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)},{0L,0x06D6L,(-1L)}}}, // p_2362->g_1177
        &p_2362->g_77, // p_2362->g_1214
        {{{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99}},{{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99}},{{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99},{&p_2362->g_99,&p_2362->g_99,&p_2362->g_99}}}, // p_2362->g_1223
        &p_2362->g_1223[1][3][0], // p_2362->g_1222
        0xFAF9L, // p_2362->g_1226
        (void*)0, // p_2362->g_1263
        0x2EC227CCL, // p_2362->g_1271
        8L, // p_2362->g_1272
        (-1L), // p_2362->g_1273
        0x59L, // p_2362->g_1274
        {0x01B69B99L}, // p_2362->g_1283
        {&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76}, // p_2362->g_1292
        {{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0},{&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,(void*)0}}, // p_2362->g_1293
        {&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76}, // p_2362->g_1294
        {0x581C82FFL}, // p_2362->g_1311
        1UL, // p_2362->g_1381
        &p_2362->g_1381, // p_2362->g_1380
        &p_2362->g_1380, // p_2362->g_1379
        &p_2362->g_1379, // p_2362->g_1378
        {0x606D0EC6L}, // p_2362->g_1393
        {0L}, // p_2362->g_1395
        (void*)0, // p_2362->g_1437
        &p_2362->g_761, // p_2362->g_1471
        {0x48121B1DL,0x48121B1DL,0x48121B1DL,0x48121B1DL}, // p_2362->g_1476
        &p_2362->g_1311.f2, // p_2362->g_1484
        0xF2L, // p_2362->g_1491
        253UL, // p_2362->g_1527
        {&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76}, // p_2362->g_1528
        &p_2362->g_76, // p_2362->g_1529
        {0L}, // p_2362->g_1584
        (void*)0, // p_2362->g_1601
        {{{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76}},{{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76},{&p_2362->g_76,&p_2362->g_76,(void*)0,(void*)0,&p_2362->g_76,(void*)0,&p_2362->g_76,&p_2362->g_76,&p_2362->g_76}}}, // p_2362->g_1602
        &p_2362->g_76, // p_2362->g_1603
        (void*)0, // p_2362->g_1614
        {0x2B60FD53L}, // p_2362->g_1615
        {0x5329C83EL}, // p_2362->g_1683
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2362->g_1692
        {-10L}, // p_2362->g_1697
        {-1L}, // p_2362->g_1713
        {{0x0D251BE7L},{0x0D251BE7L},{0x0D251BE7L}}, // p_2362->g_1717
        {{1L},{1L},{1L},{1L},{1L},{1L},{1L}}, // p_2362->g_1784
        {0x5B924935L}, // p_2362->g_1797
        {0L}, // p_2362->g_1800
        &p_2362->g_1800, // p_2362->g_1799
        &p_2362->g_1169, // p_2362->g_1816
        &p_2362->g_1816, // p_2362->g_1815
        {&p_2362->g_1815,&p_2362->g_1815,&p_2362->g_1815,&p_2362->g_1815,&p_2362->g_1815}, // p_2362->g_1814
        3UL, // p_2362->g_1869
        {1L}, // p_2362->g_1891
        {{{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0}},{{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0},{(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0,(void*)0,(void*)0,&p_2362->g_1683.f0,&p_2362->g_1476[1],&p_2362->g_1683.f0}}}, // p_2362->g_1920
        &p_2362->g_1393.f0, // p_2362->g_1921
        {0x411FFD8C5D64B9EFL}, // p_2362->g_1954
        {0L}, // p_2362->g_1966
        {0x22639A45L}, // p_2362->g_1969
        &p_2362->g_241.f0, // p_2362->g_1978
        (void*)0, // p_2362->g_1979
        {1L}, // p_2362->g_2042
        {-1L}, // p_2362->g_2074
        &p_2362->g_1395.f0, // p_2362->g_2077
        &p_2362->g_59, // p_2362->g_2080
        {0L}, // p_2362->g_2094
        {{-10L},{-10L},{-10L},{-10L},{-10L},{-10L}}, // p_2362->g_2099
        {0x55FDDE56L}, // p_2362->g_2139
        &p_2362->g_1799, // p_2362->g_2172
        {&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172,&p_2362->g_2172}, // p_2362->g_2171
        {0x1081F77FL}, // p_2362->g_2177
        &p_2362->g_630, // p_2362->g_2185
        0xE3E8DDC7L, // p_2362->g_2243
        &p_2362->g_967, // p_2362->g_2311
        &p_2362->g_2311, // p_2362->g_2310
        {0x0E68A72DF72C8A46L}, // p_2362->g_2318
        {{{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L}},{{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L}},{{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L},{0x14480FA8L}}}, // p_2362->g_2328
        (-4L), // p_2362->g_2345
        {0x539F98AEL}, // p_2362->g_2359
    };
    c_2363 = c_2364;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2362);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2362->g_12, "p_2362->g_12", print_hash_value);
    transparent_crc(p_2362->g_19, "p_2362->g_19", print_hash_value);
    transparent_crc(p_2362->g_59.f0, "p_2362->g_59.f0", print_hash_value);
    transparent_crc(p_2362->g_69, "p_2362->g_69", print_hash_value);
    transparent_crc(p_2362->g_77, "p_2362->g_77", print_hash_value);
    transparent_crc(p_2362->g_87, "p_2362->g_87", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2362->g_103[i].f0, "p_2362->g_103[i].f0", print_hash_value);

    }
    transparent_crc(p_2362->g_110, "p_2362->g_110", print_hash_value);
    transparent_crc(p_2362->g_114, "p_2362->g_114", print_hash_value);
    transparent_crc(p_2362->g_120, "p_2362->g_120", print_hash_value);
    transparent_crc(p_2362->g_124, "p_2362->g_124", print_hash_value);
    transparent_crc(p_2362->g_126, "p_2362->g_126", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2362->g_140[i], "p_2362->g_140[i]", print_hash_value);

    }
    transparent_crc(p_2362->g_143, "p_2362->g_143", print_hash_value);
    transparent_crc(p_2362->g_146, "p_2362->g_146", print_hash_value);
    transparent_crc(p_2362->g_168.f0, "p_2362->g_168.f0", print_hash_value);
    transparent_crc(p_2362->g_239.f0, "p_2362->g_239.f0", print_hash_value);
    transparent_crc(p_2362->g_339, "p_2362->g_339", print_hash_value);
    transparent_crc(p_2362->g_343, "p_2362->g_343", print_hash_value);
    transparent_crc(p_2362->g_420, "p_2362->g_420", print_hash_value);
    transparent_crc(p_2362->g_447.f0, "p_2362->g_447.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_2362->g_489[i][j][k], "p_2362->g_489[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2362->g_511.f0, "p_2362->g_511.f0", print_hash_value);
    transparent_crc(p_2362->g_512, "p_2362->g_512", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2362->g_543[i].f0, "p_2362->g_543[i].f0", print_hash_value);

    }
    transparent_crc(p_2362->g_617, "p_2362->g_617", print_hash_value);
    transparent_crc(p_2362->g_630, "p_2362->g_630", print_hash_value);
    transparent_crc(p_2362->g_631, "p_2362->g_631", print_hash_value);
    transparent_crc(p_2362->g_656, "p_2362->g_656", print_hash_value);
    transparent_crc(p_2362->g_667, "p_2362->g_667", print_hash_value);
    transparent_crc(p_2362->g_711, "p_2362->g_711", print_hash_value);
    transparent_crc(p_2362->g_712, "p_2362->g_712", print_hash_value);
    transparent_crc(p_2362->g_734.f0, "p_2362->g_734.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2362->g_758[i][j], "p_2362->g_758[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2362->g_761, "p_2362->g_761", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2362->g_788[i][j][k].f0, "p_2362->g_788[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_2362->g_791.f0, "p_2362->g_791.f0", print_hash_value);
    transparent_crc(p_2362->g_798.f0, "p_2362->g_798.f0", print_hash_value);
    transparent_crc(p_2362->g_846, "p_2362->g_846", print_hash_value);
    transparent_crc(p_2362->g_933, "p_2362->g_933", print_hash_value);
    transparent_crc(p_2362->g_948.f0, "p_2362->g_948.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_2362->g_1114[i][j], "p_2362->g_1114[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2362->g_1177[i][j][k], "p_2362->g_1177[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2362->g_1226, "p_2362->g_1226", print_hash_value);
    transparent_crc(p_2362->g_1271, "p_2362->g_1271", print_hash_value);
    transparent_crc(p_2362->g_1272, "p_2362->g_1272", print_hash_value);
    transparent_crc(p_2362->g_1273, "p_2362->g_1273", print_hash_value);
    transparent_crc(p_2362->g_1274, "p_2362->g_1274", print_hash_value);
    transparent_crc(p_2362->g_1283.f0, "p_2362->g_1283.f0", print_hash_value);
    transparent_crc(p_2362->g_1381, "p_2362->g_1381", print_hash_value);
    transparent_crc(p_2362->g_1393.f0, "p_2362->g_1393.f0", print_hash_value);
    transparent_crc(p_2362->g_1395.f0, "p_2362->g_1395.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2362->g_1476[i], "p_2362->g_1476[i]", print_hash_value);

    }
    transparent_crc(p_2362->g_1491, "p_2362->g_1491", print_hash_value);
    transparent_crc(p_2362->g_1527, "p_2362->g_1527", print_hash_value);
    transparent_crc(p_2362->g_1584.f0, "p_2362->g_1584.f0", print_hash_value);
    transparent_crc(p_2362->g_1615.f0, "p_2362->g_1615.f0", print_hash_value);
    transparent_crc(p_2362->g_1697.f0, "p_2362->g_1697.f0", print_hash_value);
    transparent_crc(p_2362->g_1713.f0, "p_2362->g_1713.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2362->g_1717[i].f0, "p_2362->g_1717[i].f0", print_hash_value);

    }
    transparent_crc(p_2362->g_1797.f0, "p_2362->g_1797.f0", print_hash_value);
    transparent_crc(p_2362->g_1800.f0, "p_2362->g_1800.f0", print_hash_value);
    transparent_crc(p_2362->g_1869, "p_2362->g_1869", print_hash_value);
    transparent_crc(p_2362->g_1891.f0, "p_2362->g_1891.f0", print_hash_value);
    transparent_crc(p_2362->g_1966.f0, "p_2362->g_1966.f0", print_hash_value);
    transparent_crc(p_2362->g_1969.f0, "p_2362->g_1969.f0", print_hash_value);
    transparent_crc(p_2362->g_2042.f0, "p_2362->g_2042.f0", print_hash_value);
    transparent_crc(p_2362->g_2074.f0, "p_2362->g_2074.f0", print_hash_value);
    transparent_crc(p_2362->g_2094.f0, "p_2362->g_2094.f0", print_hash_value);
    transparent_crc(p_2362->g_2139.f0, "p_2362->g_2139.f0", print_hash_value);
    transparent_crc(p_2362->g_2177.f0, "p_2362->g_2177.f0", print_hash_value);
    transparent_crc(p_2362->g_2243, "p_2362->g_2243", print_hash_value);
    transparent_crc(p_2362->g_2318.f0, "p_2362->g_2318.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_2362->g_2328[i][j].f0, "p_2362->g_2328[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2362->g_2345, "p_2362->g_2345", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2362->g_2359[i], "p_2362->g_2359[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
