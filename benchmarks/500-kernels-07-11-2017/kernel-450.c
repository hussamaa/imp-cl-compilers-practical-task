// -g 59,61,1 -l 59,1,1
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


// Seed: 4165471984

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   int64_t  f1;
   uint64_t  f2;
   volatile uint64_t  f3;
};

struct S1 {
   volatile uint32_t  f0;
   volatile uint64_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint64_t  f4;
};

struct S2 {
    uint16_t g_15;
    int32_t g_44;
    volatile int32_t *g_64;
    volatile int32_t * volatile *g_63;
    int64_t g_68;
    int64_t g_93;
    int32_t g_110;
    int32_t * volatile g_109[8][3];
    int32_t * volatile g_111[2];
    int8_t g_142;
    int32_t *g_150;
    int32_t **g_149[2];
    int64_t g_154;
    int64_t *g_153;
    volatile uint32_t g_155;
    uint16_t g_167;
    int16_t g_179;
    uint32_t g_183;
    int8_t g_185;
    int8_t *g_184;
    int8_t g_197;
    volatile struct S0 g_212;
    volatile struct S0 * volatile g_213;
    int32_t ** volatile g_220;
    uint64_t g_227[4];
    uint16_t g_248;
    int64_t g_250;
    int64_t g_259;
    uint8_t g_269[2];
    int32_t g_271[4][5];
    struct S1 g_279[6][6];
    struct S1 * volatile g_280;
    int16_t g_283;
    uint16_t g_317;
    uint16_t *g_316;
    uint16_t *g_319;
    struct S0 g_358;
    struct S0 *g_361;
    struct S0 ** volatile g_360;
    int32_t **g_365;
    volatile struct S1 g_397;
    volatile struct S1 g_433;
    volatile struct S1 * volatile g_434[6][2][10];
    volatile struct S1 g_435[2][6][9];
    uint32_t g_468;
    uint32_t g_472;
    volatile struct S0 g_476;
    int64_t g_477;
    volatile struct S0 g_488;
    struct S0 **g_514;
    struct S1 g_518[8][3];
    struct S1 * volatile g_519;
    uint32_t g_544;
    struct S1 g_578;
    uint32_t *g_636;
    uint32_t * volatile *g_635[4][7];
    int32_t * volatile g_665;
    volatile struct S1 g_671;
    volatile struct S1 g_672;
    struct S0 g_694;
    struct S0 g_695;
    volatile struct S1 g_696;
    volatile struct S1 * volatile g_697;
    struct S1 g_710;
    struct S0 g_719;
    volatile struct S0 g_728;
    volatile struct S0 g_729;
    int32_t g_744[8];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_745);
int8_t  func_8(int16_t  p_9, int32_t  p_10, struct S2 * p_745);
uint32_t  func_22(int32_t  p_23, uint32_t  p_24, uint64_t  p_25, struct S2 * p_745);
int32_t  func_27(int64_t  p_28, uint64_t  p_29, int32_t  p_30, uint16_t  p_31, struct S2 * p_745);
int32_t  func_36(int8_t  p_37, uint32_t  p_38, uint32_t  p_39, int64_t  p_40, int16_t  p_41, struct S2 * p_745);
int32_t * func_56(int64_t  p_57, int16_t  p_58, int16_t  p_59, uint64_t  p_60, struct S2 * p_745);
int32_t ** func_71(int32_t  p_72, int32_t ** p_73, struct S2 * p_745);
int32_t * func_79(int32_t * p_80, int8_t  p_81, uint32_t  p_82, uint64_t  p_83, uint64_t  p_84, struct S2 * p_745);
int32_t  func_87(int32_t ** p_88, uint32_t  p_89, struct S2 * p_745);
int32_t ** func_90(int64_t * p_91, struct S2 * p_745);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_745->g_15 p_745->g_44 p_745->g_319 p_745->g_68 p_745->g_153 p_745->g_279.f1 p_745->g_150 p_745->g_518.f3 p_745->g_317 p_745->g_544 p_745->g_271 p_745->g_358.f2 p_745->g_488.f1 p_745->g_472 p_745->g_154 p_745->g_110 p_745->g_227 p_745->g_365 p_745->g_212.f0 p_745->g_283 p_745->g_220 p_745->g_184 p_745->g_185 p_745->g_744
 * writes: p_745->g_514 p_745->g_317 p_745->g_154 p_745->g_44 p_745->g_518.f3 p_745->g_544 p_745->g_68 p_745->g_110 p_745->g_472 p_745->g_227 p_745->g_269 p_745->g_179 p_745->g_259 p_745->g_271 p_745->g_150 p_745->g_744
 */
uint32_t  func_1(struct S2 * p_745)
{ /* block id: 4 */
    uint32_t l_26 = 1UL;
    int32_t *l_542 = &p_745->g_518[3][0].f3;
    uint32_t *l_543 = &p_745->g_544;
    int32_t *l_742 = (void*)0;
    int32_t *l_743 = &p_745->g_744[0];
    (*l_743) &= (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(func_8(((0UL & (safe_rshift_func_int8_t_s_s(p_745->g_15, 7))) ^ ((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((func_22(l_26, ((*l_543) ^= (((func_27((safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((p_745->g_15 & l_26), l_26)), l_26)), p_745->g_15, ((*l_542) &= func_36(p_745->g_15, p_745->g_15, p_745->g_15, l_26, p_745->g_15, p_745)), l_26, p_745) , (*p_745->g_319)) < (-1L)) > l_26)), p_745->g_271[0][0], p_745) , 0x1621L), l_26)), 6)) <= l_26), l_26)) == 5UL)), p_745->g_283, p_745), l_26)) != (*p_745->g_184)), 8)), l_26));
    return p_745->g_110;
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_220 p_745->g_150 p_745->g_365
 * writes: p_745->g_150
 */
