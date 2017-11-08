// -g 1,54,42 -l 1,9,7
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


// Seed: 3413117329

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile uint32_t g_5;
    int32_t g_7;
    uint8_t g_22[9][7][4];
    uint8_t g_29;
    uint8_t *g_28;
    int8_t g_50;
    int8_t **g_60[10];
    int32_t g_69;
    uint16_t g_71;
    uint64_t g_107;
    uint64_t g_122;
    uint8_t g_147;
    int64_t g_150;
    int64_t g_153[4][10][5];
    uint64_t g_156;
    uint32_t g_164;
    uint32_t g_179[7][10];
    uint32_t g_187;
    int16_t g_189;
    int8_t g_195[2];
    int32_t *g_212;
    int32_t * volatile * volatile g_211;
    int8_t *** volatile g_215;
    int32_t g_218;
    volatile uint32_t g_220[10];
    uint16_t g_232;
    uint32_t *** volatile g_241;
    int32_t * volatile * volatile g_244;
    int32_t ** volatile g_246;
    int32_t g_272;
    volatile uint32_t g_286;
    uint16_t *g_317;
    uint16_t **g_316;
    uint32_t g_329;
    uint64_t g_353;
    int8_t g_373;
    volatile int64_t g_374;
    uint8_t g_375[6];
    int16_t g_384;
    int64_t g_386;
    volatile uint8_t g_387;
    int32_t ** volatile g_448;
    uint16_t g_473[6][4];
    uint32_t *g_524;
    uint32_t **g_523;
    int32_t ** volatile g_526;
    uint64_t g_572;
    uint8_t g_575;
    uint32_t g_594[6][3];
    int32_t g_598;
    volatile int32_t g_599[9][5][5];
    int32_t ** volatile g_615;
    uint32_t ***g_623;
    int32_t g_635;
    int32_t ** volatile g_660;
    uint16_t g_693;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S0 * p_694);
int32_t  func_8(int32_t * p_9, int8_t  p_10, uint32_t  p_11, struct S0 * p_694);
int32_t * func_12(int64_t  p_13, int16_t  p_14, int32_t * p_15, uint16_t  p_16, int32_t * p_17, struct S0 * p_694);
uint16_t  func_25(uint8_t * p_26, int32_t * p_27, struct S0 * p_694);
int16_t  func_30(int64_t  p_31, int32_t * p_32, uint8_t * p_33, int32_t  p_34, uint64_t  p_35, struct S0 * p_694);
int64_t  func_38(int32_t  p_39, int32_t  p_40, uint16_t  p_41, struct S0 * p_694);
int32_t  func_42(uint8_t * p_43, uint32_t  p_44, uint8_t  p_45, uint16_t  p_46, int32_t * p_47, struct S0 * p_694);
int8_t ** func_51(uint64_t  p_52, int8_t ** p_53, struct S0 * p_694);
uint32_t  func_57(int8_t ** p_58, uint32_t  p_59, struct S0 * p_694);
uint32_t  func_75(uint64_t  p_76, int32_t  p_77, int8_t ** p_78, struct S0 * p_694);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_694->g_5 p_694->g_7 p_694->g_28 p_694->g_29 p_694->g_60 p_694->g_50 p_694->g_71 p_694->g_122 p_694->g_69 p_694->g_147 p_694->g_107 p_694->g_156 p_694->g_164 p_694->g_179 p_694->g_153 p_694->g_189 p_694->g_211 p_694->g_195 p_694->g_212 p_694->g_215 p_694->g_220 p_694->g_150 p_694->g_244 p_694->g_246 p_694->g_232 p_694->g_286 p_694->g_272 p_694->g_218 p_694->g_316 p_694->g_448 p_694->g_317 p_694->g_473 p_694->g_187 p_694->g_375 p_694->g_523 p_694->g_526 p_694->g_374 p_694->g_572 p_694->g_575 p_694->g_594 p_694->g_384 p_694->g_615 p_694->g_623 p_694->g_353 p_694->g_386 p_694->g_387 p_694->g_635 p_694->g_660 p_694->g_329 p_694->g_22 p_694->g_598 p_694->g_693
 * writes: p_694->g_7 p_694->g_22 p_694->g_50 p_694->g_29 p_694->g_71 p_694->g_107 p_694->g_122 p_694->g_69 p_694->g_147 p_694->g_150 p_694->g_153 p_694->g_156 p_694->g_164 p_694->g_179 p_694->g_187 p_694->g_189 p_694->g_60 p_694->g_220 p_694->g_195 p_694->g_218 p_694->g_212 p_694->g_272 p_694->g_286 p_694->g_232 p_694->g_316 p_694->g_353 p_694->g_473 p_694->g_386 p_694->g_523 p_694->g_329 p_694->g_572 p_694->g_575 p_694->g_594 p_694->g_384 p_694->g_598 p_694->g_693
 */
uint64_t  func_1(struct S0 * p_694)
{ /* block id: 4 */
    int32_t *l_6 = &p_694->g_7;
    uint8_t *l_21 = &p_694->g_22[0][3][1];
    int8_t *l_48 = (void*)0;
    int8_t *l_49 = &p_694->g_50;
    int64_t *l_309[1];
    uint32_t l_310[8] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
    uint32_t *l_593 = &p_694->g_594[1][1];
    int32_t l_661[7];
    int32_t *l_692 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_309[i] = &p_694->g_153[2][5][3];
    for (i = 0; i < 7; i++)
        l_661[i] = (-1L);
    (*l_6) &= (safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s(0x29L, p_694->g_5))));
    p_694->g_693 |= func_8(func_12(p_694->g_7, ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s(((*l_21) = p_694->g_7), (((safe_mul_func_uint16_t_u_u(func_25(p_694->g_28, (((((*l_593) |= (func_30((safe_mul_func_int16_t_s_s((+((~((*l_6) && 65535UL)) & ((l_310[7] = func_38(((*l_6) & func_42(l_21, (((*l_49) = (!(((((6L && (0xAB1F356D9DE360ABL & (*l_6))) || p_694->g_5) < (*l_6)) , p_694->g_5) >= p_694->g_7))) >= 0x5CL), (*p_694->g_28), p_694->g_7, l_6, p_694)), (*l_6), (*l_6), p_694)) > p_694->g_7))), p_694->g_7)), &p_694->g_7, p_694->g_28, p_694->g_7, (*l_6), p_694) < (*l_6))) , 0x3ECF7445L) , (*p_694->g_28)) , l_6), p_694), p_694->g_635)) & 0x06F801FBBC128D3EL) , (-1L)))))) != 0x4CL), l_6, (*l_6), l_593, p_694), l_661[6], p_694->g_635, p_694);
    return (*l_6);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_329 p_694->g_594 p_694->g_150 p_694->g_156 p_694->g_22 p_694->g_286 p_694->g_153 p_694->g_598
 * writes: p_694->g_329 p_694->g_594 p_694->g_156 p_694->g_598
 */
