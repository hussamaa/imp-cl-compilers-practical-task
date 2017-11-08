// -g 88,38,2 -l 2,19,2
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


// Seed: 1040736746

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   uint8_t  f1;
};

struct S1 {
   uint64_t  f0;
   uint8_t  f1;
   uint64_t  f2;
};

struct S2 {
   uint32_t  f0;
   int32_t  f1;
   struct S0  f2;
   uint64_t  f3;
   uint32_t  f4;
   int32_t  f5;
   int32_t  f6;
   uint32_t  f7;
};

union U3 {
   int8_t * volatile  f0;
};

struct S4 {
    int32_t g_5;
    uint16_t g_9[2][7];
    uint16_t g_15;
    uint16_t *g_14;
    uint8_t g_22;
    int32_t g_30;
    union U3 g_31;
    int8_t g_35;
    int8_t *g_34;
    struct S1 g_46;
    union U3 *g_49;
    int16_t g_79;
    volatile uint32_t g_80[1][6][7];
    uint16_t g_99;
    uint16_t g_101;
    int16_t g_104;
    uint32_t g_107;
    struct S0 *g_110;
    volatile uint8_t * volatile *g_131;
    int16_t g_136;
    int8_t g_138;
    volatile uint32_t g_140[2][5][7];
    int16_t g_152;
    volatile uint8_t g_153;
    volatile uint64_t g_169;
    struct S0 g_192;
    volatile uint64_t g_200[4];
    int64_t g_205;
    uint64_t g_222;
    int64_t g_223;
    volatile uint16_t g_269;
    volatile uint16_t *g_268;
    volatile uint16_t **g_267;
    volatile uint8_t g_279;
    struct S2 g_283;
    uint8_t g_301;
    int8_t g_302;
    int16_t g_303;
    int8_t g_309[4][8][3];
    int16_t g_312;
    int8_t g_313;
    uint16_t g_314;
    volatile uint16_t g_324;
    int32_t *g_328;
    int32_t ** volatile g_327;
    int32_t **g_377[7];
    int32_t ***g_376;
    uint8_t g_412;
    union U3 g_416;
    union U3 g_419;
    volatile uint16_t *** volatile g_432;
    uint8_t *g_445;
    uint8_t **g_444;
    int8_t g_446;
    uint32_t g_449[4][5][7];
    int32_t g_475;
    union U3 g_556;
    int32_t *g_575;
    int32_t ** volatile g_576;
    struct S1 * volatile g_607[8][4];
    struct S1 * volatile g_608;
    struct S2 *g_677;
    struct S2 ** volatile g_676[10][2][3];
    struct S2 ** volatile g_679[10][3];
    volatile union U3 g_709;
    struct S1 * volatile g_723;
    volatile int64_t *g_752;
    volatile int64_t **g_751;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S4 * p_753);
uint16_t  func_12(uint16_t * p_13, struct S4 * p_753);
union U3  func_25(int32_t  p_26, int32_t * p_27, struct S4 * p_753);
int64_t  func_32(int8_t * p_33, struct S4 * p_753);
int32_t * func_36(uint8_t * p_37, uint16_t * p_38, uint32_t  p_39, struct S4 * p_753);
union U3 * func_43(struct S1  p_44, int64_t  p_45, struct S4 * p_753);
union U3  func_51(uint8_t * p_52, struct S4 * p_753);
uint8_t * func_53(int32_t  p_54, struct S4 * p_753);
int8_t  func_67(uint8_t ** p_68, struct S4 * p_753);
int32_t  func_70(int32_t * p_71, int8_t * p_72, struct S4 * p_753);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_753->g_5 p_753->g_9 p_753->g_14 p_753->g_15 p_753->g_30 p_753->g_268 p_753->g_269 p_753->g_138 p_753->g_34 p_753->g_35 p_753->g_328 p_753->g_222 p_753->g_301 p_753->g_283.f5 p_753->g_283.f4 p_753->g_192.f1 p_753->g_449 p_753->g_283.f2.f0 p_753->g_283.f7 p_753->g_376 p_753->g_377 p_753->g_445 p_753->g_475 p_753->g_751
 * writes: p_753->g_5 p_753->g_9 p_753->g_15 p_753->g_35 p_753->g_30 p_753->g_222 p_753->g_283.f4 p_753->g_475 p_753->g_751
 */
int32_t  func_1(struct S4 * p_753)
{ /* block id: 4 */
    int32_t *l_4 = &p_753->g_5;
    uint16_t *l_8[8][3] = {{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]},{(void*)0,&p_753->g_9[0][3],&p_753->g_9[0][2]}};
    int16_t l_740 = 0x39BAL;
    uint64_t *l_741 = &p_753->g_222;
    uint32_t *l_746[6] = {&p_753->g_283.f4,&p_753->g_283.f4,&p_753->g_283.f4,&p_753->g_283.f4,&p_753->g_283.f4,&p_753->g_283.f4};
    int32_t l_747 = 0L;
    int32_t *l_748 = &p_753->g_475;
    uint32_t l_749 = 4294967295UL;
    int i, j;
    (***p_753->g_376) = (safe_add_func_int32_t_s_s(((*l_4) &= 0x6672CA3CL), ((safe_div_func_uint16_t_u_u((++p_753->g_9[0][5]), func_12(p_753->g_14, p_753))) != ((*l_748) = (l_747 = (((safe_sub_func_uint16_t_u_u(l_740, ((--(*l_741)) != ((safe_rshift_func_uint16_t_u_s(0xBE4CL, (p_753->g_301 >= ((0xCBL && (((p_753->g_283.f4 &= p_753->g_283.f5) ^ l_740) | p_753->g_192.f1)) > p_753->g_449[2][4][5])))) == p_753->g_283.f2.f0)))) | p_753->g_283.f7) , l_740))))));
    if (p_753->g_283.f5)
        goto lbl_750;
lbl_750:
    l_749 &= ((*p_753->g_328) ^= ((*p_753->g_445) || (*l_748)));
    p_753->g_751 = p_753->g_751;
    return (*l_748);
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_15 p_753->g_30 p_753->g_268 p_753->g_269 p_753->g_138 p_753->g_34 p_753->g_35 p_753->g_328
 * writes: p_753->g_15 p_753->g_35 p_753->g_30
 */
