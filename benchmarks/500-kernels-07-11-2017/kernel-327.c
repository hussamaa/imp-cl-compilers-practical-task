// -g 72,26,1 -l 2,26,1
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


// Seed: 3775899930

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
};

union U1 {
   uint32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   volatile int64_t  f4;
};

union U2 {
   int8_t  f0;
   uint8_t  f1;
   uint64_t  f2;
   int8_t * f3;
};

union U3 {
   int8_t * f0;
   volatile int32_t  f1;
   int8_t  f2;
};

struct S4 {
    volatile int32_t g_2;
    int8_t g_6;
    uint32_t g_10[5][8][6];
    union U3 g_19[4];
    union U3 ** volatile g_20;
    union U3 *g_22;
    union U3 ** volatile g_21[6][2];
    union U3 ** volatile g_23;
    union U2 g_61;
    union U2 *g_60[8][5][6];
    int32_t g_66;
    int32_t *g_65;
    int16_t g_76;
    int16_t g_81[10];
    uint32_t g_82;
    int32_t g_84[2];
    int32_t g_86;
    uint32_t g_96[8];
    uint16_t g_102;
    volatile int32_t g_123;
    volatile int32_t * volatile g_122;
    uint16_t *g_127;
    uint16_t *g_128;
    union U0 *g_143;
    union U0 g_147[8][4][8];
    int32_t * volatile g_149;
    uint64_t g_153[3];
    int64_t g_167;
    volatile union U1 g_172;
    volatile union U1 * volatile g_171[5];
    volatile union U1 * volatile * volatile g_173;
    volatile uint16_t g_186;
    int16_t g_194;
    union U3 g_271;
    union U3 g_272;
    union U3 g_273;
    union U3 g_274;
    union U3 g_275;
    union U3 g_276[1][8][5];
    union U3 g_277;
    union U3 g_278;
    union U3 g_279;
    union U3 g_280;
    union U3 g_281;
    union U3 g_282;
    union U3 g_283;
    union U3 g_284;
    union U3 g_285[8][4];
    union U3 g_286[7];
    union U3 g_287;
    union U3 g_288[5];
    union U3 g_289;
    union U3 g_290;
    union U3 g_291;
    union U3 g_292[6];
    union U3 g_293;
    union U3 g_294;
    union U3 g_295;
    union U3 g_296;
    union U3 g_297;
    union U3 g_298;
    union U3 g_299[2];
    union U3 g_300;
    union U3 g_301;
    union U3 g_302;
    union U3 g_303[9][4];
    union U3 g_304;
    union U3 g_305[5];
    union U3 g_306[4];
    union U3 g_307;
    union U3 g_308;
    union U3 g_309[3][6];
    union U3 g_310;
    union U3 g_311;
    union U3 g_312;
    union U3 g_313[10];
    union U3 g_314;
    union U3 g_315;
    union U3 g_316;
    union U1 g_321;
    union U1 g_324;
    uint8_t g_349;
    int64_t g_356;
    union U2 ** volatile g_360;
    int32_t * volatile g_363;
    int8_t *g_384;
    int8_t **g_383[8][1];
    uint64_t g_455;
    int32_t ** volatile g_468;
    uint32_t g_478[3];
    volatile union U3 g_490;
    volatile union U3 g_498;
    volatile uint32_t g_506;
    uint16_t **g_511;
    uint8_t g_579;
    int32_t **g_616;
    int32_t ** volatile g_634;
    union U3 g_665;
    union U3 *g_664;
    union U3 **g_663;
    int16_t g_667;
    uint16_t g_692;
    uint16_t g_694;
    union U1 *g_708;
    union U1 ** volatile g_707;
    union U0 **g_724;
    union U0 ***g_723;
    volatile union U3 g_750;
    int16_t *g_913;
    int32_t g_977;
    volatile int64_t g_987;
    volatile int16_t g_997;
    uint32_t g_1007[6];
    volatile union U1 g_1043;
    union U0 *g_1056[7];
    union U3 g_1138[4];
    int32_t *g_1149;
    int32_t ** volatile g_1148;
    volatile union U1 g_1182;
    union U2 ** volatile g_1308;
    union U2 ** volatile g_1321[3];
    union U2 ** volatile g_1322;
    volatile union U3 g_1396;
    volatile union U3 g_1401[4];
    int64_t *g_1408;
    uint32_t g_1496;
    union U3 g_1504;
    union U0 ****g_1506[8][4];
    uint16_t g_1533[5];
    int64_t g_1551;
    volatile uint32_t g_1562;
    volatile uint32_t *g_1561;
    volatile uint32_t ** volatile g_1560;
    volatile union U1 g_1568;
    int64_t g_1625;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S4 * p_1643);
int16_t  func_13(int8_t * p_14, int8_t * p_15, uint16_t  p_16, struct S4 * p_1643);
int16_t  func_24(int8_t ** p_25, int8_t ** p_26, int64_t  p_27, int16_t  p_28, int64_t  p_29, struct S4 * p_1643);
union U3  func_33(int16_t * p_34, int16_t * p_35, struct S4 * p_1643);
int16_t * func_36(union U0  p_37, struct S4 * p_1643);
union U0  func_38(union U3 * p_39, union U3 ** p_40, int16_t * p_41, uint64_t  p_42, struct S4 * p_1643);
union U3 * func_43(uint8_t  p_44, union U2  p_45, union U0  p_46, struct S4 * p_1643);
union U2  func_47(uint8_t  p_48, int16_t * p_49, struct S4 * p_1643);
int16_t * func_50(int8_t  p_51, uint64_t  p_52, struct S4 * p_1643);
int32_t * func_56(int64_t  p_57, struct S4 * p_1643);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1643->g_2 p_1643->g_10 p_1643->g_86 p_1643->g_127 p_1643->g_102 p_1643->g_634 p_1643->g_65 p_1643->g_66 p_1643->g_324.f0 p_1643->g_6 p_1643->g_60 p_1643->g_616 p_1643->g_167 p_1643->g_122 p_1643->g_123 p_1643->g_1148 p_1643->g_1149 p_1643->g_84 p_1643->g_913 p_1643->g_81 p_1643->g_1496 p_1643->g_1504 p_1643->g_356
 * writes: p_1643->g_10 p_1643->g_102 p_1643->g_66 p_1643->g_663 p_1643->g_60 p_1643->g_22 p_1643->g_65 p_1643->g_167 p_1643->g_194 p_1643->g_123 p_1643->g_84 p_1643->g_1506 p_1643->g_324.f0 p_1643->g_356
 */
