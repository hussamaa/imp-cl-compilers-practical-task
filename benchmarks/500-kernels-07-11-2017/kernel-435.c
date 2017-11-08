// -g 29,22,2 -l 1,11,2
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


// Seed: 1019274497

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_21;
    int32_t g_24;
    uint32_t g_33;
    int32_t g_36;
    int32_t g_76;
    int32_t g_81;
    int32_t g_84;
    int16_t g_90[2][6][2];
    volatile int32_t *g_112;
    volatile int32_t **g_111;
    uint32_t g_126;
    int8_t g_128;
    int32_t g_131;
    int32_t *g_133;
    int32_t **g_132[5][9];
    int64_t g_149;
    uint16_t g_158;
    int64_t g_190;
    uint16_t g_193[6][3][7];
    uint32_t g_195;
    int64_t g_199[6];
    uint64_t g_202;
    uint16_t g_247;
    volatile uint64_t g_258;
    volatile uint64_t *g_257;
    volatile uint64_t * volatile * volatile g_256[9];
    volatile uint64_t * volatile * volatile * volatile g_259[6][6][5];
    volatile uint64_t * volatile * volatile * volatile g_260;
    int8_t *g_268[1][9];
    int8_t * volatile * volatile g_267;
    int16_t g_277;
    uint64_t g_279;
    volatile uint16_t g_289[1];
    volatile int16_t g_324[3][8][3];
    volatile int16_t *g_323[9];
    volatile int16_t * volatile *g_322;
    volatile int16_t * volatile ** volatile g_325;
    volatile int16_t * volatile ** volatile g_326;
    uint32_t *** volatile g_359;
    uint32_t *** volatile g_360;
    uint32_t *g_363;
    uint32_t **g_362;
    uint32_t *** volatile g_361;
    int16_t *g_427;
    int16_t **g_426;
    uint32_t *** volatile g_450;
    uint32_t *** volatile g_451;
    volatile int16_t g_478;
    uint16_t *g_495;
    uint16_t **g_494;
    volatile int16_t g_513;
    uint8_t g_540;
    uint8_t * volatile g_643;
    uint8_t * volatile *g_642;
    uint64_t *g_661;
    int32_t g_710;
    volatile uint64_t g_767[9][7];
    volatile uint64_t *g_766;
    volatile uint64_t ** volatile g_765;
    uint64_t **g_814;
    uint64_t ***g_813;
    uint32_t *g_840;
    uint32_t **g_839[9];
    uint64_t g_916;
    int32_t g_921;
    int8_t g_925[10][1][2];
    int32_t ** volatile g_982;
    uint16_t ***g_989;
    uint16_t ***g_991;
    int16_t ***g_1007;
    int32_t g_1072[6][6][7];
    int32_t ** volatile g_1078;
    int32_t g_1089;
    int64_t g_1106;
    int32_t * volatile g_1114;
    uint32_t * volatile *g_1120[5];
    uint32_t * volatile * volatile * volatile g_1119[2][8];
    uint32_t * volatile * volatile * volatile * volatile g_1118;
    int32_t ** volatile g_1132;
    int32_t ** volatile g_1160[7][10];
    int32_t ** volatile g_1165;
    uint8_t *g_1168;
    uint8_t **g_1167;
    int16_t g_1191;
    int64_t *g_1314;
    int8_t **g_1332;
    int8_t ***g_1331[10];
    int32_t *g_1376;
    int32_t **g_1375;
    int32_t g_1388;
    int32_t * volatile g_1483;
    uint64_t *g_1604;
    int32_t ** volatile * volatile g_1663;
    uint32_t g_1676;
    uint32_t ***g_1734;
    volatile uint8_t g_1745[4];
    volatile uint64_t * volatile *g_1838;
    volatile uint64_t * volatile **g_1837[9][7][4];
    uint32_t g_1841;
    uint64_t g_1843;
    int8_t ****g_1868;
    volatile int32_t g_1993;
    int32_t g_2089;
    int8_t *****g_2263;
    uint64_t g_2268;
    uint8_t g_2368;
    uint8_t ***g_2377;
    uint8_t ****g_2376;
    uint8_t g_2384;
    uint32_t g_2390;
    int32_t ** volatile g_2420[7][1][2];
    int32_t ** volatile g_2421;
    uint32_t g_2425;
    int32_t g_2477;
    int32_t ** volatile g_2484;
    uint64_t **g_2542;
    uint64_t ***g_2541;
    uint64_t ****g_2540;
    int32_t ** volatile g_2594;
    uint8_t g_2672;
    int32_t *g_2710;
    int32_t **g_2709;
    int32_t ** volatile g_2711;
    uint64_t *****g_2719;
    int32_t g_2763;
    int32_t g_2765;
    int32_t ***g_2779;
    uint8_t **g_2805[4][9][5];
    volatile uint16_t g_2809;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_2811);
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, int16_t  p_5, int32_t  p_6, struct S0 * p_2811);
int64_t  func_9(int64_t  p_10, int64_t  p_11, struct S0 * p_2811);
uint64_t  func_25(int16_t  p_26, uint8_t  p_27, struct S0 * p_2811);
int32_t * func_47(int32_t * p_48, int32_t ** p_49, int8_t  p_50, uint32_t  p_51, uint64_t  p_52, struct S0 * p_2811);
int32_t * func_53(int16_t  p_54, int64_t  p_55, int32_t ** p_56, uint64_t  p_57, uint32_t  p_58, struct S0 * p_2811);
uint32_t  func_63(int64_t  p_64, int32_t * p_65, struct S0 * p_2811);
int8_t  func_72(int32_t ** p_73, uint64_t  p_74, struct S0 * p_2811);
int32_t  func_95(int32_t ** p_96, int32_t  p_97, int32_t * p_98, int32_t ** p_99, int32_t * p_100, struct S0 * p_2811);
int32_t ** func_101(int32_t  p_102, int8_t  p_103, uint32_t  p_104, uint64_t  p_105, uint32_t  p_106, struct S0 * p_2811);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2811->g_21 p_2811->g_36 p_2811->g_33 p_2811->g_84 p_2811->g_326 p_2811->g_322 p_2811->g_202 p_2811->g_247 p_2811->g_494 p_2811->g_495 p_2811->g_158 p_2811->g_193 p_2811->g_323 p_2811->g_324 p_2811->g_76 p_2811->g_111 p_2811->g_112 p_2811->g_642 p_2811->g_643 p_2811->g_540 p_2811->g_710 p_2811->g_427 p_2811->g_362 p_2811->g_363 p_2811->g_195 p_2811->g_81 p_2811->g_765 p_2811->g_766 p_2811->g_767 p_2811->g_126 p_2811->g_813 p_2811->g_839 p_2811->g_90 p_2811->g_478 p_2811->g_190 p_2811->g_921 p_2811->g_149 p_2811->g_925 p_2811->g_661 p_2811->g_982 p_2811->g_133 p_2811->g_1114 p_2811->g_840 p_2811->g_1167 p_2811->g_1168 p_2811->g_451 p_2811->g_132 p_2811->g_1483 p_2811->g_131 p_2811->g_1072 p_2811->g_1089 p_2811->g_916 p_2811->g_277 p_2811->g_991 p_2811->g_1132 p_2811->g_128 p_2811->g_1604 p_2811->g_279 p_2811->g_1745 p_2811->g_1165 p_2811->g_1191 p_2811->g_1837 p_2811->g_1841 p_2811->g_1676 p_2811->g_1843 p_2811->g_1314 p_2811->g_1388 p_2811->g_1993 p_2811->g_2421 p_2811->g_2425 p_2811->g_2089 p_2811->g_199 p_2811->g_2477 p_2811->g_2268 p_2811->g_2377 p_2811->g_2484 p_2811->g_2540 p_2811->g_1375 p_2811->g_1376 p_2811->g_2390 p_2811->g_2594 p_2811->g_2672 p_2811->g_2263 p_2811->g_1868 p_2811->g_1331 p_2811->g_2376 p_2811->g_1007 p_2811->g_2710 p_2811->g_2384 p_2811->g_2763 p_2811->g_2542 p_2811->g_2541 p_2811->g_24 p_2811->g_2809 p_2811->g_2779 p_2811->g_258
 * writes: p_2811->g_24 p_2811->g_33 p_2811->g_36 p_2811->g_76 p_2811->g_81 p_2811->g_84 p_2811->g_90 p_2811->g_426 p_2811->g_126 p_2811->g_279 p_2811->g_258 p_2811->g_277 p_2811->g_112 p_2811->g_540 p_2811->g_158 p_2811->g_149 p_2811->g_813 p_2811->g_839 p_2811->g_128 p_2811->g_193 p_2811->g_195 p_2811->g_916 p_2811->g_199 p_2811->g_925 p_2811->g_202 p_2811->g_921 p_2811->g_190 p_2811->g_362 p_2811->g_133 p_2811->g_989 p_2811->g_991 p_2811->g_710 p_2811->g_1007 p_2811->g_661 p_2811->g_814 p_2811->g_1089 p_2811->g_247 p_2811->g_1734 p_2811->g_1745 p_2811->g_1388 p_2811->g_1676 p_2811->g_1191 p_2811->g_1841 p_2811->g_494 p_2811->g_1843 p_2811->g_131 p_2811->g_21 p_2811->g_1106 p_2811->g_2477 p_2811->g_2268 p_2811->g_2089 p_2811->g_2390 p_2811->g_2540 p_2811->g_2425 p_2811->g_1072 p_2811->g_2263 p_2811->g_2368 p_2811->g_2709 p_2811->g_2719 p_2811->g_2763 p_2811->g_2779 p_2811->g_2805
 */
