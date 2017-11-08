// -g 10,12,66 -l 1,6,22
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


// Seed: 1994337238

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   int64_t  f1;
};

struct S1 {
    int32_t g_5[4][7];
    int32_t g_7[7];
    uint32_t g_51;
    int32_t g_58;
    int32_t g_61;
    int8_t g_62;
    uint8_t g_63;
    uint64_t g_90;
    uint16_t **g_97;
    uint16_t *** volatile g_98;
    uint16_t *** volatile g_99;
    union U0 g_145;
    uint32_t g_148;
    uint16_t g_153;
    int64_t g_160;
    uint32_t g_166;
    int32_t *g_168[10];
    int32_t ** volatile g_169[5];
    int32_t *g_171;
    int32_t ** volatile g_170;
    uint8_t g_200;
    uint32_t g_202;
    uint8_t *g_210[9];
    uint8_t **g_209[3][7];
    volatile uint32_t g_248;
    volatile uint32_t *g_247;
    volatile uint32_t * volatile * volatile g_246;
    int32_t * volatile g_257[3][2][9];
    int32_t * volatile g_258;
    union U0 g_310;
    volatile uint64_t g_319;
    int64_t g_336;
    volatile uint64_t g_401;
    uint16_t g_436;
    int32_t g_439;
    volatile union U0 g_461;
    volatile union U0 g_462;
    volatile union U0 g_463;
    volatile union U0 g_464[8][4];
    volatile union U0 * volatile g_460[10];
    volatile union U0 * volatile *g_459;
    uint32_t g_483;
    uint16_t g_484[3][2][8];
    uint16_t g_496[5];
    int64_t *g_513;
    int64_t **g_512;
    uint16_t g_530;
    int32_t g_606;
    int16_t g_700;
    int8_t g_717[8][8];
    uint8_t g_727;
    uint64_t g_792[4];
    volatile uint32_t g_847;
    union U0 **g_850;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S1 * p_854);
int32_t * func_8(int32_t  p_9, uint32_t  p_10, uint32_t  p_11, union U0  p_12, struct S1 * p_854);
int32_t  func_13(int32_t * p_14, int32_t  p_15, struct S1 * p_854);
int32_t * func_16(int32_t * p_17, int32_t * p_18, int32_t  p_19, uint64_t  p_20, struct S1 * p_854);
uint32_t  func_22(uint64_t  p_23, int32_t * p_24, struct S1 * p_854);
int32_t * func_25(uint32_t  p_26, int32_t * p_27, int32_t  p_28, struct S1 * p_854);
union U0  func_47(uint32_t  p_48, int8_t  p_49, struct S1 * p_854);
int16_t  func_66(int32_t * p_67, uint8_t  p_68, uint32_t * p_69, struct S1 * p_854);
int32_t * func_70(int32_t  p_71, int32_t  p_72, uint32_t  p_73, uint16_t  p_74, struct S1 * p_854);
uint64_t  func_77(uint64_t  p_78, union U0  p_79, int32_t * p_80, struct S1 * p_854);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_854->g_7 p_854->g_51 p_854->g_63 p_854->g_61 p_854->g_90 p_854->g_62 p_854->g_97 p_854->g_98 p_854->g_99 p_854->g_5 p_854->g_58 p_854->g_160 p_854->g_148 p_854->g_170 p_854->g_153 p_854->g_145.f0 p_854->g_200 p_854->g_171 p_854->g_246 p_854->g_202 p_854->g_258 p_854->g_247 p_854->g_248 p_854->g_166 p_854->g_439 p_854->g_436 p_854->g_310.f0 p_854->g_459 p_854->g_336 p_854->g_483 p_854->g_496 p_854->g_512 p_854->g_463.f0 p_854->g_847 p_854->g_727 p_854->g_850 p_854->g_310
 * writes: p_854->g_5 p_854->g_7 p_854->g_51 p_854->g_63 p_854->g_61 p_854->g_90 p_854->g_97 p_854->g_160 p_854->g_166 p_854->g_168 p_854->g_171 p_854->g_200 p_854->g_202 p_854->g_209 p_854->g_145.f0 p_854->g_58 p_854->g_62 p_854->g_153 p_854->g_439 p_854->g_436 p_854->g_483 p_854->g_484 p_854->g_496 p_854->g_512 p_854->g_530 p_854->g_336 p_854->g_850
 */