int32_t  func_1(struct S4 * p_1643)
{ /* block id: 4 */
    int8_t *l_5[10] = {&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6,&p_1643->g_6};
    int8_t **l_7 = &l_5[7];
    int16_t *l_8 = (void*)0;
    int16_t *l_9 = (void*)0;
    int32_t l_1466 = 0x3DC3A85AL;
    int32_t l_1467 = 0x608BFAADL;
    uint32_t l_1513[9];
    union U0 l_1517 = {-10L};
    int32_t l_1552 = 0x77018D79L;
    int16_t l_1575 = 0x1BEAL;
    union U2 **l_1586 = &p_1643->g_60[5][4][4];
    union U2 ***l_1585 = &l_1586;
    union U2 ***l_1587 = &l_1586;
    union U2 l_1589 = {1L};
    uint64_t l_1614 = 1UL;
    uint16_t l_1626 = 0xCD25L;
    uint32_t l_1635 = 1UL;
    int8_t l_1642 = 0x1AL;
    int i;
    for (i = 0; i < 9; i++)
        l_1513[i] = 4294967292UL;
    if ((p_1643->g_2 , ((safe_rshift_func_int16_t_s_s((p_1643->g_10[3][4][3] &= (((*l_7) = l_5[1]) != &p_1643->g_6)), 10)) | (safe_lshift_func_int16_t_s_u(func_13(&p_1643->g_6, &p_1643->g_6, p_1643->g_2, p_1643), (((l_1467 |= (l_1466 <= ((*p_1643->g_127) |= l_1466))) >= l_1466) | 0x34L))))))
    { /* block id: 769 */
        return l_1467;
    }
    else
    { /* block id: 771 */
        int64_t **l_1472 = &p_1643->g_1408;
        int64_t **l_1474[3];
        int64_t ***l_1473 = &l_1474[2];
        union U3 ***l_1475 = &p_1643->g_663;
        int32_t ***l_1479 = &p_1643->g_616;
        int32_t ****l_1478 = &l_1479;
        int32_t l_1480[7][9][4] = {{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}},{{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L},{(-9L),(-8L),0x21394D54L,0x331AA686L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1474[i] = &p_1643->g_1408;
        (**p_1643->g_634) &= (-8L);
        (*p_1643->g_616) = func_56((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_1472 != ((*l_1473) = &p_1643->g_1408)) >= (((*l_1475) = &p_1643->g_664) == (void*)0)), (((safe_div_func_uint64_t_u_u((((*l_1478) = &p_1643->g_616) != &p_1643->g_1148), p_1643->g_324.f0)) != 0x4E84B60881F87661L) < (-1L)))), l_1480[0][0][3])), p_1643);
    }
    for (p_1643->g_167 = 2; (p_1643->g_167 >= 0); p_1643->g_167 -= 1)
    { /* block id: 780 */
        int16_t l_1484[10][2] = {{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L},{0x09C9L,0x1CB1L}};
        int32_t l_1485 = 0L;
        union U0 ****l_1507 = &p_1643->g_723;
        int32_t l_1510 = 0L;
        int32_t l_1511 = 0x7D27910EL;
        int32_t l_1512 = 0x29C4D0F1L;
        int8_t l_1524 = 0x2DL;
        uint32_t l_1534 = 0xCE672F3EL;
        int64_t l_1535[6] = {(-1L),0x3FEDF2CD22480F9BL,(-1L),(-1L),0x3FEDF2CD22480F9BL,(-1L)};
        int32_t l_1553 = 0L;
        int32_t l_1554 = 0L;
        int32_t l_1555 = 3L;
        int32_t l_1556[9][5][5] = {{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}},{{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L},{0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L,0x79ED8752L}}};
        uint32_t l_1557[9][9] = {{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L},{0x010A52E3L,0UL,3UL,4294967292UL,4UL,0UL,0x1B1F7E16L,3UL,0x8C4F8EC9L}};
        int32_t **l_1571 = &p_1643->g_65;
        union U2 l_1612 = {-8L};
        int i, j, k;
        for (p_1643->g_194 = 1; (p_1643->g_194 >= 0); p_1643->g_194 -= 1)
        { /* block id: 783 */
            int16_t l_1483 = 7L;
            uint8_t *l_1492[3][3] = {{&p_1643->g_349,&p_1643->g_349,&p_1643->g_349},{&p_1643->g_349,&p_1643->g_349,&p_1643->g_349},{&p_1643->g_349,&p_1643->g_349,&p_1643->g_349}};
            int64_t l_1493 = 8L;
            uint64_t *l_1497 = (void*)0;
            uint64_t *l_1498 = &p_1643->g_324.f1;
            uint32_t l_1499[1][4] = {{0x6642D7F4L,0x6642D7F4L,0x6642D7F4L,0x6642D7F4L}};
            union U0 ****l_1505 = (void*)0;
            int i, j;
            (*p_1643->g_122) |= (safe_div_func_uint64_t_u_u(l_1483, (l_1485 &= l_1484[6][0])));
            (**p_1643->g_616) |= (**p_1643->g_1148);
            (**p_1643->g_616) = (((safe_mod_func_int32_t_s_s(0x7E799145L, ((*p_1643->g_1149) ^= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1467 , l_1483), (l_1493 |= 1UL))), (*p_1643->g_913)))))) <= (safe_mod_func_uint64_t_u_u(l_1485, (l_1499[0][0] |= p_1643->g_1496)))) > (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((p_1643->g_1506[1][1] = (p_1643->g_1504 , l_1505)) != l_1507), (**p_1643->g_616))), 0xEF75L)));
            for (p_1643->g_324.f0 = 0; (p_1643->g_324.f0 <= 0); p_1643->g_324.f0 += 1)
            { /* block id: 794 */
                uint32_t l_1508[3][8][9] = {{{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL}},{{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL}},{{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL},{0x949F2892L,1UL,0xC8014E09L,0xE112AAC3L,4294967287UL,4294967287UL,0xE112AAC3L,0xC8014E09L,1UL}}};
                int i, j, k;
                return l_1508[2][4][7];
            }
        }
        for (p_1643->g_356 = 0; (p_1643->g_356 <= 2); p_1643->g_356 += 1)
        { /* block id: 800 */
            int32_t *l_1509[8] = {&p_1643->g_84[0],(void*)0,&p_1643->g_84[0],&p_1643->g_84[0],(void*)0,&p_1643->g_84[0],&p_1643->g_84[0],(void*)0};
            union U3 *l_1516 = &p_1643->g_275;
            uint64_t *l_1525 = &p_1643->g_321.f1;
            int64_t **l_1538 = &p_1643->g_1408;
            int8_t l_1543[3][5] = {{9L,(-1L),9L,9L,(-1L)},{9L,(-1L),9L,9L,(-1L)},{9L,(-1L),9L,9L,(-1L)}};
            int16_t l_1544 = (-3L);
            int16_t l_1545 = 0L;
            int32_t **l_1569[8][7] = {{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]},{(void*)0,(void*)0,&l_1509[1],&p_1643->g_1149,&l_1509[1],&p_1643->g_1149,&l_1509[1]}};
            int i, j;
            (*p_1643->g_616) = (*p_1643->g_634);
            l_1513[8]--;
        }
    }
    return l_1642;
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_86
 * writes:
 */
