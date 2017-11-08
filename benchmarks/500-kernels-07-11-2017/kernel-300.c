// -g 79,88,1 -l 1,88,1
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


// Seed: 1729703061

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
};

union U1 {
   volatile struct S0  f0;
   uint16_t  f1;
   int32_t  f2;
   uint32_t  f3;
};

struct S2 {
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    uint16_t g_20;
    uint16_t g_25;
    uint16_t * volatile g_24[2][4];
    int32_t g_53[8];
    int32_t * volatile g_52;
    int8_t g_93;
    uint64_t g_95;
    int32_t g_99;
    int32_t ** volatile g_100;
    int32_t *g_102;
    int32_t ** volatile g_101[9];
    int64_t g_116;
    int64_t *g_119;
    int64_t **g_118;
    int64_t *** volatile g_117;
    uint32_t g_128;
    uint8_t g_134;
    uint16_t g_138;
    uint32_t *g_142[3][9];
    uint32_t **g_141;
    uint32_t *** volatile g_140;
    uint64_t g_188[5];
    uint16_t *g_190;
    int32_t **g_234;
    int32_t *** volatile g_233[10];
    volatile union U1 g_284;
    uint16_t g_305;
    uint16_t **g_312;
    volatile union U1 g_348;
    int64_t ***g_363;
    uint16_t * volatile *g_387;
    uint16_t * volatile * volatile * volatile g_386;
    uint16_t * volatile * volatile * volatile * volatile g_385;
    int32_t g_402;
    volatile uint16_t g_411;
    volatile union U1 g_446;
    int32_t g_477;
    int16_t g_529[6][7];
    int32_t * volatile g_531[10][9];
    volatile struct S0 * volatile g_549;
    volatile struct S0 * volatile g_550;
    volatile uint32_t g_576;
    int32_t * volatile g_578;
    int8_t g_613;
    uint16_t *g_639;
    int32_t g_652;
    int32_t g_654;
    uint32_t g_686[1][6];
    struct S0 g_716;
    struct S0 *g_715;
    volatile uint64_t g_731;
    volatile uint64_t * volatile g_730;
    volatile uint64_t * volatile * volatile g_729;
    int16_t * volatile g_733;
    int16_t * volatile *g_732;
    uint32_t g_747;
    int64_t *g_752[8][1][5];
    int64_t *g_753;
    struct S0 g_804;
    uint8_t g_811;
    uint8_t *g_810;
    union U1 g_815;
    union U1 g_930;
    volatile uint32_t g_947;
    union U1 g_957;
    union U1 g_960;
    uint32_t g_968[1];
    union U1 g_979;
    uint64_t *g_1080;
    uint64_t **g_1079;
    volatile int8_t g_1147;
    volatile int8_t *g_1146;
    volatile int8_t * volatile * volatile g_1145;
    volatile uint16_t g_1150;
    int32_t g_1153[2];
    int32_t g_1235[1];
    int32_t * volatile g_1243;
    struct S0 ** volatile g_1293;
    int64_t g_1309;
    uint64_t g_1311;
    int32_t ** volatile g_1314;
    int64_t *g_1321;
    int64_t **g_1320;
    int64_t *** volatile g_1319[1][4][3];
    int64_t *** volatile g_1322;
    int64_t *** volatile g_1323;
    uint8_t g_1365;
    int64_t ***g_1370[6][3][8];
    union U1 g_1376;
    int32_t g_1445;
    volatile uint32_t g_1482;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S2 * p_1485);
struct S0  func_8(uint32_t  p_9, uint32_t  p_10, uint64_t  p_11, struct S0  p_12, struct S2 * p_1485);
uint32_t  func_13(int8_t  p_14, int32_t  p_15, int32_t  p_16, struct S2 * p_1485);
uint16_t  func_27(uint64_t  p_28, uint16_t * p_29, struct S0  p_30, uint16_t * p_31, struct S2 * p_1485);
uint16_t * func_32(uint16_t * p_33, uint32_t  p_34, int64_t  p_35, uint16_t * p_36, int8_t  p_37, struct S2 * p_1485);
uint16_t * func_41(uint16_t * p_42, struct S2 * p_1485);
uint16_t * func_43(int32_t  p_44, int8_t  p_45, struct S2 * p_1485);
uint16_t  func_58(uint16_t * p_59, uint32_t  p_60, struct S2 * p_1485);
uint16_t * func_61(uint16_t *** p_62, uint32_t  p_63, uint32_t  p_64, uint16_t * p_65, struct S2 * p_1485);
uint16_t *** func_66(int64_t  p_67, uint16_t *** p_68, int32_t  p_69, int8_t  p_70, struct S2 * p_1485);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1485->g_5 p_1485->g_1482 p_1485->g_732 p_1485->g_733 p_1485->g_529
 * writes: p_1485->g_5 p_1485->g_1482
 */
int16_t  func_1(struct S2 * p_1485)
{ /* block id: 4 */
    uint32_t l_2[1][1];
    int32_t l_21 = 0x02C4475EL;
    struct S0 l_1203 = {0xE220L};
    uint8_t l_1259 = 0UL;
    int8_t l_1262 = (-2L);
    uint32_t l_1307[9][6] = {{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL},{1UL,4294967295UL,1UL,1UL,4294967295UL,1UL}};
    int8_t l_1366[8][2] = {{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L},{0x42L,0x42L}};
    uint64_t l_1367[2][3][7] = {{{0UL,1UL,2UL,0UL,1UL,0UL,2UL},{0UL,1UL,2UL,0UL,1UL,0UL,2UL},{0UL,1UL,2UL,0UL,1UL,0UL,2UL}},{{0UL,1UL,2UL,0UL,1UL,0UL,2UL},{0UL,1UL,2UL,0UL,1UL,0UL,2UL},{0UL,1UL,2UL,0UL,1UL,0UL,2UL}}};
    uint8_t l_1378 = 0x78L;
    int64_t l_1381 = 0x084CCD74BC0C2BCFL;
    int32_t *l_1385[8];
    uint8_t **l_1388 = &p_1485->g_810;
    int16_t *l_1399 = (void*)0;
    int16_t **l_1398[7] = {&l_1399,&l_1399,&l_1399,&l_1399,&l_1399,&l_1399,&l_1399};
    int16_t ***l_1397 = &l_1398[6];
    int32_t l_1444 = 0x029B91C5L;
    int8_t l_1449 = 0x10L;
    uint8_t l_1471 = 0xDCL;
    int16_t l_1480 = 1L;
    int32_t l_1481 = 0x38561AF8L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 4294967295UL;
    }
    for (i = 0; i < 8; i++)
        l_1385[i] = &p_1485->g_1235[0];
    for (p_1485->g_5 = 0; (p_1485->g_5 >= 0); p_1485->g_5 -= 1)
    { /* block id: 7 */
        uint16_t *l_19[4][2][6] = {{{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20},{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20}},{{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20},{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20}},{{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20},{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20}},{{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20},{&p_1485->g_20,&p_1485->g_20,(void*)0,&p_1485->g_20,&p_1485->g_20,&p_1485->g_20}}};
        int32_t l_26[6] = {2L,2L,2L,2L,2L,2L};
        uint16_t *l_39[3][6][4] = {{{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0}},{{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0}},{{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,(void*)0}}};
        uint16_t **l_38 = &l_39[2][0][0];
        int8_t l_40 = 7L;
        int32_t l_1176 = 1L;
        uint16_t l_1202[8] = {0x228DL,0x228DL,0x228DL,0x228DL,0x228DL,0x228DL,0x228DL,0x228DL};
        int32_t *l_1234 = &p_1485->g_1235[0];
        int32_t l_1242 = (-1L);
        int64_t *l_1318 = &p_1485->g_1309;
        int64_t **l_1317 = &l_1318;
        uint32_t l_1349 = 5UL;
        uint64_t l_1377 = 0xA2C24C95CD347406L;
        int16_t *l_1396 = &p_1485->g_529[4][6];
        int16_t **l_1395 = &l_1396;
        int16_t ***l_1394 = &l_1395;
        union U1 *l_1477 = (void*)0;
        int i, j, k;
        (1 + 1);
    }
    ++p_1485->g_1482;
    return (**p_1485->g_732);
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_979.f2 p_1485->g_53 p_1485->g_549 p_1485->g_446.f0
 * writes: p_1485->g_979.f2
 */
