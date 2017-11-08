// -g 36,25,3 -l 2,25,1
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


// Seed: 1046372559

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
   volatile int32_t  f0;
   uint8_t  f1;
   volatile int64_t  f2;
   uint32_t  f3;
};

struct S2 {
   volatile int64_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};

struct S3 {
   uint32_t  f0;
};

struct S5 {
   volatile int64_t  f0;
   int64_t  f1;
};

struct S8 {
   uint32_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   volatile uint8_t  f3;
   uint64_t  f4;
};

struct S10 {
   int32_t  f0;
   uint64_t  f1;
   volatile struct S2  f2;
   volatile int8_t  f3;
   struct S0  f4;
   uint64_t  f5;
   int32_t  f6;
   volatile int8_t  f7;
   struct S8  f8;
   volatile int8_t  f9;
};

struct S12 {
    struct S1 g_14;
    int32_t g_34[3];
    int32_t g_52[7][1];
    int32_t g_82[7][2][10];
    int32_t g_86;
    int32_t *g_85;
    int32_t g_92;
    int64_t g_121;
    uint16_t g_123;
    uint64_t g_124[7][10];
    int64_t g_126;
    uint32_t g_127;
    struct S3 g_133;
    uint8_t g_143[6];
    int16_t g_152;
    uint16_t g_160;
    struct S0 g_166;
    uint32_t g_194;
    int64_t * volatile *g_225;
    volatile uint8_t g_237;
    volatile uint8_t g_238;
    volatile uint8_t g_239;
    volatile uint8_t g_240;
    volatile uint8_t g_241;
    volatile uint8_t g_242;
    volatile uint8_t g_243[6];
    volatile uint8_t g_244;
    volatile uint8_t g_245;
    volatile uint8_t g_246;
    volatile uint8_t g_247[4];
    volatile uint8_t g_248[9];
    volatile uint8_t g_249;
    volatile uint8_t g_250;
    volatile uint8_t g_251;
    volatile uint8_t g_252;
    volatile uint8_t g_253;
    volatile uint8_t g_254;
    volatile uint8_t g_255;
    volatile uint8_t g_256;
    volatile uint8_t g_257[1][10];
    volatile uint8_t g_258[10];
    volatile uint8_t g_259;
    volatile uint8_t g_260;
    volatile uint8_t g_261;
    volatile uint8_t g_262;
    volatile uint8_t g_263;
    volatile uint8_t g_264[6][6];
    volatile uint8_t g_265;
    volatile uint8_t g_266;
    volatile uint8_t g_267;
    volatile uint8_t g_268;
    volatile uint8_t g_269;
    volatile uint8_t *g_236[2][6][9];
    volatile uint8_t * volatile *g_235;
    int32_t **g_307;
    uint32_t g_347[10][4][3];
    struct S1 g_350;
    struct S1 * volatile g_351;
    uint16_t *g_369;
    uint16_t **g_368;
    uint16_t ***g_367;
    struct S10 g_389;
    struct S8 g_401;
    int32_t *g_410;
    int32_t ** volatile g_409;
    struct S10 g_411;
    volatile struct S5 g_412;
    volatile struct S5 * volatile g_413;
    struct S3 *g_422;
    struct S3 ** volatile g_421;
    int8_t g_447;
    int64_t *g_470;
    int64_t **g_469;
    int64_t ***g_468;
    volatile int8_t g_483[5];
    int32_t ** volatile g_493;
    struct S5 g_500;
    uint64_t *g_525;
    struct S2 g_528;
    uint64_t g_547;
    struct S5 g_551;
};


/* --- FORWARD DECLARATIONS --- */
struct S5  func_1(struct S12 * p_552);
int32_t  func_2(int32_t  p_3, struct S12 * p_552);
int32_t  func_7(int8_t  p_8, uint16_t  p_9, int32_t  p_10, int16_t  p_11, struct S12 * p_552);
uint32_t  func_15(int8_t  p_16, struct S12 * p_552);
int8_t  func_17(uint8_t  p_18, uint8_t  p_19, uint32_t  p_20, int32_t  p_21, int64_t  p_22, struct S12 * p_552);
uint8_t  func_25(uint32_t  p_26, uint8_t  p_27, struct S12 * p_552);
int16_t  func_28(int8_t  p_29, uint64_t  p_30, uint32_t  p_31, struct S12 * p_552);
int32_t  func_45(int32_t  p_46, int8_t  p_47, int32_t * p_48, uint8_t  p_49, int32_t * p_50, struct S12 * p_552);
struct S0  func_72(int32_t  p_73, int32_t * p_74, int32_t * p_75, struct S12 * p_552);
int32_t * func_76(int32_t * p_77, uint32_t  p_78, struct S12 * p_552);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_552->g_14 p_552->g_52 p_552->g_34 p_552->g_82 p_552->g_85 p_552->g_92 p_552->g_123 p_552->g_127 p_552->g_133 p_552->g_121 p_552->g_160 p_552->g_166 p_552->g_152 p_552->g_194 p_552->g_86 p_552->g_124 p_552->g_225 p_552->g_126 p_552->g_235 p_552->g_248 p_552->g_411.f5 p_552->g_447 p_552->g_267 p_552->g_368 p_552->g_369 p_552->g_470 p_552->g_410 p_552->g_422 p_552->g_367 p_552->g_525 p_552->g_389.f4.f0 p_552->g_401.f1 p_552->g_411.f8.f0 p_552->g_528 p_552->g_411.f8.f2 p_552->g_411.f8.f4 p_552->g_547 p_552->g_551
 * writes: p_552->g_52 p_552->g_82 p_552->g_92 p_552->g_121 p_552->g_123 p_552->g_124 p_552->g_126 p_552->g_127 p_552->g_133 p_552->g_143 p_552->g_152 p_552->g_160 p_552->g_14.f1 p_552->g_34 p_552->g_235 p_552->g_85 p_552->g_307 p_552->g_166.f0 p_552->g_447 p_552->g_86 p_552->g_483 p_552->g_528 p_552->g_547
 */