int32_t  func_8(int32_t * p_9, int8_t  p_10, uint32_t  p_11, struct S0 * p_694)
{ /* block id: 299 */
    int32_t *l_665 = (void*)0;
    uint32_t *l_676 = &p_694->g_187;
    uint32_t **l_675 = &l_676;
    int16_t l_682 = 0L;
    uint64_t *l_683 = (void*)0;
    uint64_t *l_684 = (void*)0;
    uint64_t *l_685 = &p_694->g_156;
    int32_t *l_686 = (void*)0;
    int32_t *l_687 = &p_694->g_598;
    uint64_t *l_690 = (void*)0;
    uint64_t **l_689[3][7][5] = {{{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0},{(void*)0,(void*)0,&l_690,(void*)0,(void*)0}}};
    uint64_t ***l_688 = &l_689[1][6][3];
    int32_t **l_691 = &l_686;
    int i, j, k;
    for (p_694->g_329 = (-5); (p_694->g_329 >= 53); p_694->g_329 = safe_add_func_int64_t_s_s(p_694->g_329, 5))
    { /* block id: 302 */
        int64_t l_664 = 0x7A0C28E18EDD19D5L;
        int32_t **l_666 = &l_665;
        (*p_9) |= l_664;
        if ((*p_9))
            continue;
        (*l_666) = l_665;
    }
    (*l_687) &= (((safe_rshift_func_uint16_t_u_u(65535UL, (((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(1L, ((void*)0 == p_9))), (safe_mul_func_uint8_t_u_u((l_675 == &l_676), (safe_unary_minus_func_uint64_t_u((safe_sub_func_int8_t_s_s(((p_694->g_150 , (p_11 >= (((((*l_685) |= (safe_div_func_uint64_t_u_u(l_682, 0x0842499C6AB86B41L))) || p_694->g_22[3][4][0]) , 0UL) , 0x33B224213C233E6AL))) < p_694->g_286), 0x7EL)))))))) > p_11) == (*p_9)))) < p_694->g_153[1][6][3]) , (*p_9));
    (*l_688) = (void*)0;
    (*l_691) = (void*)0;
    return (*p_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_594 p_694->g_317 p_694->g_71 p_694->g_375 p_694->g_575 p_694->g_660
 * writes: p_694->g_7 p_694->g_212
 */
int32_t * func_12(int64_t  p_13, int16_t  p_14, int32_t * p_15, uint16_t  p_16, int32_t * p_17, struct S0 * p_694)
{ /* block id: 294 */
    int32_t l_638 = 0x12D0358CL;
    int8_t *l_646[10];
    int8_t **l_645 = &l_646[4];
    int32_t *l_647 = &p_694->g_69;
    int32_t *l_648 = &p_694->g_218;
    int32_t *l_649 = &p_694->g_218;
    int32_t *l_650 = &p_694->g_218;
    int32_t *l_651 = &p_694->g_69;
    int32_t *l_652 = &p_694->g_69;
    int32_t *l_653[1][10] = {{&p_694->g_69,&p_694->g_218,&p_694->g_598,&p_694->g_218,&p_694->g_69,&p_694->g_69,&p_694->g_218,&p_694->g_598,&p_694->g_218,&p_694->g_69}};
    int32_t l_654 = 0x6AD1A018L;
    int32_t l_655 = 0x054598BCL;
    int8_t l_656 = 1L;
    uint8_t l_657 = 6UL;
    int i, j;
    for (i = 0; i < 10; i++)
        l_646[i] = &p_694->g_195[0];
    (*p_15) = (((p_13 ^ (*p_17)) , p_16) <= (safe_add_func_int64_t_s_s((l_638 | (-1L)), ((255UL != ((((safe_lshift_func_uint16_t_u_u((l_638 >= (safe_mod_func_uint8_t_u_u(((0x0E5CL && (((safe_rshift_func_int8_t_s_s((0x54F97B8AL < 9UL), 6)) & (*p_694->g_317)) , p_694->g_375[0])) != l_638), l_638))), 14)) , (void*)0) == l_645) != p_694->g_575)) , 0xFE276815AF2CDFAAL))));
    --l_657;
    (*p_694->g_660) = &l_655;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_384 p_694->g_526 p_694->g_615 p_694->g_7 p_694->g_623 p_694->g_353 p_694->g_386 p_694->g_29 p_694->g_28 p_694->g_575 p_694->g_179 p_694->g_387 p_694->g_211 p_694->g_212
 * writes: p_694->g_384 p_694->g_212 p_694->g_150
 */
uint16_t  func_25(uint8_t * p_26, int32_t * p_27, struct S0 * p_694)
{ /* block id: 277 */
    int32_t *l_595 = &p_694->g_218;
    int32_t *l_596[7] = {&p_694->g_69,&p_694->g_69,&p_694->g_69,&p_694->g_69,&p_694->g_69,&p_694->g_69,&p_694->g_69};
    int32_t l_597 = (-1L);
    uint64_t l_600 = 0x4C08B44139F9608BL;
    uint32_t **l_622 = (void*)0;
    uint32_t ***l_621 = &l_622;
    uint8_t l_624 = 0UL;
    int64_t l_630 = 0x77D55EE3B5C5C690L;
    int32_t l_631 = 0L;
    uint32_t l_632 = 0UL;
    int i;
    l_595 = p_27;
    --l_600;
    for (p_694->g_384 = 25; (p_694->g_384 <= (-15)); p_694->g_384 = safe_sub_func_int32_t_s_s(p_694->g_384, 9))
    { /* block id: 282 */
        int32_t **l_605 = (void*)0;
        int32_t l_610 = 5L;
        int32_t l_616[6][5][5] = {{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}},{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}},{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}},{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}},{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}},{{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L},{(-1L),2L,0x71455342L,0x429019EBL,4L}}};
        int8_t *l_618[6] = {&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50};
        int8_t **l_617 = &l_618[3];
        int64_t *l_625 = (void*)0;
        int64_t *l_626 = &p_694->g_150;
        int32_t l_627 = (-9L);
        int i, j, k;
        (*p_694->g_526) = p_27;
        l_627 ^= (safe_sub_func_int64_t_s_s(((*l_626) = ((safe_mod_func_int16_t_s_s(l_610, ((0xBDAAL > (((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((((p_694->g_615 != (void*)0) & ((((*l_595) | (l_616[4][1][0] , ((l_616[4][1][0] , (l_617 == ((safe_mod_func_uint32_t_u_u(((((l_621 == p_694->g_623) , p_694->g_353) == (*l_595)) >= (-5L)), (-1L))) , (void*)0))) == (*l_595)))) <= p_694->g_386) , 0L)) | 18446744073709551615UL) || l_616[4][1][0]), p_694->g_29)), (*p_694->g_28))) | p_694->g_575) == p_694->g_179[3][0])) && p_694->g_387))) < l_624)), l_610));
        for (l_624 = 6; (l_624 > 7); l_624 = safe_add_func_int64_t_s_s(l_624, 5))
        { /* block id: 288 */
            if ((**p_694->g_211))
                break;
        }
    }
    --l_632;
    return (*l_595);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_7 p_694->g_69 p_694->g_195 p_694->g_316 p_694->g_164 p_694->g_28 p_694->g_29 p_694->g_448 p_694->g_107 p_694->g_122 p_694->g_71 p_694->g_232 p_694->g_317 p_694->g_473 p_694->g_187 p_694->g_220 p_694->g_179 p_694->g_375 p_694->g_523 p_694->g_526 p_694->g_147 p_694->g_374 p_694->g_572 p_694->g_575
 * writes: p_694->g_316 p_694->g_69 p_694->g_29 p_694->g_147 p_694->g_218 p_694->g_353 p_694->g_212 p_694->g_122 p_694->g_71 p_694->g_232 p_694->g_473 p_694->g_189 p_694->g_187 p_694->g_386 p_694->g_523 p_694->g_329 p_694->g_572 p_694->g_575
 */