struct S0  func_8(uint32_t  p_9, uint32_t  p_10, uint64_t  p_11, struct S0  p_12, struct S2 * p_1485)
{ /* block id: 580 */
    int32_t *l_1206 = &p_1485->g_53[4];
    int32_t l_1209 = 0x1430D327L;
    int32_t l_1210 = 0x70CE8BBDL;
    int32_t l_1218 = 0x478C6DDAL;
    int32_t l_1221 = 0x42EF681FL;
    int32_t l_1224 = 0x43141E68L;
    int32_t l_1230 = 0x5F91F53FL;
    uint32_t l_1231 = 1UL;
    for (p_1485->g_979.f2 = 28; (p_1485->g_979.f2 < (-20)); p_1485->g_979.f2 = safe_sub_func_uint8_t_u_u(p_1485->g_979.f2, 5))
    { /* block id: 583 */
        int32_t *l_1207 = (void*)0;
        int32_t *l_1208 = &p_1485->g_99;
        int32_t *l_1211 = &p_1485->g_960.f2;
        int32_t *l_1212 = &p_1485->g_960.f2;
        int32_t l_1213[5][5][1] = {{{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L}}};
        int32_t *l_1214 = &l_1210;
        int32_t *l_1215 = (void*)0;
        int32_t *l_1216 = &l_1213[1][0][0];
        int32_t *l_1217 = &p_1485->g_957.f2;
        int32_t *l_1219 = (void*)0;
        int32_t *l_1220 = &l_1213[2][4][0];
        int32_t *l_1222 = &p_1485->g_402;
        int32_t *l_1223 = (void*)0;
        int32_t *l_1225 = &p_1485->g_99;
        int32_t *l_1226 = &p_1485->g_652;
        int32_t *l_1227 = &l_1209;
        int32_t *l_1228 = &p_1485->g_99;
        int32_t *l_1229[8][9] = {{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0},{(void*)0,(void*)0,&l_1209,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&p_1485->g_5,&l_1209,(void*)0}};
        int i, j, k;
        l_1206 = l_1206;
        --l_1231;
        if ((*l_1206))
            break;
    }
    return (*p_1485->g_549);
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_686 p_1485->g_1146 p_1485->g_1147 p_1485->g_53 p_1485->g_639 p_1485->g_138 p_1485->g_387 p_1485->g_190 p_1485->g_25 p_1485->g_1080
 * writes: p_1485->g_53 p_1485->g_188
 */
uint32_t  func_13(int8_t  p_14, int32_t  p_15, int32_t  p_16, struct S2 * p_1485)
{ /* block id: 573 */
    uint16_t **l_1181[7] = {&p_1485->g_639,&p_1485->g_190,&p_1485->g_639,&p_1485->g_639,&p_1485->g_190,&p_1485->g_639,&p_1485->g_639};
    int32_t l_1184 = 0x7EF2ABD5L;
    int32_t *l_1185[10] = {&p_1485->g_99,&p_1485->g_53[5],&p_1485->g_99,&p_1485->g_99,&p_1485->g_53[5],&p_1485->g_99,&p_1485->g_99,&p_1485->g_53[5],&p_1485->g_99,&p_1485->g_99};
    struct S0 **l_1196 = &p_1485->g_715;
    struct S0 **l_1198 = &p_1485->g_715;
    struct S0 ***l_1197 = &l_1198;
    uint16_t l_1199 = 0xDBE4L;
    uint8_t l_1200 = 0UL;
    uint16_t l_1201 = 65535UL;
    int i;
    p_1485->g_53[5] &= ((safe_rshift_func_int8_t_s_u((((((((safe_rshift_func_int8_t_s_s((((l_1181[3] = &p_1485->g_639) != (void*)0) < 0x09245F757EDC80D1L), ((safe_sub_func_int16_t_s_s(p_15, (((((((p_1485->g_686[0][3] , (*p_1485->g_1146)) != p_14) >= l_1184) && p_16) , 0x2954C33CA291687DL) , l_1184) , p_14))) >= p_15))) > p_16) , l_1184) >= 0x16L) >= l_1184) && p_14) ^ l_1184), 0)) , l_1184);
    l_1201 &= (((((((p_15 || ((*p_1485->g_1080) = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(p_15)) , ((safe_sub_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(p_15)) >= (*p_1485->g_1146)) < (*p_1485->g_639)), (((*p_1485->g_639) < ((safe_mul_func_int8_t_s_s(p_15, ((l_1196 == ((*l_1197) = &p_1485->g_715)) >= p_16))) && p_15)) == l_1199))) ^ 255UL)), (**p_1485->g_387))), 4)))) >= p_16) <= l_1200) >= p_15) & 0x602EL) > (-1L)) , 0x7E73155EL);
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_134 p_1485->g_402 p_1485->g_730 p_1485->g_731 p_1485->g_53 p_1485->g_716.f0 p_1485->g_733 p_1485->g_529 p_1485->g_4 p_1485->g_947 p_1485->g_305 p_1485->g_957 p_1485->g_960 p_1485->g_387 p_1485->g_190 p_1485->g_25 p_1485->g_138 p_1485->g_810 p_1485->g_811 p_1485->g_968 p_1485->g_979 p_1485->g_95 p_1485->g_550 p_1485->g_348.f0 p_1485->g_128 p_1485->g_732 p_1485->g_284.f0.f0 p_1485->g_613 p_1485->g_52 p_1485->g_116 p_1485->g_99 p_1485->g_1145 p_1485->g_1150 p_1485->g_957.f1 p_1485->g_639 p_1485->g_363 p_1485->g_118 p_1485->g_815.f1 p_1485->g_815.f2 p_1485->g_979.f1
 * writes: p_1485->g_134 p_1485->g_402 p_1485->g_53 p_1485->g_716.f0 p_1485->g_95 p_1485->g_947 p_1485->g_138 p_1485->g_811 p_1485->g_613 p_1485->g_446.f0 p_1485->g_305 p_1485->g_529 p_1485->g_102 p_1485->g_25 p_1485->g_190 p_1485->g_930.f2 p_1485->g_1079 p_1485->g_968 p_1485->g_804 p_1485->g_1150 p_1485->g_957.f1 p_1485->g_118 p_1485->g_1080 p_1485->g_815.f1 p_1485->g_815.f2 p_1485->g_979.f1
 */
