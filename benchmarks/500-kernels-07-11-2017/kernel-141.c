// -g 25,86,2 -l 1,2,1
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


// Seed: 3952589161

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t *g_8;
    volatile uint32_t g_17;
    uint64_t g_32[3];
    int32_t g_40;
    int64_t g_82;
    uint32_t g_101;
    int16_t g_103;
    int32_t g_104[8];
    uint32_t g_105;
    int8_t g_133[8][6];
    uint32_t g_134;
    int64_t g_135;
    int32_t **g_137[1][4];
    uint64_t g_168;
    uint8_t g_215;
    uint16_t g_217;
    int16_t g_241;
    int8_t g_277;
    int8_t *g_276;
    int16_t g_286;
    int32_t **g_327[1];
    uint16_t g_355[2][7][6];
    int16_t ***g_371;
    uint32_t g_438[7][1][1];
    uint16_t *g_488;
    uint64_t *g_501;
    int8_t g_508;
    int32_t g_561;
    uint32_t g_564[6][2];
    int32_t g_569;
    volatile uint32_t g_682;
    volatile uint32_t * volatile g_681;
    volatile uint32_t * volatile *g_680;
    int32_t *g_695;
    int64_t g_745;
    int8_t g_762;
    int64_t *g_821[9];
    int64_t *g_822[4];
    int32_t ***g_854;
    int32_t g_919;
    uint64_t **g_921;
    uint64_t g_927;
    int32_t *g_1006[7];
    int32_t ** volatile g_1005;
    int32_t ** volatile *g_1004;
    int32_t *g_1008;
    uint64_t g_1049;
    int16_t g_1084;
    uint32_t g_1085;
    int32_t g_1124[3];
    uint8_t g_1160[9];
    uint64_t g_1192;
    int8_t g_1312;
    int32_t g_1322[10][3];
    volatile int64_t g_1495;
    volatile int64_t *g_1494;
    volatile int64_t * volatile *g_1493;
    volatile int64_t * volatile **g_1492;
    uint64_t g_1526[10][3][8];
    uint8_t *g_1533[8];
    uint32_t g_1545;
    int32_t g_1705[8][8];
    uint8_t g_1722;
    volatile uint8_t *g_1749;
    volatile uint8_t * volatile *g_1748;
    uint8_t **g_1751[10][1];
    uint32_t g_1898;
    int32_t g_1936[1];
    uint32_t *g_2008[1];
    uint8_t g_2042;
    int16_t g_2189[4];
    volatile int16_t g_2354;
    volatile int16_t *g_2353;
    volatile int16_t **g_2352;
    volatile int32_t g_2365;
    volatile int32_t * volatile g_2364;
    volatile int32_t * volatile *g_2363;
    volatile int32_t * volatile * volatile *g_2362;
    volatile int32_t * volatile * volatile * volatile *g_2361[7];
    volatile int32_t * volatile * volatile * volatile * volatile *g_2360;
    uint16_t g_2420[4][4];
    volatile int32_t *g_2459;
    volatile int32_t * volatile *g_2458;
    volatile int32_t * volatile * volatile *g_2457;
    volatile int32_t * volatile * volatile **g_2456;
    volatile uint8_t ** volatile g_2466;
    volatile uint8_t ** volatile *g_2465;
    volatile uint8_t ** volatile **g_2464;
    uint16_t g_2469;
    int32_t * volatile * volatile g_2831;
    int32_t * volatile * volatile *g_2830;
    int32_t * volatile * volatile ** volatile g_2829;
    int32_t * volatile * volatile ** volatile *g_2828[7];
    int32_t * volatile * volatile ** volatile * volatile *g_2827;
    int32_t * volatile * volatile ** volatile * volatile * volatile *g_2826;
    uint64_t g_2879;
    volatile int8_t g_2943;
    volatile int8_t * volatile g_2942;
    volatile int8_t * volatile *g_2941;
    volatile int8_t * volatile **g_2940;
    int32_t g_2969;
    int64_t ***g_2976;
    uint16_t g_3022;
    int32_t ****g_3108;
    int32_t *****g_3107;
    volatile int16_t g_3119;
    volatile uint32_t g_3131;
    uint64_t g_3192;
    uint64_t *g_3226;
    uint32_t *g_3233;
    uint32_t ** volatile g_3232[9];
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S0 * p_3296);
int32_t * func_2(int32_t * p_3, uint8_t  p_4, int32_t  p_5, int32_t  p_6, int32_t * p_7, struct S0 * p_3296);
uint8_t  func_10(uint64_t  p_11, int32_t  p_12, struct S0 * p_3296);
int64_t  func_18(int32_t * p_19, int32_t * p_20, int16_t  p_21, struct S0 * p_3296);
int16_t  func_23(int32_t * p_24, int32_t * p_25, int32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_3296);
int32_t * func_29(int32_t  p_30, int16_t  p_31, struct S0 * p_3296);
uint8_t  func_36(int32_t * p_37, int32_t * p_38, struct S0 * p_3296);
int32_t * func_41(uint64_t  p_42, uint64_t  p_43, uint8_t  p_44, int32_t * p_45, uint32_t  p_46, struct S0 * p_3296);
uint64_t  func_53(int32_t * p_54, uint16_t  p_55, struct S0 * p_3296);
int32_t * func_56(int32_t * p_57, uint32_t  p_58, int16_t  p_59, int32_t  p_60, struct S0 * p_3296);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3296->g_8 p_3296->g_17 p_3296->g_921 p_3296->g_501 p_3296->g_168 p_3296->g_2829 p_3296->g_2830 p_3296->g_2831 p_3296->g_695 p_3296->g_40 p_3296->g_355 p_3296->g_2469 p_3296->g_2042 p_3296->g_1494 p_3296->g_1495 p_3296->g_488 p_3296->g_217 p_3296->g_2362 p_3296->g_2363 p_3296->g_2364 p_3296->g_2365 p_3296->g_1936 p_3296->g_1008 p_3296->g_2353 p_3296->g_2354
 * writes: p_3296->g_2469 p_3296->g_2365 p_3296->g_695 p_3296->g_40
 */
int16_t  func_1(struct S0 * p_3296)
{ /* block id: 4 */
    int16_t l_9 = 0x1328L;
    int32_t *l_22 = (void*)0;
    uint32_t l_3065[1];
    int i;
    for (i = 0; i < 1; i++)
        l_3065[i] = 0UL;
    l_22 = func_2(p_3296->g_8, l_9, (func_10((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_3296->g_17, (func_18(l_22, p_3296->g_8, l_9, p_3296) & (**p_3296->g_921)))) && ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((l_9 < (****p_3296->g_2829)), 3)), (**p_3296->g_921))) ^ p_3296->g_355[0][0][1]), l_3065[0])) || l_3065[0])), 3)), l_3065[0], p_3296) <= 0x94L), (*p_3296->g_1008), l_22, p_3296);
    (*p_3296->g_1008) |= l_9;
    return (*p_3296->g_2353);
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_488 p_3296->g_217 p_3296->g_2363 p_3296->g_2364 p_3296->g_2365 p_3296->g_2830 p_3296->g_2831
 * writes: p_3296->g_2365 p_3296->g_695
 */
