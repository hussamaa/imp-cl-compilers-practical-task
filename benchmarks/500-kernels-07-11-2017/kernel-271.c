// -g 92,50,2 -l 1,10,2
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


// Seed: 4024415834

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    uint8_t g_13;
    int16_t g_32;
    uint8_t g_39;
    uint8_t *g_38;
    int32_t g_47;
    int32_t * volatile g_46;
    int8_t g_76;
    int32_t ** volatile g_77;
    int32_t *g_79;
    int32_t ** volatile g_78;
    int32_t g_98;
    int32_t ** volatile g_108;
    int64_t g_130;
    uint64_t g_143;
    int32_t ** volatile g_149;
    int32_t ** volatile g_151;
    int32_t ** volatile g_153;
    uint32_t g_187;
    uint16_t g_196;
    uint8_t g_199;
    uint8_t *g_198;
    uint8_t **g_197;
    int32_t g_210[3][2][10];
    int16_t *g_214;
    int16_t **g_213;
    int32_t * volatile g_220;
    int32_t ** volatile g_222[4];
    uint64_t g_227;
    uint32_t g_236;
    int32_t * volatile g_249;
    int32_t ** volatile g_259[6][3][7];
    int32_t ** volatile g_260;
    uint64_t g_388;
    uint32_t g_461;
    int8_t g_471;
    int8_t g_473;
    volatile int32_t g_520;
    int16_t g_531[6];
    int32_t ** volatile g_540;
    int32_t ** volatile g_541;
    int32_t ** volatile g_542;
    uint64_t *g_548;
    volatile uint32_t g_565;
    int8_t *g_611;
    int32_t ** volatile g_616;
    volatile int16_t g_657;
    int32_t ** volatile g_695;
    volatile int64_t g_708;
    volatile int64_t *g_707;
    volatile int64_t **g_706[4];
    int32_t ** volatile g_712;
    uint32_t g_744;
    int32_t ** volatile g_774[9];
    volatile int64_t g_854;
    int64_t *g_927[3][5];
    int64_t **g_926[3];
    uint32_t *g_944[4][6][8];
    uint32_t **g_943;
    uint32_t ***g_942;
    volatile int32_t g_982;
    int32_t ** volatile g_1010[9][1][2];
    int8_t *g_1032;
    int32_t ** volatile g_1127[5][3];
    int8_t g_1189;
    volatile uint8_t g_1219;
    int64_t g_1301;
    int32_t ** volatile g_1342;
    volatile uint32_t g_1411;
    volatile int32_t *g_1460;
    volatile int32_t ** volatile g_1459;
    volatile int32_t ** volatile *g_1458;
    volatile uint64_t g_1467[8];
    volatile uint64_t *g_1466;
    volatile uint64_t * volatile *g_1465;
    int32_t ** volatile g_1486[9];
    int32_t ** volatile g_1487;
    int32_t g_1496[7][7];
    volatile int64_t ** volatile *g_1519[9][4];
    volatile int64_t ** volatile ** volatile g_1518;
    int32_t g_1522;
    uint64_t * volatile *g_1637;
    uint64_t * volatile **g_1636;
    uint64_t ***g_1683;
    volatile uint8_t g_1691[2][2][5];
    int32_t ** volatile g_1764;
    int64_t ***g_1784;
    int32_t ** volatile g_1856;
    int32_t * volatile g_1859;
    uint8_t g_1933;
    uint8_t g_1939;
    volatile int64_t g_1951;
    int32_t **g_1984;
    int32_t ***g_1983;
    int32_t g_1992;
    uint64_t g_2101[9][4];
    uint64_t **g_2129;
    uint32_t g_2197;
    int32_t g_2222[10][7][3];
    uint64_t **g_2256;
    int8_t g_2314;
    int32_t g_2375;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_2380);
int32_t  func_4(int8_t  p_5, int64_t  p_6, int32_t  p_7, uint32_t  p_8, int32_t  p_9, struct S0 * p_2380);
uint64_t  func_18(uint8_t * p_19, int16_t  p_20, uint8_t * p_21, uint8_t * p_22, struct S0 * p_2380);
uint8_t * func_23(int32_t  p_24, uint8_t * p_25, uint16_t  p_26, struct S0 * p_2380);
uint16_t  func_27(int64_t  p_28, uint16_t  p_29, uint8_t * p_30, struct S0 * p_2380);
uint8_t * func_34(uint8_t * p_35, uint8_t * p_36, uint64_t  p_37, struct S0 * p_2380);
int32_t * func_40(uint32_t  p_41, uint64_t  p_42, int16_t * p_43, struct S0 * p_2380);
int8_t  func_44(int16_t * p_45, struct S0 * p_2380);
uint64_t  func_48(int32_t * p_49, uint64_t  p_50, int64_t  p_51, int32_t  p_52, int8_t  p_53, struct S0 * p_2380);
int32_t * func_54(uint8_t * p_55, uint64_t  p_56, uint8_t * p_57, int32_t * p_58, int32_t  p_59, struct S0 * p_2380);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2380->g_3 p_2380->g_13 p_2380->g_38 p_2380->g_39 p_2380->g_46 p_2380->g_32 p_2380->g_78 p_2380->g_47 p_2380->g_76 p_2380->g_98 p_2380->g_108 p_2380->g_143 p_2380->g_79 p_2380->g_149 p_2380->g_151 p_2380->g_130 p_2380->g_187 p_2380->g_196 p_2380->g_197 p_2380->g_213 p_2380->g_198 p_2380->g_199 p_2380->g_210 p_2380->g_214 p_2380->g_220 p_2380->g_227 p_2380->g_236 p_2380->g_249 p_2380->g_388 p_2380->g_565 p_2380->g_541 p_2380->g_531 p_2380->g_695 p_2380->g_1859 p_2380->g_942 p_2380->g_943 p_2380->g_1465 p_2380->g_1466 p_2380->g_1467 p_2380->g_1032 p_2380->g_611 p_2380->g_473 p_2380->g_1496 p_2380->g_1189 p_2380->g_548 p_2380->g_1301 p_2380->g_1522 p_2380->g_1951 p_2380->g_1983 p_2380->g_944 p_2380->g_707 p_2380->g_708 p_2380->g_1992 p_2380->g_461 p_2380->g_520 p_2380->g_1691 p_2380->g_1984 p_2380->g_1939 p_2380->g_1764 p_2380->g_854 p_2380->g_1933 p_2380->g_1458 p_2380->g_1459 p_2380->g_2197 p_2380->g_657 p_2380->g_2314 p_2380->g_2222 p_2380->g_2129 p_2380->g_2375
 * writes: p_2380->g_3 p_2380->g_13 p_2380->g_47 p_2380->g_38 p_2380->g_76 p_2380->g_79 p_2380->g_39 p_2380->g_98 p_2380->g_32 p_2380->g_130 p_2380->g_143 p_2380->g_187 p_2380->g_196 p_2380->g_210 p_2380->g_213 p_2380->g_227 p_2380->g_236 p_2380->g_199 p_2380->g_388 p_2380->g_565 p_2380->g_1189 p_2380->g_944 p_2380->g_1933 p_2380->g_473 p_2380->g_1301 p_2380->g_1522 p_2380->g_744 p_2380->g_1983 p_2380->g_1496 p_2380->g_2101 p_2380->g_531 p_2380->g_1939 p_2380->g_2129 p_2380->g_1460 p_2380->g_2197 p_2380->g_2222 p_2380->g_2256 p_2380->g_198 p_2380->g_2314 p_2380->g_461 p_2380->g_2375
 */
int64_t  func_1(struct S0 * p_2380)
{ /* block id: 4 */
    int32_t l_2[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint8_t *l_12 = &p_2380->g_13;
    int16_t *l_31[3];
    int32_t l_33 = 0L;
    int32_t l_1977 = 0x562A45B4L;
    int32_t *l_2374 = &p_2380->g_2375;
    int i;
    for (i = 0; i < 3; i++)
        l_31[i] = &p_2380->g_32;
    for (p_2380->g_3 = 1; (p_2380->g_3 <= 9); p_2380->g_3 += 1)
    { /* block id: 7 */
        int i;
        return l_2[p_2380->g_3];
    }
    (*l_2374) &= func_4((p_2380->g_3 , ((safe_add_func_uint32_t_u_u(((((*l_12) ^= 0x68L) > 0x2DL) < (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((func_18(func_23(l_2[9], l_12, func_27(((!l_2[4]) ^ (l_33 = p_2380->g_3)), l_2[6], func_34(p_2380->g_38, l_12, p_2380->g_39, p_2380), p_2380), p_2380), l_1977, l_12, (*p_2380->g_197), p_2380) | 0UL), (-1L))), l_2[4]))), 1UL)) ^ l_1977)), l_2[9], p_2380->g_1992, p_2380->g_461, l_1977, p_2380);
    (*l_2374) = (safe_lshift_func_int16_t_s_s(0x31E4L, (safe_mul_func_int16_t_s_s((*l_2374), (-1L)))));
    return (*l_2374);
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_38 p_2380->g_39 p_2380->g_198 p_2380->g_1032 p_2380->g_76 p_2380->g_213 p_2380->g_214 p_2380->g_32 p_2380->g_1301 p_2380->g_199 p_2380->g_196 p_2380->g_548 p_2380->g_520 p_2380->g_611 p_2380->g_473 p_2380->g_227 p_2380->g_461 p_2380->g_1691 p_2380->g_531 p_2380->g_187 p_2380->g_210 p_2380->g_220 p_2380->g_1984 p_2380->g_197 p_2380->g_1939 p_2380->g_78 p_2380->g_1983 p_2380->g_1764 p_2380->g_79 p_2380->g_854 p_2380->g_249 p_2380->g_98 p_2380->g_13 p_2380->g_1933 p_2380->g_1458 p_2380->g_1459 p_2380->g_1465 p_2380->g_1466 p_2380->g_1522 p_2380->g_143 p_2380->g_2197 p_2380->g_1992 p_2380->g_47 p_2380->g_657 p_2380->g_708 p_2380->g_1467 p_2380->g_108 p_2380->g_1189 p_2380->g_943 p_2380->g_1951 p_2380->g_130 p_2380->g_2314 p_2380->g_565 p_2380->g_2222 p_2380->g_2129
 * writes: p_2380->g_199 p_2380->g_32 p_2380->g_47 p_2380->g_196 p_2380->g_227 p_2380->g_388 p_2380->g_2101 p_2380->g_531 p_2380->g_187 p_2380->g_210 p_2380->g_213 p_2380->g_76 p_2380->g_98 p_2380->g_79 p_2380->g_473 p_2380->g_1939 p_2380->g_2129 p_2380->g_3 p_2380->g_1460 p_2380->g_39 p_2380->g_236 p_2380->g_2197 p_2380->g_2222 p_2380->g_2256 p_2380->g_198 p_2380->g_1933 p_2380->g_2314 p_2380->g_461 p_2380->g_143 p_2380->g_130
 */