uint8_t  func_1(struct S1 * p_854)
{ /* block id: 4 */
    uint16_t l_4 = 0x4144L;
    int32_t *l_6 = &p_854->g_7[6];
    union U0 ***l_851 = &p_854->g_850;
    int32_t **l_853 = &l_6;
    (*l_6) |= (p_854->g_5[0][2] = ((safe_lshift_func_int8_t_s_u(0x15L, l_4)) >= 9UL));
    (*l_853) = func_8(func_13(l_6, (*l_6), p_854), p_854->g_727, (p_854->g_459 != ((*l_851) = p_854->g_850)), p_854->g_310, p_854);
    return (**l_853);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_8(int32_t  p_9, uint32_t  p_10, uint32_t  p_11, union U0  p_12, struct S1 * p_854)
{ /* block id: 333 */
    int32_t *l_852[5];
    int i;
    for (i = 0; i < 5; i++)
        l_852[i] = &p_854->g_439;
    for (p_9 = 0; (p_9 <= 6); p_9 += 1)
    { /* block id: 336 */
        return l_852[1];
    }
    return l_852[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_7 p_854->g_51 p_854->g_63 p_854->g_61 p_854->g_90 p_854->g_62 p_854->g_97 p_854->g_98 p_854->g_99 p_854->g_5 p_854->g_58 p_854->g_160 p_854->g_148 p_854->g_170 p_854->g_153 p_854->g_145.f0 p_854->g_200 p_854->g_171 p_854->g_246 p_854->g_202 p_854->g_258 p_854->g_247 p_854->g_248 p_854->g_166 p_854->g_439 p_854->g_436 p_854->g_310.f0 p_854->g_459 p_854->g_336 p_854->g_483 p_854->g_496 p_854->g_512 p_854->g_463.f0 p_854->g_847
 * writes: p_854->g_51 p_854->g_63 p_854->g_61 p_854->g_7 p_854->g_90 p_854->g_97 p_854->g_160 p_854->g_166 p_854->g_168 p_854->g_171 p_854->g_200 p_854->g_202 p_854->g_209 p_854->g_145.f0 p_854->g_58 p_854->g_62 p_854->g_153 p_854->g_439 p_854->g_436 p_854->g_483 p_854->g_484 p_854->g_496 p_854->g_512 p_854->g_530 p_854->g_336
 */
int32_t  func_13(int32_t * p_14, int32_t  p_15, struct S1 * p_854)
{ /* block id: 7 */
    int32_t *l_21 = &p_854->g_7[6];
    int32_t **l_575 = &p_854->g_171;
    int32_t l_576 = 1L;
    int32_t l_577 = 0x43725938L;
    int32_t l_590 = 0L;
    uint8_t *l_596 = (void*)0;
    uint64_t *l_598 = (void*)0;
    uint32_t *l_602 = &p_854->g_483;
    uint32_t **l_601 = &l_602;
    int64_t **l_646 = &p_854->g_513;
    uint64_t l_719[10];
    int32_t l_813 = 0x6DD5FC81L;
    int64_t *l_829 = &p_854->g_336;
    int64_t **l_828 = &l_829;
    uint64_t *l_836 = &l_719[2];
    uint32_t *l_848 = &p_854->g_166;
    int32_t l_849 = 0x5D4356B3L;
    int i;
    for (i = 0; i < 10; i++)
        l_719[i] = 4UL;
    p_14 = func_16(l_21, ((*l_575) = (func_22(((void*)0 == l_21), func_25((*l_21), l_21, (safe_mod_func_uint64_t_u_u(p_854->g_7[6], p_15)), p_854), p_854) , l_21)), l_576, l_577, p_854);
    for (p_854->g_153 = 0; (p_854->g_153 != 3); p_854->g_153 = safe_add_func_uint32_t_u_u(p_854->g_153, 3))
    { /* block id: 255 */
        uint32_t l_622 = 1UL;
        int64_t l_648 = 0x4A41175448D6756AL;
        int32_t l_678 = 0x5EF186AAL;
        uint32_t l_699[10] = {0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL,0x954B57CFL};
        int32_t l_709 = 0L;
        uint32_t *l_772 = &p_854->g_51;
        uint32_t **l_771 = &l_772;
        uint32_t l_773 = 0x9C76FA37L;
        int32_t **l_810 = &p_854->g_168[0];
        int i;
        for (l_577 = 0; (l_577 <= 6); l_577 += 1)
        { /* block id: 258 */
            uint8_t *l_595 = &p_854->g_63;
            uint8_t *l_597 = &p_854->g_63;
            uint32_t **l_603[4][1][1];
            int16_t l_632 = 5L;
            uint16_t l_647 = 0x27CCL;
            int32_t *l_701 = &p_854->g_7[1];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_603[i][j][k] = &l_602;
                }
            }
            (1 + 1);
        }
        (*l_575) = func_25((p_854->g_166++), ((*l_810) = ((*l_575) = (*p_854->g_170))), p_854->g_5[0][2], p_854);
        if ((**p_854->g_170))
            break;
    }
    (*l_575) = (((safe_sub_func_uint16_t_u_u(l_813, (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_15, p_15)), (safe_mod_func_int16_t_s_s(((((p_15 < (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((void*)0 == l_828), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((++(*l_836)), (((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*l_21) |= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(2UL, p_854->g_847)), ((*l_848) = (p_854->g_202 , p_15))))), 0x24B2B899L)), 2)) > 0x27L) != 0x5C91L) & 0xC9E1C80EL) , (*l_21)))), p_854->g_51)), 0)))) | p_15), p_854->g_61)), 0x87L)), p_15))) >= 0x3487L) > l_849) || (*l_21)), p_854->g_5[0][3])))))) == 1L) , (*p_854->g_170));
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_148 p_854->g_171 p_854->g_7 p_854->g_170
 * writes: p_854->g_171 p_854->g_7
 */