int32_t * func_2(int32_t * p_3, uint8_t  p_4, int32_t  p_5, int32_t  p_6, int32_t * p_7, struct S0 * p_3296)
{ /* block id: 1523 */
    int8_t l_3292[8] = {1L,(-7L),1L,1L,(-7L),1L,1L,(-7L)};
    int32_t *l_3295 = &p_3296->g_1322[4][0];
    int i;
    (**p_3296->g_2363) &= (l_3292[7] != (safe_rshift_func_uint16_t_u_u((*p_3296->g_488), p_5)));
    (**p_3296->g_2830) = (l_3295 = (void*)0);
    return l_3295;
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_2469 p_3296->g_2042 p_3296->g_501 p_3296->g_168 p_3296->g_1494 p_3296->g_1495 p_3296->g_488 p_3296->g_217 p_3296->g_2362 p_3296->g_2363 p_3296->g_2364 p_3296->g_2365 p_3296->g_1936
 * writes: p_3296->g_2469 p_3296->g_2365
 */
uint8_t  func_10(uint64_t  p_11, int32_t  p_12, struct S0 * p_3296)
{ /* block id: 1426 */
    int64_t l_3070 = 0x1A4D22EC6A08F74AL;
    int32_t *l_3083 = &p_3296->g_104[2];
    uint32_t l_3117[9] = {0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL,0x98722B8DL};
    int32_t *l_3121 = &p_3296->g_1936[0];
    int32_t l_3135 = 0x76AEAE95L;
    int32_t l_3137 = 0x34E610A3L;
    uint64_t l_3161 = 0x719268939EE48A07L;
    uint16_t *l_3220 = &p_3296->g_355[0][6][2];
    int32_t *******l_3221 = (void*)0;
    uint8_t *l_3287[8] = {&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722,&p_3296->g_1722};
    int i;
    for (p_3296->g_2469 = (-28); (p_3296->g_2469 == 29); p_3296->g_2469 = safe_add_func_uint64_t_u_u(p_3296->g_2469, 3))
    { /* block id: 1429 */
        int16_t l_3084 = 0x2B81L;
        int32_t *l_3090 = (void*)0;
        int32_t l_3132 = 0x39E83311L;
        int32_t l_3133 = (-5L);
        int32_t l_3139 = 0x10D272D2L;
        int64_t **l_3208 = (void*)0;
        int64_t ***l_3207 = &l_3208;
        uint64_t **l_3291 = &p_3296->g_501;
        (***p_3296->g_2362) = ((((((+(safe_mul_func_uint16_t_u_u(l_3070, (safe_div_func_uint64_t_u_u((~p_11), p_12))))) < (safe_mod_func_int16_t_s_s((((-3L) & p_12) || (p_3296->g_2042 , (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((4UL < p_11) || ((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((l_3070 && 7L) , (*p_3296->g_501)), (*p_3296->g_1494))), (-1L))) , 249UL)), 7)) | p_11), 2)))), (*p_3296->g_488)))) , (void*)0) != l_3083) , p_12) > l_3084);
        for (l_3070 = 0; (l_3070 > 5); l_3070++)
        { /* block id: 1433 */
            int32_t l_3087 = (-1L);
            int32_t *l_3096[5];
            int32_t l_3134 = 8L;
            int64_t *l_3202 = &p_3296->g_135;
            int64_t **l_3206 = &p_3296->g_822[0];
            int64_t ***l_3205 = &l_3206;
            uint8_t **l_3266[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *******l_3267 = (void*)0;
            int16_t l_3290 = 0x5CB3L;
            int i;
            for (i = 0; i < 5; i++)
                l_3096[i] = &l_3087;
            (1 + 1);
        }
        (***p_3296->g_2362) |= (&p_3296->g_501 == l_3291);
    }
    return (*l_3121);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_18(int32_t * p_19, int32_t * p_20, int16_t  p_21, struct S0 * p_3296)
{ /* block id: 5 */
    int64_t l_35 = 0x29A275FF44426282L;
    int32_t *l_39 = &p_3296->g_40;
    int8_t *l_760 = (void*)0;
    int8_t *l_761 = &p_3296->g_762;
    uint32_t l_1317 = 0xD6AFD36EL;
    uint64_t *l_1318 = &p_3296->g_1049;
    int16_t *l_1319 = &p_3296->g_1084;
    int32_t *l_1321[1][8][6] = {{{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0},{(void*)0,&p_3296->g_1322[1][2],(void*)0,(void*)0,&p_3296->g_1322[1][2],(void*)0}}};
    uint32_t l_1630 = 0x54F69B22L;
    uint32_t l_1724 = 0xEB508E87L;
    uint8_t **l_1750 = &p_3296->g_1533[0];
    int8_t l_1804 = 7L;
    int32_t l_1827 = 1L;
    int32_t **l_1873 = &p_3296->g_1006[6];
    int32_t l_1880[4][8] = {{1L,(-1L),9L,(-1L),1L,1L,(-1L),9L},{1L,(-1L),9L,(-1L),1L,1L,(-1L),9L},{1L,(-1L),9L,(-1L),1L,1L,(-1L),9L},{1L,(-1L),9L,(-1L),1L,1L,(-1L),9L}};
    uint64_t l_1888[3];
    int32_t l_1963[3];
    int64_t l_1966[5];
    uint64_t l_1981 = 18446744073709551610UL;
    uint32_t *l_2007[1][5][9] = {{{(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0},{(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0},{(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0},{(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0},{(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0,&p_3296->g_1898,&p_3296->g_1898,(void*)0,(void*)0}}};
    uint16_t l_2114 = 7UL;
    uint32_t l_2321 = 0xAE138C7DL;
    uint16_t **l_2329 = &p_3296->g_488;
    int32_t l_2510 = (-1L);
    uint8_t l_2518 = 0x92L;
    int64_t l_2573[9][7] = {{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L},{0x7DA096AA73F49D65L,(-1L),0x62282FED734739ABL,0L,0x081AB06CD32887A2L,0x4D39B85E8E1167B3L,5L}};
    uint8_t l_2625 = 0xC5L;
    uint8_t ***l_2644 = (void*)0;
    uint8_t ****l_2643[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t ****l_2649 = (void*)0;
    int32_t ***l_2680 = &p_3296->g_327[0];
    uint32_t l_2780 = 0x78B3A0BBL;
    int64_t l_2796 = 0L;
    uint64_t l_2834[1];
    int16_t l_2883[3][7] = {{0x0D41L,0L,0x0D41L,0x0D41L,0L,0x0D41L,0x0D41L},{0x0D41L,0L,0x0D41L,0x0D41L,0L,0x0D41L,0x0D41L},{0x0D41L,0L,0x0D41L,0x0D41L,0L,0x0D41L,0x0D41L}};
    int8_t l_2927 = 0x1AL;
    uint8_t l_2970 = 0UL;
    int32_t ****l_2983[2];
    int32_t *****l_2982 = &l_2983[1];
    int32_t ******l_2981 = &l_2982;
    int32_t *******l_2980 = &l_2981;
    uint32_t l_3053 = 2UL;
    int16_t l_3058 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1888[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_1963[i] = 1L;
    for (i = 0; i < 5; i++)
        l_1966[i] = 0L;
    for (i = 0; i < 1; i++)
        l_2834[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_2983[i] = &p_3296->g_854;
    return l_3058;
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_355 p_3296->g_133 p_3296->g_1322 p_3296->g_695 p_3296->g_40 p_3296->g_105 p_3296->g_561 p_3296->g_1160 p_3296->g_1008 p_3296->g_921 p_3296->g_501 p_3296->g_168 p_3296->g_82 p_3296->g_569 p_3296->g_276 p_3296->g_32 p_3296->g_277 p_3296->g_1049 p_3296->g_286 p_3296->g_215 p_3296->g_103 p_3296->g_1084 p_3296->g_1492 p_3296->g_1192 p_3296->g_241 p_3296->g_104 p_3296->g_508 p_3296->g_927 p_3296->g_135 p_3296->g_1545 p_3296->g_217 p_3296->g_919 p_3296->g_564 p_3296->g_134
 * writes: p_3296->g_1008 p_3296->g_105 p_3296->g_927 p_3296->g_134 p_3296->g_569 p_3296->g_561 p_3296->g_1160 p_3296->g_286 p_3296->g_564 p_3296->g_745 p_3296->g_1322 p_3296->g_40 p_3296->g_854 p_3296->g_277 p_3296->g_135 p_3296->g_241 p_3296->g_215 p_3296->g_1049 p_3296->g_103 p_3296->g_101 p_3296->g_1192 p_3296->g_1533 p_3296->g_1545 p_3296->g_508 p_3296->g_371 p_3296->g_168 p_3296->g_82 p_3296->g_355
 */
int16_t  func_23(int32_t * p_24, int32_t * p_25, int32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_3296)
{ /* block id: 567 */
    uint8_t l_1323[7][2] = {{0x60L,0x60L},{0x60L,0x60L},{0x60L,0x60L},{0x60L,0x60L},{0x60L,0x60L},{0x60L,0x60L},{0x60L,0x60L}};
    int32_t **l_1338 = (void*)0;
    int32_t **l_1339 = &p_3296->g_1008;
    uint64_t *l_1522 = &p_3296->g_1192;
    uint64_t *l_1525[8] = {&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1],&p_3296->g_1526[8][2][1]};
    int32_t l_1527 = 1L;
    int32_t **l_1528 = &p_3296->g_1006[1];
    uint8_t *l_1532 = (void*)0;
    uint8_t **l_1531[4] = {&l_1532,&l_1532,&l_1532,&l_1532};
    uint8_t *l_1538 = &p_3296->g_1160[3];
    int32_t *l_1543 = &l_1527;
    int64_t *l_1544 = &p_3296->g_135;
    int32_t *l_1546 = &p_3296->g_1322[6][2];
    int8_t l_1547 = 0x15L;
    int16_t *l_1567 = &p_3296->g_1084;
    int16_t **l_1566 = &l_1567;
    int16_t ***l_1565 = &l_1566;
    int32_t l_1569 = 0x725D0BEBL;
    int8_t l_1596[8][9][1] = {{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L},{0x67L}}};
    int i, j, k;
    (*l_1339) = func_29(p_28, ((l_1323[0][1] | (p_3296->g_355[0][2][4] & ((0xF861L < (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_1323[0][1], (safe_lshift_func_uint8_t_u_u(p_28, (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((p_3296->g_133[3][3] <= ((safe_div_func_uint16_t_u_u(((((((safe_mul_func_uint8_t_u_u(0xA1L, l_1323[6][0])) && 0L) >= p_3296->g_1322[1][2]) , 0L) , 0x355CF906L) < (*p_3296->g_695)), 0x7D14L)) , 0xFEL)) , 0x6C74L), 1L)) & p_28) , 0x17L), 0x21L)))))), p_26))) == p_28))) & 0x1EL), p_3296);
    for (p_3296->g_105 = (-17); (p_3296->g_105 < 51); p_3296->g_105 = safe_add_func_uint16_t_u_u(p_3296->g_105, 8))
    { /* block id: 571 */
        int8_t l_1353 = 0x1FL;
        int32_t *l_1425 = &p_3296->g_919;
        uint8_t l_1430 = 0UL;
        int32_t l_1434[9][6][2] = {{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}},{{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L},{0x5B4381CBL,7L}}};
        int32_t *l_1459 = &p_3296->g_1322[5][1];
        int64_t *l_1509 = &p_3296->g_745;
        int i, j, k;
        for (p_3296->g_927 = 15; (p_3296->g_927 == 35); p_3296->g_927++)
        { /* block id: 574 */
            int32_t *l_1344 = &p_3296->g_1322[3][1];
            int32_t *l_1345 = &p_3296->g_40;
            int32_t *l_1346 = &p_3296->g_1322[1][2];
            int32_t *l_1347 = (void*)0;
            int32_t *l_1348 = &p_3296->g_1322[1][2];
            int32_t *l_1349 = &p_3296->g_1322[7][0];
            int32_t *l_1350 = &p_3296->g_40;
            int32_t *l_1351 = (void*)0;
            int32_t *l_1352[9] = {&p_3296->g_40,&p_3296->g_1322[9][1],&p_3296->g_40,&p_3296->g_40,&p_3296->g_1322[9][1],&p_3296->g_40,&p_3296->g_40,&p_3296->g_1322[9][1],&p_3296->g_40};
            uint32_t l_1354[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            uint16_t *l_1433[1];
            int32_t *l_1442 = &p_3296->g_569;
            int32_t **l_1441 = &l_1442;
            int32_t ***l_1443 = &p_3296->g_327[0];
            int32_t ***l_1444 = &p_3296->g_327[0];
            int32_t **l_1445 = &l_1442;
            uint8_t l_1458 = 0x7BL;
            int i;
            for (i = 0; i < 1; i++)
                l_1433[i] = &p_3296->g_355[0][2][4];
            ++l_1354[4];
            for (p_3296->g_134 = (-24); (p_3296->g_134 == 36); ++p_3296->g_134)
            { /* block id: 578 */
                uint8_t l_1403 = 246UL;
                for (p_3296->g_569 = (-7); (p_3296->g_569 < (-3)); p_3296->g_569 = safe_add_func_uint8_t_u_u(p_3296->g_569, 6))
                { /* block id: 581 */
                    int16_t l_1378 = 7L;
                    int32_t ***l_1392[4] = {&p_3296->g_137[0][1],&p_3296->g_137[0][1],&p_3296->g_137[0][1],&p_3296->g_137[0][1]};
                    int32_t ***l_1395[1][2];
                    uint64_t **l_1405 = &p_3296->g_501;
                    uint32_t l_1406 = 0UL;
                    int32_t *l_1428 = &p_3296->g_919;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1395[i][j] = &p_3296->g_137[0][1];
                    }
                    for (p_3296->g_561 = 7; (p_3296->g_561 >= 2); p_3296->g_561 -= 1)
                    { /* block id: 584 */
                        int32_t l_1375 = 4L;
                        uint32_t *l_1376 = (void*)0;
                        uint32_t *l_1377 = &p_3296->g_564[4][1];
                        int64_t *l_1379 = (void*)0;
                        int32_t **l_1380 = (void*)0;
                        int32_t ***l_1381 = &l_1380;
                        int32_t ****l_1393 = (void*)0;
                        int32_t ****l_1394 = &l_1392[2];
                        int32_t ****l_1396 = &p_3296->g_854;
                        uint8_t *l_1404 = &p_3296->g_1160[0];
                        int32_t **l_1426 = (void*)0;
                        int32_t **l_1427[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                        int16_t *l_1429 = &p_3296->g_286;
                        int64_t *l_1431 = &p_3296->g_135;
                        int16_t *l_1432 = &p_3296->g_241;
                        int i, j;
                        (*l_1346) |= ((((p_3296->g_745 = ((0x30FF2E95L < ((safe_rshift_func_uint8_t_u_s((p_3296->g_1160[(p_3296->g_561 + 1)] = p_3296->g_1160[(p_3296->g_561 + 1)]), ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((4294967292UL <= (safe_lshift_func_uint16_t_u_s((((*l_1377) = ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((p_26 >= l_1353), ((((*p_24) >= (safe_rshift_func_uint16_t_u_u(4UL, 9))) || (-1L)) > ((((p_3296->g_286 = p_28) ^ l_1375) , 65526UL) != p_28)))), 0x1F94L)) != (**l_1339))) < 6L), 13))), (**p_3296->g_921))), l_1378)) , p_26))) != (*p_3296->g_501))) | p_28)) , l_1353) || l_1353) , 4L);
                        (*p_3296->g_1008) = (*l_1345);
                        (*l_1348) = (((((*l_1381) = l_1380) == &p_3296->g_1006[1]) == ((((**l_1339) = (safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((-7L), (safe_sub_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((p_28 , (((l_1395[0][0] = ((*l_1394) = l_1392[1])) != ((*l_1396) = (void*)0)) < (0x9F92L & (((((safe_mod_func_uint16_t_u_u(l_1353, (safe_add_func_int8_t_s_s(((*p_3296->g_276) = (safe_mul_func_uint8_t_u_u(((*l_1404) &= (l_1403 > p_28)), p_3296->g_569))), p_26)))) , &p_3296->g_501) != l_1405) != 1UL) < (-9L))))) ^ p_3296->g_133[3][3]) & (-3L)), p_26)) > l_1403), l_1406)))), (-7L))), 4))) <= p_28) < p_3296->g_32[0])) < p_28);
                        p_27 = func_29((((safe_add_func_uint64_t_u_u(((!(((*l_1432) = ((*l_1344) == ((*l_1431) = (l_1403 && (safe_sub_func_uint64_t_u_u((p_3296->g_569 & (p_28 || ((p_28 , (safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((*p_3296->g_501), (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((*l_1429) = ((safe_add_func_uint16_t_u_u((l_1425 == (l_1428 = func_29((((l_1338 = &p_24) != (void*)0) , l_1403), p_26, p_3296))), (-10L))) >= 9UL)), p_28)) ^ 0x42BCL), l_1403)) > p_28) || 6L))) != p_26), l_1430)), p_28)) , p_3296->g_355[0][6][2]) > p_26), (*p_3296->g_276)))) < p_28))), p_26)))))) ^ l_1353)) ^ p_3296->g_40), l_1403)) || (*p_3296->g_276)) >= 0x8D10L), p_26, p_3296);
                    }
                }
                (*l_1339) = &p_26;
                if ((*p_25))
                    continue;
            }
        }
        p_25 = &p_26;
        for (p_3296->g_561 = 1; (p_3296->g_561 >= 0); p_3296->g_561 -= 1)
        { /* block id: 620 */
            int32_t l_1474 = 1L;
            int8_t l_1478 = 9L;
            int64_t **l_1491 = &p_3296->g_822[3];
            int64_t ***l_1490[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (p_3296->g_215 = 0; (p_3296->g_215 <= 1); p_3296->g_215 += 1)
            { /* block id: 623 */
                int16_t l_1477[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint16_t *l_1480[4][10] = {{&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217},{&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217},{&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217},{&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217,&p_3296->g_355[0][6][2],&p_3296->g_217}};
                int32_t l_1484 = 0x57DBD238L;
                int i, j;
                l_1459 = &p_26;
                for (p_3296->g_1049 = 0; (p_3296->g_1049 <= 1); p_3296->g_1049 += 1)
                { /* block id: 627 */
                    int64_t *l_1479 = &p_3296->g_745;
                    uint32_t l_1481 = 0x42C1420CL;
                    uint8_t *l_1482 = &p_3296->g_1160[6];
                    uint8_t *l_1483[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1483[i] = (void*)0;
                    for (p_3296->g_286 = 2; (p_3296->g_286 >= 0); p_3296->g_286 -= 1)
                    { /* block id: 630 */
                        (*p_3296->g_1008) = 0x07FF880EL;
                    }
                    (*l_1339) = (((l_1484 |= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*l_1482) = (((*p_3296->g_695) = p_3296->g_355[p_3296->g_1049][p_3296->g_1049][(p_3296->g_215 + 4)]) == ((!(&p_3296->g_355[p_3296->g_215][(p_3296->g_1049 + 4)][(p_3296->g_561 + 2)] == (((*l_1479) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((*p_25), ((((safe_add_func_uint32_t_u_u(l_1474, (*p_25))) , (safe_mod_func_int8_t_s_s((p_3296->g_355[p_3296->g_215][(p_3296->g_1049 + 4)][(p_3296->g_561 + 2)] & (p_3296->g_168 , ((p_26 <= 0xFDL) || l_1477[0]))), p_3296->g_215))) , 0xB1B1E53CL) || l_1478))), (*l_1459)))) , l_1480[3][3]))) >= l_1481))), p_3296->g_103)), 4UL)) | 0x5B20C52E4F301708L), p_26)) ^ 9UL), 14))) > 7L) , &p_26);
                    (*p_24) = 0L;
                    (*l_1339) = func_41(((safe_rshift_func_uint8_t_u_u((&p_3296->g_137[0][3] == (p_28 , &p_3296->g_137[0][3])), (0x037D6C76L >= ((*l_1459) = (-9L))))) != ((l_1484 = p_28) && p_3296->g_40)), l_1477[0], ((*l_1482) = (((((safe_sub_func_uint16_t_u_u(((((((((safe_unary_minus_func_uint64_t_u((p_3296->g_561 , 0xAD70F287748237BEL))) , p_3296->g_1084) , 0x65B2826FL) & 2L) != (*p_3296->g_276)) , l_1478) , (*p_24)) || p_3296->g_355[p_3296->g_215][(p_3296->g_1049 + 4)][(p_3296->g_561 + 2)]), (-2L))) , &p_3296->g_137[0][1]) == &p_3296->g_137[0][1]) , l_1490[1]) == p_3296->g_1492)), (*l_1339), l_1477[0], p_3296);
                }
            }
            for (p_3296->g_215 = 0; (p_3296->g_215 <= 1); p_3296->g_215 += 1)
            { /* block id: 647 */
                int32_t l_1506 = 0x6FF6DDA2L;
                int16_t *l_1516 = &p_3296->g_241;
                uint64_t *l_1517 = &p_3296->g_927;
                if ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((*l_1517) |= (((((safe_sub_func_int16_t_s_s(((*l_1516) |= (p_26 | ((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(l_1506, p_28)), 5)) ^ (safe_mod_func_int32_t_s_s((&p_3296->g_745 != l_1509), (safe_rshift_func_uint16_t_u_s(((((p_26 | (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(4UL, 7)), (p_3296->g_1192 > l_1474))) & (*p_3296->g_276)) | p_28)) != p_28) >= p_26) <= p_3296->g_1084), 4))))))), p_26)) , p_28) , p_3296->g_104[4]) > p_3296->g_508) | (*p_3296->g_501))), p_28)) | (*l_1459)), p_28)))
                { /* block id: 650 */
                    for (p_3296->g_135 = 0; (p_3296->g_135 <= 1); p_3296->g_135 += 1)
                    { /* block id: 653 */
                        int i, j;
                        if (l_1323[p_3296->g_135][p_3296->g_215])
                            break;
                    }
                    return l_1506;
                }
                else
                { /* block id: 657 */
                    return l_1478;
                }
            }
        }
    }
    (*l_1546) ^= (+(safe_mul_func_uint16_t_u_u(p_26, ((safe_sub_func_int16_t_s_s((((l_1527 = (++(*l_1522))) , (l_1528 == l_1528)) , ((safe_div_func_uint32_t_u_u((((p_3296->g_1533[5] = &l_1323[5][0]) != ((p_3296->g_215 |= (p_3296->g_82 && (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((**l_1339), 5)), 5)))) , l_1538)) != ((p_3296->g_1545 |= ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_1544) ^= (p_28 < (((*l_1543) = (((&p_3296->g_1006[1] == (void*)0) | p_3296->g_1160[0]) == (**l_1339))) > (*p_3296->g_1008)))) ^ (**l_1339)), p_28)), 3)) , 0xD2L)) || 0L)), 0x1DBE1D95L)) & p_3296->g_217)), p_26)) != p_3296->g_1084))));
    if (l_1547)
    { /* block id: 671 */
        uint64_t l_1552 = 0xE8574276DE97038BL;
        int16_t *l_1563 = (void*)0;
        int16_t **l_1562 = &l_1563;
        int16_t ***l_1561 = &l_1562;
        int16_t ****l_1564 = &p_3296->g_371;
        uint32_t *l_1568 = &p_3296->g_564[4][0];
        uint16_t *l_1588 = &p_3296->g_355[0][4][3];
        int64_t l_1595 = (-1L);
        int16_t l_1597[8][10][3] = {{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}},{{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL},{3L,(-1L),0x317BL}}};
        uint64_t l_1598[5][7] = {{0xB5E32A5D0A4C8839L,0xB5E32A5D0A4C8839L,0x9588B410922008C9L,18446744073709551608UL,0xDEAA12507571D546L,18446744073709551608UL,0x9588B410922008C9L},{0xB5E32A5D0A4C8839L,0xB5E32A5D0A4C8839L,0x9588B410922008C9L,18446744073709551608UL,0xDEAA12507571D546L,18446744073709551608UL,0x9588B410922008C9L},{0xB5E32A5D0A4C8839L,0xB5E32A5D0A4C8839L,0x9588B410922008C9L,18446744073709551608UL,0xDEAA12507571D546L,18446744073709551608UL,0x9588B410922008C9L},{0xB5E32A5D0A4C8839L,0xB5E32A5D0A4C8839L,0x9588B410922008C9L,18446744073709551608UL,0xDEAA12507571D546L,18446744073709551608UL,0x9588B410922008C9L},{0xB5E32A5D0A4C8839L,0xB5E32A5D0A4C8839L,0x9588B410922008C9L,18446744073709551608UL,0xDEAA12507571D546L,18446744073709551608UL,0x9588B410922008C9L}};
        int i, j, k;
        for (p_3296->g_508 = 0; p_3296->g_508 < 8; p_3296->g_508 += 1)
        {
            p_3296->g_1533[p_3296->g_508] = &p_3296->g_1160[2];
        }
        (*l_1546) &= (p_3296->g_919 < (((((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0x7BL, l_1552)), (((p_26 != 3UL) || (((*p_3296->g_501) ^= ((safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((0x9BBBF7BFL | (l_1552 & l_1552)), ((((*l_1568) = (safe_mod_func_int16_t_s_s((((*l_1564) = l_1561) == l_1565), 65527UL))) <= p_3296->g_1084) & l_1552))), p_28)) < 1UL), 0x43E9F87A55C4898EL)) && p_26)) > (*l_1543))) , (-1L)))) <= p_26) == p_28) && (*p_24)) , l_1569));
        (*l_1339) = func_41((((safe_sub_func_uint8_t_u_u((~p_28), ((*p_3296->g_276) = ((p_3296->g_105 = (safe_sub_func_int32_t_s_s((*p_24), ((safe_mul_func_uint8_t_u_u(((*l_1538) = (safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_26, ((*l_1588)++))), 1)) || (0UL ^ 0xDDL)), (*l_1543))), (safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((p_3296->g_564[2][1] ^ l_1595) , ((*l_1568) = p_26)), p_3296->g_134)), p_26)))), l_1596[5][0][0])), 9L))), 0x70L)) > l_1597[4][4][0])))) <= p_3296->g_32[1])))) == l_1598[1][6]) < l_1597[4][4][0]), l_1597[4][4][0], l_1598[4][3], (*l_1339), p_3296->g_134, p_3296);
    }
    else
    { /* block id: 683 */
        for (p_3296->g_508 = 0; (p_3296->g_508 > 24); p_3296->g_508++)
        { /* block id: 686 */
            return p_28;
        }
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_29(int32_t  p_30, int16_t  p_31, struct S0 * p_3296)
{ /* block id: 565 */
    int32_t *l_1320 = &p_3296->g_40;
    return l_1320;
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_40 p_3296->g_695 p_3296->g_501
 * writes: p_3296->g_508 p_3296->g_277 p_3296->g_101 p_3296->g_134 p_3296->g_105 p_3296->g_168 p_3296->g_82 p_3296->g_133 p_3296->g_821 p_3296->g_822
 */
uint8_t  func_36(int32_t * p_37, int32_t * p_38, struct S0 * p_3296)
{ /* block id: 288 */
    int32_t *l_809 = &p_3296->g_40;
    int32_t l_823 = 0L;
    int32_t ***l_863 = &p_3296->g_327[0];
    int32_t l_902[4][7] = {{7L,0x1BDFA284L,7L,7L,0x1BDFA284L,7L,7L},{7L,0x1BDFA284L,7L,7L,0x1BDFA284L,7L,7L},{7L,0x1BDFA284L,7L,7L,0x1BDFA284L,7L,7L},{7L,0x1BDFA284L,7L,7L,0x1BDFA284L,7L,7L}};
    uint32_t *l_950[5][3][1] = {{{&p_3296->g_105},{&p_3296->g_105},{&p_3296->g_105}},{{&p_3296->g_105},{&p_3296->g_105},{&p_3296->g_105}},{{&p_3296->g_105},{&p_3296->g_105},{&p_3296->g_105}},{{&p_3296->g_105},{&p_3296->g_105},{&p_3296->g_105}},{{&p_3296->g_105},{&p_3296->g_105},{&p_3296->g_105}}};
    uint32_t **l_949[10] = {&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0],&l_950[2][0][0]};
    int32_t *l_994 = &p_3296->g_919;
    int32_t **l_993 = &l_994;
    uint32_t l_1086 = 0x21B18058L;
    uint8_t l_1163 = 0x0FL;
    int8_t *l_1195[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_1234 = 0x6472L;
    int64_t l_1286 = 1L;
    uint8_t l_1306 = 0UL;
    uint64_t l_1308[4];
    int16_t l_1313 = (-1L);
    uint64_t l_1314 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1308[i] = 18446744073709551613UL;
    for (p_3296->g_508 = (-28); (p_3296->g_508 <= (-16)); p_3296->g_508 = safe_add_func_uint16_t_u_u(p_3296->g_508, 5))
    { /* block id: 291 */
        uint8_t l_806 = 0xD7L;
        for (p_3296->g_277 = 0; (p_3296->g_277 > 29); p_3296->g_277 = safe_add_func_int16_t_s_s(p_3296->g_277, 2))
        { /* block id: 294 */
            int64_t l_803 = 0x68627536D9447A12L;
            int32_t l_805[5][8][1] = {{{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}}};
            int8_t *l_818 = &p_3296->g_133[3][3];
            int64_t *l_819 = &p_3296->g_135;
            int64_t **l_820[3][5][8] = {{{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819}},{{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819}},{{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819},{&l_819,&l_819,&l_819,&l_819,&l_819,(void*)0,(void*)0,&l_819}}};
            int i, j, k;
            for (p_3296->g_101 = 0; (p_3296->g_101 <= 0); p_3296->g_101 += 1)
            { /* block id: 297 */
                int32_t *l_799 = &p_3296->g_40;
                int32_t *l_800 = (void*)0;
                int32_t *l_801 = &p_3296->g_40;
                int32_t *l_802 = (void*)0;
                int32_t *l_804[10][8][3] = {{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}},{{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40},{(void*)0,&p_3296->g_40,&p_3296->g_40}}};
                int i, j, k;
                --l_806;
                for (p_3296->g_134 = 0; (p_3296->g_134 <= 0); p_3296->g_134 += 1)
                { /* block id: 301 */
                    for (p_3296->g_105 = 0; (p_3296->g_105 <= 0); p_3296->g_105 += 1)
                    { /* block id: 304 */
                        int i, j;
                        l_809 = l_809;
                    }
                    return (*l_809);
                }
            }
            l_823 ^= ((safe_mod_func_int32_t_s_s((*p_3296->g_695), (safe_rshift_func_uint8_t_u_u(((void*)0 == p_38), ((0UL && (safe_mul_func_int8_t_s_s(((*l_818) = (safe_add_func_uint64_t_u_u(((*p_3296->g_501) = 1UL), 0x56FCBDE04F9B5E13L))), (-8L)))) != ((p_3296->g_822[0] = (p_3296->g_821[5] = l_819)) == &p_3296->g_135)))))) ^ 0x6C473AE54895D1E0L);
            return l_805[1][0][0];
        }
    }
    return (*l_809);
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_103 p_3296->g_40
 * writes: p_3296->g_103 p_3296->g_101 p_3296->g_40
 */
int32_t * func_41(uint64_t  p_42, uint64_t  p_43, uint8_t  p_44, int32_t * p_45, uint32_t  p_46, struct S0 * p_3296)
{ /* block id: 273 */
    int64_t l_763 = 0x2C1F40841D7EBD26L;
    int32_t l_771 = (-1L);
    int32_t l_772 = 4L;
    int32_t l_775 = 0x69641B38L;
    int32_t l_776 = 0x653BD308L;
    int32_t l_778 = 0x2F04A590L;
    int32_t l_779 = 0L;
    int32_t l_781 = (-8L);
    int32_t l_782 = (-10L);
    int32_t l_783[6][9][4] = {{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}},{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}},{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}},{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}},{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}},{{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL},{(-7L),1L,0x0AEDDF4EL,0x0AEDDF4EL}}};
    int32_t *l_788 = &p_3296->g_40;
    int i, j, k;
    l_763 &= p_42;
    for (p_3296->g_103 = 0; (p_3296->g_103 == (-8)); p_3296->g_103--)
    { /* block id: 277 */
        int8_t l_773[8] = {7L,7L,7L,7L,7L,7L,7L,7L};
        int32_t l_774 = (-8L);
        int32_t l_777 = 0x4051F0BEL;
        int32_t l_780[2];
        int32_t *l_789 = &p_3296->g_40;
        int32_t *l_790 = &l_771;
        int32_t *l_791 = &l_783[5][8][3];
        uint32_t l_792 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_780[i] = 0x29A8649EL;
        for (p_3296->g_101 = 0; (p_3296->g_101 >= 39); p_3296->g_101 = safe_add_func_int8_t_s_s(p_3296->g_101, 7))
        { /* block id: 280 */
            int32_t *l_768 = &p_3296->g_40;
            int32_t *l_769 = &p_3296->g_40;
            int32_t *l_770[7][6][6] = {{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}},{{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40},{&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40}}};
            uint16_t l_784 = 0UL;
            int32_t **l_787[5][9] = {{&l_770[6][3][1],&l_770[4][3][2],&l_769,&p_3296->g_695,&l_770[4][3][2],&p_3296->g_695,&l_769,&l_770[4][3][2],&l_770[6][3][1]},{&l_770[6][3][1],&l_770[4][3][2],&l_769,&p_3296->g_695,&l_770[4][3][2],&p_3296->g_695,&l_769,&l_770[4][3][2],&l_770[6][3][1]},{&l_770[6][3][1],&l_770[4][3][2],&l_769,&p_3296->g_695,&l_770[4][3][2],&p_3296->g_695,&l_769,&l_770[4][3][2],&l_770[6][3][1]},{&l_770[6][3][1],&l_770[4][3][2],&l_769,&p_3296->g_695,&l_770[4][3][2],&p_3296->g_695,&l_769,&l_770[4][3][2],&l_770[6][3][1]},{&l_770[6][3][1],&l_770[4][3][2],&l_769,&p_3296->g_695,&l_770[4][3][2],&p_3296->g_695,&l_769,&l_770[4][3][2],&l_770[6][3][1]}};
            int i, j, k;
            l_784++;
            (*l_769) ^= l_771;
            l_788 = (void*)0;
        }
        l_792++;
    }
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_355 p_3296->g_103 p_3296->g_501 p_3296->g_168 p_3296->g_82 p_3296->g_215 p_3296->g_101 p_3296->g_104
 * writes: p_3296->g_103 p_3296->g_215 p_3296->g_745
 */