uint16_t  func_27(uint64_t  p_28, uint16_t * p_29, struct S0  p_30, uint16_t * p_31, struct S2 * p_1485)
{ /* block id: 363 */
    uint8_t *l_809 = &p_1485->g_134;
    uint8_t *l_813 = &p_1485->g_811;
    int32_t ***l_814[9] = {(void*)0,&p_1485->g_234,(void*)0,(void*)0,&p_1485->g_234,(void*)0,(void*)0,&p_1485->g_234,(void*)0};
    int32_t l_820 = 6L;
    int32_t l_826 = (-5L);
    uint32_t l_831 = 0x035B563CL;
    int16_t *l_849 = &p_1485->g_529[1][2];
    int16_t **l_848 = &l_849;
    uint32_t *l_882 = &p_1485->g_686[0][2];
    int32_t l_919[1];
    uint16_t **l_961 = &p_1485->g_190;
    int32_t l_966 = (-6L);
    uint16_t l_1000 = 0x2B8BL;
    int8_t *l_1026 = &p_1485->g_613;
    int8_t **l_1025 = &l_1026;
    int64_t l_1070 = 0x2F045842EAD20CF5L;
    uint32_t l_1135 = 0xCF87E49DL;
    volatile int8_t * volatile * volatile l_1148[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t *l_1169 = &p_1485->g_188[1];
    int16_t l_1175 = 0x2FB6L;
    int i;
    for (i = 0; i < 1; i++)
        l_919[i] = 1L;
    for (p_1485->g_134 = 0; (p_1485->g_134 <= 7); p_1485->g_134 += 1)
    { /* block id: 366 */
        int32_t *l_805 = &p_1485->g_53[4];
        int8_t l_808 = 1L;
        uint8_t *l_812 = (void*)0;
        int16_t l_817 = (-1L);
        int32_t l_818 = 1L;
        int32_t l_819 = 0x347F9A7CL;
        int16_t l_822[3];
        int32_t l_824 = 8L;
        int32_t l_825 = (-1L);
        int32_t l_827 = 1L;
        int32_t l_829[8][7][4] = {{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}},{{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L},{(-1L),0x27A5B3BCL,0x4076EB35L,0x2D694F57L}}};
        uint32_t l_841 = 4294967293UL;
        int16_t l_898[1][2][5] = {{{0x4E2DL,(-1L),0x4E2DL,0x4E2DL,(-1L)},{0x4E2DL,(-1L),0x4E2DL,0x4E2DL,(-1L)}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_822[i] = 0x50A8L;
        l_805 = l_805;
        for (p_1485->g_402 = 4; (p_1485->g_402 >= 0); p_1485->g_402 -= 1)
        { /* block id: 370 */
            int64_t **l_816 = &p_1485->g_119;
            int32_t l_821 = 0x2BDFCBF3L;
            int32_t l_823 = (-1L);
            int32_t l_828 = 0L;
            int32_t l_830[1][6] = {{0L,0x1BFFC29FL,0L,0L,0x1BFFC29FL,0L}};
            uint16_t l_914 = 0xC17EL;
            int i, j;
            p_1485->g_53[p_1485->g_134] ^= ((*p_1485->g_730) >= p_28);
        }
    }
    for (p_1485->g_716.f0 = 0; (p_1485->g_716.f0 <= 0); p_1485->g_716.f0 += 1)
    { /* block id: 423 */
        int32_t l_938 = (-5L);
        int32_t l_945 = 0x2DD61EDFL;
        int16_t l_956 = 0x2055L;
        uint16_t l_967 = 65526UL;
        int32_t **l_1006 = &p_1485->g_102;
        int8_t *l_1010 = &p_1485->g_613;
        int32_t l_1033 = 0x5BC43E3FL;
        int32_t l_1041 = (-1L);
        int32_t l_1042 = 0x1DB73A36L;
        int32_t l_1046 = 1L;
        uint16_t l_1047 = 0UL;
        uint32_t *l_1063 = &p_1485->g_686[0][2];
        uint16_t l_1071 = 0x0CA4L;
        uint64_t **l_1077 = (void*)0;
        int64_t *l_1084 = &l_1070;
        int32_t l_1133 = 0L;
        int32_t l_1134 = 1L;
        int32_t *l_1144 = &p_1485->g_960.f2;
        int i;
        if (l_919[p_1485->g_716.f0])
            break;
        if ((safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s(0x3F4FL, (*p_1485->g_733))) || p_28) , p_1485->g_4), (+(l_919[p_1485->g_716.f0] | (l_938 = l_919[p_1485->g_716.f0]))))))
        { /* block id: 426 */
            int32_t l_940 = 1L;
            int32_t l_941 = 0x36C3CF46L;
            int32_t l_942[6][4][5] = {{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}},{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}},{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}},{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}},{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}},{{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L},{0x7D69485FL,0x24E12661L,1L,(-1L),0x659E1122L}}};
            int i, j, k;
            for (p_1485->g_95 = 0; (p_1485->g_95 <= 0); p_1485->g_95 += 1)
            { /* block id: 429 */
                int32_t l_939 = 0x08F066C1L;
                int32_t l_943 = 0x607C51BAL;
                int32_t l_944 = 0x7DB3614EL;
                int32_t l_946 = 0x7AA0E4F8L;
                uint64_t *l_951 = (void*)0;
                uint64_t **l_950 = &l_951;
                int32_t *l_955[8] = {&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0],&l_919[p_1485->g_716.f0]};
                int i;
                --p_1485->g_947;
                for (p_1485->g_138 = 0; (p_1485->g_138 <= 0); p_1485->g_138 += 1)
                { /* block id: 433 */
                    uint8_t l_952[8] = {0x91L,0xB8L,0x91L,0x91L,0xB8L,0x91L,0x91L,0xB8L};
                    int32_t *l_954 = &p_1485->g_930.f2;
                    int i;
                    l_952[2] = (l_950 != (void*)0);
                    for (l_831 = 0; (l_831 <= 1); l_831 += 1)
                    { /* block id: 437 */
                        int32_t *l_953 = (void*)0;
                        l_954 = l_953;
                    }
                }
                for (p_1485->g_811 = 0; (p_1485->g_811 <= 0); p_1485->g_811 += 1)
                { /* block id: 443 */
                    l_955[5] = &l_944;
                }
            }
        }
        else
        { /* block id: 447 */
            return (*p_31);
        }
        if ((l_938 = (((l_956 && (p_1485->g_957 , ((0x67F47D34231EB4E6L <= (+((safe_mul_func_uint8_t_u_u(((p_1485->g_960 , (((~l_945) , ((**p_1485->g_387) , l_961)) != ((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_28, ((*p_1485->g_810) == l_966))), l_967)) , &p_31))) < l_967), p_28)) == p_30.f0))) , 0x32642B9EL))) || p_1485->g_968[0]) , p_30.f0)))
        { /* block id: 451 */
            int16_t l_969[5][5][5] = {{{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L}},{{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L}},{{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L}},{{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L}},{{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L},{0x29B0L,2L,0x1A0DL,0x1AB2L,1L}}};
            int i, j, k;
            l_969[3][0][3] = (-6L);
        }
        else
        { /* block id: 453 */
            int8_t l_970[10] = {(-7L),8L,0x19L,8L,(-7L),(-7L),8L,0x19L,8L,(-7L)};
            int32_t l_990[10][7][3] = {{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}},{{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L},{8L,0x563BF991L,0x0B60B418L}}};
            int32_t l_996 = 1L;
            int32_t l_1072 = 0x5674DEFDL;
            uint64_t ***l_1083 = &l_1077;
            int32_t *l_1097 = &l_1041;
            int8_t l_1112 = 6L;
            uint8_t *l_1143 = &p_1485->g_134;
            int i, j, k;
            for (p_1485->g_811 = 0; (p_1485->g_811 <= 0); p_1485->g_811 += 1)
            { /* block id: 456 */
                uint64_t *l_995 = &p_1485->g_95;
                int32_t l_997 = 5L;
                int8_t *l_998 = &l_970[3];
                int8_t *l_999 = (void*)0;
                int8_t *l_1001 = &p_1485->g_613;
                int16_t *l_1002 = &l_956;
                int32_t l_1003 = (-1L);
                int32_t **l_1007 = &p_1485->g_102;
                int32_t l_1032 = 0L;
                int32_t l_1034 = 0x77B1D2B1L;
                int32_t l_1035 = (-2L);
                int32_t l_1037 = 0x6200AF1CL;
                int32_t l_1040 = 3L;
                int32_t l_1043 = 0x713F8C6AL;
                int32_t l_1045 = 0x57C76EF3L;
                int8_t l_1122[10] = {0x4AL,0x4AL,0x4AL,0x4AL,0x4AL,0x4AL,0x4AL,0x4AL,0x4AL,0x4AL};
                int i;
                for (p_1485->g_138 = 0; (p_1485->g_138 <= 0); p_1485->g_138 += 1)
                { /* block id: 459 */
                    l_970[3] = 0x56F4F320L;
                }
                l_1003 &= (safe_mul_func_uint16_t_u_u((l_945 && 5UL), ((*l_1002) &= (safe_lshift_func_int8_t_s_u(((*l_1001) = (l_1000 = ((*l_998) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((p_1485->g_979 , (((p_30.f0 , (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((p_28 > (safe_sub_func_int64_t_s_s((((!((0UL & (safe_mul_func_int8_t_s_s((l_990[8][4][2] = (safe_mul_func_int16_t_s_s(0L, 0x5CBCL))), (safe_add_func_uint64_t_u_u((!((*l_995) ^= (safe_lshift_func_uint8_t_u_u(p_30.f0, 3)))), p_28))))) < 65535UL)) < l_996) & 0x3DE5L), l_997))), 7)) , p_30.f0), 0x42A05044L))) <= l_997) > (*p_1485->g_733))), 0x389F81D18A3DBAF1L)), p_30.f0))))), p_28)))));
                if ((l_990[8][4][2] |= (safe_sub_func_uint16_t_u_u((*p_29), (l_1006 == l_1007)))))
                { /* block id: 470 */
                    volatile struct S0 *l_1008 = &p_1485->g_446.f0;
                    int8_t **l_1009 = &l_1001;
                    int32_t l_1013 = 8L;
                    int64_t l_1027 = 0x13929BABAF99CBFDL;
                    int32_t l_1031[2][8][9] = {{{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL}},{{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL},{(-5L),0x7BC778B7L,9L,9L,0x7BC778B7L,(-5L),0x0DAAF364L,(-1L),0x607EFA2AL}}};
                    int16_t **l_1052 = &l_849;
                    int16_t ***l_1053 = &l_848;
                    uint8_t l_1058 = 5UL;
                    int i, j, k;
                    (*l_1008) = (*p_1485->g_550);
                    l_1027 |= (((((*l_1009) = &p_1485->g_93) != l_1010) , (!(safe_sub_func_uint8_t_u_u(l_1013, (safe_mul_func_int16_t_s_s(p_28, (((safe_mod_func_int16_t_s_s(((*l_1002) = (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((((++(*l_809)) <= (!l_1013)) , (p_1485->g_305 , (0x68D8L == (p_1485->g_128 , (((l_1009 != l_1025) >= (**p_1485->g_732)) | p_28))))))) , (**p_1485->g_732)), 1L)), 0xE1B6L)) | l_1013) <= 18446744073709551615UL)), 0x6128L)) && 0x5B02L) & p_1485->g_305))))))) < 18446744073709551615UL);
                    for (p_1485->g_305 = 0; (p_1485->g_305 <= 2); p_1485->g_305 += 1)
                    { /* block id: 478 */
                        int16_t l_1028 = 6L;
                        int32_t l_1029 = 1L;
                        int32_t l_1030 = (-1L);
                        int32_t l_1036 = (-1L);
                        int32_t l_1038 = 0x1D51FF33L;
                        int32_t l_1039 = 0x60FB5D8AL;
                        int32_t l_1044 = 0x0C67F479L;
                        ++l_1047;
                    }
                    (*l_1007) = (((safe_mod_func_int16_t_s_s(((*l_849) &= (((((((*l_1053) = l_1052) != &p_1485->g_733) , (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((0x0DB7L >= ((l_938 | (l_1058 = (l_1034 = 0x339E28F7L))) == ((safe_mul_func_int16_t_s_s(((p_29 == &l_956) > ((safe_div_func_int8_t_s_s((~(l_1063 == (void*)0)), l_990[0][1][2])) , p_30.f0)), (*p_31))) >= p_28))), 0x0365487AL)) , p_30.f0) || (*p_1485->g_810)) >= p_1485->g_731), (*p_1485->g_810)))) , p_30.f0) != (*p_1485->g_810)) , 0x1D85L)), 0x7C38L)) & l_997) , (void*)0);
                }
                else
                { /* block id: 486 */
                    uint8_t l_1066 = 6UL;
                    uint32_t *l_1069 = (void*)0;
                    int32_t l_1086 = 5L;
                    int32_t l_1096 = 2L;
                    struct S0 *l_1113 = &p_1485->g_804;
                    l_1072 &= (l_1071 |= (safe_div_func_uint64_t_u_u(((((*l_961) = func_43(p_30.f0, ((*l_1001) |= p_1485->g_284.f0.f0), p_1485)) != (p_1485->g_529[4][0] , p_31)) , (((l_1066 | (**p_1485->g_732)) != (0x13B1FD66822758F8L | (safe_sub_func_uint32_t_u_u(((l_1070 ^= l_1066) , l_1066), l_990[8][4][2])))) <= 1UL)), p_1485->g_116)));
                    for (p_1485->g_930.f2 = 0; (p_1485->g_930.f2 >= 0); p_1485->g_930.f2 -= 1)
                    { /* block id: 494 */
                        uint64_t ***l_1078 = (void*)0;
                        int32_t l_1085 = 0x660E8F26L;
                        int16_t **l_1087 = &l_849;
                        uint32_t *l_1094[10] = {&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0],&p_1485->g_968[0]};
                        int32_t l_1095 = 0x7367E095L;
                        struct S0 l_1108 = {0x86DFL};
                        int i;
                        l_1086 ^= (p_28 , (safe_lshift_func_uint16_t_u_u((1L <= (safe_lshift_func_int8_t_s_u(((((*l_995) = (((**l_1025) = p_1485->g_731) | (!((((!(((p_1485->g_1079 = l_1077) == (void*)0) == ((safe_mul_func_uint16_t_u_u(((((void*)0 != l_1083) , l_1084) == &l_1070), (**p_1485->g_387))) | p_1485->g_811))) , 0x07DAD457L) || p_28) & l_1066)))) && l_1085) , p_30.f0), 1))), 4)));
                        l_1096 = (((void*)0 != l_1087) ^ (safe_mul_func_uint16_t_u_u(((**p_1485->g_387) = ((p_28 & ((safe_mul_func_int8_t_s_s((((p_30.f0 || 0x04908EC50A68EC65L) < (p_28 ^ 3UL)) >= ((safe_add_func_uint32_t_u_u(((l_1086 = p_28) , ((p_1485->g_968[0] = 0UL) , 0xD0DD17B4L)), p_28)) && 0x2F7EF728CA2EF00BL)), l_1095)) < 65528UL)) , l_1095)), (*p_1485->g_733))));
                        l_1097 = &l_1095;
                        l_1112 &= (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0x26E3L, 14)) , (safe_mul_func_int8_t_s_s((((p_30.f0 >= (((void*)0 != &p_1485->g_811) == ((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((*l_1097) , ((((((*p_31) = (l_1108 , (--(*p_1485->g_190)))) >= (l_1095 = ((safe_unary_minus_func_uint8_t_u((p_28 >= l_1086))) , ((p_31 != (void*)0) != (*p_1485->g_733))))) , p_28) , (*p_31)) ^ 0xE507L)) <= p_28), 3)), 4)) ^ p_30.f0) | p_28) , (*p_1485->g_810)))) , (*l_1097)) & p_1485->g_99), (*p_1485->g_810)))), l_919[p_1485->g_716.f0]));
                    }
                    (*l_1113) = p_30;
                }
            }
            l_1148[5] = p_1485->g_1145;
            l_1097 = &l_990[9][0][2];
        }
        for (p_1485->g_95 = 0; (p_1485->g_95 <= 0); p_1485->g_95 += 1)
        { /* block id: 534 */
            int8_t l_1149 = (-10L);
            int32_t l_1154 = 9L;
            int32_t l_1155 = 0L;
            uint32_t l_1156 = 0x32036D1FL;
            p_1485->g_1150--;
            ++l_1156;
            for (p_1485->g_957.f1 = 0; (p_1485->g_957.f1 <= 0); p_1485->g_957.f1 += 1)
            { /* block id: 539 */
                uint64_t l_1170 = 5UL;
                (*p_1485->g_52) &= (((*p_29) & (l_1154 == (*p_1485->g_639))) || ((safe_sub_func_uint32_t_u_u(((++(*p_1485->g_639)) != (*p_31)), (((*p_1485->g_363) = (*p_1485->g_363)) == (void*)0))) ^ (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((p_1485->g_1080 = l_1169) != (void*)0), (((l_1155 = (l_1134 &= (p_28 > 5UL))) <= p_28) && 0x119E2086FAA2FCC5L))), l_1170)), 0UL))));
            }
            for (p_1485->g_815.f1 = 0; (p_1485->g_815.f1 <= 0); p_1485->g_815.f1 += 1)
            { /* block id: 549 */
                uint32_t l_1172 = 0x89F3B2A2L;
                for (p_1485->g_613 = 0; (p_1485->g_613 >= 0); p_1485->g_613 -= 1)
                { /* block id: 552 */
                    uint16_t l_1171[4];
                    uint32_t l_1173 = 4294967293UL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1171[i] = 65535UL;
                    for (l_1134 = 0; (l_1134 >= 0); l_1134 -= 1)
                    { /* block id: 555 */
                        l_1172 ^= l_1171[0];
                        return l_1173;
                    }
                }
            }
        }
    }
    for (p_1485->g_815.f2 = 0; (p_1485->g_815.f2 <= 0); p_1485->g_815.f2 += 1)
    { /* block id: 565 */
        for (p_1485->g_979.f1 = 0; (p_1485->g_979.f1 <= 8); p_1485->g_979.f1 += 1)
        { /* block id: 568 */
            int32_t l_1174 = 0x7E5BA85FL;
            int i;
            return l_1174;
        }
    }
    return l_1175;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_387 p_1485->g_190 p_1485->g_138 p_1485->g_99 p_1485->g_732 p_1485->g_733 p_1485->g_529 p_1485->g_652
 * writes: p_1485->g_25 p_1485->g_652
 */