int32_t  func_4(int8_t  p_5, int64_t  p_6, int32_t  p_7, uint32_t  p_8, int32_t  p_9, struct S0 * p_2380)
{ /* block id: 907 */
    int16_t l_1999 = 0x0817L;
    uint16_t *l_2018[2];
    uint16_t **l_2017 = &l_2018[0];
    int32_t l_2019[7][5][7] = {{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}},{{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L},{0x0F6C83B1L,7L,4L,(-1L),0x6516C672L,(-6L),0x136EEED3L}}};
    int32_t *l_2020[4][9] = {{&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98},{&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98},{&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98},{&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98,&p_2380->g_98}};
    uint32_t l_2021 = 1UL;
    uint8_t l_2123 = 250UL;
    uint32_t l_2267 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2018[i] = &p_2380->g_196;
    if ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1999, (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((*p_2380->g_38), ((l_2021 ^= (safe_add_func_int32_t_s_s((0UL >= ((safe_mul_func_int16_t_s_s((((void*)0 == &p_2380->g_1519[2][2]) & ((l_2019[4][0][6] = (+(safe_lshift_func_int16_t_s_s(((((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((*p_2380->g_198) = (safe_unary_minus_func_int64_t_s(l_1999))), 2)), (((~(((void*)0 != l_2017) , (p_5 >= 18446744073709551608UL))) > 0x0B2AC62D554B82EFL) < (*p_2380->g_1032)))) & 0xDFFDC6B4L) < p_9) || (**p_2380->g_213)) && p_5) | (-5L)), l_1999)))) || p_7)), 0L)) < l_1999)), p_2380->g_1301))) | p_6))) >= p_6), p_9)), p_8)))), 1)), 1UL)))
    { /* block id: 911 */
        uint8_t l_2022[2][3] = {{255UL,0x9BL,255UL},{255UL,0x9BL,255UL}};
        int i, j;
        --l_2022[0][1];
    }
    else
    { /* block id: 913 */
        uint32_t l_2025 = 4294967293UL;
        int32_t l_2092[3][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
        int16_t *l_2103 = &l_1999;
        uint32_t ***l_2121 = &p_2380->g_943;
        uint64_t **l_2128 = &p_2380->g_548;
        int16_t l_2289 = 5L;
        uint64_t l_2321 = 18446744073709551608UL;
        int i, j;
        for (p_2380->g_199 = 0; (p_2380->g_199 <= 2); p_2380->g_199 += 1)
        { /* block id: 916 */
            uint32_t l_2039 = 0x655D2E3DL;
            int32_t l_2083 = 0x52C3DCE3L;
            int32_t l_2090 = 0x7CDE4F8BL;
            uint64_t *l_2166[4];
            int16_t *l_2242 = (void*)0;
            uint64_t **l_2255 = &l_2166[2];
            uint64_t ***l_2254 = &l_2255;
            uint8_t l_2259 = 6UL;
            int16_t l_2283 = 7L;
            int i;
            for (i = 0; i < 4; i++)
                l_2166[i] = (void*)0;
            for (p_2380->g_32 = 0; (p_2380->g_32 >= 0); p_2380->g_32 -= 1)
            { /* block id: 919 */
                int32_t l_2027 = 0x2A93E477L;
                int32_t l_2053 = 0x4D702E54L;
                int32_t *l_2070[1][4] = {{&p_2380->g_3,&p_2380->g_3,&p_2380->g_3,&p_2380->g_3}};
                uint8_t *l_2124 = &p_2380->g_39;
                int8_t l_2136[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                uint32_t *l_2194 = (void*)0;
                uint32_t *l_2195 = &p_2380->g_236;
                uint32_t *l_2196 = &p_2380->g_2197;
                int16_t *l_2243 = &l_1999;
                int i, j;
                for (l_2021 = 0; (l_2021 <= 2); l_2021 += 1)
                { /* block id: 922 */
                    uint16_t l_2026[1];
                    int8_t l_2047 = 0x46L;
                    int32_t l_2048[2];
                    uint32_t *l_2091[10][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    uint64_t *l_2099 = &p_2380->g_388;
                    uint64_t *l_2100 = &p_2380->g_2101[3][1];
                    int16_t *l_2102[4];
                    uint32_t ***l_2122[10] = {(void*)0,&p_2380->g_943,(void*)0,(void*)0,&p_2380->g_943,(void*)0,(void*)0,&p_2380->g_943,(void*)0,(void*)0};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2026[i] = 65535UL;
                    for (i = 0; i < 2; i++)
                        l_2048[i] = 0x05085B66L;
                    for (i = 0; i < 4; i++)
                        l_2102[i] = &p_2380->g_531[0];
                    for (p_8 = 0; (p_8 <= 0); p_8 += 1)
                    { /* block id: 925 */
                        int16_t *l_2034 = (void*)0;
                        int16_t *l_2035[1];
                        int32_t l_2036 = 0L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_2035[i] = &p_2380->g_531[2];
                        p_7 = (((l_2048[0] = ((l_2025 <= (+(l_2026[0] >= l_2027))) , (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((l_2036 |= l_2025) <= (p_6 == (safe_div_func_int16_t_s_s((l_2047 = ((l_2039 && ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((p_8 < p_5) & (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_s((((l_2026[0] , p_7) < p_7) , (*p_2380->g_1032)), 4))))), 0)), 1)) && l_2026[0])) < (-10L))), 0xE1DFL)))), l_2027)) < p_5), p_6)))) , p_7) != 0UL);
                    }
                    for (p_2380->g_47 = 0; (p_2380->g_47 >= 0); p_2380->g_47 -= 1)
                    { /* block id: 933 */
                        l_2070[0][0] = ((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_2053 = (**p_2380->g_213)), ((**l_2017) ^= (safe_mod_func_int16_t_s_s((**p_2380->g_213), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(p_7, 1UL)), 11)), 0xBE8CL))))))) != (safe_sub_func_int64_t_s_s(l_2048[0], 18446744073709551615UL))), (!((safe_sub_func_int16_t_s_s((((*p_2380->g_548) = ((p_9 < (safe_lshift_func_int8_t_s_s((((p_6 > 0UL) , l_2025) >= 65535UL), 4))) && 0x70DC73232D8D5472L)) ^ 1L), 0x59F6L)) || p_9)))) , &p_7);
                        l_2090 |= (l_2025 < ((+(safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((0x56966CAF4AE3010FL > ((safe_div_func_int8_t_s_s((safe_mod_func_int64_t_s_s((l_2083 == ((safe_mul_func_int8_t_s_s(l_2083, p_5)) ^ (p_7 , (safe_add_func_uint32_t_u_u(4294967295UL, p_2380->g_520))))), (safe_rshift_func_uint8_t_u_u((((*p_2380->g_611) | p_6) < 0x0FA579B5723D6DB7L), p_9)))), p_6)) & 18446744073709551615UL)), 0x1EACL)), 3)) || 0UL), 7))) < 65530UL));
                    }
                    (*p_2380->g_1984) = func_40((l_2092[1][2] = 0UL), (1L > (0x77FAA1DE46475B91L & (((0x9CE9L | ((safe_lshift_func_uint8_t_u_u(p_6, 5)) , ((p_2380->g_531[0] ^= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((((((*l_2099) = ((*p_2380->g_548) |= p_9)) == ((*l_2100) = 18446744073709551606UL)) ^ p_9) , (((p_2380->g_461 & (**p_2380->g_213)) && 0x1757D8D917FC449BL) >= p_6)) == p_6), p_2380->g_1691[1][0][1])), (*p_2380->g_1032))) >= p_6)) && 8UL))) >= (-1L)) != 0x0200L))), l_2103, p_2380);
                    for (p_2380->g_76 = 0; (p_2380->g_76 <= 2); p_2380->g_76 += 1)
                    { /* block id: 948 */
                        int64_t *l_2106 = (void*)0;
                        int64_t *l_2107[8][1][7] = {{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130,&p_2380->g_130}}};
                        uint8_t *l_2116[3];
                        int32_t *l_2125 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_2116[i] = &p_2380->g_1933;
                        (**p_2380->g_1983) = func_54((*p_2380->g_197), (((((*p_2380->g_611) = ((*p_2380->g_548) <= (l_2048[0] = (p_2380->g_531[3] , (safe_lshift_func_uint8_t_u_u((*p_2380->g_38), 5)))))) < ((((*l_2100) = (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint32_t_u_u(4294967295UL, (~(((l_2092[1][2] && (safe_sub_func_uint8_t_u_u(p_6, ((safe_rshift_func_uint8_t_u_u((p_2380->g_1939--), (((((l_2092[1][2] = (safe_lshift_func_int16_t_s_u(((~(*p_2380->g_38)) & (*p_2380->g_1032)), 11))) , 0x4095481AL) , l_2121) != l_2122[5]) > l_2123))) , p_7)))) < p_8) > l_2025)))) || 0x8A79F8BA5410CD86L) || 0x49L), p_8))) ^ l_2083) != p_9)) , p_5) , 0xBCF46161824DC590L), l_2124, l_2125, p_2380->g_1691[0][1][0], p_2380);
                        (**p_2380->g_1983) = (*p_2380->g_1764);
                        (**p_2380->g_1984) = ((safe_div_func_int8_t_s_s(((p_2380->g_2129 = l_2128) != l_2128), l_2026[0])) ^ p_2380->g_854);
                    }
                }
                (*p_2380->g_249) |= l_2083;
                if ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((*p_2380->g_198), (safe_lshift_func_int16_t_s_u(l_2136[8], (+(p_6 < (l_2092[1][0] , (p_8 != ((safe_mod_func_uint16_t_u_u((~(safe_mul_func_uint16_t_u_u(((**l_2017) ^= p_2380->g_13), (safe_lshift_func_uint16_t_u_s(p_2380->g_1691[1][0][4], 12))))), (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((p_7 , ((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((p_5 || 1L), p_2380->g_1933)), 0x33L)), 0)) | p_2380->g_531[0])), 1L)), (*p_2380->g_38))), p_7)))) && 0L))))))))) , (-4L)), 0)))
                { /* block id: 962 */
                    int32_t l_2165 = 0L;
                    for (l_2123 = 0; (l_2123 <= 0); l_2123 += 1)
                    { /* block id: 965 */
                        int i, j, k;
                        p_7 |= l_2090;
                        (**p_2380->g_1458) = (void*)0;
                        l_2092[1][1] = (safe_add_func_uint8_t_u_u((((*p_2380->g_38) ^= l_2039) | ((safe_mul_func_uint8_t_u_u((((*l_2103) = (safe_mul_func_int8_t_s_s((((safe_div_func_int16_t_s_s((!(**p_2380->g_213)), 3L)) >= 0xD2L) < (((((((((*p_2380->g_1032) == (safe_rshift_func_int16_t_s_u(((l_2165 , l_2166[2]) == (*p_2380->g_1465)), 12))) != (((p_7 < l_2165) == (*p_2380->g_611)) <= p_2380->g_76)) && p_2380->g_210[2][1][3]) < p_2380->g_1522) == p_7) ^ p_2380->g_143) | 3L) != l_2165)), 248UL))) | (*p_2380->g_214)), p_7)) >= p_8)), (*p_2380->g_198)));
                        l_2092[1][2] &= ((!(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*p_2380->g_214) == p_2380->g_473), ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0xFCC6L, (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*l_2103) = (*p_2380->g_214)), ((**l_2017) = (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_2165, ((~(safe_mod_func_uint8_t_u_u((((p_6 != (*p_2380->g_214)) == ((((void*)0 != &p_2380->g_198) & 5UL) < (**p_2380->g_197))) | 4UL), (*p_2380->g_1032)))) , 0x468AL))), l_2025))))), p_8)), p_9)))), 1UL)) , p_5))), (*p_2380->g_1032))) >= 0x07A1L) ^ p_7)) || l_2165);
                    }
                }
                else
                { /* block id: 975 */
                    int16_t l_2187 = 0x2065L;
                    int32_t *l_2191 = &l_2090;
                    p_7 = (l_2187 || (+(safe_unary_minus_func_uint64_t_u((--(*p_2380->g_548))))));
                    (*p_2380->g_1984) = l_2191;
                }
                if ((p_5 != ((l_2083 , &l_2039) == ((&p_7 != (void*)0) , func_40(((*l_2196) &= ((*l_2195) = (((safe_mod_func_uint8_t_u_u((**p_2380->g_197), 1UL)) < (((~(p_2380->g_143 , p_9)) || (**p_2380->g_197)) , (*p_2380->g_1032))) | 1UL))), p_9, l_2103, p_2380)))))
                { /* block id: 982 */
                    int16_t ***l_2220[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint8_t *l_2221 = &p_2380->g_1939;
                    int32_t l_2234 = 0x3F0D2296L;
                    int i;
                    if ((p_2380->g_2222[0][3][1] = (((((*p_2380->g_611) & (safe_mul_func_uint8_t_u_u((((0x54C5L ^ (p_7 <= p_2380->g_1992)) < (safe_rshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(0x68E62937915C5983L, (safe_add_func_uint8_t_u_u((((+((0xFE7BL <= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, (--(*p_2380->g_38)))), (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_2221) = (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint64_t_u_u((l_2220[3] == &p_2380->g_213), p_7)) && 0UL) <= 0x53EFL), p_8))), l_2083)), 14)) || l_2083) | p_5)))) != 0x10L)) >= (**p_2380->g_213)) | 0xDA39AB63L), p_7)))) >= p_6), 3))) < 2L), 0x37L))) < 9UL) & p_2380->g_196) && 4294967289UL)))
                    { /* block id: 986 */
                        l_2090 ^= (safe_mul_func_uint8_t_u_u(p_7, (safe_mul_func_uint8_t_u_u(0xAFL, (**p_2380->g_197)))));
                    }
                    else
                    { /* block id: 988 */
                        uint8_t l_2233 = 1UL;
                        int32_t l_2241 = 0x7CB758C9L;
                        (**p_2380->g_1983) = func_40((p_8 <= (l_2241 = (safe_mul_func_int16_t_s_s((0x55L <= (((p_2380->g_196++) & ((safe_sub_func_int64_t_s_s(l_2233, (1L && 8UL))) == l_2234)) == (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((-3L), (safe_div_func_uint64_t_u_u(((*p_2380->g_611) != 0L), l_2092[2][1])))), 0xBD4AC961L)))), (*p_2380->g_214))))), p_7, l_2242, p_2380);
                        (*p_2380->g_79) = (***p_2380->g_1983);
                        (**p_2380->g_1983) = func_40(p_2380->g_657, (*p_2380->g_548), (((*p_2380->g_213) != (void*)0) , l_2243), p_2380);
                    }
                }
                else
                { /* block id: 995 */
                    uint32_t l_2244[8][4][7] = {{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}},{{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL},{0UL,4UL,0UL,0xCCFF84D0L,0x859F9615L,4294967295UL,4294967287UL}}};
                    int i, j, k;
                    (*p_2380->g_1984) = &p_7;
                    l_2244[2][0][1]++;
                }
            }
            p_2380->g_47 &= (safe_div_func_uint16_t_u_u((((((safe_unary_minus_func_int32_t_s(((safe_add_func_uint32_t_u_u((((l_2092[1][2] = (safe_add_func_int16_t_s_s(p_8, p_2380->g_708))) || ((((((&l_2166[0] != (p_2380->g_2256 = ((*l_2254) = (void*)0))) != (safe_sub_func_uint64_t_u_u(((**l_2128) = (p_8 != ((p_6 >= p_6) , (l_2259 && (!p_5))))), p_7))) < p_6) || 0x2CL) < 7L) , p_7)) >= (*p_2380->g_611)), 0x27A6E092L)) != p_5))) ^ 0x5430L) < 0x7A908204A9F0E05CL) || p_2380->g_1467[0]) != 4294967295UL), (*p_2380->g_214)));
            for (p_2380->g_187 = 0; (p_2380->g_187 <= 2); p_2380->g_187 += 1)
            { /* block id: 1007 */
                uint64_t *l_2279 = &p_2380->g_2101[7][1];
                int32_t *l_2282 = &l_2092[1][2];
                uint8_t *l_2290 = (void*)0;
                if ((((*p_2380->g_611) , (0xD577L && 0x4EF5L)) , (p_7 = ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(p_9, 0x618F96B4L)) && (!0x03FE5607L)), l_2025)) | l_2090))))
                { /* block id: 1009 */
                    uint8_t *l_2264 = &p_2380->g_199;
                    uint32_t *l_2280 = (void*)0;
                    uint32_t *l_2281 = &l_2039;
                    (**p_2380->g_1983) = func_54(((*p_2380->g_197) = l_2264), (+((~(safe_mul_func_int16_t_s_s((p_7 | l_2267), ((safe_sub_func_uint64_t_u_u((((((*p_2380->g_611) <= (-6L)) && ((safe_lshift_func_uint8_t_u_u((((((*l_2281) = ((((0x79F6L == (safe_div_func_uint64_t_u_u(0UL, (+(safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(p_7, (*p_2380->g_38))))))))) , l_2279) == (void*)0) || l_2092[1][2])) | p_9) & (*p_2380->g_38)) <= (*p_2380->g_38)), 5)) | p_8)) >= 0L) , 0xD375A9F46BED5E3EL), p_7)) , p_2380->g_520)))) , (*p_2380->g_1466))), &l_2259, l_2282, p_7, p_2380);
                    (*p_2380->g_1984) = (*p_2380->g_108);
                    for (l_2083 = 0; (l_2083 <= 0); l_2083 += 1)
                    { /* block id: 1016 */
                        return p_6;
                    }
                }
                else
                { /* block id: 1019 */
                    int32_t ***l_2288[7] = {&p_2380->g_1984,&p_2380->g_1984,&p_2380->g_1984,&p_2380->g_1984,&p_2380->g_1984,&p_2380->g_1984,&p_2380->g_1984};
                    int i;
                    for (p_7 = 2; (p_7 >= 0); p_7 -= 1)
                    { /* block id: 1022 */
                        int i, j, k;
                        (**p_2380->g_1983) = (void*)0;
                        (*l_2282) |= ((((!p_6) , (p_9 == p_8)) & (l_2283 <= (p_9 == (safe_div_func_uint16_t_u_u((((**p_2380->g_213) &= ((*l_2103) = p_5)) > (((p_5 > (((l_2288[3] != &p_2380->g_108) || l_2090) > 0x2777045DL)) | p_5) >= 0x7A24BEAC12866A87L)), l_2289))))) | p_6);
                    }
                }
                for (p_8 = 0; (p_8 <= 0); p_8 += 1)
                { /* block id: 1031 */
                    int8_t l_2307 = 1L;
                    uint64_t **l_2331 = (void*)0;
                    (*l_2282) = (p_7 = p_5);
                    if (p_6)
                        break;
                    for (l_2039 = 0; (l_2039 <= 0); l_2039 += 1)
                    { /* block id: 1037 */
                        uint32_t *l_2293 = &l_2025;
                        uint8_t *l_2306 = &p_2380->g_1933;
                        (**p_2380->g_1983) = func_54(l_2290, (0L == (((safe_mod_func_uint32_t_u_u(((*l_2293) = p_2380->g_1939), ((((*p_2380->g_611) = (safe_lshift_func_uint8_t_u_s((l_2307 = (((void*)0 == &p_2380->g_1784) < (safe_lshift_func_uint8_t_u_s(((*l_2306) = ((-9L) || (safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((&p_2380->g_196 == ((((safe_add_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(0x34083B50L, ((((*p_2380->g_38) = 1UL) | 0x23L) != 0x5122344DL))) == p_2380->g_1189) >= (*p_2380->g_198)) <= p_2380->g_47), l_2092[1][2])) | p_8) < p_7) , l_2242)), 0xE831DD9F6451F01FL)), l_2259)))), 5)))), 7))) == l_2283) , 0x50B7EC4DL))) , p_7) || 0x8046F23EE2DABF53L)), (*p_2380->g_197), l_2293, p_2380->g_227, p_2380);
                        (**p_2380->g_1983) = func_54(&l_2123, ((safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u((~(safe_div_func_uint64_t_u_u((p_2380->g_2314 = ((void*)0 == l_2020[2][4])), l_2090))), (safe_sub_func_int16_t_s_s(l_2307, ((**l_2017) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_2321, (safe_add_func_uint64_t_u_u((0x7D85A3CD4DB03F72L ^ (-2L)), (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(((void*)0 == (*l_2121)), p_2380->g_1951)))) , p_6), (*p_2380->g_38))))))), p_8))))))) , 0L), 2)) , 18446744073709551611UL), (*p_2380->g_197), &l_2090, p_5, p_2380);
                        (**p_2380->g_1984) = (1UL && ((l_2306 == &p_2380->g_1189) > ((*l_2282) = (safe_rshift_func_int8_t_s_s(((!(l_2331 != ((*l_2254) = (*l_2254)))) >= (safe_rshift_func_int16_t_s_s(l_2307, (safe_unary_minus_func_uint16_t_u(p_2380->g_47))))), 7)))));
                    }
                }
            }
        }
        for (p_2380->g_461 = 0; (p_2380->g_461 == 59); ++p_2380->g_461)
        { /* block id: 1056 */
            int32_t l_2351[10];
            uint32_t **l_2372[2];
            int i;
            for (i = 0; i < 10; i++)
                l_2351[i] = 0L;
            for (i = 0; i < 2; i++)
                l_2372[i] = &p_2380->g_944[2][3][1];
            for (p_2380->g_143 = 0; (p_2380->g_143 <= 3); p_2380->g_143 += 1)
            { /* block id: 1059 */
                uint64_t *l_2359[9][6][4] = {{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}},{{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143},{&p_2380->g_143,(void*)0,&p_2380->g_143,&p_2380->g_143}}};
                uint64_t **l_2358 = &l_2359[7][5][1];
                int64_t *l_2360 = &p_2380->g_130;
                int32_t l_2361 = 1L;
                int32_t l_2373 = 0x3E0949E5L;
                int i, j, k;
                p_2380->g_47 |= (safe_mod_func_int64_t_s_s(((((*p_2380->g_38) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((**p_2380->g_213), ((((((p_6 = ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_9 < ((((((((l_2351[8] <= (((**l_2017) = ((((*p_2380->g_1032) = (*p_2380->g_1032)) , (safe_div_func_int64_t_s_s(p_6, (safe_div_func_uint32_t_u_u((((((*l_2360) |= (((safe_lshift_func_uint8_t_u_s(0x79L, (l_2358 != &p_2380->g_1466))) && (+((*p_2380->g_198) = 255UL))) | 0x3706L)) == 0x5763C7C4FD43417BL) , (void*)0) == (void*)0), p_8))))) != 1UL)) != p_8)) >= 0x17L) , p_2380->g_227) | 0xB014ADF5L) , (*p_2380->g_214)) , p_6) >= 4L) < 1L)), l_2321)) ^ 0x7C1DA217L), l_2351[4])) == 0x5CL), l_2361)), l_2351[8])) <= l_2351[8])) > p_5) , p_2380->g_2314) || p_2380->g_565) != p_8) , p_5))), p_2380->g_2222[0][3][1]))) <= p_7) , l_2321), l_2321));
                p_7 = 0x0957DB2FL;
                l_2351[8] &= (-1L);
                (**p_2380->g_1983) = ((safe_sub_func_int32_t_s_s(p_6, ((l_2361 = (safe_mod_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((p_8 != (**p_2380->g_213)), p_5)) , p_6), (((--(**p_2380->g_2129)) || (safe_div_func_int32_t_s_s((p_9 ^ ((((*p_2380->g_548) == l_2361) , l_2372[1]) == l_2372[0])), p_2380->g_1691[0][1][4]))) && p_9)))) == l_2373))) , &p_7);
            }
            return p_7;
        }
        p_7 &= (-4L);
    }
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_199 p_2380->g_1983 p_2380->g_943 p_2380->g_944 p_2380->g_707 p_2380->g_708 p_2380->g_197 p_2380->g_198 p_2380->g_611 p_2380->g_473 p_2380->g_249 p_2380->g_548 p_2380->g_227
 * writes: p_2380->g_1983 p_2380->g_1496 p_2380->g_98
 */
