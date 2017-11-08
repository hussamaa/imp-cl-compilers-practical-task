// -g 59,20,8 -l 1,5,4
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


// Seed: 2793272261

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int64_t  f1;
   volatile uint32_t  f2;
   int16_t  f3;
   int32_t  f4;
};

struct S1 {
    int16_t g_2;
    int64_t g_3;
    int32_t * volatile g_4;
    int32_t g_6;
    int32_t * volatile g_5;
    union U0 g_20;
    int32_t g_45;
    uint16_t g_73[6][10][4];
    int32_t * volatile g_85[5][3][4];
    int32_t * volatile g_86;
    union U0 *g_87;
    int64_t g_112;
    int32_t *g_115[6];
    union U0 g_133;
    uint64_t g_134;
    int8_t g_140[10][8][3];
    int64_t g_162;
    uint8_t g_187;
    int8_t g_193;
    int32_t g_224;
    uint16_t g_232;
    volatile union U0 g_274;
    int32_t *g_284;
    volatile union U0 g_293;
    int32_t **g_311;
    volatile int32_t ** volatile g_325;
    volatile int32_t ** volatile *g_324;
    volatile int32_t ** volatile **g_323;
    int64_t g_351;
    uint32_t g_356;
    int32_t g_371[7][3][7];
    int64_t g_403;
    int64_t * volatile g_409[5];
    int64_t * volatile *g_408;
    uint8_t *g_430[5];
    uint8_t * volatile *g_429;
    int64_t *g_437;
    int64_t **g_436;
    int64_t *** volatile g_435;
    int32_t ** volatile g_465;
    volatile int32_t g_579;
    volatile int32_t * volatile g_578;
    volatile int32_t * volatile *g_577[9][9][3];
    volatile int32_t * volatile ** volatile g_580;
    union U0 g_581[6];
    volatile int16_t g_624;
    volatile int16_t * volatile g_623;
    volatile int16_t * volatile *g_622;
    uint8_t g_652;
    int32_t ** volatile g_701;
    union U0 ** volatile g_709;
    int32_t g_728;
    int32_t ***g_746[4];
    int32_t ****g_745;
    volatile union U0 g_768;
    int32_t g_850;
    volatile uint32_t g_858[2][8][5];
    volatile union U0 g_1013;
    uint16_t g_1064;
    uint16_t g_1070;
    volatile union U0 g_1080;
    int32_t *g_1103;
    int32_t **g_1102[10][10][2];
    int32_t g_1174;
    uint32_t g_1255;
    union U0 **g_1266;
    uint64_t g_1272;
    uint16_t *g_1291;
    uint16_t * volatile *g_1290;
    uint16_t * volatile ** volatile g_1289;
    uint16_t * volatile ** volatile *g_1288;
    uint16_t * volatile ** volatile * volatile * volatile g_1287;
    int64_t *g_1293;
    int64_t **g_1292;
    uint8_t **g_1381;
    volatile uint16_t g_1422;
    int32_t ** volatile g_1451;
    uint32_t *g_1458;
    uint32_t **g_1457;
    uint32_t *** volatile g_1456;
    uint32_t g_1497;
    uint16_t g_1528;
    int16_t *g_1533;
    int16_t **g_1532[5];
    int32_t ** volatile g_1536;
    uint16_t **g_1604;
    int32_t ** volatile g_1646;
    volatile union U0 g_1665;
    uint16_t ** volatile *g_1803;
    uint16_t ** volatile * volatile *g_1802;
    uint16_t ** volatile * volatile * volatile *g_1801;
    uint16_t ** volatile * volatile * volatile **g_1800;
    uint16_t g_1846;
    uint16_t ******g_1874;
    union U0 g_1901;
    uint8_t g_1902[9][4][6];
    int32_t ** volatile g_2002[7];
    int32_t g_2020;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_2021);
int32_t * func_7(uint64_t  p_8, int32_t * p_9, int32_t * p_10, int32_t  p_11, struct S1 * p_2021);
int32_t * func_13(int8_t  p_14, uint8_t  p_15, int8_t  p_16, int64_t  p_17, int32_t * p_18, struct S1 * p_2021);
int32_t * func_21(int32_t * p_22, int32_t * p_23, int16_t  p_24, struct S1 * p_2021);
int32_t * func_25(int32_t * p_26, int32_t * p_27, int8_t  p_28, int32_t * p_29, int32_t  p_30, struct S1 * p_2021);
int32_t  func_31(uint64_t  p_32, int16_t  p_33, int64_t  p_34, int64_t  p_35, int32_t * p_36, struct S1 * p_2021);
union U0  func_51(int32_t ** p_52, int32_t  p_53, struct S1 * p_2021);
int32_t * func_55(int8_t  p_56, int32_t ** p_57, uint64_t  p_58, uint8_t  p_59, int8_t  p_60, struct S1 * p_2021);
uint64_t  func_62(int32_t * p_63, struct S1 * p_2021);
uint32_t  func_64(int64_t  p_65, int16_t  p_66, int32_t * p_67, struct S1 * p_2021);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2021->g_2 p_2021->g_3 p_2021->g_5 p_2021->g_6 p_2021->g_20 p_2021->g_45 p_2021->g_73 p_2021->g_87 p_2021->g_20.f0 p_2021->g_133 p_2021->g_134 p_2021->g_133.f0 p_2021->g_140 p_2021->g_86 p_2021->g_20.f3 p_2021->g_162 p_2021->g_187 p_2021->g_224 p_2021->g_112 p_2021->g_274 p_2021->g_284 p_2021->g_20.f1 p_2021->g_293 p_2021->g_429 p_2021->g_435 p_2021->g_371 p_2021->g_465 p_2021->g_274.f0 p_2021->g_356 p_2021->g_115 p_2021->g_437 p_2021->g_577 p_2021->g_580 p_2021->g_1174 p_2021->g_1456 p_2021->g_430 p_2021->g_1451 p_2021->g_1381 p_2021->g_1646 p_2021->g_1536 p_2021->g_1665.f0
 * writes: p_2021->g_6 p_2021->g_45 p_2021->g_112 p_2021->g_115 p_2021->g_134 p_2021->g_140 p_2021->g_133.f1 p_2021->g_20.f3 p_2021->g_187 p_2021->g_133.f3 p_2021->g_224 p_2021->g_232 p_2021->g_20.f1 p_2021->g_311 p_2021->g_73 p_2021->g_436 p_2021->g_403 p_2021->g_577 p_2021->g_2 p_2021->g_1174 p_2021->g_1457
 */