uint16_t * func_32(uint16_t * p_33, uint32_t  p_34, int64_t  p_35, uint16_t * p_36, int8_t  p_37, struct S2 * p_1485)
{ /* block id: 359 */
    int64_t l_785 = 0x403C51AB490ACABAL;
    uint32_t *l_796 = (void*)0;
    struct S0 l_801 = {0xDF0AL};
    int32_t l_802 = 0x77FB518EL;
    int32_t *l_803 = &p_1485->g_652;
    (*l_803) &= (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((safe_mod_func_int64_t_s_s(p_35, (safe_rshift_func_int16_t_s_u(((!l_785) <= (safe_sub_func_int64_t_s_s((((safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_796 == ((((((p_37 && (+(0L > l_785))) == (safe_mul_func_uint8_t_u_u((p_34 == (safe_add_func_int64_t_s_s((((1UL >= ((*p_33) = (l_801 , (**p_1485->g_387)))) && 5UL) || p_37), l_785))), l_802))) , l_785) & 18446744073709551615UL) >= p_1485->g_99) , (void*)0)), (-1L))) | l_801.f0), (**p_1485->g_732))), 0x2C00L)) || p_35), p_34)) > p_35) || p_37), p_34))), 8)))) > l_785) | 0xF04310EF528BBEC7L) | p_1485->g_529[1][0]), 7)), l_785));
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_93 p_1485->g_402 p_1485->g_25 p_1485->g_5 p_1485->g_102 p_1485->g_305 p_1485->g_95 p_1485->g_128 p_1485->g_4 p_1485->g_363 p_1485->g_477 p_1485->g_613 p_1485->g_387 p_1485->g_190 p_1485->g_138 p_1485->g_99 p_1485->g_53 p_1485->g_639 p_1485->g_52 p_1485->g_652 p_1485->g_654 p_1485->g_134 p_1485->g_529 p_1485->g_385 p_1485->g_386 p_1485->g_686 p_1485->g_550 p_1485->g_348.f0 p_1485->g_729 p_1485->g_732 p_1485->g_747 p_1485->g_117 p_1485->g_118 p_1485->g_119 p_1485->g_716
 * writes: p_1485->g_93 p_1485->g_402 p_1485->g_25 p_1485->g_99 p_1485->g_477 p_1485->g_128 p_1485->g_118 p_1485->g_652 p_1485->g_654 p_1485->g_613 p_1485->g_134 p_1485->g_119 p_1485->g_138 p_1485->g_53 p_1485->g_102 p_1485->g_686 p_1485->g_116 p_1485->g_715 p_1485->g_716.f0 p_1485->g_747 p_1485->g_752 p_1485->g_753
 */