uint32_t  func_1(struct S0 * p_2811)
{ /* block id: 4 */
    int64_t l_18[6];
    int32_t *l_22 = (void*)0;
    int32_t *l_23 = &p_2811->g_24;
    uint16_t l_30 = 0x98D7L;
    uint64_t **l_2424 = &p_2811->g_1604;
    int32_t l_2736 = 0x0458106AL;
    int32_t *l_2762 = &p_2811->g_2763;
    int32_t *l_2764[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_2766 = (-10L);
    uint32_t l_2791 = 4294967295UL;
    uint8_t l_2792 = 254UL;
    uint8_t **l_2804 = (void*)0;
    uint64_t *****l_2806 = &p_2811->g_2540;
    int64_t l_2808 = (-2L);
    int i;
    for (i = 0; i < 6; i++)
        l_18[i] = 0x0789328A062B000CL;
    l_2766 ^= ((*l_2762) &= func_2((safe_add_func_int64_t_s_s(func_9(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_18[1], (l_18[1] | ((*l_23) = (safe_div_func_uint16_t_u_u(p_2811->g_21, p_2811->g_21)))))), func_25((safe_add_func_int16_t_s_s(l_30, p_2811->g_21)), p_2811->g_21, p_2811))) >= (safe_div_func_int64_t_s_s((((l_2424 != l_2424) && l_18[1]) || l_18[1]), l_30))), p_2811->g_2425)) < 0xEF6767ADL), p_2811->g_2089, p_2811), p_2811->g_2384)), l_30, l_2736, l_2736, p_2811));
    for (p_2811->g_149 = 8; (p_2811->g_149 >= 0); p_2811->g_149 -= 1)
    { /* block id: 1515 */
        uint32_t l_2775[2];
        int32_t ***l_2776 = &p_2811->g_132[0][5];
        int32_t ****l_2777 = (void*)0;
        int32_t ****l_2778[10][7][3] = {{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}},{{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0},{&l_2776,(void*)0,(void*)0}}};
        int8_t *l_2784 = &p_2811->g_925[0][0][0];
        int8_t *l_2793 = &p_2811->g_128;
        uint8_t l_2794 = 0UL;
        int32_t l_2795 = 0x64EDA799L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2775[i] = 0xBF44BBFFL;
        if ((safe_mul_func_uint16_t_u_u(((((*p_2811->g_495) ^ ((*p_2811->g_495) , (safe_sub_func_int16_t_s_s((((*p_2811->g_427) = (~(safe_mul_func_int8_t_s_s(((*l_2793) = (safe_sub_func_int32_t_s_s((((l_2775[1] <= (((p_2811->g_2779 = l_2776) == (void*)0) != (safe_mod_func_uint32_t_u_u((((*l_2784) = (safe_sub_func_int8_t_s_s((+0x53L), 0x91L))) > (safe_div_func_uint8_t_u_u(0xD4L, ((((****p_2811->g_2540) = ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((*p_2811->g_1114) <= 6UL) <= (*l_2762)), (*p_2811->g_495))), (***p_2811->g_2377))) , (**p_2811->g_2542))) , 0x6CCCD4B9L) | (*l_2762))))), l_2791)))) , (**p_2811->g_765)) , l_2792), (*l_2762)))), 255UL)))) >= 1L), l_2794)))) <= l_2795) || p_2811->g_128), (*p_2811->g_495))))
        { /* block id: 1521 */
            uint64_t l_2807 = 0xDD727FC424C66764L;
            int32_t *l_2810 = &p_2811->g_921;
            l_2808 = ((*l_2762) ^= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((!(safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((*p_2811->g_2377) != (p_2811->g_2805[1][3][1] = l_2804)), 8)) || (*l_23)), 7))), 7)), ((l_2806 == &p_2811->g_2540) | l_2807))));
            (*l_23) ^= l_2807;
            if (p_2811->g_2809)
                continue;
            (**p_2811->g_2779) = l_2810;
        }
        else
        { /* block id: 1528 */
            l_23 = &l_2766;
            for (p_2811->g_2368 = 0; (p_2811->g_2368 <= 8); p_2811->g_2368 += 1)
            { /* block id: 1532 */
                return p_2811->g_2089;
            }
        }
    }
    return p_2811->g_258;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_2811->g_133
 */
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, int16_t  p_5, int32_t  p_6, struct S0 * p_2811)
{ /* block id: 1502 */
    int64_t *l_2737 = &p_2811->g_190;
    int32_t l_2738 = 0x2C01351CL;
    uint8_t l_2739 = 255UL;
    int32_t **l_2740 = &p_2811->g_133;
    uint16_t *l_2745 = &p_2811->g_193[5][0][2];
    uint32_t ***l_2756 = &p_2811->g_362;
    uint32_t ****l_2757 = &l_2756;
    uint32_t ***l_2759[5][6] = {{&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362},{&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362},{&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362},{&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362},{&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362,&p_2811->g_362}};
    uint32_t ****l_2758 = &l_2759[4][3];
    uint32_t ***l_2760[4][5] = {{(void*)0,&p_2811->g_362,&p_2811->g_362,(void*)0,(void*)0},{(void*)0,&p_2811->g_362,&p_2811->g_362,(void*)0,(void*)0},{(void*)0,&p_2811->g_362,&p_2811->g_362,(void*)0,(void*)0},{(void*)0,&p_2811->g_362,&p_2811->g_362,(void*)0,(void*)0}};
    int16_t l_2761 = 7L;
    int i, j;
    (*l_2740) = &l_2738;
    return l_2761;
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_1089 p_2811->g_710 p_2811->g_2089 p_2811->g_925 p_2811->g_126 p_2811->g_1167 p_2811->g_1168 p_2811->g_540 p_2811->g_495 p_2811->g_199 p_2811->g_1604 p_2811->g_279 p_2811->g_642 p_2811->g_643 p_2811->g_2477 p_2811->g_921 p_2811->g_2268 p_2811->g_2377 p_2811->g_2484 p_2811->g_1314 p_2811->g_765 p_2811->g_766 p_2811->g_767 p_2811->g_158 p_2811->g_1165 p_2811->g_133 p_2811->g_21 p_2811->g_81 p_2811->g_2540 p_2811->g_427 p_2811->g_90 p_2811->g_1375 p_2811->g_1376 p_2811->g_1072 p_2811->g_322 p_2811->g_323 p_2811->g_324 p_2811->g_2390 p_2811->g_2594 p_2811->g_2425 p_2811->g_2672 p_2811->g_2263 p_2811->g_1868 p_2811->g_1331 p_2811->g_1483 p_2811->g_2376 p_2811->g_1191 p_2811->g_277 p_2811->g_1007 p_2811->g_190 p_2811->g_2710 p_2811->g_132
 * writes: p_2811->g_1089 p_2811->g_76 p_2811->g_131 p_2811->g_21 p_2811->g_710 p_2811->g_925 p_2811->g_126 p_2811->g_158 p_2811->g_81 p_2811->g_279 p_2811->g_921 p_2811->g_1106 p_2811->g_916 p_2811->g_540 p_2811->g_84 p_2811->g_133 p_2811->g_2477 p_2811->g_190 p_2811->g_2268 p_2811->g_2089 p_2811->g_199 p_2811->g_2390 p_2811->g_2540 p_2811->g_2425 p_2811->g_1072 p_2811->g_24 p_2811->g_2263 p_2811->g_90 p_2811->g_2368 p_2811->g_2709 p_2811->g_2719 p_2811->g_426 p_2811->g_1388
 */
int64_t  func_9(int64_t  p_10, int64_t  p_11, struct S0 * p_2811)
{ /* block id: 1322 */
    int64_t l_2476 = (-4L);
    int32_t l_2493 = 4L;
    int32_t l_2529 = 1L;
    uint16_t l_2558 = 0UL;
    uint32_t l_2620[2][8] = {{4294967286UL,0x2A52C902L,8UL,0x2A52C902L,4294967286UL,4294967286UL,0x2A52C902L,8UL},{4294967286UL,0x2A52C902L,8UL,0x2A52C902L,4294967286UL,4294967286UL,0x2A52C902L,8UL}};
    int32_t *l_2674 = &p_2811->g_84;
    int64_t l_2727 = 0x472B62A2A8E92801L;
    int32_t ***l_2731[8][1];
    uint64_t *****l_2732[5][2] = {{&p_2811->g_2540,&p_2811->g_2540},{&p_2811->g_2540,&p_2811->g_2540},{&p_2811->g_2540,&p_2811->g_2540},{&p_2811->g_2540,&p_2811->g_2540},{&p_2811->g_2540,&p_2811->g_2540}};
    int16_t **l_2733[9] = {&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427};
    int8_t *l_2734[8][2] = {{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]},{&p_2811->g_925[0][0][0],&p_2811->g_925[0][0][0]}};
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_2731[i][j] = &p_2811->g_132[1][3];
    }
    for (p_2811->g_1089 = 0; (p_2811->g_1089 >= 0); p_2811->g_1089 -= 1)
    { /* block id: 1325 */
        int32_t *l_2455 = &p_2811->g_710;
        int32_t ***l_2482 = &p_2811->g_1375;
        uint8_t *l_2532 = &p_2811->g_2368;
        uint64_t l_2559[2];
        int32_t l_2589 = 1L;
        int32_t l_2659 = 0x51EECC3EL;
        uint8_t l_2660 = 0UL;
        int8_t ****l_2664 = &p_2811->g_1331[7];
        uint64_t ******l_2718 = (void*)0;
        int64_t l_2722[10];
        int i;
        for (i = 0; i < 2; i++)
            l_2559[i] = 0x044A4084129AB1EAL;
        for (i = 0; i < 10; i++)
            l_2722[i] = 0x711B4BDF3D353A8FL;
        for (p_2811->g_76 = 0; (p_2811->g_76 >= 0); p_2811->g_76 -= 1)
        { /* block id: 1328 */
            int8_t l_2426 = (-1L);
            int32_t l_2434[8] = {0x43272F40L,0x43272F40L,0x43272F40L,0x43272F40L,0x43272F40L,0x43272F40L,0x43272F40L,0x43272F40L};
            int32_t ***l_2481[8][3] = {{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375},{&p_2811->g_1375,&p_2811->g_1375,&p_2811->g_1375}};
            int8_t **l_2511 = &p_2811->g_268[0][5];
            int8_t l_2528 = 0x40L;
            int64_t *l_2533 = &p_2811->g_199[5];
            int32_t *l_2534 = &p_2811->g_81;
            int i, j;
            for (p_2811->g_131 = 7; (p_2811->g_131 >= 0); p_2811->g_131 -= 1)
            { /* block id: 1331 */
                uint16_t l_2435[1];
                int32_t *l_2458 = &p_2811->g_921;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2435[i] = 1UL;
                for (p_2811->g_21 = 0; (p_2811->g_21 <= 0); p_2811->g_21 += 1)
                { /* block id: 1334 */
                    int32_t *l_2427 = &p_2811->g_710;
                    int32_t *l_2428 = &p_2811->g_36;
                    int32_t *l_2429 = &p_2811->g_710;
                    int32_t *l_2430 = &p_2811->g_2089;
                    int32_t *l_2431 = &p_2811->g_84;
                    int32_t *l_2432 = &p_2811->g_81;
                    int32_t *l_2433[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_2433[i] = &p_2811->g_81;
                    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
                    { /* block id: 1337 */
                        int i, j, k;
                        l_2426 = p_11;
                    }
                    (*l_2427) |= p_11;
                    l_2435[0]++;
                    if (((*l_2430) >= (*l_2430)))
                    { /* block id: 1342 */
                        int32_t l_2442 = 0x4C219A3FL;
                        int8_t *l_2443 = (void*)0;
                        int8_t *l_2444 = &p_2811->g_925[0][0][0];
                        uint32_t *l_2447 = (void*)0;
                        uint32_t *l_2448 = &p_2811->g_126;
                        int i;
                        l_2442 = ((safe_mul_func_int8_t_s_s(p_11, ((safe_lshift_func_int8_t_s_u((-1L), 3)) , ((*l_2444) ^= (l_2442 > p_10))))) , (0x61L == (safe_add_func_uint32_t_u_u((--(*l_2448)), ((safe_mul_func_int16_t_s_s(p_10, ((*p_2811->g_495) = (((0x957EL && ((safe_sub_func_int64_t_s_s(((**p_2811->g_1167) & (l_2435[0] || p_10)), 18446744073709551615UL)) , 0L)) , (void*)0) == (void*)0)))) > p_2811->g_199[3])))));
                    }
                    else
                    { /* block id: 1347 */
                        int32_t **l_2456 = &l_2433[0];
                        uint8_t *l_2457 = &p_2811->g_2368;
                        (*l_2456) = (p_11 , l_2455);
                        (*l_2429) = (l_2457 != (void*)0);
                    }
                }
                if (p_11)
                    continue;
                for (p_2811->g_81 = 9; (p_2811->g_81 >= 0); p_2811->g_81 -= 1)
                { /* block id: 1355 */
                    int32_t **l_2459 = &l_2455;
                    int64_t *l_2478 = &p_2811->g_1106;
                    uint64_t *l_2479 = &p_2811->g_916;
                    int32_t *l_2480 = &l_2434[4];
                    int i;
                    (*l_2459) = l_2458;
                    (*l_2459) = l_2455;
                    (*l_2480) |= (safe_lshift_func_int8_t_s_s((0x1A4184C1L || ((safe_lshift_func_uint8_t_u_s(((***p_2811->g_2377) = ((((*l_2479) = ((safe_add_func_uint64_t_u_u(((*p_2811->g_1604) |= 18446744073709551615UL), ((*l_2478) = (safe_rshift_func_int16_t_s_u(p_10, ((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((((safe_add_func_uint32_t_u_u(0x8E45326DL, ((**l_2459) = 4294967293UL))) == (**p_2811->g_642)) | (p_11 , l_2476)) ^ p_11) > p_2811->g_2477), l_2476)), p_11)), 6)) > 0x83L) & 0x0656L) && (**l_2459))))))) >= (-3L))) & p_11) & p_2811->g_2268)), p_11)) && p_11)), p_11));
                    (*l_2480) ^= (l_2481[1][1] != l_2482);
                }
                for (p_2811->g_916 = 1; (p_2811->g_916 <= 9); p_2811->g_916 += 1)
                { /* block id: 1368 */
                    uint8_t l_2492 = 0x8AL;
                    int32_t *l_2514[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2514[i] = &p_2811->g_2089;
                    for (p_2811->g_84 = 3; (p_2811->g_84 <= 9); p_2811->g_84 += 1)
                    { /* block id: 1371 */
                        int32_t *l_2483[4] = {&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81};
                        int i;
                        (*p_2811->g_2484) = l_2483[2];
                    }
                    for (p_2811->g_2477 = 9; (p_2811->g_2477 >= 0); p_2811->g_2477 -= 1)
                    { /* block id: 1376 */
                        uint32_t l_2487 = 3UL;
                        uint64_t *l_2508 = &p_2811->g_2268;
                        int32_t l_2512 = 0x34834641L;
                        int32_t l_2513 = 0x22B87570L;
                        (*l_2458) = (safe_lshift_func_uint8_t_u_s(l_2487, (safe_div_func_int64_t_s_s((((+(0UL | (((*p_2811->g_1314) = (safe_add_func_uint64_t_u_u((((*p_2811->g_1604) = 0x8B4149470E42AD59L) | (((l_2492 < ((((((**p_2811->g_642) , 0L) != (*l_2455)) , 1L) <= (*l_2455)) & l_2476)) < l_2493) < l_2487)), 0x1F0B1A06002BC48BL))) , p_11))) , (*l_2458)) == l_2476), p_11))));
                        l_2513 &= (((l_2493 == (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((((~((**p_2811->g_765) ^ 0x324BD4F9E4CB218DL)) || (safe_sub_func_uint64_t_u_u((*p_2811->g_766), (248UL || ((*l_2458) | (safe_div_func_uint64_t_u_u((+18446744073709551606UL), (((((((safe_lshift_func_int8_t_s_s(0x4DL, 3)) != (l_2512 |= ((safe_mod_func_uint64_t_u_u(((*l_2508) = ((*p_2811->g_1604)--)), (safe_mul_func_uint8_t_u_u(((((void*)0 != l_2511) , p_11) > p_10), p_10)))) <= l_2493))) , p_10) , (*l_2458)) > l_2434[3]) , p_11) && (-6L))))))))) >= (*l_2455)) , (*p_2811->g_495)) | p_11), 9L)), p_10))) & p_10) != p_10);
                        (*p_2811->g_1165) = l_2514[3];
                        l_2455 = (*p_2811->g_1165);
                    }
                    for (p_2811->g_2089 = 0; (p_2811->g_2089 <= 9); p_2811->g_2089 += 1)
                    { /* block id: 1389 */
                        uint32_t l_2515 = 4UL;
                        return l_2515;
                    }
                }
            }
            (*l_2534) &= ((l_2434[6] ^= ((*l_2533) = ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(248UL, l_2493)), (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((p_10 != (safe_sub_func_uint64_t_u_u(((p_11 == (+(safe_add_func_int8_t_s_s(((l_2529 = l_2528) , (safe_sub_func_int8_t_s_s(0x11L, p_11))), ((l_2532 != l_2532) ^ (*p_2811->g_1604)))))) < p_10), (*l_2455)))) , (*p_2811->g_495)) <= 0x6EE2L), p_11)) | l_2476), 0xD9F2L)))) , (*l_2455)))) & p_2811->g_21);
        }
        for (p_11 = 6; (p_11 >= 0); p_11 -= 1)
        { /* block id: 1401 */
            uint32_t l_2539 = 0x91B05564L;
            uint64_t ****l_2543[8][3][9] = {{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}},{{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541},{(void*)0,&p_2811->g_2541,(void*)0,(void*)0,&p_2811->g_2541,(void*)0,&p_2811->g_2541,&p_2811->g_2541,&p_2811->g_2541}}};
            uint64_t ****l_2544 = (void*)0;
            int8_t ****l_2590 = &p_2811->g_1331[5];
            int64_t l_2592 = (-3L);
            uint32_t *l_2615 = &p_2811->g_2425;
            int32_t l_2658 = 0x15D3A32CL;
            int i, j, k;
            for (p_2811->g_2390 = 0; (p_2811->g_2390 <= 8); p_2811->g_2390 += 1)
            { /* block id: 1404 */
                int32_t l_2547 = 0x1CBBBD1FL;
                int32_t ***l_2556 = &p_2811->g_132[0][5];
                int32_t ****l_2557 = &l_2556;
                int i;
                (*l_2455) = (safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(1UL, ((l_2539 > ((((l_2543[1][2][1] = (p_2811->g_2540 = p_2811->g_2540)) != l_2544) && (((safe_add_func_uint16_t_u_u(l_2547, ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((((l_2558 = ((safe_div_func_uint64_t_u_u((((((((safe_div_func_int16_t_s_s((((*l_2557) = l_2556) == (void*)0), 0x7E6DL)) ^ (p_10 > p_10)) > 1L) , (-1L)) != (**p_2811->g_1167)) | (*p_2811->g_766)) , p_11), p_11)) < 0x78092467L)) != 0x5155C464374CE518L) | l_2529) , 0x0927L) <= (*l_2455)), 1L)), (*p_2811->g_427))) != 0x2D185F1355CC1DEAL))) ^ l_2493) == p_10)) , p_10)) , p_11))) & l_2559[0]) == l_2539), p_11));
            }
            for (p_2811->g_540 = 0; (p_2811->g_540 <= 8); p_2811->g_540 += 1)
            { /* block id: 1413 */
                int32_t l_2578 = 7L;
                int32_t l_2583 = 0L;
                uint32_t *l_2588[6];
                int32_t l_2591[9];
                int i;
                for (i = 0; i < 6; i++)
                    l_2588[i] = &p_2811->g_2425;
                for (i = 0; i < 9; i++)
                    l_2591[i] = 0x2E3653D8L;
                (*l_2455) = ((**p_2811->g_1375) , (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((*l_2455), (((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((((*p_2811->g_495) ^= p_11) , (safe_mul_func_uint16_t_u_u((+(++(*p_2811->g_495))), (**p_2811->g_322)))) > (l_2578 , (safe_lshift_func_uint16_t_u_u((l_2591[7] = (((((safe_mul_func_uint16_t_u_u(l_2539, ((l_2589 = (l_2583 >= (((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((-7L), 0x09L)), l_2493)) , p_10) && (*p_2811->g_1168)))) && p_11))) , l_2590) != (void*)0) || 0x48BCB2466E279589L) <= l_2558)), 9)))) > l_2539) , 6L), p_11)), 0xD7DAF4B8L)) < 1L) >= p_11))) <= l_2578), 6L)), p_10)) > 0xC98A021AL), 3)), l_2592)));
                return p_2811->g_2390;
            }
            for (l_2493 = 0; (l_2493 <= 9); l_2493 += 1)
            { /* block id: 1423 */
                int32_t l_2607 = 1L;
                int8_t l_2608 = 1L;
                for (p_2811->g_540 = 0; (p_2811->g_540 <= 3); p_2811->g_540 += 1)
                { /* block id: 1426 */
                    int32_t *l_2593 = &l_2589;
                    for (p_10 = 0; (p_10 <= 0); p_10 += 1)
                    { /* block id: 1429 */
                        (*p_2811->g_2594) = l_2593;
                        (*l_2455) = (((((*l_2455) == ((void*)0 == &p_2811->g_1119[1][4])) , (((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(0UL, 0x2FC1L)), ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(0x1EL, (l_2539 < 0UL))), (safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((p_10 , 0x46E77E49CF3156F7L), (*l_2455))), p_10)))) || p_10))) | l_2607) && l_2608)) , (void*)0) != (void*)0);
                        return p_11;
                    }
                }
            }
            if (((++(***p_2811->g_2377)) <= (((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((*l_2615) ^= p_11), (*l_2455))) , (((void*)0 != l_2455) >= (((*p_2811->g_495) = (((~(((((**p_2811->g_1375) = (safe_sub_func_uint32_t_u_u(((0xD89AD92FL != ((safe_sub_func_uint64_t_u_u(l_2592, p_11)) ^ 1L)) , 0x72E2490EL), p_11))) , l_2620[1][6]) , (void*)0) != &p_2811->g_2390)) < p_11) == (*p_2811->g_766))) <= 0x0511L))), 0x610EL)) && l_2592) <= p_10)))
            { /* block id: 1440 */
                uint64_t l_2621 = 0x661B0745AE31C5B9L;
                int32_t l_2651 = 0x67F03074L;
                int32_t l_2652 = 0x4247E935L;
                int32_t l_2656 = 1L;
                int32_t l_2657[9][4];
                int8_t ******l_2663 = &p_2811->g_2263;
                uint32_t l_2667 = 4294967294UL;
                int32_t *l_2708 = &p_2811->g_1388;
                int32_t **l_2707 = &l_2708;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_2657[i][j] = (-4L);
                }
                for (p_2811->g_2390 = 0; (p_2811->g_2390 <= 8); p_2811->g_2390 += 1)
                { /* block id: 1443 */
                    int32_t l_2630[1];
                    int32_t l_2654 = 0x0B32DBC9L;
                    int32_t l_2655 = 0x755FB814L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2630[i] = 0x42DE20B1L;
                    for (p_2811->g_21 = 0; (p_2811->g_21 <= 8); p_2811->g_21 += 1)
                    { /* block id: 1446 */
                        int32_t *l_2637 = &l_2493;
                        int32_t *l_2638 = &l_2589;
                        int32_t *l_2639 = &l_2493;
                        int32_t *l_2640 = &l_2589;
                        int32_t *l_2641 = &p_2811->g_24;
                        int32_t *l_2642 = &l_2529;
                        int32_t *l_2643 = &p_2811->g_131;
                        int32_t *l_2644 = &p_2811->g_24;
                        int32_t *l_2645 = &l_2529;
                        int32_t *l_2646 = (void*)0;
                        int32_t *l_2647 = &p_2811->g_84;
                        int32_t *l_2648 = &p_2811->g_84;
                        int32_t *l_2649 = &p_2811->g_76;
                        int32_t *l_2650[3][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int8_t l_2653 = 1L;
                        int i, j, k;
                        l_2621--;
                        (*l_2455) = (safe_lshift_func_int16_t_s_u(((-1L) != (safe_add_func_uint64_t_u_u(p_2811->g_199[p_2811->g_1089], (p_11 || (-1L))))), (safe_sub_func_int32_t_s_s(p_11, l_2630[0]))));
                        (*l_2455) = (p_2811->g_1072[5][5][5] || (safe_mul_func_uint8_t_u_u(0x24L, (safe_sub_func_uint32_t_u_u(((*l_2615) = (safe_lshift_func_uint16_t_u_s(l_2620[1][6], 8))), 5L)))));
                        --l_2660;
                    }
                }
                (*l_2455) &= l_2476;
                for (p_2811->g_24 = 9; (p_2811->g_24 >= 0); p_2811->g_24 -= 1)
                { /* block id: 1457 */
                    (*l_2455) = l_2620[1][6];
                }
                if ((((*p_2811->g_427) = (p_10 ^ (((*l_2663) = &p_2811->g_1868) != (void*)0))) <= ((void*)0 == l_2664)))
                { /* block id: 1462 */
                    int32_t *l_2665 = &p_2811->g_2089;
                    int32_t *l_2666 = (void*)0;
                    --l_2667;
                    if (p_10)
                        continue;
                    (*l_2665) = (safe_mod_func_uint16_t_u_u(p_10, 1L));
                    return p_2811->g_2672;
                }
                else
                { /* block id: 1467 */
                    int32_t *l_2673[6] = {&p_2811->g_131,&p_2811->g_131,&p_2811->g_131,&p_2811->g_131,&p_2811->g_131,&p_2811->g_131};
                    uint16_t l_2706 = 65535UL;
                    int i;
                    l_2674 = l_2673[2];
                    if ((*l_2455))
                        break;
                    for (l_2558 = 0; (l_2558 <= 8); l_2558 += 1)
                    { /* block id: 1472 */
                        int32_t l_2675 = (-1L);
                        int32_t l_2676 = 0x34C90058L;
                        int32_t l_2677[1];
                        uint32_t l_2678 = 0x6C308212L;
                        int8_t l_2705 = 1L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2677[i] = (-1L);
                        l_2678--;
                        l_2658 &= ((((((((void*)0 == (**p_2811->g_2263)) > (((-1L) || l_2539) & p_11)) , ((*l_2532) = ((**p_2811->g_1167) = ((((safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((((((((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*p_2811->g_427) |= ((((*p_2811->g_1483) <= (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((0x66665F35973C6EC6L & (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x60L, (****p_2811->g_2376))), l_2677[0])), (*l_2455))), p_11))), l_2539)), p_11))) ^ l_2592) < l_2651)), l_2705)), p_11)) < 0xACL) >= p_10) > l_2539) ^ p_2811->g_1191) ^ l_2667) <= p_11) >= 0x66L) <= (*l_2455)) , 65535UL), 5)) <= 0L), 1)))) , (*p_2811->g_495)) || 9UL) , p_11)))) || 0xE9L) < 0x42L) | l_2706) == p_10);
                        p_2811->g_2709 = l_2707;
                    }
                }
            }
            else
            { /* block id: 1481 */
                (*l_2455) |= p_10;
                (*p_2811->g_2594) = &l_2658;
            }
        }
        if (((*l_2455) & (safe_div_func_uint64_t_u_u((--(*p_2811->g_1604)), (safe_lshift_func_uint16_t_u_s(((*p_2811->g_495) = (((p_2811->g_2719 = &p_2811->g_2540) != (p_10 , &p_2811->g_2540)) , ((safe_mul_func_int16_t_s_s(0x2BEBL, ((((***p_2811->g_2377) &= l_2722[6]) || 249UL) , (((safe_add_func_int64_t_s_s(p_2811->g_277, (safe_add_func_uint32_t_u_u(0xAC226F01L, (-6L))))) ^ 1L) || (*p_2811->g_1168))))) , p_10))), 6))))))
        { /* block id: 1490 */
            int32_t l_2728[10][6] = {{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)},{(-2L),0L,1L,(-1L),0L,(-1L)}};
            int32_t ***l_2730 = &p_2811->g_132[0][5];
            int32_t ****l_2729 = &l_2730;
            int64_t *l_2735 = &l_2476;
            int i, j;
            (*l_2455) = (((l_2727 && (((l_2728[0][5] , ((*l_2729) = &p_2811->g_132[0][5])) != l_2731[6][0]) <= (((((l_2732[0][0] != ((((!((((*l_2735) = ((((*p_2811->g_2710) = ((((*p_2811->g_1007) = l_2733[3]) != (void*)0) != p_2811->g_190)) , l_2734[7][1]) == (void*)0)) < 1UL) | p_11)) | 8L) && (*l_2455)) , &p_2811->g_2540)) < p_10) <= 0x3B01L) || (*l_2455)) && p_10))) != (*l_2455)) == p_10);
            (***l_2729) = &l_2659;
        }
        else
        { /* block id: 1497 */
            (*l_2455) = p_11;
        }
    }
    return p_2811->g_767[0][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_21 p_2811->g_33 p_2811->g_36 p_2811->g_84 p_2811->g_326 p_2811->g_322 p_2811->g_202 p_2811->g_247 p_2811->g_494 p_2811->g_495 p_2811->g_158 p_2811->g_193 p_2811->g_323 p_2811->g_324 p_2811->g_76 p_2811->g_111 p_2811->g_112 p_2811->g_642 p_2811->g_643 p_2811->g_540 p_2811->g_710 p_2811->g_427 p_2811->g_362 p_2811->g_363 p_2811->g_195 p_2811->g_81 p_2811->g_765 p_2811->g_766 p_2811->g_767 p_2811->g_126 p_2811->g_813 p_2811->g_839 p_2811->g_90 p_2811->g_478 p_2811->g_190 p_2811->g_921 p_2811->g_149 p_2811->g_925 p_2811->g_661 p_2811->g_982 p_2811->g_133 p_2811->g_1114 p_2811->g_840 p_2811->g_1167 p_2811->g_1168 p_2811->g_451 p_2811->g_132 p_2811->g_1483 p_2811->g_131 p_2811->g_1072 p_2811->g_1089 p_2811->g_916 p_2811->g_991 p_2811->g_1132 p_2811->g_1604 p_2811->g_279 p_2811->g_1745 p_2811->g_1165 p_2811->g_1191 p_2811->g_1837 p_2811->g_1841 p_2811->g_277 p_2811->g_1676 p_2811->g_1843 p_2811->g_1314 p_2811->g_1388 p_2811->g_1993 p_2811->g_2421 p_2811->g_128
 * writes: p_2811->g_33 p_2811->g_36 p_2811->g_76 p_2811->g_81 p_2811->g_84 p_2811->g_90 p_2811->g_426 p_2811->g_126 p_2811->g_279 p_2811->g_258 p_2811->g_277 p_2811->g_112 p_2811->g_540 p_2811->g_158 p_2811->g_149 p_2811->g_813 p_2811->g_839 p_2811->g_128 p_2811->g_193 p_2811->g_195 p_2811->g_916 p_2811->g_199 p_2811->g_925 p_2811->g_202 p_2811->g_921 p_2811->g_190 p_2811->g_362 p_2811->g_133 p_2811->g_989 p_2811->g_991 p_2811->g_710 p_2811->g_1007 p_2811->g_661 p_2811->g_814 p_2811->g_1089 p_2811->g_247 p_2811->g_1734 p_2811->g_1745 p_2811->g_1388 p_2811->g_1676 p_2811->g_1191 p_2811->g_1841 p_2811->g_494 p_2811->g_1843
 */
uint64_t  func_25(int16_t  p_26, uint8_t  p_27, struct S0 * p_2811)
{ /* block id: 6 */
    int32_t *l_46 = &p_2811->g_36;
    int32_t l_1847 = 0x3B2FCF4FL;
    int8_t **l_1879 = &p_2811->g_268[0][6];
    uint64_t **l_1904[2];
    uint64_t ***l_1903[8][2] = {{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]},{(void*)0,&l_1904[0]}};
    uint64_t ****l_1902 = &l_1903[2][0];
    int32_t l_1987 = (-7L);
    uint32_t l_1992 = 1UL;
    int32_t **l_2015 = (void*)0;
    int32_t l_2044 = 0x72089036L;
    int32_t l_2063 = 0L;
    int32_t l_2065 = 0x297A0ADCL;
    uint32_t l_2140 = 4294967293UL;
    int32_t l_2161 = 0x099B265CL;
    int32_t l_2162 = (-1L);
    int32_t l_2164[10][10] = {{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L},{0L,0x1B0AA2AAL,(-1L),1L,(-3L),0x58848EEAL,0x517607EDL,0L,(-9L),0x21759A17L}};
    int64_t l_2217 = 7L;
    int16_t *l_2248[8][6] = {{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]},{&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_1191,&p_2811->g_90[1][3][1]}};
    uint64_t l_2282 = 0UL;
    int64_t l_2298 = 3L;
    uint16_t l_2302 = 0x9A23L;
    uint32_t ****l_2315 = &p_2811->g_1734;
    uint32_t *****l_2314 = &l_2315;
    int64_t l_2341[9][10] = {{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L},{0L,0x2DADF5E010275A46L,0L,0L,0x4CE93C465D7FC831L,0L,0L,0x4CE93C465D7FC831L,0L,0L}};
    uint32_t *l_2389 = &p_2811->g_2390;
    int32_t l_2401 = 8L;
    uint64_t ***l_2418 = &l_1904[0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1904[i] = &p_2811->g_661;
lbl_1927:
    for (p_27 = (-13); (p_27 > 55); p_27 = safe_add_func_uint32_t_u_u(p_27, 3))
    { /* block id: 9 */
        int32_t *l_37 = (void*)0;
        int32_t l_979 = 0x2B80DF98L;
        int32_t l_1481 = 0x5A1B7299L;
        uint8_t l_1826 = 1UL;
        int32_t l_1849[4] = {0x3F62DC76L,0x3F62DC76L,0x3F62DC76L,0x3F62DC76L};
        int i;
        if ((p_2811->g_33 = p_2811->g_21))
        { /* block id: 11 */
            int32_t *l_35[7];
            int32_t **l_34[7] = {&l_35[3],&l_35[3],&l_35[3],&l_35[3],&l_35[3],&l_35[3],&l_35[3]};
            int i;
            for (i = 0; i < 7; i++)
                l_35[i] = &p_2811->g_36;
            l_37 = (void*)0;
            for (p_2811->g_36 = 4; (p_2811->g_36 >= 0); p_2811->g_36 -= 1)
            { /* block id: 15 */
                int32_t *l_980 = &l_979;
                int32_t l_1821 = 0x15BA585AL;
                for (p_2811->g_33 = 0; (p_2811->g_33 <= 6); p_2811->g_33 += 1)
                { /* block id: 18 */
                    int i;
                    if (p_2811->g_33)
                        break;
                }
                l_1821 ^= ((safe_div_func_uint64_t_u_u(p_2811->g_33, 0x52AE45661C443818L)) | (4294967290UL < ((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_46 == (l_980 = ((*p_2811->g_982) = func_47(func_53((safe_add_func_int64_t_s_s(p_2811->g_33, (((((safe_add_func_uint8_t_u_u(((func_63((((safe_sub_func_uint32_t_u_u((p_2811->g_36 && (((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(func_72(&l_37, p_26, p_2811), p_27)) >= l_979), (-1L))) , &l_46) == &l_46)), p_2811->g_710)) | p_27) & p_26), l_980, p_2811) , 2UL) && (*l_46)), l_1481)) , &l_1481) == (void*)0) , p_27) == 9L))), p_26, p_2811->g_132[0][5], p_27, (*l_46), p_2811), &l_46, l_1481, p_2811->g_131, p_2811->g_1072[1][0][6], p_2811)))), 0x5565L)) == 0x6570244AL), l_1481)) != l_1481)));
                if ((**p_2811->g_1165))
                    break;
            }
            if (p_26)
                break;
            for (p_2811->g_921 = 0; (p_2811->g_921 >= (-30)); p_2811->g_921--)
            { /* block id: 999 */
                int32_t *l_1829 = &p_2811->g_1089;
                uint16_t **l_1845[10][9] = {{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495,&p_2811->g_495}};
                int i, j;
                for (p_2811->g_540 = 16; (p_2811->g_540 != 27); p_2811->g_540 = safe_add_func_uint64_t_u_u(p_2811->g_540, 9))
                { /* block id: 1002 */
                    return (**p_2811->g_765);
                }
                if (((*l_46) = (p_27 & (-7L))))
                { /* block id: 1006 */
                    int32_t *l_1830 = &l_979;
                    l_1826--;
                    for (p_2811->g_1388 = 6; (p_2811->g_1388 >= 1); p_2811->g_1388 -= 1)
                    { /* block id: 1010 */
                        l_1830 = l_1829;
                    }
                }
                else
                { /* block id: 1013 */
                    for (l_979 = 0; l_979 < 2; l_979 += 1)
                    {
                        for (p_2811->g_126 = 0; p_2811->g_126 < 6; p_2811->g_126 += 1)
                        {
                            for (p_2811->g_1676 = 0; p_2811->g_1676 < 2; p_2811->g_1676 += 1)
                            {
                                p_2811->g_90[l_979][p_2811->g_126][p_2811->g_1676] = 0x39F7L;
                            }
                        }
                    }
                }
                for (p_2811->g_1191 = 3; (p_2811->g_1191 >= 0); p_2811->g_1191 -= 1)
                { /* block id: 1018 */
                    uint64_t **l_1836 = (void*)0;
                    uint64_t ***l_1835 = &l_1836;
                    uint64_t *l_1839 = (void*)0;
                    uint64_t *l_1840 = &p_2811->g_916;
                    uint64_t *l_1842[2];
                    int32_t l_1844 = 0x75C7D8F0L;
                    int32_t l_1846 = 0x15ED8894L;
                    int32_t l_1848 = 0L;
                    uint64_t l_1850[9][4][7] = {{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}},{{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL},{0xF9097D7D097A3750L,0x35AF4ADBF3550B6FL,0x0CA3AF23499DA0D3L,0xAD16F7DB91C9C520L,18446744073709551615UL,18446744073709551608UL,0x6089F9D5E50BEA9AL}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1842[i] = &p_2811->g_1843;
                    (*p_2811->g_1165) = ((l_1844 &= (p_2811->g_1841 ^= (((((p_2811->g_1745[p_2811->g_1191] < 0x842466DB6BAE7538L) || (((++(*p_2811->g_1604)) | (!(p_2811->g_1745[p_2811->g_1191] > p_27))) && p_26)) >= (p_27 == (p_26 > 4294967290UL))) ^ (safe_sub_func_uint64_t_u_u(((*l_1840) = (l_1835 == p_2811->g_1837[0][0][1])), p_27))) ^ p_2811->g_193[3][1][5]))) , l_46);
                    (*p_2811->g_991) = l_1845[5][0];
                    ++l_1850[8][1][2];
                }
            }
        }
        else
        { /* block id: 1028 */
            int16_t l_1853 = 0x5198L;
            (*l_46) = l_1853;
        }
        return p_27;
    }
    for (p_2811->g_202 = (-22); (p_2811->g_202 <= 53); p_2811->g_202 = safe_add_func_uint8_t_u_u(p_2811->g_202, 1))
    { /* block id: 1035 */
        int32_t l_1858 = 9L;
        int8_t ****l_1869 = &p_2811->g_1331[2];
        int32_t l_1880 = 0x6CF3DB03L;
        int32_t l_1881[3][6] = {{0x459E8D50L,0x4C4D5C45L,(-1L),0x4C4D5C45L,0x459E8D50L,0x459E8D50L},{0x459E8D50L,0x4C4D5C45L,(-1L),0x4C4D5C45L,0x459E8D50L,0x459E8D50L},{0x459E8D50L,0x4C4D5C45L,(-1L),0x4C4D5C45L,0x459E8D50L,0x459E8D50L}};
        int32_t **l_1888[10] = {&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376,&p_2811->g_1376};
        int32_t *l_1892 = &p_2811->g_710;
        uint8_t l_1986 = 5UL;
        uint16_t l_1989 = 0x170AL;
        int i, j;
        if ((((!((p_26 < (*l_46)) > 1L)) , &p_2811->g_199[5]) == &p_2811->g_149))
        { /* block id: 1036 */
            uint32_t *l_1859 = &p_2811->g_1841;
            int32_t l_1862 = 1L;
            int32_t l_1863 = 0x23A9D1CFL;
            l_1863 &= ((safe_div_func_uint64_t_u_u(((*p_2811->g_1604) ^= (*l_46)), p_26)) , ((*l_46) , (((--(*l_1859)) & (l_1862 |= p_27)) && l_1862)));
        }
        else
        { /* block id: 1041 */
            int8_t ****l_1866 = &p_2811->g_1331[7];
            int8_t *****l_1867[3];
            int32_t l_1872 = 0x5B6A7AE8L;
            uint32_t l_1873 = 4294967295UL;
            int64_t *l_1874 = &p_2811->g_199[5];
            int8_t l_1882 = 0L;
            uint16_t ***l_1885 = &p_2811->g_494;
            int32_t **l_1889 = &l_46;
            uint64_t **l_1947 = (void*)0;
            uint32_t l_1985 = 5UL;
            int64_t l_1988 = 0x49FFA34A9EDB9B1DL;
            int i;
            for (i = 0; i < 3; i++)
                l_1867[i] = (void*)0;
            (*p_2811->g_1165) = &l_1847;
            (*l_1889) = (((((*l_46) ^= 0x21327254L) || ((*l_46) = (*l_46))) , (safe_sub_func_uint8_t_u_u((l_1885 != (((*p_2811->g_363)--) , l_1885)), ((void*)0 == l_1888[8])))) , func_53((l_1872 |= ((*p_2811->g_427) = p_26)), p_2811->g_1745[1], l_1889, (**l_1889), (*l_46), p_2811));
            for (p_2811->g_921 = 0; (p_2811->g_921 <= (-13)); --p_2811->g_921)
            { /* block id: 1058 */
                int32_t l_1893 = 0x39305117L;
                uint64_t ****l_1906 = &l_1903[4][1];
                int32_t l_1924[3][5][3];
                int32_t l_1950[5] = {0x412408B3L,0x412408B3L,0x412408B3L,0x412408B3L,0x412408B3L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1924[i][j][k] = 0L;
                    }
                }
                l_1892 = ((*l_1889) = (*p_2811->g_1165));
                for (p_2811->g_277 = 4; (p_2811->g_277 >= 0); p_2811->g_277 -= 1)
                { /* block id: 1063 */
                    int i, j;
                    for (p_2811->g_33 = 0; (p_2811->g_33 <= 8); p_2811->g_33 += 1)
                    { /* block id: 1066 */
                        return p_26;
                    }
                    if (l_1893)
                        break;
                }
                for (p_2811->g_36 = 0; (p_2811->g_36 > 22); ++p_2811->g_36)
                { /* block id: 1073 */
                    int16_t l_1905 = 7L;
                    uint16_t l_1948 = 0UL;
                    int32_t l_1949[7][4] = {{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L},{5L,5L,0x4C66F1EAL,0x05267706L}};
                    int16_t l_1984[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1984[i] = 1L;
                    if ((*p_2811->g_1483))
                    { /* block id: 1074 */
                        uint64_t *****l_1907 = (void*)0;
                        uint64_t *****l_1908 = (void*)0;
                        uint64_t *****l_1909 = &l_1906;
                        uint32_t *l_1922 = &l_1873;
                        int32_t l_1923 = 0L;
                        uint32_t *l_1925 = (void*)0;
                        uint32_t *l_1926 = &p_2811->g_1676;
                        (*l_46) = ((safe_lshift_func_uint8_t_u_s(l_1893, (safe_sub_func_uint32_t_u_u((((*l_1926) &= ((safe_add_func_int64_t_s_s(((l_1924[2][3][2] = (((***l_1885) = ((l_1902 == (l_1905 , ((*l_1909) = l_1906))) != (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(p_26, ((safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(p_27, ((((((*p_2811->g_133) && (safe_mul_func_int8_t_s_s((((((*l_1922) = ((**l_1889) < ((!2L) , p_27))) , p_26) < (**p_2811->g_1167)) , p_26), l_1923))) , 0x19C44D4EL) > 1L) ^ (**p_2811->g_642)) , (*l_46)))), (*p_2811->g_495))) && 0xBBBCL) >= p_26) < (*l_1892)), l_1923)) == 0x67E784B5L))), p_26)))) == l_1905)) != 0x75L), p_2811->g_76)) < (*l_1892))) < p_26), l_1905)))) == l_1905);
                        if (p_2811->g_76)
                            goto lbl_1927;
                        return (*p_2811->g_1604);
                    }
                    else
                    { /* block id: 1083 */
                        int64_t l_1936[7][2][4] = {{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}},{{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)},{(-6L),(-9L),0x06E89BE308DDD7ADL,(-9L)}}};
                        uint64_t *l_1937 = &p_2811->g_1843;
                        uint32_t *l_1977[3][1];
                        int32_t *l_1990 = &p_2811->g_710;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1977[i][j] = &p_2811->g_1841;
                        }
                        l_1950[3] &= ((l_1949[4][0] = ((safe_rshift_func_int16_t_s_s((((*p_2811->g_427) = (safe_sub_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(0x56E2L, (safe_lshift_func_int16_t_s_u((((*l_46) = (((*p_2811->g_1604) || (p_26 == ((l_1936[4][0][1] , (**p_2811->g_451)) != l_1892))) , 1L)) > (0x557951F1B003BA29L && (((++(*l_1937)) != (((((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((!((l_1893 = (safe_unary_minus_func_int32_t_s(p_26))) != 0UL)), p_27)), 0x06L)) , p_26), p_27)) , l_1936[4][0][1]) , (*p_2811->g_1314)) , (void*)0) != l_1947)) , l_1924[2][1][2]))), 0)))) | l_1905) < p_27), p_26))) | l_1948), p_27)) , (*l_1892))) < (*p_2811->g_1168));
                        (*l_1990) |= (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(0x14EDL, ((((p_27 != (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((((l_1950[3] = 0x44L) != ((l_1987 |= (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((**l_1889) <= ((*l_46) & (safe_lshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((((safe_add_func_int64_t_s_s((!(safe_lshift_func_int8_t_s_u(((l_1949[0][3] |= l_1936[4][0][1]) > (safe_lshift_func_uint16_t_u_s((***p_2811->g_991), (safe_sub_func_uint16_t_u_u((**p_2811->g_494), ((safe_div_func_int8_t_s_s((((p_26 , (void*)0) == (void*)0) != l_1984[1]), p_27)) && l_1985)))))), p_27))), (**p_2811->g_765))) || p_27) != p_27), 0x726E94FAL)) > l_1986) && p_2811->g_925[0][0][0]), 2)))) <= p_26) && 252UL), 4294967292UL)), (*p_2811->g_427))), p_2811->g_1388))) <= l_1924[2][3][2])) & (*p_2811->g_133)), l_1988)), p_27))) != 0x065A8C89L) & 0UL) | p_26))) < (*p_2811->g_1604)) > (*p_2811->g_1604)), l_1989)), (**l_1889))), 0x6C31A1128F678E9AL));
                    }
                }
                (*p_2811->g_111) = (void*)0;
            }
        }
    }
    for (p_2811->g_36 = 0; (p_2811->g_36 <= 3); p_2811->g_36 += 1)
    { /* block id: 1102 */
        int32_t l_2006 = 0x6ADF9545L;
        uint16_t *l_2011 = (void*)0;
        int16_t l_2028[5][3] = {{0x0CCBL,(-1L),0x3375L},{0x0CCBL,(-1L),0x3375L},{0x0CCBL,(-1L),0x3375L},{0x0CCBL,(-1L),0x3375L},{0x0CCBL,(-1L),0x3375L}};
        uint32_t l_2039 = 0xE60D97CCL;
        int32_t l_2058 = 5L;
        int32_t l_2060 = (-5L);
        int32_t l_2062 = (-1L);
        uint32_t ****l_2079 = &p_2811->g_1734;
        int32_t *l_2092[10][9] = {{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131},{&l_1847,&p_2811->g_84,&l_2063,(void*)0,&l_2063,&p_2811->g_84,&l_1847,&l_2065,&p_2811->g_131}};
        int32_t l_2134 = 3L;
        uint32_t l_2165 = 0xB2483573L;
        int32_t *l_2296 = (void*)0;
        int8_t l_2300[1][1][4];
        uint64_t ****l_2356 = &l_1903[2][0];
        int16_t l_2419 = 0x0A9FL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_2300[i][j][k] = 2L;
            }
        }
        if (p_2811->g_1745[p_2811->g_36])
            break;
        for (p_2811->g_710 = 8; (p_2811->g_710 >= 3); p_2811->g_710 -= 1)
        { /* block id: 1106 */
            int32_t **l_1991[7];
            int16_t ***l_2014 = (void*)0;
            int32_t ***l_2016 = &l_2015;
            uint64_t **l_2098 = &p_2811->g_661;
            uint32_t l_2106 = 0xB85B4EB1L;
            int32_t l_2107 = 0x2DFEF78AL;
            uint16_t *l_2220 = &p_2811->g_247;
            int32_t *l_2249[10][8] = {{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388},{&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388,&p_2811->g_1388}};
            uint8_t ***l_2270 = &p_2811->g_1167;
            uint32_t *****l_2316 = (void*)0;
            int32_t l_2338[2][8][5] = {{{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L}},{{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L},{0x4E681E97L,0x4E681E97L,1L,0x3A62748FL,0x6E9EC5B6L}}};
            int16_t l_2359 = 0x5420L;
            int8_t l_2402 = 3L;
            int8_t l_2405 = (-1L);
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1991[i] = (void*)0;
            l_46 = &l_1987;
            for (p_2811->g_195 = 0; (p_2811->g_195 <= 8); p_2811->g_195 += 1)
            { /* block id: 1110 */
                uint32_t *l_2012 = &l_1992;
                int32_t l_2013 = 1L;
                int i;
                (*l_46) = p_2811->g_1745[p_2811->g_36];
                for (p_2811->g_540 = 0; (p_2811->g_540 <= 8); p_2811->g_540 += 1)
                { /* block id: 1114 */
                    return l_1992;
                }
                (*l_46) = (p_2811->g_1993 != p_26);
                l_2013 = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((((*l_46) , (((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((((p_2811->g_1745[p_2811->g_36] ^ (!65535UL)) > ((((((safe_sub_func_uint64_t_u_u((l_2006 < (safe_mod_func_uint32_t_u_u((0x955C0660L < (((*l_46) = (-4L)) | ((*l_2012) = (((*p_2811->g_1168) = 0x52L) < ((safe_rshift_func_int16_t_s_s(((p_27 , l_2011) != (void*)0), p_27)) <= 0x94L))))), 4294967295UL))), p_2811->g_925[0][0][0])) ^ p_27) == p_27) && p_27) == l_2013) >= 2L)) | l_2013) , l_2014) == &p_2811->g_322), l_2006)), p_27)) && p_26) == l_2006)) != p_26) != l_2013) != l_2013), p_26)), l_2013)) == p_26), 0x1527L));
            }
        }
        l_2419 |= (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(((((*l_46) , (*p_2811->g_766)) <= (0xC6529018L | (((safe_rshift_func_uint16_t_u_s(p_26, (*p_2811->g_427))) >= ((*p_2811->g_1604) ^ (~(!(((0x246DFE87L >= (*l_46)) >= (((*l_2356) = (*l_1902)) == l_2418)) , 1L))))) , p_27))) , 0x1640L), p_26)) && 6L) != (*p_2811->g_1604)), p_27)), p_26));
        for (p_2811->g_76 = 4; (p_2811->g_76 >= 0); p_2811->g_76 -= 1)
        { /* block id: 1315 */
            int i, j;
            (*p_2811->g_111) = (void*)0;
            if (p_26)
                continue;
            (*p_2811->g_2421) = (*p_2811->g_1165);
        }
    }
    return (*p_2811->g_766);
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_202 p_2811->g_1089 p_2811->g_916 p_2811->g_925 p_2811->g_133 p_2811->g_540 p_2811->g_277 p_2811->g_36 p_2811->g_149 p_2811->g_1168 p_2811->g_427 p_2811->g_90 p_2811->g_494 p_2811->g_495 p_2811->g_158 p_2811->g_643 p_2811->g_991 p_2811->g_642 p_2811->g_132 p_2811->g_1132 p_2811->g_710 p_2811->g_128 p_2811->g_326 p_2811->g_322 p_2811->g_323 p_2811->g_324 p_2811->g_1604 p_2811->g_279 p_2811->g_1167 p_2811->g_1745 p_2811->g_921 p_2811->g_1072
 * writes: p_2811->g_202 p_2811->g_1089 p_2811->g_916 p_2811->g_813 p_2811->g_710 p_2811->g_540 p_2811->g_277 p_2811->g_158 p_2811->g_247 p_2811->g_193 p_2811->g_199 p_2811->g_128 p_2811->g_190 p_2811->g_1734 p_2811->g_1745 p_2811->g_921 p_2811->g_279
 */