int8_t  func_8(int16_t  p_9, int32_t  p_10, struct S2 * p_745)
{ /* block id: 354 */
    int32_t *l_730 = &p_745->g_110;
    int32_t l_731 = 0x49A881D7L;
    int32_t *l_732 = &p_745->g_271[2][4];
    int32_t *l_733 = &p_745->g_271[3][4];
    int32_t *l_734 = &p_745->g_271[1][4];
    uint16_t l_735 = 0x614BL;
    int32_t l_738 = 1L;
    uint16_t l_739[2];
    int i;
    for (i = 0; i < 2; i++)
        l_739[i] = 65530UL;
    l_735++;
    (*p_745->g_365) = (*p_745->g_220);
    ++l_739[0];
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_68 p_745->g_358.f2 p_745->g_488.f1 p_745->g_472 p_745->g_154 p_745->g_110 p_745->g_227 p_745->g_44 p_745->g_271 p_745->g_365 p_745->g_212.f0
 * writes: p_745->g_68 p_745->g_110 p_745->g_472 p_745->g_227 p_745->g_269 p_745->g_179 p_745->g_259 p_745->g_271 p_745->g_150
 */
uint32_t  func_22(int32_t  p_23, uint32_t  p_24, uint64_t  p_25, struct S2 * p_745)
{ /* block id: 244 */
    int64_t l_556 = 0x41D31BECF26CE966L;
    int32_t *l_568 = &p_745->g_279[5][5].f3;
    int8_t *l_592 = &p_745->g_185;
    uint8_t l_595 = 0x48L;
    uint64_t *l_602 = (void*)0;
    uint16_t **l_637 = &p_745->g_316;
    int32_t l_679 = 0L;
    int32_t l_689 = 0x061ABA19L;
    uint16_t l_707 = 0x1AEFL;
    int32_t **l_718[10] = {&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150,&p_745->g_150};
    int i;
    for (p_745->g_68 = 0; (p_745->g_68 > (-6)); p_745->g_68 = safe_sub_func_int16_t_s_s(p_745->g_68, 8))
    { /* block id: 247 */
        uint64_t l_547 = 0x2E102CABD1F33043L;
        --l_547;
    }
    for (p_23 = (-2); (p_23 != 3); p_23++)
    { /* block id: 252 */
        int64_t *l_553 = &p_745->g_279[5][5].f2;
        int64_t **l_552 = &l_553;
        int32_t l_569 = 0x43A84E27L;
        uint32_t *l_577[10][3][5] = {{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}},{{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472},{&p_745->g_472,&p_745->g_472,&p_745->g_472,(void*)0,&p_745->g_472}}};
        uint32_t **l_576 = &l_577[8][0][1];
        int16_t *l_583 = (void*)0;
        int16_t *l_584 = &p_745->g_283;
        uint64_t *l_591[7] = {&p_745->g_227[3],&p_745->g_358.f2,&p_745->g_227[3],&p_745->g_227[3],&p_745->g_358.f2,&p_745->g_227[3],&p_745->g_227[3]};
        int8_t **l_593 = &p_745->g_184;
        uint64_t l_594 = 2UL;
        int64_t l_626 = 0x317C14013DCBEC29L;
        int32_t l_682[1];
        int8_t l_683 = (-1L);
        uint32_t l_684 = 0xBF0975E7L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_682[i] = 0x25F5CE87L;
        for (p_745->g_110 = 0; (p_745->g_110 <= 3); p_745->g_110 += 1)
        { /* block id: 255 */
            uint32_t *l_565 = &p_745->g_472;
            uint8_t *l_570 = &p_745->g_269[0];
            int16_t *l_571 = &p_745->g_179;
            int i;
            (*p_745->g_365) = func_56(p_745->g_358.f2, ((*l_571) = (l_552 != (((safe_div_func_uint32_t_u_u(l_556, ((safe_rshift_func_uint8_t_u_u(251UL, p_745->g_488.f1)) || (safe_sub_func_int8_t_s_s(((65535UL == ((((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((*l_570) = (((*l_565)--) || ((p_745->g_227[p_745->g_110] &= (l_568 == (p_745->g_154 , &p_23))) & l_569))), p_24)), 6)) < p_23) ^ p_25) >= 0x0A274076L)) == 0x5912DE2DA93ED52AL), l_556))))) , (-7L)) , (void*)0))), p_745->g_44, l_569, p_745);
        }
    }
    return p_745->g_212.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_27(int64_t  p_28, uint64_t  p_29, int32_t  p_30, uint16_t  p_31, struct S2 * p_745)
{ /* block id: 241 */
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_44 p_745->g_319 p_745->g_68 p_745->g_153 p_745->g_279.f1 p_745->g_150
 * writes: p_745->g_514 p_745->g_317 p_745->g_154 p_745->g_44
 */
int32_t  func_36(int8_t  p_37, uint32_t  p_38, uint32_t  p_39, int64_t  p_40, int16_t  p_41, struct S2 * p_745)
{ /* block id: 5 */
    uint16_t l_42[1][9] = {{0x6082L,0x6082L,0x6082L,0x6082L,0x6082L,0x6082L,0x6082L,0x6082L,0x6082L}};
    int32_t *l_43 = &p_745->g_44;
    uint32_t l_53 = 0x44E0C42EL;
    int32_t **l_364[4][9][5] = {{{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0}},{{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0}},{{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0}},{{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0}}};
    int32_t *l_372 = &p_745->g_44;
    uint64_t l_410 = 0x29C47D63294EEDCFL;
    int16_t l_416[5];
    struct S0 **l_454 = (void*)0;
    int64_t *l_512 = &p_745->g_250;
    int64_t **l_511[9][4] = {{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512}};
    struct S0 ***l_534 = &p_745->g_514;
    struct S1 *l_540 = &p_745->g_518[5][0];
    struct S1 **l_539 = &l_540;
    int16_t *l_541 = &l_416[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_416[i] = (-2L);
    for (p_41 = 0; (p_41 >= 0); p_41 -= 1)
    { /* block id: 8 */
        int64_t *l_65 = (void*)0;
        int64_t *l_66 = (void*)0;
        int64_t *l_67 = &p_745->g_68;
        int32_t **l_76[10][7] = {{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43}};
        int32_t ***l_363[4][6] = {{&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0],&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0]},{&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0],&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0]},{&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0],&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0]},{&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0],&p_745->g_149[0],&l_76[2][1],&p_745->g_149[0]}};
        int8_t *l_395 = (void*)0;
        int32_t l_396 = 0x3F1211D8L;
        uint16_t **l_409[6] = {&p_745->g_316,&p_745->g_316,&p_745->g_316,&p_745->g_316,&p_745->g_316,&p_745->g_316};
        uint64_t *l_414 = &p_745->g_227[0];
        uint32_t *l_483 = (void*)0;
        struct S0 **l_515[10];
        int i, j;
        for (i = 0; i < 10; i++)
            l_515[i] = &p_745->g_361;
        for (p_40 = 0; (p_40 <= 0); p_40 += 1)
        { /* block id: 11 */
            int32_t **l_45 = &l_43;
            int32_t *l_46 = (void*)0;
            int32_t l_47 = 7L;
            int32_t *l_48 = &l_47;
            int32_t *l_49 = (void*)0;
            int32_t *l_50 = (void*)0;
            int32_t *l_51 = (void*)0;
            int32_t *l_52[10][8][3] = {{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}},{{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0},{&p_745->g_44,&p_745->g_44,(void*)0}}};
            int i, j, k;
            (*l_45) = l_43;
            ++l_53;
            if (l_42[p_40][(p_40 + 7)])
                break;
        }
    }
    (*p_745->g_150) = (safe_div_func_uint32_t_u_u((((*p_745->g_153) = (safe_mod_func_uint16_t_u_u(0x67C7L, ((*l_541) = (safe_div_func_int32_t_s_s(0x0C6671AAL, (((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(0x931949A7F9ED6D21L, (((*l_43) < (safe_lshift_func_int8_t_s_u(0x6BL, (safe_mul_func_uint16_t_u_u(((*p_745->g_319) = (((*l_534) = l_454) == &p_745->g_361)), (safe_div_func_uint64_t_u_u((+(safe_lshift_func_int8_t_s_s(((l_539 != &l_540) | (*l_43)), p_41))), 1UL))))))) || p_745->g_68))), 4294967290UL)) != p_38) || p_41))))))) == p_745->g_279[5][5].f1), 0x542FB140L));
    return (*l_372);
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_259 p_745->g_271
 * writes: p_745->g_259 p_745->g_271 p_745->g_150
 */