uint64_t  func_53(int32_t * p_54, uint16_t  p_55, struct S0 * p_3296)
{ /* block id: 246 */
    int32_t *l_713 = &p_3296->g_104[4];
    int32_t **l_712 = &l_713;
    int32_t ***l_714 = &p_3296->g_327[0];
    int32_t ***l_715 = &p_3296->g_327[0];
    int32_t ***l_716 = &p_3296->g_327[0];
    int32_t ***l_717 = (void*)0;
    int32_t ***l_718 = &p_3296->g_327[0];
    int32_t ***l_719[6][9] = {{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]},{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]},{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]},{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]},{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]},{&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0],&p_3296->g_327[0],&l_712,&p_3296->g_327[0]}};
    int32_t **l_720 = &l_713;
    int32_t ***l_721 = &p_3296->g_137[0][1];
    uint64_t *l_722 = &p_3296->g_32[1];
    int32_t l_723 = (-6L);
    uint32_t *l_753 = &p_3296->g_564[1][0];
    uint32_t *l_757 = (void*)0;
    int16_t *l_758 = &p_3296->g_286;
    int32_t **l_759[7][6][5] = {{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}},{{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0},{&p_3296->g_8,(void*)0,&p_3296->g_695,&p_3296->g_695,(void*)0}}};
    int i, j, k;
    if ((l_723 |= (safe_mul_func_uint8_t_u_u((~1UL), (safe_add_func_uint64_t_u_u(p_55, (safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((void*)0 == &p_3296->g_355[1][2][0]) ^ ((p_55 || (l_712 != (l_720 = &l_713))) <= (l_721 == l_721))), 0)) > p_55), p_3296->g_355[1][3][0])) , p_55) , l_722) != (void*)0), 0xAAL))))))))
    { /* block id: 249 */
        uint32_t l_726[5][9][5] = {{{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL}},{{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL}},{{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL}},{{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL}},{{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL},{0xA533B549L,7UL,4294967295UL,0x6A4FB24AL,0UL}}};
        int32_t l_727 = 0x612C5551L;
        int32_t *l_728 = &p_3296->g_561;
        uint8_t *l_735 = (void*)0;
        uint8_t *l_736 = &p_3296->g_215;
        int64_t *l_743 = (void*)0;
        int64_t *l_744 = &p_3296->g_745;
        int32_t *l_746 = &l_727;
        int i, j, k;
        l_727 = (safe_div_func_int32_t_s_s(l_726[4][4][1], ((!65533UL) , p_55)));
        for (p_3296->g_103 = 0; (p_3296->g_103 <= 1); p_3296->g_103 += 1)
        { /* block id: 253 */
            return (*p_3296->g_501);
        }
        (*l_746) = ((+0x930DL) != ((((*l_712) = l_728) != p_54) < ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(1UL, ((*p_3296->g_501) > 0x35BFBDAA71392F22L))), 4)) | ((safe_lshift_func_int16_t_s_s(p_55, (((-1L) > ((*l_736)--)) | ((safe_div_func_uint64_t_u_u((((*l_744) = ((safe_add_func_uint16_t_u_u(p_55, p_3296->g_101)) > p_55)) , (*p_3296->g_501)), 18446744073709551611UL)) , 0x62L)))) >= p_3296->g_104[4]))));
    }
    else
    { /* block id: 260 */
        int32_t *l_749 = &l_723;
        for (p_3296->g_103 = 0; (p_3296->g_103 <= 5); p_3296->g_103 = safe_add_func_int16_t_s_s(p_3296->g_103, 6))
        { /* block id: 263 */
            int32_t **l_750 = &l_749;
            (*l_750) = l_749;
        }
    }
    p_54 = &l_723;
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_3296->g_40 p_3296->g_32 p_3296->g_101 p_3296->g_105 p_3296->g_104 p_3296->g_82 p_3296->g_134 p_3296->g_135 p_3296->g_103 p_3296->g_133 p_3296->g_168 p_3296->g_241 p_3296->g_276 p_3296->g_217 p_3296->g_286 p_3296->g_277 p_3296->g_355 p_3296->g_371 p_3296->g_215 p_3296->g_438 p_3296->g_508 p_3296->g_488 p_3296->g_564 p_3296->g_561 p_3296->g_680 p_3296->g_695
 * writes: p_3296->g_82 p_3296->g_101 p_3296->g_104 p_3296->g_105 p_3296->g_133 p_3296->g_134 p_3296->g_137 p_3296->g_103 p_3296->g_168 p_3296->g_215 p_3296->g_241 p_3296->g_135 p_3296->g_217 p_3296->g_277 p_3296->g_327 p_3296->g_276 p_3296->g_355 p_3296->g_488 p_3296->g_501 p_3296->g_564 p_3296->g_508
 */