struct S5  func_1(struct S12 * p_552)
{ /* block id: 4 */
    int32_t l_23[7][7][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
    int32_t l_24 = (-1L);
    uint16_t l_32 = 65535UL;
    int8_t *l_494 = &p_552->g_447;
    uint16_t l_527[8][2][10] = {{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}},{{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L},{0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L,65534UL,0x6124L,0x6124L}}};
    struct S1 *l_549 = &p_552->g_350;
    struct S1 **l_548 = &l_549;
    struct S1 ***l_550 = &l_548;
    int i, j, k;
    p_552->g_547 &= func_2((safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(func_7(((safe_mod_func_uint32_t_u_u((p_552->g_14 , func_15(((*l_494) &= func_17((l_23[2][3][1] <= p_552->g_14.f0), l_23[3][2][1], l_24, (p_552->g_14.f3 | func_25((p_552->g_14.f3 && func_28(l_24, l_23[4][0][1], l_32, p_552)), l_23[2][3][1], p_552)), l_32, p_552)), p_552)), 0x7C973565L)) < p_552->g_401.f1), l_23[5][5][0], p_552->g_411.f8.f0, l_527[5][0][9], p_552))), p_552->g_411.f8.f4)), p_552);
    (*l_550) = l_548;
    return p_552->g_551;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_528.f1 p_552->g_410 p_552->g_34
 * writes: p_552->g_528.f1 p_552->g_34
 */
int32_t  func_2(int32_t  p_3, struct S12 * p_552)
{ /* block id: 235 */
    uint32_t l_538 = 0x33FC72DFL;
    int32_t *l_539 = &p_552->g_34[1];
    int32_t *l_540 = &p_552->g_34[1];
    int32_t *l_541 = &p_552->g_34[0];
    int32_t l_542 = 0x7BD404C2L;
    int32_t *l_543[1][8] = {{&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1],&p_552->g_82[1][1][1]}};
    uint16_t l_544 = 0xC14BL;
    int i, j;
    for (p_552->g_528.f1 = 0; (p_552->g_528.f1 != 58); p_552->g_528.f1 = safe_add_func_int32_t_s_s(p_552->g_528.f1, 5))
    { /* block id: 238 */
        int32_t l_537 = 1L;
        return l_537;
    }
    (*p_552->g_410) ^= l_538;
    l_544--;
    return (*l_540);
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_410 p_552->g_34 p_552->g_528 p_552->g_411.f8.f2
 * writes: p_552->g_34 p_552->g_528
 */
int32_t  func_7(int8_t  p_8, uint16_t  p_9, int32_t  p_10, int16_t  p_11, struct S12 * p_552)
{ /* block id: 222 */
    uint32_t *l_530[8];
    uint32_t *l_532 = &p_552->g_127;
    uint32_t **l_531 = &l_532;
    uint64_t **l_533 = &p_552->g_525;
    uint64_t ***l_534 = &l_533;
    int i;
    for (i = 0; i < 8; i++)
        l_530[i] = &p_552->g_127;
    (*p_552->g_410) ^= p_9;
    for (p_10 = 4; (p_10 >= 1); p_10 -= 1)
    { /* block id: 226 */
        struct S2 *l_529 = &p_552->g_528;
        (*l_529) = p_552->g_528;
        if ((*p_552->g_410))
            break;
    }
    (*p_552->g_410) = ((((*l_531) = (l_530[2] = l_530[2])) != &p_552->g_347[7][0][1]) != p_552->g_411.f8.f2);
    (*l_534) = l_533;
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_267 p_552->g_447 p_552->g_368 p_552->g_369 p_552->g_160 p_552->g_126 p_552->g_470 p_552->g_410 p_552->g_248 p_552->g_422 p_552->g_133 p_552->g_367 p_552->g_525 p_552->g_34 p_552->g_389.f4.f0
 * writes: p_552->g_447 p_552->g_121 p_552->g_34 p_552->g_86 p_552->g_483 p_552->g_133 p_552->g_160
 */
uint32_t  func_15(int8_t  p_16, struct S12 * p_552)
{ /* block id: 207 */
    int8_t *l_495 = &p_552->g_447;
    uint32_t l_498 = 0UL;
    struct S5 *l_499 = &p_552->g_500;
    struct S3 **l_502 = &p_552->g_422;
    struct S3 ***l_501 = &l_502;
    int32_t l_504 = 9L;
    int32_t l_505 = 0x7E927C4FL;
    int32_t *l_506 = &p_552->g_92;
    int16_t l_507 = 0x3166L;
    int32_t *l_508 = &p_552->g_34[1];
    int32_t *l_509 = &l_504;
    int32_t *l_510[3][8][1] = {{{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]}},{{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]}},{{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]},{&p_552->g_34[1]}}};
    int32_t l_511 = 0x2C7CA74CL;
    uint32_t l_512 = 0UL;
    struct S0 l_519 = {0x02CE9C00L};
    uint64_t *l_524 = &p_552->g_124[1][4];
    uint64_t *l_526[8];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_526[i] = &p_552->g_124[5][8];
    (*p_552->g_410) = (((*l_495) |= p_552->g_267) != (safe_sub_func_uint8_t_u_u(l_498, (((void*)0 != l_499) >= ((l_505 = ((**p_552->g_368) , (p_552->g_126 >= (((*l_501) = &p_552->g_422) != (((0xCFCDL > (safe_unary_minus_func_int64_t_s((l_504 = ((*p_552->g_470) = (-8L)))))) <= 65530UL) , (void*)0))))) ^ p_16)))));
    for (p_552->g_86 = 0; p_552->g_86 < 5; p_552->g_86 += 1)
    {
        p_552->g_483[p_552->g_86] = (-2L);
    }
    l_512--;
    (*p_552->g_410) = ((p_552->g_248[3] > ((~(0x3F17C73AL >= 0xED8168DAL)) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((***p_552->g_367) = (((**l_502) = (**l_502)) , (***p_552->g_367))), ((((*l_495) = (((l_519 , (safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(0xDDE13F1EL, ((l_524 == (l_526[4] = p_552->g_525)) ^ (*l_508)))) && 1L), 0UL))) & 0x0D3AA81C005979FEL) != (*p_552->g_410))) , p_16) | p_552->g_389.f4.f0))), (*l_508))))) ^ p_16);
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_248 p_552->g_85 p_552->g_34 p_552->g_82 p_552->g_411.f5
 * writes: p_552->g_34 p_552->g_307 p_552->g_166.f0 p_552->g_124
 */
