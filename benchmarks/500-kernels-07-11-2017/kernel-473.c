// -g 96,94,1 -l 2,47,1
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


// Seed: 826254746

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
};

union U1 {
   int8_t  f0;
   int8_t  f1;
   volatile uint64_t  f2;
};

struct S2 {
    uint8_t g_5;
    int32_t g_41[2][2];
    int32_t *g_40[8];
    int32_t * volatile g_69;
    int16_t g_73;
    uint16_t g_85;
    uint32_t g_105;
    int16_t **g_106;
    volatile int16_t g_115;
    int64_t g_126;
    union U1 g_134[6][10];
    volatile union U0 g_146;
    int32_t g_158;
    int32_t g_162;
    int8_t g_193[7];
    uint8_t g_247;
    uint8_t *g_246;
    uint8_t g_306;
    uint64_t g_350;
    union U1 g_415;
    int64_t *g_426;
    int64_t **g_425[10];
    int64_t ** volatile * volatile g_424[7];
    int16_t g_444;
    int32_t g_452;
    int32_t g_486[6];
    uint64_t g_542;
    uint8_t g_558[9];
    volatile int16_t g_564;
    uint16_t g_618[9][10];
    int32_t g_630[10][4];
    volatile union U0 g_640;
    int32_t g_652;
    uint64_t g_768;
    uint8_t *g_783[3];
    union U0 g_797[6][1];
    int32_t g_800;
    uint8_t **g_833[2][3][1];
    uint64_t g_874;
    union U0 g_894;
    volatile uint32_t g_910;
    volatile uint32_t * volatile g_909;
    volatile uint32_t * volatile *g_908;
    union U0 g_951[5];
    int16_t g_1053;
    uint32_t g_1071[6];
    uint32_t *g_1140;
    uint32_t **g_1139;
    int16_t g_1154;
    uint16_t *g_1199;
    uint32_t * volatile g_1236[4];
    uint32_t * volatile *g_1235[9];
    volatile union U0 g_1256;
    volatile union U0 g_1283;
    volatile union U0 g_1289[8];
    volatile union U0 g_1311[6];
    volatile union U0 g_1401;
    union U0 g_1404;
    uint32_t **g_1407;
    uint32_t *** volatile g_1406;
    int8_t g_1422;
    volatile int64_t g_1516;
    volatile uint64_t g_1517[5];
    union U1 ** volatile g_1569;
    uint32_t g_1644;
    uint8_t *** volatile g_1681;
    union U1 g_1702;
    union U1 *g_1723;
    union U1 **g_1722;
    uint32_t g_1736;
    uint16_t g_1737[7];
    int32_t ** volatile g_1763;
    int32_t ** volatile g_1764;
    uint16_t **g_1788;
    union U0 g_1803;
    int32_t ** volatile g_1834;
    int32_t ** volatile g_1854;
    int32_t g_1870;
    int32_t ** volatile g_1899;
    int8_t *g_1905;
    int8_t **g_1904;
    int8_t *** volatile g_1903;
    union U0 g_1914;
    int32_t ***g_1947;
    int32_t **g_1949;
    int32_t ***g_1948;
    union U0 g_1986;
    uint64_t *g_2077[1][9];
    uint64_t **g_2076;
    union U0 g_2089[2];
    int32_t ** volatile g_2162;
    volatile union U0 g_2204;
    volatile union U1 g_2261;
    uint16_t ***g_2293;
    volatile union U0 g_2294[7];
    union U0 g_2313;
    uint32_t g_2330;
    int32_t g_2374;
    union U0 g_2421;
    uint32_t g_2434;
    volatile int32_t g_2476;
    volatile int32_t *g_2475;
    volatile int32_t ** volatile g_2474;
    int32_t * volatile g_2488;
    volatile union U0 g_2501;
    volatile union U0 * volatile * volatile g_2535;
    int32_t g_2586;
    int32_t * volatile g_2676[2];
    int32_t * volatile g_2677[6];
    int32_t * volatile g_2679;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_2746);
int32_t * func_10(uint8_t * p_11, struct S2 * p_2746);
uint8_t * func_12(uint16_t  p_13, uint64_t  p_14, int16_t  p_15, int16_t  p_16, struct S2 * p_2746);
uint64_t  func_17(int32_t  p_18, int32_t * p_19, struct S2 * p_2746);
int32_t  func_26(uint64_t  p_27, int16_t  p_28, uint16_t  p_29, int32_t * p_30, int32_t * p_31, struct S2 * p_2746);
int8_t  func_36(uint32_t  p_37, uint16_t  p_38, int32_t * p_39, struct S2 * p_2746);
int32_t  func_49(int8_t  p_50, uint32_t  p_51, uint8_t  p_52, int32_t * p_53, struct S2 * p_2746);
int8_t  func_54(int32_t * p_55, int32_t ** p_56, uint8_t * p_57, int32_t * p_58, int32_t  p_59, struct S2 * p_2746);
int32_t * func_60(int32_t  p_61, int32_t ** p_62, int64_t  p_63, uint32_t  p_64, uint16_t  p_65, struct S2 * p_2746);
int32_t ** func_66(int64_t  p_67, struct S2 * p_2746);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2746->g_5 p_2746->g_40 p_2746->g_1905 p_2746->g_193 p_2746->g_246 p_2746->g_247 p_2746->g_2204.f0 p_2746->g_1788 p_2746->g_1199 p_2746->g_618 p_2746->g_2474 p_2746->g_630 p_2746->g_1870 p_2746->g_1764 p_2746->g_69 p_2746->g_162 p_2746->g_2434 p_2746->g_444 p_2746->g_1903 p_2746->g_1904 p_2746->g_1644 p_2746->g_41 p_2746->g_908 p_2746->g_909 p_2746->g_910 p_2746->g_426 p_2746->g_1736 p_2746->g_1854 p_2746->g_2076 p_2746->g_2077 p_2746->g_350 p_2746->g_542 p_2746->g_1948 p_2746->g_1949 p_2746->g_2679 p_2746->g_558 p_2746->g_306
 * writes: p_2746->g_5 p_2746->g_40 p_2746->g_1870 p_2746->g_41 p_2746->g_2434 p_2746->g_444 p_2746->g_193 p_2746->g_630 p_2746->g_618 p_2746->g_1722 p_2746->g_126 p_2746->g_1736 p_2746->g_85 p_2746->g_1644 p_2746->g_350 p_2746->g_542 p_2746->g_247 p_2746->g_1154 p_2746->g_2586 p_2746->g_73
 */