uint64_t  func_18(uint8_t * p_19, int16_t  p_20, uint8_t * p_21, uint8_t * p_22, struct S0 * p_2380)
{ /* block id: 901 */
    uint32_t l_1980[10] = {4294967295UL,0x094F0DDAL,4294967295UL,4294967295UL,0x094F0DDAL,4294967295UL,4294967295UL,0x094F0DDAL,4294967295UL,4294967295UL};
    int32_t ****l_1985[1];
    int32_t *l_1986[5] = {&p_2380->g_1496[3][0],&p_2380->g_1496[3][0],&p_2380->g_1496[3][0],&p_2380->g_1496[3][0],&p_2380->g_1496[3][0]};
    int64_t l_1991 = 0x40615ECE5BBCE117L;
    int i;
    for (i = 0; i < 1; i++)
        l_1985[i] = &p_2380->g_1983;
    l_1991 = ((*p_2380->g_249) = ((((safe_mod_func_uint8_t_u_u((*p_22), l_1980[6])) , (safe_rshift_func_uint8_t_u_s(((p_20 , (p_2380->g_1983 = p_2380->g_1983)) == ((p_2380->g_1496[5][2] = ((void*)0 == (*p_2380->g_943))) , &p_2380->g_542)), 7))) || p_20) < ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((((p_20 <= p_20) == 0UL) < (*p_2380->g_707)), (**p_2380->g_197))) || (*p_2380->g_611)), p_20)) == 0x9EBC59FBL)));
    return (*p_2380->g_548);
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_1859 p_2380->g_76 p_2380->g_942 p_2380->g_943 p_2380->g_1465 p_2380->g_1466 p_2380->g_1467 p_2380->g_1032 p_2380->g_236 p_2380->g_47 p_2380->g_214 p_2380->g_32 p_2380->g_611 p_2380->g_473 p_2380->g_213 p_2380->g_198 p_2380->g_199 p_2380->g_1496 p_2380->g_98 p_2380->g_38 p_2380->g_39 p_2380->g_197 p_2380->g_210 p_2380->g_1189 p_2380->g_548 p_2380->g_227 p_2380->g_1301 p_2380->g_1522 p_2380->g_1951
 * writes: p_2380->g_47 p_2380->g_1189 p_2380->g_76 p_2380->g_944 p_2380->g_130 p_2380->g_98 p_2380->g_39 p_2380->g_199 p_2380->g_1933 p_2380->g_473 p_2380->g_1301 p_2380->g_1522 p_2380->g_744
 */
