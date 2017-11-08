// -g 4,5,49 -l 4,1,7
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


// Seed: 2113287511

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int32_t  f1;
   volatile uint16_t  f2;
   int32_t  f3;
};

union U1 {
   uint16_t  f0;
   int64_t  f1;
   volatile int32_t  f2;
};

struct S2 {
    int32_t g_2;
    uint64_t g_35;
    uint16_t g_37;
    uint64_t g_61;
    uint64_t *g_60;
    uint16_t g_71;
    volatile union U1 g_89;
    uint16_t g_92;
    uint32_t g_94;
    uint32_t g_97;
    int32_t *g_103;
    int32_t ** volatile g_102;
    uint8_t g_121;
    int8_t g_130;
    uint64_t g_163[9][1];
    uint16_t g_166;
    uint16_t *g_165;
    int16_t g_181;
    int32_t g_185;
    uint64_t *g_200;
    int32_t g_228;
    volatile int32_t g_230;
    volatile uint16_t g_231;
    int16_t g_284;
    int16_t **g_311;
    int32_t ** volatile g_390;
    int32_t g_392;
    volatile uint64_t g_398;
    int32_t ** volatile g_401;
    union U0 g_407;
    int32_t * volatile g_448;
    volatile int32_t g_463;
    volatile union U0 g_487;
    int32_t g_501;
    int32_t g_503[10];
    union U0 g_504;
    union U0 *g_542;
    union U0 ** volatile g_541[9];
    uint8_t g_563[3];
    uint32_t g_581;
    int32_t * volatile g_610;
    int64_t g_642;
    union U0 g_665[6];
    volatile uint8_t g_675;
    volatile int16_t g_704[1][9];
    volatile int16_t *g_703;
    volatile int16_t * volatile *g_702;
    volatile int16_t * volatile **g_701;
    volatile int16_t * volatile *** volatile g_700;
    volatile union U0 g_707;
    int32_t *g_724[3][3][9];
    uint8_t g_732;
    volatile uint16_t g_746;
    int32_t ** volatile g_755;
    uint16_t g_770[4][7];
    union U1 g_774;
    volatile uint32_t g_803;
    int32_t g_808[8][4];
    int8_t g_809;
    volatile uint8_t g_810;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_819);
uint8_t  func_5(uint64_t  p_6, int64_t  p_7, uint32_t  p_8, struct S2 * p_819);
uint64_t  func_9(uint64_t  p_10, int64_t  p_11, uint8_t  p_12, uint16_t  p_13, uint32_t  p_14, struct S2 * p_819);
uint32_t  func_15(int64_t  p_16, uint16_t  p_17, struct S2 * p_819);
uint16_t  func_25(int64_t  p_26, uint16_t  p_27, uint32_t  p_28, struct S2 * p_819);
uint8_t  func_30(uint64_t  p_31, uint16_t  p_32, uint64_t  p_33, struct S2 * p_819);
uint64_t  func_38(uint32_t  p_39, uint64_t * p_40, int64_t  p_41, int8_t  p_42, struct S2 * p_819);
uint32_t  func_43(uint16_t * p_44, struct S2 * p_819);
uint16_t * func_45(uint64_t * p_46, uint16_t * p_47, uint64_t  p_48, int8_t  p_49, struct S2 * p_819);
uint64_t * func_51(int16_t  p_52, uint8_t  p_53, struct S2 * p_819);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_819->g_2 p_819->g_810
 * writes: p_819->g_2 p_819->g_810
 */
uint64_t  func_1(struct S2 * p_819)
{ /* block id: 4 */
    uint32_t l_20 = 0x0E82CA96L;
    uint64_t *l_388 = (void*)0;
    int64_t l_670[4];
    int32_t l_671 = 0x6C3490E3L;
    int32_t l_672[10][10][2] = {{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}},{{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L},{(-1L),0x60CD8B46L}}};
    union U0 **l_696 = &p_819->g_542;
    uint32_t l_753 = 7UL;
    int32_t l_799 = (-6L);
    int32_t *l_805 = &l_672[9][1][0];
    int32_t *l_806 = &l_671;
    int32_t *l_807[2];
    int16_t ***l_817 = (void*)0;
    int16_t ****l_818 = &l_817;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_670[i] = 0x52BD235381FEA14FL;
    for (i = 0; i < 2; i++)
        l_807[i] = &p_819->g_2;
    for (p_819->g_2 = 0; (p_819->g_2 > 3); p_819->g_2 = safe_add_func_int8_t_s_s(p_819->g_2, 5))
    { /* block id: 7 */
        int32_t l_29 = (-1L);
        uint64_t *l_34 = &p_819->g_35;
        uint16_t *l_36 = &p_819->g_37;
        uint32_t l_50 = 0x10FBF2B8L;
        int8_t *l_431 = (void*)0;
        int8_t *l_432[10];
        int32_t l_433 = 0L;
        uint32_t *l_661 = &p_819->g_97;
        uint32_t **l_660 = &l_661;
        int16_t ***l_698 = &p_819->g_311;
        int16_t ****l_697 = &l_698;
        uint64_t l_699[6];
        union U1 *l_776 = &p_819->g_774;
        int32_t **l_804 = &p_819->g_103;
        int i;
        for (i = 0; i < 10; i++)
            l_432[i] = &p_819->g_130;
        for (i = 0; i < 6; i++)
            l_699[i] = 0x18D65393D4851721L;
        (1 + 1);
    }
    --p_819->g_810;
    (*l_806) &= (safe_sub_func_uint32_t_u_u(4294967289UL, (safe_rshift_func_int16_t_s_s((((*l_818) = l_817) != (void*)0), (*l_805)))));
    return p_819->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_392 p_819->g_94
 * writes: p_819->g_392
 */