int64_t  func_1(struct S2 * p_2746)
{ /* block id: 4 */
    int8_t l_2 = (-8L);
    int32_t l_3 = 9L;
    uint8_t *l_4[6] = {&p_2746->g_5,&p_2746->g_5,&p_2746->g_5,&p_2746->g_5,&p_2746->g_5,&p_2746->g_5};
    int32_t l_6 = 0x45C17473L;
    int32_t l_7 = 0x447D1AFDL;
    int32_t **l_42[7][9] = {{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]},{&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3],&p_2746->g_40[3]}};
    int32_t l_2480 = (-1L);
    uint32_t l_2481 = 0xDF82B3E6L;
    int i, j;
    l_3 = l_2;
    (**p_2746->g_1948) = ((p_2746->g_5++) , func_10(func_12(l_7, func_17(l_3, (((safe_mul_func_int16_t_s_s((l_7 | (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(func_26((safe_add_func_uint16_t_u_u(l_2, (((safe_rshift_func_uint8_t_u_s(p_2746->g_5, func_36(l_6, p_2746->g_5, (p_2746->g_40[3] = p_2746->g_40[6]), p_2746))) , (*p_2746->g_246)) | (*p_2746->g_246)))), p_2746->g_2204.f0, (**p_2746->g_1788), &p_2746->g_1870, &p_2746->g_630[8][0], p_2746), l_2480)) <= (**p_2746->g_1788)), (*p_2746->g_246)))), 0UL)) && l_2481) , (*p_2746->g_1764)), p_2746), p_2746->g_193[5], p_2746->g_162, p_2746), p_2746));
    return p_2746->g_306;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_1948 p_2746->g_1949 p_2746->g_2076 p_2746->g_2077 p_2746->g_350 p_2746->g_542 p_2746->g_426 p_2746->g_247 p_2746->g_630 p_2746->g_2679 p_2746->g_1870 p_2746->g_1903 p_2746->g_1904 p_2746->g_1905 p_2746->g_193 p_2746->g_1788 p_2746->g_1199 p_2746->g_618 p_2746->g_558 p_2746->g_1644
 * writes: p_2746->g_40 p_2746->g_1644 p_2746->g_350 p_2746->g_542 p_2746->g_126 p_2746->g_247 p_2746->g_1870 p_2746->g_1154 p_2746->g_2586 p_2746->g_618 p_2746->g_73 p_2746->g_630
 */
int32_t * func_10(uint8_t * p_11, struct S2 * p_2746)
{ /* block id: 1188 */
    int32_t *l_2665 = &p_2746->g_630[1][0];
    uint16_t ***l_2694 = &p_2746->g_1788;
    int32_t l_2708 = 0x37DB27CAL;
    int32_t l_2722 = 0L;
    int32_t l_2723 = 0x334FD223L;
    int32_t l_2725[7][7][5] = {{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}},{{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)},{0x48A80541L,0x7B1A35D9L,1L,1L,(-1L)}}};
    int32_t *l_2743 = &l_2725[5][3][3];
    int32_t *l_2744 = &l_2723;
    int32_t *l_2745 = &p_2746->g_41[1][0];
    int i, j, k;
lbl_2680:
    (**p_2746->g_1948) = l_2665;
    for (p_2746->g_1644 = 0; (p_2746->g_1644 <= 27); p_2746->g_1644 = safe_add_func_uint8_t_u_u(p_2746->g_1644, 4))
    { /* block id: 1192 */
        uint8_t l_2672 = 0UL;
        uint16_t ***l_2673 = (void*)0;
        int32_t l_2674[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2674[i] = 2L;
        l_2674[1] = (safe_sub_func_int16_t_s_s(0x1A3CL, ((--(**p_2746->g_2076)) ^ ((*p_2746->g_426) = (l_2672 <= (&p_2746->g_1788 == l_2673))))));
        for (p_2746->g_247 = 0; (p_2746->g_247 <= 3); p_2746->g_247 += 1)
        { /* block id: 1198 */
            int32_t *l_2675 = (void*)0;
            int32_t *l_2678 = (void*)0;
            int32_t l_2719 = (-5L);
            int32_t l_2720 = 0x18E881F5L;
            int32_t l_2736 = 0x1115BC64L;
            int32_t l_2737[9][2][3] = {{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}},{{7L,0x27C50587L,0L},{7L,0x27C50587L,0L}}};
            int i, j, k;
            (*p_2746->g_2679) &= (p_2746->g_630[(p_2746->g_247 + 6)][p_2746->g_247] >= 0x4DL);
            if (p_2746->g_350)
                goto lbl_2680;
            for (p_2746->g_1154 = 5; (p_2746->g_1154 >= 1); p_2746->g_1154 -= 1)
            { /* block id: 1203 */
                uint16_t l_2695 = 0xF685L;
                int32_t l_2709 = 0x6E7BF84BL;
                int32_t l_2721 = 0x40CF1970L;
                int32_t l_2724[3][6] = {{3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L}};
                uint32_t l_2726 = 0xF33E0B86L;
                uint8_t l_2739 = 0UL;
                int i, j;
                for (p_2746->g_2586 = 5; (p_2746->g_2586 >= 0); p_2746->g_2586 -= 1)
                { /* block id: 1206 */
                    uint32_t *l_2681 = (void*)0;
                    l_2674[1] |= (((void*)0 != l_2681) , l_2672);
                }
                if ((((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(251UL, (***p_2746->g_1903))), (safe_sub_func_uint64_t_u_u((((++(**p_2746->g_1788)) >= 0x7ADCL) && ((((l_2694 != (void*)0) | l_2695) ^ (l_2672 , (*l_2665))) == l_2695)), l_2672)))), l_2672)) != (*p_11)) != l_2674[1]))
                { /* block id: 1210 */
                    int16_t l_2716 = 0x67CDL;
                    int32_t l_2717 = 0x142F2456L;
                    int32_t l_2718[10][4][2] = {{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}},{{(-7L),0L},{(-7L),0L},{(-7L),0L},{(-7L),0L}}};
                    int i, j, k;
                    for (p_2746->g_73 = 5; (p_2746->g_73 >= 0); p_2746->g_73 -= 1)
                    { /* block id: 1213 */
                        int32_t *l_2696 = &p_2746->g_630[(p_2746->g_247 + 6)][p_2746->g_247];
                        (*l_2665) = (*l_2665);
                        return l_2696;
                    }
                    for (l_2672 = 0; (l_2672 <= 5); l_2672 += 1)
                    { /* block id: 1219 */
                        uint8_t l_2699 = 0xD2L;
                        int32_t l_2700[2];
                        int32_t *l_2701 = (void*)0;
                        int32_t *l_2702 = &p_2746->g_630[8][0];
                        int32_t *l_2703 = &p_2746->g_630[(p_2746->g_247 + 3)][p_2746->g_247];
                        int32_t *l_2704 = &p_2746->g_41[1][0];
                        int32_t *l_2705 = (void*)0;
                        int32_t *l_2706 = &p_2746->g_41[1][1];
                        int32_t *l_2707 = (void*)0;
                        int32_t *l_2710 = &p_2746->g_2374;
                        int32_t *l_2711 = &l_2700[1];
                        int32_t *l_2712 = &p_2746->g_162;
                        int32_t *l_2713 = (void*)0;
                        int32_t *l_2714 = &p_2746->g_1870;
                        int32_t *l_2715[6] = {&l_2708,&l_2674[2],&l_2708,&l_2708,&l_2674[2],&l_2708};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2700[i] = 0x67BEC938L;
                        l_2700[1] &= (safe_div_func_int8_t_s_s(l_2699, (*p_11)));
                        l_2674[0] ^= (!(0x7F44L > (*l_2665)));
                        l_2726--;
                        if (l_2716)
                            break;
                    }
                }
                else
                { /* block id: 1225 */
                    int32_t *l_2729 = (void*)0;
                    int32_t *l_2730 = &p_2746->g_2374;
                    int32_t *l_2731 = &p_2746->g_41[1][0];
                    int32_t *l_2732 = &l_2719;
                    int32_t *l_2733 = &l_2725[5][4][0];
                    int32_t *l_2734 = &p_2746->g_630[4][2];
                    int32_t *l_2735[8][7];
                    int32_t l_2738 = 1L;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_2735[i][j] = &l_2721;
                    }
                    ++l_2739;
                    (**p_2746->g_1948) = &l_2737[3][0][1];
                }
            }
            if (p_2746->g_247)
                goto lbl_2742;
        }
        (**p_2746->g_1948) = &l_2722;
        if ((*l_2665))
            break;
    }