uint8_t * func_23(int32_t  p_24, uint8_t * p_25, uint16_t  p_26, struct S0 * p_2380)
{ /* block id: 851 */
    uint16_t l_1866 = 0x28C6L;
    int32_t *l_1871 = &p_2380->g_3;
    int64_t **l_1896 = &p_2380->g_927[2][4];
    int32_t l_1940 = 0L;
    int32_t *l_1954 = &p_2380->g_47;
    int32_t *l_1955 = &p_2380->g_47;
    int32_t *l_1956 = &l_1940;
    int32_t *l_1957 = &l_1940;
    int32_t *l_1958 = &p_2380->g_47;
    int32_t *l_1959 = &p_2380->g_3;
    int32_t *l_1960 = &p_2380->g_47;
    int32_t *l_1961 = &p_2380->g_98;
    int32_t *l_1962 = &p_2380->g_98;
    int32_t *l_1963 = &p_2380->g_47;
    int32_t l_1964 = 0L;
    int32_t *l_1965 = &l_1940;
    int32_t *l_1966 = (void*)0;
    int32_t *l_1967 = &p_2380->g_98;
    int32_t *l_1968 = &p_2380->g_98;
    int32_t l_1969 = (-1L);
    int32_t l_1970 = 0x28655DB6L;
    int32_t l_1971 = (-7L);
    int32_t l_1972 = 0x38FD453EL;
    int32_t *l_1973[9] = {&l_1972,&p_2380->g_3,&l_1972,&l_1972,&p_2380->g_3,&l_1972,&l_1972,&p_2380->g_3,&l_1972};
    uint32_t l_1974 = 0x365068A9L;
    int i;
    for (p_26 = (-30); (p_26 > 51); p_26 = safe_add_func_uint64_t_u_u(p_26, 7))
    { /* block id: 854 */
        uint8_t *l_1860 = &p_2380->g_39;
        int32_t *l_1869 = &p_2380->g_47;
        int32_t l_1934 = 0x5692099EL;
        (*p_2380->g_1859) = (+(-8L));
        for (p_2380->g_47 = 2; (p_2380->g_47 >= 0); p_2380->g_47 -= 1)
        { /* block id: 858 */
            return l_1860;
        }
        for (p_2380->g_1189 = 0; (p_2380->g_1189 >= 0); p_2380->g_1189 -= 1)
        { /* block id: 863 */
            int32_t *l_1861 = &p_2380->g_98;
            int32_t *l_1862 = (void*)0;
            int32_t *l_1863 = &p_2380->g_47;
            int32_t *l_1864 = &p_2380->g_98;
            int32_t *l_1865[5][9][5] = {{{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0}},{{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0}},{{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0}},{{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0}},{{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0},{&p_2380->g_98,&p_2380->g_98,(void*)0,(void*)0,(void*)0}}};
            int32_t **l_1870 = (void*)0;
            uint32_t *l_1878[9][1][2] = {{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461}}};
            int32_t l_1897 = 0x116E772DL;
            int64_t l_1941 = 6L;
            int i, j, k;
            ++l_1866;
            l_1871 = l_1869;
            for (p_2380->g_76 = 0; (p_2380->g_76 <= 0); p_2380->g_76 += 1)
            { /* block id: 868 */
                uint32_t *l_1875 = (void*)0;
                uint32_t **l_1874 = &l_1875;
                uint32_t *l_1877 = &p_2380->g_461;
                uint32_t **l_1876[8];
                int64_t *l_1895 = &p_2380->g_130;
                uint8_t *l_1932 = &p_2380->g_1933;
                uint16_t *l_1935 = (void*)0;
                uint16_t *l_1936 = (void*)0;
                uint16_t *l_1937 = &l_1866;
                uint8_t *l_1938[7][5][1] = {{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}},{{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939},{&p_2380->g_1939}}};
                int32_t l_1952[2][6][10] = {{{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL}},{{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL},{0x0A86511BL,0x69774167L,0x29675673L,0x0F4BED69L,1L,0x0A86511BL,0x0F4BED69L,(-4L),0x0F4BED69L,0x0A86511BL}}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_1876[i] = &l_1877;
                (*l_1864) &= ((((safe_rshift_func_uint16_t_u_u((((((((((*l_1874) = ((**p_2380->g_942) = (void*)0)) != (l_1878[4][0][1] = l_1871)) < ((((**p_2380->g_1465) , (*p_2380->g_1032)) < p_26) , (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((8UL <= p_26), (p_2380->g_236 , (((safe_sub_func_int64_t_s_s(((*l_1895) = (safe_rshift_func_int8_t_s_u((*l_1871), (*l_1871)))), 1UL)) || (*p_2380->g_214)) >= 7UL)))), 1L)) , (*p_2380->g_611)), p_24)), (**p_2380->g_213))), 0x7BL)), 1)))) >= 0xE76DA096C02575A7L) , (*l_1871)) , (*p_2380->g_198)) , l_1896) == (void*)0), p_2380->g_1496[5][3])) , l_1897) , p_24) , p_24);
                (*l_1861) = (((((*p_2380->g_611) = ((((*p_2380->g_38)--) & (safe_div_func_int64_t_s_s(p_24, (((safe_div_func_uint8_t_u_u((9UL != ((safe_mod_func_uint8_t_u_u((l_1940 = (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((((~((!((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_1937) = ((**p_2380->g_197) , (safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(0x1667248DL, (-7L))) , ((safe_div_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_1869) = ((*l_1932) = ((*p_2380->g_198) = (safe_mul_func_uint16_t_u_u(0xFB33L, (safe_mul_func_int8_t_s_s(((0x7A3DL >= p_2380->g_98) , (safe_div_func_uint16_t_u_u(p_26, 0x04DDL))), (*l_1864)))))))), (*p_2380->g_1032))), 1L)) != 0x10L) > 0x4E4D6642L) ^ p_24), l_1934)) & 0x01A5L)), (-10L))))), p_2380->g_210[1][1][1])), 7)) , (*l_1871))) > 0x58L)) == p_26) && (**p_2380->g_213)) != p_26), 0x556F405FL)), p_26)), 248UL))), (*p_2380->g_1032))) < 7L)), p_24)) , (*p_2380->g_548)) && l_1941)))) , p_26)) && (*p_2380->g_198)) || 0x2D5E51D3AF476FD1L) | p_24);
                for (p_2380->g_1301 = 0; (p_2380->g_1301 <= 0); p_2380->g_1301 += 1)
                { /* block id: 884 */
                    uint64_t l_1942 = 0x1FC26C075B4176D1L;
                    uint32_t *l_1953 = &p_2380->g_744;
                    for (p_2380->g_1522 = 6; (p_2380->g_1522 >= 0); p_2380->g_1522 -= 1)
                    { /* block id: 887 */
                        int i, j;
                        if (p_2380->g_1496[p_2380->g_1522][(p_2380->g_1301 + 6)])
                            break;
                        return (*p_2380->g_197);
                    }
                    (*l_1863) = ((0L <= (l_1942 <= (safe_mod_func_int16_t_s_s(((0x85L == 0L) > (((*l_1953) = (2UL || ((safe_add_func_uint16_t_u_u(0x7924L, (*l_1869))) & (((((*l_1895) = (safe_sub_func_int8_t_s_s(l_1942, (0UL == 0UL)))) && (*l_1861)) , p_2380->g_1951) & l_1952[1][0][5])))) <= (*l_1861))), p_26)))) | 0x94B2D9D3L);
                }
                if ((*l_1869))
                    break;
            }
        }
    }
    ++l_1974;
    return (*p_2380->g_197);
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_220 p_2380->g_98 p_2380->g_39 p_2380->g_213 p_2380->g_214 p_2380->g_46 p_2380->g_236 p_2380->g_227 p_2380->g_210 p_2380->g_198 p_2380->g_199 p_2380->g_3 p_2380->g_79 p_2380->g_32 p_2380->g_130 p_2380->g_196 p_2380->g_151 p_2380->g_47 p_2380->g_38 p_2380->g_197 p_2380->g_76 p_2380->g_143 p_2380->g_388 p_2380->g_78 p_2380->g_108 p_2380->g_565 p_2380->g_541 p_2380->g_531 p_2380->g_695
 * writes: p_2380->g_199 p_2380->g_76 p_2380->g_39 p_2380->g_47 p_2380->g_236 p_2380->g_187 p_2380->g_227 p_2380->g_130 p_2380->g_32 p_2380->g_196 p_2380->g_3 p_2380->g_98 p_2380->g_388 p_2380->g_79 p_2380->g_210 p_2380->g_565
 */
uint16_t  func_27(int64_t  p_28, uint16_t  p_29, uint8_t * p_30, struct S0 * p_2380)
{ /* block id: 97 */
    int32_t *l_258 = &p_2380->g_3;
    int32_t l_261 = 0x16AAEAA3L;
    int32_t *l_262 = &p_2380->g_3;
    int32_t *l_263 = (void*)0;
    int32_t *l_264 = &p_2380->g_3;
    int32_t *l_265 = (void*)0;
    int32_t l_266 = 0x2766869AL;
    int32_t *l_267[6] = {&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47};
    int8_t l_268 = 0x43L;
    int16_t l_269 = 0x3FC6L;
    int32_t l_270 = 3L;
    uint32_t l_271 = 7UL;
    uint32_t l_274 = 0xD8C083ADL;
    uint32_t l_319[3][6][6] = {{{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L}},{{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L}},{{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L},{0UL,0UL,4294967289UL,0UL,0UL,0xFFC97FB9L}}};
    uint64_t *l_435 = &p_2380->g_227;
    uint16_t l_479 = 0xE8F9L;
    int16_t **l_492 = (void*)0;
    uint32_t l_535 = 4294967295UL;
    int32_t l_644 = 7L;
    uint16_t l_686 = 0x57FDL;
    uint8_t **l_733 = (void*)0;
    uint32_t l_742 = 1UL;
    int8_t **l_799 = &p_2380->g_611;
    uint8_t l_820 = 8UL;
    int64_t l_860 = 0x1C0C51A2E583C838L;
    int8_t l_878 = 0x71L;
    uint32_t l_905 = 0UL;
    int64_t l_1048 = 0x0E7484CF4097102AL;
    uint32_t l_1051[4] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL};
    uint32_t l_1072 = 0x5E7B3A9AL;
    int32_t **l_1093 = &l_265;
    int8_t l_1203 = (-1L);
    int64_t l_1251 = (-10L);
    int32_t l_1252 = (-2L);
    int8_t l_1265[6][3];
    int16_t l_1271 = 0x59A7L;
    uint32_t l_1272 = 0x94AAD4EEL;
    int16_t ***l_1286 = &l_492;
    int8_t *l_1350 = &l_1203;
    int32_t l_1363[6] = {0L,0x4AC508D8L,0L,0L,0x4AC508D8L,0L};
    int64_t **l_1394[1][10] = {{&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4]}};
    int32_t l_1427[6][5] = {{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL},{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL},{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL},{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL},{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL},{0x69B505AEL,0x22614F9EL,(-1L),0x22614F9EL,0x69B505AEL}};
    uint64_t *l_1469 = &p_2380->g_143;
    uint64_t **l_1468 = &l_1469;
    uint32_t **l_1531 = (void*)0;
    uint8_t l_1578 = 0x14L;
    int32_t *l_1613 = &l_1427[5][3];
    int64_t ***l_1656 = &l_1394[0][4];
    int64_t ****l_1655 = &l_1656;
    uint64_t **l_1681 = (void*)0;
    uint64_t ***l_1680 = &l_1681;
    int64_t l_1695 = 0x26861931155A5D67L;
    int8_t l_1699 = 0x16L;
    int64_t l_1781 = 1L;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_1265[i][j] = 0x4EL;
    }