uint8_t  func_5(uint64_t  p_6, int64_t  p_7, uint32_t  p_8, struct S2 * p_819)
{ /* block id: 326 */
    int32_t *l_654[2][3][7];
    uint8_t l_655 = 0x32L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
                l_654[i][j][k] = &p_819->g_392;
        }
    }
    l_655++;
    for (p_819->g_392 = 0; (p_819->g_392 < (-13)); p_819->g_392--)
    { /* block id: 330 */
        return p_7;
    }
    return p_819->g_94;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_487 p_819->g_165 p_819->g_166 p_819->g_284 p_819->g_503 p_819->g_504 p_819->g_2 p_819->g_163 p_819->g_61 p_819->g_97 p_819->g_504.f3 p_819->g_130 p_819->g_103 p_819->g_94 p_819->g_37 p_819->g_181 p_819->g_610 p_819->g_448 p_819->g_392 p_819->g_231 p_819->g_642 p_819->g_60 p_819->g_35 p_819->g_501 p_819->g_92 p_819->g_504.f0
 * writes: p_819->g_121 p_819->g_501 p_819->g_503 p_819->g_181 p_819->g_163 p_819->g_97 p_819->g_103 p_819->g_504.f3 p_819->g_37 p_819->g_61 p_819->g_392 p_819->g_130 p_819->g_642
 */
uint64_t  func_9(uint64_t  p_10, int64_t  p_11, uint8_t  p_12, uint16_t  p_13, uint32_t  p_14, struct S2 * p_819)
{ /* block id: 224 */
    uint32_t l_475 = 5UL;
    int8_t *l_476[3];
    int8_t **l_477 = &l_476[2];
    int8_t *l_478 = (void*)0;
    int32_t l_505 = 1L;
    int32_t l_508 = (-1L);
    int32_t l_509 = 0x34E0ADD4L;
    int32_t l_510 = 0x0B159544L;
    uint16_t l_511 = 1UL;
    int16_t l_513 = 6L;
    int32_t l_514 = 0x2A961E97L;
    uint16_t **l_515 = &p_819->g_165;
    uint32_t l_534 = 4294967295UL;
    int16_t l_564 = 0x6250L;
    uint32_t *l_611 = &p_819->g_97;
    int32_t *l_628 = (void*)0;
    int32_t *l_629 = &l_510;
    int32_t *l_630[9][3] = {{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392},{&p_819->g_392,&p_819->g_392,&p_819->g_392}};
    uint32_t l_631 = 4294967290UL;
    uint32_t l_640 = 0x56DAF904L;
    int64_t *l_641[9][10] = {{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642},{(void*)0,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,&p_819->g_642,(void*)0,&p_819->g_642,&p_819->g_642}};
    int16_t ***l_644 = (void*)0;
    int16_t ****l_643 = &l_644;
    int16_t l_645 = 0x5C6BL;
    uint64_t *l_652[4] = {&p_819->g_163[0][0],&p_819->g_163[0][0],&p_819->g_163[0][0],&p_819->g_163[0][0]};
    int8_t l_653[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_476[i] = &p_819->g_130;
    for (i = 0; i < 3; i++)
        l_653[i] = 8L;
    if ((safe_sub_func_uint8_t_u_u((l_475 & 0xE0L), (((*l_477) = l_476[2]) == (l_478 = (void*)0)))))
    { /* block id: 227 */
        int32_t **l_498 = &p_819->g_103;
        uint8_t *l_499 = &p_819->g_121;
        int32_t *l_500 = &p_819->g_501;
        int32_t *l_502 = &p_819->g_503[2];
        int16_t *l_506 = &p_819->g_181;
        int16_t *l_507[3][5] = {{&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284},{&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284},{&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284,&p_819->g_284}};
        uint64_t *l_512 = &p_819->g_163[0][0];
        int8_t **l_519 = &l_476[2];
        uint64_t l_539 = 0xF80223B456384BCEL;
        union U0 **l_573 = &p_819->g_542;
        int i, j;
        l_514 &= (safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((0x30D50F7AL | ((safe_mod_func_uint64_t_u_u(((+(p_819->g_487 , p_13)) && (((*l_512) |= ((((l_510 = ((p_11 , (l_509 = (l_508 = ((*l_506) = ((1L | ((!((safe_div_func_int16_t_s_s((((((0x7FF7EFD1L || (((*l_502) |= ((*l_500) = ((((safe_lshift_func_int16_t_s_s((((*l_499) = (safe_div_func_int64_t_s_s((+((safe_add_func_int32_t_s_s(((*p_819->g_165) < ((l_475 , l_498) == (void*)0)), (-10L))) , p_819->g_284)), l_475))) ^ p_12), l_475)) > 7L) && p_12) <= p_12))) , p_14)) < p_12) > p_10) , p_819->g_504) , p_819->g_2), l_475)) ^ l_505)) >= p_10)) || p_10))))) <= p_12)) && l_511) != 0xDEFFCEDC222ED12DL) && 0x47C2A938EAFF37A7L)) > p_11)), 0x2AAF338CC9142065L)) <= 2UL)) , l_511) >= p_819->g_61), l_513)), 4294967292UL)) ^ l_475), (*p_819->g_165)));
        if ((l_515 != (p_819->g_163[5][0] , l_515)))
        { /* block id: 237 */
            uint16_t l_516 = 0x12DEL;
            return l_516;
        }
        else
        { /* block id: 239 */
            int8_t **l_521 = &l_478;
            for (p_819->g_97 = 14; (p_819->g_97 != 54); p_819->g_97 = safe_add_func_uint64_t_u_u(p_819->g_97, 2))
            { /* block id: 242 */
                int8_t ***l_520 = (void*)0;
                l_521 = l_519;
            }
            (*l_498) = &l_508;
        }
        for (p_12 = 0; (p_12 >= 57); ++p_12)
        { /* block id: 249 */
            int8_t ***l_530 = &l_477;
            int32_t l_531 = 0x28239FBFL;
            union U0 **l_572 = &p_819->g_542;
            uint16_t l_603 = 1UL;
            int8_t l_609 = 0L;
            for (p_819->g_504.f3 = 0; (p_819->g_504.f3 <= 2); p_819->g_504.f3 += 1)
            { /* block id: 252 */
                int i, j;
                (*p_819->g_103) = (safe_sub_func_uint32_t_u_u((((void*)0 == &p_819->g_121) & ((safe_div_func_int8_t_s_s((+p_819->g_130), ((safe_add_func_int8_t_s_s((1L == (**l_498)), (&l_519 == l_530))) && (((((l_514 , p_819->g_94) , p_12) && p_11) != p_13) & l_531)))) > l_510)), l_531));
            }
            for (p_819->g_37 = 0; (p_819->g_37 > 26); p_819->g_37 = safe_add_func_uint8_t_u_u(p_819->g_37, 8))
            { /* block id: 257 */
                uint16_t l_561[7] = {65535UL,0x3930L,65535UL,65535UL,0x3930L,65535UL,65535UL};
                int8_t *l_569[9][5] = {{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130},{&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130,&p_819->g_130}};
                int16_t **l_606 = &l_507[0][1];
                int i, j;
                (**l_498) |= l_534;
                for (p_819->g_181 = 0; (p_819->g_181 != (-2)); --p_819->g_181)
                { /* block id: 261 */
                    union U0 *l_540 = &p_819->g_504;
                    int32_t l_556 = (-10L);
                    int64_t l_565 = 1L;
                    uint16_t *l_574 = (void*)0;
                    uint16_t *l_575 = &l_561[5];
                    uint32_t *l_580 = &p_819->g_581;
                    (1 + 1);
                }
                for (p_819->g_61 = 26; (p_819->g_61 < 4); --p_819->g_61)
                { /* block id: 296 */
                    (**l_498) = ((void*)0 != l_606);
                    for (p_11 = (-28); (p_11 <= 17); ++p_11)
                    { /* block id: 300 */
                        return p_12;
                    }
                    if (l_531)
                        continue;
                }
            }
            if (l_609)
                break;
        }
    }
    else
    { /* block id: 308 */
        uint64_t l_626[7][9] = {{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL},{0x66F7A1EC9CCD4F23L,0xC754A2FB84BA4D5AL,0xF7A293B2F03D205BL,3UL,18446744073709551607UL,0x66F7A1EC9CCD4F23L,3UL,18446744073709551615UL,3UL}};
        int32_t l_627[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_627[i] = 0L;
        (*p_819->g_610) = p_12;
        l_627[2] &= (((((void*)0 != l_611) | ((((*l_611) = ((safe_add_func_int16_t_s_s(l_564, (l_564 , ((safe_add_func_uint8_t_u_u((&l_475 != (void*)0), (safe_lshift_func_int16_t_s_s(0x2867L, 1)))) > ((((**l_477) = (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((p_819->g_37 , l_626[5][0]), p_10)), l_513)), p_10)) && p_819->g_503[8]), l_626[4][5]))) >= 0L) >= (*p_819->g_448)))))) == 0x4CA2L)) && p_819->g_231) != 0xD4L)) <= 0x781A6011L) ^ 0x39B0F8A2L);
        for (p_11 = 0; (p_11 <= 9); p_11 += 1)
        { /* block id: 315 */
            int i;
            if (p_819->g_503[p_11])
                break;
        }
    }
    ++l_631;
    (*p_819->g_448) &= ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*p_819->g_165), (safe_add_func_int8_t_s_s(((p_10 = ((((p_819->g_642 &= l_640) < ((void*)0 != l_643)) <= l_645) & (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((*p_819->g_60) = (4294967292UL < (~((void*)0 != &p_10)))) , ((*l_629) = ((safe_lshift_func_int16_t_s_s(((p_10 , p_819->g_35) , p_10), p_819->g_501)) == 0x11EF411B19703A43L))), p_10)), p_819->g_94)))) || l_653[1]), p_819->g_92)))), 3)) & 0x30B4BA51L);
    return p_819->g_504.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_448 p_819->g_165 p_819->g_166 p_819->g_463 p_819->g_94 p_819->g_185 p_819->g_121
 * writes: p_819->g_97 p_819->g_392 p_819->g_166
 */