int8_t  func_1(struct S1 * p_2021)
{ /* block id: 4 */
    int8_t l_12 = 0x1FL;
    int32_t *l_19[5] = {&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6};
    int32_t *l_37 = &p_2021->g_6;
    int64_t l_551[4][5][9] = {{{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL}},{{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL}},{{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL}},{{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL},{0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL,0x66BCF7FB9B936A8FL}}};
    uint16_t l_1465 = 0x32FEL;
    int32_t **l_2017 = (void*)0;
    int32_t **l_2018[8] = {&l_37,&p_2021->g_115[5],&l_37,&l_37,&p_2021->g_115[5],&l_37,&l_37,&p_2021->g_115[5]};
    int32_t *l_2019 = &p_2021->g_2020;
    int i, j, k;
    (*p_2021->g_5) |= (p_2021->g_2 <= (p_2021->g_2 == p_2021->g_3));
    (*l_37) = ((((*p_2021->g_1536) = func_7(l_12, func_13((l_19[2] == (p_2021->g_20 , func_21(func_25(&p_2021->g_6, l_19[2], p_2021->g_2, &p_2021->g_6, func_31(p_2021->g_3, ((0UL | p_2021->g_6) == 0x734EL), p_2021->g_2, p_2021->g_2, l_37, p_2021), p_2021), &p_2021->g_6, (*l_37), p_2021))), l_551[3][0][1], p_2021->g_162, p_2021->g_356, p_2021->g_284, p_2021), l_19[2], l_1465, p_2021)) == l_2019) || 0x1BL);
    return p_2021->g_1665.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_1381 p_2021->g_430 p_2021->g_371 p_2021->g_1646 p_2021->g_284
 * writes:
 */
int32_t * func_7(uint64_t  p_8, int32_t * p_9, int32_t * p_10, int32_t  p_11, struct S1 * p_2021)
{ /* block id: 678 */
    uint8_t *l_1468 = &p_2021->g_652;
    int32_t l_1469[9] = {0L,(-2L),0L,0L,(-2L),0L,0L,(-2L),0L};
    uint16_t **l_1474 = &p_2021->g_1291;
    uint16_t ***l_1473[1][6] = {{(void*)0,&l_1474,(void*)0,(void*)0,&l_1474,(void*)0}};
    uint16_t ****l_1472 = &l_1473[0][5];
    int8_t l_1475 = 0x53L;
    int32_t l_1488 = (-1L);
    int32_t *l_1505 = &p_2021->g_1174;
    int32_t **l_1523 = (void*)0;
    int32_t l_1537 = 0x50B68505L;
    int64_t ***l_1585[10][10][2] = {{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}},{{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436},{&p_2021->g_436,&p_2021->g_436}}};
    uint32_t l_1603[6][6][6] = {{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}},{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}},{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}},{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}},{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}},{{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL},{0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL,0x9697984FL}}};
    uint64_t l_1620[3][7][10] = {{{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL}},{{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL}},{{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL},{0xA8938DFBA48AB05BL,0xEAE03541F239D258L,0xBB05444D8480138BL,0x670908F4E0FF4E49L,0xB868D87C42F8D82DL,0xFF2C178B81F1C222L,18446744073709551608UL,0xEAE03541F239D258L,0UL,0UL}}};
    uint64_t l_1643 = 1UL;
    uint8_t l_1749 = 255UL;
    uint32_t l_1752 = 0xD79A0C14L;
    uint16_t *****l_1799 = &l_1472;
    uint16_t ******l_1798 = &l_1799;
    uint32_t l_1884[9][4] = {{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL},{0x362389B9L,0x362389B9L,0x763303ACL,4294967291UL}};
    int32_t *l_1903 = &l_1488;
    union U0 *l_1947 = &p_2021->g_581[4];
    int32_t *****l_1965 = &p_2021->g_745;
    uint64_t l_1971 = 18446744073709551615UL;
    int32_t l_1983 = 0L;
    uint8_t l_1991 = 0x4EL;
    int i, j, k;
    l_1469[0] = ((!(safe_rshift_func_int16_t_s_u((l_1468 != (*p_2021->g_1381)), 2))) == p_2021->g_371[1][1][3]);
    return (*p_2021->g_1646);
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_140 p_2021->g_465 p_2021->g_577 p_2021->g_580 p_2021->g_20.f1 p_2021->g_2 p_2021->g_45 p_2021->g_1174 p_2021->g_1456 p_2021->g_115 p_2021->g_6 p_2021->g_429 p_2021->g_430 p_2021->g_187 p_2021->g_1451
 * writes: p_2021->g_115 p_2021->g_577 p_2021->g_20.f1 p_2021->g_2 p_2021->g_1174 p_2021->g_45 p_2021->g_1457
 */