lbl_589:
    l_258 = l_258;
    ++l_271;
    for (p_2380->g_199 = 0; (p_2380->g_199 <= 2); p_2380->g_199 += 1)
    { /* block id: 102 */
        int32_t l_290 = 0x20C228B3L;
        uint32_t *l_316 = (void*)0;
        uint32_t *l_317[8] = {&l_274,&l_274,&l_274,&l_274,&l_274,&l_274,&l_274,&l_274};
        int32_t l_318 = 0x177E3025L;
        int16_t *l_345 = &l_269;
        int64_t *l_399 = &p_2380->g_130;
        uint32_t l_453 = 1UL;
        int32_t l_504 = 0L;
        uint64_t l_517 = 0UL;
        int32_t l_533[2];
        int32_t *l_539[8] = {&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270};
        int32_t l_650 = 0x48FCE1A7L;
        uint8_t l_661 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_533[i] = 1L;
        for (p_2380->g_76 = 2; (p_2380->g_76 >= 0); p_2380->g_76 -= 1)
        { /* block id: 105 */
            uint8_t l_309 = 0x58L;
            for (p_2380->g_39 = 0; (p_2380->g_39 <= 2); p_2380->g_39 += 1)
            { /* block id: 108 */
                int8_t l_299 = 1L;
                for (p_29 = 0; (p_29 <= 2); p_29 += 1)
                { /* block id: 111 */
                    for (p_2380->g_47 = 2; (p_2380->g_47 >= 0); p_2380->g_47 -= 1)
                    { /* block id: 114 */
                        int i, j, k;
                        if ((*p_2380->g_220))
                            break;
                        --l_274;
                    }
                }
                for (p_2380->g_236 = 0; (p_2380->g_236 < 26); p_2380->g_236++)
                { /* block id: 121 */
                    uint32_t l_300[4][6][2] = {{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}}};
                    int32_t l_303 = 0L;
                    uint16_t *l_312[1][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                    uint8_t *l_315 = &l_309;
                    int i, j, k;
                    for (p_2380->g_187 = (-26); (p_2380->g_187 > 57); p_2380->g_187 = safe_add_func_uint64_t_u_u(p_2380->g_187, 4))
                    { /* block id: 124 */
                        uint64_t *l_281 = &p_2380->g_227;
                        int64_t *l_301 = &p_2380->g_130;
                        int32_t l_302[1][5][1] = {{{0x199902EAL},{0x199902EAL},{0x199902EAL},{0x199902EAL},{0x199902EAL}}};
                        uint32_t l_304 = 4294967295UL;
                        int i, j, k;
                        (*p_2380->g_46) = ((*p_30) == (((void*)0 == (*p_2380->g_213)) , 255UL));
                        (*p_2380->g_79) = ((((*l_281) |= p_2380->g_236) ^ ((safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(0x7AL, 7)) < (p_2380->g_210[2][1][3] || (safe_div_func_int16_t_s_s(l_290, ((*p_2380->g_198) && p_2380->g_236))))), (safe_lshift_func_int16_t_s_s((((*p_2380->g_214) = (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(0UL, ((safe_mod_func_uint64_t_u_u(l_299, ((*l_301) = ((((p_2380->g_236 || l_300[3][2][0]) , p_29) <= 65535UL) || 0x3B8CL)))) >= p_28))) , 0x1662457BL), 0x42E423DAL))) || l_302[0][1][0]), (*l_262))))) & l_303), l_304)) <= (*p_30))) | (*l_258));
                        if (p_29)
                            break;
                    }
                    l_303 = (((+(safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_309 > 0x049AFED3L), p_29)), 2))) , ((((*l_264) &= (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int32_t_s((+((p_2380->g_196 = l_299) ^ ((**p_2380->g_213) = (safe_lshift_func_int8_t_s_u((((**p_2380->g_213) != 1L) , p_2380->g_130), 0)))))))))) < (p_28 || ((void*)0 != l_315))) && 9UL)) >= 0x7149L);
                    return l_309;
                }
            }
            for (p_29 = 0; (p_29 <= 2); p_29 += 1)
            { /* block id: 141 */
                return p_2380->g_196;
            }
            (*l_258) ^= (l_316 == l_317[7]);
            for (p_2380->g_98 = 0; (p_2380->g_98 <= 2); p_2380->g_98 += 1)
            { /* block id: 147 */
                return l_309;
            }
        }
        for (p_2380->g_236 = 0; (p_2380->g_236 <= 5); p_2380->g_236 += 1)
        { /* block id: 153 */
            int i;
            if ((**p_2380->g_151))
                break;
            for (l_269 = 2; (l_269 >= 0); l_269 -= 1)
            { /* block id: 157 */
                int i, j, k;
                l_319[1][3][2]++;
            }
        }
        if ((p_2380->g_98 == p_2380->g_32))
        { /* block id: 161 */
            uint8_t *l_322 = &p_2380->g_39;
            uint32_t *l_339 = (void*)0;
            int32_t l_340[6] = {0x64ACF0DCL,0x64ACF0DCL,0x64ACF0DCL,0x64ACF0DCL,0x64ACF0DCL,0x64ACF0DCL};
            int8_t *l_346 = &p_2380->g_76;
            int64_t *l_401 = &p_2380->g_130;
            uint32_t l_402 = 4294967289UL;
            int64_t l_403 = 2L;
            int i;
            (*l_262) = (((l_322 == p_30) , ((*p_30) || l_318)) , (safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((((+(safe_rshift_func_uint16_t_u_u(p_29, (p_2380->g_199 <= ((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((void*)0 == p_30), p_29)), 0)) <= (*p_2380->g_38)))))) ^ 0x1197L) , p_2380->g_199), p_2380->g_210[2][0][5])) || (*p_30)), p_2380->g_199)));
            if (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((p_2380->g_98 >= ((0x17L || ((p_2380->g_187 = ((((((*l_346) = (safe_add_func_int8_t_s_s((&l_269 != ((l_339 != ((!(((*p_2380->g_214) = ((((((4294967288UL == l_340[1]) > (safe_mul_func_uint16_t_u_u(1UL, (safe_sub_func_uint8_t_u_u(l_290, p_2380->g_236))))) >= l_318) == 0x3271BB696564DB51L) > p_29) == (**p_2380->g_197))) >= p_28)) , &p_2380->g_236)) , l_345)), l_318))) || p_2380->g_32) || p_2380->g_76) < p_29) ^ p_29)) != 0x01B55BE6L)) == p_28)), 4)) >= 4L), p_2380->g_210[1][0][5])) | 0xABF0L))
            { /* block id: 166 */
                int32_t **l_347 = &l_262;
                uint64_t *l_364 = &p_2380->g_227;
                int16_t ***l_365 = &p_2380->g_213;
                (*l_347) = &l_266;
                if (p_29)
                    break;
                if (((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(l_290, 0x4A5AEED0L)) != (((((safe_rshift_func_int16_t_s_u((p_30 != ((((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((p_29 != (safe_mod_func_uint64_t_u_u(((((*l_364) = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_28, ((void*)0 == &p_2380->g_130))), ((p_2380->g_236 ^ (&p_2380->g_187 == (void*)0)) ^ 0x07E78FE0421E2236L)))) <= 0UL) && l_290), 1L))), (-5L))) | 1UL) != (*p_2380->g_214)) > (**l_347)), (*p_2380->g_214))) , p_2380->g_76) | 0x7A2098EF1BAC67C9L) , (*p_2380->g_197))), 14)) == 0UL) , &p_2380->g_213) != l_365) , p_2380->g_143)), l_340[0])) ^ 0x03EEL))
                { /* block id: 170 */
                    int16_t l_390 = 0L;
                    uint8_t *l_392 = (void*)0;
                    for (l_261 = 0; (l_261 <= 2); l_261 += 1)
                    { /* block id: 173 */
                        uint64_t *l_386 = (void*)0;
                        uint64_t *l_387 = &p_2380->g_388;
                        int64_t *l_389[9][3][8] = {{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}},{{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130},{&p_2380->g_130,(void*)0,&p_2380->g_130,&p_2380->g_130,(void*)0,(void*)0,&p_2380->g_130,&p_2380->g_130}}};
                        int16_t *l_391 = &p_2380->g_32;
                        int i, j, k;
                        (*l_347) = func_54(p_30, (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((((((**l_347) , ((safe_add_func_uint8_t_u_u(((((*l_364) = p_28) & ((((l_390 &= ((safe_sub_func_uint16_t_u_u(p_2380->g_47, p_2380->g_98)) || ((((*l_387) &= (safe_mod_func_int8_t_s_s(l_290, (safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((p_28 < (safe_mul_func_int8_t_s_s((0x1C45DC3CB3B4597DL > p_28), 0x37L))), (**l_347))) , 0x308AL), (*p_2380->g_214))), 0xDA2BL)) == (**l_347)), (*p_2380->g_38)))))) > p_29) >= (**l_347)))) && l_318) , (-10L)) || p_28)) && p_28), p_2380->g_39)) , l_390)) , l_345) != l_391) , (void*)0) != l_392), 6)), 6)), (*p_2380->g_197), &l_340[1], p_2380->g_76, p_2380);
                        return (**l_347);
                    }
                }
                else
                { /* block id: 180 */
                    return p_2380->g_47;
                }
                return l_318;
            }
            else
            { /* block id: 184 */
                int64_t **l_400 = &l_399;
                int32_t l_404 = 1L;
                int32_t *l_428 = &p_2380->g_210[0][1][6];
                int32_t l_436 = 0x43567593L;
                l_404 ^= ((safe_add_func_int16_t_s_s((((p_2380->g_3 ^ (safe_add_func_uint64_t_u_u((((safe_div_func_int32_t_s_s(((((*p_2380->g_79) = (((((*l_400) = l_399) != l_401) , (p_2380->g_210[2][1][3] <= p_2380->g_130)) , ((255UL != (+(*p_30))) <= p_29))) <= 4294967293UL) | (**p_2380->g_213)), p_2380->g_98)) , l_402) <= p_2380->g_388), 1UL))) & l_318) && p_2380->g_32), 0xE87CL)) == l_403);
                (*l_264) ^= (**p_2380->g_108);
                l_436 ^= (safe_div_func_int16_t_s_s(((*l_258) ^ (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((**p_2380->g_213) ^ (((*l_345) = ((safe_rshift_func_int16_t_s_u((0x98AD1224L > ((((p_28 , (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*l_346) = p_29), (safe_lshift_func_uint16_t_u_u(p_2380->g_39, (((((safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((**p_2380->g_197), ((safe_add_func_int64_t_s_s(((((*l_428) = (*l_258)) , (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((((p_28 == (-1L)) & 6UL) && 0x5E79L) , p_28) != l_402), p_28)), 3)), (*p_2380->g_38)))) >= l_318), p_2380->g_143)) < 0x6EL))) != p_2380->g_130) & 1UL), (*p_2380->g_198))) , l_435) != (void*)0) ^ p_2380->g_196) , p_28))))), p_2380->g_143)))) >= l_404), p_29))) , (void*)0) != l_428) < l_404)), p_2380->g_32)) <= 0x49763BD001C5E73EL)) <= p_29)), l_340[2])), 12)) < (-4L)) & 0x7C42A977L)), p_28));
            }
            if (p_28)
                continue;
            (*p_2380->g_79) = (!(**p_2380->g_151));
        }
        else
        { /* block id: 196 */
            int32_t l_456 = 1L;
            int32_t l_498 = 0x1423B536L;
            int8_t l_500 = 6L;
            int32_t l_501 = 0x42275CF9L;
            int32_t l_506 = 0x04F88878L;
            int32_t l_507 = 0x01ECD0F4L;
            int32_t l_509 = 1L;
            int8_t l_516[4] = {(-1L),(-1L),(-1L),(-1L)};
            int32_t l_562 = 0L;
            int8_t *l_579 = (void*)0;
            int8_t *l_580 = &l_516[2];
            uint64_t *l_643 = (void*)0;
            int i;
            for (p_2380->g_3 = 0; (p_2380->g_3 <= 2); p_2380->g_3 += 1)
            { /* block id: 199 */
                int32_t *l_451[9] = {&p_2380->g_210[2][1][3],(void*)0,&p_2380->g_210[2][1][3],&p_2380->g_210[2][1][3],(void*)0,&p_2380->g_210[2][1][3],&p_2380->g_210[2][1][3],(void*)0,&p_2380->g_210[2][1][3]};
                int32_t l_452 = 1L;
                uint16_t l_459 = 0xB689L;
                uint32_t *l_460[1][8] = {{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461}};
                int32_t l_474[7] = {0L,0L,0L,0L,0L,0L,0L};
                int32_t l_499 = (-6L);
                int32_t l_505 = 0L;
                int16_t **l_513[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_529[2][4][2] = {{{0L,0x76991DBFL},{0L,0x76991DBFL},{0L,0x76991DBFL},{0L,0x76991DBFL}},{{0L,0x76991DBFL},{0L,0x76991DBFL},{0L,0x76991DBFL},{0L,0x76991DBFL}}};
                int32_t l_530 = (-2L);
                int32_t l_532 = 4L;
                int32_t l_534 = 1L;
                uint64_t *l_549 = (void*)0;
                int i, j, k;
                for (l_271 = 0; (l_271 <= 2); l_271 += 1)
                { /* block id: 202 */
                    for (p_2380->g_187 = 0; (p_2380->g_187 <= 2); p_2380->g_187 += 1)
                    { /* block id: 205 */
                        return l_290;
                    }
                }
                if ((*l_264))
                    break;
            }
            for (l_509 = 1; (l_509 <= 5); l_509 += 1)
            { /* block id: 260 */
                int64_t l_555 = 0x5F96A17B429F40B2L;
                int32_t l_556 = 0x71D39526L;
                int32_t l_557 = 0x7526DB00L;
                int32_t l_558[5][10][1] = {{{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L}},{{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L}},{{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L}},{{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L}},{{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L},{0x3CBC31C0L}}};
                int32_t l_559 = (-6L);
                int i, j, k;
                for (l_318 = 5; (l_318 >= 0); l_318 -= 1)
                { /* block id: 263 */
                    int32_t l_560 = 1L;
                    int32_t l_561 = 2L;
                    int32_t l_563 = 0x6E788239L;
                    int32_t l_564[6] = {(-1L),0x6A71DBD8L,(-1L),(-1L),0x6A71DBD8L,(-1L)};
                    int i;
                    for (l_456 = 3; (l_456 >= 0); l_456 -= 1)
                    { /* block id: 266 */
                        int32_t l_553 = 0x3218D1CBL;
                        int32_t l_554[10] = {6L,6L,6L,6L,6L,6L,6L,6L,6L,6L};
                        int32_t **l_568 = &l_263;
                        int i;
                        --p_2380->g_565;
                        (*l_568) = l_317[(l_509 + 2)];
                        (*l_568) = ((*p_2380->g_541) = &l_266);
                    }
                    return p_2380->g_531[l_509];
                }
            }
            if ((safe_mul_func_uint16_t_u_u((p_2380->g_388 , ((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(0x20L, (**p_2380->g_197))) ^ (l_435 != (void*)0)), p_29)) && ((((*p_2380->g_214) ^ ((l_516[3] && (safe_lshift_func_int8_t_s_u(((*l_580) = (-1L)), 6))) ^ (-1L))) < p_2380->g_388) <= 0x3A572586CD8A32D7L)), 5)) , 0xEF62L)), 0UL)))
            { /* block id: 276 */
                uint64_t l_586 = 0x49758DC1BDE311C1L;
                int64_t l_594 = 0x2244F225368335ACL;
                uint8_t l_601 = 2UL;
                int64_t l_630[3][10][5] = {{{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L}},{{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L}},{{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L},{6L,0x753BBA8FA4BF2A0DL,8L,(-9L),8L}}};
                uint64_t l_633 = 0UL;
                uint64_t *l_642[10][1] = {{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143},{&p_2380->g_143}};
                int32_t l_646 = (-4L);
                int32_t l_648 = 3L;
                int32_t l_649 = 0x7EDDD6C4L;
                int32_t l_655 = 1L;
                int32_t l_656 = 0x36345A42L;
                int32_t l_660[2];
                int32_t l_687[3][4] = {{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}};
                uint32_t l_688 = 0xA398E2A3L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_660[i] = 4L;
                for (l_269 = 0; (l_269 <= 7); l_269 = safe_add_func_int64_t_s_s(l_269, 3))
                { /* block id: 279 */
                    for (l_266 = 1; (l_266 > (-18)); --l_266)
                    { /* block id: 282 */
                        int32_t **l_585 = &l_539[7];
                        (*l_585) = &l_261;
                        (**p_2380->g_78) = ((*l_264) &= (~0x4926185CL));
                        --l_586;
                    }
                }
                if (p_2380->g_32)
                    goto lbl_589;
                for (l_290 = 0; (l_290 == (-8)); --l_290)
                { /* block id: 292 */
                    uint16_t l_595 = 65533UL;
                    for (p_2380->g_47 = 0; (p_2380->g_47 >= (-13)); p_2380->g_47 = safe_sub_func_uint64_t_u_u(p_2380->g_47, 4))
                    { /* block id: 295 */
                        int32_t **l_598 = &l_539[6];
                        ++l_595;
                        (*l_598) = (void*)0;
                    }
                    (*l_264) = (safe_rshift_func_uint8_t_u_s((*p_30), ((*l_580) = p_29)));
                    (*l_264) &= l_601;
                }
                for (l_261 = (-10); (l_261 <= (-4)); l_261 = safe_add_func_int8_t_s_s(l_261, 8))
                { /* block id: 305 */
                    uint16_t l_604 = 0UL;
                    int32_t *l_615 = &l_261;
                    int8_t *l_625[6];
                    int32_t l_647[6][3] = {{0x621C0361L,(-3L),0x3C951A5BL},{0x621C0361L,(-3L),0x3C951A5BL},{0x621C0361L,(-3L),0x3C951A5BL},{0x621C0361L,(-3L),0x3C951A5BL},{0x621C0361L,(-3L),0x3C951A5BL},{0x621C0361L,(-3L),0x3C951A5BL}};
                    int32_t l_659[3][6][2] = {{{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL}},{{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL}},{{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL},{0x6590ACFDL,0x6590ACFDL}}};
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_625[i] = (void*)0;
                    l_604--;
                }
            }
            else
            { /* block id: 326 */
                int32_t *l_693 = (void*)0;
                for (l_509 = 0; (l_509 < (-11)); --l_509)
                { /* block id: 329 */
                    int32_t *l_694 = &p_2380->g_3;
                    l_694 = l_693;
                }
                if (l_456)
                    break;
                return p_2380->g_227;
            }
            (*p_2380->g_695) = &l_644;
        }
    }
    for (l_270 = 0; (l_270 <= 2); l_270 += 1)
    { /* block id: 340 */
        uint64_t *l_698 = &p_2380->g_143;
        uint32_t l_740 = 0x21C18668L;
        uint64_t l_846[10][4] = {{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L},{0xFF983B3CFA689672L,0x001756ACD5041B7DL,1UL,0xA89D88A972C51EE4L}};
        int32_t *l_847 = (void*)0;
        int32_t l_849 = 0x27379CC1L;
        int32_t l_852 = 4L;
        int32_t l_858 = 0x46A110E8L;
        int32_t l_864 = 0x75ECED30L;
        int32_t l_867 = 0x63DCF37AL;
        int32_t l_870 = 1L;
        int32_t l_872[1][10] = {{0L,0x74651F9CL,0L,0L,0x74651F9CL,0L,0L,0x74651F9CL,0L,0L}};
        uint8_t l_964[2];
        uint8_t l_1014 = 1UL;
        uint64_t **l_1025 = &p_2380->g_548;
        int64_t l_1071 = (-1L);
        uint32_t ****l_1073 = &p_2380->g_942;
        int8_t l_1218 = (-5L);
        uint64_t l_1248 = 0xB96E587BC3566CDEL;
        int64_t *l_1261[8] = {&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251};
        int8_t **l_1275 = &p_2380->g_611;
        int8_t l_1322 = 0x64L;
        int32_t *l_1364 = &l_864;
        int32_t l_1381 = 0x5E69B211L;
        uint64_t **l_1421[8] = {&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698};
        int64_t ***l_1428 = &l_1394[0][7];
        uint64_t l_1563 = 0x40C4185B8ADA585FL;
        int32_t *l_1566[5][4] = {{&p_2380->g_47,&p_2380->g_98,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_98,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_98,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_98,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_98,&p_2380->g_47,&p_2380->g_47}};
        uint32_t l_1643 = 4294967295UL;
        int32_t *l_1700 = (void*)0;
        int64_t l_1724 = 7L;
        int16_t **l_1767[4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_964[i] = 0x5FL;
        for (i = 0; i < 4; i++)
            l_1767[i] = &p_2380->g_214;
        for (l_274 = 0; (l_274 <= 2); l_274 += 1)
        { /* block id: 343 */
            return p_29;
        }
        if (p_2380->g_32)
            goto lbl_589;
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_3 p_2380->g_46 p_2380->g_32 p_2380->g_39 p_2380->g_78 p_2380->g_47 p_2380->g_38 p_2380->g_76 p_2380->g_98 p_2380->g_108 p_2380->g_143 p_2380->g_79 p_2380->g_149 p_2380->g_151 p_2380->g_130 p_2380->g_187 p_2380->g_196 p_2380->g_197 p_2380->g_213 p_2380->g_198 p_2380->g_199 p_2380->g_210 p_2380->g_214 p_2380->g_220 p_2380->g_227 p_2380->g_236 p_2380->g_249
 * writes: p_2380->g_47 p_2380->g_38 p_2380->g_76 p_2380->g_79 p_2380->g_39 p_2380->g_98 p_2380->g_32 p_2380->g_130 p_2380->g_143 p_2380->g_187 p_2380->g_196 p_2380->g_210 p_2380->g_213 p_2380->g_227 p_2380->g_236 p_2380->g_199
 */
uint8_t * func_34(uint8_t * p_35, uint8_t * p_36, uint64_t  p_37, struct S0 * p_2380)
{ /* block id: 12 */
    uint32_t l_194 = 0x0A4EEA32L;
    uint16_t *l_195 = &p_2380->g_196;
    uint64_t *l_225 = (void*)0;
    uint64_t *l_226 = &p_2380->g_227;
    uint32_t *l_234 = (void*)0;
    uint32_t *l_235 = &p_2380->g_236;
    int16_t **l_245 = &p_2380->g_214;
    int16_t ***l_246 = &p_2380->g_213;
    int16_t l_247[3];
    int32_t *l_248 = (void*)0;
    uint32_t *l_254[2];
    int32_t l_255 = 0L;
    int32_t l_256 = 0x528B2901L;
    uint8_t *l_257 = &p_2380->g_39;
    int i;
    for (i = 0; i < 3; i++)
        l_247[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_254[i] = (void*)0;
    (*p_2380->g_108) = func_40((p_2380->g_3 != ((func_44(&p_2380->g_32, p_2380) & ((l_194 && 0x9505AA5BBA217E51L) && (((*l_195) |= (&p_2380->g_3 == &p_2380->g_3)) < (p_2380->g_197 == &p_2380->g_198)))) <= l_194)), p_2380->g_3, l_195, p_2380);
    (*p_2380->g_249) = ((p_2380->g_187 = (safe_div_func_uint32_t_u_u((((*l_226) |= (&p_2380->g_213 != (void*)0)) < (+(~(safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s((+l_194), 3)) >= (safe_mul_func_int16_t_s_s(l_194, ((((*l_235)++) , (safe_mod_func_int16_t_s_s(p_37, (((safe_sub_func_uint16_t_u_u((((*p_2380->g_79) = (safe_mod_func_uint64_t_u_u((((*p_2380->g_214) = p_37) >= 0x36EEL), (((l_194 || (((((*l_246) = l_245) == &p_2380->g_214) && l_194) , l_194)) <= p_37) ^ p_37)))) < l_247[2]), l_247[2])) , l_247[2]) & (-1L))))) | 7L)))) != l_194), 3))))), p_2380->g_39))) && (**p_2380->g_149));
    l_256 ^= (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((**p_2380->g_197) = (~(*p_2380->g_198))) , (l_255 = ((void*)0 == l_234))), p_2380->g_76)), (*p_35)));
    for (l_256 = 0; l_256 < 3; l_256 += 1)
    {
        for (p_2380->g_32 = 0; p_2380->g_32 < 2; p_2380->g_32 += 1)
        {
            for (l_255 = 0; l_255 < 10; l_255 += 1)
            {
                p_2380->g_210[l_256][p_2380->g_32][l_255] = 0x1A7D0201L;
            }
        }
    }
    return l_257;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_213 p_2380->g_187 p_2380->g_198 p_2380->g_199 p_2380->g_76 p_2380->g_38 p_2380->g_39 p_2380->g_210 p_2380->g_196 p_2380->g_214 p_2380->g_32 p_2380->g_220
 * writes: p_2380->g_187 p_2380->g_210 p_2380->g_213 p_2380->g_76 p_2380->g_98
 */