int32_t * func_16(int32_t * p_17, int32_t * p_18, int32_t  p_19, uint64_t  p_20, struct S1 * p_854)
{ /* block id: 246 */
    int32_t **l_578 = &p_854->g_171;
    uint16_t *l_580 = &p_854->g_484[2][0][0];
    uint16_t **l_579[8][2] = {{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580},{&l_580,&l_580}};
    int32_t *l_581[4] = {&p_854->g_439,&p_854->g_439,&p_854->g_439,&p_854->g_439};
    int i, j;
    (*l_578) = (void*)0;
    p_17 = (p_854->g_148 , (*l_578));
    (*p_18) &= ((void*)0 == l_579[0][0]);
    p_19 &= (*p_18);
    return (*p_854->g_170);
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_51 p_854->g_7 p_854->g_63 p_854->g_61 p_854->g_90 p_854->g_62 p_854->g_97 p_854->g_98 p_854->g_99 p_854->g_5 p_854->g_58 p_854->g_160 p_854->g_148 p_854->g_170 p_854->g_153 p_854->g_145.f0 p_854->g_200 p_854->g_171 p_854->g_246 p_854->g_202 p_854->g_258 p_854->g_247 p_854->g_248 p_854->g_166 p_854->g_439 p_854->g_436 p_854->g_310.f0 p_854->g_459 p_854->g_336 p_854->g_483 p_854->g_496 p_854->g_512 p_854->g_463.f0
 * writes: p_854->g_51 p_854->g_63 p_854->g_61 p_854->g_7 p_854->g_90 p_854->g_97 p_854->g_160 p_854->g_166 p_854->g_168 p_854->g_171 p_854->g_200 p_854->g_202 p_854->g_209 p_854->g_145.f0 p_854->g_58 p_854->g_62 p_854->g_153 p_854->g_439 p_854->g_436 p_854->g_483 p_854->g_484 p_854->g_496 p_854->g_512 p_854->g_530 p_854->g_336
 */
uint32_t  func_22(uint64_t  p_23, int32_t * p_24, struct S1 * p_854)
{ /* block id: 11 */
    uint32_t *l_50 = &p_854->g_51;
    int64_t *l_406[10][8][3] = {{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}},{{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336},{&p_854->g_336,&p_854->g_336,&p_854->g_336}}};
    int32_t l_407 = 7L;
    uint16_t *l_422 = &p_854->g_153;
    uint8_t l_433 = 1UL;
    uint32_t *l_434 = &p_854->g_166;
    uint16_t *l_435[4] = {&p_854->g_436,&p_854->g_436,&p_854->g_436,&p_854->g_436};
    uint32_t l_437 = 1UL;
    int32_t *l_438 = &p_854->g_439;
    uint64_t *l_445 = &p_854->g_90;
    int32_t l_574 = 0L;
    int i, j, k;
    (*l_438) &= ((*p_24) = ((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((18446744073709551612UL ^ (((func_47(((*l_50)--), p_854->g_7[0], p_854) , ((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int64_t_s_s((l_407 = p_23), (-10L))) , ((safe_sub_func_int8_t_s_s((0xF60A16BFL == (((((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((((safe_rshift_func_uint16_t_u_u(((l_407 = (l_407 == ((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((*l_422) &= 0xC35DL), (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((+(safe_div_func_uint32_t_u_u(((*l_434) = (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((p_23 ^ 255UL), 9)) > l_433), p_23))), p_23))), 1UL)) & l_407), l_407)))), 7)), p_23)) , p_23))) != 0x8A9FL), 0)) <= l_433) ^ l_433) , l_433) >= (-1L)) == 0x30CBL), 0x4788529AL)), 0x4BL)) , p_23) , 0x5506L) && p_23) , l_433) >= p_23) ^ l_433)), 1UL)) , (*p_854->g_246))) == (void*)0) < l_433), p_23)) != 0L)) & l_437) <= l_437)), l_433)), p_854->g_5[0][2])), 0x7DFBL)) || 0x592FL));
    for (p_854->g_436 = 0; (p_854->g_436 == 22); ++p_854->g_436)
    { /* block id: 187 */
        uint64_t *l_444 = &p_854->g_90;
        int32_t l_470 = 5L;
        int64_t **l_515 = &p_854->g_513;
        int32_t *l_539 = (void*)0;
        for (p_854->g_439 = 16; (p_854->g_439 >= (-7)); --p_854->g_439)
        { /* block id: 190 */
            int8_t l_449 = 1L;
            int64_t *l_450 = &p_854->g_336;
            uint64_t l_471 = 0x7C65D4180406FD34L;
            int32_t l_495[4][2][2] = {{{0x4B35F45FL,0x4B35F45FL},{0x4B35F45FL,0x4B35F45FL}},{{0x4B35F45FL,0x4B35F45FL},{0x4B35F45FL,0x4B35F45FL}},{{0x4B35F45FL,0x4B35F45FL},{0x4B35F45FL,0x4B35F45FL}},{{0x4B35F45FL,0x4B35F45FL},{0x4B35F45FL,0x4B35F45FL}}};
            uint32_t l_573[10][9] = {{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L},{0x3547D03BL,4294967293UL,0UL,4294967295UL,0UL,4294967293UL,0x3547D03BL,0UL,0xBF031775L}};
            int i, j, k;
            if ((l_444 != (l_445 = &p_854->g_90)))
            { /* block id: 192 */
                uint8_t l_448 = 0x8CL;
                int8_t *l_469[10][5] = {{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0},{&l_449,&l_449,&l_449,&l_449,(void*)0}};
                int32_t **l_472 = &p_854->g_168[2];
                int32_t *l_473 = (void*)0;
                int32_t *l_485 = &p_854->g_58;
                int32_t *l_486 = &p_854->g_7[6];
                int32_t l_487 = 0x4635CA28L;
                int32_t *l_488 = &p_854->g_58;
                int32_t *l_489 = &p_854->g_61;
                int32_t l_490[6] = {0x7CBDB531L,(-1L),0x7CBDB531L,0x7CBDB531L,(-1L),0x7CBDB531L};
                int32_t *l_491 = &l_487;
                int32_t *l_492 = &l_490[5];
                int32_t *l_493 = (void*)0;
                int32_t *l_494[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_494[i] = &l_490[5];
                l_473 = ((*l_472) = func_70((*p_854->g_258), p_854->g_310.f0, ((safe_lshift_func_uint16_t_u_s(l_448, (l_444 == (l_449 , l_450)))) | (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((p_854->g_459 == ((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((p_854->g_62 ^= (0xA7A46529DDF33E56L < l_448)) < 4UL), l_470)), l_471)) , (void*)0)), 0x7A42L)) < p_854->g_51) , l_448), p_854->g_90)), 7L)) && p_23), p_23))), p_23, p_854));
                (*p_24) = (safe_mul_func_uint8_t_u_u(((((l_470 <= p_23) ^ (p_23 == (((p_854->g_160 < (safe_unary_minus_func_uint8_t_u((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((p_854->g_62 = l_471) , p_23), (p_854->g_484[1][1][7] = (p_854->g_483 ^= (safe_div_func_int32_t_s_s((((((0xCAA7L == (p_854->g_58 != (((&p_854->g_160 != (void*)0) & p_854->g_336) & p_854->g_160))) , p_854->g_200) == (*l_438)) > (*l_438)) ^ p_23), 0x2A12BD82L)))))) ^ p_854->g_148), (-3L)))))) && (**p_854->g_246)) < (-1L)))) | (*l_438)) >= p_854->g_7[2]), p_23));
                ++p_854->g_496[3];
            }
            else
            { /* block id: 201 */
                int32_t *l_501 = (void*)0;
                uint64_t l_517 = 0xA3ABCB84DA9EA3C6L;
                int32_t l_540 = (-6L);
                int32_t l_541 = 3L;
                for (p_854->g_63 = 8; (p_854->g_63 >= 5); p_854->g_63 = safe_sub_func_uint32_t_u_u(p_854->g_63, 2))
                { /* block id: 204 */
                    int32_t **l_502[10][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    union U0 l_537 = {0L};
                    int i, j, k;
                    if ((l_501 != (p_24 = &l_495[1][0][0])))
                    { /* block id: 206 */
                        return p_23;
                    }
                    else
                    { /* block id: 208 */
                        uint16_t *l_511 = &p_854->g_484[1][1][7];
                        int64_t ***l_514 = &p_854->g_512;
                        int32_t l_516[4];
                        uint8_t *l_538[8];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_516[i] = 0x438F532EL;
                        for (i = 0; i < 8; i++)
                            l_538[i] = &l_433;
                        p_24 = func_25(((*l_434) |= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_854->g_90, (((((((safe_sub_func_uint16_t_u_u(l_470, p_23)) , ((void*)0 == l_511)) , (l_470 = (((*l_514) = p_854->g_512) == l_515))) == p_854->g_7[1]) , (p_23 & 0L)) , (void*)0) != (void*)0))), p_23)), l_516[2]))), &l_495[1][0][1], l_517, p_854);
                        (*p_854->g_170) = func_25((((safe_sub_func_int64_t_s_s((p_854->g_160 ^ (((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_470 = ((((p_854->g_58 , ((((safe_add_func_uint64_t_u_u(p_23, 0UL)) >= (safe_add_func_uint64_t_u_u((p_854->g_530 = ((*l_444) &= p_23)), ((*l_450) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((p_23 , ((safe_mod_func_int64_t_s_s((((p_23 | (l_449 & (1UL || l_470))) , p_23) , p_854->g_463.f0), p_854->g_153)) < p_854->g_7[6])), 9)), l_471)))))) > p_23) , p_23)) ^ 0x233E30D64553C5E0L) , l_537) , 0xD8L)), 0x2FL)), 0x5591BE59L)) != 9UL) >= p_854->g_153)), p_23)) , p_23) >= (*l_438)), l_539, p_23, p_854);
                        (*p_24) = (*p_854->g_258);
                    }
                }
            }
            for (p_854->g_145.f0 = 4; (p_854->g_145.f0 >= 0); p_854->g_145.f0 -= 1)
            { /* block id: 237 */
                int i;
                return p_854->g_496[p_854->g_145.f0];
            }
            if (l_574)
                continue;
            if ((*l_438))
                continue;
        }
    }
    return (**p_854->g_246);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_25(uint32_t  p_26, int32_t * p_27, int32_t  p_28, struct S1 * p_854)
{ /* block id: 8 */
    int64_t l_31 = 0x326D5D64F68993DDL;
    int32_t *l_32[9];
    int32_t l_33 = 0x01900312L;
    int32_t l_34 = (-8L);
    int8_t l_35 = (-1L);
    int8_t l_36 = (-5L);
    int64_t l_37 = (-9L);
    uint32_t l_38 = 4294967289UL;
    int i;
    for (i = 0; i < 9; i++)
        l_32[i] = &p_854->g_7[6];
    l_38--;
    return &p_854->g_7[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_51 p_854->g_63 p_854->g_7 p_854->g_61 p_854->g_90 p_854->g_62 p_854->g_97 p_854->g_98 p_854->g_99 p_854->g_5 p_854->g_58 p_854->g_160 p_854->g_148 p_854->g_170 p_854->g_153 p_854->g_145.f0 p_854->g_200 p_854->g_171 p_854->g_246 p_854->g_202 p_854->g_258 p_854->g_247 p_854->g_248 p_854->g_166
 * writes: p_854->g_63 p_854->g_61 p_854->g_7 p_854->g_90 p_854->g_97 p_854->g_51 p_854->g_160 p_854->g_166 p_854->g_168 p_854->g_171 p_854->g_200 p_854->g_202 p_854->g_209 p_854->g_145.f0 p_854->g_58 p_854->g_62
 */
union U0  func_47(uint32_t  p_48, int8_t  p_49, struct S1 * p_854)
{ /* block id: 13 */
    uint16_t l_54 = 65535UL;
    int32_t l_56 = 0x6EC938AAL;
    int32_t l_57 = 0x79714296L;
    int32_t l_59[7] = {(-1L),0x2524E121L,(-1L),(-1L),0x2524E121L,(-1L),(-1L)};
    int32_t *l_146[4][4][3];
    uint32_t *l_147 = &p_854->g_148;
    uint32_t *l_351 = &p_854->g_166;
    uint32_t **l_350[1];
    int64_t l_362 = 0x187AC9DDEF2D6EE9L;
    union U0 l_385 = {5L};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_146[i][j][k] = &l_59[4];
        }
    }
    for (i = 0; i < 1; i++)
        l_350[i] = &l_351;
    l_54 = p_854->g_51;
    for (p_48 = 0; (p_48 <= 3); p_48 += 1)
    { /* block id: 17 */
        uint16_t *l_55[4][1][5] = {{{&l_54,&l_54,&l_54,&l_54,&l_54}},{{&l_54,&l_54,&l_54,&l_54,&l_54}},{{&l_54,&l_54,&l_54,&l_54,&l_54}},{{&l_54,&l_54,&l_54,&l_54,&l_54}}};
        int32_t l_60[4] = {(-1L),(-1L),(-1L),(-1L)};
        union U0 l_81 = {-1L};
        int32_t **l_355 = &l_146[1][1][2];
        uint64_t l_384 = 0UL;
        uint32_t *l_389 = &p_854->g_202;
        int i, j, k;
        if (p_48)
            break;
        if (p_48)
            continue;
        l_60[1] = ((0x3DBF9D0A132677FAL && ((l_54 || (((++p_854->g_63) >= (-9L)) <= ((4294967288UL >= (p_48 , (func_66((l_146[1][1][2] = func_70(((((safe_sub_func_uint64_t_u_u((((func_77((p_48 && (0L || l_59[4])), l_81, &p_854->g_61, p_854) | p_854->g_5[0][4]) , p_854->g_7[6]) >= 1L), l_59[4])) || p_49) | 0UL) == 0x3C14A6CCC60F6C44L), l_59[4], p_854->g_58, p_854->g_5[0][0], p_854)), p_48, l_147, p_854) & 1L))) , (**p_854->g_246)))) == p_49)) , p_49);
    }
    return l_385;
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_160 p_854->g_61 p_854->g_7 p_854->g_148 p_854->g_170 p_854->g_5 p_854->g_58 p_854->g_153 p_854->g_51 p_854->g_145.f0 p_854->g_90 p_854->g_200 p_854->g_171 p_854->g_246 p_854->g_62 p_854->g_202 p_854->g_258 p_854->g_247 p_854->g_248 p_854->g_166
 * writes: p_854->g_160 p_854->g_61 p_854->g_166 p_854->g_7 p_854->g_168 p_854->g_171 p_854->g_51 p_854->g_200 p_854->g_202 p_854->g_209 p_854->g_145.f0 p_854->g_58 p_854->g_62
 */
int16_t  func_66(int32_t * p_67, uint8_t  p_68, uint32_t * p_69, struct S1 * p_854)
{ /* block id: 52 */
    uint16_t *l_152 = &p_854->g_153;
    uint16_t **l_151 = &l_152;
    int32_t l_154 = 0x6F0DF067L;
    int64_t *l_159 = &p_854->g_160;
    uint32_t *l_165 = &p_854->g_166;
    int32_t **l_167 = (void*)0;
    uint32_t **l_183 = &l_165;
    uint16_t l_184 = 9UL;
    uint8_t **l_264[9] = {&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8],&p_854->g_210[8]};
    int i;
lbl_204:
    (*p_67) = ((safe_mul_func_uint16_t_u_u(p_68, ((((l_151 = l_151) != &l_152) <= l_154) , (safe_rshift_func_int8_t_s_u(((0x54L == (((*l_159) ^= (l_154 < (safe_lshift_func_uint16_t_u_u((l_154 , ((void*)0 == (*l_151))), 9)))) , l_154)) , p_854->g_61), 1))))) , (*p_67));
    (*p_854->g_170) = (p_854->g_168[6] = func_70(((-1L) | (-1L)), ((safe_lshift_func_int16_t_s_s(l_154, 10)) , ((((((l_154 = ((*l_165) = (safe_rshift_func_uint8_t_u_u(((*p_67) != (-8L)), ((void*)0 == p_69))))) < 0x5A7C8E9FL) && ((((p_69 != l_165) | p_68) >= p_854->g_160) < p_854->g_7[3])) & p_68) && p_68) != p_854->g_160)), p_854->g_148, p_68, p_854));
    if ((p_854->g_5[0][2] , ((p_68 , (safe_sub_func_uint16_t_u_u(((-4L) | ((void*)0 == &l_152)), ((&p_854->g_166 != ((*l_183) = func_70((safe_lshift_func_int16_t_s_u(p_68, ((safe_unary_minus_func_uint32_t_u(p_854->g_58)) == (((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(p_68, 0x2AL)) && p_68), 8L)) | 18446744073709551615UL) != p_854->g_7[0])))), p_68, p_68, p_68, p_854))) , l_184)))) | p_68)))
    { /* block id: 61 */
        return p_854->g_153;
    }
    else
    { /* block id: 63 */
        int16_t l_205 = 1L;
        uint32_t **l_249 = &l_165;
        int8_t *l_275[1][1][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_276 = (-5L);
        int32_t *l_287 = &l_154;
        int i, j, k;
        for (p_854->g_51 = 1; (p_854->g_51 <= 6); p_854->g_51 += 1)
        { /* block id: 66 */
            int64_t l_198 = 4L;
            uint64_t l_203 = 18446744073709551612UL;
            uint8_t *l_207[8];
            uint8_t **l_206 = &l_207[5];
            int32_t l_216 = 1L;
            int8_t l_256 = 0L;
            int i;
            for (i = 0; i < 8; i++)
                l_207[i] = &p_854->g_200;
            for (p_854->g_61 = 5; (p_854->g_61 >= 0); p_854->g_61 -= 1)
            { /* block id: 69 */
                uint32_t l_185 = 4294967289UL;
                int32_t l_215 = 4L;
                int32_t *l_253 = &p_854->g_7[6];
                for (p_68 = 0; (p_68 <= 4); p_68 += 1)
                { /* block id: 72 */
                    uint16_t l_192[7];
                    int16_t *l_197[5][2][3] = {{{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0},{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0}},{{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0},{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0}},{{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0},{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0}},{{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0},{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0}},{{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0},{&p_854->g_145.f0,&p_854->g_145.f0,&p_854->g_145.f0}}};
                    uint8_t *l_199 = &p_854->g_200;
                    uint32_t *l_201 = &p_854->g_202;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_192[i] = 0UL;
                    p_854->g_168[(p_68 + 2)] = func_70(p_854->g_7[p_854->g_51], l_185, (+((*l_201) = (safe_mod_func_uint8_t_u_u(p_68, ((*l_199) &= (safe_sub_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(l_192[1], ((safe_mul_func_int16_t_s_s((l_198 = ((((((p_854->g_145.f0 | (safe_mod_func_uint16_t_u_u(0xC91DL, (((void*)0 != &p_854->g_168[(p_68 + 3)]) ^ (p_854->g_5[1][4] , p_68))))) >= p_854->g_5[0][2]) ^ 0x7FL) , p_854->g_7[6]) | l_185) , p_68)), 0xC79DL)) >= p_68))) & p_854->g_90), 18446744073709551610UL))))))), l_203, p_854);
                    if (p_854->g_200)
                        goto lbl_204;
                    if ((*p_67))
                        continue;
                    l_205 &= (**p_854->g_170);
                }
                for (l_198 = 0; (l_198 <= 6); l_198 += 1)
                { /* block id: 83 */
                    uint8_t l_217 = 0xBFL;
                    for (p_68 = 0; (p_68 <= 6); p_68 += 1)
                    { /* block id: 86 */
                        uint8_t ***l_208[7];
                        int32_t *l_211 = (void*)0;
                        int32_t *l_212 = &p_854->g_58;
                        int32_t *l_213 = &p_854->g_7[5];
                        int32_t *l_214[7] = {&l_154,&l_154,&l_154,&l_154,&l_154,&l_154,&l_154};
                        int64_t *l_241 = &p_854->g_160;
                        uint32_t ***l_250 = &l_183;
                        int16_t *l_251 = &p_854->g_145.f0;
                        uint32_t *l_252 = &p_854->g_202;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_208[i] = &l_206;
                        p_854->g_209[0][5] = l_206;
                        ++l_217;
                        (*l_212) = (((*l_213) = (((!(safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint64_t_u_u(p_854->g_7[p_854->g_51], (l_198 >= (((0xC5541E83L < (safe_add_func_uint16_t_u_u((((*l_252) &= (((((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((*p_67), (safe_unary_minus_func_uint8_t_u(((**l_206)--))))), ((safe_sub_func_int8_t_s_s((l_241 != &p_854->g_160), ((safe_add_func_int16_t_s_s(((*l_251) &= (safe_add_func_uint16_t_u_u((l_215 = (((~(p_854->g_246 != ((*l_250) = l_249))) , (void*)0) == (*l_151))), 1L))), p_854->g_5[3][1])) && 18446744073709551615UL))) | (*p_67)))), 3)) < l_185), 0x7242D3008151DF12L)) , p_68) == 0x001480D2A5A22073L) > p_854->g_62) <= (*p_67))) , 0UL), 0x451AL))) ^ 65526UL) || (*p_67))))), l_217)), l_217))) , (*p_67)) < p_68)) & 0x1395B3AD1DF44C16L);
                    }
                }
                (*p_854->g_258) &= (l_256 = ((p_854->g_145.f0 > ((~(((*l_253) = 0x2ADB5AF5L) | p_68)) , (safe_mul_func_uint8_t_u_u(p_68, ((*l_253) ^= (&p_854->g_160 != &p_854->g_160)))))) , 0L));
            }
        }
        (*p_67) = (*p_67);
        (*l_287) &= ((((safe_unary_minus_func_uint32_t_u((**p_854->g_246))) , ((safe_add_func_uint64_t_u_u(18446744073709551615UL, (((safe_add_func_uint8_t_u_u(p_68, ((l_264[6] == l_264[3]) | (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(p_68, 5)) ^ (!(p_854->g_166 |= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((2UL > (l_276 = p_854->g_90)), 0)) ^ ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((((*p_67) = (safe_rshift_func_int8_t_s_s((p_854->g_62 = (l_205 && 4UL)), 2))) ^ p_68), l_205)), (-7L))), 15)), p_68)) , p_68)) ^ 2UL), l_184)) , l_205), p_68))))), p_68))))) != 0L) , p_854->g_160))) == 0x8279D54468D9D4BAL)) < 0L) | 0x6B410ACA9DB045D2L);
    }
    return p_68;
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_7
 * writes: p_854->g_7
 */