int32_t * func_13(int8_t  p_14, uint8_t  p_15, int8_t  p_16, int64_t  p_17, int32_t * p_18, struct S1 * p_2021)
{ /* block id: 218 */
    int32_t l_558[1][1];
    uint16_t *l_560 = (void*)0;
    uint16_t **l_559 = &l_560;
    uint16_t ***l_562 = &l_559;
    uint16_t ****l_561 = &l_562;
    uint8_t l_575[9];
    int32_t *l_576 = &p_2021->g_6;
    int64_t ***l_604[2];
    uint32_t l_641[3];
    int32_t l_653 = (-7L);
    int32_t *l_702[6] = {&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45};
    uint8_t **l_710 = &p_2021->g_430[4];
    int64_t l_717 = 1L;
    int32_t l_760[9][3] = {{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L},{0x27DAEE27L,1L,0x27DAEE27L}};
    uint32_t l_761 = 0xDF019FF2L;
    int32_t ***l_779 = &p_2021->g_311;
    uint8_t l_793 = 252UL;
    int16_t l_824[1];
    int32_t *l_870 = &p_2021->g_45;
    uint32_t l_872[8];
    int16_t l_956 = 1L;
    int64_t l_986 = 0x722027CFE24D3845L;
    uint32_t l_989[3][10] = {{1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL},{1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL},{1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL,4294967286UL,1UL,1UL}};
    int32_t *****l_1055 = &p_2021->g_745;
    int32_t l_1060 = 0x4F2F4B0DL;
    uint32_t l_1210[9];
    int32_t l_1254[5] = {0x37D3A5A3L,0x37D3A5A3L,0x37D3A5A3L,0x37D3A5A3L,0x37D3A5A3L};
    int64_t **l_1294 = &p_2021->g_1293;
    int16_t l_1369 = 0x21F5L;
    int32_t **l_1382 = &p_2021->g_1103;
    uint32_t l_1448 = 0xBF998F72L;
    uint32_t *l_1455 = &l_872[0];
    uint32_t **l_1454 = &l_1455;
    int32_t *l_1463 = &l_760[1][2];
    int32_t *l_1464 = &l_1060;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_558[i][j] = 0x5D5B65C8L;
    }
    for (i = 0; i < 9; i++)
        l_575[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_604[i] = &p_2021->g_436;
    for (i = 0; i < 3; i++)
        l_641[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_824[i] = 0x6242L;
    for (i = 0; i < 8; i++)
        l_872[i] = 1UL;
    for (i = 0; i < 9; i++)
        l_1210[i] = 4294967295UL;
    l_576 = ((*p_2021->g_465) = ((p_15 || (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((l_558[0][0] & ((((*l_559) = &p_2021->g_232) == (l_558[0][0] , &p_2021->g_73[3][5][0])) > (((*l_561) = &l_559) != &l_559))), (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(p_14, (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_558[0][0], 0x82L)), (-2L))) <= l_558[0][0]) <= l_575[5]), 9)), p_2021->g_140[4][4][1])) & 0x493EBA0C57CB7EE8L) | 0x111B2CA8D5CF58A5L))), 5)))) ^ l_575[1]) == p_15), p_17)), 7)) > 0x50L) & 0x1A43L)) , p_18));
    (*p_2021->g_580) = p_2021->g_577[1][1][2];
    for (p_2021->g_20.f1 = 0; (p_2021->g_20.f1 <= 2); p_2021->g_20.f1 += 1)
    { /* block id: 226 */
        uint16_t l_584 = 0x3B86L;
        int16_t *l_589 = &p_2021->g_2;
        int32_t l_594 = 1L;
        uint16_t *l_595 = &p_2021->g_73[3][2][3];
        int64_t **l_649 = &p_2021->g_437;
        union U0 *l_708 = &p_2021->g_20;
        uint8_t **l_713 = &p_2021->g_430[0];
        int32_t l_716 = 0x088A2F89L;
        int32_t l_718[6][6] = {{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L},{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L},{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L},{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L},{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L},{0x11317D48L,(-1L),0x00C1D96CL,(-1L),0x11317D48L,0x11317D48L}};
        uint16_t l_719 = 0x7D23L;
        int32_t *l_727[1];
        int32_t **l_726 = &l_727[0];
        int32_t *****l_747 = (void*)0;
        int32_t *****l_748 = &p_2021->g_745;
        int8_t *l_750[9] = {&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2],&p_2021->g_140[0][2][2]};
        int32_t ***l_755 = &p_2021->g_311;
        int32_t ****l_756 = &l_755;
        int32_t ***l_758[10];
        int32_t ****l_757 = &l_758[9];
        uint64_t *l_759 = &p_2021->g_134;
        uint8_t l_825 = 0xD4L;
        uint32_t l_828 = 0xF680C333L;
        int16_t l_857[3][2][4] = {{{6L,(-8L),6L,6L},{6L,(-8L),6L,6L}},{{6L,(-8L),6L,6L},{6L,(-8L),6L,6L}},{{6L,(-8L),6L,6L},{6L,(-8L),6L,6L}}};
        uint16_t l_861 = 0xC92DL;
        int64_t ****l_934 = (void*)0;
        uint16_t l_1033 = 65535UL;
        uint16_t l_1123 = 0xE6A1L;
        uint32_t l_1217 = 0x0CD21471L;
        int16_t l_1218 = 0L;
        int64_t **l_1296 = &p_2021->g_1293;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_727[i] = &p_2021->g_728;
        for (i = 0; i < 10; i++)
            l_758[i] = &p_2021->g_311;
        (1 + 1);
    }
    for (p_2021->g_2 = 21; (p_2021->g_2 == (-16)); p_2021->g_2--)
    { /* block id: 583 */
        int32_t *l_1312 = &p_2021->g_1174;
        uint32_t l_1427[8] = {0xAB5A1081L,0xC54C6DBEL,0xAB5A1081L,0xAB5A1081L,0xC54C6DBEL,0xAB5A1081L,0xAB5A1081L,0xC54C6DBEL};
        int32_t l_1430 = 0x783C084BL;
        int i;
        if ((*p_18))
        { /* block id: 584 */
            uint32_t l_1313 = 0xF10A409DL;
            int32_t l_1334 = 0x41019F0FL;
            uint16_t l_1364 = 0x32A7L;
            int32_t ***l_1367 = &p_2021->g_1102[7][3][1];
            uint8_t **l_1379[2];
            int32_t *l_1409 = &l_760[2][0];
            int32_t l_1429 = (-6L);
            uint32_t l_1433 = 0x1FCCA0ACL;
            int32_t *l_1447 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1379[i] = &p_2021->g_430[2];
            for (p_2021->g_1174 = 7; (p_2021->g_1174 >= 0); p_2021->g_1174 -= 1)
            { /* block id: 587 */
                uint64_t l_1336[6][3][7] = {{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}},{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}},{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}},{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}},{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}},{{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL},{1UL,0xC813CC6BA63C3797L,3UL,1UL,0x9B1A22C8FE00BCADL,3UL,3UL}}};
                int32_t l_1338 = 0L;
                int32_t *l_1348 = &l_1338;
                uint64_t *l_1357 = &p_2021->g_134;
                int32_t l_1365 = 6L;
                int16_t *l_1366 = &l_824[0];
                int32_t ***l_1368[3][2] = {{&p_2021->g_1102[5][3][1],&p_2021->g_1102[0][6][0]},{&p_2021->g_1102[5][3][1],&p_2021->g_1102[0][6][0]},{&p_2021->g_1102[5][3][1],&p_2021->g_1102[0][6][0]}};
                uint32_t l_1373 = 8UL;
                int16_t **l_1407 = &l_1366;
                int64_t l_1408 = 0x4BD143BDB4652F03L;
                int16_t l_1446 = 0L;
                int i, j, k;
                (1 + 1);
            }
            (*l_576) = (*p_18);
        }
        else
        { /* block id: 665 */
            for (l_1060 = 0; (l_1060 == 12); l_1060 = safe_add_func_int64_t_s_s(l_1060, 5))
            { /* block id: 668 */
                int32_t *l_1459 = &p_2021->g_1174;
                (*p_2021->g_1456) = l_1454;
                return l_1459;
            }
            if ((**p_2021->g_465))
                break;
            (*p_18) |= (safe_div_func_int32_t_s_s((*l_1312), (safe_unary_minus_func_uint8_t_u((**p_2021->g_429)))));
            (*l_1312) |= (*p_18);
        }
    }
    return (*p_2021->g_1451);
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_45 p_2021->g_3 p_2021->g_73 p_2021->g_6 p_2021->g_87 p_2021->g_20 p_2021->g_20.f0 p_2021->g_133 p_2021->g_134 p_2021->g_133.f0 p_2021->g_140 p_2021->g_2 p_2021->g_86 p_2021->g_20.f3 p_2021->g_5 p_2021->g_162 p_2021->g_187 p_2021->g_224 p_2021->g_112 p_2021->g_274 p_2021->g_284 p_2021->g_20.f1 p_2021->g_293 p_2021->g_429 p_2021->g_435 p_2021->g_371 p_2021->g_465 p_2021->g_274.f0 p_2021->g_356 p_2021->g_115 p_2021->g_437
 * writes: p_2021->g_6 p_2021->g_45 p_2021->g_112 p_2021->g_115 p_2021->g_134 p_2021->g_140 p_2021->g_133.f1 p_2021->g_20.f3 p_2021->g_187 p_2021->g_133.f3 p_2021->g_224 p_2021->g_232 p_2021->g_20.f1 p_2021->g_311 p_2021->g_73 p_2021->g_436 p_2021->g_403
 */