int32_t * func_56(int32_t * p_57, uint32_t  p_58, int16_t  p_59, int32_t  p_60, struct S0 * p_3296)
{ /* block id: 6 */
    uint32_t l_65 = 8UL;
    int32_t l_80[4];
    int64_t *l_81 = &p_3296->g_82;
    int32_t *l_83[4] = {&p_3296->g_40,&p_3296->g_40,&p_3296->g_40,&p_3296->g_40};
    int64_t l_173 = 0x00338EFF3EB3C188L;
    int32_t *l_202 = &l_80[0];
    int64_t l_254 = (-7L);
    uint8_t l_297 = 255UL;
    int8_t l_319 = 0x7CL;
    uint32_t l_398 = 0xBFE7EAF6L;
    int16_t ***l_444 = (void*)0;
    uint64_t *l_498 = &p_3296->g_168;
    uint64_t *l_500 = &p_3296->g_32[1];
    uint64_t **l_499[4] = {&l_500,&l_500,&l_500,&l_500};
    uint32_t l_509 = 0xB12D0C62L;
    uint32_t *l_540 = (void*)0;
    uint32_t *l_541[3];
    uint8_t *l_542 = &l_297;
    uint8_t *l_543 = &p_3296->g_215;
    int8_t **l_544[7][1] = {{&p_3296->g_276},{&p_3296->g_276},{&p_3296->g_276},{&p_3296->g_276},{&p_3296->g_276},{&p_3296->g_276},{&p_3296->g_276}};
    int64_t l_545[10][7] = {{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)},{(-3L),7L,(-1L),0x5800BC142F49ADB7L,(-1L),0x5800BC142F49ADB7L,(-1L)}};
    int32_t l_567 = 0x49F55169L;
    int32_t l_607 = 0L;
    int32_t ***l_636 = &p_3296->g_137[0][2];
    uint16_t *l_648 = &p_3296->g_355[0][5][4];
    int32_t *l_701 = &p_3296->g_40;
    int i, j;
    for (i = 0; i < 4; i++)
        l_80[i] = 6L;
    for (i = 0; i < 3; i++)
        l_541[i] = &l_398;
    if ((((safe_rshift_func_uint8_t_u_s((p_60 <= (((*l_81) = (safe_mul_func_uint16_t_u_u((l_65 && ((l_65 > (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((p_60 > p_60), (safe_add_func_int32_t_s_s(l_65, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(p_3296->g_40, ((~l_65) >= (p_59 < l_65)))), l_65)), 0x1BL)))))), p_58)), (-1L)))) == 0x5E0AL)), l_80[0]))) <= 0L)), p_3296->g_32[1])) , &p_3296->g_40) != l_83[0]))
    { /* block id: 8 */
        uint32_t l_99 = 0xC0D0DA96L;
        int16_t *l_102[4][1][9] = {{{&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103}},{{&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103}},{{&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103}},{{&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103,&p_3296->g_103}}};
        uint32_t *l_124 = &p_3296->g_105;
        int8_t *l_129 = (void*)0;
        int8_t *l_130 = (void*)0;
        int8_t *l_131 = (void*)0;
        int8_t *l_132 = &p_3296->g_133[3][3];
        int32_t **l_136[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t *l_144 = &l_80[1];
        int32_t l_149 = 0x121F8CFEL;
        int i, j, k;
        p_3296->g_105 |= (((safe_add_func_uint8_t_u_u((0UL < (p_3296->g_32[0] <= ((safe_add_func_int32_t_s_s(p_3296->g_32[1], (((safe_unary_minus_func_int32_t_s(((p_3296->g_104[4] = (safe_sub_func_int64_t_s_s(((0x63L & ((((((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(p_3296->g_32[1], ((((void*)0 == p_57) == ((p_3296->g_101 &= ((safe_div_func_uint64_t_u_u(l_99, (safe_unary_minus_func_int64_t_s(p_60)))) >= p_59)) ^ l_99)) | p_3296->g_32[0]))) < p_58) & 1UL), p_59)) != p_3296->g_40) && l_99) && 5UL) || 0L) >= 0x6CBFBCC8L)) , p_3296->g_32[1]), 1UL))) < 6UL))) && 0x4192L) == p_3296->g_32[1]))) >= 0L))), p_3296->g_32[1])) & l_99) || p_59);
        p_3296->g_137[0][1] = (((safe_add_func_uint64_t_u_u(((p_3296->g_104[7] < (safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_99, p_3296->g_82)) || ((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((p_3296->g_40 , ((safe_add_func_int64_t_s_s(((++(*l_124)) & l_99), ((safe_mul_func_int8_t_s_s(((*l_132) = 0L), ((((p_3296->g_134 = 0xEAL) , p_3296->g_134) == l_99) == l_99))) == p_3296->g_32[2]))) > (-10L))), p_3296->g_135)), 3)) >= p_60)), p_59)) , p_59), p_3296->g_101)) & p_3296->g_103) ^ p_60), p_60)) && 0xECL), p_58))) ^ 0xB8L), 0x0421A5172254074BL)) ^ 0x0BL) , l_136[0][1]);
        if ((safe_mul_func_int8_t_s_s(((void*)0 != l_81), (((((((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((p_3296->g_32[2] && ((((((*l_144) = p_60) , &p_58) == &p_58) , (safe_sub_func_uint32_t_u_u((((~(safe_rshift_func_uint16_t_u_u(l_149, 4))) <= ((p_59 && ((p_59 < p_60) , p_3296->g_133[3][3])) || p_3296->g_135)) , p_60), 0x3FBDA86EL))) | p_60)) , p_59), p_3296->g_101)), p_3296->g_135)) < p_59) || p_60) | p_3296->g_32[1]) <= p_58) , &p_57) != (void*)0))))
        { /* block id: 17 */
            int64_t *l_166[6];
            uint64_t *l_167 = &p_3296->g_168;
            int32_t l_169 = 0x4F5468D3L;
            int64_t l_170[2];
            uint32_t l_174 = 1UL;
            uint32_t l_177 = 1UL;
            int32_t *l_181[5] = {&l_149,&l_149,&l_149,&l_149,&l_149};
            int i;
            for (i = 0; i < 6; i++)
                l_166[i] = &p_3296->g_135;
            for (i = 0; i < 2; i++)
                l_170[i] = 0x554A1D4D89940A85L;
            if ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(p_58, ((safe_mod_func_uint64_t_u_u((((((safe_div_func_int32_t_s_s(((void*)0 == &p_59), ((*l_124) = ((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((((((safe_div_func_int64_t_s_s(((l_166[3] != (void*)0) | (0x0607BE1BL && (l_169 = (((*l_167) &= (1UL < ((p_3296->g_103 &= (l_124 != (p_58 , (void*)0))) & p_60))) & p_58)))), p_58)) && p_59) || p_58) >= p_3296->g_133[3][3]) != p_3296->g_40), l_170[0])) != p_3296->g_32[2]) != (-1L)), p_60)) , 4294967287UL)))) ^ l_170[0]) <= p_3296->g_32[1]) | p_60) && p_58), p_60)) ^ 0x95ED4DF3L))) , p_3296->g_104[7]) != p_58), p_58)), 0x62DC60C7L)))
            { /* block id: 22 */
                l_169 ^= (-10L);
            }
            else
            { /* block id: 24 */
                uint32_t *l_178 = (void*)0;
                int32_t l_179 = (-6L);
                int32_t *l_180 = &l_179;
                l_181[1] = (l_180 = ((((((p_3296->g_32[1] & (safe_rshift_func_int8_t_s_s(((p_3296->g_133[3][3] , l_173) == l_174), 6))) == (((!(safe_sub_func_uint64_t_u_u((p_3296->g_168 = l_177), 0x4CE38ADB6E0624A2L))) < (p_58 , (((l_178 != &p_58) == l_170[0]) | l_179))) & 0xF529ED19L)) , 1L) < p_3296->g_105) == l_169) , p_57));
            }
        }
        else
        { /* block id: 29 */
            uint64_t l_182 = 1UL;
            l_182 = (0xBAL >= p_3296->g_32[0]);
        }
    }
    else
    { /* block id: 32 */
        uint16_t l_195 = 0x155BL;
        int32_t *l_197[2][4] = {{&p_3296->g_104[4],&l_80[2],&p_3296->g_104[4],&p_3296->g_104[4]},{&p_3296->g_104[4],&l_80[2],&p_3296->g_104[4],&p_3296->g_104[4]}};
        int32_t **l_198 = (void*)0;
        int32_t **l_199 = &l_197[1][2];
        int32_t *l_201 = &p_3296->g_104[1];
        int32_t **l_200[1];
        int32_t l_203[1][3][5] = {{{6L,0L,6L,6L,0L},{6L,0L,6L,6L,0L},{6L,0L,6L,6L,0L}}};
        uint8_t *l_214 = &p_3296->g_215;
        uint16_t *l_216[9] = {&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217,&p_3296->g_217};
        int32_t l_218 = (-1L);
        int32_t l_219 = 0x6128A66AL;
        int32_t l_220[5][6] = {{0L,(-1L),0x6ADEA889L,(-1L),0L,0L},{0L,(-1L),0x6ADEA889L,(-1L),0L,0L},{0L,(-1L),0x6ADEA889L,(-1L),0L,0L},{0L,(-1L),0x6ADEA889L,(-1L),0L,0L},{0L,(-1L),0x6ADEA889L,(-1L),0L,0L}};
        uint64_t l_251 = 18446744073709551615UL;
        int32_t *l_260 = &l_220[0][3];
        int32_t ***l_361 = &p_3296->g_137[0][0];
        int32_t l_396 = 0x7B08B3F5L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_200[i] = &l_201;
        if ((l_219 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((l_195 = ((void*)0 != &p_58)), (l_203[0][1][4] = (safe_unary_minus_func_int8_t_s((((void*)0 == &p_58) < (&p_60 != (l_202 = ((*l_199) = l_197[0][0]))))))))) < ((l_220[4][5] &= (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((p_59 ^ (p_59 >= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_218 = ((((*l_214) = ((1L != p_3296->g_104[7]) >= p_3296->g_101)) , p_60) && p_3296->g_133[3][3])), l_219)) == p_58), p_59)))), 0xB2710EF8BEE2B736L)), p_3296->g_135)), p_58))) | p_3296->g_82)), p_59)) <= 3L), p_59)) > p_3296->g_133[3][3]) == p_60) && 0x3D16F9200749428BL), 0x2CB2F0D3425632B7L)) > l_219), p_58)), p_59))))
        { /* block id: 41 */
            uint8_t l_221 = 0xF4L;
            int32_t l_224 = 0x4E31010DL;
            int32_t l_225 = 0x31C18BF6L;
            int32_t l_226 = 0x1621522EL;
            int32_t l_227 = 2L;
            int32_t l_228 = 0x68FA146DL;
            int32_t l_229[3];
            uint32_t l_230 = 0x44ABC4ACL;
            uint64_t l_248 = 18446744073709551615UL;
            int8_t *l_255 = &p_3296->g_133[4][0];
            int i;
            for (i = 0; i < 3; i++)
                l_229[i] = 0x5C5504C1L;
lbl_262:
            l_221--;
            l_230--;
            if ((p_3296->g_104[4] != (safe_lshift_func_int8_t_s_u(((*l_255) = ((safe_mul_func_uint8_t_u_u((((((((safe_add_func_int16_t_s_s(p_58, (((safe_add_func_uint8_t_u_u(((((p_3296->g_241 = (!3L)) , (safe_div_func_int64_t_s_s(((*l_81) = ((((void*)0 != &p_58) < ((((safe_rshift_func_uint16_t_u_u((l_248 | 0x59C3L), (safe_sub_func_int16_t_s_s((l_251 <= ((safe_rshift_func_uint16_t_u_s((+65526UL), p_3296->g_32[1])) >= 0x14L)), p_3296->g_104[3])))) & p_3296->g_134) ^ 4UL) ^ 0L)) < 0UL)), p_59))) >= 1UL) && 0x76010C94L), l_251)) == p_3296->g_133[5][5]) > (-1L)))) , 4294967294UL) != p_3296->g_104[5]) < l_227) > l_224) > l_254) | p_3296->g_168), p_3296->g_32[1])) , p_3296->g_82)), 6))))
            { /* block id: 47 */
                uint8_t l_257[8];
                int32_t **l_258 = (void*)0;
                int32_t **l_259[3][3][10] = {{{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]}},{{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]}},{{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]},{&l_83[3],&l_83[0],&l_83[0],(void*)0,&l_83[0],&l_83[0],&l_83[3],&l_83[0],&l_83[3],&l_83[3]}}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_257[i] = 0x21L;
                p_57 = (((safe_unary_minus_func_int8_t_s(l_257[1])) && 1L) , (l_260 = p_57));
                l_83[0] = (void*)0;
                p_57 = &l_229[0];
            }
            else
            { /* block id: 52 */
                int32_t *l_261 = (void*)0;
                return l_261;
            }
            if (p_58)
                goto lbl_262;
        }
        else
        { /* block id: 56 */
            uint16_t l_269 = 65535UL;
            int32_t **l_293[5] = {&p_3296->g_8,&p_3296->g_8,&p_3296->g_8,&p_3296->g_8,&p_3296->g_8};
            int32_t **l_326 = &l_197[0][0];
            int8_t *l_334 = &p_3296->g_277;
            int32_t l_335 = 0x7385F638L;
            uint32_t *l_362 = &p_3296->g_105;
            uint8_t *l_367 = &l_297;
            int32_t *l_374 = (void*)0;
            int32_t *l_417 = &l_396;
            uint8_t l_489 = 0xEFL;
            int i;
            for (p_3296->g_241 = 8; (p_3296->g_241 >= 0); p_3296->g_241 -= 1)
            { /* block id: 59 */
                int64_t l_288 = 0x3C130D5CC4E38E7CL;
                int16_t l_318[2];
                int32_t l_321 = 0x2763AF55L;
                int32_t *l_345 = &l_80[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_318[i] = 0x43F1L;
                for (l_218 = 0; (l_218 <= 8); l_218 += 1)
                { /* block id: 62 */
                    int32_t **l_263 = &l_197[0][0];
                    int32_t l_264 = 1L;
                    int16_t **l_265 = (void*)0;
                    uint32_t *l_287 = &p_3296->g_101;
                    for (p_3296->g_82 = 7; (p_3296->g_82 >= 0); p_3296->g_82 -= 1)
                    { /* block id: 65 */
                        int16_t ***l_266 = &l_265;
                        (*l_266) = ((0x40205D17L && (l_264 |= (((void*)0 != l_263) > (*l_260)))) , ((p_3296->g_135 = (&p_3296->g_82 == (void*)0)) , l_265));
                        return p_57;
                    }
                    (*l_260) = (((p_60 && (safe_sub_func_uint32_t_u_u(l_269, (safe_lshift_func_uint16_t_u_s((p_3296->g_217 &= (safe_rshift_func_int8_t_s_u((p_3296->g_133[3][3] = p_3296->g_134), ((*l_214) = ((+(4UL && (p_3296->g_276 != (void*)0))) , (0x0620D92AL ^ p_3296->g_135)))))), 9))))) == ((safe_add_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((*l_287) = (safe_mod_func_uint64_t_u_u((((l_269 >= 0x09L) , p_3296->g_286) , 0xADCFEEE101E36156L), 18446744073709551615UL))) != p_3296->g_134), p_60)), (*p_3296->g_276))) != 0x72ED9BBE0326B281L) , p_3296->g_32[1]), 0L)) , p_58)) , 0L);
                }
                for (p_58 = 1; (p_58 <= 8); p_58 += 1)
                { /* block id: 79 */
                    int32_t ***l_294 = &p_3296->g_137[0][1];
                    int32_t l_317 = 0x3E56A4DAL;
                    uint8_t l_330 = 251UL;
                    int i;
                    (*l_260) = (l_288 & ((void*)0 != &l_254));
                    if (((safe_lshift_func_int16_t_s_u(1L, (safe_add_func_uint8_t_u_u((l_293[1] == ((*l_294) = &l_260)), (((safe_mul_func_uint8_t_u_u(((l_297 < (p_3296->g_277 , 0x21L)) && (safe_sub_func_uint16_t_u_u(p_58, ((safe_div_func_uint32_t_u_u((((p_60 , l_216[p_3296->g_241]) == &l_195) ^ 0x27FEL), p_3296->g_134)) ^ 0x69C4L)))), 0xF1L)) & p_3296->g_133[3][3]) > 0xC7FBL))))) != 0x0EL))
                    { /* block id: 82 */
                        uint64_t l_316 = 18446744073709551606UL;
                        uint32_t *l_320 = &p_3296->g_101;
                        int8_t **l_331[10];
                        int32_t *l_336 = (void*)0;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_331[i] = &p_3296->g_276;
                        l_321 = (((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_58 || ((*l_320) &= ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((18446744073709551615UL == (((255UL && (p_3296->g_32[1] , ((*p_3296->g_276) = (p_60 || ((safe_mul_func_uint8_t_u_u((&p_3296->g_8 != &l_260), (*l_260))) & (l_219 = (l_317 = ((safe_rshift_func_uint8_t_u_u(p_59, 0)) & l_316)))))))) == p_3296->g_168) , p_59)), p_60)), l_318[0])) < 0xFD96416AL) || p_58) , (*l_260)), p_59)) > l_319))), 0x3F78AE2CL)), 0x277FL)) >= 0x6C43L) >= p_59);
                        (*l_260) = (safe_div_func_uint64_t_u_u(((~((safe_mul_func_int16_t_s_s((((p_3296->g_104[4] | ((*l_260) <= (((*l_81) &= (5UL | (p_60 != (((p_3296->g_327[0] = l_326) == (((~(safe_add_func_uint64_t_u_u(l_330, ((((p_3296->g_276 = &p_3296->g_277) == ((((safe_lshift_func_uint16_t_u_s(((*l_326) != (void*)0), p_3296->g_217)) , (*l_260)) , 0x49EE28E7L) , l_334)) & 0L) != p_59)))) < l_316) , (void*)0)) , (*p_3296->g_276))))) , (*l_260)))) != p_58) >= p_3296->g_135), p_59)) | l_335)) , 0x12F7C02BE83FFCD0L), p_3296->g_135));
                        return l_336;
                    }
                    else
                    { /* block id: 93 */
                        uint8_t l_342 = 249UL;
                        uint32_t *l_354 = (void*)0;
                        int32_t l_356 = (-2L);
                        l_356 |= (safe_mul_func_int8_t_s_s(1L, ((((((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((*l_260))) | ((((**l_326) &= l_342) , ((0x35A4F82BEE0BD0EFL == p_59) , ((safe_lshift_func_uint8_t_u_s((l_345 == l_345), (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_3296->g_82, (p_3296->g_105 &= l_321))) ^ (-1L)), 0x6697L)) , p_3296->g_103) && p_3296->g_355[0][6][2]), p_3296->g_101)) == p_60), p_3296->g_104[1])))) , 0x09L))) < 255UL)) & (*p_3296->g_276)), p_59)) ^ 7UL) < 0x96AFL) == (*p_3296->g_276)) , 3UL) || p_60)));
                        return p_57;
                    }
                }
            }
            (*l_260) = ((safe_rshift_func_uint8_t_u_u(((p_3296->g_217--) , p_60), ((((*l_81) = ((((*l_362) = ((p_3296->g_82 , l_361) == l_361)) < 4294967288UL) > (((*l_367) ^= (((~((!(safe_mod_func_int64_t_s_s((((safe_add_func_int8_t_s_s((p_59 || (((((((*l_214) = (*l_260)) , (p_3296->g_168 = ((void*)0 != &p_60))) >= 0x506796A9CD399489L) , p_3296->g_40) ^ p_3296->g_355[0][6][2]) && (*l_260))), 0x29L)) , p_59) , p_3296->g_134), p_3296->g_355[0][6][2]))) , 0x05L)) > p_59) && p_58)) || p_58))) & p_3296->g_104[3]) <= p_3296->g_103))) >= p_59);
            for (l_173 = 7; (l_173 >= 0); l_173 -= 1)
            { /* block id: 110 */
                int16_t *l_370 = &p_3296->g_241;
                int8_t *l_393 = &l_319;
                int32_t l_423 = 1L;
                uint64_t l_464[1][6][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
                int i, j, k;
                if ((p_3296->g_104[l_173] || (((safe_div_func_int64_t_s_s((p_3296->g_355[1][2][4] ^ (p_58 >= 0xE679D5E0BF76F57CL)), p_3296->g_103)) >= ((*l_370) &= p_58)) , ((*l_370) = (p_3296->g_371 == p_3296->g_371)))))
                { /* block id: 113 */
                    uint16_t l_399[10][3] = {{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL},{0UL,0x24BCL,6UL}};
                    int i, j;
                    for (p_3296->g_217 = 0; (p_3296->g_217 > 3); p_3296->g_217 = safe_add_func_int64_t_s_s(p_3296->g_217, 5))
                    { /* block id: 116 */
                        l_374 = (void*)0;
                    }
                    for (l_297 = 3; (l_297 <= 8); l_297 += 1)
                    { /* block id: 121 */
                        int32_t l_397 = 0x07A5DD34L;
                        int i;
                        l_399[2][1] ^= (((safe_mul_func_uint16_t_u_u((&p_3296->g_8 == &p_57), ((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((6L == 0UL), ((safe_mod_func_int16_t_s_s(((*l_370) = (safe_add_func_uint16_t_u_u(0x21C5L, (((safe_sub_func_uint16_t_u_u(p_58, (safe_sub_func_int16_t_s_s(((void*)0 != l_393), ((((safe_rshift_func_int16_t_s_u(p_59, l_396)) & (-10L)) , p_59) == p_60))))) ^ p_3296->g_101) | 0UL)))), 0x019BL)) || 0x135CE45CF57141AAL))), 254UL)) < l_397), p_59)) || l_398))) , p_3296->g_217) < 0x55L);
                        return p_57;
                    }
                }
                else
                { /* block id: 126 */
                    uint64_t *l_402 = &l_251;
                    int32_t l_407 = 0x039AC8EEL;
                    int16_t l_416 = 9L;
                    uint8_t l_426 = 0x15L;
                    uint16_t *l_487 = &l_195;
                    if (((safe_sub_func_int64_t_s_s((+p_3296->g_104[l_173]), (&p_3296->g_104[l_173] != (((++(*l_402)) | ((*l_417) &= ((safe_sub_func_uint32_t_u_u((l_407 , 4294967291UL), (~(safe_mul_func_int16_t_s_s((~((p_3296->g_215 >= (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(p_3296->g_355[0][6][2], (~(~((safe_mul_func_int8_t_s_s(((p_58 , ((p_3296->g_135 == ((((((l_416 , (void*)0) == l_417) , p_3296->g_104[l_173]) > l_416) & (-1L)) ^ l_407)) < 251UL)) & p_60), 0x7BL)) | 1UL))))) >= 4294967295UL), 1L))) || l_407)), p_59))))) || (*p_3296->g_276)))) , &p_3296->g_104[l_173])))) >= p_58))
                    { /* block id: 129 */
                        uint32_t l_437[7][5][5] = {{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}},{{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L},{0x9F8EFBA0L,0x1A3B4ECFL,0x42BE3EC5L,0UL,0x42BE3EC5L}}};
                        int32_t *l_439[10][10] = {{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]},{&l_423,&l_219,&l_203[0][1][2],&l_423,(void*)0,&l_203[0][1][2],&l_203[0][1][2],(void*)0,&l_423,&l_203[0][1][2]}};
                        int i, j, k;
                        l_439[9][3] = (p_58 , (((safe_rshift_func_int16_t_s_s((((((*l_417) , (safe_lshift_func_int16_t_s_u(((p_3296->g_104[l_173] ^ (safe_unary_minus_func_int64_t_s(0x3C0C030AABB352D9L))) >= (p_59 < p_60)), (--p_3296->g_355[0][6][2])))) >= (((l_426++) & (!l_423)) > (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint16_t_u_u(((0x1AL && (safe_mul_func_uint16_t_u_u((2L ^ l_437[4][0][1]), p_59))) | p_3296->g_32[1]), p_3296->g_104[l_173])) ^ 0UL) , p_3296->g_438[3][0][0]) & 0xB3L) & 0x4CCB458B8BB48499L) , 0xE2L), p_3296->g_277)), p_3296->g_103)))) != 0L) , p_3296->g_104[l_173]), 1)) != (*l_260)) , p_57));
                        l_407 &= ((safe_mod_func_int64_t_s_s(((((safe_sub_func_uint16_t_u_u(((+((void*)0 != l_444)) == (l_416 , (((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(p_3296->g_217)), (((((((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((((void*)0 == &p_3296->g_276) < 0x47L), 6)) <= ((0xB7D34FA7B23D4297L & p_59) != 0x3DL)), 0x7A231E73L)), 1)) >= 0L) | p_3296->g_104[l_173]) || 1L) , l_426) ^ (*p_3296->g_276)) & p_3296->g_104[l_173]))) , &p_60) == (void*)0))), l_423)) <= 6UL) >= p_60) != p_58), p_60)) | l_426);
                    }
                    else
                    { /* block id: 134 */
                        (*l_260) = ((safe_mul_func_int16_t_s_s(((p_58 < (safe_mul_func_uint8_t_u_u(((p_60 <= (!(((*l_487) = (safe_div_func_uint64_t_u_u((((l_464[0][1][0]++) >= ((safe_div_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((p_3296->g_104[l_173] == (safe_add_func_uint64_t_u_u(p_3296->g_241, (0x096318C958A441E7L == (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((++(*l_362)) != (((p_3296->g_355[0][6][2] = (*l_260)) , ((0x21L == (((safe_add_func_int64_t_s_s((&p_3296->g_355[0][3][0] == (p_3296->g_488 = l_487)), 0x255BE5C414CC7728L)) | l_407) < 0L)) != p_3296->g_101)) >= l_416)) != (-1L)), 7)), 255UL)) & p_60), p_3296->g_104[4])), 0x329A98CE11C2C26AL)), 0x18L)))))), p_3296->g_82)) == p_3296->g_277) , 0x10L) && (*l_260)), p_60)) != p_59)) , p_3296->g_355[1][3][1]), p_60))) , p_60))) & p_59), p_3296->g_104[l_173]))) <= p_3296->g_133[1][2]), p_3296->g_103)) | p_3296->g_32[1]);
                    }
                    return p_57;
                }
                if (p_58)
                    continue;
                ++l_489;
                if (l_423)
                    break;
            }
        }
    }