int16_t  func_30(int64_t  p_31, int32_t * p_32, uint8_t * p_33, int32_t  p_34, uint64_t  p_35, struct S0 * p_694)
{ /* block id: 119 */
    uint16_t *l_312[8] = {&p_694->g_232,&p_694->g_71,&p_694->g_232,&p_694->g_232,&p_694->g_71,&p_694->g_232,&p_694->g_232,&p_694->g_71};
    uint16_t **l_311 = &l_312[7];
    uint16_t ***l_313 = &l_311;
    uint16_t **l_315 = &l_312[2];
    uint16_t ***l_314[10][2] = {{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315},{&l_315,&l_315}};
    int32_t *l_318 = &p_694->g_69;
    int32_t l_358 = 3L;
    int32_t l_364[8];
    int32_t *l_410 = &p_694->g_272;
    int i, j;
    for (i = 0; i < 8; i++)
        l_364[i] = 0x1F261F9EL;
    (*l_318) = ((!0xB048F3B0L) == ((p_694->g_316 = ((*l_313) = l_311)) != &p_694->g_317));
    for (p_35 = 0; (p_35 >= 52); p_35 = safe_add_func_int16_t_s_s(p_35, 5))
    { /* block id: 125 */
        int8_t l_326[9] = {0x63L,0x23L,0x63L,0x63L,0x23L,0x63L,0x63L,0x23L,0x63L};
        int32_t l_327[3][10] = {{(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L),(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L)},{(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L),(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L)},{(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L),(-1L),0x0CB72F35L,8L,0x0CB72F35L,(-1L)}};
        int16_t *l_331 = &p_694->g_189;
        uint64_t *l_441[7] = {&p_694->g_353,&p_694->g_353,&p_694->g_353,&p_694->g_353,&p_694->g_353,&p_694->g_353,&p_694->g_353};
        int32_t l_471[7][9][4] = {{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}},{{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL},{(-10L),0x0D7D35CAL,0x6843CFB3L,0x52C6664DL}}};
        int32_t l_472 = 1L;
        int32_t l_493 = 3L;
        uint16_t l_530 = 0x7C9EL;
        int i, j, k;
        for (p_694->g_29 = 0; (p_694->g_29 <= 55); p_694->g_29++)
        { /* block id: 128 */
            int8_t l_325 = (-7L);
            uint32_t *l_328 = &p_694->g_329;
            int64_t *l_330 = &p_694->g_150;
            uint32_t *l_332 = &p_694->g_187;
            int32_t l_369[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
            uint8_t *l_413 = &p_694->g_375[2];
            int8_t l_419 = 0x72L;
            int i;
            (1 + 1);
        }
        (*l_318) &= ((safe_mod_func_int32_t_s_s((*p_32), (*p_32))) & 0x20L);
        for (p_694->g_147 = 0; (p_694->g_147 <= 44); p_694->g_147++)
        { /* block id: 183 */
            uint64_t l_436 = 0x9356AF1BCC05CCF2L;
            uint16_t l_444 = 1UL;
            int32_t l_468[2][3][4] = {{{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L},{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L},{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L}},{{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L},{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L},{0x1783EBF6L,0x1A4F330BL,0x1A4F330BL,0x1783EBF6L}}};
            uint64_t *l_496 = &p_694->g_353;
            uint32_t **l_527 = &p_694->g_524;
            int16_t l_531[7];
            int16_t l_535 = 0x08D9L;
            int16_t l_587 = 0x1D50L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_531[i] = (-1L);
            for (p_694->g_218 = (-29); (p_694->g_218 == (-19)); p_694->g_218 = safe_add_func_int8_t_s_s(p_694->g_218, 1))
            { /* block id: 186 */
                int32_t l_442 = 0x7F4179C1L;
                int32_t *l_447[9] = {&l_327[2][0],&p_694->g_69,&l_327[2][0],&l_327[2][0],&p_694->g_69,&l_327[2][0],&l_327[2][0],&p_694->g_69,&l_327[2][0]};
                int32_t **l_465 = &l_410;
                int i;
                if ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((*p_694->g_28) |= (255UL < (safe_sub_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((+(((!l_436) , ((-10L) != (((65535UL <= (safe_div_func_int64_t_s_s(((p_34 == (safe_mul_func_uint8_t_u_u(((p_694->g_195[1] , l_331) != (*p_694->g_316)), ((void*)0 != l_441[1])))) ^ l_436), p_694->g_164))) & 3UL) | p_31))) & 0x528F029C42437F16L)), p_34)) < l_442), (*l_318))))), 0L)) < (*l_318)), p_34)))
                { /* block id: 188 */
                    int32_t *l_443[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_444 = (+((*l_318) = (*p_32)));
                    for (p_694->g_353 = (-26); (p_694->g_353 < 26); ++p_694->g_353)
                    { /* block id: 193 */
                        int32_t l_459 = 5L;
                        (*p_694->g_448) = l_447[5];
                        (*l_318) &= ((((((p_694->g_122 ^= p_694->g_107) , (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(1L, ((((safe_sub_func_uint8_t_u_u((((*p_32) != (safe_lshift_func_uint8_t_u_u((*p_694->g_28), (safe_sub_func_uint32_t_u_u((&p_32 != &l_447[5]), l_459))))) == p_34), (*p_33))) >= l_459) == 0x1CB0L) , 0x43F2647BL))), (*p_32)))) < 4294967287UL) >= p_31) & 4UL) >= (-1L));
                    }
                }
                else
                { /* block id: 198 */
                    uint64_t *l_460 = &l_436;
                    uint64_t *l_469[5][1];
                    int32_t l_470 = (-9L);
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_469[i][j] = &p_694->g_107;
                    }
                    l_470 |= ((p_31 == ((((((*l_460) = 5UL) >= (p_694->g_122 = ((**p_694->g_316) || (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_465), (((**p_694->g_316) = ((p_31 > ((*l_318) = (((~((safe_sub_func_int8_t_s_s((p_31 < ((l_468[1][0][3] = l_444) , p_34)), (*p_694->g_28))) && 0L)) <= 0xD165C002L) , (*p_32)))) >= (*p_694->g_317))) >= 0UL))), p_34))))) , (*l_318)) && p_694->g_164) ^ p_31)) || (-6L));
                    if (l_470)
                        continue;
                }
                if (l_326[8])
                    break;
                p_694->g_473[1][0]++;
                for (p_694->g_122 = (-4); (p_694->g_122 < 24); p_694->g_122++)
                { /* block id: 211 */
                    int8_t l_494 = 0x3DL;
                    int8_t l_518 = 1L;
                    int64_t *l_521 = (void*)0;
                    int64_t *l_522 = &p_694->g_386;
                    uint32_t ***l_525 = &p_694->g_523;
                    for (p_694->g_71 = 0; (p_694->g_71 >= 2); ++p_694->g_71)
                    { /* block id: 214 */
                        uint32_t *l_492[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t *l_495[4][3] = {{&p_694->g_353,&p_694->g_353,&p_694->g_353},{&p_694->g_353,&p_694->g_353,&p_694->g_353},{&p_694->g_353,&p_694->g_353,&p_694->g_353},{&p_694->g_353,&p_694->g_353,&p_694->g_353}};
                        int i, j;
                        (*l_318) = (p_35 & ((((p_32 == (void*)0) & (safe_add_func_uint16_t_u_u((l_327[0][8] = (p_34 != 0x2A942626L)), ((((0x60L | (safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u(((((p_35 ^ (safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(p_35, (l_493 = ((safe_lshift_func_uint8_t_u_s(((((*l_331) = (-3L)) >= 0x1A70L) == (-1L)), p_34)) == 65535UL)))) <= (*p_32)), p_35))) & l_494) , l_495[1][2]) != l_496), 0x384494DBL)) & 0x67L) | p_694->g_195[1]) | (*p_32)), 7L))) , l_471[6][3][2]) , (void*)0) != (void*)0)))) || 0x3076BC043559713CL) < p_31));
                    }
                    for (p_694->g_71 = 0; (p_694->g_71 > 13); ++p_694->g_71)
                    { /* block id: 222 */
                        uint8_t l_509 = 6UL;
                        uint32_t *l_510 = (void*)0;
                        uint32_t *l_511 = &p_694->g_187;
                        l_327[2][4] = (((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((p_694->g_232 , (0L > (safe_mod_func_int16_t_s_s(((*l_318) = (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(l_436, (((*p_33) = ((l_509 || (++(*l_511))) ^ (0x21237E278C2AEFE8L & ((((((*l_331) = 4L) & (safe_add_func_int16_t_s_s((((((p_34 ^ ((safe_lshift_func_int16_t_s_s((1L | l_468[1][1][0]), l_494)) || l_471[1][4][3])) > (*l_318)) , p_35) == (**p_694->g_316)) & p_35), 0L))) < p_694->g_220[0]) > 0L) ^ l_326[8])))) != l_518))) && (-10L)), p_34))), 0xC06BL)))) && p_35), p_694->g_179[6][8])), l_493)) >= p_35) | (*p_694->g_317));
                        if ((*p_32))
                            continue;
                    }
                    if (((p_694->g_375[3] != (p_31 >= l_468[0][2][1])) || (((safe_add_func_int64_t_s_s(l_494, ((((*l_318) = (((&p_694->g_317 == (void*)0) == ((*l_522) = l_436)) && (p_694->g_179[1][1] & (+(((*l_525) = p_694->g_523) != (void*)0))))) < l_444) != (*p_32)))) != (*p_33)) >= p_31)))
                    { /* block id: 233 */
                        (*l_318) &= 3L;
                        (*p_694->g_526) = p_32;
                    }
                    else
                    { /* block id: 236 */
                        return p_694->g_164;
                    }
                }
            }
            for (p_694->g_122 = 2; (p_694->g_122 <= 6); p_694->g_122 += 1)
            { /* block id: 243 */
                int32_t l_534 = 0x3EAD22FEL;
                uint32_t *l_540 = &p_694->g_187;
                int32_t l_571[10] = {(-8L),0x3DE00E93L,1L,0x3DE00E93L,(-8L),(-8L),0x3DE00E93L,1L,0x3DE00E93L,(-8L)};
                uint64_t l_588 = 18446744073709551610UL;
                int i;
                if ((((l_527 != (void*)0) && (*l_318)) <= (safe_lshift_func_uint8_t_u_u(((l_531[1] = l_530) , (((~(p_34 >= l_468[0][0][3])) <= ((((*p_33) = ((((safe_rshift_func_int8_t_s_s(l_534, l_535)) | ((*l_540) = (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((p_694->g_147 , 65535UL), 65530UL)) < l_326[8]), (*l_318))))) > 0x706C9F5AL) > 0x3810BDF8CE8F5B15L)) ^ p_35) >= (*l_318))) > p_31)), p_31))))
                { /* block id: 247 */
                    int8_t l_564 = 0x02L;
                    int32_t l_569 = 1L;
                    int32_t l_570[4] = {(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (l_535 = 4; (l_535 >= 0); l_535 -= 1)
                    { /* block id: 250 */
                        return p_694->g_195[1];
                    }
                    for (p_694->g_329 = 0; (p_694->g_329 <= 6); p_694->g_329 += 1)
                    { /* block id: 255 */
                        int32_t **l_541 = &l_318;
                        int i;
                        (*l_541) = (l_471[1][4][3] , &l_364[6]);
                    }
                    for (l_444 = 0; (l_444 != 54); l_444++)
                    { /* block id: 260 */
                        int64_t l_546 = 0x236C29CCD04E46CCL;
                        int32_t *l_565 = &l_327[2][4];
                        int32_t *l_566 = &l_493;
                        int32_t *l_567 = (void*)0;
                        int32_t *l_568[4][10] = {{&l_364[6],&l_493,&l_364[5],&p_694->g_69,&l_358,&l_364[6],&p_694->g_69,&l_327[0][6],&p_694->g_69,&l_364[6]},{&l_364[6],&l_493,&l_364[5],&p_694->g_69,&l_358,&l_364[6],&p_694->g_69,&l_327[0][6],&p_694->g_69,&l_364[6]},{&l_364[6],&l_493,&l_364[5],&p_694->g_69,&l_358,&l_364[6],&p_694->g_69,&l_327[0][6],&p_694->g_69,&l_364[6]},{&l_364[6],&l_493,&l_364[5],&p_694->g_69,&l_358,&l_364[6],&p_694->g_69,&l_327[0][6],&p_694->g_69,&l_364[6]}};
                        int i, j;
                        l_468[1][0][0] ^= ((safe_lshift_func_int16_t_s_u(p_694->g_374, ((l_546 > (safe_lshift_func_uint8_t_u_s(0xB6L, 2))) | ((*l_318) = ((safe_lshift_func_int8_t_s_u(((&p_694->g_189 != ((safe_unary_minus_func_int8_t_s(0L)) , (((**p_694->g_316) = (((safe_mod_func_int8_t_s_s(0x19L, 0x6EL)) >= (((0xB759L != (((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((!p_35), p_34)) <= l_530), 1UL)), (*p_694->g_28))) && 18446744073709551607UL) == l_444)) == l_472) <= 1UL)) < 0x1534L)) , (void*)0))) != (*l_318)), 3)) <= l_564))))) != p_31);
                        --p_694->g_572;
                        ++p_694->g_575;
                    }
                }
                else
                { /* block id: 267 */
                    int32_t *l_578 = &p_694->g_69;
                    int32_t *l_579 = &l_364[6];
                    int32_t *l_580 = &l_327[2][4];
                    int32_t *l_581 = &l_358;
                    int32_t *l_582 = &p_694->g_218;
                    int32_t *l_583 = &l_327[2][4];
                    int32_t *l_584 = &l_468[1][0][3];
                    int32_t *l_585 = &l_327[2][4];
                    int32_t *l_586[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_586[i] = &l_468[0][2][0];
                    l_588++;
                }
            }
            (*l_318) = ((((*p_694->g_28) |= (safe_lshift_func_int8_t_s_s(l_468[1][0][3], 7))) < l_531[6]) ^ l_535);
        }
    }
    return p_694->g_473[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_286 p_694->g_69 p_694->g_272 p_694->g_211 p_694->g_212 p_694->g_179 p_694->g_218
 * writes: p_694->g_286 p_694->g_69 p_694->g_212 p_694->g_232 p_694->g_218
 */
int64_t  func_38(int32_t  p_39, int32_t  p_40, uint16_t  p_41, struct S0 * p_694)
{ /* block id: 106 */
    int32_t l_273[1][4][1];
    int32_t *l_274 = (void*)0;
    int32_t *l_275 = (void*)0;
    int32_t *l_276 = &l_273[0][0][0];
    int32_t *l_277 = &p_694->g_69;
    int32_t *l_278 = &p_694->g_218;
    int32_t *l_279 = &p_694->g_69;
    int32_t *l_280 = &p_694->g_69;
    int32_t *l_281 = &p_694->g_218;
    int32_t *l_282 = &p_694->g_218;
    int32_t *l_283 = &p_694->g_69;
    int32_t *l_284[1][7][8] = {{{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]},{&l_273[0][0][0],&l_273[0][0][0],&l_273[0][0][0],&p_694->g_69,&l_273[0][2][0],&p_694->g_69,&l_273[0][0][0],&l_273[0][0][0]}}};
    int64_t l_285 = 1L;
    int32_t **l_289 = &p_694->g_212;
    int16_t *l_294 = &p_694->g_189;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_273[i][j][k] = 0x0BB9E680L;
        }
    }
    ++p_694->g_286;
    (*l_279) &= 0x0D476D60L;
    (*l_289) = &l_273[0][3][0];
    for (p_694->g_69 = (-4); (p_694->g_69 < 19); p_694->g_69 = safe_add_func_int16_t_s_s(p_694->g_69, 7))
    { /* block id: 112 */
        uint16_t *l_298 = &p_694->g_71;
        uint16_t **l_297 = &l_298;
        int32_t l_299[5][6] = {{0x0F1172DAL,(-5L),0x0F1172DAL,0x0F1172DAL,(-5L),0x0F1172DAL},{0x0F1172DAL,(-5L),0x0F1172DAL,0x0F1172DAL,(-5L),0x0F1172DAL},{0x0F1172DAL,(-5L),0x0F1172DAL,0x0F1172DAL,(-5L),0x0F1172DAL},{0x0F1172DAL,(-5L),0x0F1172DAL,0x0F1172DAL,(-5L),0x0F1172DAL},{0x0F1172DAL,(-5L),0x0F1172DAL,0x0F1172DAL,(-5L),0x0F1172DAL}};
        uint16_t *l_308 = &p_694->g_232;
        int i, j;
        (*l_278) ^= (!((safe_div_func_int8_t_s_s(((p_41 , l_294) != (((safe_div_func_uint8_t_u_u((&p_694->g_71 != ((*l_297) = &p_41)), p_40)) , l_299[4][1]) , &p_694->g_189)), (safe_add_func_uint32_t_u_u((p_40 >= (((*l_308) = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0UL ^ 9UL), 12)), p_694->g_272)), 1L))) < 0x37C6L)), (**p_694->g_211))))) < p_694->g_179[2][4]));
    }
    return p_694->g_272;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_29 p_694->g_60 p_694->g_71 p_694->g_28 p_694->g_7 p_694->g_50 p_694->g_122 p_694->g_5 p_694->g_69 p_694->g_147 p_694->g_107 p_694->g_156 p_694->g_164 p_694->g_179 p_694->g_153 p_694->g_189 p_694->g_211 p_694->g_195 p_694->g_212 p_694->g_215 p_694->g_220 p_694->g_150 p_694->g_244 p_694->g_246 p_694->g_232
 * writes: p_694->g_29 p_694->g_50 p_694->g_71 p_694->g_107 p_694->g_122 p_694->g_69 p_694->g_147 p_694->g_150 p_694->g_153 p_694->g_156 p_694->g_164 p_694->g_179 p_694->g_187 p_694->g_189 p_694->g_60 p_694->g_220 p_694->g_195 p_694->g_218 p_694->g_212 p_694->g_272
 */