int32_t * func_40(uint32_t  p_41, uint64_t  p_42, int16_t * p_43, struct S0 * p_2380)
{ /* block id: 74 */
    int32_t *l_200[9] = {&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47};
    uint32_t *l_203 = &p_2380->g_187;
    int32_t **l_206 = (void*)0;
    int32_t **l_207 = &l_200[4];
    int16_t ***l_215 = &p_2380->g_213;
    int8_t *l_218 = (void*)0;
    int8_t *l_219 = &p_2380->g_76;
    int32_t *l_221 = &p_2380->g_47;
    int i;
    l_200[5] = l_200[2];
    (*p_2380->g_220) = (safe_add_func_uint16_t_u_u(((((*l_203) = 0x206E1C7FL) || ((*l_203) = (safe_mod_func_int64_t_s_s(((((*l_207) = (void*)0) == l_203) , (safe_lshift_func_uint8_t_u_s(((p_2380->g_210[2][1][3] = p_42) , (((((*l_219) |= (safe_mod_func_uint8_t_u_u((((((*l_215) = p_2380->g_213) == (void*)0) ^ (p_41 != p_42)) | (safe_sub_func_int64_t_s_s((!p_2380->g_187), p_41))), (*p_2380->g_198)))) > (*p_2380->g_38)) == p_2380->g_210[2][1][3]) ^ 0x517AL)), 3))), p_2380->g_196)))) && 0x452D8340L), (*p_2380->g_214)));
    return l_221;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_46 p_2380->g_32 p_2380->g_39 p_2380->g_78 p_2380->g_47 p_2380->g_38 p_2380->g_76 p_2380->g_98 p_2380->g_3 p_2380->g_108 p_2380->g_143 p_2380->g_79 p_2380->g_149 p_2380->g_151 p_2380->g_130 p_2380->g_187
 * writes: p_2380->g_47 p_2380->g_38 p_2380->g_76 p_2380->g_79 p_2380->g_39 p_2380->g_98 p_2380->g_32 p_2380->g_130 p_2380->g_143 p_2380->g_187
 */
int8_t  func_44(int16_t * p_45, struct S0 * p_2380)
{ /* block id: 13 */
    uint8_t *l_60 = &p_2380->g_39;
    uint8_t **l_61 = &p_2380->g_38;
    int32_t l_62 = 0x0A59C2D1L;
    int8_t *l_75 = &p_2380->g_76;
    uint64_t l_81 = 0xFF020A73BC0E3E0EL;
    int32_t *l_173[1];
    uint16_t l_184 = 0xA04EL;
    uint64_t l_185 = 0xE8204132071F0EE3L;
    uint32_t *l_186 = &p_2380->g_187;
    int64_t l_190 = (-6L);
    int32_t l_191 = 0x500A86EDL;
    int i;
    for (i = 0; i < 1; i++)
        l_173[i] = &l_62;
    (*p_2380->g_46) = (+0x4D538770L);
    (*p_2380->g_46) = (func_48(func_54(l_60, (((((((*l_61) = l_60) != (void*)0) & p_2380->g_32) != l_62) < (safe_lshift_func_int8_t_s_s(((*l_75) = (safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(l_62, l_62)) | l_62), ((((l_62 || p_2380->g_39) == l_62) , &l_60) == (void*)0))), 6)), l_62)) >= l_62), 0x1C911B6BEFC5446EL))), l_62))) , l_62), l_60, &p_2380->g_47, l_62, p_2380), l_62, l_81, l_81, l_81, p_2380) & 0x0EF34A033656F6DEL);
    l_191 &= (((((~((*p_45) = ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(p_2380->g_47, p_2380->g_143)), (safe_rshift_func_uint8_t_u_u(l_184, 1)))), 5)) | (p_2380->g_130 && (((p_2380->g_76 < ((l_185 && (((!(((++(*l_186)) == (p_2380->g_76 >= 0x27D4L)) , (p_2380->g_3 < 0x0A19F7B7F5E4669CL))) && (*p_2380->g_38)) , p_2380->g_3)) | 65535UL)) <= l_190) & p_2380->g_47))), p_2380->g_143)) > 0x089745CEL))) , p_2380->g_32) != 4UL) ^ p_2380->g_47) > p_2380->g_98);
    return p_2380->g_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_47 p_2380->g_38 p_2380->g_32 p_2380->g_76 p_2380->g_98 p_2380->g_39 p_2380->g_46 p_2380->g_3 p_2380->g_108 p_2380->g_143 p_2380->g_79 p_2380->g_78 p_2380->g_149 p_2380->g_151
 * writes: p_2380->g_47 p_2380->g_39 p_2380->g_98 p_2380->g_79 p_2380->g_32 p_2380->g_130 p_2380->g_143
 */