uint16_t * func_41(uint16_t * p_42, struct S2 * p_1485)
{ /* block id: 262 */
    int32_t l_582 = 1L;
    int32_t l_614 = 0x1BD9EB34L;
    int64_t **l_622 = &p_1485->g_119;
    int32_t l_641 = 7L;
    struct S0 l_645 = {0x1615L};
    uint16_t *l_655 = &p_1485->g_138;
    int32_t l_674 = 0L;
    int64_t l_718 = (-9L);
    int32_t l_766 = 0x6CDA6A2DL;
    int32_t l_767 = 0x6314FAE4L;
    int32_t l_769 = 0x7C86F418L;
    int32_t l_771 = 0x39063816L;
lbl_776:
    for (p_1485->g_93 = 8; (p_1485->g_93 >= 3); p_1485->g_93 -= 1)
    { /* block id: 265 */
        uint64_t l_589 = 18446744073709551606UL;
        int32_t *l_590 = &p_1485->g_5;
        struct S0 l_592 = {65535UL};
        uint32_t l_611[8] = {0x76B66AC1L,0x76B66AC1L,0x76B66AC1L,0x76B66AC1L,0x76B66AC1L,0x76B66AC1L,0x76B66AC1L,0x76B66AC1L};
        int i;
        for (p_1485->g_402 = 0; (p_1485->g_402 <= 8); p_1485->g_402 += 1)
        { /* block id: 268 */
            int32_t l_591 = 0x6EA8F3E8L;
            uint32_t *l_610 = &p_1485->g_128;
            int8_t *l_612[5];
            int64_t **l_621 = &p_1485->g_119;
            int i;
            for (i = 0; i < 5; i++)
                l_612[i] = &p_1485->g_613;
            (*p_1485->g_102) = (safe_rshift_func_uint16_t_u_s((l_582 <= ((safe_mod_func_int16_t_s_s(((8L < l_582) , (-2L)), ((*p_42)++))) < (((safe_mod_func_uint16_t_u_u((((l_582 > ((l_589 != ((void*)0 != l_590)) , ((l_582 , 0xA6860E63L) || (*l_590)))) , p_1485->g_93) != (*l_590)), l_582)) , 0x40L) , l_591))), 4));
            if (l_582)
                break;
            if ((*l_590))
                continue;
            if ((l_592 , (safe_add_func_uint8_t_u_u(((-7L) != (((*l_590) , (p_1485->g_477 = p_1485->g_305)) , (safe_unary_minus_func_int16_t_s((l_582 & p_1485->g_95))))), (safe_sub_func_uint8_t_u_u(1UL, (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_614 ^= ((((safe_add_func_uint64_t_u_u(((!(!(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_582 , (((*l_610) ^= ((safe_mod_func_uint16_t_u_u(l_582, 65529UL)) ^ (*l_590))) < l_591)), 4)), l_611[3])) || (*l_590)) , 1L))) > p_1485->g_95), l_582)) , 0x2F61F2F1L) , &p_1485->g_93) != (void*)0)), 1)), (-3L)))))))))
            { /* block id: 276 */
                uint64_t *l_637 = &l_589;
                int32_t l_638[3][5] = {{(-8L),0x122B9B50L,(-8L),(-8L),0x122B9B50L},{(-8L),0x122B9B50L,(-8L),(-8L),0x122B9B50L},{(-8L),0x122B9B50L,(-8L),(-8L),0x122B9B50L}};
                int i, j;
                (*p_1485->g_102) = ((safe_add_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(p_1485->g_4, ((((*p_1485->g_363) = l_621) != (l_622 = l_622)) ^ ((void*)0 == &p_1485->g_99)))), 5)) , ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(p_1485->g_477, ((+(safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_637) &= (safe_sub_func_uint64_t_u_u((0x325BB02EFEC6A82BL | 0x19E4C7109426B574L), (*l_590)))) != l_638[2][0]), l_582)), p_1485->g_4)), l_582))) | l_591))) > 0UL), p_1485->g_613)) >= 0x7BL), (**p_1485->g_387))) & l_614)) != (*p_1485->g_102)) <= 0UL), 0xFDL)) && (*l_590));
                if ((*l_590))
                    break;
            }
            else
            { /* block id: 282 */
                struct S0 l_644[2][8] = {{{0x3FF2L},{0x85F7L},{0x3FF2L},{0x3FF2L},{0x85F7L},{0x3FF2L},{0x3FF2L},{0x85F7L}},{{0x3FF2L},{0x85F7L},{0x3FF2L},{0x3FF2L},{0x85F7L},{0x3FF2L},{0x3FF2L},{0x85F7L}}};
                int32_t *l_653[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                for (l_614 = 0; (l_614 <= 7); l_614 += 1)
                { /* block id: 285 */
                    int32_t *l_640 = &p_1485->g_5;
                    struct S0 l_642 = {0xEB17L};
                    struct S0 *l_643[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_643[i] = &l_642;
                    for (l_591 = 0; (l_591 <= 8); l_591 += 1)
                    { /* block id: 288 */
                        int i;
                        (*p_1485->g_102) |= p_1485->g_53[l_614];
                        return p_1485->g_639;
                    }
                    l_641 &= ((void*)0 == l_640);
                    l_645 = (l_644[0][6] = l_642);
                }
                p_1485->g_654 |= ((((*p_1485->g_102) = (*p_1485->g_52)) <= (safe_add_func_int32_t_s_s(((p_1485->g_652 ^= ((safe_rshift_func_int16_t_s_s(((*p_42) && ((*p_1485->g_639) < (0x66AAAF8EL < l_591))), 14)) != (l_645.f0 && (((*l_590) , (l_644[1][3] , (l_641 == 0xDE1CEB61L))) , 0x41L)))) , l_644[0][6].f0), 0x4B330625L))) && (*l_590));
            }
        }
        return l_655;
    }
    for (l_641 = (-29); (l_641 < 0); l_641++)
    { /* block id: 305 */
        int64_t *l_669 = &p_1485->g_116;
        int32_t *l_670 = &p_1485->g_53[5];
        int32_t l_765 = 0x7FB4A54FL;
        int32_t l_768 = (-6L);
        int32_t l_770[10] = {6L,6L,6L,6L,6L,6L,6L,6L,6L,6L};
        uint32_t l_773[3];
        int i;
        for (i = 0; i < 3; i++)
            l_773[i] = 0UL;
        for (l_614 = 8; (l_614 < (-6)); --l_614)
        { /* block id: 308 */
            uint16_t ***l_682 = &p_1485->g_312;
            int32_t l_687 = 1L;
            for (p_1485->g_613 = 23; (p_1485->g_613 > 0); p_1485->g_613 = safe_sub_func_int32_t_s_s(p_1485->g_613, 1))
            { /* block id: 311 */
                uint8_t *l_668 = &p_1485->g_134;
                int32_t *l_671 = &p_1485->g_652;
                int8_t *l_672[6] = {&p_1485->g_93,&p_1485->g_93,&p_1485->g_93,&p_1485->g_93,&p_1485->g_93,&p_1485->g_93};
                int64_t l_673 = (-9L);
                int32_t **l_677 = &p_1485->g_102;
                uint32_t *l_685 = &p_1485->g_686[0][2];
                struct S0 *l_717 = &p_1485->g_716;
                int32_t *l_757 = &l_687;
                int32_t *l_758 = &p_1485->g_53[5];
                int32_t *l_759 = &l_687;
                int32_t *l_760 = &p_1485->g_99;
                int32_t *l_761 = &p_1485->g_402;
                int32_t *l_762 = (void*)0;
                int32_t *l_763 = (void*)0;
                int32_t *l_764[7] = {&p_1485->g_53[4],&p_1485->g_53[5],&p_1485->g_53[4],&p_1485->g_53[4],&p_1485->g_53[5],&p_1485->g_53[4],&p_1485->g_53[4]};
                int16_t l_772 = 0x6EC6L;
                int i;
                (*l_670) &= ((safe_lshift_func_uint8_t_u_u(p_1485->g_652, 0)) == ((p_1485->g_93 |= (((safe_mul_func_uint8_t_u_u(((((*l_668) |= 0x39L) != ((l_669 != ((*l_622) = (void*)0)) >= (l_673 = (l_670 == l_671)))) && (l_674 = 0x34L)), p_1485->g_477)) || (((**p_1485->g_387) ^= (safe_add_func_uint8_t_u_u(5UL, 0x02L))) | 65535UL)) , (*l_671))) == (*l_671)));
                (*l_677) = &l_674;
                if (((((!(p_1485->g_99 != ((safe_add_func_int32_t_s_s(0x24CB0573L, ((**l_677) = (safe_mul_func_int8_t_s_s((p_1485->g_529[3][1] , ((*p_1485->g_385) == l_682)), (*l_670)))))) , (0x5E33L && 1L)))) , ((~((((*l_685) &= ((safe_add_func_int16_t_s_s(0L, (*p_1485->g_639))) & l_674)) , 18446744073709551609UL) < 0x3EF6882FA7A63ABEL)) , (**l_677))) & 0x395245E6L) , l_687))
                { /* block id: 322 */
                    uint64_t l_690 = 0x87A60921E4BE0663L;
                    struct S0 *l_713 = &l_645;
                    struct S0 **l_714[3];
                    uint32_t *l_719 = &p_1485->g_128;
                    int32_t *l_720 = &l_687;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_714[i] = (void*)0;
                    l_687 = (safe_div_func_int8_t_s_s(p_1485->g_53[5], l_690));
                    if ((*l_671))
                        break;
                    (*l_720) &= ((((safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(0x7C46867FA648F9ABL)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((*p_1485->g_550) , ((((*l_719) &= (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((*l_670), ((((safe_rshift_func_int16_t_s_s((((p_1485->g_715 = (((safe_lshift_func_int8_t_s_s(l_674, 7)) ^ (+(safe_unary_minus_func_int64_t_s(((*l_669) = ((safe_sub_func_int64_t_s_s(0x4CDEFBE28BD4F872L, (**l_677))) , (1UL > (safe_lshift_func_int8_t_s_u(2L, 6))))))))) , l_713)) != l_717) && 18446744073709551613UL), l_718)) > (**l_677)) , 0xB3L) & (*l_671)))), 2UL))) == (*l_670)) && 0x167C92FA73A22468L)), 3)), p_1485->g_138)))) | p_1485->g_477), p_1485->g_93)) | 0L) < l_641) > l_718);
                    for (p_1485->g_716.f0 = 12; (p_1485->g_716.f0 < 35); p_1485->g_716.f0 = safe_add_func_int8_t_s_s(p_1485->g_716.f0, 4))
                    { /* block id: 331 */
                        if (l_614)
                            break;
                    }
                }
                else
                { /* block id: 334 */
                    int64_t l_748 = 0x4420F26F7963F2AEL;
                    for (l_687 = 0; (l_687 >= 26); ++l_687)
                    { /* block id: 337 */
                        uint32_t *l_734 = &p_1485->g_128;
                        int32_t l_735 = 3L;
                        uint32_t *l_746 = &p_1485->g_747;
                        uint64_t *l_750 = &p_1485->g_95;
                        uint64_t **l_749[1][8] = {{&l_750,&l_750,&l_750,&l_750,&l_750,&l_750,&l_750,&l_750}};
                        uint64_t ***l_751 = &l_749[0][1];
                        int i, j;
                        (*p_1485->g_102) = (safe_mod_func_uint64_t_u_u(((((*l_734) = ((((void*)0 != p_1485->g_729) || (**l_677)) | (p_1485->g_732 != (void*)0))) | ((*p_1485->g_639) < (((l_735 & (safe_lshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_670) , (safe_div_func_uint32_t_u_u(((*l_746) &= (safe_mul_func_int16_t_s_s(0x1977L, (*l_670)))), 1L))), l_674)), 4294967294UL)) > l_748) < 0L), l_687))) <= l_735) >= 248UL))) || l_718), 1L));
                        (**l_677) |= ((((*l_751) = l_749[0][7]) != (((void*)0 == &p_1485->g_729) , &p_1485->g_730)) == ((**p_1485->g_117) != (p_1485->g_753 = (p_1485->g_752[3][0][4] = (**p_1485->g_363)))));
                    }
                    for (p_1485->g_716.f0 = 29; (p_1485->g_716.f0 == 9); p_1485->g_716.f0 = safe_sub_func_int32_t_s_s(p_1485->g_716.f0, 1))
                    { /* block id: 348 */
                        struct S0 *l_756 = &l_645;
                        (*l_756) = (*l_717);
                    }
                }
                --l_773[0];
            }
            return &p_1485->g_305;
        }
        if (p_1485->g_654)
            goto lbl_776;
    }
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_52 p_1485->g_53 p_1485->g_25
 * writes: p_1485->g_25 p_1485->g_53
 */