int32_t * func_70(int32_t  p_71, int32_t  p_72, uint32_t  p_73, uint16_t  p_74, struct S1 * p_854)
{ /* block id: 46 */
    int32_t *l_131 = &p_854->g_7[6];
    int32_t *l_132 = (void*)0;
    int32_t *l_133 = &p_854->g_7[1];
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = &p_854->g_7[6];
    int32_t *l_136 = &p_854->g_7[6];
    int32_t *l_137 = &p_854->g_58;
    int32_t *l_138 = &p_854->g_61;
    int32_t l_139[9] = {0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L,0x5A65D4B9L};
    int32_t *l_140[10][9] = {{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]},{&p_854->g_58,&p_854->g_58,&p_854->g_61,&l_139[5],&p_854->g_58,&p_854->g_7[2],&p_854->g_58,&l_139[5],&l_139[5]}};
    uint16_t l_141 = 1UL;
    union U0 *l_144 = &p_854->g_145;
    int i, j;
    ++l_141;
    (*l_135) = (*l_133);
    l_144 = l_144;
    return &p_854->g_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_854->g_61 p_854->g_7 p_854->g_51 p_854->g_90 p_854->g_62 p_854->g_97 p_854->g_98 p_854->g_99
 * writes: p_854->g_61 p_854->g_7 p_854->g_90 p_854->g_97 p_854->g_51
 */