int16_t  func_13(int8_t * p_14, int8_t * p_15, uint16_t  p_16, struct S4 * p_1643)
{ /* block id: 7 */
    int32_t l_17 = 0x252D86A0L;
    int8_t *l_31 = &p_1643->g_6;
    int8_t **l_30[6] = {&l_31,&l_31,&l_31,&l_31,&l_31,&l_31};
    int32_t l_53 = 1L;
    union U0 l_404 = {0x4600478BF7DDB4AFL};
    int16_t *l_1090[2][4] = {{&p_1643->g_667,&p_1643->g_667,&p_1643->g_667,&p_1643->g_667},{&p_1643->g_667,&p_1643->g_667,&p_1643->g_667,&p_1643->g_667}};
    int64_t l_1199 = 0x34A62F8AA27A6EA4L;
    int32_t l_1206 = 0x2FC4FE5AL;
    int32_t l_1296[3];
    int32_t l_1297 = 5L;
    int32_t l_1301[5] = {0x53527FFBL,0x53527FFBL,0x53527FFBL,0x53527FFBL,0x53527FFBL};
    int8_t l_1302 = 1L;
    uint32_t l_1303 = 0x831D7991L;
    uint16_t l_1373 = 0x5947L;
    int32_t *l_1377 = &p_1643->g_86;
    union U2 l_1391 = {4L};
    int32_t ***l_1397[6];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1296[i] = 0x7132F21AL;
    for (i = 0; i < 6; i++)
        l_1397[i] = &p_1643->g_616;
    return (*l_1377);
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_913 p_1643->g_81 p_1643->g_65 p_1643->g_356 p_1643->g_6 p_1643->g_987 p_1643->g_468 p_1643->g_616 p_1643->g_1148
 * writes: p_1643->g_66 p_1643->g_65 p_1643->g_1149
 */
int16_t  func_24(int8_t ** p_25, int8_t ** p_26, int64_t  p_27, int16_t  p_28, int64_t  p_29, struct S4 * p_1643)
{ /* block id: 548 */
    uint32_t l_1140 = 0xB9FE7956L;
    int32_t l_1147 = (-1L);
    l_1147 = (((*p_1643->g_913) | (p_27 || (((((*p_1643->g_65) = l_1140) | p_1643->g_356) || (p_28 <= l_1140)) , l_1140))) == (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x2837L, 7)), ((((l_1140 , p_27) & p_28) ^ (**p_25)) || p_1643->g_987))), 18446744073709551612UL)));
    (*p_1643->g_1148) = ((*p_1643->g_616) = (*p_1643->g_468));
    return (*p_1643->g_913);
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_324.f0 p_1643->g_913 p_1643->g_81 p_1643->g_65 p_1643->g_66 p_1643->g_102 p_1643->g_84 p_1643->g_76 p_1643->g_1007 p_1643->g_96 p_1643->g_634 p_1643->g_349 p_1643->g_692 p_1643->g_455 p_1643->g_299 p_1643->g_506 p_1643->g_667 p_1643->g_147.f0 p_1643->g_694 p_1643->g_86 p_1643->g_356 p_1643->g_1138
 * writes: p_1643->g_324.f0 p_1643->g_66 p_1643->g_102 p_1643->g_96 p_1643->g_692 p_1643->g_455 p_1643->g_81 p_1643->g_84 p_1643->g_356
 */