int32_t * func_47(int32_t * p_48, int32_t ** p_49, int8_t  p_50, uint32_t  p_51, uint64_t  p_52, struct S0 * p_2811)
{ /* block id: 821 */
    uint64_t ***l_1502 = &p_2811->g_814;
    int32_t l_1504[3][9][4] = {{{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L}},{{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L}},{{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L}}};
    int32_t l_1542 = (-7L);
    uint16_t *l_1554 = &p_2811->g_193[3][0][4];
    int64_t l_1644 = 0x7839C60E34959E16L;
    int32_t l_1645 = (-1L);
    int64_t l_1653[6][6][7] = {{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}},{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}},{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}},{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}},{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}},{{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L},{0x4F07D35A2397BF40L,0x4F07D35A2397BF40L,0x027B2333BA92DAEFL,5L,0x5B79F38F035FDE31L,2L,0x516295BB7906D313L}}};
    int16_t l_1665 = (-4L);
    int8_t ***l_1667 = &p_2811->g_1332;
    uint64_t **l_1713 = (void*)0;
    uint64_t ***l_1712 = &l_1713;
    int64_t l_1786 = 1L;
    uint32_t ****l_1795 = &p_2811->g_1734;
    int32_t l_1804 = 0L;
    int32_t *l_1820 = &l_1542;
    int i, j, k;
    for (p_51 = 0; (p_51 <= 0); p_51 += 1)
    { /* block id: 824 */
        uint32_t l_1485 = 0x6C3F248AL;
        int32_t l_1524 = (-8L);
        int32_t l_1540 = (-3L);
        uint8_t **l_1552 = &p_2811->g_1168;
        int32_t ***l_1566 = &p_2811->g_132[0][5];
        uint32_t ***l_1571 = &p_2811->g_839[4];
        int8_t l_1573 = 0x57L;
        int32_t l_1581 = 1L;
        int32_t l_1582 = 0x593B68F4L;
        int32_t l_1583 = 5L;
        int32_t l_1584[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        uint16_t **l_1609 = (void*)0;
        uint64_t l_1674 = 0x83ECBFDC7B5A0AF0L;
        int32_t l_1679 = 0x1906D552L;
        int16_t l_1743[3][5][2] = {{{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)}},{{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)}},{{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)},{1L,(-7L)}}};
        int i, j, k;
        for (p_2811->g_202 = 0; (p_2811->g_202 <= 0); p_2811->g_202 += 1)
        { /* block id: 827 */
            uint64_t l_1505 = 0xC19926A1146026ABL;
            int32_t l_1506 = 5L;
            int32_t l_1526 = 0x7AF63624L;
            (*p_48) ^= l_1485;
            for (p_2811->g_916 = 0; (p_2811->g_916 <= 1); p_2811->g_916 += 1)
            { /* block id: 831 */
                uint32_t *l_1492 = (void*)0;
                int32_t l_1493 = 0L;
                int8_t l_1496 = (-9L);
                int16_t *l_1501[9] = {&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1],&p_2811->g_90[1][3][1]};
                uint64_t ****l_1503 = &p_2811->g_813;
                int32_t l_1520 = 0L;
                int32_t l_1521 = 0x6353F836L;
                int32_t l_1522 = 0x3983E1DBL;
                int32_t l_1523 = 0x1E12BB31L;
                int32_t l_1525[4][10] = {{0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L},{0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L},{0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L},{0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L,0L,0x74E94394L,0x74E94394L,0L}};
                uint32_t l_1527 = 0x9E26837BL;
                int i, j, k;
                (*p_2811->g_133) = (safe_rshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_1493 |= (safe_div_func_uint8_t_u_u(255UL, p_2811->g_925[(p_2811->g_916 + 8)][p_2811->g_202][p_2811->g_202]))), ((*p_48) = p_2811->g_925[(p_2811->g_916 + 3)][p_2811->g_202][p_2811->g_202]))) != p_50) , ((safe_mul_func_int16_t_s_s(l_1496, (safe_sub_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((((((void*)0 == l_1501[8]) , ((*l_1503) = l_1502)) != (void*)0) && l_1485), l_1485)) == l_1504[0][2][3]) && 255UL), l_1505)))) & l_1504[0][2][3])), 12));
                for (p_2811->g_540 = 0; (p_2811->g_540 <= 0); p_2811->g_540 += 1)
                { /* block id: 838 */
                    return (*p_49);
                }
                for (p_2811->g_277 = 0; (p_2811->g_277 <= 4); p_2811->g_277 += 1)
                { /* block id: 843 */
                    int32_t *l_1507 = &p_2811->g_710;
                    int32_t l_1508 = (-1L);
                    int32_t *l_1509 = &l_1493;
                    int32_t *l_1510 = &p_2811->g_131;
                    int32_t *l_1511 = &p_2811->g_131;
                    int32_t *l_1512 = &p_2811->g_921;
                    int32_t *l_1513 = &l_1504[0][2][3];
                    int32_t *l_1514 = &p_2811->g_131;
                    int32_t *l_1515 = &p_2811->g_131;
                    int32_t *l_1516 = &l_1504[0][2][3];
                    int32_t *l_1517 = &p_2811->g_1089;
                    int32_t *l_1518 = &p_2811->g_84;
                    int32_t *l_1519[10][2] = {{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131},{&p_2811->g_710,&p_2811->g_131}};
                    int i, j;
                    l_1527--;
                    if (l_1527)
                        break;
                }
            }
        }
        if ((**p_49))
        { /* block id: 849 */
            uint64_t l_1537 = 18446744073709551612UL;
            uint16_t *l_1538 = (void*)0;
            uint16_t *l_1539 = &p_2811->g_247;
            uint16_t *l_1541 = &p_2811->g_193[3][0][4];
            uint8_t **l_1553 = &p_2811->g_1168;
            int32_t ***l_1565 = &p_2811->g_132[1][3];
            if ((safe_sub_func_uint16_t_u_u((((l_1504[0][2][3] , (safe_div_func_uint8_t_u_u(0x88L, (safe_unary_minus_func_int16_t_s((((l_1524 = p_52) >= p_2811->g_149) != (+((((l_1542 &= (((p_52 || (*p_2811->g_1168)) && (*p_2811->g_427)) | (((++(**p_2811->g_494)) , ((*p_48) = l_1504[0][4][2])) > (((*l_1541) = (l_1540 = ((*l_1539) = (l_1537 , l_1537)))) >= l_1485)))) , p_52) <= p_51) || (*p_2811->g_643))))))))) , 0x0C530E0E945F009BL) >= 18446744073709551612UL), l_1485)))
            { /* block id: 857 */
                int8_t l_1543 = 3L;
                if (l_1543)
                    break;
                (*p_2811->g_133) = ((*p_48) |= l_1537);
                if ((*p_48))
                    break;
            }
            else
            { /* block id: 862 */
                uint16_t l_1544 = 65535UL;
                int64_t *l_1549 = &p_2811->g_199[5];
                uint32_t ****l_1572 = &l_1571;
                (*p_48) = (l_1544 || 0L);
                (*p_48) ^= (safe_mod_func_uint8_t_u_u((((((*l_1549) = ((safe_div_func_uint32_t_u_u(p_50, l_1485)) < (***p_2811->g_991))) != ((p_51 || (0x643481D98DC2B453L | (safe_sub_func_int16_t_s_s(((l_1552 != l_1553) <= p_52), (((l_1554 == l_1541) || p_51) <= (**p_2811->g_642)))))) , 0x3B9B638C7733B144L)) & 0x70CB49809B7B78D4L) && l_1504[2][6][3]), 1L));
                l_1573 ^= (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((l_1542 ^= (((safe_lshift_func_uint16_t_u_u((((**p_2811->g_494) = ((safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((l_1565 = &p_2811->g_132[2][0]) == l_1566), 2)) , ((((p_52 = (p_51 || (((***l_1565) = 0x3FAE0E6BF7BFB765L) ^ (safe_rshift_func_int8_t_s_u(7L, (**p_2811->g_642)))))) < (((((safe_add_func_int64_t_s_s((((*l_1572) = l_1571) == &p_2811->g_839[2]), 0L)) != 253UL) > 0UL) & 65535UL) , 0xA828B2ABE1F9B217L)) != p_50) <= p_50)) || l_1544), l_1544)) != p_51)) >= p_51), 0)) | (*p_48)) , l_1544)) , 0x029C01C358301127L) | p_50), p_50)), p_50));
            }
        }
        else
        { /* block id: 874 */
            int32_t *l_1574 = &l_1542;
            int32_t *l_1575 = &l_1504[0][2][3];
            int32_t *l_1576 = &l_1542;
            int32_t *l_1577 = (void*)0;
            int32_t *l_1578 = &l_1542;
            int32_t l_1579[4][9][7] = {{{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L}},{{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L}},{{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L}},{{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L},{8L,8L,8L,8L,0x1F1E98BDL,0L,0x42C1A209L}}};
            int32_t *l_1580[4][7][3] = {{{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0}},{{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0}},{{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0}},{{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0},{&l_1504[0][8][0],(void*)0,(void*)0}}};
            int32_t l_1585 = 0x2E58FA5BL;
            uint32_t l_1586 = 5UL;
            uint64_t ****l_1595 = &p_2811->g_813;
            int8_t ****l_1600 = &p_2811->g_1331[8];
            int i, j, k;
            l_1586--;
            (***l_1566) = (((+0x345A7522L) ^ ((*l_1578) = (((-1L) ^ ((safe_sub_func_int16_t_s_s((((**p_2811->g_1132) <= (*l_1578)) & (safe_rshift_func_uint8_t_u_u((((((*l_1576) , (((safe_add_func_int32_t_s_s((!((*p_48) = 0x11B752E5L)), (l_1595 != (((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((l_1600 != (void*)0) > 4294967295UL) , 0L) ^ l_1504[0][2][3]), 0x465AL)), (*p_2811->g_1168))) , (-2L)) , &l_1502)))) > 0xA8AF62E0L) & (**p_2811->g_494))) != 255UL) >= p_52) , 0x40L), l_1542))), 0L)) , l_1542)) , l_1504[0][3][2]))) < l_1504[1][1][0]);
        }
        for (p_2811->g_916 = 0; (p_2811->g_916 <= 1); p_2811->g_916 += 1)
        { /* block id: 882 */
            uint32_t l_1622 = 4294967294UL;
            int32_t l_1628 = (-2L);
            int32_t l_1631[3][7][9] = {{{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L}},{{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L}},{{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L},{0x05CF5BBEL,0x254B2426L,1L,0L,(-1L),0x01923F81L,(-5L),0x3F6B3242L,0x254B2426L}}};
            int32_t l_1642 = 0x665507FDL;
            uint8_t l_1648 = 0x7AL;
            uint64_t *l_1699 = &p_2811->g_279;
            uint64_t **l_1711 = (void*)0;
            uint64_t ***l_1710 = &l_1711;
            uint32_t ***l_1733 = &p_2811->g_839[4];
            int i, j, k;
            for (p_2811->g_128 = 0; (p_2811->g_128 <= 0); p_2811->g_128 += 1)
            { /* block id: 885 */
                uint32_t l_1623 = 4294967294UL;
                int32_t l_1629 = (-1L);
                int32_t l_1630 = (-2L);
                int32_t l_1633 = 0L;
                int32_t l_1635 = 0x1C3246B8L;
                int32_t l_1636[4];
                int8_t l_1639 = 1L;
                uint64_t ****l_1680[5];
                uint32_t l_1717[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1636[i] = 1L;
                for (i = 0; i < 5; i++)
                    l_1680[i] = (void*)0;
                for (i = 0; i < 4; i++)
                    l_1717[i] = 0x14B160F5L;
                for (l_1581 = 0; (l_1581 >= 0); l_1581 -= 1)
                { /* block id: 888 */
                    int64_t *l_1610 = &p_2811->g_199[4];
                    int32_t l_1632 = 4L;
                    int32_t l_1634 = 4L;
                    int32_t l_1637 = 0x307F558AL;
                    int32_t l_1638 = 0x2A700493L;
                    int32_t l_1640 = (-1L);
                    int32_t l_1641 = 1L;
                    int32_t l_1643 = 0x3B7DD796L;
                    int32_t l_1646 = (-1L);
                    int32_t l_1647[10][4][3] = {{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}},{{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L},{3L,0x0608F720L,0x451D7946L}}};
                    uint32_t *l_1654 = &p_2811->g_126;
                    int8_t l_1664 = 0x22L;
                    int8_t ****l_1666 = &p_2811->g_1331[2];
                    uint32_t *l_1675 = &p_2811->g_1676;
                    int i, j, k;
                    for (p_2811->g_190 = 9; (p_2811->g_190 >= 2); p_2811->g_190 -= 1)
                    { /* block id: 891 */
                        int32_t *l_1601[10] = {&p_2811->g_76,&l_1584[6],&p_2811->g_921,&l_1584[6],&p_2811->g_76,&p_2811->g_76,&l_1584[6],&p_2811->g_921,&l_1584[6],&p_2811->g_76};
                        int i;
                        return (**l_1566);
                    }
                }
                for (l_1674 = 0; (l_1674 <= 0); l_1674 += 1)
                { /* block id: 934 */
                    uint64_t l_1735 = 0x86DA1346D8427192L;
                    (*p_2811->g_133) ^= (((safe_div_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((~(***p_2811->g_326)))) , l_1633) | (safe_mul_func_uint8_t_u_u((*p_2811->g_1168), p_50))), (((l_1636[1] = (safe_rshift_func_int16_t_s_s(p_50, 0))) >= (safe_div_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((*p_2811->g_1604), (safe_div_func_int8_t_s_s(0x11L, ((((p_2811->g_1734 = l_1733) == &p_2811->g_839[4]) || l_1504[0][2][3]) , (**p_2811->g_1167)))))) | 1UL), 0xC2CA7908L))) || 6L))) ^ l_1622) , (*p_48));
                    if ((**p_2811->g_1132))
                        continue;
                    if (l_1735)
                        continue;
                }
            }
            for (l_1674 = 0; (l_1674 <= 0); l_1674 += 1)
            { /* block id: 944 */
                uint8_t l_1736 = 0x7DL;
                int32_t *l_1739 = (void*)0;
                int32_t *l_1740 = &l_1583;
                int32_t *l_1741 = &l_1504[0][2][3];
                int32_t *l_1742[3];
                int16_t l_1744 = 0x244BL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1742[i] = (void*)0;
                l_1736++;
                p_2811->g_1745[3]--;
            }
        }
    }
    for (p_2811->g_921 = 5; (p_2811->g_921 >= 0); p_2811->g_921 -= 1)
    { /* block id: 952 */
        uint64_t l_1750[2];
        int8_t *l_1753[7] = {&p_2811->g_128,&p_2811->g_128,&p_2811->g_128,&p_2811->g_128,&p_2811->g_128,&p_2811->g_128,&p_2811->g_128};
        int32_t l_1754 = (-9L);
        int16_t **l_1763 = &p_2811->g_427;
        uint16_t *l_1816 = &p_2811->g_247;
        int i;
        for (i = 0; i < 2; i++)
            l_1750[i] = 0x520AC3CF601E1BF5L;
        (*p_48) &= ((safe_mod_func_uint8_t_u_u(l_1750[0], ((*p_2811->g_133) , (safe_mod_func_int8_t_s_s((l_1754 = p_50), (((p_52 & 3UL) > l_1653[5][5][2]) && (l_1504[0][2][3] ^= 3L))))))) , 8L);
        for (p_50 = 1; (p_50 <= 5); p_50 += 1)
        { /* block id: 958 */
            int16_t **l_1764[7][4][9] = {{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}},{{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427},{&p_2811->g_427,&p_2811->g_427,(void*)0,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427,&p_2811->g_427}}};
            int8_t **l_1765 = &l_1753[1];
            int32_t l_1767 = 0L;
            int16_t ****l_1782 = (void*)0;
            int32_t l_1783 = (-1L);
            uint16_t ***l_1784 = &p_2811->g_494;
            int32_t l_1785 = (-1L);
            int i, j, k;
            for (p_52 = 0; (p_52 <= 4); p_52 += 1)
            { /* block id: 961 */
                int i, j, k;
                (*p_48) = p_2811->g_1072[p_50][(p_52 + 1)][p_2811->g_921];
            }
            (*p_2811->g_133) &= ((safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_1504[0][2][3] = (!((((l_1783 = ((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((((l_1767 = ((l_1763 != l_1764[4][2][4]) , ((((void*)0 != l_1765) & (*p_48)) != (safe_unary_minus_func_int16_t_s(l_1767))))) < (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((l_1542 = (***p_2811->g_991)), (safe_add_func_int8_t_s_s(((-4L) || (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(((((l_1782 == (void*)0) | 0x63669912L) , 0x21AB077A1BE45DDCL) , 0UL), p_51)) || l_1783), 0))), l_1750[0])))) , l_1750[0]) >= (*p_48)), p_50)) || 0x6DBB361E013B29D1L), l_1783)), p_51))) > 0x7D38A8C5L) <= l_1783) & p_50), 1L)) > 1L), l_1665)) , p_51)) , (void*)0) != l_1784) , 0L))), 0x1516L)) <= l_1645), l_1785)) && l_1786);
            for (p_2811->g_247 = 0; (p_2811->g_247 <= 5); p_2811->g_247 += 1)
            { /* block id: 971 */
                int i, j, k;
                l_1542 &= ((*p_48) = ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(p_2811->g_1072[p_50][p_50][p_50], ((safe_add_func_int32_t_s_s((*p_48), ((((safe_mul_func_int16_t_s_s(((void*)0 == l_1795), p_2811->g_1072[p_50][p_50][p_50])) & (safe_rshift_func_uint8_t_u_s((**p_2811->g_642), p_51))) >= (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1750[0], (+(p_52 , l_1785)))), l_1785)) , (*p_2811->g_1604)), l_1804))) <= p_50))) , p_52))) == (*p_2811->g_427)), (-8L))) && l_1786));
            }
            if ((*p_48))
                break;
            for (l_1786 = 5; (l_1786 >= 0); l_1786 -= 1)
            { /* block id: 978 */
                uint16_t l_1807 = 0x95FAL;
                int32_t l_1810 = 1L;
                uint16_t *l_1813 = &p_2811->g_193[4][0][0];
                for (p_2811->g_279 = 0; (p_2811->g_279 <= 5); p_2811->g_279 += 1)
                { /* block id: 981 */
                    uint16_t **l_1817 = &l_1554;
                    uint64_t ****l_1818 = &l_1712;
                    int32_t l_1819 = 0x53C37E97L;
                    (*p_48) = (((((safe_lshift_func_int8_t_s_u(((((((+(l_1807++)) != ((l_1810 | ((safe_div_func_int64_t_s_s((l_1813 == (*p_2811->g_494)), (((0x5F8D13F9L | (((*l_1817) = l_1816) == (void*)0)) , (((((~0x5BE2L) && (((*l_1818) = &l_1713) != &p_2811->g_256[5])) >= p_51) ^ (**p_2811->g_642)) || p_52)) && l_1786))) && 0x3630EA7F42EA82A7L)) != l_1819)) > p_51) , p_52) | l_1819) <= l_1750[0]), 6)) ^ p_51) < 0x6CL) < p_51) == (**p_2811->g_1167));
                }
            }
        }
    }
    return (*p_49);
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_133 p_2811->g_710 p_2811->g_1483 p_2811->g_36 p_2811->g_1089
 * writes: p_2811->g_710 p_2811->g_81 p_2811->g_36 p_2811->g_1089
 */