int32_t  func_42(uint8_t * p_43, uint32_t  p_44, uint8_t  p_45, uint16_t  p_46, int32_t * p_47, struct S0 * p_694)
{ /* block id: 8 */
    int32_t l_54 = 1L;
    uint32_t *l_186 = &p_694->g_187;
    int16_t *l_188 = &p_694->g_189;
    uint64_t *l_190[10][10][2] = {{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}},{{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156},{&p_694->g_107,&p_694->g_156}}};
    int8_t *l_194 = &p_694->g_195[1];
    int8_t **l_193 = &l_194;
    int32_t *l_216 = &p_694->g_69;
    int32_t *l_217[3][3];
    int16_t l_219[3][7] = {{0L,0L,1L,0x0670L,8L,0x0670L,1L},{0L,0L,1L,0x0670L,8L,0x0670L,1L},{0L,0L,1L,0x0670L,8L,0x0670L,1L}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_217[i][j] = &l_54;
    }
lbl_243:
    (*p_694->g_215) = func_51((p_45 , (((l_54 | (safe_lshift_func_int16_t_s_s((p_694->g_29 , ((*l_188) ^= ((~(-7L)) ^ (+((*l_186) = func_57(p_694->g_60[2], l_54, p_694)))))), 11))) || ((p_694->g_179[1][1] > ((!(++p_694->g_107)) , 0L)) && 1UL)) >= l_54)), l_193, p_694);