uint16_t  func_12(uint16_t * p_13, struct S4 * p_753)
{ /* block id: 7 */
    int16_t l_28 = (-1L);
    int32_t *l_29 = &p_753->g_30;
    uint8_t *l_720 = &p_753->g_412;
    int64_t l_736 = 1L;
    int32_t l_737 = 0x61B6D6A2L;
    for (p_753->g_15 = 25; (p_753->g_15 > 46); p_753->g_15 = safe_add_func_uint16_t_u_u(p_753->g_15, 6))
    { /* block id: 10 */
        int32_t l_20[5][7][5] = {{{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL}},{{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL}},{{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL}},{{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL}},{{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL},{(-9L),(-1L),0x5E45DB0FL,2L,0x62C80F3BL}}};
        uint8_t *l_21 = &p_753->g_22;
        int16_t *l_719 = &l_28;
        int32_t *l_721 = &p_753->g_475;
        struct S1 l_722 = {0xE026E0385644CBAAL,255UL,0x153B51808B740D8FL};
        struct S2 l_726 = {0xA3253D4CL,0x3BCFC306L,{8UL,255UL},0UL,4294967289UL,0x0F9F6D7BL,-8L,4294967291UL};
        int32_t *l_728 = &p_753->g_475;
        int i, j, k;
        (1 + 1);
    }
    l_737 ^= (((*l_29) = (safe_unary_minus_func_uint8_t_u((safe_mod_func_int64_t_s_s((((*p_753->g_34) &= (((((*l_29) , &l_29) == (void*)0) ^ (1L != (*l_29))) && ((*l_29) , (((~((safe_sub_func_uint8_t_u_u(6UL, 0x79L)) , (safe_sub_func_uint16_t_u_u((*p_753->g_268), 0UL)))) & 0x69018737L) == p_753->g_138)))) == (*l_29)), l_736))))) , (*p_753->g_328));
    return (*l_29);
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_31
 * writes:
 */
union U3  func_25(int32_t  p_26, int32_t * p_27, struct S4 * p_753)
{ /* block id: 13 */
    return p_753->g_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_46 p_753->g_15 p_753->g_22 p_753->g_35 p_753->g_30 p_753->g_80 p_753->g_14 p_753->g_34 p_753->g_101 p_753->g_79 p_753->g_107 p_753->g_131 p_753->g_99 p_753->g_140 p_753->g_153 p_753->g_314 p_753->g_223 p_753->g_283.f2.f1 p_753->g_324 p_753->g_327 p_753->g_328 p_753->g_283.f4 p_753->g_268 p_753->g_269 p_753->g_283.f0 p_753->g_313 p_753->g_104 p_753->g_283.f7 p_753->g_192.f1 p_753->g_309 p_753->g_283.f6 p_753->g_412 p_753->g_419 p_753->g_432 p_753->g_446 p_753->g_283.f1 p_753->g_449 p_753->g_445 p_753->g_301 p_753->g_222 p_753->g_267 p_753->g_303 p_753->g_444 p_753->g_192.f0 p_753->g_556 p_753->g_575 p_753->g_576 p_753->g_283.f3 p_753->g_138 p_753->g_709 p_753->g_200
 * writes: p_753->g_49 p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_99 p_753->g_101 p_753->g_79 p_753->g_104 p_753->g_107 p_753->g_46.f0 p_753->g_22 p_753->g_110 p_753->g_138 p_753->g_140 p_753->g_152 p_753->g_153 p_753->g_314 p_753->g_303 p_753->g_283.f2.f1 p_753->g_324 p_753->g_328 p_753->g_283.f4 p_753->g_283.f0 p_753->g_136 p_753->g_312 p_753->g_376 p_753->g_222 p_753->g_192.f1 p_753->g_192.f0 p_753->g_223 p_753->g_283.f3 p_753->g_283.f7 p_753->g_267 p_753->g_444 p_753->g_449 p_753->g_283.f2 p_753->g_35 p_753->g_14 p_753->g_446 p_753->g_313 p_753->g_301 p_753->g_205 p_753->g_677
 */
int64_t  func_32(int8_t * p_33, struct S4 * p_753)
{ /* block id: 15 */
    uint8_t *l_41 = &p_753->g_22;
    uint8_t **l_40 = &l_41;
    int32_t l_42 = (-1L);
    int32_t *l_577 = &p_753->g_30;
    int32_t *l_578 = (void*)0;
    int32_t *l_579 = (void*)0;
    int32_t *l_580[10][4] = {{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42}};
    int64_t l_581[4][9][7] = {{{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L}},{{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L}},{{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L}},{{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L},{0x60D96334C2EC2BA0L,(-1L),6L,(-2L),(-1L),0x2FB907FF16ABD6C8L,0L}}};
    int32_t l_582[9];
    int32_t l_583 = 1L;
    int32_t l_584 = 0x5180060AL;
    int64_t l_585 = 0x41C91EADAC8EF9C6L;
    uint16_t l_586 = 0xFE7EL;
    int16_t *l_605[2][9][2] = {{{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79}},{{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79},{&p_753->g_303,&p_753->g_79}}};
    struct S1 l_610 = {0x26C81BBB40C5ECE7L,0x8BL,3UL};
    uint16_t l_628[1][8];
    uint64_t *l_659 = (void*)0;
    int16_t l_668[4] = {1L,1L,1L,1L};
    struct S0 **l_712 = &p_753->g_110;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_582[i] = 0x09CC6CA0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_628[i][j] = 65531UL;
    }
    (*p_753->g_576) = func_36(((*l_40) = (void*)0), &p_753->g_15, l_42, p_753);
    l_586--;
    if ((~0L))
    { /* block id: 274 */
        struct S0 *l_593 = &p_753->g_192;
        int32_t l_602 = 7L;
        int32_t **l_606 = &l_578;
        (*l_606) = &l_602;
        return (*l_577);
    }
    else
    { /* block id: 279 */
        struct S1 *l_609[5][5][7] = {{{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46}},{{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46}},{{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46}},{{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46}},{{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46},{(void*)0,(void*)0,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46,&p_753->g_46}}};
        int32_t l_611 = (-10L);
        int8_t l_612 = 0L;
        int32_t l_613 = (-1L);
        int32_t l_614 = 0x5297CBD5L;
        int32_t l_615 = 2L;
        int32_t l_616 = 1L;
        int32_t l_617 = 0L;
        int32_t l_618 = 5L;
        int32_t l_619 = (-5L);
        int32_t l_620 = 1L;
        int32_t l_621 = 0L;
        int32_t l_622 = 0x4CE78047L;
        int32_t l_623 = 0x7C307E17L;
        int32_t l_624 = (-1L);
        int32_t l_625 = (-1L);
        int32_t l_626 = 0x101B339FL;
        int32_t l_627[4][1] = {{0x10B5A087L},{0x10B5A087L},{0x10B5A087L},{0x10B5A087L}};
        uint64_t l_633 = 0UL;
        int i, j, k;
        l_610 = p_753->g_46;
        l_628[0][5]--;
        (*l_577) ^= (safe_mod_func_int16_t_s_s(l_611, (0x62L | (l_614 || l_611))));
        ++l_633;
    }
    for (p_753->g_46.f1 = (-8); (p_753->g_46.f1 != 6); p_753->g_46.f1++)
    { /* block id: 287 */
        uint16_t l_638 = 0x73CEL;
        int16_t l_641 = (-1L);
        uint64_t *l_661[6];
        uint64_t **l_660 = &l_661[4];
        int32_t l_669[9] = {(-5L),0x7F3BBA7EL,(-5L),(-5L),0x7F3BBA7EL,(-5L),(-5L),0x7F3BBA7EL,(-5L)};
        uint32_t *l_670[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_671 = 0x70F1CA9BL;
        struct S2 *l_675 = &p_753->g_283;
        int i;
        for (i = 0; i < 6; i++)
            l_661[i] = &p_753->g_283.f3;
        --l_638;
        if (((l_641 & (safe_mod_func_uint16_t_u_u(0x1EEFL, 0x5C67L))) , (((safe_mul_func_uint8_t_u_u(l_638, (~(*l_577)))) <= ((l_671 ^= (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((*p_753->g_34) = (safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s((((4UL || (l_659 != ((*l_660) = l_659))) < ((l_669[0] ^= (l_668[1] = (safe_div_func_int8_t_s_s(((!(safe_div_func_uint64_t_u_u((((((safe_sub_func_int16_t_s_s(((*p_753->g_432) != &p_753->g_14), 65529UL)) >= l_638) == 0UL) <= 18446744073709551615UL) >= l_641), (*l_577)))) , (*p_753->g_34)), l_641)))) >= l_638)) & (*p_753->g_34)), (*p_753->g_34)))))), l_638)) >= 0xDC9FL), (*p_753->g_575))) > p_753->g_79), l_638)) , (**p_753->g_267)) > (*l_577)), (*p_753->g_14))), p_753->g_412))) < 0xB72F046AL)) >= l_638)))
        { /* block id: 294 */
            uint64_t l_672 = 0x6D2BBE33876066DDL;
            if (l_672)
                break;
        }
        else
        { /* block id: 296 */
            int64_t l_702 = 0x27896513FAE10E02L;
            struct S0 l_704 = {0UL,0x05L};
            for (p_753->g_223 = 0; (p_753->g_223 < (-30)); --p_753->g_223)
            { /* block id: 299 */
                struct S2 **l_678 = (void*)0;
                struct S2 **l_680 = &p_753->g_677;
                int32_t l_703 = (-1L);
                for (l_638 = 2; (l_638 <= 6); l_638 += 1)
                { /* block id: 302 */
                    if ((**p_753->g_327))
                        break;
                }
                (*l_680) = l_675;
                for (l_638 = 0; (l_638 <= 3); l_638 += 1)
                { /* block id: 308 */
                    int64_t *l_685 = &l_585;
                    int i;
                    (*l_577) = ((l_668[l_638] && l_582[l_638]) > (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((l_685 != (void*)0), l_668[l_638])) , l_638), ((l_669[7] ^= 0x2EE4BB06267D595CL) & ((safe_lshift_func_uint8_t_u_u(l_582[l_638], 3)) , (((((l_671 = (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_702, 3)), (*p_33))), (*l_577))), (*p_753->g_445))) <= (***p_753->g_432)) , l_668[l_638]) > l_671), (-9L))) == l_702) | l_703), p_753->g_283.f3)), p_753->g_138)) && 0x48L) <= (-1L))) & (*p_33)) , 0UL) || l_703) , 0x9D3D97FD39446FECL))))));
                }
            }
            l_704 = l_704;
            return l_641;
        }
        (*l_577) = ((((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((&p_753->g_110 == (void*)0), (p_753->g_709 , 0xA733L))) ^ l_638), ((4L >= (safe_sub_func_uint32_t_u_u((((void*)0 == l_712) >= (safe_sub_func_uint64_t_u_u(0xF9E61E85CE5C2028L, l_638))), 0xA1527967L))) && l_669[0]))) , 0x79B06BB7A2DCA22AL) < 0xB2F6B5F53520503AL) , (*p_753->g_575));
    }
    return p_753->g_200[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_46 p_753->g_15 p_753->g_22 p_753->g_35 p_753->g_30 p_753->g_80 p_753->g_14 p_753->g_34 p_753->g_101 p_753->g_79 p_753->g_107 p_753->g_131 p_753->g_99 p_753->g_140 p_753->g_153 p_753->g_314 p_753->g_223 p_753->g_283.f2.f1 p_753->g_324 p_753->g_327 p_753->g_328 p_753->g_283.f4 p_753->g_268 p_753->g_269 p_753->g_283.f0 p_753->g_313 p_753->g_104 p_753->g_283.f7 p_753->g_192.f1 p_753->g_309 p_753->g_283.f6 p_753->g_412 p_753->g_419 p_753->g_432 p_753->g_446 p_753->g_283.f1 p_753->g_449 p_753->g_445 p_753->g_301 p_753->g_222 p_753->g_267 p_753->g_303 p_753->g_444 p_753->g_192.f0 p_753->g_556 p_753->g_575
 * writes: p_753->g_49 p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_99 p_753->g_101 p_753->g_79 p_753->g_104 p_753->g_107 p_753->g_46.f0 p_753->g_22 p_753->g_110 p_753->g_138 p_753->g_140 p_753->g_152 p_753->g_153 p_753->g_314 p_753->g_303 p_753->g_283.f2.f1 p_753->g_324 p_753->g_328 p_753->g_283.f4 p_753->g_283.f0 p_753->g_136 p_753->g_312 p_753->g_376 p_753->g_222 p_753->g_192.f1 p_753->g_192.f0 p_753->g_223 p_753->g_283.f3 p_753->g_283.f7 p_753->g_267 p_753->g_444 p_753->g_449 p_753->g_283.f2 p_753->g_35 p_753->g_14 p_753->g_446 p_753->g_313 p_753->g_301 p_753->g_205
 */
int32_t * func_36(uint8_t * p_37, uint16_t * p_38, uint32_t  p_39, struct S4 * p_753)
{ /* block id: 17 */
    struct S2 l_50 = {0x49AF4083L,0x4A31B866L,{0UL,0xE1L},0x1529ABC0A08677A3L,4294967289UL,-1L,1L,0x84295AD7L};
    uint16_t *l_568 = &p_753->g_101;
    uint8_t l_571 = 255UL;
    int64_t *l_572[4][4] = {{&p_753->g_205,&p_753->g_205,&p_753->g_205,&p_753->g_205},{&p_753->g_205,&p_753->g_205,&p_753->g_205,&p_753->g_205},{&p_753->g_205,&p_753->g_205,&p_753->g_205,&p_753->g_205},{&p_753->g_205,&p_753->g_205,&p_753->g_205,&p_753->g_205}};
    int32_t *l_573 = (void*)0;
    int32_t l_574 = 0L;
    int i, j;
    p_753->g_49 = func_43(p_753->g_46, (safe_rshift_func_uint16_t_u_s((*p_38), 15)), p_753);
    l_574 ^= (l_50 , (((((func_51(func_53(p_753->g_22, p_753), p_753) , (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s(l_50.f2.f1, 13))))) , (p_753->g_223 = ((p_753->g_205 = (p_39 , ((+((safe_div_func_int16_t_s_s(p_753->g_153, (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((p_753->g_283.f4 ^= (((4L > ((safe_mul_func_uint16_t_u_u(((*l_568)--), (*p_38))) | p_39)) ^ 0x51C4L) , l_571)), l_50.f4)), p_39)))) >= l_50.f3)) , l_50.f1))) , l_50.f2.f0))) ^ 0x4270F1BFCD9097CBL) , 4294967293UL) | p_39));
    return p_753->g_575;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U3 * func_43(struct S1  p_44, int64_t  p_45, struct S4 * p_753)
{ /* block id: 18 */
    return &p_753->g_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_327 p_753->g_283.f2.f1 p_753->g_99 p_753->g_328 p_753->g_30 p_753->g_283.f4 p_753->g_268 p_753->g_269 p_753->g_283.f0 p_753->g_313 p_753->g_104 p_753->g_314 p_753->g_34 p_753->g_35 p_753->g_14 p_753->g_15 p_753->g_283.f7 p_753->g_309 p_753->g_283.f6 p_753->g_412 p_753->g_419 p_753->g_432 p_753->g_192.f1 p_753->g_140 p_753->g_446 p_753->g_283.f1 p_753->g_449 p_753->g_445 p_753->g_301 p_753->g_222 p_753->g_46 p_753->g_267 p_753->g_303 p_753->g_444 p_753->g_192.f0 p_753->g_101 p_753->g_80 p_753->g_79 p_753->g_556
 * writes: p_753->g_328 p_753->g_30 p_753->g_283.f4 p_753->g_283.f0 p_753->g_136 p_753->g_312 p_753->g_376 p_753->g_222 p_753->g_192.f1 p_753->g_192.f0 p_753->g_223 p_753->g_283.f3 p_753->g_283.f7 p_753->g_46.f1 p_753->g_267 p_753->g_444 p_753->g_449 p_753->g_283.f2 p_753->g_35 p_753->g_14 p_753->g_138 p_753->g_446 p_753->g_313 p_753->g_301 p_753->g_49 p_753->g_79
 */
union U3  func_51(uint8_t * p_52, struct S4 * p_753)
{ /* block id: 160 */
    int64_t l_331 = (-10L);
    int32_t **l_336[5][8] = {{&p_753->g_328,&p_753->g_328,(void*)0,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,(void*)0},{&p_753->g_328,&p_753->g_328,(void*)0,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,(void*)0},{&p_753->g_328,&p_753->g_328,(void*)0,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,(void*)0},{&p_753->g_328,&p_753->g_328,(void*)0,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,(void*)0},{&p_753->g_328,&p_753->g_328,(void*)0,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,(void*)0}};
    int32_t ***l_337 = &l_336[3][7];
    int32_t **l_338[1][6] = {{&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328}};
    uint32_t *l_339 = (void*)0;
    uint32_t *l_340 = &p_753->g_283.f4;
    int16_t *l_401 = &p_753->g_79;
    struct S2 l_406 = {0xD20296A3L,-5L,{7UL,0x15L},18446744073709551615UL,0xA290FBEEL,1L,5L,0x8815BC29L};
    int8_t l_414 = 0x13L;
    union U3 *l_457 = &p_753->g_31;
    int32_t *l_516[7] = {&p_753->g_475,(void*)0,&p_753->g_475,&p_753->g_475,(void*)0,&p_753->g_475,&p_753->g_475};
    uint16_t l_530 = 0x17DBL;
    int32_t l_547[10][7][3] = {{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}},{{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L},{(-1L),0x65230A21L,1L}}};
    uint8_t l_553 = 0xAAL;
    int i, j, k;
    (*p_753->g_327) = &p_753->g_30;
    if ((safe_mod_func_int64_t_s_s((l_331 != (safe_sub_func_uint16_t_u_u(((*p_52) && ((safe_add_func_uint64_t_u_u((p_753->g_99 == (((*l_337) = l_336[3][0]) != l_338[0][5])), (((0UL != 0x1160L) != ((*p_753->g_328) = (*p_753->g_328))) == ((*l_340)--)))) >= (safe_lshift_func_uint16_t_u_u(0UL, (*p_753->g_268))))), 65535UL))), 0x7155A935A5474C69L)))
    { /* block id: 165 */
        uint64_t l_345 = 18446744073709551610UL;
        ++l_345;
    }
    else
    { /* block id: 167 */
        uint8_t l_352 = 0xE4L;
        int32_t l_358 = 1L;
        int8_t *l_363 = &p_753->g_138;
        int32_t ***l_378 = &l_336[3][3];
        int32_t l_385 = 1L;
        int32_t l_387 = 0x4587CBE4L;
        uint8_t l_391 = 0x3BL;
        int32_t *l_394[4][4] = {{(void*)0,&l_387,(void*)0,(void*)0},{(void*)0,&l_387,(void*)0,(void*)0},{(void*)0,&l_387,(void*)0,(void*)0},{(void*)0,&l_387,(void*)0,(void*)0}};
        uint16_t **l_409 = &p_753->g_14;
        uint16_t **l_411 = &p_753->g_14;
        uint64_t l_418 = 1UL;
        uint32_t l_448 = 0xC5AA3D45L;
        struct S0 l_493 = {65527UL,1UL};
        struct S1 l_504 = {18446744073709551609UL,0UL,0xC08165D1BEF97288L};
        uint8_t l_512 = 250UL;
        uint8_t l_541 = 1UL;
        int32_t l_542 = (-4L);
        uint16_t *l_546 = &p_753->g_192.f0;
        int16_t l_548[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_548[i] = 0x26DDL;
        for (p_753->g_283.f0 = 0; (p_753->g_283.f0 >= 20); p_753->g_283.f0 = safe_add_func_int64_t_s_s(p_753->g_283.f0, 1))
        { /* block id: 170 */
            int32_t *l_356 = &p_753->g_30;
            int32_t ***l_375 = &l_336[3][0];
            int32_t l_380 = 0x18069401L;
            for (p_753->g_136 = 0; (p_753->g_136 != (-3)); p_753->g_136 = safe_sub_func_int32_t_s_s(p_753->g_136, 2))
            { /* block id: 173 */
                int32_t l_357[9] = {0x30D71E8CL,(-8L),0x30D71E8CL,0x30D71E8CL,(-8L),0x30D71E8CL,0x30D71E8CL,(-8L),0x30D71E8CL};
                struct S0 l_366 = {0x4740L,0xABL};
                int i;
                (*p_753->g_328) &= l_352;
                for (p_753->g_312 = (-25); (p_753->g_312 < 15); p_753->g_312 = safe_add_func_int8_t_s_s(p_753->g_312, 5))
                { /* block id: 177 */
                    int16_t l_355 = (-1L);
                    int32_t l_379 = (-1L);
                    int32_t l_386 = 1L;
                    int8_t l_388 = 0L;
                    int32_t l_389 = 0x1EF74E5CL;
                    int32_t l_390 = 0x55D81726L;
                    if (l_355)
                    { /* block id: 178 */
                        l_356 = (void*)0;
                        l_358 = l_357[2];
                    }
                    else
                    { /* block id: 181 */
                        uint64_t *l_381 = &p_753->g_222;
                        int32_t l_382 = 0x4B51ABF0L;
                        int32_t l_383 = (-5L);
                        int32_t l_384[6] = {0x77094788L,0x77094788L,0x77094788L,0x77094788L,0x77094788L,0x77094788L};
                        int i;
                        l_358 |= (safe_mod_func_uint64_t_u_u(((p_753->g_313 , ((l_363 != p_52) >= ((safe_mod_func_uint32_t_u_u((l_366 , ((safe_sub_func_uint16_t_u_u(((((!p_753->g_104) , (((*l_381) = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((l_380 = (l_379 = (((*p_753->g_328) = (**p_753->g_327)) & (l_352 , ((*l_340) = (((safe_lshift_func_uint8_t_u_u((((p_753->g_376 = l_375) == l_378) | 0UL), 7)) > p_753->g_314) != l_366.f0)))))) , 0x5AB134B618D2B8B2L) > l_355), (*p_753->g_34))), l_355)) & 0xA8L) | l_366.f1)) && 0xBFE98FB27FCA3854L)) == l_357[1]) , (*p_753->g_14)), l_355)) , 5UL)), l_366.f0)) < 0x623D507DC010882CL))) , 0UL), p_753->g_283.f7));
                        l_391++;
                    }
                }
            }
        }