uint32_t  func_15(int64_t  p_16, uint16_t  p_17, struct S2 * p_819)
{ /* block id: 216 */
    int8_t *l_442 = &p_819->g_130;
    uint32_t *l_445 = (void*)0;
    uint32_t *l_446 = &p_819->g_97;
    int32_t l_447[9][1] = {{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL},{0x230BBEDCL}};
    int32_t l_470 = 0x29B707B2L;
    uint8_t l_471[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
    int32_t *l_472 = &l_447[7][0];
    int i, j;
    (*p_819->g_448) = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_16, p_16)) < (safe_lshift_func_int16_t_s_s(0x180CL, 4))), p_17)) , (l_442 != (((+(((((*l_446) = ((p_16 <= (safe_rshift_func_uint8_t_u_u((p_17 || 0x5C3EA2C5L), 2))) != 247UL)) == p_17) <= 253UL) || l_447[0][0])) < p_17) , (void*)0))), l_447[0][0]));
    (*l_472) = ((safe_div_func_uint16_t_u_u((l_447[7][0] , ((*p_819->g_165) &= p_16)), (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0xE1E9L, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(1UL, (safe_mul_func_uint8_t_u_u((7L != (safe_mod_func_int8_t_s_s(((p_819->g_463 < (l_471[3] = (((safe_add_func_uint16_t_u_u(((l_470 = ((safe_add_func_uint8_t_u_u(p_819->g_94, 0L)) , (safe_lshift_func_int8_t_s_s(0x72L, p_17)))) | p_819->g_185), p_17)) & l_447[0][0]) | l_447[0][0]))) , p_16), 0x6AL))), 0x73L)))), 4)) || p_16))) || 18446744073709551615UL), p_16)))) & p_16);
    return p_819->g_121;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_398 p_819->g_401 p_819->g_181 p_819->g_163 p_819->g_392 p_819->g_284 p_819->g_407 p_819->g_103 p_819->g_165 p_819->g_166 p_819->g_94
 * writes: p_819->g_398 p_819->g_103 p_819->g_181 p_819->g_392 p_819->g_94
 */