lbl_546:
    l_509 = ((safe_lshift_func_uint16_t_u_u(65535UL, 3)) , (((safe_div_func_uint16_t_u_u(((+(safe_div_func_int64_t_s_s((((p_3296->g_501 = (l_498 = l_81)) != &p_3296->g_32[1]) || ((p_58 > p_59) >= 0x0813C35DL)), (((p_59 | (safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((p_3296->g_168 |= (((safe_rshift_func_int16_t_s_s((0xF6L == p_60), p_58)) != p_3296->g_508) || p_58)), p_3296->g_133[4][0])), (*p_3296->g_488)))) || (-8L)) , 7UL)))) > p_60), (*p_3296->g_488))) || 0xD63E3C39L) , 0L));
    if (((((p_58 < p_59) , (safe_mul_func_uint8_t_u_u(((l_545[9][4] = (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*p_3296->g_276) |= ((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_s(((*p_3296->g_488) ^= (safe_rshift_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u((((void*)0 == p_3296->g_371) < ((*l_543) = ((*l_542) = (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((18446744073709551615UL & p_59), (p_58 = (safe_mul_func_uint32_t_u_u(p_59, ((safe_sub_func_uint64_t_u_u(((((safe_sub_func_int64_t_s_s(((*l_81) = p_3296->g_32[1]), ((safe_div_func_uint16_t_u_u((0x03L || p_58), 5L)) & p_3296->g_135))) , (void*)0) == &p_3296->g_137[0][1]) >= p_58), p_3296->g_103)) != p_3296->g_104[4])))))), p_60))))), p_3296->g_134)) != p_59) , l_544[5][0]) == (void*)0), p_59))), 13)) , p_3296->g_135) | 0xD9FA0437A0470DC2L) <= 0x21B5L) , p_59), p_60)) ^ p_3296->g_508), p_60)) <= 252UL)), p_3296->g_133[3][3])) != (-1L)), p_60)), 0L)) == p_3296->g_508) , 0xC23DBDBAE1CE67B3L)) >= p_60), 0x1AL))) , (void*)0) == (void*)0))
    { /* block id: 161 */
        uint16_t l_547 = 0UL;
        int32_t l_555 = 0x62B892E4L;
        int64_t l_556[6];
        int32_t l_557 = 0L;
        int32_t l_558 = 0L;
        int32_t l_559 = 0x325430EAL;
        int32_t l_560[7][8][2] = {{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}},{{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L},{(-3L),0x3ED87A14L}}};
        int64_t l_562 = 0x24CD588ED53F4753L;
        int64_t l_563[3][6][1] = {{{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L}},{{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L}},{{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L},{0x4A1FD955BE37FAE4L}}};
        int32_t l_568 = 0x5F4A255AL;
        uint8_t l_570 = 0x8AL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_556[i] = 1L;