lbl_515:
        for (p_753->g_192.f1 = 0; (p_753->g_192.f1 <= 1); p_753->g_192.f1 += 1)
        { /* block id: 196 */
            int32_t *l_395 = (void*)0;
            int16_t *l_400[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t *l_407 = &p_753->g_192.f0;
            int64_t *l_408 = &p_753->g_223;
            uint16_t ***l_410 = &l_409;
            int16_t l_413 = 8L;
            union U3 *l_415 = &p_753->g_416;
            uint64_t *l_417 = &p_753->g_283.f3;
            int32_t l_420 = 3L;
            int32_t l_421 = 0L;
            int32_t l_422 = 0x2FE6F7A8L;
            int32_t l_423 = 0x7968F7BFL;
            int32_t l_424 = 0x541A2144L;
            int32_t l_425 = 0L;
            int32_t l_426[7] = {0x132692C8L,0x132692C8L,0x132692C8L,0x132692C8L,0x132692C8L,0x132692C8L,0x132692C8L};
            uint16_t l_427 = 0xB994L;
            union U3 *l_456[7][4][7] = {{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}},{{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0},{(void*)0,(void*)0,&p_753->g_419,&p_753->g_31,&p_753->g_31,&p_753->g_419,(void*)0}}};
            uint16_t l_481 = 0xFE20L;
            int i, j, k;
            (*p_753->g_327) = l_394[2][3];
            l_395 = (void*)0;
            if (((((safe_add_func_int64_t_s_s(1L, (((safe_add_func_uint8_t_u_u(((l_400[4] != l_401) && (((*l_417) = ((((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((l_395 == ((((*l_407) = (l_406 , (*p_753->g_268))) | (p_753->g_309[2][5][2] && ((((*l_408) = p_753->g_283.f6) , (((*l_410) = l_409) != l_411)) == p_753->g_313))) , (void*)0)) >= p_753->g_412), (*p_753->g_34))) || l_413) | l_413), l_414)) != (*p_753->g_34)) , (void*)0) == l_415)) || 0x380C791EE181A45EL)), (*p_52))) | 0x037FL) & (*p_753->g_34)))) , (*p_753->g_34)) == 0L) >= l_418))
            { /* block id: 203 */
                return p_753->g_419;
            }
            else
            { /* block id: 205 */
                l_395 = l_395;
            }
            --l_427;
            for (p_753->g_283.f7 = 0; (p_753->g_283.f7 <= 1); p_753->g_283.f7 += 1)
            { /* block id: 211 */
                int32_t l_443[1][5][8] = {{{0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L},{0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L},{0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L},{0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L},{0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L,0x436F5531L,0x436F5531L,0x15F62B26L}}};
                int32_t *l_460 = &p_753->g_30;
                int32_t l_466 = 0L;
                int32_t l_471[3];
                int32_t l_474[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                int64_t l_479 = 0x79DA767A013FB9E4L;
                int8_t *l_511 = &p_753->g_446;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_471[i] = 0L;
                for (p_753->g_46.f1 = 0; (p_753->g_46.f1 <= 1); p_753->g_46.f1 += 1)
                { /* block id: 214 */
                    union U3 *l_430 = &p_753->g_416;
                    union U3 **l_431 = &l_430;
                    int32_t l_447 = 0L;
                    int32_t l_468 = (-8L);
                    int32_t l_472[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    struct S1 l_499 = {18446744073709551615UL,0x57L,0x73F846235F77811AL};
                    int i, j, k;
                    (*l_431) = l_430;
                    (*p_753->g_432) = &p_753->g_268;
                    if (((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((-8L), 7)), (safe_div_func_int16_t_s_s((p_753->g_140[p_753->g_192.f1][(p_753->g_283.f7 + 1)][(p_753->g_192.f1 + 1)] > (+((safe_add_func_int8_t_s_s((((*l_407) = ((-9L) && (((((l_443[0][4][7] > 4294967286UL) > (l_443[0][4][7] == (248UL == (&p_52 != (p_753->g_444 = &p_52))))) ^ p_753->g_446) | p_753->g_283.f1) , 0x45F78CEB4637DC73L))) > l_447), l_448)) || 0UL))), 0xDE15L)))) != l_443[0][4][7]) || l_426[6]), 5)) >= 0x54L))
                    { /* block id: 219 */
                        uint8_t l_454 = 0x1DL;
                        union U3 *l_455 = &p_753->g_416;
                        struct S0 l_458 = {0x8E75L,5UL};
                        struct S0 *l_459[10] = {&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2,&p_753->g_283.f2};
                        uint64_t *l_465 = (void*)0;
                        int32_t l_467 = 0x11E0D076L;
                        int32_t l_469 = 0x648F396AL;
                        int32_t l_470 = 8L;
                        int32_t l_473 = 0x6D92D319L;
                        int32_t l_476 = 0x310A91ACL;
                        int32_t l_477 = 0x1952E3F0L;
                        int32_t l_478 = 0x34A6453CL;
                        int32_t l_480 = 0x6301DF73L;
                        int i;
                        p_753->g_449[2][4][5]--;
                        (*l_460) = (safe_lshift_func_uint8_t_u_u((l_454 & (l_443[0][4][7] > (((l_455 != (l_457 = l_456[1][3][5])) > ((p_753->g_283.f2 = l_458) , (p_753->g_222 = (((((*p_753->g_327) != l_460) == ((*l_417) = (((safe_rshift_func_uint16_t_u_s(0x5D73L, (safe_lshift_func_int16_t_s_u(((*l_460) | (*p_753->g_34)), 8)))) >= l_447) , l_447))) & 1UL) || l_454)))) > 0xB21BC4DFL))), (*p_753->g_445)));
                        ++l_481;
                    }
                    else
                    { /* block id: 227 */
                        uint32_t l_484 = 0UL;
                        struct S0 *l_494 = &p_753->g_283.f2;
                        if (l_447)
                            break;
                        l_484--;
                        l_472[5] &= (safe_mod_func_uint16_t_u_u((((*l_340) &= p_753->g_446) , 1UL), (((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(0L, (((*l_494) = l_493) , ((*l_460) | (4UL <= (+(((*l_407) = (safe_add_func_int16_t_s_s(p_753->g_313, (((*p_753->g_34) |= ((safe_mod_func_uint32_t_u_u((l_499 , l_447), l_484)) ^ (-1L))) || 0xA9L)))) == 0x3C8FL))))))), (*l_460))) == l_484) || 0x61FAL)));
                    }
                }
                l_512 = ((((0x6181464E73E01E53L & 0UL) , (((safe_sub_func_uint8_t_u_u((p_753->g_222 > (((*l_417) = (*l_460)) < ((l_504 , (safe_add_func_uint64_t_u_u(5UL, (safe_mul_func_int8_t_s_s((p_753->g_46 , ((*p_753->g_34) = ((*l_511) ^= ((*l_460) ^ (((safe_lshift_func_int8_t_s_s(((*l_363) = (((((((*l_411) = &p_753->g_101) == (**p_753->g_432)) ^ (*l_460)) , (*l_460)) < (*p_753->g_34)) && (*l_460))), 0)) , 0UL) , (*l_460)))))), (*p_52)))))) || (*p_52)))), p_753->g_314)) | p_753->g_283.f1) | (*l_460))) == p_753->g_192.f1) == p_753->g_303);
            }
        }
        for (p_753->g_313 = (-14); (p_753->g_313 >= (-12)); p_753->g_313 = safe_add_func_uint16_t_u_u(p_753->g_313, 5))
        { /* block id: 247 */
            int16_t l_527 = (-10L);
            union U3 **l_533 = &p_753->g_49;
            uint64_t *l_540 = &p_753->g_283.f3;
            int32_t l_543 = 1L;
            if (p_753->g_104)
                goto lbl_515;
            l_516[5] = (*p_753->g_327);
            l_543 = (safe_add_func_uint8_t_u_u((++(**p_753->g_444)), (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_527 != (safe_lshift_func_int8_t_s_u(9L, ((p_753->g_283.f0 > l_530) < (safe_add_func_uint32_t_u_u((((*l_533) = &p_753->g_31) != &p_753->g_31), (1UL && ((*l_401) = ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_527 ^ (((safe_mod_func_uint64_t_u_u(((*l_540) = p_753->g_192.f0), 0x6A2BBB3CCAB68DECL)) < 2L) , l_527)), l_541)), l_542)) , 0x0E88L))))))))), (*p_753->g_14))), 1UL)), p_753->g_80[0][5][3]))));
            if (l_543)
                break;
        }
        l_548[2] |= ((safe_mul_func_uint16_t_u_u((**p_753->g_267), ((*l_546) = 0x9328L))) >= l_547[0][0][0]);
    }
    for (p_753->g_79 = 14; (p_753->g_79 != (-15)); --p_753->g_79)
    { /* block id: 262 */
        int32_t l_551 = 4L;
        int32_t l_552 = 0x5D0C7DACL;
        l_553++;
    }
    return p_753->g_556;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_46.f2 p_753->g_35 p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_14 p_753->g_15 p_753->g_34 p_753->g_101 p_753->g_79 p_753->g_22 p_753->g_46.f0 p_753->g_107 p_753->g_46 p_753->g_131 p_753->g_99 p_753->g_140 p_753->g_153 p_753->g_314 p_753->g_223 p_753->g_283.f2.f1 p_753->g_324
 * writes: p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_99 p_753->g_101 p_753->g_79 p_753->g_104 p_753->g_107 p_753->g_46.f0 p_753->g_22 p_753->g_110 p_753->g_138 p_753->g_140 p_753->g_152 p_753->g_153 p_753->g_314 p_753->g_303 p_753->g_283.f2.f1 p_753->g_324
 */