uint64_t  func_48(int32_t * p_49, uint64_t  p_50, int64_t  p_51, int32_t  p_52, int8_t  p_53, struct S0 * p_2380)
{ /* block id: 20 */
    uint8_t l_89[4] = {0x43L,0x43L,0x43L,0x43L};
    int32_t l_95[9] = {0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL,0x1248679CL};
    uint64_t l_164 = 18446744073709551615UL;
    int i;
    for (p_2380->g_47 = 0; (p_2380->g_47 < 8); p_2380->g_47 = safe_add_func_uint32_t_u_u(p_2380->g_47, 6))
    { /* block id: 23 */
        uint32_t l_84 = 4294967295UL;
        uint32_t l_96 = 4294967286UL;
        int32_t *l_97 = &p_2380->g_98;
        (*l_97) |= ((-1L) | (((*p_2380->g_38) = p_53) <= ((--l_84) < ((p_50 || (8UL <= (safe_lshift_func_uint16_t_u_s((p_2380->g_38 != ((0x2EFF69E9DA123482L || ((l_89[1] && (safe_unary_minus_func_uint32_t_u(p_2380->g_47))) ^ ((safe_div_func_int64_t_s_s(((l_95[1] = ((+(safe_rshift_func_uint8_t_u_s(0UL, 4))) > p_2380->g_32)) >= p_2380->g_76), p_52)) | l_96))) , (void*)0)), l_89[1])))) == l_89[2]))));
        (*l_97) ^= (l_89[1] & (((*p_2380->g_38) |= (&p_53 != (void*)0)) ^ (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((&p_2380->g_76 == &p_2380->g_76), 7)), 0xE942A635L))));
    }
    if ((*p_2380->g_46))
    { /* block id: 31 */
        int32_t *l_109 = &p_2380->g_98;
        int64_t l_129 = 0x056167B9C7346DDCL;
        int32_t l_137[5];
        uint8_t *l_146 = &l_89[1];
        int32_t **l_150 = &l_109;
        int32_t *l_152 = &p_2380->g_47;
        int i;
        for (i = 0; i < 5; i++)
            l_137[i] = 0x7FEC589AL;
        for (p_2380->g_47 = 0; (p_2380->g_47 >= (-20)); p_2380->g_47 = safe_sub_func_uint8_t_u_u(p_2380->g_47, 4))
        { /* block id: 34 */
            int32_t *l_107 = (void*)0;
            int16_t *l_114 = &p_2380->g_32;
            int16_t l_132 = 0L;
            int32_t l_136 = 0x2ED4BA02L;
            uint8_t *l_141 = &p_2380->g_39;
            for (p_50 = (-4); (p_50 != 10); p_50 = safe_add_func_int64_t_s_s(p_50, 7))
            { /* block id: 37 */
                uint64_t l_138 = 1UL;
                uint64_t *l_142 = &p_2380->g_143;
                if ((*p_49))
                    break;
                (*p_2380->g_108) = l_107;
                for (p_51 = 0; (p_51 <= 3); p_51 += 1)
                { /* block id: 42 */
                    int32_t l_131[5][4][8] = {{{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L}},{{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L}},{{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L}},{{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L}},{{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L},{0x41380A06L,0x528F58BFL,(-1L),0x0F862678L,0x34670EA8L,(-2L),0x7248D742L,0x0AF3A0D7L}}};
                    int i, j, k;
                    for (p_2380->g_32 = 0; (p_2380->g_32 <= 3); p_2380->g_32 += 1)
                    { /* block id: 45 */
                        int32_t **l_110 = &l_107;
                        int16_t *l_111[5];
                        int16_t *l_113[5] = {&p_2380->g_32,&p_2380->g_32,&p_2380->g_32,&p_2380->g_32,&p_2380->g_32};
                        int16_t **l_112 = &l_113[0];
                        int32_t *l_133 = &l_95[6];
                        int32_t *l_134 = &l_95[1];
                        int32_t *l_135[3][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_111[i] = (void*)0;
                        (*l_110) = l_109;
                        (**l_110) |= ((((&p_2380->g_32 != l_111[4]) < (((*l_112) = (void*)0) != l_114)) < (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((+(safe_sub_func_uint16_t_u_u(0UL, (safe_rshift_func_int16_t_s_u(0x5884L, (((p_2380->g_130 = (l_89[p_51] , ((l_129 , p_50) , p_51))) <= p_51) || p_51)))))), (*p_2380->g_38))), 5)), p_52)) ^ (-1L)), p_2380->g_3)) , 255UL) != p_53), p_2380->g_47))) , (*p_49));
                        (*l_109) |= (*p_2380->g_46);
                        l_138--;
                    }
                }
                (*p_2380->g_149) = func_54(l_141, ((*l_142)++), l_141, func_54(&p_2380->g_39, l_89[2], l_146, (*p_2380->g_108), ((safe_add_func_uint64_t_u_u(p_2380->g_32, p_50)) , (0x6AL == p_52)), p_2380), p_52, p_2380);
            }
        }
        (*p_2380->g_151) = ((*l_150) = (*p_2380->g_108));
        (*l_152) = (*p_49);
    }
    else
    { /* block id: 61 */
        int32_t **l_154 = &p_2380->g_79;
        int32_t *l_155 = &p_2380->g_98;
        int32_t *l_156 = (void*)0;
        int32_t *l_157 = &l_95[1];
        int32_t *l_158 = (void*)0;
        int32_t *l_159 = &p_2380->g_47;
        int32_t *l_160 = &p_2380->g_98;
        int32_t *l_161 = (void*)0;
        int32_t *l_162[1];
        int16_t l_163 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_162[i] = &l_95[5];
        (*l_154) = &p_52;
        l_164++;
        (*l_155) ^= (((*p_2380->g_38)--) && (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0x31A9L, 7)), 0xCC4BC1375103C868L)));
    }
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_2380->g_78
 * writes: p_2380->g_79
 */