int32_t * func_56(int64_t  p_57, int16_t  p_58, int16_t  p_59, uint64_t  p_60, struct S2 * p_745)
{ /* block id: 151 */
    int32_t l_368[3];
    int32_t **l_370 = &p_745->g_150;
    int32_t *l_371[4];
    int i;
    for (i = 0; i < 3; i++)
        l_368[i] = 0x281AF41BL;
    for (i = 0; i < 4; i++)
        l_371[i] = &p_745->g_44;
    for (p_745->g_259 = 0; (p_745->g_259 == 10); p_745->g_259++)
    { /* block id: 154 */
        int32_t *l_369 = &p_745->g_271[0][0];
        (*l_369) ^= l_368[2];
    }
    (*l_370) = &l_368[2];
    return l_371[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_15 p_745->g_44 p_745->g_93 p_745->g_110 p_745->g_153 p_745->g_155 p_745->g_154 p_745->g_167 p_745->g_184 p_745->g_185 p_745->g_197 p_745->g_212 p_745->g_63 p_745->g_64 p_745->g_220 p_745->g_227 p_745->g_142 p_745->g_259 p_745->g_150 p_745->g_271 p_745->g_248 p_745->g_279 p_745->g_280 p_745->g_269 p_745->g_179 p_745->g_360
 * writes: p_745->g_110 p_745->g_93 p_745->g_142 p_745->g_149 p_745->g_167 p_745->g_183 p_745->g_185 p_745->g_150 p_745->g_197 p_745->g_212 p_745->g_64 p_745->g_154 p_745->g_227 p_745->g_250 p_745->g_259 p_745->g_271 p_745->g_248 p_745->g_279 p_745->g_283 p_745->g_179 p_745->g_316 p_745->g_319 p_745->g_361
 */
int32_t ** func_71(int32_t  p_72, int32_t ** p_73, struct S2 * p_745)
{ /* block id: 18 */
    uint32_t l_77 = 5UL;
    int32_t l_78 = 6L;
    int32_t l_225[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint64_t *l_226 = &p_745->g_227[3];
    uint16_t *l_246 = &p_745->g_167;
    uint16_t *l_247[1];
    int64_t *l_249 = &p_745->g_250;
    int32_t *l_251 = &p_745->g_110;
    int32_t **l_262 = &l_251;
    uint32_t l_362 = 4294967295UL;
    int i;
    for (i = 0; i < 1; i++)
        l_247[i] = &p_745->g_248;
    l_78 ^= (l_77 , p_745->g_15);
    (*p_745->g_220) = func_79(&l_78, p_745->g_44, l_77, (safe_add_func_uint16_t_u_u(l_78, 0x12BBL)), p_745->g_15, p_745);
    (*l_251) &= (~(safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((((((*l_249) = ((0xBA8943D24E930141L < ((*l_226) ^= l_225[4])) | (l_78 = ((*l_246) = (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_745->g_154 , 0x98L), (safe_mul_func_uint8_t_u_u(((*p_745->g_153) || (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((1UL != (l_77 > (safe_mod_func_int32_t_s_s(((0x62C164EDL && ((safe_div_func_uint64_t_u_u(((*p_745->g_153) ^ p_72), l_77)) >= p_72)) , 0x6A667620L), l_77)))), l_78)), 0x3EFDL)), 0)) , p_72), p_745->g_212.f3))), 0x89L)))), 0xB6L)))))) , (*p_745->g_184)) | 0xD6L) != l_225[4]) > l_225[1]), l_225[4])) > l_225[4]), 4294967288UL)));
    for (p_745->g_142 = 16; (p_745->g_142 >= 10); --p_745->g_142)
    { /* block id: 82 */
        int64_t *l_258 = &p_745->g_250;
        int32_t l_267 = (-10L);
        for (p_745->g_110 = 0; (p_745->g_110 >= 12); p_745->g_110 = safe_add_func_uint32_t_u_u(p_745->g_110, 1))
        { /* block id: 85 */
            uint8_t l_266[1];
            int32_t l_270 = (-4L);
            int32_t l_292 = (-1L);
            int32_t l_297 = 0L;
            uint16_t *l_318 = &p_745->g_15;
            int16_t l_320 = 0x08ADL;
            struct S0 *l_357 = &p_745->g_358;
            int i;
            for (i = 0; i < 1; i++)
                l_266[i] = 0xCAL;
            if ((safe_lshift_func_uint8_t_u_s((p_745->g_259 ^= (l_226 != l_258)), 0)))
            { /* block id: 87 */
                uint8_t *l_268[10][5] = {{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]},{&p_745->g_269[1],&p_745->g_269[1],&p_745->g_269[0],&l_266[0],&p_745->g_269[0]}};
                uint32_t l_272[2][3] = {{2UL,9UL,2UL},{2UL,9UL,2UL}};
                uint32_t l_291 = 0x5EB3F9A5L;
                int32_t l_293 = 1L;
                uint32_t l_298[8][3] = {{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL},{4294967294UL,4294967294UL,4294967294UL}};
                uint16_t *l_313 = &p_745->g_248;
                int i, j;
                if ((p_745->g_271[0][0] |= (safe_lshift_func_int16_t_s_s((((*p_745->g_150) = (((void*)0 != l_262) , 0L)) , p_72), (safe_mul_func_uint8_t_u_u(p_72, (((l_270 ^= ((safe_unary_minus_func_uint64_t_u(l_266[0])) != l_267)) >= 0x40L) | 0UL)))))))
                { /* block id: 91 */
                    if (l_272[1][1])
                        break;
                    return &p_745->g_150;
                }
                else
                { /* block id: 94 */
                    (*p_745->g_63) = (void*)0;
                    if (l_267)
                        continue;
                }
                for (p_745->g_183 = 0; (p_745->g_183 <= 1); p_745->g_183 += 1)
                { /* block id: 100 */
                    if ((*p_745->g_150))
                        break;
                }
                for (p_745->g_167 = (-18); (p_745->g_167 != 4); p_745->g_167 = safe_add_func_uint64_t_u_u(p_745->g_167, 3))
                { /* block id: 105 */
                    int16_t *l_288 = (void*)0;
                    int16_t *l_289 = (void*)0;
                    int16_t *l_290 = &p_745->g_179;
                    int32_t l_295 = 0x4E5C9CA6L;
                    int32_t l_296 = 0x344009B8L;
                    struct S1 *l_324 = &p_745->g_279[5][5];
                    uint8_t *l_343 = &p_745->g_269[0];
                    int64_t *l_344 = &p_745->g_279[5][5].f2;
                    for (p_745->g_259 = 0; (p_745->g_259 != 27); p_745->g_259++)
                    { /* block id: 108 */
                        (*p_745->g_280) = ((--p_745->g_248) , p_745->g_279[5][5]);
                    }
                    if (l_267)
                        break;
                    if (((safe_div_func_uint32_t_u_u((p_745->g_283 = 0UL), (((((safe_rshift_func_int16_t_s_u((0x6ECBL == (l_270 == ((p_72 > (safe_div_func_uint16_t_u_u((4294967286UL ^ p_745->g_212.f3), 65535UL))) >= (((((*l_290) = l_267) >= 1L) , p_745->g_227[3]) < l_291)))), p_72)) >= l_270) ^ 65535UL) < (*p_745->g_184)) || p_72))) || l_292))
                    { /* block id: 115 */
                        int32_t *l_294[3][1][1];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_294[i][j][k] = &l_267;
                            }
                        }
                        l_298[1][0]++;
                        return p_73;
                    }
                    else
                    { /* block id: 118 */
                        uint16_t **l_314 = (void*)0;
                        uint16_t **l_315[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t *l_321 = &l_272[1][1];
                        struct S1 *l_323 = &p_745->g_279[0][2];
                        struct S1 **l_322 = &l_323;
                        int64_t **l_345 = (void*)0;
                        int64_t **l_346 = (void*)0;
                        int64_t **l_347 = &l_344;
                        int i;
                        l_324 = ((*l_322) = ((p_745->g_212.f0 != ((((*l_321) |= (safe_lshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u(((p_72 | l_296) != (safe_div_func_uint64_t_u_u(p_745->g_248, (safe_div_func_int64_t_s_s((0x3640L != ((safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((((p_745->g_316 = l_313) == (p_745->g_319 = l_318)) == 0UL), p_745->g_227[2])) != 0x62EFF3B490FC01C5L) , 0UL), 14)) > p_72)), l_320))))), 1UL)) , 0x318AL) < p_72), p_745->g_269[0]))) , p_72) == 0x02EE0E000E158904L)) , (void*)0));
                        (*p_745->g_150) &= (((safe_sub_func_int8_t_s_s((p_72 < (+((void*)0 == &p_745->g_212))), ((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_72, (p_72 || (l_296 == l_296)))), 6)) != ((*l_290) |= (((safe_mod_func_uint64_t_u_u(((((*p_745->g_184) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(p_72, ((safe_add_func_int8_t_s_s(p_72, (-1L))) & l_267))), p_745->g_93)), p_72)), 0x29DDL))) , (void*)0) != l_343), 0x7D61086BC35C1B07L)) == 0x0001L) >= 0UL))))) , p_72) != 0xD963D65F5B507F08L);
                        (*p_745->g_150) ^= (((*l_347) = l_344) != l_249);
                    }
                }
            }
            else
            { /* block id: 131 */
                int32_t *l_348 = &l_270;
                int32_t l_349[7] = {0x447AFBABL,0x447AFBABL,0x447AFBABL,0x447AFBABL,0x447AFBABL,0x447AFBABL,0x447AFBABL};
                int i;
                (*l_262) = l_348;
                for (p_745->g_154 = 0; (p_745->g_154 >= 0); p_745->g_154 -= 1)
                { /* block id: 135 */
                    uint16_t l_354[7][7] = {{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL},{0x2992L,0x2992L,65535UL,9UL,65535UL,9UL,65535UL}};
                    struct S0 **l_359 = (void*)0;
                    int i, j;
                    for (p_745->g_250 = 0; (p_745->g_250 >= 0); p_745->g_250 -= 1)
                    { /* block id: 138 */
                        int32_t *l_350 = &l_225[4];
                        int32_t *l_351 = &p_745->g_271[3][4];
                        int32_t *l_352 = &l_225[4];
                        int32_t *l_353[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_353[i] = &l_297;
                        (*l_262) = &l_267;
                        --l_354[1][0];
                    }
                    (*p_745->g_360) = l_357;
                }
            }
        }
        if (l_362)
            continue;
    }
    return p_73;
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_93 p_745->g_44 p_745->g_110 p_745->g_153 p_745->g_155 p_745->g_154 p_745->g_15 p_745->g_167 p_745->g_184 p_745->g_185 p_745->g_197 p_745->g_212 p_745->g_63 p_745->g_64
 * writes: p_745->g_110 p_745->g_93 p_745->g_142 p_745->g_149 p_745->g_167 p_745->g_183 p_745->g_185 p_745->g_150 p_745->g_197 p_745->g_212 p_745->g_64 p_745->g_154
 */