uint16_t * func_43(int32_t  p_44, int8_t  p_45, struct S2 * p_1485)
{ /* block id: 11 */
    uint16_t *l_46 = &p_1485->g_25;
    int32_t l_49[5];
    uint16_t **l_51 = &l_46;
    uint16_t ***l_50 = &l_51;
    uint32_t l_110 = 4294967293UL;
    int64_t ***l_493 = &p_1485->g_118;
    int32_t **l_496 = &p_1485->g_102;
    int64_t ***l_498 = &p_1485->g_118;
    uint64_t *l_555 = &p_1485->g_95;
    uint64_t **l_554 = &l_555;
    uint16_t *l_579 = &p_1485->g_25;
    int i;
    for (i = 0; i < 5; i++)
        l_49[i] = 0x20B45845L;
    (*p_1485->g_52) |= (((*l_46) = 1UL) || (safe_lshift_func_int16_t_s_u(l_49[3], (((*l_50) = (void*)0) != &p_1485->g_24[1][1]))));
    for (p_1485->g_25 = (-3); (p_1485->g_25 <= 45); p_1485->g_25 = safe_add_func_uint16_t_u_u(p_1485->g_25, 5))
    { /* block id: 17 */
        uint32_t l_71 = 4294967294UL;
        uint16_t *l_111 = (void*)0;
        int64_t *l_494 = &p_1485->g_116;
        int32_t **l_495 = &p_1485->g_102;
        int32_t ***l_497 = &p_1485->g_234;
        int8_t l_510 = 0x12L;
        uint32_t ***l_522 = &p_1485->g_141;
        (1 + 1);
    }
    return l_579;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_25 p_1485->g_138
 * writes:
 */
uint16_t  func_58(uint16_t * p_59, uint32_t  p_60, struct S2 * p_1485)
{ /* block id: 51 */
    uint32_t ***l_157[5] = {&p_1485->g_141,&p_1485->g_141,&p_1485->g_141,&p_1485->g_141,&p_1485->g_141};
    int8_t l_162[2][10][8] = {{{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L}},{{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L},{1L,0x56L,(-7L),(-6L),4L,1L,(-7L),1L}}};
    int8_t l_169 = 1L;
    int32_t l_176[7];
    int32_t l_177[8][1] = {{0x33545FE6L},{0x33545FE6L},{0x33545FE6L},{0x33545FE6L},{0x33545FE6L},{0x33545FE6L},{0x33545FE6L},{0x33545FE6L}};
    uint16_t *l_178 = &p_1485->g_138;
    uint16_t ***l_182 = (void*)0;
    uint32_t l_189 = 1UL;
    struct S0 l_246 = {65535UL};
    uint32_t l_274[4];
    int64_t *l_285 = &p_1485->g_116;
    int32_t ***l_286 = &p_1485->g_234;
    int32_t l_287 = 0x1838199DL;
    int16_t l_288 = 0x637FL;
    int16_t l_308 = 0x173DL;
    uint32_t l_313 = 0UL;
    int64_t ***l_362 = &p_1485->g_118;
    int8_t l_369 = 0x42L;
    uint8_t l_382 = 0UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_176[i] = (-9L);
    for (i = 0; i < 4; i++)
        l_274[i] = 0UL;
    return (*p_59);
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_117 p_1485->g_116 p_1485->g_25 p_1485->g_128 p_1485->g_5 p_1485->g_134 p_1485->g_93 p_1485->g_138 p_1485->g_53 p_1485->g_3 p_1485->g_102 p_1485->g_140
 * writes: p_1485->g_118 p_1485->g_116 p_1485->g_128 p_1485->g_134 p_1485->g_93 p_1485->g_138 p_1485->g_53 p_1485->g_99 p_1485->g_141
 */
uint16_t * func_61(uint16_t *** p_62, uint32_t  p_63, uint32_t  p_64, uint16_t * p_65, struct S2 * p_1485)
{ /* block id: 29 */
    int32_t *l_122 = &p_1485->g_53[2];
    int32_t **l_123 = &l_122;
    uint32_t *l_126 = (void*)0;
    uint32_t *l_127 = &p_1485->g_128;
    int64_t *l_131 = &p_1485->g_116;
    int32_t l_132[10] = {0x5CB736C1L,0x30491E1CL,0x09366CA3L,0x30491E1CL,0x5CB736C1L,0x5CB736C1L,0x30491E1CL,0x09366CA3L,0x30491E1CL,0x5CB736C1L};
    uint8_t *l_133 = &p_1485->g_134;
    int8_t *l_135 = (void*)0;
    int8_t *l_136 = (void*)0;
    int8_t *l_137 = &p_1485->g_93;
    int32_t *l_139 = &p_1485->g_5;
    int32_t *l_143 = &p_1485->g_53[5];
    int32_t *l_144 = &p_1485->g_53[0];
    int32_t *l_145 = &l_132[8];
    int32_t *l_146 = &l_132[5];
    int32_t *l_147 = &l_132[2];
    int32_t *l_148[8][5] = {{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]},{&l_132[2],&l_132[4],&p_1485->g_53[5],&p_1485->g_53[5],&l_132[4]}};
    uint64_t l_149 = 3UL;
    uint16_t *l_152 = &p_1485->g_138;
    int i, j;
    for (p_64 = 0; (p_64 == 22); p_64 = safe_add_func_uint64_t_u_u(p_64, 1))
    { /* block id: 32 */
        int64_t *l_115 = &p_1485->g_116;
        int64_t **l_114 = &l_115;
        (*p_1485->g_117) = l_114;
        for (p_1485->g_116 = 0; (p_1485->g_116 < (-18)); --p_1485->g_116)
        { /* block id: 36 */
            return &p_1485->g_25;
        }
    }
    (*p_1485->g_102) = (((((p_1485->g_25 && ((((*l_123) = l_122) == (((p_1485->g_138 &= ((*l_137) &= ((safe_lshift_func_uint8_t_u_u(((*l_133) &= (((((void*)0 != &p_1485->g_25) <= ((p_63 = ((*l_127) ^= p_64)) && 0x30BF87F3L)) != (safe_mod_func_int16_t_s_s((p_1485->g_5 ^ (((*l_131) = p_64) ^ 5L)), p_1485->g_5))) < l_132[2])), l_132[2])) || p_64))) > p_64) , l_139)) , p_1485->g_116)) == p_1485->g_53[7]) == p_64) > p_64) != p_1485->g_3);
    (*p_1485->g_140) = &l_126;
    l_149--;
    return l_152;
}


/* ------------------------------------------ */
/* 
 * reads : p_1485->g_3 p_1485->g_53 p_1485->g_5 p_1485->g_99
 * writes: p_1485->g_93 p_1485->g_95 p_1485->g_99 p_1485->g_102
 */
uint16_t *** func_66(int64_t  p_67, uint16_t *** p_68, int32_t  p_69, int8_t  p_70, struct S2 * p_1485)
{ /* block id: 18 */
    int64_t l_74 = 0L;
    uint16_t ***l_104 = (void*)0;
    for (p_67 = 0; (p_67 < (-5)); p_67 = safe_sub_func_int16_t_s_s(p_67, 1))
    { /* block id: 21 */
        int32_t l_79 = 0x6A916A8EL;
        int8_t *l_92 = &p_1485->g_93;
        uint64_t *l_94 = &p_1485->g_95;
        int64_t *l_96 = &l_74;
        int32_t *l_97 = (void*)0;
        int32_t *l_98 = &p_1485->g_99;
        int32_t **l_103 = &p_1485->g_102;
        (*l_98) |= ((l_74 , (p_69 | (p_1485->g_3 | (((0x291F101FBECDB595L != ((*l_96) = (((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_79, (((safe_sub_func_int32_t_s_s((~((~(safe_div_func_int8_t_s_s((((((*l_94) = (((*l_92) = ((0x7CAF8BA4L > (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_1485->g_53[5], 5)), l_74))) && (safe_add_func_int64_t_s_s(l_74, l_74)))) >= p_70)) < p_67) , p_67) ^ 0x3E583C6DL), p_67))) > 0UL)), 0x672E3E38L)) >= 4L) >= l_74))) == p_1485->g_5), 0x5012L)) <= l_79) , (-6L)))) == 0x3AA7A400L) , p_1485->g_53[4])))) <= (-1L));
        (*l_103) = &p_1485->g_53[5];
    }
    return l_104;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1486;
    struct S2* p_1485 = &c_1486;
    struct S2 c_1487 = {
        0x4B4C23AFL, // p_1485->g_3
        0x1865425AL, // p_1485->g_4
        (-1L), // p_1485->g_5
        0x29B3L, // p_1485->g_20
        65535UL, // p_1485->g_25
        {{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,&p_1485->g_25},{&p_1485->g_25,&p_1485->g_25,&p_1485->g_25,&p_1485->g_25}}, // p_1485->g_24
        {0x0A746C20L,0x0A746C20L,0x0A746C20L,0x0A746C20L,0x0A746C20L,0x0A746C20L,0x0A746C20L,0x0A746C20L}, // p_1485->g_53
        &p_1485->g_53[5], // p_1485->g_52
        0x59L, // p_1485->g_93
        0xB122005908CB2CC2L, // p_1485->g_95
        0x6E3D9849L, // p_1485->g_99
        (void*)0, // p_1485->g_100
        &p_1485->g_99, // p_1485->g_102
        {&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102,&p_1485->g_102}, // p_1485->g_101
        (-1L), // p_1485->g_116
        (void*)0, // p_1485->g_119
        &p_1485->g_119, // p_1485->g_118
        &p_1485->g_118, // p_1485->g_117
        4294967287UL, // p_1485->g_128
        0x17L, // p_1485->g_134
        65535UL, // p_1485->g_138
        {{&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,(void*)0,&p_1485->g_128},{&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,(void*)0,&p_1485->g_128},{&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,&p_1485->g_128,(void*)0,&p_1485->g_128}}, // p_1485->g_142
        &p_1485->g_142[0][1], // p_1485->g_141
        &p_1485->g_141, // p_1485->g_140
        {0UL,0UL,0UL,0UL,0UL}, // p_1485->g_188
        &p_1485->g_138, // p_1485->g_190
        (void*)0, // p_1485->g_234
        {&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234,&p_1485->g_234}, // p_1485->g_233
        {{1UL}}, // p_1485->g_284
        8UL, // p_1485->g_305
        (void*)0, // p_1485->g_312
        {{65533UL}}, // p_1485->g_348
        &p_1485->g_118, // p_1485->g_363
        &p_1485->g_190, // p_1485->g_387
        &p_1485->g_387, // p_1485->g_386
        &p_1485->g_386, // p_1485->g_385
        0L, // p_1485->g_402
        0UL, // p_1485->g_411
        {{0x8EB0L}}, // p_1485->g_446
        0x6A3EB751L, // p_1485->g_477
        {{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL},{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL},{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL},{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL},{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL},{0x706BL,0x5F3BL,5L,0x5F3BL,0x706BL,0x706BL,0x5F3BL}}, // p_1485->g_529
        {{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402},{&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_402,&p_1485->g_5,&p_1485->g_5,&p_1485->g_402}}, // p_1485->g_531
        &p_1485->g_446.f0, // p_1485->g_549
        &p_1485->g_348.f0, // p_1485->g_550
        0xB89209B1L, // p_1485->g_576
        &p_1485->g_402, // p_1485->g_578
        0x4AL, // p_1485->g_613
        &p_1485->g_138, // p_1485->g_639
        (-4L), // p_1485->g_652
        6L, // p_1485->g_654
        {{0x98230372L,0x98230372L,0x98230372L,0x98230372L,0x98230372L,0x98230372L}}, // p_1485->g_686
        {0x3305L}, // p_1485->g_716
        &p_1485->g_716, // p_1485->g_715
        1UL, // p_1485->g_731
        &p_1485->g_731, // p_1485->g_730
        &p_1485->g_730, // p_1485->g_729
        &p_1485->g_529[4][0], // p_1485->g_733
        &p_1485->g_733, // p_1485->g_732
        0UL, // p_1485->g_747
        {{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}},{{&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116,&p_1485->g_116}}}, // p_1485->g_752
        (void*)0, // p_1485->g_753
        {0xC9D4L}, // p_1485->g_804
        0x4DL, // p_1485->g_811
        &p_1485->g_811, // p_1485->g_810
        {{1UL}}, // p_1485->g_815
        {{0xD2C7L}}, // p_1485->g_930
        0UL, // p_1485->g_947
        {{0UL}}, // p_1485->g_957
        {{65535UL}}, // p_1485->g_960
        {9UL}, // p_1485->g_968
        {{1UL}}, // p_1485->g_979
        &p_1485->g_188[1], // p_1485->g_1080
        &p_1485->g_1080, // p_1485->g_1079
        0L, // p_1485->g_1147
        &p_1485->g_1147, // p_1485->g_1146
        &p_1485->g_1146, // p_1485->g_1145
        0xBEADL, // p_1485->g_1150
        {0L,0L}, // p_1485->g_1153
        {0x56D54B72L}, // p_1485->g_1235
        &p_1485->g_1153[0], // p_1485->g_1243
        &p_1485->g_715, // p_1485->g_1293
        0x62983936E5D3F07FL, // p_1485->g_1309
        0x960629130E8F4E9AL, // p_1485->g_1311
        &p_1485->g_102, // p_1485->g_1314
        &p_1485->g_1309, // p_1485->g_1321
        &p_1485->g_1321, // p_1485->g_1320
        {{{&p_1485->g_1320,&p_1485->g_1320,&p_1485->g_1320},{&p_1485->g_1320,&p_1485->g_1320,&p_1485->g_1320},{&p_1485->g_1320,&p_1485->g_1320,&p_1485->g_1320},{&p_1485->g_1320,&p_1485->g_1320,&p_1485->g_1320}}}, // p_1485->g_1319
        (void*)0, // p_1485->g_1322
        (void*)0, // p_1485->g_1323
        0UL, // p_1485->g_1365
        {{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}},{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}},{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}},{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}},{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}},{{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0},{&p_1485->g_1320,(void*)0,(void*)0,&p_1485->g_1320,(void*)0,&p_1485->g_1320,(void*)0,(void*)0}}}, // p_1485->g_1370
        {{4UL}}, // p_1485->g_1376
        0L, // p_1485->g_1445
        0UL, // p_1485->g_1482
    };
    c_1486 = c_1487;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1485);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1485->g_3, "p_1485->g_3", print_hash_value);
    transparent_crc(p_1485->g_4, "p_1485->g_4", print_hash_value);
    transparent_crc(p_1485->g_5, "p_1485->g_5", print_hash_value);
    transparent_crc(p_1485->g_20, "p_1485->g_20", print_hash_value);
    transparent_crc(p_1485->g_25, "p_1485->g_25", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1485->g_53[i], "p_1485->g_53[i]", print_hash_value);

    }
    transparent_crc(p_1485->g_93, "p_1485->g_93", print_hash_value);
    transparent_crc(p_1485->g_95, "p_1485->g_95", print_hash_value);
    transparent_crc(p_1485->g_99, "p_1485->g_99", print_hash_value);
    transparent_crc(p_1485->g_116, "p_1485->g_116", print_hash_value);
    transparent_crc(p_1485->g_128, "p_1485->g_128", print_hash_value);
    transparent_crc(p_1485->g_134, "p_1485->g_134", print_hash_value);
    transparent_crc(p_1485->g_138, "p_1485->g_138", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1485->g_188[i], "p_1485->g_188[i]", print_hash_value);

    }
    transparent_crc(p_1485->g_284.f0.f0, "p_1485->g_284.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_305, "p_1485->g_305", print_hash_value);
    transparent_crc(p_1485->g_348.f0.f0, "p_1485->g_348.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_402, "p_1485->g_402", print_hash_value);
    transparent_crc(p_1485->g_411, "p_1485->g_411", print_hash_value);
    transparent_crc(p_1485->g_446.f0.f0, "p_1485->g_446.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_477, "p_1485->g_477", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1485->g_529[i][j], "p_1485->g_529[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1485->g_576, "p_1485->g_576", print_hash_value);
    transparent_crc(p_1485->g_613, "p_1485->g_613", print_hash_value);
    transparent_crc(p_1485->g_652, "p_1485->g_652", print_hash_value);
    transparent_crc(p_1485->g_654, "p_1485->g_654", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1485->g_686[i][j], "p_1485->g_686[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1485->g_716.f0, "p_1485->g_716.f0", print_hash_value);
    transparent_crc(p_1485->g_731, "p_1485->g_731", print_hash_value);
    transparent_crc(p_1485->g_747, "p_1485->g_747", print_hash_value);
    transparent_crc(p_1485->g_804.f0, "p_1485->g_804.f0", print_hash_value);
    transparent_crc(p_1485->g_811, "p_1485->g_811", print_hash_value);
    transparent_crc(p_1485->g_815.f0.f0, "p_1485->g_815.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_930.f0.f0, "p_1485->g_930.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_947, "p_1485->g_947", print_hash_value);
    transparent_crc(p_1485->g_957.f0.f0, "p_1485->g_957.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_960.f0.f0, "p_1485->g_960.f0.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1485->g_968[i], "p_1485->g_968[i]", print_hash_value);

    }
    transparent_crc(p_1485->g_979.f0.f0, "p_1485->g_979.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_1147, "p_1485->g_1147", print_hash_value);
    transparent_crc(p_1485->g_1150, "p_1485->g_1150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1485->g_1153[i], "p_1485->g_1153[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1485->g_1235[i], "p_1485->g_1235[i]", print_hash_value);

    }
    transparent_crc(p_1485->g_1309, "p_1485->g_1309", print_hash_value);
    transparent_crc(p_1485->g_1311, "p_1485->g_1311", print_hash_value);
    transparent_crc(p_1485->g_1365, "p_1485->g_1365", print_hash_value);
    transparent_crc(p_1485->g_1376.f0.f0, "p_1485->g_1376.f0.f0", print_hash_value);
    transparent_crc(p_1485->g_1445, "p_1485->g_1445", print_hash_value);
    transparent_crc(p_1485->g_1482, "p_1485->g_1482", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