lbl_239:
    --p_694->g_220[0];
    for (p_694->g_71 = 2; (p_694->g_71 <= 9); p_694->g_71 += 1)
    { /* block id: 71 */
        uint16_t *l_231[9];
        int32_t l_233[7][1][3] = {{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}},{{0x1932FCE1L,0x0AABE5D2L,(-5L)}}};
        int32_t l_236 = 1L;
        uint32_t **l_240 = &l_186;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_231[i] = &p_694->g_232;
        (*p_694->g_212) = ((safe_sub_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(p_694->g_220[p_694->g_71], ((**l_193) = 0x48L))) >= ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_233[3][0][2] = p_694->g_50), ((*l_188) = (safe_mul_func_uint8_t_u_u(l_236, ((((safe_mul_func_uint8_t_u_u(l_236, 0x11L)) < p_45) >= p_45) >= (*l_216))))))), p_694->g_150)) && p_46)), p_44)) , (*p_47));
        for (p_694->g_69 = 2; (p_694->g_69 >= 0); p_694->g_69 -= 1)
        { /* block id: 78 */
            for (p_44 = 0; (p_44 <= 6); p_44 += 1)
            { /* block id: 81 */
                int i, j;
                if (p_694->g_29)
                    goto lbl_239;
                if (l_219[p_694->g_69][p_44])
                    continue;
                for (p_45 = 0; (p_45 <= 8); p_45 += 1)
                { /* block id: 86 */
                    uint32_t ***l_242 = &l_240;
                    (*l_242) = l_240;
                }
                p_694->g_218 = 0x3886572DL;
            }
            if (p_694->g_71)
                goto lbl_243;
        }
        (*p_694->g_244) = (*p_694->g_211);
        for (l_54 = 2; (l_54 >= 0); l_54 -= 1)
        { /* block id: 96 */
            int32_t *l_245[6];
            uint16_t **l_257 = &l_231[0];
            int32_t *l_271 = &p_694->g_272;
            int i, j;
            for (i = 0; i < 6; i++)
                l_245[i] = &p_694->g_69;
            (*p_694->g_246) = l_245[3];
            l_236 &= (((safe_add_func_int32_t_s_s((((*l_271) = (safe_div_func_int32_t_s_s(((((p_45 = (safe_mod_func_int64_t_s_s((l_219[l_54][(l_54 + 3)] , l_219[l_54][(l_54 + 2)]), ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(6UL, (((&p_46 == ((*l_257) = l_231[0])) == ((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((*p_694->g_28) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((*l_216))), p_45)) | ((*l_216) == ((l_245[3] != (void*)0) ^ (-7L)))), (-10L))), p_46)), 0))), 0x31L)), p_46)) < p_46)) , p_694->g_195[0]))) & 65535UL), 2)) | p_44)))) == p_44) , &p_694->g_189) != &p_694->g_189), (*p_694->g_212)))) , 0x22753F27L), l_233[3][0][2])) | p_694->g_232) && p_44);
        }
    }
    return (**p_694->g_244);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_156 p_694->g_189 p_694->g_69 p_694->g_50 p_694->g_211 p_694->g_28 p_694->g_29 p_694->g_107 p_694->g_147 p_694->g_195 p_694->g_212
 * writes: p_694->g_156 p_694->g_69 p_694->g_107
 */