int32_t * func_79(int32_t * p_80, int8_t  p_81, uint32_t  p_82, uint64_t  p_83, uint64_t  p_84, struct S2 * p_745)
{ /* block id: 20 */
    int64_t *l_92 = &p_745->g_93;
    int32_t **l_165 = (void*)0;
    uint16_t *l_166[1][10] = {{&p_745->g_167,&p_745->g_15,(void*)0,&p_745->g_15,&p_745->g_167,&p_745->g_167,&p_745->g_15,(void*)0,&p_745->g_15,&p_745->g_167}};
    int32_t l_168 = 0x7AFBAD67L;
    int16_t *l_177 = (void*)0;
    int16_t *l_178[4][2][4] = {{{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179},{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179}},{{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179},{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179}},{{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179},{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179}},{{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179},{&p_745->g_179,(void*)0,&p_745->g_179,&p_745->g_179}}};
    int32_t l_180[7][5];
    uint32_t *l_181 = (void*)0;
    uint32_t *l_182 = &p_745->g_183;
    int32_t *l_219 = &l_168;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
            l_180[i][j] = 0x03E9DE1EL;
    }
    if (func_87(func_90(l_92, p_745), (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_745->g_44, 5)) ^ (4L >= (((((safe_rshift_func_int8_t_s_u((l_165 != l_165), 5)) > ((((*l_182) = ((--p_745->g_167) != (safe_mul_func_int16_t_s_s((p_82 , (l_168 | ((safe_sub_func_int16_t_s_s((l_180[2][1] = (safe_lshift_func_uint16_t_u_u(((void*)0 == &l_165), 3))), 0x3C50L)) , 4294967295UL))), p_745->g_154)))) , p_745->g_184) != (void*)0)) <= 0xC3L) <= 0x71L) != 0x34FEL))), 1L)), p_745))
    { /* block id: 40 */
        uint64_t l_198 = 1UL;
        int32_t l_203 = (-1L);
        int32_t l_206[5][8][6] = {{{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L}},{{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L}},{{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L}},{{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L}},{{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L},{0x243BB0A9L,(-1L),0x243BB0A9L,0x243BB0A9L,(-1L),0x243BB0A9L}}};
        int32_t **l_207 = &p_745->g_150;
        int i, j, k;
        l_206[0][1][1] = (p_82 < ((safe_rshift_func_int8_t_s_u((*p_745->g_184), p_745->g_44)) , ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((((*p_745->g_184) = 0L) <= (safe_add_func_uint64_t_u_u((--l_198), (safe_lshift_func_int16_t_s_u((l_203 = p_745->g_155), (safe_rshift_func_uint16_t_u_u(((void*)0 != &p_80), 6))))))) ^ p_82), ((((+p_82) > 0x2BF4545E75F00DBDL) <= p_83) >= (-1L)))), 3)), 1UL)) , p_745->g_185)));
        (*l_207) = p_80;
        for (p_83 = (-14); (p_83 > 56); p_83 = safe_add_func_int16_t_s_s(p_83, 4))
        { /* block id: 48 */
            return p_80;
        }
    }
    else
    { /* block id: 51 */
        p_80 = p_80;
    }
    for (p_745->g_197 = 17; (p_745->g_197 < (-6)); p_745->g_197 = safe_sub_func_int64_t_s_s(p_745->g_197, 6))
    { /* block id: 56 */
        p_745->g_212 = p_745->g_212;
        (*p_745->g_63) = (*p_745->g_63);
        for (p_745->g_154 = 0; p_745->g_154 < 1; p_745->g_154 += 1)
        {
            for (p_745->g_110 = 0; p_745->g_110 < 10; p_745->g_110 += 1)
            {
                l_166[p_745->g_154][p_745->g_110] = &p_745->g_167;
            }
        }
        return p_80;
    }
    for (p_745->g_110 = 0; (p_745->g_110 < (-13)); --p_745->g_110)
    { /* block id: 64 */
        int32_t *l_216[10][2] = {{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168},{&l_180[2][1],&l_168}};
        int i, j;
        return p_80;
    }
    for (p_745->g_93 = 14; (p_745->g_93 <= (-10)); p_745->g_93--)
    { /* block id: 69 */
        l_168 &= (*p_80);
        return p_80;
    }
    return p_80;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_87(int32_t ** p_88, uint32_t  p_89, struct S2 * p_745)
{ /* block id: 37 */
    int32_t l_186 = 0x68C3BF28L;
    l_186 = 0x43D10739L;
    return l_186;
}