int8_t  func_17(uint8_t  p_18, uint8_t  p_19, uint32_t  p_20, int32_t  p_21, int64_t  p_22, struct S12 * p_552)
{ /* block id: 132 */
    int32_t *l_294 = &p_552->g_34[1];
    int32_t **l_305 = (void*)0;
    int32_t l_317 = 0x599563AFL;
    int32_t l_318 = (-1L);
    int32_t l_320 = 0x5CAB69B8L;
    int32_t l_323 = 0x49459229L;
    int32_t l_324 = (-1L);
    int32_t l_328 = 2L;
    int32_t l_331[6];
    uint8_t *l_336 = &p_552->g_143[0];
    uint8_t **l_335 = &l_336;
    struct S3 l_337 = {0x91DE52BEL};
    int16_t l_346[10][9][2] = {{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}},{{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L},{0x7F04L,0L}}};
    int16_t l_488 = 0x5075L;
    int32_t l_489 = (-1L);
    uint32_t l_490 = 0x0323EA4BL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_331[i] = 0x17CF08D6L;
    (*l_294) = (0x9F253FA2L && ((safe_rshift_func_uint16_t_u_s(0x78C0L, 15)) > (p_552->g_248[6] , 0xB376BA76L)));
    for (p_18 = 23; (p_18 <= 11); --p_18)
    { /* block id: 136 */
        int32_t **l_306 = &p_552->g_85;
        int32_t l_315 = (-2L);
        int32_t l_316 = 0x700611AEL;
        int32_t l_319 = 0x5A0B546CL;
        int32_t l_321 = 0x5903AD15L;
        int32_t l_322 = 1L;
        int32_t l_325 = 0x4F6941FBL;
        int32_t l_326 = 8L;
        int32_t l_327 = 0x73FD6F96L;
        int32_t l_329 = 1L;
        int32_t l_330[3][7][10] = {{{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L}},{{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L}},{{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L},{0x1D98C76DL,1L,0x1B7EF219L,0x7F8D76FFL,0L,0x4FC6F7FAL,0x1D98C76DL,0L,0x5D0FD5C3L,0x5D0FD5C3L}}};
        uint32_t l_332 = 0UL;
        int64_t l_397 = 1L;
        int32_t l_408 = 0x151164A3L;
        int32_t l_482 = (-8L);
        int16_t l_484 = 0x6373L;
        int i, j, k;
        (*l_294) = (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(0x36L, p_552->g_248[3])) && ((safe_mod_func_uint8_t_u_u(p_19, 0x7CL)) || (l_305 == (p_552->g_307 = l_306)))), 7));
        for (p_552->g_166.f0 = 0; (p_552->g_166.f0 > 15); p_552->g_166.f0++)
        { /* block id: 141 */
            int32_t *l_310 = &p_552->g_34[1];
            int32_t *l_311 = (void*)0;
            int32_t *l_312 = &p_552->g_82[6][0][6];
            int32_t l_313 = 0x1BFD1996L;
            int32_t *l_314[1][3][8] = {{{&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92},{&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92},{&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92,&p_552->g_92}}};
            uint64_t *l_340 = &p_552->g_124[5][6];
            int32_t **l_342 = &l_311;
            int i, j, k;
            --l_332;
            (*l_342) = (((void*)0 == l_335) , ((((*p_552->g_85) , (l_337 , ((safe_div_func_int16_t_s_s((-1L), p_19)) >= (((*l_340) = (*l_312)) ^ 0L)))) , (safe_unary_minus_func_uint64_t_u((0UL == 8L)))) , &l_323));
        }
        for (l_332 = 0; (l_332 <= 2); l_332 += 1)
        { /* block id: 148 */
            uint32_t l_343 = 0UL;
            return l_343;
        }
    }
    return p_552->g_411.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_34
 * writes: p_552->g_34 p_552->g_85
 */