uint8_t * func_53(int32_t  p_54, struct S4 * p_753)
{ /* block id: 21 */
    uint8_t **l_69 = (void*)0;
    int32_t l_317 = 0x5DCFD432L;
    int16_t *l_318 = &p_753->g_303;
    uint8_t *l_319 = &p_753->g_283.f2.f1;
    int32_t l_320 = 1L;
    int32_t *l_321 = &p_753->g_30;
    int32_t **l_322 = &l_321;
    int32_t *l_323[9] = {(void*)0,&l_320,(void*)0,(void*)0,&l_320,(void*)0,(void*)0,&l_320,(void*)0};
    int i;
    (*l_322) = ((4294967295UL < ((safe_lshift_func_int16_t_s_u(p_54, 2)) , ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_54, (p_753->g_46.f2 ^ ((*l_321) = (safe_lshift_func_uint8_t_u_s((l_317 = ((*l_319) &= (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_67(l_69, p_753), 4)), ((*l_318) = (250UL >= (l_317 || (p_753->g_223 != 0UL)))))))), l_320)))))), 0x1759L)) < (*p_753->g_14)))) , &p_753->g_30);
    p_753->g_324--;
    return l_319;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_35 p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_46.f2 p_753->g_14 p_753->g_15 p_753->g_34 p_753->g_101 p_753->g_79 p_753->g_22 p_753->g_46.f0 p_753->g_107 p_753->g_46 p_753->g_131 p_753->g_99 p_753->g_140 p_753->g_153 p_753->g_314
 * writes: p_753->g_30 p_753->g_80 p_753->g_46.f1 p_753->g_99 p_753->g_101 p_753->g_79 p_753->g_104 p_753->g_107 p_753->g_46.f0 p_753->g_22 p_753->g_110 p_753->g_138 p_753->g_140 p_753->g_152 p_753->g_153 p_753->g_314
 */