uint16_t  func_25(int64_t  p_26, uint16_t  p_27, uint32_t  p_28, struct S2 * p_819)
{ /* block id: 195 */
    int32_t *l_391 = &p_819->g_392;
    int32_t *l_393 = (void*)0;
    int32_t *l_394 = &p_819->g_392;
    int32_t *l_395 = (void*)0;
    int32_t l_396 = 0x3EFF77A4L;
    int32_t *l_397[8] = {&l_396,&l_396,&l_396,&l_396,&l_396,&l_396,&l_396,&l_396};
    int16_t l_415 = 0x3D03L;
    int i;
    p_819->g_398--;
    (*p_819->g_401) = &l_396;
    for (p_819->g_181 = 1; (p_819->g_181 <= 7); p_819->g_181 += 1)
    { /* block id: 200 */
        int8_t *l_404[9][10] = {{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130},{(void*)0,&p_819->g_130,(void*)0,(void*)0,(void*)0,&p_819->g_130,(void*)0,&p_819->g_130,&p_819->g_130,&p_819->g_130}};
        int32_t l_413 = 0L;
        int32_t *l_414[10] = {&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3,&p_819->g_407.f3};
        uint32_t *l_422 = &p_819->g_94;
        int32_t l_423 = 1L;
        int i, j;
        (**p_819->g_401) = ((+(safe_div_func_int64_t_s_s((((*l_391) &= p_819->g_163[7][0]) | ((p_819->g_284 | (p_819->g_407 , 1L)) > 0L)), (safe_unary_minus_func_uint32_t_u((&p_819->g_71 == ((safe_rshift_func_int16_t_s_u(1L, ((((p_819->g_181 , (safe_add_func_int64_t_s_s(l_413, p_26))) && p_26) > 0x32DFEADECD473E2EL) < 1L))) , &p_819->g_37))))))) , p_28);
        l_423 &= ((((*l_422) ^= (((+p_28) , ((l_415 |= l_413) , ((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*p_819->g_103), (p_28 , (safe_mul_func_int8_t_s_s((&p_819->g_130 == ((*l_391) , &p_819->g_130)), (((p_26 < p_28) ^ 6L) | (*p_819->g_165))))))), 15)) && p_819->g_392))) && 3L)) , 0x33L) , (-1L));
    }
    for (p_27 = (-6); (p_27 < 5); p_27++)
    { /* block id: 209 */
        uint16_t l_426[9] = {0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL,0xDA4AL};
        int32_t **l_429 = (void*)0;
        int32_t **l_430 = &l_391;
        int i;
        l_426[4]++;
        (*l_430) = (void*)0;
    }
    return (*p_819->g_165);
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_390 p_819->g_94
 * writes: p_819->g_103
 */
uint8_t  func_30(uint64_t  p_31, uint16_t  p_32, uint64_t  p_33, struct S2 * p_819)
{ /* block id: 192 */
    int32_t *l_389 = &p_819->g_2;
    (*p_819->g_390) = l_389;
    return p_819->g_94;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_200 p_819->g_61
 * writes:
 */
uint64_t  func_38(uint32_t  p_39, uint64_t * p_40, int64_t  p_41, int8_t  p_42, struct S2 * p_819)
{ /* block id: 190 */
    return (*p_819->g_200);
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_228 p_819->g_97 p_819->g_92 p_819->g_166 p_819->g_71 p_819->g_231 p_819->g_94 p_819->g_121 p_819->g_185
 * writes: p_819->g_228 p_819->g_97 p_819->g_92 p_819->g_166 p_819->g_71 p_819->g_103
 */
uint32_t  func_43(uint16_t * p_44, struct S2 * p_819)
{ /* block id: 162 */
    int64_t l_329 = 4L;
    int32_t l_331 = 0x76A40C5FL;
    int16_t *l_357 = &p_819->g_181;
    int16_t **l_356[6][6] = {{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357,&l_357}};
    int16_t *l_385[2];
    int32_t *l_387 = &l_331;
    int i, j;
    for (i = 0; i < 2; i++)
        l_385[i] = &p_819->g_181;
    if (l_329)
    { /* block id: 163 */
        return l_329;
    }
    else
    { /* block id: 165 */
        int64_t l_330 = 0x3C1BA33D3BBA409FL;
        int64_t l_349 = 0x7FFA21502E58EBB6L;
        int16_t *l_384 = &p_819->g_284;
        l_331 = l_330;
        for (p_819->g_228 = (-4); (p_819->g_228 != (-1)); p_819->g_228 = safe_add_func_int16_t_s_s(p_819->g_228, 1))
        { /* block id: 169 */
            int32_t *l_334 = &l_331;
            uint32_t *l_341 = &p_819->g_97;
            int16_t ***l_359 = &l_356[4][0];
            int16_t ****l_358 = &l_359;
            int32_t **l_386 = &p_819->g_103;
            if (((l_330 & (l_334 == &l_331)) , ((safe_mod_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(l_331, 18446744073709551611UL)), (*l_334))) , (safe_add_func_int32_t_s_s(((*l_334) |= ((void*)0 == &p_819->g_97)), (--(*l_341)))))))
            { /* block id: 172 */
                uint32_t l_344 = 0x437D2ABBL;
                int32_t **l_346 = &p_819->g_103;
                int32_t ***l_345 = &l_346;
                if (l_344)
                    break;
                if (l_330)
                    continue;
                (*l_345) = &l_334;
                if (l_330)
                    continue;
            }
            else
            { /* block id: 177 */
                int32_t **l_348[4][10] = {{&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,(void*)0,&p_819->g_103},{&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,(void*)0,&p_819->g_103},{&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,(void*)0,&p_819->g_103},{&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,&p_819->g_103,&l_334,&p_819->g_103,&p_819->g_103,(void*)0,&p_819->g_103}};
                int32_t ***l_347 = &l_348[1][8];
                int i, j;
                (*l_347) = &l_334;
            }
            (*l_334) = (2UL < (((+((*p_44) = (*p_44))) && (((+l_349) > (safe_rshift_func_uint8_t_u_s(p_819->g_71, 2))) <= (((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((*p_44), ((((void*)0 != l_356[4][0]) & ((&p_819->g_311 != ((*l_358) = &p_819->g_311)) | p_819->g_231)) < 0x24L))), 4)) , 0xC07549F4B528D20EL) , l_349))) ^ l_349));
            (*l_386) = (((l_349 == ((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_331 >= (*l_334)), (safe_rshift_func_uint8_t_u_s((&p_819->g_163[1][0] != &p_819->g_163[2][0]), 5)))) && (safe_mul_func_int16_t_s_s(l_329, (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((((*p_44) &= (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0xA6717F7AL && (safe_sub_func_uint16_t_u_u((!(255UL & (((l_384 = l_384) != l_385[1]) ^ l_331))), 0x4AEDL))), p_819->g_94)), (*l_334))), l_329))) | 0x1362L), (*l_334))) , 0UL), 0x6DL)), 7)) , l_329), p_819->g_121))))), p_819->g_185)) && l_330)) >= l_330) , &p_819->g_2);
        }
    }
    l_387 = &l_331;
    return p_819->g_94;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_94 p_819->g_165 p_819->g_166 p_819->g_163 p_819->g_92 p_819->g_97 p_819->g_71 p_819->g_200 p_819->g_130 p_819->g_2 p_819->g_103 p_819->g_230 p_819->g_228 p_819->g_121 p_819->g_181 p_819->g_284 p_819->g_60
 * writes: p_819->g_130 p_819->g_181 p_819->g_92 p_819->g_185 p_819->g_166 p_819->g_71 p_819->g_200 p_819->g_89.f2 p_819->g_103 p_819->g_61 p_819->g_121 p_819->g_163 p_819->g_284 p_819->g_311
 */