/* ------------------------------------------ */
/* 
 * reads : p_745->g_93 p_745->g_44 p_745->g_110 p_745->g_153 p_745->g_155 p_745->g_154 p_745->g_15
 * writes: p_745->g_110 p_745->g_93 p_745->g_142 p_745->g_149
 */
int32_t ** func_90(int64_t * p_91, struct S2 * p_745)
{ /* block id: 21 */
    uint8_t l_96 = 248UL;
    int64_t l_107 = 0x1289037596CDD171L;
    uint8_t l_108 = 248UL;
    int32_t *l_112 = &p_745->g_110;
    int32_t l_116 = (-9L);
    int32_t l_118 = 0x11252BC4L;
    int32_t l_119 = (-10L);
    int32_t l_120 = 0x60419DFFL;
    int32_t l_121 = 0x52091CAAL;
    int32_t l_122 = (-2L);
    uint64_t l_123 = 18446744073709551612UL;
    int32_t **l_136 = &l_112;
    int8_t *l_141 = &p_745->g_142;
    int32_t **l_148 = &l_112;
    int32_t ***l_147[6][3][7] = {{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}},{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}},{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}},{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}},{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}},{{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136},{&l_148,&l_148,&l_136,&l_136,&l_148,&l_136,&l_136}}};
    uint64_t l_156 = 0UL;
    int i, j, k;
    (*l_112) |= (((safe_add_func_uint32_t_u_u((l_96 == (((((-3L) == (!(safe_add_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((!(l_96 , (((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_107 , l_107) > 0x68985BB29A1B0F83L), (5UL | (l_96 != ((((p_745->g_93 != 0x14L) & 4UL) | 1UL) ^ l_107))))), 0x116ABE3FL)) , l_108) <= 0x3D3AL))) & p_745->g_44) || 0x77EE7E4EL) , p_745->g_44), l_107)), l_108)) , p_745->g_93) , l_108), 0xF1L)))) , 0x63L) | 0UL) , l_108)), p_745->g_93)) == p_745->g_93) && l_108);
    for (l_96 = 21; (l_96 < 41); l_96 = safe_add_func_int8_t_s_s(l_96, 6))
    { /* block id: 25 */
        int32_t *l_115[5][7] = {{(void*)0,(void*)0,&p_745->g_44,(void*)0,&p_745->g_110,&p_745->g_110,&p_745->g_44},{(void*)0,(void*)0,&p_745->g_44,(void*)0,&p_745->g_110,&p_745->g_110,&p_745->g_44},{(void*)0,(void*)0,&p_745->g_44,(void*)0,&p_745->g_110,&p_745->g_110,&p_745->g_44},{(void*)0,(void*)0,&p_745->g_44,(void*)0,&p_745->g_110,&p_745->g_110,&p_745->g_44},{(void*)0,(void*)0,&p_745->g_44,(void*)0,&p_745->g_110,&p_745->g_110,&p_745->g_44}};
        int8_t l_117 = (-3L);
        int i, j;
        l_123++;
    }
    (*l_112) = (*l_112);
    l_156 |= ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((*l_112) | ((((l_136 == (void*)0) >= ((*p_91) = (*l_112))) & (((((safe_sub_func_int16_t_s_s((((*l_141) = (*l_112)) == ((p_745->g_110 || (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((p_745->g_149[0] = &l_112) == (void*)0) > (safe_add_func_int16_t_s_s(((p_745->g_153 != p_91) | 0x14A997FCL), (**l_136)))), 65531UL)), (*l_112)))) != 0x2DCD2DC6L)), 0x1561L)) != p_745->g_155) ^ 0x6BL) == (*p_745->g_153)) == (**l_148))) & p_745->g_15)), 1)), p_745->g_44)) < (**l_148)), p_745->g_154)), (*l_112))), (*p_745->g_153))) && (**l_148));
    return &p_745->g_150;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_746;
    struct S2* p_745 = &c_746;
    struct S2 c_747 = {
        65526UL, // p_745->g_15
        (-1L), // p_745->g_44
        (void*)0, // p_745->g_64
        &p_745->g_64, // p_745->g_63
        0x4F69674B172ABF77L, // p_745->g_68
        0x7477944D42BE3C69L, // p_745->g_93
        1L, // p_745->g_110
        {{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110},{(void*)0,(void*)0,&p_745->g_110}}, // p_745->g_109
        {&p_745->g_110,&p_745->g_110}, // p_745->g_111
        0x63L, // p_745->g_142
        &p_745->g_44, // p_745->g_150
        {&p_745->g_150,&p_745->g_150}, // p_745->g_149
        0x5DDDEF21EC415CA0L, // p_745->g_154
        &p_745->g_154, // p_745->g_153
        0x5C20038BL, // p_745->g_155
        0xF3ECL, // p_745->g_167
        0x190CL, // p_745->g_179
        0x27C989E8L, // p_745->g_183
        0x33L, // p_745->g_185
        &p_745->g_185, // p_745->g_184
        0x48L, // p_745->g_197
        {0UL,0x15D964B4B9CE0AD0L,5UL,0x34F4D14C442B78B9L}, // p_745->g_212
        (void*)0, // p_745->g_213
        &p_745->g_150, // p_745->g_220
        {0x37E1BAF48159CCD5L,0x37E1BAF48159CCD5L,0x37E1BAF48159CCD5L,0x37E1BAF48159CCD5L}, // p_745->g_227
        0UL, // p_745->g_248
        (-9L), // p_745->g_250
        1L, // p_745->g_259
        {0x84L,0x84L}, // p_745->g_269
        {{0x7249F298L,0x18ABC2DAL,0x18ABC2DAL,0x7249F298L,0x7249F298L},{0x7249F298L,0x18ABC2DAL,0x18ABC2DAL,0x7249F298L,0x7249F298L},{0x7249F298L,0x18ABC2DAL,0x18ABC2DAL,0x7249F298L,0x7249F298L},{0x7249F298L,0x18ABC2DAL,0x18ABC2DAL,0x7249F298L,0x7249F298L}}, // p_745->g_271
        {{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}},{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}},{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}},{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}},{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}},{{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{0x63D993A8L,0x1AC23313194CD03FL,0x6F0FF0162682172DL,0x1098E09DL,2UL},{1UL,0UL,-1L,0x750E86C6L,1UL},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL},{0x6DF752B4L,0x3854A16A100968CAL,-1L,0x6BF77952L,0xBC31E6BA40BAC577L},{0xECEDD2ABL,0x3D353EA13BF90D25L,0L,-6L,0x080ABBFA448F8A4CL}}}, // p_745->g_279
        &p_745->g_279[5][5], // p_745->g_280
        (-3L), // p_745->g_283
        65527UL, // p_745->g_317
        &p_745->g_317, // p_745->g_316
        &p_745->g_317, // p_745->g_319
        {18446744073709551612UL,0x61BA1B34EAD64265L,1UL,0x746449A1E4A71829L}, // p_745->g_358
        &p_745->g_358, // p_745->g_361
        &p_745->g_361, // p_745->g_360
        &p_745->g_150, // p_745->g_365
        {8UL,0x28E93201184098E1L,1L,-1L,9UL}, // p_745->g_397
        {4294967294UL,0x09A8036627E46042L,0x3B62341F96CBD749L,0x7FC4CAE8L,0x20D5BCF2F64861A6L}, // p_745->g_433
        {{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}},{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}},{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}},{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}},{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}},{{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433},{&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433,&p_745->g_433,(void*)0,(void*)0,(void*)0,&p_745->g_433}}}, // p_745->g_434
        {{{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}}},{{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}},{{0UL,18446744073709551615UL,-1L,1L,0x6F48A93D07BB10A7L},{0x3E2A152FL,0x2680E869EB959068L,0x5A19B8762EF2367AL,-4L,0UL},{4294967289UL,0xA2ED855E325881E8L,-1L,1L,0UL},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{0x2B8F4B44L,2UL,0x756F0EE09E703182L,0x4E709B19L,18446744073709551615UL},{4294967292UL,0UL,1L,3L,0xA4D0655BBB00E7C4L},{0x4814A270L,2UL,0L,-1L,0x8AE1E9FD627E386FL}}}}, // p_745->g_435
        5UL, // p_745->g_468
        0UL, // p_745->g_472
        {0UL,0x00774A50C4C096ABL,18446744073709551615UL,18446744073709551609UL}, // p_745->g_476
        0x2E84D5E80FA03657L, // p_745->g_477
        {1UL,1L,18446744073709551613UL,0x651120CEF3612856L}, // p_745->g_488
        (void*)0, // p_745->g_514
        {{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}},{{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L},{0x214B2339L,1UL,1L,-4L,18446744073709551614UL},{4294967289UL,0x3CBFE7F72F8BFF56L,1L,0x28D0A66DL,0x82082C74492BB6F4L}}}, // p_745->g_518
        &p_745->g_518[3][0], // p_745->g_519
        0UL, // p_745->g_544
        {6UL,0xF3F0B92987560464L,0x390380B5C6D7D624L,3L,0x6B82FFD5D94A8922L}, // p_745->g_578
        &p_745->g_468, // p_745->g_636
        {{&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636},{&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636},{&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636},{&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636,&p_745->g_636}}, // p_745->g_635
        &p_745->g_271[2][3], // p_745->g_665
        {7UL,0xB9845ABADABD413AL,0x44257EF90C40A65EL,0x10B24688L,0xA02459874A53F734L}, // p_745->g_671
        {4294967295UL,0x9A02620157E949A1L,0L,6L,18446744073709551613UL}, // p_745->g_672
        {18446744073709551611UL,0x55B1C25365CDBF51L,0UL,18446744073709551615UL}, // p_745->g_694
        {1UL,0x42A4948B9C0D01C5L,0x7B8138A898D96049L,0x153D1DF27E08339DL}, // p_745->g_695
        {0xF54C932AL,0xE95FFC1D49B5C7CFL,9L,0x4E511AACL,0xF32A5FB1A7483BC9L}, // p_745->g_696
        &p_745->g_672, // p_745->g_697
        {0x6EBC1F2CL,0x04063B49BF7AE920L,0x390EFAB9134090C8L,0L,18446744073709551609UL}, // p_745->g_710
        {0xA7D183298E7A30EBL,1L,8UL,0xD2B5ACBE07493651L}, // p_745->g_719
        {0UL,0L,0UL,0UL}, // p_745->g_728
        {0x3619739E47A13A8DL,0x1ECBB455AFE5D700L,0x46AC218F3C34368CL,0x1D5F6ECA35D938ACL}, // p_745->g_729
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_745->g_744
    };
    c_746 = c_747;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_745);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_745->g_15, "p_745->g_15", print_hash_value);
    transparent_crc(p_745->g_44, "p_745->g_44", print_hash_value);
    transparent_crc(p_745->g_68, "p_745->g_68", print_hash_value);
    transparent_crc(p_745->g_93, "p_745->g_93", print_hash_value);
    transparent_crc(p_745->g_110, "p_745->g_110", print_hash_value);
    transparent_crc(p_745->g_142, "p_745->g_142", print_hash_value);
    transparent_crc(p_745->g_154, "p_745->g_154", print_hash_value);
    transparent_crc(p_745->g_155, "p_745->g_155", print_hash_value);
    transparent_crc(p_745->g_167, "p_745->g_167", print_hash_value);
    transparent_crc(p_745->g_179, "p_745->g_179", print_hash_value);
    transparent_crc(p_745->g_183, "p_745->g_183", print_hash_value);
    transparent_crc(p_745->g_185, "p_745->g_185", print_hash_value);
    transparent_crc(p_745->g_197, "p_745->g_197", print_hash_value);
    transparent_crc(p_745->g_212.f0, "p_745->g_212.f0", print_hash_value);
    transparent_crc(p_745->g_212.f1, "p_745->g_212.f1", print_hash_value);
    transparent_crc(p_745->g_212.f2, "p_745->g_212.f2", print_hash_value);
    transparent_crc(p_745->g_212.f3, "p_745->g_212.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_745->g_227[i], "p_745->g_227[i]", print_hash_value);

    }
    transparent_crc(p_745->g_248, "p_745->g_248", print_hash_value);
    transparent_crc(p_745->g_250, "p_745->g_250", print_hash_value);
    transparent_crc(p_745->g_259, "p_745->g_259", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_745->g_269[i], "p_745->g_269[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_745->g_271[i][j], "p_745->g_271[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_745->g_279[i][j].f0, "p_745->g_279[i][j].f0", print_hash_value);
            transparent_crc(p_745->g_279[i][j].f1, "p_745->g_279[i][j].f1", print_hash_value);
            transparent_crc(p_745->g_279[i][j].f2, "p_745->g_279[i][j].f2", print_hash_value);
            transparent_crc(p_745->g_279[i][j].f3, "p_745->g_279[i][j].f3", print_hash_value);
            transparent_crc(p_745->g_279[i][j].f4, "p_745->g_279[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_745->g_283, "p_745->g_283", print_hash_value);
    transparent_crc(p_745->g_317, "p_745->g_317", print_hash_value);
    transparent_crc(p_745->g_358.f0, "p_745->g_358.f0", print_hash_value);
    transparent_crc(p_745->g_358.f1, "p_745->g_358.f1", print_hash_value);
    transparent_crc(p_745->g_358.f2, "p_745->g_358.f2", print_hash_value);
    transparent_crc(p_745->g_358.f3, "p_745->g_358.f3", print_hash_value);
    transparent_crc(p_745->g_397.f0, "p_745->g_397.f0", print_hash_value);
    transparent_crc(p_745->g_397.f1, "p_745->g_397.f1", print_hash_value);
    transparent_crc(p_745->g_397.f2, "p_745->g_397.f2", print_hash_value);
    transparent_crc(p_745->g_397.f3, "p_745->g_397.f3", print_hash_value);
    transparent_crc(p_745->g_397.f4, "p_745->g_397.f4", print_hash_value);
    transparent_crc(p_745->g_433.f0, "p_745->g_433.f0", print_hash_value);
    transparent_crc(p_745->g_433.f1, "p_745->g_433.f1", print_hash_value);
    transparent_crc(p_745->g_433.f2, "p_745->g_433.f2", print_hash_value);
    transparent_crc(p_745->g_433.f3, "p_745->g_433.f3", print_hash_value);
    transparent_crc(p_745->g_433.f4, "p_745->g_433.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_745->g_435[i][j][k].f0, "p_745->g_435[i][j][k].f0", print_hash_value);
                transparent_crc(p_745->g_435[i][j][k].f1, "p_745->g_435[i][j][k].f1", print_hash_value);
                transparent_crc(p_745->g_435[i][j][k].f2, "p_745->g_435[i][j][k].f2", print_hash_value);
                transparent_crc(p_745->g_435[i][j][k].f3, "p_745->g_435[i][j][k].f3", print_hash_value);
                transparent_crc(p_745->g_435[i][j][k].f4, "p_745->g_435[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_745->g_468, "p_745->g_468", print_hash_value);
    transparent_crc(p_745->g_472, "p_745->g_472", print_hash_value);
    transparent_crc(p_745->g_476.f0, "p_745->g_476.f0", print_hash_value);
    transparent_crc(p_745->g_476.f1, "p_745->g_476.f1", print_hash_value);
    transparent_crc(p_745->g_476.f2, "p_745->g_476.f2", print_hash_value);
    transparent_crc(p_745->g_476.f3, "p_745->g_476.f3", print_hash_value);
    transparent_crc(p_745->g_477, "p_745->g_477", print_hash_value);
    transparent_crc(p_745->g_488.f0, "p_745->g_488.f0", print_hash_value);
    transparent_crc(p_745->g_488.f1, "p_745->g_488.f1", print_hash_value);
    transparent_crc(p_745->g_488.f2, "p_745->g_488.f2", print_hash_value);
    transparent_crc(p_745->g_488.f3, "p_745->g_488.f3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_745->g_518[i][j].f0, "p_745->g_518[i][j].f0", print_hash_value);
            transparent_crc(p_745->g_518[i][j].f1, "p_745->g_518[i][j].f1", print_hash_value);
            transparent_crc(p_745->g_518[i][j].f2, "p_745->g_518[i][j].f2", print_hash_value);
            transparent_crc(p_745->g_518[i][j].f3, "p_745->g_518[i][j].f3", print_hash_value);
            transparent_crc(p_745->g_518[i][j].f4, "p_745->g_518[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_745->g_544, "p_745->g_544", print_hash_value);
    transparent_crc(p_745->g_578.f0, "p_745->g_578.f0", print_hash_value);
    transparent_crc(p_745->g_578.f1, "p_745->g_578.f1", print_hash_value);
    transparent_crc(p_745->g_578.f2, "p_745->g_578.f2", print_hash_value);
    transparent_crc(p_745->g_578.f3, "p_745->g_578.f3", print_hash_value);
    transparent_crc(p_745->g_578.f4, "p_745->g_578.f4", print_hash_value);
    transparent_crc(p_745->g_671.f0, "p_745->g_671.f0", print_hash_value);
    transparent_crc(p_745->g_671.f1, "p_745->g_671.f1", print_hash_value);
    transparent_crc(p_745->g_671.f2, "p_745->g_671.f2", print_hash_value);
    transparent_crc(p_745->g_671.f3, "p_745->g_671.f3", print_hash_value);
    transparent_crc(p_745->g_671.f4, "p_745->g_671.f4", print_hash_value);
    transparent_crc(p_745->g_672.f0, "p_745->g_672.f0", print_hash_value);
    transparent_crc(p_745->g_672.f1, "p_745->g_672.f1", print_hash_value);
    transparent_crc(p_745->g_672.f2, "p_745->g_672.f2", print_hash_value);
    transparent_crc(p_745->g_672.f3, "p_745->g_672.f3", print_hash_value);
    transparent_crc(p_745->g_672.f4, "p_745->g_672.f4", print_hash_value);
    transparent_crc(p_745->g_694.f0, "p_745->g_694.f0", print_hash_value);
    transparent_crc(p_745->g_694.f1, "p_745->g_694.f1", print_hash_value);
    transparent_crc(p_745->g_694.f2, "p_745->g_694.f2", print_hash_value);
    transparent_crc(p_745->g_694.f3, "p_745->g_694.f3", print_hash_value);
    transparent_crc(p_745->g_695.f0, "p_745->g_695.f0", print_hash_value);
    transparent_crc(p_745->g_695.f1, "p_745->g_695.f1", print_hash_value);
    transparent_crc(p_745->g_695.f2, "p_745->g_695.f2", print_hash_value);
    transparent_crc(p_745->g_695.f3, "p_745->g_695.f3", print_hash_value);
    transparent_crc(p_745->g_696.f0, "p_745->g_696.f0", print_hash_value);
    transparent_crc(p_745->g_696.f1, "p_745->g_696.f1", print_hash_value);
    transparent_crc(p_745->g_696.f2, "p_745->g_696.f2", print_hash_value);
    transparent_crc(p_745->g_696.f3, "p_745->g_696.f3", print_hash_value);
    transparent_crc(p_745->g_696.f4, "p_745->g_696.f4", print_hash_value);
    transparent_crc(p_745->g_710.f0, "p_745->g_710.f0", print_hash_value);
    transparent_crc(p_745->g_710.f1, "p_745->g_710.f1", print_hash_value);
    transparent_crc(p_745->g_710.f2, "p_745->g_710.f2", print_hash_value);
    transparent_crc(p_745->g_710.f3, "p_745->g_710.f3", print_hash_value);
    transparent_crc(p_745->g_710.f4, "p_745->g_710.f4", print_hash_value);
    transparent_crc(p_745->g_719.f0, "p_745->g_719.f0", print_hash_value);
    transparent_crc(p_745->g_719.f1, "p_745->g_719.f1", print_hash_value);
    transparent_crc(p_745->g_719.f2, "p_745->g_719.f2", print_hash_value);
    transparent_crc(p_745->g_719.f3, "p_745->g_719.f3", print_hash_value);
    transparent_crc(p_745->g_728.f0, "p_745->g_728.f0", print_hash_value);
    transparent_crc(p_745->g_728.f1, "p_745->g_728.f1", print_hash_value);
    transparent_crc(p_745->g_728.f2, "p_745->g_728.f2", print_hash_value);
    transparent_crc(p_745->g_728.f3, "p_745->g_728.f3", print_hash_value);
    transparent_crc(p_745->g_729.f0, "p_745->g_729.f0", print_hash_value);
    transparent_crc(p_745->g_729.f1, "p_745->g_729.f1", print_hash_value);
    transparent_crc(p_745->g_729.f2, "p_745->g_729.f2", print_hash_value);
    transparent_crc(p_745->g_729.f3, "p_745->g_729.f3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_745->g_744[i], "p_745->g_744[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