int32_t * func_21(int32_t * p_22, int32_t * p_23, int16_t  p_24, struct S1 * p_2021)
{ /* block id: 16 */
    int32_t *l_44[5][3][10] = {{{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}},{{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}},{{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}},{{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}},{{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,(void*)0,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}}};
    uint8_t l_50 = 1UL;
    int32_t l_54[4] = {0L,0L,0L,0L};
    int64_t *l_218 = &p_2021->g_112;
    int64_t **l_219 = &l_218;
    int8_t *l_220 = &p_2021->g_140[4][4][1];
    int64_t l_223 = 0x645968ACA68AB151L;
    uint16_t *l_231 = &p_2021->g_232;
    uint64_t l_260[5] = {6UL,6UL,6UL,6UL,6UL};
    uint32_t l_261 = 4294967286UL;
    int32_t l_263[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int64_t l_312[10];
    int32_t ***l_327 = &p_2021->g_311;
    int32_t ****l_326 = &l_327;
    uint8_t *l_355 = &p_2021->g_187;
    uint16_t **l_427[1][9][4] = {{{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231},{&l_231,&l_231,&l_231,&l_231}}};
    uint16_t ***l_426 = &l_427[0][5][2];
    int64_t **l_434 = (void*)0;
    uint64_t l_480 = 5UL;
    int16_t l_484 = 0L;
    int16_t l_528 = (-8L);
    int16_t l_538 = 0x4F09L;
    uint8_t l_540 = 0x6CL;
    uint64_t l_548 = 0x1B4A0C91585D69BAL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_312[i] = 0L;
    p_2021->g_45 &= ((*p_23) = 0x7AE38EDFL);
    p_2021->g_224 ^= (safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(l_50, (func_51(&l_44[0][2][0], l_54[2], p_2021) , (safe_mod_func_int32_t_s_s(((&p_2021->g_112 == ((*l_219) = l_218)) && ((((*l_220) = p_24) && (safe_mul_func_uint16_t_u_u(p_24, (((((p_2021->g_133.f3 = p_2021->g_140[4][7][2]) <= p_2021->g_187) | p_24) > 0xA9L) <= p_24)))) , p_24)), p_24))))) && p_24), l_223));
    if (((-1L) > (safe_mul_func_int8_t_s_s(p_2021->g_162, (safe_add_func_int32_t_s_s((p_2021->g_73[0][5][0] != (safe_mul_func_int16_t_s_s(((p_24 < ((&l_50 == &p_2021->g_187) && ((p_2021->g_73[3][5][0] & (0x98L || (((*l_231) = (p_2021->g_112 , p_24)) > p_24))) < p_2021->g_140[4][4][1]))) < p_2021->g_6), 0x71CEL))), p_24))))))
    { /* block id: 72 */
        int64_t **l_243 = &l_218;
        int32_t l_252 = 0x138CDB12L;
        int16_t *l_254 = (void*)0;
        int16_t **l_253 = &l_254;
        int16_t *l_256 = &p_2021->g_2;
        int16_t **l_255 = &l_256;
        int32_t l_257 = 0x238476B1L;
        int32_t l_258 = 7L;
        int64_t *l_259 = &p_2021->g_20.f1;
        uint32_t l_262 = 1UL;
        uint64_t *l_264 = &l_260[4];
        uint8_t l_370[8][6][5] = {{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}},{{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL},{0xACL,255UL,255UL,0x04L,8UL}}};
        int32_t ***l_397 = (void*)0;
        int8_t *l_400 = &p_2021->g_193;
        uint16_t ***l_425 = (void*)0;
        int16_t l_455[8] = {0x5AE9L,0x4719L,0x5AE9L,0x5AE9L,0x4719L,0x5AE9L,0x5AE9L,0x4719L};
        int16_t l_457 = 0x2397L;
        int32_t l_485[6];
        uint64_t l_533 = 0UL;
        int64_t l_537 = 0x44AA6EAF94BDE632L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_485[i] = 0x285F6AA4L;
        if ((p_2021->g_6 ^ (p_2021->g_112 >= ((*l_264) = (safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((*l_220) ^= (((safe_sub_func_int16_t_s_s((((*l_231) = (safe_div_func_int32_t_s_s(((((((*l_259) = (l_243 != ((safe_rshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(p_2021->g_73[0][1][3], (((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_252, ((*p_2021->g_87) , (((l_258 = (l_257 &= (((*l_253) = &p_2021->g_2) == ((*l_255) = l_231)))) & ((((p_24 != 2L) & 0x02L) <= p_2021->g_112) < 1L)) & 1L)))), 5UL)) >= p_2021->g_73[3][5][0]) | 0L))) , p_2021->g_112) ^ 1UL), 3)) , (void*)0))) | l_252) <= p_24) , l_252) && p_2021->g_73[3][5][0]), (*p_22)))) ^ l_260[4]), 0x0D49L)) & l_261) > l_262)), p_2021->g_134)), p_2021->g_134)), l_263[7]))))))
        { /* block id: 81 */
            return &p_2021->g_6;
        }
        else
        { /* block id: 83 */
            uint8_t *l_267 = &p_2021->g_187;
            uint32_t l_281 = 0xF201076EL;
            int32_t *l_285 = (void*)0;
            uint64_t l_286[4][3][7] = {{{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL}},{{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL}},{{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL}},{{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL,4UL}}};
            uint16_t **l_410 = &l_231;
            uint16_t ***l_411 = &l_410;
            int i, j, k;
lbl_289:
            (*p_22) ^= (~(safe_div_func_uint64_t_u_u((0x30DD65361546F417L <= ((((*l_267)++) <= (safe_mod_func_uint8_t_u_u(((p_2021->g_2 > 0x3DDDF1C7AB2B4A36L) & (safe_sub_func_int64_t_s_s(((p_2021->g_274 , p_24) | (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_281 && ((--(*l_264)) , (~(l_220 != &p_2021->g_140[6][0][1])))), 5)), 0)) , p_2021->g_284) == l_285) != (*p_2021->g_284)), l_252))), l_286[3][2][0]))), p_2021->g_20.f1))) & p_24)), p_24)));
            for (p_2021->g_133.f1 = 21; (p_2021->g_133.f1 >= 18); --p_2021->g_133.f1)
            { /* block id: 89 */
                uint32_t l_290 = 0xAC3A7DBBL;
                int64_t l_313[10] = {0x21B7AEE73A9112BFL,0x0284C36624961345L,0L,0x0284C36624961345L,0x21B7AEE73A9112BFL,0x21B7AEE73A9112BFL,0x0284C36624961345L,0L,0x0284C36624961345L,0x21B7AEE73A9112BFL};
                int32_t ***l_328 = &p_2021->g_311;
                union U0 *l_388 = (void*)0;
                int8_t *l_389 = &p_2021->g_193;
                int i;
                for (l_252 = 2; (l_252 >= 0); l_252 -= 1)
                { /* block id: 92 */
                    int16_t l_306 = 0x14C3L;
                    if (p_2021->g_134)
                        goto lbl_289;
                    for (l_257 = 0; (l_257 <= 2); l_257 += 1)
                    { /* block id: 96 */
                        int32_t **l_310 = &l_285;
                        int32_t ***l_309[2][2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_309[i][j] = &l_310;
                        }
                        (*p_22) = l_290;
                        l_44[(l_257 + 1)][l_252][(l_257 + 6)] = func_25(&p_2021->g_6, ((l_258 |= ((safe_mod_func_int64_t_s_s((p_2021->g_293 , ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((~(((p_2021->g_224 && (((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((p_2021->g_73[2][3][3] , ((safe_add_func_uint64_t_u_u(((l_306 , (-10L)) > (safe_sub_func_int32_t_s_s(((p_2021->g_311 = &p_22) == &p_2021->g_85[2][0][0]), 1UL))), l_290)) < p_2021->g_140[4][4][1])), l_312[0])), (*p_2021->g_284))) > 0UL) == 0x4BE3L)) <= p_24) == 4L)) | 18446744073709551612UL) , p_2021->g_45), 9)) != p_24), p_24)), 2UL)) & p_24)), p_24)) , p_24)) , &l_54[2]), l_257, p_22, p_2021->g_20.f1, p_2021);
                        (*p_22) = l_313[1];
                        (*p_23) ^= (((*l_231) = 0xEAAAL) ^ 0L);
                    }
                    for (p_2021->g_134 = 0; (p_2021->g_134 <= 2); p_2021->g_134 += 1)
                    { /* block id: 107 */
                        if ((*p_2021->g_5))
                            break;
                        (*p_23) |= (p_2021->g_45 && ((*l_220) |= (p_24 , p_2021->g_20.f1)));
                        if ((*p_22))
                            continue;
                        (*p_22) = (*p_22);
                    }
                }
            }
            (*l_411) = l_410;
        }
        if ((*p_23))
        { /* block id: 158 */
            uint8_t l_416 = 5UL;
            uint16_t ****l_428 = &l_426;
            int32_t l_456 = 0L;
            int32_t l_460 = 0x7FE802B2L;
            int32_t l_483 = 0x28A0F5BFL;
            int32_t l_486[5] = {0L,0L,0L,0L,0L};
            uint8_t l_488 = 0xF2L;
            int i;
            if ((((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(l_416, (((p_2021->g_73[0][1][3] = (p_24 & (safe_div_func_uint8_t_u_u(p_24, ((((*l_259) ^= (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((((void*)0 == &p_2021->g_409[3]) || (p_24 | (((p_2021->g_45 , l_425) != ((*l_428) = l_426)) || 0x32L))) == 0x27L), l_416)), 0)), 0UL))) < 0UL) , p_2021->g_6))))) >= l_416) < p_2021->g_2))) <= 65533UL), 14)) != p_24) && p_24) > l_416) >= 0x3DE38583B9432272L))
            { /* block id: 162 */
                uint64_t l_431 = 0UL;
                (*p_2021->g_284) = ((*p_23) = ((void*)0 != p_2021->g_429));
                ++l_431;
                for (l_262 = 0; l_262 < 10; l_262 += 1)
                {
                    l_312[l_262] = 0x27F49254B59149EDL;
                }
            }
            else
            { /* block id: 167 */
                uint64_t l_448 = 9UL;
                int32_t l_451 = 0L;
                int32_t l_452 = 7L;
                int32_t l_454 = (-10L);
                int32_t l_458 = 1L;
                int32_t l_459 = 0x2C75EFC5L;
                int32_t l_461[3];
                int32_t ****l_504[10] = {&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397};
                int32_t l_510 = 0x2A04B761L;
                int i;
                for (i = 0; i < 3; i++)
                    l_461[i] = 0x005E72DFL;
                (*p_2021->g_435) = l_434;
                for (l_416 = 0; (l_416 <= 14); l_416++)
                { /* block id: 171 */
                    int64_t *l_446 = (void*)0;
                    int32_t l_447[6] = {0x353CB527L,0L,0x353CB527L,0x353CB527L,0L,0x353CB527L};
                    int32_t l_450 = 0x62A1E0A9L;
                    uint64_t l_462 = 7UL;
                    uint32_t l_481 = 0x126D27D3L;
                    int i;
                    if ((safe_div_func_uint16_t_u_u(((*p_23) >= (safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((*l_220) |= p_2021->g_371[3][1][6]), 0x1BL)) || (!(((p_2021->g_224 , l_446) != (l_447[1] , (l_448 , ((*l_219) = (p_2021->g_162 , l_446))))) >= (*p_23)))), (-1L)))), p_24)))
                    { /* block id: 174 */
                        int16_t l_449 = 0x634AL;
                        int32_t l_453[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_453[i] = (-3L);
                        ++l_462;
                        (*p_2021->g_465) = p_22;
                    }
                    else
                    { /* block id: 177 */
                        (*p_2021->g_5) = l_370[4][3][1];
                    }
                }
            }
            for (l_257 = 0; l_257 < 10; l_257 += 1)
            {
                l_263[l_257] = 0x17B30582L;
            }
            (*p_2021->g_465) = p_22;
        }
        else
        { /* block id: 199 */
            uint32_t l_519 = 0xE6146937L;
            int32_t l_525 = 0x6FD53838L;
            int32_t l_526 = 1L;
            int32_t l_529 = (-10L);
            int32_t l_530 = (-2L);
            int32_t l_531 = (-1L);
            int32_t l_532 = 0x260A01B9L;
            int32_t l_536 = 5L;
            int32_t l_539[6] = {0x4CB91B13L,0x4CB91B13L,0x4CB91B13L,0x4CB91B13L,0x4CB91B13L,0x4CB91B13L};
            int i;
            for (p_2021->g_187 = 0; (p_2021->g_187 <= 9); p_2021->g_187 += 1)
            { /* block id: 202 */
                uint64_t l_522 = 7UL;
                int32_t l_527[4] = {0x1C10271AL,0x1C10271AL,0x1C10271AL,0x1C10271AL};
                int i;
                ++l_519;
                l_522++;
                if (l_263[p_2021->g_187])
                    continue;
                ++l_533;
            }
            l_540--;
        }
        return p_23;
    }
    else
    { /* block id: 211 */
        int32_t **l_543 = &p_2021->g_115[5];
        int8_t l_549 = 5L;
        int16_t l_550 = 0L;
        (*l_543) = p_23;
        l_550 |= ((65535UL > ((safe_mul_func_int16_t_s_s((p_2021->g_274.f0 == p_2021->g_187), 4UL)) , (0x3C8DA74CL || (((l_549 = ((*p_2021->g_437) = (((p_2021->g_356 >= (-6L)) , ((safe_div_func_int64_t_s_s((((255UL < 0L) != p_24) >= (**l_543)), l_548)) , p_2021->g_2)) , 0x2370FAB66F9EAC7FL))) != (**l_543)) | 0x3A01A32AL)))) && 0L);
        return (*p_2021->g_465);
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_25(int32_t * p_26, int32_t * p_27, int8_t  p_28, int32_t * p_29, int32_t  p_30, struct S1 * p_2021)
{ /* block id: 14 */
    int32_t *l_43 = &p_2021->g_6;
    return l_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_6 p_2021->g_2
 * writes:
 */
int32_t  func_31(uint64_t  p_32, int16_t  p_33, int64_t  p_34, int64_t  p_35, int32_t * p_36, struct S1 * p_2021)
{ /* block id: 6 */
    int32_t *l_39[7];
    int32_t **l_38[7][10][3] = {{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}},{{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0},{&l_39[6],&l_39[5],(void*)0}}};
    int32_t *l_40[6][3][6] = {{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}},{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}},{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}},{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}},{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}},{{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6},{&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,(void*)0,&p_2021->g_6}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_39[i] = &p_2021->g_6;
    l_40[3][0][4] = (void*)0;
    for (p_34 = 0; (p_34 <= 20); p_34++)
    { /* block id: 10 */
        if ((*p_36))
            break;
    }
    return p_2021->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_3 p_2021->g_45 p_2021->g_73 p_2021->g_6 p_2021->g_87 p_2021->g_20 p_2021->g_20.f0 p_2021->g_133 p_2021->g_134 p_2021->g_133.f0 p_2021->g_140 p_2021->g_2 p_2021->g_86 p_2021->g_20.f3 p_2021->g_5 p_2021->g_162
 * writes: p_2021->g_6 p_2021->g_112 p_2021->g_115 p_2021->g_134 p_2021->g_140 p_2021->g_133.f1 p_2021->g_45 p_2021->g_20.f3 p_2021->g_187
 */
union U0  func_51(int32_t ** p_52, int32_t  p_53, struct S1 * p_2021)
{ /* block id: 19 */
    uint8_t l_61 = 247UL;
    int32_t *l_69 = &p_2021->g_6;
    int32_t **l_68 = &l_69;
    uint16_t *l_126 = &p_2021->g_73[3][5][0];
    uint16_t *l_128 = &p_2021->g_73[1][5][0];
    uint16_t **l_127 = &l_128;
    int8_t *l_139[2];
    int32_t *l_141 = &p_2021->g_6;
    int32_t *l_142 = &p_2021->g_45;
    int32_t *l_143 = (void*)0;
    int32_t *l_144 = &p_2021->g_6;
    int32_t *l_145 = &p_2021->g_45;
    int32_t *l_146 = &p_2021->g_45;
    int32_t *l_147 = &p_2021->g_6;
    int32_t *l_148 = &p_2021->g_45;
    int32_t l_149 = (-1L);
    int32_t *l_150 = &p_2021->g_6;
    int32_t *l_151 = &l_149;
    int32_t *l_152 = &p_2021->g_6;
    int32_t *l_153 = &p_2021->g_6;
    int32_t *l_154 = &p_2021->g_6;
    int32_t *l_155 = &p_2021->g_45;
    int32_t *l_156 = (void*)0;
    int32_t *l_157 = &l_149;
    int32_t *l_158 = (void*)0;
    int32_t *l_159 = &p_2021->g_45;
    int32_t *l_160[4][3][5] = {{{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45}},{{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45}},{{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45}},{{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45},{&l_149,&p_2021->g_45,&l_149,&l_149,&p_2021->g_45}}};
    int8_t l_161 = 1L;
    int32_t l_163 = (-7L);
    int32_t l_164 = 8L;
    int8_t l_165 = 1L;
    int8_t l_166 = 0L;
    uint32_t l_167 = 0xE8AEA080L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_139[i] = &p_2021->g_140[4][4][1];
    p_2021->g_115[5] = func_55(l_61, (((func_62((p_2021->g_3 , &p_2021->g_6), p_2021) || 0x2D2A8C76C9F35CD6L) < p_2021->g_73[3][5][0]) , &l_69), p_2021->g_6, p_2021->g_6, p_2021->g_45, p_2021);
    (**l_68) = ((safe_sub_func_int32_t_s_s(4L, (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((((l_126 != ((*l_127) = &p_2021->g_73[4][4][0])) & (((((p_2021->g_140[4][4][1] = (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((void*)0 != &p_2021->g_6), (p_2021->g_6 & (p_2021->g_133 , ((p_2021->g_134++) != (safe_add_func_int16_t_s_s(0x36D6L, ((p_2021->g_133.f0 < p_2021->g_73[0][2][2]) != 0xA5L)))))))) , p_53), p_53))) <= 255UL) , p_2021->g_140[8][0][0]) != 0x7EL) >= (*l_69))) < 0x06D33B1CCB9073E8L), (**l_68))) , (void*)0) != (void*)0), p_53)), p_2021->g_133.f0)), p_53)))) >= 0x2DF4511BC6CB3F44L);
    l_167--;
    for (p_2021->g_6 = 0; (p_2021->g_6 < 9); p_2021->g_6 = safe_add_func_int64_t_s_s(p_2021->g_6, 4))
    { /* block id: 46 */
        int8_t l_185 = 1L;
        int32_t l_189 = (-9L);
        int32_t l_194[8][2] = {{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL},{9L,0x2876024AL}};
        uint32_t l_199[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_199[i] = 4294967291UL;
        for (p_2021->g_133.f1 = (-29); (p_2021->g_133.f1 > 26); p_2021->g_133.f1 = safe_add_func_uint16_t_u_u(p_2021->g_133.f1, 7))
        { /* block id: 49 */
            uint8_t *l_174 = (void*)0;
            uint8_t *l_175 = &l_61;
            int16_t *l_182 = (void*)0;
            int16_t *l_183[3][10] = {{&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2,&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2},{&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2,&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2},{&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2,&p_2021->g_2,(void*)0,&p_2021->g_2,(void*)0,&p_2021->g_2}};
            int32_t l_184 = 0x06F86244L;
            uint8_t *l_186 = &p_2021->g_187;
            int32_t l_191 = 0x76443CECL;
            int32_t l_192 = 0x6E644F43L;
            int32_t l_195 = 0x65EE3B36L;
            int32_t l_196 = 1L;
            int32_t l_197 = 0x48C0BE4AL;
            int32_t l_198 = 0x0B1D731BL;
            int i, j;
            if (((((*l_175) = p_2021->g_140[4][4][1]) <= ((**l_68) , ((*l_186) = ((safe_mul_func_uint8_t_u_u(p_2021->g_2, (0L <= (!(((((((safe_rshift_func_int16_t_s_s((p_2021->g_20.f3 = (((*l_142) = (((void*)0 != p_52) > (safe_mul_func_int16_t_s_s((0x5EL < p_53), (p_2021->g_140[4][4][1] , p_2021->g_73[3][5][0]))))) && 0xD11EB618L)), p_53)) || 0x2A209220L) >= 0x4EL) || p_53) , (*p_2021->g_86)) ^ l_184) , p_2021->g_20.f3))))) > l_185)))) > 0xA5L))
            { /* block id: 54 */
                int32_t l_188 = 0x37BC6C63L;
                int32_t l_190[1][4] = {{0x02F1A96DL,0x02F1A96DL,0x02F1A96DL,0x02F1A96DL}};
                int i, j;
                l_199[1]--;
                if ((*p_2021->g_5))
                    break;
            }
            else
            { /* block id: 57 */
                int32_t *l_210[4][2];
                int16_t l_215 = 0x4371L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_210[i][j] = &p_2021->g_20.f4;
                }
                (*p_2021->g_86) = ((safe_lshift_func_int8_t_s_u(((((+(0x4F304AF43DC1E375L != (&p_2021->g_187 != &p_2021->g_187))) , (p_53 ^ (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((&p_2021->g_112 != ((l_194[1][0] = (0x7D94E12587180B2DL ^ (-8L))) , &p_2021->g_112)), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(255UL, 2)), l_215)))), 4)) < 0xB473L), p_2021->g_162)))) && 0xFAL) >= l_197), 6)) && p_53);
                (*p_52) = (*p_52);
            }
            (*l_157) &= ((*l_145) = (p_2021->g_2 ^ l_185));
        }
    }
    return (*p_2021->g_87);
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_6 p_2021->g_87 p_2021->g_20 p_2021->g_45 p_2021->g_20.f0
 * writes: p_2021->g_6 p_2021->g_112
 */