union U3  func_33(int16_t * p_34, int16_t * p_35, struct S4 * p_1643)
{ /* block id: 519 */
    int32_t *l_1096 = &p_1643->g_84[0];
    for (p_1643->g_324.f0 = 0; (p_1643->g_324.f0 == 36); p_1643->g_324.f0 = safe_add_func_uint64_t_u_u(p_1643->g_324.f0, 7))
    { /* block id: 522 */
        uint32_t l_1103[10][8] = {{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL},{0xEBF8951AL,1UL,6UL,1UL,0xEBF8951AL,4UL,1UL,4294967295UL}};
        int16_t *l_1104 = (void*)0;
        union U0 l_1105 = {0x26FC4D2052C286F1L};
        union U2 l_1106 = {0L};
        int32_t l_1135[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1135[i] = 0x07A206FFL;
        (*p_1643->g_65) &= (safe_lshift_func_int16_t_s_u((*p_1643->g_913), 15));
        for (p_1643->g_102 = 0; (p_1643->g_102 <= 1); p_1643->g_102 += 1)
        { /* block id: 526 */
            union U0 l_1095[7] = {{5L},{0x4DCEFA0B8C4DE49BL},{5L},{5L},{0x4DCEFA0B8C4DE49BL},{5L},{5L}};
            uint32_t *l_1107[3][4][2] = {{{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]}},{{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]}},{{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]},{(void*)0,&p_1643->g_96[7]}}};
            int i, j, k;
            (*p_1643->g_65) = (((l_1095[2] , p_1643->g_84[0]) ^ (p_1643->g_76 > (l_1096 != ((safe_lshift_func_int16_t_s_u(0x7ACFL, (safe_rshift_func_uint8_t_u_s(0x75L, (safe_add_func_int16_t_s_s(((l_1103[2][6] >= (p_1643->g_96[7] |= ((p_1643->g_1007[4] , (((l_1104 == p_35) , l_1105) , l_1106)) , 0UL))) ^ (*p_1643->g_913)), 0x5D9EL)))))) , (*p_1643->g_634))))) >= p_1643->g_349);
            for (p_1643->g_692 = 0; (p_1643->g_692 <= 3); p_1643->g_692 += 1)
            { /* block id: 531 */
                uint64_t *l_1110 = &p_1643->g_321.f1;
                uint64_t *l_1111 = &p_1643->g_455;
                int32_t l_1130 = 0x2EA63F8FL;
                int i;
                if (l_1105.f0)
                    break;
                (*p_1643->g_65) &= (l_1105.f0 || ((safe_mul_func_int8_t_s_s(0x0FL, (*l_1096))) == (((*l_1111)--) >= (safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((l_1135[0] |= ((~((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_1643->g_299[p_1643->g_102] , (safe_mod_func_int8_t_s_s(((l_1130 >= p_1643->g_506) , ((safe_rshift_func_int8_t_s_u(0x19L, 0)) && (((p_1643->g_667 & (safe_lshift_func_int8_t_s_s((*l_1096), 0))) ^ 0x49081F4CF666053BL) & p_1643->g_1007[5]))), p_1643->g_147[5][3][3].f0))), 255UL)), l_1095[2].f0)), l_1130)), p_1643->g_694)), l_1103[7][6])) != (-8L))) >= (*p_34))), l_1130)) ^ p_1643->g_86), l_1103[2][6])))));
            }
            (*l_1096) = (safe_sub_func_int8_t_s_s(1L, (((void*)0 != &p_1643->g_299[p_1643->g_102]) <= ((*p_1643->g_913) = (*l_1096)))));
            for (p_1643->g_356 = 0; (p_1643->g_356 <= 3); p_1643->g_356 += 1)
            { /* block id: 541 */
                if (l_1105.f0)
                    break;
            }
        }
    }
    return p_1643->g_1138[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_128 p_1643->g_102 p_1643->g_172.f0 p_1643->g_81 p_1643->g_616 p_1643->g_65 p_1643->g_66 p_1643->g_692 p_1643->g_86 p_1643->g_707
 * writes: p_1643->g_61.f2 p_1643->g_102 p_1643->g_692 p_1643->g_349 p_1643->g_143 p_1643->g_708 p_1643->g_66 p_1643->g_76
 */
int16_t * func_36(union U0  p_37, struct S4 * p_1643)
{ /* block id: 275 */
    union U3 *l_671 = &p_1643->g_290;
    int32_t l_678[8][5][6] = {{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}},{{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L},{1L,0x6265F0E6L,0x2FD9EF07L,1L,0x07B3F9CAL,1L}}};
    uint64_t *l_681 = &p_1643->g_61.f2;
    uint16_t l_690 = 6UL;
    uint16_t *l_691 = &p_1643->g_692;
    uint16_t *l_693[1];
    int32_t l_695 = (-9L);
    uint8_t *l_696 = &p_1643->g_349;
    int32_t l_697 = (-1L);
    int32_t l_698 = 0x584897FEL;
    int32_t l_699 = 1L;
    union U1 *l_705 = &p_1643->g_324;
    union U0 **l_709 = &p_1643->g_143;
    int16_t l_752 = 0x1A58L;
    int32_t l_764[8][5] = {{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L},{0x14063AC8L,1L,(-1L),0x268AFCD2L,0x4D7F2891L}};
    uint16_t ***l_767 = &p_1643->g_511;
    union U2 **l_837 = &p_1643->g_60[5][4][4];
    union U2 ***l_836[9][3][8] = {{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}},{{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837},{&l_837,&l_837,(void*)0,&l_837,&l_837,&l_837,(void*)0,&l_837}}};
    uint16_t l_847 = 0xF977L;
    uint32_t l_867 = 0x7DABF218L;
    int32_t l_890[8] = {0x2A6A319FL,1L,0x2A6A319FL,0x2A6A319FL,1L,0x2A6A319FL,0x2A6A319FL,1L};
    int16_t l_946[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
    uint16_t l_947 = 6UL;
    int8_t l_989 = 0x6CL;
    int32_t l_996 = 0x168E74BCL;
    int8_t ***l_1053 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_693[i] = &p_1643->g_694;
    l_699 &= (l_698 ^= ((((*l_696) = (5L <= (+(safe_mul_func_int8_t_s_s((-1L), (((l_671 != l_671) , ((l_695 |= (safe_div_func_uint16_t_u_u(((*l_691) ^= ((*p_1643->g_128) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((+l_678[6][3][5]), ((&p_1643->g_511 == (((safe_lshift_func_int8_t_s_s((&p_1643->g_511 != (((~((*l_681) = l_678[6][3][5])) , (safe_div_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0UL, 0x5EL)), (*p_1643->g_128))), l_678[6][3][5])) & 0xBBBDC6A1L) ^ p_1643->g_172.f0) != l_690), p_37.f0))) , (void*)0)), 1)) != p_1643->g_81[7]) , (void*)0)) || 0x0171B157L))), 0xC5L)) > (**p_1643->g_616)))), p_1643->g_86))) || p_37.f0)) >= 3L)))))) & l_697) , p_37.f0));
    p_1643->g_143 = (void*)0;
    for (l_695 = 0; (l_695 == (-19)); l_695 = safe_sub_func_int32_t_s_s(l_695, 9))
    { /* block id: 286 */
        union U2 l_704 = {0L};
        union U1 **l_706 = (void*)0;
        (*p_1643->g_707) = (l_704 , l_705);
        (**p_1643->g_616) |= ((l_709 != (void*)0) , 0x07BC1E67L);
    }
    for (p_1643->g_76 = 0; (p_1643->g_76 <= (-18)); p_1643->g_76--)
    { /* block id: 292 */
        uint16_t l_712 = 0xA844L;
        union U0 ***l_726 = &p_1643->g_724;
        int32_t l_731 = (-7L);
        union U2 ***l_776 = (void*)0;
        int32_t l_781 = 1L;
        int32_t l_782 = (-1L);
        int32_t l_783 = (-3L);
        int32_t l_784[4][9][7] = {{{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L}},{{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L}},{{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L}},{{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L},{0x4F6C1217L,0L,0x4E0DC4CAL,8L,0x16866FADL,1L,0x2D4126B9L}}};
        uint32_t l_785 = 0xA224F88DL;
        int16_t *l_894 = &p_1643->g_194;
        uint64_t **l_930 = &l_681;
        union U1 **l_972 = &p_1643->g_708;
        int32_t l_988 = 5L;
        uint8_t l_990[10][4][2] = {{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}},{{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L},{0x16L,0x53L}}};
        uint8_t l_998[8][9][3] = {{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}},{{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L},{1UL,0x29L,0x35L}}};
        uint8_t l_1004 = 0xE9L;
        int i, j, k;
        (1 + 1);
    }
    return &p_1643->g_81[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0  func_38(union U3 * p_39, union U3 ** p_40, int16_t * p_41, uint64_t  p_42, struct S4 * p_1643)
{ /* block id: 273 */
    union U0 l_668 = {0L};
    return l_668;
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_6 p_1643->g_60 p_1643->g_65
 * writes: p_1643->g_349 p_1643->g_102 p_1643->g_60 p_1643->g_22
 */
union U3 * func_43(uint8_t  p_44, union U2  p_45, union U0  p_46, struct S4 * p_1643)
{ /* block id: 139 */
    int32_t *l_405 = &p_1643->g_84[0];
    int32_t *l_406[6] = {&p_1643->g_84[1],&p_1643->g_84[0],&p_1643->g_84[1],&p_1643->g_84[1],&p_1643->g_84[0],&p_1643->g_84[1]};
    int32_t l_407[3][9] = {{0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L},{0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L},{0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L,0x6A17B429L}};
    uint32_t l_408[2];
    union U0 **l_415[8];
    int16_t *l_458 = (void*)0;
    int32_t l_567 = 0x72B2A599L;
    union U2 **l_600 = (void*)0;
    union U3 *l_613 = &p_1643->g_289;
    int i, j;
    for (i = 0; i < 2; i++)
        l_408[i] = 8UL;
    for (i = 0; i < 8; i++)
        l_415[i] = (void*)0;
    ++l_408[0];
    for (p_1643->g_349 = 0; (p_1643->g_349 < 16); p_1643->g_349 = safe_add_func_uint32_t_u_u(p_1643->g_349, 7))
    { /* block id: 143 */
        union U2 **l_435 = &p_1643->g_60[0][4][5];
        int32_t l_456[10][7] = {{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L},{0x06CCB5C9L,0x764AFBDAL,0x0F7B3189L,0x47930D90L,0L,0x06CCB5C9L,0x47930D90L}};
        union U3 *l_491[3];
        int32_t l_492[10][8] = {{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)},{1L,0x5A56B4F1L,0x628F87EFL,0x7D7FE1C9L,(-1L),(-7L),(-7L),(-1L)}};
        uint64_t *l_496 = &p_1643->g_153[1];
        uint16_t **l_502[4][9] = {{&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_127,&p_1643->g_127},{&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_127,&p_1643->g_127},{&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_127,&p_1643->g_127},{&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_128,&p_1643->g_127,&p_1643->g_127}};
        int32_t *l_541 = (void*)0;
        uint8_t *l_612 = &p_1643->g_349;
        uint64_t *l_617 = &p_1643->g_321.f1;
        int16_t l_631 = 6L;
        union U0 **l_637 = (void*)0;
        uint32_t l_659 = 4294967295UL;
        int32_t **l_662[8][10][3] = {{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}},{{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0},{&l_541,&l_541,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_491[i] = &p_1643->g_291;
        for (p_1643->g_102 = 0; (p_1643->g_102 < 30); ++p_1643->g_102)
        { /* block id: 146 */
            int8_t l_432 = 5L;
            union U0 l_444 = {-6L};
            uint8_t l_446 = 5UL;
            union U2 **l_464[3];
            int32_t l_466 = 0L;
            uint64_t *l_499 = &p_1643->g_153[2];
            union U3 *l_549 = &p_1643->g_305[4];
            int16_t l_565 = (-3L);
            int32_t l_566 = 0x3A3F6216L;
            uint32_t l_568 = 0UL;
            int32_t **l_572 = &l_405;
            union U2 **l_607 = &p_1643->g_60[5][4][4];
            int i;
            for (i = 0; i < 3; i++)
                l_464[i] = &p_1643->g_60[5][4][4];
            (1 + 1);
        }
    }
    l_406[4] = func_56(p_44, p_1643);
    return l_613;
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_122 p_1643->g_96 p_1643->g_84 p_1643->g_102 p_1643->g_76 p_1643->g_81 p_1643->g_143 p_1643->g_65 p_1643->g_149 p_1643->g_86 p_1643->g_153 p_1643->g_82 p_1643->g_167 p_1643->g_128 p_1643->g_171 p_1643->g_173 p_1643->g_186 p_1643->g_123 p_1643->g_66 p_1643->g_6 p_1643->g_60 p_1643->g_363 p_1643->g_2 p_1643->g_324.f0 p_1643->g_194
 * writes: p_1643->g_127 p_1643->g_128 p_1643->g_76 p_1643->g_81 p_1643->g_143 p_1643->g_66 p_1643->g_86 p_1643->g_102 p_1643->g_171 p_1643->g_186 p_1643->g_96 p_1643->g_61.f1 p_1643->g_194 p_1643->g_324.f1 p_1643->g_61 p_1643->g_324.f0 p_1643->g_356 p_1643->g_60 p_1643->g_22 p_1643->g_65 p_1643->g_84 p_1643->g_383 p_1643->g_167
 */
union U2  func_47(uint8_t  p_48, int16_t * p_49, struct S4 * p_1643)
{ /* block id: 52 */
    uint16_t *l_124 = (void*)0;
    uint16_t **l_125 = &l_124;
    uint16_t **l_126 = (void*)0;
    int32_t l_137 = 0x36B4B3FCL;
    int64_t l_138 = 0x375103C868A9B376L;
    uint32_t l_140 = 0x85FFE76DL;
    int32_t l_232 = (-5L);
    int32_t l_233[3][7][4] = {{{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L}},{{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L}},{{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L},{8L,0L,0L,0x702CFCB3L}}};
    union U2 l_330 = {0x6DL};
    int32_t l_333 = 0x79E98925L;
    union U2 l_352[5][1][1] = {{{{0x3FL}}},{{{0x3FL}}},{{{0x3FL}}},{{{0x3FL}}},{{{0x3FL}}}};
    int8_t l_358 = 0x7CL;
    union U2 *l_361[3][5] = {{&l_330,(void*)0,&l_330,(void*)0,&l_330},{&l_330,(void*)0,&l_330,(void*)0,&l_330},{&l_330,(void*)0,&l_330,(void*)0,&l_330}};
    volatile int32_t *l_401 = &p_1643->g_123;
    union U2 l_402 = {-1L};
    int i, j, k;
    if (((((&p_1643->g_84[1] != p_1643->g_122) ^ (((p_1643->g_96[6] , (p_1643->g_127 = ((((-1L) || p_48) ^ p_1643->g_84[0]) , ((*l_125) = l_124)))) != (p_1643->g_128 = &p_1643->g_102)) , ((safe_div_func_int16_t_s_s(p_1643->g_102, 0xEA53L)) ^ p_48))) , &p_1643->g_22) == (void*)0))
    { /* block id: 56 */
        uint16_t *l_139 = &p_1643->g_102;
        uint32_t l_142[3];
        int32_t l_193[5][1][3] = {{{0x0E6E0298L,0x0E6E0298L,0x0E6E0298L}},{{0x0E6E0298L,0x0E6E0298L,0x0E6E0298L}},{{0x0E6E0298L,0x0E6E0298L,0x0E6E0298L}},{{0x0E6E0298L,0x0E6E0298L,0x0E6E0298L}},{{0x0E6E0298L,0x0E6E0298L,0x0E6E0298L}}};
        int16_t l_331[6];
        int8_t l_351 = 0x24L;
        union U0 l_353 = {-1L};
        union U2 *l_359 = &p_1643->g_61;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_142[i] = 1UL;
        for (i = 0; i < 6; i++)
            l_331[i] = (-7L);
        for (p_1643->g_76 = 0; (p_1643->g_76 < (-13)); p_1643->g_76 = safe_sub_func_int8_t_s_s(p_1643->g_76, 3))
        { /* block id: 59 */
            int64_t l_165 = 0x6407CE13FBB33ED7L;
            uint32_t l_166 = 0xC0D8A3B9L;
            int32_t l_176[9][10][2] = {{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}},{{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)},{0x4DD7204AL,(-10L)}}};
            int32_t l_201 = 0x55612024L;
            union U2 *l_213[6][4][1] = {{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}},{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}},{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}},{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}},{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}},{{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61},{&p_1643->g_61}}};
            int32_t l_242 = 0x14546AA4L;
            uint32_t l_243 = 0xC5E7CFC8L;
            union U1 *l_323 = &p_1643->g_324;
            uint16_t **l_354 = &p_1643->g_128;
            int i, j, k;
            if (((void*)0 != &p_1643->g_6))
            { /* block id: 60 */
                union U2 *l_141 = &p_1643->g_61;
                union U0 **l_144 = &p_1643->g_143;
                union U0 *l_146 = &p_1643->g_147[5][3][3];
                union U0 **l_145 = &l_146;
                int32_t l_148 = 0x283455AAL;
                uint64_t *l_152[7] = {&p_1643->g_153[2],&p_1643->g_153[2],&p_1643->g_153[2],&p_1643->g_153[2],&p_1643->g_153[2],&p_1643->g_153[2],&p_1643->g_153[2]};
                uint8_t l_154 = 0UL;
                int32_t l_170 = 0x21E28AA9L;
                int16_t l_235 = 0x4C52L;
                int32_t l_236 = 0x132434D8L;
                int32_t l_237 = (-9L);
                int32_t l_238[2];
                union U3 *l_270[3][6][9] = {{{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296}},{{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296}},{{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296},{&p_1643->g_278,&p_1643->g_280,&p_1643->g_278,(void*)0,&p_1643->g_311,(void*)0,&p_1643->g_286[5],&p_1643->g_271,&p_1643->g_296}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_238[i] = 0L;
                (*l_145) = ((*l_144) = ((safe_mod_func_int32_t_s_s((l_137 != (l_138 >= ((p_1643->g_127 = (*l_125)) != l_139))), (l_142[0] = ((~(l_140 = ((*p_49) &= 0L))) ^ (l_141 != &p_1643->g_61))))) , p_1643->g_143));
                (*p_1643->g_149) |= ((*p_1643->g_65) = (l_148 , p_48));
                if ((safe_rshift_func_uint8_t_u_s(((l_154 = p_1643->g_81[3]) , ((((*p_1643->g_128) = (((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_148, 2)), ((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_140, (safe_sub_func_uint16_t_u_u((p_1643->g_153[2] || (l_165 < l_140)), (((l_148 >= l_166) , p_1643->g_84[0]) <= p_1643->g_82))))) , p_1643->g_167), l_142[0])) == 0xD22268EDL))) ^ (-3L)) && l_166)) >= 0xCEADL) , p_48)), l_148)))
                { /* block id: 71 */
                    uint32_t *l_195[5];
                    union U2 l_200 = {0x2CL};
                    union U2 *l_214 = (void*)0;
                    int32_t l_229 = 0L;
                    int32_t l_230 = 0L;
                    int32_t l_231 = 0x5E43C07BL;
                    int32_t l_234 = (-3L);
                    int32_t l_239 = (-5L);
                    int32_t l_240 = 0x690EF1B2L;
                    int32_t l_241[10][3] = {{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L},{(-4L),(-4L),0L}};
                    union U1 *l_320 = &p_1643->g_321;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_195[i] = &p_1643->g_96[7];
                    l_170 |= (safe_mul_func_int8_t_s_s(l_148, 254UL));
                    (*p_1643->g_173) = p_1643->g_171[2];
                    for (l_138 = 0; (l_138 < (-14)); l_138--)
                    { /* block id: 76 */
                        int32_t *l_177 = &p_1643->g_84[0];
                        int32_t *l_178 = &l_148;
                        int32_t *l_179 = (void*)0;
                        int32_t *l_180 = (void*)0;
                        int32_t *l_181 = (void*)0;
                        int32_t *l_182 = &l_170;
                        int32_t *l_183 = &l_137;
                        int32_t *l_184 = &p_1643->g_84[0];
                        int32_t *l_185[7][8][1] = {{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}},{{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137},{&l_137}}};
                        int i, j, k;
                        p_1643->g_186++;
                    }
                    if ((0x0AF2L & (safe_mul_func_int8_t_s_s((p_48 > ((safe_lshift_func_uint16_t_u_u((l_193[3][0][1] ^= (l_170 = ((*p_1643->g_128) = 0xA0C1L))), ((l_176[4][9][0] = (--p_1643->g_96[7])) != ((*p_1643->g_65) ^= (*p_1643->g_122))))) <= (safe_sub_func_int16_t_s_s(0x5327L, (((l_142[2] <= l_165) < ((*p_49) > (*p_49))) != 1UL))))), l_140))))
                    { /* block id: 85 */
                        (*p_1643->g_65) |= (l_137 = (l_201 = (l_200 , 0x743292EDL)));
                        if (l_200.f0)
                            break;
                    }
                    else
                    { /* block id: 90 */
                        int32_t *l_217 = &l_176[4][9][0];
                        int32_t *l_218 = &l_193[3][0][1];
                        int32_t *l_219 = &l_137;
                        int32_t *l_220 = &l_137;
                        int32_t *l_221 = &l_170;
                        int32_t *l_222 = &l_193[3][0][1];
                        int32_t *l_223 = (void*)0;
                        int32_t l_224 = 0x1B8EAB52L;
                        int32_t *l_225 = (void*)0;
                        int32_t *l_226 = (void*)0;
                        int32_t *l_227 = (void*)0;
                        int32_t *l_228[4][7][8] = {{{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66}},{{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66}},{{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66}},{{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66},{&l_176[5][2][0],&p_1643->g_66,&p_1643->g_84[0],&l_170,&p_1643->g_66,&l_170,&p_1643->g_84[0],&p_1643->g_66}}};
                        uint8_t *l_317 = &l_154;
                        union U1 **l_322 = &l_320;
                        union U1 **l_325 = &l_323;
                        uint8_t *l_332 = &p_1643->g_61.f1;
                        uint8_t *l_334 = &l_200.f1;
                        int16_t *l_335 = &l_331[4];
                        int16_t *l_336 = &p_1643->g_194;
                        uint64_t *l_337 = &p_1643->g_324.f1;
                        int32_t **l_338 = &l_227;
                        int i, j, k;
                        (*p_1643->g_65) &= (p_48 | ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_200.f0, (safe_sub_func_int8_t_s_s((((l_214 = l_213[0][1][0]) != &p_1643->g_61) || (safe_lshift_func_uint8_t_u_s(249UL, (l_140 , ((p_1643->g_82 != ((p_48 & ((-10L) > p_1643->g_153[2])) < 7L)) > 1UL))))), p_48)))), 7)), l_138)) <= 0UL))), 1)) && 0xC0A0C228B3F62F70L));
                        l_243--;
                        (*l_338) = (((((((*l_337) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((*l_336) = (safe_sub_func_int16_t_s_s(((*l_335) = ((*p_49) = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_176[4][7][1] = (safe_lshift_func_int8_t_s_s((l_193[3][0][1] = (safe_mod_func_int16_t_s_s((p_1643->g_123 != ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((((*l_334) = (safe_mul_func_int16_t_s_s(l_232, (safe_sub_func_uint16_t_u_u(((((*l_332) = (!(((l_238[1] | (((((void*)0 == l_270[1][1][6]) == (((*l_317)--) > (((*l_322) = l_320) == ((*l_325) = l_323)))) <= ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((*p_1643->g_128), (l_330 , 0UL))) > l_238[1]), (*p_1643->g_65))) | 0x168CL)) == l_193[3][0][1])) , 7UL) < l_331[1]))) ^ l_333) > p_1643->g_96[1]), 1L))))) <= l_138), (*p_1643->g_65))), 7)) >= 0xBC22L)), (*p_49)))), 3))), l_142[0])), l_233[2][1][1])) & p_48))), (*p_1643->g_128)))), l_236)), p_1643->g_86)), p_48))) < l_142[0]) || 4L) != p_1643->g_6) < 0xFFD4L) , &l_237);
                    }
                }
                else
                { /* block id: 107 */
                    union U0 *l_345 = &p_1643->g_147[5][3][3];
                    union U2 l_346 = {0L};
                    uint8_t *l_347 = &l_154;
                    uint8_t *l_348[7][1][2] = {{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}},{{(void*)0,&p_1643->g_349}}};
                    uint32_t *l_350 = &p_1643->g_324.f0;
                    int64_t *l_355 = &p_1643->g_356;
                    int32_t **l_357 = &p_1643->g_65;
                    int i, j, k;
                    l_236 = (((0x1ADCBBDC8697BA74L >= (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_345 == ((*l_144) = &p_1643->g_147[5][3][3])), p_48)) & (((l_346 = ((*l_141) = l_330)) , p_1643->g_96[7]) | (l_237 &= ((*l_347) = 0x9EL)))) == ((*l_350) = p_48)), 10)) > (&l_124 == (void*)0)), 7))) , l_346.f0) , l_351);
                    (*l_357) = func_56((l_352[3][0][0] , (l_353 , ((*l_355) = (l_354 == &l_124)))), p_1643);
                    if (l_358)
                        break;
                }
                l_361[0][1] = l_359;
            }
            else
            { /* block id: 120 */
                union U1 *l_362 = &p_1643->g_324;
                int32_t l_368 = (-10L);
                int8_t l_375 = 0x15L;
                int8_t *l_382 = &l_375;
                int8_t **l_381 = &l_382;
                int8_t ***l_380[10] = {&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381};
                int i;
                (*p_1643->g_363) |= ((*p_1643->g_65) = ((void*)0 != l_362));
                (*p_1643->g_65) = (*p_1643->g_149);
                (*p_1643->g_65) = (((*p_49) = l_176[3][7][0]) , (safe_sub_func_int8_t_s_s(((void*)0 == l_354), ((safe_lshift_func_int8_t_s_u(l_368, 3)) & (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_375 == 2L), (4UL && (((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_330.f0, p_48)), (*p_1643->g_363))) ^ (-1L)) , (*p_1643->g_363))))), p_48)), p_48))))));
                p_1643->g_383[3][0] = (void*)0;
            }
            if (p_48)
                continue;
            if ((*p_1643->g_65))
                continue;
        }
    }
    else
    { /* block id: 131 */
        int32_t l_399 = 0x58470BAAL;
        int64_t *l_400 = &p_1643->g_167;
        l_233[0][0][2] = (safe_div_func_uint16_t_u_u((+((safe_mod_func_int8_t_s_s(((p_48 | (safe_mul_func_int8_t_s_s((p_1643->g_96[7] == ((*l_400) |= (((((*p_1643->g_65) = (safe_add_func_uint8_t_u_u(((*p_49) < (p_1643->g_84[0] , (safe_div_func_uint16_t_u_u(p_48, l_330.f0)))), (0xA0L <= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(p_1643->g_2, l_399)), p_1643->g_324.f0)))))) > 0x17136166L) | p_1643->g_81[1]) && 0xB16572E0L))), p_48))) == 6UL), 6L)) ^ (-1L))), p_1643->g_194));
    }
    l_401 = &p_1643->g_123;
    return l_402;
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_6 p_1643->g_60 p_1643->g_65 p_1643->g_61.f0 p_1643->g_76 p_1643->g_66 p_1643->g_82 p_1643->g_81 p_1643->g_102 p_1643->g_96 p_1643->g_86
 * writes: p_1643->g_60 p_1643->g_22 p_1643->g_65 p_1643->g_76 p_1643->g_66 p_1643->g_81 p_1643->g_82 p_1643->g_84 p_1643->g_86 p_1643->g_96 p_1643->g_102 p_1643->g_6
 */