uint8_t  func_25(uint32_t  p_26, uint8_t  p_27, struct S12 * p_552)
{ /* block id: 125 */
    int32_t *l_282 = &p_552->g_34[1];
    int32_t **l_283 = (void*)0;
    int32_t **l_284 = (void*)0;
    int32_t **l_285 = &p_552->g_85;
    int16_t *l_287 = &p_552->g_152;
    int16_t **l_286 = &l_287;
    int32_t *l_289 = &p_552->g_82[2][0][5];
    int32_t **l_288 = &l_289;
    (*l_282) |= (-10L);
    (*l_288) = (l_282 = func_76(((*l_285) = l_282), (((*l_286) = (void*)0) == &p_552->g_152), p_552));
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_52 p_552->g_34 p_552->g_14.f1 p_552->g_14.f3 p_552->g_82 p_552->g_85 p_552->g_92 p_552->g_123 p_552->g_127 p_552->g_133 p_552->g_121 p_552->g_160 p_552->g_166 p_552->g_152 p_552->g_194 p_552->g_86 p_552->g_124 p_552->g_225 p_552->g_126 p_552->g_235
 * writes: p_552->g_52 p_552->g_82 p_552->g_92 p_552->g_121 p_552->g_123 p_552->g_124 p_552->g_126 p_552->g_127 p_552->g_133 p_552->g_143 p_552->g_152 p_552->g_160 p_552->g_14.f1 p_552->g_34 p_552->g_235
 */
int16_t  func_28(int8_t  p_29, uint64_t  p_30, uint32_t  p_31, struct S12 * p_552)
{ /* block id: 5 */
    int32_t *l_33 = &p_552->g_34[1];
    int32_t *l_35 = &p_552->g_34[0];
    int32_t l_36[1];
    int32_t *l_37[2][8];
    int32_t l_38 = 0x5994868BL;
    int8_t l_39 = 0x30L;
    uint16_t l_40 = 65535UL;
    int64_t l_58 = 0L;
    struct S0 l_168 = {0x55996390L};
    uint32_t l_169 = 4294967294UL;
    uint32_t l_271 = 4294967287UL;
    int16_t l_281[10];
    int i, j;
    for (i = 0; i < 1; i++)
        l_36[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_37[i][j] = &p_552->g_34[2];
    }
    for (i = 0; i < 10; i++)
        l_281[i] = 9L;
lbl_223:
    l_40++;
    for (l_40 = 0; (l_40 < 10); l_40++)
    { /* block id: 9 */
        int32_t *l_51 = &p_552->g_52[6][0];
        int32_t l_57 = 9L;
        int32_t l_59 = 0x574AE622L;
        int32_t **l_79 = &l_33;
        struct S0 *l_167 = (void*)0;
        int32_t *l_170 = &l_57;
        uint16_t *l_210[1];
        uint16_t **l_209 = &l_210[0];
        int32_t l_274 = (-10L);
        int32_t l_275 = (-7L);
        int32_t l_276[8];
        int16_t l_277 = 0x13C8L;
        uint8_t l_278 = 8UL;
        int i;
        for (i = 0; i < 1; i++)
            l_210[i] = &l_40;
        for (i = 0; i < 8; i++)
            l_276[i] = 0x3267E44FL;
        p_552->g_34[1] = func_45(((*l_51) &= (-7L)), (safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(l_57, (+p_30))) , p_552->g_34[1]), (l_59 ^= l_58))), ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_29, p_552->g_14.f1)), (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((l_168 = func_72(((&p_552->g_34[2] != ((*l_79) = func_76(l_51, p_552->g_14.f3, p_552))) || 0x47924425L), l_35, l_51, p_552)) , l_37[1][5]) != (void*)0), p_552->g_14.f3)), l_169)) >= p_552->g_14.f1), 0)), p_31)))) , (void*)0), p_31, l_170, p_552);
        for (p_552->g_14.f1 = 0; (p_552->g_14.f1 <= 0); p_552->g_14.f1 += 1)
        { /* block id: 81 */
            int16_t *l_208 = &p_552->g_152;
            uint16_t ***l_211 = &l_209;
            uint16_t **l_212 = &l_210[0];
            uint64_t *l_217 = &p_552->g_124[5][8];
            int i, j;
            l_212 = ((*l_211) = (((p_552->g_133 , l_167) == (void*)0) , ((safe_mod_func_uint8_t_u_u((p_552->g_52[(p_552->g_14.f1 + 6)][p_552->g_14.f1] && ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_552->g_52[(p_552->g_14.f1 + 2)][p_552->g_14.f1], p_552->g_194)), p_552->g_52[(p_552->g_14.f1 + 2)][p_552->g_14.f1])) < (safe_mod_func_int8_t_s_s((((*l_208) ^= (p_31 ^ (safe_sub_func_int16_t_s_s(p_552->g_86, p_552->g_52[(p_552->g_14.f1 + 2)][p_552->g_14.f1])))) , p_552->g_14.f1), 0xF4L)))), p_29)) , l_209)));
            if (((safe_rshift_func_uint16_t_u_s((1UL & ((*l_217) |= (safe_mod_func_int64_t_s_s((((l_37[p_552->g_14.f1][(p_552->g_14.f1 + 7)] = func_76(l_37[p_552->g_14.f1][p_552->g_14.f1], ((void*)0 == &p_552->g_143[4]), p_552)) != (void*)0) > p_552->g_34[0]), (**l_79))))), 4)) & (safe_add_func_uint16_t_u_u((((((5L & (*l_33)) == 0x53A9CDA35C18D9A8L) == p_552->g_86) == p_31) > (-9L)), 1L))))
            { /* block id: 87 */
                int64_t *l_227 = &l_58;
                int64_t **l_226 = &l_227;
                if (p_29)
                { /* block id: 88 */
                    uint32_t l_220 = 4294967295UL;
                    --l_220;
                    if (p_552->g_152)
                        goto lbl_223;
                }
                else
                { /* block id: 91 */
                    int8_t l_231[8][7] = {{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)},{0x71L,(-1L),1L,(-1L),0x71L,0x71L,(-1L)}};
                    int i, j;
                    for (p_552->g_160 = 0; (p_552->g_160 <= 0); p_552->g_160 += 1)
                    { /* block id: 94 */
                        uint64_t *l_224[2];
                        int64_t ***l_228 = &l_226;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_224[i] = &p_552->g_124[5][8];
                        (*l_170) &= ((p_552->g_123 = ((l_224[1] == ((p_552->g_225 != ((*l_228) = l_226)) , l_227)) < ((void*)0 == &p_552->g_52[6][0]))) == (p_552->g_82[(p_552->g_14.f1 + 2)][(p_552->g_160 + 1)][(p_552->g_160 + 3)] && (safe_lshift_func_int8_t_s_u(0x0DL, (!(((3UL ^ l_231[0][4]) , p_30) || p_31))))));
                        if (p_30)
                            continue;
                    }
                }
                for (p_30 = 0; (p_30 <= 0); p_30 += 1)
                { /* block id: 103 */
                    uint32_t l_232 = 5UL;
                    l_232--;
                    if (p_31)
                        continue;
                }
                for (p_552->g_126 = 0; (p_552->g_126 <= 0); p_552->g_126 += 1)
                { /* block id: 109 */
                    (*l_33) = p_552->g_160;
                    return p_30;
                }
            }
            else
            { /* block id: 113 */
                for (l_168.f0 = 0; (l_168.f0 >= 0); l_168.f0 -= 1)
                { /* block id: 116 */
                    volatile uint8_t * volatile **l_270 = &p_552->g_235;
                    (*l_270) = p_552->g_235;
                }
            }
        }
        l_271++;
        l_278--;
    }
    return l_281[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_152 p_552->g_82 p_552->g_52 p_552->g_194 p_552->g_34
 * writes: p_552->g_152 p_552->g_14.f1
 */
int32_t  func_45(int32_t  p_46, int8_t  p_47, int32_t * p_48, uint8_t  p_49, int32_t * p_50, struct S12 * p_552)
{ /* block id: 70 */
    uint32_t l_189[10][4][3] = {{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}},{{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L},{1UL,4UL,0xDE767DA5L}}};
    int16_t l_192 = 0x41D0L;
    uint16_t l_193 = 65535UL;
    int32_t l_197 = 0x769E08EBL;
    int i, j, k;
    for (p_552->g_152 = (-24); (p_552->g_152 > (-24)); p_552->g_152 = safe_add_func_uint8_t_u_u(p_552->g_152, 2))
    { /* block id: 73 */
        uint8_t *l_195 = &p_552->g_14.f1;
        int32_t l_196 = 0L;
        (*p_50) = (safe_add_func_int64_t_s_s(0x75B0FBB6A00515F6L, ((((safe_div_func_uint8_t_u_u(((*l_195) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(p_47, ((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x1AA1L, (p_47 ^ l_189[6][1][2]))), ((safe_add_func_uint64_t_u_u((p_47 <= (l_192 , p_47)), (p_552->g_82[2][0][5] & p_552->g_52[6][0]))) > 0x4252L))), l_193)) <= 0x2BE6E403L), p_49)) && p_552->g_194))), p_552->g_34[2]))), l_196)) | (*p_50)) >= p_46) == l_196)));
    }
    return l_197;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_82 p_552->g_85 p_552->g_92 p_552->g_34 p_552->g_14.f1 p_552->g_123 p_552->g_127 p_552->g_133 p_552->g_121 p_552->g_160 p_552->g_166
 * writes: p_552->g_82 p_552->g_92 p_552->g_121 p_552->g_123 p_552->g_124 p_552->g_126 p_552->g_127 p_552->g_133 p_552->g_143 p_552->g_152 p_552->g_160
 */