uint64_t  func_77(uint64_t  p_78, union U0  p_79, int32_t * p_80, struct S1 * p_854)
{ /* block id: 21 */
    int64_t l_92 = (-5L);
    int32_t l_93 = 0x4B38B24CL;
    int8_t l_95 = 0x53L;
    int32_t l_96 = 0x1C689FF3L;
    int32_t l_110 = 0L;
    int32_t l_111 = 0L;
    int32_t l_117[8][2];
    int16_t l_119 = 6L;
    uint64_t l_128[9][2][1] = {{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}},{{0UL},{0UL}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
            l_117[i][j] = 0x07569931L;
    }
    for (p_854->g_61 = 0; (p_854->g_61 != 29); p_854->g_61 = safe_add_func_uint32_t_u_u(p_854->g_61, 3))
    { /* block id: 24 */
        int32_t *l_88[7][4] = {{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58},{(void*)0,(void*)0,&p_854->g_7[4],&p_854->g_58}};
        uint64_t *l_89 = &p_854->g_90;
        uint32_t *l_91 = (void*)0;
        uint32_t *l_94[7] = {&p_854->g_51,&p_854->g_51,&p_854->g_51,&p_854->g_51,&p_854->g_51,&p_854->g_51,&p_854->g_51};
        int i, j;
        l_96 ^= ((l_95 = ((safe_sub_func_int64_t_s_s(p_854->g_7[6], p_78)) , (l_93 = (l_92 = (((*l_89) &= (safe_sub_func_uint8_t_u_u(((p_854->g_7[1] &= 0x6E4DE7F7L) <= (*p_80)), p_854->g_51))) & ((p_78 <= (p_80 == &p_854->g_51)) , ((&p_854->g_58 != (void*)0) , p_854->g_62))))))) , (*p_80));
    }
    (*p_854->g_98) = p_854->g_97;
    for (l_92 = 0; (l_92 <= 6); l_92 += 1)
    { /* block id: 35 */
        int32_t l_103 = 0x3F38E196L;
        int32_t l_104 = 1L;
        int32_t l_105 = 0x75515534L;
        int32_t l_106 = (-1L);
        int32_t l_107 = 1L;
        int16_t l_108 = 0x0E44L;
        int32_t l_109 = 5L;
        int32_t l_112 = 0x422BA50AL;
        int32_t l_113 = 0x40013EB6L;
        int32_t l_114 = 1L;
        int32_t l_115 = 0x27E04480L;
        int32_t l_116 = 0x73A04F61L;
        int32_t l_118 = (-1L);
        int32_t l_120 = (-1L);
        int32_t l_121 = 0L;
        int32_t l_122 = (-6L);
        int32_t l_123 = 0x4BD559E1L;
        int32_t l_124 = 0x7112B941L;
        int i;
        (*p_854->g_99) = (*p_854->g_98);
        if (p_854->g_7[l_92])
            continue;
        for (p_854->g_51 = 0; (p_854->g_51 <= 6); p_854->g_51 += 1)
        { /* block id: 40 */
            int32_t *l_100 = &p_854->g_7[p_854->g_51];
            int32_t *l_101 = &p_854->g_61;
            int32_t *l_102[2][6];
            uint16_t l_125[10][7][3] = {{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}},{{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL},{1UL,0xC7ECL,0xC7ECL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                    l_102[i][j] = &p_854->g_7[p_854->g_51];
            }
            ++l_125[4][1][0];
            --l_128[4][0][0];
        }
    }
    return p_854->g_7[6];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_855;
    struct S1* p_854 = &c_855;
    struct S1 c_856 = {
        {{0x3D783989L,0x3D783989L,0x312FBB6BL,(-2L),(-1L),(-2L),0x312FBB6BL},{0x3D783989L,0x3D783989L,0x312FBB6BL,(-2L),(-1L),(-2L),0x312FBB6BL},{0x3D783989L,0x3D783989L,0x312FBB6BL,(-2L),(-1L),(-2L),0x312FBB6BL},{0x3D783989L,0x3D783989L,0x312FBB6BL,(-2L),(-1L),(-2L),0x312FBB6BL}}, // p_854->g_5
        {0x714F98CAL,0x714F98CAL,0x714F98CAL,0x714F98CAL,0x714F98CAL,0x714F98CAL,0x714F98CAL}, // p_854->g_7
        0x5B3408E2L, // p_854->g_51
        0x5ECF9726L, // p_854->g_58
        0x6A2B0204L, // p_854->g_61
        0x39L, // p_854->g_62
        0x5EL, // p_854->g_63
        1UL, // p_854->g_90
        (void*)0, // p_854->g_97
        &p_854->g_97, // p_854->g_98
        &p_854->g_97, // p_854->g_99
        {0L}, // p_854->g_145
        0xD01596AAL, // p_854->g_148
        65528UL, // p_854->g_153
        (-6L), // p_854->g_160
        0x8AFBEA2DL, // p_854->g_166
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_854->g_168
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_854->g_169
        &p_854->g_7[4], // p_854->g_171
        &p_854->g_171, // p_854->g_170
        0xC3L, // p_854->g_200
        4294967295UL, // p_854->g_202
        {&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200,&p_854->g_200}, // p_854->g_210
        {{&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3]},{&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3]},{&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3],&p_854->g_210[8],&p_854->g_210[3],&p_854->g_210[3]}}, // p_854->g_209
        4294967295UL, // p_854->g_248
        &p_854->g_248, // p_854->g_247
        &p_854->g_247, // p_854->g_246
        {{{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58},{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58}},{{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58},{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58}},{{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58},{&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58,&p_854->g_58}}}, // p_854->g_257
        &p_854->g_58, // p_854->g_258
        {-1L}, // p_854->g_310
        0x64330977BE5D1A6FL, // p_854->g_319
        0x5E70A93C67A398E4L, // p_854->g_336
        0UL, // p_854->g_401
        8UL, // p_854->g_436
        (-1L), // p_854->g_439
        {0x2B3DL}, // p_854->g_461
        {0x6A33L}, // p_854->g_462
        {0x68D6L}, // p_854->g_463
        {{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}},{{9L},{9L},{-1L},{-2L}}}, // p_854->g_464
        {&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461,&p_854->g_461}, // p_854->g_460
        &p_854->g_460[6], // p_854->g_459
        0x6CA36018L, // p_854->g_483
        {{{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL},{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL}},{{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL},{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL}},{{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL},{65531UL,0xAD5DL,65535UL,6UL,1UL,6UL,65535UL,0xAD5DL}}}, // p_854->g_484
        {0xDB77L,0xDB77L,0xDB77L,0xDB77L,0xDB77L}, // p_854->g_496
        &p_854->g_160, // p_854->g_513
        &p_854->g_513, // p_854->g_512
        65530UL, // p_854->g_530
        0x1260DB3CL, // p_854->g_606
        0x2F98L, // p_854->g_700
        {{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L},{0x3BL,0L,4L,(-8L),0L,0x3BL,(-8L),0x04L}}, // p_854->g_717
        248UL, // p_854->g_727
        {0x87745003CA7BF7F6L,0x87745003CA7BF7F6L,0x87745003CA7BF7F6L,0x87745003CA7BF7F6L}, // p_854->g_792
        0xCD93732CL, // p_854->g_847
        (void*)0, // p_854->g_850
    };
    c_855 = c_856;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_854);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_854->g_5[i][j], "p_854->g_5[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_854->g_7[i], "p_854->g_7[i]", print_hash_value);

    }
    transparent_crc(p_854->g_51, "p_854->g_51", print_hash_value);
    transparent_crc(p_854->g_58, "p_854->g_58", print_hash_value);
    transparent_crc(p_854->g_61, "p_854->g_61", print_hash_value);
    transparent_crc(p_854->g_62, "p_854->g_62", print_hash_value);
    transparent_crc(p_854->g_63, "p_854->g_63", print_hash_value);
    transparent_crc(p_854->g_90, "p_854->g_90", print_hash_value);
    transparent_crc(p_854->g_145.f0, "p_854->g_145.f0", print_hash_value);
    transparent_crc(p_854->g_148, "p_854->g_148", print_hash_value);
    transparent_crc(p_854->g_153, "p_854->g_153", print_hash_value);
    transparent_crc(p_854->g_160, "p_854->g_160", print_hash_value);
    transparent_crc(p_854->g_166, "p_854->g_166", print_hash_value);
    transparent_crc(p_854->g_200, "p_854->g_200", print_hash_value);
    transparent_crc(p_854->g_202, "p_854->g_202", print_hash_value);
    transparent_crc(p_854->g_248, "p_854->g_248", print_hash_value);
    transparent_crc(p_854->g_310.f0, "p_854->g_310.f0", print_hash_value);
    transparent_crc(p_854->g_319, "p_854->g_319", print_hash_value);
    transparent_crc(p_854->g_336, "p_854->g_336", print_hash_value);
    transparent_crc(p_854->g_401, "p_854->g_401", print_hash_value);
    transparent_crc(p_854->g_436, "p_854->g_436", print_hash_value);
    transparent_crc(p_854->g_439, "p_854->g_439", print_hash_value);
    transparent_crc(p_854->g_461.f0, "p_854->g_461.f0", print_hash_value);
    transparent_crc(p_854->g_462.f0, "p_854->g_462.f0", print_hash_value);
    transparent_crc(p_854->g_463.f0, "p_854->g_463.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_854->g_464[i][j].f0, "p_854->g_464[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_854->g_483, "p_854->g_483", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_854->g_484[i][j][k], "p_854->g_484[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_854->g_496[i], "p_854->g_496[i]", print_hash_value);

    }
    transparent_crc(p_854->g_530, "p_854->g_530", print_hash_value);
    transparent_crc(p_854->g_606, "p_854->g_606", print_hash_value);
    transparent_crc(p_854->g_700, "p_854->g_700", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_854->g_717[i][j], "p_854->g_717[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_854->g_727, "p_854->g_727", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_854->g_792[i], "p_854->g_792[i]", print_hash_value);

    }
    transparent_crc(p_854->g_847, "p_854->g_847", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