uint16_t * func_45(uint64_t * p_46, uint16_t * p_47, uint64_t  p_48, int8_t  p_49, struct S2 * p_819)
{ /* block id: 66 */
    uint16_t *l_179 = (void*)0;
    int16_t *l_180 = &p_819->g_181;
    int32_t l_182 = 0L;
    uint16_t *l_183 = &p_819->g_92;
    int32_t *l_184[5][10][5] = {{{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2}},{{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2}},{{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2}},{{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2}},{{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2},{&l_182,(void*)0,(void*)0,&l_182,&p_819->g_2}}};
    uint32_t l_264[6][9][4] = {{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}},{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}},{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}},{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}},{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}},{{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L},{0xA94EF2FCL,4294967295UL,0x64CF4C56L,0x64CF4C56L}}};
    uint32_t l_323 = 0xE86CE934L;
    int i, j, k;
    p_819->g_185 = ((((safe_mod_func_int16_t_s_s(p_819->g_94, (*p_819->g_165))) == (!(p_819->g_130 = p_49))) ^ p_819->g_163[4][0]) <= (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_183) ^= (((0UL == (safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((255UL && (+0x24L)), ((*l_180) = (l_179 != l_179)))), p_49)) | p_819->g_166), l_182))) < 1L) ^ l_182)), (*p_819->g_165))), l_182)));
    for (p_48 = 0; (p_48 == 2); ++p_48)
    { /* block id: 73 */
        int8_t l_190 = (-1L);
        int32_t l_220 = 0x1E77FEEEL;
        int64_t l_282 = 0x1D450CAA9B477CBAL;
        int16_t l_307 = 0x4541L;
        int16_t **l_312 = &l_180;
        uint8_t l_320 = 0UL;
        for (p_819->g_92 = 15; (p_819->g_92 >= 13); p_819->g_92--)
        { /* block id: 76 */
            int16_t *l_202 = (void*)0;
            int32_t l_213[3];
            int32_t l_221 = 0x2D140F5BL;
            int32_t l_222 = 0x4DEADA25L;
            int32_t l_224 = 1L;
            int32_t l_226 = (-9L);
            int32_t l_229 = 0x24C2FD10L;
            uint64_t *l_242[1][10][3] = {{{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]},{&p_819->g_163[0][0],(void*)0,&p_819->g_163[0][0]}}};
            int32_t *l_266 = &l_222;
            uint32_t l_285 = 0x3DEF5BE2L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_213[i] = 3L;
            l_190 = p_49;
            for (p_819->g_166 = 17; (p_819->g_166 > 40); p_819->g_166++)
            { /* block id: 80 */
                uint16_t *l_197 = &p_819->g_71;
                uint64_t **l_201 = &p_819->g_200;
                int32_t *l_216 = &p_819->g_2;
                int32_t l_227 = (-1L);
                int16_t **l_237 = (void*)0;
                int16_t ***l_236 = &l_237;
                p_819->g_89.f2 = ((((safe_lshift_func_uint16_t_u_s((p_819->g_97 && ((safe_add_func_uint32_t_u_u(p_49, (&p_48 != ((++(*l_197)) , ((*l_201) = p_819->g_200))))) , p_819->g_130)), 8)) , l_202) == ((safe_add_func_uint32_t_u_u((((1L > (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(p_48, 0UL)) & 0UL), p_819->g_2)), p_49)), p_819->g_97))) || p_49) != l_190), 7L)) , p_47)) & l_213[2]);
                for (l_182 = 0; (l_182 != 5); l_182 = safe_add_func_uint16_t_u_u(l_182, 5))
                { /* block id: 86 */
                    int32_t **l_217 = &p_819->g_103;
                    int32_t l_223[4][5] = {{0x1747EB3CL,0x1747EB3CL,0x399461F9L,0x514DB471L,0L},{0x1747EB3CL,0x1747EB3CL,0x399461F9L,0x514DB471L,0L},{0x1747EB3CL,0x1747EB3CL,0x399461F9L,0x514DB471L,0L},{0x1747EB3CL,0x1747EB3CL,0x399461F9L,0x514DB471L,0L}};
                    int i, j;
                    (*l_217) = l_216;
                    for (l_190 = 0; (l_190 >= (-25)); l_190 = safe_sub_func_uint64_t_u_u(l_190, 1))
                    { /* block id: 90 */
                        int16_t l_225 = 0x2441L;
                        (1 + 1);
                    }
                    l_224 = (((*l_197) = 65529UL) <= (safe_rshift_func_int8_t_s_u(0x25L, 3)));
                    if ((*p_819->g_103))
                        break;
                }
                (*l_236) = &l_180;
                for (p_819->g_61 = (-6); (p_819->g_61 >= 22); p_819->g_61++)
                { /* block id: 104 */
                    int32_t **l_243 = &l_184[2][9][3];
                    int32_t l_287 = 0x536973E6L;
                    p_819->g_89.f2 = (((((p_819->g_130 > p_49) == (((p_49 == (safe_sub_func_uint8_t_u_u((246UL <= (l_242[0][9][2] != &p_819->g_163[0][0])), ((p_48 , (p_819->g_166 == (9L | p_819->g_230))) | 7L)))) , (void*)0) == l_243)) <= p_48) != p_49) != (*p_819->g_165));
                    for (l_190 = 0; (l_190 > 18); l_190 = safe_add_func_int16_t_s_s(l_190, 1))
                    { /* block id: 108 */
                        uint32_t l_246 = 0x48729FD9L;
                        int32_t l_263 = 0x5583043BL;
                        l_220 &= (l_246 | ((0UL | ((safe_lshift_func_uint16_t_u_s(((l_229 ^= p_819->g_163[0][0]) != ((safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(0xF8L, 6)) <= (l_179 == (void*)0)), (safe_div_func_int32_t_s_s(p_49, (safe_sub_func_uint32_t_u_u((l_263 |= ((*p_819->g_165) == ((((safe_div_func_uint32_t_u_u(((l_246 , 0UL) , p_819->g_228), (*l_216))) , (*p_819->g_165)) , &l_182) == (void*)0))), 0L)))))) && p_49), p_48)) >= l_264[4][8][3])), p_48)) , p_48)) & p_48));
                        return p_47;
                    }
                    for (l_182 = 0; (l_182 <= 0); l_182 += 1)
                    { /* block id: 116 */
                        int32_t *l_265[3];
                        uint8_t *l_267 = &p_819->g_121;
                        int16_t *l_283 = &p_819->g_284;
                        int64_t *l_286 = &l_282;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_265[i] = &l_226;
                        l_229 = (*l_216);
                        (*l_243) = &l_227;
                        l_287 = ((((*l_197) = (&l_220 == (l_266 = l_265[0]))) < ((p_49 , p_49) < (--(*l_267)))) , (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((0x0C51BF35F32714C3L != (safe_sub_func_int64_t_s_s(((*l_286) = (safe_sub_func_uint32_t_u_u((((**l_237) |= ((*p_819->g_165) > (*l_216))) || (safe_rshift_func_uint8_t_u_u((!(l_285 &= (safe_rshift_func_int16_t_s_s(((+(p_819->g_163[3][0] = l_282)) , ((*l_283) &= ((*l_180) = (((p_47 == &p_819->g_181) && p_49) != 0x70C3L)))), 13)))), 6))), (*l_216)))), p_48))) == 0x61L), 0)) >= 0x62L), p_49)));
                    }
                    if ((safe_rshift_func_int16_t_s_u(p_819->g_230, (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x3FL, 3)), p_49)))))
                    { /* block id: 130 */
                        int8_t *l_296 = &p_819->g_130;
                        int32_t l_299[1][2];
                        int64_t *l_306 = &l_282;
                        int32_t l_310 = 0L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_299[i][j] = 0x29E8577FL;
                        }
                        (*l_243) = &l_227;
                        (*l_266) = (safe_sub_func_int8_t_s_s(((*l_296) = (1UL ^ p_819->g_163[0][0])), ((safe_sub_func_uint64_t_u_u(0x3C7870230D1EB583L, ((l_299[0][0] & (((p_48 , (((safe_add_func_uint32_t_u_u(p_819->g_228, (safe_sub_func_int16_t_s_s(((void*)0 == &l_282), (((safe_add_func_int64_t_s_s(((*l_306) = ((((((*l_266) != l_287) , p_819->g_2) != p_819->g_121) | (*l_216)) < 0x0E0C279BL)), 0x55E2D799BCC955CCL)) || p_49) & 0x811DD9A7L))))) , 65535UL) , p_819->g_94)) & 0x1E40C635BAB6BCB5L) , l_307)) , p_819->g_163[0][0]))) | p_49)));
                        l_220 &= (l_310 ^= (l_299[0][1] = ((*l_266) = (safe_rshift_func_uint16_t_u_u(((void*)0 != p_819->g_60), (*p_819->g_165))))));
                    }
                    else
                    { /* block id: 139 */
                        int16_t l_319 = 0x5827L;
                        if (p_48)
                            break;
                        (*l_266) = (((0x8E5B7813A4B513DDL > ((p_819->g_311 = ((*l_236) = &l_180)) != l_312)) != (((((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((((((void*)0 != &p_46) | p_48) & ((((0x4674C49AF966FDB9L && (p_48 <= (*l_216))) < p_819->g_166) >= 0x2B28L) , p_819->g_97)) , p_48), p_49)) ^ 1L), p_48)), 0x57E2L)) > 0x10L) > l_319) ^ l_282) >= l_220)) >= l_320);
                    }
                }
            }
        }
        return &p_819->g_92;
    }
    for (p_819->g_121 = 0; (p_819->g_121 == 42); p_819->g_121 = safe_add_func_int8_t_s_s(p_819->g_121, 6))
    { /* block id: 152 */
        int16_t l_324 = 3L;
        l_324 ^= l_323;
    }
    for (l_323 = 0; (l_323 != 42); l_323 = safe_add_func_uint64_t_u_u(l_323, 3))
    { /* block id: 157 */
        uint16_t **l_328 = &l_183;
        uint16_t ***l_327 = &l_328;
        (*l_327) = &p_819->g_165;
        return &p_819->g_166;
    }
    return &p_819->g_71;
}