int32_t * func_55(int8_t  p_56, int32_t ** p_57, uint64_t  p_58, uint8_t  p_59, int8_t  p_60, struct S1 * p_2021)
{ /* block id: 29 */
    int8_t l_93 = (-1L);
    int32_t l_102 = 0x3E49ECA5L;
    uint16_t *l_103 = (void*)0;
    int32_t l_104 = 3L;
    union U0 *l_109 = &p_2021->g_20;
    int32_t l_110 = 0x03AED21BL;
    int64_t *l_111 = &p_2021->g_112;
    uint8_t l_113 = 3UL;
    int8_t *l_114 = &l_93;
    (**p_57) ^= (safe_rshift_func_uint16_t_u_s((l_93 ^= ((void*)0 != &p_2021->g_73[3][5][0])), p_59));
    (**p_57) = (safe_lshift_func_uint16_t_u_u(0x7A0CL, (0x38L | ((*l_114) = (((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((+(((((*l_111) = ((l_104 &= (+(l_102 &= ((p_56 , (0x69L & 0L)) || p_60)))) | (safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_int8_t_s_u((((&p_2021->g_20 == l_109) , (((*p_2021->g_87) , l_93) | 1L)) , (-1L)), 2)) != l_110) || 0x9CL) , 0x6226L), 5)))) , (void*)0) != (void*)0) ^ l_113)), p_2021->g_45)), p_2021->g_20.f0)) , 0xABL) , p_2021->g_6)))));
    return &p_2021->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_45
 * writes:
 */