int32_t * func_53(int16_t  p_54, int64_t  p_55, int32_t ** p_56, uint64_t  p_57, uint32_t  p_58, struct S0 * p_2811)
{ /* block id: 817 */
    uint64_t l_1482 = 0UL;
    int32_t *l_1484 = &p_2811->g_1089;
    (*p_2811->g_1483) = ((**p_56) &= l_1482);
    return l_1484;
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_982 p_2811->g_710 p_2811->g_133 p_2811->g_126 p_2811->g_427 p_2811->g_90 p_2811->g_362 p_2811->g_363 p_2811->g_642 p_2811->g_643 p_2811->g_540 p_2811->g_149 p_2811->g_1114 p_2811->g_202 p_2811->g_839 p_2811->g_840 p_2811->g_1167 p_2811->g_1168 p_2811->g_813 p_2811->g_494 p_2811->g_495 p_2811->g_158 p_2811->g_451 p_2811->g_322 p_2811->g_323 p_2811->g_324
 * writes: p_2811->g_133 p_2811->g_989 p_2811->g_991 p_2811->g_710 p_2811->g_126 p_2811->g_1007 p_2811->g_925 p_2811->g_199 p_2811->g_90 p_2811->g_661 p_2811->g_149 p_2811->g_81 p_2811->g_76 p_2811->g_202 p_2811->g_84 p_2811->g_814
 */
uint32_t  func_63(int64_t  p_64, int32_t * p_65, struct S0 * p_2811)
{ /* block id: 541 */
    int32_t *l_981 = &p_2811->g_710;
    uint8_t l_983 = 1UL;
    uint16_t l_1040[8] = {0xF3B6L,0xF3B6L,0xF3B6L,0xF3B6L,0xF3B6L,0xF3B6L,0xF3B6L,0xF3B6L};
    uint8_t l_1041 = 0x47L;
    uint64_t *l_1060 = &p_2811->g_202;
    uint64_t **l_1087[6][5][1] = {{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}},{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}},{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}},{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}},{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}},{{&l_1060},{&l_1060},{&l_1060},{&l_1060},{&l_1060}}};
    uint64_t ***l_1086 = &l_1087[0][1][0];
    int32_t l_1097 = 0x079CCC0FL;
    uint32_t ***l_1110 = &p_2811->g_839[0];
    int32_t l_1139 = 1L;
    int32_t l_1141 = 9L;
    uint32_t l_1158[6][2] = {{4294967295UL,0x81BB49E8L},{4294967295UL,0x81BB49E8L},{4294967295UL,0x81BB49E8L},{4294967295UL,0x81BB49E8L},{4294967295UL,0x81BB49E8L},{4294967295UL,0x81BB49E8L}};
    uint64_t ***l_1206 = &l_1087[1][4][0];
    uint16_t **l_1228 = &p_2811->g_495;
    uint16_t **l_1231[8][8][4] = {{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}},{{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495},{&p_2811->g_495,&p_2811->g_495,(void*)0,&p_2811->g_495}}};
    int32_t l_1256 = 0x37E86C46L;
    int16_t *l_1260 = &p_2811->g_1191;
    uint8_t l_1281 = 249UL;
    uint32_t **l_1291 = (void*)0;
    uint32_t l_1315 = 0x6B28B21BL;
    int32_t l_1340 = 1L;
    int32_t l_1344 = 0x6C096B77L;
    int32_t l_1347 = 0x35F07FD9L;
    int32_t l_1352[2][1];
    int32_t **l_1397 = (void*)0;
    int8_t **l_1412[5] = {&p_2811->g_268[0][2],&p_2811->g_268[0][2],&p_2811->g_268[0][2],&p_2811->g_268[0][2],&p_2811->g_268[0][2]};
    uint64_t **l_1458 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1352[i][j] = 6L;
    }
    (*p_2811->g_982) = l_981;
    if (l_983)
    { /* block id: 543 */
        uint32_t l_984 = 0xC07B4059L;
        uint16_t ***l_990 = &p_2811->g_494;
        uint8_t *l_1000[5][3][2] = {{{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983}},{{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983}},{{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983}},{{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983}},{{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983},{&p_2811->g_540,&l_983}}};
        uint8_t **l_999 = &l_1000[1][0][1];
        int16_t ***l_1005 = &p_2811->g_426;
        uint32_t *l_1014 = &p_2811->g_195;
        int8_t *l_1026 = &p_2811->g_925[5][0][0];
        int i, j, k;
        (*p_65) &= ((p_64 , ((*l_981) ^ l_984)) > ((0xE3L <= (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((*l_981), (((*l_981) != p_64) ^ p_64))) , 0x3CCFL), p_64))) ^ p_64));
        (*p_2811->g_133) &= ((p_2811->g_989 = &p_2811->g_494) == (p_2811->g_991 = l_990));
        for (p_2811->g_126 = 0; (p_2811->g_126 > 34); p_2811->g_126 = safe_add_func_uint8_t_u_u(p_2811->g_126, 7))
        { /* block id: 550 */
            int16_t ****l_1006[1];
            uint32_t *l_1013 = &p_2811->g_195;
            uint32_t **l_1012[4] = {&l_1013,&l_1013,&l_1013,&l_1013};
            int32_t l_1015 = 0L;
            int8_t *l_1016 = &p_2811->g_925[0][0][0];
            int64_t *l_1017 = &p_2811->g_199[4];
            int i;
            for (i = 0; i < 1; i++)
                l_1006[i] = &l_1005;
            (*p_2811->g_133) |= ((1L >= ((l_1015 = ((*p_2811->g_427) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((&p_2811->g_643 != l_999))), (((*l_1017) = (safe_mod_func_int16_t_s_s((!(*p_2811->g_427)), (safe_rshift_func_uint16_t_u_u((0x61899B169410868EL && ((p_2811->g_1007 = l_1005) != (((*l_1016) = ((!(safe_sub_func_int32_t_s_s(1L, (safe_div_func_uint8_t_u_u(((((*p_2811->g_362) != (l_1014 = l_981)) , 4294967295UL) && 0x4066B23AL), 5UL))))) || l_1015)) , (void*)0))), 3))))) | p_64))), p_64)))) == 65530UL)) >= l_984);
            return (*l_981);
        }
        (*p_2811->g_133) = (safe_rshift_func_int8_t_s_u((*l_981), (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_1026) = (&p_64 == (void*)0)), (+(p_64 , (l_984 >= (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((253UL <= 0xF2L) , ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((1UL == (safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_984)), (*l_981))) , 0x4A2645812D0569A1L) , 0UL), l_1040[1]))) | l_984), l_984)), p_64)) ^ (**p_2811->g_642))) == l_984), p_64)) != 0UL), (*l_981)))))))), l_1041)), 0xC9BCL))));
    }
    else
    { /* block id: 562 */
        uint64_t *l_1046 = &p_2811->g_202;
        uint64_t **l_1047[9][8][3] = {{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}},{{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661},{&l_1046,(void*)0,&p_2811->g_661}}};
        int32_t l_1052 = (-1L);
        int32_t l_1061[10][10] = {{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL},{(-1L),(-3L),0L,0x35DE334AL,0x017A6BBBL,0x39BAD14CL,(-9L),0x69F9BAE2L,(-9L),0x39BAD14CL}};
        int32_t l_1062 = 0x3F23DAA9L;
        uint32_t *l_1113 = &p_2811->g_195;
        uint8_t l_1125 = 0x27L;
        uint32_t l_1142 = 1UL;
        int32_t *l_1161[3];
        uint8_t l_1163 = 0UL;
        uint32_t l_1210[8][8][4] = {{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}},{{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL},{0xE985AE06L,0x8CF70EC2L,0x23C43ACEL,4294967295UL}}};
        int8_t *l_1219 = (void*)0;
        uint16_t **l_1229 = &p_2811->g_495;
        int16_t **l_1270 = &l_1260;
        uint32_t **l_1279[7][7] = {{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840},{&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840}};
        int8_t l_1353 = 8L;
        int8_t ****l_1374 = (void*)0;
        int32_t **l_1398 = &p_2811->g_1376;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1161[i] = (void*)0;
        l_1062 &= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_1052 = ((~((p_2811->g_661 = l_1046) == (p_2811->g_149 , (((*p_2811->g_427) , (((void*)0 == &p_2811->g_813) || (((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((l_1052 > (p_2811->g_126 , ((safe_mul_func_int16_t_s_s((*l_981), (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((*l_981) & l_1052))), 1UL)), l_1052)))) , p_64))) <= 0xBCACL), 0x5FA1A0CDL)) & 0x27AE397CL), l_1052)) | 0x07DDL) && 0L))) , l_1060)))) , l_1052)), l_1061[2][8])), p_64));
        for (p_2811->g_149 = 4; (p_2811->g_149 >= 0); p_2811->g_149 -= 1)
        { /* block id: 568 */
            int64_t l_1075[7] = {0x7113298167BCAD0EL,1L,0x7113298167BCAD0EL,0x7113298167BCAD0EL,1L,0x7113298167BCAD0EL,0x7113298167BCAD0EL};
            uint32_t *l_1162 = &p_2811->g_126;
            int32_t l_1164[4][1][8] = {{{0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L)}},{{0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L)}},{{0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L)}},{{0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L),0x34993D9CL,0x34993D9CL,(-4L)}}};
            uint8_t ***l_1169 = &p_2811->g_1167;
            int32_t **l_1172 = &l_981;
            int64_t *l_1173 = &p_2811->g_1106;
            int32_t l_1188 = 0x44D5B28CL;
            int16_t *l_1189 = (void*)0;
            int16_t *l_1190 = &p_2811->g_277;
            uint64_t ***l_1207 = (void*)0;
            uint64_t l_1246 = 18446744073709551607UL;
            uint64_t ***l_1255 = (void*)0;
            int16_t l_1277 = 1L;
            uint32_t **l_1290 = &l_1113;
            uint32_t l_1316 = 4294967294UL;
            uint8_t l_1339 = 0x84L;
            uint64_t l_1354 = 18446744073709551608UL;
            int8_t ****l_1373 = &p_2811->g_1331[7];
            int16_t ***l_1399 = (void*)0;
            int i, j, k;
            (*p_2811->g_133) = (safe_div_func_uint16_t_u_u(l_1061[1][2], p_64));
            for (p_2811->g_81 = 7; (p_2811->g_81 >= 0); p_2811->g_81 -= 1)
            { /* block id: 572 */
                uint32_t **l_1067 = &p_2811->g_840;
                int32_t l_1077 = 0x565762CAL;
                uint32_t ****l_1117 = &l_1110;
                int32_t l_1138 = 0x30234C80L;
                int32_t l_1140 = (-7L);
                (1 + 1);
            }
        }
        (*p_65) &= (*l_981);
        for (l_1256 = 0; (l_1256 < (-3)); l_1256 = safe_sub_func_int16_t_s_s(l_1256, 1))
        { /* block id: 770 */
            uint32_t ****l_1403 = (void*)0;
            uint32_t ***l_1405 = &l_1291;
            uint32_t ****l_1404 = &l_1405;
            (*l_981) = 0x6CE74FE2L;
            (*l_981) |= (((*l_1404) = &l_1291) != (p_64 , (void*)0));
            if ((*p_65))
                break;
        }
    }
    if (((*p_2811->g_1114) = (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((1L | ((safe_mul_func_uint16_t_u_u((l_1412[3] == (void*)0), (((void*)0 != &p_2811->g_643) != 0x54667E08DB254FEAL))) ^ ((safe_div_func_uint8_t_u_u(0xA3L, (l_1352[0][0] = (0x75D3A31A485DAF35L || ((((*l_981) = (((0x183EEF7194CFA92BL || (*l_981)) >= 0x5DL) & p_64)) >= (*p_65)) || 0x2E7F4AB92C624D39L))))) ^ p_64))) <= 1L), 9UL)), p_64))))
    { /* block id: 780 */
        uint32_t l_1418 = 0xD93A1127L;
        uint64_t *l_1457 = &p_2811->g_916;
        uint64_t **l_1456 = &l_1457;
        uint16_t l_1459 = 0x5A84L;
        for (p_2811->g_202 = (-30); (p_2811->g_202 != 14); ++p_2811->g_202)
        { /* block id: 783 */
            int32_t *l_1417[10][3][5] = {{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}},{{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0},{&p_2811->g_81,&p_2811->g_131,&l_1352[1][0],&p_2811->g_921,(void*)0}}};
            uint32_t **l_1430 = &p_2811->g_840;
            int i, j, k;
            l_1418++;
            for (l_1139 = 28; (l_1139 > 4); l_1139 = safe_sub_func_int16_t_s_s(l_1139, 8))
            { /* block id: 787 */
                int32_t *l_1431 = (void*)0;
                int32_t *l_1461 = &p_2811->g_81;
                uint32_t *l_1475[4];
                int32_t l_1478 = 0x7C191C1BL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1475[i] = (void*)0;
                if ((((*p_2811->g_427) = (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_64, (safe_unary_minus_func_uint64_t_u(p_64)))), ((((l_1430 != (void*)0) | ((void*)0 != l_1431)) , ((safe_lshift_func_uint8_t_u_s(p_64, p_64)) , (+p_64))) <= 1L))) > 0L), 3))) != p_64))
                { /* block id: 789 */
                    for (p_2811->g_84 = (-11); (p_2811->g_84 != (-5)); p_2811->g_84 = safe_add_func_uint32_t_u_u(p_2811->g_84, 5))
                    { /* block id: 792 */
                        int32_t l_1460[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int i;
                        l_1460[3] = ((*p_65) = ((*p_2811->g_1114) = (p_64 , (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((*p_2811->g_643), (((safe_unary_minus_func_uint8_t_u((safe_div_func_uint32_t_u_u((((*p_2811->g_813) = ((safe_unary_minus_func_uint16_t_u((p_64 < (((**l_1110) == p_65) | (p_64 < (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((*p_2811->g_133) = (safe_lshift_func_int8_t_s_u(p_64, 6))), (safe_mul_func_int8_t_s_s(0x63L, (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(p_64, p_64)) , (-3L)), (**p_2811->g_1167))) , 0x8FL) & 252UL))))), (**p_2811->g_1167)))))))) , l_1456)) != l_1458), p_64)))) > p_64) , l_1459))), (**p_2811->g_494))))));
                    }
                    if ((*p_65))
                        break;
                }
                else
                { /* block id: 800 */
                    int16_t l_1476 = 0x6FDCL;
                    int32_t l_1477[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1477[i] = (-7L);
                    l_1461 = p_65;
                    l_1478 &= (safe_mod_func_uint16_t_u_u((((void*)0 == p_65) & (((safe_sub_func_int8_t_s_s(0x5BL, ((((l_1418 | ((*l_981) , (p_64 && ((l_1110 != (void*)0) , ((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u(((l_1475[3] = (**p_2811->g_451)) == (*p_2811->g_362)), p_64)))), 0x30L)), 0UL)), 6)) || (**p_2811->g_322)))))) , l_1476) && 0x86L) | 0x7B7FA522L))) && (*p_65)) <= p_64)), l_1477[0]));
                }
                for (l_1347 = (-11); (l_1347 < 7); ++l_1347)
                { /* block id: 807 */
                    return l_1459;
                }
            }
            return (*l_981);
        }
    }
    else
    { /* block id: 813 */
        return p_64;
    }
    return p_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_84 p_2811->g_326 p_2811->g_322 p_2811->g_202 p_2811->g_247 p_2811->g_494 p_2811->g_495 p_2811->g_158 p_2811->g_193 p_2811->g_323 p_2811->g_324 p_2811->g_76 p_2811->g_277 p_2811->g_111 p_2811->g_112 p_2811->g_642 p_2811->g_643 p_2811->g_540 p_2811->g_710 p_2811->g_427 p_2811->g_362 p_2811->g_363 p_2811->g_195 p_2811->g_81 p_2811->g_765 p_2811->g_149 p_2811->g_766 p_2811->g_767 p_2811->g_21 p_2811->g_126 p_2811->g_813 p_2811->g_839 p_2811->g_90 p_2811->g_478 p_2811->g_190 p_2811->g_921 p_2811->g_925 p_2811->g_661 p_2811->g_33
 * writes: p_2811->g_76 p_2811->g_81 p_2811->g_84 p_2811->g_90 p_2811->g_426 p_2811->g_126 p_2811->g_279 p_2811->g_258 p_2811->g_277 p_2811->g_112 p_2811->g_540 p_2811->g_158 p_2811->g_149 p_2811->g_813 p_2811->g_839 p_2811->g_128 p_2811->g_193 p_2811->g_195 p_2811->g_916 p_2811->g_199 p_2811->g_925 p_2811->g_202 p_2811->g_921 p_2811->g_190 p_2811->g_362
 */