lbl_552:
        if (l_398)
            goto lbl_546;
        for (p_3296->g_105 = 0; (p_3296->g_105 <= 3); p_3296->g_105 += 1)
        { /* block id: 165 */
            uint8_t l_550 = 0x38L;
            l_547--;
            for (l_398 = 0; (l_398 <= 3); l_398 += 1)
            { /* block id: 169 */
                int32_t l_551[9][2] = {{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L},{0x00389825L,0x118AA454L}};
                int i, j;
                l_551[2][1] ^= ((l_80[p_3296->g_105] != p_60) , (0x59L != l_550));
                if (p_3296->g_217)
                    goto lbl_552;
                for (p_3296->g_101 = 0; (p_3296->g_101 <= 5); p_3296->g_101 += 1)
                { /* block id: 174 */
                    int32_t **l_553 = (void*)0;
                    int32_t **l_554 = &l_83[2];
                    (*l_554) = (void*)0;
                }
            }
        }
        p_3296->g_564[4][1]--;
        l_570--;
    }
    else
    { /* block id: 181 */
        uint32_t l_574 = 0xD49B6D23L;
        int32_t l_585[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t *l_694 = &l_585[4];
        uint32_t l_698 = 4294967295UL;
        int i;
        for (p_3296->g_82 = 0; (p_3296->g_82 >= 0); p_3296->g_82 -= 1)
        { /* block id: 184 */
            int64_t l_573 = (-2L);
            int32_t l_628 = 0x6DC1B6C4L;
            int64_t l_630 = 0x7C7257DC69299EC7L;
            uint16_t l_649[4] = {0x99F2L,0x99F2L,0x99F2L,0x99F2L};
            uint64_t l_650 = 0x67860ED0B5845ED9L;
            int32_t l_662 = 0x767BE844L;
            int32_t l_665 = 0x4C369535L;
            int32_t l_666 = (-1L);
            int32_t l_671 = (-5L);
            uint64_t l_672 = 18446744073709551612UL;
            int32_t l_697 = 0L;
            int i;
            if (p_60)
                break;
            l_574--;
            for (p_3296->g_105 = 0; (p_3296->g_105 <= 5); p_3296->g_105 += 1)
            { /* block id: 189 */
                int32_t l_602 = 0L;
                int32_t *l_619 = &l_602;
                int32_t l_620[4] = {0x66388336L,0x66388336L,0x66388336L,0x66388336L};
                uint32_t l_631 = 0x977D4DE7L;
                int32_t **l_641 = &l_83[0];
                int i, j;
                if (((p_3296->g_133[p_3296->g_105][p_3296->g_105] ^ (*p_3296->g_488)) & (safe_mod_func_uint32_t_u_u(((((0L && (p_3296->g_508 |= ((safe_div_func_uint64_t_u_u(((0x62FEC42B142B4CDBL && ((safe_sub_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((l_585[4] = p_59), (safe_lshift_func_int16_t_s_s(p_59, ((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_3296->g_241, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((p_3296->g_168++) >= (safe_rshift_func_int8_t_s_u((*p_3296->g_276), 5))), p_59)), p_3296->g_104[4])) & l_573) > p_3296->g_215) , l_573), 0x9AAAL)) <= p_59), l_607)))), l_602)), l_573)) ^ 0x4733BAE3L))))) ^ (*p_3296->g_276)) == p_59), 0xA5L)) <= p_60)) < l_573), (-4L))) , 0L))) & p_60) >= 0x40FE8546L) & 0L), 0x530D80E1L))))
                { /* block id: 193 */
                    int32_t *l_618 = (void*)0;
                    for (p_3296->g_215 = 0; (p_3296->g_215 <= 0); p_3296->g_215 += 1)
                    { /* block id: 196 */
                        int32_t *l_608 = &l_602;
                        uint64_t ***l_609 = &l_499[0];
                        uint64_t *l_612 = &p_3296->g_32[0];
                        uint32_t **l_617 = &l_541[2];
                        int i, j, k;
                        p_57 = l_608;
                        l_585[4] |= (p_3296->g_438[(p_3296->g_215 + 6)][p_3296->g_215][p_3296->g_82] | (((&p_3296->g_501 == ((((((((*l_609) = &p_3296->g_501) != (void*)0) , ((safe_rshift_func_int16_t_s_u(0L, 5)) , l_612)) != &p_3296->g_168) <= ((((safe_mul_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s(((((((*l_617) = &l_398) == &p_58) != (-4L)) | p_3296->g_438[(p_3296->g_105 + 1)][p_3296->g_215][p_3296->g_82]) >= p_3296->g_438[(p_3296->g_82 + 5)][p_3296->g_82][p_3296->g_82]), 0UL)) || l_573) >= (-9L)) , p_60) , (*p_3296->g_488)), 65529UL)) < 0x338A3698L) && (*l_608)) , 0x4E46A56C5DAE9653L)) | 0x003915E5L) , (void*)0)) & (*p_3296->g_276)) < p_3296->g_133[3][3]));
                        l_619 = l_618;
                    }
                    if (l_602)
                        continue;
                }
                else
                { /* block id: 204 */
                    int32_t l_621[1][3];
                    int64_t l_627 = 0x0EE9BCD4D1A1D676L;
                    int32_t **l_634 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_621[i][j] = 1L;
                    }
                    for (l_607 = 0; (l_607 <= 0); l_607 += 1)
                    { /* block id: 207 */
                        uint32_t l_622 = 0xDED6F3FCL;
                        int32_t **l_625 = &l_83[0];
                        int32_t l_626 = 0x060A4C97L;
                        int32_t l_629 = 0x56426BB7L;
                        int i, j;
                        l_622++;
                        (*l_625) = &l_621[0][0];
                        --l_631;
                        l_634 = &l_83[0];
                    }
                }
                l_602 ^= ((safe_unary_minus_func_int64_t_s((((p_59 , (l_636 = &p_3296->g_137[0][0])) == &p_3296->g_137[0][1]) == (safe_mul_func_int8_t_s_s((!(+(p_3296->g_508 != 0x0AF824F6L))), p_3296->g_241))))) < ((p_3296->g_508 <= ((~((safe_mod_func_uint32_t_u_u(((0UL && (((*p_3296->g_276) ^ 5L) >= 0x7B83B7FF5308DE58L)) & p_59), p_60)) || p_58)) == l_620[2])) != 18446744073709551608UL));
                (*l_641) = &l_602;
            }
            l_650 = (l_649[0] = (p_58 | ((p_58 , (l_585[4] ^= (safe_div_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(65535UL, p_58)) >= 9L) , ((p_60 , (safe_add_func_int32_t_s_s(0x56C801AAL, p_3296->g_135))) | ((l_648 == (void*)0) < 0x08L))), 5L)))) == 0UL)));
            for (p_59 = 0; (p_59 >= 0); p_59 -= 1)
            { /* block id: 223 */
                uint32_t l_661 = 0UL;
                int32_t l_664 = 0x2AFC3B5BL;
                int32_t l_669 = 0x7DF0AF32L;
                int32_t l_670 = 0x7D90DBF1L;
                int32_t *l_693 = &l_671;
                int16_t l_696 = (-9L);
                if ((l_585[0] ^= ((safe_rshift_func_uint16_t_u_u((0xCEL ^ (((safe_add_func_int32_t_s_s((-1L), (p_3296->g_105 = (safe_add_func_uint32_t_u_u(l_574, p_3296->g_241))))) & p_3296->g_564[2][1]) || ((p_3296->g_561 ^ ((0x1A3F6143BD9DA3AEL & ((safe_lshift_func_uint8_t_u_s((p_3296->g_32[1] <= (safe_mod_func_int16_t_s_s((l_649[2] < l_661), (*p_3296->g_488)))), 3)) ^ (-2L))) ^ l_661)) ^ (-7L)))), 8)) ^ 0x53608AE9L)))
                { /* block id: 226 */
                    int32_t l_663 = 1L;
                    int32_t l_667 = 0x588F4875L;
                    int32_t l_668 = (-7L);
                    int i, j;
                    --l_672;
                    if (l_630)
                        continue;
                    if (p_60)
                        break;
                    for (l_607 = 0; (l_607 <= 0); l_607 += 1)
                    { /* block id: 232 */
                        uint32_t **l_679 = &l_540;
                        int32_t *l_691 = &l_662;
                        int i, j, k;
                        l_663 |= (safe_lshift_func_int16_t_s_s(((p_3296->g_438[l_607][p_59][l_607] , ((safe_lshift_func_uint16_t_u_u(((l_679 == p_3296->g_680) | ((safe_mul_func_int8_t_s_s((((0x44L >= ((safe_add_func_uint8_t_u_u((safe_mul_func_int64_t_s_s((p_3296->g_438[(p_3296->g_82 + 1)][l_607][p_59] >= ((*l_542) = (safe_rshift_func_uint8_t_u_s((l_662 & 0x51A3L), (*p_3296->g_276))))), (((void*)0 == l_691) > 0x1FBDC73EL))), l_670)) > p_60)) ^ p_3296->g_168) < 0x1CL), p_59)) ^ (*l_691))), p_59)) ^ (*p_3296->g_488))) <= p_60), 9));
                        if (p_3296->g_508)
                            goto lbl_546;
                    }
                }
                else
                { /* block id: 237 */
                    int32_t *l_692 = &l_669;
                    return p_3296->g_695;
                }
                --l_698;
            }
        }
        return l_701;
    }
    return l_540;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_3297;
    struct S0* p_3296 = &c_3297;
    struct S0 c_3298 = {
        (void*)0, // p_3296->g_8
        0xE4A6F444L, // p_3296->g_17
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_3296->g_32
        0L, // p_3296->g_40
        0x434BB1B2B1506F57L, // p_3296->g_82
        0x9125BEC3L, // p_3296->g_101
        0x1C90L, // p_3296->g_103
        {0x1B44AAF2L,4L,0x1B44AAF2L,0x1B44AAF2L,4L,0x1B44AAF2L,0x1B44AAF2L,4L}, // p_3296->g_104
        0UL, // p_3296->g_105
        {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}}, // p_3296->g_133
        0x3B58279FL, // p_3296->g_134
        0x6306CF3CB9137EFEL, // p_3296->g_135
        {{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_3296->g_137
        0x9136648E8C813946L, // p_3296->g_168
        0x07L, // p_3296->g_215
        1UL, // p_3296->g_217
        0L, // p_3296->g_241
        0x1BL, // p_3296->g_277
        &p_3296->g_277, // p_3296->g_276
        0x511AL, // p_3296->g_286
        {(void*)0}, // p_3296->g_327
        {{{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L}},{{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L},{6UL,6UL,65533UL,0x16AAL,7UL,0xA821L}}}, // p_3296->g_355
        (void*)0, // p_3296->g_371
        {{{0x78841C7CL}},{{0x78841C7CL}},{{0x78841C7CL}},{{0x78841C7CL}},{{0x78841C7CL}},{{0x78841C7CL}},{{0x78841C7CL}}}, // p_3296->g_438
        &p_3296->g_217, // p_3296->g_488
        &p_3296->g_168, // p_3296->g_501
        0x03L, // p_3296->g_508
        7L, // p_3296->g_561
        {{0xBBBC4D5BL,0xBBBC4D5BL},{0xBBBC4D5BL,0xBBBC4D5BL},{0xBBBC4D5BL,0xBBBC4D5BL},{0xBBBC4D5BL,0xBBBC4D5BL},{0xBBBC4D5BL,0xBBBC4D5BL},{0xBBBC4D5BL,0xBBBC4D5BL}}, // p_3296->g_564
        0L, // p_3296->g_569
        4294967292UL, // p_3296->g_682
        &p_3296->g_682, // p_3296->g_681
        &p_3296->g_681, // p_3296->g_680
        &p_3296->g_40, // p_3296->g_695
        0x33714F4864D706A3L, // p_3296->g_745
        9L, // p_3296->g_762
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_3296->g_821
        {&p_3296->g_135,&p_3296->g_135,&p_3296->g_135,&p_3296->g_135}, // p_3296->g_822
        &p_3296->g_137[0][1], // p_3296->g_854
        0x52DD7772L, // p_3296->g_919
        &p_3296->g_501, // p_3296->g_921
        0x980D456F06BC885FL, // p_3296->g_927
        {&p_3296->g_919,&p_3296->g_919,&p_3296->g_919,&p_3296->g_919,&p_3296->g_919,&p_3296->g_919,&p_3296->g_919}, // p_3296->g_1006
        &p_3296->g_1006[1], // p_3296->g_1005
        &p_3296->g_1005, // p_3296->g_1004
        &p_3296->g_40, // p_3296->g_1008
        1UL, // p_3296->g_1049
        0x4DA9L, // p_3296->g_1084
        0x6A93E7C5L, // p_3296->g_1085
        {0x53B49184L,0x53B49184L,0x53B49184L}, // p_3296->g_1124
        {0x36L,0x36L,0x36L,0x36L,0x36L,0x36L,0x36L,0x36L,0x36L}, // p_3296->g_1160
        0xC36C3934421A9C19L, // p_3296->g_1192
        1L, // p_3296->g_1312
        {{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L},{(-2L),(-2L),0x76B03A64L}}, // p_3296->g_1322
        0x12D6C7DDC5C48A00L, // p_3296->g_1495
        &p_3296->g_1495, // p_3296->g_1494
        &p_3296->g_1494, // p_3296->g_1493
        &p_3296->g_1493, // p_3296->g_1492
        {{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}},{{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL},{0x690BDF3721AC6FE2L,0xF9529B1005D6070FL,1UL,18446744073709551614UL,0xA0324EB45BE868C7L,0xA0324EB45BE868C7L,18446744073709551614UL,1UL}}}, // p_3296->g_1526
        {&p_3296->g_215,&p_3296->g_215,&p_3296->g_215,&p_3296->g_215,&p_3296->g_215,&p_3296->g_215,&p_3296->g_215,&p_3296->g_215}, // p_3296->g_1533
        0UL, // p_3296->g_1545
        {{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL},{0x48008897L,1L,3L,0x6C966085L,3L,1L,0x48008897L,0x7054ADEEL}}, // p_3296->g_1705
        251UL, // p_3296->g_1722
        (void*)0, // p_3296->g_1749
        &p_3296->g_1749, // p_3296->g_1748
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_3296->g_1751
        4294967295UL, // p_3296->g_1898
        {3L}, // p_3296->g_1936
        {&p_3296->g_1898}, // p_3296->g_2008
        253UL, // p_3296->g_2042
        {0x7EEAL,0x7EEAL,0x7EEAL,0x7EEAL}, // p_3296->g_2189
        0x2195L, // p_3296->g_2354
        &p_3296->g_2354, // p_3296->g_2353
        &p_3296->g_2353, // p_3296->g_2352
        0x65757A22L, // p_3296->g_2365
        &p_3296->g_2365, // p_3296->g_2364
        &p_3296->g_2364, // p_3296->g_2363
        &p_3296->g_2363, // p_3296->g_2362
        {&p_3296->g_2362,(void*)0,&p_3296->g_2362,&p_3296->g_2362,(void*)0,&p_3296->g_2362,&p_3296->g_2362}, // p_3296->g_2361
        &p_3296->g_2361[2], // p_3296->g_2360
        {{0xC85CL,0x45EBL,0x45EBL,0xC85CL},{0xC85CL,0x45EBL,0x45EBL,0xC85CL},{0xC85CL,0x45EBL,0x45EBL,0xC85CL},{0xC85CL,0x45EBL,0x45EBL,0xC85CL}}, // p_3296->g_2420
        (void*)0, // p_3296->g_2459
        &p_3296->g_2459, // p_3296->g_2458
        &p_3296->g_2458, // p_3296->g_2457
        &p_3296->g_2457, // p_3296->g_2456
        (void*)0, // p_3296->g_2466
        &p_3296->g_2466, // p_3296->g_2465
        &p_3296->g_2465, // p_3296->g_2464
        0x3FFAL, // p_3296->g_2469
        &p_3296->g_695, // p_3296->g_2831
        &p_3296->g_2831, // p_3296->g_2830
        &p_3296->g_2830, // p_3296->g_2829
        {&p_3296->g_2829,&p_3296->g_2829,&p_3296->g_2829,&p_3296->g_2829,&p_3296->g_2829,&p_3296->g_2829,&p_3296->g_2829}, // p_3296->g_2828
        &p_3296->g_2828[0], // p_3296->g_2827
        &p_3296->g_2827, // p_3296->g_2826
        0xCA57D51AE8DDDF53L, // p_3296->g_2879
        (-1L), // p_3296->g_2943
        &p_3296->g_2943, // p_3296->g_2942
        &p_3296->g_2942, // p_3296->g_2941
        &p_3296->g_2941, // p_3296->g_2940
        0x4C224506L, // p_3296->g_2969
        (void*)0, // p_3296->g_2976
        0UL, // p_3296->g_3022
        &p_3296->g_854, // p_3296->g_3108
        &p_3296->g_3108, // p_3296->g_3107
        0x70AAL, // p_3296->g_3119
        1UL, // p_3296->g_3131
        0x5C5D3C49288B63D6L, // p_3296->g_3192
        &p_3296->g_1526[8][2][1], // p_3296->g_3226
        (void*)0, // p_3296->g_3233
        {&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233,&p_3296->g_3233}, // p_3296->g_3232
    };
    c_3297 = c_3298;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3296);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3296->g_17, "p_3296->g_17", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3296->g_32[i], "p_3296->g_32[i]", print_hash_value);

    }
    transparent_crc(p_3296->g_40, "p_3296->g_40", print_hash_value);
    transparent_crc(p_3296->g_82, "p_3296->g_82", print_hash_value);
    transparent_crc(p_3296->g_101, "p_3296->g_101", print_hash_value);
    transparent_crc(p_3296->g_103, "p_3296->g_103", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3296->g_104[i], "p_3296->g_104[i]", print_hash_value);

    }
    transparent_crc(p_3296->g_105, "p_3296->g_105", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_3296->g_133[i][j], "p_3296->g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3296->g_134, "p_3296->g_134", print_hash_value);
    transparent_crc(p_3296->g_135, "p_3296->g_135", print_hash_value);
    transparent_crc(p_3296->g_168, "p_3296->g_168", print_hash_value);
    transparent_crc(p_3296->g_215, "p_3296->g_215", print_hash_value);
    transparent_crc(p_3296->g_217, "p_3296->g_217", print_hash_value);
    transparent_crc(p_3296->g_241, "p_3296->g_241", print_hash_value);
    transparent_crc(p_3296->g_277, "p_3296->g_277", print_hash_value);
    transparent_crc(p_3296->g_286, "p_3296->g_286", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_3296->g_355[i][j][k], "p_3296->g_355[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_3296->g_438[i][j][k], "p_3296->g_438[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3296->g_508, "p_3296->g_508", print_hash_value);
    transparent_crc(p_3296->g_561, "p_3296->g_561", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3296->g_564[i][j], "p_3296->g_564[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3296->g_569, "p_3296->g_569", print_hash_value);
    transparent_crc(p_3296->g_682, "p_3296->g_682", print_hash_value);
    transparent_crc(p_3296->g_745, "p_3296->g_745", print_hash_value);
    transparent_crc(p_3296->g_762, "p_3296->g_762", print_hash_value);
    transparent_crc(p_3296->g_919, "p_3296->g_919", print_hash_value);
    transparent_crc(p_3296->g_927, "p_3296->g_927", print_hash_value);
    transparent_crc(p_3296->g_1049, "p_3296->g_1049", print_hash_value);
    transparent_crc(p_3296->g_1084, "p_3296->g_1084", print_hash_value);
    transparent_crc(p_3296->g_1085, "p_3296->g_1085", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3296->g_1124[i], "p_3296->g_1124[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_3296->g_1160[i], "p_3296->g_1160[i]", print_hash_value);

    }
    transparent_crc(p_3296->g_1192, "p_3296->g_1192", print_hash_value);
    transparent_crc(p_3296->g_1312, "p_3296->g_1312", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_3296->g_1322[i][j], "p_3296->g_1322[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3296->g_1495, "p_3296->g_1495", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_3296->g_1526[i][j][k], "p_3296->g_1526[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3296->g_1545, "p_3296->g_1545", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_3296->g_1705[i][j], "p_3296->g_1705[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3296->g_1722, "p_3296->g_1722", print_hash_value);
    transparent_crc(p_3296->g_1898, "p_3296->g_1898", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3296->g_1936[i], "p_3296->g_1936[i]", print_hash_value);

    }
    transparent_crc(p_3296->g_2042, "p_3296->g_2042", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3296->g_2189[i], "p_3296->g_2189[i]", print_hash_value);

    }
    transparent_crc(p_3296->g_2354, "p_3296->g_2354", print_hash_value);
    transparent_crc(p_3296->g_2365, "p_3296->g_2365", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_3296->g_2420[i][j], "p_3296->g_2420[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3296->g_2469, "p_3296->g_2469", print_hash_value);
    transparent_crc(p_3296->g_2879, "p_3296->g_2879", print_hash_value);
    transparent_crc(p_3296->g_2943, "p_3296->g_2943", print_hash_value);
    transparent_crc(p_3296->g_2969, "p_3296->g_2969", print_hash_value);
    transparent_crc(p_3296->g_3022, "p_3296->g_3022", print_hash_value);
    transparent_crc(p_3296->g_3119, "p_3296->g_3119", print_hash_value);
    transparent_crc(p_3296->g_3131, "p_3296->g_3131", print_hash_value);
    transparent_crc(p_3296->g_3192, "p_3296->g_3192", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