lbl_2742:
    l_2665 = &l_2708;
    return l_2745;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_2434 p_2746->g_444 p_2746->g_1903 p_2746->g_1904 p_2746->g_1905 p_2746->g_193 p_2746->g_1199 p_2746->g_618 p_2746->g_630 p_2746->g_1644 p_2746->g_69 p_2746->g_41 p_2746->g_908 p_2746->g_909 p_2746->g_910 p_2746->g_40 p_2746->g_247 p_2746->g_426 p_2746->g_1736 p_2746->g_1788 p_2746->g_1854 p_2746->g_246 p_2746->g_2076 p_2746->g_2077 p_2746->g_350 p_2746->g_542
 * writes: p_2746->g_2434 p_2746->g_444 p_2746->g_193 p_2746->g_41 p_2746->g_630 p_2746->g_618 p_2746->g_1722 p_2746->g_126 p_2746->g_1736 p_2746->g_85
 */
uint8_t * func_12(uint16_t  p_13, uint64_t  p_14, int16_t  p_15, int16_t  p_16, struct S2 * p_2746)
{ /* block id: 1052 */
    uint16_t l_2492 = 0x8F86L;
    int32_t *l_2510 = &p_2746->g_630[7][2];
    int16_t l_2561 = 0x5C23L;
    int32_t l_2600 = (-2L);
    uint32_t l_2601 = 0x05970D6DL;
    uint8_t *l_2608 = &p_2746->g_558[1];
    int32_t **l_2623 = &p_2746->g_40[0];
    int32_t ***l_2636 = &l_2623;
    int8_t ***l_2658 = &p_2746->g_1904;
    int8_t ****l_2657[1];
    int64_t l_2660 = 0x21715E201F50FF31L;
    int32_t l_2661[3][1];
    int32_t l_2664 = (-10L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_2657[i] = &l_2658;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2661[i][j] = 0x4FB806FCL;
    }
    for (p_2746->g_2434 = 0; (p_2746->g_2434 < 8); p_2746->g_2434++)
    { /* block id: 1055 */
        int32_t *l_2496[1][9] = {{&p_2746->g_41[1][0],(void*)0,&p_2746->g_41[1][0],&p_2746->g_41[1][0],(void*)0,&p_2746->g_41[1][0],&p_2746->g_41[1][0],(void*)0,&p_2746->g_41[1][0]}};
        uint8_t *l_2497[3];
        int16_t *l_2503 = &p_2746->g_1053;
        int16_t **l_2502 = &l_2503;
        uint32_t l_2508 = 0xF240E94BL;
        union U0 *l_2537 = (void*)0;
        union U0 **l_2536[2];
        uint64_t *l_2538 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2497[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_2536[i] = &l_2537;
        (1 + 1);
    }
    for (p_2746->g_444 = 2; (p_2746->g_444 <= 8); p_2746->g_444 += 1)
    { /* block id: 1160 */
        int16_t l_2621 = 0x6203L;
        int32_t l_2622[2];
        int32_t l_2627 = (-1L);
        int32_t ****l_2635[5][1];
        uint8_t *l_2659 = &p_2746->g_247;
        uint32_t *l_2662 = &p_2746->g_1736;
        uint16_t *l_2663 = &p_2746->g_85;
        int i, j;
        for (i = 0; i < 2; i++)
            l_2622[i] = 0x401D9857L;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_2635[i][j] = &p_2746->g_1948;
        }
        if (p_15)
        { /* block id: 1161 */
            uint8_t *l_2609[8][2] = {{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247},{&p_2746->g_247,&p_2746->g_247}};
            int32_t l_2616 = 0L;
            int i, j;
            for (l_2492 = 0; (l_2492 <= 8); l_2492 += 1)
            { /* block id: 1164 */
                l_2623 = func_66(((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((4UL >= ((((***p_2746->g_1903) &= (l_2608 == l_2609[4][1])) <= (0x3E127CEFAB4CC3E2L & (safe_add_func_uint64_t_u_u((0x5CB121088C186437L & (safe_add_func_int8_t_s_s(p_13, ((p_14 ^ ((safe_mul_func_uint8_t_u_u(l_2616, (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((*p_2746->g_1199), p_14)) >= 0x34FFL), 1)))) & 0x33B2L)) & l_2621)))), 0x48A99CF1A52B5AFEL)))) , p_13)), l_2622[0])) , p_14), (*l_2510))) , p_2746->g_1644), p_2746);
                if (p_16)
                    break;
            }
        }
        else
        { /* block id: 1169 */
            uint32_t l_2624 = 0x7E777922L;
            union U1 ***l_2632 = &p_2746->g_1722;
            (*l_2510) = (l_2624 = p_15);
            if (p_14)
                break;
            (*l_2510) = (((safe_lshift_func_uint16_t_u_u((((*p_2746->g_1199) ^= l_2627) && l_2622[0]), (safe_div_func_int64_t_s_s(p_15, 18446744073709551609UL)))) | (safe_mod_func_int8_t_s_s((~((**p_2746->g_908) > ((((*l_2632) = &p_2746->g_1723) != &p_2746->g_1723) || (((safe_lshift_func_uint16_t_u_u((*l_2510), 13)) , &p_2746->g_1949) == (void*)0)))), 246UL))) , l_2622[1]);
        }
        if (p_14)
            continue;
        l_2664 |= ((p_14 , p_15) & (((l_2636 = &l_2623) != (((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((*l_2623) != ((((safe_add_func_int16_t_s_s(((((*p_2746->g_1199) | ((*l_2663) = ((p_16 = (((safe_lshift_func_int8_t_s_s(((*l_2510) >= ((*l_2662) ^= (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((!p_16), (safe_add_func_int64_t_s_s((l_2661[1][0] = ((p_14 , ((l_2600 ^= (safe_add_func_int32_t_s_s(((((*p_2746->g_426) = (((safe_div_func_int32_t_s_s((l_2657[0] != (void*)0), (*l_2510))) <= p_2746->g_247) & 0x70BE5A17A4DDB26CL)) , l_2659) != l_2608), l_2660))) ^ 0x08238EECL)) < p_14)), p_15)))), 0x5CL)))), (***p_2746->g_1903))) , 0x2DL) > p_14)) < (**p_2746->g_1788)))) >= p_13) == p_15), 0x6354L)) > p_15) , 0x1ECF915EL) , (*p_2746->g_1854))) < 0x73L), (*p_2746->g_246))) ^ p_13), 0xAB2A2A5C12693264L)) , (**p_2746->g_1788)) , &p_2746->g_2162)) | (**p_2746->g_2076)));
    }
    return l_2608;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_1199 p_2746->g_618 p_2746->g_69
 * writes: p_2746->g_41
 */
uint64_t  func_17(int32_t  p_18, int32_t * p_19, struct S2 * p_2746)
{ /* block id: 1047 */
    int64_t l_2486[8][7] = {{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL},{0x7A2FD2BC6D8E6DC0L,(-1L),(-1L),0x7A2FD2BC6D8E6DC0L,1L,0L,0x1459AA4C556F8DAEL}};
    int32_t l_2487 = (-8L);
    int32_t *l_2489[3][3][3] = {{{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]}},{{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]}},{{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]},{&p_2746->g_41[0][0],&p_2746->g_41[0][0],&p_2746->g_41[0][0]}}};
    int i, j, k;
    (*p_2746->g_69) = (p_18 = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_2486[1][5], 1UL)), (l_2487 ^= (*p_2746->g_1199)))));
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_1199 p_2746->g_618 p_2746->g_2474 p_2746->g_630 p_2746->g_1870
 * writes: p_2746->g_1870
 */