uint64_t  func_62(int32_t * p_63, struct S1 * p_2021)
{ /* block id: 25 */
    int32_t *l_88[3][5] = {{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45},{&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45,&p_2021->g_45}};
    int32_t *l_90 = &p_2021->g_45;
    int32_t **l_89 = &l_90;
    int i, j;
    (*l_89) = (l_88[0][3] = &p_2021->g_45);
    return (*l_90);
}


/* ------------------------------------------ */
/* 
 * reads : p_2021->g_6 p_2021->g_73 p_2021->g_86 p_2021->g_45
 * writes: p_2021->g_73 p_2021->g_45 p_2021->g_87
 */
uint32_t  func_64(int64_t  p_65, int16_t  p_66, int32_t * p_67, struct S1 * p_2021)
{ /* block id: 20 */
    uint16_t *l_72[2];
    int32_t l_74 = 8L;
    int32_t l_75 = 0x07106FA4L;
    int32_t l_76 = 0x72762B6CL;
    int32_t l_77 = 0L;
    int32_t l_78 = (-1L);
    int32_t l_79 = 0x1925C1F9L;
    int32_t l_80 = 0x24A23C0FL;
    int32_t l_81 = 3L;
    int32_t l_82 = (-2L);
    int i;
    for (i = 0; i < 2; i++)
        l_72[i] = &p_2021->g_73[3][5][0];
    (*p_2021->g_86) &= (safe_div_func_uint16_t_u_u(p_2021->g_6, (--p_2021->g_73[3][5][0])));
    p_2021->g_87 = &p_2021->g_20;
    return p_65;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_2022;
    struct S1* p_2021 = &c_2022;
    struct S1 c_2023 = {
        6L, // p_2021->g_2
        0x5C9E53E58BFC4F27L, // p_2021->g_3
        (void*)0, // p_2021->g_4
        0x362DAAB7L, // p_2021->g_6
        &p_2021->g_6, // p_2021->g_5
        {4294967295UL}, // p_2021->g_20
        (-1L), // p_2021->g_45
        {{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}},{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}},{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}},{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}},{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}},{{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL},{65527UL,65527UL,65527UL,1UL}}}, // p_2021->g_73
        {{{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6}},{{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6}},{{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6}},{{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6}},{{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6},{(void*)0,&p_2021->g_6,&p_2021->g_45,&p_2021->g_6}}}, // p_2021->g_85
        &p_2021->g_45, // p_2021->g_86
        &p_2021->g_20, // p_2021->g_87
        0x2F182F57C3633543L, // p_2021->g_112
        {&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6,&p_2021->g_6}, // p_2021->g_115
        {0x2CD61D1BL}, // p_2021->g_133
        0xC71F3EC1DEC27F6CL, // p_2021->g_134
        {{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}},{{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL},{0x5DL,0x7FL,0x5CL}}}, // p_2021->g_140
        8L, // p_2021->g_162
        0xCDL, // p_2021->g_187
        (-6L), // p_2021->g_193
        0x096E9AEAL, // p_2021->g_224
        65534UL, // p_2021->g_232
        {0x74E60A2CL}, // p_2021->g_274
        &p_2021->g_45, // p_2021->g_284
        {4294967287UL}, // p_2021->g_293
        (void*)0, // p_2021->g_311
        (void*)0, // p_2021->g_325
        &p_2021->g_325, // p_2021->g_324
        &p_2021->g_324, // p_2021->g_323
        0x52BFB4BC8B719433L, // p_2021->g_351
        0x68F09BE0L, // p_2021->g_356
        {{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}},{{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL},{2L,(-1L),0x19683474L,0x0D8FB97BL,0x2D3105DCL,0x330DDA57L,0x469D0EBEL}}}, // p_2021->g_371
        0x47D9DB9258D98132L, // p_2021->g_403
        {&p_2021->g_112,&p_2021->g_112,&p_2021->g_112,&p_2021->g_112,&p_2021->g_112}, // p_2021->g_409
        &p_2021->g_409[3], // p_2021->g_408
        {&p_2021->g_187,&p_2021->g_187,&p_2021->g_187,&p_2021->g_187,&p_2021->g_187}, // p_2021->g_430
        &p_2021->g_430[0], // p_2021->g_429
        &p_2021->g_403, // p_2021->g_437
        &p_2021->g_437, // p_2021->g_436
        &p_2021->g_436, // p_2021->g_435
        &p_2021->g_115[5], // p_2021->g_465
        (-5L), // p_2021->g_579
        &p_2021->g_579, // p_2021->g_578
        {{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}},{{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0},{&p_2021->g_578,&p_2021->g_578,(void*)0}}}, // p_2021->g_577
        &p_2021->g_577[5][8][0], // p_2021->g_580
        {{0xCAF7503FL},{0xCAF7503FL},{0xCAF7503FL},{0xCAF7503FL},{0xCAF7503FL},{0xCAF7503FL}}, // p_2021->g_581
        0L, // p_2021->g_624
        &p_2021->g_624, // p_2021->g_623
        &p_2021->g_623, // p_2021->g_622
        252UL, // p_2021->g_652
        &p_2021->g_115[5], // p_2021->g_701
        &p_2021->g_87, // p_2021->g_709
        0L, // p_2021->g_728
        {&p_2021->g_311,&p_2021->g_311,&p_2021->g_311,&p_2021->g_311}, // p_2021->g_746
        &p_2021->g_746[3], // p_2021->g_745
        {0x6753BE9CL}, // p_2021->g_768
        0x7B74C517L, // p_2021->g_850
        {{{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L}},{{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L},{0x2E7BB7C6L,2UL,2UL,0x2E7BB7C6L,0x2E7BB7C6L}}}, // p_2021->g_858
        {0x76BBF65BL}, // p_2021->g_1013
        0x958DL, // p_2021->g_1064
        0xCD25L, // p_2021->g_1070
        {0x96A7F327L}, // p_2021->g_1080
        &p_2021->g_728, // p_2021->g_1103
        {{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}},{{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103},{&p_2021->g_1103,&p_2021->g_1103}}}, // p_2021->g_1102
        (-1L), // p_2021->g_1174
        4294967295UL, // p_2021->g_1255
        &p_2021->g_87, // p_2021->g_1266
        18446744073709551611UL, // p_2021->g_1272
        &p_2021->g_73[3][5][0], // p_2021->g_1291
        &p_2021->g_1291, // p_2021->g_1290
        &p_2021->g_1290, // p_2021->g_1289
        &p_2021->g_1289, // p_2021->g_1288
        &p_2021->g_1288, // p_2021->g_1287
        &p_2021->g_112, // p_2021->g_1293
        &p_2021->g_1293, // p_2021->g_1292
        &p_2021->g_430[0], // p_2021->g_1381
        3UL, // p_2021->g_1422
        &p_2021->g_115[5], // p_2021->g_1451
        (void*)0, // p_2021->g_1458
        &p_2021->g_1458, // p_2021->g_1457
        &p_2021->g_1457, // p_2021->g_1456
        4294967291UL, // p_2021->g_1497
        1UL, // p_2021->g_1528
        &p_2021->g_2, // p_2021->g_1533
        {&p_2021->g_1533,&p_2021->g_1533,&p_2021->g_1533,&p_2021->g_1533,&p_2021->g_1533}, // p_2021->g_1532
        &p_2021->g_115[5], // p_2021->g_1536
        (void*)0, // p_2021->g_1604
        &p_2021->g_284, // p_2021->g_1646
        {0xDCBDB6D9L}, // p_2021->g_1665
        &p_2021->g_1604, // p_2021->g_1803
        &p_2021->g_1803, // p_2021->g_1802
        &p_2021->g_1802, // p_2021->g_1801
        &p_2021->g_1801, // p_2021->g_1800
        1UL, // p_2021->g_1846
        (void*)0, // p_2021->g_1874
        {1UL}, // p_2021->g_1901
        {{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}},{{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L},{0x99L,0xA1L,0x74L,0xF5L,0x86L,0xB7L}}}, // p_2021->g_1902
        {&p_2021->g_115[5],&p_2021->g_115[5],&p_2021->g_115[5],&p_2021->g_115[5],&p_2021->g_115[5],&p_2021->g_115[5],&p_2021->g_115[5]}, // p_2021->g_2002
        0x4279A1AFL, // p_2021->g_2020
    };
    c_2022 = c_2023;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2021);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2021->g_2, "p_2021->g_2", print_hash_value);
    transparent_crc(p_2021->g_3, "p_2021->g_3", print_hash_value);
    transparent_crc(p_2021->g_6, "p_2021->g_6", print_hash_value);
    transparent_crc(p_2021->g_45, "p_2021->g_45", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2021->g_73[i][j][k], "p_2021->g_73[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2021->g_112, "p_2021->g_112", print_hash_value);
    transparent_crc(p_2021->g_134, "p_2021->g_134", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2021->g_140[i][j][k], "p_2021->g_140[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2021->g_162, "p_2021->g_162", print_hash_value);
    transparent_crc(p_2021->g_187, "p_2021->g_187", print_hash_value);
    transparent_crc(p_2021->g_193, "p_2021->g_193", print_hash_value);
    transparent_crc(p_2021->g_224, "p_2021->g_224", print_hash_value);
    transparent_crc(p_2021->g_232, "p_2021->g_232", print_hash_value);
    transparent_crc(p_2021->g_274.f0, "p_2021->g_274.f0", print_hash_value);
    transparent_crc(p_2021->g_293.f0, "p_2021->g_293.f0", print_hash_value);
    transparent_crc(p_2021->g_351, "p_2021->g_351", print_hash_value);
    transparent_crc(p_2021->g_356, "p_2021->g_356", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2021->g_371[i][j][k], "p_2021->g_371[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2021->g_403, "p_2021->g_403", print_hash_value);
    transparent_crc(p_2021->g_579, "p_2021->g_579", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2021->g_581[i].f0, "p_2021->g_581[i].f0", print_hash_value);

    }
    transparent_crc(p_2021->g_624, "p_2021->g_624", print_hash_value);
    transparent_crc(p_2021->g_652, "p_2021->g_652", print_hash_value);
    transparent_crc(p_2021->g_728, "p_2021->g_728", print_hash_value);
    transparent_crc(p_2021->g_768.f0, "p_2021->g_768.f0", print_hash_value);
    transparent_crc(p_2021->g_850, "p_2021->g_850", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2021->g_858[i][j][k], "p_2021->g_858[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2021->g_1013.f0, "p_2021->g_1013.f0", print_hash_value);
    transparent_crc(p_2021->g_1064, "p_2021->g_1064", print_hash_value);
    transparent_crc(p_2021->g_1070, "p_2021->g_1070", print_hash_value);
    transparent_crc(p_2021->g_1080.f0, "p_2021->g_1080.f0", print_hash_value);
    transparent_crc(p_2021->g_1174, "p_2021->g_1174", print_hash_value);
    transparent_crc(p_2021->g_1255, "p_2021->g_1255", print_hash_value);
    transparent_crc(p_2021->g_1272, "p_2021->g_1272", print_hash_value);
    transparent_crc(p_2021->g_1422, "p_2021->g_1422", print_hash_value);
    transparent_crc(p_2021->g_1497, "p_2021->g_1497", print_hash_value);
    transparent_crc(p_2021->g_1528, "p_2021->g_1528", print_hash_value);
    transparent_crc(p_2021->g_1665.f0, "p_2021->g_1665.f0", print_hash_value);
    transparent_crc(p_2021->g_1846, "p_2021->g_1846", print_hash_value);
    transparent_crc(p_2021->g_1901.f0, "p_2021->g_1901.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2021->g_1902[i][j][k], "p_2021->g_1902[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2021->g_2020, "p_2021->g_2020", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