/* ------------------------------------------ */
/* 
 * reads : p_819->g_60 p_819->g_61 p_819->g_89 p_819->g_94 p_819->g_92 p_819->g_89.f0 p_819->g_71 p_819->g_102 p_819->g_103 p_819->g_130 p_819->g_163 p_819->g_121 p_819->g_2
 * writes: p_819->g_61 p_819->g_71 p_819->g_97 p_819->g_103 p_819->g_92 p_819->g_121 p_819->g_130 p_819->g_163
 */
uint64_t * func_51(int16_t  p_52, uint8_t  p_53, struct S2 * p_819)
{ /* block id: 10 */
    int32_t l_86 = 0x68BE3E2CL;
    uint16_t *l_91 = &p_819->g_92;
    int32_t l_95 = 1L;
    int32_t l_123 = 1L;
    uint64_t *l_164 = &p_819->g_61;
lbl_135:
    for (p_52 = 3; (p_52 <= (-16)); p_52 = safe_sub_func_int64_t_s_s(p_52, 8))
    { /* block id: 13 */
        for (p_53 = 0; (p_53 != 1); p_53 = safe_add_func_uint8_t_u_u(p_53, 2))
        { /* block id: 16 */
            return p_819->g_60;
        }
    }
    for (p_819->g_61 = (-3); (p_819->g_61 == 51); p_819->g_61 = safe_add_func_int32_t_s_s(p_819->g_61, 9))
    { /* block id: 22 */
        uint16_t *l_70[4][10] = {{&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71},{&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71},{&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71},{&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71,&p_819->g_71}};
        uint16_t *l_90 = (void*)0;
        int32_t l_93 = (-2L);
        uint32_t *l_96 = &p_819->g_97;
        int32_t *l_98 = (void*)0;
        int i, j;
        l_86 = ((((*l_96) = (safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((~(((p_819->g_71 = (0L > 0x2376568C0775DAE1L)) > (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xE0C2L, 15)), (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_819->g_61, (((((((l_95 = (p_52 ^ (!(safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_86 , ((!0x6EDF2191L) , (((safe_add_func_uint32_t_u_u(((!((p_819->g_89 , l_70[0][9]) != l_90)) > 1L), p_52)) , (void*)0) != l_91))) && l_93), p_819->g_94)), p_53))))) == p_53) < l_93) , l_86) < p_819->g_94) | p_819->g_92) , p_819->g_92))), p_52)), 0x90L))))) , p_819->g_89.f0)) , &p_819->g_61) != &p_819->g_61), p_52)), p_819->g_61)) , l_93) && p_819->g_71), 0x4BL))) && p_52) > 4L);
    }
    for (l_86 = (-11); (l_86 <= (-13)); --l_86)
    { /* block id: 30 */
        int32_t *l_101 = &l_95;
        uint64_t *l_162 = &p_819->g_163[0][0];
        (*p_819->g_102) = l_101;
        for (p_819->g_92 = (-27); (p_819->g_92 > 31); p_819->g_92++)
        { /* block id: 34 */
            int32_t l_112 = 0x58E9B07DL;
            int64_t l_122 = (-5L);
            uint32_t *l_126[8] = {&p_819->g_97,&p_819->g_97,&p_819->g_97,&p_819->g_97,&p_819->g_97,&p_819->g_97,&p_819->g_97,&p_819->g_97};
            int8_t *l_129 = &p_819->g_130;
            int i;
            for (p_819->g_71 = 15; (p_819->g_71 == 17); p_819->g_71 = safe_add_func_uint64_t_u_u(p_819->g_71, 1))
            { /* block id: 37 */
                l_123 ^= ((1L || (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_112, 7)), p_819->g_89.f0))) != ((*p_819->g_103) = (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((p_52 <= ((((~((((!(((4294967295UL <= l_112) <= p_52) ^ l_86)) , ((safe_div_func_uint16_t_u_u(((p_819->g_121 = ((safe_rshift_func_int16_t_s_s(1L, 3)) >= 0x033C1528L)) & (*p_819->g_103)), 65535UL)) , p_819->g_94)) || 255UL) | 0x2C623687L)) , p_819->g_92) , p_53) == (*p_819->g_103))), l_122)) ^ 0x8FD2EAD1D304E807L), p_53))));
                if (p_53)
                    continue;
            }
            l_123 &= (p_819->g_89.f0 >= (safe_sub_func_int32_t_s_s((&p_819->g_97 == l_126[1]), ((safe_mod_func_uint8_t_u_u(((-1L) > 4294967295UL), (*l_101))) >= ((*l_129) |= ((((p_819->g_61 ^ 0x48L) , p_53) , p_53) < 0x4BADL))))));
        }
        for (p_819->g_92 = 0; (p_819->g_92 > 15); ++p_819->g_92)
        { /* block id: 48 */
            uint64_t *l_138[1];
            int i;
            for (i = 0; i < 1; i++)
                l_138[i] = &p_819->g_61;
            for (p_819->g_61 = 0; (p_819->g_61 <= 3); p_819->g_61++)
            { /* block id: 51 */
                (*l_101) &= p_53;
                if (p_819->g_130)
                    goto lbl_135;
                for (l_95 = 0; (l_95 == 1); l_95 = safe_add_func_int32_t_s_s(l_95, 1))
                { /* block id: 56 */
                    return l_138[0];
                }
            }
        }
        (*p_819->g_103) = (safe_rshift_func_int16_t_s_u((((0x47L == (safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(252UL, (safe_lshift_func_int16_t_s_s(((((((((safe_unary_minus_func_int64_t_s(p_819->g_89.f0)) <= (*l_101)) <= p_819->g_130) < (((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((l_123 = 0xD9L), ((safe_sub_func_int8_t_s_s(0x27L, ((safe_rshift_func_int8_t_s_s((((p_53 >= ((*l_162) |= l_95)) | p_52) , p_819->g_71), p_819->g_71)) >= (*p_819->g_103)))) , p_819->g_61))) == 2L) , (-4L)), l_86)) == p_819->g_121), 5)), 4UL)), l_86)) >= p_819->g_92) , p_819->g_92)) >= p_52) , 5L) && p_819->g_163[2][0]) <= (*l_101)), (*l_101))))) , (*l_101)) == l_86) , p_53), p_819->g_2))) || p_819->g_163[2][0]) & 0x835EL), l_95));
    }
    return l_164;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_820;
    struct S2* p_819 = &c_820;
    struct S2 c_821 = {
        0x7E5F36F6L, // p_819->g_2
        18446744073709551615UL, // p_819->g_35
        0xC458L, // p_819->g_37
        0xD2BB650EBF085FFFL, // p_819->g_61
        &p_819->g_61, // p_819->g_60
        0xE3B9L, // p_819->g_71
        {65535UL}, // p_819->g_89
        8UL, // p_819->g_92
        4294967295UL, // p_819->g_94
        0x0BBFFD32L, // p_819->g_97
        (void*)0, // p_819->g_103
        &p_819->g_103, // p_819->g_102
        7UL, // p_819->g_121
        0x51L, // p_819->g_130
        {{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL}}, // p_819->g_163
        65535UL, // p_819->g_166
        &p_819->g_166, // p_819->g_165
        4L, // p_819->g_181
        0x7F6306CCL, // p_819->g_185
        &p_819->g_61, // p_819->g_200
        9L, // p_819->g_228
        0x5A187028L, // p_819->g_230
        0x8BB7L, // p_819->g_231
        0x2772L, // p_819->g_284
        (void*)0, // p_819->g_311
        &p_819->g_103, // p_819->g_390
        (-6L), // p_819->g_392
        18446744073709551615UL, // p_819->g_398
        &p_819->g_103, // p_819->g_401
        {-1L}, // p_819->g_407
        &p_819->g_392, // p_819->g_448
        (-1L), // p_819->g_463
        {0x40F4C300L}, // p_819->g_487
        0x25C74136L, // p_819->g_501
        {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_819->g_503
        {0x513C3EDBL}, // p_819->g_504
        &p_819->g_407, // p_819->g_542
        {&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542,&p_819->g_542}, // p_819->g_541
        {246UL,246UL,246UL}, // p_819->g_563
        4294967292UL, // p_819->g_581
        &p_819->g_392, // p_819->g_610
        (-4L), // p_819->g_642
        {{5L},{5L},{5L},{5L},{5L},{5L}}, // p_819->g_665
        0x49L, // p_819->g_675
        {{1L,1L,1L,1L,1L,1L,1L,1L,1L}}, // p_819->g_704
        &p_819->g_704[0][8], // p_819->g_703
        &p_819->g_703, // p_819->g_702
        &p_819->g_702, // p_819->g_701
        &p_819->g_701, // p_819->g_700
        {-7L}, // p_819->g_707
        {{{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]}},{{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]}},{{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]},{&p_819->g_503[1],&p_819->g_501,&p_819->g_503[2],&p_819->g_501,&p_819->g_503[1],&p_819->g_503[2],&p_819->g_503[6],&p_819->g_503[2],&p_819->g_503[2]}}}, // p_819->g_724
        1UL, // p_819->g_732
        65535UL, // p_819->g_746
        &p_819->g_103, // p_819->g_755
        {{65533UL,65533UL,0x6B20L,1UL,65534UL,1UL,0x6B20L},{65533UL,65533UL,0x6B20L,1UL,65534UL,1UL,0x6B20L},{65533UL,65533UL,0x6B20L,1UL,65534UL,1UL,0x6B20L},{65533UL,65533UL,0x6B20L,1UL,65534UL,1UL,0x6B20L}}, // p_819->g_770
        {0UL}, // p_819->g_774
        4294967295UL, // p_819->g_803
        {{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)},{(-1L),(-1L),0x1ECD803FL,(-7L)}}, // p_819->g_808
        0x73L, // p_819->g_809
        247UL, // p_819->g_810
    };
    c_820 = c_821;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_819);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_819->g_2, "p_819->g_2", print_hash_value);
    transparent_crc(p_819->g_35, "p_819->g_35", print_hash_value);
    transparent_crc(p_819->g_37, "p_819->g_37", print_hash_value);
    transparent_crc(p_819->g_61, "p_819->g_61", print_hash_value);
    transparent_crc(p_819->g_71, "p_819->g_71", print_hash_value);
    transparent_crc(p_819->g_89.f0, "p_819->g_89.f0", print_hash_value);
    transparent_crc(p_819->g_92, "p_819->g_92", print_hash_value);
    transparent_crc(p_819->g_94, "p_819->g_94", print_hash_value);
    transparent_crc(p_819->g_97, "p_819->g_97", print_hash_value);
    transparent_crc(p_819->g_121, "p_819->g_121", print_hash_value);
    transparent_crc(p_819->g_130, "p_819->g_130", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_819->g_163[i][j], "p_819->g_163[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_819->g_166, "p_819->g_166", print_hash_value);
    transparent_crc(p_819->g_181, "p_819->g_181", print_hash_value);
    transparent_crc(p_819->g_185, "p_819->g_185", print_hash_value);
    transparent_crc(p_819->g_228, "p_819->g_228", print_hash_value);
    transparent_crc(p_819->g_230, "p_819->g_230", print_hash_value);
    transparent_crc(p_819->g_231, "p_819->g_231", print_hash_value);
    transparent_crc(p_819->g_284, "p_819->g_284", print_hash_value);
    transparent_crc(p_819->g_392, "p_819->g_392", print_hash_value);
    transparent_crc(p_819->g_398, "p_819->g_398", print_hash_value);
    transparent_crc(p_819->g_407.f0, "p_819->g_407.f0", print_hash_value);
    transparent_crc(p_819->g_463, "p_819->g_463", print_hash_value);
    transparent_crc(p_819->g_487.f0, "p_819->g_487.f0", print_hash_value);
    transparent_crc(p_819->g_501, "p_819->g_501", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_819->g_503[i], "p_819->g_503[i]", print_hash_value);

    }
    transparent_crc(p_819->g_504.f0, "p_819->g_504.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_819->g_563[i], "p_819->g_563[i]", print_hash_value);

    }
    transparent_crc(p_819->g_581, "p_819->g_581", print_hash_value);
    transparent_crc(p_819->g_642, "p_819->g_642", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_819->g_665[i].f0, "p_819->g_665[i].f0", print_hash_value);

    }
    transparent_crc(p_819->g_675, "p_819->g_675", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_819->g_704[i][j], "p_819->g_704[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_819->g_707.f0, "p_819->g_707.f0", print_hash_value);
    transparent_crc(p_819->g_732, "p_819->g_732", print_hash_value);
    transparent_crc(p_819->g_746, "p_819->g_746", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_819->g_770[i][j], "p_819->g_770[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_819->g_774.f0, "p_819->g_774.f0", print_hash_value);
    transparent_crc(p_819->g_803, "p_819->g_803", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_819->g_808[i][j], "p_819->g_808[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_819->g_809, "p_819->g_809", print_hash_value);
    transparent_crc(p_819->g_810, "p_819->g_810", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