int8_t ** func_51(uint64_t  p_52, int8_t ** p_53, struct S0 * p_694)
{ /* block id: 58 */
    int32_t **l_208[1][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int8_t *l_214 = &p_694->g_50;
    int8_t **l_213 = &l_214;
    int i, j, k;
    for (p_694->g_156 = 0; (p_694->g_156 == 60); p_694->g_156 = safe_add_func_int16_t_s_s(p_694->g_156, 6))
    { /* block id: 61 */
        int32_t *l_198 = &p_694->g_69;
        int64_t *l_203[2];
        int i;
        for (i = 0; i < 2; i++)
            l_203[i] = (void*)0;
        (*l_198) |= p_694->g_189;
        (*p_694->g_212) = ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((&p_694->g_150 != l_203[0]) , 0x7FL), ((*l_198) > (((safe_mod_func_int16_t_s_s(0x3668L, ((0x69C672CBD4892DC4L <= (!((p_52 , (p_694->g_107 ^= ((safe_mul_func_int8_t_s_s((l_208[0][3][0] != ((((safe_mod_func_int16_t_s_s((((0UL || p_52) == 6L) < p_694->g_50), 65533UL)) && p_52) <= p_52) , p_694->g_211)), (*p_694->g_28))) >= 1L))) > p_52))) & p_694->g_147))) || (*l_198)) & p_52)))) , p_694->g_195[1]) && 0x5DECL), 0x24L)) | (-7L));
    }
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_29 p_694->g_50 p_694->g_71 p_694->g_28 p_694->g_7 p_694->g_122 p_694->g_5 p_694->g_69 p_694->g_147 p_694->g_60 p_694->g_107 p_694->g_156 p_694->g_164 p_694->g_179 p_694->g_153
 * writes: p_694->g_29 p_694->g_50 p_694->g_71 p_694->g_107 p_694->g_122 p_694->g_69 p_694->g_147 p_694->g_150 p_694->g_153 p_694->g_156 p_694->g_164 p_694->g_179
 */