struct S0  func_72(int32_t  p_73, int32_t * p_74, int32_t * p_75, struct S12 * p_552)
{ /* block id: 15 */
    uint16_t l_97 = 0UL;
    int64_t l_108 = 0x2435F7338A2FE657L;
    struct S0 l_130 = {0x168EFB81L};
    for (p_73 = 0; (p_73 > (-7)); p_73 = safe_sub_func_uint16_t_u_u(p_73, 2))
    { /* block id: 18 */
        uint64_t l_87 = 0x9076915C511D4011L;
        int32_t l_96 = 0x65FFF913L;
        struct S3 l_117 = {0xA79B2191L};
        int32_t l_158 = (-3L);
        int32_t l_159 = (-8L);
        for (p_552->g_82[2][0][5] = (-24); (p_552->g_82[2][0][5] > 14); p_552->g_82[2][0][5]++)
        { /* block id: 21 */
            int32_t *l_89 = &p_552->g_34[1];
            int32_t **l_88 = &l_89;
            int32_t *l_90 = (void*)0;
            int32_t *l_91 = &p_552->g_92;
            int32_t *l_93 = &p_552->g_92;
            int32_t *l_94 = &p_552->g_92;
            int32_t *l_95[1][3];
            struct S0 l_163 = {5L};
            struct S0 *l_164 = (void*)0;
            struct S0 *l_165 = &l_130;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_95[i][j] = (void*)0;
            }
            (*l_88) = func_76(p_552->g_85, l_87, p_552);
            ++l_97;
            for (l_87 = 0; (l_87 < 16); l_87 = safe_add_func_uint8_t_u_u(l_87, 1))
            { /* block id: 26 */
                int32_t *l_113[5][9] = {{&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86},{&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86},{&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86},{&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86},{&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86,&p_552->g_86}};
                struct S3 l_116[9][1] = {{{4UL}},{{4UL}},{{4UL}},{{4UL}},{{4UL}},{{4UL}},{{4UL}},{{4UL}},{{4UL}}};
                uint32_t l_146 = 0x191EB41DL;
                int16_t l_157[8][7][4] = {{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}},{{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)},{(-1L),0x72ADL,(-1L),(-1L)}}};
                int i, j, k;
                for (l_97 = 0; (l_97 < 54); l_97++)
                { /* block id: 29 */
                    int64_t *l_120 = &p_552->g_121;
                    uint16_t *l_122 = &p_552->g_123;
                    int64_t *l_125 = &p_552->g_126;
                    int8_t l_150 = 0x76L;
                    int32_t l_153 = 0x2EDFF1B3L;
                    (*l_94) = p_552->g_82[2][0][5];
                    p_552->g_127 &= ((safe_lshift_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((((*l_125) = (l_108 > (p_552->g_124[5][8] = ((safe_add_func_int16_t_s_s(((p_552->g_92 <= (safe_mul_func_int8_t_s_s((l_108 | ((l_113[3][8] != (void*)0) , p_552->g_34[1])), (((safe_mod_func_uint16_t_u_u(l_96, ((l_117 = l_116[5][0]) , ((*l_122) ^= (safe_add_func_int16_t_s_s((((*l_120) = ((l_96 > l_116[5][0].f0) > p_552->g_14.f1)) < p_552->g_14.f1), l_116[5][0].f0)))))) != 255UL) == (-1L))))) , 1L), p_552->g_34[0])) ^ 2L)))) , 0x1BL), p_73)) >= 5UL) < p_73), 2)) | p_552->g_82[2][0][5]);
                    for (p_552->g_92 = 0; (p_552->g_92 < (-13)); --p_552->g_92)
                    { /* block id: 39 */
                        return l_130;
                    }
                    for (l_96 = 0; (l_96 != 13); l_96 = safe_add_func_int64_t_s_s(l_96, 4))
                    { /* block id: 44 */
                        struct S3 *l_134 = &l_116[5][0];
                        struct S3 *l_135 = &p_552->g_133;
                        uint8_t *l_142 = &p_552->g_143[1];
                        int64_t **l_147 = (void*)0;
                        int64_t *l_148[9][5][2] = {{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}},{{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108},{&p_552->g_121,&l_108}}};
                        int32_t l_149 = 0x5BE4EFEDL;
                        int16_t *l_151 = &p_552->g_152;
                        struct S0 l_154 = {0x60524414L};
                        int i, j, k;
                        (*l_135) = ((*l_134) = p_552->g_133);
                        l_153 = ((+(**l_88)) <= ((*l_151) = ((safe_mul_func_uint16_t_u_u(p_552->g_34[2], ((safe_rshift_func_uint8_t_u_u(0x28L, 4)) , ((safe_mod_func_uint8_t_u_u(((*l_142) = p_552->g_123), (p_552->g_127 ^ (l_149 ^= ((l_146 == (&p_552->g_121 != (l_148[6][1][0] = (void*)0))) || ((0x1893L >= p_73) == l_117.f0)))))) > l_150)))) < p_552->g_121)));
                        return l_154;
                    }
                }
                if (((void*)0 == &p_552->g_34[2]))
                { /* block id: 55 */
                    int32_t *l_155 = &p_552->g_92;
                    l_155 = (void*)0;
                }
                else
                { /* block id: 57 */
                    struct S0 l_156[2][2] = {{{9L},{9L}},{{9L},{9L}}};
                    int i, j;
                    return l_156[1][1];
                }
                for (l_146 = 0; l_146 < 7; l_146 += 1)
                {
                    for (l_130.f0 = 0; l_130.f0 < 10; l_130.f0 += 1)
                    {
                        p_552->g_124[l_146][l_130.f0] = 18446744073709551612UL;
                    }
                }
                p_552->g_160++;
            }
            (*l_165) = (l_163 = l_130);
        }
        if (p_552->g_92)
            break;
    }
    return p_552->g_166;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_76(int32_t * p_77, uint32_t  p_78, struct S12 * p_552)
{ /* block id: 12 */
    return &p_552->g_34[1];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S12 c_553;
    struct S12* p_552 = &c_553;
    struct S12 c_554 = {
        {0x465EE6D5L,0xECL,1L,0x8B474307L}, // p_552->g_14
        {0x386D5672L,0x386D5672L,0x386D5672L}, // p_552->g_34
        {{0x7E0AB02DL},{0x7E0AB02DL},{0x7E0AB02DL},{0x7E0AB02DL},{0x7E0AB02DL},{0x7E0AB02DL},{0x7E0AB02DL}}, // p_552->g_52
        {{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}},{{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L},{0L,2L,0x00ABC3D1L,0L,(-4L),0x00ABC3D1L,0x00ABC3D1L,(-4L),0L,0x00ABC3D1L}}}, // p_552->g_82
        (-1L), // p_552->g_86
        &p_552->g_86, // p_552->g_85
        1L, // p_552->g_92
        (-2L), // p_552->g_121
        1UL, // p_552->g_123
        {{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L},{0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L,0x26E483898E21F576L,5UL,1UL,5UL,0x26E483898E21F576L}}, // p_552->g_124
        0x565D8E466642384DL, // p_552->g_126
        6UL, // p_552->g_127
        {4294967287UL}, // p_552->g_133
        {0UL,0xB5L,0UL,0UL,0xB5L,0UL}, // p_552->g_143
        0x5524L, // p_552->g_152
        65535UL, // p_552->g_160
        {-8L}, // p_552->g_166
        4294967294UL, // p_552->g_194
        (void*)0, // p_552->g_225
        255UL, // p_552->g_237
        255UL, // p_552->g_238
        0x3BL, // p_552->g_239
        0x18L, // p_552->g_240
        8UL, // p_552->g_241
        0xF2L, // p_552->g_242
        {0x59L,0x59L,0x59L,0x59L,0x59L,0x59L}, // p_552->g_243
        0UL, // p_552->g_244
        254UL, // p_552->g_245
        0x8EL, // p_552->g_246
        {1UL,1UL,1UL,1UL}, // p_552->g_247
        {0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL}, // p_552->g_248
        0x1AL, // p_552->g_249
        0x7EL, // p_552->g_250
        0xBAL, // p_552->g_251
        250UL, // p_552->g_252
        0xD7L, // p_552->g_253
        0x91L, // p_552->g_254
        0x0FL, // p_552->g_255
        9UL, // p_552->g_256
        {{7UL,0xD8L,255UL,0xD8L,7UL,7UL,0xD8L,255UL,0xD8L,7UL}}, // p_552->g_257
        {0UL,253UL,0UL,0UL,253UL,0UL,0UL,253UL,0UL,0UL}, // p_552->g_258
        7UL, // p_552->g_259
        1UL, // p_552->g_260
        1UL, // p_552->g_261
        0x07L, // p_552->g_262
        0UL, // p_552->g_263
        {{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L},{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L},{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L},{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L},{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L},{0xA9L,4UL,0xFEL,0x50L,4UL,0x50L}}, // p_552->g_264
        0UL, // p_552->g_265
        0xE8L, // p_552->g_266
        0x3DL, // p_552->g_267
        2UL, // p_552->g_268
        1UL, // p_552->g_269
        {{{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245}},{{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245},{&p_552->g_239,&p_552->g_263,&p_552->g_242,&p_552->g_245,&p_552->g_239,&p_552->g_256,&p_552->g_263,(void*)0,&p_552->g_245}}}, // p_552->g_236
        &p_552->g_236[0][3][3], // p_552->g_235
        &p_552->g_85, // p_552->g_307
        {{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}},{{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL},{0x25E6BE8DL,0x25E6BE8DL,0x25E6BE8DL}}}, // p_552->g_347
        {1L,255UL,0x4B2BAF4FB677E2F2L,4294967295UL}, // p_552->g_350
        &p_552->g_350, // p_552->g_351
        &p_552->g_160, // p_552->g_369
        &p_552->g_369, // p_552->g_368
        &p_552->g_368, // p_552->g_367
        {0x4374DF2FL,0UL,{0L,0x2DC8F80C7AB0E018L,4294967287UL,65528UL},0x14L,{0x404C0DA5L},0UL,1L,3L,{0x798CC1B1L,0x17915873L,1L,0xA8L,0x2397B36C433F4CFAL},0x27L}, // p_552->g_389
        {1UL,0x83ECCF84L,-10L,0xE7L,18446744073709551612UL}, // p_552->g_401
        &p_552->g_34[1], // p_552->g_410
        &p_552->g_410, // p_552->g_409
        {-1L,1UL,{-7L,18446744073709551606UL,0xF9E3BD0EL,0xE403L},1L,{0L},2UL,0x7A986C05L,0x4EL,{0x2F99625FL,0x730C2420L,0x314AL,0xB1L,0x0B2C207859915F8EL},9L}, // p_552->g_411
        {0x108E2940D69B2F04L,0L}, // p_552->g_412
        &p_552->g_412, // p_552->g_413
        &p_552->g_133, // p_552->g_422
        &p_552->g_422, // p_552->g_421
        0x6DL, // p_552->g_447
        &p_552->g_121, // p_552->g_470
        &p_552->g_470, // p_552->g_469
        &p_552->g_469, // p_552->g_468
        {0x1CL,0x1CL,0x1CL,0x1CL,0x1CL}, // p_552->g_483
        &p_552->g_410, // p_552->g_493
        {1L,0x3F3E10191BC4BA5CL}, // p_552->g_500
        &p_552->g_389.f1, // p_552->g_525
        {0x1F62D671276AE933L,0xAAF0435D89F1A214L,6UL,9UL}, // p_552->g_528
        1UL, // p_552->g_547
        {0x3E672F5479ED89CDL,0x5D5BD2C9E3331D68L}, // p_552->g_551
    };
    c_553 = c_554;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_552);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_552->g_14.f0, "p_552->g_14.f0", print_hash_value);
    transparent_crc(p_552->g_14.f1, "p_552->g_14.f1", print_hash_value);
    transparent_crc(p_552->g_14.f2, "p_552->g_14.f2", print_hash_value);
    transparent_crc(p_552->g_14.f3, "p_552->g_14.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_552->g_34[i], "p_552->g_34[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_552->g_52[i][j], "p_552->g_52[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_552->g_82[i][j][k], "p_552->g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_552->g_86, "p_552->g_86", print_hash_value);
    transparent_crc(p_552->g_92, "p_552->g_92", print_hash_value);
    transparent_crc(p_552->g_121, "p_552->g_121", print_hash_value);
    transparent_crc(p_552->g_123, "p_552->g_123", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_552->g_124[i][j], "p_552->g_124[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_552->g_126, "p_552->g_126", print_hash_value);
    transparent_crc(p_552->g_127, "p_552->g_127", print_hash_value);
    transparent_crc(p_552->g_133.f0, "p_552->g_133.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_552->g_143[i], "p_552->g_143[i]", print_hash_value);

    }
    transparent_crc(p_552->g_152, "p_552->g_152", print_hash_value);
    transparent_crc(p_552->g_160, "p_552->g_160", print_hash_value);
    transparent_crc(p_552->g_166.f0, "p_552->g_166.f0", print_hash_value);
    transparent_crc(p_552->g_194, "p_552->g_194", print_hash_value);
    transparent_crc(p_552->g_237, "p_552->g_237", print_hash_value);
    transparent_crc(p_552->g_238, "p_552->g_238", print_hash_value);
    transparent_crc(p_552->g_239, "p_552->g_239", print_hash_value);
    transparent_crc(p_552->g_240, "p_552->g_240", print_hash_value);
    transparent_crc(p_552->g_241, "p_552->g_241", print_hash_value);
    transparent_crc(p_552->g_242, "p_552->g_242", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_552->g_243[i], "p_552->g_243[i]", print_hash_value);

    }
    transparent_crc(p_552->g_244, "p_552->g_244", print_hash_value);
    transparent_crc(p_552->g_245, "p_552->g_245", print_hash_value);
    transparent_crc(p_552->g_246, "p_552->g_246", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_552->g_247[i], "p_552->g_247[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_552->g_248[i], "p_552->g_248[i]", print_hash_value);

    }
    transparent_crc(p_552->g_249, "p_552->g_249", print_hash_value);
    transparent_crc(p_552->g_250, "p_552->g_250", print_hash_value);
    transparent_crc(p_552->g_251, "p_552->g_251", print_hash_value);
    transparent_crc(p_552->g_252, "p_552->g_252", print_hash_value);
    transparent_crc(p_552->g_253, "p_552->g_253", print_hash_value);
    transparent_crc(p_552->g_254, "p_552->g_254", print_hash_value);
    transparent_crc(p_552->g_255, "p_552->g_255", print_hash_value);
    transparent_crc(p_552->g_256, "p_552->g_256", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_552->g_257[i][j], "p_552->g_257[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_552->g_258[i], "p_552->g_258[i]", print_hash_value);

    }
    transparent_crc(p_552->g_259, "p_552->g_259", print_hash_value);
    transparent_crc(p_552->g_260, "p_552->g_260", print_hash_value);
    transparent_crc(p_552->g_261, "p_552->g_261", print_hash_value);
    transparent_crc(p_552->g_262, "p_552->g_262", print_hash_value);
    transparent_crc(p_552->g_263, "p_552->g_263", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_552->g_264[i][j], "p_552->g_264[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_552->g_265, "p_552->g_265", print_hash_value);
    transparent_crc(p_552->g_266, "p_552->g_266", print_hash_value);
    transparent_crc(p_552->g_267, "p_552->g_267", print_hash_value);
    transparent_crc(p_552->g_268, "p_552->g_268", print_hash_value);
    transparent_crc(p_552->g_269, "p_552->g_269", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_552->g_347[i][j][k], "p_552->g_347[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_552->g_350.f0, "p_552->g_350.f0", print_hash_value);
    transparent_crc(p_552->g_350.f1, "p_552->g_350.f1", print_hash_value);
    transparent_crc(p_552->g_350.f2, "p_552->g_350.f2", print_hash_value);
    transparent_crc(p_552->g_350.f3, "p_552->g_350.f3", print_hash_value);
    transparent_crc(p_552->g_389.f0, "p_552->g_389.f0", print_hash_value);
    transparent_crc(p_552->g_389.f1, "p_552->g_389.f1", print_hash_value);
    transparent_crc(p_552->g_389.f2.f0, "p_552->g_389.f2.f0", print_hash_value);
    transparent_crc(p_552->g_389.f2.f1, "p_552->g_389.f2.f1", print_hash_value);
    transparent_crc(p_552->g_389.f2.f2, "p_552->g_389.f2.f2", print_hash_value);
    transparent_crc(p_552->g_389.f2.f3, "p_552->g_389.f2.f3", print_hash_value);
    transparent_crc(p_552->g_389.f3, "p_552->g_389.f3", print_hash_value);
    transparent_crc(p_552->g_389.f4.f0, "p_552->g_389.f4.f0", print_hash_value);
    transparent_crc(p_552->g_389.f5, "p_552->g_389.f5", print_hash_value);
    transparent_crc(p_552->g_389.f6, "p_552->g_389.f6", print_hash_value);
    transparent_crc(p_552->g_389.f7, "p_552->g_389.f7", print_hash_value);
    transparent_crc(p_552->g_389.f8.f0, "p_552->g_389.f8.f0", print_hash_value);
    transparent_crc(p_552->g_389.f8.f1, "p_552->g_389.f8.f1", print_hash_value);
    transparent_crc(p_552->g_389.f8.f2, "p_552->g_389.f8.f2", print_hash_value);
    transparent_crc(p_552->g_389.f8.f3, "p_552->g_389.f8.f3", print_hash_value);
    transparent_crc(p_552->g_389.f8.f4, "p_552->g_389.f8.f4", print_hash_value);
    transparent_crc(p_552->g_389.f9, "p_552->g_389.f9", print_hash_value);
    transparent_crc(p_552->g_401.f0, "p_552->g_401.f0", print_hash_value);
    transparent_crc(p_552->g_401.f1, "p_552->g_401.f1", print_hash_value);
    transparent_crc(p_552->g_401.f2, "p_552->g_401.f2", print_hash_value);
    transparent_crc(p_552->g_401.f3, "p_552->g_401.f3", print_hash_value);
    transparent_crc(p_552->g_401.f4, "p_552->g_401.f4", print_hash_value);
    transparent_crc(p_552->g_411.f0, "p_552->g_411.f0", print_hash_value);
    transparent_crc(p_552->g_411.f1, "p_552->g_411.f1", print_hash_value);
    transparent_crc(p_552->g_411.f2.f0, "p_552->g_411.f2.f0", print_hash_value);
    transparent_crc(p_552->g_411.f2.f1, "p_552->g_411.f2.f1", print_hash_value);
    transparent_crc(p_552->g_411.f2.f2, "p_552->g_411.f2.f2", print_hash_value);
    transparent_crc(p_552->g_411.f2.f3, "p_552->g_411.f2.f3", print_hash_value);
    transparent_crc(p_552->g_411.f3, "p_552->g_411.f3", print_hash_value);
    transparent_crc(p_552->g_411.f4.f0, "p_552->g_411.f4.f0", print_hash_value);
    transparent_crc(p_552->g_411.f5, "p_552->g_411.f5", print_hash_value);
    transparent_crc(p_552->g_411.f6, "p_552->g_411.f6", print_hash_value);
    transparent_crc(p_552->g_411.f7, "p_552->g_411.f7", print_hash_value);
    transparent_crc(p_552->g_411.f8.f0, "p_552->g_411.f8.f0", print_hash_value);
    transparent_crc(p_552->g_411.f8.f1, "p_552->g_411.f8.f1", print_hash_value);
    transparent_crc(p_552->g_411.f8.f2, "p_552->g_411.f8.f2", print_hash_value);
    transparent_crc(p_552->g_411.f8.f3, "p_552->g_411.f8.f3", print_hash_value);
    transparent_crc(p_552->g_411.f8.f4, "p_552->g_411.f8.f4", print_hash_value);
    transparent_crc(p_552->g_411.f9, "p_552->g_411.f9", print_hash_value);
    transparent_crc(p_552->g_412.f0, "p_552->g_412.f0", print_hash_value);
    transparent_crc(p_552->g_412.f1, "p_552->g_412.f1", print_hash_value);
    transparent_crc(p_552->g_447, "p_552->g_447", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_552->g_483[i], "p_552->g_483[i]", print_hash_value);

    }
    transparent_crc(p_552->g_500.f0, "p_552->g_500.f0", print_hash_value);
    transparent_crc(p_552->g_500.f1, "p_552->g_500.f1", print_hash_value);
    transparent_crc(p_552->g_528.f0, "p_552->g_528.f0", print_hash_value);
    transparent_crc(p_552->g_528.f1, "p_552->g_528.f1", print_hash_value);
    transparent_crc(p_552->g_528.f2, "p_552->g_528.f2", print_hash_value);
    transparent_crc(p_552->g_528.f3, "p_552->g_528.f3", print_hash_value);
    transparent_crc(p_552->g_547, "p_552->g_547", print_hash_value);
    transparent_crc(p_552->g_551.f0, "p_552->g_551.f0", print_hash_value);
    transparent_crc(p_552->g_551.f1, "p_552->g_551.f1", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