int32_t * func_54(uint8_t * p_55, uint64_t  p_56, uint8_t * p_57, int32_t * p_58, int32_t  p_59, struct S0 * p_2380)
{ /* block id: 17 */
    int32_t *l_80[3][3][8] = {{{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47}},{{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47}},{{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47},{&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47,&p_2380->g_47}}};
    int i, j, k;
    (*p_2380->g_78) = &p_2380->g_3;
    return l_80[2][2][3];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2381;
    struct S0* p_2380 = &c_2381;
    struct S0 c_2382 = {
        0x0F69F7FDL, // p_2380->g_3
        0x0FL, // p_2380->g_13
        1L, // p_2380->g_32
        0xF8L, // p_2380->g_39
        &p_2380->g_39, // p_2380->g_38
        (-2L), // p_2380->g_47
        &p_2380->g_47, // p_2380->g_46
        0L, // p_2380->g_76
        (void*)0, // p_2380->g_77
        &p_2380->g_47, // p_2380->g_79
        &p_2380->g_79, // p_2380->g_78
        0x1AF1E100L, // p_2380->g_98
        &p_2380->g_79, // p_2380->g_108
        0x6EC896690B97FFB8L, // p_2380->g_130
        1UL, // p_2380->g_143
        &p_2380->g_79, // p_2380->g_149
        &p_2380->g_79, // p_2380->g_151
        (void*)0, // p_2380->g_153
        0xA576ED2DL, // p_2380->g_187
        7UL, // p_2380->g_196
        0UL, // p_2380->g_199
        &p_2380->g_199, // p_2380->g_198
        &p_2380->g_198, // p_2380->g_197
        {{{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL},{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL}},{{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL},{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL}},{{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL},{(-2L),(-2L),0x101FBCBAL,0L,(-9L),0L,0x101FBCBAL,(-2L),(-2L),0x101FBCBAL}}}, // p_2380->g_210
        &p_2380->g_32, // p_2380->g_214
        &p_2380->g_214, // p_2380->g_213
        &p_2380->g_98, // p_2380->g_220
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_2380->g_222
        0UL, // p_2380->g_227
        0x4DB4BE80L, // p_2380->g_236
        &p_2380->g_98, // p_2380->g_249
        {{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}},{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}},{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}},{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}},{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}},{{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79},{(void*)0,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,(void*)0,&p_2380->g_79}}}, // p_2380->g_259
        (void*)0, // p_2380->g_260
        0xD792CEEDB600DA55L, // p_2380->g_388
        1UL, // p_2380->g_461
        0x0DL, // p_2380->g_471
        0L, // p_2380->g_473
        0x72B958C5L, // p_2380->g_520
        {0x3FF9L,0x3FF9L,0x3FF9L,0x3FF9L,0x3FF9L,0x3FF9L}, // p_2380->g_531
        &p_2380->g_79, // p_2380->g_540
        &p_2380->g_79, // p_2380->g_541
        &p_2380->g_79, // p_2380->g_542
        &p_2380->g_227, // p_2380->g_548
        4294967295UL, // p_2380->g_565
        &p_2380->g_473, // p_2380->g_611
        &p_2380->g_79, // p_2380->g_616
        1L, // p_2380->g_657
        &p_2380->g_79, // p_2380->g_695
        0x7DE195B5370A1038L, // p_2380->g_708
        &p_2380->g_708, // p_2380->g_707
        {&p_2380->g_707,&p_2380->g_707,&p_2380->g_707,&p_2380->g_707}, // p_2380->g_706
        &p_2380->g_79, // p_2380->g_712
        0UL, // p_2380->g_744
        {&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79}, // p_2380->g_774
        (-4L), // p_2380->g_854
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_2380->g_927
        {&p_2380->g_927[2][4],&p_2380->g_927[2][4],&p_2380->g_927[2][4]}, // p_2380->g_926
        {{{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461}},{{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461},{&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461,&p_2380->g_461}}}, // p_2380->g_944
        &p_2380->g_944[2][3][1], // p_2380->g_943
        &p_2380->g_943, // p_2380->g_942
        0L, // p_2380->g_982
        {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}}, // p_2380->g_1010
        &p_2380->g_76, // p_2380->g_1032
        {{&p_2380->g_79,&p_2380->g_79,&p_2380->g_79},{&p_2380->g_79,&p_2380->g_79,&p_2380->g_79},{&p_2380->g_79,&p_2380->g_79,&p_2380->g_79},{&p_2380->g_79,&p_2380->g_79,&p_2380->g_79},{&p_2380->g_79,&p_2380->g_79,&p_2380->g_79}}, // p_2380->g_1127
        0L, // p_2380->g_1189
        0x1BL, // p_2380->g_1219
        0x7B4C9BDC9DE1D8B1L, // p_2380->g_1301
        &p_2380->g_79, // p_2380->g_1342
        8UL, // p_2380->g_1411
        (void*)0, // p_2380->g_1460
        &p_2380->g_1460, // p_2380->g_1459
        &p_2380->g_1459, // p_2380->g_1458
        {0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL,0x6F6AEAE955A8D1ABL}, // p_2380->g_1467
        &p_2380->g_1467[0], // p_2380->g_1466
        &p_2380->g_1466, // p_2380->g_1465
        {&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79,&p_2380->g_79}, // p_2380->g_1486
        (void*)0, // p_2380->g_1487
        {{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L},{1L,0x2715831DL,0x14176F86L,0L,0x14176F86L,0x2715831DL,1L}}, // p_2380->g_1496
        {{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]},{&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2],&p_2380->g_706[2]}}, // p_2380->g_1519
        &p_2380->g_1519[2][2], // p_2380->g_1518
        0x3DBE107BL, // p_2380->g_1522
        (void*)0, // p_2380->g_1637
        &p_2380->g_1637, // p_2380->g_1636
        (void*)0, // p_2380->g_1683
        {{{0xEFL,0xEFL,0xEFL,0xEFL,0xEFL},{0xEFL,0xEFL,0xEFL,0xEFL,0xEFL}},{{0xEFL,0xEFL,0xEFL,0xEFL,0xEFL},{0xEFL,0xEFL,0xEFL,0xEFL,0xEFL}}}, // p_2380->g_1691
        &p_2380->g_79, // p_2380->g_1764
        &p_2380->g_926[1], // p_2380->g_1784
        (void*)0, // p_2380->g_1856
        &p_2380->g_47, // p_2380->g_1859
        255UL, // p_2380->g_1933
        0x1BL, // p_2380->g_1939
        0x10A8749FE915DB61L, // p_2380->g_1951
        &p_2380->g_79, // p_2380->g_1984
        &p_2380->g_1984, // p_2380->g_1983
        0x374E4FD6L, // p_2380->g_1992
        {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}, // p_2380->g_2101
        &p_2380->g_548, // p_2380->g_2129
        4294967292UL, // p_2380->g_2197
        {{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}},{{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL},{0x520B50F6L,0x5DF34FFDL,0x634AAFBEL}}}, // p_2380->g_2222
        (void*)0, // p_2380->g_2256
        1L, // p_2380->g_2314
        0x337835E5L, // p_2380->g_2375
    };
    c_2381 = c_2382;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2380);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2380->g_3, "p_2380->g_3", print_hash_value);
    transparent_crc(p_2380->g_13, "p_2380->g_13", print_hash_value);
    transparent_crc(p_2380->g_32, "p_2380->g_32", print_hash_value);
    transparent_crc(p_2380->g_39, "p_2380->g_39", print_hash_value);
    transparent_crc(p_2380->g_47, "p_2380->g_47", print_hash_value);
    transparent_crc(p_2380->g_76, "p_2380->g_76", print_hash_value);
    transparent_crc(p_2380->g_98, "p_2380->g_98", print_hash_value);
    transparent_crc(p_2380->g_130, "p_2380->g_130", print_hash_value);
    transparent_crc(p_2380->g_143, "p_2380->g_143", print_hash_value);
    transparent_crc(p_2380->g_187, "p_2380->g_187", print_hash_value);
    transparent_crc(p_2380->g_196, "p_2380->g_196", print_hash_value);
    transparent_crc(p_2380->g_199, "p_2380->g_199", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_2380->g_210[i][j][k], "p_2380->g_210[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2380->g_227, "p_2380->g_227", print_hash_value);
    transparent_crc(p_2380->g_236, "p_2380->g_236", print_hash_value);
    transparent_crc(p_2380->g_388, "p_2380->g_388", print_hash_value);
    transparent_crc(p_2380->g_461, "p_2380->g_461", print_hash_value);
    transparent_crc(p_2380->g_471, "p_2380->g_471", print_hash_value);
    transparent_crc(p_2380->g_473, "p_2380->g_473", print_hash_value);
    transparent_crc(p_2380->g_520, "p_2380->g_520", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2380->g_531[i], "p_2380->g_531[i]", print_hash_value);

    }
    transparent_crc(p_2380->g_565, "p_2380->g_565", print_hash_value);
    transparent_crc(p_2380->g_657, "p_2380->g_657", print_hash_value);
    transparent_crc(p_2380->g_708, "p_2380->g_708", print_hash_value);
    transparent_crc(p_2380->g_744, "p_2380->g_744", print_hash_value);
    transparent_crc(p_2380->g_854, "p_2380->g_854", print_hash_value);
    transparent_crc(p_2380->g_982, "p_2380->g_982", print_hash_value);
    transparent_crc(p_2380->g_1189, "p_2380->g_1189", print_hash_value);
    transparent_crc(p_2380->g_1219, "p_2380->g_1219", print_hash_value);
    transparent_crc(p_2380->g_1301, "p_2380->g_1301", print_hash_value);
    transparent_crc(p_2380->g_1411, "p_2380->g_1411", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2380->g_1467[i], "p_2380->g_1467[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2380->g_1496[i][j], "p_2380->g_1496[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2380->g_1522, "p_2380->g_1522", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2380->g_1691[i][j][k], "p_2380->g_1691[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2380->g_1933, "p_2380->g_1933", print_hash_value);
    transparent_crc(p_2380->g_1939, "p_2380->g_1939", print_hash_value);
    transparent_crc(p_2380->g_1951, "p_2380->g_1951", print_hash_value);
    transparent_crc(p_2380->g_1992, "p_2380->g_1992", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_2380->g_2101[i][j], "p_2380->g_2101[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2380->g_2197, "p_2380->g_2197", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2380->g_2222[i][j][k], "p_2380->g_2222[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2380->g_2314, "p_2380->g_2314", print_hash_value);
    transparent_crc(p_2380->g_2375, "p_2380->g_2375", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