int16_t * func_50(int8_t  p_51, uint64_t  p_52, struct S4 * p_1643)
{ /* block id: 14 */
    int32_t **l_79 = &p_1643->g_65;
    union U0 l_105[4][7][9] = {{{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}}},{{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}}},{{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}}},{{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}},{{0x32B0D1CDFBE84823L},{0L},{0x6F2BE0B92564D233L},{1L},{0L},{1L},{0x6F2BE0B92564D233L},{0L},{0x32B0D1CDFBE84823L}}}};
    uint32_t l_111 = 0x940FB084L;
    union U2 *l_115 = &p_1643->g_61;
    int32_t *l_121 = &p_1643->g_86;
    int i, j, k;
    for (p_51 = 0; (p_51 > 5); ++p_51)
    { /* block id: 17 */
        int32_t **l_67 = &p_1643->g_65;
        (*l_67) = func_56(p_51, p_1643);
    }
    for (p_52 = (-28); (p_52 != 18); p_52++)
    { /* block id: 33 */
        int32_t l_72 = 0x63FEC725L;
        int16_t *l_75 = &p_1643->g_76;
        int16_t *l_80 = &p_1643->g_81[0];
        int32_t *l_83 = &p_1643->g_84[0];
        int32_t *l_85[10][2][1] = {{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}},{{&p_1643->g_86},{&p_1643->g_86}}};
        uint32_t *l_95 = &p_1643->g_96[7];
        int64_t l_99[2][7][1] = {{{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L}},{{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L},{0x3C3742197F426174L}}};
        uint16_t *l_100 = (void*)0;
        uint16_t *l_101 = &p_1643->g_102;
        int8_t *l_106 = &p_1643->g_6;
        union U2 *l_112 = &p_1643->g_61;
        union U2 **l_113 = &l_112;
        union U2 **l_114[9][6] = {{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]},{&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[0][0][3],&p_1643->g_60[4][1][0]}};
        int i, j, k;
        p_1643->g_86 = ((*l_83) = ((p_51 <= (p_1643->g_82 &= (((safe_add_func_int16_t_s_s(((*l_80) = (p_1643->g_6 <= (l_72 , (((safe_rshift_func_uint8_t_u_u(((((*l_75) &= p_1643->g_61.f0) == (((p_51 != (l_79 == (void*)0)) || 255UL) || ((**l_79) = (**l_79)))) && l_72), 1)) ^ p_51) <= p_1643->g_61.f0)))), p_51)) && 255UL) , p_52))) && p_1643->g_82));
        (*l_79) = func_56((((safe_mod_func_uint64_t_u_u(((~p_1643->g_81[0]) == (p_51 && ((~((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_95) = p_52), (safe_rshift_func_int16_t_s_u(l_99[1][4][0], 0)))), ((*l_101)--))), ((((l_105[2][0][5] , ((*p_1643->g_65) = p_51)) < p_51) > (((*l_106) ^= 8L) <= (safe_div_func_uint64_t_u_u(((!(safe_lshift_func_int8_t_s_s(p_51, 3))) >= p_1643->g_76), (-3L))))) > l_111))) >= p_52)) != p_51))), 0x7B1210CA82D28F58L)) && (**l_79)) && 1UL), p_1643);
        l_115 = ((*l_113) = l_112);
        (*p_1643->g_65) = ((safe_rshift_func_uint16_t_u_s(0UL, ((void*)0 != &p_1643->g_81[0]))) | ((safe_unary_minus_func_uint8_t_u(p_1643->g_96[0])) ^ ((((safe_sub_func_uint32_t_u_u(((l_115 != &p_1643->g_61) | 5L), ((((((*p_1643->g_65) < (**l_79)) , l_115) == (void*)0) , p_52) , (**l_79)))) > p_51) , (**l_79)) != (**l_79))));
    }
    (*l_121) &= ((*p_1643->g_65) = (**l_79));
    return &p_1643->g_81[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1643->g_6 p_1643->g_60 p_1643->g_65
 * writes: p_1643->g_60 p_1643->g_22
 */
int32_t * func_56(int64_t  p_57, struct S4 * p_1643)
{ /* block id: 18 */
    for (p_57 = 17; (p_57 < (-25)); p_57 = safe_sub_func_uint64_t_u_u(p_57, 4))
    { /* block id: 21 */
        union U2 *l_62 = &p_1643->g_61;
        union U2 **l_63 = &p_1643->g_60[6][4][4];
        union U3 **l_64 = &p_1643->g_22;
        if (p_1643->g_6)
            break;
        if (p_1643->g_6)
            continue;
        (*l_63) = (l_62 = p_1643->g_60[5][4][4]);
        (*l_64) = (void*)0;
    }
    return p_1643->g_65;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_1644;
    struct S4* p_1643 = &c_1644;
    struct S4 c_1645 = {
        0x4F16EFA4L, // p_1643->g_2
        0x7DL, // p_1643->g_6
        {{{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL}},{{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL}},{{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL}},{{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL}},{{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL},{0UL,0x4688D239L,0x061A6520L,5UL,4294967287UL,8UL}}}, // p_1643->g_10
        {{0},{0},{0},{0}}, // p_1643->g_19
        (void*)0, // p_1643->g_20
        &p_1643->g_19[0], // p_1643->g_22
        {{&p_1643->g_22,&p_1643->g_22},{&p_1643->g_22,&p_1643->g_22},{&p_1643->g_22,&p_1643->g_22},{&p_1643->g_22,&p_1643->g_22},{&p_1643->g_22,&p_1643->g_22},{&p_1643->g_22,&p_1643->g_22}}, // p_1643->g_21
        &p_1643->g_22, // p_1643->g_23
        {0L}, // p_1643->g_61
        {{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}},{{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61},{&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61,&p_1643->g_61}}}, // p_1643->g_60
        0L, // p_1643->g_66
        &p_1643->g_66, // p_1643->g_65
        1L, // p_1643->g_76
        {0x2E4BL,(-9L),(-1L),(-9L),0x2E4BL,0x2E4BL,(-9L),(-1L),(-9L),0x2E4BL}, // p_1643->g_81
        0UL, // p_1643->g_82
        {0x32ED884AL,0x32ED884AL}, // p_1643->g_84
        0x22A84738L, // p_1643->g_86
        {0xDB194A10L,0xDB194A10L,0xDB194A10L,0xDB194A10L,0xDB194A10L,0xDB194A10L,0xDB194A10L,0xDB194A10L}, // p_1643->g_96
        0x8654L, // p_1643->g_102
        (-3L), // p_1643->g_123
        &p_1643->g_123, // p_1643->g_122
        &p_1643->g_102, // p_1643->g_127
        &p_1643->g_102, // p_1643->g_128
        (void*)0, // p_1643->g_143
        {{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}},{{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}},{{6L},{-10L},{0x023329542E103523L},{-1L},{6L},{-1L},{0x023329542E103523L},{-10L}}}}, // p_1643->g_147
        &p_1643->g_86, // p_1643->g_149
        {0x543B9BA44DB36F91L,0x543B9BA44DB36F91L,0x543B9BA44DB36F91L}, // p_1643->g_153
        0x72E4BE7F61CDA13BL, // p_1643->g_167
        {0x4DC61A7DL}, // p_1643->g_172
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1643->g_171
        &p_1643->g_171[0], // p_1643->g_173
        0xBE98L, // p_1643->g_186
        0x6C73L, // p_1643->g_194
        {0}, // p_1643->g_271
        {0}, // p_1643->g_272
        {0}, // p_1643->g_273
        {0}, // p_1643->g_274
        {0}, // p_1643->g_275
        {{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}}, // p_1643->g_276
        {0}, // p_1643->g_277
        {0}, // p_1643->g_278
        {0}, // p_1643->g_279
        {0}, // p_1643->g_280
        {0}, // p_1643->g_281
        {0}, // p_1643->g_282
        {0}, // p_1643->g_283
        {0}, // p_1643->g_284
        {{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}, // p_1643->g_285
        {{0},{0},{0},{0},{0},{0},{0}}, // p_1643->g_286
        {0}, // p_1643->g_287
        {{0},{0},{0},{0},{0}}, // p_1643->g_288
        {0}, // p_1643->g_289
        {0}, // p_1643->g_290
        {0}, // p_1643->g_291
        {{0},{0},{0},{0},{0},{0}}, // p_1643->g_292
        {0}, // p_1643->g_293
        {0}, // p_1643->g_294
        {0}, // p_1643->g_295
        {0}, // p_1643->g_296
        {0}, // p_1643->g_297
        {0}, // p_1643->g_298
        {{0},{0}}, // p_1643->g_299
        {0}, // p_1643->g_300
        {0}, // p_1643->g_301
        {0}, // p_1643->g_302
        {{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}, // p_1643->g_303
        {0}, // p_1643->g_304
        {{0},{0},{0},{0},{0}}, // p_1643->g_305
        {{0},{0},{0},{0}}, // p_1643->g_306
        {0}, // p_1643->g_307
        {0}, // p_1643->g_308
        {{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}, // p_1643->g_309
        {0}, // p_1643->g_310
        {0}, // p_1643->g_311
        {0}, // p_1643->g_312
        {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}, // p_1643->g_313
        {0}, // p_1643->g_314
        {0}, // p_1643->g_315
        {0}, // p_1643->g_316
        {0x61073AF7L}, // p_1643->g_321
        {4294967295UL}, // p_1643->g_324
        0UL, // p_1643->g_349
        0x16454593A8B6896BL, // p_1643->g_356
        (void*)0, // p_1643->g_360
        &p_1643->g_84[0], // p_1643->g_363
        (void*)0, // p_1643->g_384
        {{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384},{&p_1643->g_384}}, // p_1643->g_383
        0UL, // p_1643->g_455
        &p_1643->g_65, // p_1643->g_468
        {0xAE673D0FL,0xAE673D0FL,0xAE673D0FL}, // p_1643->g_478
        {0}, // p_1643->g_490
        {0}, // p_1643->g_498
        0x5A8B6969L, // p_1643->g_506
        &p_1643->g_127, // p_1643->g_511
        0xFBL, // p_1643->g_579
        &p_1643->g_65, // p_1643->g_616
        &p_1643->g_65, // p_1643->g_634
        {0}, // p_1643->g_665
        &p_1643->g_665, // p_1643->g_664
        &p_1643->g_664, // p_1643->g_663
        (-1L), // p_1643->g_667
        0x39ABL, // p_1643->g_692
        0xE168L, // p_1643->g_694
        (void*)0, // p_1643->g_708
        &p_1643->g_708, // p_1643->g_707
        &p_1643->g_143, // p_1643->g_724
        &p_1643->g_724, // p_1643->g_723
        {0}, // p_1643->g_750
        &p_1643->g_81[0], // p_1643->g_913
        0x1CA66E51L, // p_1643->g_977
        0x44DFF621B29E8BD2L, // p_1643->g_987
        (-7L), // p_1643->g_997
        {4UL,4UL,4UL,4UL,4UL,4UL}, // p_1643->g_1007
        {0x18B02749L}, // p_1643->g_1043
        {&p_1643->g_147[2][1][6],&p_1643->g_147[5][3][3],&p_1643->g_147[2][1][6],&p_1643->g_147[2][1][6],&p_1643->g_147[5][3][3],&p_1643->g_147[2][1][6],&p_1643->g_147[2][1][6]}, // p_1643->g_1056
        {{0},{0},{0},{0}}, // p_1643->g_1138
        &p_1643->g_84[0], // p_1643->g_1149
        &p_1643->g_1149, // p_1643->g_1148
        {0xBC336EA5L}, // p_1643->g_1182
        (void*)0, // p_1643->g_1308
        {&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4],&p_1643->g_60[5][4][4]}, // p_1643->g_1321
        &p_1643->g_60[3][0][4], // p_1643->g_1322
        {0}, // p_1643->g_1396
        {{0},{0},{0},{0}}, // p_1643->g_1401
        &p_1643->g_147[5][3][3].f0, // p_1643->g_1408
        0x1B48438EL, // p_1643->g_1496
        {0}, // p_1643->g_1504
        {{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723},{&p_1643->g_723,&p_1643->g_723,&p_1643->g_723,&p_1643->g_723}}, // p_1643->g_1506
        {0xE4D5L,0xE4D5L,0xE4D5L,0xE4D5L,0xE4D5L}, // p_1643->g_1533
        0x43265D100BACEC59L, // p_1643->g_1551
        1UL, // p_1643->g_1562
        &p_1643->g_1562, // p_1643->g_1561
        &p_1643->g_1561, // p_1643->g_1560
        {0x6662C600L}, // p_1643->g_1568
        5L, // p_1643->g_1625
    };
    c_1644 = c_1645;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1643);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1643->g_2, "p_1643->g_2", print_hash_value);
    transparent_crc(p_1643->g_6, "p_1643->g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1643->g_10[i][j][k], "p_1643->g_10[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1643->g_61.f0, "p_1643->g_61.f0", print_hash_value);
    transparent_crc(p_1643->g_66, "p_1643->g_66", print_hash_value);
    transparent_crc(p_1643->g_76, "p_1643->g_76", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1643->g_81[i], "p_1643->g_81[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_82, "p_1643->g_82", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1643->g_84[i], "p_1643->g_84[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_86, "p_1643->g_86", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1643->g_96[i], "p_1643->g_96[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_102, "p_1643->g_102", print_hash_value);
    transparent_crc(p_1643->g_123, "p_1643->g_123", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1643->g_147[i][j][k].f0, "p_1643->g_147[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1643->g_153[i], "p_1643->g_153[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_167, "p_1643->g_167", print_hash_value);
    transparent_crc(p_1643->g_172.f0, "p_1643->g_172.f0", print_hash_value);
    transparent_crc(p_1643->g_186, "p_1643->g_186", print_hash_value);
    transparent_crc(p_1643->g_194, "p_1643->g_194", print_hash_value);
    transparent_crc(p_1643->g_321.f0, "p_1643->g_321.f0", print_hash_value);
    transparent_crc(p_1643->g_324.f0, "p_1643->g_324.f0", print_hash_value);
    transparent_crc(p_1643->g_349, "p_1643->g_349", print_hash_value);
    transparent_crc(p_1643->g_356, "p_1643->g_356", print_hash_value);
    transparent_crc(p_1643->g_455, "p_1643->g_455", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1643->g_478[i], "p_1643->g_478[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_506, "p_1643->g_506", print_hash_value);
    transparent_crc(p_1643->g_579, "p_1643->g_579", print_hash_value);
    transparent_crc(p_1643->g_667, "p_1643->g_667", print_hash_value);
    transparent_crc(p_1643->g_692, "p_1643->g_692", print_hash_value);
    transparent_crc(p_1643->g_694, "p_1643->g_694", print_hash_value);
    transparent_crc(p_1643->g_977, "p_1643->g_977", print_hash_value);
    transparent_crc(p_1643->g_987, "p_1643->g_987", print_hash_value);
    transparent_crc(p_1643->g_997, "p_1643->g_997", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1643->g_1007[i], "p_1643->g_1007[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_1043.f0, "p_1643->g_1043.f0", print_hash_value);
    transparent_crc(p_1643->g_1182.f0, "p_1643->g_1182.f0", print_hash_value);
    transparent_crc(p_1643->g_1496, "p_1643->g_1496", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1643->g_1533[i], "p_1643->g_1533[i]", print_hash_value);

    }
    transparent_crc(p_1643->g_1551, "p_1643->g_1551", print_hash_value);
    transparent_crc(p_1643->g_1562, "p_1643->g_1562", print_hash_value);
    transparent_crc(p_1643->g_1568.f0, "p_1643->g_1568.f0", print_hash_value);
    transparent_crc(p_1643->g_1625, "p_1643->g_1625", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