uint32_t  func_57(int8_t ** p_58, uint32_t  p_59, struct S0 * p_694)
{ /* block id: 9 */
    uint8_t l_74 = 0x96L;
    int8_t *l_87 = (void*)0;
    uint8_t l_155 = 0UL;
    uint32_t *l_163 = &p_694->g_164;
    int32_t l_177 = 0x73C2BB4EL;
    uint32_t *l_178 = &p_694->g_179[1][1];
    uint32_t l_184 = 0x0B1BDB07L;
    int32_t *l_185[1];
    int i;
    for (i = 0; i < 1; i++)
        l_185[i] = (void*)0;
    for (p_694->g_29 = 0; (p_694->g_29 >= 36); ++p_694->g_29)
    { /* block id: 12 */
        int32_t *l_85 = &p_694->g_7;
        int8_t *l_86[5][5][8] = {{{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50}},{{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50}},{{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50}},{{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50}},{{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50},{&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50,&p_694->g_50}}};
        int i, j, k;
        for (p_694->g_50 = 14; (p_694->g_50 != 16); p_694->g_50 = safe_add_func_uint32_t_u_u(p_694->g_50, 4))
        { /* block id: 15 */
            int8_t l_67 = (-1L);
            int32_t l_70 = 0x7B6675F7L;
            int32_t *l_80 = &l_70;
            int32_t **l_79 = &l_80;
            int32_t l_88 = (-1L);
            for (p_59 = 0; (p_59 > 15); ++p_59)
            { /* block id: 18 */
                int32_t *l_68[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_68[i] = &p_694->g_69;
                p_694->g_71++;
                return l_67;
            }
            p_694->g_156 ^= (((l_74 > (l_70 ^ (p_59 > func_75((p_59 , p_59), l_70, (((*p_694->g_28) <= (((*l_79) = &p_694->g_69) == (((((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((l_85 == l_85), p_694->g_71)) ^ 0UL), (*l_85))) , l_86[4][0][3]) == l_87) ^ l_74) <= (-7L)) , l_88) , (void*)0))) , (void*)0), p_694)))) == l_155) | 0x6BL);
            return p_694->g_156;
        }
    }
    p_694->g_69 = ((0UL | (1L > (((safe_rshift_func_int8_t_s_s((((((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((++(*l_163)) , (safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((p_59 < (*p_694->g_28)), 0)) >= l_74), 1UL))), (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((*l_178)--) , 1L) || p_59), 3)), ((safe_mod_func_uint32_t_u_u(p_59, l_155)) , 65529UL))), 0x5BDCL)))), 10)) <= 0UL) && p_694->g_153[2][5][3]) , p_694->g_179[1][1]) && p_59), l_155)) != l_184) && 0x7686F9EFL))) , 0x6FC65C19L);
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_50 p_694->g_7 p_694->g_122 p_694->g_29 p_694->g_28 p_694->g_5 p_694->g_69 p_694->g_71 p_694->g_147 p_694->g_60 p_694->g_107
 * writes: p_694->g_107 p_694->g_71 p_694->g_122 p_694->g_69 p_694->g_147 p_694->g_150 p_694->g_153
 */
uint32_t  func_75(uint64_t  p_76, int32_t  p_77, int8_t ** p_78, struct S0 * p_694)
{ /* block id: 23 */
    int32_t *l_89[9];
    int32_t **l_90 = &l_89[3];
    uint8_t *l_103 = &p_694->g_29;
    uint64_t *l_106 = &p_694->g_107;
    uint16_t *l_118 = (void*)0;
    uint16_t *l_119 = &p_694->g_71;
    uint64_t l_120 = 18446744073709551609UL;
    uint64_t *l_121 = &p_694->g_122;
    uint16_t l_123[9][9][3] = {{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}},{{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL},{0xF296L,9UL,5UL}}};
    uint8_t l_154 = 250UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_89[i] = &p_694->g_69;