int8_t  func_72(int32_t ** p_73, uint64_t  p_74, struct S0 * p_2811)
{ /* block id: 21 */
    int32_t *l_75[4][1];
    int16_t l_804[1][6];
    int8_t l_928 = 0x41L;
    int64_t l_946[10][1];
    uint32_t l_953 = 0xDEAC88FBL;
    int16_t l_977 = (-5L);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_75[i][j] = &p_2811->g_76;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_804[i][j] = 0x1E09L;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_946[i][j] = 4L;
    }
lbl_87:
    p_2811->g_76 = 0x05C3B363L;
    for (p_74 = 0; (p_74 != 47); p_74++)
    { /* block id: 25 */
        uint32_t l_94[1][4][9] = {{{0xC9652FB0L,0x8B95DE17L,0xAC715C01L,0x2D42CB0EL,0x8B95DE17L,0x2D42CB0EL,0xAC715C01L,0x8B95DE17L,0xC9652FB0L},{0xC9652FB0L,0x8B95DE17L,0xAC715C01L,0x2D42CB0EL,0x8B95DE17L,0x2D42CB0EL,0xAC715C01L,0x8B95DE17L,0xC9652FB0L},{0xC9652FB0L,0x8B95DE17L,0xAC715C01L,0x2D42CB0EL,0x8B95DE17L,0x2D42CB0EL,0xAC715C01L,0x8B95DE17L,0xC9652FB0L},{0xC9652FB0L,0x8B95DE17L,0xAC715C01L,0x2D42CB0EL,0x8B95DE17L,0x2D42CB0EL,0xAC715C01L,0x8B95DE17L,0xC9652FB0L}}};
        int32_t **l_122[7];
        int32_t l_617[6][1][4] = {{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}},{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}},{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}},{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}},{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}},{{0x11648377L,0x11648377L,0x4A91FB03L,0x4BDA2F91L}}};
        uint16_t l_671[1][6] = {{0x5722L,0x5722L,0x5722L,0x5722L,0x5722L,0x5722L}};
        int16_t **l_680[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int16_t ***l_681 = &p_2811->g_426;
        uint32_t *l_684 = &p_2811->g_126;
        uint64_t *l_812[9][3] = {{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279},{&p_2811->g_279,&p_2811->g_279,&p_2811->g_279}};
        uint64_t **l_811 = &l_812[2][0];
        uint64_t ***l_810 = &l_811;
        int32_t *l_851 = &p_2811->g_81;
        uint32_t **l_856[5][2] = {{&p_2811->g_363,&p_2811->g_363},{&p_2811->g_363,&p_2811->g_363},{&p_2811->g_363,&p_2811->g_363},{&p_2811->g_363,&p_2811->g_363},{&p_2811->g_363,&p_2811->g_363}};
        int64_t l_882[5][5][10] = {{{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)}},{{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)}},{{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)}},{{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)}},{{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)},{1L,0x00EB927AC10058A1L,0L,0x1F00F80804673617L,(-4L),1L,0x7EAEDB6E677E854FL,1L,0L,(-9L)}}};
        uint8_t l_926[5];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_122[i] = &l_75[1][0];
        for (i = 0; i < 5; i++)
            l_926[i] = 9UL;
        for (p_2811->g_76 = 11; (p_2811->g_76 != 21); p_2811->g_76++)
        { /* block id: 28 */
            int32_t l_124[9] = {0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL,0x04EDDC8DL};
            uint8_t l_620 = 7UL;
            int32_t l_628 = 0x02DE5E30L;
            int32_t l_630 = (-10L);
            int8_t l_632 = 6L;
            int32_t l_666 = 0x61277629L;
            int32_t l_667 = (-8L);
            int32_t l_668 = 0x05C9472FL;
            int32_t l_669 = 0x43ACC5A5L;
            int32_t l_670 = 0x380131E6L;
            int i;
            for (p_2811->g_81 = 0; (p_2811->g_81 == (-28)); p_2811->g_81 = safe_sub_func_uint8_t_u_u(p_2811->g_81, 7))
            { /* block id: 31 */
                int16_t l_627 = 0L;
                int32_t l_649 = 0L;
                int32_t l_650 = 0x5074F556L;
                int32_t l_651[5][2][5] = {{{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL},{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL}},{{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL},{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL}},{{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL},{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL}},{{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL},{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL}},{{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL},{(-10L),0x0A65FE6EL,(-10L),(-10L),0x0A65FE6EL}}};
                uint16_t l_655[2];
                uint64_t *l_662[1];
                uint64_t l_663 = 0x5C6B628FF7A7FBF5L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_655[i] = 0x3FFDL;
                for (i = 0; i < 1; i++)
                    l_662[i] = &p_2811->g_202;
                for (p_2811->g_84 = 0; (p_2811->g_84 != (-16)); p_2811->g_84--)
                { /* block id: 34 */
                    int32_t l_91[2][5][8] = {{{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L}},{{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L},{0x2EC3887DL,0x6EA11B98L,0x6A102A83L,0x2EC3887DL,0x3B3BE7B8L,0x6A102A83L,0x6A102A83L,0x3B3BE7B8L}}};
                    int i, j, k;
                    if (p_2811->g_84)
                        goto lbl_87;
                    p_2811->g_90[1][3][1] = (safe_rshift_func_uint8_t_u_u(p_74, 3));
                    if (p_2811->g_84)
                        break;
                    l_91[0][3][6] = 0x683513FEL;
                }
            }
        }
        if ((safe_lshift_func_uint16_t_u_u((((p_74 && (7UL != (safe_mul_func_int16_t_s_s(((6L && 0x24L) & ((safe_lshift_func_int16_t_s_u(((((p_74 ^ ((*p_2811->g_326) == ((*l_681) = l_680[8][0]))) <= (p_2811->g_202 , (~((*l_684) = ((safe_mod_func_int32_t_s_s((((p_2811->g_247 , p_74) , (**p_2811->g_494)) < p_74), p_74)) ^ p_2811->g_193[3][0][4]))))) <= p_74) || p_2811->g_193[4][2][6]), (*p_2811->g_495))) <= 0x010AL)), p_74)))) >= p_74) , 65530UL), (**p_2811->g_494))))
        { /* block id: 358 */
            int64_t l_687 = 0x351E9D316B31DD40L;
            int8_t *l_690[2];
            int32_t l_694 = 0x0FD11D3EL;
            int64_t *l_709 = &p_2811->g_190;
            uint64_t *l_769[4][5][7] = {{{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0}},{{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0}},{{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0}},{{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0},{&p_2811->g_279,&p_2811->g_279,(void*)0,&p_2811->g_279,&p_2811->g_279,&p_2811->g_279,(void*)0}}};
            uint64_t **l_768 = &l_769[2][2][0];
            int32_t l_800 = 0x7D0D6012L;
            int32_t *l_801 = (void*)0;
            uint64_t ***l_816 = &l_811;
            uint64_t **l_848 = &p_2811->g_661;
            int8_t l_849[2][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_690[i] = &p_2811->g_128;
            for (p_2811->g_279 = 0; p_2811->g_279 < 1; p_2811->g_279 += 1)
            {
                for (p_2811->g_258 = 0; p_2811->g_258 < 6; p_2811->g_258 += 1)
                {
                    l_671[p_2811->g_279][p_2811->g_258] = 1UL;
                }
            }
            for (p_2811->g_126 = 0; (p_2811->g_126 != 52); p_2811->g_126 = safe_add_func_uint32_t_u_u(p_2811->g_126, 8))
            { /* block id: 362 */
                int32_t l_693 = 1L;
                l_693 = ((((&l_75[2][0] == (void*)0) <= (p_74 , l_687)) & (safe_mul_func_int8_t_s_s((((void*)0 != l_690[1]) && (((((l_694 = ((safe_lshift_func_uint16_t_u_u((**p_2811->g_494), 0)) & l_693)) && (-8L)) , p_74) <= 0UL) < (***p_2811->g_326))), 0xFFL))) >= p_74);
                (*p_73) = l_75[1][0];
                (**p_73) = (**p_73);
            }
            for (p_2811->g_277 = 0; (p_2811->g_277 == (-24)); p_2811->g_277 = safe_sub_func_uint32_t_u_u(p_2811->g_277, 5))
            { /* block id: 370 */
                for (p_2811->g_76 = 0; (p_2811->g_76 <= (-1)); p_2811->g_76 = safe_sub_func_uint64_t_u_u(p_2811->g_76, 1))
                { /* block id: 373 */
                    (*p_2811->g_111) = (*p_2811->g_111);
                }
            }
            if (((~(((safe_mul_func_uint16_t_u_u((7UL == p_74), ((p_74 , (l_687 , ((**p_2811->g_642) &= p_74))) , (((safe_div_func_uint8_t_u_u(l_687, (safe_mod_func_int16_t_s_s((~(((((+(safe_mul_func_uint16_t_u_u(1UL, (safe_sub_func_int8_t_s_s(((void*)0 == l_709), p_74))))) < 0x1DF71AD2FBE0616CL) != p_74) >= 0x7EL) & p_74)), (**p_2811->g_494))))) >= l_687) != p_74)))) , (*p_2811->g_643)) < p_2811->g_710)) & l_687))
            { /* block id: 378 */
                uint16_t l_725 = 0UL;
                int32_t l_753 = 0x216A06E9L;
                uint8_t *l_776 = &p_2811->g_540;
                int32_t l_777 = 0x63BA42C7L;
                if ((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((*p_2811->g_643), ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_725 > ((((*p_2811->g_427) = 0x3A81L) <= (~(safe_mod_func_int64_t_s_s((1UL | ((**p_2811->g_362) , p_74)), (safe_div_func_uint32_t_u_u((l_725 <= l_725), (safe_add_func_uint16_t_u_u(0UL, p_2811->g_195)))))))) <= l_694)), p_74)), l_725)), p_74)), p_74)) & 0xD1E7073C1A381983L))), 5UL)) ^ (-1L)) != l_694), 15)))
                { /* block id: 380 */
                    uint8_t *l_739 = &p_2811->g_540;
                    int32_t l_748[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_748[i] = 1L;
                    l_753 = ((((((safe_div_func_int16_t_s_s(p_74, (safe_unary_minus_func_uint64_t_u((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_74 < (((((p_74 <= (+(l_739 != ((((((safe_mod_func_int64_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((!((safe_lshift_func_uint8_t_u_s(l_748[0], 7)) == (&p_73 != ((((*p_2811->g_495) = (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(0x69L, (l_694 = (l_748[0] != p_74)))), p_2811->g_81))) < 0x795DL) , (void*)0)))), p_74)), p_74)))) & 0x365F0C1536A3FE68L) & p_74) == l_687) > p_74) , (*p_2811->g_642))))) <= 1UL) | p_74) , &l_690[1]) == &p_2811->g_268[0][4])), p_74)), p_74)))))) & p_2811->g_76) , p_74) | l_725) != 0x59L) , l_725);
                }
                else
                { /* block id: 384 */
                    uint32_t l_760 = 0UL;
                    uint64_t ***l_770 = (void*)0;
                    uint64_t ***l_771 = (void*)0;
                    uint64_t ***l_772 = (void*)0;
                    uint64_t ***l_773 = &l_768;
                    l_777 ^= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((!(safe_add_func_int16_t_s_s(((*p_2811->g_427) = ((l_753 = l_760) & ((((1L & 1L) , ((**p_2811->g_494) = (safe_lshift_func_int8_t_s_s(l_725, 7)))) & (8L && (safe_mod_func_uint64_t_u_u((p_2811->g_765 == ((*l_773) = l_768)), (safe_div_func_uint16_t_u_u((((l_776 != (void*)0) , 0x6FL) , 1UL), 0x2AF5L)))))) & 0x52E754DC219C44CEL))), 0UL))), 4)), 1UL));
                    for (p_2811->g_149 = (-13); (p_2811->g_149 == 23); p_2811->g_149 = safe_add_func_int32_t_s_s(p_2811->g_149, 6))
                    { /* block id: 392 */
                        int32_t l_780 = 0x3777844BL;
                        return l_780;
                    }
                    (*p_73) = (*p_73);
                    l_694 &= (safe_unary_minus_func_int32_t_s(l_687));
                }
                (*p_73) = (*p_73);
                l_800 = ((0xF5L != (safe_div_func_uint64_t_u_u(p_74, ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((p_74 , (((safe_div_func_int16_t_s_s((***p_2811->g_326), 0x7A34L)) , ((safe_mod_func_uint64_t_u_u(((l_777 = ((void*)0 == (*p_73))) == (safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((((*p_2811->g_766) != (safe_div_func_int64_t_s_s(l_725, 0xD9F00CAC114E230EL))) & (**p_2811->g_494)), p_74)) == 0x3B6E27F124AD8822L), 6)) <= p_2811->g_21) > l_687) , (**p_2811->g_322)), 5))), p_74)) < p_74)) , p_74)), 4)), p_74)) & 0x73E8L)))) , l_687);
                l_801 = (*p_73);
            }
            else
            { /* block id: 402 */
                uint32_t l_809 = 4294967288UL;
                uint64_t ****l_815 = &p_2811->g_813;
                int32_t l_820 = 0L;
                uint32_t *l_829 = &p_2811->g_195;
                int16_t ***l_838 = &l_680[3][0];
                for (p_2811->g_149 = 0; (p_2811->g_149 != 18); p_2811->g_149++)
                { /* block id: 405 */
                    l_694 = l_804[0][1];
                }
                if ((((*l_684)++) < (((safe_sub_func_int8_t_s_s((-1L), l_809)) , l_810) == (l_816 = ((*l_815) = p_2811->g_813)))))
                { /* block id: 411 */
                    int32_t l_819 = 9L;
                    int32_t l_824 = 1L;
                    uint32_t ***l_841[5] = {&p_2811->g_839[0],&p_2811->g_839[0],&p_2811->g_839[0],&p_2811->g_839[0],&p_2811->g_839[0]};
                    uint16_t l_850 = 0UL;
                    int i;
                    if (l_687)
                        break;
                    for (l_809 = (-4); (l_809 > 27); l_809 = safe_add_func_uint8_t_u_u(l_809, 1))
                    { /* block id: 415 */
                        int8_t l_821 = 0x19L;
                        (*p_73) = (*p_73);
                        l_820 |= l_819;
                        return l_821;
                    }
                    for (p_2811->g_84 = 3; (p_2811->g_84 >= 0); p_2811->g_84 -= 1)
                    { /* block id: 422 */
                        uint32_t l_830 = 0xAD2FCA3FL;
                        int32_t l_831 = (-7L);
                        l_824 |= (safe_rshift_func_uint16_t_u_u(0xFADCL, 9));
                        l_831 ^= (safe_mod_func_uint32_t_u_u(0UL, (((void*)0 == &p_2811->g_112) || ((safe_rshift_func_uint16_t_u_u(p_74, (l_829 != (void*)0))) == (0xF9D52093L && l_830)))));
                    }
                    l_851 = ((*p_73) = ((p_2811->g_277 = ((l_850 = (l_849[1][0] = (p_74 == (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((((((((safe_lshift_func_uint8_t_u_u(p_74, (l_819 , (l_838 != l_838)))) >= ((p_2811->g_839[4] = p_2811->g_839[4]) == (((safe_mod_func_uint32_t_u_u((p_2811->g_126 = (safe_rshift_func_int16_t_s_s(((*p_2811->g_427) ^= (safe_add_func_uint16_t_u_u((*p_2811->g_495), (0L | (((void*)0 != l_848) < 4294967295UL))))), p_74))), 0x7D508347L)) & p_74) , (void*)0))) > l_820) > p_74) , p_74) <= p_74) & 0UL) , p_74) , p_74), (**p_2811->g_642))), 0x3F2BL)) < 0UL) <= 0x6F60F410L)))) , (-7L))) , (*p_73)));
                }
                else
                { /* block id: 434 */
                    return p_74;
                }
                (*p_73) = (*p_73);
            }
        }
        else
        { /* block id: 439 */
            int32_t *l_889 = &p_2811->g_131;
            int32_t l_891 = 0L;
            int32_t l_893 = 6L;
            int32_t l_894 = 0x777168CAL;
            uint32_t l_896[10] = {4UL,0UL,4294967286UL,0UL,4UL,4UL,0UL,4294967286UL,0UL,4UL};
            int i;
            for (p_2811->g_128 = (-18); (p_2811->g_128 == 3); p_2811->g_128 = safe_add_func_int64_t_s_s(p_2811->g_128, 9))
            { /* block id: 442 */
                uint32_t l_857 = 4294967294UL;
                int32_t l_892[7] = {0x4D8CF7BDL,1L,0x4D8CF7BDL,0x4D8CF7BDL,1L,0x4D8CF7BDL,0x4D8CF7BDL};
                uint32_t **l_922 = &l_684;
                int i;
                for (p_2811->g_81 = 0; (p_2811->g_81 >= 3); ++p_2811->g_81)
                { /* block id: 445 */
                    int8_t l_858 = (-2L);
                    l_857 &= (l_856[0][1] != (void*)0);
                    (*p_2811->g_111) = (void*)0;
                    if (l_858)
                        break;
                }
                if (l_857)
                    continue;
                for (p_2811->g_84 = 6; (p_2811->g_84 >= 21); p_2811->g_84++)
                { /* block id: 453 */
                    uint8_t l_871[10] = {255UL,0xDEL,255UL,255UL,0xDEL,255UL,255UL,0xDEL,255UL,255UL};
                    uint16_t *l_872 = &p_2811->g_193[4][2][0];
                    uint16_t l_877[8][1][1] = {{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}}};
                    int32_t l_886 = 1L;
                    int32_t l_890 = 0L;
                    int32_t l_895 = (-5L);
                    int i, j, k;
                    if (((safe_div_func_uint8_t_u_u(0x85L, (safe_div_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((p_2811->g_277 = (((*p_2811->g_427) = l_857) & p_74)), (l_871[6] | (**p_2811->g_322)))) , ((*l_872) = ((**p_2811->g_494) = ((*p_2811->g_427) , (*p_2811->g_495))))), (0x49L == 0x04L))), l_871[6])) != 0UL), l_871[6])))) < (*l_851)))
                    { /* block id: 458 */
                        int32_t l_885 = 0x0FB993F6L;
                        (*l_851) = (l_871[4] > ((+(safe_lshift_func_uint16_t_u_u(l_877[4][0][0], 10))) >= (((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(l_882[0][4][7], (safe_sub_func_uint64_t_u_u((((l_886 = l_885) < ((void*)0 == &p_2811->g_643)) || p_74), ((void*)0 == &p_2811->g_268[0][4]))))) && (*p_2811->g_643)), 5)) != p_2811->g_90[1][3][1]) ^ (*p_2811->g_427))));
                    }
                    else
                    { /* block id: 461 */
                        int8_t l_887 = 0x6DL;
                        if (l_887)
                            break;
                        return p_74;
                    }
                    for (l_857 = 0; (l_857 <= 0); l_857 += 1)
                    { /* block id: 467 */
                        int32_t *l_888 = (void*)0;
                        l_889 = ((*p_73) = l_888);
                    }
                    if (p_2811->g_76)
                        goto lbl_87;
                    l_896[4]++;
                }
                for (p_2811->g_195 = 25; (p_2811->g_195 == 17); --p_2811->g_195)
                { /* block id: 476 */
                    int64_t *l_901 = &p_2811->g_190;
                    int32_t l_906 = (-1L);
                    int64_t *l_923 = &p_2811->g_149;
                    int8_t *l_924 = &p_2811->g_925[0][0][0];
                    uint32_t l_927 = 0UL;
                    l_906 &= (l_893 |= (((((((l_901 == l_812[2][0]) ^ (1UL && (safe_add_func_uint64_t_u_u(((((p_2811->g_478 <= (((safe_rshift_func_uint8_t_u_s((p_2811->g_190 , 0xE6L), p_74)) <= (-1L)) , p_2811->g_90[0][3][1])) && 0x1204D1E272664FCFL) , p_2811->g_767[0][5]) , p_74), l_892[3])))) | l_892[3]) != p_74) >= (*l_851)) && 0x24L) & l_892[1]));
                    l_927 = ((safe_mul_func_uint8_t_u_u((((--(**p_2811->g_642)) < ((*l_924) |= (p_2811->g_247 , (((p_2811->g_199[3] = ((safe_unary_minus_func_int64_t_s(((p_74 > p_74) ^ ((*l_923) ^= ((safe_add_func_uint8_t_u_u((&p_2811->g_362 == (void*)0), ((((((safe_lshift_func_uint8_t_u_u(((p_2811->g_916 = p_74) == (safe_sub_func_int32_t_s_s((p_2811->g_90[0][5][1] , ((((p_74 , (safe_mul_func_int8_t_s_s(p_2811->g_921, 0L))) | p_74) >= 0x050869C9L) >= 0x3ED7L)), p_74))), 5)) , l_922) != l_922) , 65527UL) != (-7L)) | l_906))) >= l_906))))) ^ (**p_2811->g_494))) || l_906) & p_74)))) , 0xC3L), l_926[3])) > 3UL);
                    if (l_892[3])
                        break;
                    l_894 = 0x4EF848A3L;
                }
            }
            if (l_928)
                break;
            (*p_73) = (void*)0;
        }
    }
    for (p_2811->g_277 = 0; (p_2811->g_277 > (-16)); p_2811->g_277 = safe_sub_func_int64_t_s_s(p_2811->g_277, 1))
    { /* block id: 495 */
        uint8_t l_931[9][4] = {{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL},{255UL,6UL,248UL,8UL}};
        int32_t l_932[8] = {0x3753B3EAL,0x3DE0EC85L,0x3753B3EAL,0x3753B3EAL,0x3DE0EC85L,0x3753B3EAL,0x3753B3EAL,0x3DE0EC85L};
        int32_t l_945 = 0x63D78D20L;
        uint32_t ***l_976 = &p_2811->g_362;
        int64_t l_978 = (-6L);
        int i, j;
        l_932[5] = (l_931[2][2] = (((*p_2811->g_661) = (*p_2811->g_661)) , ((void*)0 != p_73)));
        for (p_2811->g_149 = 0; (p_2811->g_149 <= (-16)); p_2811->g_149 = safe_sub_func_int32_t_s_s(p_2811->g_149, 1))
        { /* block id: 501 */
            uint8_t l_935 = 0xC9L;
            int32_t l_941 = 0x57195344L;
            int32_t l_944[1];
            uint64_t l_947 = 0x62E785DB7DC14C8AL;
            int32_t l_952 = 0x083E436BL;
            int i;
            for (i = 0; i < 1; i++)
                l_944[i] = 0x6CE55872L;
            if (l_935)
            { /* block id: 502 */
                int32_t *l_936 = &p_2811->g_921;
                (*p_73) = l_936;
                (**p_73) = 0x16454AEFL;
                return p_74;
            }
            else
            { /* block id: 506 */
                int64_t l_937 = (-2L);
                int32_t l_938 = 0x100F3828L;
                int32_t l_939 = 0L;
                int32_t l_940 = 1L;
                int32_t l_942 = 0L;
                int32_t l_943[6][5][5] = {{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}},{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}},{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}},{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}},{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}},{{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L},{0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L,0x09C59425L}}};
                int i, j, k;
                if (l_935)
                    break;
                if (l_937)
                    break;
                l_947--;
            }
            for (l_945 = 27; (l_945 >= (-23)); l_945--)
            { /* block id: 513 */
                int32_t l_956 = 0x4E1B525CL;
                l_953 = (l_932[2] = (l_952 ^= l_931[2][2]));
                l_956 = (p_2811->g_33 , ((!(safe_lshift_func_int16_t_s_s(0x71FAL, 7))) ^ p_74));
                for (p_2811->g_190 = 0; (p_2811->g_190 <= 2); p_2811->g_190 += 1)
                { /* block id: 520 */
                    volatile int32_t l_957 = 0x4CEB2D83L;/* VOLATILE GLOBAL l_957 */
                    int i, j, k;
                    l_957 = p_2811->g_324[p_2811->g_190][(p_2811->g_190 + 2)][p_2811->g_190];
                    for (p_2811->g_202 = 0; (p_2811->g_202 >= 29); p_2811->g_202 = safe_add_func_uint32_t_u_u(p_2811->g_202, 9))
                    { /* block id: 524 */
                        l_957 = l_932[5];
                    }
                    for (l_953 = 14; (l_953 == 20); l_953 = safe_add_func_int64_t_s_s(l_953, 5))
                    { /* block id: 529 */
                        if (l_952)
                            goto lbl_87;
                    }
                }
            }
        }
        l_978 = (((**p_2811->g_642) > ((+p_74) , (0x43D141D7EEF5EE48L ^ (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((-2L), 3)), 0xA2352078L)), ((safe_mul_func_uint8_t_u_u(((p_2811->g_33 >= ((safe_rshift_func_int16_t_s_u((l_931[2][2] != ((((safe_lshift_func_uint8_t_u_u(((l_945 ^= (l_932[5] ^= (((*l_976) = &p_2811->g_363) == (void*)0))) < l_977), 1)) | p_74) || 0UL) <= 65535UL)), 6)) , l_945)) >= p_74), p_74)) , 65535UL))) , (*p_2811->g_495)), (*p_2811->g_427)))))) , (-6L));
    }
    return p_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_21 p_2811->g_90 p_2811->g_33 p_2811->g_126 p_2811->g_76 p_2811->g_84 p_2811->g_128 p_2811->g_133 p_2811->g_158 p_2811->g_149 p_2811->g_36 p_2811->g_81 p_2811->g_190 p_2811->g_199 p_2811->g_195 p_2811->g_277 p_2811->g_111 p_2811->g_112
 * writes: p_2811->g_149 p_2811->g_128 p_2811->g_133 p_2811->g_158 p_2811->g_190 p_2811->g_193 p_2811->g_195 p_2811->g_199 p_2811->g_202 p_2811->g_277 p_2811->g_131 p_2811->g_112
 */