int32_t  func_26(uint64_t  p_27, int16_t  p_28, uint16_t  p_29, int32_t * p_30, int32_t * p_31, struct S2 * p_2746)
{ /* block id: 1043 */
    uint8_t l_2463 = 251UL;
    int32_t *l_2478 = (void*)0;
    int32_t **l_2477 = &l_2478;
    int32_t l_2479 = 0x04B470FFL;
    (*p_30) = (safe_mul_func_int16_t_s_s(7L, (safe_div_func_int32_t_s_s(((*p_2746->g_1199) >= ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((l_2463 >= (((0x8CL ^ (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(0x428889A2521D76BEL, (safe_add_func_uint32_t_u_u(p_27, (l_2479 = (((l_2463 , (p_2746->g_2474 == l_2477)) >= p_29) , 0L)))))) && (*p_31)), l_2463)) < 0x45L) >= p_28), 18446744073709551609UL)) ^ p_29), 7))) >= (*p_2746->g_1199)) < 0x37L)), l_2463)) <= p_27) <= p_28), l_2463)), 0x29C437E7L)), l_2463)) | l_2463)), (*p_30)))));
    return l_2479;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_1905 p_2746->g_193
 * writes:
 */
int8_t  func_36(uint32_t  p_37, uint16_t  p_38, int32_t * p_39, struct S2 * p_2746)
{ /* block id: 8 */
    uint16_t l_45 = 1UL;
    int32_t **l_78 = &p_2746->g_40[6];
    uint64_t l_82[4][9][1] = {{{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L}},{{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L}},{{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L}},{{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L},{0xCED0F2FE87A7CF83L}}};
    int32_t l_2158[1];
    int64_t ***l_2202 = &p_2746->g_425[1];
    uint16_t l_2219 = 65535UL;
    uint16_t l_2229 = 65530UL;
    uint32_t l_2234 = 4294967287UL;
    int16_t l_2298 = 0x7D97L;
    uint16_t l_2327 = 0x4605L;
    uint16_t l_2349 = 0xF9C5L;
    uint16_t l_2354 = 1UL;
    int8_t ***l_2366 = &p_2746->g_1904;
    union U1 *l_2449 = &p_2746->g_415;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2158[i] = 1L;
    return (*p_2746->g_1905);
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_69 p_2746->g_41 p_2746->g_162
 * writes: p_2746->g_162
 */
int32_t  func_49(int8_t  p_50, uint32_t  p_51, uint8_t  p_52, int32_t * p_53, struct S2 * p_2746)
{ /* block id: 612 */
    int32_t *l_1547 = (void*)0;
    int32_t *l_1548 = &p_2746->g_162;
    uint16_t *l_1551 = &p_2746->g_85;
    int64_t **l_1564 = &p_2746->g_426;
    int64_t ***l_1565[8][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint32_t l_1566 = 0xF78EB3FEL;
    int64_t l_1567[5][5] = {{0L,0x0B3500163B40D865L,0x0B3500163B40D865L,0L,0L},{0L,0x0B3500163B40D865L,0x0B3500163B40D865L,0L,0L},{0L,0x0B3500163B40D865L,0x0B3500163B40D865L,0L,0L},{0L,0x0B3500163B40D865L,0x0B3500163B40D865L,0L,0L},{0L,0x0B3500163B40D865L,0x0B3500163B40D865L,0L,0L}};
    union U1 *l_1568[8][3][10] = {{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}},{{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415},{&p_2746->g_134[2][4],&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_134[4][4],(void*)0,(void*)0,&p_2746->g_415,&p_2746->g_134[2][4],&p_2746->g_415,&p_2746->g_415}}};
    uint8_t ***l_1599 = (void*)0;
    uint8_t l_1617 = 1UL;
    int8_t l_1641 = 0x31L;
    int8_t l_1662[5] = {3L,3L,3L,3L,3L};
    uint16_t **l_1704 = &l_1551;
    int64_t l_1714 = 1L;
    int16_t *l_1770 = &p_2746->g_444;
    int16_t **l_1769 = &l_1770;
    uint8_t l_1804 = 0x2AL;
    int32_t l_1815 = 2L;
    int32_t l_1817 = 1L;
    int32_t l_1819 = 9L;
    int32_t l_1820 = (-1L);
    int32_t l_1822 = 0x38D77FF2L;
    int32_t l_1823 = (-10L);
    int32_t l_1824[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int16_t l_1850[4];
    uint64_t l_1851 = 7UL;
    int16_t l_1895 = (-1L);
    int32_t l_1930[6];
    int32_t l_1960 = 4L;
    uint64_t *l_2004 = (void*)0;
    int64_t l_2053 = 0x0CC57C5694AD8C6BL;
    int16_t l_2059 = (-1L);
    int32_t *l_2080 = &l_1819;
    int64_t l_2103 = (-10L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1850[i] = 0x6AFCL;
    for (i = 0; i < 6; i++)
        l_1930[i] = 0x2F42C140L;
    (*l_1548) |= (*p_2746->g_69);
    return l_2103;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_452 p_2746->g_894.f0 p_2746->g_1256.f0 p_2746->g_5 p_2746->g_542 p_2746->g_41 p_2746->g_1199 p_2746->g_618 p_2746->g_162
 * writes: p_2746->g_452 p_2746->g_162 p_2746->g_41
 */
int8_t  func_54(int32_t * p_55, int32_t ** p_56, uint8_t * p_57, int32_t * p_58, int32_t  p_59, struct S2 * p_2746)
{ /* block id: 217 */
    uint32_t l_596 = 0xED431FDDL;
    int32_t **l_597 = &p_2746->g_40[7];
    uint8_t *l_604 = &p_2746->g_306;
    uint32_t l_658 = 0x6C658E8DL;
    int32_t l_687 = 0x38879471L;
    int32_t l_696 = 6L;
    int32_t l_699 = 0L;
    int32_t l_703[10][3][8] = {{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}},{{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L},{(-8L),0x6FF10A7EL,(-1L),(-8L),1L,3L,3L,1L}}};
    uint64_t *l_781[3];
    uint8_t ***l_834 = &p_2746->g_833[1][2][0];
    uint32_t l_843[2][3];
    int16_t *l_870 = (void*)0;
    int64_t ***l_974 = &p_2746->g_425[1];
    int64_t ***l_977 = &p_2746->g_425[1];
    int64_t l_1003[10][8] = {{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L},{4L,0L,0x5F8794213ADEC8EAL,0x3276C074073E104DL,0x28592E60DCF7B332L,4L,0x3276C074073E104DL,0x774972549A6B4043L}};
    union U1 *l_1004 = &p_2746->g_134[2][5];
    int8_t l_1027 = 0x70L;
    int8_t l_1029 = 7L;
    uint16_t l_1038 = 9UL;
    uint32_t *l_1096 = &p_2746->g_1071[5];
    uint32_t l_1164 = 0xA24FC613L;
    uint16_t *l_1197 = (void*)0;
    int16_t l_1227 = (-7L);
    int16_t l_1247 = (-1L);
    uint64_t *l_1282 = &p_2746->g_542;
    uint32_t l_1402 = 0UL;
    int64_t l_1427 = 0x244FB97426DA6381L;
    int32_t l_1428[1];
    uint32_t l_1429 = 0xC822E118L;
    uint32_t **l_1442 = (void*)0;
    uint32_t ***l_1461 = (void*)0;
    int8_t l_1514 = 3L;
    int32_t *l_1534 = &l_696;
    int32_t *l_1535 = &l_1428[0];
    int32_t *l_1536 = &p_2746->g_162;
    int32_t *l_1537 = &p_2746->g_41[1][0];
    int32_t *l_1538 = &l_1428[0];
    int32_t *l_1539 = &l_699;
    int32_t *l_1540 = &l_687;
    int32_t *l_1541[6];
    int16_t l_1542 = 4L;
    int8_t l_1543 = 4L;
    uint16_t l_1544 = 65534UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_781[i] = &p_2746->g_350;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_843[i][j] = 0UL;
    }
    for (i = 0; i < 1; i++)
        l_1428[i] = 0x0D33C337L;
    for (i = 0; i < 6; i++)
        l_1541[i] = &l_1428[0];
    for (p_2746->g_452 = (-29); (p_2746->g_452 == 23); p_2746->g_452 = safe_add_func_uint8_t_u_u(p_2746->g_452, 9))
    { /* block id: 220 */
        uint64_t l_589 = 1UL;
        uint8_t *l_598 = &p_2746->g_306;
        int32_t l_702 = 0x1E100B1EL;
        int32_t l_706 = 8L;
        int32_t l_707 = (-1L);
        int32_t l_712 = 0x70690295L;
        int32_t l_713[2];
        int32_t l_744 = (-7L);
        int64_t l_826 = 0x08AF6F0A978E851EL;
        uint32_t **l_830 = (void*)0;
        int16_t *l_856 = &p_2746->g_444;
        int16_t **l_855 = &l_856;
        uint32_t *l_937 = (void*)0;
        uint32_t **l_936 = &l_937;
        int16_t l_943 = (-7L);
        int32_t l_961 = 0L;
        int32_t l_1025 = 0x27FC6693L;
        union U1 *l_1040 = &p_2746->g_134[4][3];
        uint8_t l_1051 = 247UL;
        int32_t l_1206[8] = {0x250BD62CL,0x6B2A7060L,0x250BD62CL,0x250BD62CL,0x6B2A7060L,0x250BD62CL,0x250BD62CL,0x6B2A7060L};
        int8_t l_1324 = (-10L);
        int32_t *l_1423 = &l_744;
        int32_t *l_1424 = &l_703[8][1][4];
        int32_t *l_1425 = &p_2746->g_630[1][2];
        int32_t *l_1426[8][3] = {{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]},{(void*)0,&l_706,&p_2746->g_630[8][0]}};
        uint32_t ***l_1443 = (void*)0;
        uint32_t ***l_1444 = &l_936;
        int8_t l_1492 = (-1L);
        int32_t l_1501 = 8L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_713[i] = 0x4C60D012L;
        (1 + 1);
    }
    (*p_58) |= ((((safe_mod_func_int64_t_s_s(0L, p_2746->g_894.f0)) || ((safe_add_func_int16_t_s_s((p_59 != ((((p_59 , (safe_div_func_uint8_t_u_u(0x9FL, 255UL))) == ((&l_1227 != &p_2746->g_1154) > ((((safe_mod_func_uint32_t_u_u(((p_2746->g_1256.f0 <= (*p_57)) != p_2746->g_542), 0xC310EB71L)) != 0x1E3F0FD39BB76908L) >= (**p_56)) ^ 0x36L))) , p_59) , (*p_2746->g_1199))), p_59)) , p_59)) >= (*p_2746->g_1199)) < (*p_2746->g_1199));
    for (l_696 = 0; (l_696 > (-6)); l_696 = safe_sub_func_uint16_t_u_u(l_696, 4))
    { /* block id: 598 */
        for (p_2746->g_162 = 0; (p_2746->g_162 != 24); ++p_2746->g_162)
        { /* block id: 601 */
            (**p_56) = (~(p_59 , (*p_58)));
        }
        for (l_1514 = (-16); (l_1514 < (-17)); l_1514 = safe_sub_func_uint16_t_u_u(l_1514, 1))
        { /* block id: 606 */
            return p_59;
        }
    }
    ++l_1544;
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_5 p_2746->g_41 p_2746->g_106 p_2746->g_105 p_2746->g_115 p_2746->g_69 p_2746->g_486 p_2746->g_415.f0 p_2746->g_247 p_2746->g_246 p_2746->g_73 p_2746->g_193 p_2746->g_444 p_2746->g_415.f1 p_2746->g_85 p_2746->g_162 p_2746->g_40 p_2746->g_542 p_2746->g_126 p_2746->g_558 p_2746->g_564 p_2746->g_158
 * writes: p_2746->g_41 p_2746->g_105 p_2746->g_106 p_2746->g_85 p_2746->g_73 p_2746->g_444 p_2746->g_415.f1 p_2746->g_193 p_2746->g_247 p_2746->g_40 p_2746->g_542 p_2746->g_415.f0 p_2746->g_126 p_2746->g_158
 */
int32_t * func_60(int32_t  p_61, int32_t ** p_62, int64_t  p_63, uint32_t  p_64, uint16_t  p_65, struct S2 * p_2746)
{ /* block id: 22 */
    uint32_t l_93 = 0xB9248679L;
    uint16_t *l_98 = &p_2746->g_85;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = (void*)0;
    int32_t *l_103 = &p_2746->g_41[1][0];
    uint32_t *l_104 = &p_2746->g_105;
    int32_t l_189[2];
    int32_t l_234 = 0x1841E320L;
    uint8_t *l_244 = &p_2746->g_5;
    uint64_t l_308 = 0xC72C3D71F2716BCDL;
    uint8_t l_310 = 8UL;
    int64_t *l_343 = &p_2746->g_126;
    int16_t *l_347 = &p_2746->g_73;
    int16_t **l_346 = &l_347;
    uint16_t l_359 = 65535UL;
    uint16_t l_395 = 5UL;
    uint32_t l_418 = 0x8C91DCC7L;
    uint8_t l_450 = 0UL;
    int32_t l_454 = 1L;
    uint32_t *l_488 = (void*)0;
    uint32_t **l_487 = &l_488;
    int i;
    for (i = 0; i < 2; i++)
        l_189[i] = (-3L);
    if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((&p_2746->g_5 == &p_2746->g_5) != l_93), (((safe_div_func_uint32_t_u_u(((!(p_65 || (safe_lshift_func_uint16_t_u_u(((((*l_104) = (((l_98 == (void*)0) > (safe_div_func_int32_t_s_s(l_93, (((*l_103) = l_93) , 0x3F216A9CL)))) ^ p_2746->g_5)) , (*l_103)) < 0x39E942A635BD15A5L), 8)))) , 6UL), p_65)) & p_2746->g_5) >= 0x732ED884ACF1AFC5L))), p_2746->g_5)), p_65)))
    { /* block id: 25 */
        p_2746->g_106 = p_2746->g_106;
    }
    else
    { /* block id: 27 */
        int16_t *l_111[3][8][5] = {{{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0},{(void*)0,(void*)0,&p_2746->g_73,(void*)0,(void*)0}}};
        int16_t *l_114[9][6] = {{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73},{&p_2746->g_73,(void*)0,(void*)0,&p_2746->g_73,&p_2746->g_73,&p_2746->g_73}};
        int32_t *l_118 = &p_2746->g_41[1][0];
        uint32_t l_163 = 0UL;
        int32_t l_174 = 0x04FE049FL;
        int32_t l_198 = (-1L);
        int32_t l_199 = (-1L);
        int32_t l_201[10];
        uint16_t l_202 = 0xB82FL;
        uint16_t l_233[5] = {0UL,0UL,0UL,0UL,0UL};
        int8_t *l_239 = (void*)0;
        int64_t l_286[5][8] = {{0x7C1E203101206E42L,0x5314F9FACA592DE0L,0x32F02CFCB363515BL,(-1L),0x32F02CFCB363515BL,0x5314F9FACA592DE0L,0x7C1E203101206E42L,0x45EB14CCC9903641L},{0x7C1E203101206E42L,0x5314F9FACA592DE0L,0x32F02CFCB363515BL,(-1L),0x32F02CFCB363515BL,0x5314F9FACA592DE0L,0x7C1E203101206E42L,0x45EB14CCC9903641L},{0x7C1E203101206E42L,0x5314F9FACA592DE0L,0x32F02CFCB363515BL,(-1L),0x32F02CFCB363515BL,0x5314F9FACA592DE0L,0x7C1E203101206E42L,0x45EB14CCC9903641L},{0x7C1E203101206E42L,0x5314F9FACA592DE0L,0x32F02CFCB363515BL,(-1L),0x32F02CFCB363515BL,0x5314F9FACA592DE0L,0x7C1E203101206E42L,0x45EB14CCC9903641L},{0x7C1E203101206E42L,0x5314F9FACA592DE0L,0x32F02CFCB363515BL,(-1L),0x32F02CFCB363515BL,0x5314F9FACA592DE0L,0x7C1E203101206E42L,0x45EB14CCC9903641L}};
        int32_t *l_366 = &l_189[1];
        uint32_t **l_393[2];
        int32_t l_512 = 0x27D01C32L;
        uint16_t l_557 = 0x39CDL;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_201[i] = 0x192BFBACL;
        for (i = 0; i < 2; i++)
            l_393[i] = &l_104;
        for (p_2746->g_105 = 0; (p_2746->g_105 <= 53); p_2746->g_105 = safe_add_func_uint32_t_u_u(p_2746->g_105, 8))
        { /* block id: 30 */
            int16_t **l_112 = &l_111[2][5][1];
            int16_t *l_113 = (void*)0;
            uint32_t **l_119 = (void*)0;
            uint32_t **l_120 = &l_104;
            uint32_t *l_122 = &p_2746->g_105;
            uint32_t **l_121 = &l_122;
            uint32_t *l_123 = &p_2746->g_105;
            int64_t l_135 = 0L;
            int32_t l_180 = 0x41B38AE1L;
            int32_t l_191 = (-1L);
            int32_t l_192 = 0x4D0C483BL;
            int32_t l_194 = 0x162B6702L;
            uint32_t l_195 = 0xFA2573A2L;
            int8_t *l_240 = &p_2746->g_193[1];
            int64_t l_260 = (-1L);
            int32_t l_261 = 0L;
            uint16_t l_292[1];
            uint32_t l_298 = 0x3D0493B6L;
            int32_t l_313 = 0x28CC5898L;
            int32_t l_315[10][4] = {{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L},{0x48457E02L,0x4796CDE8L,9L,8L}};
            uint32_t l_351 = 0xEBBEE3FAL;
            uint8_t **l_408 = &l_244;
            uint64_t l_443[2];
            uint32_t **l_489 = &l_488;
            int i, j;
            for (i = 0; i < 1; i++)
                l_292[i] = 1UL;
            for (i = 0; i < 2; i++)
                l_443[i] = 1UL;
            (*p_2746->g_69) = (((p_2746->g_5 >= (((*l_112) = l_111[0][2][0]) == (l_114[7][2] = l_113))) || (((~p_2746->g_115) | (safe_lshift_func_int8_t_s_s(((((void*)0 != l_118) , ((*l_120) = &p_2746->g_105)) == ((*l_121) = &p_2746->g_105)), (p_64 < p_65)))) ^ 0x4D233DB8L)) >= 1L);
        }
        l_512 |= (p_2746->g_486[2] ^ (~(p_61 | ((0x31029F9DC92A9CC4L == (((p_64 == (p_2746->g_444 |= (((((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((**l_346) |= ((&p_2746->g_246 != (void*)0) , (((safe_div_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(((((*l_98) = (safe_sub_func_uint64_t_u_u(p_65, (((p_2746->g_415.f0 , (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((((*l_366) && (*l_103)) | 65529UL) ^ p_2746->g_486[3]), (*l_103))), p_2746->g_247))) <= (*p_2746->g_246)) ^ (*l_366))))) ^ (*l_366)) == (-6L)))) , (*l_103)), 4UL)) <= (-1L)) <= 1UL))), (*l_366))) != p_63) > (*p_2746->g_69)), (*l_118))), p_2746->g_193[1])), 9)), p_2746->g_486[1])), p_2746->g_193[1])) >= (*l_118)) , (void*)0) == &l_286[1][6]) , (*l_366)))) , p_61) == (*l_118))) <= (*l_118)))));
        for (p_65 = 0; (p_65 < 13); p_65 = safe_add_func_uint64_t_u_u(p_65, 5))
        { /* block id: 169 */
            uint8_t l_515 = 0x46L;
            int64_t ***l_520 = &p_2746->g_425[1];
            uint8_t l_525 = 4UL;
            uint64_t *l_559 = &l_308;
            int32_t **l_563 = &l_102;
            int8_t *l_573 = &p_2746->g_415.f0;
            for (p_64 = 0; (p_64 <= 4); p_64 += 1)
            { /* block id: 172 */
                int64_t ***l_521 = &p_2746->g_425[5];
                int32_t l_530[6][9][4] = {{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}},{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}},{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}},{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}},{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}},{{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L},{8L,0x5A110E9BL,0x5A110E9BL,8L}}};
                int i, j, k;
                (*l_118) = (-1L);
                for (p_2746->g_415.f1 = 0; (p_2746->g_415.f1 <= 4); p_2746->g_415.f1 += 1)
                { /* block id: 176 */
                    int8_t *l_516 = &p_2746->g_193[1];
                    int32_t l_524 = (-4L);
                    int i, j;
                    l_525 |= (l_515 == (((((((((*l_516) &= (-1L)) ^ 0x72L) <= (((safe_mod_func_int16_t_s_s(0x53C4L, (safe_unary_minus_func_uint16_t_u((((l_515 && (l_520 != l_521)) | ((*p_2746->g_246)++)) >= l_524))))) , ((!(0x6333A572L && p_2746->g_85)) != 0x2D75L)) <= 0x29EF7A29L)) > p_61) , (*p_2746->g_246)) || p_2746->g_162) , 0xBFF00B50D3C70C3FL) > (*l_118)));
                    (*p_62) = &p_2746->g_162;
                    return (*p_62);
                }
                if ((safe_div_func_uint16_t_u_u(0xF1DDL, 0x9B29L)))
                { /* block id: 183 */
                    uint32_t *l_541[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_556 = 0x4EB91661L;
                    int i;
                    (*l_366) = ((safe_sub_func_uint16_t_u_u(p_63, 0x3D84L)) > (l_530[5][0][3] & (p_2746->g_193[5] <= (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u((--p_2746->g_542), 0x55F1E793L)), (safe_sub_func_int64_t_s_s((((safe_unary_minus_func_int16_t_s((((safe_div_func_uint32_t_u_u(p_2746->g_126, ((*p_2746->g_246) && (safe_rshift_func_int16_t_s_u((l_556 = (safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(0x45C5L, 6)) != 1L) ^ p_65), 3UL))), p_2746->g_105))))) > (*l_366)) , l_557))) >= p_63) ^ p_63), (*l_118))))) <= 1UL), 0)), l_530[5][0][3])), p_61)))));
                    (*l_118) = (-1L);
                }
                else
                { /* block id: 188 */
                    for (p_2746->g_415.f0 = 3; (p_2746->g_415.f0 >= 0); p_2746->g_415.f0 -= 1)
                    { /* block id: 191 */
                        int i, j, k;
                        l_530[(p_64 + 1)][(p_64 + 3)][p_2746->g_415.f0] |= ((*p_2746->g_69) >= p_2746->g_558[1]);
                        return (*p_62);
                    }
                }
                if ((*p_2746->g_69))
                    continue;
            }
            (*l_103) = ((((*l_559) |= p_64) != ((*l_343) = (+(0x44L == (safe_unary_minus_func_uint16_t_u(((safe_sub_func_int64_t_s_s((l_563 != p_62), p_2746->g_564)) != (*l_366)))))))) , ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u((((*l_573) = (((safe_div_func_uint64_t_u_u((0x494F13510273F782L & (((*p_2746->g_246) || 0x43L) , p_65)), 1L)) , 0x1628B1DBL) , 0x0CL)) > (*l_103)), p_2746->g_542)) != (*l_366)), 3)), 0x9FCD6B9C0C3E298AL)) != 0x1DL));
            for (p_2746->g_158 = 4; (p_2746->g_158 >= 1); p_2746->g_158 -= 1)
            { /* block id: 204 */
                return (*p_62);
            }
            if ((*l_103))
                continue;
        }
        for (l_234 = 4; (l_234 >= 0); l_234 -= 1)
        { /* block id: 211 */
            int i;
            if (l_233[l_234])
                break;
            return (*p_62);
        }
    }
    return &p_2746->g_41[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2746->g_69 p_2746->g_41
 * writes: p_2746->g_41
 */
int32_t ** func_66(int64_t  p_67, struct S2 * p_2746)
{ /* block id: 17 */
    uint64_t l_68 = 18446744073709551608UL;
    (*p_2746->g_69) &= l_68;
    return &p_2746->g_40[6];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_2747;
    struct S2* p_2746 = &c_2747;
    struct S2 c_2748 = {
        0x16L, // p_2746->g_5
        {{4L,4L},{4L,4L}}, // p_2746->g_41
        {(void*)0,&p_2746->g_41[1][0],(void*)0,(void*)0,&p_2746->g_41[1][0],(void*)0,(void*)0,&p_2746->g_41[1][0]}, // p_2746->g_40
        &p_2746->g_41[1][0], // p_2746->g_69
        1L, // p_2746->g_73
        0xB930L, // p_2746->g_85
        4294967287UL, // p_2746->g_105
        (void*)0, // p_2746->g_106
        (-2L), // p_2746->g_115
        0L, // p_2746->g_126
        {{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}},{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}},{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}},{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}},{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}},{{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL},{0x5CL},{0x30L},{0x30L},{0x5CL}}}, // p_2746->g_134
        {0x3867A306L}, // p_2746->g_146
        2L, // p_2746->g_158
        0L, // p_2746->g_162
        {0x74L,(-1L),0x74L,0x74L,(-1L),0x74L,0x74L}, // p_2746->g_193
        4UL, // p_2746->g_247
        &p_2746->g_247, // p_2746->g_246
        252UL, // p_2746->g_306
        0xE62CBD8DC3DEB63CL, // p_2746->g_350
        {0x3FL}, // p_2746->g_415
        &p_2746->g_126, // p_2746->g_426
        {&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426,&p_2746->g_426}, // p_2746->g_425
        {&p_2746->g_425[1],&p_2746->g_425[1],&p_2746->g_425[1],&p_2746->g_425[1],&p_2746->g_425[1],&p_2746->g_425[1],&p_2746->g_425[1]}, // p_2746->g_424
        0L, // p_2746->g_444
        0x71FB7C04L, // p_2746->g_452
        {0x620E62C3L,0x620E62C3L,0x620E62C3L,0x620E62C3L,0x620E62C3L,0x620E62C3L}, // p_2746->g_486
        18446744073709551607UL, // p_2746->g_542
        {0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L}, // p_2746->g_558
        (-9L), // p_2746->g_564
        {{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL},{0x871AL,0xC552L,1UL,0x22BCL,0x3A7BL,0x3A7BL,0x22BCL,1UL,0xC552L,0x871AL}}, // p_2746->g_618
        {{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L},{(-6L),(-6L),0x5C82BCBDL,0x6D569D73L}}, // p_2746->g_630
        {-1L}, // p_2746->g_640
        6L, // p_2746->g_652
        0x8AC0F73177397DA0L, // p_2746->g_768
        {&p_2746->g_558[1],&p_2746->g_558[1],&p_2746->g_558[1]}, // p_2746->g_783
        {{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}}, // p_2746->g_797
        0x3C2F4B56L, // p_2746->g_800
        {{{&p_2746->g_783[0]},{&p_2746->g_783[0]},{&p_2746->g_783[0]}},{{&p_2746->g_783[0]},{&p_2746->g_783[0]},{&p_2746->g_783[0]}}}, // p_2746->g_833
        18446744073709551614UL, // p_2746->g_874
        {5L}, // p_2746->g_894
        0UL, // p_2746->g_910
        &p_2746->g_910, // p_2746->g_909
        &p_2746->g_909, // p_2746->g_908
        {{1L},{1L},{1L},{1L},{1L}}, // p_2746->g_951
        0x462CL, // p_2746->g_1053
        {0x7142BBB0L,0x7142BBB0L,0x7142BBB0L,0x7142BBB0L,0x7142BBB0L,0x7142BBB0L}, // p_2746->g_1071
        (void*)0, // p_2746->g_1140
        &p_2746->g_1140, // p_2746->g_1139
        0x2AC2L, // p_2746->g_1154
        &p_2746->g_618[3][5], // p_2746->g_1199
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_2746->g_1236
        {&p_2746->g_1236[0],(void*)0,&p_2746->g_1236[0],&p_2746->g_1236[0],(void*)0,&p_2746->g_1236[0],&p_2746->g_1236[0],(void*)0,&p_2746->g_1236[0]}, // p_2746->g_1235
        {0x49C71A79L}, // p_2746->g_1256
        {1L}, // p_2746->g_1283
        {{0x37D06DD8L},{0x58F159BDL},{0x37D06DD8L},{0x37D06DD8L},{0x58F159BDL},{0x37D06DD8L},{0x37D06DD8L},{0x58F159BDL}}, // p_2746->g_1289
        {{0x71763F5DL},{1L},{0x71763F5DL},{0x71763F5DL},{1L},{0x71763F5DL}}, // p_2746->g_1311
        {0x28BF035EL}, // p_2746->g_1401
        {0x517C28B5L}, // p_2746->g_1404
        (void*)0, // p_2746->g_1407
        &p_2746->g_1407, // p_2746->g_1406
        0x48L, // p_2746->g_1422
        3L, // p_2746->g_1516
        {0xA972E1ED7AC43428L,0xA972E1ED7AC43428L,0xA972E1ED7AC43428L,0xA972E1ED7AC43428L,0xA972E1ED7AC43428L}, // p_2746->g_1517
        (void*)0, // p_2746->g_1569
        0x26F14494L, // p_2746->g_1644
        &p_2746->g_833[1][1][0], // p_2746->g_1681
        {0x2EL}, // p_2746->g_1702
        &p_2746->g_134[0][8], // p_2746->g_1723
        &p_2746->g_1723, // p_2746->g_1722
        0xA52E30D8L, // p_2746->g_1736
        {0xE186L,0x5A68L,0xE186L,0xE186L,0x5A68L,0xE186L,0xE186L}, // p_2746->g_1737
        (void*)0, // p_2746->g_1763
        &p_2746->g_40[7], // p_2746->g_1764
        &p_2746->g_1199, // p_2746->g_1788
        {0L}, // p_2746->g_1803
        &p_2746->g_40[5], // p_2746->g_1834
        &p_2746->g_40[6], // p_2746->g_1854
        7L, // p_2746->g_1870
        (void*)0, // p_2746->g_1899
        &p_2746->g_193[1], // p_2746->g_1905
        &p_2746->g_1905, // p_2746->g_1904
        &p_2746->g_1904, // p_2746->g_1903
        {0x7CEE660BL}, // p_2746->g_1914
        (void*)0, // p_2746->g_1947
        &p_2746->g_40[6], // p_2746->g_1949
        &p_2746->g_1949, // p_2746->g_1948
        {0x4E81AEBEL}, // p_2746->g_1986
        {{&p_2746->g_350,&p_2746->g_542,&p_2746->g_350,&p_2746->g_350,&p_2746->g_542,&p_2746->g_350,&p_2746->g_350,&p_2746->g_542,&p_2746->g_350}}, // p_2746->g_2077
        &p_2746->g_2077[0][7], // p_2746->g_2076
        {{8L},{8L}}, // p_2746->g_2089
        (void*)0, // p_2746->g_2162
        {0x10796892L}, // p_2746->g_2204
        {0x10L}, // p_2746->g_2261
        (void*)0, // p_2746->g_2293
        {{0x3E66D628L},{0x3E66D628L},{0x3E66D628L},{0x3E66D628L},{0x3E66D628L},{0x3E66D628L},{0x3E66D628L}}, // p_2746->g_2294
        {1L}, // p_2746->g_2313
        1UL, // p_2746->g_2330
        0x10D4DD0BL, // p_2746->g_2374
        {-6L}, // p_2746->g_2421
        0x8D9DC46AL, // p_2746->g_2434
        0x468F2B64L, // p_2746->g_2476
        &p_2746->g_2476, // p_2746->g_2475
        &p_2746->g_2475, // p_2746->g_2474
        (void*)0, // p_2746->g_2488
        {1L}, // p_2746->g_2501
        (void*)0, // p_2746->g_2535
        0x75EE6D3EL, // p_2746->g_2586
        {&p_2746->g_2374,&p_2746->g_2374}, // p_2746->g_2676
        {&p_2746->g_1870,&p_2746->g_1870,&p_2746->g_1870,&p_2746->g_1870,&p_2746->g_1870,&p_2746->g_1870}, // p_2746->g_2677
        &p_2746->g_1870, // p_2746->g_2679
    };
    c_2747 = c_2748;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2746);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2746->g_5, "p_2746->g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2746->g_41[i][j], "p_2746->g_41[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2746->g_73, "p_2746->g_73", print_hash_value);
    transparent_crc(p_2746->g_85, "p_2746->g_85", print_hash_value);
    transparent_crc(p_2746->g_105, "p_2746->g_105", print_hash_value);
    transparent_crc(p_2746->g_115, "p_2746->g_115", print_hash_value);
    transparent_crc(p_2746->g_126, "p_2746->g_126", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2746->g_134[i][j].f0, "p_2746->g_134[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2746->g_146.f0, "p_2746->g_146.f0", print_hash_value);
    transparent_crc(p_2746->g_158, "p_2746->g_158", print_hash_value);
    transparent_crc(p_2746->g_162, "p_2746->g_162", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2746->g_193[i], "p_2746->g_193[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_247, "p_2746->g_247", print_hash_value);
    transparent_crc(p_2746->g_306, "p_2746->g_306", print_hash_value);
    transparent_crc(p_2746->g_350, "p_2746->g_350", print_hash_value);
    transparent_crc(p_2746->g_415.f0, "p_2746->g_415.f0", print_hash_value);
    transparent_crc(p_2746->g_444, "p_2746->g_444", print_hash_value);
    transparent_crc(p_2746->g_452, "p_2746->g_452", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2746->g_486[i], "p_2746->g_486[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_542, "p_2746->g_542", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2746->g_558[i], "p_2746->g_558[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_564, "p_2746->g_564", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2746->g_618[i][j], "p_2746->g_618[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_2746->g_630[i][j], "p_2746->g_630[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2746->g_640.f0, "p_2746->g_640.f0", print_hash_value);
    transparent_crc(p_2746->g_652, "p_2746->g_652", print_hash_value);
    transparent_crc(p_2746->g_768, "p_2746->g_768", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2746->g_797[i][j].f0, "p_2746->g_797[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_2746->g_800, "p_2746->g_800", print_hash_value);
    transparent_crc(p_2746->g_874, "p_2746->g_874", print_hash_value);
    transparent_crc(p_2746->g_894.f0, "p_2746->g_894.f0", print_hash_value);
    transparent_crc(p_2746->g_910, "p_2746->g_910", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2746->g_951[i].f0, "p_2746->g_951[i].f0", print_hash_value);

    }
    transparent_crc(p_2746->g_1053, "p_2746->g_1053", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2746->g_1071[i], "p_2746->g_1071[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_1154, "p_2746->g_1154", print_hash_value);
    transparent_crc(p_2746->g_1256.f0, "p_2746->g_1256.f0", print_hash_value);
    transparent_crc(p_2746->g_1283.f0, "p_2746->g_1283.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2746->g_1289[i].f0, "p_2746->g_1289[i].f0", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2746->g_1311[i].f0, "p_2746->g_1311[i].f0", print_hash_value);

    }
    transparent_crc(p_2746->g_1401.f0, "p_2746->g_1401.f0", print_hash_value);
    transparent_crc(p_2746->g_1404.f0, "p_2746->g_1404.f0", print_hash_value);
    transparent_crc(p_2746->g_1422, "p_2746->g_1422", print_hash_value);
    transparent_crc(p_2746->g_1516, "p_2746->g_1516", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2746->g_1517[i], "p_2746->g_1517[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_1644, "p_2746->g_1644", print_hash_value);
    transparent_crc(p_2746->g_1702.f0, "p_2746->g_1702.f0", print_hash_value);
    transparent_crc(p_2746->g_1736, "p_2746->g_1736", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2746->g_1737[i], "p_2746->g_1737[i]", print_hash_value);

    }
    transparent_crc(p_2746->g_1803.f0, "p_2746->g_1803.f0", print_hash_value);
    transparent_crc(p_2746->g_1870, "p_2746->g_1870", print_hash_value);
    transparent_crc(p_2746->g_1914.f0, "p_2746->g_1914.f0", print_hash_value);
    transparent_crc(p_2746->g_1986.f0, "p_2746->g_1986.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2746->g_2089[i].f0, "p_2746->g_2089[i].f0", print_hash_value);

    }
    transparent_crc(p_2746->g_2204.f0, "p_2746->g_2204.f0", print_hash_value);
    transparent_crc(p_2746->g_2261.f0, "p_2746->g_2261.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2746->g_2294[i].f0, "p_2746->g_2294[i].f0", print_hash_value);

    }
    transparent_crc(p_2746->g_2313.f0, "p_2746->g_2313.f0", print_hash_value);
    transparent_crc(p_2746->g_2330, "p_2746->g_2330", print_hash_value);
    transparent_crc(p_2746->g_2374, "p_2746->g_2374", print_hash_value);
    transparent_crc(p_2746->g_2421.f0, "p_2746->g_2421.f0", print_hash_value);
    transparent_crc(p_2746->g_2434, "p_2746->g_2434", print_hash_value);
    transparent_crc(p_2746->g_2476, "p_2746->g_2476", print_hash_value);
    transparent_crc(p_2746->g_2501.f0, "p_2746->g_2501.f0", print_hash_value);
    transparent_crc(p_2746->g_2586, "p_2746->g_2586", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