int8_t  func_67(uint8_t ** p_68, struct S4 * p_753)
{ /* block id: 22 */
    int32_t *l_73 = &p_753->g_30;
    int32_t *l_75 = &p_753->g_30;
    int32_t **l_74 = &l_75;
    int8_t *l_76 = &p_753->g_35;
    int32_t *l_77 = &p_753->g_30;
    int32_t *l_78[5][9] = {{&p_753->g_30,&p_753->g_30,(void*)0,&p_753->g_30,(void*)0,&p_753->g_30,&p_753->g_30,&p_753->g_30,&p_753->g_30},{&p_753->g_30,&p_753->g_30,(void*)0,&p_753->g_30,(void*)0,&p_753->g_30,&p_753->g_30,&p_753->g_30,&p_753->g_30},{&p_753->g_30,&p_753->g_30,(void*)0,&p_753->g_30,(void*)0,&p_753->g_30,&p_753->g_30,&p_753->g_30,&p_753->g_30},{&p_753->g_30,&p_753->g_30,(void*)0,&p_753->g_30,(void*)0,&p_753->g_30,&p_753->g_30,&p_753->g_30,&p_753->g_30},{&p_753->g_30,&p_753->g_30,(void*)0,&p_753->g_30,(void*)0,&p_753->g_30,&p_753->g_30,&p_753->g_30,&p_753->g_30}};
    struct S2 l_187 = {0xDB35DEB6L,0x06E68A10L,{0xE6A9L,6UL},0x2C016A6488293935L,4294967291UL,-1L,1L,0xFB726377L};
    struct S1 l_214 = {0x539717E3722A43CCL,252UL,0xD3486CE31580933DL};
    struct S1 l_244 = {0x304CCA799A62C1FEL,0UL,0x53EBCDE80103DACCL};
    int8_t l_298 = 0L;
    int i, j;
    p_753->g_30 &= func_70(((*l_74) = (l_73 = l_73)), l_76, p_753);
    p_753->g_80[0][1][3]++;
    for (p_753->g_46.f1 = 0; (p_753->g_46.f1 <= 4); p_753->g_46.f1 += 1)
    { /* block id: 31 */
        uint32_t l_91 = 0x850EDC41L;
        uint16_t *l_98 = &p_753->g_99;
        uint16_t *l_100 = &p_753->g_101;
        int16_t *l_102 = &p_753->g_79;
        int16_t *l_103 = &p_753->g_104;
        int32_t l_105 = (-2L);
        uint32_t *l_106[2][3] = {{&l_91,&l_91,&l_91},{&l_91,&l_91,&l_91}};
        int32_t l_108 = 0L;
        int8_t *l_120 = &p_753->g_35;
        struct S1 l_121 = {0xCCAC8DB39B42ED19L,0x00L,0x1CEE78AC6A97375CL};
        int16_t l_217[10][6][4] = {{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}},{{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L},{0x2415L,3L,0x2CA8L,2L}}};
        int32_t l_220 = 0x2153991FL;
        int32_t **l_226 = &l_73;
        struct S0 *l_275 = &l_187.f2;
        struct S2 l_276 = {1UL,7L,{65533UL,0x02L},18446744073709551608UL,0x92700A74L,0x752A3EAAL,-1L,0xCC4A9D16L};
        int i, j, k;
        l_108 = (p_753->g_46.f2 >= (((safe_div_func_int16_t_s_s(4L, ((p_753->g_107 = ((((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((l_91 ^ 5UL) | (((*l_103) = (0x2CL == (safe_div_func_uint8_t_u_u(((p_753->g_46.f1 | ((*l_102) ^= (p_753->g_30 && ((*l_100) ^= (safe_lshift_func_uint16_t_u_u(((*p_753->g_14) != ((safe_lshift_func_uint16_t_u_u(((**l_74) = ((*l_98) = ((((0x60L < (*p_753->g_34)) && (*l_75)) , p_753->g_80[0][1][3]) == (*p_753->g_14)))), (*p_753->g_14))) , (*l_73))), l_91)))))) | l_91), p_753->g_22)))) != p_753->g_46.f0)), l_105)), p_753->g_15)) | 0x98L) > p_753->g_46.f2), 0x8E352C4DL)) || l_105) || (*l_75)) ^ p_753->g_46.f0)) , (*l_75)))) != l_105) < (*p_753->g_34)));
        for (p_753->g_46.f0 = 1; (p_753->g_46.f0 <= 4); p_753->g_46.f0 += 1)
        { /* block id: 41 */
            uint32_t *l_134 = &l_91;
            int32_t l_137 = 0x72259874L;
            struct S0 *l_164 = (void*)0;
            int64_t l_182[5];
            struct S0 l_237 = {0x9A7AL,0x57L};
            int32_t l_258[4][3][3];
            struct S2 l_282[2] = {{4294967291UL,3L,{0x31B2L,0x0BL},18446744073709551608UL,4294967289UL,0x7C66E66DL,0x7A78D93BL,0x3A05BC7DL},{4294967291UL,3L,{0x31B2L,0x0BL},18446744073709551608UL,4294967289UL,0x7C66E66DL,0x7A78D93BL,0x3A05BC7DL}};
            uint32_t l_299[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_182[i] = 4L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_258[i][j][k] = (-6L);
                }
            }
            for (i = 0; i < 5; i++)
                l_299[i] = 0x765CC06EL;
            for (p_753->g_79 = 0; (p_753->g_79 <= 0); p_753->g_79 += 1)
            { /* block id: 44 */
                struct S0 *l_109 = (void*)0;
                int32_t l_117[5];
                int8_t *l_122 = &p_753->g_35;
                int i;
                for (i = 0; i < 5; i++)
                    l_117[i] = 0x17764D01L;
                for (p_753->g_22 = 0; (p_753->g_22 <= 0); p_753->g_22 += 1)
                { /* block id: 47 */
                    struct S1 l_145 = {1UL,0xC9L,0x24154FC8DD5CAA87L};
                    uint8_t *l_150 = (void*)0;
                    uint8_t *l_151[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_151[i] = &l_145.f1;
                    p_753->g_110 = l_109;
                    if (l_108)
                        continue;
                    if ((l_108 = (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(l_117[1], (((safe_mul_func_int16_t_s_s((~p_753->g_107), (l_120 == (l_121 , l_122)))) || p_753->g_101) && (safe_sub_func_uint16_t_u_u((*p_753->g_14), (*p_753->g_14)))))) || (0x3EL >= (*p_753->g_34))), 0x6A2F89F9L))))
                    { /* block id: 51 */
                        return l_117[3];
                    }
                    else
                    { /* block id: 53 */
                        int16_t *l_135[2];
                        int64_t l_139[7][9][4] = {{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}},{{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)},{2L,0L,2L,(-6L)}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_135[i] = &p_753->g_136;
                        (*l_77) = (l_137 ^= ((safe_sub_func_int8_t_s_s((-1L), ((*p_753->g_14) > (l_117[1] = ((*l_103) = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((p_753->g_46 , p_753->g_131) == p_753->g_131) && ((p_753->g_30 | (!(p_753->g_79 | p_753->g_79))) ^ ((p_753->g_46 , (void*)0) != l_134))), 0x27C01AD3E3C3B741L)), (*p_753->g_34))) & l_121.f2)))))) | 2UL));
                        p_753->g_138 = (l_117[1] = ((*l_77) ^= (p_753->g_99 <= 65533UL)));
                        p_753->g_140[1][4][1]++;
                    }
                    (**l_74) = ((safe_lshift_func_int8_t_s_s((((l_145 , (void*)0) == (void*)0) || ((*l_77) == ((l_117[2] && (safe_mod_func_uint16_t_u_u(9UL, (safe_div_func_uint64_t_u_u(0x4DA9278B1CBCA9DBL, ((l_117[1] ^ (p_753->g_152 = 0xDAL)) && l_137)))))) <= 255UL))), 3)) && 255UL);
                }
                if (l_117[4])
                    break;
                (**l_74) &= l_137;
                (**l_74) = (*l_75);
            }
            ++p_753->g_153;
            if (l_137)
                break;
        }
    }
    for (l_187.f3 = 0; (l_187.f3 != 44); l_187.f3 = safe_add_func_uint8_t_u_u(l_187.f3, 8))
    { /* block id: 149 */
        int8_t l_308 = 0x69L;
        int32_t l_310 = 0x733357E4L;
        int32_t l_311[7][3] = {{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L},{0L,0L,0x05F9EB94L}};
        int i, j;
        ++p_753->g_314;
    }
    return (*p_753->g_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_35
 * writes:
 */
int32_t  func_70(int32_t * p_71, int8_t * p_72, struct S4 * p_753)
{ /* block id: 25 */
    return p_753->g_35;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_754;
    struct S4* p_753 = &c_754;
    struct S4 c_755 = {
        0x22337124L, // p_753->g_5
        {{0xC87AL,0xC87AL,65535UL,0UL,0x13A6L,0UL,65535UL},{0xC87AL,0xC87AL,65535UL,0UL,0x13A6L,0UL,65535UL}}, // p_753->g_9
        65530UL, // p_753->g_15
        &p_753->g_15, // p_753->g_14
        0UL, // p_753->g_22
        0x074C89AEL, // p_753->g_30
        {0}, // p_753->g_31
        0x3DL, // p_753->g_35
        &p_753->g_35, // p_753->g_34
        {0x8597010273394210L,0xB9L,18446744073709551615UL}, // p_753->g_46
        (void*)0, // p_753->g_49
        (-8L), // p_753->g_79
        {{{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL},{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL},{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL},{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL},{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL},{2UL,6UL,4294967293UL,6UL,2UL,2UL,6UL}}}, // p_753->g_80
        0UL, // p_753->g_99
        0xBF6EL, // p_753->g_101
        3L, // p_753->g_104
        0x8E9B1403L, // p_753->g_107
        (void*)0, // p_753->g_110
        (void*)0, // p_753->g_131
        0L, // p_753->g_136
        1L, // p_753->g_138
        {{{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL}},{{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL},{4294967291UL,9UL,4294967291UL,4294967291UL,9UL,4294967291UL,4294967291UL}}}, // p_753->g_140
        0x39CBL, // p_753->g_152
        0UL, // p_753->g_153
        0xBE982E7F53028FBCL, // p_753->g_169
        {0x5669L,0xA0L}, // p_753->g_192
        {0x7840DFEE72222A84L,0x7840DFEE72222A84L,0x7840DFEE72222A84L,0x7840DFEE72222A84L}, // p_753->g_200
        0x67BEE1DDF8896040L, // p_753->g_205
        0x9F9F9BACBC50E1AEL, // p_753->g_222
        0x36F13B8E99BC534DL, // p_753->g_223
        0x0107L, // p_753->g_269
        &p_753->g_269, // p_753->g_268
        &p_753->g_268, // p_753->g_267
        1UL, // p_753->g_279
        {0UL,0x3D9840CDL,{65526UL,0x1CL},18446744073709551615UL,1UL,0x5DF59A0CL,0x1E4560A4L,1UL}, // p_753->g_283
        0x42L, // p_753->g_301
        0x44L, // p_753->g_302
        1L, // p_753->g_303
        {{{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L}},{{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L}},{{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L}},{{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L},{1L,0x63L,1L}}}, // p_753->g_309
        0x57B1L, // p_753->g_312
        0x23L, // p_753->g_313
        1UL, // p_753->g_314
        3UL, // p_753->g_324
        &p_753->g_30, // p_753->g_328
        &p_753->g_328, // p_753->g_327
        {&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328,&p_753->g_328}, // p_753->g_377
        &p_753->g_377[4], // p_753->g_376
        1UL, // p_753->g_412
        {0}, // p_753->g_416
        {0}, // p_753->g_419
        &p_753->g_267, // p_753->g_432
        &p_753->g_301, // p_753->g_445
        &p_753->g_445, // p_753->g_444
        0x73L, // p_753->g_446
        {{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}}}, // p_753->g_449
        0x66F4AAEEL, // p_753->g_475
        {0}, // p_753->g_556
        &p_753->g_30, // p_753->g_575
        &p_753->g_328, // p_753->g_576
        {{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0},{&p_753->g_46,(void*)0,&p_753->g_46,(void*)0}}, // p_753->g_607
        (void*)0, // p_753->g_608
        &p_753->g_283, // p_753->g_677
        {{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}},{{&p_753->g_677,&p_753->g_677,(void*)0},{&p_753->g_677,&p_753->g_677,(void*)0}}}, // p_753->g_676
        {{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677},{&p_753->g_677,&p_753->g_677,&p_753->g_677}}, // p_753->g_679
        {0}, // p_753->g_709
        &p_753->g_46, // p_753->g_723
        (void*)0, // p_753->g_752
        &p_753->g_752, // p_753->g_751
    };
    c_754 = c_755;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_753);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_753->g_5, "p_753->g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_753->g_9[i][j], "p_753->g_9[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_753->g_15, "p_753->g_15", print_hash_value);
    transparent_crc(p_753->g_22, "p_753->g_22", print_hash_value);
    transparent_crc(p_753->g_30, "p_753->g_30", print_hash_value);
    transparent_crc(p_753->g_35, "p_753->g_35", print_hash_value);
    transparent_crc(p_753->g_46.f0, "p_753->g_46.f0", print_hash_value);
    transparent_crc(p_753->g_46.f1, "p_753->g_46.f1", print_hash_value);
    transparent_crc(p_753->g_46.f2, "p_753->g_46.f2", print_hash_value);
    transparent_crc(p_753->g_79, "p_753->g_79", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_753->g_80[i][j][k], "p_753->g_80[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_753->g_99, "p_753->g_99", print_hash_value);
    transparent_crc(p_753->g_101, "p_753->g_101", print_hash_value);
    transparent_crc(p_753->g_104, "p_753->g_104", print_hash_value);
    transparent_crc(p_753->g_107, "p_753->g_107", print_hash_value);
    transparent_crc(p_753->g_136, "p_753->g_136", print_hash_value);
    transparent_crc(p_753->g_138, "p_753->g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_753->g_140[i][j][k], "p_753->g_140[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_753->g_152, "p_753->g_152", print_hash_value);
    transparent_crc(p_753->g_153, "p_753->g_153", print_hash_value);
    transparent_crc(p_753->g_169, "p_753->g_169", print_hash_value);
    transparent_crc(p_753->g_192.f0, "p_753->g_192.f0", print_hash_value);
    transparent_crc(p_753->g_192.f1, "p_753->g_192.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_753->g_200[i], "p_753->g_200[i]", print_hash_value);

    }
    transparent_crc(p_753->g_205, "p_753->g_205", print_hash_value);
    transparent_crc(p_753->g_222, "p_753->g_222", print_hash_value);
    transparent_crc(p_753->g_223, "p_753->g_223", print_hash_value);
    transparent_crc(p_753->g_269, "p_753->g_269", print_hash_value);
    transparent_crc(p_753->g_279, "p_753->g_279", print_hash_value);
    transparent_crc(p_753->g_283.f0, "p_753->g_283.f0", print_hash_value);
    transparent_crc(p_753->g_283.f1, "p_753->g_283.f1", print_hash_value);
    transparent_crc(p_753->g_283.f2.f0, "p_753->g_283.f2.f0", print_hash_value);
    transparent_crc(p_753->g_283.f2.f1, "p_753->g_283.f2.f1", print_hash_value);
    transparent_crc(p_753->g_283.f3, "p_753->g_283.f3", print_hash_value);
    transparent_crc(p_753->g_283.f4, "p_753->g_283.f4", print_hash_value);
    transparent_crc(p_753->g_283.f5, "p_753->g_283.f5", print_hash_value);
    transparent_crc(p_753->g_283.f6, "p_753->g_283.f6", print_hash_value);
    transparent_crc(p_753->g_283.f7, "p_753->g_283.f7", print_hash_value);
    transparent_crc(p_753->g_301, "p_753->g_301", print_hash_value);
    transparent_crc(p_753->g_302, "p_753->g_302", print_hash_value);
    transparent_crc(p_753->g_303, "p_753->g_303", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_753->g_309[i][j][k], "p_753->g_309[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_753->g_312, "p_753->g_312", print_hash_value);
    transparent_crc(p_753->g_313, "p_753->g_313", print_hash_value);
    transparent_crc(p_753->g_314, "p_753->g_314", print_hash_value);
    transparent_crc(p_753->g_324, "p_753->g_324", print_hash_value);
    transparent_crc(p_753->g_412, "p_753->g_412", print_hash_value);
    transparent_crc(p_753->g_446, "p_753->g_446", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_753->g_449[i][j][k], "p_753->g_449[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_753->g_475, "p_753->g_475", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