int32_t  func_95(int32_t ** p_96, int32_t  p_97, int32_t * p_98, int32_t ** p_99, int32_t * p_100, struct S0 * p_2811)
{ /* block id: 52 */
    int32_t *l_135[2][8] = {{&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81},{&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81,&p_2811->g_81}};
    int8_t l_136[4];
    int8_t *l_139 = &l_136[3];
    uint32_t *l_141 = &p_2811->g_126;
    uint32_t **l_140 = &l_141;
    uint32_t *l_143[3][4][3] = {{{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126}},{{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126}},{{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126},{(void*)0,&p_2811->g_33,&p_2811->g_126}}};
    uint32_t **l_142 = &l_143[1][3][1];
    int64_t *l_148 = &p_2811->g_149;
    int8_t *l_150 = (void*)0;
    int8_t *l_151 = &p_2811->g_128;
    uint32_t **l_152 = &l_143[1][3][1];
    uint8_t l_191[4] = {253UL,253UL,253UL,253UL};
    uint8_t l_203[6];
    uint16_t *l_244 = &p_2811->g_193[3][0][4];
    int8_t l_320 = 0x27L;
    uint64_t l_321 = 0x0ABC9676B62B178CL;
    int32_t l_330 = 0L;
    int64_t l_342[7][5] = {{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L},{0x2454156B1894467BL,0x2454156B1894467BL,0L,0L,0x43FA7BD63A894B27L}};
    int16_t l_411 = 4L;
    uint8_t l_439 = 0xA8L;
    int32_t l_441 = 0x4BF25A78L;
    int16_t l_453 = 7L;
    uint16_t l_576 = 1UL;
    uint64_t *l_586 = &p_2811->g_202;
    int32_t l_588 = (-4L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_136[i] = 0x38L;
    for (i = 0; i < 6; i++)
        l_203[i] = 0UL;
    l_136[2] = (0x8B10L ^ p_2811->g_21);
    if ((((p_97 , ((p_97 , (safe_sub_func_int8_t_s_s(((*l_151) ^= ((((((*l_148) = ((((((*l_139) = p_2811->g_90[1][1][1]) != p_97) || ((*l_139) = (((*l_140) = &p_2811->g_126) == ((*l_142) = p_100)))) == p_97) ^ (safe_lshift_func_uint16_t_u_s((p_2811->g_90[0][5][1] < ((safe_rshift_func_uint16_t_u_s(p_2811->g_33, p_97)) >= p_97)), p_2811->g_126)))) == p_97) ^ 0x23F0L) != (**p_99)) || p_2811->g_84)), p_2811->g_33))) && p_2811->g_21)) > (-10L)) || p_2811->g_90[1][3][1]))
    { /* block id: 60 */
        (*p_96) = (*p_96);
    }
    else
    { /* block id: 62 */
        uint16_t *l_157 = &p_2811->g_158;
        int8_t **l_173 = &l_150;
        int32_t l_188[8] = {0x79921E08L,0x4F1E33EBL,0x79921E08L,0x79921E08L,0x4F1E33EBL,0x79921E08L,0x79921E08L,0x4F1E33EBL};
        int64_t *l_189 = &p_2811->g_190;
        uint16_t *l_192 = &p_2811->g_193[3][0][4];
        uint32_t *l_194 = &p_2811->g_195;
        int32_t l_196 = 0x5CF8C165L;
        int32_t l_197 = 0x74708661L;
        int64_t *l_198 = &p_2811->g_199[5];
        uint32_t **l_200 = (void*)0;
        uint64_t *l_201 = &p_2811->g_202;
        int i;
        l_196 = (((*l_201) = ((l_152 == (((*l_198) |= (safe_mod_func_uint16_t_u_u(((l_197 ^= ((safe_mul_func_uint16_t_u_u(((((--(*l_157)) & ((((*l_194) = ((((*l_192) = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((((*l_189) &= ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((p_97 > ((((&l_136[3] != ((*l_173) = &l_136[1])) , p_2811->g_126) > (safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(p_2811->g_76, (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_151) = p_97), ((-1L) | ((*l_148) &= p_2811->g_21)))), 0x89C1L)), 0x73B7L)) >= (**p_99)) && l_188[7]), 0x0FL)) < p_97), 1)))) , p_97) ^ 0x3AL), 0xF8L))) <= p_2811->g_36)) < p_2811->g_36), p_2811->g_81)) , 0x238D2D0EFE05FA8EL), (-9L))), p_2811->g_33)), p_97)) , (**p_99)) != (*p_98)) , p_97)) , l_191[1]) >= (*p_98)), p_2811->g_90[0][4][0])), l_188[7]))) | 0x7FB4L) != 0xD83BL)) , p_97) != p_2811->g_90[0][5][0])) >= p_2811->g_81) | l_188[7]), l_196)) , 0x0E832C57L)) && (**p_99)), p_97))) , l_200)) ^ p_97)) , (**p_99));
        ++l_203[1];
    }
    for (p_2811->g_158 = 0; (p_2811->g_158 < 10); p_2811->g_158 = safe_add_func_uint64_t_u_u(p_2811->g_158, 1))
    { /* block id: 78 */
        int32_t l_210 = 0x43D22769L;
        int32_t l_217 = (-1L);
        int32_t l_249 = (-1L);
        int32_t l_328 = (-5L);
        int32_t l_329[6] = {(-1L),0x03E57669L,(-1L),(-1L),0x03E57669L,(-1L)};
        uint64_t l_331 = 0x2F59C979C9EA2264L;
        int8_t l_334[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint64_t l_335 = 0xC8DA34A82A2DD4F2L;
        int i;
        for (p_2811->g_195 = 0; (p_2811->g_195 > 28); p_2811->g_195++)
        { /* block id: 81 */
            int32_t l_218 = 0x25DF858CL;
            int16_t *l_245 = &p_2811->g_90[0][4][0];
            uint64_t *l_246[5];
            int32_t l_248 = 0x564F0666L;
            uint32_t *l_317 = &p_2811->g_126;
            int i;
            for (i = 0; i < 5; i++)
                l_246[i] = (void*)0;
            (1 + 1);
        }
        ++l_331;
        ++l_335;
    }
    for (p_2811->g_277 = 10; (p_2811->g_277 <= 21); p_2811->g_277 = safe_add_func_uint64_t_u_u(p_2811->g_277, 9))
    { /* block id: 146 */
        int32_t l_343 = 0x1B219FC2L;
        uint64_t **l_347[6];
        int32_t l_352 = 0x774AC043L;
        int16_t *l_425[5][3][7] = {{{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411}},{{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411}},{{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411}},{{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411}},{{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411},{&p_2811->g_90[0][3][0],&l_411,&p_2811->g_90[0][0][1],&l_411,&p_2811->g_90[1][0][0],&p_2811->g_90[0][3][0],&l_411}}};
        int16_t **l_424[6][7] = {{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]},{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]},{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]},{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]},{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]},{(void*)0,(void*)0,&l_425[4][1][4],&l_425[4][2][4],&l_425[4][1][4],&l_425[1][2][4],&l_425[2][0][5]}};
        int16_t **l_428[2];
        uint32_t l_431[3][9] = {{0xEA87FBECL,1UL,4294967289UL,1UL,0xEA87FBECL,0xEA87FBECL,1UL,4294967289UL,1UL},{0xEA87FBECL,1UL,4294967289UL,1UL,0xEA87FBECL,0xEA87FBECL,1UL,4294967289UL,1UL},{0xEA87FBECL,1UL,4294967289UL,1UL,0xEA87FBECL,0xEA87FBECL,1UL,4294967289UL,1UL}};
        uint32_t **l_448 = &p_2811->g_363;
        int32_t *l_457[7][3] = {{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352},{&p_2811->g_81,&p_2811->g_81,&l_352}};
        int32_t l_503 = 5L;
        uint8_t l_526 = 255UL;
        int8_t l_608 = 8L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_347[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_428[i] = &l_425[1][1][2];
        for (p_2811->g_131 = 8; (p_2811->g_131 <= 13); p_2811->g_131 = safe_add_func_uint16_t_u_u(p_2811->g_131, 7))
        { /* block id: 149 */
            uint32_t l_344 = 1UL;
            int8_t l_385 = 0x14L;
            int32_t l_398 = 0L;
            int16_t l_399 = 0x0BD2L;
            int32_t l_400 = 1L;
            l_344--;
        }
        (*p_2811->g_111) = (*p_2811->g_111);
    }
    return (*p_98);
}