lbl_124:
    (*l_90) = l_89[3];
    (*l_90) = (void*)0;
    p_694->g_69 = ((safe_add_func_int8_t_s_s(6L, (safe_div_func_int8_t_s_s((!(safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(p_76, (safe_add_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((void*)0 == l_103), ((safe_sub_func_uint64_t_u_u(((*l_106) = 0x8A7CC15BC693E630L), (((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0x1F07AA3393FF8011L, p_694->g_50)), (safe_rshift_func_int16_t_s_u((-9L), (safe_sub_func_uint64_t_u_u(((*l_121) ^= (safe_mod_func_uint8_t_u_u((((~((*l_119) = (p_694->g_7 ^ (-1L)))) && p_77) ^ 0x93L), l_120))), p_694->g_29)))))) , (*p_694->g_28)) >= p_76))) , p_694->g_5))) , p_694->g_50), p_77)))) | p_76), (*p_694->g_28)))), l_123[1][6][0])))) , p_694->g_69);
    for (l_120 = 0; (l_120 <= 8); l_120 += 1)
    { /* block id: 32 */
        int64_t l_152[1][5][8] = {{{(-1L),(-1L),0x40E40D8D5C70F91DL,(-9L),7L,(-9L),0x40E40D8D5C70F91DL,(-1L)},{(-1L),(-1L),0x40E40D8D5C70F91DL,(-9L),7L,(-9L),0x40E40D8D5C70F91DL,(-1L)},{(-1L),(-1L),0x40E40D8D5C70F91DL,(-9L),7L,(-9L),0x40E40D8D5C70F91DL,(-1L)},{(-1L),(-1L),0x40E40D8D5C70F91DL,(-9L),7L,(-9L),0x40E40D8D5C70F91DL,(-1L)},{(-1L),(-1L),0x40E40D8D5C70F91DL,(-9L),7L,(-9L),0x40E40D8D5C70F91DL,(-1L)}}};
        int i, j, k;
        if (p_694->g_122)
            goto lbl_124;
        l_89[l_120] = l_89[l_120];
        for (p_694->g_71 = 0; (p_694->g_71 <= 2); p_694->g_71 += 1)
        { /* block id: 37 */
            int64_t l_143[3];
            uint8_t *l_146[7];
            int32_t l_148 = 0x3BD3CCC1L;
            int64_t *l_149 = &p_694->g_150;
            uint16_t *l_151 = &l_123[6][7][0];
            int i;
            for (i = 0; i < 3; i++)
                l_143[i] = (-1L);
            for (i = 0; i < 7; i++)
                l_146[i] = &p_694->g_147;
            l_154 = ((safe_lshift_func_uint16_t_u_s(p_77, 15)) & (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x3669L, (p_694->g_153[2][5][3] = ((~((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((p_694->g_7 , ((!p_694->g_71) & (safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((l_143[1] , (safe_mul_func_int8_t_s_s(0x67L, (p_694->g_147 &= 0xDFL)))), ((*l_151) = ((((*l_149) = (((((((0UL || p_76) || l_148) | p_694->g_50) & 4294967291UL) , p_694->g_60[7]) != (void*)0) ^ p_76)) , 0UL) >= p_694->g_71)))), p_694->g_50)), p_76)))), p_77)), p_694->g_107)), 0x358C8BF5EF5A3C84L)) == p_76)) & l_152[0][1][3])))), 0x6CL)));
            return p_694->g_50;
        }
    }
    return p_694->g_5;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_695;
    struct S0* p_694 = &c_695;
    struct S0 c_696 = {
        4294967295UL, // p_694->g_5
        0x438BEA12L, // p_694->g_7
        {{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}},{{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL},{1UL,0x0FL,0x0FL,1UL}}}, // p_694->g_22
        252UL, // p_694->g_29
        &p_694->g_29, // p_694->g_28
        0L, // p_694->g_50
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_694->g_60
        5L, // p_694->g_69
        65535UL, // p_694->g_71
        0x39075E3015D2C357L, // p_694->g_107
        18446744073709551612UL, // p_694->g_122
        0x2CL, // p_694->g_147
        0x1D000C4EEBD0F648L, // p_694->g_150
        {{{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L}},{{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L}},{{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L}},{{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L},{0x3B0CC83122935832L,(-7L),(-1L),(-7L),0x3B0CC83122935832L}}}, // p_694->g_153
        0xD5FB044322DFB8A6L, // p_694->g_156
        0xBBA2D269L, // p_694->g_164
        {{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL},{0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL,0xBEBF0B67L,0x9E6741FAL,0x9E6741FAL}}, // p_694->g_179
        0xB1C6A30DL, // p_694->g_187
        (-6L), // p_694->g_189
        {(-1L),(-1L)}, // p_694->g_195
        &p_694->g_69, // p_694->g_212
        &p_694->g_212, // p_694->g_211
        &p_694->g_60[2], // p_694->g_215
        0x205BAC6DL, // p_694->g_218
        {4294967295UL,4294967295UL,0xA97DC5E8L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0xA97DC5E8L,4294967295UL,4294967295UL}, // p_694->g_220
        0xAB16L, // p_694->g_232
        (void*)0, // p_694->g_241
        &p_694->g_212, // p_694->g_244
        &p_694->g_212, // p_694->g_246
        2L, // p_694->g_272
        4294967295UL, // p_694->g_286
        &p_694->g_71, // p_694->g_317
        &p_694->g_317, // p_694->g_316
        0xF9A6713AL, // p_694->g_329
        8UL, // p_694->g_353
        0x4DL, // p_694->g_373
        (-2L), // p_694->g_374
        {0UL,255UL,0UL,0UL,255UL,0UL}, // p_694->g_375
        0x40B2L, // p_694->g_384
        0x7911EC5A63EBDE44L, // p_694->g_386
        0xD1L, // p_694->g_387
        &p_694->g_212, // p_694->g_448
        {{0x1CB0L,3UL,0x5981L,3UL},{0x1CB0L,3UL,0x5981L,3UL},{0x1CB0L,3UL,0x5981L,3UL},{0x1CB0L,3UL,0x5981L,3UL},{0x1CB0L,3UL,0x5981L,3UL},{0x1CB0L,3UL,0x5981L,3UL}}, // p_694->g_473
        &p_694->g_329, // p_694->g_524
        &p_694->g_524, // p_694->g_523
        &p_694->g_212, // p_694->g_526
        0x2FB77FA9D3EF3816L, // p_694->g_572
        249UL, // p_694->g_575
        {{4294967293UL,0x2D156C00L,4294967293UL},{4294967293UL,0x2D156C00L,4294967293UL},{4294967293UL,0x2D156C00L,4294967293UL},{4294967293UL,0x2D156C00L,4294967293UL},{4294967293UL,0x2D156C00L,4294967293UL},{4294967293UL,0x2D156C00L,4294967293UL}}, // p_694->g_594
        0x2CF60007L, // p_694->g_598
        {{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}},{{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L},{0L,0x13B7ACE1L,0x21EB5954L,0x20E08EAAL,0x36B72C47L}}}, // p_694->g_599
        (void*)0, // p_694->g_615
        (void*)0, // p_694->g_623
        0x65DA38F3L, // p_694->g_635
        &p_694->g_212, // p_694->g_660
        65527UL, // p_694->g_693
    };
    c_695 = c_696;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_694);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_694->g_5, "p_694->g_5", print_hash_value);
    transparent_crc(p_694->g_7, "p_694->g_7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_694->g_22[i][j][k], "p_694->g_22[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_694->g_29, "p_694->g_29", print_hash_value);
    transparent_crc(p_694->g_50, "p_694->g_50", print_hash_value);
    transparent_crc(p_694->g_69, "p_694->g_69", print_hash_value);
    transparent_crc(p_694->g_71, "p_694->g_71", print_hash_value);
    transparent_crc(p_694->g_107, "p_694->g_107", print_hash_value);
    transparent_crc(p_694->g_122, "p_694->g_122", print_hash_value);
    transparent_crc(p_694->g_147, "p_694->g_147", print_hash_value);
    transparent_crc(p_694->g_150, "p_694->g_150", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_694->g_153[i][j][k], "p_694->g_153[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_694->g_156, "p_694->g_156", print_hash_value);
    transparent_crc(p_694->g_164, "p_694->g_164", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_694->g_179[i][j], "p_694->g_179[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_694->g_187, "p_694->g_187", print_hash_value);
    transparent_crc(p_694->g_189, "p_694->g_189", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_694->g_195[i], "p_694->g_195[i]", print_hash_value);

    }
    transparent_crc(p_694->g_218, "p_694->g_218", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_694->g_220[i], "p_694->g_220[i]", print_hash_value);

    }
    transparent_crc(p_694->g_232, "p_694->g_232", print_hash_value);
    transparent_crc(p_694->g_272, "p_694->g_272", print_hash_value);
    transparent_crc(p_694->g_286, "p_694->g_286", print_hash_value);
    transparent_crc(p_694->g_329, "p_694->g_329", print_hash_value);
    transparent_crc(p_694->g_353, "p_694->g_353", print_hash_value);
    transparent_crc(p_694->g_373, "p_694->g_373", print_hash_value);
    transparent_crc(p_694->g_374, "p_694->g_374", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_694->g_375[i], "p_694->g_375[i]", print_hash_value);

    }
    transparent_crc(p_694->g_384, "p_694->g_384", print_hash_value);
    transparent_crc(p_694->g_386, "p_694->g_386", print_hash_value);
    transparent_crc(p_694->g_387, "p_694->g_387", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_694->g_473[i][j], "p_694->g_473[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_694->g_572, "p_694->g_572", print_hash_value);
    transparent_crc(p_694->g_575, "p_694->g_575", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_694->g_594[i][j], "p_694->g_594[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_694->g_598, "p_694->g_598", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_694->g_599[i][j][k], "p_694->g_599[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_694->g_635, "p_694->g_635", print_hash_value);
    transparent_crc(p_694->g_693, "p_694->g_693", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