/* ------------------------------------------ */
/* 
 * reads : p_2811->g_111 p_2811->g_21 p_2811->g_132
 * writes: p_2811->g_112 p_2811->g_131
 */
int32_t ** func_101(int32_t  p_102, int8_t  p_103, uint32_t  p_104, uint64_t  p_105, uint32_t  p_106, struct S0 * p_2811)
{ /* block id: 47 */
    int64_t l_129 = 0x79A429F2DD61587FL;
    int32_t *l_130 = &p_2811->g_131;
    (*p_2811->g_111) = (void*)0;
    (*l_130) = (l_129 = p_2811->g_21);
    return p_2811->g_132[0][5];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2812;
    struct S0* p_2811 = &c_2812;
    struct S0 c_2813 = {
        (-1L), // p_2811->g_21
        1L, // p_2811->g_24
        4294967293UL, // p_2811->g_33
        (-2L), // p_2811->g_36
        0x5464CD02L, // p_2811->g_76
        0x546D79C1L, // p_2811->g_81
        (-6L), // p_2811->g_84
        {{{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L}},{{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L},{0x77C9L,0x0774L}}}, // p_2811->g_90
        (void*)0, // p_2811->g_112
        &p_2811->g_112, // p_2811->g_111
        0UL, // p_2811->g_126
        0x00L, // p_2811->g_128
        (-1L), // p_2811->g_131
        (void*)0, // p_2811->g_133
        {{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133}}, // p_2811->g_132
        (-1L), // p_2811->g_149
        8UL, // p_2811->g_158
        0L, // p_2811->g_190
        {{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}},{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}},{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}},{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}},{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}},{{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L},{0x7EAEL,0x0119L,0xBA33L,0x6F06L,0x765DL,0xAD15L,0x0130L}}}, // p_2811->g_193
        4UL, // p_2811->g_195
        {0x393538FAA3ACFE0EL,0x393538FAA3ACFE0EL,0x393538FAA3ACFE0EL,0x393538FAA3ACFE0EL,0x393538FAA3ACFE0EL,0x393538FAA3ACFE0EL}, // p_2811->g_199
        18446744073709551615UL, // p_2811->g_202
        0x569AL, // p_2811->g_247
        4UL, // p_2811->g_258
        &p_2811->g_258, // p_2811->g_257
        {&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257,&p_2811->g_257}, // p_2811->g_256
        {{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}},{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}},{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}},{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}},{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}},{{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]},{&p_2811->g_256[3],(void*)0,(void*)0,&p_2811->g_256[3],&p_2811->g_256[3]}}}, // p_2811->g_259
        &p_2811->g_256[1], // p_2811->g_260
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_2811->g_268
        &p_2811->g_268[0][5], // p_2811->g_267
        (-4L), // p_2811->g_277
        0x20C8D91BA7469F82L, // p_2811->g_279
        {65535UL}, // p_2811->g_289
        {{{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L}},{{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L}},{{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L},{0x319DL,0x319DL,0x5FB8L}}}, // p_2811->g_324
        {&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0],&p_2811->g_324[0][6][0]}, // p_2811->g_323
        &p_2811->g_323[8], // p_2811->g_322
        (void*)0, // p_2811->g_325
        &p_2811->g_322, // p_2811->g_326
        (void*)0, // p_2811->g_359
        (void*)0, // p_2811->g_360
        &p_2811->g_195, // p_2811->g_363
        &p_2811->g_363, // p_2811->g_362
        &p_2811->g_362, // p_2811->g_361
        &p_2811->g_90[1][2][0], // p_2811->g_427
        &p_2811->g_427, // p_2811->g_426
        (void*)0, // p_2811->g_450
        &p_2811->g_362, // p_2811->g_451
        (-1L), // p_2811->g_478
        &p_2811->g_158, // p_2811->g_495
        &p_2811->g_495, // p_2811->g_494
        0x6075L, // p_2811->g_513
        247UL, // p_2811->g_540
        &p_2811->g_540, // p_2811->g_643
        &p_2811->g_643, // p_2811->g_642
        &p_2811->g_202, // p_2811->g_661
        7L, // p_2811->g_710
        {{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL},{0x958B6FEC085F8F7DL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x958B6FEC085F8F7DL,0xFCDB910EAD486F2DL}}, // p_2811->g_767
        &p_2811->g_767[0][5], // p_2811->g_766
        &p_2811->g_766, // p_2811->g_765
        (void*)0, // p_2811->g_814
        &p_2811->g_814, // p_2811->g_813
        (void*)0, // p_2811->g_840
        {&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840}, // p_2811->g_839
        0UL, // p_2811->g_916
        1L, // p_2811->g_921
        {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}}, // p_2811->g_925
        &p_2811->g_133, // p_2811->g_982
        (void*)0, // p_2811->g_989
        &p_2811->g_494, // p_2811->g_991
        &p_2811->g_426, // p_2811->g_1007
        {{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}},{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}},{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}},{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}},{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}},{{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L},{0L,0L,0x75206278L,0x579BF3D6L,0x1FD0C397L,0x579BF3D6L,0x75206278L}}}, // p_2811->g_1072
        (void*)0, // p_2811->g_1078
        (-3L), // p_2811->g_1089
        7L, // p_2811->g_1106
        &p_2811->g_76, // p_2811->g_1114
        {&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840,&p_2811->g_840}, // p_2811->g_1120
        {{&p_2811->g_1120[0],&p_2811->g_1120[4],&p_2811->g_1120[0],&p_2811->g_1120[0],&p_2811->g_1120[4],&p_2811->g_1120[0],&p_2811->g_1120[0],&p_2811->g_1120[4]},{&p_2811->g_1120[0],&p_2811->g_1120[4],&p_2811->g_1120[0],&p_2811->g_1120[0],&p_2811->g_1120[4],&p_2811->g_1120[0],&p_2811->g_1120[0],&p_2811->g_1120[4]}}, // p_2811->g_1119
        &p_2811->g_1119[0][3], // p_2811->g_1118
        &p_2811->g_133, // p_2811->g_1132
        {{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133},{&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,(void*)0,&p_2811->g_133,(void*)0,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133,&p_2811->g_133}}, // p_2811->g_1160
        &p_2811->g_133, // p_2811->g_1165
        &p_2811->g_540, // p_2811->g_1168
        &p_2811->g_1168, // p_2811->g_1167
        0x668CL, // p_2811->g_1191
        &p_2811->g_190, // p_2811->g_1314
        (void*)0, // p_2811->g_1332
        {&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332,&p_2811->g_1332}, // p_2811->g_1331
        &p_2811->g_1072[1][0][2], // p_2811->g_1376
        &p_2811->g_1376, // p_2811->g_1375
        0x7177B777L, // p_2811->g_1388
        &p_2811->g_81, // p_2811->g_1483
        &p_2811->g_279, // p_2811->g_1604
        (void*)0, // p_2811->g_1663
        4294967295UL, // p_2811->g_1676
        &p_2811->g_839[4], // p_2811->g_1734
        {0xDAL,0xDAL,0xDAL,0xDAL}, // p_2811->g_1745
        (void*)0, // p_2811->g_1838
        {{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}},{{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838},{&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838,&p_2811->g_1838}}}, // p_2811->g_1837
        0xE9A9BBDBL, // p_2811->g_1841
        0x211F5C71D9D28A0EL, // p_2811->g_1843
        &p_2811->g_1331[7], // p_2811->g_1868
        0x20EA9076L, // p_2811->g_1993
        0x2AEDDAC2L, // p_2811->g_2089
        (void*)0, // p_2811->g_2263
        0UL, // p_2811->g_2268
        1UL, // p_2811->g_2368
        &p_2811->g_1167, // p_2811->g_2377
        &p_2811->g_2377, // p_2811->g_2376
        254UL, // p_2811->g_2384
        4294967288UL, // p_2811->g_2390
        {{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}},{{&p_2811->g_133,&p_2811->g_133}}}, // p_2811->g_2420
        &p_2811->g_133, // p_2811->g_2421
        4294967295UL, // p_2811->g_2425
        0x32377879L, // p_2811->g_2477
        &p_2811->g_133, // p_2811->g_2484
        &p_2811->g_661, // p_2811->g_2542
        &p_2811->g_2542, // p_2811->g_2541
        &p_2811->g_2541, // p_2811->g_2540
        &p_2811->g_133, // p_2811->g_2594
        0x9DL, // p_2811->g_2672
        &p_2811->g_1388, // p_2811->g_2710
        &p_2811->g_2710, // p_2811->g_2709
        (void*)0, // p_2811->g_2711
        &p_2811->g_2540, // p_2811->g_2719
        (-6L), // p_2811->g_2763
        0x77CEB676L, // p_2811->g_2765
        &p_2811->g_132[0][5], // p_2811->g_2779
        {{{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168}},{{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168}},{{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168}},{{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168},{&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168,&p_2811->g_1168}}}, // p_2811->g_2805
        9UL, // p_2811->g_2809
    };
    c_2812 = c_2813;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2811);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2811->g_21, "p_2811->g_21", print_hash_value);
    transparent_crc(p_2811->g_24, "p_2811->g_24", print_hash_value);
    transparent_crc(p_2811->g_33, "p_2811->g_33", print_hash_value);
    transparent_crc(p_2811->g_36, "p_2811->g_36", print_hash_value);
    transparent_crc(p_2811->g_76, "p_2811->g_76", print_hash_value);
    transparent_crc(p_2811->g_81, "p_2811->g_81", print_hash_value);
    transparent_crc(p_2811->g_84, "p_2811->g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2811->g_90[i][j][k], "p_2811->g_90[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2811->g_126, "p_2811->g_126", print_hash_value);
    transparent_crc(p_2811->g_128, "p_2811->g_128", print_hash_value);
    transparent_crc(p_2811->g_131, "p_2811->g_131", print_hash_value);
    transparent_crc(p_2811->g_149, "p_2811->g_149", print_hash_value);
    transparent_crc(p_2811->g_158, "p_2811->g_158", print_hash_value);
    transparent_crc(p_2811->g_190, "p_2811->g_190", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2811->g_193[i][j][k], "p_2811->g_193[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2811->g_195, "p_2811->g_195", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2811->g_199[i], "p_2811->g_199[i]", print_hash_value);

    }
    transparent_crc(p_2811->g_202, "p_2811->g_202", print_hash_value);
    transparent_crc(p_2811->g_247, "p_2811->g_247", print_hash_value);
    transparent_crc(p_2811->g_258, "p_2811->g_258", print_hash_value);
    transparent_crc(p_2811->g_277, "p_2811->g_277", print_hash_value);
    transparent_crc(p_2811->g_279, "p_2811->g_279", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2811->g_289[i], "p_2811->g_289[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2811->g_324[i][j][k], "p_2811->g_324[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2811->g_478, "p_2811->g_478", print_hash_value);
    transparent_crc(p_2811->g_513, "p_2811->g_513", print_hash_value);
    transparent_crc(p_2811->g_540, "p_2811->g_540", print_hash_value);
    transparent_crc(p_2811->g_710, "p_2811->g_710", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2811->g_767[i][j], "p_2811->g_767[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2811->g_916, "p_2811->g_916", print_hash_value);
    transparent_crc(p_2811->g_921, "p_2811->g_921", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2811->g_925[i][j][k], "p_2811->g_925[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2811->g_1072[i][j][k], "p_2811->g_1072[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2811->g_1089, "p_2811->g_1089", print_hash_value);
    transparent_crc(p_2811->g_1106, "p_2811->g_1106", print_hash_value);
    transparent_crc(p_2811->g_1191, "p_2811->g_1191", print_hash_value);
    transparent_crc(p_2811->g_1388, "p_2811->g_1388", print_hash_value);
    transparent_crc(p_2811->g_1676, "p_2811->g_1676", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2811->g_1745[i], "p_2811->g_1745[i]", print_hash_value);

    }
    transparent_crc(p_2811->g_1841, "p_2811->g_1841", print_hash_value);
    transparent_crc(p_2811->g_1843, "p_2811->g_1843", print_hash_value);
    transparent_crc(p_2811->g_1993, "p_2811->g_1993", print_hash_value);
    transparent_crc(p_2811->g_2089, "p_2811->g_2089", print_hash_value);
    transparent_crc(p_2811->g_2268, "p_2811->g_2268", print_hash_value);
    transparent_crc(p_2811->g_2368, "p_2811->g_2368", print_hash_value);
    transparent_crc(p_2811->g_2384, "p_2811->g_2384", print_hash_value);
    transparent_crc(p_2811->g_2390, "p_2811->g_2390", print_hash_value);
    transparent_crc(p_2811->g_2425, "p_2811->g_2425", print_hash_value);
    transparent_crc(p_2811->g_2477, "p_2811->g_2477", print_hash_value);
    transparent_crc(p_2811->g_2672, "p_2811->g_2672", print_hash_value);
    transparent_crc(p_2811->g_2763, "p_2811->g_2763", print_hash_value);
    transparent_crc(p_2811->g_2765, "p_2811->g_2765", print_hash_value);
    transparent_crc(p_2811->g_2809, "p_2811->g_2809", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
